#!/usr/bin/env python3

import os
import subprocess
import json

TESTABLE = "_build/default/bayesian_inference_mat/test.exe"
BENCHDIR = "bayesian_inference_mat/benchmarks"
LOG_FILE = "results/log_bayesian_inference_mat.json"

benchmarks = sorted(os.listdir(BENCHDIR))
stats = []
for bench in benchmarks:
    p = os.path.join(BENCHDIR, bench)
    print("Analyzing", p, "...")
    stat = {}
    stat["kleene"] = json.loads(subprocess.check_output([TESTABLE, 'a', p, '-m', 'K', '-b']))
    # stat["newton_naive"] = json.loads(subprocess.check_output([TESTABLE, 'a', p, '-m', 'NN', '-b']))
    stat["newton"] = json.loads(subprocess.check_output([TESTABLE, 'a', p, '-m', 'N', '-b']))
    stats.append(stat)
with open(LOG_FILE, "w") as f:
    json.dump(stats, f)
