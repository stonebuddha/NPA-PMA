bool a;
bool b;

void X0() {
  flip (53/125) {
    b = true;
    X95();
  }
  else {
    a = false;
    X99();
  }
}

void X1() {
  flip (11/1000) {
    if (a) {
      X6();
    }
    else {
      X3();
    }
  }
}

void X2() {
  flip (951/1000) {
    b = false;
    X0();
  }
  else {
    a = true;
    X0();
  }
}

void X3() {
  X8();
  X8();
}

void X4() {
  flip (307/1000) {
    if (b) {
      X5();
    }
    else {
      X3();
    }
  }
}

void X5() {
  flip (989/1000) {
    if (b) {
      X8();
    }
    else {
      X1();
    }
  }
}

void X6() {
  flip (89/500) {
    a = false;
    X3();
  }
  else {
    a = true;
    X1();
  }
}

void X7() {
  flip (23/50) {
    if (a) {
      X2();
    }
    else {
      X12();
    }
  }
}

void X8() {
  X4();
  X7();
}

void X9() {
  flip (43/125) {
    if (b) {
      X14();
    }
    else {
      X14();
    }
  }
}

void X10() {
  X11();
  X15();
}

void X11() {
  flip (197/200) {
    a = true;
    X11();
  }
  else {
    a = false;
    X6();
  }
}

void X12() {
  flip (347/1000) {
    b = false;
    X8();
  }
  else {
    b = true;
    X14();
  }
}

void X13() {
  flip (377/500) {
    if (a) {
      X9();
    }
    else {
      X9();
    }
  }
}

void X14() {
  flip (379/1000) {
    a = false;
    X11();
  }
  else {
    a = true;
    X11();
  }
}

void X15() {
  flip (561/1000) {
    if (a) {
      X10();
    }
    else {
      X15();
    }
  }
}

void X16() {
  X15();
  X13();
}

void X17() {
  flip (4/5) {
    b = false;
    X22();
  }
  else {
    a = true;
    X21();
  }
}

void X18() {
  flip (767/1000) {
    a = true;
    X22();
  }
  else {
    a = false;
    X23();
  }
}

void X19() {
  X17();
  X18();
}

void X20() {
  flip (991/1000) {
    a = false;
    X17();
  }
  else {
    b = true;
    X25();
  }
}

void X21() {
  flip (67/1000) {
    b = false;
    X23();
  }
  else {
    a = true;
    X22();
  }
}

void X22() {
  flip (197/500) {
    if (a) {
      X20();
    }
    else {
      X18();
    }
  }
}

void X23() {
  X17();
  X22();
}

void X24() {
  flip (687/1000) {
    a = false;
    X23();
  }
  else {
    a = true;
    X29();
  }
}

void X25() {
  flip (983/1000) {
    if (a) {
      X27();
    }
    else {
      X23();
    }
  }
}

void X26() {
  flip (311/1000) {
    a = true;
    X26();
  }
  else {
    a = true;
    X26();
  }
}

void X27() {
  X21();
  X30();
}

void X28() {
  flip (163/1000) {
    b = false;
    X28();
  }
  else {
    b = false;
    X24();
  }
}

void X29() {
  flip (33/100) {
    b = true;
    X24();
  }
  else {
    a = true;
    X24();
  }
}

void X30() {
  X25();
  X27();
}

void X31() {
  flip (187/1000) {
    if (b) {
      X29();
    }
    else {
      X25();
    }
  }
}

void X32() {
  flip (81/125) {
    a = true;
    X31();
  }
  else {
    b = true;
    X31();
  }
}

void X33() {
  flip (63/1000) {
    a = true;
    X34();
  }
  else {
    a = true;
    X31();
  }
}

void X34() {
  flip (9/100) {
    if (a) {
      X34();
    }
    else {
      X33();
    }
  }
}

void X35() {
  flip (259/1000) {
    if (a) {
      X38();
    }
    else {
      X30();
    }
  }
}

void X36() {
  flip (199/500) {
    b = false;
    X36();
  }
  else {
    b = false;
    X33();
  }
}

void X37() {
  X35();
  X34();
}

void X38() {
  flip (311/500) {
    b = true;
    X32();
  }
  else {
    a = false;
    X43();
  }
}

void X39() {
  flip (673/1000) {
    if (b) {
      X33();
    }
    else {
      X36();
    }
  }
}

void X40() {
  flip (241/1000) {
    b = true;
    X45();
  }
  else {
    b = false;
    X42();
  }
}

void X41() {
  flip (977/1000) {
    if (b) {
      X42();
    }
    else {
      X46();
    }
  }
}

void X42() {
  X47();
  X43();
}

void X43() {
  flip (111/500) {
    a = true;
    X47();
  }
  else {
    a = true;
    X43();
  }
}

void X44() {
  X39();
  X49();
}

void X45() {
  flip (3/100) {
    if (b) {
      X45();
    }
    else {
      X42();
    }
  }
}

void X46() {
  X48();
  X48();
}

