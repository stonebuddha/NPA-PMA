real x1;
real x2;

void X() {
  if {
    //@assume;
    flip (1/2) {
      x1 = 2*x1;
      x2 = 2*x2;
      if {
        //@assume x1 + -1*x2 + -1 >= 0;
        x2 = x2 + 1;
      } else {
        //@assume -1*x1 + x2 + 1 >= 0;
      }
    } else {
      if {
        //@assume 2*x1 + -2*x2 + -1 >= 0;
        x1 = 1;
        x2 = 0;
      } else {
        //@assume -2*x1 + 2*x2 + 1 >= 0;
        x1 = 0;
        x2 = 0;
      }
    }
  } else {
    //@assume;
  }
}
