int i;
int n;

real p1;
real p2;
real p3;
real q1;
real q2;
real q3;
real player1;
real player1s;
real player2;
real player2s;
real p1bal;
real p2bal;

void X()
//@ensure n + -1*i == 0;
{
  //@assume n + -1 >= 0;
  i = 0;
  p1bal = 0;
  p2bal = 0;
  while {
    //@assume n + -1*i + -1 >= 0;
    player1 = CATEGORICAL(0, p1, 1, p2, 2, p3);
    player1s = CATEGORICAL(0, p1, 1, p2, 4, p3);
    player2 = CATEGORICAL(0, q1, 1, q2, 2, q3);
    player2s = CATEGORICAL(0, q1, 1, q2, 4, q3);
    // y0 * (x-1)(x-2)/(0-1)(0-2) + y1 * (x-0)(x-2)/(1-0)(1-2) + y2 * (x-0)(x-1)/(2-0)(2-1)
    // y0 * (x-1)(x-2)/2 + y1 * x(2-x) + y2 * x(x-1)/2
    // y0 * (x^2 - 3x + 2)/2 + y1 * (2x - x^2) + y2 * (x^2 - x)/2
    // rock = 0, paper = 1, scissors = 2
    p1bal = (player1s - 3 * player1 + 2) * 1/2 * (2 * player2 - player2s) * p1bal +
      (player1s - 3 * player1 + 2) * 1/2 * (player2s - player2) * 1/2 * (p1bal + 1) +
      (player1s - 3 * player1 + 2) * 1/2 * (player2s - 3 * player2 + 2) * 1/2 * p1bal +
      (2 * player1 - player1s) * (player2s - 3 * player2 + 2) * 1/2 * (p1bal + 1) +
      (2 * player1 - player1s) * (player2s - player2) * 1/2 * p1bal +
      (2 * player1 - player1s) * (2 * player2 - player2s) * p1bal +
      (player1s - player1) * 1/2 * (player2s - 3 * player2 + 2) * 1/2 * p1bal +
      (player1s - player1) * 1/2 * (2 * player2 - player2s) * (p1bal + 1) +
      (player1s - player1) * 1/2 * (player2s - player2) * 1/2 * p1bal;
    //
    p2bal = (player1s - 3 * player1 + 2) * 1/2 * (2 * player2 - player2s) * (p2bal + 1) +
      (player1s - 3 * player1 + 2) * 1/2 * (player2s - player2) * 1/2 * p2bal +
      (player1s - 3 * player1 + 2) * 1/2 * (player2s - 3 * player2 + 2) * 1/2 * p2bal +
      (2 * player1 - player1s) * (player2s - 3 * player2 + 2) * 1/2 * p2bal +
      (2 * player1 - player1s) * (player2s - player2) * 1/2 * (p2bal + 1) +
      (2 * player1 - player1s) * (2 * player2 - player2s) * p2bal +
      (player1s - player1) * 1/2 * (player2s - 3 * player2 + 2) * 1/2 * (p2bal + 1) +
      (player1s - player1) * 1/2 * (2 * player2 - player2s) * p2bal +
      (player1s - player1) * 1/2 * (player2s - player2) * 1/2 * p2bal;
    i = i + 1;
  }
  //@assume i + -1*n >= 0;
}
