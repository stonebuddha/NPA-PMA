bool a;
bool b;

void X0() {
  flip (47/500) {
    a = false;
    X95();
  }
  else {
    a = true;
    X5();
  }
}

void X1() {
  X96();
  X99();
}

void X2() {
  flip (737/1000) {
    a = false;
    X96();
  }
  else {
    b = true;
    X97();
  }
}

void X3() {
  flip (219/500) {
    a = false;
    X99();
  }
  else {
    a = false;
    X7();
  }
}

void X4() {
  X1();
  X2();
}

void X5() {
  flip (467/1000) {
    b = true;
    X7();
  }
  else {
    b = false;
    X3();
  }
}

void X6() {
  flip (47/125) {
    b = true;
    X3();
  }
  else {
    b = false;
    X6();
  }
}

void X7() {
  X9();
  X2();
}

void X8() {
  flip (361/500) {
    if (a) {
      X2();
    }
    else {
      X7();
    }
  }
}

void X9() {
  flip (7/50) {
    a = false;
    X10();
  }
  else {
    b = false;
    X12();
  }
}

void X10() {
  flip (51/500) {
    b = false;
    X4();
  }
  else {
    b = true;
    X5();
  }
}

void X11() {
  X9();
  X12();
}

void X12() {
  X17();
  X12();
}

void X13() {
  X7();
  X13();
}

void X14() {
  flip (363/500) {
    b = true;
    X12();
  }
  else {
    a = true;
    X17();
  }
}

void X15() {
  X16();
  X18();
}

void X16() {
  X12();
  X21();
}

void X17() {
  flip (421/1000) {
    a = true;
    X15();
  }
  else {
    b = false;
    X17();
  }
}

void X18() {
  X22();
  X17();
}

void X19() {
  flip (93/125) {
    if (a) {
      X20();
    }
    else {
      X18();
    }
  }
}

void X20() {
  X23();
  X14();
}

void X21() {
  flip (51/200) {
    a = true;
    X18();
  }
  else {
    b = true;
    X26();
  }
}

void X22() {
  flip (679/1000) {
    if (a) {
      X27();
    }
    else {
      X20();
    }
  }
}

void X23() {
  flip (129/250) {
    if (a) {
      X21();
    }
    else {
      X19();
    }
  }
}

void X24() {
  flip (343/1000) {
    a = false;
    X24();
  }
  else {
    b = false;
    X25();
  }
}

void X25() {
  X21();
  X22();
}

void X26() {
  flip (287/1000) {
    if (a) {
      X31();
    }
    else {
      X27();
    }
  }
}

void X27() {
  flip (139/200) {
    a = true;
    X23();
  }
  else {
    a = false;
    X30();
  }
}

void X28() {
  flip (12/25) {
    if (b) {
      X29();
    }
    else {
      X24();
    }
  }
}

void X29() {
  flip (249/1000) {
    a = true;
    X29();
  }
  else {
    a = false;
    X27();
  }
}

void X30() {
  X35();
  X35();
}

void X31() {
  flip (567/1000) {
    if (b) {
      X31();
    }
    else {
      X36();
    }
  }
}

void X32() {
  flip (357/500) {
    b = true;
    X31();
  }
  else {
    b = true;
    X31();
  }
}

void X33() {
  X27();
  X27();
}

void X34() {
  flip (89/200) {
    if (a) {
      X29();
    }
    else {
      X35();
    }
  }
}

void X35() {
  flip (201/250) {
    if (a) {
      X32();
    }
    else {
      X36();
    }
  }
}

void X36() {
  flip (491/500) {
    a = true;
    X38();
  }
  else {
    b = true;
    X32();
  }
}

void X37() {
  flip (221/250) {
    b = false;
    X39();
  }
  else {
    b = false;
    X40();
  }
}

void X38() {
  flip (151/500) {
    b = false;
    X37();
  }
  else {
    b = false;
    X42();
  }
}

void X39() {
  flip (39/50) {
    if (a) {
      X42();
    }
    else {
      X34();
    }
  }
}

void X40() {
  flip (179/500) {
    a = false;
    X37();
  }
  else {
    b = true;
    X44();
  }
}

void X41() {
  flip (3/8) {
    if (a) {
      X40();
    }
    else {
      X42();
    }
  }
}

void X42() {
  flip (56/125) {
    a = false;
    X43();
  }
  else {
    b = false;
    X37();
  }
}

void X43() {
  flip (961/1000) {
    b = true;
    X40();
  }
  else {
    a = true;
    X45();
  }
}

void X44() {
  X47();
  X39();
}

void X45() {
  X43();
  X48();
}

void X46() {
  flip (173/1000) {
    a = true;
    X42();
  }
  else {
    a = true;
    X47();
  }
}

