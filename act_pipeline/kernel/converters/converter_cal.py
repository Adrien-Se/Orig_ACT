"""Module to convert a new parameterization to CAL format."""

from pathlib import Path

# ----------------------------
# Core logic
# ----------------------------

def read_cal_file(cal_path: Path) -> str:
    """Read the CAL file and return its content."""
    with open(cal_path, 'r', encoding='utf-8') as file:
        cal_str = file.read()
    return cal_str

def convert_cal(output_path: Path, input_cal_path: Path, new_param_values: dict[str, int]) -> None:
    """
    Convert the new parameterization to CAL format and save to output path.
    The new_param_values dictionary contains parameter names as keys and their
    corresponding integer values.
    """
    cal_str = read_cal_file(input_cal_path)
    cal_lines = cal_str.splitlines()
    
    param_names_left = list(new_param_values.keys())
        
    for i, line in enumerate(cal_lines):
        # the replace one line before the 'Converted Value:{old_value}' and two lines after, the 'Raw Value:{old_raw_value}'
        
        if 'Name:' in line:
            param_name = line.split('Name:')[1].strip()
            if param_name in param_names_left:
                param_value = new_param_values[param_name]
                param_names_left.remove(param_name)
                # replace only the things after the ':'
                cal_lines[i - 1] = cal_lines[i - 1].split('Converted Value:')[0] + f'Converted Value:{param_value}'
                cal_lines[i + 2] = cal_lines[i + 2].split('Raw Value:')[0] + f'Raw Value:{param_value}'
                if not param_names_left:
                    break

    new_cal_str = '\n'.join(cal_lines)
    with open(output_path, 'w', encoding='utf-8') as file:
        file.write(new_cal_str)
