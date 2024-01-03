bool a;
bool b;

void X0() {
  flip (97/500) {
    if (a) {
      X99();
    }
    else {
      X3();
    }
  }
}

void X1() {
  X5();
  X1();
}

void X2() {
  X4();
  X98();
}

void X3() {
  flip (819/1000) {
    b = false;
    X99();
  }
  else {
    a = false;
    X97();
  }
}

void X4() {
  flip (141/1000) {
    if (b) {
      X7();
    }
    else {
      X99();
    }
  }
}

void X5() {
  X99();
  X7();
}

void X6() {
  X2();
  X11();
}

void X7() {
  flip (33/1000) {
    b = true;
    X3();
  }
  else {
    b = false;
    X4();
  }
}

void X8() {
  flip (559/1000) {
    a = true;
    X7();
  }
  else {
    b = true;
    X13();
  }
}

void X9() {
  flip (641/1000) {
    a = true;
    X13();
  }
  else {
    a = true;
    X9();
  }
}

void X10() {
  X8();
  X12();
}

void X11() {
  X8();
  X8();
}

void X12() {
  flip (709/1000) {
    b = true;
    X11();
  }
  else {
    a = true;
    X10();
  }
}

void X13() {
  flip (677/1000) {
    b = false;
    X12();
  }
  else {
    a = true;
    X11();
  }
}

void X14() {
  X14();
  X11();
}

void X15() {
  X18();
  X15();
}

void X16() {
  flip (477/500) {
    a = true;
    X16();
  }
  else {
    a = true;
    X17();
  }
}

void X17() {
  flip (751/1000) {
    b = true;
    X18();
  }
  else {
    a = true;
    X14();
  }
}

void X18() {
  flip (411/500) {
    if (a) {
      X21();
    }
    else {
      X23();
    }
  }
}

void X19() {
  flip (449/1000) {
    if (a) {
      X23();
    }
    else {
      X14();
    }
  }
}

void X20() {
  flip (587/1000) {
    a = false;
    X14();
  }
  else {
    a = true;
    X20();
  }
}

void X21() {
  flip (87/1000) {
    if (a) {
      X20();
    }
    else {
      X24();
    }
  }
}

void X22() {
  flip (62/125) {
    if (a) {
      X24();
    }
    else {
      X21();
    }
  }
}

void X23() {
  flip (87/1000) {
    if (b) {
      X27();
    }
    else {
      X28();
    }
  }
}

void X24() {
  flip (663/1000) {
    if (b) {
      X27();
    }
    else {
      X22();
    }
  }
}

void X25() {
  flip (173/250) {
    if (a) {
      X21();
    }
    else {
      X22();
    }
  }
}

void X26() {
  flip (371/500) {
    if (a) {
      X30();
    }
    else {
      X21();
    }
  }
}

void X27() {
  X27();
  X24();
}

void X28() {
  flip (22/125) {
    b = false;
    X30();
  }
  else {
    a = true;
    X22();
  }
}

void X29() {
  X34();
  X30();
}

void X30() {
  flip (371/1000) {
    b = false;
    X24();
  }
  else {
    a = true;
    X29();
  }
}

void X31() {
  X34();
  X33();
}

void X32() {
  flip (417/500) {
    b = false;
    X35();
  }
  else {
    b = false;
    X30();
  }
}

void X33() {
  flip (259/1000) {
    if (a) {
      X28();
    }
    else {
      X28();
    }
  }
}

void X34() {
  flip (109/250) {
    b = true;
    X36();
  }
  else {
    a = true;
    X37();
  }
}

void X35() {
  flip (157/500) {
    if (b) {
      X39();
    }
    else {
      X32();
    }
  }
}

void X36() {
  flip (99/100) {
    if (b) {
      X39();
    }
    else {
      X30();
    }
  }
}

void X37() {
  flip (113/125) {
    if (a) {
      X33();
    }
    else {
      X38();
    }
  }
}

void X38() {
  flip (711/1000) {
    b = true;
    X39();
  }
  else {
    a = true;
    X40();
  }
}

void X39() {
  X37();
  X36();
}

void X40() {
  flip (47/250) {
    if (a) {
      X40();
    }
    else {
      X42();
    }
  }
}

void X41() {
  flip (749/1000) {
    if (b) {
      X43();
    }
    else {
      X39();
    }
  }
}

void X42() {
  flip (19/100) {
    if (b) {
      X37();
    }
    else {
      X41();
    }
  }
}

void X43() {
  flip (423/1000) {
    b = true;
    X40();
  }
  else {
    b = true;
    X48();
  }
}

void X44() {
  flip (283/500) {
    b = true;
    X41();
  }
  else {
    a = true;
    X45();
  }
}

void X45() {
  flip (361/500) {
    if (a) {
      X47();
    }
    else {
      X44();
    }
  }
}

