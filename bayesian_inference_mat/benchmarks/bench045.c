bool a;
bool b;

void X0() {
  X99();
  X94();
}

void X1() {
  flip (17/25) {
    a = false;
    X96();
  }
  else {
    b = false;
    X98();
  }
}

void X2() {
  X99();
  X98();
}

void X3() {
  flip (2/5) {
    if (b) {
      X5();
    }
    else {
      X98();
    }
  }
}

void X4() {
  flip (721/1000) {
    if (b) {
      X99();
    }
    else {
      X5();
    }
  }
}

void X5() {
  flip (127/1000) {
    if (b) {
      X4();
    }
    else {
      X5();
    }
  }
}

void X6() {
  X0();
  X5();
}

void X7() {
  X8();
  X6();
}

void X8() {
  flip (173/250) {
    a = false;
    X4();
  }
  else {
    a = false;
    X6();
  }
}

void X9() {
  flip (121/250) {
    if (b) {
      X8();
    }
    else {
      X12();
    }
  }
}

void X10() {
  flip (519/1000) {
    if (b) {
      X7();
    }
    else {
      X13();
    }
  }
}

void X11() {
  X11();
  X8();
}

void X12() {
  X11();
  X12();
}

void X13() {
  flip (119/250) {
    if (a) {
      X13();
    }
    else {
      X15();
    }
  }
}

void X14() {
  X17();
  X17();
}

void X15() {
  flip (133/500) {
    a = true;
    X11();
  }
  else {
    b = false;
    X13();
  }
}

void X16() {
  flip (31/1000) {
    a = false;
    X21();
  }
  else {
    b = false;
    X15();
  }
}

void X17() {
  flip (411/1000) {
    if (a) {
      X15();
    }
    else {
      X17();
    }
  }
}

void X18() {
  X18();
  X20();
}

void X19() {
  flip (118/125) {
    if (b) {
      X23();
    }
    else {
      X23();
    }
  }
}

void X20() {
  flip (17/25) {
    if (a) {
      X21();
    }
    else {
      X15();
    }
  }
}

void X21() {
  flip (72/125) {
    b = false;
    X23();
  }
  else {
    b = false;
    X16();
  }
}

void X22() {
  flip (229/500) {
    b = true;
    X24();
  }
  else {
    a = false;
    X24();
  }
}

void X23() {
  flip (41/125) {
    a = true;
    X28();
  }
  else {
    a = true;
    X17();
  }
}

void X24() {
  flip (58/125) {
    if (b) {
      X22();
    }
    else {
      X24();
    }
  }
}

void X25() {
  flip (13/50) {
    a = true;
    X25();
  }
  else {
    b = false;
    X26();
  }
}

void X26() {
  flip (367/1000) {
    a = false;
    X27();
  }
  else {
    b = false;
    X26();
  }
}

void X27() {
  flip (19/50) {
    b = false;
    X32();
  }
  else {
    a = false;
    X30();
  }
}

void X28() {
  flip (33/200) {
    if (b) {
      X30();
    }
    else {
      X22();
    }
  }
}

void X29() {
  X30();
  X33();
}

void X30() {
  flip (699/1000) {
    a = false;
    X29();
  }
  else {
    b = false;
    X29();
  }
}

void X31() {
  flip (197/1000) {
    b = false;
    X32();
  }
  else {
    a = false;
    X34();
  }
}

void X32() {
  flip (223/500) {
    a = false;
    X30();
  }
  else {
    b = true;
    X31();
  }
}

void X33() {
  flip (317/500) {
    b = false;
    X28();
  }
  else {
    b = true;
    X36();
  }
}

void X34() {
  flip (97/500) {
    a = true;
    X30();
  }
  else {
    b = false;
    X35();
  }
}

void X35() {
  flip (7/1000) {
    if (b) {
      X32();
    }
    else {
      X29();
    }
  }
}

void X36() {
  flip (97/100) {
    if (b) {
      X30();
    }
    else {
      X32();
    }
  }
}

void X37() {
  flip (467/1000) {
    b = true;
    X32();
  }
  else {
    a = false;
    X35();
  }
}

void X38() {
  flip (489/1000) {
    if (b) {
      X43();
    }
    else {
      X33();
    }
  }
}

void X39() {
  flip (769/1000) {
    if (a) {
      X43();
    }
    else {
      X33();
    }
  }
}

void X40() {
  X34();
  X38();
}

void X41() {
  flip (363/500) {
    b = true;
    X45();
  }
  else {
    a = true;
    X37();
  }
}

void X42() {
  X46();
  X40();
}

void X43() {
  X38();
  X47();
}

void X44() {
  flip (503/1000) {
    a = true;
    X46();
  }
  else {
    a = false;
    X40();
  }
}

void X45() {
  flip (359/1000) {
    a = true;
    X43();
  }
  else {
    b = false;
    X48();
  }
}

void X46() {
  flip (861/1000) {
    if (b) {
      X41();
    }
    else {
      X45();
    }
  }
}

