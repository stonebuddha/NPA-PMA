bool b;
bool c;

void main() {
  b = true;
  flip (1/2) {
    c = true;
  } else {
    c = false;
  }
  p();
}

void p() {
  if (c) {
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
    p();
  }
}
