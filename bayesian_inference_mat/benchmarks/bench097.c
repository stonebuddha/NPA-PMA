bool a;
bool b;

void X0() {
  flip (397/500) {
    a = false;
    X99();
  }
  else {
    a = false;
    X1();
  }
}

void X1() {
  flip (81/125) {
    b = true;
    X98();
  }
  else {
    b = true;
    X99();
  }
}

void X2() {
  flip (37/50) {
    a = false;
    X0();
  }
  else {
    a = true;
    X3();
  }
}

void X3() {
  flip (479/500) {
    a = false;
    X7();
  }
  else {
    a = true;
    X8();
  }
}

void X4() {
  flip (109/125) {
    if (a) {
      X9();
    }
    else {
      X99();
    }
  }
}

void X5() {
  flip (461/500) {
    if (a) {
      X10();
    }
    else {
      X8();
    }
  }
}

void X6() {
  X1();
  X4();
}

void X7() {
  X4();
  X11();
}

void X8() {
  flip (157/200) {
    if (b) {
      X11();
    }
    else {
      X6();
    }
  }
}

void X9() {
  X11();
  X11();
}

void X10() {
  flip (123/500) {
    a = false;
    X12();
  }
  else {
    a = false;
    X4();
  }
}

void X11() {
  flip (777/1000) {
    if (a) {
      X5();
    }
    else {
      X13();
    }
  }
}

void X12() {
  flip (239/1000) {
    if (a) {
      X12();
    }
    else {
      X13();
    }
  }
}

void X13() {
  flip (363/1000) {
    a = true;
    X16();
  }
  else {
    a = true;
    X12();
  }
}

void X14() {
  X11();
  X19();
}

void X15() {
  X15();
  X9();
}

void X16() {
  X18();
  X11();
}

void X17() {
  flip (959/1000) {
    if (b) {
      X11();
    }
    else {
      X12();
    }
  }
}

void X18() {
  X15();
  X13();
}

void X19() {
  flip (51/100) {
    a = false;
    X13();
  }
  else {
    b = false;
    X20();
  }
}

void X20() {
  X16();
  X16();
}

void X21() {
  flip (297/1000) {
    b = false;
    X22();
  }
  else {
    a = true;
    X19();
  }
}

void X22() {
  flip (479/500) {
    b = false;
    X25();
  }
  else {
    b = false;
    X18();
  }
}

void X23() {
  X20();
  X28();
}

void X24() {
  X25();
  X21();
}

void X25() {
  flip (379/1000) {
    if (b) {
      X23();
    }
    else {
      X29();
    }
  }
}

void X26() {
  flip (347/1000) {
    if (a) {
      X21();
    }
    else {
      X21();
    }
  }
}

void X27() {
  X21();
  X22();
}

void X28() {
  X27();
  X31();
}

void X29() {
  flip (267/1000) {
    if (b) {
      X34();
    }
    else {
      X29();
    }
  }
}

void X30() {
  flip (341/1000) {
    if (b) {
      X33();
    }
    else {
      X33();
    }
  }
}

void X31() {
  flip (279/500) {
    b = false;
    X26();
  }
  else {
    b = true;
    X25();
  }
}

void X32() {
  flip (7/250) {
    if (a) {
      X28();
    }
    else {
      X31();
    }
  }
}

void X33() {
  flip (319/1000) {
    if (b) {
      X37();
    }
    else {
      X29();
    }
  }
}

void X34() {
  X29();
  X37();
}

void X35() {
  flip (119/500) {
    b = false;
    X32();
  }
  else {
    b = true;
    X30();
  }
}

void X36() {
  X37();
  X37();
}

void X37() {
  flip (77/500) {
    if (a) {
      X42();
    }
    else {
      X39();
    }
  }
}

void X38() {
  flip (24/125) {
    if (a) {
      X40();
    }
    else {
      X37();
    }
  }
}

void X39() {
  X42();
  X39();
}

void X40() {
  flip (97/125) {
    b = true;
    X36();
  }
  else {
    a = false;
    X37();
  }
}

void X41() {
  flip (313/1000) {
    b = false;
    X40();
  }
  else {
    b = true;
    X41();
  }
}

void X42() {
  X44();
  X41();
}

void X43() {
  flip (861/1000) {
    if (a) {
      X39();
    }
    else {
      X38();
    }
  }
}

void X44() {
  X46();
  X46();
}

void X45() {
  flip (593/1000) {
    if (b) {
      X45();
    }
    else {
      X50();
    }
  }
}

void X46() {
  flip (229/500) {
    if (b) {
      X45();
    }
    else {
      X51();
    }
  }
}

void X47() {
  flip (31/200) {
    b = false;
    X50();
  }
  else {
    b = true;
    X49();
  }
}

void X48() {
  X46();
  X42();
}

void X49() {
  flip (83/100) {
    if (b) {
      X52();
    }
    else {
      X52();
    }
  }
}

