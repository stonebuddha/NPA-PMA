bool a;
bool b;

void X0() {
  flip (103/250) {
    b = true;
    X2();
  }
  else {
    a = true;
    X5();
  }
}

void X1() {
  X2();
  X6();
}

void X2() {
  flip (9/40) {
    if (b) {
      X96();
    }
    else {
      X99();
    }
  }
}

void X3() {
  X4();
  X0();
}

void X4() {
  flip (917/1000) {
    if (a) {
      X6();
    }
    else {
      X9();
    }
  }
}

void X5() {
  X99();
  X5();
}

void X6() {
  X6();
  X6();
}

void X7() {
  flip (73/125) {
    if (b) {
      X1();
    }
    else {
      X4();
    }
  }
}

void X8() {
  flip (187/1000) {
    if (a) {
      X11();
    }
    else {
      X7();
    }
  }
}

void X9() {
  flip (27/125) {
    if (a) {
      X14();
    }
    else {
      X3();
    }
  }
}

void X10() {
  flip (593/1000) {
    b = true;
    X6();
  }
  else {
    b = false;
    X13();
  }
}

void X11() {
  flip (83/100) {
    if (a) {
      X11();
    }
    else {
      X16();
    }
  }
}

void X12() {
  flip (139/250) {
    a = false;
    X9();
  }
  else {
    b = false;
    X11();
  }
}

void X13() {
  X16();
  X17();
}

void X14() {
  X13();
  X14();
}

void X15() {
  flip (879/1000) {
    a = false;
    X17();
  }
  else {
    b = false;
    X17();
  }
}

void X16() {
  flip (327/500) {
    b = true;
    X13();
  }
  else {
    b = false;
    X10();
  }
}

void X17() {
  flip (253/500) {
    if (b) {
      X19();
    }
    else {
      X20();
    }
  }
}

void X18() {
  flip (763/1000) {
    if (a) {
      X22();
    }
    else {
      X21();
    }
  }
}

void X19() {
  flip (109/1000) {
    a = true;
    X15();
  }
  else {
    a = false;
    X19();
  }
}

void X20() {
  X23();
  X24();
}

void X21() {
  X21();
  X18();
}

void X22() {
  X22();
  X27();
}

void X23() {
  flip (157/250) {
    b = false;
    X20();
  }
  else {
    b = false;
    X23();
  }
}

void X24() {
  flip (671/1000) {
    b = false;
    X27();
  }
  else {
    b = true;
    X25();
  }
}

void X25() {
  flip (9/40) {
    if (b) {
      X21();
    }
    else {
      X24();
    }
  }
}

void X26() {
  X21();
  X30();
}

void X27() {
  flip (3/40) {
    b = false;
    X22();
  }
  else {
    a = true;
    X25();
  }
}

void X28() {
  flip (71/125) {
    a = true;
    X33();
  }
  else {
    a = false;
    X30();
  }
}

void X29() {
  flip (77/200) {
    a = true;
    X30();
  }
  else {
    a = true;
    X24();
  }
}

void X30() {
  flip (37/200) {
    a = false;
    X27();
  }
  else {
    a = false;
    X30();
  }
}

void X31() {
  X25();
  X35();
}

void X32() {
  flip (429/500) {
    b = true;
    X28();
  }
  else {
    b = true;
    X35();
  }
}

void X33() {
  X27();
  X30();
}

void X34() {
  flip (122/125) {
    a = false;
    X35();
  }
  else {
    a = true;
    X37();
  }
}

void X35() {
  flip (243/250) {
    b = false;
    X31();
  }
  else {
    b = false;
    X34();
  }
}

void X36() {
  flip (417/500) {
    if (a) {
      X37();
    }
    else {
      X34();
    }
  }
}

void X37() {
  flip (9/125) {
    b = false;
    X37();
  }
  else {
    a = false;
    X36();
  }
}

void X38() {
  flip (261/1000) {
    a = false;
    X35();
  }
  else {
    a = true;
    X42();
  }
}

void X39() {
  flip (233/500) {
    b = false;
    X36();
  }
  else {
    b = true;
    X37();
  }
}

void X40() {
  flip (337/1000) {
    b = true;
    X42();
  }
  else {
    b = false;
    X42();
  }
}

void X41() {
  X41();
  X41();
}

void X42() {
  X37();
  X46();
}

void X43() {
  X47();
  X47();
}

void X44() {
  flip (41/50) {
    if (b) {
      X44();
    }
    else {
      X46();
    }
  }
}

void X45() {
  flip (101/1000) {
    if (b) {
      X50();
    }
    else {
      X41();
    }
  }
}

void X46() {
  flip (631/1000) {
    if (a) {
      X48();
    }
    else {
      X50();
    }
  }
}

void X47() {
  flip (2/5) {
    if (a) {
      X44();
    }
    else {
      X44();
    }
  }
}

void X48() {
  flip (323/500) {
    if (a) {
      X45();
    }
    else {
      X51();
    }
  }
}

void X49() {
  X51();
  X51();
}

void X50() {
  flip (73/100) {
    b = true;
    X51();
  }
  else {
    a = true;
    X47();
  }
}

