int i;
int n;
int t;

void Y() {
  while {
    //@assume -1*i + n + -1 >= 0;
    X();
    i = i + 1;
  }
  //@assume i + -1*n == 0;
}


void X() {
  flip (255/256) {
    X();
  }
  t = t + 10;
}
