bool a;
bool b;

void X0() {
  X98();
  X96();
}

void X1() {
  X97();
  X98();
}

void X2() {
  flip (31/50) {
    a = false;
    X4();
  }
  else {
    b = false;
    X6();
  }
}

void X3() {
  flip (3/100) {
    if (a) {
      X6();
    }
    else {
      X3();
    }
  }
}

void X4() {
  X8();
  X4();
}

void X5() {
  X0();
  X5();
}

void X6() {
  flip (1/10) {
    a = true;
    X11();
  }
  else {
    b = false;
    X5();
  }
}

void X7() {
  flip (14/25) {
    if (b) {
      X6();
    }
    else {
      X11();
    }
  }
}

void X8() {
  flip (617/1000) {
    if (b) {
      X13();
    }
    else {
      X10();
    }
  }
}

void X9() {
  flip (64/125) {
    if (b) {
      X14();
    }
    else {
      X4();
    }
  }
}

void X10() {
  X9();
  X6();
}

void X11() {
  X11();
  X8();
}

void X12() {
  flip (43/1000) {
    if (a) {
      X10();
    }
    else {
      X14();
    }
  }
}

void X13() {
  flip (497/500) {
    a = true;
    X7();
  }
  else {
    a = false;
    X9();
  }
}

void X14() {
  flip (307/1000) {
    b = true;
    X19();
  }
  else {
    b = false;
    X12();
  }
}

void X15() {
  flip (7/200) {
    if (b) {
      X14();
    }
    else {
      X9();
    }
  }
}

void X16() {
  flip (469/1000) {
    a = false;
    X20();
  }
  else {
    a = false;
    X10();
  }
}

void X17() {
  flip (567/1000) {
    b = true;
    X19();
  }
  else {
    a = true;
    X11();
  }
}

void X18() {
  flip (571/1000) {
    b = false;
    X14();
  }
  else {
    a = false;
    X17();
  }
}

void X19() {
  flip (9/1000) {
    if (b) {
      X13();
    }
    else {
      X21();
    }
  }
}

void X20() {
  X21();
  X20();
}

void X21() {
  X22();
  X19();
}

void X22() {
  flip (27/100) {
    a = true;
    X27();
  }
  else {
    a = false;
    X18();
  }
}

void X23() {
  flip (929/1000) {
    if (b) {
      X25();
    }
    else {
      X26();
    }
  }
}

void X24() {
  X19();
  X18();
}

void X25() {
  X29();
  X21();
}

void X26() {
  X25();
  X29();
}

void X27() {
  flip (9/10) {
    b = false;
    X25();
  }
  else {
    b = true;
    X23();
  }
}

void X28() {
  flip (77/200) {
    if (a) {
      X23();
    }
    else {
      X27();
    }
  }
}

void X29() {
  flip (571/1000) {
    if (a) {
      X31();
    }
    else {
      X25();
    }
  }
}

void X30() {
  flip (117/250) {
    a = false;
    X24();
  }
  else {
    a = true;
    X33();
  }
}

void X31() {
  flip (23/40) {
    b = true;
    X27();
  }
  else {
    a = false;
    X33();
  }
}

void X32() {
  flip (3/4) {
    a = true;
    X27();
  }
  else {
    b = true;
    X33();
  }
}

void X33() {
  flip (801/1000) {
    a = false;
    X37();
  }
  else {
    a = true;
    X34();
  }
}

void X34() {
  X37();
  X34();
}

void X35() {
  flip (717/1000) {
    b = false;
    X31();
  }
  else {
    b = true;
    X29();
  }
}

void X36() {
  X30();
  X32();
}

void X37() {
  flip (43/500) {
    b = false;
    X36();
  }
  else {
    a = true;
    X37();
  }
}

void X38() {
  flip (959/1000) {
    a = false;
    X43();
  }
  else {
    b = true;
    X40();
  }
}

void X39() {
  flip (313/500) {
    if (b) {
      X42();
    }
    else {
      X33();
    }
  }
}

void X40() {
  flip (124/125) {
    if (b) {
      X40();
    }
    else {
      X38();
    }
  }
}

void X41() {
  flip (109/125) {
    a = false;
    X46();
  }
  else {
    b = true;
    X42();
  }
}

void X42() {
  flip (99/1000) {
    if (b) {
      X45();
    }
    else {
      X47();
    }
  }
}

void X43() {
  flip (237/1000) {
    a = false;
    X38();
  }
  else {
    b = false;
    X39();
  }
}

void X44() {
  flip (29/125) {
    if (a) {
      X45();
    }
    else {
      X38();
    }
  }
}

void X45() {
  X40();
  X48();
}

void X46() {
  flip (197/200) {
    b = true;
    X41();
  }
  else {
    a = true;
    X44();
  }
}

void X47() {
  X46();
  X50();
}

void X48() {
  flip (91/125) {
    a = true;
    X43();
  }
  else {
    a = false;
    X47();
  }
}

void X49() {
  flip (89/500) {
    if (b) {
      X45();
    }
    else {
      X43();
    }
  }
}

