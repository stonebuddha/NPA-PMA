bool a;
bool b;

void X0() {
  flip (31/50) {
    a = true;
    X94();
  }
  else {
    a = true;
    X99();
  }
}

void X1() {
  flip (391/1000) {
    if (b) {
      X96();
    }
    else {
      X95();
    }
  }
}

void X2() {
  X5();
  X2();
}

void X3() {
  X5();
  X98();
}

void X4() {
  X9();
  X9();
}

void X5() {
  X7();
  X1();
}

void X6() {
  X2();
  X11();
}

void X7() {
  flip (513/1000) {
    if (a) {
      X5();
    }
    else {
      X5();
    }
  }
}

void X8() {
  X11();
  X10();
}

void X9() {
  flip (879/1000) {
    b = false;
    X14();
  }
  else {
    b = false;
    X9();
  }
}

void X10() {
  flip (111/250) {
    a = true;
    X11();
  }
  else {
    a = false;
    X7();
  }
}

void X11() {
  X6();
  X5();
}

void X12() {
  X10();
  X7();
}

void X13() {
  flip (403/500) {
    a = false;
    X8();
  }
  else {
    a = true;
    X18();
  }
}

void X14() {
  flip (141/500) {
    if (b) {
      X8();
    }
    else {
      X10();
    }
  }
}

void X15() {
  flip (161/250) {
    a = true;
    X17();
  }
  else {
    b = false;
    X19();
  }
}

void X16() {
  flip (1/100) {
    b = false;
    X16();
  }
  else {
    b = false;
    X21();
  }
}

void X17() {
  flip (463/500) {
    if (b) {
      X21();
    }
    else {
      X19();
    }
  }
}

void X18() {
  X21();
  X12();
}

void X19() {
  flip (49/1000) {
    if (b) {
      X17();
    }
    else {
      X21();
    }
  }
}

void X20() {
  X17();
  X16();
}

void X21() {
  flip (71/200) {
    if (b) {
      X23();
    }
    else {
      X17();
    }
  }
}

void X22() {
  flip (171/250) {
    if (b) {
      X23();
    }
    else {
      X19();
    }
  }
}

void X23() {
  flip (273/500) {
    if (b) {
      X20();
    }
    else {
      X25();
    }
  }
}

void X24() {
  flip (51/500) {
    if (a) {
      X23();
    }
    else {
      X21();
    }
  }
}

void X25() {
  flip (37/50) {
    a = true;
    X27();
  }
  else {
    b = false;
    X30();
  }
}

void X26() {
  flip (24/125) {
    b = true;
    X29();
  }
  else {
    b = false;
    X23();
  }
}

void X27() {
  X21();
  X23();
}

void X28() {
  X30();
  X26();
}

void X29() {
  flip (233/500) {
    a = false;
    X25();
  }
  else {
    a = true;
    X23();
  }
}

void X30() {
  flip (53/125) {
    if (a) {
      X35();
    }
    else {
      X33();
    }
  }
}

void X31() {
  flip (277/1000) {
    b = true;
    X35();
  }
  else {
    a = true;
    X29();
  }
}

void X32() {
  flip (127/250) {
    b = true;
    X36();
  }
  else {
    b = true;
    X33();
  }
}

void X33() {
  flip (113/200) {
    if (a) {
      X37();
    }
    else {
      X36();
    }
  }
}

void X34() {
  X36();
  X30();
}

void X35() {
  flip (9/20) {
    if (b) {
      X30();
    }
    else {
      X40();
    }
  }
}

void X36() {
  flip (113/1000) {
    if (b) {
      X35();
    }
    else {
      X30();
    }
  }
}

void X37() {
  X34();
  X42();
}

void X38() {
  flip (31/1000) {
    if (b) {
      X41();
    }
    else {
      X40();
    }
  }
}

void X39() {
  flip (323/1000) {
    b = true;
    X43();
  }
  else {
    a = true;
    X42();
  }
}

void X40() {
  X36();
  X44();
}

void X41() {
  flip (3/4) {
    if (a) {
      X37();
    }
    else {
      X36();
    }
  }
}

void X42() {
  flip (17/1000) {
    b = false;
    X38();
  }
  else {
    a = false;
    X45();
  }
}

void X43() {
  flip (989/1000) {
    b = true;
    X37();
  }
  else {
    a = false;
    X45();
  }
}

void X44() {
  flip (491/500) {
    if (a) {
      X44();
    }
    else {
      X46();
    }
  }
}

void X45() {
  X39();
  X44();
}

void X46() {
  X46();
  X45();
}

void X47() {
  X43();
  X51();
}

void X48() {
  flip (101/250) {
    b = false;
    X51();
  }
  else {
    a = false;
    X46();
  }
}

