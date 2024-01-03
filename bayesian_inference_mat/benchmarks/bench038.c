bool a;
bool b;

void X0() {
  X95();
  X96();
}

void X1() {
  flip (889/1000) {
    a = false;
    X95();
  }
  else {
    a = false;
    X3();
  }
}

void X2() {
  flip (999/1000) {
    b = true;
    X98();
  }
  else {
    a = false;
    X96();
  }
}

void X3() {
  flip (29/40) {
    if (a) {
      X98();
    }
    else {
      X6();
    }
  }
}

void X4() {
  X5();
  X8();
}

void X5() {
  flip (91/500) {
    b = false;
    X9();
  }
  else {
    a = true;
    X7();
  }
}

void X6() {
  flip (629/1000) {
    if (b) {
      X3();
    }
    else {
      X3();
    }
  }
}

void X7() {
  flip (421/1000) {
    b = true;
    X4();
  }
  else {
    b = false;
    X7();
  }
}

void X8() {
  X12();
  X8();
}

void X9() {
  flip (99/1000) {
    if (b) {
      X3();
    }
    else {
      X9();
    }
  }
}

void X10() {
  flip (559/1000) {
    a = false;
    X12();
  }
  else {
    b = false;
    X9();
  }
}

void X11() {
  X11();
  X13();
}

void X12() {
  flip (401/500) {
    b = false;
    X15();
  }
  else {
    b = false;
    X9();
  }
}

void X13() {
  flip (17/500) {
    if (a) {
      X8();
    }
    else {
      X9();
    }
  }
}

void X14() {
  flip (207/500) {
    a = true;
    X18();
  }
  else {
    b = true;
    X11();
  }
}

void X15() {
  flip (881/1000) {
    a = true;
    X20();
  }
  else {
    a = false;
    X12();
  }
}

void X16() {
  flip (707/1000) {
    a = true;
    X17();
  }
  else {
    b = false;
    X19();
  }
}

void X17() {
  X16();
  X11();
}

void X18() {
  flip (163/200) {
    b = false;
    X15();
  }
  else {
    a = true;
    X15();
  }
}

void X19() {
  flip (23/250) {
    if (a) {
      X19();
    }
    else {
      X23();
    }
  }
}

void X20() {
  X21();
  X24();
}

void X21() {
  flip (161/250) {
    b = true;
    X17();
  }
  else {
    a = true;
    X25();
  }
}

void X22() {
  X21();
  X26();
}

void X23() {
  flip (339/500) {
    if (b) {
      X26();
    }
    else {
      X18();
    }
  }
}

void X24() {
  flip (73/250) {
    b = false;
    X19();
  }
  else {
    a = false;
    X26();
  }
}

void X25() {
  flip (39/100) {
    a = true;
    X27();
  }
  else {
    b = true;
    X19();
  }
}

void X26() {
  flip (987/1000) {
    b = false;
    X23();
  }
  else {
    a = true;
    X27();
  }
}

void X27() {
  flip (86/125) {
    if (b) {
      X32();
    }
    else {
      X21();
    }
  }
}

void X28() {
  flip (11/100) {
    b = true;
    X26();
  }
  else {
    a = true;
    X28();
  }
}

void X29() {
  X23();
  X27();
}

void X30() {
  X28();
  X27();
}

void X31() {
  X31();
  X36();
}

void X32() {
  flip (747/1000) {
    if (a) {
      X32();
    }
    else {
      X30();
    }
  }
}

void X33() {
  X28();
  X34();
}

void X34() {
  flip (59/1000) {
    if (a) {
      X37();
    }
    else {
      X31();
    }
  }
}

void X35() {
  flip (106/125) {
    b = false;
    X39();
  }
  else {
    b = true;
    X38();
  }
}

void X36() {
  flip (157/500) {
    if (a) {
      X38();
    }
    else {
      X36();
    }
  }
}

void X37() {
  X34();
  X32();
}

void X38() {
  flip (19/25) {
    if (a) {
      X34();
    }
    else {
      X32();
    }
  }
}

void X39() {
  X34();
  X37();
}

void X40() {
  flip (377/500) {
    b = true;
    X38();
  }
  else {
    a = false;
    X45();
  }
}

void X41() {
  X40();
  X40();
}

void X42() {
  flip (797/1000) {
    if (b) {
      X40();
    }
    else {
      X36();
    }
  }
}

void X43() {
  flip (133/250) {
    if (a) {
      X45();
    }
    else {
      X44();
    }
  }
}

void X44() {
  X38();
  X40();
}

void X45() {
  flip (693/1000) {
    a = false;
    X40();
  }
  else {
    a = true;
    X40();
  }
}

void X46() {
  flip (493/1000) {
    b = false;
    X43();
  }
  else {
    a = false;
    X49();
  }
}

void X47() {
  X50();
  X41();
}

void X48() {
  X47();
  X50();
}

