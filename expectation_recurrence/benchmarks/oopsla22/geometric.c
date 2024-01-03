int i;
int n;

real stop;
real x;
real runtime;

void X()
//@ensure n + -1*i == 0;
{
  //@assume n + -1 >= 0;
  i = 0;
  stop = 0;
  x = 1;
  runtime = 0;
  while {
    //@assume n + -1*i + -1 >= 0;
    stop = CATEGORICAL(0, 1/2, 1, 1/2);
    x = 2 * x;
    runtime = runtime + 1;
    i = i + 1;
  }
  //@assume i + -1*n >= 0;
}
