bool a;
bool b;

void X0() {
  X5();
  X97();
}

void X1() {
  flip (47/1000) {
    if (b) {
      X99();
    }
    else {
      X2();
    }
  }
}

void X2() {
  X6();
  X96();
}

void X3() {
  flip (323/1000) {
    b = false;
    X5();
  }
  else {
    a = true;
    X5();
  }
}

void X4() {
  flip (733/1000) {
    if (a) {
      X2();
    }
    else {
      X0();
    }
  }
}

void X5() {
  X9();
  X1();
}

void X6() {
  flip (679/1000) {
    a = true;
    X6();
  }
  else {
    b = false;
    X1();
  }
}

void X7() {
  flip (521/1000) {
    if (b) {
      X6();
    }
    else {
      X11();
    }
  }
}

void X8() {
  X5();
  X10();
}

void X9() {
  flip (359/1000) {
    b = false;
    X10();
  }
  else {
    b = false;
    X6();
  }
}

void X10() {
  X9();
  X12();
}

void X11() {
  flip (181/500) {
    if (b) {
      X7();
    }
    else {
      X9();
    }
  }
}

void X12() {
  flip (127/200) {
    a = false;
    X9();
  }
  else {
    b = false;
    X14();
  }
}

void X13() {
  X17();
  X14();
}

void X14() {
  flip (54/125) {
    b = false;
    X14();
  }
  else {
    a = false;
    X13();
  }
}

void X15() {
  flip (123/200) {
    if (b) {
      X9();
    }
    else {
      X20();
    }
  }
}

void X16() {
  X16();
  X21();
}

void X17() {
  X14();
  X22();
}

void X18() {
  X23();
  X20();
}

void X19() {
  flip (6/125) {
    if (a) {
      X23();
    }
    else {
      X18();
    }
  }
}

void X20() {
  flip (49/125) {
    if (b) {
      X20();
    }
    else {
      X24();
    }
  }
}

void X21() {
  X16();
  X17();
}

void X22() {
  flip (91/125) {
    a = false;
    X25();
  }
  else {
    a = true;
    X27();
  }
}

void X23() {
  flip (687/1000) {
    if (b) {
      X20();
    }
    else {
      X18();
    }
  }
}

void X24() {
  flip (511/1000) {
    a = true;
    X20();
  }
  else {
    b = true;
    X22();
  }
}

void X25() {
  X22();
  X21();
}

void X26() {
  flip (439/500) {
    if (b) {
      X28();
    }
    else {
      X28();
    }
  }
}

void X27() {
  flip (531/1000) {
    a = false;
    X31();
  }
  else {
    a = true;
    X22();
  }
}

void X28() {
  flip (101/1000) {
    if (a) {
      X27();
    }
    else {
      X25();
    }
  }
}

void X29() {
  flip (183/200) {
    b = false;
    X25();
  }
  else {
    a = false;
    X23();
  }
}

void X30() {
  flip (9/100) {
    if (a) {
      X29();
    }
    else {
      X26();
    }
  }
}

void X31() {
  flip (101/1000) {
    if (a) {
      X33();
    }
    else {
      X34();
    }
  }
}

void X32() {
  X30();
  X31();
}

void X33() {
  flip (17/40) {
    a = false;
    X27();
  }
  else {
    b = false;
    X36();
  }
}

void X34() {
  X32();
  X31();
}

void X35() {
  X36();
  X39();
}

void X36() {
  X34();
  X30();
}

void X37() {
  flip (71/250) {
    b = true;
    X40();
  }
  else {
    b = true;
    X38();
  }
}

void X38() {
  flip (139/1000) {
    if (a) {
      X40();
    }
    else {
      X36();
    }
  }
}

void X39() {
  X36();
  X42();
}

void X40() {
  X41();
  X44();
}

void X41() {
  X43();
  X42();
}

void X42() {
  X41();
  X40();
}

void X43() {
  flip (19/1000) {
    b = true;
    X47();
  }
  else {
    b = true;
    X47();
  }
}

void X44() {
  flip (51/125) {
    b = false;
    X40();
  }
  else {
    a = false;
    X43();
  }
}

void X45() {
  X43();
  X45();
}

void X46() {
  X51();
  X50();
}

void X47() {
  flip (69/1000) {
    if (b) {
      X45();
    }
    else {
      X50();
    }
  }
}

void X48() {
  flip (89/200) {
    if (b) {
      X51();
    }
    else {
      X51();
    }
  }
}

void X49() {
  X53();
  X45();
}

void X50() {
  flip (84/125) {
    b = false;
    X44();
  }
  else {
    a = false;
    X45();
  }
}

void X51() {
  flip (381/500) {
    a = false;
    X50();
  }
  else {
    b = true;
    X55();
  }
}