void X51() {
  flip (833/1000) {
    a = false;
    X47();
  }
  else {
    b = false;
    X46();
  }
}

void X52() {
  X46();
  X56();
}

void X53() {
  flip (3/100) {
    if (b) {
      X49();
    }
    else {
      X56();
    }
  }
}

void X54() {
  flip (18/25) {
    b = false;
    X56();
  }
  else {
    a = false;
    X58();
  }
}

void X55() {
  flip (181/500) {
    a = false;
    X55();
  }
  else {
    b = false;
    X57();
  }
}

void X56() {
  flip (121/200) {
    if (b) {
      X60();
    }
    else {
      X55();
    }
  }
}

void X57() {
  X59();
  X62();
}

void X58() {
  flip (37/50) {
    a = false;
    X63();
  }
  else {
    b = false;
    X52();
  }
}

void X59() {
  flip (7/25) {
    if (b) {
      X61();
    }
    else {
      X64();
    }
  }
}

void X60() {
  flip (381/500) {
    if (b) {
      X58();
    }
    else {
      X58();
    }
  }
}

void X61() {
  X65();
  X59();
}

void X62() {
  flip (127/500) {
    if (b) {
      X63();
    }
    else {
      X60();
    }
  }
}

void X63() {
  flip (869/1000) {
    if (b) {
      X60();
    }
    else {
      X67();
    }
  }
}

void X64() {
  flip (289/1000) {
    if (b) {
      X63();
    }
    else {
      X62();
    }
  }
}

void X65() {
  flip (151/200) {
    if (b) {
      X60();
    }
    else {
      X68();
    }
  }
}

void X66() {
  flip (447/1000) {
    a = false;
    X70();
  }
  else {
    a = false;
    X66();
  }
}

void X67() {
  X68();
  X66();
}

void X68() {
  flip (133/1000) {
    if (a) {
      X67();
    }
    else {
      X68();
    }
  }
}

void X69() {
  flip (49/125) {
    if (b) {
      X63();
    }
    else {
      X70();
    }
  }
}

void X70() {
  flip (629/1000) {
    if (b) {
      X65();
    }
    else {
      X75();
    }
  }
}

void X71() {
  flip (119/200) {
    a = true;
    X66();
  }
  else {
    a = false;
    X70();
  }
}

void X72() {
  flip (301/1000) {
    if (a) {
      X77();
    }
    else {
      X75();
    }
  }
}

void X73() {
  flip (747/1000) {
    if (a) {
      X68();
    }
    else {
      X73();
    }
  }
}

void X74() {
  flip (937/1000) {
    if (b) {
      X70();
    }
    else {
      X77();
    }
  }
}

void X75() {
  flip (93/100) {
    if (b) {
      X78();
    }
    else {
      X79();
    }
  }
}

void X76() {
  flip (19/200) {
    b = false;
    X78();
  }
  else {
    a = true;
    X70();
  }
}

void X77() {
  flip (121/125) {
    b = true;
    X80();
  }
  else {
    b = false;
    X71();
  }
}

void X78() {
  flip (43/100) {
    b = false;
    X81();
  }
  else {
    b = true;
    X78();
  }
}

void X79() {
  X81();
  X80();
}

void X80() {
  flip (259/1000) {
    if (b) {
      X75();
    }
    else {
      X80();
    }
  }
}

void X81() {
  flip (491/500) {
    b = false;
    X81();
  }
  else {
    a = false;
    X82();
  }
}

void X82() {
  flip (747/1000) {
    a = true;
    X79();
  }
  else {
    a = true;
    X77();
  }
}

void X83() {
  X80();
  X85();
}

void X84() {
  X83();
  X84();
}

void X85() {
  flip (23/100) {
    b = true;
    X82();
  }
  else {
    a = true;
    X88();
  }
}

void X86() {
  flip (71/200) {
    a = true;
    X91();
  }
  else {
    a = false;
    X80();
  }
}

void X87() {
  X86();
  X85();
}

void X88() {
  X92();
  X93();
}

void X89() {
  flip (2/125) {
    b = true;
    X92();
  }
  else {
    b = true;
    X88();
  }
}

void X90() {
  X89();
  X87();
}

void X91() {
  flip (651/1000) {
    if (b) {
      X89();
    }
    else {
      X89();
    }
  }
}

void X92() {
  flip (473/500) {
    if (b) {
      X97();
    }
    else {
      X96();
    }
  }
}

void X93() {
  X94();
  X87();
}

void X94() {
  flip (109/500) {
    b = false;
    X90();
  }
  else {
    b = false;
    X95();
  }
}

void X95() {
  flip (43/1000) {
    b = false;
    X94();
  }
  else {
    b = false;
    X89();
  }
}

void X96() {
  flip (38/125) {
    b = false;
    X0();
  }
  else {
    a = false;
    X91();
  }
}

void X97() {
  X97();
  X2();
}

void X98() {
  flip (357/1000) {
    if (b) {
      X97();
    }
    else {
      X94();
    }
  }
}

void X99() {
  flip (89/250) {
    b = true;
    X98();
  }
  else {
    a = false;
    X97();
  }
}
