"""This module contains the loss computation from the parsed """

import pandas as pd
import yaml
import numpy as np
from pathlib import Path
from act_pipeline.kernel.converters.converter_results import convert_results

# ----------------------------
# Configuration loading
# ----------------------------

CONFIG_PATH = Path("act_pipeline/config.yaml")
NF_REPLACEMENT_VALUE = -5.

pd.set_option('future.no_silent_downcasting', True)

def load_config(config_path: Path) -> Path:
    """Load Excel input path and sheet name from YAML config."""
    with open(config_path, 'r', encoding="utf-8") as file:
        config = yaml.safe_load(file)
    log_path = Path(config['loss_params']['log_path'])
    return log_path

# ----------------------------
# Core logic
# ----------------------------

def compute_errors(df: pd.DataFrame) -> np.ndarray:
    """Compute errors from the DataFrame.
    Here we define 2 errors as 
    - the difference between 'TTF Min' and 'Min' columns if 'Min' > 'TTF Min'
    - the difference between 'TTF Opt' and 'Nom' columns if 'Nom' > 'TTF Opt'
    - the difference between 'TTF Max' and 'Max' columns if 'Max' > 'TTF Max'
    """
    # get only the relevant columns and convert to numeric, replacing 'NF' with a high value
    local_df = df[['TTF Min', 'TTF Max', 'TTF Opt', 'Min', 'Nom', 'Max']].copy()
    local_df = local_df.replace('NF', NF_REPLACEMENT_VALUE)
    local_df = local_df.apply(pd.to_numeric)
    ttf_min = pd.to_numeric(local_df['TTF Min']).to_numpy()
    ttf_max = pd.to_numeric(local_df['TTF Max']).to_numpy()
    ttf_opt = pd.to_numeric(local_df['TTF Opt']).to_numpy()
    min_vals = pd.to_numeric(local_df['Min']).to_numpy()
    max_vals = pd.to_numeric(local_df['Max']).to_numpy()
    nom_vals = pd.to_numeric(local_df['Nom']).to_numpy()

    # errors are dimension 3 x N where N is the number of tests (rows in df)
    errors = np.zeros((3, len(local_df)))

    # if NaNs are present, return 0 errors
    if np.isnan(ttf_min).any() or np.isnan(ttf_max).any():
        return errors
    
    # if all values in any of 'TTF Min', 'TTF Max', or 'TTF Opt' are NF_REPLACEMENT_VALUE, return 0 errors
    for col_name in ['TTF Min', 'TTF Max', 'TTF Opt']:
        if np.all(local_df[col_name] == NF_REPLACEMENT_VALUE):
            return errors

    # Compute errors as before
    errors[0, :] = np.maximum(0, min_vals - ttf_min)
    errors[1, :] = np.maximum(0, max_vals - ttf_max)
    errors[2, :] = np.maximum(0, nom_vals - ttf_opt)
    return errors


def compute_loss(input_xlsx_path:Path, sheet_name: str, log_outputfile:bool=True) -> float:
    """Compute a dummy loss value based on converted results.
    The loss is defined as the mean squared of all errors in the results DataFrames.
    """
    log = "Starting loss computation."
    results = convert_results(input_xlsx_path=input_xlsx_path, sheet_name=sheet_name)
    total_loss = 0.0
    total_count = 0
    for prot_name, df in results.items():
        errors = compute_errors(df)
        log += f"\nProcessing protection {prot_name} with {errors.shape[1]} tests."
        total_loss += np.sum(errors ** 2)
        total_count += errors.size
        log += f" Current total loss: {total_loss}, total count: {total_count}."
        log += f" Errors details: {errors}."
    mean_loss = total_loss / total_count if total_count > 0 else 0.0
    log += f"\nFinal mean loss: {mean_loss}."
    if log_outputfile:
        log_path = load_config(CONFIG_PATH)
        with open(log_path, "w", encoding="utf-8") as log_file:
            log_file.write(log)
    return mean_loss