void X52() {
  X51();
  X57();
}

void X53() {
  flip (93/100) {
    if (a) {
      X53();
    }
    else {
      X56();
    }
  }
}

void X54() {
  flip (213/1000) {
    if (b) {
      X53();
    }
    else {
      X48();
    }
  }
}

void X55() {
  X54();
  X51();
}

void X56() {
  flip (171/1000) {
    a = false;
    X50();
  }
  else {
    a = false;
    X52();
  }
}

void X57() {
  flip (27/125) {
    b = true;
    X59();
  }
  else {
    b = false;
    X60();
  }
}

void X58() {
  X55();
  X54();
}

void X59() {
  X62();
  X56();
}

void X60() {
  flip (651/1000) {
    if (a) {
      X60();
    }
    else {
      X58();
    }
  }
}

void X61() {
  flip (439/500) {
    b = true;
    X61();
  }
  else {
    a = false;
    X57();
  }
}

void X62() {
  X65();
  X58();
}

void X63() {
  flip (73/250) {
    if (b) {
      X68();
    }
    else {
      X58();
    }
  }
}

void X64() {
  flip (237/500) {
    if (b) {
      X69();
    }
    else {
      X61();
    }
  }
}

void X65() {
  X67();
  X70();
}

void X66() {
  flip (31/200) {
    b = true;
    X67();
  }
  else {
    b = true;
    X68();
  }
}

void X67() {
  flip (39/1000) {
    if (a) {
      X66();
    }
    else {
      X61();
    }
  }
}

void X68() {
  flip (597/1000) {
    if (a) {
      X68();
    }
    else {
      X64();
    }
  }
}

void X69() {
  flip (169/250) {
    if (a) {
      X69();
    }
    else {
      X66();
    }
  }
}

void X70() {
  X70();
  X72();
}

void X71() {
  X74();
  X69();
}

void X72() {
  X73();
  X76();
}

void X73() {
  flip (571/1000) {
    a = false;
    X78();
  }
  else {
    b = false;
    X75();
  }
}

void X74() {
  flip (213/500) {
    a = true;
    X74();
  }
  else {
    b = false;
    X68();
  }
}

void X75() {
  flip (13/40) {
    if (a) {
      X78();
    }
    else {
      X73();
    }
  }
}

void X76() {
  flip (383/500) {
    b = true;
    X81();
  }
  else {
    b = true;
    X80();
  }
}

void X77() {
  flip (419/500) {
    a = false;
    X71();
  }
  else {
    b = false;
    X72();
  }
}

void X78() {
  flip (893/1000) {
    b = true;
    X74();
  }
  else {
    b = false;
    X72();
  }
}

void X79() {
  flip (67/200) {
    if (b) {
      X78();
    }
    else {
      X77();
    }
  }
}

void X80() {
  flip (311/1000) {
    if (b) {
      X84();
    }
    else {
      X84();
    }
  }
}

void X81() {
  X84();
  X85();
}

void X82() {
  flip (773/1000) {
    b = false;
    X83();
  }
  else {
    a = true;
    X81();
  }
}

void X83() {
  flip (41/100) {
    if (a) {
      X82();
    }
    else {
      X85();
    }
  }
}

void X84() {
  X83();
  X87();
}

void X85() {
  flip (361/500) {
    if (a) {
      X86();
    }
    else {
      X81();
    }
  }
}

void X86() {
  flip (7/50) {
    b = true;
    X89();
  }
  else {
    b = false;
    X80();
  }
}

void X87() {
  X81();
  X88();
}

void X88() {
  flip (137/500) {
    a = false;
    X83();
  }
  else {
    a = false;
    X86();
  }
}

void X89() {
  flip (253/1000) {
    a = true;
    X83();
  }
  else {
    a = true;
    X90();
  }
}

void X90() {
  flip (151/250) {
    if (b) {
      X95();
    }
    else {
      X84();
    }
  }
}

void X91() {
  flip (19/25) {
    b = false;
    X86();
  }
  else {
    a = true;
    X89();
  }
}

void X92() {
  flip (17/125) {
    if (a) {
      X92();
    }
    else {
      X87();
    }
  }
}

void X93() {
  X91();
  X89();
}

void X94() {
  flip (109/250) {
    if (a) {
      X90();
    }
    else {
      X88();
    }
  }
}

void X95() {
  flip (19/1000) {
    if (a) {
      X94();
    }
    else {
      X94();
    }
  }
}

void X96() {
  X98();
  X99();
}

void X97() {
  X99();
  X2();
}

void X98() {
  X2();
  X96();
}

void X99() {
  flip (351/1000) {
    if (a) {
      X0();
    }
    else {
      X98();
    }
  }
}
