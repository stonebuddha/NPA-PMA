bool a;
bool b;

void X0() {
  flip (533/1000) {
    if (a) {
      X97();
    }
    else {
      X3();
    }
  }
}

void X1() {
  flip (257/500) {
    b = true;
    X98();
  }
  else {
    b = true;
    X5();
  }
}

void X2() {
  flip (26/125) {
    if (a) {
      X97();
    }
    else {
      X99();
    }
  }
}

void X3() {
  flip (939/1000) {
    if (a) {
      X98();
    }
    else {
      X97();
    }
  }
}

void X4() {
  flip (579/1000) {
    a = true;
    X3();
  }
  else {
    a = true;
    X1();
  }
}

void X5() {
  X2();
  X8();
}

void X6() {
  flip (561/1000) {
    if (b) {
      X0();
    }
    else {
      X2();
    }
  }
}

void X7() {
  flip (67/500) {
    if (a) {
      X9();
    }
    else {
      X2();
    }
  }
}

void X8() {
  flip (89/100) {
    if (b) {
      X11();
    }
    else {
      X2();
    }
  }
}

void X9() {
  X11();
  X6();
}

void X10() {
  flip (18/25) {
    b = true;
    X11();
  }
  else {
    a = false;
    X12();
  }
}

void X11() {
  X11();
  X13();
}

void X12() {
  X6();
  X15();
}

void X13() {
  X12();
  X16();
}

void X14() {
  flip (337/500) {
    a = true;
    X15();
  }
  else {
    b = false;
    X13();
  }
}

void X15() {
  X10();
  X16();
}

void X16() {
  flip (697/1000) {
    if (b) {
      X20();
    }
    else {
      X15();
    }
  }
}

void X17() {
  flip (453/500) {
    b = true;
    X16();
  }
  else {
    a = true;
    X11();
  }
}

void X18() {
  flip (9/40) {
    if (b) {
      X12();
    }
    else {
      X21();
    }
  }
}

void X19() {
  flip (53/125) {
    if (a) {
      X21();
    }
    else {
      X16();
    }
  }
}

void X20() {
  flip (151/250) {
    a = true;
    X23();
  }
  else {
    b = true;
    X14();
  }
}

void X21() {
  flip (423/1000) {
    b = false;
    X16();
  }
  else {
    b = true;
    X23();
  }
}

void X22() {
  X16();
  X24();
}

void X23() {
  flip (137/200) {
    if (a) {
      X20();
    }
    else {
      X22();
    }
  }
}

void X24() {
  flip (681/1000) {
    b = true;
    X24();
  }
  else {
    b = true;
    X27();
  }
}

void X25() {
  flip (187/500) {
    a = false;
    X20();
  }
  else {
    b = true;
    X25();
  }
}

void X26() {
  X22();
  X30();
}

void X27() {
  X28();
  X29();
}

void X28() {
  X32();
  X31();
}

void X29() {
  flip (239/500) {
    if (a) {
      X23();
    }
    else {
      X24();
    }
  }
}

void X30() {
  flip (453/500) {
    a = true;
    X29();
  }
  else {
    a = true;
    X29();
  }
}

void X31() {
  X35();
  X36();
}

void X32() {
  X30();
  X30();
}

void X33() {
  flip (19/50) {
    if (b) {
      X28();
    }
    else {
      X33();
    }
  }
}

void X34() {
  flip (237/500) {
    a = false;
    X33();
  }
  else {
    b = true;
    X34();
  }
}

void X35() {
  flip (67/250) {
    if (a) {
      X32();
    }
    else {
      X39();
    }
  }
}

void X36() {
  flip (901/1000) {
    b = false;
    X31();
  }
  else {
    b = true;
    X40();
  }
}

void X37() {
  X39();
  X32();
}

void X38() {
  flip (599/1000) {
    if (a) {
      X33();
    }
    else {
      X33();
    }
  }
}

void X39() {
  X34();
  X34();
}

void X40() {
  flip (108/125) {
    if (b) {
      X44();
    }
    else {
      X41();
    }
  }
}

void X41() {
  flip (229/250) {
    if (b) {
      X42();
    }
    else {
      X40();
    }
  }
}

void X42() {
  flip (709/1000) {
    a = false;
    X44();
  }
  else {
    b = true;
    X44();
  }
}

void X43() {
  flip (28/125) {
    b = true;
    X47();
  }
  else {
    a = false;
    X37();
  }
}

void X44() {
  flip (89/125) {
    if (a) {
      X45();
    }
    else {
      X40();
    }
  }
}

void X45() {
  flip (52/125) {
    if (a) {
      X40();
    }
    else {
      X39();
    }
  }
}

void X46() {
  flip (673/1000) {
    a = false;
    X47();
  }
  else {
    b = false;
    X46();
  }
}