void X47() {
  flip (117/1000) {
    if (a) {
      X43();
    }
    else {
      X51();
    }
  }
}

void X48() {
  X45();
  X51();
}

void X49() {
  X50();
  X53();
}

void X50() {
  flip (713/1000) {
    a = true;
    X44();
  }
  else {
    b = false;
    X46();
  }
}

void X51() {
  X52();
  X45();
}

void X52() {
  flip (29/50) {
    a = false;
    X53();
  }
  else {
    a = false;
    X52();
  }
}

void X53() {
  flip (971/1000) {
    a = false;
    X56();
  }
  else {
    a = false;
    X58();
  }
}

void X54() {
  flip (19/20) {
    if (b) {
      X49();
    }
    else {
      X53();
    }
  }
}

void X55() {
  flip (113/500) {
    b = false;
    X59();
  }
  else {
    a = false;
    X53();
  }
}

void X56() {
  X51();
  X56();
}

void X57() {
  flip (189/500) {
    if (b) {
      X62();
    }
    else {
      X59();
    }
  }
}

void X58() {
  X62();
  X53();
}

void X59() {
  flip (383/500) {
    if (a) {
      X62();
    }
    else {
      X60();
    }
  }
}

void X60() {
  flip (47/125) {
    if (a) {
      X65();
    }
    else {
      X61();
    }
  }
}

void X61() {
  X64();
  X55();
}

void X62() {
  flip (1/125) {
    a = false;
    X65();
  }
  else {
    a = true;
    X65();
  }
}

void X63() {
  X57();
  X68();
}

void X64() {
  X69();
  X69();
}

void X65() {
  X64();
  X67();
}

void X66() {
  flip (11/20) {
    a = false;
    X66();
  }
  else {
    b = true;
    X65();
  }
}

void X67() {
  flip (179/250) {
    if (a) {
      X67();
    }
    else {
      X67();
    }
  }
}

void X68() {
  X71();
  X65();
}

void X69() {
  flip (59/125) {
    b = false;
    X72();
  }
  else {
    a = false;
    X67();
  }
}

void X70() {
  flip (747/1000) {
    if (b) {
      X70();
    }
    else {
      X72();
    }
  }
}

void X71() {
  X66();
  X70();
}

void X72() {
  flip (427/1000) {
    a = false;
    X72();
  }
  else {
    b = false;
    X72();
  }
}

void X73() {
  flip (967/1000) {
    if (a) {
      X68();
    }
    else {
      X75();
    }
  }
}

void X74() {
  flip (499/500) {
    if (b) {
      X73();
    }
    else {
      X79();
    }
  }
}

void X75() {
  flip (779/1000) {
    a = true;
    X71();
  }
  else {
    a = false;
    X71();
  }
}

void X76() {
  X77();
  X75();
}

void X77() {
  flip (227/500) {
    b = true;
    X81();
  }
  else {
    a = false;
    X80();
  }
}

void X78() {
  flip (23/250) {
    a = false;
    X75();
  }
  else {
    a = true;
    X81();
  }
}

void X79() {
  flip (5/8) {
    if (a) {
      X77();
    }
    else {
      X80();
    }
  }
}

void X80() {
  flip (103/200) {
    b = false;
    X79();
  }
  else {
    b = false;
    X85();
  }
}

void X81() {
  flip (487/1000) {
    b = false;
    X80();
  }
  else {
    b = false;
    X85();
  }
}

void X82() {
  flip (411/500) {
    if (a) {
      X83();
    }
    else {
      X84();
    }
  }
}

void X83() {
  flip (57/1000) {
    b = false;
    X78();
  }
  else {
    b = true;
    X82();
  }
}

void X84() {
  flip (331/500) {
    if (b) {
      X85();
    }
    else {
      X88();
    }
  }
}

void X85() {
  X87();
  X84();
}

void X86() {
  X81();
  X89();
}

void X87() {
  X82();
  X89();
}

void X88() {
  flip (889/1000) {
    a = true;
    X90();
  }
  else {
    b = true;
    X86();
  }
}

void X89() {
  X86();
  X93();
}

void X90() {
  flip (73/500) {
    if (b) {
      X90();
    }
    else {
      X92();
    }
  }
}

void X91() {
  flip (122/125) {
    a = true;
    X94();
  }
  else {
    b = true;
    X88();
  }
}

void X92() {
  flip (459/500) {
    if (a) {
      X96();
    }
    else {
      X92();
    }
  }
}

void X93() {
  flip (837/1000) {
    a = true;
    X92();
  }
  else {
    a = false;
    X89();
  }
}

void X94() {
  X90();
  X98();
}

void X95() {
  flip (247/1000) {
    if (a) {
      X93();
    }
    else {
      X96();
    }
  }
}

void X96() {
  X90();
  X90();
}

void X97() {
  X98();
  X91();
}

void X98() {
  X0();
  X92();
}

void X99() {
  flip (601/1000) {
    b = true;
    X93();
  }
  else {
    b = false;
    X4();
  }
}
