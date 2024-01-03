bool a;
bool b;

void X0() {
  flip (197/200) {
    if (b) {
      X94();
    }
    else {
      X98();
    }
  }
}

void X1() {
  flip (787/1000) {
    b = false;
    X96();
  }
  else {
    a = false;
    X98();
  }
}

void X2() {
  X96();
  X3();
}

void X3() {
  flip (597/1000) {
    b = true;
    X8();
  }
  else {
    a = true;
    X2();
  }
}

void X4() {
  flip (463/500) {
    b = false;
    X9();
  }
  else {
    b = true;
    X98();
  }
}

void X5() {
  flip (99/125) {
    if (a) {
      X7();
    }
    else {
      X10();
    }
  }
}

void X6() {
  flip (98/125) {
    if (b) {
      X11();
    }
    else {
      X7();
    }
  }
}

void X7() {
  flip (86/125) {
    b = false;
    X1();
  }
  else {
    a = false;
    X1();
  }
}

void X8() {
  X7();
  X9();
}

void X9() {
  flip (11/100) {
    b = true;
    X8();
  }
  else {
    b = false;
    X3();
  }
}

void X10() {
  flip (323/1000) {
    if (a) {
      X5();
    }
    else {
      X10();
    }
  }
}

void X11() {
  flip (273/1000) {
    if (a) {
      X7();
    }
    else {
      X6();
    }
  }
}

void X12() {
  X16();
  X7();
}

void X13() {
  flip (43/50) {
    if (b) {
      X8();
    }
    else {
      X18();
    }
  }
}

void X14() {
  X9();
  X17();
}

void X15() {
  X17();
  X17();
}

void X16() {
  flip (79/100) {
    if (b) {
      X13();
    }
    else {
      X15();
    }
  }
}

void X17() {
  X21();
  X13();
}

void X18() {
  X18();
  X14();
}

void X19() {
  X19();
  X16();
}

void X20() {
  flip (9/50) {
    if (b) {
      X19();
    }
    else {
      X15();
    }
  }
}

void X21() {
  flip (213/250) {
    a = true;
    X24();
  }
  else {
    b = true;
    X26();
  }
}

void X22() {
  X25();
  X27();
}

void X23() {
  flip (59/500) {
    b = false;
    X22();
  }
  else {
    a = true;
    X20();
  }
}

void X24() {
  X25();
  X22();
}

void X25() {
  flip (29/50) {
    a = false;
    X21();
  }
  else {
    a = false;
    X23();
  }
}

void X26() {
  flip (147/250) {
    if (b) {
      X29();
    }
    else {
      X29();
    }
  }
}

void X27() {
  flip (59/250) {
    a = false;
    X31();
  }
  else {
    a = true;
    X22();
  }
}

void X28() {
  flip (279/1000) {
    a = true;
    X31();
  }
  else {
    a = true;
    X29();
  }
}

void X29() {
  flip (571/1000) {
    if (a) {
      X23();
    }
    else {
      X30();
    }
  }
}

void X30() {
  X33();
  X28();
}

void X31() {
  flip (21/125) {
    if (a) {
      X27();
    }
    else {
      X25();
    }
  }
}

void X32() {
  flip (93/200) {
    if (b) {
      X27();
    }
    else {
      X32();
    }
  }
}

void X33() {
  X36();
  X30();
}

void X34() {
  flip (741/1000) {
    if (a) {
      X29();
    }
    else {
      X31();
    }
  }
}

void X35() {
  flip (13/125) {
    b = false;
    X32();
  }
  else {
    b = true;
    X31();
  }
}

void X36() {
  flip (33/125) {
    if (b) {
      X41();
    }
    else {
      X40();
    }
  }
}

void X37() {
  X36();
  X40();
}

void X38() {
  X37();
  X39();
}

void X39() {
  flip (883/1000) {
    if (a) {
      X41();
    }
    else {
      X44();
    }
  }
}

void X40() {
  flip (81/250) {
    b = false;
    X42();
  }
  else {
    b = true;
    X44();
  }
}

void X41() {
  flip (53/125) {
    if (b) {
      X35();
    }
    else {
      X39();
    }
  }
}

void X42() {
  X46();
  X46();
}

void X43() {
  flip (471/1000) {
    if (b) {
      X43();
    }
    else {
      X45();
    }
  }
}

void X44() {
  flip (979/1000) {
    if (a) {
      X39();
    }
    else {
      X40();
    }
  }
}

void X45() {
  flip (991/1000) {
    b = false;
    X50();
  }
  else {
    b = false;
    X48();
  }
}

void X46() {
  flip (89/200) {
    if (b) {
      X50();
    }
    else {
      X42();
    }
  }
}

void X47() {
  flip (39/40) {
    if (a) {
      X52();
    }
    else {
      X48();
    }
  }
}

