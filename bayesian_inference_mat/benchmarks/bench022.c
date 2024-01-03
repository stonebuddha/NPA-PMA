bool a;
bool b;

void X0() {
  flip (779/1000) {
    if (a) {
      X2();
    }
    else {
      X4();
    }
  }
}

void X1() {
  flip (48/125) {
    b = false;
    X99();
  }
  else {
    b = true;
    X4();
  }
}

void X2() {
  flip (101/125) {
    if (b) {
      X5();
    }
    else {
      X0();
    }
  }
}

void X3() {
  flip (127/1000) {
    if (a) {
      X99();
    }
    else {
      X1();
    }
  }
}

void X4() {
  X5();
  X1();
}

void X5() {
  flip (769/1000) {
    if (b) {
      X8();
    }
    else {
      X5();
    }
  }
}

void X6() {
  flip (301/1000) {
    if (a) {
      X3();
    }
    else {
      X7();
    }
  }
}

void X7() {
  X7();
  X3();
}

void X8() {
  X13();
  X4();
}

void X9() {
  X13();
  X9();
}

void X10() {
  flip (791/1000) {
    if (b) {
      X9();
    }
    else {
      X14();
    }
  }
}

void X11() {
  X8();
  X11();
}

void X12() {
  flip (91/200) {
    if (b) {
      X16();
    }
    else {
      X10();
    }
  }
}

void X13() {
  flip (417/1000) {
    if (b) {
      X11();
    }
    else {
      X11();
    }
  }
}

void X14() {
  X15();
  X13();
}

void X15() {
  X12();
  X12();
}

void X16() {
  flip (87/100) {
    b = false;
    X15();
  }
  else {
    a = true;
    X13();
  }
}

void X17() {
  flip (79/1000) {
    a = true;
    X17();
  }
  else {
    a = true;
    X22();
  }
}

void X18() {
  X23();
  X16();
}

void X19() {
  flip (439/500) {
    b = false;
    X21();
  }
  else {
    a = true;
    X17();
  }
}

void X20() {
  X20();
  X17();
}

void X21() {
  X20();
  X26();
}

void X22() {
  flip (31/200) {
    if (b) {
      X27();
    }
    else {
      X23();
    }
  }
}

void X23() {
  X28();
  X27();
}

void X24() {
  flip (767/1000) {
    if (b) {
      X19();
    }
    else {
      X29();
    }
  }
}

void X25() {
  flip (363/1000) {
    if (a) {
      X24();
    }
    else {
      X29();
    }
  }
}

void X26() {
  flip (309/500) {
    b = false;
    X20();
  }
  else {
    a = false;
    X27();
  }
}

void X27() {
  flip (3/500) {
    a = true;
    X26();
  }
  else {
    b = true;
    X30();
  }
}

void X28() {
  flip (699/1000) {
    if (b) {
      X30();
    }
    else {
      X33();
    }
  }
}

void X29() {
  flip (99/1000) {
    if (b) {
      X33();
    }
    else {
      X28();
    }
  }
}

void X30() {
  X25();
  X30();
}

void X31() {
  X29();
  X35();
}

void X32() {
  flip (343/1000) {
    if (b) {
      X27();
    }
    else {
      X27();
    }
  }
}

void X33() {
  X36();
  X34();
}

void X34() {
  flip (229/1000) {
    b = false;
    X29();
  }
  else {
    b = false;
    X38();
  }
}

void X35() {
  flip (41/1000) {
    b = true;
    X34();
  }
  else {
    a = false;
    X32();
  }
}

void X36() {
  flip (857/1000) {
    if (a) {
      X41();
    }
    else {
      X36();
    }
  }
}

void X37() {
  X35();
  X37();
}

void X38() {
  flip (199/250) {
    if (b) {
      X36();
    }
    else {
      X37();
    }
  }
}

void X39() {
  flip (193/500) {
    b = false;
    X35();
  }
  else {
    a = false;
    X42();
  }
}

void X40() {
  flip (363/1000) {
    if (b) {
      X37();
    }
    else {
      X34();
    }
  }
}

void X41() {
  flip (593/1000) {
    b = false;
    X36();
  }
  else {
    a = false;
    X40();
  }
}

void X42() {
  flip (721/1000) {
    b = false;
    X43();
  }
  else {
    b = false;
    X47();
  }
}

void X43() {
  flip (11/250) {
    a = false;
    X38();
  }
  else {
    a = true;
    X40();
  }
}

void X44() {
  flip (139/200) {
    b = true;
    X49();
  }
  else {
    a = false;
    X43();
  }
}

void X45() {
  flip (117/125) {
    b = true;
    X46();
  }
  else {
    a = false;
    X49();
  }
}

void X46() {
  X46();
  X49();
}

void X47() {
  X45();
  X47();
}

void X48() {
  X45();
  X43();
}

void X49() {
  flip (363/1000) {
    if (a) {
      X50();
    }
    else {
      X49();
    }
  }
}

