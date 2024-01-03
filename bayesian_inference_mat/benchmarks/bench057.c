bool a;
bool b;

void X0() {
  flip (413/1000) {
    if (a) {
      X97();
    }
    else {
      X94();
    }
  }
}

void X1() {
  flip (363/500) {
    b = true;
    X5();
  }
  else {
    b = true;
    X1();
  }
}

void X2() {
  X1();
  X96();
}

void X3() {
  flip (219/1000) {
    if (a) {
      X98();
    }
    else {
      X2();
    }
  }
}

void X4() {
  flip (101/1000) {
    if (b) {
      X0();
    }
    else {
      X6();
    }
  }
}

void X5() {
  flip (16/125) {
    if (b) {
      X8();
    }
    else {
      X10();
    }
  }
}

void X6() {
  X0();
  X2();
}

void X7() {
  flip (157/1000) {
    a = false;
    X6();
  }
  else {
    a = false;
    X9();
  }
}

void X8() {
  flip (107/200) {
    if (b) {
      X4();
    }
    else {
      X12();
    }
  }
}

void X9() {
  flip (51/125) {
    a = true;
    X12();
  }
  else {
    b = true;
    X5();
  }
}

void X10() {
  X11();
  X12();
}

void X11() {
  flip (53/1000) {
    a = true;
    X9();
  }
  else {
    a = false;
    X12();
  }
}

void X12() {
  flip (49/125) {
    b = true;
    X14();
  }
  else {
    b = false;
    X8();
  }
}

void X13() {
  X13();
  X16();
}

void X14() {
  X19();
  X15();
}

void X15() {
  flip (69/500) {
    b = false;
    X16();
  }
  else {
    b = false;
    X15();
  }
}

void X16() {
  X21();
  X20();
}

void X17() {
  flip (223/250) {
    a = true;
    X17();
  }
  else {
    a = false;
    X19();
  }
}

void X18() {
  flip (71/250) {
    if (a) {
      X17();
    }
    else {
      X12();
    }
  }
}

void X19() {
  X22();
  X21();
}

void X20() {
  flip (307/500) {
    a = false;
    X20();
  }
  else {
    a = false;
    X17();
  }
}

void X21() {
  flip (213/250) {
    if (a) {
      X26();
    }
    else {
      X25();
    }
  }
}

void X22() {
  X24();
  X24();
}

void X23() {
  flip (23/50) {
    if (a) {
      X28();
    }
    else {
      X17();
    }
  }
}

void X24() {
  X19();
  X28();
}

void X25() {
  flip (793/1000) {
    b = true;
    X30();
  }
  else {
    a = true;
    X19();
  }
}

void X26() {
  X27();
  X26();
}

void X27() {
  flip (89/200) {
    a = false;
    X28();
  }
  else {
    a = true;
    X25();
  }
}

void X28() {
  flip (129/1000) {
    a = false;
    X27();
  }
  else {
    b = false;
    X26();
  }
}

void X29() {
  X27();
  X27();
}

void X30() {
  flip (151/500) {
    if (b) {
      X27();
    }
    else {
      X33();
    }
  }
}

void X31() {
  X27();
  X29();
}

void X32() {
  flip (197/200) {
    b = true;
    X34();
  }
  else {
    b = true;
    X33();
  }
}

void X33() {
  X34();
  X27();
}

void X34() {
  X31();
  X38();
}

void X35() {
  X37();
  X32();
}

void X36() {
  X32();
  X30();
}

void X37() {
  X39();
  X39();
}

void X38() {
  X37();
  X43();
}

void X39() {
  flip (161/1000) {
    if (a) {
      X34();
    }
    else {
      X44();
    }
  }
}

void X40() {
  flip (259/1000) {
    if (b) {
      X44();
    }
    else {
      X38();
    }
  }
}

void X41() {
  flip (89/200) {
    if (a) {
      X39();
    }
    else {
      X43();
    }
  }
}

void X42() {
  flip (11/25) {
    b = false;
    X37();
  }
  else {
    b = false;
    X44();
  }
}

void X43() {
  X44();
  X39();
}

void X44() {
  flip (69/500) {
    a = true;
    X49();
  }
  else {
    b = true;
    X40();
  }
}

void X45() {
  flip (291/1000) {
    a = true;
    X43();
  }
  else {
    a = true;
    X42();
  }
}

void X46() {
  X50();
  X51();
}

void X47() {
  flip (817/1000) {
    a = true;
    X43();
  }
  else {
    a = false;
    X45();
  }
}

void X48() {
  flip (409/1000) {
    a = true;
    X51();
  }
  else {
    a = false;
    X42();
  }
}

void X49() {
  flip (483/500) {
    b = false;
    X45();
  }
  else {
    b = true;
    X43();
  }
}

void X50() {
  X53();
  X49();
}

void X51() {
  flip (487/1000) {
    b = true;
    X56();
  }
  else {
    a = false;
    X46();
  }
}

