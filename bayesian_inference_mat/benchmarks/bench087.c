bool a;
bool b;

void X0() {
  X5();
  X94();
}

void X1() {
  flip (259/1000) {
    a = false;
    X0();
  }
  else {
    b = false;
    X98();
  }
}

void X2() {
  X4();
  X0();
}

void X3() {
  X8();
  X0();
}

void X4() {
  X1();
  X5();
}

void X5() {
  flip (517/1000) {
    if (a) {
      X10();
    }
    else {
      X4();
    }
  }
}

void X6() {
  flip (42/125) {
    if (a) {
      X2();
    }
    else {
      X4();
    }
  }
}

void X7() {
  flip (493/1000) {
    if (a) {
      X7();
    }
    else {
      X3();
    }
  }
}

void X8() {
  flip (26/125) {
    if (a) {
      X10();
    }
    else {
      X9();
    }
  }
}

void X9() {
  X13();
  X6();
}

void X10() {
  flip (79/250) {
    if (b) {
      X8();
    }
    else {
      X9();
    }
  }
}

void X11() {
  flip (21/25) {
    a = true;
    X12();
  }
  else {
    b = false;
    X5();
  }
}

void X12() {
  flip (49/100) {
    a = true;
    X6();
  }
  else {
    b = true;
    X17();
  }
}

void X13() {
  X18();
  X8();
}

void X14() {
  flip (297/1000) {
    a = true;
    X9();
  }
  else {
    a = false;
    X11();
  }
}

void X15() {
  flip (309/1000) {
    if (a) {
      X10();
    }
    else {
      X12();
    }
  }
}

void X16() {
  flip (367/500) {
    if (b) {
      X15();
    }
    else {
      X13();
    }
  }
}

void X17() {
  X22();
  X15();
}

void X18() {
  flip (163/500) {
    a = true;
    X17();
  }
  else {
    a = true;
    X17();
  }
}

void X19() {
  flip (1/100) {
    if (b) {
      X14();
    }
    else {
      X13();
    }
  }
}

void X20() {
  flip (1/20) {
    b = false;
    X23();
  }
  else {
    a = true;
    X18();
  }
}

void X21() {
  flip (111/200) {
    b = false;
    X16();
  }
  else {
    b = false;
    X17();
  }
}

void X22() {
  X17();
  X23();
}

void X23() {
  flip (101/125) {
    a = false;
    X19();
  }
  else {
    a = true;
    X25();
  }
}

void X24() {
  flip (237/250) {
    b = true;
    X20();
  }
  else {
    b = false;
    X25();
  }
}

void X25() {
  flip (23/40) {
    b = true;
    X23();
  }
  else {
    a = true;
    X19();
  }
}

void X26() {
  flip (117/500) {
    a = true;
    X20();
  }
  else {
    a = false;
    X26();
  }
}

void X27() {
  flip (199/200) {
    if (b) {
      X30();
    }
    else {
      X26();
    }
  }
}

void X28() {
  flip (189/250) {
    if (b) {
      X27();
    }
    else {
      X29();
    }
  }
}

void X29() {
  X25();
  X29();
}

void X30() {
  X25();
  X31();
}

void X31() {
  flip (253/1000) {
    a = false;
    X31();
  }
  else {
    a = false;
    X35();
  }
}

void X32() {
  flip (7/500) {
    if (b) {
      X36();
    }
    else {
      X29();
    }
  }
}

void X33() {
  flip (393/1000) {
    if (b) {
      X32();
    }
    else {
      X35();
    }
  }
}

void X34() {
  X34();
  X31();
}

void X35() {
  flip (951/1000) {
    b = true;
    X30();
  }
  else {
    b = false;
    X34();
  }
}

void X36() {
  flip (197/500) {
    a = true;
    X37();
  }
  else {
    a = false;
    X40();
  }
}

void X37() {
  X40();
  X36();
}

void X38() {
  flip (707/1000) {
    a = true;
    X37();
  }
  else {
    b = true;
    X37();
  }
}

void X39() {
  flip (283/500) {
    b = false;
    X43();
  }
  else {
    a = false;
    X37();
  }
}

void X40() {
  flip (33/250) {
    if (b) {
      X37();
    }
    else {
      X45();
    }
  }
}

void X41() {
  flip (43/250) {
    b = false;
    X45();
  }
  else {
    b = false;
    X37();
  }
}

void X42() {
  flip (427/500) {
    if (a) {
      X44();
    }
    else {
      X41();
    }
  }
}

void X43() {
  flip (41/100) {
    a = true;
    X48();
  }
  else {
    a = false;
    X45();
  }
}

void X44() {
  X49();
  X49();
}

void X45() {
  X44();
  X49();
}

void X46() {
  flip (123/250) {
    b = true;
    X50();
  }
  else {
    b = true;
    X49();
  }
}

void X47() {
  flip (189/1000) {
    a = true;
    X52();
  }
  else {
    a = true;
    X48();
  }
}

