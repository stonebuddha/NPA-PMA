bool a;
bool b;

void X0() {
  flip (59/500) {
    a = true;
    X2();
  }
  else {
    a = true;
    X5();
  }
}

void X1() {
  X99();
  X2();
}

void X2() {
  flip (161/250) {
    if (a) {
      X7();
    }
    else {
      X6();
    }
  }
}

void X3() {
  flip (429/500) {
    a = true;
    X7();
  }
  else {
    b = false;
    X2();
  }
}

void X4() {
  flip (377/1000) {
    a = false;
    X99();
  }
  else {
    b = true;
    X99();
  }
}

void X5() {
  X1();
  X4();
}

void X6() {
  flip (91/125) {
    a = true;
    X3();
  }
  else {
    b = false;
    X5();
  }
}

void X7() {
  flip (599/1000) {
    if (b) {
      X8();
    }
    else {
      X10();
    }
  }
}

void X8() {
  flip (351/500) {
    if (b) {
      X13();
    }
    else {
      X11();
    }
  }
}

void X9() {
  flip (531/1000) {
    a = false;
    X4();
  }
  else {
    b = true;
    X8();
  }
}

void X10() {
  X6();
  X5();
}

void X11() {
  X16();
  X16();
}

void X12() {
  X13();
  X17();
}

void X13() {
  X11();
  X8();
}

void X14() {
  flip (663/1000) {
    if (a) {
      X8();
    }
    else {
      X9();
    }
  }
}

void X15() {
  X19();
  X17();
}

void X16() {
  X14();
  X16();
}

void X17() {
  X11();
  X14();
}

void X18() {
  flip (87/500) {
    b = false;
    X22();
  }
  else {
    a = false;
    X15();
  }
}

void X19() {
  flip (819/1000) {
    b = false;
    X15();
  }
  else {
    a = true;
    X13();
  }
}

void X20() {
  flip (149/1000) {
    a = true;
    X17();
  }
  else {
    b = false;
    X16();
  }
}

void X21() {
  flip (69/100) {
    b = true;
    X23();
  }
  else {
    b = true;
    X19();
  }
}

void X22() {
  flip (109/500) {
    b = true;
    X19();
  }
  else {
    a = true;
    X19();
  }
}

void X23() {
  flip (69/200) {
    a = true;
    X24();
  }
  else {
    a = true;
    X19();
  }
}

void X24() {
  X26();
  X24();
}

void X25() {
  flip (79/200) {
    if (a) {
      X25();
    }
    else {
      X23();
    }
  }
}

void X26() {
  flip (147/250) {
    a = false;
    X27();
  }
  else {
    a = true;
    X26();
  }
}

void X27() {
  X22();
  X32();
}

void X28() {
  flip (653/1000) {
    b = true;
    X26();
  }
  else {
    a = true;
    X33();
  }
}

void X29() {
  X34();
  X34();
}

void X30() {
  flip (599/1000) {
    a = true;
    X31();
  }
  else {
    b = true;
    X28();
  }
}

void X31() {
  flip (38/125) {
    if (a) {
      X34();
    }
    else {
      X25();
    }
  }
}

void X32() {
  flip (7/1000) {
    a = true;
    X37();
  }
  else {
    b = false;
    X31();
  }
}

void X33() {
  X32();
  X35();
}

void X34() {
  X38();
  X34();
}

void X35() {
  X36();
  X37();
}

void X36() {
  X40();
  X30();
}

void X37() {
  flip (17/40) {
    b = true;
    X39();
  }
  else {
    a = false;
    X36();
  }
}

void X38() {
  X43();
  X42();
}

void X39() {
  flip (159/1000) {
    if (a) {
      X41();
    }
    else {
      X37();
    }
  }
}

void X40() {
  X34();
  X40();
}

void X41() {
  flip (291/1000) {
    if (a) {
      X36();
    }
    else {
      X39();
    }
  }
}

void X42() {
  X38();
  X37();
}

void X43() {
  flip (1/20) {
    if (b) {
      X40();
    }
    else {
      X39();
    }
  }
}

void X44() {
  flip (279/500) {
    b = true;
    X43();
  }
  else {
    b = true;
    X42();
  }
}

void X45() {
  flip (451/1000) {
    b = true;
    X50();
  }
  else {
    a = true;
    X41();
  }
}

void X46() {
  X44();
  X43();
}

void X47() {
  flip (933/1000) {
    a = false;
    X52();
  }
  else {
    b = true;
    X44();
  }
}

void X48() {
  flip (3/40) {
    a = false;
    X50();
  }
  else {
    b = true;
    X43();
  }
}

void X49() {
  X46();
  X44();
}

void X50() {
  X45();
  X52();
}

void X51() {
  X47();
  X51();
}

void X52() {
  X57();
  X51();
}

