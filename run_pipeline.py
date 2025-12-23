# Main script for running ACT pipeline

import sys
from pathlib import Path
import yaml
import time
import logging

# Import modules
from act_pipeline.kernel.converters.converter_params import convert_params
from act_pipeline.kernel.converters.converter_cal import convert_cal
from act_pipeline.kernel.loss import compute_loss
from act_pipeline.kernel.simulation.runner import run_mac_batch
from act_pipeline.kernel.optimization.saasbo import SaasboCalibrationOptimizer

def main():
	# Setup logging
	log_path = "run_pipeline.log"
	logging.basicConfig(
		level=logging.INFO,
		format='%(asctime)s %(levelname)s: %(message)s',
		handlers=[
			logging.StreamHandler(sys.stdout),
			logging.FileHandler(log_path, mode='w', encoding='utf-8')
		]
	)

	# --- Config ---
	config_path = Path(f"{Path(__file__).parent.parent}/config.yaml")
	with open(config_path, "r", encoding="utf-8") as f:
		config = yaml.safe_load(f)

	def get_or_set_config(section, key, default):
		if section not in config:
			config[section] = {}
		if key not in config[section]:
			config[section][key] = default
			with open(config_path, "w", encoding="utf-8") as f:
				yaml.safe_dump(config, f)
		return config[section][key]

	cal_path = Path(get_or_set_config("converter_params", "input_cal_path", "data/cal/IPSP74______1FHHSHHB01RHHPHHEHM1.cal"))
	rita_params_path = Path(get_or_set_config("converter_params", "rita_params_path", "data/json/SC2_RITA_params.json"))
	group_of_params = list(config["converter_params"].get("expected_group_of_params", {}).keys())
	input_cal_path = Path(get_or_set_config("converter_cal", "input_cal_path", str(cal_path)))
	output_cal_path = Path(get_or_set_config("converter_cal", "output_path", "data/cal/new_calibration.cal"))
	mac_exe = get_or_set_config("simulation", "mac_exe", "/path/to/mac.exe")
	bch_path = Path(get_or_set_config("simulation", "bch_path", "data/bch/pipeline_csh_list.bch"))
	workdir = Path(get_or_set_config("simulation", "workdir", "data/"))
	timeout_s = int(get_or_set_config("simulation", "timeout_s", 300))
	result_glob = get_or_set_config("simulation", "result_glob", "xlsx/*.xlsx")
	sheet_name = get_or_set_config("converter_results", "sheet_name", "Sheet1")

	# --- Step 1: Convert CAL to params ---
	t0 = time.time()
	logging.info("Step 1: Converting CAL to params...")
	logging.info(f"CAL file: {cal_path}")
	logging.info(f"Params spec file: {rita_params_path}")
	logging.info(f"Groups to extract: {group_of_params}")
	
	current_params = convert_params(cal_path, rita_params_path, group_of_params)
	t1 = time.time()
	logging.info(f"Step 1 done in {t1-t0:.2f} s.")
	
	if not current_params:
		logging.warning("No parameters extracted from CAL file!")
		logging.warning("This might indicate:")
		logging.warning("  - group_of_params doesn't match the structure in rita_params_path")
		logging.warning("  - convert_params is looking for the wrong parameter names")
		logging.warning("  - CAL file format is not being parsed correctly")
	else:
		logging.info(f"Successfully extracted {len(current_params)} parameters")
		logging.info(f"Sample parameters: {list(current_params.keys())[:10]}")

	# --- Step 2: Setup optimizer ---
	logging.info("Step 2: Setting up optimizer...")
	with open(rita_params_path, "r", encoding="utf-8") as f:
		param_specs = yaml.safe_load(f)
	
	logging.info(f"Loaded param specs, top-level keys: {list(param_specs.keys())[:10]}")
	
	# The param_specs has structure: {group: {param: {min, max}}}
	# We need to keep this structure for the optimizer
	# But we also need a flat dict for working with parameters
	flat_params = {}
	
	for group_name, group_content in param_specs.items():
		if isinstance(group_content, dict):
			for param_name, param_info in group_content.items():
				if isinstance(param_info, dict) and ('min' in param_info or 'max' in param_info or 'bounds' in param_info):
					flat_params[param_name] = param_info
	
	if not flat_params:
		logging.error("No parameters found in param_specs!")
		logging.error("The structure of the JSON file might be unexpected")
		raise ValueError("Could not extract parameter definitions from param_specs")
	
	logging.info(f"Extracted {len(flat_params)} parameter definitions from param_specs")
	logging.info(f"Sample param names: {list(flat_params.keys())[:10]}")
	
	# Initialize current_params if empty
	if not current_params:
		logging.warning("Initializing all parameters with default values since CAL extraction failed")
		current_params = {}
		
		for param_name, param_info in flat_params.items():
			if 'default' in param_info:
				current_params[param_name] = param_info['default']
			elif 'bounds' in param_info:
				bounds = param_info['bounds']
				current_params[param_name] = (bounds[0] + bounds[1]) / 2
			elif 'min' in param_info and 'max' in param_info:
				current_params[param_name] = (param_info['min'] + param_info['max']) / 2
			else:
				logging.warning(f"Cannot initialize {param_name}: no default/bounds/min/max")
				current_params[param_name] = 0.0  # Fallback
		
		logging.info(f"Initialized {len(current_params)} parameters with defaults")
	else:
		# Ensure all required params are present
		missing_params = set(flat_params.keys()) - set(current_params.keys())
		if missing_params:
			logging.warning(f"Adding {len(missing_params)} missing parameters with defaults")
			for param_name in missing_params:
				param_info = flat_params[param_name]
				if 'default' in param_info:
					current_params[param_name] = param_info['default']
				elif 'bounds' in param_info:
					bounds = param_info['bounds']
					current_params[param_name] = (bounds[0] + bounds[1]) / 2
				elif 'min' in param_info and 'max' in param_info:
					current_params[param_name] = (param_info['min'] + param_info['max']) / 2
				else:
					current_params[param_name] = 0.0
	
	# Initialize optimizer with the hierarchical structure (groups -> params)
	optimizer = SaasboCalibrationOptimizer(param_specs)
	t2 = time.time()
	logging.info(f"Step 2 done in {t2-t1:.2f} s.")

	# --- Step 3: Optimization loop ---
	n_iterations = 10
	logging.info(f"Step 3: Starting optimization loop for {n_iterations} iterations...")
	for i in range(n_iterations):
		iter_start = time.time()
		logging.info(f"Iteration {i+1}/{n_iterations}")
		
		# Suggest new params (or use current_params for first iteration)
		if i == 0:
			# Use current params for first iteration
			new_params = current_params
			logging.info("Using extracted/default parameters for first iteration")
		else:
			# Ask optimizer for new params
			new_params = optimizer.ask()
			logging.info("Using optimizer-suggested parameters")

		# Convert params to CAL format
		t_cal = time.time()
		convert_cal(output_cal_path, input_cal_path, new_params)
		t_cal_done = time.time()
		logging.info(f"  CAL conversion: {t_cal_done-t_cal:.2f} s")

		# Run simulation (external tool)
		t_sim = time.time()
		sim_result = run_mac_batch(mac_exe, bch_path, workdir, timeout_s, result_glob)
		t_sim_done = time.time()
		logging.info(f"  Simulation: {t_sim_done-t_sim:.2f} s")
		if sim_result.returncode != 0:
			logging.error(f"Simulation failed: {sim_result.stderr}")
			continue

		# Compute loss from simulation result
		t_loss = time.time()
		if sim_result.result_xlsx:
			loss = compute_loss(sim_result.result_xlsx, sheet_name)
		else:
			logging.warning("No result file found, skipping loss computation.")
			continue
		t_loss_done = time.time()
		logging.info(f"  Loss computation: {t_loss_done-t_loss:.2f} s")

		logging.info(f"  Loss: {loss}")
		optimizer.tell(new_params, loss)
		current_params = new_params
		iter_end = time.time()
		logging.info(f"Iteration {i+1} done in {iter_end-iter_start:.2f} s.")

	t3 = time.time()
	logging.info(f"Optimization finished in {t3-t2:.2f} s.")
	logging.info(f"Total pipeline time: {t3-t0:.2f} s.")

if __name__ == "__main__":
	main()