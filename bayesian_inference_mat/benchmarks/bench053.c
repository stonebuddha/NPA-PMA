bool a;
bool b;

void X0() {
  flip (47/125) {
    b = true;
    X1();
  }
  else {
    b = false;
    X4();
  }
}

void X1() {
  X97();
  X3();
}

void X2() {
  flip (81/1000) {
    if (b) {
      X98();
    }
    else {
      X0();
    }
  }
}

void X3() {
  flip (921/1000) {
    b = false;
    X97();
  }
  else {
    a = false;
    X98();
  }
}

void X4() {
  flip (1/125) {
    a = false;
    X2();
  }
  else {
    b = true;
    X4();
  }
}

void X5() {
  flip (281/500) {
    b = false;
    X7();
  }
  else {
    a = false;
    X7();
  }
}

void X6() {
  flip (751/1000) {
    b = true;
    X10();
  }
  else {
    a = true;
    X3();
  }
}

void X7() {
  X8();
  X2();
}

void X8() {
  X9();
  X3();
}

void X9() {
  flip (41/125) {
    if (b) {
      X4();
    }
    else {
      X6();
    }
  }
}

void X10() {
  X13();
  X6();
}

void X11() {
  flip (557/1000) {
    if (a) {
      X5();
    }
    else {
      X13();
    }
  }
}

void X12() {
  flip (437/500) {
    if (b) {
      X10();
    }
    else {
      X8();
    }
  }
}

void X13() {
  X15();
  X17();
}

void X14() {
  flip (173/200) {
    if (b) {
      X10();
    }
    else {
      X17();
    }
  }
}

void X15() {
  flip (203/250) {
    b = false;
    X10();
  }
  else {
    b = false;
    X16();
  }
}

void X16() {
  flip (143/250) {
    if (b) {
      X17();
    }
    else {
      X14();
    }
  }
}

void X17() {
  flip (183/500) {
    if (b) {
      X22();
    }
    else {
      X20();
    }
  }
}

void X18() {
  X19();
  X22();
}

void X19() {
  flip (94/125) {
    a = false;
    X22();
  }
  else {
    b = false;
    X13();
  }
}

void X20() {
  flip (69/200) {
    b = true;
    X22();
  }
  else {
    b = false;
    X20();
  }
}

void X21() {
  X26();
  X23();
}

void X22() {
  X21();
  X27();
}

void X23() {
  flip (893/1000) {
    if (b) {
      X19();
    }
    else {
      X27();
    }
  }
}

void X24() {
  flip (749/1000) {
    b = true;
    X29();
  }
  else {
    a = true;
    X18();
  }
}

void X25() {
  X30();
  X29();
}

void X26() {
  flip (93/500) {
    if (a) {
      X20();
    }
    else {
      X24();
    }
  }
}

void X27() {
  flip (347/1000) {
    if (a) {
      X22();
    }
    else {
      X28();
    }
  }
}

void X28() {
  X31();
  X33();
}

void X29() {
  flip (433/500) {
    a = true;
    X24();
  }
  else {
    a = false;
    X34();
  }
}

void X30() {
  X32();
  X28();
}

void X31() {
  flip (23/25) {
    if (b) {
      X28();
    }
    else {
      X30();
    }
  }
}

void X32() {
  X27();
  X29();
}

void X33() {
  X35();
  X29();
}

void X34() {
  flip (118/125) {
    a = false;
    X32();
  }
  else {
    b = false;
    X32();
  }
}

void X35() {
  flip (937/1000) {
    b = true;
    X36();
  }
  else {
    b = true;
    X31();
  }
}

void X36() {
  flip (529/1000) {
    if (a) {
      X41();
    }
    else {
      X34();
    }
  }
}

void X37() {
  flip (56/125) {
    if (a) {
      X37();
    }
    else {
      X40();
    }
  }
}

void X38() {
  flip (617/1000) {
    if (a) {
      X43();
    }
    else {
      X35();
    }
  }
}

void X39() {
  flip (813/1000) {
    if (b) {
      X39();
    }
    else {
      X33();
    }
  }
}

void X40() {
  X45();
  X45();
}

void X41() {
  flip (101/200) {
    if (b) {
      X42();
    }
    else {
      X37();
    }
  }
}

void X42() {
  flip (167/1000) {
    b = false;
    X47();
  }
  else {
    b = true;
    X41();
  }
}

void X43() {
  flip (9/500) {
    b = false;
    X40();
  }
  else {
    b = false;
    X37();
  }
}

void X44() {
  X39();
  X44();
}

void X45() {
  flip (179/250) {
    a = true;
    X43();
  }
  else {
    a = true;
    X44();
  }
}

void X46() {
  flip (363/1000) {
    if (b) {
      X48();
    }
    else {
      X51();
    }
  }
}

void X47() {
  flip (489/1000) {
    a = true;
    X43();
  }
  else {
    b = false;
    X42();
  }
}

void X48() {
  flip (559/1000) {
    a = true;
    X51();
  }
  else {
    b = false;
    X48();
  }
}

void X49() {
  flip (9/20) {
    if (a) {
      X49();
    }
    else {
      X45();
    }
  }
}

void X50() {
  X45();
  X47();
}

