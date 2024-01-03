int i;
int n;

real x;
real x2;
real y;
real z;

void X()
//@ensure n + -1*i == 0, -1*x + 1 + 3/2*n == 0;
{
  //@assume n + -1 >= 0;
  i = 0;
  x = 1;
  x2 = 1;
  y = 1;
  z = 1;
  while {
    //@assume n + -1*i + -1 >= 0;
    x2 = CATEGORICAL(x2 + 2 * x + 1, 1/2, x2 + 4 * x + 4, 1/2);
    x = CATEGORICAL(x + 1, 1/2, x + 2, 1/2);
    y = CATEGORICAL(y + z + x2, 1/3, y - z - x, 2/3);
    z = CATEGORICAL(z + y, 1/4, z - y, 3/4);
    i = i + 1;
  }
  //@assume i + -1*n >= 0;
}
