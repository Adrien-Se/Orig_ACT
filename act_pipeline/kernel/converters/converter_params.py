"""Module to convert cal data to a Calibration Parameters Dictionary."""

import json
from pathlib import Path

# ----------------------------
# Core logic
# ----------------------------

def extract_expected_params(rita_params_path: Path, group_of_params: list[str]) -> list[str]:
    """Extract expected parameters from RITA params JSON file."""
    with open(rita_params_path, 'r', encoding='utf-8') as rita_file:
        rita_params:dict[str, dict[str, dict[str, int]]] = json.load(rita_file)

    expected_params = []
    for group_name, params in rita_params.items():
        if group_name in group_of_params:
            for param_name, _ in params.items():
                expected_params.append(param_name)
    return expected_params


def convert_params(cal_path: Path, rita_params_path: Path, group_of_params: list[str]) -> dict[str, int]:
    """
    Convert the cal file and return a Calibration Parameters Dictionary.
    All parameters in the cal file that are also in the expected parameters from the RITA params json
    are included in the output dictionary with their raw integer values.
    """
    calibration_params: dict[str, int] = {}

    # Initialize state variables
    is_parameter_section = False
    current_name, current_value = None, None

    expected_params = extract_expected_params(rita_params_path, group_of_params)

    with open(cal_path, 'r', encoding='utf-8') as file:
        for line in file:
            if '/Parameter' in line: # Start of a new parameter
                is_parameter_section = True
                current_name, current_value = None, None
                continue
            if '\\Parameter' in line: # End of a parameter
                is_parameter_section = False
                if current_name in expected_params:
                    if current_name and current_value:
                        calibration_params[current_name] = current_value
                continue
            if is_parameter_section:
                if 'Name:' in line:
                    current_name = line.split(':')[1].strip()
                elif 'Raw Value:' in line:
                    current_value = int(line.split(':')[1].strip())

    return calibration_params
