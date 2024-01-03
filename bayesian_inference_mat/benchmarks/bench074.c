bool a;
bool b;

void X0() {
  flip (114/125) {
    b = true;
    X1();
  }
  else {
    a = true;
    X1();
  }
}

void X1() {
  flip (11/50) {
    if (b) {
      X98();
    }
    else {
      X96();
    }
  }
}

void X2() {
  flip (493/1000) {
    b = true;
    X7();
  }
  else {
    b = false;
    X0();
  }
}

void X3() {
  flip (821/1000) {
    if (a) {
      X6();
    }
    else {
      X7();
    }
  }
}

void X4() {
  flip (971/1000) {
    a = true;
    X6();
  }
  else {
    b = false;
    X5();
  }
}

void X5() {
  flip (297/500) {
    b = true;
    X4();
  }
  else {
    b = false;
    X3();
  }
}

void X6() {
  flip (17/125) {
    a = true;
    X2();
  }
  else {
    a = true;
    X7();
  }
}

void X7() {
  X9();
  X6();
}

void X8() {
  flip (549/1000) {
    a = true;
    X9();
  }
  else {
    b = true;
    X12();
  }
}

void X9() {
  X6();
  X8();
}

void X10() {
  flip (193/500) {
    if (a) {
      X14();
    }
    else {
      X12();
    }
  }
}

void X11() {
  X9();
  X12();
}

void X12() {
  flip (259/1000) {
    if (b) {
      X7();
    }
    else {
      X8();
    }
  }
}

void X13() {
  X17();
  X10();
}

void X14() {
  flip (1/1000) {
    a = false;
    X10();
  }
  else {
    b = false;
    X9();
  }
}

void X15() {
  flip (47/125) {
    a = false;
    X10();
  }
  else {
    b = false;
    X17();
  }
}

void X16() {
  flip (27/100) {
    if (b) {
      X11();
    }
    else {
      X14();
    }
  }
}

void X17() {
  flip (387/500) {
    if (b) {
      X21();
    }
    else {
      X15();
    }
  }
}

void X18() {
  flip (201/500) {
    a = false;
    X15();
  }
  else {
    b = false;
    X15();
  }
}

void X19() {
  X24();
  X16();
}

void X20() {
  flip (102/125) {
    if (a) {
      X17();
    }
    else {
      X20();
    }
  }
}

void X21() {
  flip (3/8) {
    if (a) {
      X23();
    }
    else {
      X25();
    }
  }
}

void X22() {
  flip (7/8) {
    b = true;
    X25();
  }
  else {
    a = false;
    X24();
  }
}

void X23() {
  X23();
  X28();
}

void X24() {
  X18();
  X19();
}

void X25() {
  flip (911/1000) {
    if (b) {
      X19();
    }
    else {
      X30();
    }
  }
}

void X26() {
  flip (79/125) {
    if (a) {
      X27();
    }
    else {
      X22();
    }
  }
}

void X27() {
  flip (469/500) {
    if (b) {
      X31();
    }
    else {
      X21();
    }
  }
}

void X28() {
  flip (133/250) {
    if (b) {
      X30();
    }
    else {
      X24();
    }
  }
}

void X29() {
  flip (807/1000) {
    if (a) {
      X26();
    }
    else {
      X33();
    }
  }
}

void X30() {
  flip (51/125) {
    if (a) {
      X26();
    }
    else {
      X35();
    }
  }
}

void X31() {
  flip (219/500) {
    if (a) {
      X36();
    }
    else {
      X35();
    }
  }
}

void X32() {
  X26();
  X29();
}

void X33() {
  flip (99/125) {
    b = false;
    X27();
  }
  else {
    a = true;
    X28();
  }
}

void X34() {
  X28();
  X29();
}

void X35() {
  flip (399/1000) {
    if (a) {
      X33();
    }
    else {
      X39();
    }
  }
}

void X36() {
  X32();
  X37();
}

void X37() {
  flip (19/500) {
    if (a) {
      X35();
    }
    else {
      X42();
    }
  }
}

void X38() {
  X32();
  X32();
}

void X39() {
  X43();
  X35();
}

void X40() {
  flip (21/500) {
    b = true;
    X41();
  }
  else {
    b = true;
    X44();
  }
}

void X41() {
  X41();
  X36();
}

void X42() {
  flip (891/1000) {
    if (a) {
      X44();
    }
    else {
      X46();
    }
  }
}

void X43() {
  flip (409/500) {
    if (a) {
      X37();
    }
    else {
      X47();
    }
  }
}

void X44() {
  flip (17/25) {
    if (a) {
      X39();
    }
    else {
      X47();
    }
  }
}

void X45() {
  X46();
  X43();
}

void X46() {
  flip (21/125) {
    if (a) {
      X40();
    }
    else {
      X50();
    }
  }
}

