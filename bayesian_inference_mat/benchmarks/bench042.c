bool a;
bool b;

void X0() {
  flip (88/125) {
    if (a) {
      X5();
    }
    else {
      X0();
    }
  }
}

void X1() {
  X4();
  X4();
}

void X2() {
  flip (221/1000) {
    a = true;
    X1();
  }
  else {
    b = false;
    X99();
  }
}

void X3() {
  X98();
  X6();
}

void X4() {
  X0();
  X6();
}

void X5() {
  flip (117/250) {
    if (b) {
      X7();
    }
    else {
      X0();
    }
  }
}

void X6() {
  X5();
  X1();
}

void X7() {
  flip (33/40) {
    if (a) {
      X2();
    }
    else {
      X9();
    }
  }
}

void X8() {
  flip (409/500) {
    a = true;
    X6();
  }
  else {
    b = false;
    X6();
  }
}

void X9() {
  flip (333/500) {
    a = false;
    X14();
  }
  else {
    b = false;
    X14();
  }
}

void X10() {
  flip (11/25) {
    if (b) {
      X5();
    }
    else {
      X4();
    }
  }
}

void X11() {
  X5();
  X16();
}

void X12() {
  flip (7/500) {
    if (b) {
      X11();
    }
    else {
      X9();
    }
  }
}

void X13() {
  flip (137/200) {
    a = false;
    X16();
  }
  else {
    b = true;
    X10();
  }
}

void X14() {
  X11();
  X11();
}

void X15() {
  flip (49/200) {
    b = true;
    X20();
  }
  else {
    a = true;
    X20();
  }
}

void X16() {
  flip (843/1000) {
    if (b) {
      X13();
    }
    else {
      X14();
    }
  }
}

void X17() {
  X11();
  X18();
}

void X18() {
  X15();
  X20();
}

void X19() {
  X23();
  X17();
}

void X20() {
  X19();
  X24();
}

void X21() {
  X16();
  X20();
}

void X22() {
  flip (377/1000) {
    b = false;
    X21();
  }
  else {
    b = true;
    X16();
  }
}

void X23() {
  flip (357/1000) {
    if (b) {
      X20();
    }
    else {
      X28();
    }
  }
}

void X24() {
  flip (3/100) {
    b = true;
    X19();
  }
  else {
    a = false;
    X24();
  }
}

void X25() {
  X27();
  X26();
}

void X26() {
  flip (339/1000) {
    if (b) {
      X28();
    }
    else {
      X27();
    }
  }
}

void X27() {
  flip (68/125) {
    if (b) {
      X27();
    }
    else {
      X23();
    }
  }
}

void X28() {
  flip (63/200) {
    b = false;
    X30();
  }
  else {
    b = true;
    X33();
  }
}

void X29() {
  flip (17/250) {
    b = true;
    X34();
  }
  else {
    a = false;
    X30();
  }
}

void X30() {
  flip (931/1000) {
    if (a) {
      X33();
    }
    else {
      X24();
    }
  }
}

void X31() {
  X36();
  X31();
}

void X32() {
  X32();
  X33();
}

void X33() {
  flip (299/500) {
    b = false;
    X37();
  }
  else {
    b = false;
    X27();
  }
}

void X34() {
  flip (27/40) {
    if (b) {
      X36();
    }
    else {
      X31();
    }
  }
}

void X35() {
  flip (211/250) {
    b = false;
    X31();
  }
  else {
    b = true;
    X34();
  }
}

void X36() {
  flip (347/500) {
    a = false;
    X34();
  }
  else {
    a = false;
    X34();
  }
}

void X37() {
  flip (307/500) {
    if (b) {
      X36();
    }
    else {
      X34();
    }
  }
}

void X38() {
  X36();
  X37();
}

void X39() {
  flip (779/1000) {
    if (a) {
      X42();
    }
    else {
      X41();
    }
  }
}

void X40() {
  flip (861/1000) {
    if (a) {
      X42();
    }
    else {
      X45();
    }
  }
}

void X41() {
  flip (13/200) {
    if (a) {
      X41();
    }
    else {
      X46();
    }
  }
}

void X42() {
  flip (11/100) {
    if (b) {
      X45();
    }
    else {
      X40();
    }
  }
}

void X43() {
  X47();
  X37();
}

void X44() {
  flip (104/125) {
    if (a) {
      X41();
    }
    else {
      X46();
    }
  }
}

void X45() {
  flip (381/500) {
    if (a) {
      X41();
    }
    else {
      X43();
    }
  }
}

void X46() {
  flip (32/125) {
    if (a) {
      X43();
    }
    else {
      X43();
    }
  }
}

void X47() {
  flip (1/25) {
    if (a) {
      X48();
    }
    else {
      X47();
    }
  }
}

void X48() {
  X51();
  X43();
}

void X49() {
  X53();
  X45();
}

void X50() {
  flip (57/500) {
    if (b) {
      X49();
    }
    else {
      X46();
    }
  }
}

