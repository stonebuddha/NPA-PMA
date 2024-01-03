bool a;
bool b;

void X0() {
  flip (191/1000) {
    a = false;
    X95();
  }
  else {
    a = false;
    X0();
  }
}

void X1() {
  X99();
  X3();
}

void X2() {
  X98();
  X7();
}

void X3() {
  X4();
  X2();
}

void X4() {
  flip (11/25) {
    if (b) {
      X2();
    }
    else {
      X99();
    }
  }
}

void X5() {
  flip (39/1000) {
    if (b) {
      X1();
    }
    else {
      X3();
    }
  }
}

void X6() {
  flip (451/1000) {
    b = false;
    X4();
  }
  else {
    a = false;
    X11();
  }
}

void X7() {
  X7();
  X4();
}

void X8() {
  X2();
  X7();
}

void X9() {
  flip (693/1000) {
    b = true;
    X14();
  }
  else {
    a = true;
    X3();
  }
}

void X10() {
  X5();
  X14();
}

void X11() {
  X10();
  X13();
}

void X12() {
  flip (613/1000) {
    a = true;
    X16();
  }
  else {
    a = false;
    X11();
  }
}

void X13() {
  X9();
  X18();
}

void X14() {
  flip (707/1000) {
    a = true;
    X16();
  }
  else {
    a = true;
    X15();
  }
}

void X15() {
  flip (83/125) {
    if (b) {
      X19();
    }
    else {
      X13();
    }
  }
}

void X16() {
  flip (187/1000) {
    b = true;
    X16();
  }
  else {
    a = false;
    X12();
  }
}

void X17() {
  X11();
  X11();
}

void X18() {
  flip (397/1000) {
    a = true;
    X17();
  }
  else {
    b = true;
    X12();
  }
}

void X19() {
  X15();
  X17();
}

void X20() {
  X15();
  X23();
}

void X21() {
  flip (61/500) {
    if (b) {
      X23();
    }
    else {
      X23();
    }
  }
}

void X22() {
  X20();
  X20();
}

void X23() {
  X26();
  X26();
}

void X24() {
  X26();
  X21();
}

void X25() {
  flip (559/1000) {
    if (b) {
      X20();
    }
    else {
      X27();
    }
  }
}

void X26() {
  flip (107/500) {
    a = false;
    X22();
  }
  else {
    a = false;
    X26();
  }
}

void X27() {
  flip (147/200) {
    if (a) {
      X23();
    }
    else {
      X32();
    }
  }
}

void X28() {
  X33();
  X24();
}

void X29() {
  flip (357/1000) {
    a = true;
    X30();
  }
  else {
    b = true;
    X26();
  }
}

void X30() {
  flip (961/1000) {
    b = false;
    X25();
  }
  else {
    b = true;
    X31();
  }
}

void X31() {
  flip (14/125) {
    if (b) {
      X35();
    }
    else {
      X34();
    }
  }
}

void X32() {
  flip (249/250) {
    if (b) {
      X27();
    }
    else {
      X28();
    }
  }
}

void X33() {
  flip (137/500) {
    a = false;
    X29();
  }
  else {
    b = false;
    X38();
  }
}

void X34() {
  flip (449/1000) {
    if (a) {
      X34();
    }
    else {
      X30();
    }
  }
}

void X35() {
  flip (27/125) {
    if (a) {
      X34();
    }
    else {
      X35();
    }
  }
}

void X36() {
  flip (1/25) {
    if (a) {
      X30();
    }
    else {
      X39();
    }
  }
}

void X37() {
  flip (791/1000) {
    a = false;
    X41();
  }
  else {
    b = false;
    X39();
  }
}

void X38() {
  flip (931/1000) {
    a = true;
    X35();
  }
  else {
    b = true;
    X42();
  }
}

void X39() {
  X35();
  X35();
}

void X40() {
  X35();
  X41();
}

void X41() {
  flip (33/200) {
    a = true;
    X44();
  }
  else {
    a = true;
    X46();
  }
}

void X42() {
  flip (211/250) {
    if (b) {
      X40();
    }
    else {
      X44();
    }
  }
}

void X43() {
  flip (963/1000) {
    b = false;
    X44();
  }
  else {
    a = true;
    X43();
  }
}

void X44() {
  flip (653/1000) {
    b = false;
    X41();
  }
  else {
    b = true;
    X46();
  }
}

void X45() {
  flip (99/1000) {
    if (a) {
      X43();
    }
    else {
      X42();
    }
  }
}

void X46() {
  flip (59/250) {
    if (b) {
      X45();
    }
    else {
      X45();
    }
  }
}

void X47() {
  flip (139/1000) {
    if (b) {
      X52();
    }
    else {
      X49();
    }
  }
}

void X48() {
  X49();
  X44();
}

void X49() {
  flip (993/1000) {
    if (b) {
      X47();
    }
    else {
      X50();
    }
  }
}

void X50() {
  flip (691/1000) {
    if (a) {
      X46();
    }
    else {
      X54();
    }
  }
}

