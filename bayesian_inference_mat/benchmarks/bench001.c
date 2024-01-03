bool a;
bool b;

void X0() {
  flip (57/500) {
    if (a) {
      X1();
    }
    else {
      X4();
    }
  }
}

void X1() {
  X6();
  X6();
}

void X2() {
  X6();
  X99();
}

void X3() {
  X6();
  X4();
}

void X4() {
  flip (41/125) {
    b = false;
    X5();
  }
  else {
    b = true;
    X99();
  }
}

void X5() {
  flip (191/1000) {
    a = true;
    X5();
  }
  else {
    a = false;
    X6();
  }
}

void X6() {
  X11();
  X1();
}

void X7() {
  flip (13/40) {
    b = false;
    X1();
  }
  else {
    b = true;
    X2();
  }
}

void X8() {
  X10();
  X12();
}

void X9() {
  X10();
  X9();
}

void X10() {
  flip (49/1000) {
    a = true;
    X5();
  }
  else {
    b = false;
    X13();
  }
}

void X11() {
  X9();
  X5();
}

void X12() {
  X9();
  X14();
}

void X13() {
  flip (16/25) {
    a = false;
    X7();
  }
  else {
    a = false;
    X10();
  }
}

void X14() {
  X17();
  X15();
}

void X15() {
  X17();
  X19();
}

void X16() {
  X20();
  X10();
}

void X17() {
  flip (17/125) {
    b = false;
    X11();
  }
  else {
    a = true;
    X15();
  }
}

void X18() {
  flip (83/250) {
    if (b) {
      X13();
    }
    else {
      X23();
    }
  }
}

void X19() {
  X22();
  X15();
}

void X20() {
  X22();
  X23();
}

void X21() {
  flip (127/1000) {
    b = true;
    X19();
  }
  else {
    b = false;
    X23();
  }
}

void X22() {
  X19();
  X21();
}

void X23() {
  X25();
  X27();
}

void X24() {
  flip (169/200) {
    b = false;
    X28();
  }
  else {
    b = true;
    X26();
  }
}

void X25() {
  X19();
  X24();
}

void X26() {
  X26();
  X28();
}

void X27() {
  X28();
  X32();
}

void X28() {
  X30();
  X29();
}

void X29() {
  X32();
  X28();
}

void X30() {
  flip (33/200) {
    if (b) {
      X31();
    }
    else {
      X25();
    }
  }
}

void X31() {
  flip (261/500) {
    a = true;
    X27();
  }
  else {
    a = true;
    X35();
  }
}

void X32() {
  flip (9/1000) {
    if (b) {
      X32();
    }
    else {
      X29();
    }
  }
}

void X33() {
  flip (167/200) {
    b = true;
    X29();
  }
  else {
    b = false;
    X31();
  }
}

void X34() {
  X34();
  X39();
}

void X35() {
  flip (88/125) {
    if (b) {
      X29();
    }
    else {
      X35();
    }
  }
}

void X36() {
  X31();
  X37();
}

void X37() {
  flip (83/500) {
    b = true;
    X34();
  }
  else {
    a = true;
    X38();
  }
}

void X38() {
  flip (13/50) {
    a = false;
    X38();
  }
  else {
    a = true;
    X41();
  }
}

void X39() {
  X43();
  X41();
}

void X40() {
  flip (13/200) {
    b = false;
    X38();
  }
  else {
    b = true;
    X39();
  }
}

void X41() {
  X46();
  X46();
}

void X42() {
  flip (3/4) {
    a = true;
    X36();
  }
  else {
    a = true;
    X44();
  }
}

void X43() {
  flip (83/125) {
    if (b) {
      X44();
    }
    else {
      X47();
    }
  }
}

void X44() {
  flip (17/125) {
    b = false;
    X47();
  }
  else {
    b = false;
    X49();
  }
}

void X45() {
  X40();
  X39();
}

void X46() {
  flip (1/250) {
    b = false;
    X46();
  }
  else {
    a = true;
    X43();
  }
}

void X47() {
  flip (259/1000) {
    if (a) {
      X41();
    }
    else {
      X51();
    }
  }
}

void X48() {
  X49();
  X43();
}

void X49() {
  flip (104/125) {
    a = false;
    X47();
  }
  else {
    b = false;
    X53();
  }
}

void X50() {
  flip (527/1000) {
    if (a) {
      X45();
    }
    else {
      X50();
    }
  }
}

void X51() {
  X46();
  X48();
}

void X52() {
  flip (901/1000) {
    b = true;
    X48();
  }
  else {
    a = true;
    X55();
  }
}

void X53() {
  flip (137/500) {
    a = true;
    X49();
  }
  else {
    a = false;
    X48();
  }
}

