bool a;
bool b;

void X0() {
  flip (249/1000) {
    if (a) {
      X2();
    }
    else {
      X5();
    }
  }
}

void X1() {
  X96();
  X2();
}

void X2() {
  X5();
  X6();
}

void X3() {
  flip (83/250) {
    a = true;
    X98();
  }
  else {
    b = true;
    X4();
  }
}

void X4() {
  flip (133/200) {
    b = true;
    X3();
  }
  else {
    a = false;
    X3();
  }
}

void X5() {
  flip (149/200) {
    if (b) {
      X1();
    }
    else {
      X7();
    }
  }
}

void X6() {
  flip (119/125) {
    if (a) {
      X4();
    }
    else {
      X1();
    }
  }
}

void X7() {
  flip (33/40) {
    if (a) {
      X12();
    }
    else {
      X10();
    }
  }
}

void X8() {
  X10();
  X2();
}

void X9() {
  flip (1/10) {
    b = false;
    X8();
  }
  else {
    b = true;
    X11();
  }
}

void X10() {
  X10();
  X4();
}

void X11() {
  flip (699/1000) {
    b = true;
    X7();
  }
  else {
    b = false;
    X7();
  }
}

void X12() {
  flip (223/1000) {
    if (b) {
      X15();
    }
    else {
      X13();
    }
  }
}

void X13() {
  flip (223/500) {
    if (a) {
      X13();
    }
    else {
      X10();
    }
  }
}

void X14() {
  flip (737/1000) {
    a = false;
    X15();
  }
  else {
    b = true;
    X15();
  }
}

void X15() {
  flip (171/200) {
    a = true;
    X16();
  }
  else {
    b = true;
    X16();
  }
}

void X16() {
  flip (599/1000) {
    if (a) {
      X20();
    }
    else {
      X20();
    }
  }
}

void X17() {
  X13();
  X14();
}

void X18() {
  flip (137/500) {
    if (b) {
      X13();
    }
    else {
      X15();
    }
  }
}

void X19() {
  flip (787/1000) {
    if (b) {
      X13();
    }
    else {
      X19();
    }
  }
}

void X20() {
  flip (303/1000) {
    if (b) {
      X22();
    }
    else {
      X20();
    }
  }
}

void X21() {
  X24();
  X17();
}

void X22() {
  flip (107/500) {
    if (a) {
      X16();
    }
    else {
      X18();
    }
  }
}

void X23() {
  X20();
  X19();
}

void X24() {
  flip (83/1000) {
    if (b) {
      X19();
    }
    else {
      X25();
    }
  }
}

void X25() {
  X19();
  X29();
}

void X26() {
  flip (54/125) {
    if (a) {
      X28();
    }
    else {
      X31();
    }
  }
}

void X27() {
  X32();
  X27();
}

void X28() {
  flip (48/125) {
    b = true;
    X27();
  }
  else {
    a = true;
    X25();
  }
}

void X29() {
  flip (557/1000) {
    if (a) {
      X32();
    }
    else {
      X28();
    }
  }
}

void X30() {
  flip (881/1000) {
    b = true;
    X29();
  }
  else {
    b = true;
    X34();
  }
}

void X31() {
  X31();
  X35();
}

void X32() {
  X32();
  X36();
}

void X33() {
  flip (361/1000) {
    a = false;
    X32();
  }
  else {
    a = false;
    X38();
  }
}

void X34() {
  flip (93/250) {
    b = true;
    X36();
  }
  else {
    b = false;
    X39();
  }
}

void X35() {
  flip (13/200) {
    if (b) {
      X40();
    }
    else {
      X32();
    }
  }
}

void X36() {
  X39();
  X32();
}

void X37() {
  flip (741/1000) {
    if (a) {
      X42();
    }
    else {
      X41();
    }
  }
}

void X38() {
  flip (197/500) {
    if (a) {
      X39();
    }
    else {
      X41();
    }
  }
}

void X39() {
  flip (933/1000) {
    b = true;
    X44();
  }
  else {
    a = true;
    X37();
  }
}

void X40() {
  flip (169/250) {
    a = true;
    X35();
  }
  else {
    b = true;
    X39();
  }
}

void X41() {
  X39();
  X38();
}

void X42() {
  flip (683/1000) {
    if (b) {
      X41();
    }
    else {
      X44();
    }
  }
}

void X43() {
  flip (681/1000) {
    a = false;
    X43();
  }
  else {
    b = true;
    X43();
  }
}

void X44() {
  X49();
  X43();
}

void X45() {
  flip (64/125) {
    a = false;
    X39();
  }
  else {
    b = false;
    X39();
  }
}

void X46() {
  flip (77/500) {
    b = true;
    X50();
  }
  else {
    b = false;
    X51();
  }
}

void X47() {
  flip (389/1000) {
    if (a) {
      X47();
    }
    else {
      X48();
    }
  }
}

void X48() {
  X51();
  X43();
}

