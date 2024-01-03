#!/usr/bin/env python3

import os
import subprocess
import json

TESTABLE = "_build/default/expectation_invariant/test.exe"
BENCHDIR = "expectation_invariant/benchmarks"
BENCHDIR2 = "expectation_invariant/benchmarks/pldi18"
LOG_FILE = "results/log_expectation_invariant.json"

benchmarks = []
benchmarks.extend(sorted([os.path.join(BENCHDIR2, p) for p in os.listdir(BENCHDIR2)]))
benchmarks.extend(sorted([os.path.join(BENCHDIR, p) for p in os.listdir(BENCHDIR) if os.path.isfile(os.path.join(BENCHDIR, p))]))
stats = []
for bench in benchmarks:
    print("Analyzing", bench, "...")
    stat = {}
    stat["name"] = os.path.splitext(os.path.split(bench)[1])[0]
    output = subprocess.check_output([TESTABLE, 'a', bench, '-b']).splitlines()
    stat["result"] = output[0].strip().decode()
    stat["newton"] = json.loads(output[1])
    stats.append(stat)
with open(LOG_FILE, "w") as f:
    json.dump(stats, f)