void X48() {
  X51();
  X44();
}

void X49() {
  flip (257/500) {
    if (a) {
      X49();
    }
    else {
      X49();
    }
  }
}

void X50() {
  flip (1/2) {
    if (a) {
      X55();
    }
    else {
      X44();
    }
  }
}

void X51() {
  flip (17/25) {
    a = false;
    X55();
  }
  else {
    b = false;
    X49();
  }
}

void X52() {
  flip (3/8) {
    b = false;
    X56();
  }
  else {
    b = true;
    X56();
  }
}

void X53() {
  X58();
  X53();
}

void X54() {
  flip (71/100) {
    b = true;
    X51();
  }
  else {
    b = true;
    X49();
  }
}

void X55() {
  X54();
  X59();
}

void X56() {
  flip (69/125) {
    b = true;
    X50();
  }
  else {
    b = false;
    X55();
  }
}

void X57() {
  flip (47/200) {
    if (b) {
      X58();
    }
    else {
      X59();
    }
  }
}

void X58() {
  flip (629/1000) {
    if (a) {
      X57();
    }
    else {
      X52();
    }
  }
}

void X59() {
  X59();
  X63();
}

void X60() {
  flip (457/500) {
    if (a) {
      X60();
    }
    else {
      X57();
    }
  }
}

void X61() {
  flip (103/125) {
    if (b) {
      X56();
    }
    else {
      X59();
    }
  }
}

void X62() {
  X61();
  X66();
}

void X63() {
  X61();
  X59();
}

void X64() {
  flip (9/20) {
    if (b) {
      X62();
    }
    else {
      X65();
    }
  }
}

void X65() {
  flip (81/125) {
    if (b) {
      X68();
    }
    else {
      X61();
    }
  }
}

void X66() {
  flip (83/200) {
    b = true;
    X64();
  }
  else {
    a = false;
    X64();
  }
}

void X67() {
  flip (57/250) {
    if (b) {
      X71();
    }
    else {
      X62();
    }
  }
}

void X68() {
  flip (317/500) {
    if (a) {
      X71();
    }
    else {
      X73();
    }
  }
}

void X69() {
  X69();
  X64();
}

void X70() {
  flip (51/125) {
    if (b) {
      X70();
    }
    else {
      X72();
    }
  }
}

void X71() {
  flip (757/1000) {
    a = false;
    X67();
  }
  else {
    a = false;
    X70();
  }
}

void X72() {
  flip (21/50) {
    if (a) {
      X74();
    }
    else {
      X74();
    }
  }
}

void X73() {
  flip (827/1000) {
    b = true;
    X72();
  }
  else {
    b = false;
    X70();
  }
}

void X74() {
  flip (63/250) {
    b = true;
    X78();
  }
  else {
    a = false;
    X74();
  }
}

void X75() {
  flip (497/500) {
    b = true;
    X75();
  }
  else {
    a = false;
    X73();
  }
}

void X76() {
  X79();
  X71();
}

void X77() {
  flip (13/100) {
    if (b) {
      X73();
    }
    else {
      X81();
    }
  }
}

void X78() {
  X79();
  X79();
}

void X79() {
  X76();
  X77();
}

void X80() {
  X82();
  X80();
}

void X81() {
  X76();
  X81();
}

void X82() {
  flip (717/1000) {
    if (b) {
      X78();
    }
    else {
      X81();
    }
  }
}

void X83() {
  X77();
  X80();
}

void X84() {
  X87();
  X86();
}

void X85() {
  flip (649/1000) {
    b = false;
    X82();
  }
  else {
    b = false;
    X81();
  }
}

void X86() {
  flip (797/1000) {
    if (b) {
      X86();
    }
    else {
      X85();
    }
  }
}

void X87() {
  X83();
  X90();
}

void X88() {
  X83();
  X89();
}

void X89() {
  flip (523/1000) {
    if (a) {
      X93();
    }
    else {
      X89();
    }
  }
}

void X90() {
  flip (129/1000) {
    a = true;
    X90();
  }
  else {
    b = false;
    X91();
  }
}

void X91() {
  flip (79/200) {
    if (a) {
      X85();
    }
    else {
      X93();
    }
  }
}

void X92() {
  X90();
  X91();
}

void X93() {
  flip (989/1000) {
    if (b) {
      X94();
    }
    else {
      X91();
    }
  }
}

void X94() {
  flip (161/250) {
    b = false;
    X91();
  }
  else {
    b = false;
    X93();
  }
}

void X95() {
  X0();
  X98();
}

void X96() {
  X90();
  X94();
}

void X97() {
  X91();
  X99();
}

void X98() {
  X94();
  X98();
}

void X99() {
  X94();
  X1();
}
