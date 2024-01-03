bool a;
bool b;

void X0() {
  flip (78/125) {
    b = false;
    X1();
  }
  else {
    a = true;
    X97();
  }
}

void X1() {
  X5();
  X99();
}

void X2() {
  X1();
  X97();
}

void X3() {
  flip (287/500) {
    b = true;
    X7();
  }
  else {
    b = false;
    X6();
  }
}

void X4() {
  X8();
  X2();
}

void X5() {
  X5();
  X0();
}

void X6() {
  flip (639/1000) {
    if (a) {
      X7();
    }
    else {
      X3();
    }
  }
}

void X7() {
  flip (309/1000) {
    b = false;
    X8();
  }
  else {
    a = false;
    X6();
  }
}

void X8() {
  flip (703/1000) {
    if (b) {
      X3();
    }
    else {
      X5();
    }
  }
}

void X9() {
  X8();
  X12();
}

void X10() {
  flip (67/200) {
    b = false;
    X10();
  }
  else {
    b = true;
    X4();
  }
}

void X11() {
  flip (46/125) {
    b = true;
    X10();
  }
  else {
    a = true;
    X16();
  }
}

void X12() {
  flip (13/40) {
    if (a) {
      X11();
    }
    else {
      X12();
    }
  }
}

void X13() {
  X16();
  X8();
}

void X14() {
  flip (13/25) {
    b = true;
    X8();
  }
  else {
    a = false;
    X11();
  }
}

void X15() {
  X9();
  X16();
}

void X16() {
  X10();
  X21();
}

void X17() {
  X22();
  X22();
}

void X18() {
  flip (137/500) {
    if (b) {
      X20();
    }
    else {
      X17();
    }
  }
}

void X19() {
  flip (147/200) {
    if (a) {
      X20();
    }
    else {
      X14();
    }
  }
}

void X20() {
  flip (97/100) {
    if (b) {
      X23();
    }
    else {
      X23();
    }
  }
}

void X21() {
  flip (1/2) {
    if (a) {
      X20();
    }
    else {
      X16();
    }
  }
}

void X22() {
  X20();
  X19();
}

void X23() {
  flip (433/500) {
    if (b) {
      X27();
    }
    else {
      X26();
    }
  }
}

void X24() {
  flip (17/200) {
    b = false;
    X22();
  }
  else {
    a = true;
    X26();
  }
}

void X25() {
  X23();
  X24();
}

void X26() {
  X30();
  X27();
}

void X27() {
  flip (331/500) {
    b = true;
    X22();
  }
  else {
    a = true;
    X30();
  }
}

void X28() {
  flip (119/1000) {
    a = true;
    X33();
  }
  else {
    a = false;
    X28();
  }
}

void X29() {
  flip (159/200) {
    a = false;
    X25();
  }
  else {
    b = false;
    X24();
  }
}

void X30() {
  X25();
  X27();
}

void X31() {
  X25();
  X32();
}

void X32() {
  flip (313/1000) {
    if (a) {
      X32();
    }
    else {
      X37();
    }
  }
}

void X33() {
  X38();
  X38();
}

void X34() {
  flip (21/100) {
    if (b) {
      X32();
    }
    else {
      X35();
    }
  }
}

void X35() {
  flip (843/1000) {
    if (a) {
      X29();
    }
    else {
      X33();
    }
  }
}

void X36() {
  flip (737/1000) {
    a = false;
    X41();
  }
  else {
    a = true;
    X33();
  }
}

void X37() {
  flip (14/25) {
    if (b) {
      X39();
    }
    else {
      X31();
    }
  }
}

void X38() {
  flip (413/500) {
    if (a) {
      X39();
    }
    else {
      X33();
    }
  }
}

void X39() {
  X43();
  X36();
}

void X40() {
  flip (917/1000) {
    if (b) {
      X34();
    }
    else {
      X39();
    }
  }
}

void X41() {
  X35();
  X41();
}

void X42() {
  flip (401/1000) {
    a = true;
    X46();
  }
  else {
    b = false;
    X47();
  }
}

void X43() {
  X40();
  X40();
}

void X44() {
  X45();
  X48();
}

void X45() {
  flip (147/500) {
    if (a) {
      X45();
    }
    else {
      X50();
    }
  }
}

void X46() {
  flip (661/1000) {
    if (a) {
      X40();
    }
    else {
      X45();
    }
  }
}

void X47() {
  X47();
  X50();
}

void X48() {
  flip (149/200) {
    if (b) {
      X43();
    }
    else {
      X50();
    }
  }
}

void X49() {
  flip (1/4) {
    if (b) {
      X45();
    }
    else {
      X50();
    }
  }
}

