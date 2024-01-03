bool a;
bool b;

void X0() {
  flip (651/1000) {
    if (b) {
      X96();
    }
    else {
      X3();
    }
  }
}

void X1() {
  flip (753/1000) {
    if (a) {
      X6();
    }
    else {
      X95();
    }
  }
}

void X2() {
  X3();
  X6();
}

void X3() {
  flip (29/40) {
    b = true;
    X7();
  }
  else {
    a = false;
    X1();
  }
}

void X4() {
  X4();
  X0();
}

void X5() {
  X7();
  X99();
}

void X6() {
  X8();
  X8();
}

void X7() {
  flip (67/200) {
    if (b) {
      X3();
    }
    else {
      X9();
    }
  }
}

void X8() {
  X4();
  X10();
}

void X9() {
  X11();
  X14();
}

void X10() {
  X6();
  X5();
}

void X11() {
  X10();
  X12();
}

void X12() {
  flip (721/1000) {
    b = false;
    X16();
  }
  else {
    b = false;
    X7();
  }
}

void X13() {
  flip (547/1000) {
    b = false;
    X7();
  }
  else {
    b = false;
    X17();
  }
}

void X14() {
  flip (803/1000) {
    if (b) {
      X14();
    }
    else {
      X10();
    }
  }
}

void X15() {
  flip (29/100) {
    b = true;
    X10();
  }
  else {
    b = false;
    X14();
  }
}

void X16() {
  X16();
  X13();
}

void X17() {
  X13();
  X15();
}

void X18() {
  flip (43/100) {
    if (a) {
      X18();
    }
    else {
      X17();
    }
  }
}

void X19() {
  X15();
  X15();
}

void X20() {
  flip (37/500) {
    if (a) {
      X19();
    }
    else {
      X17();
    }
  }
}

void X21() {
  X15();
  X19();
}

void X22() {
  flip (917/1000) {
    if (b) {
      X16();
    }
    else {
      X24();
    }
  }
}

void X23() {
  flip (107/200) {
    if (a) {
      X24();
    }
    else {
      X19();
    }
  }
}

void X24() {
  flip (61/200) {
    if (a) {
      X22();
    }
    else {
      X19();
    }
  }
}

void X25() {
  flip (167/500) {
    if (a) {
      X29();
    }
    else {
      X26();
    }
  }
}

void X26() {
  flip (9/10) {
    if (b) {
      X30();
    }
    else {
      X21();
    }
  }
}

void X27() {
  flip (109/250) {
    a = true;
    X24();
  }
  else {
    b = true;
    X24();
  }
}

void X28() {
  flip (13/1000) {
    if (b) {
      X28();
    }
    else {
      X22();
    }
  }
}

void X29() {
  X26();
  X29();
}

void X30() {
  flip (157/1000) {
    a = false;
    X30();
  }
  else {
    a = false;
    X35();
  }
}

void X31() {
  flip (197/250) {
    b = false;
    X34();
  }
  else {
    b = false;
    X30();
  }
}

void X32() {
  flip (53/200) {
    if (a) {
      X32();
    }
    else {
      X35();
    }
  }
}

void X33() {
  X27();
  X37();
}

void X34() {
  flip (189/500) {
    if (a) {
      X31();
    }
    else {
      X32();
    }
  }
}

void X35() {
  X37();
  X32();
}

void X36() {
  flip (7/250) {
    if (b) {
      X37();
    }
    else {
      X30();
    }
  }
}

void X37() {
  X37();
  X32();
}

void X38() {
  X41();
  X39();
}

void X39() {
  flip (22/25) {
    if (b) {
      X35();
    }
    else {
      X38();
    }
  }
}

void X40() {
  flip (9/250) {
    a = false;
    X40();
  }
  else {
    a = false;
    X37();
  }
}

void X41() {
  flip (189/250) {
    if (b) {
      X40();
    }
    else {
      X39();
    }
  }
}

void X42() {
  flip (737/1000) {
    a = false;
    X45();
  }
  else {
    a = true;
    X40();
  }
}

void X43() {
  X46();
  X39();
}

void X44() {
  X44();
  X49();
}

void X45() {
  flip (59/100) {
    b = false;
    X47();
  }
  else {
    b = false;
    X50();
  }
}

void X46() {
  flip (513/1000) {
    b = true;
    X45();
  }
  else {
    a = true;
    X44();
  }
}

void X47() {
  flip (173/200) {
    a = false;
    X50();
  }
  else {
    a = true;
    X47();
  }
}

void X48() {
  X47();
  X43();
}

void X49() {
  flip (42/125) {
    if (b) {
      X54();
    }
    else {
      X46();
    }
  }
}

void X50() {
  flip (229/1000) {
    b = false;
    X50();
  }
  else {
    a = false;
    X55();
  }
}

