int count;
int i;

void X4() {
  if {
    //@assume -1*i + 4 >= 0;
    count = count + 1;
    flip (1/5) {
      i = i + 1;
    }
  } else {
    //@assume i + -5 >= 0;
  }
}

void X0() {
  if {
    //@assume -1*i >= 0;
    count = count + 1;
    i = i + 1;
  } else {
    //@assume i + -1 >= 0;
  }
}

void X1() {
  if {
    //@assume -1*i + 1 >= 0;
    count = count + 1;
    flip (4/5) {
      i = i + 1;
    }
  } else {
    //@assume i + -2 >= 0;
  }
}

void X2() {
  if {
    //@assume -1*i + 2 >= 0;
    count = count + 1;
    flip (3/5) {
      i = i + 1;
    }
  } else {
    //@assume i + -3 >= 0;
  }
}

void X3() {
  if {
    //@assume -1*i + 3 >= 0;
    count = count + 1;
    flip (2/5) {
      i = i + 1;
    }
  } else {
    //@assume i + -4 >= 0;
  }
}
