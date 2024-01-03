#!/usr/bin/env python3

import os
import subprocess
import json

TESTABLE = "_build/default/moment_of_reward/test.exe"
BENCHDIR = "moment_of_reward/benchmarks"
LOG_FILE = "results/log_moment_of_reward.json"

benchmarks = sorted(os.listdir(BENCHDIR))
stats = []
for bench in benchmarks:
    p = os.path.join(BENCHDIR, bench)
    print("Analyzing", p, "...")
    stat = {}
    stat["kleene"] = json.loads(subprocess.check_output([TESTABLE, 'a', p, '-d', '2', '-m', 'K', '-b']))
    # stat["newton_naive"] = json.loads(subprocess.check_output([TESTABLE, 'a', p, '-d', '2', '-m', 'NN', '-b']))
    stat["newton"] = json.loads(subprocess.check_output([TESTABLE, 'a', p, '-d', '2', '-m', 'N', '-b']))
    stats.append(stat)
with open(LOG_FILE, "w") as f:
    json.dump(stats, f)