void X49() {
  flip (69/500) {
    a = false;
    X53();
  }
  else {
    b = true;
    X49();
  }
}

void X50() {
  flip (7/25) {
    b = false;
    X51();
  }
  else {
    b = true;
    X49();
  }
}

void X51() {
  X56();
  X50();
}

void X52() {
  flip (83/500) {
    if (a) {
      X56();
    }
    else {
      X48();
    }
  }
}

void X53() {
  X49();
  X51();
}

void X54() {
  flip (817/1000) {
    a = false;
    X54();
  }
  else {
    b = false;
    X56();
  }
}

void X55() {
  flip (219/500) {
    b = false;
    X59();
  }
  else {
    b = false;
    X57();
  }
}

void X56() {
  flip (313/500) {
    if (a) {
      X51();
    }
    else {
      X52();
    }
  }
}

void X57() {
  X54();
  X54();
}

void X58() {
  flip (107/200) {
    if (a) {
      X54();
    }
    else {
      X59();
    }
  }
}

void X59() {
  X53();
  X62();
}

void X60() {
  X55();
  X61();
}

void X61() {
  flip (18/25) {
    if (b) {
      X64();
    }
    else {
      X66();
    }
  }
}

void X62() {
  flip (3/250) {
    b = true;
    X62();
  }
  else {
    b = false;
    X57();
  }
}

void X63() {
  flip (241/1000) {
    if (b) {
      X68();
    }
    else {
      X58();
    }
  }
}

void X64() {
  flip (289/1000) {
    if (b) {
      X67();
    }
    else {
      X68();
    }
  }
}

void X65() {
  X60();
  X60();
}

void X66() {
  flip (769/1000) {
    if (b) {
      X60();
    }
    else {
      X66();
    }
  }
}

void X67() {
  flip (42/125) {
    b = false;
    X61();
  }
  else {
    b = false;
    X63();
  }
}

void X68() {
  X65();
  X65();
}

void X69() {
  flip (81/1000) {
    b = true;
    X70();
  }
  else {
    b = false;
    X70();
  }
}

void X70() {
  X74();
  X64();
}

void X71() {
  flip (257/500) {
    a = true;
    X66();
  }
  else {
    b = false;
    X73();
  }
}

void X72() {
  X69();
  X73();
}

void X73() {
  X69();
  X75();
}

void X74() {
  flip (233/1000) {
    a = true;
    X69();
  }
  else {
    b = true;
    X79();
  }
}

void X75() {
  X79();
  X74();
}

void X76() {
  flip (107/250) {
    if (a) {
      X78();
    }
    else {
      X78();
    }
  }
}

void X77() {
  X78();
  X74();
}

void X78() {
  flip (183/1000) {
    a = true;
    X80();
  }
  else {
    b = false;
    X81();
  }
}

void X79() {
  flip (161/200) {
    b = false;
    X81();
  }
  else {
    b = false;
    X83();
  }
}

void X80() {
  X75();
  X85();
}

void X81() {
  X79();
  X78();
}

void X82() {
  flip (2/25) {
    b = false;
    X85();
  }
  else {
    a = true;
    X80();
  }
}

void X83() {
  X77();
  X87();
}

void X84() {
  flip (897/1000) {
    b = true;
    X83();
  }
  else {
    a = true;
    X84();
  }
}

void X85() {
  flip (29/50) {
    if (a) {
      X88();
    }
    else {
      X88();
    }
  }
}

void X86() {
  flip (94/125) {
    if (b) {
      X81();
    }
    else {
      X86();
    }
  }
}

void X87() {
  flip (333/500) {
    if (a) {
      X88();
    }
    else {
      X83();
    }
  }
}

void X88() {
  flip (987/1000) {
    a = false;
    X91();
  }
  else {
    a = true;
    X82();
  }
}

void X89() {
  flip (331/500) {
    b = true;
    X85();
  }
  else {
    a = true;
    X84();
  }
}

void X90() {
  X91();
  X84();
}

void X91() {
  flip (167/200) {
    if (b) {
      X91();
    }
    else {
      X86();
    }
  }
}

void X92() {
  X91();
  X86();
}

void X93() {
  flip (219/500) {
    b = false;
    X95();
  }
  else {
    a = true;
    X95();
  }
}

void X94() {
  X89();
  X98();
}

void X95() {
  flip (951/1000) {
    b = false;
    X89();
  }
  else {
    a = false;
    X97();
  }
}

void X96() {
  flip (387/500) {
    a = false;
    X98();
  }
  else {
    b = false;
    X96();
  }
}

void X97() {
  flip (54/125) {
    if (a) {
      X94();
    }
    else {
      X93();
    }
  }
}

void X98() {
  flip (47/100) {
    b = true;
    X92();
  }
  else {
    b = false;
    X95();
  }
}

void X99() {
  X3();
  X98();
}
