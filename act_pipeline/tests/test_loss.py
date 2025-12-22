"""This is the test file for the loss module."""

from pathlib import Path
import yaml
from ..kernel.loss import compute_loss

CONFIG_PATH = Path("config.yaml")
with CONFIG_PATH.open("r", encoding="utf-8") as file:
    config = yaml.safe_load(file)

def test_compute_loss() -> None:
    """Test the compute_loss function."""
    loss_value = compute_loss(
        input_xlsx_path=Path(config['converter_results']['input_xlsx_path']),
        sheet_name=config['converter_results']['sheet_name']
    )
    assert isinstance(loss_value, float), "The computed loss should be a float."
    assert loss_value >= 0, "The computed loss should be non-negative."