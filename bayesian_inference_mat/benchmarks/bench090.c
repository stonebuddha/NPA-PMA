bool a;
bool b;

void X0() {
  flip (14/25) {
    a = false;
    X97();
  }
  else {
    b = false;
    X4();
  }
}

void X1() {
  X4();
  X1();
}

void X2() {
  flip (177/250) {
    a = false;
    X5();
  }
  else {
    a = true;
    X3();
  }
}

void X3() {
  flip (349/1000) {
    if (b) {
      X5();
    }
    else {
      X99();
    }
  }
}

void X4() {
  X4();
  X0();
}

void X5() {
  X3();
  X3();
}

void X6() {
  flip (711/1000) {
    b = true;
    X1();
  }
  else {
    a = false;
    X5();
  }
}

void X7() {
  X6();
  X4();
}

void X8() {
  flip (37/500) {
    b = false;
    X5();
  }
  else {
    b = true;
    X3();
  }
}

void X9() {
  flip (797/1000) {
    if (a) {
      X3();
    }
    else {
      X12();
    }
  }
}

void X10() {
  flip (411/1000) {
    if (b) {
      X10();
    }
    else {
      X14();
    }
  }
}

void X11() {
  flip (129/500) {
    if (b) {
      X6();
    }
    else {
      X13();
    }
  }
}

void X12() {
  X12();
  X11();
}

void X13() {
  X15();
  X7();
}

void X14() {
  flip (469/1000) {
    b = false;
    X10();
  }
  else {
    b = false;
    X17();
  }
}

void X15() {
  flip (163/500) {
    if (a) {
      X18();
    }
    else {
      X19();
    }
  }
}

void X16() {
  flip (143/500) {
    b = false;
    X18();
  }
  else {
    b = false;
    X17();
  }
}

void X17() {
  flip (29/125) {
    b = false;
    X19();
  }
  else {
    b = false;
    X11();
  }
}

void X18() {
  flip (201/250) {
    b = true;
    X17();
  }
  else {
    a = true;
    X17();
  }
}

void X19() {
  flip (47/1000) {
    if (b) {
      X17();
    }
    else {
      X19();
    }
  }
}

void X20() {
  flip (127/500) {
    if (a) {
      X18();
    }
    else {
      X19();
    }
  }
}

void X21() {
  X24();
  X22();
}

void X22() {
  flip (141/250) {
    b = false;
    X21();
  }
  else {
    a = false;
    X25();
  }
}

void X23() {
  flip (151/500) {
    if (a) {
      X21();
    }
    else {
      X19();
    }
  }
}

void X24() {
  flip (199/200) {
    b = true;
    X22();
  }
  else {
    b = false;
    X27();
  }
}

void X25() {
  flip (763/1000) {
    if (b) {
      X28();
    }
    else {
      X30();
    }
  }
}

void X26() {
  flip (92/125) {
    if (a) {
      X26();
    }
    else {
      X25();
    }
  }
}

void X27() {
  X24();
  X25();
}

void X28() {
  flip (411/1000) {
    b = true;
    X32();
  }
  else {
    a = false;
    X30();
  }
}

void X29() {
  X32();
  X26();
}

void X30() {
  flip (439/500) {
    a = false;
    X33();
  }
  else {
    a = false;
    X28();
  }
}

void X31() {
  X32();
  X34();
}

void X32() {
  flip (197/1000) {
    a = true;
    X33();
  }
  else {
    a = true;
    X28();
  }
}

void X33() {
  flip (997/1000) {
    if (a) {
      X36();
    }
    else {
      X30();
    }
  }
}

void X34() {
  flip (113/125) {
    a = true;
    X34();
  }
  else {
    a = true;
    X35();
  }
}

void X35() {
  X29();
  X33();
}

void X36() {
  flip (4/125) {
    b = false;
    X41();
  }
  else {
    b = true;
    X41();
  }
}

void X37() {
  flip (169/500) {
    a = true;
    X39();
  }
  else {
    b = false;
    X31();
  }
}

void X38() {
  flip (277/1000) {
    a = false;
    X33();
  }
  else {
    b = false;
    X39();
  }
}

void X39() {
  flip (112/125) {
    a = false;
    X40();
  }
  else {
    b = false;
    X35();
  }
}

void X40() {
  X37();
  X37();
}

void X41() {
  flip (829/1000) {
    a = true;
    X38();
  }
  else {
    b = false;
    X43();
  }
}

void X42() {
  flip (639/1000) {
    if (b) {
      X37();
    }
    else {
      X40();
    }
  }
}

void X43() {
  flip (963/1000) {
    if (b) {
      X44();
    }
    else {
      X43();
    }
  }
}

void X44() {
  X38();
  X41();
}

void X45() {
  flip (19/40) {
    if (a) {
      X43();
    }
    else {
      X40();
    }
  }
}

void X46() {
  flip (1/100) {
    if (b) {
      X46();
    }
    else {
      X49();
    }
  }
}

void X47() {
  flip (921/1000) {
    b = true;
    X42();
  }
  else {
    b = true;
    X48();
  }
}

