bool a;
bool b;

void X0() {
  X4();
  X99();
}

void X1() {
  flip (439/500) {
    a = true;
    X1();
  }
  else {
    a = false;
    X98();
  }
}

void X2() {
  X3();
  X96();
}

void X3() {
  flip (32/125) {
    b = true;
    X6();
  }
  else {
    a = true;
    X6();
  }
}

void X4() {
  flip (53/100) {
    b = true;
    X8();
  }
  else {
    b = true;
    X6();
  }
}

void X5() {
  X2();
  X9();
}

void X6() {
  X8();
  X10();
}

void X7() {
  flip (153/200) {
    a = false;
    X9();
  }
  else {
    a = true;
    X5();
  }
}

void X8() {
  flip (347/1000) {
    a = true;
    X8();
  }
  else {
    a = false;
    X5();
  }
}

void X9() {
  flip (83/500) {
    if (b) {
      X11();
    }
    else {
      X7();
    }
  }
}

void X10() {
  flip (269/500) {
    a = false;
    X7();
  }
  else {
    b = true;
    X11();
  }
}

void X11() {
  flip (133/500) {
    if (b) {
      X5();
    }
    else {
      X14();
    }
  }
}

void X12() {
  flip (71/100) {
    b = true;
    X16();
  }
  else {
    b = false;
    X16();
  }
}

void X13() {
  X10();
  X18();
}

void X14() {
  flip (17/125) {
    if (b) {
      X13();
    }
    else {
      X10();
    }
  }
}

void X15() {
  X15();
  X12();
}

void X16() {
  flip (78/125) {
    b = true;
    X21();
  }
  else {
    a = true;
    X16();
  }
}

void X17() {
  X16();
  X16();
}

void X18() {
  X19();
  X14();
}

void X19() {
  flip (843/1000) {
    if (a) {
      X15();
    }
    else {
      X19();
    }
  }
}

void X20() {
  flip (597/1000) {
    b = false;
    X17();
  }
  else {
    a = false;
    X25();
  }
}

void X21() {
  flip (33/200) {
    a = false;
    X24();
  }
  else {
    a = true;
    X18();
  }
}

void X22() {
  X26();
  X25();
}

void X23() {
  flip (87/125) {
    b = false;
    X22();
  }
  else {
    a = true;
    X19();
  }
}

void X24() {
  flip (3/200) {
    a = false;
    X25();
  }
  else {
    a = false;
    X22();
  }
}

void X25() {
  flip (291/500) {
    if (a) {
      X28();
    }
    else {
      X21();
    }
  }
}

void X26() {
  X22();
  X31();
}

void X27() {
  flip (167/1000) {
    b = true;
    X21();
  }
  else {
    b = false;
    X32();
  }
}

void X28() {
  X22();
  X30();
}

void X29() {
  X24();
  X31();
}

void X30() {
  X30();
  X32();
}

void X31() {
  flip (159/200) {
    a = true;
    X29();
  }
  else {
    a = true;
    X25();
  }
}

void X32() {
  flip (853/1000) {
    if (b) {
      X27();
    }
    else {
      X32();
    }
  }
}

void X33() {
  X31();
  X27();
}

void X34() {
  X30();
  X37();
}

void X35() {
  flip (313/1000) {
    a = true;
    X30();
  }
  else {
    b = false;
    X34();
  }
}

void X36() {
  X37();
  X35();
}

void X37() {
  flip (101/200) {
    a = false;
    X40();
  }
  else {
    a = true;
    X34();
  }
}

void X38() {
  flip (577/1000) {
    if (b) {
      X43();
    }
    else {
      X39();
    }
  }
}

void X39() {
  flip (133/500) {
    if (a) {
      X44();
    }
    else {
      X34();
    }
  }
}

void X40() {
  X37();
  X38();
}

void X41() {
  flip (399/1000) {
    b = true;
    X39();
  }
  else {
    a = false;
    X35();
  }
}

void X42() {
  flip (117/200) {
    a = true;
    X40();
  }
  else {
    a = true;
    X40();
  }
}

void X43() {
  flip (149/200) {
    if (b) {
      X42();
    }
    else {
      X47();
    }
  }
}

void X44() {
  flip (667/1000) {
    a = false;
    X43();
  }
  else {
    b = true;
    X47();
  }
}

void X45() {
  flip (24/125) {
    if (b) {
      X39();
    }
    else {
      X46();
    }
  }
}

void X46() {
  X44();
  X40();
}

void X47() {
  flip (37/250) {
    a = true;
    X48();
  }
  else {
    a = false;
    X44();
  }
}

void X48() {
  X51();
  X51();
}

void X49() {
  flip (117/500) {
    if (b) {
      X45();
    }
    else {
      X44();
    }
  }
}