void X51() {
  flip (89/1000) {
    if (a) {
      X47();
    }
    else {
      X48();
    }
  }
}

void X52() {
  flip (16/25) {
    if (a) {
      X47();
    }
    else {
      X57();
    }
  }
}

void X53() {
  flip (23/100) {
    if (a) {
      X56();
    }
    else {
      X49();
    }
  }
}

void X54() {
  flip (419/1000) {
    if (a) {
      X50();
    }
    else {
      X49();
    }
  }
}

void X55() {
  flip (47/500) {
    a = true;
    X50();
  }
  else {
    b = true;
    X51();
  }
}

void X56() {
  flip (453/500) {
    if (b) {
      X59();
    }
    else {
      X58();
    }
  }
}

void X57() {
  flip (893/1000) {
    if (a) {
      X59();
    }
    else {
      X57();
    }
  }
}

void X58() {
  X56();
  X54();
}

void X59() {
  X59();
  X63();
}

void X60() {
  X59();
  X55();
}

void X61() {
  X64();
  X58();
}

void X62() {
  X64();
  X62();
}

void X63() {
  flip (19/50) {
    if (a) {
      X57();
    }
    else {
      X59();
    }
  }
}

void X64() {
  flip (26/125) {
    if (a) {
      X58();
    }
    else {
      X60();
    }
  }
}

void X65() {
  flip (487/500) {
    if (a) {
      X61();
    }
    else {
      X68();
    }
  }
}

void X66() {
  X63();
  X69();
}

void X67() {
  X69();
  X71();
}

void X68() {
  flip (977/1000) {
    if (a) {
      X69();
    }
    else {
      X64();
    }
  }
}

void X69() {
  flip (149/500) {
    if (a) {
      X68();
    }
    else {
      X66();
    }
  }
}

void X70() {
  X75();
  X66();
}

void X71() {
  flip (27/40) {
    if (a) {
      X76();
    }
    else {
      X69();
    }
  }
}

void X72() {
  X68();
  X77();
}

void X73() {
  flip (709/1000) {
    if (a) {
      X67();
    }
    else {
      X78();
    }
  }
}

void X74() {
  flip (119/250) {
    if (b) {
      X70();
    }
    else {
      X70();
    }
  }
}

void X75() {
  flip (447/1000) {
    if (b) {
      X76();
    }
    else {
      X80();
    }
  }
}

void X76() {
  flip (78/125) {
    b = true;
    X78();
  }
  else {
    a = true;
    X73();
  }
}

void X77() {
  flip (479/1000) {
    b = false;
    X72();
  }
  else {
    b = false;
    X79();
  }
}

void X78() {
  flip (361/1000) {
    if (a) {
      X81();
    }
    else {
      X74();
    }
  }
}

void X79() {
  flip (283/1000) {
    if (b) {
      X83();
    }
    else {
      X82();
    }
  }
}

void X80() {
  X82();
  X77();
}

void X81() {
  flip (68/125) {
    b = false;
    X77();
  }
  else {
    a = false;
    X76();
  }
}

void X82() {
  X85();
  X80();
}

void X83() {
  flip (237/250) {
    b = false;
    X79();
  }
  else {
    b = false;
    X81();
  }
}

void X84() {
  flip (353/500) {
    b = true;
    X79();
  }
  else {
    b = true;
    X89();
  }
}

void X85() {
  flip (18/25) {
    if (a) {
      X83();
    }
    else {
      X85();
    }
  }
}

void X86() {
  flip (853/1000) {
    b = false;
    X80();
  }
  else {
    a = true;
    X81();
  }
}

void X87() {
  flip (91/125) {
    a = true;
    X83();
  }
  else {
    a = false;
    X84();
  }
}

void X88() {
  X93();
  X91();
}

void X89() {
  flip (19/20) {
    b = true;
    X92();
  }
  else {
    a = true;
    X84();
  }
}

void X90() {
  X95();
  X89();
}

void X91() {
  X93();
  X95();
}

void X92() {
  X90();
  X96();
}

void X93() {
  flip (397/1000) {
    if (a) {
      X91();
    }
    else {
      X98();
    }
  }
}

void X94() {
  flip (271/500) {
    b = false;
    X96();
  }
  else {
    b = true;
    X90();
  }
}

void X95() {
  flip (171/250) {
    b = false;
    X98();
  }
  else {
    b = true;
    X89();
  }
}

void X96() {
  flip (33/125) {
    a = false;
    X0();
  }
  else {
    b = false;
    X96();
  }
}

void X97() {
  flip (58/125) {
    if (b) {
      X96();
    }
    else {
      X93();
    }
  }
}

void X98() {
  X99();
  X95();
}

void X99() {
  flip (48/125) {
    if (b) {
      X97();
    }
    else {
      X97();
    }
  }
}
