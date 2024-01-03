int count;

real x1;
real x2;
real y1;
real y2;
real dist1;
real dist2;
real r;

void X() {
  if {
    //@assume;
    r = UNIFORM(0, 2);
    if {
      //@assume x1 + -1*x2 >= 0;
      if {
        //@assume x1 + -1*x2 >= 0, y1 + -1*y2 >= 0;
        flip (1/2) {
          flip (1/2) {
            x1 = x1 + r;
          } else {
            y1 = y1 + r;
          }
          dist1 = dist1 + r;
        } else {
          flip (1/2) {
            x2 = x2 + r;
          } else {
            y2 = y2 + r;
          }
          dist2 = dist2 + r;
        }
      } else {
        //@assume x1 + -1*x2 >=0, -1*y1 + y2 >= 0;
        flip (1/2) {
          flip (1/2) {
            x1 = x1 + r;
          } else {
            y2 = y2 + r;
          }
          dist1 = dist1 + r;
        } else {
          flip (1/2) {
            x2 = x2 + r;
          } else {
            y1 = y1 + r;
          }
          dist2 = dist2 + r;
        }
      }
    } else {
      //@assume -1*x1 + x2 >= 0;
      if {
        //@assume -1*x1 + x2 >= 0, y1 + -1*y2 >= 0;
        flip (1/2) {
          flip (1/2) {
            x2 = x2 + r;
          } else {
            y1 = y1 + r;
          }
          dist1 = dist1 + r;
        } else {
          flip (1/2) {
            x1 = x1 + r;
          } else {
            y2 = y2 + r;
          }
          dist2 = dist2 + r;
        }
      } else {
        //@assume -1*x1 + x2 >= 0, -1*y1 + y2 >= 0;
        flip (1/2) {
          flip (1/2) {
            x2 = x2 + r;
          } else {
            y2 = y2 + r;
          }
          dist1 = dist1 + r;
        } else {
          flip (1/2) {
            x1 = x1 + r;
          } else {
            y1 = y1 + r;
          }
          dist2 = dist2 + r;
        }
      }
    }
    count = count + 1;
  } else {
    //@assume;
  }
}