void X49() {
  flip (7/8) {
    if (b) {
      X49();
    }
    else {
      X45();
    }
  }
}

void X50() {
  X51();
  X50();
}

void X51() {
  flip (719/1000) {
    if (b) {
      X51();
    }
    else {
      X50();
    }
  }
}

void X52() {
  flip (29/250) {
    a = true;
    X52();
  }
  else {
    a = true;
    X48();
  }
}

void X53() {
  flip (199/200) {
    a = true;
    X57();
  }
  else {
    b = false;
    X58();
  }
}

void X54() {
  X50();
  X51();
}

void X55() {
  flip (33/40) {
    if (b) {
      X52();
    }
    else {
      X53();
    }
  }
}

void X56() {
  flip (67/100) {
    a = false;
    X58();
  }
  else {
    a = false;
    X59();
  }
}

void X57() {
  X51();
  X55();
}

void X58() {
  X53();
  X54();
}

void X59() {
  flip (69/500) {
    b = true;
    X55();
  }
  else {
    a = true;
    X60();
  }
}

void X60() {
  flip (523/1000) {
    if (a) {
      X62();
    }
    else {
      X54();
    }
  }
}

void X61() {
  flip (193/250) {
    if (a) {
      X58();
    }
    else {
      X58();
    }
  }
}

void X62() {
  flip (109/500) {
    if (b) {
      X67();
    }
    else {
      X61();
    }
  }
}

void X63() {
  X59();
  X64();
}

void X64() {
  X63();
  X67();
}

void X65() {
  X67();
  X61();
}

void X66() {
  flip (33/100) {
    if (b) {
      X60();
    }
    else {
      X62();
    }
  }
}

void X67() {
  flip (39/250) {
    a = false;
    X67();
  }
  else {
    b = true;
    X64();
  }
}

void X68() {
  X66();
  X70();
}

void X69() {
  flip (597/1000) {
    if (a) {
      X69();
    }
    else {
      X68();
    }
  }
}

void X70() {
  X69();
  X65();
}

void X71() {
  flip (893/1000) {
    a = false;
    X74();
  }
  else {
    a = false;
    X73();
  }
}

void X72() {
  X72();
  X68();
}

void X73() {
  flip (11/200) {
    if (a) {
      X77();
    }
    else {
      X72();
    }
  }
}

void X74() {
  flip (303/500) {
    if (b) {
      X75();
    }
    else {
      X73();
    }
  }
}

void X75() {
  flip (319/1000) {
    a = false;
    X69();
  }
  else {
    b = false;
    X73();
  }
}

void X76() {
  flip (179/200) {
    b = false;
    X71();
  }
  else {
    a = true;
    X74();
  }
}

void X77() {
  X77();
  X77();
}

void X78() {
  flip (99/1000) {
    a = false;
    X73();
  }
  else {
    a = false;
    X76();
  }
}

void X79() {
  flip (931/1000) {
    b = true;
    X75();
  }
  else {
    a = true;
    X84();
  }
}

void X80() {
  flip (22/25) {
    if (a) {
      X84();
    }
    else {
      X79();
    }
  }
}

void X81() {
  X80();
  X77();
}

void X82() {
  X81();
  X83();
}

void X83() {
  flip (221/250) {
    b = true;
    X85();
  }
  else {
    a = false;
    X80();
  }
}

void X84() {
  flip (1/500) {
    if (a) {
      X83();
    }
    else {
      X85();
    }
  }
}

void X85() {
  flip (53/250) {
    b = true;
    X83();
  }
  else {
    a = true;
    X79();
  }
}

void X86() {
  flip (83/500) {
    b = true;
    X89();
  }
  else {
    a = false;
    X81();
  }
}

void X87() {
  X82();
  X89();
}

void X88() {
  flip (229/250) {
    a = false;
    X85();
  }
  else {
    a = false;
    X86();
  }
}

void X89() {
  flip (207/250) {
    a = true;
    X91();
  }
  else {
    b = true;
    X88();
  }
}

void X90() {
  X86();
  X88();
}

void X91() {
  flip (809/1000) {
    a = false;
    X87();
  }
  else {
    b = true;
    X93();
  }
}

void X92() {
  flip (461/500) {
    b = false;
    X94();
  }
  else {
    b = false;
    X92();
  }
}

void X93() {
  flip (84/125) {
    if (b) {
      X96();
    }
    else {
      X89();
    }
  }
}

void X94() {
  X98();
  X90();
}

void X95() {
  flip (189/250) {
    b = false;
    X92();
  }
  else {
    a = false;
    X93();
  }
}

void X96() {
  X1();
  X98();
}

void X97() {
  X96();
  X96();
}

void X98() {
  flip (179/500) {
    b = true;
    X99();
  }
  else {
    a = true;
    X0();
  }
}

void X99() {
  flip (93/125) {
    b = false;
    X3();
  }
  else {
    b = true;
    X1();
  }
}
