real x;
real y;
real z;

void X() {
  while flip (3/4) {
    z = UNIFORM(0, 2);
    if {
      //@assume;
      x = x + z;
    } else {
      //@assume;
      y = y + z;
    }
  }
}