void X47() {
  flip (843/1000) {
    b = true;
    X44();
  }
  else {
    b = true;
    X47();
  }
}

void X48() {
  flip (31/200) {
    if (b) {
      X48();
    }
    else {
      X49();
    }
  }
}

void X49() {
  X44();
  X50();
}

void X50() {
  X55();
  X50();
}

void X51() {
  flip (739/1000) {
    if (b) {
      X46();
    }
    else {
      X45();
    }
  }
}

void X52() {
  X49();
  X51();
}

void X53() {
  flip (481/500) {
    if (a) {
      X47();
    }
    else {
      X55();
    }
  }
}

void X54() {
  flip (729/1000) {
    if (a) {
      X55();
    }
    else {
      X54();
    }
  }
}

void X55() {
  flip (199/1000) {
    if (b) {
      X59();
    }
    else {
      X54();
    }
  }
}

void X56() {
  flip (321/500) {
    b = true;
    X55();
  }
  else {
    a = false;
    X61();
  }
}

void X57() {
  X52();
  X61();
}

void X58() {
  flip (127/500) {
    if (a) {
      X52();
    }
    else {
      X61();
    }
  }
}

void X59() {
  flip (7/20) {
    if (a) {
      X56();
    }
    else {
      X62();
    }
  }
}

void X60() {
  X59();
  X60();
}

void X61() {
  flip (26/125) {
    if (a) {
      X66();
    }
    else {
      X59();
    }
  }
}

void X62() {
  X63();
  X61();
}

void X63() {
  flip (67/1000) {
    a = true;
    X64();
  }
  else {
    a = false;
    X65();
  }
}

void X64() {
  X64();
  X64();
}

void X65() {
  flip (781/1000) {
    b = false;
    X69();
  }
  else {
    a = false;
    X67();
  }
}

void X66() {
  X66();
  X71();
}

void X67() {
  flip (181/1000) {
    a = false;
    X65();
  }
  else {
    a = true;
    X71();
  }
}

void X68() {
  flip (43/125) {
    if (a) {
      X72();
    }
    else {
      X62();
    }
  }
}

void X69() {
  flip (117/200) {
    a = true;
    X65();
  }
  else {
    a = false;
    X66();
  }
}

void X70() {
  flip (193/500) {
    b = false;
    X66();
  }
  else {
    a = true;
    X74();
  }
}

void X71() {
  X70();
  X70();
}

void X72() {
  flip (311/1000) {
    a = true;
    X68();
  }
  else {
    b = false;
    X66();
  }
}

void X73() {
  X73();
  X69();
}

void X74() {
  flip (139/200) {
    if (a) {
      X76();
    }
    else {
      X73();
    }
  }
}

void X75() {
  flip (4/125) {
    a = true;
    X73();
  }
  else {
    b = false;
    X73();
  }
}

void X76() {
  flip (121/500) {
    if (a) {
      X81();
    }
    else {
      X70();
    }
  }
}

void X77() {
  flip (263/1000) {
    if (b) {
      X79();
    }
    else {
      X72();
    }
  }
}

void X78() {
  flip (49/100) {
    if (a) {
      X74();
    }
    else {
      X72();
    }
  }
}

void X79() {
  flip (73/100) {
    if (a) {
      X73();
    }
    else {
      X76();
    }
  }
}

void X80() {
  flip (181/500) {
    a = false;
    X81();
  }
  else {
    b = false;
    X84();
  }
}

void X81() {
  flip (177/250) {
    a = false;
    X81();
  }
  else {
    b = true;
    X75();
  }
}

void X82() {
  flip (79/1000) {
    a = true;
    X86();
  }
  else {
    a = true;
    X82();
  }
}

void X83() {
  flip (69/200) {
    if (b) {
      X84();
    }
    else {
      X86();
    }
  }
}

void X84() {
  X85();
  X78();
}

void X85() {
  X79();
  X89();
}

void X86() {
  X86();
  X88();
}

void X87() {
  flip (3/250) {
    a = true;
    X87();
  }
  else {
    b = false;
    X84();
  }
}

void X88() {
  X85();
  X87();
}

void X89() {
  X91();
  X85();
}

void X90() {
  X88();
  X90();
}

void X91() {
  X94();
  X92();
}

void X92() {
  X87();
  X87();
}

void X93() {
  X96();
  X90();
}

void X94() {
  X94();
  X88();
}

void X95() {
  flip (243/500) {
    b = false;
    X90();
  }
  else {
    a = false;
    X91();
  }
}

void X96() {
  flip (27/1000) {
    b = false;
    X91();
  }
  else {
    b = false;
    X97();
  }
}

void X97() {
  flip (919/1000) {
    a = true;
    X91();
  }
  else {
    b = false;
    X97();
  }
}

void X98() {
  X92();
  X97();
}

void X99() {
  X93();
  X99();
}
