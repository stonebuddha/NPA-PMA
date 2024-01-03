real h;
real t;
real r;

void X() {
  if {
    //@assume -1*h + t >= 0;
    flip (1/2) {
      r = UNIFORM(0, 10);
      h = h + r;
    }
    t = t + 1;
  } else {
    //@assume h + -1*t >= 0;
  }
}
