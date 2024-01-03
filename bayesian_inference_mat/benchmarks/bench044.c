bool a;
bool b;

void X0() {
  X97();
  X1();
}

void X1() {
  X4();
  X95();
}

void X2() {
  X5();
  X4();
}

void X3() {
  flip (179/200) {
    if (a) {
      X1();
    }
    else {
      X2();
    }
  }
}

void X4() {
  X9();
  X3();
}

void X5() {
  X5();
  X9();
}

void X6() {
  X8();
  X4();
}

void X7() {
  flip (19/100) {
    b = false;
    X4();
  }
  else {
    a = true;
    X6();
  }
}

void X8() {
  flip (873/1000) {
    if (b) {
      X13();
    }
    else {
      X3();
    }
  }
}

void X9() {
  X5();
  X8();
}

void X10() {
  flip (84/125) {
    b = false;
    X14();
  }
  else {
    a = true;
    X6();
  }
}

void X11() {
  flip (293/1000) {
    b = true;
    X8();
  }
  else {
    a = false;
    X16();
  }
}

void X12() {
  X6();
  X10();
}

void X13() {
  X9();
  X17();
}

void X14() {
  flip (963/1000) {
    b = false;
    X9();
  }
  else {
    b = false;
    X10();
  }
}

void X15() {
  X10();
  X17();
}

void X16() {
  flip (96/125) {
    a = false;
    X20();
  }
  else {
    b = false;
    X14();
  }
}

void X17() {
  X17();
  X14();
}

void X18() {
  X12();
  X13();
}

void X19() {
  flip (3/40) {
    a = true;
    X22();
  }
  else {
    b = false;
    X21();
  }
}

void X20() {
  flip (159/500) {
    a = true;
    X21();
  }
  else {
    a = false;
    X15();
  }
}

void X21() {
  flip (367/500) {
    if (b) {
      X19();
    }
    else {
      X17();
    }
  }
}

void X22() {
  flip (639/1000) {
    if (b) {
      X18();
    }
    else {
      X27();
    }
  }
}

void X23() {
  flip (497/1000) {
    b = true;
    X27();
  }
  else {
    a = true;
    X26();
  }
}

void X24() {
  X20();
  X22();
}

void X25() {
  X23();
  X29();
}

void X26() {
  flip (67/1000) {
    if (a) {
      X27();
    }
    else {
      X25();
    }
  }
}

void X27() {
  X30();
  X27();
}

void X28() {
  X25();
  X26();
}

void X29() {
  flip (229/250) {
    if (a) {
      X33();
    }
    else {
      X33();
    }
  }
}

void X30() {
  X28();
  X26();
}

void X31() {
  X33();
  X31();
}

void X32() {
  flip (411/1000) {
    if (a) {
      X36();
    }
    else {
      X31();
    }
  }
}

void X33() {
  flip (323/500) {
    a = true;
    X31();
  }
  else {
    b = true;
    X38();
  }
}

void X34() {
  X34();
  X37();
}

void X35() {
  flip (14/25) {
    b = false;
    X37();
  }
  else {
    a = true;
    X40();
  }
}

void X36() {
  flip (21/25) {
    if (b) {
      X40();
    }
    else {
      X33();
    }
  }
}

void X37() {
  X35();
  X34();
}

void X38() {
  flip (529/1000) {
    b = false;
    X43();
  }
  else {
    b = false;
    X33();
  }
}

void X39() {
  flip (543/1000) {
    a = false;
    X43();
  }
  else {
    b = false;
    X41();
  }
}

void X40() {
  flip (31/1000) {
    b = true;
    X38();
  }
  else {
    a = true;
    X34();
  }
}

void X41() {
  flip (169/250) {
    a = true;
    X35();
  }
  else {
    a = true;
    X36();
  }
}

void X42() {
  flip (64/125) {
    b = false;
    X46();
  }
  else {
    b = true;
    X36();
  }
}

void X43() {
  flip (33/500) {
    b = false;
    X40();
  }
  else {
    b = true;
    X46();
  }
}

void X44() {
  flip (217/250) {
    b = false;
    X49();
  }
  else {
    b = false;
    X49();
  }
}

void X45() {
  flip (911/1000) {
    b = false;
    X50();
  }
  else {
    b = false;
    X49();
  }
}

void X46() {
  X45();
  X47();
}

void X47() {
  flip (27/500) {
    if (b) {
      X46();
    }
    else {
      X42();
    }
  }
}

void X48() {
  flip (91/1000) {
    if (b) {
      X48();
    }
    else {
      X46();
    }
  }
}

void X49() {
  flip (641/1000) {
    if (a) {
      X44();
    }
    else {
      X52();
    }
  }
}

void X50() {
  flip (11/1000) {
    a = false;
    X55();
  }
  else {
    a = true;
    X50();
  }
}

void X51() {
  flip (189/1000) {
    if (b) {
      X55();
    }
    else {
      X47();
    }
  }
}

