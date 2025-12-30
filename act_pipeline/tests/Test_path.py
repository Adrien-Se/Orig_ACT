
from pathlib import Path
import yaml

# Get the config.yaml relative to this file's location
# Assumes config.yaml is in the project root (parent of act_pipeline/)
config_path = Path(__file__).parent.parent / "config.yaml"

print(f"Looking for config at: {config_path.resolve()}")
print(f"Config exists: {config_path.exists()}")

if config_path.exists():
    with open(config_path, "r", encoding="utf-8") as f:
        config = yaml.safe_load(f)

    mac_exe = Path(config["simulation"]["mac_exe"])
    print(f"\nMAC executable path: {mac_exe}")
    print(f"MAC exe exists: {mac_exe.exists()}")
    print(f"MAC exe full path: {mac_exe.resolve()}")
else:
    print("\nERROR: config.yaml not found!")
    print(f"Current working directory: {Path.cwd()}")
    print(f"This file is at: {Path(__file__).resolve()}")