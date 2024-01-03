bool b1;
bool b2;
bool b3;

void main() {
  b1 = false;
  b2 = false;
  b3 = false;
  while ((b1 && b2 && b3) || ((!b1) && (!b2) && (!b3))) {
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
    flip (1/2) {
      b3 = true;
    } else {
      b3 = false;
    }
  }
}
