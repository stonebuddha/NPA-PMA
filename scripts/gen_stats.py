#!/usr/bin/env python3

import matplotlib.pyplot as plt
import numpy as np
import seaborn as sns
import json
from tabulate import tabulate
import warnings

warnings.filterwarnings("ignore", "use_inf_as_na")

sns.set_theme(style="whitegrid")
import matplotlib as mpl
mpl.rcParams['figure.dpi'] = 300

def geo_mean_overflow(iterable):
    return np.exp(np.log(iterable).mean())

def compute_speed_ups(stats, x='kleene', y='newton'):
    n = len(stats)
    speedups = []
    for stat in stats:
        speedups.append(stat[x]['solve_time'] / stat[y]['solve_time'])
    return geo_mean_overflow(np.array(speedups))

def compute_mean_iters(stats):
    n = len(stats)
    res = {'kleene': 0, 'newton': 0}
    for stat in stats:
        for k in stat:
            res[k] += stat[k]['solve_iters']
    for k in res:
        res[k] /= n
    return res

def compute_time_per_iter(stats, x='newton'):
    total_solve_time = sum([stat[x]['solve_time'] for stat in stats])
    total_solve_iters = sum([stat[x]['solve_iters'] for stat in stats])
    return total_solve_time, total_solve_iters, total_solve_time / total_solve_iters

def plot_time_scatter(stats, figname, x='kleene', xtitle='Kleene', y='newton', ytitle='Newton'):
    n = len(stats)
    data = []
    for stat in stats:
        data.append([stat[x]['solve_time'], stat[y]['solve_time']])
    data = np.array(data)
    x = data[:,0]
    y = data[:,1]
    sns.scatterplot(x=x, y=y, marker='X', color='b')
    plt.xscale('log')
    plt.yscale('log')
    xmin = min(x.min(), y.min())
    xmax = max(x.max(), y.max())
    plt.xlim([xmin,xmax])
    plt.ylim([xmin,xmax])
    plt.xlabel(xtitle)
    plt.ylabel(ytitle)
    ax = plt.gca()
    ax.set_aspect('equal', adjustable='box')
    sp = np.linspace(xmin, xmax, 2)
    sns.lineplot(x=sp, y=sp, color='k', label='$y=x$', linewidth=1)
    sns.lineplot(x=sp, y=sp*2, color='k', linestyle='dotted', label="$y=2x$", linewidth=1)
    sns.lineplot(x=sp, y=sp/2, color='k', linestyle='--', label="$y=x/2$", linewidth=1)
    plt.savefig(figname)

if __name__ == "__main__":
    with open("results/log_bayesian_inference_mat.json") as f:
        bayesian_inference_mat_stats = json.load(f)
        print("Bayesian-inference Analysis (Matrix):")
        print("    average iters:", compute_mean_iters(bayesian_inference_mat_stats))
        print("    speedup in runtime:", compute_speed_ups(bayesian_inference_mat_stats))
        plot_time_scatter(bayesian_inference_mat_stats, "results/bayesian_inference_mat.png")
        print("    log-log runtime plot saved at results/bayesian_inference_mat.png")

    with open("results/log_bayesian_inference_add.json") as f:
        bayesian_inference_add_stats = json.load(f)
        print("Bayesian-inference Analysis (Algebraic-decicion-diagram):")
        print("    average iters:", compute_mean_iters(bayesian_inference_add_stats))
        print("    speedup in runtime:", compute_speed_ups(bayesian_inference_add_stats))
        plot_time_scatter(bayesian_inference_add_stats, "results/bayesian_inference_add.png")
        print("    log-log runtime plot saved at results/bayesian_inference_add.png")

    with open("results/log_moment_of_reward.json") as f:
        moment_of_reward_stats = json.load(f)
        print("Higher-moment Analysis of Accumulated Rewards:")
        print("    average iters:", compute_mean_iters(moment_of_reward_stats))
        print("    speedup in runtime:", compute_speed_ups(moment_of_reward_stats))
        plot_time_scatter(moment_of_reward_stats, "results/moment_of_reward.png")
        print("    log-log runtime plot saved at results/moment_of_reward.png")

    with open("results/log_expectation_invariant.json") as f:
        expectation_invariant_stats = json.load(f)
        table = []
        for i, stat in enumerate(expectation_invariant_stats):
            table.append([i + 1, stat['name'], stat['newton']['solve_time'], stat['result']])
        print("Expectation-invariant Analysis:")
        print(tabulate(table, headers=["#", "Program", "Time", "Invariants"]))

    with open("results/log_expectation_recurrence.json") as f:
        expectation_recurrence_stats = json.load(f)
        table = []
        for i, stat in enumerate(expectation_recurrence_stats):
            newton_time = stat['newton']
            if newton_time != "T/O":
                newton_time = newton_time['solve_time']
            polar_time = stat['polar']
            table.append([i + 1, stat['name'], newton_time, polar_time])
        print("Expectation-recurrence Analysis:")
        print(tabulate(table, headers=["#", "Program", "Time (our work)", "Time (Polar)"]))
