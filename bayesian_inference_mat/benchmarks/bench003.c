bool a;
bool b;

void X0() {
  flip (77/200) {
    if (b) {
      X94();
    }
    else {
      X96();
    }
  }
}

void X1() {
  flip (297/1000) {
    if (a) {
      X4();
    }
    else {
      X1();
    }
  }
}

void X2() {
  flip (39/200) {
    a = false;
    X2();
  }
  else {
    b = false;
    X7();
  }
}

void X3() {
  X1();
  X4();
}

void X4() {
  X98();
  X5();
}

void X5() {
  flip (423/500) {
    a = false;
    X7();
  }
  else {
    a = false;
    X9();
  }
}

void X6() {
  flip (427/1000) {
    b = false;
    X0();
  }
  else {
    a = false;
    X1();
  }
}

void X7() {
  flip (483/500) {
    a = true;
    X1();
  }
  else {
    b = true;
    X4();
  }
}

void X8() {
  X6();
  X7();
}

void X9() {
  flip (9/25) {
    a = false;
    X8();
  }
  else {
    b = false;
    X5();
  }
}

void X10() {
  X15();
  X12();
}

void X11() {
  flip (827/1000) {
    b = false;
    X14();
  }
  else {
    b = false;
    X13();
  }
}

void X12() {
  X16();
  X10();
}

void X13() {
  flip (183/1000) {
    if (a) {
      X12();
    }
    else {
      X18();
    }
  }
}

void X14() {
  X16();
  X14();
}

void X15() {
  flip (959/1000) {
    if (a) {
      X15();
    }
    else {
      X11();
    }
  }
}

void X16() {
  flip (363/500) {
    a = true;
    X11();
  }
  else {
    a = true;
    X13();
  }
}

void X17() {
  flip (307/1000) {
    if (a) {
      X13();
    }
    else {
      X13();
    }
  }
}

void X18() {
  X12();
  X14();
}

void X19() {
  X20();
  X22();
}

void X20() {
  X19();
  X22();
}

void X21() {
  flip (114/125) {
    b = true;
    X16();
  }
  else {
    b = true;
    X18();
  }
}

void X22() {
  flip (201/1000) {
    if (b) {
      X22();
    }
    else {
      X24();
    }
  }
}

void X23() {
  flip (33/200) {
    if (a) {
      X20();
    }
    else {
      X23();
    }
  }
}

void X24() {
  X21();
  X21();
}

void X25() {
  X24();
  X29();
}

void X26() {
  flip (287/1000) {
    b = false;
    X25();
  }
  else {
    a = true;
    X31();
  }
}

void X27() {
  X24();
  X31();
}

void X28() {
  X24();
  X29();
}

void X29() {
  flip (1/8) {
    a = false;
    X27();
  }
  else {
    a = false;
    X27();
  }
}

void X30() {
  X33();
  X25();
}

void X31() {
  flip (163/1000) {
    if (b) {
      X36();
    }
    else {
      X33();
    }
  }
}

void X32() {
  flip (21/200) {
    if (b) {
      X34();
    }
    else {
      X28();
    }
  }
}

void X33() {
  X28();
  X34();
}

void X34() {
  flip (17/100) {
    if (b) {
      X39();
    }
    else {
      X33();
    }
  }
}

void X35() {
  X36();
  X33();
}

void X36() {
  X38();
  X31();
}

void X37() {
  flip (53/100) {
    if (b) {
      X42();
    }
    else {
      X31();
    }
  }
}

void X38() {
  flip (461/1000) {
    b = false;
    X42();
  }
  else {
    b = false;
    X40();
  }
}

void X39() {
  X44();
  X33();
}

void X40() {
  flip (157/250) {
    if (b) {
      X39();
    }
    else {
      X37();
    }
  }
}

void X41() {
  flip (437/1000) {
    if (b) {
      X44();
    }
    else {
      X45();
    }
  }
}

void X42() {
  flip (137/1000) {
    if (a) {
      X40();
    }
    else {
      X38();
    }
  }
}

void X43() {
  flip (221/500) {
    a = false;
    X44();
  }
  else {
    b = true;
    X43();
  }
}

void X44() {
  flip (701/1000) {
    a = false;
    X45();
  }
  else {
    b = true;
    X48();
  }
}

void X45() {
  flip (177/200) {
    a = true;
    X48();
  }
  else {
    a = true;
    X43();
  }
}

void X46() {
  flip (11/125) {
    a = true;
    X42();
  }
  else {
    a = false;
    X42();
  }
}

void X47() {
  X50();
  X48();
}

void X48() {
  flip (213/500) {
    a = true;
    X42();
  }
  else {
    a = true;
    X51();
  }
}

void X49() {
  flip (227/1000) {
    a = false;
    X45();
  }
  else {
    a = false;
    X53();
  }
}

