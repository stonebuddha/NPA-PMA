int x;
int y;
int t;
int n;

void X() {
  while {
    //@assume n + -1*x + y + -1 >= 0;
    flip (3/4) {
      x = x + 1;
      t = t + 1;
    } else {
      y = y + 1;
      t = t + 1;
    }
  }
  //@assume n + -1*x + y == 0;
}