void X52() {
  flip (407/1000) {
    b = true;
    X50();
  }
  else {
    b = false;
    X52();
  }
}

void X53() {
  X51();
  X52();
}

void X54() {
  flip (451/1000) {
    a = true;
    X59();
  }
  else {
    b = false;
    X51();
  }
}

void X55() {
  flip (303/1000) {
    if (b) {
      X58();
    }
    else {
      X56();
    }
  }
}

void X56() {
  flip (743/1000) {
    if (b) {
      X51();
    }
    else {
      X57();
    }
  }
}

void X57() {
  flip (59/500) {
    b = false;
    X54();
  }
  else {
    b = false;
    X56();
  }
}

void X58() {
  flip (23/40) {
    if (a) {
      X60();
    }
    else {
      X62();
    }
  }
}

void X59() {
  flip (231/1000) {
    if (a) {
      X60();
    }
    else {
      X62();
    }
  }
}

void X60() {
  flip (141/250) {
    a = true;
    X59();
  }
  else {
    a = false;
    X60();
  }
}

void X61() {
  flip (3/50) {
    if (b) {
      X58();
    }
    else {
      X57();
    }
  }
}

void X62() {
  flip (81/125) {
    if (a) {
      X63();
    }
    else {
      X61();
    }
  }
}

void X63() {
  flip (137/1000) {
    a = true;
    X57();
  }
  else {
    a = true;
    X65();
  }
}

void X64() {
  X67();
  X62();
}

void X65() {
  X62();
  X67();
}

void X66() {
  X62();
  X60();
}

void X67() {
  X72();
  X72();
}

void X68() {
  flip (41/125) {
    b = true;
    X66();
  }
  else {
    b = true;
    X69();
  }
}

void X69() {
  flip (179/250) {
    a = true;
    X69();
  }
  else {
    b = true;
    X71();
  }
}

void X70() {
  flip (587/1000) {
    if (a) {
      X66();
    }
    else {
      X70();
    }
  }
}

void X71() {
  flip (343/1000) {
    if (a) {
      X71();
    }
    else {
      X68();
    }
  }
}

void X72() {
  X71();
  X69();
}

void X73() {
  X70();
  X69();
}

void X74() {
  flip (118/125) {
    if (b) {
      X72();
    }
    else {
      X72();
    }
  }
}

void X75() {
  flip (353/500) {
    a = true;
    X69();
  }
  else {
    b = true;
    X76();
  }
}

void X76() {
  X80();
  X70();
}

void X77() {
  flip (903/1000) {
    if (a) {
      X78();
    }
    else {
      X75();
    }
  }
}

void X78() {
  X82();
  X83();
}

void X79() {
  flip (147/500) {
    if (a) {
      X76();
    }
    else {
      X75();
    }
  }
}

void X80() {
  flip (151/1000) {
    a = false;
    X81();
  }
  else {
    a = true;
    X74();
  }
}

void X81() {
  flip (393/500) {
    if (a) {
      X82();
    }
    else {
      X77();
    }
  }
}

void X82() {
  flip (51/125) {
    b = false;
    X84();
  }
  else {
    a = false;
    X76();
  }
}

void X83() {
  X88();
  X87();
}

void X84() {
  flip (781/1000) {
    if (b) {
      X78();
    }
    else {
      X80();
    }
  }
}

void X85() {
  flip (917/1000) {
    if (a) {
      X82();
    }
    else {
      X88();
    }
  }
}

void X86() {
  X88();
  X87();
}

void X87() {
  flip (1/125) {
    if (a) {
      X84();
    }
    else {
      X81();
    }
  }
}

void X88() {
  flip (283/500) {
    if (a) {
      X90();
    }
    else {
      X89();
    }
  }
}

void X89() {
  X93();
  X88();
}

void X90() {
  flip (597/1000) {
    b = false;
    X95();
  }
  else {
    a = true;
    X86();
  }
}

void X91() {
  flip (13/20) {
    a = false;
    X88();
  }
  else {
    b = false;
    X96();
  }
}

void X92() {
  flip (163/500) {
    a = false;
    X97();
  }
  else {
    b = true;
    X86();
  }
}

void X93() {
  flip (333/1000) {
    b = true;
    X96();
  }
  else {
    a = false;
    X92();
  }
}

void X94() {
  flip (487/500) {
    if (a) {
      X88();
    }
    else {
      X98();
    }
  }
}

void X95() {
  flip (999/1000) {
    b = false;
    X96();
  }
  else {
    a = false;
    X92();
  }
}

void X96() {
  flip (53/500) {
    b = true;
    X95();
  }
  else {
    b = true;
    X90();
  }
}

void X97() {
  flip (191/1000) {
    if (a) {
      X94();
    }
    else {
      X0();
    }
  }
}

void X98() {
  flip (12/125) {
    if (a) {
      X95();
    }
    else {
      X92();
    }
  }
}

void X99() {
  X1();
  X98();
}