void X50() {
  flip (11/125) {
    if (b) {
      X44();
    }
    else {
      X44();
    }
  }
}

void X51() {
  flip (471/500) {
    if (a) {
      X52();
    }
    else {
      X56();
    }
  }
}

void X52() {
  flip (92/125) {
    b = false;
    X46();
  }
  else {
    a = true;
    X46();
  }
}

void X53() {
  flip (129/500) {
    if (a) {
      X51();
    }
    else {
      X57();
    }
  }
}

void X54() {
  flip (102/125) {
    a = false;
    X51();
  }
  else {
    b = true;
    X56();
  }
}

void X55() {
  flip (663/1000) {
    if (b) {
      X58();
    }
    else {
      X58();
    }
  }
}

void X56() {
  flip (609/1000) {
    b = true;
    X60();
  }
  else {
    b = true;
    X60();
  }
}

void X57() {
  flip (603/1000) {
    a = true;
    X60();
  }
  else {
    b = true;
    X61();
  }
}

void X58() {
  flip (3/125) {
    if (a) {
      X60();
    }
    else {
      X56();
    }
  }
}

void X59() {
  X57();
  X60();
}

void X60() {
  X57();
  X62();
}

void X61() {
  X62();
  X64();
}

void X62() {
  flip (21/25) {
    if (b) {
      X56();
    }
    else {
      X60();
    }
  }
}

void X63() {
  flip (87/100) {
    if (a) {
      X65();
    }
    else {
      X68();
    }
  }
}

void X64() {
  flip (127/500) {
    a = false;
    X63();
  }
  else {
    a = false;
    X62();
  }
}

void X65() {
  flip (173/200) {
    b = false;
    X61();
  }
  else {
    b = false;
    X64();
  }
}

void X66() {
  X70();
  X70();
}

void X67() {
  flip (671/1000) {
    if (a) {
      X70();
    }
    else {
      X68();
    }
  }
}

void X68() {
  flip (347/1000) {
    if (a) {
      X69();
    }
    else {
      X62();
    }
  }
}

void X69() {
  flip (477/1000) {
    a = false;
    X66();
  }
  else {
    b = false;
    X67();
  }
}

void X70() {
  X69();
  X64();
}

void X71() {
  flip (603/1000) {
    if (b) {
      X67();
    }
    else {
      X75();
    }
  }
}

void X72() {
  flip (13/500) {
    if (b) {
      X73();
    }
    else {
      X67();
    }
  }
}

void X73() {
  flip (817/1000) {
    if (b) {
      X78();
    }
    else {
      X77();
    }
  }
}

void X74() {
  flip (119/200) {
    b = true;
    X79();
  }
  else {
    a = true;
    X72();
  }
}

void X75() {
  X74();
  X71();
}

void X76() {
  X76();
  X79();
}

void X77() {
  flip (939/1000) {
    a = false;
    X71();
  }
  else {
    b = false;
    X82();
  }
}

void X78() {
  X78();
  X80();
}

void X79() {
  flip (51/1000) {
    if (b) {
      X79();
    }
    else {
      X80();
    }
  }
}

void X80() {
  flip (63/250) {
    if (a) {
      X85();
    }
    else {
      X85();
    }
  }
}

void X81() {
  flip (167/250) {
    if (b) {
      X76();
    }
    else {
      X75();
    }
  }
}

void X82() {
  flip (73/200) {
    b = false;
    X84();
  }
  else {
    b = false;
    X85();
  }
}

void X83() {
  X85();
  X84();
}

void X84() {
  flip (109/1000) {
    b = false;
    X87();
  }
  else {
    a = true;
    X88();
  }
}

void X85() {
  X87();
  X89();
}

void X86() {
  flip (507/1000) {
    if (b) {
      X82();
    }
    else {
      X85();
    }
  }
}

void X87() {
  flip (447/500) {
    a = true;
    X81();
  }
  else {
    b = true;
    X91();
  }
}

void X88() {
  X83();
  X90();
}

void X89() {
  X83();
  X91();
}

void X90() {
  flip (481/500) {
    a = false;
    X86();
  }
  else {
    b = true;
    X85();
  }
}

void X91() {
  flip (149/500) {
    if (a) {
      X89();
    }
    else {
      X88();
    }
  }
}

void X92() {
  flip (317/500) {
    if (a) {
      X92();
    }
    else {
      X97();
    }
  }
}

void X93() {
  flip (73/125) {
    if (a) {
      X95();
    }
    else {
      X95();
    }
  }
}

void X94() {
  flip (407/1000) {
    if (b) {
      X95();
    }
    else {
      X99();
    }
  }
}

void X95() {
  X95();
  X99();
}

void X96() {
  X1();
  X95();
}

void X97() {
  flip (243/500) {
    if (a) {
      X92();
    }
    else {
      X1();
    }
  }
}

void X98() {
  X2();
  X0();
}

void X99() {
  X95();
  X95();
}
