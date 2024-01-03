int i;
int n;

real found;
real attempts;
real random;

void X()
//@ensure n + -1*i == 0;
{
  //@assume n + -1 >= 0;
  i = 0;
  found = 0;
  attempts = 0;
  while {
    //@assume n + -1*i + -1 >= 0;
    random = CATEGORICAL(0, 1/21, 1, 20/21);
    found = (1-random) * 1 + random * found;
    attempts = (1-random) * attempts + random * (attempts + 1);
    i = i + 1;
  }
  //@assume i + -1*n >= 0;
}
