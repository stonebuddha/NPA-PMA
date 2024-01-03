bool a;
bool b;

void X0() {
  flip (22/125) {
    if (a) {
      X2();
    }
    else {
      X98();
    }
  }
}

void X1() {
  X1();
  X97();
}

void X2() {
  flip (407/500) {
    if (a) {
      X2();
    }
    else {
      X1();
    }
  }
}

void X3() {
  flip (297/1000) {
    b = true;
    X0();
  }
  else {
    b = true;
    X5();
  }
}

void X4() {
  flip (41/100) {
    a = false;
    X7();
  }
  else {
    a = false;
    X3();
  }
}

void X5() {
  flip (839/1000) {
    if (b) {
      X9();
    }
    else {
      X2();
    }
  }
}

void X6() {
  flip (21/1000) {
    if (a) {
      X6();
    }
    else {
      X3();
    }
  }
}

void X7() {
  flip (453/1000) {
    a = false;
    X6();
  }
  else {
    b = true;
    X4();
  }
}

void X8() {
  flip (113/500) {
    if (b) {
      X10();
    }
    else {
      X11();
    }
  }
}

void X9() {
  flip (833/1000) {
    if (b) {
      X10();
    }
    else {
      X14();
    }
  }
}

void X10() {
  flip (11/250) {
    a = false;
    X8();
  }
  else {
    b = false;
    X15();
  }
}

void X11() {
  flip (91/100) {
    if (b) {
      X8();
    }
    else {
      X5();
    }
  }
}

void X12() {
  flip (151/250) {
    b = true;
    X16();
  }
  else {
    b = true;
    X11();
  }
}

void X13() {
  flip (171/250) {
    if (b) {
      X16();
    }
    else {
      X9();
    }
  }
}

void X14() {
  X13();
  X10();
}

void X15() {
  X12();
  X18();
}

void X16() {
  flip (417/1000) {
    a = false;
    X15();
  }
  else {
    a = true;
    X10();
  }
}

void X17() {
  X11();
  X11();
}

void X18() {
  flip (139/1000) {
    b = true;
    X21();
  }
  else {
    b = false;
    X18();
  }
}

void X19() {
  flip (207/500) {
    if (a) {
      X13();
    }
    else {
      X19();
    }
  }
}

void X20() {
  X23();
  X24();
}

void X21() {
  flip (1/125) {
    b = false;
    X15();
  }
  else {
    b = true;
    X21();
  }
}

void X22() {
  flip (301/500) {
    b = true;
    X21();
  }
  else {
    b = true;
    X27();
  }
}

void X23() {
  flip (359/1000) {
    b = true;
    X24();
  }
  else {
    a = true;
    X22();
  }
}

void X24() {
  X20();
  X26();
}

void X25() {
  X29();
  X26();
}

void X26() {
  flip (409/1000) {
    b = true;
    X30();
  }
  else {
    a = false;
    X30();
  }
}

void X27() {
  X28();
  X24();
}

void X28() {
  flip (89/1000) {
    if (a) {
      X26();
    }
    else {
      X27();
    }
  }
}

void X29() {
  flip (237/1000) {
    if (b) {
      X28();
    }
    else {
      X25();
    }
  }
}

void X30() {
  flip (211/250) {
    if (a) {
      X27();
    }
    else {
      X30();
    }
  }
}

void X31() {
  flip (133/200) {
    if (a) {
      X31();
    }
    else {
      X28();
    }
  }
}

void X32() {
  flip (79/1000) {
    if (b) {
      X37();
    }
    else {
      X29();
    }
  }
}

void X33() {
  flip (31/1000) {
    if (b) {
      X35();
    }
    else {
      X27();
    }
  }
}

void X34() {
  flip (599/1000) {
    if (b) {
      X30();
    }
    else {
      X30();
    }
  }
}

void X35() {
  flip (439/1000) {
    if (a) {
      X33();
    }
    else {
      X39();
    }
  }
}

void X36() {
  flip (369/1000) {
    if (b) {
      X34();
    }
    else {
      X35();
    }
  }
}

void X37() {
  X35();
  X33();
}

void X38() {
  flip (83/1000) {
    if (a) {
      X40();
    }
    else {
      X32();
    }
  }
}

void X39() {
  X38();
  X40();
}

void X40() {
  flip (463/1000) {
    if (b) {
      X44();
    }
    else {
      X37();
    }
  }
}

void X41() {
  flip (241/250) {
    b = false;
    X39();
  }
  else {
    b = false;
    X43();
  }
}

void X42() {
  X40();
  X41();
}

void X43() {
  X44();
  X41();
}

void X44() {
  flip (321/1000) {
    if (b) {
      X41();
    }
    else {
      X38();
    }
  }
}

void X45() {
  X41();
  X43();
}

void X46() {
  flip (809/1000) {
    b = false;
    X43();
  }
  else {
    a = true;
    X46();
  }
}

void X47() {
  X46();
  X50();
}

void X48() {
  flip (119/125) {
    if (a) {
      X51();
    }
    else {
      X42();
    }
  }
}

void X49() {
  X49();
  X45();
}

void X50() {
  X50();
  X44();
}

void X51() {
  flip (923/1000) {
    a = true;
    X53();
  }
  else {
    b = true;
    X47();
  }
}

