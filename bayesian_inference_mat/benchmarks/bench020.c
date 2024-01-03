bool a;
bool b;

void X0() {
  flip (63/100) {
    if (a) {
      X99();
    }
    else {
      X1();
    }
  }
}

void X1() {
  flip (189/1000) {
    if (a) {
      X2();
    }
    else {
      X98();
    }
  }
}

void X2() {
  flip (7/125) {
    if (a) {
      X2();
    }
    else {
      X5();
    }
  }
}

void X3() {
  X99();
  X8();
}

void X4() {
  X8();
  X2();
}

void X5() {
  flip (13/250) {
    b = false;
    X1();
  }
  else {
    b = false;
    X9();
  }
}

void X6() {
  flip (411/1000) {
    b = true;
    X8();
  }
  else {
    b = false;
    X7();
  }
}

void X7() {
  flip (173/500) {
    a = true;
    X2();
  }
  else {
    b = true;
    X4();
  }
}

void X8() {
  X9();
  X10();
}

void X9() {
  X10();
  X6();
}

void X10() {
  X14();
  X8();
}

void X11() {
  X14();
  X7();
}

void X12() {
  flip (41/1000) {
    if (a) {
      X16();
    }
    else {
      X6();
    }
  }
}

void X13() {
  flip (211/250) {
    b = true;
    X14();
  }
  else {
    a = true;
    X7();
  }
}

void X14() {
  X19();
  X13();
}

void X15() {
  flip (9/125) {
    a = true;
    X17();
  }
  else {
    a = true;
    X9();
  }
}

void X16() {
  flip (397/1000) {
    b = false;
    X15();
  }
  else {
    b = false;
    X13();
  }
}

void X17() {
  flip (107/125) {
    if (b) {
      X20();
    }
    else {
      X19();
    }
  }
}

void X18() {
  flip (13/25) {
    if (b) {
      X17();
    }
    else {
      X20();
    }
  }
}

void X19() {
  X18();
  X22();
}

void X20() {
  flip (112/125) {
    if (b) {
      X20();
    }
    else {
      X19();
    }
  }
}

void X21() {
  flip (427/500) {
    if (a) {
      X26();
    }
    else {
      X26();
    }
  }
}

void X22() {
  flip (22/25) {
    if (b) {
      X26();
    }
    else {
      X24();
    }
  }
}

void X23() {
  flip (613/1000) {
    a = false;
    X21();
  }
  else {
    b = true;
    X23();
  }
}

void X24() {
  X23();
  X27();
}

void X25() {
  flip (221/1000) {
    b = true;
    X21();
  }
  else {
    b = true;
    X30();
  }
}

void X26() {
  flip (33/50) {
    b = true;
    X25();
  }
  else {
    b = false;
    X21();
  }
}

void X27() {
  X21();
  X32();
}

void X28() {
  flip (131/200) {
    if (b) {
      X23();
    }
    else {
      X27();
    }
  }
}

void X29() {
  flip (161/500) {
    b = false;
    X29();
  }
  else {
    b = false;
    X34();
  }
}

void X30() {
  flip (129/200) {
    a = false;
    X29();
  }
  else {
    b = true;
    X31();
  }
}

void X31() {
  flip (1/500) {
    if (a) {
      X34();
    }
    else {
      X27();
    }
  }
}

void X32() {
  flip (99/125) {
    a = true;
    X32();
  }
  else {
    b = true;
    X36();
  }
}

void X33() {
  flip (119/250) {
    if (a) {
      X34();
    }
    else {
      X33();
    }
  }
}

void X34() {
  flip (2/125) {
    a = true;
    X28();
  }
  else {
    b = false;
    X29();
  }
}

void X35() {
  X34();
  X39();
}

void X36() {
  flip (57/100) {
    if (a) {
      X33();
    }
    else {
      X39();
    }
  }
}

void X37() {
  flip (68/125) {
    if (a) {
      X36();
    }
    else {
      X31();
    }
  }
}

void X38() {
  X34();
  X42();
}

void X39() {
  flip (463/1000) {
    if (b) {
      X44();
    }
    else {
      X43();
    }
  }
}

void X40() {
  flip (419/500) {
    if (b) {
      X42();
    }
    else {
      X35();
    }
  }
}

void X41() {
  flip (53/1000) {
    a = true;
    X38();
  }
  else {
    b = true;
    X42();
  }
}

void X42() {
  X39();
  X46();
}

void X43() {
  X43();
  X44();
}

void X44() {
  flip (607/1000) {
    if (b) {
      X44();
    }
    else {
      X48();
    }
  }
}

void X45() {
  flip (649/1000) {
    a = true;
    X49();
  }
  else {
    b = true;
    X42();
  }
}

void X46() {
  flip (31/40) {
    if (a) {
      X50();
    }
    else {
      X51();
    }
  }
}

void X47() {
  flip (349/500) {
    a = true;
    X50();
  }
  else {
    b = false;
    X50();
  }
}

void X48() {
  flip (241/250) {
    b = false;
    X46();
  }
  else {
    b = true;
    X53();
  }
}

