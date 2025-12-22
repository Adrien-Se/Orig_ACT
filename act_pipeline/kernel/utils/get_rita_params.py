# Code to convert RITA parameters from configuration file to a dictionary and save as JSON

NAME_CFG_FILE = 'act_pipeline/data/cfg/SC2_RITA_Calibration.cfg'

with open(NAME_CFG_FILE, 'r', encoding='latin1') as file:
    config = file.read()

# save everything under /RITA in a dictionnary

def parse_RITA(input_str: str) -> dict[str, dict[str, dict[str, int]]]:
    """Parse the RITA section of the configuration file."""
    rita_params = {}
    group_params:dict[str, dict[str, int]] = {}
    is_rita_section = False
    is_parameter_section = False
    will_be_group_name = False
    group_name:str = ""
    param_name, param_min, param_max = None, None, None
    for line in input_str.splitlines():
        line = line.strip()
        if '/RITA' in line:
            is_rita_section = True
            will_be_group_name = True
            continue
        if '\\RITA' in line:
            # save last group
            if group_name and group_params:
                rita_params[group_name] = group_params
            break
        if is_rita_section:
            if will_be_group_name:
                group_name = line.strip('/').strip()
                will_be_group_name = False
                continue
            if f'\\{group_name}' in line:
                will_be_group_name = True
                rita_params[group_name] = group_params
                group_params = {}
                continue
            if '/Parameter' in line:
                param_name, param_min, param_max = None, None, None
                is_parameter_section = True
                continue
            if is_parameter_section:
                if 'Eeprom Name' in line:
                    param_name = line.split(':')[1].strip()
                    continue
                if 'Minimum Value' in line:
                    param_min = line.split(':')[1].strip()
                    continue
                if 'Maximum Value' in line:
                    param_max = line.split(':')[1].strip()
                    continue
            if '\\Parameter' in line:
                if param_name:
                    if not(param_min and param_max):
                        raise ValueError(f"Parameter {param_name} is missing min or max value.")
                    group_params[param_name] = {
                        'min': int(param_min),
                        'max': int(param_max)
                    }
                is_parameter_section = False
                continue
    
    return rita_params
    
dict_params = parse_RITA(config)

# save dict_params to json file
import json
with open('act_pipeline/data/json/rita_params.json', 'w', encoding='utf-8') as json_file:
    json.dump(dict_params, json_file, indent=4)