void X50() {
  flip (17/200) {
    if (b) {
      X51();
    }
    else {
      X48();
    }
  }
}

void X51() {
  X52();
  X48();
}

void X52() {
  X47();
  X51();
}

void X53() {
  flip (23/125) {
    if (b) {
      X58();
    }
    else {
      X49();
    }
  }
}

void X54() {
  X57();
  X57();
}

void X55() {
  X50();
  X55();
}

void X56() {
  flip (63/1000) {
    if (b) {
      X55();
    }
    else {
      X58();
    }
  }
}

void X57() {
  X54();
  X52();
}

void X58() {
  flip (301/500) {
    if (b) {
      X55();
    }
    else {
      X58();
    }
  }
}

void X59() {
  flip (359/1000) {
    b = true;
    X63();
  }
  else {
    a = false;
    X62();
  }
}

void X60() {
  flip (59/1000) {
    a = false;
    X58();
  }
  else {
    b = false;
    X54();
  }
}

void X61() {
  flip (843/1000) {
    b = true;
    X61();
  }
  else {
    b = false;
    X65();
  }
}

void X62() {
  flip (57/200) {
    b = false;
    X65();
  }
  else {
    a = true;
    X60();
  }
}

void X63() {
  flip (387/500) {
    b = true;
    X62();
  }
  else {
    a = true;
    X68();
  }
}

void X64() {
  flip (307/500) {
    if (b) {
      X69();
    }
    else {
      X61();
    }
  }
}

void X65() {
  X69();
  X67();
}

void X66() {
  X67();
  X70();
}

void X67() {
  flip (109/1000) {
    if (b) {
      X61();
    }
    else {
      X67();
    }
  }
}

void X68() {
  flip (51/125) {
    b = false;
    X65();
  }
  else {
    a = true;
    X62();
  }
}

void X69() {
  flip (161/250) {
    if (a) {
      X74();
    }
    else {
      X68();
    }
  }
}

void X70() {
  flip (179/250) {
    a = true;
    X69();
  }
  else {
    a = true;
    X65();
  }
}

void X71() {
  flip (131/200) {
    if (b) {
      X70();
    }
    else {
      X67();
    }
  }
}

void X72() {
  X74();
  X74();
}

void X73() {
  flip (873/1000) {
    if (a) {
      X67();
    }
    else {
      X71();
    }
  }
}

void X74() {
  flip (89/125) {
    b = false;
    X76();
  }
  else {
    b = false;
    X72();
  }
}

void X75() {
  flip (381/500) {
    if (b) {
      X78();
    }
    else {
      X75();
    }
  }
}

void X76() {
  X80();
  X77();
}

void X77() {
  flip (31/500) {
    if (a) {
      X72();
    }
    else {
      X77();
    }
  }
}

void X78() {
  X78();
  X74();
}

void X79() {
  flip (169/1000) {
    a = false;
    X75();
  }
  else {
    a = true;
    X79();
  }
}

void X80() {
  flip (227/500) {
    if (b) {
      X76();
    }
    else {
      X76();
    }
  }
}

void X81() {
  X77();
  X86();
}

void X82() {
  flip (923/1000) {
    a = false;
    X82();
  }
  else {
    a = false;
    X84();
  }
}

void X83() {
  flip (37/500) {
    if (b) {
      X86();
    }
    else {
      X81();
    }
  }
}

void X84() {
  flip (59/125) {
    a = false;
    X88();
  }
  else {
    a = true;
    X88();
  }
}

void X85() {
  X88();
  X83();
}

void X86() {
  flip (921/1000) {
    if (b) {
      X80();
    }
    else {
      X88();
    }
  }
}

void X87() {
  flip (451/500) {
    if (b) {
      X81();
    }
    else {
      X82();
    }
  }
}

void X88() {
  flip (49/100) {
    a = true;
    X93();
  }
  else {
    a = false;
    X82();
  }
}

void X89() {
  flip (861/1000) {
    a = false;
    X90();
  }
  else {
    b = true;
    X88();
  }
}

void X90() {
  flip (71/250) {
    a = false;
    X90();
  }
  else {
    b = true;
    X90();
  }
}

void X91() {
  X94();
  X91();
}

void X92() {
  flip (143/1000) {
    if (b) {
      X88();
    }
    else {
      X92();
    }
  }
}

void X93() {
  X96();
  X90();
}

void X94() {
  X96();
  X89();
}

void X95() {
  flip (99/100) {
    if (a) {
      X97();
    }
    else {
      X89();
    }
  }
}

void X96() {
  X96();
  X91();
}

void X97() {
  X95();
  X95();
}

void X98() {
  flip (293/500) {
    b = true;
    X1();
  }
  else {
    b = false;
    X98();
  }
}

void X99() {
  flip (469/500) {
    a = true;
    X99();
  }
  else {
    a = false;
    X97();
  }
}
