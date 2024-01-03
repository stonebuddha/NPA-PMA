int i;
int n;

void X()
//@ensure n + -1*i == 0;
{
  //@assume n + -1 >= 0;
  i = 0;
  while {
    //@assume n + -1*i + -1 >= 0;
    i = i + 1;
  }
  //@assume i + -1*n >= 0;
}
