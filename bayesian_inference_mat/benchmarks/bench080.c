bool a;
bool b;

void X0() {
  X96();
  X3();
}

void X1() {
  flip (49/50) {
    if (b) {
      X2();
    }
    else {
      X4();
    }
  }
}

void X2() {
  flip (383/500) {
    a = false;
    X99();
  }
  else {
    a = true;
    X97();
  }
}

void X3() {
  flip (339/1000) {
    if (b) {
      X8();
    }
    else {
      X2();
    }
  }
}

void X4() {
  flip (39/125) {
    if (b) {
      X5();
    }
    else {
      X2();
    }
  }
}

void X5() {
  X3();
  X8();
}

void X6() {
  X3();
  X11();
}

void X7() {
  flip (919/1000) {
    if (a) {
      X8();
    }
    else {
      X8();
    }
  }
}

void X8() {
  flip (817/1000) {
    if (b) {
      X5();
    }
    else {
      X3();
    }
  }
}

void X9() {
  flip (749/1000) {
    if (b) {
      X12();
    }
    else {
      X9();
    }
  }
}

void X10() {
  X7();
  X15();
}

void X11() {
  flip (481/500) {
    if (a) {
      X12();
    }
    else {
      X6();
    }
  }
}

void X12() {
  flip (663/1000) {
    if (b) {
      X9();
    }
    else {
      X13();
    }
  }
}

void X13() {
  flip (63/500) {
    if (b) {
      X12();
    }
    else {
      X14();
    }
  }
}

void X14() {
  X17();
  X10();
}

void X15() {
  flip (11/1000) {
    a = false;
    X15();
  }
  else {
    b = true;
    X10();
  }
}

void X16() {
  X19();
  X13();
}

void X17() {
  flip (28/125) {
    if (b) {
      X16();
    }
    else {
      X13();
    }
  }
}

void X18() {
  flip (67/100) {
    if (a) {
      X21();
    }
    else {
      X13();
    }
  }
}

void X19() {
  flip (281/500) {
    if (b) {
      X22();
    }
    else {
      X20();
    }
  }
}

void X20() {
  flip (11/250) {
    if (b) {
      X19();
    }
    else {
      X15();
    }
  }
}

void X21() {
  flip (157/500) {
    b = true;
    X15();
  }
  else {
    a = true;
    X21();
  }
}

void X22() {
  flip (199/1000) {
    a = true;
    X24();
  }
  else {
    b = true;
    X16();
  }
}

void X23() {
  flip (411/500) {
    b = false;
    X23();
  }
  else {
    b = true;
    X17();
  }
}

void X24() {
  flip (81/250) {
    a = false;
    X27();
  }
  else {
    a = false;
    X26();
  }
}

void X25() {
  X20();
  X28();
}

void X26() {
  X24();
  X25();
}

void X27() {
  X30();
  X21();
}

void X28() {
  X32();
  X26();
}

void X29() {
  flip (281/1000) {
    a = true;
    X34();
  }
  else {
    b = true;
    X31();
  }
}

void X30() {
  flip (99/125) {
    if (b) {
      X33();
    }
    else {
      X24();
    }
  }
}

void X31() {
  flip (379/1000) {
    if (b) {
      X31();
    }
    else {
      X35();
    }
  }
}

void X32() {
  flip (41/500) {
    if (a) {
      X37();
    }
    else {
      X33();
    }
  }
}

void X33() {
  flip (817/1000) {
    if (b) {
      X33();
    }
    else {
      X37();
    }
  }
}

void X34() {
  X33();
  X39();
}

void X35() {
  flip (99/250) {
    if (b) {
      X39();
    }
    else {
      X35();
    }
  }
}

void X36() {
  flip (197/200) {
    a = true;
    X34();
  }
  else {
    a = false;
    X33();
  }
}

void X37() {
  flip (341/500) {
    if (b) {
      X37();
    }
    else {
      X36();
    }
  }
}

void X38() {
  flip (743/1000) {
    if (a) {
      X34();
    }
    else {
      X32();
    }
  }
}

void X39() {
  X35();
  X34();
}

void X40() {
  flip (271/500) {
    if (b) {
      X36();
    }
    else {
      X38();
    }
  }
}

void X41() {
  flip (1/8) {
    if (b) {
      X42();
    }
    else {
      X43();
    }
  }
}

void X42() {
  flip (201/500) {
    if (a) {
      X43();
    }
    else {
      X47();
    }
  }
}

void X43() {
  X43();
  X38();
}

void X44() {
  X42();
  X48();
}

void X45() {
  flip (14/25) {
    b = true;
    X41();
  }
  else {
    b = true;
    X44();
  }
}

void X46() {
  flip (23/1000) {
    a = true;
    X48();
  }
  else {
    b = true;
    X43();
  }
}

void X47() {
  flip (561/1000) {
    b = false;
    X45();
  }
  else {
    b = false;
    X46();
  }
}

void X48() {
  X48();
  X42();
}

