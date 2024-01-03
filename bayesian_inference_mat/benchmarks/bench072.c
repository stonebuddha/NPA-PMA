bool a;
bool b;

void X0() {
  flip (499/1000) {
    if (b) {
      X97();
    }
    else {
      X1();
    }
  }
}

void X1() {
  X95();
  X3();
}

void X2() {
  flip (851/1000) {
    if (a) {
      X1();
    }
    else {
      X2();
    }
  }
}

void X3() {
  flip (16/125) {
    if (a) {
      X98();
    }
    else {
      X4();
    }
  }
}

void X4() {
  flip (51/1000) {
    if (a) {
      X99();
    }
    else {
      X8();
    }
  }
}

void X5() {
  flip (957/1000) {
    b = false;
    X0();
  }
  else {
    a = true;
    X5();
  }
}

void X6() {
  flip (17/125) {
    if (b) {
      X10();
    }
    else {
      X10();
    }
  }
}

void X7() {
  X2();
  X8();
}

void X8() {
  X6();
  X11();
}

void X9() {
  flip (143/200) {
    b = false;
    X5();
  }
  else {
    b = false;
    X14();
  }
}

void X10() {
  flip (359/1000) {
    a = true;
    X10();
  }
  else {
    a = true;
    X6();
  }
}

void X11() {
  flip (121/200) {
    if (b) {
      X15();
    }
    else {
      X9();
    }
  }
}

void X12() {
  flip (47/1000) {
    a = false;
    X17();
  }
  else {
    a = false;
    X11();
  }
}

void X13() {
  X10();
  X16();
}

void X14() {
  flip (543/1000) {
    a = true;
    X12();
  }
  else {
    a = false;
    X13();
  }
}

void X15() {
  X13();
  X17();
}

void X16() {
  flip (23/100) {
    if (b) {
      X11();
    }
    else {
      X13();
    }
  }
}

void X17() {
  flip (657/1000) {
    if (a) {
      X15();
    }
    else {
      X12();
    }
  }
}

void X18() {
  flip (17/40) {
    b = true;
    X14();
  }
  else {
    b = false;
    X15();
  }
}

void X19() {
  X23();
  X15();
}

void X20() {
  X15();
  X20();
}

void X21() {
  X21();
  X24();
}

void X22() {
  flip (239/1000) {
    if (a) {
      X24();
    }
    else {
      X20();
    }
  }
}

void X23() {
  flip (11/250) {
    b = false;
    X26();
  }
  else {
    b = true;
    X20();
  }
}

void X24() {
  flip (919/1000) {
    if (a) {
      X23();
    }
    else {
      X18();
    }
  }
}

void X25() {
  flip (173/200) {
    b = false;
    X26();
  }
  else {
    b = true;
    X25();
  }
}

void X26() {
  X27();
  X23();
}

void X27() {
  X27();
  X26();
}

void X28() {
  flip (499/500) {
    b = false;
    X33();
  }
  else {
    b = false;
    X26();
  }
}

void X29() {
  flip (57/500) {
    if (b) {
      X28();
    }
    else {
      X24();
    }
  }
}

void X30() {
  flip (979/1000) {
    if (a) {
      X25();
    }
    else {
      X26();
    }
  }
}

void X31() {
  X32();
  X32();
}

void X32() {
  X26();
  X34();
}

void X33() {
  flip (837/1000) {
    if (a) {
      X31();
    }
    else {
      X31();
    }
  }
}

void X34() {
  X38();
  X38();
}

void X35() {
  X32();
  X40();
}

void X36() {
  flip (491/500) {
    if (b) {
      X31();
    }
    else {
      X33();
    }
  }
}

void X37() {
  flip (121/1000) {
    if (b) {
      X42();
    }
    else {
      X39();
    }
  }
}

void X38() {
  flip (17/200) {
    b = false;
    X35();
  }
  else {
    b = true;
    X40();
  }
}

void X39() {
  flip (119/1000) {
    if (a) {
      X37();
    }
    else {
      X37();
    }
  }
}

void X40() {
  flip (119/500) {
    a = true;
    X42();
  }
  else {
    b = true;
    X39();
  }
}

void X41() {
  flip (83/250) {
    a = false;
    X42();
  }
  else {
    b = true;
    X37();
  }
}

void X42() {
  flip (233/500) {
    b = false;
    X47();
  }
  else {
    b = false;
    X36();
  }
}

void X43() {
  flip (807/1000) {
    b = true;
    X42();
  }
  else {
    b = true;
    X47();
  }
}

void X44() {
  X38();
  X48();
}

void X45() {
  X48();
  X45();
}

void X46() {
  flip (273/500) {
    a = false;
    X51();
  }
  else {
    b = true;
    X45();
  }
}

void X47() {
  flip (47/200) {
    if (a) {
      X45();
    }
    else {
      X41();
    }
  }
}

void X48() {
  flip (107/200) {
    a = false;
    X43();
  }
  else {
    a = false;
    X47();
  }
}

void X49() {
  X54();
  X43();
}

void X50() {
  flip (333/1000) {
    a = true;
    X52();
  }
  else {
    a = true;
    X52();
  }
}

void X51() {
  flip (7/200) {
    b = true;
    X49();
  }
  else {
    a = false;
    X53();
  }
}

