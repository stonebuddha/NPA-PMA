bool a;
bool b;

void X0() {
  X2();
  X95();
}

void X1() {
  X0();
  X98();
}

void X2() {
  X99();
  X99();
}

void X3() {
  flip (23/40) {
    a = true;
    X2();
  }
  else {
    b = false;
    X5();
  }
}

void X4() {
  X99();
  X4();
}

void X5() {
  flip (711/1000) {
    if (a) {
      X9();
    }
    else {
      X0();
    }
  }
}

void X6() {
  flip (29/50) {
    if (a) {
      X6();
    }
    else {
      X9();
    }
  }
}

void X7() {
  flip (711/1000) {
    if (a) {
      X2();
    }
    else {
      X11();
    }
  }
}

void X8() {
  X2();
  X6();
}

void X9() {
  flip (521/1000) {
    if (a) {
      X11();
    }
    else {
      X5();
    }
  }
}

void X10() {
  flip (151/500) {
    a = true;
    X10();
  }
  else {
    b = false;
    X7();
  }
}

void X11() {
  flip (389/500) {
    if (b) {
      X11();
    }
    else {
      X6();
    }
  }
}

void X12() {
  flip (467/1000) {
    if (a) {
      X8();
    }
    else {
      X17();
    }
  }
}

void X13() {
  flip (41/250) {
    a = false;
    X13();
  }
  else {
    b = true;
    X17();
  }
}

void X14() {
  X12();
  X17();
}

void X15() {
  flip (119/125) {
    a = false;
    X9();
  }
  else {
    b = false;
    X20();
  }
}

void X16() {
  flip (187/250) {
    if (b) {
      X10();
    }
    else {
      X21();
    }
  }
}

void X17() {
  X11();
  X20();
}

void X18() {
  flip (867/1000) {
    if (b) {
      X23();
    }
    else {
      X12();
    }
  }
}

void X19() {
  X13();
  X18();
}

void X20() {
  flip (101/200) {
    if (a) {
      X20();
    }
    else {
      X25();
    }
  }
}

void X21() {
  X23();
  X23();
}

void X22() {
  flip (43/200) {
    b = false;
    X17();
  }
  else {
    a = true;
    X18();
  }
}

void X23() {
  X27();
  X24();
}

void X24() {
  flip (51/500) {
    a = false;
    X25();
  }
  else {
    b = true;
    X20();
  }
}

void X25() {
  X21();
  X30();
}

void X26() {
  flip (257/500) {
    a = true;
    X23();
  }
  else {
    a = false;
    X24();
  }
}

void X27() {
  flip (169/1000) {
    if (b) {
      X25();
    }
    else {
      X21();
    }
  }
}

void X28() {
  flip (849/1000) {
    b = true;
    X31();
  }
  else {
    b = true;
    X25();
  }
}

void X29() {
  X27();
  X24();
}

void X30() {
  flip (2/5) {
    if (a) {
      X32();
    }
    else {
      X25();
    }
  }
}

void X31() {
  flip (137/1000) {
    b = false;
    X25();
  }
  else {
    a = false;
    X33();
  }
}

void X32() {
  X35();
  X26();
}

void X33() {
  flip (819/1000) {
    b = true;
    X35();
  }
  else {
    a = true;
    X36();
  }
}

void X34() {
  flip (537/1000) {
    b = true;
    X30();
  }
  else {
    b = true;
    X37();
  }
}

void X35() {
  X38();
  X29();
}

void X36() {
  flip (36/125) {
    b = false;
    X39();
  }
  else {
    a = false;
    X32();
  }
}

void X37() {
  flip (93/500) {
    if (a) {
      X33();
    }
    else {
      X39();
    }
  }
}

void X38() {
  flip (97/100) {
    a = false;
    X36();
  }
  else {
    b = false;
    X32();
  }
}

void X39() {
  flip (97/100) {
    b = true;
    X37();
  }
  else {
    b = true;
    X33();
  }
}

void X40() {
  X40();
  X44();
}

void X41() {
  flip (321/500) {
    if (a) {
      X44();
    }
    else {
      X41();
    }
  }
}

void X42() {
  flip (219/1000) {
    a = true;
    X44();
  }
  else {
    a = true;
    X37();
  }
}

void X43() {
  flip (21/200) {
    a = false;
    X43();
  }
  else {
    b = false;
    X41();
  }
}

void X44() {
  flip (847/1000) {
    if (b) {
      X45();
    }
    else {
      X44();
    }
  }
}

void X45() {
  flip (301/500) {
    a = false;
    X50();
  }
  else {
    b = false;
    X45();
  }
}

void X46() {
  flip (583/1000) {
    if (a) {
      X48();
    }
    else {
      X49();
    }
  }
}

void X47() {
  flip (27/125) {
    b = false;
    X49();
  }
  else {
    b = true;
    X47();
  }
}

