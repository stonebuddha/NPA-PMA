int coupons;
int t;

void X() {
  coupons = 0;
  while {
    //@assume -1*coupons + 4 >= 0;
    t = t + 1;
    if {
      //@assume coupons == 0;
      coupons = coupons + 1;
    } else {
      //@assume coupons + -1 >= 0, -1*coupons + 4 >= 0;
      if {
        //@assume coupons + -1 == 0;
        flip (1/5) {} else {
          coupons = coupons + 1;
        }
      } else {
        //@assume coupons + -2 >= 0, -1*coupons + 4 >= 0;
        if {
          //@assume coupons + -2 == 0;
          flip (2/5) {} else {
            coupons = coupons + 1;
          }
        } else {
          //@assume coupons + -3 >= 0, -1*coupons + 4 >= 0;
          if {
            //@assume coupons + -3 == 0;
            flip (3/5) {} else {
              coupons = coupons + 1;
            }
          } else {
            //@assume coupons + -4 >= 0, -1*coupons + 4 >= 0;
            flip (4/5) {} else {
              coupons = coupons + 1;
            }
          }
        }
      }
    }
  }
  //@assume coupons + -5 == 0;
}
