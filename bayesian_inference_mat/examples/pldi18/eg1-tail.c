bool b1;
bool b2;

void main() {
  flip (1/2) {
    b1 = true;
  } else {
    b1 = false;
  }
  flip (1/2) {
    b2 = true;
  } else {
    b2 = false;
  }
  p();
}

void p() {
  if (!(b1 || b2)) {
    flip (1/2) {
      b1 = true;
    } else {
      b1 = false;
    }
    flip (1/2) {
      b2 = true;
    } else {
      b2 = false;
    }
    p();
  }
}
