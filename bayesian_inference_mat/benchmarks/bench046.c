bool a;
bool b;

void X0() {
  flip (124/125) {
    a = true;
    X98();
  }
  else {
    b = false;
    X2();
  }
}

void X1() {
  X3();
  X2();
}

void X2() {
  X97();
  X98();
}

void X3() {
  flip (549/1000) {
    if (a) {
      X98();
    }
    else {
      X8();
    }
  }
}

void X4() {
  X2();
  X9();
}

void X5() {
  flip (187/1000) {
    b = true;
    X5();
  }
  else {
    b = true;
    X8();
  }
}

void X6() {
  flip (887/1000) {
    b = true;
    X3();
  }
  else {
    b = false;
    X7();
  }
}

void X7() {
  X5();
  X5();
}

void X8() {
  flip (713/1000) {
    a = false;
    X2();
  }
  else {
    a = false;
    X8();
  }
}

void X9() {
  flip (29/40) {
    a = false;
    X10();
  }
  else {
    b = true;
    X6();
  }
}

void X10() {
  flip (19/125) {
    a = false;
    X10();
  }
  else {
    a = false;
    X11();
  }
}

void X11() {
  X14();
  X10();
}

void X12() {
  X16();
  X8();
}

void X13() {
  X7();
  X15();
}

void X14() {
  X9();
  X9();
}

void X15() {
  flip (159/1000) {
    b = true;
    X15();
  }
  else {
    a = true;
    X18();
  }
}

void X16() {
  X18();
  X18();
}

void X17() {
  flip (879/1000) {
    if (a) {
      X21();
    }
    else {
      X17();
    }
  }
}

void X18() {
  X23();
  X13();
}

void X19() {
  flip (117/125) {
    a = false;
    X17();
  }
  else {
    b = true;
    X15();
  }
}

void X20() {
  flip (721/1000) {
    if (a) {
      X25();
    }
    else {
      X15();
    }
  }
}

void X21() {
  flip (317/1000) {
    if (b) {
      X25();
    }
    else {
      X19();
    }
  }
}

void X22() {
  flip (641/1000) {
    if (a) {
      X27();
    }
    else {
      X25();
    }
  }
}

void X23() {
  flip (859/1000) {
    b = false;
    X18();
  }
  else {
    b = true;
    X27();
  }
}

void X24() {
  X29();
  X29();
}

void X25() {
  flip (533/1000) {
    if (a) {
      X28();
    }
    else {
      X27();
    }
  }
}

void X26() {
  flip (449/1000) {
    a = false;
    X26();
  }
  else {
    a = true;
    X26();
  }
}

void X27() {
  flip (79/250) {
    a = true;
    X29();
  }
  else {
    a = false;
    X27();
  }
}

void X28() {
  flip (417/1000) {
    b = true;
    X22();
  }
  else {
    a = true;
    X33();
  }
}

void X29() {
  X29();
  X29();
}

void X30() {
  X27();
  X34();
}

void X31() {
  X35();
  X33();
}

void X32() {
  flip (373/1000) {
    if (a) {
      X33();
    }
    else {
      X26();
    }
  }
}

void X33() {
  X38();
  X33();
}

void X34() {
  flip (183/500) {
    b = true;
    X38();
  }
  else {
    b = false;
    X34();
  }
}

void X35() {
  flip (81/100) {
    b = false;
    X36();
  }
  else {
    a = true;
    X30();
  }
}

void X36() {
  X41();
  X34();
}

void X37() {
  X35();
  X41();
}

void X38() {
  flip (7/20) {
    b = false;
    X37();
  }
  else {
    a = false;
    X40();
  }
}

void X39() {
  flip (93/250) {
    if (a) {
      X36();
    }
    else {
      X40();
    }
  }
}

void X40() {
  X39();
  X42();
}

void X41() {
  flip (683/1000) {
    b = true;
    X38();
  }
  else {
    a = false;
    X43();
  }
}

void X42() {
  flip (24/25) {
    b = false;
    X36();
  }
  else {
    b = false;
    X36();
  }
}

void X43() {
  X38();
  X37();
}

void X44() {
  flip (1/500) {
    if (a) {
      X46();
    }
    else {
      X46();
    }
  }
}

void X45() {
  flip (81/500) {
    if (a) {
      X45();
    }
    else {
      X47();
    }
  }
}

void X46() {
  flip (227/500) {
    b = true;
    X40();
  }
  else {
    a = true;
    X46();
  }
}

void X47() {
  flip (577/1000) {
    if (b) {
      X50();
    }
    else {
      X45();
    }
  }
}

void X48() {
  flip (153/1000) {
    a = false;
    X47();
  }
  else {
    b = false;
    X49();
  }
}

void X49() {
  flip (109/200) {
    b = false;
    X50();
  }
  else {
    b = true;
    X46();
  }
}

void X50() {
  flip (167/500) {
    b = true;
    X52();
  }
  else {
    b = false;
    X49();
  }
}