void X49() {
  flip (37/250) {
    if (b) {
      X46();
    }
    else {
      X53();
    }
  }
}

void X50() {
  X48();
  X49();
}

void X51() {
  flip (159/1000) {
    if (b) {
      X46();
    }
    else {
      X49();
    }
  }
}

void X52() {
  flip (489/500) {
    a = true;
    X50();
  }
  else {
    b = true;
    X50();
  }
}

void X53() {
  X52();
  X54();
}

void X54() {
  flip (29/125) {
    if (b) {
      X55();
    }
    else {
      X51();
    }
  }
}

void X55() {
  flip (91/200) {
    if (a) {
      X50();
    }
    else {
      X50();
    }
  }
}

void X56() {
  X51();
  X59();
}

void X57() {
  flip (477/1000) {
    if (b) {
      X55();
    }
    else {
      X52();
    }
  }
}

void X58() {
  X53();
  X61();
}

void X59() {
  flip (987/1000) {
    b = true;
    X55();
  }
  else {
    a = false;
    X63();
  }
}

void X60() {
  flip (363/1000) {
    if (b) {
      X64();
    }
    else {
      X59();
    }
  }
}

void X61() {
  X58();
  X64();
}

void X62() {
  flip (22/125) {
    b = false;
    X58();
  }
  else {
    b = true;
    X66();
  }
}

void X63() {
  flip (429/500) {
    if (b) {
      X61();
    }
    else {
      X64();
    }
  }
}

void X64() {
  flip (683/1000) {
    b = true;
    X62();
  }
  else {
    a = false;
    X61();
  }
}

void X65() {
  flip (169/1000) {
    b = false;
    X66();
  }
  else {
    a = true;
    X69();
  }
}

void X66() {
  flip (13/500) {
    a = false;
    X71();
  }
  else {
    b = false;
    X66();
  }
}

void X67() {
  flip (48/125) {
    b = true;
    X66();
  }
  else {
    b = true;
    X69();
  }
}

void X68() {
  X62();
  X70();
}

void X69() {
  flip (19/250) {
    if (a) {
      X64();
    }
    else {
      X68();
    }
  }
}

void X70() {
  X71();
  X74();
}

void X71() {
  X73();
  X67();
}

void X72() {
  flip (313/1000) {
    if (b) {
      X68();
    }
    else {
      X71();
    }
  }
}

void X73() {
  flip (919/1000) {
    b = false;
    X71();
  }
  else {
    b = false;
    X74();
  }
}

void X74() {
  flip (801/1000) {
    if (a) {
      X70();
    }
    else {
      X79();
    }
  }
}

void X75() {
  X69();
  X69();
}

void X76() {
  flip (549/1000) {
    a = false;
    X74();
  }
  else {
    b = false;
    X81();
  }
}

void X77() {
  X74();
  X77();
}

void X78() {
  flip (103/125) {
    if (a) {
      X79();
    }
    else {
      X78();
    }
  }
}

void X79() {
  X84();
  X82();
}

void X80() {
  X74();
  X84();
}

void X81() {
  X77();
  X82();
}

void X82() {
  flip (22/25) {
    if (a) {
      X83();
    }
    else {
      X76();
    }
  }
}

void X83() {
  flip (59/125) {
    b = false;
    X83();
  }
  else {
    a = false;
    X88();
  }
}

void X84() {
  X87();
  X82();
}

void X85() {
  X83();
  X84();
}

void X86() {
  flip (841/1000) {
    b = false;
    X85();
  }
  else {
    a = true;
    X84();
  }
}

void X87() {
  X88();
  X87();
}

void X88() {
  flip (21/100) {
    if (b) {
      X90();
    }
    else {
      X91();
    }
  }
}

void X89() {
  X87();
  X94();
}

void X90() {
  flip (72/125) {
    if (a) {
      X89();
    }
    else {
      X92();
    }
  }
}

void X91() {
  flip (759/1000) {
    if (b) {
      X85();
    }
    else {
      X93();
    }
  }
}

void X92() {
  flip (99/125) {
    b = true;
    X95();
  }
  else {
    b = false;
    X96();
  }
}

void X93() {
  flip (151/200) {
    b = false;
    X87();
  }
  else {
    a = false;
    X98();
  }
}

void X94() {
  flip (893/1000) {
    a = false;
    X98();
  }
  else {
    b = false;
    X96();
  }
}

void X95() {
  flip (639/1000) {
    if (b) {
      X97();
    }
    else {
      X98();
    }
  }
}

void X96() {
  flip (459/1000) {
    b = false;
    X99();
  }
  else {
    b = false;
    X1();
  }
}

void X97() {
  X91();
  X98();
}

void X98() {
  flip (101/500) {
    b = true;
    X99();
  }
  else {
    a = false;
    X3();
  }
}

void X99() {
  flip (137/1000) {
    a = false;
    X99();
  }
  else {
    b = true;
    X4();
  }
}
