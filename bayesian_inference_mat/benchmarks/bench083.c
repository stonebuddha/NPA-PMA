bool a;
bool b;

void X0() {
  flip (114/125) {
    b = false;
    X5();
  }
  else {
    b = false;
    X5();
  }
}

void X1() {
  flip (93/1000) {
    a = false;
    X95();
  }
  else {
    a = true;
    X4();
  }
}

void X2() {
  flip (11/50) {
    b = true;
    X2();
  }
  else {
    b = false;
    X3();
  }
}

void X3() {
  X3();
  X6();
}

void X4() {
  flip (271/1000) {
    if (b) {
      X98();
    }
    else {
      X98();
    }
  }
}

void X5() {
  X2();
  X8();
}

void X6() {
  X8();
  X3();
}

void X7() {
  flip (217/250) {
    b = true;
    X12();
  }
  else {
    b = true;
    X8();
  }
}

void X8() {
  flip (51/100) {
    a = true;
    X6();
  }
  else {
    b = false;
    X5();
  }
}

void X9() {
  X8();
  X13();
}

void X10() {
  flip (863/1000) {
    a = false;
    X13();
  }
  else {
    b = true;
    X12();
  }
}

void X11() {
  flip (149/200) {
    if (a) {
      X8();
    }
    else {
      X6();
    }
  }
}

void X12() {
  X17();
  X14();
}

void X13() {
  flip (49/100) {
    if (b) {
      X14();
    }
    else {
      X17();
    }
  }
}

void X14() {
  flip (783/1000) {
    a = true;
    X8();
  }
  else {
    b = true;
    X14();
  }
}

void X15() {
  X20();
  X12();
}

void X16() {
  flip (59/1000) {
    b = false;
    X14();
  }
  else {
    a = true;
    X10();
  }
}

void X17() {
  flip (88/125) {
    if (a) {
      X12();
    }
    else {
      X11();
    }
  }
}

void X18() {
  flip (49/50) {
    if (a) {
      X12();
    }
    else {
      X14();
    }
  }
}

void X19() {
  X15();
  X23();
}

void X20() {
  flip (43/250) {
    if (a) {
      X22();
    }
    else {
      X14();
    }
  }
}

void X21() {
  flip (7/200) {
    if (b) {
      X23();
    }
    else {
      X18();
    }
  }
}

void X22() {
  flip (191/250) {
    a = true;
    X24();
  }
  else {
    a = true;
    X16();
  }
}

void X23() {
  flip (617/1000) {
    a = false;
    X27();
  }
  else {
    b = false;
    X19();
  }
}

void X24() {
  flip (187/200) {
    if (b) {
      X21();
    }
    else {
      X26();
    }
  }
}

void X25() {
  X28();
  X27();
}

void X26() {
  flip (239/250) {
    b = true;
    X22();
  }
  else {
    a = false;
    X28();
  }
}

void X27() {
  X31();
  X22();
}

void X28() {
  flip (38/125) {
    b = true;
    X28();
  }
  else {
    b = false;
    X31();
  }
}

void X29() {
  flip (17/1000) {
    b = true;
    X32();
  }
  else {
    b = true;
    X32();
  }
}

void X30() {
  flip (133/500) {
    a = false;
    X29();
  }
  else {
    b = false;
    X24();
  }
}

void X31() {
  flip (199/500) {
    if (a) {
      X35();
    }
    else {
      X32();
    }
  }
}

void X32() {
  flip (179/1000) {
    if (a) {
      X35();
    }
    else {
      X30();
    }
  }
}

void X33() {
  flip (9/25) {
    b = true;
    X29();
  }
  else {
    b = false;
    X37();
  }
}

void X34() {
  flip (97/500) {
    b = true;
    X31();
  }
  else {
    a = false;
    X39();
  }
}

void X35() {
  flip (93/1000) {
    b = false;
    X38();
  }
  else {
    a = true;
    X33();
  }
}

void X36() {
  X37();
  X30();
}

void X37() {
  flip (453/500) {
    if (b) {
      X37();
    }
    else {
      X40();
    }
  }
}

void X38() {
  flip (7/50) {
    b = true;
    X40();
  }
  else {
    a = false;
    X43();
  }
}

void X39() {
  flip (131/1000) {
    if (b) {
      X44();
    }
    else {
      X42();
    }
  }
}

void X40() {
  flip (829/1000) {
    if (a) {
      X45();
    }
    else {
      X41();
    }
  }
}

void X41() {
  flip (729/1000) {
    b = false;
    X46();
  }
  else {
    a = false;
    X44();
  }
}

void X42() {
  flip (187/500) {
    if (b) {
      X36();
    }
    else {
      X41();
    }
  }
}

void X43() {
  flip (13/25) {
    if (a) {
      X45();
    }
    else {
      X47();
    }
  }
}

void X44() {
  X44();
  X38();
}

void X45() {
  flip (201/500) {
    a = true;
    X42();
  }
  else {
    b = false;
    X44();
  }
}

void X46() {
  flip (529/1000) {
    if (a) {
      X46();
    }
    else {
      X40();
    }
  }
}

void X47() {
  flip (6/25) {
    a = false;
    X47();
  }
  else {
    b = false;
    X47();
  }
}