void X50() {
  flip (49/50) {
    a = true;
    X45();
  }
  else {
    a = true;
    X52();
  }
}

void X51() {
  flip (91/100) {
    if (b) {
      X45();
    }
    else {
      X53();
    }
  }
}

void X52() {
  flip (93/200) {
    b = false;
    X57();
  }
  else {
    a = false;
    X47();
  }
}

void X53() {
  flip (281/500) {
    if (a) {
      X56();
    }
    else {
      X54();
    }
  }
}

void X54() {
  flip (209/500) {
    if (b) {
      X51();
    }
    else {
      X59();
    }
  }
}

void X55() {
  flip (491/1000) {
    a = true;
    X56();
  }
  else {
    b = true;
    X59();
  }
}

void X56() {
  flip (341/1000) {
    if (a) {
      X58();
    }
    else {
      X54();
    }
  }
}

void X57() {
  flip (101/250) {
    b = false;
    X61();
  }
  else {
    b = false;
    X56();
  }
}

void X58() {
  flip (599/1000) {
    if (a) {
      X61();
    }
    else {
      X59();
    }
  }
}

void X59() {
  flip (381/1000) {
    b = true;
    X63();
  }
  else {
    b = false;
    X56();
  }
}

void X60() {
  X62();
  X56();
}

void X61() {
  flip (777/1000) {
    if (a) {
      X62();
    }
    else {
      X63();
    }
  }
}

void X62() {
  X59();
  X66();
}

void X63() {
  X64();
  X67();
}

void X64() {
  X59();
  X58();
}

void X65() {
  flip (17/125) {
    if (b) {
      X67();
    }
    else {
      X66();
    }
  }
}

void X66() {
  X66();
  X66();
}

void X67() {
  flip (4/25) {
    a = false;
    X70();
  }
  else {
    a = false;
    X72();
  }
}

void X68() {
  flip (93/500) {
    if (b) {
      X68();
    }
    else {
      X68();
    }
  }
}

void X69() {
  X72();
  X63();
}

void X70() {
  X73();
  X71();
}

void X71() {
  X70();
  X66();
}

void X72() {
  flip (13/200) {
    if (b) {
      X66();
    }
    else {
      X72();
    }
  }
}

void X73() {
  flip (383/1000) {
    if (b) {
      X68();
    }
    else {
      X77();
    }
  }
}

void X74() {
  flip (19/200) {
    a = true;
    X78();
  }
  else {
    b = false;
    X69();
  }
}

void X75() {
  flip (723/1000) {
    a = true;
    X75();
  }
  else {
    b = false;
    X72();
  }
}

void X76() {
  flip (173/250) {
    b = false;
    X81();
  }
  else {
    a = true;
    X79();
  }
}

void X77() {
  flip (347/1000) {
    if (a) {
      X73();
    }
    else {
      X75();
    }
  }
}

void X78() {
  X78();
  X75();
}

void X79() {
  flip (47/100) {
    if (b) {
      X73();
    }
    else {
      X80();
    }
  }
}

void X80() {
  X75();
  X74();
}

void X81() {
  X81();
  X84();
}

void X82() {
  X86();
  X83();
}

void X83() {
  flip (877/1000) {
    b = false;
    X81();
  }
  else {
    a = true;
    X80();
  }
}

void X84() {
  flip (39/500) {
    b = false;
    X85();
  }
  else {
    b = true;
    X86();
  }
}

void X85() {
  X89();
  X87();
}

void X86() {
  flip (41/50) {
    if (a) {
      X85();
    }
    else {
      X83();
    }
  }
}

void X87() {
  X90();
  X89();
}

void X88() {
  X93();
  X87();
}

void X89() {
  flip (819/1000) {
    a = false;
    X87();
  }
  else {
    a = true;
    X93();
  }
}

void X90() {
  X84();
  X94();
}

void X91() {
  flip (349/500) {
    if (b) {
      X92();
    }
    else {
      X89();
    }
  }
}

void X92() {
  flip (143/250) {
    a = false;
    X94();
  }
  else {
    b = false;
    X86();
  }
}

void X93() {
  X94();
  X87();
}

void X94() {
  X89();
  X98();
}

void X95() {
  X96();
  X92();
}

void X96() {
  flip (433/500) {
    b = false;
    X99();
  }
  else {
    b = true;
    X96();
  }
}

void X97() {
  X97();
  X2();
}

void X98() {
  X93();
  X97();
}

void X99() {
  flip (3/500) {
    b = false;
    X96();
  }
  else {
    a = true;
    X97();
  }
}
