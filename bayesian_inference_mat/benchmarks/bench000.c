bool a;
bool b;

void X0() {
  flip (269/500) {
    if (a) {
      X5();
    }
    else {
      X1();
    }
  }
}

void X1() {
  X3();
  X98();
}

void X2() {
  X1();
  X3();
}

void X3() {
  X2();
  X1();
}

void X4() {
  X99();
  X4();
}

void X5() {
  flip (89/100) {
    if (b) {
      X5();
    }
    else {
      X7();
    }
  }
}

void X6() {
  flip (567/1000) {
    b = true;
    X11();
  }
  else {
    a = false;
    X3();
  }
}

void X7() {
  flip (73/200) {
    if (a) {
      X1();
    }
    else {
      X4();
    }
  }
}

void X8() {
  flip (111/500) {
    a = false;
    X5();
  }
  else {
    b = true;
    X8();
  }
}

void X9() {
  flip (24/125) {
    a = false;
    X10();
  }
  else {
    a = true;
    X3();
  }
}

void X10() {
  flip (377/1000) {
    b = true;
    X13();
  }
  else {
    a = false;
    X7();
  }
}

void X11() {
  flip (969/1000) {
    b = true;
    X11();
  }
  else {
    a = true;
    X16();
  }
}

void X12() {
  flip (251/500) {
    a = true;
    X9();
  }
  else {
    a = false;
    X10();
  }
}

void X13() {
  flip (2/25) {
    b = false;
    X14();
  }
  else {
    b = false;
    X18();
  }
}

void X14() {
  flip (189/1000) {
    b = true;
    X9();
  }
  else {
    b = false;
    X9();
  }
}

void X15() {
  flip (217/250) {
    a = true;
    X20();
  }
  else {
    b = true;
    X18();
  }
}

void X16() {
  X17();
  X11();
}

void X17() {
  X18();
  X15();
}

void X18() {
  flip (491/500) {
    if (a) {
      X19();
    }
    else {
      X13();
    }
  }
}

void X19() {
  X21();
  X15();
}

void X20() {
  flip (993/1000) {
    if (b) {
      X25();
    }
    else {
      X19();
    }
  }
}

void X21() {
  X21();
  X26();
}

void X22() {
  flip (511/1000) {
    a = false;
    X24();
  }
  else {
    b = true;
    X27();
  }
}

void X23() {
  flip (19/25) {
    if (b) {
      X18();
    }
    else {
      X19();
    }
  }
}

void X24() {
  X20();
  X22();
}

void X25() {
  flip (589/1000) {
    if (a) {
      X19();
    }
    else {
      X26();
    }
  }
}

void X26() {
  X30();
  X24();
}

void X27() {
  X27();
  X25();
}

void X28() {
  flip (1/20) {
    if (b) {
      X32();
    }
    else {
      X27();
    }
  }
}

void X29() {
  flip (103/250) {
    if (b) {
      X31();
    }
    else {
      X33();
    }
  }
}

void X30() {
  X25();
  X32();
}

void X31() {
  X28();
  X27();
}

void X32() {
  X36();
  X36();
}

void X33() {
  flip (29/100) {
    a = true;
    X38();
  }
  else {
    b = true;
    X27();
  }
}

void X34() {
  flip (661/1000) {
    if (b) {
      X33();
    }
    else {
      X31();
    }
  }
}

void X35() {
  X36();
  X33();
}

void X36() {
  X36();
  X30();
}

void X37() {
  flip (114/125) {
    if (b) {
      X32();
    }
    else {
      X35();
    }
  }
}

void X38() {
  X33();
  X37();
}

void X39() {
  flip (43/125) {
    if (a) {
      X41();
    }
    else {
      X39();
    }
  }
}

void X40() {
  flip (493/1000) {
    a = true;
    X35();
  }
  else {
    a = true;
    X37();
  }
}

void X41() {
  flip (439/1000) {
    b = true;
    X42();
  }
  else {
    a = false;
    X36();
  }
}

void X42() {
  X44();
  X39();
}

void X43() {
  flip (97/250) {
    a = false;
    X45();
  }
  else {
    b = false;
    X41();
  }
}

void X44() {
  X49();
  X47();
}

void X45() {
  flip (813/1000) {
    if (a) {
      X49();
    }
    else {
      X42();
    }
  }
}

void X46() {
  flip (177/500) {
    a = false;
    X49();
  }
  else {
    b = true;
    X41();
  }
}

void X47() {
  X42();
  X48();
}

void X48() {
  flip (521/1000) {
    a = false;
    X47();
  }
  else {
    b = true;
    X47();
  }
}