void X54() {
  flip (219/250) {
    if (a) {
      X58();
    }
    else {
      X51();
    }
  }
}

void X55() {
  flip (1/200) {
    if (a) {
      X55();
    }
    else {
      X57();
    }
  }
}

void X56() {
  flip (1/8) {
    if (a) {
      X52();
    }
    else {
      X58();
    }
  }
}

void X57() {
  flip (759/1000) {
    if (a) {
      X56();
    }
    else {
      X59();
    }
  }
}

void X58() {
  flip (907/1000) {
    a = false;
    X59();
  }
  else {
    a = false;
    X59();
  }
}

void X59() {
  flip (353/1000) {
    b = false;
    X63();
  }
  else {
    a = true;
    X55();
  }
}

void X60() {
  X65();
  X54();
}

void X61() {
  flip (37/100) {
    a = true;
    X55();
  }
  else {
    a = true;
    X59();
  }
}

void X62() {
  flip (117/1000) {
    b = false;
    X58();
  }
  else {
    b = false;
    X57();
  }
}

void X63() {
  X65();
  X66();
}

void X64() {
  flip (51/1000) {
    a = false;
    X66();
  }
  else {
    b = false;
    X66();
  }
}

void X65() {
  flip (503/1000) {
    if (a) {
      X65();
    }
    else {
      X61();
    }
  }
}

void X66() {
  flip (37/1000) {
    b = false;
    X69();
  }
  else {
    b = true;
    X61();
  }
}

void X67() {
  X64();
  X64();
}

void X68() {
  flip (243/250) {
    if (a) {
      X64();
    }
    else {
      X66();
    }
  }
}

void X69() {
  flip (9/125) {
    if (a) {
      X69();
    }
    else {
      X70();
    }
  }
}

void X70() {
  flip (51/200) {
    a = false;
    X71();
  }
  else {
    a = false;
    X67();
  }
}

void X71() {
  flip (57/1000) {
    a = false;
    X73();
  }
  else {
    b = false;
    X70();
  }
}

void X72() {
  flip (157/1000) {
    if (a) {
      X77();
    }
    else {
      X70();
    }
  }
}

void X73() {
  flip (79/500) {
    if (b) {
      X70();
    }
    else {
      X76();
    }
  }
}

void X74() {
  flip (9/250) {
    b = false;
    X75();
  }
  else {
    b = false;
    X79();
  }
}

void X75() {
  flip (251/500) {
    if (a) {
      X75();
    }
    else {
      X72();
    }
  }
}

void X76() {
  flip (43/100) {
    if (b) {
      X74();
    }
    else {
      X81();
    }
  }
}

void X77() {
  X77();
  X73();
}

void X78() {
  flip (523/1000) {
    b = true;
    X72();
  }
  else {
    a = false;
    X80();
  }
}

void X79() {
  flip (421/1000) {
    a = true;
    X79();
  }
  else {
    a = false;
    X73();
  }
}

void X80() {
  flip (339/500) {
    if (a) {
      X84();
    }
    else {
      X80();
    }
  }
}

void X81() {
  X81();
  X79();
}

void X82() {
  X78();
  X78();
}

void X83() {
  flip (61/250) {
    if (b) {
      X87();
    }
    else {
      X81();
    }
  }
}

void X84() {
  X80();
  X88();
}

void X85() {
  flip (221/500) {
    a = false;
    X87();
  }
  else {
    a = false;
    X87();
  }
}

void X86() {
  flip (733/1000) {
    a = false;
    X83();
  }
  else {
    a = false;
    X83();
  }
}

void X87() {
  X86();
  X86();
}

void X88() {
  flip (23/125) {
    if (a) {
      X86();
    }
    else {
      X84();
    }
  }
}

void X89() {
  X89();
  X88();
}

void X90() {
  flip (513/1000) {
    if (b) {
      X94();
    }
    else {
      X92();
    }
  }
}

void X91() {
  flip (977/1000) {
    b = true;
    X88();
  }
  else {
    a = false;
    X85();
  }
}

void X92() {
  X88();
  X88();
}

void X93() {
  X97();
  X89();
}

void X94() {
  X91();
  X89();
}

void X95() {
  X99();
  X93();
}

void X96() {
  flip (159/200) {
    if (b) {
      X98();
    }
    else {
      X94();
    }
  }
}

void X97() {
  flip (131/200) {
    if (b) {
      X1();
    }
    else {
      X98();
    }
  }
}

void X98() {
  flip (37/125) {
    a = true;
    X95();
  }
  else {
    a = false;
    X3();
  }
}

void X99() {
  X1();
  X0();
}
