int i;
int n;

real x1;
real token1;
real x2;
real token2;
real x3;
real token3;
real numtokens;
real x1o;
real x2o;
real x3o;
real tmp;

void X()
//@ensure n + -1*i == 0;
{
  //@assume n + -1 >= 0;
  i = 0;
  x1 = 1;
  token1 = 1;
  x2 = 1;
  token2 = 1;
  x3 = 1;
  token3 = 1;
  numtokens = token1 + token2 + token3;
  while {
    //@assume n + -1*i + -1 >= 0;
    x1o = x1;
    x2o = x2;
    x3o = x3;

    tmp = CATEGORICAL(0, 1/2, 1, 1/2);
    x1 = (x1o * x3o + (1-x1o) * (1-x3o)) * tmp + (x1o * (1-x3o) + (1-x1o) * x3o) * x3o;

    tmp = CATEGORICAL(0, 1/2, 1, 1/2);
    x2 = (x2o * x1o + (1-x2o) * (1-x1o)) * tmp + (x2o * (1-x1o) + (1-x2o) * x1o) * x1o;

    tmp = CATEGORICAL(0, 1/2, 1, 1/2);
    x3 = (x3o * x2o + (1-x3o) * (1-x2o)) * tmp + (x3o * (1-x2o) + (1-x3o) * x2o) * x2o;

    token1 = x1 * x3 + (1-x1) * (1-x3);
    token2 = x2 * x1 + (1-x2) * (1-x1);
    token1 = x3 * x2 + (1-x3) * (1-x2);

    numtokens = token1 + token2 + token3;

    i = i + 1;
  }
  //@assume i + -1*n >= 0;
}
