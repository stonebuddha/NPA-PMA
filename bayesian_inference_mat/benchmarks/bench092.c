bool a;
bool b;

void X0() {
  X0();
  X5();
}

void X1() {
  flip (11/50) {
    b = true;
    X4();
  }
  else {
    a = true;
    X98();
  }
}

void X2() {
  X4();
  X2();
}

void X3() {
  flip (3/25) {
    a = true;
    X7();
  }
  else {
    b = false;
    X8();
  }
}

void X4() {
  flip (147/1000) {
    b = true;
    X3();
  }
  else {
    a = true;
    X0();
  }
}

void X5() {
  flip (973/1000) {
    if (a) {
      X4();
    }
    else {
      X4();
    }
  }
}

void X6() {
  flip (39/200) {
    if (a) {
      X10();
    }
    else {
      X10();
    }
  }
}

void X7() {
  flip (341/1000) {
    if (a) {
      X1();
    }
    else {
      X2();
    }
  }
}

void X8() {
  flip (53/125) {
    a = false;
    X10();
  }
  else {
    b = false;
    X9();
  }
}

void X9() {
  X9();
  X14();
}

void X10() {
  flip (123/125) {
    a = false;
    X15();
  }
  else {
    b = false;
    X4();
  }
}

void X11() {
  flip (63/200) {
    a = true;
    X6();
  }
  else {
    b = true;
    X16();
  }
}

void X12() {
  flip (967/1000) {
    a = false;
    X13();
  }
  else {
    a = false;
    X7();
  }
}

void X13() {
  flip (471/500) {
    b = false;
    X18();
  }
  else {
    a = true;
    X15();
  }
}

void X14() {
  X8();
  X12();
}

void X15() {
  flip (81/125) {
    a = true;
    X13();
  }
  else {
    b = true;
    X11();
  }
}

void X16() {
  flip (29/200) {
    if (b) {
      X18();
    }
    else {
      X12();
    }
  }
}

void X17() {
  X13();
  X15();
}

void X18() {
  X23();
  X20();
}

void X19() {
  flip (87/250) {
    if (a) {
      X21();
    }
    else {
      X13();
    }
  }
}

void X20() {
  X14();
  X15();
}

void X21() {
  X24();
  X24();
}

void X22() {
  flip (113/500) {
    a = false;
    X21();
  }
  else {
    b = true;
    X23();
  }
}

void X23() {
  flip (191/250) {
    if (b) {
      X26();
    }
    else {
      X23();
    }
  }
}

void X24() {
  flip (343/500) {
    a = false;
    X18();
  }
  else {
    a = false;
    X27();
  }
}

void X25() {
  flip (103/1000) {
    if (b) {
      X20();
    }
    else {
      X29();
    }
  }
}

void X26() {
  X31();
  X27();
}

void X27() {
  X30();
  X24();
}

void X28() {
  flip (7/8) {
    if (a) {
      X25();
    }
    else {
      X32();
    }
  }
}

void X29() {
  flip (93/200) {
    if (b) {
      X32();
    }
    else {
      X24();
    }
  }
}

void X30() {
  flip (66/125) {
    b = false;
    X29();
  }
  else {
    a = false;
    X35();
  }
}

void X31() {
  flip (3/1000) {
    b = true;
    X35();
  }
  else {
    b = false;
    X29();
  }
}

void X32() {
  flip (111/1000) {
    if (a) {
      X32();
    }
    else {
      X37();
    }
  }
}

void X33() {
  flip (509/1000) {
    if (a) {
      X36();
    }
    else {
      X31();
    }
  }
}

void X34() {
  X36();
  X29();
}

void X35() {
  X37();
  X40();
}

void X36() {
  flip (269/1000) {
    if (b) {
      X41();
    }
    else {
      X38();
    }
  }
}

void X37() {
  X42();
  X41();
}

void X38() {
  flip (199/1000) {
    b = true;
    X38();
  }
  else {
    b = false;
    X35();
  }
}

void X39() {
  X38();
  X38();
}

void X40() {
  flip (31/1000) {
    a = true;
    X41();
  }
  else {
    a = true;
    X37();
  }
}

void X41() {
  X36();
  X37();
}

void X42() {
  flip (393/500) {
    if (b) {
      X37();
    }
    else {
      X37();
    }
  }
}

void X43() {
  flip (112/125) {
    if (b) {
      X43();
    }
    else {
      X38();
    }
  }
}

void X44() {
  X47();
  X38();
}

void X45() {
  flip (106/125) {
    if (b) {
      X40();
    }
    else {
      X40();
    }
  }
}

void X46() {
  X50();
  X46();
}

void X47() {
  flip (31/40) {
    if (b) {
      X43();
    }
    else {
      X50();
    }
  }
}

void X48() {
  X48();
  X50();
}

