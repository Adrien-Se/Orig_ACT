"""
Module to convert test results stored in an Excel file
into a dictionary of Pandas DataFrames, one per protection.
"""

from pathlib import Path
from typing import Dict
import pandas as pd

# ----------------------------
# Core logic
# ----------------------------

def convert_results(input_xlsx_path: Path, sheet_name: str) -> Dict[str, pd.DataFrame]:
    """
    Parse the results Excel file and return a dictionary of DataFrames.

    Each key is a protection name, and each value is a DataFrame indexed
    by 'Test Reference' containing the corresponding test results.
    """
    # Constants
    metadata_columns = 6
    protection_block_size = 8
    header_offset_rows = 14
    test_reference_column = 1
    
    # Read Excel
    df = pd.read_excel(input_xlsx_path, sheet_name=sheet_name)

    # Remove metadata rows above the actual table
    df = df.iloc[header_offset_rows:].reset_index(drop=True)

    # Set the first remaining row as header
    df.columns = df.iloc[0]
    df = df.iloc[1:]

    # Extract test references (used as index)
    test_references = (
        df.iloc[1:, test_reference_column]
        .astype(str)
        .dropna()
    )

    # Identify protection columns
    protection_columns = df.columns[metadata_columns:]
    protection_names = protection_columns[::protection_block_size]

    protections: Dict[str, pd.DataFrame] = {}

    for protection_name in protection_names:
        start_col = df.columns.get_loc(protection_name)
        end_col = start_col + protection_block_size

        protection_df = df.iloc[:, start_col:end_col]

        # First row contains headers for this protection block
        protection_df.columns = protection_df.iloc[0]
        protection_df = protection_df.iloc[1:]

        # Index by Test Reference
        protection_df.index = test_references.values

        protections[protection_name] = protection_df

    return protections
