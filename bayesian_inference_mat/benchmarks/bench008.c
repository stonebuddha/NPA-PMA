bool a;
bool b;

void X0() {
  flip (399/1000) {
    if (a) {
      X0();
    }
    else {
      X2();
    }
  }
}

void X1() {
  flip (429/500) {
    if (b) {
      X2();
    }
    else {
      X2();
    }
  }
}

void X2() {
  flip (771/1000) {
    b = false;
    X7();
  }
  else {
    b = false;
    X98();
  }
}

void X3() {
  X7();
  X5();
}

void X4() {
  X9();
  X6();
}

void X5() {
  X7();
  X7();
}

void X6() {
  X9();
  X1();
}

void X7() {
  X5();
  X5();
}

void X8() {
  flip (591/1000) {
    a = false;
    X2();
  }
  else {
    b = true;
    X7();
  }
}

void X9() {
  X9();
  X6();
}

void X10() {
  flip (123/125) {
    if (a) {
      X8();
    }
    else {
      X5();
    }
  }
}

void X11() {
  flip (14/25) {
    if (a) {
      X14();
    }
    else {
      X13();
    }
  }
}

void X12() {
  flip (367/500) {
    a = true;
    X8();
  }
  else {
    a = true;
    X6();
  }
}

void X13() {
  flip (223/500) {
    b = true;
    X7();
  }
  else {
    b = true;
    X9();
  }
}

void X14() {
  flip (53/500) {
    if (b) {
      X14();
    }
    else {
      X12();
    }
  }
}

void X15() {
  flip (83/125) {
    a = true;
    X10();
  }
  else {
    b = false;
    X20();
  }
}

void X16() {
  flip (17/100) {
    b = false;
    X20();
  }
  else {
    b = true;
    X18();
  }
}

void X17() {
  flip (37/40) {
    if (b) {
      X12();
    }
    else {
      X21();
    }
  }
}

void X18() {
  flip (47/500) {
    a = false;
    X18();
  }
  else {
    a = true;
    X13();
  }
}

void X19() {
  X22();
  X19();
}

void X20() {
  flip (269/1000) {
    if (a) {
      X22();
    }
    else {
      X22();
    }
  }
}

void X21() {
  flip (497/500) {
    a = true;
    X21();
  }
  else {
    a = false;
    X26();
  }
}

void X22() {
  flip (9/25) {
    b = true;
    X21();
  }
  else {
    b = true;
    X26();
  }
}

void X23() {
  flip (633/1000) {
    a = false;
    X18();
  }
  else {
    a = true;
    X21();
  }
}

void X24() {
  flip (671/1000) {
    a = false;
    X28();
  }
  else {
    a = false;
    X25();
  }
}

void X25() {
  X26();
  X30();
}

void X26() {
  flip (141/1000) {
    if (a) {
      X22();
    }
    else {
      X20();
    }
  }
}

void X27() {
  flip (149/500) {
    b = true;
    X27();
  }
  else {
    a = false;
    X32();
  }
}

void X28() {
  flip (163/200) {
    b = false;
    X28();
  }
  else {
    b = false;
    X23();
  }
}

void X29() {
  X32();
  X25();
}

void X30() {
  flip (31/250) {
    a = false;
    X33();
  }
  else {
    b = true;
    X29();
  }
}

void X31() {
  flip (19/100) {
    if (b) {
      X30();
    }
    else {
      X26();
    }
  }
}

void X32() {
  flip (44/125) {
    b = false;
    X29();
  }
  else {
    a = true;
    X29();
  }
}

void X33() {
  flip (93/250) {
    if (a) {
      X37();
    }
    else {
      X33();
    }
  }
}

void X34() {
  X31();
  X38();
}

void X35() {
  X34();
  X35();
}

void X36() {
  flip (151/1000) {
    b = true;
    X36();
  }
  else {
    a = false;
    X30();
  }
}

void X37() {
  X34();
  X37();
}

void X38() {
  flip (251/1000) {
    b = true;
    X43();
  }
  else {
    a = true;
    X33();
  }
}

void X39() {
  X36();
  X40();
}

void X40() {
  X37();
  X34();
}

void X41() {
  flip (7/8) {
    if (a) {
      X44();
    }
    else {
      X36();
    }
  }
}

void X42() {
  flip (61/100) {
    if (b) {
      X42();
    }
    else {
      X44();
    }
  }
}

void X43() {
  flip (3/50) {
    a = false;
    X41();
  }
  else {
    a = false;
    X48();
  }
}

void X44() {
  flip (303/500) {
    a = true;
    X48();
  }
  else {
    b = false;
    X46();
  }
}

void X45() {
  X49();
  X44();
}

void X46() {
  flip (173/200) {
    if (b) {
      X40();
    }
    else {
      X41();
    }
  }
}

void X47() {
  X43();
  X49();
}

void X48() {
  flip (123/500) {
    if (a) {
      X52();
    }
    else {
      X48();
    }
  }
}

void X49() {
  flip (61/1000) {
    a = true;
    X44();
  }
  else {
    b = true;
    X49();
  }
}

