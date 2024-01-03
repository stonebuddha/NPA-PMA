int i;
int n;

real is_red;
real bet;
real money;
real number_bets;

void X()
//@ensure n + -1*i == 0;
{
  //@assume n + -1 >= 0;
  i = 0;
  is_red = 0;
  bet = 1;
  money = 0;
  number_bets = 0;
  while {
    //@assume n + -1*i + -1 >= 0;
    money = money - bet;
    is_red = CATEGORICAL(0, 1/2, 1, 1/2);
    money = is_red * (money + 2 * bet) + (1-is_red) * money;
    bet = is_red * 1 + (1-is_red) * 2 * bet;
    number_bets = number_bets + 1;
    i = i + 1;
  }
  //@assume i + -1*n >= 0;
}