void X49() {
  X47();
  X46();
}

void X50() {
  X49();
  X46();
}

void X51() {
  X45();
  X54();
}

void X52() {
  flip (613/1000) {
    b = true;
    X51();
  }
  else {
    a = true;
    X48();
  }
}

void X53() {
  flip (421/1000) {
    b = true;
    X56();
  }
  else {
    a = false;
    X55();
  }
}

void X54() {
  flip (963/1000) {
    a = true;
    X50();
  }
  else {
    b = true;
    X52();
  }
}

void X55() {
  flip (371/500) {
    b = true;
    X54();
  }
  else {
    a = false;
    X50();
  }
}

void X56() {
  X61();
  X59();
}

void X57() {
  flip (219/500) {
    b = false;
    X55();
  }
  else {
    b = true;
    X53();
  }
}

void X58() {
  flip (189/250) {
    a = false;
    X60();
  }
  else {
    a = true;
    X63();
  }
}

void X59() {
  flip (7/50) {
    a = false;
    X56();
  }
  else {
    b = false;
    X57();
  }
}

void X60() {
  X59();
  X65();
}

void X61() {
  X64();
  X57();
}

void X62() {
  flip (477/500) {
    if (b) {
      X57();
    }
    else {
      X57();
    }
  }
}

void X63() {
  flip (71/250) {
    if (a) {
      X57();
    }
    else {
      X59();
    }
  }
}

void X64() {
  X68();
  X68();
}

void X65() {
  X67();
  X69();
}

void X66() {
  X65();
  X70();
}

void X67() {
  flip (29/125) {
    a = false;
    X61();
  }
  else {
    b = false;
    X68();
  }
}

void X68() {
  flip (31/50) {
    if (a) {
      X64();
    }
    else {
      X73();
    }
  }
}

void X69() {
  flip (557/1000) {
    if (b) {
      X63();
    }
    else {
      X67();
    }
  }
}

void X70() {
  flip (633/1000) {
    if (a) {
      X68();
    }
    else {
      X67();
    }
  }
}

void X71() {
  flip (443/1000) {
    if (a) {
      X75();
    }
    else {
      X68();
    }
  }
}

void X72() {
  X70();
  X70();
}

void X73() {
  flip (491/500) {
    if (a) {
      X76();
    }
    else {
      X76();
    }
  }
}

void X74() {
  flip (64/125) {
    a = true;
    X68();
  }
  else {
    b = false;
    X70();
  }
}

void X75() {
  flip (657/1000) {
    b = true;
    X71();
  }
  else {
    b = false;
    X72();
  }
}

void X76() {
  flip (471/500) {
    a = false;
    X81();
  }
  else {
    a = false;
    X80();
  }
}

void X77() {
  X76();
  X79();
}

void X78() {
  X77();
  X82();
}

void X79() {
  X77();
  X73();
}

void X80() {
  flip (527/1000) {
    if (a) {
      X75();
    }
    else {
      X79();
    }
  }
}

void X81() {
  X81();
  X86();
}

void X82() {
  X84();
  X83();
}

void X83() {
  X88();
  X82();
}

void X84() {
  flip (127/500) {
    if (b) {
      X86();
    }
    else {
      X81();
    }
  }
}

void X85() {
  X84();
  X81();
}

void X86() {
  X82();
  X85();
}

void X87() {
  X82();
  X91();
}

void X88() {
  X88();
  X93();
}

void X89() {
  flip (33/125) {
    if (a) {
      X88();
    }
    else {
      X90();
    }
  }
}

void X90() {
  flip (67/200) {
    if (b) {
      X91();
    }
    else {
      X85();
    }
  }
}

void X91() {
  X89();
  X89();
}

void X92() {
  flip (557/1000) {
    if (b) {
      X96();
    }
    else {
      X89();
    }
  }
}

void X93() {
  X88();
  X95();
}

void X94() {
  flip (919/1000) {
    a = false;
    X92();
  }
  else {
    b = true;
    X91();
  }
}

void X95() {
  flip (29/125) {
    if (a) {
      X91();
    }
    else {
      X94();
    }
  }
}

void X96() {
  flip (16/25) {
    a = false;
    X97();
  }
  else {
    b = false;
    X96();
  }
}

void X97() {
  flip (229/500) {
    b = true;
    X2();
  }
  else {
    b = true;
    X99();
  }
}

void X98() {
  flip (823/1000) {
    if (a) {
      X98();
    }
    else {
      X98();
    }
  }
}

void X99() {
  flip (3/25) {
    if (b) {
      X0();
    }
    else {
      X99();
    }
  }
}