void X50() {
  flip (347/500) {
    if (b) {
      X53();
    }
    else {
      X55();
    }
  }
}

void X51() {
  X45();
  X56();
}

void X52() {
  flip (243/250) {
    a = true;
    X48();
  }
  else {
    b = false;
    X50();
  }
}

void X53() {
  flip (781/1000) {
    if (b) {
      X53();
    }
    else {
      X51();
    }
  }
}

void X54() {
  flip (79/500) {
    if (b) {
      X53();
    }
    else {
      X57();
    }
  }
}

void X55() {
  flip (527/1000) {
    b = true;
    X58();
  }
  else {
    b = true;
    X58();
  }
}

void X56() {
  flip (693/1000) {
    a = true;
    X56();
  }
  else {
    a = true;
    X58();
  }
}

void X57() {
  X62();
  X53();
}

void X58() {
  flip (341/500) {
    b = true;
    X63();
  }
  else {
    b = false;
    X55();
  }
}

void X59() {
  flip (227/1000) {
    b = false;
    X58();
  }
  else {
    a = false;
    X59();
  }
}

void X60() {
  flip (293/500) {
    b = false;
    X63();
  }
  else {
    a = false;
    X64();
  }
}

void X61() {
  flip (681/1000) {
    b = true;
    X61();
  }
  else {
    b = true;
    X60();
  }
}

void X62() {
  flip (7/200) {
    if (a) {
      X57();
    }
    else {
      X63();
    }
  }
}

void X63() {
  flip (47/250) {
    if (b) {
      X64();
    }
    else {
      X57();
    }
  }
}

void X64() {
  flip (143/500) {
    if (b) {
      X61();
    }
    else {
      X65();
    }
  }
}

void X65() {
  flip (297/500) {
    a = true;
    X63();
  }
  else {
    b = true;
    X64();
  }
}

void X66() {
  flip (19/40) {
    b = true;
    X64();
  }
  else {
    b = true;
    X70();
  }
}

void X67() {
  X66();
  X64();
}

void X68() {
  flip (81/125) {
    b = true;
    X63();
  }
  else {
    a = false;
    X63();
  }
}

void X69() {
  flip (17/100) {
    b = false;
    X70();
  }
  else {
    a = false;
    X68();
  }
}

void X70() {
  flip (107/125) {
    if (a) {
      X69();
    }
    else {
      X65();
    }
  }
}

void X71() {
  flip (317/1000) {
    if (a) {
      X72();
    }
    else {
      X70();
    }
  }
}

void X72() {
  flip (159/1000) {
    a = true;
    X75();
  }
  else {
    b = false;
    X71();
  }
}

void X73() {
  flip (79/125) {
    b = false;
    X67();
  }
  else {
    b = false;
    X78();
  }
}

void X74() {
  X74();
  X76();
}

void X75() {
  X74();
  X69();
}

void X76() {
  X71();
  X76();
}

void X77() {
  flip (321/1000) {
    b = true;
    X76();
  }
  else {
    a = true;
    X75();
  }
}

void X78() {
  flip (11/250) {
    b = false;
    X82();
  }
  else {
    b = false;
    X77();
  }
}

void X79() {
  X74();
  X82();
}

void X80() {
  flip (107/200) {
    b = true;
    X77();
  }
  else {
    b = true;
    X85();
  }
}

void X81() {
  flip (117/1000) {
    if (b) {
      X82();
    }
    else {
      X86();
    }
  }
}

void X82() {
  flip (199/250) {
    a = true;
    X85();
  }
  else {
    b = false;
    X84();
  }
}

void X83() {
  X86();
  X80();
}

void X84() {
  flip (91/250) {
    if (a) {
      X88();
    }
    else {
      X87();
    }
  }
}

void X85() {
  flip (317/500) {
    if (a) {
      X88();
    }
    else {
      X89();
    }
  }
}

void X86() {
  X91();
  X86();
}

void X87() {
  flip (123/200) {
    if (a) {
      X83();
    }
    else {
      X88();
    }
  }
}

void X88() {
  flip (783/1000) {
    if (b) {
      X93();
    }
    else {
      X83();
    }
  }
}

void X89() {
  flip (173/500) {
    if (b) {
      X92();
    }
    else {
      X93();
    }
  }
}

void X90() {
  X87();
  X94();
}

void X91() {
  X96();
  X95();
}

void X92() {
  flip (707/1000) {
    if (b) {
      X87();
    }
    else {
      X90();
    }
  }
}

void X93() {
  flip (79/125) {
    if (a) {
      X95();
    }
    else {
      X93();
    }
  }
}

void X94() {
  flip (47/100) {
    if (b) {
      X89();
    }
    else {
      X90();
    }
  }
}

void X95() {
  flip (91/100) {
    if (a) {
      X90();
    }
    else {
      X94();
    }
  }
}

void X96() {
  flip (199/200) {
    if (a) {
      X97();
    }
    else {
      X92();
    }
  }
}

void X97() {
  flip (103/125) {
    a = false;
    X91();
  }
  else {
    a = false;
    X0();
  }
}

void X98() {
  X95();
  X0();
}

void X99() {
  X2();
  X95();
}
