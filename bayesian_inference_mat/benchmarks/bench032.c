bool a;
bool b;

void X0() {
  X0();
  X2();
}

void X1() {
  flip (819/1000) {
    if (b) {
      X0();
    }
    else {
      X99();
    }
  }
}

void X2() {
  X7();
  X4();
}

void X3() {
  flip (401/1000) {
    b = true;
    X3();
  }
  else {
    b = false;
    X7();
  }
}

void X4() {
  flip (7/500) {
    if (a) {
      X99();
    }
    else {
      X4();
    }
  }
}

void X5() {
  flip (363/500) {
    if (a) {
      X99();
    }
    else {
      X2();
    }
  }
}

void X6() {
  X3();
  X9();
}

void X7() {
  X5();
  X6();
}

void X8() {
  flip (67/250) {
    b = false;
    X4();
  }
  else {
    a = true;
    X10();
  }
}

void X9() {
  flip (387/1000) {
    b = true;
    X12();
  }
  else {
    b = true;
    X8();
  }
}

void X10() {
  flip (177/500) {
    a = true;
    X13();
  }
  else {
    a = true;
    X7();
  }
}

void X11() {
  flip (861/1000) {
    b = false;
    X8();
  }
  else {
    a = true;
    X6();
  }
}

void X12() {
  flip (247/250) {
    if (b) {
      X6();
    }
    else {
      X16();
    }
  }
}

void X13() {
  flip (47/100) {
    a = false;
    X10();
  }
  else {
    b = false;
    X7();
  }
}

void X14() {
  flip (51/200) {
    if (b) {
      X9();
    }
    else {
      X12();
    }
  }
}

void X15() {
  flip (31/125) {
    b = false;
    X13();
  }
  else {
    b = true;
    X12();
  }
}

void X16() {
  flip (609/1000) {
    if (b) {
      X17();
    }
    else {
      X19();
    }
  }
}

void X17() {
  X21();
  X11();
}

void X18() {
  flip (283/1000) {
    a = false;
    X18();
  }
  else {
    b = false;
    X19();
  }
}

void X19() {
  X23();
  X17();
}

void X20() {
  flip (21/25) {
    a = true;
    X23();
  }
  else {
    b = false;
    X24();
  }
}

void X21() {
  flip (233/500) {
    b = false;
    X17();
  }
  else {
    b = true;
    X22();
  }
}

void X22() {
  X23();
  X21();
}

void X23() {
  flip (743/1000) {
    b = false;
    X17();
  }
  else {
    b = false;
    X19();
  }
}

void X24() {
  X26();
  X20();
}

void X25() {
  flip (87/200) {
    b = true;
    X21();
  }
  else {
    a = true;
    X21();
  }
}

void X26() {
  X27();
  X26();
}

void X27() {
  flip (121/125) {
    if (a) {
      X29();
    }
    else {
      X28();
    }
  }
}

void X28() {
  flip (371/1000) {
    if (b) {
      X31();
    }
    else {
      X29();
    }
  }
}

void X29() {
  X30();
  X23();
}

void X30() {
  X35();
  X25();
}

void X31() {
  flip (122/125) {
    b = true;
    X28();
  }
  else {
    b = true;
    X30();
  }
}

void X32() {
  flip (387/500) {
    if (b) {
      X35();
    }
    else {
      X32();
    }
  }
}

void X33() {
  flip (81/500) {
    a = false;
    X36();
  }
  else {
    b = false;
    X31();
  }
}

void X34() {
  flip (57/100) {
    if (b) {
      X31();
    }
    else {
      X31();
    }
  }
}

void X35() {
  flip (1/500) {
    b = false;
    X36();
  }
  else {
    a = false;
    X37();
  }
}

void X36() {
  flip (137/250) {
    b = false;
    X41();
  }
  else {
    b = false;
    X35();
  }
}

void X37() {
  flip (587/1000) {
    b = true;
    X36();
  }
  else {
    b = true;
    X38();
  }
}

void X38() {
  flip (867/1000) {
    if (b) {
      X33();
    }
    else {
      X38();
    }
  }
}

void X39() {
  flip (377/1000) {
    a = true;
    X41();
  }
  else {
    a = false;
    X37();
  }
}

void X40() {
  flip (871/1000) {
    a = false;
    X39();
  }
  else {
    b = true;
    X34();
  }
}

void X41() {
  flip (41/500) {
    b = false;
    X40();
  }
  else {
    a = false;
    X45();
  }
}

void X42() {
  flip (28/125) {
    if (a) {
      X44();
    }
    else {
      X46();
    }
  }
}

void X43() {
  flip (113/500) {
    a = false;
    X44();
  }
  else {
    a = false;
    X40();
  }
}

void X44() {
  flip (39/50) {
    a = false;
    X46();
  }
  else {
    a = true;
    X46();
  }
}

void X45() {
  X46();
  X45();
}

void X46() {
  flip (289/1000) {
    if (a) {
      X51();
    }
    else {
      X44();
    }
  }
}

void X47() {
  X47();
  X47();
}

void X48() {
  flip (423/500) {
    if (b) {
      X44();
    }
    else {
      X53();
    }
  }
}

void X49() {
  X46();
  X44();
}

