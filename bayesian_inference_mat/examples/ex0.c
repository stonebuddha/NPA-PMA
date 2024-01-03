bool a;
bool b;

void X() {
  if (a && b) {
    flip (1/2) {
      a = true;
    } else {
      a = false;
    }
    flip (1/2) {
      b = true;
    } else {
      b = false;
    }
    X();
  }
}
