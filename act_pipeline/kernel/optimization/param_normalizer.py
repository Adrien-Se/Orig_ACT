"""Module for normalizing and denormalizing parameter values."""

import numpy as np


class ParamNormalizer:
    """Class to normalize and denormalize parameter values based on their specifications."""
    def __init__(self, specs: dict[str, dict[str, dict[str, int]]]) -> None:
        """Create ParamNormalizer from a dictionary of parameter specifications."""
        self.__specs_validation(specs)
        self.__specs = specs

    def __specs_validation(self, specs: dict[str, dict[str, dict[str, int]]]) -> None:
        """Validate the type of parameter specifications."""
        if not isinstance(specs, dict):
            raise TypeError("Parameter specifications must be a dictionary.")
        for group_name, group in specs.items():
            if not isinstance(group, dict):
                raise TypeError(f"Group '{group_name}' must be a dictionary.")
            for param_name, param_info in group.items():
                if not isinstance(param_info, dict):
                    raise TypeError(f"Parameter '{param_name}' in group '{group_name}' must be a dictionary.")
                if 'min' not in param_info or 'max' not in param_info:
                    raise ValueError(f"Parameter '{param_name}' in group '{group_name}' must have 'min' and 'max' keys.")
                if not isinstance(param_info['min'], int) or not isinstance(param_info['max'], int):
                    raise TypeError(f"'min' and 'max' for parameter '{param_name}' in group '{group_name}' must be integers.")
                if param_info['min'] >= param_info['max']:
                    raise ValueError(f"'min' must be less than 'max' for parameter '{param_name}' in group '{group_name}'.")
    
    def __len__(self) -> int:
        """Return the total number of parameters."""
        return sum(len(group) for group in self.__specs.values())

    def normalize(self, params: dict[str, int]) -> np.ndarray:
        """Normalize parameter values to [0, 1] range."""
        x = []
        for group in self.__specs.values():
            for param_name, param_info in group.items():
                v = params[param_name]
                x.append((v - param_info['min']) / (param_info['max'] - param_info['min']))
        return np.array(x, dtype=np.float64)

    def __x_validation(self, x: np.ndarray) -> None:
        """Validate the input x for denormalization."""
        if not isinstance(x, np.ndarray):
            raise TypeError("Input x must be a numpy ndarray.")
        if x.ndim != 1:
            raise ValueError("Input x must be a 1-dimensional array.")
        expected_dim = sum(len(group) for group in self.__specs.values())
        if x.shape[0] != expected_dim:
            raise ValueError(f"Input x must have length {expected_dim}, but got {x.shape[0]}.")

    def denormalize(self, x: np.ndarray) -> dict[str, int]:
        """Denormalize parameter values from [0, 1] range back to original scale."""
        self.__x_validation(x)
        params = {}
        idx = 0
        for group in self.__specs.values():
            for param_name, param_info in group.items():
                v = x[idx]
                denorm_v = int(round(v * (param_info['max'] - param_info['min']) + param_info['min']))
                params[param_name] = denorm_v
                idx += 1
        return params