void X49() {
  X47();
  X46();
}

void X50() {
  flip (901/1000) {
    if (b) {
      X54();
    }
    else {
      X47();
    }
  }
}

void X51() {
  X51();
  X53();
}

void X52() {
  X51();
  X48();
}

void X53() {
  flip (791/1000) {
    if (b) {
      X57();
    }
    else {
      X48();
    }
  }
}

void X54() {
  flip (321/1000) {
    b = true;
    X48();
  }
  else {
    b = false;
    X49();
  }
}

void X55() {
  X60();
  X53();
}

void X56() {
  flip (31/125) {
    b = false;
    X55();
  }
  else {
    b = false;
    X61();
  }
}

void X57() {
  flip (353/1000) {
    b = false;
    X55();
  }
  else {
    b = true;
    X58();
  }
}

void X58() {
  X52();
  X55();
}

void X59() {
  X54();
  X53();
}

void X60() {
  X57();
  X55();
}

void X61() {
  flip (67/250) {
    a = false;
    X62();
  }
  else {
    a = false;
    X62();
  }
}

void X62() {
  flip (817/1000) {
    b = true;
    X67();
  }
  else {
    b = true;
    X59();
  }
}

void X63() {
  flip (43/500) {
    if (b) {
      X64();
    }
    else {
      X68();
    }
  }
}

void X64() {
  flip (719/1000) {
    b = true;
    X58();
  }
  else {
    a = true;
    X59();
  }
}

void X65() {
  flip (609/1000) {
    a = false;
    X65();
  }
  else {
    b = true;
    X60();
  }
}

void X66() {
  flip (183/500) {
    b = true;
    X70();
  }
  else {
    a = false;
    X70();
  }
}

void X67() {
  flip (867/1000) {
    if (a) {
      X62();
    }
    else {
      X69();
    }
  }
}

void X68() {
  flip (263/1000) {
    a = true;
    X69();
  }
  else {
    b = false;
    X69();
  }
}

void X69() {
  flip (151/500) {
    a = false;
    X64();
  }
  else {
    b = false;
    X74();
  }
}

void X70() {
  flip (327/1000) {
    if (a) {
      X67();
    }
    else {
      X70();
    }
  }
}

void X71() {
  flip (603/1000) {
    if (a) {
      X68();
    }
    else {
      X69();
    }
  }
}

void X72() {
  flip (53/200) {
    if (a) {
      X74();
    }
    else {
      X75();
    }
  }
}

void X73() {
  flip (47/500) {
    if (a) {
      X73();
    }
    else {
      X75();
    }
  }
}

void X74() {
  X74();
  X78();
}

void X75() {
  X76();
  X71();
}

void X76() {
  flip (99/250) {
    a = false;
    X70();
  }
  else {
    a = false;
    X73();
  }
}

void X77() {
  flip (577/1000) {
    a = false;
    X72();
  }
  else {
    b = true;
    X71();
  }
}

void X78() {
  flip (189/250) {
    a = true;
    X76();
  }
  else {
    b = false;
    X72();
  }
}

void X79() {
  flip (1/50) {
    b = false;
    X79();
  }
  else {
    b = true;
    X82();
  }
}

void X80() {
  flip (259/1000) {
    if (b) {
      X80();
    }
    else {
      X75();
    }
  }
}

void X81() {
  X82();
  X83();
}

void X82() {
  X84();
  X85();
}

void X83() {
  flip (41/1000) {
    a = false;
    X84();
  }
  else {
    a = true;
    X80();
  }
}

void X84() {
  flip (159/500) {
    if (b) {
      X88();
    }
    else {
      X81();
    }
  }
}

void X85() {
  flip (217/250) {
    if (b) {
      X85();
    }
    else {
      X85();
    }
  }
}

void X86() {
  flip (109/200) {
    if (a) {
      X91();
    }
    else {
      X82();
    }
  }
}

void X87() {
  X92();
  X87();
}

void X88() {
  flip (919/1000) {
    if (b) {
      X93();
    }
    else {
      X83();
    }
  }
}

void X89() {
  X93();
  X88();
}

void X90() {
  flip (4/125) {
    if (b) {
      X92();
    }
    else {
      X95();
    }
  }
}

void X91() {
  flip (98/125) {
    b = false;
    X93();
  }
  else {
    a = true;
    X95();
  }
}

void X92() {
  flip (319/500) {
    if (a) {
      X89();
    }
    else {
      X97();
    }
  }
}

void X93() {
  X92();
  X90();
}

void X94() {
  X91();
  X90();
}

void X95() {
  flip (133/200) {
    if (a) {
      X98();
    }
    else {
      X95();
    }
  }
}

void X96() {
  X91();
  X94();
}

void X97() {
  flip (223/250) {
    if (b) {
      X0();
    }
    else {
      X99();
    }
  }
}

void X98() {
  flip (27/500) {
    if (b) {
      X96();
    }
    else {
      X96();
    }
  }
}

void X99() {
  X96();
  X99();
}
