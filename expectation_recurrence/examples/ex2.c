int i;
int n;

real x;
real y;
real z;

void X()
//@ensure n + -1*i == 0, z == 0;
{
  //@assume n + -1 >= 0;
  i = 0;
  while {
    //@assume n + -1*i + -1 >= 0;
    y = y + 1/10*x;
    z = CATEGORICAL(1/10, 1/2, -1*1/10, 1/2);
    x = 4/5*x + z;
    i = i + 1;
  }
  //@assume i + -1*n >= 0;
}
