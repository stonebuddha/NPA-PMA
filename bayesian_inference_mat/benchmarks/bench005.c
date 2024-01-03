bool a;
bool b;

void X0() {
  flip (29/250) {
    b = true;
    X4();
  }
  else {
    a = true;
    X2();
  }
}

void X1() {
  X96();
  X4();
}

void X2() {
  X4();
  X99();
}

void X3() {
  X5();
  X98();
}

void X4() {
  flip (309/1000) {
    b = true;
    X3();
  }
  else {
    a = false;
    X9();
  }
}

void X5() {
  X10();
  X9();
}

void X6() {
  X11();
  X2();
}

void X7() {
  X6();
  X5();
}

void X8() {
  flip (477/500) {
    if (a) {
      X9();
    }
    else {
      X13();
    }
  }
}

void X9() {
  flip (401/1000) {
    a = false;
    X14();
  }
  else {
    b = true;
    X6();
  }
}

void X10() {
  flip (411/500) {
    if (b) {
      X8();
    }
    else {
      X15();
    }
  }
}

void X11() {
  flip (487/1000) {
    a = false;
    X16();
  }
  else {
    a = false;
    X5();
  }
}

void X12() {
  flip (97/125) {
    if (a) {
      X16();
    }
    else {
      X13();
    }
  }
}

void X13() {
  X14();
  X17();
}

void X14() {
  X8();
  X14();
}

void X15() {
  flip (13/100) {
    b = false;
    X10();
  }
  else {
    b = true;
    X19();
  }
}

void X16() {
  flip (257/500) {
    a = false;
    X16();
  }
  else {
    b = false;
    X17();
  }
}

void X17() {
  flip (72/125) {
    a = false;
    X19();
  }
  else {
    a = false;
    X21();
  }
}

void X18() {
  X23();
  X15();
}

void X19() {
  flip (81/125) {
    b = false;
    X14();
  }
  else {
    a = true;
    X13();
  }
}

void X20() {
  flip (369/1000) {
    a = true;
    X14();
  }
  else {
    b = true;
    X14();
  }
}

void X21() {
  X24();
  X24();
}

void X22() {
  flip (919/1000) {
    if (b) {
      X23();
    }
    else {
      X19();
    }
  }
}

void X23() {
  X19();
  X28();
}

void X24() {
  X29();
  X23();
}

void X25() {
  flip (99/1000) {
    b = true;
    X20();
  }
  else {
    a = false;
    X28();
  }
}

void X26() {
  flip (7/10) {
    a = false;
    X20();
  }
  else {
    b = true;
    X22();
  }
}

void X27() {
  flip (397/1000) {
    if (a) {
      X29();
    }
    else {
      X23();
    }
  }
}

void X28() {
  flip (687/1000) {
    a = false;
    X33();
  }
  else {
    a = true;
    X23();
  }
}

void X29() {
  X33();
  X27();
}

void X30() {
  flip (491/1000) {
    if (b) {
      X28();
    }
    else {
      X34();
    }
  }
}

void X31() {
  flip (193/500) {
    if (a) {
      X25();
    }
    else {
      X27();
    }
  }
}

void X32() {
  flip (233/500) {
    if (b) {
      X36();
    }
    else {
      X30();
    }
  }
}

void X33() {
  flip (197/200) {
    b = false;
    X28();
  }
  else {
    b = false;
    X30();
  }
}

void X34() {
  flip (731/1000) {
    b = false;
    X33();
  }
  else {
    b = false;
    X34();
  }
}

void X35() {
  flip (749/1000) {
    if (b) {
      X36();
    }
    else {
      X33();
    }
  }
}

void X36() {
  flip (93/1000) {
    a = false;
    X32();
  }
  else {
    b = true;
    X38();
  }
}

void X37() {
  X39();
  X39();
}

void X38() {
  flip (147/1000) {
    if (a) {
      X38();
    }
    else {
      X40();
    }
  }
}

void X39() {
  flip (727/1000) {
    a = false;
    X44();
  }
  else {
    b = true;
    X39();
  }
}

void X40() {
  X41();
  X44();
}

void X41() {
  flip (381/1000) {
    if (b) {
      X43();
    }
    else {
      X40();
    }
  }
}

void X42() {
  flip (613/1000) {
    if (a) {
      X45();
    }
    else {
      X45();
    }
  }
}

void X43() {
  X40();
  X42();
}

void X44() {
  X49();
  X44();
}

void X45() {
  flip (443/1000) {
    if (a) {
      X42();
    }
    else {
      X43();
    }
  }
}

void X46() {
  flip (47/50) {
    if (a) {
      X51();
    }
    else {
      X50();
    }
  }
}

void X47() {
  flip (223/500) {
    a = true;
    X45();
  }
  else {
    b = true;
    X51();
  }
}

void X48() {
  flip (63/125) {
    if (a) {
      X51();
    }
    else {
      X50();
    }
  }
}

void X49() {
  flip (797/1000) {
    if (a) {
      X53();
    }
    else {
      X45();
    }
  }
}

void X50() {
  flip (499/500) {
    if (b) {
      X46();
    }
    else {
      X47();
    }
  }
}

