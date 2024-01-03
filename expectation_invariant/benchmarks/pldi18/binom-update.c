int x;
int n;

void X() {
  if {
    //@assume -1*n + 99 >= 0;
    flip (1/4) {
      x = x + 1;
    }
    n = n + 1;
  } else {
    //@assume n + -100 >= 0;
  }
}
