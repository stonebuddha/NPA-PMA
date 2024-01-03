bool a;
bool b;

void X0() {
  flip (191/500) {
    if (a) {
      X2();
    }
    else {
      X0();
    }
  }
}

void X1() {
  flip (59/500) {
    if (b) {
      X3();
    }
    else {
      X2();
    }
  }
}

void X2() {
  flip (17/125) {
    if (b) {
      X4();
    }
    else {
      X4();
    }
  }
}

void X3() {
  flip (77/100) {
    a = false;
    X98();
  }
  else {
    a = true;
    X98();
  }
}

void X4() {
  X7();
  X5();
}

void X5() {
  flip (71/1000) {
    if (a) {
      X99();
    }
    else {
      X7();
    }
  }
}

void X6() {
  flip (17/125) {
    a = false;
    X6();
  }
  else {
    b = false;
    X7();
  }
}

void X7() {
  flip (231/1000) {
    b = true;
    X12();
  }
  else {
    b = false;
    X1();
  }
}

void X8() {
  flip (9/1000) {
    if (a) {
      X4();
    }
    else {
      X9();
    }
  }
}

void X9() {
  flip (111/500) {
    if (b) {
      X12();
    }
    else {
      X6();
    }
  }
}

void X10() {
  flip (97/250) {
    a = false;
    X14();
  }
  else {
    b = false;
    X9();
  }
}

void X11() {
  flip (149/1000) {
    if (a) {
      X13();
    }
    else {
      X8();
    }
  }
}

void X12() {
  X16();
  X12();
}

void X13() {
  flip (74/125) {
    b = true;
    X9();
  }
  else {
    b = true;
    X7();
  }
}

void X14() {
  flip (17/1000) {
    if (a) {
      X11();
    }
    else {
      X8();
    }
  }
}

void X15() {
  flip (82/125) {
    b = true;
    X20();
  }
  else {
    a = false;
    X11();
  }
}

void X16() {
  flip (821/1000) {
    b = true;
    X14();
  }
  else {
    a = true;
    X13();
  }
}

void X17() {
  X11();
  X12();
}

void X18() {
  flip (139/200) {
    if (b) {
      X21();
    }
    else {
      X14();
    }
  }
}

void X19() {
  X13();
  X19();
}

void X20() {
  X16();
  X23();
}

void X21() {
  flip (69/125) {
    a = true;
    X19();
  }
  else {
    b = false;
    X16();
  }
}

void X22() {
  X20();
  X18();
}

void X23() {
  flip (143/1000) {
    b = true;
    X26();
  }
  else {
    b = false;
    X27();
  }
}

void X24() {
  flip (241/250) {
    if (b) {
      X25();
    }
    else {
      X24();
    }
  }
}

void X25() {
  flip (389/1000) {
    b = true;
    X25();
  }
  else {
    a = true;
    X29();
  }
}

void X26() {
  flip (191/1000) {
    if (a) {
      X29();
    }
    else {
      X26();
    }
  }
}

void X27() {
  flip (473/1000) {
    b = true;
    X22();
  }
  else {
    b = false;
    X23();
  }
}

void X28() {
  flip (83/500) {
    a = false;
    X32();
  }
  else {
    b = true;
    X26();
  }
}

void X29() {
  X29();
  X31();
}

void X30() {
  flip (119/200) {
    b = false;
    X25();
  }
  else {
    b = false;
    X35();
  }
}

void X31() {
  flip (381/1000) {
    if (b) {
      X30();
    }
    else {
      X29();
    }
  }
}

void X32() {
  flip (309/500) {
    if (a) {
      X31();
    }
    else {
      X30();
    }
  }
}

void X33() {
  flip (871/1000) {
    if (b) {
      X36();
    }
    else {
      X37();
    }
  }
}

void X34() {
  flip (38/125) {
    if (b) {
      X36();
    }
    else {
      X32();
    }
  }
}

void X35() {
  X33();
  X29();
}

void X36() {
  flip (957/1000) {
    if (b) {
      X37();
    }
    else {
      X36();
    }
  }
}

void X37() {
  flip (48/125) {
    if (a) {
      X39();
    }
    else {
      X31();
    }
  }
}

void X38() {
  X39();
  X37();
}

void X39() {
  flip (429/500) {
    b = false;
    X34();
  }
  else {
    a = true;
    X41();
  }
}

void X40() {
  flip (793/1000) {
    if (a) {
      X34();
    }
    else {
      X41();
    }
  }
}

void X41() {
  flip (477/500) {
    a = true;
    X37();
  }
  else {
    b = true;
    X41();
  }
}

void X42() {
  X37();
  X43();
}

void X43() {
  flip (263/1000) {
    a = false;
    X47();
  }
  else {
    a = false;
    X47();
  }
}

void X44() {
  X42();
  X44();
}

void X45() {
  X48();
  X50();
}

