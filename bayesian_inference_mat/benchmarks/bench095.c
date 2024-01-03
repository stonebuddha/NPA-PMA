bool a;
bool b;

void X0() {
  flip (21/1000) {
    if (b) {
      X3();
    }
    else {
      X1();
    }
  }
}

void X1() {
  flip (67/125) {
    if (b) {
      X98();
    }
    else {
      X95();
    }
  }
}

void X2() {
  X99();
  X5();
}

void X3() {
  flip (329/500) {
    a = false;
    X6();
  }
  else {
    a = true;
    X1();
  }
}

void X4() {
  flip (99/125) {
    a = false;
    X5();
  }
  else {
    a = true;
    X0();
  }
}

void X5() {
  flip (2/125) {
    if (a) {
      X9();
    }
    else {
      X8();
    }
  }
}

void X6() {
  flip (41/200) {
    b = false;
    X9();
  }
  else {
    a = false;
    X8();
  }
}

void X7() {
  X10();
  X1();
}

void X8() {
  flip (999/1000) {
    if (b) {
      X11();
    }
    else {
      X4();
    }
  }
}

void X9() {
  flip (189/1000) {
    if (b) {
      X11();
    }
    else {
      X13();
    }
  }
}

void X10() {
  flip (171/1000) {
    b = false;
    X10();
  }
  else {
    a = false;
    X5();
  }
}

void X11() {
  flip (221/500) {
    a = false;
    X11();
  }
  else {
    b = false;
    X15();
  }
}

void X12() {
  X17();
  X8();
}

void X13() {
  flip (9/250) {
    b = true;
    X11();
  }
  else {
    b = false;
    X12();
  }
}

void X14() {
  X9();
  X18();
}

void X15() {
  flip (341/500) {
    if (b) {
      X10();
    }
    else {
      X14();
    }
  }
}

void X16() {
  flip (87/100) {
    if (b) {
      X19();
    }
    else {
      X20();
    }
  }
}

void X17() {
  flip (383/500) {
    b = false;
    X13();
  }
  else {
    b = true;
    X14();
  }
}

void X18() {
  flip (537/1000) {
    b = false;
    X14();
  }
  else {
    b = true;
    X18();
  }
}

void X19() {
  X21();
  X14();
}

void X20() {
  X23();
  X20();
}

void X21() {
  flip (11/40) {
    b = true;
    X17();
  }
  else {
    a = false;
    X20();
  }
}

void X22() {
  X16();
  X17();
}

void X23() {
  flip (54/125) {
    if (b) {
      X21();
    }
    else {
      X26();
    }
  }
}

void X24() {
  flip (499/1000) {
    if (b) {
      X28();
    }
    else {
      X25();
    }
  }
}

void X25() {
  flip (111/125) {
    b = true;
    X23();
  }
  else {
    b = false;
    X30();
  }
}

void X26() {
  flip (26/125) {
    b = true;
    X31();
  }
  else {
    b = true;
    X22();
  }
}

void X27() {
  flip (6/25) {
    if (b) {
      X27();
    }
    else {
      X24();
    }
  }
}

void X28() {
  flip (133/200) {
    if (b) {
      X32();
    }
    else {
      X29();
    }
  }
}

void X29() {
  X26();
  X29();
}

void X30() {
  flip (137/1000) {
    if (b) {
      X32();
    }
    else {
      X30();
    }
  }
}

void X31() {
  flip (171/200) {
    if (b) {
      X36();
    }
    else {
      X30();
    }
  }
}

void X32() {
  flip (103/500) {
    if (a) {
      X26();
    }
    else {
      X37();
    }
  }
}

void X33() {
  flip (211/250) {
    a = true;
    X38();
  }
  else {
    b = false;
    X30();
  }
}

void X34() {
  flip (118/125) {
    if (a) {
      X34();
    }
    else {
      X28();
    }
  }
}

void X35() {
  X38();
  X38();
}

void X36() {
  X35();
  X40();
}

void X37() {
  X38();
  X37();
}

void X38() {
  X37();
  X36();
}

void X39() {
  X38();
  X40();
}

void X40() {
  X38();
  X38();
}

void X41() {
  X40();
  X42();
}

void X42() {
  flip (101/250) {
    if (b) {
      X47();
    }
    else {
      X41();
    }
  }
}

void X43() {
  flip (81/1000) {
    if (b) {
      X45();
    }
    else {
      X44();
    }
  }
}

void X44() {
  flip (11/250) {
    if (a) {
      X42();
    }
    else {
      X49();
    }
  }
}

void X45() {
  flip (23/25) {
    if (b) {
      X41();
    }
    else {
      X45();
    }
  }
}

void X46() {
  X51();
  X42();
}

void X47() {
  flip (7/500) {
    b = false;
    X48();
  }
  else {
    b = true;
    X52();
  }
}

void X48() {
  flip (1/25) {
    if (b) {
      X52();
    }
    else {
      X47();
    }
  }
}

