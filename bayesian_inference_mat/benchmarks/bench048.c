bool a;
bool b;

void X0() {
  X95();
  X1();
}

void X1() {
  flip (271/1000) {
    if (b) {
      X5();
    }
    else {
      X95();
    }
  }
}

void X2() {
  flip (269/1000) {
    b = true;
    X7();
  }
  else {
    a = true;
    X7();
  }
}

void X3() {
  X4();
  X98();
}

void X4() {
  flip (287/500) {
    if (a) {
      X6();
    }
    else {
      X5();
    }
  }
}

void X5() {
  X3();
  X9();
}

void X6() {
  flip (121/200) {
    if (b) {
      X4();
    }
    else {
      X6();
    }
  }
}

void X7() {
  flip (651/1000) {
    if (b) {
      X12();
    }
    else {
      X1();
    }
  }
}

void X8() {
  flip (116/125) {
    b = false;
    X7();
  }
  else {
    a = true;
    X9();
  }
}

void X9() {
  flip (231/250) {
    if (b) {
      X7();
    }
    else {
      X7();
    }
  }
}

void X10() {
  X10();
  X13();
}

void X11() {
  X12();
  X8();
}

void X12() {
  flip (81/250) {
    if (b) {
      X11();
    }
    else {
      X15();
    }
  }
}

void X13() {
  flip (493/500) {
    a = true;
    X13();
  }
  else {
    a = true;
    X14();
  }
}

void X14() {
  flip (847/1000) {
    if (a) {
      X16();
    }
    else {
      X11();
    }
  }
}

void X15() {
  X17();
  X11();
}

void X16() {
  flip (271/1000) {
    if (a) {
      X12();
    }
    else {
      X10();
    }
  }
}

void X17() {
  X15();
  X21();
}

void X18() {
  flip (69/250) {
    b = false;
    X20();
  }
  else {
    a = false;
    X15();
  }
}

void X19() {
  X23();
  X16();
}

void X20() {
  flip (191/500) {
    if (a) {
      X24();
    }
    else {
      X20();
    }
  }
}

void X21() {
  X21();
  X20();
}

void X22() {
  flip (169/1000) {
    b = true;
    X22();
  }
  else {
    a = true;
    X17();
  }
}

void X23() {
  flip (93/500) {
    if (b) {
      X17();
    }
    else {
      X22();
    }
  }
}

void X24() {
  X19();
  X27();
}

void X25() {
  flip (49/1000) {
    if (a) {
      X23();
    }
    else {
      X26();
    }
  }
}

void X26() {
  flip (57/125) {
    if (b) {
      X31();
    }
    else {
      X21();
    }
  }
}

void X27() {
  flip (217/250) {
    a = false;
    X24();
  }
  else {
    a = true;
    X32();
  }
}

void X28() {
  X30();
  X33();
}

void X29() {
  flip (493/1000) {
    if (a) {
      X26();
    }
    else {
      X34();
    }
  }
}

void X30() {
  flip (7/125) {
    b = false;
    X35();
  }
  else {
    a = false;
    X34();
  }
}

void X31() {
  flip (11/125) {
    if (a) {
      X28();
    }
    else {
      X33();
    }
  }
}

void X32() {
  flip (73/200) {
    b = false;
    X26();
  }
  else {
    a = false;
    X36();
  }
}

void X33() {
  flip (339/1000) {
    if (a) {
      X28();
    }
    else {
      X30();
    }
  }
}

void X34() {
  flip (9/10) {
    b = true;
    X37();
  }
  else {
    b = false;
    X31();
  }
}

void X35() {
  X34();
  X33();
}

void X36() {
  flip (999/1000) {
    a = true;
    X38();
  }
  else {
    a = true;
    X32();
  }
}

void X37() {
  flip (41/200) {
    if (b) {
      X32();
    }
    else {
      X39();
    }
  }
}

void X38() {
  flip (963/1000) {
    b = true;
    X39();
  }
  else {
    b = true;
    X40();
  }
}

void X39() {
  flip (39/50) {
    b = true;
    X40();
  }
  else {
    a = false;
    X43();
  }
}

void X40() {
  flip (431/1000) {
    if (b) {
      X38();
    }
    else {
      X36();
    }
  }
}

void X41() {
  flip (199/1000) {
    b = true;
    X41();
  }
  else {
    b = false;
    X39();
  }
}

void X42() {
  X38();
  X47();
}

void X43() {
  flip (897/1000) {
    if (b) {
      X48();
    }
    else {
      X40();
    }
  }
}

void X44() {
  flip (177/200) {
    if (b) {
      X42();
    }
    else {
      X40();
    }
  }
}

void X45() {
  X46();
  X48();
}

void X46() {
  X44();
  X49();
}

void X47() {
  flip (39/1000) {
    if (a) {
      X42();
    }
    else {
      X44();
    }
  }
}

void X48() {
  flip (109/250) {
    if (b) {
      X47();
    }
    else {
      X43();
    }
  }
}

void X49() {
  X47();
  X50();
}

