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
	params = convert_params(cal_path, rita_params_path, group_of_params)
	t1 = time.time()
	logging.info(f"Step 1 done in {t1-t0:.2f} s.")

	# --- Step 2: Setup optimizer ---
	logging.info("Step 2: Setting up optimizer...")
	with open(rita_params_path, "r", encoding="utf-8") as f:
		param_specs = yaml.safe_load(f)
	optimizer = SaasboCalibrationOptimizer(param_specs)
	t2 = time.time()
	logging.info(f"Step 2 done in {t2-t1:.2f} s.")

	# --- Step 3: Optimization loop ---
	n_iterations = 10
	logging.info(f"Step 3: Starting optimization loop for {n_iterations} iterations...")
	for i in range(n_iterations):
		iter_start = time.time()
		logging.info(f"Iteration {i+1}/{n_iterations}")
		# Suggest new params
		new_params = optimizer.ask()

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
		iter_end = time.time()
		logging.info(f"Iteration {i+1} done in {iter_end-iter_start:.2f} s.")

	t3 = time.time()
	logging.info(f"Optimization finished in {t3-t2:.2f} s.")
	logging.info(f"Total pipeline time: {t3-t0:.2f} s.")

if __name__ == "__main__":
	main()
