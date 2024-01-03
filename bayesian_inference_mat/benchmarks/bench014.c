bool a;
bool b;

void X0() {
  X1();
  X96();
}

void X1() {
  X0();
  X1();
}

void X2() {
  flip (201/250) {
    a = false;
    X96();
  }
  else {
    a = true;
    X7();
  }
}

void X3() {
  flip (64/125) {
    if (b) {
      X6();
    }
    else {
      X2();
    }
  }
}

void X4() {
  flip (101/200) {
    if (b) {
      X99();
    }
    else {
      X98();
    }
  }
}

void X5() {
  flip (191/200) {
    if (b) {
      X0();
    }
    else {
      X3();
    }
  }
}

void X6() {
  flip (103/250) {
    b = true;
    X10();
  }
  else {
    a = false;
    X10();
  }
}

void X7() {
  flip (153/200) {
    if (a) {
      X4();
    }
    else {
      X5();
    }
  }
}

void X8() {
  flip (92/125) {
    if (b) {
      X6();
    }
    else {
      X4();
    }
  }
}

void X9() {
  flip (387/1000) {
    b = false;
    X13();
  }
  else {
    a = true;
    X5();
  }
}

void X10() {
  X12();
  X7();
}

void X11() {
  flip (151/250) {
    a = false;
    X5();
  }
  else {
    a = true;
    X10();
  }
}

void X12() {
  flip (407/500) {
    b = true;
    X13();
  }
  else {
    b = true;
    X11();
  }
}

void X13() {
  flip (153/200) {
    a = true;
    X8();
  }
  else {
    a = true;
    X8();
  }
}

void X14() {
  X10();
  X15();
}

void X15() {
  flip (29/100) {
    if (b) {
      X19();
    }
    else {
      X15();
    }
  }
}

void X16() {
  X11();
  X20();
}

void X17() {
  flip (53/100) {
    if (a) {
      X17();
    }
    else {
      X11();
    }
  }
}

void X18() {
  flip (937/1000) {
    b = true;
    X22();
  }
  else {
    b = false;
    X19();
  }
}

void X19() {
  flip (171/250) {
    a = true;
    X14();
  }
  else {
    a = false;
    X18();
  }
}

void X20() {
  flip (871/1000) {
    if (b) {
      X17();
    }
    else {
      X16();
    }
  }
}

void X21() {
  flip (211/500) {
    b = false;
    X15();
  }
  else {
    b = true;
    X17();
  }
}

void X22() {
  flip (89/500) {
    b = false;
    X17();
  }
  else {
    a = true;
    X16();
  }
}

void X23() {
  flip (483/500) {
    b = true;
    X20();
  }
  else {
    b = true;
    X20();
  }
}

void X24() {
  flip (43/50) {
    if (a) {
      X25();
    }
    else {
      X25();
    }
  }
}

void X25() {
  X26();
  X25();
}

void X26() {
  X26();
  X30();
}

void X27() {
  flip (7/50) {
    if (a) {
      X31();
    }
    else {
      X24();
    }
  }
}

void X28() {
  X30();
  X24();
}

void X29() {
  flip (199/500) {
    if (b) {
      X27();
    }
    else {
      X31();
    }
  }
}

void X30() {
  X35();
  X31();
}

void X31() {
  X32();
  X29();
}

void X32() {
  flip (369/500) {
    if (b) {
      X28();
    }
    else {
      X29();
    }
  }
}

void X33() {
  X27();
  X37();
}

void X34() {
  X29();
  X28();
}

void X35() {
  flip (49/50) {
    if (b) {
      X32();
    }
    else {
      X29();
    }
  }
}

void X36() {
  flip (1/5) {
    b = false;
    X32();
  }
  else {
    b = true;
    X36();
  }
}

void X37() {
  X41();
  X31();
}

void X38() {
  flip (913/1000) {
    if (b) {
      X41();
    }
    else {
      X39();
    }
  }
}

void X39() {
  flip (149/250) {
    if (a) {
      X40();
    }
    else {
      X38();
    }
  }
}

void X40() {
  X36();
  X42();
}

void X41() {
  flip (67/100) {
    a = true;
    X39();
  }
  else {
    b = false;
    X43();
  }
}

void X42() {
  flip (181/250) {
    if (a) {
      X45();
    }
    else {
      X46();
    }
  }
}

void X43() {
  flip (757/1000) {
    if (b) {
      X47();
    }
    else {
      X46();
    }
  }
}

void X44() {
  X42();
  X43();
}

void X45() {
  flip (37/50) {
    a = true;
    X45();
  }
  else {
    b = true;
    X43();
  }
}

void X46() {
  flip (397/500) {
    if (a) {
      X51();
    }
    else {
      X46();
    }
  }
}

void X47() {
  flip (53/1000) {
    if (a) {
      X47();
    }
    else {
      X45();
    }
  }
}

