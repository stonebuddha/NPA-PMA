bool a;
bool b;

void X0() {
  flip (73/500) {
    if (a) {
      X4();
    }
    else {
      X96();
    }
  }
}

void X1() {
  flip (679/1000) {
    b = false;
    X3();
  }
  else {
    b = false;
    X98();
  }
}

void X2() {
  X3();
  X0();
}

void X3() {
  flip (79/100) {
    a = false;
    X4();
  }
  else {
    a = false;
    X7();
  }
}

void X4() {
  X6();
  X5();
}

void X5() {
  flip (69/125) {
    a = false;
    X2();
  }
  else {
    a = false;
    X2();
  }
}

void X6() {
  flip (13/20) {
    if (b) {
      X6();
    }
    else {
      X3();
    }
  }
}

void X7() {
  X11();
  X8();
}

void X8() {
  X4();
  X6();
}

void X9() {
  X14();
  X11();
}

void X10() {
  flip (19/125) {
    if (b) {
      X5();
    }
    else {
      X7();
    }
  }
}

void X11() {
  X15();
  X9();
}

void X12() {
  flip (269/500) {
    if (b) {
      X8();
    }
    else {
      X11();
    }
  }
}

void X13() {
  flip (33/50) {
    a = false;
    X9();
  }
  else {
    b = false;
    X17();
  }
}

void X14() {
  flip (39/500) {
    b = true;
    X10();
  }
  else {
    b = false;
    X8();
  }
}

void X15() {
  flip (643/1000) {
    a = false;
    X10();
  }
  else {
    a = true;
    X10();
  }
}

void X16() {
  flip (909/1000) {
    if (a) {
      X20();
    }
    else {
      X21();
    }
  }
}

void X17() {
  X17();
  X12();
}

void X18() {
  X21();
  X18();
}

void X19() {
  flip (337/500) {
    if (b) {
      X15();
    }
    else {
      X19();
    }
  }
}

void X20() {
  flip (443/1000) {
    if (a) {
      X22();
    }
    else {
      X19();
    }
  }
}

void X21() {
  flip (79/100) {
    b = true;
    X19();
  }
  else {
    b = false;
    X20();
  }
}

void X22() {
  flip (367/1000) {
    a = false;
    X18();
  }
  else {
    b = false;
    X22();
  }
}

void X23() {
  flip (537/1000) {
    if (b) {
      X26();
    }
    else {
      X21();
    }
  }
}

void X24() {
  flip (16/125) {
    if (b) {
      X22();
    }
    else {
      X23();
    }
  }
}

void X25() {
  flip (199/250) {
    a = false;
    X26();
  }
  else {
    b = false;
    X20();
  }
}

void X26() {
  flip (119/200) {
    if (b) {
      X31();
    }
    else {
      X27();
    }
  }
}

void X27() {
  flip (451/500) {
    if (a) {
      X27();
    }
    else {
      X29();
    }
  }
}

void X28() {
  flip (431/500) {
    if (b) {
      X29();
    }
    else {
      X22();
    }
  }
}

void X29() {
  flip (371/1000) {
    if (a) {
      X27();
    }
    else {
      X33();
    }
  }
}

void X30() {
  flip (683/1000) {
    b = true;
    X28();
  }
  else {
    b = true;
    X34();
  }
}

void X31() {
  X30();
  X26();
}

void X32() {
  flip (397/1000) {
    if (a) {
      X31();
    }
    else {
      X30();
    }
  }
}

void X33() {
  flip (67/125) {
    a = true;
    X29();
  }
  else {
    a = false;
    X33();
  }
}

void X34() {
  flip (51/125) {
    if (b) {
      X32();
    }
    else {
      X35();
    }
  }
}

void X35() {
  flip (389/500) {
    if (b) {
      X32();
    }
    else {
      X37();
    }
  }
}

void X36() {
  flip (61/500) {
    a = true;
    X32();
  }
  else {
    a = false;
    X37();
  }
}

void X37() {
  X37();
  X37();
}

void X38() {
  X43();
  X43();
}

void X39() {
  flip (523/1000) {
    b = false;
    X37();
  }
  else {
    b = true;
    X39();
  }
}

void X40() {
  flip (979/1000) {
    b = true;
    X34();
  }
  else {
    b = false;
    X40();
  }
}

void X41() {
  X39();
  X39();
}

void X42() {
  X45();
  X43();
}

void X43() {
  X47();
  X39();
}

void X44() {
  flip (307/1000) {
    b = false;
    X45();
  }
  else {
    a = true;
    X48();
  }
}

void X45() {
  flip (513/1000) {
    a = true;
    X40();
  }
  else {
    a = false;
    X49();
  }
}

void X46() {
  X50();
  X46();
}

void X47() {
  flip (23/500) {
    a = true;
    X50();
  }
  else {
    a = false;
    X46();
  }
}

void X48() {
  X53();
  X51();
}

void X49() {
  flip (543/1000) {
    b = true;
    X47();
  }
  else {
    b = true;
    X51();
  }
}

void X50() {
  flip (163/200) {
    a = false;
    X50();
  }
  else {
    a = false;
    X51();
  }
}

void X51() {
  X51();
  X48();
}

void X52() {
  flip (359/1000) {
    a = false;
    X51();
  }
  else {
    b = false;
    X53();
  }
}

