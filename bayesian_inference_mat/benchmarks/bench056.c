bool a;
bool b;

void X0() {
  flip (793/1000) {
    b = true;
    X94();
  }
  else {
    a = false;
    X96();
  }
}

void X1() {
  flip (859/1000) {
    if (b) {
      X0();
    }
    else {
      X4();
    }
  }
}

void X2() {
  flip (681/1000) {
    if (b) {
      X4();
    }
    else {
      X99();
    }
  }
}

void X3() {
  X4();
  X4();
}

void X4() {
  flip (243/1000) {
    b = false;
    X3();
  }
  else {
    b = true;
    X2();
  }
}

void X5() {
  X7();
  X5();
}

void X6() {
  flip (971/1000) {
    a = false;
    X9();
  }
  else {
    a = true;
    X5();
  }
}

void X7() {
  X10();
  X6();
}

void X8() {
  flip (11/250) {
    a = true;
    X10();
  }
  else {
    b = false;
    X8();
  }
}

void X9() {
  X10();
  X10();
}

void X10() {
  flip (161/200) {
    if (a) {
      X10();
    }
    else {
      X6();
    }
  }
}

void X11() {
  flip (417/500) {
    a = false;
    X7();
  }
  else {
    a = false;
    X14();
  }
}

void X12() {
  flip (749/1000) {
    b = true;
    X9();
  }
  else {
    a = false;
    X10();
  }
}

void X13() {
  flip (443/500) {
    if (b) {
      X16();
    }
    else {
      X18();
    }
  }
}

void X14() {
  X18();
  X8();
}

void X15() {
  X17();
  X9();
}

void X16() {
  flip (351/500) {
    a = false;
    X21();
  }
  else {
    a = false;
    X17();
  }
}

void X17() {
  flip (293/500) {
    a = false;
    X22();
  }
  else {
    a = true;
    X12();
  }
}

void X18() {
  flip (117/250) {
    a = false;
    X20();
  }
  else {
    b = true;
    X23();
  }
}

void X19() {
  X22();
  X23();
}

void X20() {
  flip (4/25) {
    if (a) {
      X17();
    }
    else {
      X14();
    }
  }
}

void X21() {
  flip (33/250) {
    if (b) {
      X18();
    }
    else {
      X19();
    }
  }
}

void X22() {
  X23();
  X23();
}

void X23() {
  flip (497/500) {
    if (a) {
      X24();
    }
    else {
      X22();
    }
  }
}

void X24() {
  flip (157/1000) {
    if (a) {
      X23();
    }
    else {
      X28();
    }
  }
}

void X25() {
  flip (163/250) {
    if (b) {
      X29();
    }
    else {
      X21();
    }
  }
}

void X26() {
  flip (223/250) {
    if (b) {
      X26();
    }
    else {
      X29();
    }
  }
}

void X27() {
  flip (41/1000) {
    if (a) {
      X30();
    }
    else {
      X28();
    }
  }
}

void X28() {
  flip (117/125) {
    a = false;
    X32();
  }
  else {
    b = true;
    X33();
  }
}

void X29() {
  X32();
  X26();
}

void X30() {
  X33();
  X34();
}

void X31() {
  flip (103/500) {
    a = false;
    X29();
  }
  else {
    b = true;
    X27();
  }
}

void X32() {
  flip (29/500) {
    b = false;
    X32();
  }
  else {
    a = true;
    X26();
  }
}

void X33() {
  flip (473/1000) {
    b = true;
    X36();
  }
  else {
    a = false;
    X28();
  }
}

void X34() {
  flip (189/200) {
    if (b) {
      X36();
    }
    else {
      X36();
    }
  }
}

void X35() {
  flip (89/125) {
    b = false;
    X35();
  }
  else {
    a = false;
    X30();
  }
}

void X36() {
  flip (393/500) {
    if (b) {
      X37();
    }
    else {
      X37();
    }
  }
}

void X37() {
  flip (741/1000) {
    a = false;
    X38();
  }
  else {
    a = true;
    X38();
  }
}

void X38() {
  X42();
  X43();
}

void X39() {
  flip (91/125) {
    if (b) {
      X33();
    }
    else {
      X39();
    }
  }
}

void X40() {
  X45();
  X35();
}

void X41() {
  flip (251/500) {
    if (a) {
      X44();
    }
    else {
      X37();
    }
  }
}

void X42() {
  flip (129/1000) {
    if (a) {
      X46();
    }
    else {
      X44();
    }
  }
}

void X43() {
  flip (223/250) {
    if (b) {
      X46();
    }
    else {
      X46();
    }
  }
}

void X44() {
  X42();
  X48();
}

void X45() {
  X44();
  X47();
}

void X46() {
  X44();
  X50();
}

void X47() {
  flip (783/1000) {
    a = false;
    X47();
  }
  else {
    a = false;
    X44();
  }
}