void X50() {
  X44();
  X46();
}

void X51() {
  flip (323/500) {
    if (b) {
      X50();
    }
    else {
      X46();
    }
  }
}

void X52() {
  flip (449/500) {
    if (b) {
      X56();
    }
    else {
      X50();
    }
  }
}

void X53() {
  X54();
  X54();
}

void X54() {
  flip (247/1000) {
    a = true;
    X49();
  }
  else {
    b = false;
    X50();
  }
}

void X55() {
  flip (211/500) {
    if (a) {
      X58();
    }
    else {
      X58();
    }
  }
}

void X56() {
  flip (7/125) {
    if (b) {
      X59();
    }
    else {
      X53();
    }
  }
}

void X57() {
  flip (733/1000) {
    b = true;
    X60();
  }
  else {
    a = false;
    X52();
  }
}

void X58() {
  flip (51/100) {
    b = false;
    X58();
  }
  else {
    a = true;
    X53();
  }
}

void X59() {
  flip (31/50) {
    if (b) {
      X61();
    }
    else {
      X64();
    }
  }
}

void X60() {
  X61();
  X59();
}

void X61() {
  flip (139/500) {
    if (b) {
      X65();
    }
    else {
      X66();
    }
  }
}

void X62() {
  flip (33/250) {
    b = true;
    X56();
  }
  else {
    b = true;
    X61();
  }
}

void X63() {
  flip (631/1000) {
    a = true;
    X68();
  }
  else {
    b = false;
    X66();
  }
}

void X64() {
  flip (377/1000) {
    if (a) {
      X62();
    }
    else {
      X66();
    }
  }
}

void X65() {
  flip (711/1000) {
    if (a) {
      X60();
    }
    else {
      X67();
    }
  }
}

void X66() {
  flip (399/1000) {
    a = true;
    X71();
  }
  else {
    a = true;
    X71();
  }
}

void X67() {
  flip (411/1000) {
    if (a) {
      X71();
    }
    else {
      X72();
    }
  }
}

void X68() {
  flip (667/1000) {
    if (a) {
      X73();
    }
    else {
      X71();
    }
  }
}

void X69() {
  X66();
  X67();
}

void X70() {
  flip (223/1000) {
    a = true;
    X67();
  }
  else {
    a = false;
    X75();
  }
}

void X71() {
  X74();
  X74();
}

void X72() {
  X77();
  X76();
}

void X73() {
  flip (183/500) {
    b = false;
    X73();
  }
  else {
    b = true;
    X78();
  }
}

void X74() {
  flip (19/40) {
    b = false;
    X70();
  }
  else {
    b = false;
    X76();
  }
}

void X75() {
  X79();
  X75();
}

void X76() {
  flip (161/200) {
    if (b) {
      X72();
    }
    else {
      X75();
    }
  }
}

void X77() {
  flip (141/500) {
    if (a) {
      X74();
    }
    else {
      X76();
    }
  }
}

void X78() {
  X74();
  X80();
}

void X79() {
  flip (427/1000) {
    if (b) {
      X84();
    }
    else {
      X83();
    }
  }
}

void X80() {
  flip (579/1000) {
    b = true;
    X74();
  }
  else {
    a = false;
    X83();
  }
}

void X81() {
  flip (1/40) {
    if (b) {
      X83();
    }
    else {
      X80();
    }
  }
}

void X82() {
  flip (23/125) {
    if (b) {
      X76();
    }
    else {
      X81();
    }
  }
}

void X83() {
  X85();
  X83();
}

void X84() {
  X84();
  X87();
}

void X85() {
  flip (197/500) {
    b = false;
    X87();
  }
  else {
    b = true;
    X90();
  }
}

void X86() {
  flip (4/125) {
    if (b) {
      X88();
    }
    else {
      X91();
    }
  }
}

void X87() {
  X84();
  X85();
}

void X88() {
  X91();
  X89();
}

void X89() {
  flip (21/50) {
    b = false;
    X93();
  }
  else {
    a = false;
    X94();
  }
}

void X90() {
  X92();
  X94();
}

void X91() {
  flip (111/500) {
    if (a) {
      X94();
    }
    else {
      X94();
    }
  }
}

void X92() {
  flip (623/1000) {
    if (a) {
      X86();
    }
    else {
      X86();
    }
  }
}

void X93() {
  flip (249/1000) {
    b = true;
    X96();
  }
  else {
    a = false;
    X95();
  }
}

void X94() {
  flip (819/1000) {
    if (b) {
      X89();
    }
    else {
      X89();
    }
  }
}

void X95() {
  flip (309/500) {
    b = false;
    X93();
  }
  else {
    a = false;
    X96();
  }
}

void X96() {
  flip (29/40) {
    a = false;
    X0();
  }
  else {
    b = false;
    X91();
  }
}

void X97() {
  flip (39/100) {
    if (a) {
      X93();
    }
    else {
      X99();
    }
  }
}

void X98() {
  X97();
  X99();
}

void X99() {
  flip (519/1000) {
    b = false;
    X1();
  }
  else {
    a = false;
    X93();
  }
}
