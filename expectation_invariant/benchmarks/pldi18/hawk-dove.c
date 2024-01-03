int p1bal1;
int p1bal2;
int p2bal1;
int p2bal2;
int count;

void X() {
  if {
    //@assume;
    flip (1/2) {
      flip (1/2) {
        p1bal1 = p1bal1 + 2;
        p2bal1 = p2bal1 + 2;
      } else {
        p2bal1 = p2bal1 + 4;
      }
    } else {
      flip (1/2) {
        p1bal1 = p1bal1 + 4;
      } else {
        flip (1/2) {
          p1bal1 = p1bal1 + 4;
          p2bal2 = p2bal2 + 8;
        } else {
          p1bal2 = p1bal2 + 8;
          p2bal1 = p2bal1 + 4;
        }
      }
    }
    count = count + 1;
  } else {
    //@assume;
  }
}
