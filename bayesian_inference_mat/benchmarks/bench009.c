bool a;
bool b;

void X0() {
  flip (577/1000) {
    b = true;
    X1();
  }
  else {
    a = false;
    X2();
  }
}

void X1() {
  flip (9/200) {
    a = true;
    X96();
  }
  else {
    a = false;
    X3();
  }
}

void X2() {
  X7();
  X96();
}

void X3() {
  flip (463/1000) {
    if (a) {
      X4();
    }
    else {
      X0();
    }
  }
}

void X4() {
  flip (19/125) {
    a = true;
    X4();
  }
  else {
    a = false;
    X8();
  }
}

void X5() {
  flip (391/500) {
    if (b) {
      X3();
    }
    else {
      X9();
    }
  }
}

void X6() {
  flip (917/1000) {
    b = false;
    X4();
  }
  else {
    a = true;
    X2();
  }
}

void X7() {
  X8();
  X7();
}

void X8() {
  X13();
  X4();
}

void X9() {
  flip (177/200) {
    if (b) {
      X6();
    }
    else {
      X5();
    }
  }
}

void X10() {
  X12();
  X4();
}

void X11() {
  flip (123/1000) {
    a = true;
    X12();
  }
  else {
    b = false;
    X7();
  }
}

void X12() {
  flip (51/125) {
    if (a) {
      X7();
    }
    else {
      X7();
    }
  }
}

void X13() {
  flip (107/1000) {
    if (b) {
      X13();
    }
    else {
      X11();
    }
  }
}

void X14() {
  flip (189/200) {
    if (a) {
      X14();
    }
    else {
      X16();
    }
  }
}

void X15() {
  X18();
  X14();
}

void X16() {
  flip (73/250) {
    if (a) {
      X12();
    }
    else {
      X13();
    }
  }
}

void X17() {
  flip (137/250) {
    b = true;
    X12();
  }
  else {
    b = true;
    X17();
  }
}

void X18() {
  flip (553/1000) {
    if (b) {
      X17();
    }
    else {
      X19();
    }
  }
}

void X19() {
  flip (879/1000) {
    if (b) {
      X14();
    }
    else {
      X21();
    }
  }
}

void X20() {
  flip (139/250) {
    if (a) {
      X24();
    }
    else {
      X18();
    }
  }
}

void X21() {
  X22();
  X16();
}

void X22() {
  flip (46/125) {
    if (a) {
      X18();
    }
    else {
      X24();
    }
  }
}

void X23() {
  flip (112/125) {
    if (a) {
      X19();
    }
    else {
      X28();
    }
  }
}

void X24() {
  X19();
  X24();
}

void X25() {
  X27();
  X24();
}

void X26() {
  flip (389/1000) {
    if (b) {
      X25();
    }
    else {
      X24();
    }
  }
}

void X27() {
  X32();
  X25();
}

void X28() {
  X25();
  X32();
}

void X29() {
  X34();
  X28();
}

void X30() {
  flip (419/1000) {
    if (a) {
      X25();
    }
    else {
      X31();
    }
  }
}

void X31() {
  flip (94/125) {
    if (b) {
      X26();
    }
    else {
      X34();
    }
  }
}

void X32() {
  flip (47/250) {
    if (a) {
      X32();
    }
    else {
      X33();
    }
  }
}

void X33() {
  flip (19/100) {
    a = false;
    X35();
  }
  else {
    b = false;
    X28();
  }
}

void X34() {
  flip (169/200) {
    b = true;
    X32();
  }
  else {
    a = false;
    X39();
  }
}

void X35() {
  flip (389/1000) {
    if (a) {
      X37();
    }
    else {
      X36();
    }
  }
}

void X36() {
  flip (101/125) {
    b = true;
    X32();
  }
  else {
    b = false;
    X38();
  }
}

void X37() {
  X32();
  X38();
}

void X38() {
  flip (633/1000) {
    a = true;
    X32();
  }
  else {
    b = false;
    X41();
  }
}

void X39() {
  flip (193/500) {
    b = false;
    X40();
  }
  else {
    a = false;
    X36();
  }
}

void X40() {
  X40();
  X44();
}

void X41() {
  flip (721/1000) {
    a = false;
    X35();
  }
  else {
    b = true;
    X36();
  }
}

void X42() {
  flip (937/1000) {
    b = true;
    X37();
  }
  else {
    a = false;
    X45();
  }
}

void X43() {
  flip (769/1000) {
    b = true;
    X39();
  }
  else {
    b = true;
    X46();
  }
}

void X44() {
  X40();
  X47();
}

void X45() {
  flip (32/125) {
    if (b) {
      X49();
    }
    else {
      X47();
    }
  }
}

void X46() {
  flip (123/500) {
    if (a) {
      X40();
    }
    else {
      X40();
    }
  }
}

void X47() {
  flip (34/125) {
    a = true;
    X52();
  }
  else {
    b = true;
    X47();
  }
}

void X48() {
  flip (119/1000) {
    a = false;
    X42();
  }
  else {
    b = true;
    X45();
  }
}

