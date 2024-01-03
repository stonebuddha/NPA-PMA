bool b;
bool c;

void main() {
  b = true;
  flip (1/2) {
    c = true;
  } else {
    c = false;
  }
  while (c) {
    if (!b) {
      b = true;
    } else {
      b = false;
    }
    flip (1/2) {
      c = true;
    } else {
      c = false;
    }
  }
}
