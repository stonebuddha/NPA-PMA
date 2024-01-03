int i;
int n;

real rain;
real umbrella;
real r0;
real u0;
real r1;
real r2;
real u1;
real u2;

void X()
//@ensure n + -1*i == 0;
{
  //@assume n + -1 >= 0;
  i = 0;
  rain = CATEGORICAL(1, r0, 0, 1-r0);
  umbrella = CATEGORICAL(1, u0, 0, 1-u0);
  while {
    //@assume n + -1*i + -1 >= 0;
    rain = CATEGORICAL(1, rain * r1 + (1-rain) * r2, 0, rain * (1-r1) + (1-rain) * (1-r2));
    umbrella = CATEGORICAL(1, rain * u1 + (1-rain) * u2, 0, rain * (1-u1) + (1-rain) * (1-u2));
    i = i + 1;
  }
  //@assume i + -1*n >= 0;
}
