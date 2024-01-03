Newtonian Program Analysis of Probabilistic Programs
====================================================

This repo provides a prototype implementation of the framework of Newtonian
Program Analysis with Pre-Markov Algebras (NPA-PMA). NPA-PMA is an
interprocedural dataflow-analysis framework for designing and implementing
(partially) non-iterative program analyses of probabilistic programs with
unstructured control-flow, nondeterminism, and general recursion. To demonstrate
the usage of NPA-PMA, this repo also includes five instantiations for four
analyses: Bayesian-inference analysis, higher-moment analysis of accumulated
rewards, expectation-invariant analysis, and expectation-recurrence analysis.

## BUILDING THE FRAMEWORK

1) Installing [opam](https://opam.ocaml.org/doc/Install.html):
``` bash
$ sh <(curl -sL https://raw.githubusercontent.com/ocaml/opam/master/shell/install.sh)
$ opam init -c 4.14.0
$ eval $(opam env)
```

2) Installing the required packages:
``` bash
$ opam install dune.3.10.0 core.v0.14.1 ppx_jane.v0.14.0 yojson.2.1.2 ppx_deriving_yojson.3.6.1 menhir.20230608 mlgmpidl.1.2.15
```

3) Building the NPA-PMA library:
``` bash
$ dune build lib/pmaf
```

## INSTANTIATIONS

Each instantiation has to implement its own syntax (lexer and parser) for input
files, as well as its abstract domain according to the NPA-PMA interface (see
`lib/pmaf/sig.mli` for the signatures `DOMAIN` and `DOMAIN_SYMBOLIC`, with
respect to Kleene analysis and Newtonian analysis, respectively). The
instantiation `moment_of_reward` is the simplest one and a good refernece to
look at if you want to implement your own analysis.

### Bayesian-inference Analysis (Matrix-based)

This instantiation considers analyzing Boolean programs
(see [Boolean Programs](#boolean-programs)). This analysis computes for each
procedure a $2^N \times 2^N$ matrix (where $N$ is the number of Boolean
variables), encoding state-to-state transition probabilities. For example, if
there are two variables $a$ and $b$, then the row (pre-state) / column
(post-state) indexes 1,2,3,4 correspond to $a=false \wedge b=false$, $a=false
\wedge b=true$, $a=true \wedge b=false$, $a=true \wedge b=true$, respectively.
Note that the analyzed program might be non-terminating or involve
nondeterminism, and the analysis is designed in the sense that nondeterminism
tries to minimize reaching probabilities.

1) Installing [COIN-OR LP Solver](https://github.com/coin-or/Clp):

Clp version 1.17 is tested.

2) Installing the required packages:
``` bash
$ opam install owl.1.1
```

3) Building the instantiation:
``` bash
$ dune build bayesian_inference_mat
```

4) Running the analysis (the `-method` argument specifies Kleene/Newtonian):
``` bash
$ dune exec bayesian_inference_mat/test.exe -- analyze bayesian_inference_mat/examples/ex0.c -method K
[TOPLEVEL] Analyzing ex0.c ...
[TOPLEVEL] Method: Kleene
[TOPLEVEL] solve time: 0.000227s, solve iters: 21
X =
 1.000000 0.000000 0.000000 0.000000
 0.000000 1.000000 0.000000 0.000000
 0.000000 0.000000 1.000000 0.000000
 0.333333 0.333333 0.333333 0.000000

$ dune exec bayesian_inference_mat/test.exe -- analyze bayesian_inference_mat/examples/ex0.c -method N
[TOPLEVEL] Analyzing ex0.c ...
[TOPLEVEL] Method: Newton
[TOPLEVEL] solve time: 0.000418s, solve iters: 2
X =
 1.000000 0.000000 0.000000 0.000000
 0.000000 1.000000 0.000000 0.000000
 0.000000 0.000000 1.000000 0.000000
 0.333333 0.333333 0.333333 0.000000
```

### Bayesian-inference Analysis (Algebraic-decision-diagram-based)

