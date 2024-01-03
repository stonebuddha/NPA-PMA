#!/usr/bin/env bash

mkdir -p results
mkdir -p results/expectation_invariant

echo "Benchmarking Bayesian-inference Analysis (Matrix-based) ..."
scripts/bench_bayesian_inference_mat.py

echo "Benchmarking Bayesian-inference Analysis (Algebraic-decision-diagram-based) ..."
scripts/bench_bayesian_inference_add.py

echo "Benchmarking Higher-moment Analysis of Accumulated Rewards ..."
scripts/bench_moment_of_reward.py

echo "Benchmarking Expectation-invariant Analysis ..."
scripts/bench_expectation_invariant.py

echo "Benchmarking Expectation-recurrence Analysis ..."
scripts/bench_expectation_recurrence.py
