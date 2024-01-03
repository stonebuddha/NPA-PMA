bool a;
bool b;

void X0() {
  X3();
  X1();
}

void X1() {
  flip (257/1000) {
    b = true;
    X99();
  }
  else {
    b = false;
    X4();
  }
}

void X2() {
  flip (11/100) {
    b = false;
    X6();
  }
  else {
    a = true;
    X7();
  }
}

void X3() {
  flip (69/1000) {
    a = false;
    X8();
  }
  else {
    b = false;
    X6();
  }
}

void X4() {
  X5();
  X6();
}

void X5() {
  flip (118/125) {
    if (b) {
      X99();
    }
    else {
      X1();
    }
  }
}

void X6() {
  flip (59/500) {
    if (a) {
      X2();
    }
    else {
      X8();
    }
  }
}

void X7() {
  flip (119/500) {
    b = true;
    X4();
  }
  else {
    a = true;
    X8();
  }
}

void X8() {
  flip (381/500) {
    b = false;
    X11();
  }
  else {
    b = false;
    X9();
  }
}

void X9() {
  flip (227/250) {
    if (b) {
      X11();
    }
    else {
      X9();
    }
  }
}

void X10() {
  flip (449/500) {
    if (a) {
      X10();
    }
    else {
      X13();
    }
  }
}

void X11() {
  flip (31/50) {
    if (b) {
      X10();
    }
    else {
      X11();
    }
  }
}

void X12() {
  flip (2/125) {
    if (b) {
      X8();
    }
    else {
      X13();
    }
  }
}

