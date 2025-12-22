from __future__ import annotations
from dataclasses import dataclass
from pathlib import Path
from typing import Optional
import subprocess
import glob
import time

@dataclass
class SimRunResult:
    returncode: int
    stdout: str
    stderr: str
    result_xlsx: Optional[Path]
    duration_s: float

def run_mac_batch(mac_exe: str, bch_path: Path, workdir: Path, timeout_s: int, result_glob: str) -> SimRunResult:
    '''
    Runs: mac.exe "<bch_path>"
    Assumes SIM writes an Excel result file somewhere under `workdir`.
    '''
    t0 = time.time()
    cmd = [mac_exe, str(bch_path)]
    proc = subprocess.run(
        cmd,
        cwd=str(workdir),
        capture_output=True,
        text=True,
        timeout=timeout_s,
        check=False,
    )
    duration = time.time() - t0

    # Find newest matching Excel output
    matches = list(Path(workdir).glob(result_glob))
    result = None
    if matches:
        matches.sort(key=lambda p: p.stat().st_mtime, reverse=True)
        result = matches[0]

    return SimRunResult(
        returncode=proc.returncode,
        stdout=proc.stdout,
        stderr=proc.stderr,
        result_xlsx=result,
        duration_s=duration,
    )