void X52() {
  X55();
  X52();
}

void X53() {
  X47();
  X55();
}

void X54() {
  flip (83/500) {
    if (a) {
      X49();
    }
    else {
      X49();
    }
  }
}

void X55() {
  flip (713/1000) {
    b = false;
    X55();
  }
  else {
    a = false;
    X50();
  }
}

void X56() {
  flip (99/250) {
    b = true;
    X54();
  }
  else {
    a = false;
    X52();
  }
}

void X57() {
  flip (611/1000) {
    if (b) {
      X61();
    }
    else {
      X61();
    }
  }
}

void X58() {
  flip (99/500) {
    if (b) {
      X55();
    }
    else {
      X52();
    }
  }
}

void X59() {
  flip (933/1000) {
    if (b) {
      X64();
    }
    else {
      X54();
    }
  }
}

void X60() {
  flip (223/250) {
    if (a) {
      X61();
    }
    else {
      X60();
    }
  }
}

void X61() {
  flip (5/8) {
    a = true;
    X60();
  }
  else {
    a = true;
    X61();
  }
}

void X62() {
  flip (116/125) {
    if (a) {
      X64();
    }
    else {
      X67();
    }
  }
}

void X63() {
  X63();
  X65();
}

void X64() {
  flip (2/125) {
    if (b) {
      X64();
    }
    else {
      X65();
    }
  }
}

void X65() {
  X63();
  X70();
}

void X66() {
  flip (483/1000) {
    b = true;
    X62();
  }
  else {
    a = false;
    X63();
  }
}

void X67() {
  flip (221/1000) {
    a = true;
    X68();
  }
  else {
    a = true;
    X71();
  }
}

void X68() {
  X70();
  X63();
}

void X69() {
  flip (217/250) {
    a = true;
    X69();
  }
  else {
    a = true;
    X67();
  }
}

void X70() {
  flip (237/500) {
    if (b) {
      X73();
    }
    else {
      X75();
    }
  }
}

void X71() {
  flip (57/1000) {
    a = false;
    X76();
  }
  else {
    a = false;
    X65();
  }
}

void X72() {
  flip (527/1000) {
    if (b) {
      X71();
    }
    else {
      X75();
    }
  }
}

void X73() {
  flip (9/200) {
    if (a) {
      X78();
    }
    else {
      X77();
    }
  }
}

void X74() {
  X76();
  X75();
}

void X75() {
  flip (159/500) {
    if (a) {
      X75();
    }
    else {
      X78();
    }
  }
}

void X76() {
  flip (59/500) {
    if (b) {
      X72();
    }
    else {
      X79();
    }
  }
}

void X77() {
  X79();
  X78();
}

void X78() {
  X82();
  X82();
}

void X79() {
  flip (157/1000) {
    if (a) {
      X83();
    }
    else {
      X77();
    }
  }
}

void X80() {
  flip (539/1000) {
    b = false;
    X79();
  }
  else {
    a = false;
    X76();
  }
}

void X81() {
  flip (9/500) {
    if (b) {
      X79();
    }
    else {
      X86();
    }
  }
}

void X82() {
  X82();
  X83();
}

void X83() {
  flip (289/500) {
    a = false;
    X77();
  }
  else {
    a = false;
    X84();
  }
}

void X84() {
  flip (249/1000) {
    if (b) {
      X84();
    }
    else {
      X89();
    }
  }
}

void X85() {
  X90();
  X82();
}

void X86() {
  flip (301/1000) {
    a = true;
    X83();
  }
  else {
    a = false;
    X83();
  }
}

void X87() {
  flip (23/100) {
    b = true;
    X86();
  }
  else {
    a = true;
    X81();
  }
}

void X88() {
  flip (179/200) {
    b = false;
    X82();
  }
  else {
    a = true;
    X91();
  }
}

void X89() {
  flip (233/250) {
    b = true;
    X87();
  }
  else {
    a = true;
    X85();
  }
}

void X90() {
  flip (323/500) {
    a = true;
    X93();
  }
  else {
    a = false;
    X94();
  }
}

void X91() {
  flip (689/1000) {
    if (a) {
      X95();
    }
    else {
      X86();
    }
  }
}

void X92() {
  flip (1/1000) {
    a = true;
    X87();
  }
  else {
    a = true;
    X92();
  }
}

void X93() {
  flip (169/200) {
    if (a) {
      X94();
    }
    else {
      X93();
    }
  }
}

void X94() {
  flip (37/50) {
    a = false;
    X97();
  }
  else {
    a = true;
    X90();
  }
}

void X95() {
  flip (17/100) {
    if (a) {
      X93();
    }
    else {
      X97();
    }
  }
}

void X96() {
  flip (563/1000) {
    b = false;
    X94();
  }
  else {
    a = true;
    X94();
  }
}

void X97() {
  flip (213/1000) {
    if (b) {
      X91();
    }
    else {
      X97();
    }
  }
}

void X98() {
  flip (11/40) {
    if (b) {
      X92();
    }
    else {
      X98();
    }
  }
}

void X99() {
  flip (287/500) {
    if (b) {
      X2();
    }
    else {
      X93();
    }
  }
}