void X13() {
  flip (673/1000) {
    b = true;
    X18();
  }
  else {
    a = false;
    X16();
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
  X21();
  X13();
}

void X17() {
  X18();
  X12();
}

void X18() {
  X19();
  X20();
}

void X19() {
  X24();
  X15();
}

void X20() {
  X23();
  X20();
}

void X21() {
  X15();
  X16();
}

void X22() {
  X24();
  X24();
}

void X23() {
  flip (231/250) {
    b = true;
    X26();
  }
  else {
    a = false;
    X17();
  }
}

void X24() {
  X20();
  X23();
}

void X25() {
  flip (32/125) {
    a = true;
    X27();
  }
  else {
    a = false;
    X20();
  }
}

void X26() {
  flip (781/1000) {
    a = true;
    X23();
  }
  else {
    b = false;
    X27();
  }
}

void X27() {
  X31();
  X26();
}

void X28() {
  flip (41/250) {
    if (a) {
      X25();
    }
    else {
      X27();
    }
  }
}

void X29() {
  flip (109/1000) {
    if (b) {
      X28();
    }
    else {
      X32();
    }
  }
}

void X30() {
  flip (377/1000) {
    b = false;
    X27();
  }
  else {
    b = false;
    X29();
  }
}

void X31() {
  flip (3/10) {
    a = true;
    X27();
  }
  else {
    b = true;
    X30();
  }
}

void X32() {
  flip (227/1000) {
    b = false;
    X35();
  }
  else {
    a = true;
    X37();
  }
}

void X33() {
  X33();
  X33();
}

void X34() {
  flip (66/125) {
    if (b) {
      X39();
    }
    else {
      X33();
    }
  }
}

void X35() {
  X38();
  X40();
}

void X36() {
  flip (573/1000) {
    a = true;
    X30();
  }
  else {
    a = false;
    X34();
  }
}

void X37() {
  X35();
  X32();
}

void X38() {
  X41();
  X40();
}

void X39() {
  X44();
  X42();
}

void X40() {
  X40();
  X39();
}

void X41() {
  flip (291/500) {
    if (a) {
      X40();
    }
    else {
      X39();
    }
  }
}

void X42() {
  X39();
  X41();
}

void X43() {
  flip (673/1000) {
    b = false;
    X44();
  }
  else {
    a = true;
    X40();
  }
}

void X44() {
  flip (21/25) {
    b = true;
    X44();
  }
  else {
    a = false;
    X46();
  }
}

void X45() {
  flip (21/100) {
    if (a) {
      X48();
    }
    else {
      X50();
    }
  }
}

void X46() {
  flip (8/125) {
    a = true;
    X51();
  }
  else {
    b = true;
    X43();
  }
}

void X47() {
  X46();
  X47();
}

void X48() {
  flip (517/1000) {
    if (b) {
      X50();
    }
    else {
      X45();
    }
  }
}

void X49() {
  flip (83/250) {
    if (b) {
      X53();
    }
    else {
      X49();
    }
  }
}

void X50() {
  X49();
  X51();
}

void X51() {
  flip (611/1000) {
    b = false;
    X47();
  }
  else {
    a = false;
    X48();
  }
}

void X52() {
  flip (789/1000) {
    a = true;
    X49();
  }
  else {
    a = false;
    X55();
  }
}

void X53() {
  flip (363/1000) {
    a = true;
    X49();
  }
  else {
    b = false;
    X52();
  }
}

void X54() {
  flip (827/1000) {
    if (b) {
      X49();
    }
    else {
      X52();
    }
  }
}

void X55() {
  X60();
  X51();
}

void X56() {
  X61();
  X52();
}

void X57() {
  flip (339/1000) {
    a = true;
    X51();
  }
  else {
    a = true;
    X56();
  }
}

void X58() {
  X56();
  X53();
}

void X59() {
  flip (153/1000) {
    b = false;
    X63();
  }
  else {
    b = false;
    X64();
  }
}

void X60() {
  flip (789/1000) {
    if (a) {
      X63();
    }
    else {
      X63();
    }
  }
}

void X61() {
  flip (9/25) {
    if (a) {
      X61();
    }
    else {
      X57();
    }
  }
}

void X62() {
  flip (409/500) {
    b = true;
    X63();
  }
  else {
    b = false;
    X61();
  }
}

void X63() {
  flip (223/500) {
    b = true;
    X60();
  }
  else {
    b = false;
    X57();
  }
}

void X64() {
  flip (113/250) {
    b = true;
    X62();
  }
  else {
    b = false;
    X64();
  }
}

void X65() {
  X69();
  X70();
}

void X66() {
  flip (299/500) {
    a = true;
    X69();
  }
  else {
    a = false;
    X60();
  }
}

void X67() {
  X68();
  X71();
}

void X68() {
  flip (53/250) {
    if (a) {
      X71();
    }
    else {
      X65();
    }
  }
}

void X69() {
  flip (97/200) {
    if (b) {
      X72();
    }
    else {
      X66();
    }
  }
}

void X70() {
  flip (467/500) {
    if (a) {
      X65();
    }
    else {
      X65();
    }
  }
}

void X71() {
  flip (523/1000) {
    b = false;
    X66();
  }
  else {
    a = false;
    X73();
  }
}

void X72() {
  flip (639/1000) {
    b = false;
    X69();
  }
  else {
    a = false;
    X77();
  }
}

void X73() {
  flip (179/1000) {
    if (a) {
      X74();
    }
    else {
      X76();
    }
  }
}

void X74() {
  X70();
  X70();
}

void X75() {
  flip (123/1000) {
    a = false;
    X77();
  }
  else {
    a = false;
    X75();
  }
}

void X76() {
  flip (849/1000) {
    a = true;
    X81();
  }
  else {
    a = true;
    X74();
  }
}

void X77() {
  flip (119/200) {
    a = false;
    X79();
  }
  else {
    b = false;
    X78();
  }
}

void X78() {
  flip (903/1000) {
    if (b) {
      X79();
    }
    else {
      X83();
    }
  }
}

void X79() {
  flip (157/500) {
    a = false;
    X81();
  }
  else {
    b = true;
    X77();
  }
}

void X80() {
  X76();
  X77();
}

void X81() {
  flip (131/1000) {
    if (b) {
      X83();
    }
    else {
      X82();
    }
  }
}

void X82() {
  flip (39/250) {
    if (a) {
      X83();
    }
    else {
      X82();
    }
  }
}

void X83() {
  X78();
  X88();
}

void X84() {
  flip (127/500) {
    if (b) {
      X78();
    }
    else {
      X82();
    }
  }
}

void X85() {
  flip (891/1000) {
    b = false;
    X82();
  }
  else {
    a = false;
    X80();
  }
}

void X86() {
  X83();
  X88();
}

void X87() {
  X88();
  X87();
}

void X88() {
  flip (123/1000) {
    b = false;
    X86();
  }
  else {
    b = true;
    X86();
  }
}

void X89() {
  X94();
  X87();
}

void X90() {
  flip (113/1000) {
    if (a) {
      X93();
    }
    else {
      X84();
    }
  }
}

void X91() {
  flip (477/500) {
    if (a) {
      X90();
    }
    else {
      X92();
    }
  }
}

void X92() {
  flip (303/1000) {
    b = true;
    X92();
  }
  else {
    a = true;
    X95();
  }
}

void X93() {
  flip (137/500) {
    a = true;
    X98();
  }
  else {
    a = true;
    X87();
  }
}

void X94() {
  flip (88/125) {
    if (a) {
      X99();
    }
    else {
      X91();
    }
  }
}

void X95() {
  flip (9/25) {
    if (b) {
      X93();
    }
    else {
      X95();
    }
  }
}

void X96() {
  X93();
  X94();
}

void X97() {
  flip (717/1000) {
    a = false;
    X95();
  }
  else {
    a = false;
    X99();
  }
}

void X98() {
  flip (453/1000) {
    if (b) {
      X95();
    }
    else {
      X98();
    }
  }
}

void X99() {
  flip (531/1000) {
    if (b) {
      X99();
    }
    else {
      X94();
    }
  }
}
