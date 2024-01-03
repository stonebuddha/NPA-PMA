bool a;
bool b;

void X0() {
  X3();
  X1();
}

void X1() {
  flip (823/1000) {
    if (a) {
      X99();
    }
    else {
      X5();
    }
  }
}

void X2() {
  flip (23/100) {
    if (b) {
      X5();
    }
    else {
      X7();
    }
  }
}

void X3() {
  flip (31/500) {
    if (b) {
      X97();
    }
    else {
      X8();
    }
  }
}

void X4() {
  flip (589/1000) {
    b = true;
    X1();
  }
  else {
    a = true;
    X4();
  }
}

void X5() {
  X5();
  X9();
}

void X6() {
  X6();
  X9();
}

void X7() {
  flip (79/500) {
    if (b) {
      X10();
    }
    else {
      X5();
    }
  }
}

void X8() {
  flip (349/1000) {
    if (b) {
      X13();
    }
    else {
      X4();
    }
  }
}

void X9() {
  flip (647/1000) {
    b = false;
    X14();
  }
  else {
    b = true;
    X14();
  }
}

void X10() {
  flip (33/200) {
    if (a) {
      X11();
    }
    else {
      X4();
    }
  }
}

void X11() {
  flip (17/100) {
    if (a) {
      X6();
    }
    else {
      X13();
    }
  }
}

void X12() {
  flip (497/500) {
    if (a) {
      X8();
    }
    else {
      X9();
    }
  }
}

void X13() {
  flip (797/1000) {
    if (b) {
      X10();
    }
    else {
      X9();
    }
  }
}

void X14() {
  flip (87/250) {
    a = true;
    X9();
  }
  else {
    b = false;
    X9();
  }
}

void X15() {
  flip (133/200) {
    if (a) {
      X15();
    }
    else {
      X15();
    }
  }
}

void X16() {
  flip (227/250) {
    a = false;
    X10();
  }
  else {
    b = false;
    X13();
  }
}

void X17() {
  X12();
  X19();
}

void X18() {
  flip (27/500) {
    b = true;
    X16();
  }
  else {
    a = true;
    X14();
  }
}

void X19() {
  flip (393/500) {
    a = false;
    X13();
  }
  else {
    b = true;
    X20();
  }
}

void X20() {
  X21();
  X16();
}

void X21() {
  X19();
  X23();
}

void X22() {
  flip (203/500) {
    a = true;
    X20();
  }
  else {
    b = true;
    X22();
  }
}

void X23() {
  X26();
  X24();
}

void X24() {
  X22();
  X21();
}

void X25() {
  flip (6/125) {
    if (b) {
      X30();
    }
    else {
      X28();
    }
  }
}

void X26() {
  flip (9/25) {
    if (b) {
      X22();
    }
    else {
      X20();
    }
  }
}

void X27() {
  X25();
  X32();
}

void X28() {
  flip (71/100) {
    b = false;
    X31();
  }
  else {
    a = false;
    X24();
  }
}

void X29() {
  X28();
  X29();
}

void X30() {
  X31();
  X35();
}

void X31() {
  X31();
  X27();
}

void X32() {
  X28();
  X29();
}

void X33() {
  flip (119/125) {
    b = true;
    X29();
  }
  else {
    b = false;
    X35();
  }
}

void X34() {
  flip (399/1000) {
    if (a) {
      X39();
    }
    else {
      X39();
    }
  }
}

void X35() {
  X39();
  X37();
}

void X36() {
  flip (111/1000) {
    if (b) {
      X40();
    }
    else {
      X35();
    }
  }
}

void X37() {
  flip (393/1000) {
    if (b) {
      X33();
    }
    else {
      X31();
    }
  }
}

void X38() {
  flip (39/500) {
    if (b) {
      X32();
    }
    else {
      X36();
    }
  }
}

void X39() {
  flip (157/1000) {
    a = false;
    X39();
  }
  else {
    b = false;
    X36();
  }
}

void X40() {
  X34();
  X39();
}

void X41() {
  X41();
  X42();
}

void X42() {
  flip (339/500) {
    a = false;
    X41();
  }
  else {
    a = false;
    X41();
  }
}

void X43() {
  flip (79/1000) {
    a = true;
    X46();
  }
  else {
    a = false;
    X48();
  }
}

void X44() {
  X49();
  X46();
}

void X45() {
  flip (13/100) {
    b = false;
    X49();
  }
  else {
    a = true;
    X39();
  }
}

void X46() {
  flip (26/125) {
    if (b) {
      X48();
    }
    else {
      X51();
    }
  }
}

