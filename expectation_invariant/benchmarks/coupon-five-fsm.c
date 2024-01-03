int t;

void X0() {
  t = t + 1;
  X1();
}

void X1() {
  t = t + 1;
  flip (1/5) {
    X1();
  } else {
    X2();
  }
}

void X2() {
  t = t + 1;
  flip (2/5) {
    X2();
  } else {
    X3();
  }
}

void X3() {
  t = t + 1;
  flip (3/5) {
    X3();
  } else {
    X4();
  }
}

void X4() {
  t = t + 1;
  flip (4/5) {
    X4();
  } else {
    X5();
  }
}

void X5() {
  return;
}
