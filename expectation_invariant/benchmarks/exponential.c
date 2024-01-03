int n;
int r;

void X() {
  n = 0;
  Y();
}

void Y() {
  if {
    //@assume n + -4 == 0;
    r = 1;
  } else {
    //@assume -1*n + 3 >= 0;
    flip (1/2) {
      r = 0;
    } else {
      n = n + 1;
      Y();
    }
  }
}
