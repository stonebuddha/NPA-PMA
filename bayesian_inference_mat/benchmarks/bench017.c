bool a;
bool b;

void X0() {
  X96();
  X95();
}

void X1() {
  X3();
  X99();
}

void X2() {
  X98();
  X0();
}

void X3() {
  X98();
  X8();
}

void X4() {
  flip (351/500) {
    a = true;
    X6();
  }
  else {
    b = false;
    X1();
  }
}

void X5() {
  flip (597/1000) {
    if (a) {
      X6();
    }
    else {
      X1();
    }
  }
}

void X6() {
  flip (83/500) {
    if (b) {
      X3();
    }
    else {
      X11();
    }
  }
}

void X7() {
  flip (397/1000) {
    if (a) {
      X10();
    }
    else {
      X3();
    }
  }
}

void X8() {
  flip (113/250) {
    if (a) {
      X5();
    }
    else {
      X7();
    }
  }
}

void X9() {
  flip (9/200) {
    a = true;
    X5();
  }
  else {
    b = true;
    X14();
  }
}

void X10() {
  flip (437/1000) {
    a = true;
    X14();
  }
  else {
    a = true;
    X15();
  }
}

void X11() {
  flip (789/1000) {
    a = true;
    X16();
  }
  else {
    a = false;
    X11();
  }
}

void X12() {
  X13();
  X15();
}

void X13() {
  flip (51/200) {
    b = false;
    X16();
  }
  else {
    a = true;
    X18();
  }
}

void X14() {
  flip (139/500) {
    a = false;
    X13();
  }
  else {
    b = true;
    X12();
  }
}

void X15() {
  X12();
  X10();
}

void X16() {
  flip (921/1000) {
    if (b) {
      X10();
    }
    else {
      X11();
    }
  }
}

void X17() {
  flip (13/50) {
    if (a) {
      X11();
    }
    else {
      X13();
    }
  }
}

void X18() {
  X12();
  X20();
}

void X19() {
  X19();
  X22();
}

void X20() {
  flip (13/25) {
    if (a) {
      X19();
    }
    else {
      X15();
    }
  }
}

void X21() {
  X24();
  X24();
}

void X22() {
  flip (539/1000) {
    if (b) {
      X16();
    }
    else {
      X23();
    }
  }
}

void X23() {
  flip (153/250) {
    if (b) {
      X18();
    }
    else {
      X21();
    }
  }
}

void X24() {
  flip (479/1000) {
    if (a) {
      X23();
    }
    else {
      X19();
    }
  }
}

void X25() {
  X29();
  X27();
}

void X26() {
  flip (8/25) {
    if (b) {
      X30();
    }
    else {
      X27();
    }
  }
}

void X27() {
  X29();
  X24();
}

void X28() {
  X25();
  X33();
}

void X29() {
  X24();
  X30();
}

void X30() {
  flip (797/1000) {
    a = false;
    X29();
  }
  else {
    a = true;
    X34();
  }
}

void X31() {
  flip (17/100) {
    if (b) {
      X34();
    }
    else {
      X29();
    }
  }
}

void X32() {
  flip (273/500) {
    a = false;
    X33();
  }
  else {
    a = false;
    X28();
  }
}

void X33() {
  X38();
  X38();
}

void X34() {
  flip (57/250) {
    a = false;
    X37();
  }
  else {
    b = true;
    X36();
  }
}

void X35() {
  X39();
  X40();
}

void X36() {
  flip (13/40) {
    a = true;
    X33();
  }
  else {
    a = true;
    X35();
  }
}

void X37() {
  X31();
  X34();
}

void X38() {
  X33();
  X43();
}

void X39() {
  flip (253/500) {
    if (b) {
      X39();
    }
    else {
      X42();
    }
  }
}

void X40() {
  flip (11/250) {
    b = false;
    X40();
  }
  else {
    b = true;
    X37();
  }
}

void X41() {
  X44();
  X43();
}

void X42() {
  flip (3/4) {
    b = false;
    X38();
  }
  else {
    b = true;
    X40();
  }
}

void X43() {
  X45();
  X38();
}

void X44() {
  flip (17/1000) {
    b = true;
    X45();
  }
  else {
    a = false;
    X45();
  }
}

void X45() {
  X49();
  X44();
}

void X46() {
  flip (313/1000) {
    if (a) {
      X51();
    }
    else {
      X50();
    }
  }
}

void X47() {
  X50();
  X44();
}

void X48() {
  flip (111/500) {
    b = false;
    X46();
  }
  else {
    b = false;
    X42();
  }
}