void X51() {
  flip (341/500) {
    b = true;
    X47();
  }
  else {
    b = true;
    X50();
  }
}

void X52() {
  flip (167/1000) {
    if (a) {
      X46();
    }
    else {
      X51();
    }
  }
}

void X53() {
  flip (69/250) {
    a = false;
    X56();
  }
  else {
    a = true;
    X51();
  }
}

void X54() {
  flip (741/1000) {
    if (a) {
      X59();
    }
    else {
      X52();
    }
  }
}

void X55() {
  flip (17/125) {
    b = false;
    X60();
  }
  else {
    b = false;
    X58();
  }
}

void X56() {
  X56();
  X58();
}

void X57() {
  X59();
  X59();
}

void X58() {
  flip (29/125) {
    if (a) {
      X56();
    }
    else {
      X61();
    }
  }
}

void X59() {
  flip (88/125) {
    if (b) {
      X61();
    }
    else {
      X55();
    }
  }
}

void X60() {
  flip (229/500) {
    b = true;
    X60();
  }
  else {
    a = false;
    X64();
  }
}

void X61() {
  flip (83/100) {
    if (b) {
      X65();
    }
    else {
      X64();
    }
  }
}

void X62() {
  flip (43/250) {
    if (b) {
      X56();
    }
    else {
      X61();
    }
  }
}

void X63() {
  flip (413/500) {
    a = true;
    X57();
  }
  else {
    b = false;
    X60();
  }
}

void X64() {
  flip (401/500) {
    a = true;
    X61();
  }
  else {
    a = true;
    X63();
  }
}

void X65() {
  flip (491/1000) {
    a = false;
    X62();
  }
  else {
    a = false;
    X59();
  }
}

void X66() {
  flip (27/1000) {
    b = false;
    X68();
  }
  else {
    a = false;
    X67();
  }
}

void X67() {
  flip (823/1000) {
    b = false;
    X67();
  }
  else {
    b = true;
    X63();
  }
}

void X68() {
  flip (87/200) {
    a = true;
    X72();
  }
  else {
    a = false;
    X64();
  }
}

void X69() {
  flip (31/500) {
    a = false;
    X69();
  }
  else {
    b = true;
    X68();
  }
}

void X70() {
  X72();
  X70();
}

void X71() {
  flip (109/200) {
    if (a) {
      X76();
    }
    else {
      X73();
    }
  }
}

void X72() {
  X73();
  X70();
}

void X73() {
  flip (247/250) {
    a = true;
    X69();
  }
  else {
    b = true;
    X67();
  }
}

void X74() {
  flip (37/1000) {
    if (a) {
      X73();
    }
    else {
      X71();
    }
  }
}

void X75() {
  flip (687/1000) {
    a = true;
    X74();
  }
  else {
    b = false;
    X76();
  }
}

void X76() {
  X78();
  X79();
}

void X77() {
  flip (109/200) {
    if (a) {
      X73();
    }
    else {
      X80();
    }
  }
}

void X78() {
  flip (693/1000) {
    b = true;
    X80();
  }
  else {
    a = false;
    X77();
  }
}

void X79() {
  flip (793/1000) {
    if (b) {
      X76();
    }
    else {
      X76();
    }
  }
}

void X80() {
  flip (657/1000) {
    a = true;
    X77();
  }
  else {
    a = true;
    X77();
  }
}

void X81() {
  flip (181/500) {
    b = false;
    X86();
  }
  else {
    b = true;
    X77();
  }
}

void X82() {
  X87();
  X82();
}

void X83() {
  X80();
  X87();
}

void X84() {
  flip (47/200) {
    a = true;
    X87();
  }
  else {
    a = false;
    X85();
  }
}

void X85() {
  X89();
  X79();
}

void X86() {
  flip (821/1000) {
    a = false;
    X86();
  }
  else {
    b = false;
    X90();
  }
}

void X87() {
  X92();
  X89();
}

void X88() {
  X89();
  X91();
}

void X89() {
  flip (47/50) {
    if (a) {
      X91();
    }
    else {
      X89();
    }
  }
}

void X90() {
  X86();
  X84();
}

void X91() {
  flip (281/500) {
    if (a) {
      X92();
    }
    else {
      X95();
    }
  }
}

void X92() {
  X90();
  X92();
}

void X93() {
  flip (247/500) {
    if (b) {
      X96();
    }
    else {
      X98();
    }
  }
}

void X94() {
  flip (49/200) {
    b = false;
    X97();
  }
  else {
    b = true;
    X90();
  }
}

void X95() {
  flip (1/2) {
    if (a) {
      X91();
    }
    else {
      X89();
    }
  }
}

void X96() {
  X94();
  X93();
}

void X97() {
  flip (127/200) {
    a = true;
    X98();
  }
  else {
    b = false;
    X98();
  }
}

void X98() {
  flip (197/1000) {
    a = true;
    X99();
  }
  else {
    b = false;
    X95();
  }
}

void X99() {
  flip (12/125) {
    a = false;
    X94();
  }
  else {
    b = true;
    X3();
  }
}