void X46() {
  X51();
  X50();
}

void X47() {
  flip (641/1000) {
    a = true;
    X41();
  }
  else {
    b = false;
    X42();
  }
}

void X48() {
  X47();
  X51();
}

void X49() {
  flip (157/200) {
    if (b) {
      X50();
    }
    else {
      X44();
    }
  }
}

void X50() {
  flip (833/1000) {
    a = true;
    X49();
  }
  else {
    a = false;
    X53();
  }
}

void X51() {
  X55();
  X46();
}

void X52() {
  flip (197/250) {
    if (b) {
      X53();
    }
    else {
      X53();
    }
  }
}

void X53() {
  X52();
  X54();
}

void X54() {
  X53();
  X52();
}

void X55() {
  X49();
  X50();
}

void X56() {
  X56();
  X51();
}

void X57() {
  flip (73/200) {
    b = false;
    X58();
  }
  else {
    a = false;
    X57();
  }
}

void X58() {
  flip (107/200) {
    if (b) {
      X60();
    }
    else {
      X58();
    }
  }
}

void X59() {
  flip (31/125) {
    if (a) {
      X63();
    }
    else {
      X56();
    }
  }
}

void X60() {
  flip (3/200) {
    if (a) {
      X55();
    }
    else {
      X61();
    }
  }
}

void X61() {
  flip (589/1000) {
    a = true;
    X62();
  }
  else {
    a = true;
    X55();
  }
}

void X62() {
  X56();
  X66();
}

void X63() {
  flip (11/500) {
    if (a) {
      X67();
    }
    else {
      X66();
    }
  }
}

void X64() {
  X65();
  X61();
}

void X65() {
  X67();
  X68();
}

void X66() {
  X69();
  X70();
}

void X67() {
  flip (371/1000) {
    b = false;
    X67();
  }
  else {
    b = false;
    X69();
  }
}

void X68() {
  flip (213/250) {
    b = true;
    X68();
  }
  else {
    b = true;
    X66();
  }
}

void X69() {
  flip (457/500) {
    a = false;
    X72();
  }
  else {
    b = true;
    X74();
  }
}

void X70() {
  flip (467/1000) {
    if (a) {
      X74();
    }
    else {
      X71();
    }
  }
}

void X71() {
  X75();
  X65();
}

void X72() {
  flip (53/1000) {
    if (a) {
      X71();
    }
    else {
      X68();
    }
  }
}

void X73() {
  flip (93/1000) {
    b = false;
    X77();
  }
  else {
    b = true;
    X70();
  }
}

void X74() {
  flip (123/500) {
    b = true;
    X71();
  }
  else {
    b = false;
    X71();
  }
}

void X75() {
  X78();
  X76();
}

void X76() {
  X75();
  X81();
}

void X77() {
  flip (667/1000) {
    b = true;
    X71();
  }
  else {
    b = false;
    X80();
  }
}

void X78() {
  flip (23/100) {
    if (b) {
      X80();
    }
    else {
      X73();
    }
  }
}

void X79() {
  X82();
  X81();
}

void X80() {
  flip (581/1000) {
    if (b) {
      X80();
    }
    else {
      X81();
    }
  }
}

void X81() {
  X76();
  X76();
}

void X82() {
  X86();
  X83();
}

void X83() {
  X82();
  X85();
}

void X84() {
  flip (63/1000) {
    b = true;
    X89();
  }
  else {
    b = false;
    X87();
  }
}

void X85() {
  flip (63/100) {
    b = true;
    X86();
  }
  else {
    b = false;
    X79();
  }
}

void X86() {
  X85();
  X91();
}

void X87() {
  flip (193/500) {
    a = false;
    X82();
  }
  else {
    b = true;
    X87();
  }
}

void X88() {
  X88();
  X93();
}

void X89() {
  flip (339/500) {
    if (a) {
      X86();
    }
    else {
      X94();
    }
  }
}

void X90() {
  flip (167/1000) {
    b = false;
    X94();
  }
  else {
    b = false;
    X95();
  }
}

void X91() {
  flip (117/250) {
    if (b) {
      X94();
    }
    else {
      X92();
    }
  }
}

void X92() {
  flip (857/1000) {
    if (a) {
      X88();
    }
    else {
      X86();
    }
  }
}

void X93() {
  X96();
  X90();
}

void X94() {
  flip (72/125) {
    b = false;
    X99();
  }
  else {
    b = false;
    X94();
  }
}

void X95() {
  X89();
  X94();
}

void X96() {
  X92();
  X93();
}

void X97() {
  flip (369/500) {
    if (a) {
      X0();
    }
    else {
      X93();
    }
  }
}

void X98() {
  flip (53/200) {
    if (a) {
      X92();
    }
    else {
      X95();
    }
  }
}

void X99() {
  X1();
  X2();
}
