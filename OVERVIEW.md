Newtonian Program Analysis of Probabilistic Programs
====================================================

## Introduction

This artifact provides a prototype implementation of the framework of Newtonian
Program Analysis with Pre-Markov Algebras (NPA-PMA). NPA-PMA is an
interprocedural dataflow-analysis framework for designing and implementing
(partially) non-iterative program analyses of probabilistic programs with
unstructured control-flow, nondeterminism, and general recursion. To demonstrate
the usage of NPA-PMA, this artifact also includes five instantiations for four
analyses: Bayesian-inference analysis, higher-moment analysis of accumulated
rewards, expectation-invariant analysis, and expectation-recurrence analysis.

This artifact supports the paper's case studies (Section 4) with respeect to
the following two major claims:
1) NPA-PMA can outperform Kleene iterations in some analyses (Section 4.1).
2) NPA-PMA is general enough to create instantiations with new abstract domains
(Sections 4.2 & 4.3).

## Hardware Dependencies

This artifact does not require specific hardware.

## Getting Started Guide

This artifact is a source code artifact, whose repo is publicly available at
https://github.com/stonebuddha/NPA-PMA.

``` bash
$ git clone https://github.com/stonebuddha/NPA-PMA.git
$ cd NPA-PMA
```

We suggest using [Docker](https://www.docker.com/) to evaluate this artifact.
There are two options:
- Pull a pre-built image:
``` bash
$ docker pull stonebuddha/npa-pma-artifact:latest
```
- Or you can build it from scratch (may take a long time):
``` bash
$ docker build -t stonebuddha/npa-pma-artifact:latest -f Dockerfile .
```

If you want to build the artifact locally, you can follow the detailed building
instructions in the `README.md` file of the repo.

## Step by Step Instructions

If you are using Docker to evaluate this artifact, first create and attach to
a container, which by default will place you at the root folder of the tool:
``` bash
$ docker run -it -v ${PWD}/results:/root/NPA-PMA/results stonebuddha/npa-pma-artifact
```

You can refer to the `README.md` file for a detailed documentation of the
NPA-PMA framework and its instantiations. To reproduce the results of the paper,
simply run (this could take about 10 minutes):
``` bash
$ ./reproduce.sh
...
$ ./scripts/gen_stats.py
```

The raw evaluation results will be placed in the `results` folder of the repo
(on your local machine). The `gen_stats.py` script reads the raw results,
generates several plots, and prints statistics of the evaluation. Below
describes how to obtain the paper results:
- Fig. 9 on page 19: The `gen_stats.py` script will generate `results/bayesian_inference_mat.png`.
- Table 2 on page 21: The `gen_stats.py` script will output a table as follows.
``` bash
Expectation-invariant Analysis:
  #  Program                    Time  Invariants
---  --------------------  ---------  ----------
  1  ...
```
- Table 3 on page 23: The `gen_stats.py` script will output a table as follows.
The analysis results are, unfortunately, not easy to interpret (mostly due to a
third-party library), so we include an explantion document located at
`expectation_recurrence/explanation.md`.
``` bash
Expectation-recurrence Analysis:
  #  Program               Time (our work)      Time (Polar)
---  --------------------  -----------------  --------------
  1  ...
```

Note that the running time statistics might be different from the results in the
paper. There might be two reasons:
- The paper results were obtained using a native build rather than via Docker.
- When preparing the artifact, we changed the version of a third-party library
([Symbolic Reasoning Kit](https://github.com/zkincaid/duet/tree/modern/srk)) to
reduce the number of software dependencies.

Nevertheless, our main claims (given in the [Introduction](#introduction)) still
holds:
- Fig. 9 shows that NPA-PMA outperforms Kleene iteration.
- Tables 2 & 3 shows that NPA-PMA can be instantiated with two new domains and
produce non-trivial analysis results.

## Reusability Guide

The core of NPA-PMA is located at `lib/pmaf`. Each instantiation of NPA-PMA has
to implement its own syntax (lexer and parser) for input files, as well as its
abstract domain according to the NPA-PMA interface (see `lib/pmaf/sig.mli` for
the signatures `DOMAIN` and `DOMAIN_SYMBOLIC`, with respect to Kleene analysis
and Newtonian analysis, respectively). The source code has not yet been
documented; nevertheless, the instantiation `moment_of_reward` is the simplest
one and a good refernece to look at (especially `moment_of_reward/domain.ml`)
if you want to implement your own analysis.
