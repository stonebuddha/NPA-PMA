bool a;
bool b;

void X0() {
  flip (79/125) {
    if (b) {
      X2();
    }
    else {
      X4();
    }
  }
}

void X1() {
  flip (89/100) {
    if (a) {
      X1();
    }
    else {
      X6();
    }
  }
}

void X2() {
  X98();
  X98();
}

void X3() {
  flip (763/1000) {
    b = true;
    X2();
  }
  else {
    a = true;
    X6();
  }
}

void X4() {
  flip (53/500) {
    if (b) {
      X2();
    }
    else {
      X9();
    }
  }
}

void X5() {
  flip (189/500) {
    a = true;
    X1();
  }
  else {
    b = true;
    X8();
  }
}

void X6() {
  X11();
  X4();
}

void X7() {
  flip (98/125) {
    if (b) {
      X4();
    }
    else {
      X8();
    }
  }
}

void X8() {
  X4();
  X6();
}

void X9() {
  flip (1/5) {
    if (a) {
      X5();
    }
    else {
      X8();
    }
  }
}

void X10() {
  X8();
  X12();
}

void X11() {
  flip (537/1000) {
    if (b) {
      X13();
    }
    else {
      X15();
    }
  }
}

void X12() {
  X14();
  X15();
}

void X13() {
  flip (11/20) {
    a = true;
    X9();
  }
  else {
    b = true;
    X7();
  }
}

void X14() {
  flip (23/100) {
    if (a) {
      X17();
    }
    else {
      X8();
    }
  }
}

void X15() {
  flip (153/1000) {
    a = true;
    X19();
  }
  else {
    b = true;
    X19();
  }
}

void X16() {
  flip (303/500) {
    if (a) {
      X16();
    }
    else {
      X11();
    }
  }
}

void X17() {
  X12();
  X17();
}

void X18() {
  flip (102/125) {
    if (b) {
      X15();
    }
    else {
      X20();
    }
  }
}

void X19() {
  flip (131/1000) {
    b = false;
    X13();
  }
  else {
    a = true;
    X17();
  }
}

void X20() {
  flip (343/500) {
    if (a) {
      X16();
    }
    else {
      X18();
    }
  }
}

void X21() {
  flip (823/1000) {
    a = false;
    X21();
  }
  else {
    a = true;
    X24();
  }
}

void X22() {
  flip (339/500) {
    if (a) {
      X19();
    }
    else {
      X16();
    }
  }
}

void X23() {
  X27();
  X28();
}

void X24() {
  flip (143/500) {
    a = true;
    X25();
  }
  else {
    b = false;
    X27();
  }
}

void X25() {
  flip (139/250) {
    if (b) {
      X29();
    }
    else {
      X24();
    }
  }
}

void X26() {
  flip (317/500) {
    if (b) {
      X26();
    }
    else {
      X26();
    }
  }
}

void X27() {
  X22();
  X23();
}

void X28() {
  flip (17/20) {
    if (b) {
      X26();
    }
    else {
      X29();
    }
  }
}

void X29() {
  flip (407/1000) {
    a = true;
    X31();
  }
  else {
    a = true;
    X27();
  }
}

void X30() {
  flip (123/500) {
    a = false;
    X24();
  }
  else {
    b = true;
    X27();
  }
}

void X31() {
  flip (49/250) {
    b = false;
    X33();
  }
  else {
    b = false;
    X25();
  }
}

void X32() {
  flip (753/1000) {
    if (a) {
      X37();
    }
    else {
      X27();
    }
  }
}

void X33() {
  X32();
  X34();
}

void X34() {
  flip (189/1000) {
    b = false;
    X36();
  }
  else {
    a = true;
    X38();
  }
}

void X35() {
  flip (51/125) {
    a = false;
    X38();
  }
  else {
    b = false;
    X35();
  }
}

void X36() {
  X40();
  X33();
}

void X37() {
  flip (373/1000) {
    if (b) {
      X36();
    }
    else {
      X38();
    }
  }
}

void X38() {
  flip (133/200) {
    if (a) {
      X35();
    }
    else {
      X37();
    }
  }
}

void X39() {
  flip (639/1000) {
    a = false;
    X36();
  }
  else {
    b = true;
    X36();
  }
}

void X40() {
  X40();
  X37();
}

void X41() {
  X36();
  X42();
}

void X42() {
  X37();
  X40();
}

void X43() {
  X40();
  X39();
}

void X44() {
  flip (583/1000) {
    a = true;
    X44();
  }
  else {
    a = true;
    X39();
  }
}

void X45() {
  X49();
  X48();
}

void X46() {
  X51();
  X44();
}

void X47() {
  flip (923/1000) {
    if (a) {
      X50();
    }
    else {
      X42();
    }
  }
}

void X48() {
  flip (779/1000) {
    if (b) {
      X42();
    }
    else {
      X52();
    }
  }
}

void X49() {
  flip (39/200) {
    b = true;
    X46();
  }
  else {
    a = true;
    X54();
  }
}