This instantiation considers analyzing Boolean programs (see
[Boolean Programs](#boolean-programs)). This analysis computes for each
procedure an Algebraic Decision Diagram (ADD), encoding state-to-state
transition probabilities. For example, if there are two variables $a$ and $b$,
then the ADD basically represents a decision tree (using `ITE` for if-then-else)
that branches on $a,b$ (pre-state values) and $a',b'$ (post-state values). Note
that the analysis does not yet support nondeterminism.

1) Installing the required packages:
``` bash
$ opam install mlcuddidl.3.0.7
```

2) Building the instantiation:
``` bash
$ dune build bayesian_inference_add
```

3) Running the analysis (the `-method` argument specifies Kleene/Newtonian):
``` bash
$ dune exec bayesian_inference_add/test.exe -- analyze bayesian_inference_mat/examples/ex0.c -method K
[TOPLEVEL] Analyzing ex0.c ...
[TOPLEVEL] Method: Kleene
[TOPLEVEL] solve time: 0.000223s, solve iters: 21
X = ITE(a;
        ITE(b;
            ITE(a';ITE(b';0.000000;0.333333);0.333333);
            ITE(a';ITE(b';0.000000;1.000000);0.000000));
        ITE(b;
            ITE(a';0.000000;ITE(b';1.000000;0.000000));
            ITE(a';0.000000;ITE(b';0.000000;1.000000))))

$ dune exec bayesian_inference_add/test.exe -- analyze bayesian_inference_mat/examples/ex0.c -method N
[TOPLEVEL] Analyzing ex0.c ...
[TOPLEVEL] Method: Newton
[TOPLEVEL] solve time: 0.001082s, solve iters: 2
X = ITE(a;
        ITE(b;
            ITE(a';ITE(b';0.000000;0.333333);0.333333);
            ITE(a';ITE(b';0.000000;1.000000);0.000000));
        ITE(b;
            ITE(a';0.000000;ITE(b';1.000000;0.000000));
            ITE(a';0.000000;ITE(b';0.000000;1.000000))))
```

### Higher-moment Analysis of Accumulated Rewards

This instantiation considers analyzing single-state programs (see
[Single-state Programs](#single-state-programs)). This analysis computes for
each procedure a $(M+1)$-vector (where $M$ is the degree of the desired moment),
encoding the $0 th$ to $M th$ moments of the accumulated reward. A program
accumulates a global reward counter via `tick(c)` statements. Note that the
analyzed program might be non-terminating or involve nondeterminism, and the
analysis is designed in the sense that nondeterminism tries to minimize the
moments of the accumulated reward.

1) Installing [COIN-OR LP Solver](https://github.com/coin-or/Clp):

Clp version 1.17 is tested.

2) Building the instantiation:
``` bash
$ dune build moment_of_reward
```

3) Running the analysis (the `-deg` argument specfies the degree of the desired
moment and the `-method` argument specifies Kleene/Newtonian):
``` bash
$ dune exec moment_of_reward/test.exe -- analyze moment_of_reward/examples/ex0.c -deg 2 -method K
[TOPLEVEL] Analyzing ex0.c ...
[TOPLEVEL] Method: Kleene
[TOPLEVEL] solve time: 0.000523s, solve iters: 596
X = (1.00000000, 19.00000000, 740.99999998)

$ dune exec moment_of_reward/test.exe -- analyze moment_of_reward/examples/ex0.c -deg 2 -method N
[TOPLEVEL] Analyzing ex0.c ...
[TOPLEVEL] Method: Newton
[TOPLEVEL] solve time: 0.000577s, solve iters: 2
X = (1.00000000, 19.00000000, 741.00000000)
```

### Expectation-invariant Analysis

