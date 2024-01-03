int i;
int n;

real d;
real step;
real xlow;
real xup;
real x;

void X()
//@ensure n + -1*i == 0;
{
  //@assume n + -1 >= 0;
  i = 0;
  x = 0;
  xlow = 0;
  xup = 0;
  while {
    //@assume n + -1*i + -1 >= 0;
    d = CATEGORICAL(1, 1/3, 0, 2/3);
    step = NORMAL(3/4, 1);
    xlow = d * xlow + (1-d) * (xlow - step);
    xup = d * (xup + step) + (1-d) * xup;
    x = d * xup + (1-d) * xlow;
    i = i + 1;
  }
  //@assume i + -1*n >= 0;
}