void X50() {
  flip (239/500) {
    if (a) {
      X52();
    }
    else {
      X54();
    }
  }
}

void X51() {
  X49();
  X55();
}

void X52() {
  flip (801/1000) {
    if (b) {
      X49();
    }
    else {
      X48();
    }
  }
}

void X53() {
  flip (743/1000) {
    if (a) {
      X58();
    }
    else {
      X57();
    }
  }
}

void X54() {
  flip (337/1000) {
    b = true;
    X49();
  }
  else {
    a = false;
    X53();
  }
}

void X55() {
  flip (111/125) {
    a = true;
    X52();
  }
  else {
    b = false;
    X59();
  }
}

void X56() {
  X61();
  X61();
}

void X57() {
  X52();
  X62();
}

void X58() {
  flip (27/40) {
    if (b) {
      X60();
    }
    else {
      X62();
    }
  }
}

void X59() {
  X61();
  X58();
}

void X60() {
  flip (209/250) {
    if (a) {
      X57();
    }
    else {
      X63();
    }
  }
}

void X61() {
  X55();
  X63();
}

void X62() {
  X62();
  X59();
}

void X63() {
  flip (167/500) {
    if (b) {
      X66();
    }
    else {
      X63();
    }
  }
}

void X64() {
  X63();
  X69();
}

void X65() {
  flip (323/500) {
    if (b) {
      X60();
    }
    else {
      X63();
    }
  }
}

void X66() {
  X70();
  X62();
}

void X67() {
  X68();
  X63();
}

void X68() {
  X66();
  X64();
}

void X69() {
  flip (87/1000) {
    a = true;
    X69();
  }
  else {
    a = false;
    X72();
  }
}

void X70() {
  flip (771/1000) {
    b = true;
    X73();
  }
  else {
    a = true;
    X66();
  }
}

void X71() {
  flip (321/1000) {
    b = true;
    X71();
  }
  else {
    b = false;
    X71();
  }
}

void X72() {
  flip (67/500) {
    if (b) {
      X74();
    }
    else {
      X70();
    }
  }
}

void X73() {
  X71();
  X68();
}

void X74() {
  flip (409/1000) {
    b = false;
    X71();
  }
  else {
    a = true;
    X78();
  }
}

void X75() {
  flip (423/500) {
    b = true;
    X80();
  }
  else {
    a = false;
    X71();
  }
}

void X76() {
  flip (113/250) {
    a = true;
    X77();
  }
  else {
    b = true;
    X78();
  }
}

void X77() {
  flip (153/250) {
    b = true;
    X82();
  }
  else {
    b = false;
    X78();
  }
}

void X78() {
  flip (243/500) {
    if (b) {
      X83();
    }
    else {
      X77();
    }
  }
}

void X79() {
  flip (19/100) {
    b = true;
    X82();
  }
  else {
    b = true;
    X80();
  }
}

void X80() {
  flip (647/1000) {
    if (a) {
      X75();
    }
    else {
      X85();
    }
  }
}

void X81() {
  flip (199/1000) {
    if (a) {
      X79();
    }
    else {
      X81();
    }
  }
}

void X82() {
  flip (121/250) {
    a = false;
    X81();
  }
  else {
    a = true;
    X79();
  }
}

void X83() {
  flip (149/500) {
    if (a) {
      X81();
    }
    else {
      X79();
    }
  }
}

void X84() {
  X82();
  X85();
}

void X85() {
  flip (999/1000) {
    if (b) {
      X85();
    }
    else {
      X81();
    }
  }
}

void X86() {
  flip (861/1000) {
    a = true;
    X80();
  }
  else {
    a = false;
    X83();
  }
}

void X87() {
  X82();
  X88();
}

void X88() {
  flip (467/500) {
    b = false;
    X88();
  }
  else {
    b = false;
    X88();
  }
}

void X89() {
  flip (419/500) {
    b = true;
    X88();
  }
  else {
    b = false;
    X91();
  }
}

void X90() {
  flip (13/500) {
    b = false;
    X87();
  }
  else {
    b = true;
    X87();
  }
}

void X91() {
  flip (61/200) {
    if (a) {
      X91();
    }
    else {
      X88();
    }
  }
}

void X92() {
  flip (481/1000) {
    if (b) {
      X92();
    }
    else {
      X94();
    }
  }
}

void X93() {
  flip (273/500) {
    if (b) {
      X89();
    }
    else {
      X95();
    }
  }
}

void X94() {
  X90();
  X89();
}

void X95() {
  flip (49/200) {
    a = true;
    X98();
  }
  else {
    b = false;
    X90();
  }
}

void X96() {
  flip (397/1000) {
    a = true;
    X0();
  }
  else {
    b = false;
    X96();
  }
}

void X97() {
  X96();
  X94();
}

void X98() {
  X99();
  X94();
}

void X99() {
  flip (19/500) {
    a = false;
    X93();
  }
  else {
    b = true;
    X93();
  }
}