void X50() {
  flip (114/125) {
    b = false;
    X47();
  }
  else {
    a = false;
    X51();
  }
}

void X51() {
  X49();
  X52();
}

void X52() {
  flip (287/500) {
    if (b) {
      X57();
    }
    else {
      X52();
    }
  }
}

void X53() {
  X47();
  X51();
}

void X54() {
  flip (499/500) {
    a = true;
    X53();
  }
  else {
    a = false;
    X56();
  }
}

void X55() {
  X57();
  X55();
}

void X56() {
  flip (391/500) {
    if (a) {
      X53();
    }
    else {
      X54();
    }
  }
}

void X57() {
  flip (329/1000) {
    if (a) {
      X55();
    }
    else {
      X62();
    }
  }
}

void X58() {
  X52();
  X56();
}

void X59() {
  flip (491/500) {
    if (a) {
      X54();
    }
    else {
      X57();
    }
  }
}

void X60() {
  flip (3/50) {
    if (b) {
      X56();
    }
    else {
      X56();
    }
  }
}

void X61() {
  X64();
  X55();
}

void X62() {
  flip (489/500) {
    b = true;
    X58();
  }
  else {
    a = false;
    X59();
  }
}

void X63() {
  flip (83/1000) {
    if (b) {
      X61();
    }
    else {
      X68();
    }
  }
}

void X64() {
  flip (571/1000) {
    a = false;
    X60();
  }
  else {
    a = false;
    X65();
  }
}

void X65() {
  flip (79/100) {
    if (a) {
      X68();
    }
    else {
      X61();
    }
  }
}

void X66() {
  flip (443/1000) {
    a = false;
    X68();
  }
  else {
    a = false;
    X69();
  }
}

void X67() {
  flip (51/125) {
    if (a) {
      X62();
    }
    else {
      X72();
    }
  }
}

void X68() {
  flip (48/125) {
    b = false;
    X73();
  }
  else {
    a = false;
    X73();
  }
}

void X69() {
  flip (66/125) {
    a = true;
    X66();
  }
  else {
    a = true;
    X69();
  }
}

void X70() {
  flip (17/25) {
    if (a) {
      X71();
    }
    else {
      X75();
    }
  }
}

void X71() {
  flip (21/500) {
    b = true;
    X68();
  }
  else {
    a = false;
    X73();
  }
}

void X72() {
  flip (81/200) {
    if (a) {
      X68();
    }
    else {
      X71();
    }
  }
}

void X73() {
  flip (331/500) {
    b = true;
    X69();
  }
  else {
    b = true;
    X73();
  }
}

void X74() {
  flip (247/250) {
    b = true;
    X79();
  }
  else {
    b = false;
    X78();
  }
}

void X75() {
  X74();
  X69();
}

void X76() {
  X76();
  X70();
}

void X77() {
  X81();
  X79();
}

void X78() {
  flip (74/125) {
    b = false;
    X73();
  }
  else {
    b = true;
    X73();
  }
}

void X79() {
  flip (367/500) {
    b = true;
    X76();
  }
  else {
    b = true;
    X76();
  }
}

void X80() {
  X78();
  X74();
}

void X81() {
  X80();
  X86();
}

void X82() {
  X85();
  X76();
}

void X83() {
  flip (61/100) {
    a = true;
    X85();
  }
  else {
    b = true;
    X84();
  }
}

void X84() {
  X79();
  X80();
}

void X85() {
  flip (53/100) {
    a = false;
    X88();
  }
  else {
    b = false;
    X80();
  }
}

void X86() {
  flip (803/1000) {
    b = true;
    X85();
  }
  else {
    a = false;
    X83();
  }
}

void X87() {
  flip (39/100) {
    a = false;
    X89();
  }
  else {
    b = false;
    X88();
  }
}

void X88() {
  X86();
  X91();
}

void X89() {
  flip (249/500) {
    if (a) {
      X93();
    }
    else {
      X94();
    }
  }
}

void X90() {
  flip (7/20) {
    if (a) {
      X88();
    }
    else {
      X94();
    }
  }
}

void X91() {
  flip (23/40) {
    a = true;
    X87();
  }
  else {
    b = false;
    X90();
  }
}

void X92() {
  flip (321/500) {
    b = false;
    X94();
  }
  else {
    b = false;
    X87();
  }
}

void X93() {
  X92();
  X98();
}

void X94() {
  X97();
  X93();
}

void X95() {
  flip (831/1000) {
    b = true;
    X91();
  }
  else {
    b = true;
    X93();
  }
}

void X96() {
  flip (877/1000) {
    b = false;
    X93();
  }
  else {
    b = true;
    X90();
  }
}

void X97() {
  flip (147/1000) {
    b = false;
    X2();
  }
  else {
    b = false;
    X1();
  }
}

void X98() {
  flip (29/1000) {
    if (a) {
      X96();
    }
    else {
      X98();
    }
  }
}

void X99() {
  X3();
  X0();
}
