bool a;
bool b;

void X0() {
  flip (949/1000) {
    if (a) {
      X98();
    }
    else {
      X2();
    }
  }
}

void X1() {
  flip (11/500) {
    a = false;
    X0();
  }
  else {
    b = true;
    X2();
  }
}

void X2() {
  flip (543/1000) {
    a = true;
    X1();
  }
  else {
    b = true;
    X4();
  }
}

void X3() {
  flip (521/1000) {
    b = false;
    X4();
  }
  else {
    a = false;
    X5();
  }
}

void X4() {
  flip (417/1000) {
    if (a) {
      X0();
    }
    else {
      X7();
    }
  }
}

void X5() {
  flip (83/250) {
    a = false;
    X1();
  }
  else {
    b = true;
    X5();
  }
}

void X6() {
  flip (417/500) {
    if (b) {
      X4();
    }
    else {
      X1();
    }
  }
}

void X7() {
  X11();
  X11();
}

void X8() {
  flip (159/200) {
    a = false;
    X7();
  }
  else {
    a = true;
    X7();
  }
}

void X9() {
  flip (933/1000) {
    b = false;
    X12();
  }
  else {
    b = true;
    X10();
  }
}

void X10() {
  X8();
  X10();
}

void X11() {
  flip (18/25) {
    b = false;
    X9();
  }
  else {
    a = false;
    X11();
  }
}

void X12() {
  X16();
  X10();
}

void X13() {
  X18();
  X14();
}

void X14() {
  flip (691/1000) {
    if (a) {
      X16();
    }
    else {
      X16();
    }
  }
}

void X15() {
  flip (103/125) {
    b = false;
    X13();
  }
  else {
    b = false;
    X11();
  }
}

void X16() {
  flip (141/1000) {
    a = false;
    X14();
  }
  else {
    a = true;
    X14();
  }
}

void X17() {
  X18();
  X21();
}

void X18() {
  flip (111/1000) {
    b = false;
    X20();
  }
  else {
    b = false;
    X12();
  }
}

void X19() {
  flip (77/1000) {
    if (b) {
      X19();
    }
    else {
      X23();
    }
  }
}

void X20() {
  flip (47/200) {
    a = true;
    X21();
  }
  else {
    b = false;
    X21();
  }
}

void X21() {
  X21();
  X21();
}

void X22() {
  flip (87/250) {
    if (b) {
      X17();
    }
    else {
      X23();
    }
  }
}

void X23() {
  flip (217/500) {
    b = false;
    X26();
  }
  else {
    a = true;
    X24();
  }
}

void X24() {
  X19();
  X26();
}

void X25() {
  flip (353/1000) {
    a = false;
    X21();
  }
  else {
    b = false;
    X24();
  }
}

void X26() {
  flip (159/200) {
    if (b) {
      X20();
    }
    else {
      X25();
    }
  }
}

void X27() {
  flip (143/1000) {
    a = false;
    X23();
  }
  else {
    a = false;
    X26();
  }
}

void X28() {
  flip (479/1000) {
    if (b) {
      X27();
    }
    else {
      X24();
    }
  }
}

void X29() {
  flip (639/1000) {
    if (a) {
      X32();
    }
    else {
      X34();
    }
  }
}

void X30() {
  flip (249/250) {
    a = false;
    X25();
  }
  else {
    a = false;
    X33();
  }
}

void X31() {
  flip (69/1000) {
    if (b) {
      X26();
    }
    else {
      X29();
    }
  }
}

void X32() {
  flip (291/500) {
    if (b) {
      X32();
    }
    else {
      X36();
    }
  }
}

void X33() {
  flip (449/1000) {
    if (b) {
      X35();
    }
    else {
      X34();
    }
  }
}

void X34() {
  X29();
  X39();
}

void X35() {
  flip (431/500) {
    a = false;
    X31();
  }
  else {
    b = false;
    X34();
  }
}

void X36() {
  flip (227/250) {
    if (a) {
      X39();
    }
    else {
      X36();
    }
  }
}

void X37() {
  flip (421/500) {
    b = true;
    X39();
  }
  else {
    a = true;
    X40();
  }
}

void X38() {
  X38();
  X43();
}

void X39() {
  X40();
  X33();
}

void X40() {
  flip (191/500) {
    b = false;
    X34();
  }
  else {
    a = false;
    X42();
  }
}

void X41() {
  flip (681/1000) {
    if (a) {
      X46();
    }
    else {
      X37();
    }
  }
}

void X42() {
  flip (219/250) {
    if (a) {
      X39();
    }
    else {
      X36();
    }
  }
}

void X43() {
  X43();
  X40();
}

void X44() {
  X44();
  X46();
}

void X45() {
  flip (307/500) {
    b = false;
    X42();
  }
  else {
    b = false;
    X42();
  }
}

void X46() {
  flip (599/1000) {
    if (a) {
      X44();
    }
    else {
      X49();
    }
  }
}

void X47() {
  X51();
  X48();
}

void X48() {
  X49();
  X42();
}

void X49() {
  flip (179/200) {
    if (b) {
      X53();
    }
    else {
      X50();
    }
  }
}

void X50() {
  flip (77/250) {
    if (b) {
      X51();
    }
    else {
      X45();
    }
  }
}

