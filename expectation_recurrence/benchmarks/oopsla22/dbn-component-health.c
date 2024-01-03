int i;
int n;

real health;
real obs;
real usage1;
real usage2;
real tmp;

void X()
//@ensure n + -1*i == 0;
{
  //@assume n + -1 >= 0;
  i = 0;
  health = 1;
  obs = 0;
  while {
    //@assume n + -1*i + -1 >= 0;
    usage1 = CATEGORICAL(0, 1/2, 1, 1/2);
    usage2 = CATEGORICAL(0, 1/2, 1, 1/2);
    tmp = CATEGORICAL(1, usage1 * usage2 * 1/100 + usage1 * (1-usage2) * 5/100 + (1-usage1) * usage2 * 10/100 + (1-usage1) * (1-usage2) * 20/100, 0, usage1 * usage2 * 99/100 + usage1 * (1-usage2) * 95/100 + (1-usage1) * usage2 * 90/100 + (1-usage1) * (1-usage2) * 80/100);
    // health = health * tmp + (1-health) * health;
    // health can only be 0 or 1
    health = health * tmp;
    obs = CATEGORICAL(0, health * 0 + (1-health) * 521/1000, 1, health * 24/1000 + (1-health) * 317/1000, 2, health * 63/1000 + (1-health) * 112/1000, 3, health * 418/1000 + (1-health) * 40/1000, 4, health * 495/1000 + (1-health) * 10/1000);
    i = i + 1;
  }
  //@assume i + -1*n >= 0;
}
