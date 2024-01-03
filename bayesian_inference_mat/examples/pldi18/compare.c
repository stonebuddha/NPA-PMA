bool a1;
bool a2;
bool a3;
bool a4;
bool b1;
bool b2;
bool b3;
bool b4;
bool r;

void main() {
  flip (1/2) {
    a1 = true;
  } else {
    a1 = false;
  }
  flip (1/2) {
    a2 = true;
  } else {
    a2 = false;
  }
  flip (1/2) {
    a3 = true;
  } else {
    a3 = false;
  }
  flip (1/2) {
    a4 = true;
  } else {
    a4 = false;
  }
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
  flip (1/2) {
    b4 = true;
  } else {
    b4 = false;
  }
  r = true;
  if (((!a1) || b1) || (((a1 && b1) || ((!a1) && (!b1))) && r)) {
    r = true;
  } else {
    r = false;
  }
  if (((!a2) || b2) || (((a2 && b2) || ((!a2) && (!b2))) && r)) {
    r = true;
  } else {
    r = false;
  }
  if (((!a3) || b3) || (((a3 && b3) || ((!a3) && (!b3))) && r)) {
    r = true;
  } else {
    r = false;
  }
  if (((!a4) || b4) || (((a4 && b4) || ((!a4) && (!b4))) && r)) {
    r = true;
  } else {
    r = false;
  }
}