void X53() {
  flip (271/1000) {
    if (a) {
      X57();
    }
    else {
      X58();
    }
  }
}

void X54() {
  flip (129/1000) {
    a = false;
    X57();
  }
  else {
    b = true;
    X59();
  }
}

void X55() {
  flip (71/125) {
    a = false;
    X58();
  }
  else {
    b = true;
    X56();
  }
}

void X56() {
  flip (133/1000) {
    a = true;
    X57();
  }
  else {
    a = true;
    X58();
  }
}

void X57() {
  flip (391/500) {
    b = false;
    X59();
  }
  else {
    a = false;
    X54();
  }
}

void X58() {
  flip (46/125) {
    if (a) {
      X63();
    }
    else {
      X60();
    }
  }
}

void X59() {
  flip (147/250) {
    b = false;
    X54();
  }
  else {
    a = true;
    X58();
  }
}

void X60() {
  flip (249/1000) {
    a = true;
    X62();
  }
  else {
    a = true;
    X55();
  }
}

void X61() {
  flip (963/1000) {
    if (a) {
      X65();
    }
    else {
      X61();
    }
  }
}

void X62() {
  flip (189/1000) {
    b = false;
    X64();
  }
  else {
    a = true;
    X63();
  }
}

void X63() {
  X66();
  X58();
}

void X64() {
  flip (52/125) {
    a = true;
    X64();
  }
  else {
    b = false;
    X59();
  }
}

void X65() {
  flip (499/1000) {
    if (b) {
      X66();
    }
    else {
      X65();
    }
  }
}

void X66() {
  flip (3/50) {
    if (b) {
      X60();
    }
    else {
      X67();
    }
  }
}

void X67() {
  flip (797/1000) {
    b = false;
    X63();
  }
  else {
    b = false;
    X70();
  }
}

void X68() {
  flip (989/1000) {
    b = false;
    X62();
  }
  else {
    b = true;
    X69();
  }
}

void X69() {
  flip (9/1000) {
    if (b) {
      X65();
    }
    else {
      X68();
    }
  }
}

void X70() {
  flip (73/1000) {
    if (a) {
      X72();
    }
    else {
      X70();
    }
  }
}

void X71() {
  flip (139/250) {
    if (b) {
      X69();
    }
    else {
      X67();
    }
  }
}

void X72() {
  flip (83/100) {
    if (a) {
      X74();
    }
    else {
      X69();
    }
  }
}

void X73() {
  flip (109/125) {
    b = false;
    X77();
  }
  else {
    a = true;
    X77();
  }
}

void X74() {
  flip (327/1000) {
    b = true;
    X74();
  }
  else {
    b = true;
    X74();
  }
}

void X75() {
  flip (23/200) {
    if (b) {
      X75();
    }
    else {
      X69();
    }
  }
}

void X76() {
  X72();
  X76();
}

void X77() {
  flip (9/50) {
    if (b) {
      X80();
    }
    else {
      X74();
    }
  }
}

void X78() {
  flip (11/1000) {
    a = false;
    X82();
  }
  else {
    a = true;
    X81();
  }
}

void X79() {
  X84();
  X73();
}

void X80() {
  flip (619/1000) {
    if (b) {
      X75();
    }
    else {
      X84();
    }
  }
}

void X81() {
  flip (407/1000) {
    b = false;
    X80();
  }
  else {
    b = true;
    X79();
  }
}

void X82() {
  flip (91/1000) {
    if (b) {
      X82();
    }
    else {
      X78();
    }
  }
}

void X83() {
  X82();
  X84();
}

void X84() {
  flip (227/500) {
    if (a) {
      X80();
    }
    else {
      X87();
    }
  }
}

void X85() {
  flip (227/500) {
    a = true;
    X89();
  }
  else {
    b = true;
    X85();
  }
}

void X86() {
  X91();
  X87();
}

void X87() {
  flip (17/200) {
    b = false;
    X81();
  }
  else {
    a = false;
    X84();
  }
}

void X88() {
  flip (117/500) {
    b = true;
    X91();
  }
  else {
    a = true;
    X91();
  }
}

void X89() {
  flip (27/250) {
    a = false;
    X92();
  }
  else {
    b = true;
    X85();
  }
}

void X90() {
  flip (261/1000) {
    if (a) {
      X93();
    }
    else {
      X87();
    }
  }
}

void X91() {
  flip (111/125) {
    if (b) {
      X86();
    }
    else {
      X92();
    }
  }
}

void X92() {
  flip (659/1000) {
    a = false;
    X89();
  }
  else {
    a = false;
    X92();
  }
}

void X93() {
  flip (797/1000) {
    if (a) {
      X87();
    }
    else {
      X88();
    }
  }
}

void X94() {
  flip (147/500) {
    b = true;
    X91();
  }
  else {
    b = false;
    X92();
  }
}

void X95() {
  flip (13/1000) {
    if (a) {
      X95();
    }
    else {
      X94();
    }
  }
}

void X96() {
  X92();
  X96();
}

void X97() {
  flip (1/10) {
    a = false;
    X1();
  }
  else {
    a = true;
    X97();
  }
}

void X98() {
  flip (807/1000) {
    b = false;
    X97();
  }
  else {
    a = false;
    X2();
  }
}

void X99() {
  X1();
  X97();
}