void X50() {
  flip (401/500) {
    a = true;
    X52();
  }
  else {
    a = false;
    X54();
  }
}

void X51() {
  X49();
  X56();
}

void X52() {
  flip (39/100) {
    a = true;
    X54();
  }
  else {
    a = true;
    X57();
  }
}

void X53() {
  flip (221/500) {
    b = true;
    X47();
  }
  else {
    a = false;
    X57();
  }
}

void X54() {
  flip (149/250) {
    b = false;
    X59();
  }
  else {
    b = true;
    X50();
  }
}

void X55() {
  flip (563/1000) {
    if (b) {
      X57();
    }
    else {
      X60();
    }
  }
}

void X56() {
  flip (491/500) {
    if (a) {
      X55();
    }
    else {
      X56();
    }
  }
}

void X57() {
  flip (33/500) {
    if (b) {
      X51();
    }
    else {
      X54();
    }
  }
}

void X58() {
  X53();
  X62();
}

void X59() {
  flip (171/250) {
    a = false;
    X59();
  }
  else {
    b = false;
    X62();
  }
}

void X60() {
  flip (801/1000) {
    if (b) {
      X62();
    }
    else {
      X59();
    }
  }
}

void X61() {
  flip (333/1000) {
    a = false;
    X57();
  }
  else {
    b = false;
    X65();
  }
}

void X62() {
  flip (121/125) {
    b = false;
    X66();
  }
  else {
    a = false;
    X60();
  }
}

void X63() {
  flip (161/1000) {
    if (b) {
      X58();
    }
    else {
      X65();
    }
  }
}

void X64() {
  X65();
  X67();
}

void X65() {
  flip (333/1000) {
    if (a) {
      X64();
    }
    else {
      X63();
    }
  }
}

void X66() {
  X63();
  X63();
}

void X67() {
  X71();
  X69();
}

void X68() {
  flip (89/100) {
    a = true;
    X65();
  }
  else {
    a = true;
    X73();
  }
}

void X69() {
  flip (109/250) {
    a = true;
    X71();
  }
  else {
    a = false;
    X65();
  }
}

void X70() {
  flip (547/1000) {
    a = false;
    X68();
  }
  else {
    b = false;
    X72();
  }
}

void X71() {
  flip (211/1000) {
    b = true;
    X66();
  }
  else {
    b = false;
    X72();
  }
}

void X72() {
  flip (23/25) {
    if (b) {
      X70();
    }
    else {
      X72();
    }
  }
}

void X73() {
  X69();
  X78();
}

void X74() {
  flip (807/1000) {
    if (b) {
      X79();
    }
    else {
      X79();
    }
  }
}

void X75() {
  flip (59/250) {
    if (b) {
      X70();
    }
    else {
      X77();
    }
  }
}

void X76() {
  flip (287/500) {
    b = false;
    X78();
  }
  else {
    a = true;
    X73();
  }
}

void X77() {
  X82();
  X78();
}

void X78() {
  flip (1/125) {
    b = true;
    X83();
  }
  else {
    b = false;
    X82();
  }
}

void X79() {
  flip (229/250) {
    if (a) {
      X79();
    }
    else {
      X81();
    }
  }
}

void X80() {
  flip (869/1000) {
    if (a) {
      X78();
    }
    else {
      X82();
    }
  }
}

void X81() {
  flip (23/500) {
    b = true;
    X75();
  }
  else {
    b = true;
    X82();
  }
}

void X82() {
  flip (307/1000) {
    b = false;
    X77();
  }
  else {
    a = true;
    X82();
  }
}

void X83() {
  X79();
  X77();
}

void X84() {
  X82();
  X86();
}

void X85() {
  flip (61/250) {
    if (b) {
      X83();
    }
    else {
      X88();
    }
  }
}

void X86() {
  flip (139/250) {
    if (b) {
      X90();
    }
    else {
      X90();
    }
  }
}

void X87() {
  X84();
  X82();
}

void X88() {
  flip (161/250) {
    if (a) {
      X87();
    }
    else {
      X84();
    }
  }
}

void X89() {
  flip (1/500) {
    b = false;
    X90();
  }
  else {
    b = true;
    X93();
  }
}

void X90() {
  flip (391/500) {
    a = false;
    X94();
  }
  else {
    a = true;
    X88();
  }
}

void X91() {
  flip (863/1000) {
    if (b) {
      X88();
    }
    else {
      X88();
    }
  }
}

void X92() {
  X96();
  X97();
}

void X93() {
  flip (29/250) {
    b = false;
    X90();
  }
  else {
    a = true;
    X92();
  }
}

void X94() {
  X89();
  X91();
}

void X95() {
  flip (113/125) {
    b = false;
    X96();
  }
  else {
    a = false;
    X95();
  }
}

void X96() {
  flip (97/125) {
    if (b) {
      X98();
    }
    else {
      X93();
    }
  }
}

void X97() {
  flip (419/1000) {
    if (a) {
      X94();
    }
    else {
      X0();
    }
  }
}

void X98() {
  flip (79/500) {
    if (a) {
      X97();
    }
    else {
      X3();
    }
  }
}

void X99() {
  flip (473/500) {
    a = false;
    X1();
  }
  else {
    a = true;
    X95();
  }
}