void X47() {
  X48();
  X47();
}

void X48() {
  X42();
  X42();
}

void X49() {
  X49();
  X54();
}

void X50() {
  flip (49/250) {
    a = false;
    X48();
  }
  else {
    b = true;
    X50();
  }
}

void X51() {
  flip (119/1000) {
    b = false;
    X52();
  }
  else {
    a = false;
    X45();
  }
}

void X52() {
  X55();
  X55();
}

void X53() {
  flip (23/250) {
    if (a) {
      X48();
    }
    else {
      X54();
    }
  }
}

void X54() {
  X57();
  X56();
}

void X55() {
  flip (39/40) {
    if (b) {
      X55();
    }
    else {
      X54();
    }
  }
}

void X56() {
  flip (77/1000) {
    a = false;
    X55();
  }
  else {
    b = false;
    X51();
  }
}

void X57() {
  flip (503/1000) {
    if (a) {
      X59();
    }
    else {
      X58();
    }
  }
}

void X58() {
  X55();
  X54();
}

void X59() {
  flip (243/250) {
    a = false;
    X58();
  }
  else {
    b = true;
    X60();
  }
}

void X60() {
  X55();
  X58();
}

void X61() {
  flip (659/1000) {
    if (b) {
      X59();
    }
    else {
      X60();
    }
  }
}

void X62() {
  X57();
  X61();
}

void X63() {
  flip (521/1000) {
    a = true;
    X58();
  }
  else {
    a = false;
    X58();
  }
}

void X64() {
  flip (36/125) {
    a = true;
    X62();
  }
  else {
    b = false;
    X58();
  }
}

void X65() {
  X67();
  X62();
}

void X66() {
  X63();
  X62();
}

void X67() {
  flip (849/1000) {
    b = true;
    X68();
  }
  else {
    b = false;
    X64();
  }
}

void X68() {
  flip (203/250) {
    if (a) {
      X72();
    }
    else {
      X64();
    }
  }
}

void X69() {
  X63();
  X63();
}

void X70() {
  flip (3/10) {
    a = true;
    X75();
  }
  else {
    b = false;
    X75();
  }
}

void X71() {
  X69();
  X70();
}

void X72() {
  flip (181/500) {
    if (b) {
      X74();
    }
    else {
      X74();
    }
  }
}

void X73() {
  X73();
  X69();
}

void X74() {
  flip (199/200) {
    a = false;
    X79();
  }
  else {
    b = false;
    X73();
  }
}

void X75() {
  flip (17/1000) {
    a = false;
    X75();
  }
  else {
    b = false;
    X73();
  }
}

void X76() {
  X73();
  X71();
}

void X77() {
  flip (973/1000) {
    if (b) {
      X81();
    }
    else {
      X81();
    }
  }
}

void X78() {
  flip (429/500) {
    if (a) {
      X83();
    }
    else {
      X83();
    }
  }
}

void X79() {
  X81();
  X76();
}

void X80() {
  flip (37/100) {
    a = false;
    X83();
  }
  else {
    a = true;
    X77();
  }
}

void X81() {
  X86();
  X84();
}

void X82() {
  flip (1/50) {
    a = false;
    X84();
  }
  else {
    a = false;
    X85();
  }
}

void X83() {
  flip (737/1000) {
    a = true;
    X78();
  }
  else {
    a = true;
    X87();
  }
}

void X84() {
  flip (33/1000) {
    if (a) {
      X87();
    }
    else {
      X82();
    }
  }
}

void X85() {
  X87();
  X88();
}

void X86() {
  flip (109/250) {
    if (a) {
      X82();
    }
    else {
      X87();
    }
  }
}

void X87() {
  flip (1/500) {
    b = true;
    X85();
  }
  else {
    a = true;
    X91();
  }
}

void X88() {
  flip (333/500) {
    b = true;
    X92();
  }
  else {
    b = true;
    X85();
  }
}

void X89() {
  X88();
  X89();
}

void X90() {
  X92();
  X94();
}

void X91() {
  X95();
  X95();
}

void X92() {
  flip (3/125) {
    a = true;
    X96();
  }
  else {
    a = true;
    X95();
  }
}

void X93() {
  flip (2/5) {
    a = true;
    X94();
  }
  else {
    a = false;
    X89();
  }
}

void X94() {
  X92();
  X98();
}

void X95() {
  flip (889/1000) {
    b = false;
    X96();
  }
  else {
    a = false;
    X98();
  }
}

void X96() {
  flip (147/250) {
    if (b) {
      X92();
    }
    else {
      X94();
    }
  }
}

void X97() {
  X2();
  X91();
}

void X98() {
  X94();
  X97();
}

void X99() {
  X97();
  X96();
}
