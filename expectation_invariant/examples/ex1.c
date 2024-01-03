int x;
int t;

void X() {
  flip (2/3) {
  } else {
    t = t + x;
    flip (1/2) {
      x = 1;
    } else {
      x = 0;
    }
    X();
    t = t + 1;
    X();
    t = t + 1;
  }
}