void X51() {
  flip (53/200) {
    if (b) {
      X45();
    }
    else {
      X50();
    }
  }
}

void X52() {
  X51();
  X47();
}

void X53() {
  X53();
  X55();
}

void X54() {
  X50();
  X50();
}

void X55() {
  X49();
  X57();
}

void X56() {
  X51();
  X61();
}

void X57() {
  flip (179/250) {
    if (a) {
      X59();
    }
    else {
      X61();
    }
  }
}

void X58() {
  X55();
  X53();
}

void X59() {
  flip (51/125) {
    if (b) {
      X54();
    }
    else {
      X64();
    }
  }
}

void X60() {
  flip (47/100) {
    if (a) {
      X60();
    }
    else {
      X64();
    }
  }
}

void X61() {
  flip (721/1000) {
    a = false;
    X62();
  }
  else {
    a = true;
    X58();
  }
}

void X62() {
  flip (119/1000) {
    if (a) {
      X56();
    }
    else {
      X66();
    }
  }
}

void X63() {
  X68();
  X59();
}

void X64() {
  flip (207/250) {
    if (a) {
      X61();
    }
    else {
      X64();
    }
  }
}

void X65() {
  flip (263/500) {
    if (b) {
      X59();
    }
    else {
      X61();
    }
  }
}

void X66() {
  flip (93/500) {
    if (b) {
      X64();
    }
    else {
      X62();
    }
  }
}

void X67() {
  flip (17/200) {
    if (a) {
      X63();
    }
    else {
      X70();
    }
  }
}

void X68() {
  X71();
  X69();
}

void X69() {
  flip (1/125) {
    if (b) {
      X70();
    }
    else {
      X70();
    }
  }
}

void X70() {
  X73();
  X74();
}

void X71() {
  flip (453/500) {
    a = false;
    X65();
  }
  else {
    a = true;
    X74();
  }
}

void X72() {
  flip (31/250) {
    if (b) {
      X68();
    }
    else {
      X77();
    }
  }
}

void X73() {
  flip (499/500) {
    if (a) {
      X69();
    }
    else {
      X67();
    }
  }
}

void X74() {
  flip (123/500) {
    if (a) {
      X79();
    }
    else {
      X75();
    }
  }
}

void X75() {
  flip (13/50) {
    a = false;
    X70();
  }
  else {
    b = false;
    X73();
  }
}

void X76() {
  flip (261/500) {
    b = true;
    X78();
  }
  else {
    a = false;
    X78();
  }
}

void X77() {
  flip (4/125) {
    if (a) {
      X76();
    }
    else {
      X81();
    }
  }
}

void X78() {
  X80();
  X75();
}

void X79() {
  flip (22/25) {
    a = true;
    X78();
  }
  else {
    b = true;
    X81();
  }
}

void X80() {
  X79();
  X74();
}

void X81() {
  flip (483/500) {
    a = false;
    X79();
  }
  else {
    b = false;
    X83();
  }
}

void X82() {
  flip (7/10) {
    if (a) {
      X84();
    }
    else {
      X84();
    }
  }
}

void X83() {
  flip (47/50) {
    b = false;
    X77();
  }
  else {
    a = false;
    X84();
  }
}

void X84() {
  flip (3/50) {
    a = true;
    X85();
  }
  else {
    a = true;
    X88();
  }
}

void X85() {
  flip (677/1000) {
    b = true;
    X86();
  }
  else {
    a = false;
    X82();
  }
}

void X86() {
  flip (751/1000) {
    b = false;
    X87();
  }
  else {
    a = false;
    X91();
  }
}

void X87() {
  flip (707/1000) {
    b = true;
    X87();
  }
  else {
    b = false;
    X83();
  }
}

void X88() {
  flip (241/500) {
    if (b) {
      X88();
    }
    else {
      X90();
    }
  }
}

void X89() {
  flip (197/200) {
    if (b) {
      X94();
    }
    else {
      X89();
    }
  }
}

void X90() {
  X93();
  X89();
}

void X91() {
  flip (603/1000) {
    if (b) {
      X96();
    }
    else {
      X95();
    }
  }
}

void X92() {
  flip (22/125) {
    if (a) {
      X96();
    }
    else {
      X92();
    }
  }
}

void X93() {
  flip (731/1000) {
    if (b) {
      X87();
    }
    else {
      X93();
    }
  }
}

void X94() {
  X94();
  X96();
}

void X95() {
  flip (303/500) {
    if (b) {
      X99();
    }
    else {
      X92();
    }
  }
}

void X96() {
  flip (167/250) {
    if (b) {
      X97();
    }
    else {
      X94();
    }
  }
}

void X97() {
  flip (457/500) {
    if (a) {
      X99();
    }
    else {
      X95();
    }
  }
}

void X98() {
  flip (863/1000) {
    if (b) {
      X92();
    }
    else {
      X96();
    }
  }
}

void X99() {
  X1();
  X94();
}