void X48() {
  flip (703/1000) {
    b = false;
    X48();
  }
  else {
    b = true;
    X50();
  }
}

void X49() {
  flip (313/1000) {
    if (a) {
      X44();
    }
    else {
      X48();
    }
  }
}

void X50() {
  flip (29/100) {
    b = false;
    X46();
  }
  else {
    a = true;
    X50();
  }
}

void X51() {
  X50();
  X49();
}

void X52() {
  X52();
  X47();
}

void X53() {
  flip (1/10) {
    if (b) {
      X57();
    }
    else {
      X52();
    }
  }
}

void X54() {
  X58();
  X49();
}

void X55() {
  flip (83/200) {
    a = false;
    X60();
  }
  else {
    a = false;
    X51();
  }
}

void X56() {
  flip (39/40) {
    if (b) {
      X55();
    }
    else {
      X57();
    }
  }
}

void X57() {
  flip (73/200) {
    if (b) {
      X56();
    }
    else {
      X56();
    }
  }
}

void X58() {
  X58();
  X62();
}

void X59() {
  X57();
  X58();
}

void X60() {
  X63();
  X65();
}

void X61() {
  flip (12/125) {
    if (a) {
      X58();
    }
    else {
      X59();
    }
  }
}

void X62() {
  flip (17/40) {
    if (a) {
      X56();
    }
    else {
      X62();
    }
  }
}

void X63() {
  X61();
  X66();
}

void X64() {
  X68();
  X60();
}

void X65() {
  flip (124/125) {
    if (a) {
      X65();
    }
    else {
      X64();
    }
  }
}

void X66() {
  flip (14/125) {
    a = true;
    X68();
  }
  else {
    b = false;
    X62();
  }
}

void X67() {
  flip (781/1000) {
    if (b) {
      X72();
    }
    else {
      X62();
    }
  }
}

void X68() {
  flip (47/250) {
    b = true;
    X69();
  }
  else {
    b = true;
    X66();
  }
}

void X69() {
  flip (17/250) {
    if (b) {
      X73();
    }
    else {
      X74();
    }
  }
}

void X70() {
  X72();
  X73();
}

void X71() {
  flip (83/125) {
    if (a) {
      X74();
    }
    else {
      X70();
    }
  }
}

void X72() {
  X67();
  X70();
}

void X73() {
  X74();
  X72();
}

void X74() {
  X73();
  X69();
}

void X75() {
  flip (323/1000) {
    a = true;
    X72();
  }
  else {
    b = false;
    X76();
  }
}

void X76() {
  flip (87/125) {
    b = true;
    X77();
  }
  else {
    a = true;
    X75();
  }
}

void X77() {
  flip (34/125) {
    if (b) {
      X82();
    }
    else {
      X76();
    }
  }
}

void X78() {
  flip (701/1000) {
    if (a) {
      X82();
    }
    else {
      X81();
    }
  }
}

void X79() {
  X73();
  X77();
}

void X80() {
  flip (199/1000) {
    if (a) {
      X81();
    }
    else {
      X79();
    }
  }
}

void X81() {
  X85();
  X82();
}

void X82() {
  flip (629/1000) {
    if (a) {
      X85();
    }
    else {
      X77();
    }
  }
}

void X83() {
  X82();
  X86();
}

void X84() {
  flip (721/1000) {
    b = true;
    X89();
  }
  else {
    a = true;
    X85();
  }
}

void X85() {
  flip (137/500) {
    a = true;
    X80();
  }
  else {
    b = true;
    X86();
  }
}

void X86() {
  X81();
  X90();
}

void X87() {
  X82();
  X84();
}

void X88() {
  flip (879/1000) {
    a = true;
    X89();
  }
  else {
    a = true;
    X92();
  }
}

void X89() {
  flip (1/10) {
    if (a) {
      X87();
    }
    else {
      X89();
    }
  }
}

void X90() {
  flip (177/1000) {
    a = true;
    X87();
  }
  else {
    a = true;
    X92();
  }
}

void X91() {
  flip (851/1000) {
    a = true;
    X92();
  }
  else {
    a = false;
    X86();
  }
}

void X92() {
  flip (171/250) {
    if (b) {
      X93();
    }
    else {
      X92();
    }
  }
}

void X93() {
  X88();
  X96();
}

void X94() {
  X95();
  X97();
}

void X95() {
  flip (653/1000) {
    if (b) {
      X96();
    }
    else {
      X96();
    }
  }
}

void X96() {
  flip (93/250) {
    if (a) {
      X95();
    }
    else {
      X1();
    }
  }
}

void X97() {
  flip (78/125) {
    b = false;
    X0();
  }
  else {
    b = true;
    X93();
  }
}

void X98() {
  X1();
  X3();
}

void X99() {
  flip (27/50) {
    a = true;
    X93();
  }
  else {
    b = true;
    X3();
  }
}