void X47() {
  X47();
  X50();
}

void X48() {
  flip (173/200) {
    a = false;
    X52();
  }
  else {
    a = true;
    X49();
  }
}

void X49() {
  flip (231/1000) {
    if (a) {
      X54();
    }
    else {
      X54();
    }
  }
}

void X50() {
  flip (17/50) {
    b = true;
    X47();
  }
  else {
    b = false;
    X46();
  }
}

void X51() {
  X55();
  X53();
}

void X52() {
  X49();
  X46();
}

void X53() {
  flip (69/125) {
    if (b) {
      X50();
    }
    else {
      X54();
    }
  }
}

void X54() {
  flip (449/1000) {
    a = false;
    X51();
  }
  else {
    b = true;
    X53();
  }
}

void X55() {
  X56();
  X55();
}

void X56() {
  flip (89/200) {
    if (a) {
      X56();
    }
    else {
      X50();
    }
  }
}

void X57() {
  flip (7/100) {
    a = true;
    X58();
  }
  else {
    b = false;
    X52();
  }
}

void X58() {
  X53();
  X56();
}

void X59() {
  X54();
  X58();
}

void X60() {
  flip (47/1000) {
    if (b) {
      X57();
    }
    else {
      X64();
    }
  }
}

void X61() {
  flip (371/500) {
    b = false;
    X65();
  }
  else {
    a = true;
    X63();
  }
}

void X62() {
  X62();
  X56();
}

void X63() {
  flip (371/500) {
    if (b) {
      X65();
    }
    else {
      X62();
    }
  }
}

void X64() {
  X60();
  X67();
}

void X65() {
  X63();
  X70();
}

void X66() {
  X66();
  X71();
}

void X67() {
  X69();
  X63();
}

void X68() {
  flip (103/250) {
    if (b) {
      X63();
    }
    else {
      X66();
    }
  }
}

void X69() {
  flip (219/500) {
    b = true;
    X63();
  }
  else {
    b = false;
    X72();
  }
}

void X70() {
  flip (711/1000) {
    a = true;
    X72();
  }
  else {
    a = true;
    X67();
  }
}

void X71() {
  flip (653/1000) {
    b = true;
    X66();
  }
  else {
    a = true;
    X71();
  }
}

void X72() {
  X73();
  X76();
}

void X73() {
  flip (97/500) {
    a = true;
    X75();
  }
  else {
    b = false;
    X77();
  }
}

void X74() {
  X69();
  X73();
}

void X75() {
  flip (907/1000) {
    a = true;
    X70();
  }
  else {
    a = true;
    X70();
  }
}

void X76() {
  flip (83/250) {
    if (b) {
      X76();
    }
    else {
      X78();
    }
  }
}

void X77() {
  X73();
  X81();
}

void X78() {
  flip (39/1000) {
    if (a) {
      X77();
    }
    else {
      X76();
    }
  }
}

void X79() {
  X75();
  X77();
}

void X80() {
  X77();
  X76();
}

void X81() {
  X86();
  X86();
}

void X82() {
  X77();
  X76();
}

void X83() {
  flip (79/125) {
    if (b) {
      X79();
    }
    else {
      X85();
    }
  }
}

void X84() {
  X79();
  X86();
}

void X85() {
  X89();
  X85();
}

void X86() {
  flip (37/100) {
    if (a) {
      X80();
    }
    else {
      X80();
    }
  }
}

void X87() {
  X86();
  X82();
}

void X88() {
  flip (31/50) {
    if (a) {
      X92();
    }
    else {
      X86();
    }
  }
}

void X89() {
  flip (127/500) {
    if (a) {
      X83();
    }
    else {
      X86();
    }
  }
}

void X90() {
  flip (99/100) {
    if (b) {
      X95();
    }
    else {
      X86();
    }
  }
}

void X91() {
  X95();
  X87();
}

void X92() {
  flip (791/1000) {
    a = false;
    X92();
  }
  else {
    b = false;
    X97();
  }
}

void X93() {
  flip (34/125) {
    b = true;
    X89();
  }
  else {
    a = false;
    X97();
  }
}

void X94() {
  flip (2/25) {
    if (b) {
      X96();
    }
    else {
      X91();
    }
  }
}

void X95() {
  X97();
  X89();
}

void X96() {
  X92();
  X95();
}

void X97() {
  flip (193/250) {
    a = true;
    X0();
  }
  else {
    a = false;
    X0();
  }
}

void X98() {
  X95();
  X93();
}

void X99() {
  X0();
  X4();
}
