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


def log_params(params: dict[str, int], iteration:int, log_params_path: Path) -> None:
	"""Format parameters dictionary into a string for logging."""
	param_lines = [f"{key}: {value}" for key, value in params.items()]
	log_str = "\n".join(param_lines)
	log_params_path = Path(f"{log_params_path}_iteration_{iteration}.log")
	with open(log_params_path, "a", encoding="utf-8") as f:
		f.write(log_str + "\n")


def main():
	"""Main function to run the ACT pipeline."""

	#%% --- Config ---
	config_path = Path(f"{Path(__file__).parent.parent}/config.yaml")
	with open(config_path, "r", encoding="utf-8") as f:
		config = yaml.safe_load(f)

	def get_config(section, key):
		if section not in config:
			config[section] = {}
		if key not in config[section]:
			raise KeyError(f"Missing config key: {section}.{key}")
		return config[section][key]

	cal_path = Path(get_config("cal", "input_cal_path"))
	rita_params_path = Path(get_config("converter_params", "rita_params_path"))
	group_of_params = list(config["converter_params"].get("expected_group_of_params").keys())
	output_cal_path = Path(get_config("converter_cal", "output_path"))
	mac_exe = get_config("simulation", "mac_exe")
	bch_path = Path(get_config("simulation", "bch_path"))
	workdir = Path(get_config("simulation", "workdir"))
	timeout_s = int(get_config("simulation", "timeout_s"))
	result_glob = get_config("simulation", "result_glob")
	sheet_name = get_config("converter_results", "sheet_name")
	log_params_path = get_config("logging", "log_params_path")
	log_path = get_config("logging", "log_path")
	log_path = Path(f"{log_path}_{time.strftime("%Y%m%d-%H%M%S")}.log")

	#%% --- Setup logging ---
	logging.basicConfig(
		level=logging.INFO,
		format='%(asctime)s %(levelname)s: %(message)s',
		handlers=[
			logging.StreamHandler(sys.stdout),
			logging.FileHandler(log_path, mode='w', encoding='utf-8')
		]
	)

	# --- Step 1: Convert CAL to params ---
	t0 = time.time()
	logging.info("Step 1: Converting CAL to params...")
	current_params = convert_params(cal_path, rita_params_path, group_of_params)
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
		try:
			iter_start = time.time()
			logging.info(f"Iteration {i+1}/{n_iterations}")
			
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

			# Update optimizer with observed loss
			logging.info(f"  Loss: {loss}")
			optimizer.tell(current_params, loss)

			# Suggest new params
			current_params = optimizer.ask()

			# Convert params to CAL format
			t_cal = time.time()
			convert_cal(output_cal_path, cal_path, current_params)
			t_cal_done = time.time()
			logging.info(f"  CAL conversion: {t_cal_done-t_cal:.2f} s")

			# Log parameters
			log_params(current_params, i+1, log_params_path)

			iter_end = time.time()
			logging.info(f"Iteration {i+1} done in {iter_end-iter_start:.2f} s.")
		except KeyboardInterrupt:
			logging.info("Optimization interrupted by user.")
			break

	t3 = time.time()
	logging.info(f"Optimization finished in {t3-t2:.2f} s.")
	logging.info(f"Total pipeline time: {t3-t0:.2f} s.")

if __name__ == "__main__":
	main()
