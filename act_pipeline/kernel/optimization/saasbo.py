"""Bayesian optimizer (BoTorch + SAASBO) for calibration optimization."""

import torch
import numpy as np
from botorch.models import SingleTaskGP
from botorch.models.transforms import Normalize, Standardize
from botorch.fit import fit_gpytorch_mll
from botorch.acquisition import LogExpectedImprovement
from botorch.optim import optimize_acqf
from gpytorch.mlls import ExactMarginalLogLikelihood

from .param_normalizer import ParamNormalizer

class SaasboCalibrationOptimizer:
    """
    Bayesian optimizer using SAASBO for calibration parameter optimization.
    SAASBO: Sparse Axis-Aligned Subspace Bayesian Optimization.
    It suggests new parameter sets to evaluate based on past observations.
    """
    def __init__(
        self,
        param_specs: dict[str, dict[str, dict[str, int]]],
        device="cpu",
        n_initial_random: int = 20,
    ):
        self.__normalizer = ParamNormalizer(param_specs)
        self.__dim = len(self.__normalizer)
        self.__device = device

        self.__X: list[np.ndarray] = []  # normalized params
        self.__y: list[np.float64] = []  # log loss

        self.n_initial_random = n_initial_random
    
    @property
    def dim(self) -> int:
        """Return the dimensionality of the parameter space."""
        return self.__dim
    
    @property
    def X(self) -> list[np.ndarray]:
        """Return the list of normalized parameter sets evaluated so far."""
        return self.__X
    
    @property
    def y(self) -> list[np.float64]:
        """Return the list of log losses corresponding to evaluated parameter sets."""
        return self.__y

    def ask(self) -> dict[str, int]:
        """Suggest the next set of parameters to evaluate."""
        # Random warmup
        if len(self.__X) < self.n_initial_random:
            x = np.random.rand(self.__dim)
            return self.__normalizer.denormalize(x)

        # Convert data (avoid warning by stacking to numpy array first)
        X = torch.tensor(np.array(self.__X), device=self.__device)
        y = torch.tensor(np.array(self.__y), device=self.__device).unsqueeze(-1)

        # Gaussian Process model (SAAS-like via priors could be added later)
        model = SingleTaskGP(
            X,
            y,
            input_transform=Normalize(self.__dim),
            outcome_transform=Standardize(1),
        )
        mll = ExactMarginalLogLikelihood(model.likelihood, model)
        fit_gpytorch_mll(mll)

        # Acquisition function
        acq = LogExpectedImprovement(model, best_f=y.min())

        # Optimize acquisition
        bounds = torch.stack([
            torch.zeros(self.__dim, device=self.__device),
            torch.ones(self.__dim, device=self.__device),
        ])

        x_next, _ = optimize_acqf(
            acq_function=acq,
            bounds=bounds,
            q=1,
            num_restarts=10,
            raw_samples=256,
        )

        x_next = x_next.detach().cpu().numpy()[0]
        return self.__normalizer.denormalize(x_next)

    def tell(self, params: dict[str, int], loss: float) -> None:
        """Record the parameters and corresponding loss."""
        x = self.__normalizer.normalize(params)
        self.__X.append(x)

        # Log-transform loss # converted to torch.float32
        self.__y.append(np.log(loss, dtype=np.float64))