void X49() {
  flip (17/200) {
    b = false;
    X46();
  }
  else {
    b = true;
    X46();
  }
}

void X50() {
  flip (411/500) {
    if (a) {
      X49();
    }
    else {
      X55();
    }
  }
}

void X51() {
  flip (7/250) {
    a = false;
    X53();
  }
  else {
    a = true;
    X55();
  }
}

void X52() {
  X52();
  X49();
}

void X53() {
  flip (161/500) {
    a = true;
    X57();
  }
  else {
    a = false;
    X50();
  }
}

void X54() {
  X52();
  X57();
}

void X55() {
  flip (13/40) {
    if (a) {
      X58();
    }
    else {
      X55();
    }
  }
}

void X56() {
  flip (641/1000) {
    b = false;
    X61();
  }
  else {
    a = true;
    X53();
  }
}

void X57() {
  flip (601/1000) {
    a = true;
    X58();
  }
  else {
    b = true;
    X54();
  }
}

void X58() {
  X62();
  X62();
}

void X59() {
  X64();
  X63();
}

void X60() {
  flip (83/125) {
    a = false;
    X59();
  }
  else {
    a = false;
    X63();
  }
}

void X61() {
  flip (709/1000) {
    a = true;
    X55();
  }
  else {
    b = false;
    X57();
  }
}

void X62() {
  flip (29/50) {
    if (a) {
      X57();
    }
    else {
      X62();
    }
  }
}

void X63() {
  flip (93/125) {
    a = false;
    X61();
  }
  else {
    b = true;
    X57();
  }
}

void X64() {
  flip (707/1000) {
    b = false;
    X68();
  }
  else {
    b = false;
    X64();
  }
}

void X65() {
  flip (91/1000) {
    if (b) {
      X69();
    }
    else {
      X61();
    }
  }
}

void X66() {
  flip (717/1000) {
    if (b) {
      X60();
    }
    else {
      X65();
    }
  }
}

void X67() {
  flip (7/10) {
    a = true;
    X62();
  }
  else {
    a = false;
    X69();
  }
}

void X68() {
  X70();
  X69();
}

void X69() {
  flip (237/250) {
    if (a) {
      X70();
    }
    else {
      X67();
    }
  }
}

void X70() {
  flip (989/1000) {
    a = true;
    X71();
  }
  else {
    a = false;
    X70();
  }
}

void X71() {
  flip (9/100) {
    if (b) {
      X71();
    }
    else {
      X68();
    }
  }
}

void X72() {
  flip (397/500) {
    if (a) {
      X77();
    }
    else {
      X76();
    }
  }
}

void X73() {
  flip (177/250) {
    b = false;
    X74();
  }
  else {
    a = false;
    X69();
  }
}

void X74() {
  X77();
  X68();
}

void X75() {
  X76();
  X75();
}

void X76() {
  X79();
  X75();
}

void X77() {
  flip (399/500) {
    if (a) {
      X74();
    }
    else {
      X78();
    }
  }
}

void X78() {
  X80();
  X83();
}

void X79() {
  X73();
  X73();
}

void X80() {
  flip (127/1000) {
    if (a) {
      X82();
    }
    else {
      X81();
    }
  }
}

void X81() {
  flip (487/500) {
    if (b) {
      X85();
    }
    else {
      X78();
    }
  }
}

void X82() {
  flip (143/1000) {
    if (a) {
      X77();
    }
    else {
      X77();
    }
  }
}

void X83() {
  X85();
  X77();
}

void X84() {
  flip (759/1000) {
    if (b) {
      X88();
    }
    else {
      X79();
    }
  }
}

void X85() {
  flip (97/125) {
    b = false;
    X80();
  }
  else {
    b = false;
    X80();
  }
}

void X86() {
  flip (88/125) {
    b = true;
    X86();
  }
  else {
    b = true;
    X82();
  }
}

void X87() {
  flip (101/200) {
    b = true;
    X87();
  }
  else {
    b = true;
    X91();
  }
}

void X88() {
  X85();
  X93();
}

void X89() {
  X86();
  X83();
}

void X90() {
  flip (491/500) {
    a = true;
    X84();
  }
  else {
    a = false;
    X85();
  }
}

void X91() {
  X90();
  X89();
}

void X92() {
  flip (7/40) {
    if (a) {
      X89();
    }
    else {
      X90();
    }
  }
}

void X93() {
  flip (689/1000) {
    if (a) {
      X89();
    }
    else {
      X90();
    }
  }
}

void X94() {
  flip (159/500) {
    b = false;
    X93();
  }
  else {
    a = true;
    X93();
  }
}

void X95() {
  flip (24/25) {
    a = false;
    X98();
  }
  else {
    a = true;
    X93();
  }
}

void X96() {
  flip (131/1000) {
    if (a) {
      X96();
    }
    else {
      X98();
    }
  }
}

void X97() {
  X95();
  X1();
}

void X98() {
  X1();
  X97();
}

void X99() {
  flip (23/40) {
    b = false;
    X1();
  }
  else {
    b = true;
    X97();
  }
}
