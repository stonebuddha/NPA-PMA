void Q1() {
  tick(0);
}

void Q2() {
  tick(1);
  Q1();
  Q1();
}

void Q3() {
  tick(2);
  flip (1/2) {
    Q1();
    Q2();
  } else {
    Q2();
    Q1();
  }
}

void Q4() {
  tick(3);
  flip (1/3) {
    Q1(); Q3();
  } else {
    flip(1/2) {
      Q2(); Q2();
    } else {
      Q3(); Q1();
    }
  }
}

void Q5() {
  tick(4);
  flip (1/4) {
    Q1(); Q4();
  } else {
    flip (1/3) {
      Q2(); Q3();
    } else {
      flip(1/2) {
        Q3(); Q2();
      } else {
        Q4(); Q1();
      }
    }
  }
}

void Q6() {
  tick(5);
  flip (1/5) {
    Q1(); Q5();
  } else {
    flip (1/4) {
      Q2(); Q4();
    } else {
      flip (1/3) {
        Q3(); Q3();
      } else {
        flip (1/2) {
          Q4(); Q2();
        } else {
          Q5(); Q1();
        }
      }
    }
  }
}

void Q7() {
  tick(6);
  flip (1/6) {
    Q1(); Q6();
  } else {
    flip (1/5) {
      Q2(); Q5();
    } else {
      flip (1/4) {
        Q3(); Q4();
      } else {
        flip (1/3) {
          Q4(); Q3();
        } else {
          flip (1/2) {
            Q5(); Q2();
          } else {
            Q6(); Q1();
          }
        }
      }
    }
  }
}