void X53() {
  flip (689/1000) {
    a = false;
    X50();
  }
  else {
    a = true;
    X50();
  }
}

void X54() {
  flip (777/1000) {
    if (a) {
      X57();
    }
    else {
      X51();
    }
  }
}

void X55() {
  flip (101/250) {
    if (a) {
      X59();
    }
    else {
      X55();
    }
  }
}

void X56() {
  flip (89/1000) {
    if (a) {
      X51();
    }
    else {
      X57();
    }
  }
}

void X57() {
  X51();
  X56();
}

void X58() {
  flip (11/40) {
    b = false;
    X55();
  }
  else {
    a = true;
    X63();
  }
}

void X59() {
  flip (393/1000) {
    b = false;
    X56();
  }
  else {
    a = true;
    X56();
  }
}

void X60() {
  flip (343/1000) {
    b = false;
    X57();
  }
  else {
    a = false;
    X62();
  }
}

void X61() {
  X55();
  X65();
}

void X62() {
  X59();
  X63();
}

void X63() {
  flip (52/125) {
    if (b) {
      X61();
    }
    else {
      X57();
    }
  }
}

void X64() {
  X61();
  X58();
}

void X65() {
  flip (321/1000) {
    if (b) {
      X70();
    }
    else {
      X59();
    }
  }
}

void X66() {
  flip (33/1000) {
    if (b) {
      X61();
    }
    else {
      X62();
    }
  }
}

void X67() {
  X65();
  X66();
}

void X68() {
  flip (102/125) {
    b = false;
    X63();
  }
  else {
    b = false;
    X64();
  }
}

void X69() {
  flip (983/1000) {
    a = true;
    X64();
  }
  else {
    a = false;
    X73();
  }
}

void X70() {
  X71();
  X74();
}

void X71() {
  X74();
  X75();
}

void X72() {
  flip (108/125) {
    a = true;
    X66();
  }
  else {
    b = false;
    X73();
  }
}

void X73() {
  flip (303/500) {
    a = true;
    X77();
  }
  else {
    b = true;
    X75();
  }
}

void X74() {
  flip (299/1000) {
    if (b) {
      X79();
    }
    else {
      X77();
    }
  }
}

void X75() {
  flip (349/1000) {
    b = false;
    X73();
  }
  else {
    a = true;
    X74();
  }
}

void X76() {
  X77();
  X74();
}

void X77() {
  X81();
  X80();
}

void X78() {
  flip (79/100) {
    a = true;
    X75();
  }
  else {
    a = true;
    X79();
  }
}

void X79() {
  flip (17/20) {
    if (b) {
      X74();
    }
    else {
      X84();
    }
  }
}

void X80() {
  flip (267/1000) {
    if (b) {
      X80();
    }
    else {
      X75();
    }
  }
}

void X81() {
  flip (267/1000) {
    b = true;
    X85();
  }
  else {
    a = true;
    X85();
  }
}

void X82() {
  flip (267/1000) {
    if (b) {
      X85();
    }
    else {
      X86();
    }
  }
}

void X83() {
  flip (577/1000) {
    b = true;
    X85();
  }
  else {
    b = true;
    X80();
  }
}

void X84() {
  X87();
  X85();
}

void X85() {
  X87();
  X90();
}

void X86() {
  flip (47/125) {
    if (a) {
      X84();
    }
    else {
      X82();
    }
  }
}

void X87() {
  flip (3/1000) {
    if (a) {
      X87();
    }
    else {
      X83();
    }
  }
}

void X88() {
  flip (26/125) {
    b = true;
    X88();
  }
  else {
    a = false;
    X86();
  }
}

void X89() {
  flip (887/1000) {
    if (a) {
      X85();
    }
    else {
      X85();
    }
  }
}

void X90() {
  X94();
  X88();
}

void X91() {
  flip (21/200) {
    a = true;
    X88();
  }
  else {
    a = true;
    X91();
  }
}

void X92() {
  flip (161/200) {
    b = false;
    X88();
  }
  else {
    b = true;
    X93();
  }
}

void X93() {
  flip (123/500) {
    if (b) {
      X91();
    }
    else {
      X89();
    }
  }
}

void X94() {
  flip (727/1000) {
    if (a) {
      X95();
    }
    else {
      X90();
    }
  }
}

void X95() {
  flip (51/500) {
    if (a) {
      X89();
    }
    else {
      X98();
    }
  }
}

void X96() {
  flip (421/500) {
    a = false;
    X92();
  }
  else {
    a = false;
    X94();
  }
}

void X97() {
  flip (437/1000) {
    if (b) {
      X97();
    }
    else {
      X99();
    }
  }
}

void X98() {
  X1();
  X2();
}

void X99() {
  flip (97/125) {
    if (b) {
      X96();
    }
    else {
      X3();
    }
  }
}