void X46() {
  flip (891/1000) {
    b = true;
    X48();
  }
  else {
    a = false;
    X43();
  }
}

void X47() {
  flip (889/1000) {
    a = true;
    X42();
  }
  else {
    a = false;
    X52();
  }
}

void X48() {
  X49();
  X42();
}

void X49() {
  X45();
  X50();
}

void X50() {
  X44();
  X52();
}

void X51() {
  X56();
  X52();
}

void X52() {
  X46();
  X47();
}

void X53() {
  X54();
  X58();
}

void X54() {
  X53();
  X59();
}

void X55() {
  flip (951/1000) {
    if (b) {
      X50();
    }
    else {
      X50();
    }
  }
}

void X56() {
  X60();
  X54();
}

void X57() {
  flip (541/1000) {
    if (b) {
      X52();
    }
    else {
      X51();
    }
  }
}

void X58() {
  X61();
  X57();
}

void X59() {
  X53();
  X60();
}

void X60() {
  flip (357/500) {
    if (b) {
      X64();
    }
    else {
      X64();
    }
  }
}

void X61() {
  flip (104/125) {
    if (a) {
      X59();
    }
    else {
      X65();
    }
  }
}

void X62() {
  X67();
  X63();
}

void X63() {
  X59();
  X65();
}

void X64() {
  flip (47/250) {
    b = true;
    X61();
  }
  else {
    b = true;
    X65();
  }
}

void X65() {
  flip (33/250) {
    b = true;
    X66();
  }
  else {
    a = true;
    X63();
  }
}

void X66() {
  X70();
  X63();
}

void X67() {
  X66();
  X70();
}

void X68() {
  flip (793/1000) {
    if (b) {
      X71();
    }
    else {
      X66();
    }
  }
}

void X69() {
  flip (199/200) {
    if (a) {
      X74();
    }
    else {
      X73();
    }
  }
}

void X70() {
  flip (6/25) {
    if (b) {
      X69();
    }
    else {
      X72();
    }
  }
}

void X71() {
  X70();
  X76();
}

void X72() {
  X75();
  X70();
}

void X73() {
  flip (207/500) {
    b = true;
    X72();
  }
  else {
    a = true;
    X70();
  }
}

void X74() {
  flip (7/100) {
    if (b) {
      X70();
    }
    else {
      X73();
    }
  }
}

void X75() {
  flip (239/1000) {
    b = false;
    X78();
  }
  else {
    b = false;
    X69();
  }
}

void X76() {
  flip (47/1000) {
    if (a) {
      X71();
    }
    else {
      X70();
    }
  }
}

void X77() {
  X71();
  X77();
}

void X78() {
  flip (323/500) {
    if (b) {
      X80();
    }
    else {
      X83();
    }
  }
}

void X79() {
  flip (467/1000) {
    if (a) {
      X75();
    }
    else {
      X81();
    }
  }
}

void X80() {
  X84();
  X79();
}

void X81() {
  flip (227/1000) {
    if (a) {
      X83();
    }
    else {
      X83();
    }
  }
}

void X82() {
  flip (9/100) {
    if (b) {
      X78();
    }
    else {
      X83();
    }
  }
}

void X83() {
  flip (103/200) {
    a = false;
    X81();
  }
  else {
    a = true;
    X79();
  }
}

void X84() {
  X85();
  X87();
}

void X85() {
  flip (114/125) {
    b = false;
    X85();
  }
  else {
    a = false;
    X90();
  }
}

void X86() {
  flip (4/25) {
    if (b) {
      X91();
    }
    else {
      X89();
    }
  }
}

void X87() {
  flip (503/1000) {
    if (a) {
      X89();
    }
    else {
      X81();
    }
  }
}

void X88() {
  flip (469/1000) {
    if (a) {
      X84();
    }
    else {
      X86();
    }
  }
}

void X89() {
  X88();
  X93();
}

void X90() {
  flip (697/1000) {
    if (b) {
      X94();
    }
    else {
      X92();
    }
  }
}

void X91() {
  X95();
  X90();
}

void X92() {
  flip (103/125) {
    b = true;
    X87();
  }
  else {
    a = false;
    X92();
  }
}

void X93() {
  flip (119/1000) {
    if (a) {
      X89();
    }
    else {
      X94();
    }
  }
}

void X94() {
  flip (877/1000) {
    a = false;
    X95();
  }
  else {
    a = false;
    X90();
  }
}

void X95() {
  flip (48/125) {
    b = true;
    X97();
  }
  else {
    a = true;
    X96();
  }
}

void X96() {
  flip (239/250) {
    if (b) {
      X94();
    }
    else {
      X99();
    }
  }
}

void X97() {
  flip (249/1000) {
    b = false;
    X92();
  }
  else {
    b = true;
    X98();
  }
}

void X98() {
  X3();
  X97();
}

void X99() {
  flip (183/1000) {
    if (a) {
      X4();
    }
    else {
      X97();
    }
  }
}
