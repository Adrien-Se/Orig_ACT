"""This is the test file for the converter module."""

import json
from pathlib import Path
import yaml

from act_pipeline.kernel.converters.converter_results import convert_results
from act_pipeline.kernel.converters.converter_params import convert_params
from act_pipeline.kernel.converters.converter_cal import convert_cal


CONFIG_PATH = Path("act_pipeline/config.yaml")
with CONFIG_PATH.open("r", encoding="utf-8") as file:
    config = yaml.safe_load(file)

def test_convert_results() -> None:
    """Test the convert_results function."""
    
    results_dict_df = convert_results(
        input_xlsx_path=Path(config['converter_results']['input_xlsx_path']),
        sheet_name=config['converter_results']['sheet_name']
    )
    
    for prot_name, _ in results_dict_df.items():
        assert isinstance(prot_name, str), "Protocol names should be strings."
        prot_df = results_dict_df[prot_name]
        assert not prot_df.empty, "The pretensioner DataFrame should not be empty."
        for col_name in ['TTF Min', 'TTF Opt', 'TTF Max', 'Min', 'Nom', 'Max', '%NF', 'Gain Margin']:
            assert col_name in prot_df, f"Expected column '{col_name}' is missing in the {prot_name} DataFrame."


def test_convert_params() -> None:
    """Test the convert_params function."""
    
    calibration_params = convert_params(
        cal_path=Path(config['converter_params']['input_cal_path']),
        rita_params_path=Path(config['converter_params']['rita_params_path']),
        group_of_params=config['converter_params']['expected_group_of_params']['group1']
    )
    assert isinstance(calibration_params, dict), "The converted calibration parameters should be a dictionary."
    assert len(calibration_params) > 0, "The calibration parameters dictionary should not be empty."
    with open('act_pipeline/data/log/calibration_params.log', 'w', encoding='utf-8') as log_file:
        json.dump(calibration_params, log_file, indent=4)



def test_convert_cal() -> None:
    """Test the convert_cal function."""

    calibration_params = convert_params(
        cal_path=Path(config['converter_params']['input_cal_path']),
        rita_params_path=Path(config['converter_params']['rita_params_path']),
        group_of_params=config['converter_params']['expected_group_of_params']['group1']
    )
    # add one to each parameter value for testing
    new_param_values = {param: value + 1 for param, value in calibration_params.items()}
    convert_cal(
        output_path=Path(config['converter_cal']['output_path']),
        input_cal_path=Path(config['converter_cal']['input_cal_path']),
        new_param_values=new_param_values
    )
    # read back the converted cal file and check if the values have been updated
    new_cal_params = convert_params(
        cal_path=Path(config['converter_cal']['output_path']),
        rita_params_path=Path(config['converter_params']['rita_params_path']),
        group_of_params=config['converter_params']['expected_group_of_params']['group1']
    )
    for param, value in new_param_values.items():
        assert new_cal_params[param] == value, f"Parameter '{param}' was not updated correctly in the CAL file."