This instantiation considers analyzing arithmetic programs (see
[Arithmetic Programs](#arithmetic-programs)). This analysis computes for each
procedure a list of expectation invariants of the form
$\mathbb{E}[\mathcal{E}_2'] \le \mathcal{E}_1$, where $\mathcal{E}_1$ is a
linear expression over program variables (standing for values in the pre-state)
and $\mathcal{E}_2'$ is a lienar expression over "primed" program variables
(standing for values in the post-state). Note that this analysis only implements
the Newtonian interface.

1) Installing [COIN-OR LP Solver](https://github.com/coin-or/Clp):

Clp version 1.17 is tested.

2) Building the instantiation:
``` bash
$ dune build expectation_invariant
```

3) Running the analysis:
``` bash
$ dune exec expectation_invariant/test.exe -- analyze expectation_invariant/examples/ex0.c
[TOPLEVEL] Analyzing ex0.c ...
[TOPLEVEL] Newton
[TOPLEVEL] solve time: 0.002473s, solve iters: 2
X = {n' <= 1 * n, t' <= 2 * n + 1 * t + -2 * x + 2 * y, x' <= 1.5 * n + -0.5 * x + 1.5 * y, y' <= 0.5 * n + -0.5 * x + 1.5 * y}
```

### Expectation-recurrence Analysis

This instantiation considers analyzing arithmetic programs (see
[Arithmetic Programs](#arithmetic-programs)) with an extra constraint: the
control-flow of a program does not depend on randomness. This analysis computes
for each procedure a list of expectation invariants of the form
$\mathbb{E}[\mathcal{E}_2'] \bowtie \mathcal{E}_1$, where $\mathcal{E}_1$ is an
expression over program variables (standing for values in the pre-state) and
$\mathcal{E}_2'$ is an expression over "primed" program variables (standing for
values in the post-state), and $\bowtie$ is a relational operator. The analysis
can produce non-linear expectation invariants. Note that this analysis only
implements the Newtonian interface and does not yet support procedure calls.

1) Installing [Symbolic Reasoning Kit](https://github.com/zkincaid/duet/tree/modern/srk):
``` bash
$ opam install ppx_deriving.5.2.1 apron.v0.9.14 batteries.3.7.2 ocamlgraph.2.1.0 ntl.20221002 z3.4.12.4 ounit.2.2.7 OCRS.20221003
$ git clone https://github.com/zkincaid/duet.git
$ cd duet
$ git checkout 36853aa
$ dune build srk
$ dune install srk
```

2) Building the instantiation:
``` bash
$ dune build expectation_recurrence
```

3) Running the analysis (see `expectation_recurrence/explanation.md` for how to
interpret the results):
``` bash
$ dune exec expectation_recurrence/test.exe -- analyze expectation_recurrence/examples/ex2.c
[TOPLEVEL] Analyzing ex2.c ...
[TOPLEVEL] Newton
[TOPLEVEL] solve time: 0.18641s, solve iters: 1
X = {i := phi_i:506
     x := phi_x:505
     y := phi_y:504
     z := phi_z:503
     when (((0 <= (n:4 + -1) /\ !(0 <= (n:4 + -1)) /\ 0 = phi_i:478
               /\ x:0 = phi_x:479 /\ y:1 = phi_y:480 /\ z:2 = phi_z:481
               /\ phi_i:478 = phi_i:482 /\ phi_x:479 = phi_x:483
               /\ phi_y:480 = phi_y:484 /\ phi_z:481 = phi_z:485)
              \/ (0 <= (n:4 + -1) /\ 0 <= (n:4 + -1)
                    /\ (!(0 <= K:486)
                          \/ y':487 = ((y:1 + (1/10 * x:0))
                                         + (1/2
                                              * ((4/5 * x:0) + (1/20 + -1/20)))
                                         + (-1/2
                                              * ((4/5 * x:0) + (1/20 + -1/20))
                                              * (1 / pow:30(5/4, K:486)))))
                    /\ (!(0 <= K:486)
                          \/ x':488 = (((4/5 * x:0) + (1/20 + -1/20))
                                         * (1 / pow:30(5/4, K:486))))
                    /\ (!(0 <= K:486) \/ i':489 = (1 + K:486))
                    /\ (!((0 <= K:486 /\ K:486 <= 0))
                          \/ z':490 = (1/20 + -1/20))
                    /\ (!(1 <= K:486) \/ z':490 = 0)
                    /\ ((K:486 = 0 /\ (1/20 + -1/20) = z':490
                           /\ (y:1 + (1/10 * x:0)) = y':487
                           /\ ((4/5 * x:0) + (1/20 + -1/20)) = x':488
                           /\ 1 = i':489)
                          \/ (1 <= K:486 /\ 0 <= (-1 + -1 + n:4)
                                /\ z':490 = 0 /\ 0 <= (-i':489 + n:4)))
                    /\ 0 <= K:486 /\ !(0 <= ((n:4 + -i':489) + -1))
                    /\ i':489 = phi_i:491 /\ x':488 = phi_x:492
                    /\ y':487 = phi_y:493 /\ z':490 = phi_z:494
                    /\ phi_i:491 = phi_i:482 /\ phi_x:492 = phi_x:483
                    /\ phi_y:493 = phi_y:484 /\ phi_z:494 = phi_z:485))
             /\ phi_i:482 = phi_i:495 /\ phi_x:483 = phi_x:496
             /\ phi_y:484 = phi_y:497 /\ phi_z:485 = phi_z:498
             /\ phi_i:495 = phi_i:499 /\ phi_x:496 = phi_x:500
             /\ phi_y:497 = phi_y:501 /\ phi_z:498 = phi_z:502
             /\ phi_i:499 = phi_i:506 /\ phi_x:500 = phi_x:505
             /\ phi_y:501 = phi_y:504 /\ phi_z:502 = phi_z:503)}
[TOPLEVEL] (n + (-1 * i)) == 0 /\ z == 0 is a post-condition
```

## INPUT FILES

In the instantiations, we use three kinds of input files. All three kinds use
a C-like syntax. A program consists of a sequence of (possibly mutually
recursive) procedures. The first procedure is assumed to be the main procedure.
Global variables are declared before all the procedures. Local variables are not
supported. The return type of a procedure is always `void`. Bodies of all
control-flow constructs (`if`, `while`, and `flip`) must be encloded by
brackets. The statement `flip (a/b) { ... } else { ... }` makes a random branch
selection: choose the then-branch with probability `a/b` and the else-branch
with probability `1 - a/b`, where both `a` and `b` are positive literal
integers.

### Boolean Programs

The implementation (AST, lexer, and parser) is included in `lib/bool_lang`. This
kind supports Boolean variables (with type `bool`), Boolean predicates for `if`
and `while` (e.g., `x && y`, `x || y`, `!x`), deterministic assignments (e.g.,
`x = true`), and random assignments from Bernoulli distributions (e.g.,
`x = BER(2/3)`). Example programs can be found at
`bayesian_inference_mat/examples`.

### Single-state Programs

The implementation (AST, lexer, and parser) is includes in `lib/one_state_lang`.
This kind does not support declaring variables. It supports nondeterministic
branching `ndet { ... } else { ... }` and reward accumulation `tick(c)`, where
`c` is a positive literal integer. Example programs can be found at
`moment_of_reward/examples`.

### Arithmetic Programs

The implementation (AST, lexer, and parser) is included in `lib/arith_lang`.
This kind supports integer variables (with type `int`) and real variables (with
type `real`), arithmetic expressions (addition `x + y`, subtraction `x - y`, and
multiplication `x * y`), relational operators (greater-than-zero `x >= 0`,
equal-to-zero `x == 0`), and sampling statements (e.g., `x = NORMAL(0, 1)`).
Other supported distributions are `UNIFORM(a, b)` for uniform distributions,
`LAPLACE(a, b)` for Laplace distributions, and
`CATEGORICAL(a1, p1, a2, p2, ..., ak, pk)` for categorical distributions
(`a1`-`ak` are values and `p1`-`pk` are corresponding probabilities). Example
programs can be found at `expectation_invariant/examples` and
`expectation_recurrence/examples`.

Note that conditional structures (`if` and `while`) have a non-standard syntax
in our implementation of arithmetic programs. They do not have branching
predicates; instead, each branch must start with `//@assume cond;` where `cond`
is the pre-condition for this branch. For example,
`if (x >= 0) { ... } else { ... }` becomes
``` c
if {
  //@assume x >= 0;
  ...
} else {
  //@assume -1*x + -1 >= 0;
  ...
}
```
And `while (x >= 0) { ... }` becomes
``` c
while {
  //@assume x >= 0;
  ...
}
//@assume -1*x + -1 >= 0;
```
One benefit of this approach is that one can annotate more than branch
conditions, e.g., you can also annotate loop invariants.
