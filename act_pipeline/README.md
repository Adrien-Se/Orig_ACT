# ACT Pipeline (Python)

This repository is a modular pipeline to:
1) generate a new `.cal` from calibration parameters,
2) call SIM (MAC) in batch mode via `mac.exe "<file>.cal"`,
3) parse the resulting Excel "Global Result" file,
4) compute a loss (difference between obtained vs desired),
5) iterate with an optimizer (Bayesian optimization or a Torch surrogate model).

> The code is designed to be *adapted* to your exact Excel tables and cal parameter mapping.