void X52() {
  X48();
  X56();
}

void X53() {
  flip (103/125) {
    if (a) {
      X49();
    }
    else {
      X56();
    }
  }
}

void X54() {
  flip (419/1000) {
    a = true;
    X59();
  }
  else {
    b = false;
    X57();
  }
}

void X55() {
  flip (201/250) {
    if (a) {
      X58();
    }
    else {
      X58();
    }
  }
}

void X56() {
  flip (219/250) {
    b = false;
    X55();
  }
  else {
    a = true;
    X54();
  }
}

void X57() {
  flip (3/250) {
    if (b) {
      X55();
    }
    else {
      X55();
    }
  }
}

void X58() {
  flip (309/500) {
    if (a) {
      X58();
    }
    else {
      X63();
    }
  }
}

void X59() {
  flip (67/125) {
    a = false;
    X64();
  }
  else {
    b = false;
    X54();
  }
}

void X60() {
  flip (501/1000) {
    b = true;
    X62();
  }
  else {
    b = true;
    X62();
  }
}

void X61() {
  flip (89/250) {
    if (a) {
      X62();
    }
    else {
      X62();
    }
  }
}

void X62() {
  X66();
  X62();
}

void X63() {
  flip (267/500) {
    if (b) {
      X65();
    }
    else {
      X64();
    }
  }
}

void X64() {
  flip (733/1000) {
    if (a) {
      X66();
    }
    else {
      X62();
    }
  }
}

void X65() {
  X61();
  X60();
}

void X66() {
  flip (167/1000) {
    a = true;
    X71();
  }
  else {
    a = true;
    X66();
  }
}

void X67() {
  X63();
  X63();
}

void X68() {
  X64();
  X64();
}

void X69() {
  flip (59/500) {
    b = true;
    X63();
  }
  else {
    a = true;
    X65();
  }
}

void X70() {
  flip (341/500) {
    b = false;
    X65();
  }
  else {
    b = false;
    X71();
  }
}

void X71() {
  flip (957/1000) {
    if (b) {
      X66();
    }
    else {
      X67();
    }
  }
}

void X72() {
  X77();
  X77();
}

void X73() {
  flip (53/100) {
    if (b) {
      X72();
    }
    else {
      X72();
    }
  }
}

void X74() {
  flip (471/1000) {
    if (a) {
      X75();
    }
    else {
      X68();
    }
  }
}

void X75() {
  X80();
  X76();
}

void X76() {
  flip (117/250) {
    b = false;
    X78();
  }
  else {
    b = true;
    X79();
  }
}

void X77() {
  flip (129/200) {
    b = false;
    X80();
  }
  else {
    b = true;
    X75();
  }
}

void X78() {
  flip (13/250) {
    a = false;
    X79();
  }
  else {
    a = false;
    X80();
  }
}

void X79() {
  flip (43/50) {
    if (a) {
      X76();
    }
    else {
      X81();
    }
  }
}

void X80() {
  flip (29/40) {
    if (a) {
      X76();
    }
    else {
      X78();
    }
  }
}

void X81() {
  flip (413/500) {
    if (a) {
      X76();
    }
    else {
      X76();
    }
  }
}

void X82() {
  flip (23/50) {
    if (a) {
      X83();
    }
    else {
      X77();
    }
  }
}

void X83() {
  flip (161/1000) {
    if (a) {
      X88();
    }
    else {
      X82();
    }
  }
}

void X84() {
  flip (171/1000) {
    b = true;
    X86();
  }
  else {
    a = true;
    X79();
  }
}

void X85() {
  flip (28/125) {
    if (b) {
      X81();
    }
    else {
      X88();
    }
  }
}

void X86() {
  flip (861/1000) {
    if (b) {
      X82();
    }
    else {
      X87();
    }
  }
}

void X87() {
  flip (457/1000) {
    if (a) {
      X87();
    }
    else {
      X86();
    }
  }
}

void X88() {
  X88();
  X91();
}

void X89() {
  flip (1/5) {
    b = true;
    X94();
  }
  else {
    b = true;
    X86();
  }
}

void X90() {
  flip (473/1000) {
    b = false;
    X93();
  }
  else {
    b = true;
    X89();
  }
}

void X91() {
  flip (701/1000) {
    if (b) {
      X87();
    }
    else {
      X85();
    }
  }
}

void X92() {
  flip (971/1000) {
    b = true;
    X87();
  }
  else {
    b = true;
    X94();
  }
}

void X93() {
  flip (127/500) {
    a = true;
    X91();
  }
  else {
    b = false;
    X94();
  }
}

void X94() {
  flip (303/500) {
    b = false;
    X95();
  }
  else {
    b = false;
    X92();
  }
}

void X95() {
  flip (7/125) {
    if (b) {
      X94();
    }
    else {
      X89();
    }
  }
}

void X96() {
  X99();
  X95();
}

void X97() {
  flip (147/1000) {
    b = true;
    X92();
  }
  else {
    a = false;
    X98();
  }
}

void X98() {
  X1();
  X96();
}

void X99() {
  flip (601/1000) {
    b = false;
    X1();
  }
  else {
    a = false;
    X99();
  }
}