void X51() {
  flip (731/1000) {
    if (a) {
      X52();
    }
    else {
      X54();
    }
  }
}

void X52() {
  flip (24/25) {
    if (a) {
      X49();
    }
    else {
      X52();
    }
  }
}

void X53() {
  flip (247/250) {
    b = false;
    X55();
  }
  else {
    a = true;
    X55();
  }
}

void X54() {
  flip (173/1000) {
    b = true;
    X59();
  }
  else {
    b = true;
    X53();
  }
}

void X55() {
  flip (431/1000) {
    b = true;
    X52();
  }
  else {
    a = false;
    X50();
  }
}

void X56() {
  flip (71/200) {
    if (b) {
      X54();
    }
    else {
      X50();
    }
  }
}

void X57() {
  flip (149/250) {
    if (a) {
      X61();
    }
    else {
      X51();
    }
  }
}

void X58() {
  X62();
  X52();
}

void X59() {
  X60();
  X57();
}

void X60() {
  flip (181/1000) {
    b = true;
    X59();
  }
  else {
    b = false;
    X63();
  }
}

void X61() {
  X59();
  X57();
}

void X62() {
  flip (413/500) {
    a = true;
    X56();
  }
  else {
    a = true;
    X60();
  }
}

void X63() {
  flip (303/1000) {
    b = false;
    X61();
  }
  else {
    b = false;
    X64();
  }
}

void X64() {
  flip (117/250) {
    a = false;
    X68();
  }
  else {
    b = false;
    X65();
  }
}

void X65() {
  flip (41/50) {
    a = true;
    X69();
  }
  else {
    a = false;
    X63();
  }
}

void X66() {
  X69();
  X61();
}

void X67() {
  flip (157/200) {
    b = false;
    X70();
  }
  else {
    b = false;
    X69();
  }
}

void X68() {
  X64();
  X73();
}

void X69() {
  X67();
  X74();
}

void X70() {
  flip (297/500) {
    b = true;
    X69();
  }
  else {
    a = true;
    X69();
  }
}

void X71() {
  X72();
  X66();
}

void X72() {
  X71();
  X77();
}

void X73() {
  flip (547/1000) {
    b = false;
    X76();
  }
  else {
    b = true;
    X78();
  }
}

void X74() {
  flip (331/500) {
    if (b) {
      X76();
    }
    else {
      X68();
    }
  }
}

void X75() {
  flip (931/1000) {
    a = true;
    X78();
  }
  else {
    a = true;
    X77();
  }
}

void X76() {
  X76();
  X79();
}

void X77() {
  X81();
  X78();
}

void X78() {
  flip (289/1000) {
    if (a) {
      X80();
    }
    else {
      X81();
    }
  }
}

void X79() {
  X80();
  X83();
}

void X80() {
  flip (373/500) {
    b = true;
    X74();
  }
  else {
    a = false;
    X84();
  }
}

void X81() {
  flip (43/250) {
    if (b) {
      X80();
    }
    else {
      X77();
    }
  }
}

void X82() {
  X86();
  X85();
}

void X83() {
  flip (81/200) {
    b = true;
    X81();
  }
  else {
    b = false;
    X77();
  }
}

void X84() {
  flip (509/1000) {
    a = true;
    X82();
  }
  else {
    a = true;
    X81();
  }
}

void X85() {
  flip (29/1000) {
    if (b) {
      X82();
    }
    else {
      X89();
    }
  }
}

void X86() {
  X85();
  X82();
}

void X87() {
  flip (17/200) {
    a = true;
    X85();
  }
  else {
    a = false;
    X87();
  }
}

void X88() {
  flip (597/1000) {
    b = false;
    X82();
  }
  else {
    a = false;
    X82();
  }
}

void X89() {
  X88();
  X90();
}

void X90() {
  flip (133/200) {
    if (b) {
      X94();
    }
    else {
      X90();
    }
  }
}

void X91() {
  flip (827/1000) {
    if (a) {
      X89();
    }
    else {
      X96();
    }
  }
}

void X92() {
  flip (363/1000) {
    if (a) {
      X93();
    }
    else {
      X92();
    }
  }
}

void X93() {
  flip (87/125) {
    if (b) {
      X97();
    }
    else {
      X91();
    }
  }
}

void X94() {
  flip (37/50) {
    a = false;
    X90();
  }
  else {
    a = true;
    X90();
  }
}

void X95() {
  flip (363/500) {
    b = false;
    X92();
  }
  else {
    b = true;
    X90();
  }
}

void X96() {
  flip (41/500) {
    if (b) {
      X0();
    }
    else {
      X0();
    }
  }
}

void X97() {
  flip (17/100) {
    if (b) {
      X99();
    }
    else {
      X92();
    }
  }
}

void X98() {
  flip (851/1000) {
    if (a) {
      X94();
    }
    else {
      X0();
    }
  }
}

void X99() {
  flip (93/100) {
    if (b) {
      X95();
    }
    else {
      X94();
    }
  }
}