void X47() {
  flip (423/500) {
    if (a) {
      X41();
    }
    else {
      X46();
    }
  }
}

void X48() {
  flip (59/200) {
    if (a) {
      X53();
    }
    else {
      X44();
    }
  }
}

void X49() {
  flip (233/500) {
    a = false;
    X49();
  }
  else {
    b = false;
    X47();
  }
}

void X50() {
  flip (103/1000) {
    if (a) {
      X48();
    }
    else {
      X54();
    }
  }
}

void X51() {
  flip (831/1000) {
    b = false;
    X50();
  }
  else {
    a = true;
    X52();
  }
}

void X52() {
  flip (197/200) {
    if (a) {
      X55();
    }
    else {
      X49();
    }
  }
}

void X53() {
  flip (333/500) {
    if (a) {
      X51();
    }
    else {
      X54();
    }
  }
}

void X54() {
  X48();
  X56();
}

void X55() {
  flip (37/250) {
    if (b) {
      X53();
    }
    else {
      X49();
    }
  }
}

void X56() {
  X55();
  X61();
}

void X57() {
  flip (697/1000) {
    if (a) {
      X57();
    }
    else {
      X57();
    }
  }
}

void X58() {
  flip (123/500) {
    a = false;
    X57();
  }
  else {
    a = false;
    X55();
  }
}

void X59() {
  flip (41/125) {
    b = true;
    X63();
  }
  else {
    b = false;
    X58();
  }
}

void X60() {
  X56();
  X56();
}

void X61() {
  flip (3/1000) {
    b = false;
    X65();
  }
  else {
    a = false;
    X62();
  }
}

void X62() {
  flip (59/500) {
    a = false;
    X67();
  }
  else {
    a = false;
    X65();
  }
}

void X63() {
  flip (33/50) {
    a = true;
    X63();
  }
  else {
    a = true;
    X61();
  }
}

void X64() {
  flip (333/1000) {
    a = true;
    X62();
  }
  else {
    a = false;
    X61();
  }
}

void X65() {
  flip (83/125) {
    a = false;
    X61();
  }
  else {
    a = false;
    X70();
  }
}

void X66() {
  X60();
  X60();
}

void X67() {
  X65();
  X71();
}

void X68() {
  flip (62/125) {
    a = true;
    X71();
  }
  else {
    a = true;
    X62();
  }
}

void X69() {
  flip (367/500) {
    if (a) {
      X68();
    }
    else {
      X70();
    }
  }
}

void X70() {
  flip (147/1000) {
    a = true;
    X74();
  }
  else {
    a = false;
    X71();
  }
}

void X71() {
  X66();
  X69();
}

void X72() {
  X70();
  X77();
}

void X73() {
  X70();
  X70();
}

void X74() {
  flip (847/1000) {
    b = false;
    X71();
  }
  else {
    b = true;
    X74();
  }
}

void X75() {
  X76();
  X69();
}

void X76() {
  X79();
  X78();
}

void X77() {
  X74();
  X71();
}

void X78() {
  X83();
  X81();
}

void X79() {
  flip (341/1000) {
    if (a) {
      X83();
    }
    else {
      X76();
    }
  }
}

void X80() {
  flip (141/200) {
    a = false;
    X77();
  }
  else {
    a = false;
    X83();
  }
}

void X81() {
  flip (53/200) {
    if (b) {
      X80();
    }
    else {
      X85();
    }
  }
}

void X82() {
  flip (36/125) {
    if (a) {
      X82();
    }
    else {
      X77();
    }
  }
}

void X83() {
  flip (3/40) {
    if (b) {
      X78();
    }
    else {
      X82();
    }
  }
}

void X84() {
  flip (629/1000) {
    if (b) {
      X89();
    }
    else {
      X89();
    }
  }
}

void X85() {
  X86();
  X89();
}

void X86() {
  flip (491/500) {
    if (b) {
      X86();
    }
    else {
      X85();
    }
  }
}

void X87() {
  X90();
  X91();
}

void X88() {
  X88();
  X83();
}

void X89() {
  flip (869/1000) {
    if (a) {
      X84();
    }
    else {
      X93();
    }
  }
}

void X90() {
  X88();
  X94();
}

void X91() {
  flip (803/1000) {
    if (a) {
      X86();
    }
    else {
      X91();
    }
  }
}

void X92() {
  flip (453/500) {
    b = false;
    X93();
  }
  else {
    b = true;
    X92();
  }
}

void X93() {
  X97();
  X90();
}

void X94() {
  X94();
  X99();
}

void X95() {
  flip (911/1000) {
    b = true;
    X99();
  }
  else {
    a = false;
    X97();
  }
}

void X96() {
  flip (863/1000) {
    if (a) {
      X99();
    }
    else {
      X1();
    }
  }
}

void X97() {
  X94();
  X94();
}

void X98() {
  flip (11/500) {
    if (b) {
      X3();
    }
    else {
      X94();
    }
  }
}

void X99() {
  X4();
  X4();
}