void X47() {
  flip (51/500) {
    b = true;
    X50();
  }
  else {
    a = true;
    X44();
  }
}

void X48() {
  flip (459/1000) {
    b = false;
    X49();
  }
  else {
    a = false;
    X43();
  }
}

void X49() {
  X43();
  X43();
}

void X50() {
  flip (689/1000) {
    a = true;
    X51();
  }
  else {
    a = true;
    X55();
  }
}

void X51() {
  flip (863/1000) {
    if (a) {
      X51();
    }
    else {
      X50();
    }
  }
}

void X52() {
  X47();
  X53();
}

void X53() {
  X55();
  X49();
}

void X54() {
  X51();
  X49();
}

void X55() {
  X56();
  X50();
}

void X56() {
  flip (209/1000) {
    if (a) {
      X54();
    }
    else {
      X54();
    }
  }
}

void X57() {
  flip (33/100) {
    if (b) {
      X53();
    }
    else {
      X51();
    }
  }
}

void X58() {
  X59();
  X52();
}

void X59() {
  flip (781/1000) {
    b = true;
    X56();
  }
  else {
    a = true;
    X58();
  }
}

void X60() {
  flip (13/100) {
    if (b) {
      X62();
    }
    else {
      X62();
    }
  }
}

void X61() {
  X56();
  X65();
}

void X62() {
  flip (737/1000) {
    if (a) {
      X66();
    }
    else {
      X64();
    }
  }
}

void X63() {
  X57();
  X58();
}

void X64() {
  X66();
  X63();
}

void X65() {
  flip (32/125) {
    b = true;
    X68();
  }
  else {
    a = false;
    X69();
  }
}

void X66() {
  flip (27/250) {
    if (b) {
      X62();
    }
    else {
      X63();
    }
  }
}

void X67() {
  X61();
  X67();
}

void X68() {
  flip (143/250) {
    if (a) {
      X62();
    }
    else {
      X63();
    }
  }
}

void X69() {
  flip (481/1000) {
    if (b) {
      X74();
    }
    else {
      X73();
    }
  }
}

void X70() {
  flip (27/1000) {
    a = false;
    X75();
  }
  else {
    b = false;
    X65();
  }
}

void X71() {
  X74();
  X67();
}

void X72() {
  X66();
  X72();
}

void X73() {
  flip (23/50) {
    a = true;
    X67();
  }
  else {
    a = true;
    X69();
  }
}

void X74() {
  flip (537/1000) {
    b = false;
    X71();
  }
  else {
    a = false;
    X73();
  }
}

void X75() {
  flip (23/200) {
    if (a) {
      X79();
    }
    else {
      X75();
    }
  }
}

void X76() {
  flip (3/8) {
    if (a) {
      X75();
    }
    else {
      X71();
    }
  }
}

void X77() {
  X74();
  X79();
}

void X78() {
  flip (397/500) {
    b = true;
    X83();
  }
  else {
    a = false;
    X80();
  }
}

void X79() {
  X75();
  X82();
}

void X80() {
  X79();
  X79();
}

void X81() {
  X82();
  X79();
}

void X82() {
  X83();
  X84();
}

void X83() {
  flip (17/40) {
    b = true;
    X83();
  }
  else {
    b = true;
    X77();
  }
}

void X84() {
  X89();
  X80();
}

void X85() {
  X88();
  X83();
}

void X86() {
  flip (793/1000) {
    if (b) {
      X86();
    }
    else {
      X89();
    }
  }
}

void X87() {
  flip (529/1000) {
    a = true;
    X81();
  }
  else {
    a = true;
    X84();
  }
}

void X88() {
  X82();
  X90();
}

void X89() {
  X86();
  X88();
}

void X90() {
  flip (819/1000) {
    b = true;
    X90();
  }
  else {
    b = false;
    X88();
  }
}

void X91() {
  X85();
  X94();
}

void X92() {
  X89();
  X95();
}

void X93() {
  flip (131/200) {
    if (a) {
      X98();
    }
    else {
      X95();
    }
  }
}

void X94() {
  flip (52/125) {
    if (a) {
      X95();
    }
    else {
      X93();
    }
  }
}

void X95() {
  flip (221/500) {
    b = true;
    X89();
  }
  else {
    a = true;
    X92();
  }
}

void X96() {
  flip (8/125) {
    if (b) {
      X97();
    }
    else {
      X97();
    }
  }
}

void X97() {
  flip (41/100) {
    if (a) {
      X93();
    }
    else {
      X91();
    }
  }
}

void X98() {
  X2();
  X93();
}

void X99() {
  flip (419/1000) {
    b = false;
    X97();
  }
  else {
    b = true;
    X99();
  }
}
