int x_pos;
int x_neg;
// x_pos - x_neg is the position
int n;
int t;

void X() {
  while {
    //@assume n + -1*x_pos + x_neg + -1 >= 0;
    flip (3/4) {
      x_pos = x_pos + 1;
    } else {
      x_neg = x_neg + 1;
    }
    t = t + 1;
  }
  //@assume -1*n + x_pos + -1*x_neg == 0;
}
