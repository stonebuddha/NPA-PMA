int i;
int n;

real data_entry;
real data_entrys;
real c1;
real c2;
real p1;
real n1;
real ntrue;
real nfalse;
real p;

void X()
//@ensure n + -1*i == 0;
{
  //@assume n + -1 >= 0;
  i = 0;
  p1 = 0;
  n1 = 0;
  ntrue = 0;
  nfalse = 0;
  while {
    //@assume n + -1*i + -1 >= 0;
    data_entry = CATEGORICAL(1, p, 0, 1-p);
    data_entrys = CATEGORICAL(1, p, 0, 1-p);
    c1 = CATEGORICAL(0, 1/2, 1, 1/2);
    c2 = CATEGORICAL(0, 1/2, 1, 1/2);
    p1 = c1 * data_entry * p1 + c1 * data_entrys + c1 * (1-data_entry) * p1 + (1-c1) * c2 * (p1 + 1) + (1-c1) * (1-c2) * p1;
    n1 = c1 * data_entry * n1 + c1 * (1-data_entry) * n1 + (1 - 2 * data_entry + data_entrys) + (1-c1) * c2 * n1 + (1-c1) * (1-c2) * (n1 + 1);
    ntrue = c1 * (ntrue + 1) + (1-c1) * (data_entry * c2 + (1-data_entry) * (1-c2)) * (ntrue + 1) + (1-c1) * (data_entry * (1-c2) + (1-data_entry) * c2) * ntrue;
    nfalse = c1 * nfalse + (1-c1) * (data_entry * c2 + (1-data_entry) * (1-c2)) * nfalse + (1-c1) * (data_entry * (1-c2) + (1-data_entry) * c2) * (nfalse + 1);
    i = i + 1;
  }
  //@assume i + -1*n >= 0;
}
