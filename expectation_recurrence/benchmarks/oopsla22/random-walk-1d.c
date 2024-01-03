int i;
int n;

real x;
real tmp;

void X()
//@ensure n + -1*i == 0;
{
  //@assume n + -1 >= 0;
  i = 0;
  x = 1;
  while {
    //@assume n + -1*i + -1 >= 0;
    x = CATEGORICAL(x + 1, 1/2, x - 1, 1/2);
    i = i + 1;
  }
  //@assume i + -1*n >= 0;
}