void X50() {
  flip (531/1000) {
    b = false;
    X44();
  }
  else {
    b = false;
    X54();
  }
}

void X51() {
  flip (371/1000) {
    a = false;
    X54();
  }
  else {
    a = false;
    X51();
  }
}

void X52() {
  flip (279/500) {
    if (b) {
      X54();
    }
    else {
      X57();
    }
  }
}

void X53() {
  flip (9/50) {
    b = false;
    X50();
  }
  else {
    a = true;
    X51();
  }
}

void X54() {
  flip (957/1000) {
    if (b) {
      X58();
    }
    else {
      X48();
    }
  }
}

void X55() {
  X55();
  X53();
}

void X56() {
  X61();
  X60();
}

void X57() {
  flip (971/1000) {
    b = false;
    X59();
  }
  else {
    b = false;
    X57();
  }
}

void X58() {
  flip (171/500) {
    if (b) {
      X53();
    }
    else {
      X52();
    }
  }
}

void X59() {
  X63();
  X57();
}

void X60() {
  X58();
  X64();
}

void X61() {
  flip (243/1000) {
    a = true;
    X55();
  }
  else {
    a = true;
    X60();
  }
}

void X62() {
  X61();
  X62();
}

void X63() {
  flip (439/500) {
    if (b) {
      X61();
    }
    else {
      X61();
    }
  }
}

void X64() {
  X66();
  X62();
}

void X65() {
  X66();
  X66();
}

void X66() {
  X66();
  X67();
}

void X67() {
  flip (127/500) {
    b = false;
    X67();
  }
  else {
    b = false;
    X66();
  }
}

void X68() {
  X66();
  X72();
}

void X69() {
  flip (359/500) {
    a = false;
    X69();
  }
  else {
    a = false;
    X63();
  }
}

void X70() {
  X69();
  X66();
}

void X71() {
  X67();
  X72();
}

void X72() {
  X76();
  X66();
}

void X73() {
  X77();
  X74();
}

void X74() {
  flip (671/1000) {
    if (b) {
      X77();
    }
    else {
      X69();
    }
  }
}

void X75() {
  flip (43/250) {
    a = true;
    X70();
  }
  else {
    a = true;
    X72();
  }
}

void X76() {
  flip (67/500) {
    if (b) {
      X75();
    }
    else {
      X78();
    }
  }
}

void X77() {
  flip (179/500) {
    if (a) {
      X80();
    }
    else {
      X73();
    }
  }
}

void X78() {
  X79();
  X75();
}

void X79() {
  flip (341/500) {
    b = false;
    X75();
  }
  else {
    a = true;
    X79();
  }
}

void X80() {
  flip (481/500) {
    a = true;
    X81();
  }
  else {
    b = false;
    X82();
  }
}

void X81() {
  flip (217/1000) {
    b = true;
    X77();
  }
  else {
    b = true;
    X75();
  }
}

void X82() {
  X87();
  X81();
}

void X83() {
  flip (891/1000) {
    a = false;
    X84();
  }
  else {
    a = true;
    X82();
  }
}

void X84() {
  flip (49/500) {
    b = true;
    X82();
  }
  else {
    b = false;
    X78();
  }
}

void X85() {
  flip (833/1000) {
    b = true;
    X88();
  }
  else {
    b = true;
    X81();
  }
}

void X86() {
  X91();
  X90();
}

void X87() {
  flip (201/1000) {
    a = false;
    X92();
  }
  else {
    b = false;
    X84();
  }
}

void X88() {
  X86();
  X93();
}

void X89() {
  X86();
  X89();
}

void X90() {
  flip (227/250) {
    a = false;
    X87();
  }
  else {
    b = true;
    X91();
  }
}

void X91() {
  flip (579/1000) {
    a = true;
    X93();
  }
  else {
    b = false;
    X93();
  }
}

void X92() {
  flip (323/1000) {
    if (a) {
      X88();
    }
    else {
      X87();
    }
  }
}

void X93() {
  flip (909/1000) {
    a = false;
    X88();
  }
  else {
    b = false;
    X94();
  }
}

void X94() {
  flip (3/50) {
    a = true;
    X99();
  }
  else {
    a = true;
    X88();
  }
}

void X95() {
  X90();
  X94();
}

void X96() {
  flip (477/500) {
    if (b) {
      X94();
    }
    else {
      X99();
    }
  }
}

void X97() {
  flip (27/500) {
    a = false;
    X94();
  }
  else {
    b = true;
    X96();
  }
}

void X98() {
  flip (413/500) {
    if (b) {
      X3();
    }
    else {
      X94();
    }
  }
}

void X99() {
  X0();
  X93();
}
