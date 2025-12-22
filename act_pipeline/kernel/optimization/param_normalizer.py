"""Module for normalizing and denormalizing parameter values."""

import numpy as np


class ParamNormalizer:
    """Class to normalize and denormalize parameter values based on their specifications."""
    def __init__(self, specs: dict[str, dict[str, dict[str, int]]]) -> None:
        """Create ParamNormalizer from a dictionary of parameter specifications."""
        self.__specs = specs

    def normalize(self, params: dict[str, int]) -> np.ndarray:
        """Normalize parameter values to [0, 1] range."""
        x = []
        for group in self.__specs.values():
            for param_name, param_info in group.items():
                v = params[param_name]
                x.append((v - param_info['min']) / (param_info['max'] - param_info['min']))
        return np.array(x, dtype=np.float32)

    def denormalize(self, x: np.ndarray) -> dict[str, int]:
        """Denormalize parameter values from [0, 1] range back to original scale."""
        params = {}
        idx = 0
        for group in self.__specs.values():
            for param_name, param_info in group.items():
                v = x[idx]
                denorm_v = int(round(v * (param_info['max'] - param_info['min']) + param_info['min']))
                params[param_name] = denorm_v
                idx += 1
        return params
