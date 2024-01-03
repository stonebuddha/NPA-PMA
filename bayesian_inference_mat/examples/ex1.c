bool a;
bool b;

void X() {
  while (true) {
    a = BER(1/2);
    while (a || b) {
      flip (1/10) {
        return;
      }
      if (a) {
        a = BER(1/5);
      } else {
        b = BER(4/5);
      }
    }
  }
}
