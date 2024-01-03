bool a;
bool b;

void X0() {
  X4();
  X2();
}

void X1() {
  flip (499/1000) {
    a = true;
    X0();
  }
  else {
    b = false;
    X4();
  }
}

void X2() {
  X2();
  X98();
}

void X3() {
  flip (629/1000) {
    if (a) {
      X8();
    }
    else {
      X5();
    }
  }
}

void X4() {
  flip (303/500) {
    if (b) {
      X6();
    }
    else {
      X99();
    }
  }
}

void X5() {
  flip (19/200) {
    if (b) {
      X5();
    }
    else {
      X4();
    }
  }
}

void X6() {
  flip (29/200) {
    if (b) {
      X10();
    }
    else {
      X2();
    }
  }
}

void X7() {
  X10();
  X5();
}

void X8() {
  flip (623/1000) {
    a = true;
    X12();
  }
  else {
    b = true;
    X11();
  }
}

void X9() {
  flip (107/1000) {
    b = false;
    X7();
  }
  else {
    a = true;
    X9();
  }
}

void X10() {
  X12();
  X13();
}

void X11() {
  X14();
  X7();
}

void X12() {
  flip (663/1000) {
    if (b) {
      X17();
    }
    else {
      X16();
    }
  }
}

void X13() {
  flip (211/250) {
    if (a) {
      X12();
    }
    else {
      X15();
    }
  }
}

void X14() {
  flip (7/40) {
    if (b) {
      X12();
    }
    else {
      X14();
    }
  }
}

void X15() {
  X13();
  X17();
}

void X16() {
  flip (3/4) {
    a = false;
    X19();
  }
  else {
    a = false;
    X12();
  }
}

void X17() {
  X11();
  X17();
}

void X18() {
  flip (211/500) {
    if (b) {
      X14();
    }
    else {
      X14();
    }
  }
}

void X19() {
  flip (11/40) {
    b = false;
    X16();
  }
  else {
    b = true;
    X20();
  }
}

void X20() {
  flip (71/250) {
    a = true;
    X14();
  }
  else {
    a = false;
    X16();
  }
}

void X21() {
  flip (869/1000) {
    if (b) {
      X26();
    }
    else {
      X20();
    }
  }
}

void X22() {
  flip (73/100) {
    b = true;
    X18();
  }
  else {
    a = false;
    X25();
  }
}

void X23() {
  flip (103/500) {
    b = true;
    X24();
  }
  else {
    a = false;
    X23();
  }
}

void X24() {
  X27();
  X29();
}

void X25() {
  flip (189/250) {
    if (b) {
      X26();
    }
    else {
      X26();
    }
  }
}

void X26() {
  flip (249/1000) {
    if (b) {
      X28();
    }
    else {
      X30();
    }
  }
}

void X27() {
  X24();
  X29();
}

void X28() {
  X23();
  X26();
}

void X29() {
  flip (633/1000) {
    if (b) {
      X26();
    }
    else {
      X23();
    }
  }
}

void X30() {
  X34();
  X26();
}

void X31() {
  flip (419/1000) {
    a = false;
    X33();
  }
  else {
    a = false;
    X25();
  }
}

void X32() {
  flip (307/1000) {
    if (a) {
      X32();
    }
    else {
      X29();
    }
  }
}

void X33() {
  flip (3/125) {
    if (b) {
      X38();
    }
    else {
      X31();
    }
  }
}

void X34() {
  flip (1/100) {
    a = true;
    X34();
  }
  else {
    a = false;
    X29();
  }
}

void X35() {
  flip (837/1000) {
    if (a) {
      X30();
    }
    else {
      X37();
    }
  }
}

void X36() {
  flip (351/1000) {
    b = true;
    X32();
  }
  else {
    b = true;
    X30();
  }
}

void X37() {
  flip (49/50) {
    b = true;
    X37();
  }
  else {
    b = false;
    X40();
  }
}

void X38() {
  flip (473/1000) {
    a = true;
    X41();
  }
  else {
    a = true;
    X42();
  }
}

void X39() {
  flip (299/1000) {
    if (b) {
      X34();
    }
    else {
      X33();
    }
  }
}

void X40() {
  X45();
  X39();
}

void X41() {
  X36();
  X36();
}

void X42() {
  flip (76/125) {
    b = true;
    X44();
  }
  else {
    a = false;
    X42();
  }
}

void X43() {
  flip (967/1000) {
    b = false;
    X37();
  }
  else {
    b = false;
    X43();
  }
}

void X44() {
  X45();
  X42();
}

void X45() {
  flip (83/100) {
    b = true;
    X46();
  }
  else {
    a = true;
    X46();
  }
}

void X46() {
  flip (407/1000) {
    b = true;
    X43();
  }
  else {
    a = false;
    X47();
  }
}

void X47() {
  flip (377/1000) {
    b = true;
    X42();
  }
  else {
    b = true;
    X45();
  }
}

void X48() {
  X51();
  X45();
}

