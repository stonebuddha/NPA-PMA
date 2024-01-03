bool b;

void p() {
  flip (2/3) {
    p();
    if (b) {
      b = true;
    } else {
      flip (1/6) {
        b = true;
      } else {
        b = false;
      }
    }
  } else {
    b = false;
  }
}