void X49() {
  flip (221/250) {
    if (b) {
      X49();
    }
    else {
      X50();
    }
  }
}

void X50() {
  X51();
  X47();
}

void X51() {
  flip (22/125) {
    if (a) {
      X48();
    }
    else {
      X46();
    }
  }
}

void X52() {
  X56();
  X57();
}

void X53() {
  X55();
  X58();
}

void X54() {
  flip (357/500) {
    a = false;
    X56();
  }
  else {
    a = false;
    X54();
  }
}

void X55() {
  X57();
  X52();
}

void X56() {
  flip (39/500) {
    b = true;
    X59();
  }
  else {
    a = true;
    X60();
  }
}

void X57() {
  X60();
  X61();
}

void X58() {
  flip (833/1000) {
    b = true;
    X62();
  }
  else {
    b = true;
    X53();
  }
}

void X59() {
  flip (111/500) {
    if (a) {
      X56();
    }
    else {
      X64();
    }
  }
}

void X60() {
  flip (81/500) {
    a = false;
    X57();
  }
  else {
    a = false;
    X56();
  }
}

void X61() {
  X58();
  X59();
}

void X62() {
  flip (19/250) {
    b = false;
    X64();
  }
  else {
    b = true;
    X56();
  }
}

void X63() {
  flip (263/500) {
    a = true;
    X62();
  }
  else {
    a = true;
    X67();
  }
}

void X64() {
  flip (387/1000) {
    if (b) {
      X64();
    }
    else {
      X65();
    }
  }
}

void X65() {
  X68();
  X64();
}

void X66() {
  flip (139/200) {
    a = true;
    X68();
  }
  else {
    a = false;
    X64();
  }
}

void X67() {
  flip (109/125) {
    if (a) {
      X70();
    }
    else {
      X62();
    }
  }
}

void X68() {
  flip (86/125) {
    a = true;
    X73();
  }
  else {
    b = true;
    X71();
  }
}

void X69() {
  flip (451/1000) {
    if (a) {
      X66();
    }
    else {
      X69();
    }
  }
}

void X70() {
  X72();
  X71();
}

void X71() {
  flip (253/500) {
    b = false;
    X72();
  }
  else {
    a = true;
    X72();
  }
}

void X72() {
  X76();
  X70();
}

void X73() {
  flip (207/1000) {
    if (b) {
      X73();
    }
    else {
      X71();
    }
  }
}

void X74() {
  flip (271/500) {
    if (b) {
      X77();
    }
    else {
      X70();
    }
  }
}

void X75() {
  X73();
  X73();
}

void X76() {
  X76();
  X80();
}

void X77() {
  flip (193/500) {
    b = true;
    X82();
  }
  else {
    a = false;
    X80();
  }
}

void X78() {
  X83();
  X76();
}

void X79() {
  flip (221/250) {
    a = true;
    X84();
  }
  else {
    b = true;
    X76();
  }
}

void X80() {
  flip (167/1000) {
    a = true;
    X81();
  }
  else {
    a = true;
    X81();
  }
}

void X81() {
  X85();
  X80();
}

void X82() {
  flip (543/1000) {
    if (a) {
      X84();
    }
    else {
      X84();
    }
  }
}

void X83() {
  flip (83/250) {
    if (b) {
      X87();
    }
    else {
      X77();
    }
  }
}

void X84() {
  X87();
  X87();
}

void X85() {
  flip (17/250) {
    a = true;
    X85();
  }
  else {
    b = true;
    X86();
  }
}

void X86() {
  flip (531/1000) {
    if (b) {
      X81();
    }
    else {
      X87();
    }
  }
}

void X87() {
  flip (249/1000) {
    if (a) {
      X85();
    }
    else {
      X89();
    }
  }
}

void X88() {
  flip (477/500) {
    a = false;
    X84();
  }
  else {
    a = true;
    X92();
  }
}

void X89() {
  X83();
  X88();
}

void X90() {
  flip (431/1000) {
    b = false;
    X95();
  }
  else {
    b = true;
    X85();
  }
}

void X91() {
  X92();
  X90();
}

void X92() {
  flip (17/20) {
    if (b) {
      X92();
    }
    else {
      X97();
    }
  }
}

void X93() {
  X87();
  X91();
}

void X94() {
  flip (873/1000) {
    if (a) {
      X89();
    }
    else {
      X94();
    }
  }
}

void X95() {
  flip (153/200) {
    if (a) {
      X92();
    }
    else {
      X91();
    }
  }
}

void X96() {
  X92();
  X1();
}

void X97() {
  flip (249/500) {
    b = true;
    X99();
  }
  else {
    b = true;
    X92();
  }
}

void X98() {
  flip (51/100) {
    if (a) {
      X98();
    }
    else {
      X99();
    }
  }
}

void X99() {
  flip (863/1000) {
    if (a) {
      X2();
    }
    else {
      X94();
    }
  }
}
