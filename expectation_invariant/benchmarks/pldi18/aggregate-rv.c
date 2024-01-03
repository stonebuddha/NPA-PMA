int i;

real r;
real x;

void X() {
  if {
    //@assume -1*i + 499 >= 0;
    i = i + 1;
    r = UNIFORM(0, 1);
    x = x + r;
  } else {
    //@assume i + -500 >= 0;
  }
}