void X48() {
  flip (929/1000) {
    if (a) {
      X44();
    }
    else {
      X43();
    }
  }
}

void X49() {
  X52();
  X54();
}

void X50() {
  flip (369/500) {
    if (a) {
      X49();
    }
    else {
      X47();
    }
  }
}

void X51() {
  flip (56/125) {
    a = false;
    X46();
  }
  else {
    b = true;
    X54();
  }
}

void X52() {
  X56();
  X46();
}

void X53() {
  flip (317/1000) {
    if (b) {
      X53();
    }
    else {
      X53();
    }
  }
}

void X54() {
  flip (919/1000) {
    b = false;
    X57();
  }
  else {
    b = true;
    X58();
  }
}

void X55() {
  X51();
  X57();
}

void X56() {
  flip (29/125) {
    if (b) {
      X61();
    }
    else {
      X50();
    }
  }
}

void X57() {
  flip (259/500) {
    b = false;
    X58();
  }
  else {
    b = false;
    X52();
  }
}

void X58() {
  flip (563/1000) {
    a = true;
    X57();
  }
  else {
    a = true;
    X62();
  }
}

void X59() {
  X56();
  X64();
}

void X60() {
  flip (17/100) {
    b = true;
    X64();
  }
  else {
    b = true;
    X64();
  }
}

void X61() {
  flip (799/1000) {
    b = false;
    X60();
  }
  else {
    a = true;
    X55();
  }
}

void X62() {
  X60();
  X60();
}

void X63() {
  flip (409/1000) {
    a = true;
    X64();
  }
  else {
    a = true;
    X59();
  }
}

void X64() {
  flip (883/1000) {
    a = false;
    X65();
  }
  else {
    b = false;
    X68();
  }
}

void X65() {
  X65();
  X61();
}

void X66() {
  X61();
  X62();
}

void X67() {
  X66();
  X66();
}

void X68() {
  flip (7/8) {
    if (a) {
      X73();
    }
    else {
      X64();
    }
  }
}

void X69() {
  flip (247/250) {
    if (a) {
      X72();
    }
    else {
      X64();
    }
  }
}

void X70() {
  flip (51/125) {
    b = true;
    X75();
  }
  else {
    a = true;
    X71();
  }
}

void X71() {
  X71();
  X75();
}

void X72() {
  flip (21/100) {
    b = false;
    X67();
  }
  else {
    a = true;
    X77();
  }
}

void X73() {
  flip (27/200) {
    if (b) {
      X73();
    }
    else {
      X76();
    }
  }
}

void X74() {
  X69();
  X68();
}

void X75() {
  flip (341/1000) {
    if (b) {
      X71();
    }
    else {
      X73();
    }
  }
}

void X76() {
  X71();
  X77();
}

void X77() {
  flip (353/1000) {
    if (b) {
      X75();
    }
    else {
      X77();
    }
  }
}

void X78() {
  flip (209/1000) {
    if (b) {
      X78();
    }
    else {
      X73();
    }
  }
}

void X79() {
  flip (193/200) {
    b = false;
    X80();
  }
  else {
    a = false;
    X79();
  }
}

void X80() {
  flip (191/500) {
    b = true;
    X74();
  }
  else {
    a = true;
    X75();
  }
}

void X81() {
  X86();
  X86();
}

void X82() {
  X81();
  X78();
}

void X83() {
  flip (819/1000) {
    if (a) {
      X85();
    }
    else {
      X79();
    }
  }
}

void X84() {
  X82();
  X83();
}

void X85() {
  flip (11/40) {
    if (b) {
      X79();
    }
    else {
      X81();
    }
  }
}

void X86() {
  flip (289/500) {
    b = true;
    X91();
  }
  else {
    b = true;
    X83();
  }
}

void X87() {
  flip (23/200) {
    b = true;
    X89();
  }
  else {
    a = false;
    X85();
  }
}

void X88() {
  flip (413/1000) {
    if (a) {
      X92();
    }
    else {
      X85();
    }
  }
}

void X89() {
  X90();
  X87();
}

void X90() {
  X84();
  X91();
}

void X91() {
  flip (29/250) {
    b = false;
    X85();
  }
  else {
    a = true;
    X95();
  }
}

void X92() {
  X90();
  X86();
}

void X93() {
  flip (3/200) {
    if (b) {
      X98();
    }
    else {
      X93();
    }
  }
}

void X94() {
  flip (49/250) {
    b = true;
    X90();
  }
  else {
    a = false;
    X93();
  }
}

void X95() {
  X0();
  X99();
}

void X96() {
  X94();
  X95();
}

void X97() {
  flip (337/1000) {
    b = true;
    X0();
  }
  else {
    b = false;
    X95();
  }
}

void X98() {
  flip (77/250) {
    if (b) {
      X96();
    }
    else {
      X97();
    }
  }
}

void X99() {
  flip (293/500) {
    b = true;
    X93();
  }
  else {
    b = false;
    X99();
  }
}