void X48() {
  X43();
  X43();
}

void X49() {
  X44();
  X48();
}

void X50() {
  X47();
  X55();
}

void X51() {
  flip (7/200) {
    if (a) {
      X45();
    }
    else {
      X46();
    }
  }
}

void X52() {
  flip (37/250) {
    a = false;
    X54();
  }
  else {
    a = false;
    X47();
  }
}

void X53() {
  X57();
  X55();
}

void X54() {
  flip (523/1000) {
    b = false;
    X51();
  }
  else {
    b = true;
    X58();
  }
}

void X55() {
  X57();
  X59();
}

void X56() {
  X61();
  X57();
}

void X57() {
  X51();
  X56();
}

void X58() {
  flip (99/1000) {
    a = true;
    X55();
  }
  else {
    a = true;
    X62();
  }
}

void X59() {
  flip (37/50) {
    if (a) {
      X59();
    }
    else {
      X57();
    }
  }
}

void X60() {
  flip (51/1000) {
    a = true;
    X56();
  }
  else {
    a = false;
    X54();
  }
}

void X61() {
  flip (51/1000) {
    if (b) {
      X62();
    }
    else {
      X57();
    }
  }
}

void X62() {
  flip (189/500) {
    if (a) {
      X57();
    }
    else {
      X62();
    }
  }
}

void X63() {
  X62();
  X68();
}

void X64() {
  flip (59/200) {
    if (b) {
      X65();
    }
    else {
      X67();
    }
  }
}

void X65() {
  flip (429/500) {
    a = true;
    X66();
  }
  else {
    a = false;
    X61();
  }
}

void X66() {
  flip (21/50) {
    a = true;
    X71();
  }
  else {
    a = true;
    X63();
  }
}

void X67() {
  flip (233/500) {
    a = true;
    X72();
  }
  else {
    b = true;
    X65();
  }
}

void X68() {
  flip (4/125) {
    if (a) {
      X72();
    }
    else {
      X73();
    }
  }
}

void X69() {
  flip (681/1000) {
    if (a) {
      X72();
    }
    else {
      X66();
    }
  }
}

void X70() {
  X66();
  X74();
}

void X71() {
  X74();
  X67();
}

void X72() {
  X75();
  X69();
}

void X73() {
  X71();
  X77();
}

void X74() {
  X79();
  X74();
}

void X75() {
  flip (88/125) {
    if (a) {
      X78();
    }
    else {
      X80();
    }
  }
}

void X76() {
  flip (103/500) {
    a = false;
    X70();
  }
  else {
    a = true;
    X74();
  }
}

void X77() {
  flip (61/200) {
    if (a) {
      X75();
    }
    else {
      X75();
    }
  }
}

void X78() {
  flip (291/500) {
    b = true;
    X75();
  }
  else {
    b = true;
    X77();
  }
}

void X79() {
  X83();
  X75();
}

void X80() {
  X74();
  X81();
}

void X81() {
  flip (23/200) {
    if (a) {
      X80();
    }
    else {
      X79();
    }
  }
}

void X82() {
  flip (237/500) {
    if (a) {
      X78();
    }
    else {
      X76();
    }
  }
}

void X83() {
  X82();
  X84();
}

void X84() {
  flip (23/500) {
    if (a) {
      X78();
    }
    else {
      X83();
    }
  }
}

void X85() {
  flip (371/1000) {
    if (a) {
      X81();
    }
    else {
      X84();
    }
  }
}

void X86() {
  flip (87/1000) {
    b = true;
    X88();
  }
  else {
    a = true;
    X81();
  }
}

void X87() {
  X81();
  X91();
}

void X88() {
  flip (11/500) {
    if (b) {
      X92();
    }
    else {
      X86();
    }
  }
}

void X89() {
  flip (271/1000) {
    if (b) {
      X93();
    }
    else {
      X92();
    }
  }
}

void X90() {
  X84();
  X94();
}

void X91() {
  flip (129/250) {
    if (b) {
      X95();
    }
    else {
      X85();
    }
  }
}

void X92() {
  flip (27/250) {
    if (a) {
      X94();
    }
    else {
      X87();
    }
  }
}

void X93() {
  X96();
  X98();
}

void X94() {
  flip (313/1000) {
    a = false;
    X94();
  }
  else {
    b = false;
    X96();
  }
}

void X95() {
  flip (21/125) {
    a = false;
    X97();
  }
  else {
    a = true;
    X95();
  }
}

void X96() {
  X92();
  X98();
}

void X97() {
  flip (131/1000) {
    if (b) {
      X2();
    }
    else {
      X96();
    }
  }
}

void X98() {
  flip (9/200) {
    if (a) {
      X92();
    }
    else {
      X97();
    }
  }
}

void X99() {
  flip (389/1000) {
    if (b) {
      X99();
    }
    else {
      X97();
    }
  }
}
