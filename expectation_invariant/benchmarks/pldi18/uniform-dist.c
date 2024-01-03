real n;
real g;

void X() {
  if {
    //@assume -1*n + 10 >= 0;
    n = 2*n;
    flip (1/2) {
      g = 2*g;
    } else {
      g = 2*g + 1;
    }
  } else {
    //@assume n + -10 >= 0;
  }
}