void X49() {
  flip (113/200) {
    if (a) {
      X50();
    }
    else {
      X45();
    }
  }
}

void X50() {
  flip (967/1000) {
    b = true;
    X46();
  }
  else {
    a = true;
    X50();
  }
}

void X51() {
  flip (551/1000) {
    a = false;
    X55();
  }
  else {
    a = false;
    X56();
  }
}

void X52() {
  flip (191/200) {
    if (b) {
      X56();
    }
    else {
      X49();
    }
  }
}

void X53() {
  X48();
  X54();
}

void X54() {
  X53();
  X57();
}

void X55() {
  flip (7/25) {
    a = true;
    X55();
  }
  else {
    a = true;
    X55();
  }
}

void X56() {
  flip (223/500) {
    if (b) {
      X60();
    }
    else {
      X56();
    }
  }
}

void X57() {
  flip (671/1000) {
    if (a) {
      X60();
    }
    else {
      X55();
    }
  }
}

void X58() {
  flip (451/1000) {
    if (a) {
      X58();
    }
    else {
      X56();
    }
  }
}

void X59() {
  flip (691/1000) {
    if (a) {
      X57();
    }
    else {
      X55();
    }
  }
}

void X60() {
  flip (79/200) {
    a = true;
    X56();
  }
  else {
    b = false;
    X59();
  }
}

void X61() {
  X65();
  X66();
}

void X62() {
  flip (317/1000) {
    if (b) {
      X59();
    }
    else {
      X60();
    }
  }
}

void X63() {
  flip (821/1000) {
    a = true;
    X68();
  }
  else {
    b = false;
    X59();
  }
}

void X64() {
  flip (647/1000) {
    if (a) {
      X65();
    }
    else {
      X64();
    }
  }
}

void X65() {
  flip (31/50) {
    if (b) {
      X67();
    }
    else {
      X63();
    }
  }
}

void X66() {
  flip (173/500) {
    b = true;
    X68();
  }
  else {
    b = false;
    X70();
  }
}

void X67() {
  flip (207/1000) {
    if (b) {
      X72();
    }
    else {
      X66();
    }
  }
}

void X68() {
  X62();
  X69();
}

void X69() {
  X69();
  X63();
}

void X70() {
  flip (61/100) {
    if (b) {
      X75();
    }
    else {
      X69();
    }
  }
}

void X71() {
  flip (29/50) {
    if (a) {
      X70();
    }
    else {
      X73();
    }
  }
}

void X72() {
  flip (449/500) {
    if (b) {
      X76();
    }
    else {
      X74();
    }
  }
}

void X73() {
  flip (58/125) {
    a = false;
    X70();
  }
  else {
    b = false;
    X71();
  }
}

void X74() {
  flip (447/500) {
    if (a) {
      X75();
    }
    else {
      X73();
    }
  }
}

void X75() {
  X70();
  X76();
}

void X76() {
  flip (767/1000) {
    b = false;
    X77();
  }
  else {
    a = true;
    X79();
  }
}

void X77() {
  flip (383/1000) {
    if (b) {
      X81();
    }
    else {
      X73();
    }
  }
}

void X78() {
  flip (229/250) {
    if (a) {
      X79();
    }
    else {
      X72();
    }
  }
}

void X79() {
  X76();
  X81();
}

void X80() {
  X83();
  X82();
}

void X81() {
  flip (311/1000) {
    b = false;
    X86();
  }
  else {
    a = true;
    X84();
  }
}

void X82() {
  X78();
  X82();
}

void X83() {
  flip (633/1000) {
    a = true;
    X87();
  }
  else {
    a = true;
    X84();
  }
}

void X84() {
  X86();
  X84();
}

void X85() {
  X85();
  X90();
}

void X86() {
  flip (4/25) {
    b = false;
    X87();
  }
  else {
    b = false;
    X88();
  }
}

void X87() {
  flip (969/1000) {
    if (a) {
      X85();
    }
    else {
      X84();
    }
  }
}

void X88() {
  X84();
  X85();
}

void X89() {
  X84();
  X90();
}

void X90() {
  flip (139/250) {
    a = true;
    X92();
  }
  else {
    b = true;
    X94();
  }
}

void X91() {
  flip (13/100) {
    a = true;
    X93();
  }
  else {
    b = false;
    X89();
  }
}

void X92() {
  flip (901/1000) {
    b = false;
    X92();
  }
  else {
    a = false;
    X89();
  }
}

void X93() {
  X91();
  X93();
}

void X94() {
  flip (291/500) {
    b = false;
    X91();
  }
  else {
    b = false;
    X88();
  }
}

void X95() {
  X93();
  X91();
}

void X96() {
  flip (102/125) {
    if (b) {
      X1();
    }
    else {
      X95();
    }
  }
}

void X97() {
  flip (149/1000) {
    b = false;
    X0();
  }
  else {
    a = true;
    X93();
  }
}

void X98() {
  flip (201/250) {
    if (a) {
      X0();
    }
    else {
      X1();
    }
  }
}

void X99() {
  X99();
  X99();
}