void X51() {
  flip (97/500) {
    if (a) {
      X45();
    }
    else {
      X51();
    }
  }
}

void X52() {
  X50();
  X46();
}

void X53() {
  X52();
  X53();
}

void X54() {
  flip (987/1000) {
    b = true;
    X54();
  }
  else {
    a = true;
    X56();
  }
}

void X55() {
  flip (221/250) {
    a = true;
    X59();
  }
  else {
    b = true;
    X58();
  }
}

void X56() {
  flip (163/200) {
    a = true;
    X54();
  }
  else {
    b = true;
    X51();
  }
}

void X57() {
  flip (123/250) {
    if (b) {
      X57();
    }
    else {
      X54();
    }
  }
}

void X58() {
  flip (231/250) {
    a = true;
    X58();
  }
  else {
    b = false;
    X52();
  }
}

void X59() {
  flip (1/500) {
    if (b) {
      X64();
    }
    else {
      X53();
    }
  }
}

void X60() {
  flip (739/1000) {
    b = false;
    X54();
  }
  else {
    a = false;
    X60();
  }
}

void X61() {
  flip (317/500) {
    b = false;
    X62();
  }
  else {
    b = true;
    X66();
  }
}

void X62() {
  flip (99/250) {
    if (a) {
      X56();
    }
    else {
      X66();
    }
  }
}

void X63() {
  flip (819/1000) {
    b = false;
    X58();
  }
  else {
    a = false;
    X68();
  }
}

void X64() {
  flip (19/25) {
    if (a) {
      X66();
    }
    else {
      X63();
    }
  }
}

void X65() {
  flip (921/1000) {
    b = false;
    X67();
  }
  else {
    a = false;
    X70();
  }
}

void X66() {
  X61();
  X70();
}

void X67() {
  flip (801/1000) {
    if (b) {
      X64();
    }
    else {
      X68();
    }
  }
}

void X68() {
  flip (819/1000) {
    a = true;
    X63();
  }
  else {
    b = false;
    X72();
  }
}

void X69() {
  flip (297/500) {
    a = false;
    X70();
  }
  else {
    a = false;
    X63();
  }
}

void X70() {
  flip (239/1000) {
    b = false;
    X66();
  }
  else {
    b = true;
    X74();
  }
}

void X71() {
  X73();
  X72();
}

void X72() {
  flip (829/1000) {
    a = false;
    X67();
  }
  else {
    a = false;
    X74();
  }
}

void X73() {
  X69();
  X67();
}

void X74() {
  flip (93/1000) {
    a = true;
    X72();
  }
  else {
    b = false;
    X69();
  }
}

void X75() {
  flip (407/1000) {
    a = false;
    X78();
  }
  else {
    b = true;
    X73();
  }
}

void X76() {
  X71();
  X76();
}

void X77() {
  flip (69/250) {
    if (b) {
      X76();
    }
    else {
      X73();
    }
  }
}

void X78() {
  flip (129/250) {
    a = true;
    X81();
  }
  else {
    b = false;
    X79();
  }
}

void X79() {
  flip (9/20) {
    if (a) {
      X79();
    }
    else {
      X80();
    }
  }
}

void X80() {
  flip (129/1000) {
    if (a) {
      X83();
    }
    else {
      X82();
    }
  }
}

void X81() {
  flip (1/5) {
    b = true;
    X86();
  }
  else {
    b = true;
    X78();
  }
}

void X82() {
  X79();
  X83();
}

void X83() {
  X81();
  X84();
}

void X84() {
  flip (57/500) {
    b = false;
    X83();
  }
  else {
    a = false;
    X89();
  }
}

void X85() {
  flip (169/500) {
    if (a) {
      X83();
    }
    else {
      X86();
    }
  }
}

void X86() {
  flip (163/1000) {
    if (a) {
      X84();
    }
    else {
      X84();
    }
  }
}

void X87() {
  flip (4/25) {
    if (b) {
      X89();
    }
    else {
      X85();
    }
  }
}

void X88() {
  flip (237/1000) {
    a = false;
    X91();
  }
  else {
    b = true;
    X83();
  }
}

void X89() {
  flip (1/100) {
    if (b) {
      X94();
    }
    else {
      X89();
    }
  }
}

void X90() {
  flip (83/200) {
    a = true;
    X91();
  }
  else {
    b = false;
    X94();
  }
}

void X91() {
  flip (2/25) {
    a = true;
    X94();
  }
  else {
    b = false;
    X91();
  }
}

void X92() {
  X88();
  X97();
}

void X93() {
  X93();
  X95();
}

void X94() {
  X93();
  X96();
}

void X95() {
  flip (3/8) {
    a = true;
    X92();
  }
  else {
    b = false;
    X96();
  }
}

void X96() {
  flip (101/200) {
    if (b) {
      X95();
    }
    else {
      X95();
    }
  }
}

void X97() {
  X97();
  X96();
}

void X98() {
  flip (463/1000) {
    if (a) {
      X96();
    }
    else {
      X2();
    }
  }
}

void X99() {
  flip (69/200) {
    if (a) {
      X96();
    }
    else {
      X96();
    }
  }
}
