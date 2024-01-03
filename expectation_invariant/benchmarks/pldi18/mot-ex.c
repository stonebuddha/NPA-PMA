int count;

real x;
real y;
real r;

void X() {
  if {
    //@assume -1*x + -1*y + 10 >= 0;
    flip (3/4) {
      r = UNIFORM(0, 2);
      x = x + r;
      y = y + 2;
    }
    count = count + 1;
  } else {
    //@assume x + y + -10 >= 0;
  }
}