void X48() {
  flip (909/1000) {
    a = false;
    X43();
  }
  else {
    b = false;
    X44();
  }
}

void X49() {
  X48();
  X45();
}

void X50() {
  X50();
  X52();
}

void X51() {
  flip (1/4) {
    a = true;
    X53();
  }
  else {
    b = false;
    X45();
  }
}

void X52() {
  flip (731/1000) {
    if (a) {
      X54();
    }
    else {
      X55();
    }
  }
}

void X53() {
  flip (199/500) {
    b = false;
    X57();
  }
  else {
    b = false;
    X51();
  }
}

void X54() {
  X50();
  X56();
}

void X55() {
  flip (49/500) {
    b = false;
    X60();
  }
  else {
    b = false;
    X58();
  }
}

void X56() {
  flip (571/1000) {
    b = false;
    X52();
  }
  else {
    b = true;
    X53();
  }
}

void X57() {
  flip (359/500) {
    b = false;
    X61();
  }
  else {
    b = true;
    X59();
  }
}

void X58() {
  flip (631/1000) {
    b = false;
    X59();
  }
  else {
    a = false;
    X53();
  }
}

void X59() {
  flip (921/1000) {
    if (a) {
      X56();
    }
    else {
      X57();
    }
  }
}

void X60() {
  X55();
  X59();
}

void X61() {
  X64();
  X63();
}

void X62() {
  flip (471/1000) {
    b = false;
    X65();
  }
  else {
    a = false;
    X58();
  }
}

void X63() {
  X57();
  X62();
}

void X64() {
  X64();
  X66();
}

void X65() {
  flip (879/1000) {
    if (a) {
      X59();
    }
    else {
      X68();
    }
  }
}

void X66() {
  flip (12/25) {
    if (a) {
      X67();
    }
    else {
      X60();
    }
  }
}

void X67() {
  flip (341/500) {
    b = false;
    X62();
  }
  else {
    b = false;
    X71();
  }
}

void X68() {
  flip (359/1000) {
    if (b) {
      X71();
    }
    else {
      X64();
    }
  }
}

void X69() {
  flip (679/1000) {
    if (b) {
      X66();
    }
    else {
      X73();
    }
  }
}

void X70() {
  flip (241/250) {
    b = true;
    X72();
  }
  else {
    b = false;
    X71();
  }
}

void X71() {
  flip (793/1000) {
    a = true;
    X75();
  }
  else {
    a = false;
    X65();
  }
}

void X72() {
  flip (229/1000) {
    if (b) {
      X73();
    }
    else {
      X75();
    }
  }
}

void X73() {
  flip (73/500) {
    a = false;
    X74();
  }
  else {
    a = true;
    X72();
  }
}

void X74() {
  X76();
  X75();
}

void X75() {
  X70();
  X70();
}

void X76() {
  flip (351/500) {
    if (b) {
      X74();
    }
    else {
      X77();
    }
  }
}

void X77() {
  flip (471/1000) {
    if (a) {
      X76();
    }
    else {
      X71();
    }
  }
}

void X78() {
  flip (33/250) {
    if (b) {
      X82();
    }
    else {
      X76();
    }
  }
}

void X79() {
  flip (979/1000) {
    if (a) {
      X82();
    }
    else {
      X76();
    }
  }
}

void X80() {
  X85();
  X79();
}

void X81() {
  flip (493/500) {
    b = true;
    X84();
  }
  else {
    a = false;
    X77();
  }
}

void X82() {
  flip (229/250) {
    if (b) {
      X86();
    }
    else {
      X84();
    }
  }
}

void X83() {
  X85();
  X84();
}

void X84() {
  X83();
  X82();
}

void X85() {
  flip (3/125) {
    if (a) {
      X86();
    }
    else {
      X79();
    }
  }
}

void X86() {
  X83();
  X90();
}

void X87() {
  flip (379/1000) {
    a = false;
    X81();
  }
  else {
    b = true;
    X82();
  }
}

void X88() {
  flip (239/1000) {
    a = true;
    X85();
  }
  else {
    a = false;
    X87();
  }
}

void X89() {
  X91();
  X83();
}

void X90() {
  flip (399/1000) {
    if (a) {
      X94();
    }
    else {
      X89();
    }
  }
}

void X91() {
  flip (197/250) {
    if (b) {
      X91();
    }
    else {
      X88();
    }
  }
}

void X92() {
  X96();
  X89();
}

void X93() {
  X88();
  X98();
}

void X94() {
  X99();
  X93();
}

void X95() {
  flip (319/1000) {
    if (b) {
      X99();
    }
    else {
      X90();
    }
  }
}

void X96() {
  flip (3/500) {
    if (b) {
      X95();
    }
    else {
      X97();
    }
  }
}

void X97() {
  flip (623/1000) {
    a = false;
    X96();
  }
  else {
    a = true;
    X2();
  }
}

void X98() {
  X92();
  X1();
}

void X99() {
  X2();
  X2();
}