void X48() {
  flip (77/125) {
    if (b) {
      X45();
    }
    else {
      X53();
    }
  }
}

void X49() {
  flip (477/500) {
    a = false;
    X54();
  }
  else {
    a = false;
    X49();
  }
}

void X50() {
  flip (21/100) {
    a = false;
    X46();
  }
  else {
    a = false;
    X47();
  }
}

void X51() {
  X55();
  X54();
}

void X52() {
  flip (199/1000) {
    a = true;
    X53();
  }
  else {
    b = true;
    X55();
  }
}

void X53() {
  flip (39/200) {
    b = true;
    X55();
  }
  else {
    b = false;
    X51();
  }
}

void X54() {
  flip (901/1000) {
    a = true;
    X53();
  }
  else {
    b = true;
    X57();
  }
}

void X55() {
  flip (74/125) {
    b = true;
    X50();
  }
  else {
    a = false;
    X51();
  }
}

void X56() {
  X61();
  X61();
}

void X57() {
  flip (122/125) {
    if (b) {
      X59();
    }
    else {
      X62();
    }
  }
}

void X58() {
  X60();
  X52();
}

void X59() {
  X59();
  X62();
}

void X60() {
  flip (17/1000) {
    if (b) {
      X60();
    }
    else {
      X62();
    }
  }
}

void X61() {
  flip (649/1000) {
    a = true;
    X58();
  }
  else {
    a = true;
    X57();
  }
}

void X62() {
  X59();
  X65();
}

void X63() {
  X63();
  X59();
}

void X64() {
  flip (839/1000) {
    b = true;
    X64();
  }
  else {
    b = true;
    X58();
  }
}

void X65() {
  X63();
  X67();
}

void X66() {
  flip (673/1000) {
    a = true;
    X68();
  }
  else {
    a = false;
    X65();
  }
}

void X67() {
  flip (118/125) {
    if (a) {
      X63();
    }
    else {
      X68();
    }
  }
}

void X68() {
  flip (11/25) {
    if (b) {
      X69();
    }
    else {
      X65();
    }
  }
}

void X69() {
  flip (523/1000) {
    b = false;
    X72();
  }
  else {
    a = true;
    X63();
  }
}

void X70() {
  flip (421/1000) {
    if (b) {
      X68();
    }
    else {
      X67();
    }
  }
}

void X71() {
  flip (49/1000) {
    a = true;
    X70();
  }
  else {
    a = false;
    X68();
  }
}

void X72() {
  flip (783/1000) {
    if (a) {
      X75();
    }
    else {
      X75();
    }
  }
}

void X73() {
  flip (121/200) {
    if (b) {
      X76();
    }
    else {
      X78();
    }
  }
}

void X74() {
  flip (71/100) {
    if (b) {
      X70();
    }
    else {
      X70();
    }
  }
}

void X75() {
  X73();
  X78();
}

void X76() {
  X81();
  X74();
}

void X77() {
  flip (159/1000) {
    b = true;
    X73();
  }
  else {
    a = true;
    X72();
  }
}

void X78() {
  flip (349/500) {
    a = false;
    X74();
  }
  else {
    a = true;
    X74();
  }
}

void X79() {
  X83();
  X75();
}

void X80() {
  X74();
  X82();
}

void X81() {
  flip (83/250) {
    if (a) {
      X81();
    }
    else {
      X83();
    }
  }
}

void X82() {
  X78();
  X87();
}

void X83() {
  X85();
  X83();
}

void X84() {
  X85();
  X87();
}

void X85() {
  X80();
  X85();
}

void X86() {
  X83();
  X80();
}

void X87() {
  X84();
  X86();
}

void X88() {
  flip (29/1000) {
    if (b) {
      X91();
    }
    else {
      X86();
    }
  }
}

void X89() {
  X84();
  X89();
}

void X90() {
  X92();
  X90();
}

void X91() {
  flip (957/1000) {
    b = true;
    X90();
  }
  else {
    b = false;
    X87();
  }
}

void X92() {
  flip (369/1000) {
    if (a) {
      X92();
    }
    else {
      X97();
    }
  }
}

void X93() {
  flip (317/500) {
    b = true;
    X94();
  }
  else {
    b = true;
    X94();
  }
}

void X94() {
  flip (37/40) {
    if (b) {
      X90();
    }
    else {
      X95();
    }
  }
}

void X95() {
  flip (112/125) {
    if (a) {
      X95();
    }
    else {
      X93();
    }
  }
}

void X96() {
  flip (181/250) {
    a = false;
    X0();
  }
  else {
    b = false;
    X92();
  }
}

void X97() {
  flip (219/250) {
    b = false;
    X95();
  }
  else {
    a = true;
    X2();
  }
}

void X98() {
  X1();
  X2();
}

void X99() {
  flip (277/1000) {
    b = false;
    X97();
  }
  else {
    b = false;
    X99();
  }
}