void X49() {
  flip (83/200) {
    a = true;
    X54();
  }
  else {
    b = false;
    X52();
  }
}

void X50() {
  flip (559/1000) {
    a = true;
    X55();
  }
  else {
    a = true;
    X51();
  }
}

void X51() {
  X50();
  X52();
}

void X52() {
  X49();
  X48();
}

void X53() {
  flip (71/100) {
    b = true;
    X54();
  }
  else {
    a = false;
    X53();
  }
}

void X54() {
  flip (3/10) {
    a = true;
    X56();
  }
  else {
    b = true;
    X54();
  }
}

void X55() {
  flip (31/100) {
    b = false;
    X49();
  }
  else {
    a = true;
    X59();
  }
}

void X56() {
  flip (293/500) {
    if (b) {
      X58();
    }
    else {
      X52();
    }
  }
}

void X57() {
  flip (339/500) {
    b = true;
    X53();
  }
  else {
    b = false;
    X62();
  }
}

void X58() {
  X55();
  X59();
}

void X59() {
  flip (769/1000) {
    if (b) {
      X62();
    }
    else {
      X57();
    }
  }
}

void X60() {
  X56();
  X60();
}

void X61() {
  X66();
  X58();
}

void X62() {
  flip (103/200) {
    a = false;
    X59();
  }
  else {
    b = true;
    X64();
  }
}

void X63() {
  flip (3/500) {
    a = true;
    X58();
  }
  else {
    b = false;
    X66();
  }
}

void X64() {
  flip (77/200) {
    if (a) {
      X66();
    }
    else {
      X58();
    }
  }
}

void X65() {
  flip (249/500) {
    b = true;
    X68();
  }
  else {
    b = true;
    X67();
  }
}

void X66() {
  X71();
  X70();
}

void X67() {
  flip (597/1000) {
    if (b) {
      X67();
    }
    else {
      X64();
    }
  }
}

void X68() {
  X63();
  X64();
}

void X69() {
  X70();
  X69();
}

void X70() {
  flip (437/500) {
    if (b) {
      X66();
    }
    else {
      X69();
    }
  }
}

void X71() {
  flip (371/500) {
    if (b) {
      X73();
    }
    else {
      X76();
    }
  }
}

void X72() {
  X73();
  X75();
}

void X73() {
  flip (43/125) {
    a = true;
    X67();
  }
  else {
    a = true;
    X69();
  }
}

void X74() {
  flip (327/500) {
    if (b) {
      X71();
    }
    else {
      X72();
    }
  }
}

void X75() {
  flip (471/500) {
    if (b) {
      X70();
    }
    else {
      X69();
    }
  }
}

void X76() {
  flip (69/250) {
    b = true;
    X79();
  }
  else {
    b = false;
    X80();
  }
}

void X77() {
  flip (393/1000) {
    if (a) {
      X73();
    }
    else {
      X79();
    }
  }
}

void X78() {
  X75();
  X77();
}

void X79() {
  flip (103/125) {
    b = true;
    X74();
  }
  else {
    a = false;
    X75();
  }
}

void X80() {
  flip (41/500) {
    a = false;
    X81();
  }
  else {
    a = true;
    X81();
  }
}

void X81() {
  X76();
  X75();
}

void X82() {
  flip (199/250) {
    b = false;
    X78();
  }
  else {
    b = false;
    X79();
  }
}

void X83() {
  X88();
  X78();
}

void X84() {
  X81();
  X78();
}

void X85() {
  X79();
  X80();
}

void X86() {
  flip (59/250) {
    a = false;
    X81();
  }
  else {
    b = true;
    X86();
  }
}

void X87() {
  X85();
  X88();
}

void X88() {
  X88();
  X89();
}

void X89() {
  flip (19/100) {
    b = false;
    X83();
  }
  else {
    a = false;
    X93();
  }
}

void X90() {
  X89();
  X86();
}

void X91() {
  X87();
  X96();
}

void X92() {
  X87();
  X92();
}

void X93() {
  flip (467/1000) {
    if (b) {
      X97();
    }
    else {
      X89();
    }
  }
}

void X94() {
  X95();
  X95();
}

void X95() {
  X95();
  X89();
}

void X96() {
  flip (52/125) {
    if (b) {
      X94();
    }
    else {
      X90();
    }
  }
}

void X97() {
  X91();
  X1();
}

void X98() {
  flip (921/1000) {
    if (b) {
      X2();
    }
    else {
      X98();
    }
  }
}

void X99() {
  flip (91/250) {
    if (a) {
      X95();
    }
    else {
      X1();
    }
  }
}