void X52() {
  flip (122/125) {
    if (a) {
      X47();
    }
    else {
      X49();
    }
  }
}

void X53() {
  X50();
  X51();
}

void X54() {
  flip (173/1000) {
    if (a) {
      X57();
    }
    else {
      X50();
    }
  }
}

void X55() {
  X56();
  X58();
}

void X56() {
  flip (171/500) {
    a = true;
    X51();
  }
  else {
    a = false;
    X60();
  }
}

void X57() {
  X54();
  X52();
}

void X58() {
  flip (397/500) {
    b = true;
    X60();
  }
  else {
    a = true;
    X61();
  }
}

void X59() {
  X63();
  X63();
}

void X60() {
  X65();
  X54();
}

void X61() {
  flip (953/1000) {
    a = false;
    X59();
  }
  else {
    b = false;
    X58();
  }
}

void X62() {
  flip (371/500) {
    a = false;
    X61();
  }
  else {
    a = true;
    X63();
  }
}

void X63() {
  flip (139/250) {
    b = false;
    X66();
  }
  else {
    b = true;
    X62();
  }
}

void X64() {
  flip (519/1000) {
    if (a) {
      X59();
    }
    else {
      X67();
    }
  }
}

void X65() {
  flip (917/1000) {
    b = true;
    X62();
  }
  else {
    b = false;
    X64();
  }
}

void X66() {
  X70();
  X63();
}

void X67() {
  flip (17/1000) {
    a = true;
    X70();
  }
  else {
    a = false;
    X71();
  }
}

void X68() {
  flip (47/100) {
    b = false;
    X67();
  }
  else {
    a = false;
    X65();
  }
}

void X69() {
  flip (427/1000) {
    if (b) {
      X73();
    }
    else {
      X64();
    }
  }
}

void X70() {
  flip (1/5) {
    a = true;
    X64();
  }
  else {
    a = false;
    X67();
  }
}

void X71() {
  X70();
  X74();
}

void X72() {
  flip (133/250) {
    b = false;
    X66();
  }
  else {
    b = true;
    X73();
  }
}

void X73() {
  flip (823/1000) {
    b = false;
    X73();
  }
  else {
    a = false;
    X77();
  }
}

void X74() {
  X69();
  X77();
}

void X75() {
  flip (583/1000) {
    if (a) {
      X70();
    }
    else {
      X69();
    }
  }
}

void X76() {
  flip (911/1000) {
    b = true;
    X72();
  }
  else {
    b = true;
    X72();
  }
}

void X77() {
  flip (813/1000) {
    if (b) {
      X76();
    }
    else {
      X72();
    }
  }
}

void X78() {
  X74();
  X74();
}

void X79() {
  flip (543/1000) {
    if (b) {
      X74();
    }
    else {
      X84();
    }
  }
}

void X80() {
  flip (93/250) {
    if (a) {
      X83();
    }
    else {
      X83();
    }
  }
}

void X81() {
  flip (223/250) {
    a = false;
    X82();
  }
  else {
    b = false;
    X79();
  }
}

void X82() {
  flip (39/50) {
    if (b) {
      X83();
    }
    else {
      X77();
    }
  }
}

void X83() {
  flip (787/1000) {
    if (a) {
      X87();
    }
    else {
      X88();
    }
  }
}

void X84() {
  X86();
  X78();
}

void X85() {
  flip (361/1000) {
    b = true;
    X88();
  }
  else {
    b = false;
    X82();
  }
}

void X86() {
  X88();
  X80();
}

void X87() {
  flip (103/200) {
    b = false;
    X91();
  }
  else {
    a = false;
    X91();
  }
}

void X88() {
  flip (293/500) {
    if (b) {
      X89();
    }
    else {
      X89();
    }
  }
}

void X89() {
  flip (233/250) {
    b = false;
    X94();
  }
  else {
    b = false;
    X88();
  }
}

void X90() {
  flip (187/1000) {
    b = false;
    X88();
  }
  else {
    a = false;
    X85();
  }
}

void X91() {
  flip (253/500) {
    if (a) {
      X89();
    }
    else {
      X85();
    }
  }
}

void X92() {
  flip (907/1000) {
    b = true;
    X87();
  }
  else {
    a = false;
    X90();
  }
}

void X93() {
  flip (7/50) {
    if (a) {
      X87();
    }
    else {
      X87();
    }
  }
}

void X94() {
  X92();
  X89();
}

void X95() {
  X89();
  X98();
}

void X96() {
  flip (497/500) {
    if (b) {
      X94();
    }
    else {
      X91();
    }
  }
}

void X97() {
  flip (151/500) {
    b = false;
    X99();
  }
  else {
    b = false;
    X2();
  }
}

void X98() {
  X94();
  X95();
}

void X99() {
  flip (221/250) {
    if (a) {
      X97();
    }
    else {
      X3();
    }
  }
}