void X49() {
  flip (533/1000) {
    if (a) {
      X44();
    }
    else {
      X46();
    }
  }
}

void X50() {
  flip (159/200) {
    a = true;
    X48();
  }
  else {
    a = true;
    X50();
  }
}

void X51() {
  flip (261/500) {
    if (a) {
      X55();
    }
    else {
      X53();
    }
  }
}

void X52() {
  X53();
  X55();
}

void X53() {
  X58();
  X58();
}

void X54() {
  X58();
  X53();
}

void X55() {
  flip (3/125) {
    a = true;
    X52();
  }
  else {
    a = false;
    X49();
  }
}

void X56() {
  X52();
  X55();
}

void X57() {
  X61();
  X61();
}

void X58() {
  X57();
  X59();
}

void X59() {
  flip (389/1000) {
    a = true;
    X53();
  }
  else {
    b = false;
    X56();
  }
}

void X60() {
  flip (93/250) {
    if (b) {
      X59();
    }
    else {
      X65();
    }
  }
}

void X61() {
  flip (97/1000) {
    a = false;
    X61();
  }
  else {
    b = true;
    X55();
  }
}

void X62() {
  flip (231/500) {
    b = true;
    X65();
  }
  else {
    b = false;
    X58();
  }
}

void X63() {
  flip (209/1000) {
    if (b) {
      X58();
    }
    else {
      X60();
    }
  }
}

void X64() {
  flip (97/250) {
    a = true;
    X66();
  }
  else {
    a = true;
    X59();
  }
}

void X65() {
  X60();
  X61();
}

void X66() {
  X63();
  X67();
}

void X67() {
  flip (59/500) {
    if (a) {
      X70();
    }
    else {
      X64();
    }
  }
}

void X68() {
  flip (361/500) {
    a = false;
    X66();
  }
  else {
    b = true;
    X70();
  }
}

void X69() {
  flip (127/500) {
    a = false;
    X72();
  }
  else {
    b = false;
    X64();
  }
}

void X70() {
  flip (211/1000) {
    a = true;
    X69();
  }
  else {
    b = false;
    X67();
  }
}

void X71() {
  flip (67/100) {
    b = false;
    X68();
  }
  else {
    a = false;
    X71();
  }
}

void X72() {
  flip (263/500) {
    a = false;
    X71();
  }
  else {
    a = true;
    X70();
  }
}

void X73() {
  flip (7/50) {
    a = true;
    X67();
  }
  else {
    b = true;
    X78();
  }
}

void X74() {
  X79();
  X73();
}

void X75() {
  flip (31/1000) {
    if (a) {
      X79();
    }
    else {
      X69();
    }
  }
}

void X76() {
  flip (467/1000) {
    if (a) {
      X80();
    }
    else {
      X70();
    }
  }
}

void X77() {
  X82();
  X77();
}

void X78() {
  flip (131/1000) {
    if (a) {
      X81();
    }
    else {
      X76();
    }
  }
}

void X79() {
  X84();
  X79();
}

void X80() {
  flip (289/1000) {
    if (b) {
      X83();
    }
    else {
      X81();
    }
  }
}

void X81() {
  flip (66/125) {
    if (a) {
      X82();
    }
    else {
      X80();
    }
  }
}

void X82() {
  X84();
  X76();
}

void X83() {
  flip (173/1000) {
    b = true;
    X84();
  }
  else {
    a = false;
    X87();
  }
}

void X84() {
  flip (269/500) {
    a = true;
    X78();
  }
  else {
    a = true;
    X85();
  }
}

void X85() {
  flip (17/500) {
    a = false;
    X79();
  }
  else {
    b = false;
    X80();
  }
}

void X86() {
  X87();
  X89();
}

void X87() {
  flip (41/125) {
    if (b) {
      X85();
    }
    else {
      X86();
    }
  }
}

void X88() {
  flip (253/1000) {
    a = true;
    X87();
  }
  else {
    b = true;
    X84();
  }
}

void X89() {
  flip (311/1000) {
    if (b) {
      X85();
    }
    else {
      X92();
    }
  }
}

void X90() {
  X87();
  X94();
}

void X91() {
  X94();
  X85();
}

void X92() {
  flip (241/250) {
    b = true;
    X96();
  }
  else {
    b = false;
    X91();
  }
}

void X93() {
  X97();
  X98();
}

void X94() {
  X91();
  X91();
}

void X95() {
  flip (693/1000) {
    if (b) {
      X93();
    }
    else {
      X99();
    }
  }
}

void X96() {
  flip (151/200) {
    if (a) {
      X96();
    }
    else {
      X97();
    }
  }
}

void X97() {
  flip (379/500) {
    b = false;
    X2();
  }
  else {
    b = false;
    X98();
  }
}

void X98() {
  flip (177/500) {
    if (b) {
      X95();
    }
    else {
      X95();
    }
  }
}

void X99() {
  flip (1/2) {
    b = true;
    X1();
  }
  else {
    b = false;
    X98();
  }
}
