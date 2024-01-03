bool a;
bool b;

void X0() {
  flip (199/500) {
    if (a) {
      X4();
    }
    else {
      X97();
    }
  }
}

void X1() {
  flip (233/250) {
    if (a) {
      X6();
    }
    else {
      X1();
    }
  }
}

void X2() {
  flip (953/1000) {
    if (a) {
      X3();
    }
    else {
      X0();
    }
  }
}

void X3() {
  flip (773/1000) {
    a = false;
    X7();
  }
  else {
    b = true;
    X2();
  }
}

void X4() {
  X8();
  X99();
}

void X5() {
  X3();
  X5();
}

void X6() {
  flip (39/250) {
    if (a) {
      X9();
    }
    else {
      X8();
    }
  }
}

void X7() {
  flip (421/1000) {
    a = false;
    X11();
  }
  else {
    b = false;
    X3();
  }
}

void X8() {
  X8();
  X7();
}

void X9() {
  flip (42/125) {
    if (b) {
      X6();
    }
    else {
      X4();
    }
  }
}

void X10() {
  flip (157/500) {
    if (a) {
      X9();
    }
    else {
      X10();
    }
  }
}

void X11() {
  X8();
  X14();
}

void X12() {
  flip (19/25) {
    b = true;
    X11();
  }
  else {
    b = false;
    X10();
  }
}

void X13() {
  X11();
  X7();
}

void X14() {
  X12();
  X11();
}

void X15() {
  X11();
  X13();
}

void X16() {
  flip (6/25) {
    if (a) {
      X17();
    }
    else {
      X21();
    }
  }
}

void X17() {
  X13();
  X12();
}

void X18() {
  X14();
  X23();
}

void X19() {
  X16();
  X16();
}

void X20() {
  X16();
  X17();
}

void X21() {
  X24();
  X18();
}

void X22() {
  flip (651/1000) {
    if (a) {
      X25();
    }
    else {
      X18();
    }
  }
}

void X23() {
  flip (11/100) {
    a = false;
    X18();
  }
  else {
    b = true;
    X23();
  }
}

void X24() {
  X21();
  X19();
}

void X25() {
  flip (73/100) {
    b = true;
    X28();
  }
  else {
    b = true;
    X24();
  }
}

void X26() {
  flip (607/1000) {
    if (b) {
      X25();
    }
    else {
      X30();
    }
  }
}

void X27() {
  X22();
  X24();
}

void X28() {
  flip (38/125) {
    b = false;
    X26();
  }
  else {
    b = true;
    X23();
  }
}

void X29() {
  flip (89/1000) {
    if (b) {
      X27();
    }
    else {
      X24();
    }
  }
}

void X30() {
  X24();
  X27();
}

void X31() {
  X25();
  X25();
}

void X32() {
  flip (133/200) {
    if (b) {
      X36();
    }
    else {
      X31();
    }
  }
}

void X33() {
  flip (9/20) {
    b = true;
    X36();
  }
  else {
    a = false;
    X34();
  }
}

void X34() {
  X39();
  X30();
}

void X35() {
  X40();
  X34();
}

void X36() {
  flip (143/1000) {
    a = true;
    X31();
  }
  else {
    a = false;
    X34();
  }
}

void X37() {
  flip (9/10) {
    if (a) {
      X42();
    }
    else {
      X40();
    }
  }
}

void X38() {
  flip (141/200) {
    if (b) {
      X36();
    }
    else {
      X33();
    }
  }
}

void X39() {
  flip (129/500) {
    a = false;
    X41();
  }
  else {
    a = true;
    X38();
  }
}

void X40() {
  X45();
  X34();
}

void X41() {
  flip (431/500) {
    if (a) {
      X40();
    }
    else {
      X42();
    }
  }
}

void X42() {
  flip (173/500) {
    if (b) {
      X41();
    }
    else {
      X37();
    }
  }
}

void X43() {
  flip (301/500) {
    if (b) {
      X37();
    }
    else {
      X37();
    }
  }
}

void X44() {
  flip (323/500) {
    a = false;
    X41();
  }
  else {
    a = false;
    X46();
  }
}

void X45() {
  flip (101/125) {
    a = false;
    X49();
  }
  else {
    a = false;
    X49();
  }
}

void X46() {
  flip (779/1000) {
    if (a) {
      X48();
    }
    else {
      X49();
    }
  }
}

void X47() {
  X47();
  X46();
}

void X48() {
  flip (237/250) {
    if (a) {
      X44();
    }
    else {
      X47();
    }
  }
}

void X49() {
  X50();
  X53();
}

