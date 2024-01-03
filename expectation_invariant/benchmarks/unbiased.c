int r;
int t;

void X() {
  t = t + 1;
  flip (9/10) {
    t = t + 1;
    flip (9/10) {
      X();
    } else {
      r = 1;
    }
  } else {
    t = t + 1;
    flip (9/10) {
      r = 2;
    } else {
      X();
    }
  }
}