void X51() {
  flip (104/125) {
    a = false;
    X49();
  }
  else {
    b = false;
    X49();
  }
}

void X52() {
  flip (591/1000) {
    if (a) {
      X56();
    }
    else {
      X53();
    }
  }
}

void X53() {
  flip (173/200) {
    a = false;
    X52();
  }
  else {
    b = false;
    X52();
  }
}

void X54() {
  X48();
  X52();
}

void X55() {
  X58();
  X53();
}

void X56() {
  X51();
  X51();
}

void X57() {
  flip (779/1000) {
    a = true;
    X54();
  }
  else {
    a = true;
    X53();
  }
}

void X58() {
  X52();
  X61();
}

void X59() {
  flip (3/125) {
    if (b) {
      X63();
    }
    else {
      X58();
    }
  }
}

void X60() {
  flip (573/1000) {
    if (b) {
      X55();
    }
    else {
      X54();
    }
  }
}

void X61() {
  flip (69/125) {
    a = true;
    X55();
  }
  else {
    b = true;
    X63();
  }
}

void X62() {
  flip (491/1000) {
    if (a) {
      X65();
    }
    else {
      X56();
    }
  }
}

void X63() {
  flip (44/125) {
    if (a) {
      X59();
    }
    else {
      X63();
    }
  }
}

void X64() {
  flip (903/1000) {
    if (a) {
      X68();
    }
    else {
      X60();
    }
  }
}

void X65() {
  flip (1/50) {
    b = true;
    X62();
  }
  else {
    b = false;
    X68();
  }
}

void X66() {
  flip (119/125) {
    if (a) {
      X60();
    }
    else {
      X62();
    }
  }
}

void X67() {
  flip (247/250) {
    a = false;
    X67();
  }
  else {
    a = false;
    X72();
  }
}

void X68() {
  flip (163/250) {
    a = false;
    X71();
  }
  else {
    b = false;
    X65();
  }
}

void X69() {
  flip (199/1000) {
    if (b) {
      X64();
    }
    else {
      X64();
    }
  }
}

void X70() {
  flip (359/1000) {
    b = false;
    X66();
  }
  else {
    b = true;
    X65();
  }
}

void X71() {
  X72();
  X67();
}

void X72() {
  flip (53/125) {
    a = true;
    X74();
  }
  else {
    b = false;
    X74();
  }
}

void X73() {
  flip (189/250) {
    if (a) {
      X68();
    }
    else {
      X73();
    }
  }
}

void X74() {
  flip (993/1000) {
    if (b) {
      X74();
    }
    else {
      X78();
    }
  }
}

void X75() {
  flip (82/125) {
    if (b) {
      X74();
    }
    else {
      X78();
    }
  }
}

void X76() {
  flip (71/100) {
    b = true;
    X81();
  }
  else {
    a = false;
    X70();
  }
}

void X77() {
  flip (79/1000) {
    b = true;
    X77();
  }
  else {
    a = false;
    X77();
  }
}

void X78() {
  X83();
  X73();
}

void X79() {
  flip (82/125) {
    b = true;
    X80();
  }
  else {
    a = false;
    X81();
  }
}

void X80() {
  X85();
  X75();
}

void X81() {
  flip (419/500) {
    a = true;
    X79();
  }
  else {
    a = true;
    X75();
  }
}

void X82() {
  X76();
  X76();
}

void X83() {
  flip (909/1000) {
    a = false;
    X88();
  }
  else {
    a = false;
    X83();
  }
}

void X84() {
  flip (333/1000) {
    if (a) {
      X80();
    }
    else {
      X82();
    }
  }
}

void X85() {
  flip (273/500) {
    b = true;
    X83();
  }
  else {
    b = true;
    X83();
  }
}

void X86() {
  X85();
  X86();
}

void X87() {
  flip (249/500) {
    if (a) {
      X85();
    }
    else {
      X85();
    }
  }
}

void X88() {
  X82();
  X87();
}

void X89() {
  X88();
  X89();
}

void X90() {
  flip (27/500) {
    a = false;
    X92();
  }
  else {
    a = true;
    X84();
  }
}

void X91() {
  X91();
  X87();
}

void X92() {
  flip (13/125) {
    if (b) {
      X95();
    }
    else {
      X94();
    }
  }
}

void X93() {
  flip (799/1000) {
    if (a) {
      X92();
    }
    else {
      X96();
    }
  }
}

void X94() {
  X95();
  X90();
}

void X95() {
  flip (1/2) {
    a = true;
    X90();
  }
  else {
    b = true;
    X0();
  }
}

void X96() {
  flip (349/500) {
    if (a) {
      X91();
    }
    else {
      X99();
    }
  }
}

void X97() {
  flip (869/1000) {
    if (b) {
      X98();
    }
    else {
      X95();
    }
  }
}

void X98() {
  flip (72/125) {
    a = true;
    X95();
  }
  else {
    b = true;
    X1();
  }
}

void X99() {
  flip (167/500) {
    b = false;
    X93();
  }
  else {
    a = false;
    X99();
  }
}