void X50() {
  X51();
  X55();
}

void X51() {
  X51();
  X49();
}

void X52() {
  X48();
  X46();
}

void X53() {
  flip (17/250) {
    b = false;
    X49();
  }
  else {
    b = true;
    X49();
  }
}

void X54() {
  flip (159/1000) {
    if (b) {
      X53();
    }
    else {
      X53();
    }
  }
}

void X55() {
  X55();
  X53();
}

void X56() {
  X56();
  X53();
}

void X57() {
  flip (933/1000) {
    if (b) {
      X57();
    }
    else {
      X57();
    }
  }
}

void X58() {
  flip (153/500) {
    if (a) {
      X62();
    }
    else {
      X62();
    }
  }
}

void X59() {
  X53();
  X64();
}

void X60() {
  X56();
  X62();
}

void X61() {
  flip (357/1000) {
    a = false;
    X63();
  }
  else {
    a = false;
    X62();
  }
}

void X62() {
  X61();
  X56();
}

void X63() {
  flip (881/1000) {
    if (a) {
      X61();
    }
    else {
      X57();
    }
  }
}

void X64() {
  flip (94/125) {
    b = true;
    X67();
  }
  else {
    a = true;
    X61();
  }
}

void X65() {
  flip (81/500) {
    a = false;
    X63();
  }
  else {
    a = false;
    X66();
  }
}

void X66() {
  flip (681/1000) {
    if (b) {
      X63();
    }
    else {
      X61();
    }
  }
}

void X67() {
  X69();
  X66();
}

void X68() {
  X71();
  X72();
}

void X69() {
  X72();
  X74();
}

void X70() {
  flip (999/1000) {
    if (b) {
      X72();
    }
    else {
      X70();
    }
  }
}

void X71() {
  flip (11/40) {
    if (a) {
      X74();
    }
    else {
      X75();
    }
  }
}

void X72() {
  X72();
  X68();
}

void X73() {
  flip (379/1000) {
    b = false;
    X70();
  }
  else {
    a = true;
    X76();
  }
}

void X74() {
  flip (169/500) {
    a = false;
    X68();
  }
  else {
    a = false;
    X79();
  }
}

void X75() {
  X72();
  X77();
}

void X76() {
  X70();
  X72();
}

void X77() {
  flip (479/500) {
    a = true;
    X75();
  }
  else {
    a = true;
    X78();
  }
}

void X78() {
  flip (177/200) {
    if (b) {
      X81();
    }
    else {
      X78();
    }
  }
}

void X79() {
  flip (343/500) {
    b = true;
    X82();
  }
  else {
    b = false;
    X81();
  }
}

void X80() {
  flip (803/1000) {
    a = true;
    X76();
  }
  else {
    b = false;
    X84();
  }
}

void X81() {
  X81();
  X81();
}

void X82() {
  flip (477/1000) {
    if (b) {
      X85();
    }
    else {
      X82();
    }
  }
}

void X83() {
  flip (109/500) {
    a = false;
    X82();
  }
  else {
    a = true;
    X78();
  }
}

void X84() {
  X86();
  X83();
}

void X85() {
  flip (329/500) {
    if (b) {
      X89();
    }
    else {
      X83();
    }
  }
}

void X86() {
  flip (81/125) {
    if (b) {
      X90();
    }
    else {
      X84();
    }
  }
}

void X87() {
  flip (469/500) {
    b = false;
    X83();
  }
  else {
    a = false;
    X81();
  }
}

void X88() {
  X91();
  X89();
}

void X89() {
  flip (249/1000) {
    a = true;
    X90();
  }
  else {
    b = false;
    X83();
  }
}

void X90() {
  X92();
  X92();
}

void X91() {
  flip (73/200) {
    a = true;
    X93();
  }
  else {
    b = false;
    X85();
  }
}

void X92() {
  flip (81/1000) {
    a = false;
    X87();
  }
  else {
    a = true;
    X87();
  }
}

void X93() {
  flip (207/250) {
    b = true;
    X91();
  }
  else {
    a = true;
    X91();
  }
}

void X94() {
  flip (157/200) {
    b = true;
    X95();
  }
  else {
    b = false;
    X96();
  }
}

void X95() {
  flip (353/500) {
    b = true;
    X97();
  }
  else {
    b = false;
    X90();
  }
}

void X96() {
  X98();
  X98();
}

void X97() {
  flip (72/125) {
    if (b) {
      X1();
    }
    else {
      X2();
    }
  }
}

void X98() {
  X96();
  X94();
}

void X99() {
  X4();
  X95();
}