void X48() {
  flip (723/1000) {
    if (b) {
      X44();
    }
    else {
      X48();
    }
  }
}

void X49() {
  flip (941/1000) {
    if (b) {
      X46();
    }
    else {
      X47();
    }
  }
}

void X50() {
  X50();
  X51();
}

void X51() {
  X50();
  X46();
}

void X52() {
  flip (873/1000) {
    if (b) {
      X53();
    }
    else {
      X51();
    }
  }
}

void X53() {
  flip (1/8) {
    if (a) {
      X58();
    }
    else {
      X52();
    }
  }
}

void X54() {
  X59();
  X51();
}

void X55() {
  flip (589/1000) {
    a = false;
    X60();
  }
  else {
    a = true;
    X59();
  }
}

void X56() {
  X51();
  X50();
}

void X57() {
  flip (779/1000) {
    b = false;
    X62();
  }
  else {
    a = true;
    X59();
  }
}

void X58() {
  flip (73/250) {
    b = true;
    X54();
  }
  else {
    a = true;
    X55();
  }
}

void X59() {
  flip (299/1000) {
    if (b) {
      X63();
    }
    else {
      X58();
    }
  }
}

void X60() {
  flip (701/1000) {
    if (a) {
      X59();
    }
    else {
      X61();
    }
  }
}

void X61() {
  flip (137/250) {
    b = true;
    X64();
  }
  else {
    a = false;
    X63();
  }
}

void X62() {
  X62();
  X62();
}

void X63() {
  X63();
  X68();
}

void X64() {
  flip (13/100) {
    if (a) {
      X59();
    }
    else {
      X61();
    }
  }
}

void X65() {
  flip (957/1000) {
    if (a) {
      X61();
    }
    else {
      X62();
    }
  }
}

void X66() {
  flip (37/100) {
    b = true;
    X65();
  }
  else {
    a = false;
    X61();
  }
}

void X67() {
  flip (611/1000) {
    if (b) {
      X70();
    }
    else {
      X61();
    }
  }
}

void X68() {
  flip (179/250) {
    if (a) {
      X72();
    }
    else {
      X73();
    }
  }
}

void X69() {
  flip (83/125) {
    if (a) {
      X71();
    }
    else {
      X69();
    }
  }
}

void X70() {
  flip (13/25) {
    if (b) {
      X71();
    }
    else {
      X65();
    }
  }
}

void X71() {
  flip (21/200) {
    a = true;
    X76();
  }
  else {
    a = false;
    X69();
  }
}

void X72() {
  X66();
  X66();
}

void X73() {
  flip (487/500) {
    a = false;
    X71();
  }
  else {
    a = false;
    X71();
  }
}

void X74() {
  flip (89/200) {
    if (a) {
      X73();
    }
    else {
      X76();
    }
  }
}

void X75() {
  flip (117/500) {
    if (b) {
      X80();
    }
    else {
      X73();
    }
  }
}

void X76() {
  X71();
  X74();
}

void X77() {
  flip (469/500) {
    a = true;
    X71();
  }
  else {
    a = true;
    X78();
  }
}

void X78() {
  X81();
  X73();
}

void X79() {
  flip (9/50) {
    if (a) {
      X77();
    }
    else {
      X74();
    }
  }
}

void X80() {
  flip (69/100) {
    a = false;
    X80();
  }
  else {
    a = false;
    X82();
  }
}

void X81() {
  flip (33/125) {
    if (a) {
      X84();
    }
    else {
      X76();
    }
  }
}

void X82() {
  flip (347/1000) {
    a = false;
    X87();
  }
  else {
    b = true;
    X82();
  }
}

void X83() {
  flip (57/125) {
    a = true;
    X80();
  }
  else {
    a = false;
    X86();
  }
}

void X84() {
  flip (59/125) {
    b = false;
    X79();
  }
  else {
    a = true;
    X88();
  }
}

void X85() {
  X88();
  X82();
}

void X86() {
  flip (313/500) {
    if (a) {
      X83();
    }
    else {
      X89();
    }
  }
}

void X87() {
  X90();
  X85();
}

void X88() {
  flip (22/25) {
    if (a) {
      X82();
    }
    else {
      X86();
    }
  }
}

void X89() {
  X92();
  X87();
}

void X90() {
  X84();
  X85();
}

void X91() {
  X92();
  X90();
}

void X92() {
  flip (469/1000) {
    b = true;
    X89();
  }
  else {
    b = true;
    X87();
  }
}

void X93() {
  flip (44/125) {
    if (a) {
      X89();
    }
    else {
      X88();
    }
  }
}

void X94() {
  X95();
  X98();
}

void X95() {
  flip (439/1000) {
    b = false;
    X89();
  }
  else {
    b = false;
    X97();
  }
}

void X96() {
  flip (107/1000) {
    b = true;
    X90();
  }
  else {
    a = true;
    X99();
  }
}

void X97() {
  flip (363/500) {
    a = true;
    X93();
  }
  else {
    a = false;
    X99();
  }
}

void X98() {
  flip (167/200) {
    b = true;
    X3();
  }
  else {
    a = false;
    X93();
  }
}

void X99() {
  flip (323/500) {
    b = false;
    X0();
  }
  else {
    a = true;
    X1();
  }
}
