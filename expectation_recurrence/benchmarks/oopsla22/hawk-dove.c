int i;
int n;

real p1bal;
real p2bal;
real outcome;
real player1;
real player2;

void X()
//@ensure n + -1*i == 0;
{
  //@assume n + -1 >= 0;
  i = 0;
  p1bal = 0;
  p2bal = 0;
  outcome = 0;
  while {
    //@assume n + -1*i + -1 >= 0;
    player1 = CATEGORICAL(0, 1/2, 1, 1/2);
    player2 = CATEGORICAL(0, 1/2, 1, 1/2);
    outcome = CATEGORICAL(0, 1/2, 1, 1/2);
    p1bal = (1-player1) * (1-player2) * (p1bal + 2)
      + (1-player1) * player2 * p1bal
      + player1 * (1-player2) * (p1bal + 4)
      + player1 * player2 * (outcome * (p1bal - 8) + (1-outcome) * (p1bal + 4));
    p2bal = (1-player1) * (1-player2) * (p2bal + 2)
      + (1-player1) * player2 * (p2bal + 4)
      + player1 * (1-player2) * p2bal
      + player1 * player2 * (outcome * (p2bal + 4) + (1-outcome) * (p2bal - 8));
    i = i + 1;
  }
  //@assume i + -1*n >= 0;
}