void X50() {
  X55();
  X45();
}

void X51() {
  flip (3/200) {
    if (a) {
      X52();
    }
    else {
      X52();
    }
  }
}

void X52() {
  X49();
  X57();
}

void X53() {
  X57();
  X51();
}

void X54() {
  flip (47/500) {
    a = true;
    X59();
  }
  else {
    a = true;
    X51();
  }
}

void X55() {
  flip (701/1000) {
    b = true;
    X53();
  }
  else {
    a = false;
    X55();
  }
}

void X56() {
  flip (74/125) {
    b = true;
    X53();
  }
  else {
    a = true;
    X59();
  }
}

void X57() {
  flip (191/1000) {
    if (b) {
      X57();
    }
    else {
      X60();
    }
  }
}

void X58() {
  X58();
  X54();
}

void X59() {
  flip (69/1000) {
    if (a) {
      X64();
    }
    else {
      X59();
    }
  }
}

void X60() {
  flip (89/125) {
    b = true;
    X64();
  }
  else {
    a = false;
    X60();
  }
}

void X61() {
  flip (131/250) {
    if (b) {
      X59();
    }
    else {
      X62();
    }
  }
}

void X62() {
  flip (26/125) {
    if (b) {
      X58();
    }
    else {
      X56();
    }
  }
}

void X63() {
  flip (497/500) {
    if (a) {
      X62();
    }
    else {
      X59();
    }
  }
}

void X64() {
  flip (443/500) {
    if (b) {
      X64();
    }
    else {
      X61();
    }
  }
}

void X65() {
  flip (819/1000) {
    b = true;
    X61();
  }
  else {
    a = false;
    X60();
  }
}

void X66() {
  flip (643/1000) {
    if (a) {
      X60();
    }
    else {
      X71();
    }
  }
}

void X67() {
  flip (147/500) {
    if (a) {
      X63();
    }
    else {
      X61();
    }
  }
}

void X68() {
  flip (199/250) {
    if (b) {
      X72();
    }
    else {
      X68();
    }
  }
}

void X69() {
  flip (187/1000) {
    if (a) {
      X65();
    }
    else {
      X74();
    }
  }
}

void X70() {
  flip (22/25) {
    a = true;
    X74();
  }
  else {
    a = false;
    X64();
  }
}

void X71() {
  flip (211/500) {
    if (b) {
      X75();
    }
    else {
      X76();
    }
  }
}

void X72() {
  flip (949/1000) {
    a = true;
    X71();
  }
  else {
    a = true;
    X75();
  }
}

void X73() {
  X67();
  X68();
}

void X74() {
  X77();
  X77();
}

void X75() {
  X76();
  X69();
}

void X76() {
  flip (13/1000) {
    b = true;
    X80();
  }
  else {
    b = true;
    X80();
  }
}

void X77() {
  flip (873/1000) {
    b = false;
    X76();
  }
  else {
    b = false;
    X82();
  }
}

void X78() {
  flip (61/250) {
    b = false;
    X78();
  }
  else {
    b = true;
    X82();
  }
}

void X79() {
  flip (113/500) {
    a = true;
    X80();
  }
  else {
    a = false;
    X81();
  }
}

void X80() {
  flip (24/25) {
    if (a) {
      X74();
    }
    else {
      X82();
    }
  }
}

void X81() {
  X85();
  X81();
}

void X82() {
  flip (73/100) {
    b = true;
    X85();
  }
  else {
    b = false;
    X80();
  }
}

void X83() {
  X84();
  X87();
}

void X84() {
  X81();
  X84();
}

void X85() {
  flip (211/250) {
    if (a) {
      X81();
    }
    else {
      X89();
    }
  }
}

void X86() {
  X80();
  X90();
}

void X87() {
  flip (453/500) {
    if (b) {
      X88();
    }
    else {
      X81();
    }
  }
}

void X88() {
  X86();
  X92();
}

void X89() {
  flip (159/1000) {
    a = true;
    X93();
  }
  else {
    a = true;
    X86();
  }
}

void X90() {
  flip (169/1000) {
    if (b) {
      X91();
    }
    else {
      X92();
    }
  }
}

void X91() {
  flip (453/1000) {
    a = true;
    X87();
  }
  else {
    b = false;
    X87();
  }
}

void X92() {
  flip (369/500) {
    b = true;
    X87();
  }
  else {
    b = true;
    X92();
  }
}

void X93() {
  flip (94/125) {
    a = true;
    X87();
  }
  else {
    a = true;
    X89();
  }
}

void X94() {
  flip (59/1000) {
    b = true;
    X89();
  }
  else {
    a = false;
    X94();
  }
}

void X95() {
  flip (93/100) {
    if (a) {
      X99();
    }
    else {
      X97();
    }
  }
}

void X96() {
  X90();
  X99();
}

void X97() {
  flip (29/40) {
    a = true;
    X99();
  }
  else {
    b = true;
    X1();
  }
}

void X98() {
  X0();
  X94();
}

void X99() {
  X0();
  X4();
}
