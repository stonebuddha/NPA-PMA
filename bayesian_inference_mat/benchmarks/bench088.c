bool a;
bool b;

void X0() {
  X97();
  X94();
}

void X1() {
  flip (179/1000) {
    if (a) {
      X4();
    }
    else {
      X1();
    }
  }
}

void X2() {
  flip (33/200) {
    if (a) {
      X98();
    }
    else {
      X2();
    }
  }
}

void X3() {
  flip (104/125) {
    b = false;
    X99();
  }
  else {
    b = false;
    X5();
  }
}

void X4() {
  flip (1/25) {
    if (b) {
      X98();
    }
    else {
      X4();
    }
  }
}

void X5() {
  X7();
  X0();
}

void X6() {
  flip (97/200) {
    if (a) {
      X7();
    }
    else {
      X2();
    }
  }
}

void X7() {
  flip (189/200) {
    if (a) {
      X4();
    }
    else {
      X5();
    }
  }
}

void X8() {
  flip (69/100) {
    if (a) {
      X10();
    }
    else {
      X4();
    }
  }
}

void X9() {
  flip (107/1000) {
    if (a) {
      X9();
    }
    else {
      X11();
    }
  }
}

void X10() {
  flip (927/1000) {
    a = true;
    X15();
  }
  else {
    b = true;
    X10();
  }
}

void X11() {
  flip (39/200) {
    if (b) {
      X13();
    }
    else {
      X14();
    }
  }
}

void X12() {
  flip (31/500) {
    if (b) {
      X16();
    }
    else {
      X9();
    }
  }
}

void X13() {
  flip (357/1000) {
    b = true;
    X15();
  }
  else {
    a = true;
    X11();
  }
}

void X14() {
  flip (139/500) {
    b = true;
    X15();
  }
  else {
    a = false;
    X13();
  }
}

void X15() {
  X12();
  X15();
}

void X16() {
  flip (399/500) {
    if (b) {
      X13();
    }
    else {
      X19();
    }
  }
}

void X17() {
  flip (31/125) {
    if (b) {
      X17();
    }
    else {
      X21();
    }
  }
}

void X18() {
  flip (3/100) {
    a = false;
    X13();
  }
  else {
    b = false;
    X17();
  }
}

void X19() {
  X13();
  X19();
}

void X20() {
  flip (7/10) {
    b = false;
    X19();
  }
  else {
    b = true;
    X24();
  }
}

void X21() {
  flip (177/500) {
    if (b) {
      X25();
    }
    else {
      X21();
    }
  }
}

void X22() {
  flip (483/1000) {
    b = true;
    X21();
  }
  else {
    b = false;
    X21();
  }
}

void X23() {
  flip (743/1000) {
    b = false;
    X18();
  }
  else {
    b = true;
    X19();
  }
}

void X24() {
  X21();
  X29();
}

void X25() {
  X20();
  X29();
}

void X26() {
  flip (399/1000) {
    a = true;
    X29();
  }
  else {
    b = true;
    X28();
  }
}

void X27() {
  flip (71/125) {
    if (b) {
      X31();
    }
    else {
      X22();
    }
  }
}

void X28() {
  X24();
  X23();
}

void X29() {
  flip (207/500) {
    b = false;
    X29();
  }
  else {
    a = true;
    X30();
  }
}

void X30() {
  flip (119/250) {
    if (b) {
      X25();
    }
    else {
      X34();
    }
  }
}

void X31() {
  flip (279/500) {
    if (a) {
      X28();
    }
    else {
      X30();
    }
  }
}

void X32() {
  flip (131/1000) {
    a = false;
    X35();
  }
  else {
    a = true;
    X34();
  }
}

void X33() {
  flip (953/1000) {
    if (a) {
      X29();
    }
    else {
      X27();
    }
  }
}

void X34() {
  flip (23/25) {
    a = false;
    X30();
  }
  else {
    a = false;
    X30();
  }
}

void X35() {
  flip (719/1000) {
    if (a) {
      X39();
    }
    else {
      X29();
    }
  }
}

void X36() {
  flip (87/1000) {
    a = false;
    X36();
  }
  else {
    a = true;
    X37();
  }
}

void X37() {
  flip (53/1000) {
    b = false;
    X33();
  }
  else {
    a = true;
    X40();
  }
}

void X38() {
  X32();
  X39();
}

void X39() {
  flip (359/1000) {
    a = true;
    X38();
  }
  else {
    a = false;
    X43();
  }
}

void X40() {
  X37();
  X35();
}

void X41() {
  X38();
  X45();
}

void X42() {
  X46();
  X42();
}

void X43() {
  flip (989/1000) {
    if (b) {
      X42();
    }
    else {
      X39();
    }
  }
}

void X44() {
  flip (917/1000) {
    if (b) {
      X39();
    }
    else {
      X39();
    }
  }
}

void X45() {
  X42();
  X39();
}

void X46() {
  X50();
  X50();
}