void X49() {
  flip (9/40) {
    if (a) {
      X54();
    }
    else {
      X52();
    }
  }
}

void X50() {
  flip (321/500) {
    if (b) {
      X46();
    }
    else {
      X53();
    }
  }
}

void X51() {
  X46();
  X56();
}

void X52() {
  X54();
  X57();
}

void X53() {
  X54();
  X49();
}

void X54() {
  flip (611/1000) {
    if (a) {
      X48();
    }
    else {
      X52();
    }
  }
}

void X55() {
  flip (357/500) {
    if (a) {
      X60();
    }
    else {
      X57();
    }
  }
}

void X56() {
  flip (53/200) {
    if (b) {
      X60();
    }
    else {
      X51();
    }
  }
}

void X57() {
  X60();
  X55();
}

void X58() {
  X62();
  X54();
}

void X59() {
  flip (33/40) {
    a = false;
    X57();
  }
  else {
    b = false;
    X62();
  }
}

void X60() {
  flip (133/200) {
    if (a) {
      X64();
    }
    else {
      X62();
    }
  }
}

void X61() {
  flip (891/1000) {
    if (b) {
      X63();
    }
    else {
      X62();
    }
  }
}

void X62() {
  X57();
  X61();
}

void X63() {
  X68();
  X68();
}

void X64() {
  flip (98/125) {
    a = true;
    X60();
  }
  else {
    b = true;
    X67();
  }
}

void X65() {
  flip (367/500) {
    b = true;
    X63();
  }
  else {
    a = true;
    X63();
  }
}

void X66() {
  X71();
  X65();
}

void X67() {
  flip (473/1000) {
    a = true;
    X69();
  }
  else {
    b = false;
    X67();
  }
}

void X68() {
  flip (621/1000) {
    if (b) {
      X68();
    }
    else {
      X63();
    }
  }
}

void X69() {
  X65();
  X72();
}

void X70() {
  flip (219/1000) {
    b = false;
    X66();
  }
  else {
    a = true;
    X70();
  }
}

void X71() {
  flip (379/500) {
    if (b) {
      X75();
    }
    else {
      X69();
    }
  }
}

void X72() {
  flip (293/500) {
    if (b) {
      X71();
    }
    else {
      X71();
    }
  }
}

void X73() {
  flip (27/500) {
    a = false;
    X72();
  }
  else {
    a = true;
    X77();
  }
}

void X74() {
  X70();
  X75();
}

void X75() {
  X70();
  X71();
}

void X76() {
  X73();
  X76();
}

void X77() {
  flip (81/1000) {
    if (b) {
      X79();
    }
    else {
      X76();
    }
  }
}

void X78() {
  flip (19/250) {
    if (a) {
      X77();
    }
    else {
      X81();
    }
  }
}

void X79() {
  flip (323/500) {
    if (b) {
      X80();
    }
    else {
      X73();
    }
  }
}

void X80() {
  flip (61/100) {
    b = true;
    X79();
  }
  else {
    a = false;
    X74();
  }
}

void X81() {
  flip (243/250) {
    b = false;
    X82();
  }
  else {
    b = true;
    X85();
  }
}

void X82() {
  flip (67/200) {
    a = false;
    X79();
  }
  else {
    a = true;
    X78();
  }
}

void X83() {
  flip (43/125) {
    a = false;
    X88();
  }
  else {
    b = true;
    X84();
  }
}

void X84() {
  flip (893/1000) {
    b = true;
    X78();
  }
  else {
    b = false;
    X86();
  }
}

void X85() {
  flip (44/125) {
    if (a) {
      X89();
    }
    else {
      X85();
    }
  }
}

void X86() {
  flip (227/1000) {
    if (a) {
      X88();
    }
    else {
      X81();
    }
  }
}

void X87() {
  X82();
  X86();
}

void X88() {
  flip (53/125) {
    a = true;
    X89();
  }
  else {
    b = true;
    X87();
  }
}

void X89() {
  X85();
  X84();
}

void X90() {
  flip (31/125) {
    a = true;
    X87();
  }
  else {
    a = true;
    X88();
  }
}

void X91() {
  flip (119/200) {
    a = false;
    X96();
  }
  else {
    a = false;
    X89();
  }
}

void X92() {
  flip (143/500) {
    if (a) {
      X89();
    }
    else {
      X87();
    }
  }
}

void X93() {
  X96();
  X95();
}

void X94() {
  flip (19/20) {
    b = true;
    X89();
  }
  else {
    a = false;
    X88();
  }
}

void X95() {
  flip (67/125) {
    if (b) {
      X0();
    }
    else {
      X91();
    }
  }
}

void X96() {
  flip (613/1000) {
    if (a) {
      X0();
    }
    else {
      X92();
    }
  }
}

void X97() {
  flip (183/200) {
    if (b) {
      X98();
    }
    else {
      X99();
    }
  }
}

void X98() {
  flip (803/1000) {
    if (a) {
      X97();
    }
    else {
      X98();
    }
  }
}

void X99() {
  X95();
  X3();
}
