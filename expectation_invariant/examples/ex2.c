int x;

void X() {
  flip (3/5) {
    x = x + 1;
  } else {
    x = x + 1;
    X();
    x = x + 1;
    X();
    x = x + 1;
  }
}