void X47() {
  flip (7/20) {
    if (a) {
      X43();
    }
    else {
      X49();
    }
  }
}

void X48() {
  flip (16/125) {
    if (a) {
      X46();
    }
    else {
      X51();
    }
  }
}

void X49() {
  flip (403/1000) {
    if (a) {
      X52();
    }
    else {
      X50();
    }
  }
}

void X50() {
  X45();
  X48();
}

void X51() {
  flip (463/1000) {
    b = true;
    X56();
  }
  else {
    b = false;
    X45();
  }
}

void X52() {
  flip (3/25) {
    b = true;
    X46();
  }
  else {
    a = false;
    X49();
  }
}

void X53() {
  flip (421/500) {
    if (b) {
      X53();
    }
    else {
      X50();
    }
  }
}

void X54() {
  X50();
  X52();
}

void X55() {
  flip (87/250) {
    a = false;
    X55();
  }
  else {
    a = true;
    X58();
  }
}

void X56() {
  flip (493/1000) {
    if (a) {
      X61();
    }
    else {
      X59();
    }
  }
}

void X57() {
  flip (21/25) {
    if (b) {
      X52();
    }
    else {
      X61();
    }
  }
}

void X58() {
  flip (2/5) {
    if (b) {
      X52();
    }
    else {
      X54();
    }
  }
}

void X59() {
  flip (6/125) {
    a = false;
    X62();
  }
  else {
    a = false;
    X55();
  }
}

void X60() {
  X56();
  X59();
}

void X61() {
  X64();
  X56();
}

void X62() {
  flip (9/40) {
    if (b) {
      X60();
    }
    else {
      X63();
    }
  }
}

void X63() {
  X61();
  X66();
}

void X64() {
  flip (203/250) {
    b = false;
    X61();
  }
  else {
    a = true;
    X67();
  }
}

void X65() {
  flip (271/500) {
    if (b) {
      X68();
    }
    else {
      X64();
    }
  }
}

void X66() {
  X60();
  X60();
}

void X67() {
  X61();
  X71();
}

void X68() {
  X73();
  X68();
}

void X69() {
  X68();
  X69();
}

void X70() {
  X65();
  X65();
}

void X71() {
  flip (94/125) {
    a = false;
    X65();
  }
  else {
    a = false;
    X73();
  }
}

void X72() {
  X70();
  X68();
}

void X73() {
  flip (623/1000) {
    a = true;
    X78();
  }
  else {
    a = true;
    X74();
  }
}

void X74() {
  flip (1/20) {
    if (b) {
      X69();
    }
    else {
      X75();
    }
  }
}

void X75() {
  flip (151/1000) {
    if (a) {
      X80();
    }
    else {
      X75();
    }
  }
}

void X76() {
  X71();
  X79();
}

void X77() {
  flip (427/500) {
    a = false;
    X74();
  }
  else {
    b = true;
    X73();
  }
}

void X78() {
  X78();
  X79();
}

void X79() {
  X82();
  X81();
}

void X80() {
  X84();
  X77();
}

void X81() {
  flip (157/500) {
    a = true;
    X79();
  }
  else {
    a = true;
    X75();
  }
}

void X82() {
  flip (51/1000) {
    if (a) {
      X81();
    }
    else {
      X78();
    }
  }
}

void X83() {
  X80();
  X81();
}

void X84() {
  flip (371/500) {
    if (b) {
      X82();
    }
    else {
      X84();
    }
  }
}

void X85() {
  flip (13/1000) {
    b = false;
    X85();
  }
  else {
    a = false;
    X85();
  }
}

void X86() {
  flip (114/125) {
    a = false;
    X85();
  }
  else {
    b = true;
    X84();
  }
}

void X87() {
  X90();
  X81();
}

void X88() {
  flip (343/500) {
    a = true;
    X92();
  }
  else {
    a = false;
    X86();
  }
}

void X89() {
  flip (23/200) {
    if (b) {
      X89();
    }
    else {
      X83();
    }
  }
}

void X90() {
  flip (539/1000) {
    b = true;
    X84();
  }
  else {
    b = true;
    X93();
  }
}

void X91() {
  flip (193/500) {
    a = true;
    X88();
  }
  else {
    a = true;
    X95();
  }
}

void X92() {
  flip (159/500) {
    if (a) {
      X90();
    }
    else {
      X95();
    }
  }
}

void X93() {
  flip (29/40) {
    b = false;
    X91();
  }
  else {
    a = false;
    X88();
  }
}

void X94() {
  X88();
  X98();
}

void X95() {
  X94();
  X92();
}

void X96() {
  flip (183/200) {
    if (b) {
      X94();
    }
    else {
      X95();
    }
  }
}

void X97() {
  X98();
  X98();
}

void X98() {
  flip (227/250) {
    if (a) {
      X94();
    }
    else {
      X2();
    }
  }
}

void X99() {
  flip (981/1000) {
    if (b) {
      X3();
    }
    else {
      X0();
    }
  }
}
