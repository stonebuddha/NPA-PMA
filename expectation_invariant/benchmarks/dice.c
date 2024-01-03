int r;
int t;

void Z() {
  flip (1/2) {
    t = t + 1;
    X();
  } else {
    t = t + 1;
    Y();
  }
}

void X() {
  flip (1/2) {
    flip (1/2) {
      t = t + 1;
      X();
    } else {
      r = 1;
    }
  } else {
    flip (1/2) {
      r = 2;
    } else {
      r = 3;
    }
  }
}

void Y() {
  flip (1/2) {
    flip (1/2) {
      t = t + 1;
      Y();
    } else {
      r = 4;
    }
  } else {
    flip (1/2) {
      r = 5;
    } else {
      r = 6;
    }
  }
}