void X51() {
  flip (437/500) {
    b = false;
    X53();
  }
  else {
    b = true;
    X54();
  }
}

void X52() {
  X51();
  X47();
}

void X53() {
  X54();
  X52();
}

void X54() {
  flip (29/125) {
    a = false;
    X50();
  }
  else {
    a = true;
    X52();
  }
}

void X55() {
  flip (423/500) {
    a = true;
    X49();
  }
  else {
    b = false;
    X59();
  }
}

void X56() {
  X56();
  X57();
}

void X57() {
  flip (119/250) {
    if (a) {
      X60();
    }
    else {
      X60();
    }
  }
}

void X58() {
  flip (59/1000) {
    if (a) {
      X63();
    }
    else {
      X59();
    }
  }
}

void X59() {
  flip (161/200) {
    a = true;
    X57();
  }
  else {
    a = true;
    X56();
  }
}

void X60() {
  flip (321/500) {
    b = false;
    X61();
  }
  else {
    a = false;
    X65();
  }
}

void X61() {
  flip (17/500) {
    b = true;
    X61();
  }
  else {
    b = false;
    X58();
  }
}

void X62() {
  flip (33/50) {
    a = false;
    X58();
  }
  else {
    b = false;
    X63();
  }
}

void X63() {
  X64();
  X68();
}

void X64() {
  X60();
  X59();
}

void X65() {
  flip (22/125) {
    if (b) {
      X69();
    }
    else {
      X61();
    }
  }
}

void X66() {
  flip (81/200) {
    if (a) {
      X71();
    }
    else {
      X65();
    }
  }
}

void X67() {
  X68();
  X66();
}

void X68() {
  flip (1/5) {
    if (a) {
      X66();
    }
    else {
      X69();
    }
  }
}

void X69() {
  X63();
  X65();
}

void X70() {
  flip (257/500) {
    a = false;
    X64();
  }
  else {
    b = true;
    X70();
  }
}

void X71() {
  flip (821/1000) {
    a = true;
    X73();
  }
  else {
    a = true;
    X65();
  }
}

void X72() {
  flip (117/250) {
    a = true;
    X73();
  }
  else {
    a = false;
    X76();
  }
}

void X73() {
  X76();
  X69();
}

void X74() {
  flip (113/500) {
    a = true;
    X70();
  }
  else {
    a = true;
    X68();
  }
}

void X75() {
  flip (109/1000) {
    if (a) {
      X70();
    }
    else {
      X69();
    }
  }
}

void X76() {
  flip (57/1000) {
    if (a) {
      X72();
    }
    else {
      X73();
    }
  }
}

void X77() {
  flip (167/250) {
    if (a) {
      X77();
    }
    else {
      X78();
    }
  }
}

void X78() {
  X80();
  X74();
}

void X79() {
  flip (37/50) {
    a = false;
    X74();
  }
  else {
    b = false;
    X75();
  }
}

void X80() {
  flip (129/200) {
    b = true;
    X81();
  }
  else {
    b = true;
    X83();
  }
}

void X81() {
  flip (28/125) {
    b = false;
    X83();
  }
  else {
    a = false;
    X75();
  }
}

void X82() {
  flip (127/250) {
    if (a) {
      X80();
    }
    else {
      X77();
    }
  }
}

void X83() {
  flip (327/1000) {
    a = false;
    X80();
  }
  else {
    b = false;
    X84();
  }
}

void X84() {
  X84();
  X89();
}

void X85() {
  flip (223/500) {
    b = false;
    X80();
  }
  else {
    b = true;
    X89();
  }
}

void X86() {
  flip (209/250) {
    if (a) {
      X87();
    }
    else {
      X89();
    }
  }
}

void X87() {
  flip (48/125) {
    if (a) {
      X83();
    }
    else {
      X90();
    }
  }
}

void X88() {
  X89();
  X90();
}

void X89() {
  flip (11/500) {
    a = true;
    X93();
  }
  else {
    b = true;
    X84();
  }
}

void X90() {
  flip (651/1000) {
    b = true;
    X85();
  }
  else {
    a = true;
    X92();
  }
}

void X91() {
  flip (153/250) {
    if (a) {
      X85();
    }
    else {
      X95();
    }
  }
}

void X92() {
  flip (857/1000) {
    if (a) {
      X94();
    }
    else {
      X94();
    }
  }
}

void X93() {
  flip (831/1000) {
    if (a) {
      X88();
    }
    else {
      X97();
    }
  }
}

void X94() {
  flip (611/1000) {
    if (a) {
      X96();
    }
    else {
      X90();
    }
  }
}

void X95() {
  flip (379/500) {
    if (b) {
      X95();
    }
    else {
      X94();
    }
  }
}

void X96() {
  flip (111/200) {
    a = false;
    X90();
  }
  else {
    a = false;
    X0();
  }
}

void X97() {
  flip (117/500) {
    if (a) {
      X2();
    }
    else {
      X99();
    }
  }
}

void X98() {
  flip (497/1000) {
    if (b) {
      X92();
    }
    else {
      X1();
    }
  }
}

void X99() {
  flip (487/1000) {
    b = false;
    X95();
  }
  else {
    a = true;
    X96();
  }
}
