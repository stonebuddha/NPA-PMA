## Example

The input file:
``` bash
$ cat expectation_recurrence/examples/ex2.c
int i;
int n;

real x;
real y;
real z;

void X()
//@ensure n + -1*i == 0, z == 0;
{
  //@assume n + -1 >= 0;
  i = 0;
  while {
    //@assume n + -1*i + -1 >= 0;
    y = y + 1/10*x;
    z = CATEGORICAL(1/10, 1/2, -1*1/10, 1/2);
    x = 4/5*x + z;
    i = i + 1;
  }
  //@assume i + -1*n >= 0;
}
```

Its analysis result:
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

The four lines
``` bash
X = {i := phi_i:506
     x := phi_x:505
     y := phi_y:504
     z := phi_z:503
```
indicate that the analysis produces results about the expected values of `i`,
`x`, `y`, `z` of the post-state (so they actually are $\mathbb{E}[i']$,
$\mathbb{E}[x']$, $\mathbb{E}[y']$, $\mathbb{E}[z']$), where the primed
variables stand for their values in the post-state. The formula after `when`
constrains those expected values, where free variables (such as `K:486`) are
existentially quantified.

We use a third-party library
([Symbolic Reasoning Kit](https://github.com/zkincaid/duet/tree/modern/srk))
to perform recurrence solving, which does not perform too much simplification
and leads to the somehow complex formula shown above.
Nevertheless, the formula exhits several patterns. The variable `K:486` is
introduced to indicate the number of loop iterations (i.e., an induction
variable of the loop). The part before the outermost disjunction
``` bash
     when (((0 <= (n:4 + -1) /\ !(0 <= (n:4 + -1)) /\ 0 = phi_i:478
               /\ x:0 = phi_x:479 /\ y:1 = phi_y:480 /\ z:2 = phi_z:481
               /\ phi_i:478 = phi_i:482 /\ phi_x:479 = phi_x:483
               /\ phi_y:480 = phi_y:484 /\ phi_z:481 = phi_z:485)
              \/
```
is actually false because `0 <= (n:4 + -1) /\ !(0 <= (n:4 + -1))` cannot be
true. Here `n:4` stands for the initial value of `n` (similar for `x:0`, `y:1`,
`z:2`). Thus, we shall focus on the part after the outermost disjunction. The
formula
``` bash
                    /\ 0 <= K:486 /\ !(0 <= ((n:4 + -i':489) + -1))
```
basically justifies that `K:486` is nonnegative and `n:4 - i':489 <= 0`. By the
formula
``` bash
                    /\ ((K:486 = 0 /\ (1/20 + -1/20) = z':490
                           /\ (y:1 + (1/10 * x:0)) = y':487
                           /\ ((4/5 * x:0) + (1/20 + -1/20)) = x':488
                           /\ 1 = i':489)
                          \/ (1 <= K:486 /\ 0 <= (-1 + -1 + n:4)
                                /\ z':490 = 0 /\ 0 <= (-i':489 + n:4)))
```
we know that `n:4 - i':489 >= 0` (in case `K:486 = 0`, we can conclude the same
result as `n:4 - 1 >= 0`). Therefore, we derive that `n:4 = i':489`. Then, by
the formula
``` bash
                    /\ (!(0 <= K:486) \/ i':489 = (1 + K:486))
```
We know that `K:486 + 1 = i':489`, thus `K:486 = n:4 - 1`. Next, from the
formula
``` bash
                    /\ (!(0 <= K:486)
                          \/ x':488 = (((4/5 * x:0) + (1/20 + -1/20))
                                         * (1 / pow:30(5/4, K:486))))
```
we have
`x':488 = 4/5 * x:0 * 1 / (5/4)**K:486 = x:0 * (4/5)**(K:486 + 1) = x:0 * (4/5)**n:4`.
From the identities in the last part of the original formula, we know that
`phi_x:505 = x':488`. Therefore, we conclude that
$\mathbb{E}[x'] = (\frac{4}{5})^n x$. Similarly, for $\mathbb{E}[y']$, we turn
to
``` bash
                    /\ (!(0 <= K:486)
                          \/ y':487 = ((y:1 + (1/10 * x:0))
                                         + (1/2
                                              * ((4/5 * x:0) + (1/20 + -1/20)))
                                         + (-1/2
                                              * ((4/5 * x:0) + (1/20 + -1/20))
                                              * (1 / pow:30(5/4, K:486)))))
```
and derive that
`y':487 = y:1 + 1/10 * x:0 + 1/2 * 4/5 * x:0 - 1/2 * 4/5 * x:0 * 1 / (5/4)**K:486 = y:1 + 1/2 * x:0 - 1/2 * x:0 * (4/5)**n:4`, i.e.,
$\mathbb{E}[y'] = y + \frac{1}{2}x(1-(\frac{4}{5})^n)$. Finally, for
$\mathbb{E}[z']$, with
``` bash
                    /\ (!((0 <= K:486 /\ K:486 <= 0))
                          \/ z':490 = (1/20 + -1/20))
                    /\ (!(1 <= K:486) \/ z':490 = 0)
```
we conclude that $\mathbb{E}[z'] = 0$.

## Benchmarks

In the following, we roughly explain how to simplify the analysis results. The
overall idea is to identify the induction variable `K:xxx` and look for the
pattern `!(0 <= K:xxx) \/ ...`.

- [1. 50coinflips](#1-50coinflips)
- [2. bimodal-x](#2-bimodal-x)
- [3. dbn-component-health](#3-dbn-component-health)
- [4. dbn-umbrella](#4-dbn-umbrella)
- [5. gambling](#5-gambling)
- [6. geometric](#6-geometric)
- [7. hawk-dove](#7-hawk-dove)
- [9. las-vegas-search](#9-las-vegas-search)
- [10. random-walk](#10-random-walk-1d)
- [11. randomized-response](#11-randomized-response)
- [12. rock-paper-scissors](#12-rock-paper-scissors)
- [13. lane-keeping](#13-lane-keeping)
- [14. running-example](#14-running-example)

### 1. 50coinflips

The formula
``` bash
                    /\ (!(0 <= K:187958)
                          \/ r0':188019 = (1 + -((1 / pow:5718(2, K:187958)))
                                             + (1/2
                                                  * (1
                                                     / pow:5718(2, K:187958)))))
```
yields $\mathbb{E}[r0'] = 1 - (\frac{1}{2})^{n-1} + \frac{1}{2}(\frac{1}{2})^{n-1} = 1 - (\frac{1}{2})^n$.

The formula
``` bash
                    /\ (!(1 <= K:187958)
                          \/ total':188001 = (50
                                                + (-100
                                                     * (1
                                                        / pow:5718(2,
                                                                   K:187958)))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))
                                                + (1 / pow:5718(2, K:187958))))
```
yields $\mathbb{E}[total'] = 50 - 100(\frac{1}{2})^{n-1}+\sum_{k=1}^{50} (\frac{1}{2})^{n-1}=50(1-(\frac{1}{2})^{n-1})$.

### 2. bimodal-x

The formula
``` bash
                    /\ (!(0 <= K:1067)
                          \/ xlow':1070 = ((-3/4 * (1 + -1/3))
                                             + (-1/2 * K:1067)))
```
yields $\mathbb{E}[xlow'] = -\frac{1}{2} - \frac{1}{2}(n-1) = -\frac{1}{2}n$.

The formula
``` bash
                    /\ (!(1 <= K:1067)
                          \/ x':1069 = ((2/3 * (-3/4 * (1 + -1/3))) + 1/12
                                          + (-1/4 * K:1067)))
```
yields $\mathbb{E}[x'] = -\frac{1}{3} + \frac{1}{12} - \frac{1}{4}(n-1) = -\frac{1}{4}n$.

The formula
``` bash
                          \/ (1 <= K:1067 /\ 0 <= (-1 + -1 + n:6)
                                /\ (-xup':1072 + (-2 * xlow':1070)
                                      + (3 * x':1069)) = 0
```
yields $\mathbb{E}[xup'] = 3(-\frac{1}{4}n) - 2(-\frac{1}{2}n) = \frac{1}{4}n$.

### 3. dbn-component-health

The formula
``` bash
                    /\ (!(0 <= K:998)
                          \/ health':1004 = ((((1/400
                                                  + (1/20
                                                       * (1/2 * (1 + -1/2))))
                                                 + (1/10 * (1/2 * (1 + -1/2))))
                                                + (1/5
                                                     * ((1 + -1/2)
                                                          * (1 + -1/2))))
                                               * (1 / pow:54(100/9, K:998))))
```
yields $\mathbb{E}[health'] = (\frac{1}{400} + \frac{1}{80} + \frac{1}{40} + \frac{1}{20}) (\frac{9}{100})^{n-1} = (\frac{9}{100})^n$.

The formula
``` bash
                    /\ (!(1 <= K:998)
                          \/ obs':1003 = (701/1000
                                            + (2683/1000
                                                 * (((1/400
                                                        + (1/20
                                                             * (1/2
                                                                  * (
                                                                  1 + -1/2))))
                                                       + (1/10
                                                            * (1/2
                                                                 * (1 + -1/2))))
                                                      + (1/5
                                                           * ((1 + -1/2)
                                                                * (1 + -1/2))))
                                                 * (1 / pow:54(100/9, K:998)))))
```
yields $\mathbb{E}[obs'] = \frac{701}{1000} + \frac{2683}{1000} \cdot \frac{9}{100} \cdot (\frac{9}{100})^{n-1} = \frac{701}{1000} + \frac{2683}{1000} (\frac{9}{100})^n$.

### 4. dbn-umbrella

The analysis does not yield any non-trivial results.

### 5. gambling

The formula
``` bash
                    /\ (!(0 <= K:957)
                          \/ bet':959 = ((1/2 + (2 * (1 + -1/2)))
                                           + (1/2 * K:957)))
```
yields $\mathbb{E}[bet'] = \frac{1}{2} + 1 + \frac{1}{2}(n-1) = \frac{1}{2}n + 1$.

The formula
``` bash
                    /\ (!(0 <= K:957)
                          \/ money':961 = ((1/2 * (-1 + 2)) + -((1 + -1/2))))
```
yields $\mathbb{E}[money'] = \frac{1}{2} - \frac{1}{2} = 0$.

### 6. geometric

The formula
``` bash
                          \/ (1 <= K:627 /\ 0 <= (-1 + -1 + n:4)
                                /\ (-1 + (2 * stop':628)) = 0
                                /\ 0 <= (-i':630 + n:4))) /\ 0 <= K:627
```
yields $\mathbb{E}[stop'] = \frac{1}{2}$.

The formula
``` bash
                    /\ (!(0 <= K:627) \/ x':629 = (2 * pow:42(2, K:627)))
```
yields $\mathbb{E}[x'] = 2 \cdot 2^{n-1} = 2^n$.

### 7. hawk-dove

The formula
``` bash
                    /\ (!(0 <= K:1067)
                          \/ p1bal':1072 = ((((2 * ((1 + -1/2) * (1 + -1/2)))
                                                + (4 * (1/2 * (1 + -1/2))))
                                               + (1/4
                                                    * (-4 + (4 * (1 + -1/2)))))
                                              + K:1067))
```
yields $\mathbb{E}[p1bal'] = \frac{1}{2} + 1 - \frac{1}{2} + (n - 1) = n$.

The formula
``` bash
                    /\ (!(0 <= K:1067)
                          \/ p2bal':1069 = ((((2 * ((1 + -1/2) * (1 + -1/2)))
                                                + (4 * (1/2 * (1 + -1/2))))
                                               + (1/4
                                                    * (2 + (-8 * (1 + -1/2)))))
                                              + K:1067))
```
yields $\mathbb{E}[p2bal'] = \frac{1}{2} + 1 - \frac{1}{2} + (n-1) = n$.

### 9. las-vegas-search

The formula
``` bash
                    /\ (!(0 <= K:580)
                          \/ attempts':582 = (20/21 + (20/21 * K:580)))
```
yields $\mathbb{E}[attempts'] = \frac{20}{21} + \frac{20}{21}(n-1) = \frac{20}{21}n$.

The formula
``` bash
                    /\ (!(0 <= K:580)
                          \/ found':584 = (1 + -((1 / pow:38(21/20, K:580)))
                                             + ((1 + -20/21)
                                                  * (1 / pow:38(21/20, K:580)))))
```
yields $\mathbb{E}[found'] = 1 - (\frac{20}{21})^{n-1} + \frac{1}{21}(\frac{20}{21})^{n-1}=1-(\frac{20}{21})^n$.

### 10. random-walk-1d

The formula
``` bash
                    /\ (!(0 <= K:234)
                          \/ x':236 = ((1/2 * (1 + 1)) + (1/2 * (1 + -1))))
```
yields $\mathbb{E}[x'] = 1$.

### 11. randomized-response

The formula
``` bash
                    /\ (!(0 <= K:2012)
                          \/ n1':2015 = ((((1 + -((2 * p:8))) + p:8)
                                            + ((1 + -1/2) * (1 + -1/2)))
                                           + (5/4 * K:2012)
                                           + -((p:8 * K:2012))))
```
yields $\mathbb{E}[n1'] = (1 - 2p + p) + \frac{1}{4} + \frac{5}{4}(n-1) - p(n-1) = \frac{5}{4}n-pn$.

The formula
``` bash
                    /\ (!(0 <= K:2012)
                          \/ p1':2019 = (((1/2 * p:8) + (1/2 * (1 + -1/2)))
                                           + (1/4 * K:2012)
                                           + (1/2 * p:8 * K:2012)))
```
yields $\mathbb{E}[p1'] = \frac{1}{2}p + \frac{1}{4} + \frac{1}{4}(n-1) + \frac{1}{2}p(n-1) = \frac{1}{4}n+\frac{1}{2}pn$.

The formula
``` bash
                    /\ (!(0 <= K:2012)
                          \/ ntrue':2017 = ((1/2
                                               + ((1 + -1/2)
                                                    * ((1/2 * p:8)
                                                         + ((1 + -p:8)
                                                              * (1 + -1/2)))))
                                              + (3/4 * K:2012)))
```
yields $\mathbb{E}[ntrue'] = \frac{1}{2} + \frac{1}{2} (\frac{1}{2}p + \frac{1}{2}(1-p))+\frac{3}{4}(n-1)= \frac{3}{4}n$.

The formula
``` bash
                    /\ (!(0 <= K:2012)
                          \/ nfalse':2013 = (((1 + -1/2)
                                                * ((p:8 * (1 + -1/2))
                                                     + (1/2 * (1 + -p:8))))
                                               + (1/4 * K:2012)))
```
yields $\mathbb{E}[nfalse'] = \frac{1}{2}(\frac{1}{2}p+\frac{1}{2}(1-p)) + \frac{1}{4}(n-1)=\frac{1}{4}n$.

### 12. rock-paper-scissors

The formula
``` bash
                    /\ (!(0 <= K:1273)
                          \/ p1bal':1274 = ((((1/2
                                                 * ((1/2
                                                       * (((p2:1 + (4 * p3:2))
                                                             + -((3
                                                                    * (
                                                                    p2:1
                                                                    + (
                                                                    2 * p3:2)))))
                                                            + 2))
                                                      * ((q2:4 + (4 * q3:5))
                                                           + -((q2:4
                                                                  + (
                                                                  2 * q3:5))))))
                                                + (1/2
                                                     * (((2
                                                            * (p2:1
                                                                 + (2 * p3:2)))
                                                           + -((p2:1
                                                                  + (
                                                                  4 * p3:2))))
                                                          * (((q2:4
                                                                 + (4 * q3:5))
                                                                + -((
                                                                    3
                                                                    * (
                                                                    q2:4
                                                                    + (
                                                                    2 * q3:5)))))
                                                               + 2))))
                                               + ((1/2
                                                     * ((p2:1 + (4 * p3:2))
                                                          + -((p2:1
                                                                 + (2 * p3:2)))))
                                                    * ((2
                                                          * (q2:4
                                                               + (2 * q3:5)))
                                                         + -((q2:4
                                                                + (4 * q3:5))))))
                                              + (p2:1 * K:1273)
                                              + (q3:5 * K:1273)
                                              + (-2 * p2:1 * q3:5 * K:1273)
                                              + -((p3:2 * q3:5 * K:1273))
                                              + -((p2:1 * q2:4 * K:1273))
                                              + (p3:2 * q2:4 * K:1273)))
```
can be simplified to
``` bash
p1bal' = ((((1/2*((1/2*(((p2+(4*p3))+-((3*(p2+(2*p3)))))+2))*((q2+(4*q3))+-((q2+(2*q3))))))+(1/2*(((2*(p2+(2*p3)))+-((p2+(4*p3))))*(((q2+(4*q3))+-((3*(q2+(2*q3)))))+2))))+((1/2*((p2+(4*p3))+-((p2+(2*p3)))))*((2*(q2+(2*q3)))+-((q2+(4*q3))))))+(p2*(n-1))+(q3*(n-1))+(-2*p2*q3*(n-1))+-((p3*q3*(n-1)))+-((p2*q2*(n-1)))+(p3*q2*(n-1)))
```
and to (via `sympy.simplify`)
``` bash
p1bal' = n*(-p2*q2 - 2*p2*q3 + p2 + p3*q2 - p3*q3 + q3)
```
and thus yields $\mathbb{E}[p1bal'] = n(- \mathit{p2}\mathit{q2}-2\mathit{p2}\mathit{q3}+\mathit{p2}+\mathit{p3}\mathit{q2}-\mathit{p3}^2+\mathit{q3})$.

The formula
``` bash
                    /\ (!(0 <= K:1273)
                          \/ p2bal':1278 = (((((1/2
                                                  * (((p2:1 + (4 * p3:2))
                                                        + -((3
                                                               * (p2:1
                                                                    + (
                                                                    2 * p3:2)))))
                                                       + 2))
                                                 * ((2 * (q2:4 + (2 * q3:5)))
                                                      + -((q2:4 + (4 * q3:5)))))
                                                + (1/2
                                                     * (((2
                                                            * (p2:1
                                                                 + (2 * p3:2)))
                                                           + -((p2:1
                                                                  + (
                                                                  4 * p3:2))))
                                                          * ((q2:4
                                                                + (4 * q3:5))
                                                               + -((q2:4
                                                                    + (
                                                                    2 * q3:5)))))))
                                               + (1/2
                                                    * ((1/2
                                                          * ((p2:1
                                                                + (4 * p3:2))
                                                               + -((p2:1
                                                                    + (
                                                                    2 * p3:2)))))
                                                         * (((q2:4
                                                                + (4 * q3:5))
                                                               + -((3
                                                                    * (
                                                                    q2:4
                                                                    + (
                                                                    2 * q3:5)))))
                                                              + 2))))
                                              + (p3:2 * K:1273)
                                              + (p2:1 * q3:5 * K:1273)
                                              + -((p3:2 * q3:5 * K:1273))
                                              + (q2:4 * K:1273)
                                              + -((p2:1 * q2:4 * K:1273))
                                              + (-2 * p3:2 * q2:4 * K:1273)))
```
can be simplified to
``` bash
p2bal' = (((((1/2*(((p2+(4*p3))+-((3*(p2+(2*p3)))))+2))*((2*(q2+(2*q3)))+-((q2+(4*q3)))))+(1/2*(((2*(p2+(2*p3)))+-((p2+(4*p3))))*((q2+(4*q3))+-((q2+(2*q3)))))))+(1/2*((1/2*((p2+(4*p3))+-((p2+(2*p3)))))*(((q2+(4*q3))+-((3*(q2+(2*q3)))))+2))))+(p3*(n-1))+(p2*q3*(n-1))+-((p3*q3*(n-1)))+(q2*(n-1))+-((p2*q2*(n-1)))+(-2*p3*q2*(n-1)))
```
and to (via `sympy.simplify`)
``` bash
p2bal' = n*(-p2*q2 + p2*q3 - 2*p3*q2 - p3*q3 + p3 + q2)
```
and thus yields $\mathbb{E}[p2bal'] = n(-\mathit{p2}\mathit{q2} + \mathit{p2}\mathit{q3}-2\mathit{p3}\mathit{q2}-\mathit{p3}^2+\mathit{p3}+\mathit{q2})$.

### 13. lane-keeping

This benchmark is the same as the example shown in the beginning of this
document.

### 14. running-example

The formula
``` bash
                    /\ (!(0 <= K:893)
                          \/ x':896 = (((1/2 * (1 + 1)) + (1/2 * (1 + 2)))
                                         + (3/2 * K:893)))
```
yields $\mathbb{E}[x'] = 1 + \frac{3}{2} + \frac{3}{2}(n-1) = \frac{3}{2}n+1$.

The formula
``` bash
                    /\ (!(0 <= K:893)
                          \/ y':894 = (1
                                         + (-6
                                              * ((1/2 * (1 + 1))
                                                   + (1/2 * (1 + 2))))
                                         + (-56/5 * (1 / pow:56(3/2, K:893)))
                                         + (3/5
                                              * ((1/3
                                                    * ((1 + 1)
                                                         + ((1/2
                                                               * ((1 + 2) + 1))
                                                              + (1/2
                                                                   * (
                                                                   (1 + 4)
                                                                    + 4)))))
                                                   + (2/3
                                                        * ((1 + -1)
                                                             + -(((1/2
                                                                    * (
                                                                    1 + 1))
                                                                    + (
                                                                    1/2
                                                                    * (
                                                                    1 + 2)))))))
                                              * (1 / pow:56(3/2, K:893)))
                                         + (-2/5
                                              * ((1/2 * ((1 + 2) + 1))
                                                   + (1/2 * ((1 + 4) + 4)))
                                              * (1 / pow:56(3/2, K:893)))
                                         + (16/5
                                              * ((1/2 * (1 + 1))
                                                   + (1/2 * (1 + 2)))
                                              * (1 / pow:56(3/2, K:893)))
                                         + (2/5
                                              * ((1/4
                                                    * (1
                                                         + ((1/3
                                                               * ((1 + 1)
                                                                    + (
                                                                    (1/2
                                                                    * ((1 + 2)
                                                                    + 1))
                                                                    + (
                                                                    1/2
                                                                    * (
                                                                    (1 + 4)
                                                                    + 4)))))
                                                              + (2/3
                                                                   * (
                                                                   (1 + -1)
                                                                    + -(
                                                                    (
                                                                    (1/2
                                                                    * (1 + 1))
                                                                    + (
                                                                    1/2
                                                                    * (
                                                                    1 + 2)))))))))
                                                   + (3/4
                                                        * (1
                                                             + -(((1/3
                                                                    * (
                                                                    (1 + 1)
                                                                    + (
                                                                    (1/2
                                                                    * ((1 + 2)
                                                                    + 1))
                                                                    + (
                                                                    1/2
                                                                    * (
                                                                    (1 + 4)
                                                                    + 4)))))
                                                                    + (
                                                                    2/3
                                                                    * (
                                                                    (1 + -1)
                                                                    + -(
                                                                    (
                                                                    (1/2
                                                                    * (1 + 1))
                                                                    + (
                                                                    1/2
                                                                    * (
                                                                    1 + 2)))))))))))
                                              * (1 / pow:56(3/2, K:893)))
                                         + (51/5 * pow:56(3/2, K:893))
                                         + (2/5
                                              * ((1/3
                                                    * ((1 + 1)
                                                         + ((1/2
                                                               * ((1 + 2) + 1))
                                                              + (1/2
                                                                   * (
                                                                   (1 + 4)
                                                                    + 4)))))
                                                   + (2/3
                                                        * ((1 + -1)
                                                             + -(((1/2
                                                                    * (
                                                                    1 + 1))
                                                                    + (
                                                                    1/2
                                                                    * (
                                                                    1 + 2)))))))
                                              * pow:56(3/2, K:893))
                                         + (2/5
                                              * ((1/2 * ((1 + 2) + 1))
                                                   + (1/2 * ((1 + 4) + 4)))
                                              * pow:56(3/2, K:893))
                                         + (14/5
                                              * ((1/2 * (1 + 1))
                                                   + (1/2 * (1 + 2)))
                                              * pow:56(3/2, K:893))
                                         + (-2/5
                                              * ((1/4
                                                    * (1
                                                         + ((1/3
                                                               * ((1 + 1)
                                                                    + (
                                                                    (1/2
                                                                    * ((1 + 2)
                                                                    + 1))
                                                                    + (
                                                                    1/2
                                                                    * (
                                                                    (1 + 4)
                                                                    + 4)))))
                                                              + (2/3
                                                                   * (
                                                                   (1 + -1)
                                                                    + -(
                                                                    (
                                                                    (1/2
                                                                    * (1 + 1))
                                                                    + (
                                                                    1/2
                                                                    * (
                                                                    1 + 2)))))))))
                                                   + (3/4
                                                        * (1
                                                             + -(((1/3
                                                                    * (
                                                                    (1 + 1)
                                                                    + (
                                                                    (1/2
                                                                    * ((1 + 2)
                                                                    + 1))
                                                                    + (
                                                                    1/2
                                                                    * (
                                                                    (1 + 4)
                                                                    + 4)))))
                                                                    + (
                                                                    2/3
                                                                    * (
                                                                    (1 + -1)
                                                                    + -(
                                                                    (
                                                                    (1/2
                                                                    * (1 + 1))
                                                                    + (
                                                                    1/2
                                                                    * (
                                                                    1 + 2)))))))))))
                                              * pow:56(3/2, K:893))
                                         + (-9 * K:893)))
```
can be simplified to
``` bash
y' = (1+(-6*((1/2*(1+1))+(1/2*(1+2))))+(-56/5*(1/pow(3/2,(n-1))))+(3/5*((1/3*((1+1)+((1/2*((1+2)+1))+(1/2*((1+4)+4)))))+(2/3*((1+-1)+-(((1/2*(1+1))+(1/2*(1+2)))))))*(1/pow(3/2,(n-1))))+(-2/5*((1/2*((1+2)+1))+(1/2*((1+4)+4)))*(1/pow(3/2,(n-1))))+(16/5*((1/2*(1+1))+(1/2*(1+2)))*(1/pow(3/2,(n-1))))+(2/5*((1/4*(1+((1/3*((1+1)+((1/2*((1+2)+1))+(1/2*((1+4)+4)))))+(2/3*((1+-1)+-(((1/2*(1+1))+(1/2*(1+2)))))))))+(3/4*(1+-(((1/3*((1+1)+((1/2*((1+2)+1))+(1/2*((1+4)+4)))))+(2/3*((1+-1)+-(((1/2*(1+1))+(1/2*(1+2)))))))))))*(1/pow(3/2,(n-1))))+(51/5*pow(3/2,(n-1)))+(2/5*((1/3*((1+1)+((1/2*((1+2)+1))+(1/2*((1+4)+4)))))+(2/3*((1+-1)+-(((1/2*(1+1))+(1/2*(1+2)))))))*pow(3/2,(n-1)))+(2/5*((1/2*((1+2)+1))+(1/2*((1+4)+4)))*pow(3/2,(n-1)))+(14/5*((1/2*(1+1))+(1/2*(1+2)))*pow(3/2,(n-1)))+(-2/5*((1/4*(1+((1/3*((1+1)+((1/2*((1+2)+1))+(1/2*((1+4)+4)))))+(2/3*((1+-1)+-(((1/2*(1+1))+(1/2*(1+2)))))))))+(3/4*(1+-(((1/3*((1+1)+((1/2*((1+2)+1))+(1/2*((1+4)+4)))))+(2/3*((1+-1)+-(((1/2*(1+1))+(1/2*(1+2)))))))))))*pow(3/2,(n-1)))+(-9*(n-1)))
```
and to (via `sympy.simplify`)
``` bash
y' = 67*(3/2)**n/5 - 9*n - 5 - 37/(5*(3/2)**n)
```
and thus yields $\mathbb{E}[y'] = -9n - \frac{37}{5}(\frac{2}{3})^n+\frac{67}{5}(\frac{3}{2})^n-5$.

The formula
``` bash
                    /\ (!(0 <= K:893)
                          \/ z':897 = (53/2
                                         + ((1/2 * ((1 + 2) + 1))
                                              + (1/2 * ((1 + 4) + 4)))
                                         + ((1/2 * (1 + 1)) + (1/2 * (1 + 2)))
                                         + (-56/5 * (1 / pow:56(3/2, K:893)))
                                         + (3/5
                                              * ((1/3
                                                    * ((1 + 1)
                                                         + ((1/2
                                                               * ((1 + 2) + 1))
                                                              + (1/2
                                                                   * (
                                                                   (1 + 4)
                                                                    + 4)))))
                                                   + (2/3
                                                        * ((1 + -1)
                                                             + -(((1/2
                                                                    * (
                                                                    1 + 1))
                                                                    + (
                                                                    1/2
                                                                    * (
                                                                    1 + 2)))))))
                                              * (1 / pow:56(3/2, K:893)))
                                         + (-2/5
                                              * ((1/2 * ((1 + 2) + 1))
                                                   + (1/2 * ((1 + 4) + 4)))
                                              * (1 / pow:56(3/2, K:893)))
                                         + (16/5
                                              * ((1/2 * (1 + 1))
                                                   + (1/2 * (1 + 2)))
                                              * (1 / pow:56(3/2, K:893)))
                                         + (2/5
                                              * ((1/4
                                                    * (1
                                                         + ((1/3
                                                               * ((1 + 1)
                                                                    + (
                                                                    (1/2
                                                                    * ((1 + 2)
                                                                    + 1))
                                                                    + (
                                                                    1/2
                                                                    * (
                                                                    (1 + 4)
                                                                    + 4)))))
                                                              + (2/3
                                                                   * (
                                                                   (1 + -1)
                                                                    + -(
                                                                    (
                                                                    (1/2
                                                                    * (1 + 1))
                                                                    + (
                                                                    1/2
                                                                    * (
                                                                    1 + 2)))))))))
                                                   + (3/4
                                                        * (1
                                                             + -(((1/3
                                                                    * (
                                                                    (1 + 1)
                                                                    + (
                                                                    (1/2
                                                                    * ((1 + 2)
                                                                    + 1))
                                                                    + (
                                                                    1/2
                                                                    * (
                                                                    (1 + 4)
                                                                    + 4)))))
                                                                    + (
                                                                    2/3
                                                                    * (
                                                                    (1 + -1)
                                                                    + -(
                                                                    (
                                                                    (1/2
                                                                    * (1 + 1))
                                                                    + (
                                                                    1/2
                                                                    * (
                                                                    1 + 2)))))))))))
                                              * (1 / pow:56(3/2, K:893)))
                                         + (-153/10 * pow:56(3/2, K:893))
                                         + (-3/5
                                              * ((1/3
                                                    * ((1 + 1)
                                                         + ((1/2
                                                               * ((1 + 2) + 1))
                                                              + (1/2
                                                                   * (
                                                                   (1 + 4)
                                                                    + 4)))))
                                                   + (2/3
                                                        * ((1 + -1)
                                                             + -(((1/2
                                                                    * (
                                                                    1 + 1))
                                                                    + (
                                                                    1/2
                                                                    * (
                                                                    1 + 2)))))))
                                              * pow:56(3/2, K:893))
                                         + (-3/5
                                              * ((1/2 * ((1 + 2) + 1))
                                                   + (1/2 * ((1 + 4) + 4)))
                                              * pow:56(3/2, K:893))
                                         + (-21/5
                                              * ((1/2 * (1 + 1))
                                                   + (1/2 * (1 + 2)))
                                              * pow:56(3/2, K:893))
                                         + (3/5
                                              * ((1/4
                                                    * (1
                                                         + ((1/3
                                                               * ((1 + 1)
                                                                    + (
                                                                    (1/2
                                                                    * ((1 + 2)
                                                                    + 1))
                                                                    + (
                                                                    1/2
                                                                    * (
                                                                    (1 + 4)
                                                                    + 4)))))
                                                              + (2/3
                                                                   * (
                                                                   (1 + -1)
                                                                    + -(
                                                                    (
                                                                    (1/2
                                                                    * (1 + 1))
                                                                    + (
                                                                    1/2
                                                                    * (
                                                                    1 + 2)))))))))
                                                   + (3/4
                                                        * (1
                                                             + -(((1/3
                                                                    * (
                                                                    (1 + 1)
                                                                    + (
                                                                    (1/2
                                                                    * ((1 + 2)
                                                                    + 1))
                                                                    + (
                                                                    1/2
                                                                    * (
                                                                    (1 + 4)
                                                                    + 4)))))
                                                                    + (
                                                                    2/3
                                                                    * (
                                                                    (1 + -1)
                                                                    + -(
                                                                    (
                                                                    (1/2
                                                                    * (1 + 1))
                                                                    + (
                                                                    1/2
                                                                    * (
                                                                    1 + 2)))))))))))
                                              * pow:56(3/2, K:893))
                                         + (7/4 * K:893)
                                         + (3
                                              * ((1/2 * (1 + 1))
                                                   + (1/2 * (1 + 2))) * K:893)
                                         + (9/4 * (K:893 * K:893))))
```
can be simplified to
``` bash
z' = (53/2+((1/2*((1+2)+1))+(1/2*((1+4)+4)))+((1/2*(1+1))+(1/2*(1+2)))+(-56/5*(1/pow(3/2,(n-1))))+(3/5*((1/3*((1+1)+((1/2*((1+2)+1))+(1/2*((1+4)+4)))))+(2/3*((1+-1)+-(((1/2*(1+1))+(1/2*(1+2)))))))*(1/pow(3/2,(n-1))))+(-2/5*((1/2*((1+2)+1))+(1/2*((1+4)+4)))*(1/pow(3/2,(n-1))))+(16/5*((1/2*(1+1))+(1/2*(1+2)))*(1/pow(3/2,(n-1))))+(2/5*((1/4*(1+((1/3*((1+1)+((1/2*((1+2)+1))+(1/2*((1+4)+4)))))+(2/3*((1+-1)+-(((1/2*(1+1))+(1/2*(1+2)))))))))+(3/4*(1+-(((1/3*((1+1)+((1/2*((1+2)+1))+(1/2*((1+4)+4)))))+(2/3*((1+-1)+-(((1/2*(1+1))+(1/2*(1+2)))))))))))*(1/pow(3/2,(n-1))))+(-153/10*pow(3/2,(n-1)))+(-3/5*((1/3*((1+1)+((1/2*((1+2)+1))+(1/2*((1+4)+4)))))+(2/3*((1+-1)+-(((1/2*(1+1))+(1/2*(1+2)))))))*pow(3/2,(n-1)))+(-3/5*((1/2*((1+2)+1))+(1/2*((1+4)+4)))*pow(3/2,(n-1)))+(-21/5*((1/2*(1+1))+(1/2*(1+2)))*pow(3/2,(n-1)))+(3/5*((1/4*(1+((1/3*((1+1)+((1/2*((1+2)+1))+(1/2*((1+4)+4)))))+(2/3*((1+-1)+-(((1/2*(1+1))+(1/2*(1+2)))))))))+(3/4*(1+-(((1/3*((1+1)+((1/2*((1+2)+1))+(1/2*((1+4)+4)))))+(2/3*((1+-1)+-(((1/2*(1+1))+(1/2*(1+2)))))))))))*pow(3/2,(n-1)))+(7/4*(n-1))+(3*((1/2*(1+1))+(1/2*(1+2)))*(n-1))+(9/4*((n-1)*(n-1))))
```
and to (via `sympy.simplify`)
``` bash
z' = -37*2**n/(5*3**n) + 37*n/4 + 9*(n - 1)**2/4 + 105/4 - 201*3**n/(10*2**n)
```
and thus yields $\mathbb{E}[z'] = \frac{9}{4}n^2 + \frac{19}{4}n + \frac{57}{2} - \frac{37}{5}(\frac{2}{3})^n-\frac{201}{10}(\frac{3}{2})^n$.
