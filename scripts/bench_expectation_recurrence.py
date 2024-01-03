#!/usr/bin/env python3

import os
import subprocess
import json

TESTABLE = "_build/default/expectation_recurrence/test.exe"
BENCHDIR = "expectation_recurrence/benchmarks"
BENCHDIR2 = "expectation_recurrence/benchmarks/oopsla22"
LOG_FILE = "results/log_expectation_recurrence.json"
POLAR = "../polar/polar.py"

benchmarks = []
benchmarks.extend(sorted(list(set([os.path.splitext(os.path.join(BENCHDIR2, p))[0] for p in os.listdir(BENCHDIR2)]))))
benchmarks.extend(sorted(list(set([os.path.splitext(os.path.join(BENCHDIR, p))[0] for p in os.listdir(BENCHDIR) if os.path.isfile(os.path.join(BENCHDIR, p))]))))
stats = []
for bench in benchmarks:
    print("Analyzing", bench, "...")
    bench_c = f"{bench}.c"
    bench_p = f"{bench}.prob"
    bench_cfg = f"{bench}.cfg"
    bench_name = os.path.split(bench)[1]
    bench_out = f"results/expectation_invariant/{bench_name}.out"
    stat = {}
    stat["name"] = bench_name
    try:
        stat["newton"] = json.loads(subprocess.check_output([TESTABLE, 'a', bench_c, '-b', bench_out], timeout=180.0))
    except:
        stat["newton"] = "T/O"
    with open(bench_cfg) as f:
        lines = f.readlines()
    args = [POLAR, bench_p, "--goals"]
    args.extend([l.strip() for l in lines if len(l.strip()) > 0])
    polar_output = subprocess.check_output(args)
    stat["polar"] = float(polar_output.splitlines()[-1].split(b':')[-1].split()[0])
    stats.append(stat)
with open(LOG_FILE, "w") as f:
    json.dump(stats, f)
