bool a;
bool b;

void X0() {
  X5();
  X3();
}

void X1() {
  flip (27/200) {
    b = true;
    X0();
  }
  else {
    b = true;
    X6();
  }
}

void X2() {
  flip (41/50) {
    if (a) {
      X97();
    }
    else {
      X98();
    }
  }
}

void X3() {
  flip (943/1000) {
    if (a) {
      X97();
    }
    else {
      X8();
    }
  }
}

void X4() {
  flip (189/200) {
    b = false;
    X2();
  }
  else {
    a = true;
    X5();
  }
}

void X5() {
  flip (91/100) {
    b = true;
    X2();
  }
  else {
    b = true;
    X99();
  }
}

void X6() {
  flip (3/5) {
    if (a) {
      X2();
    }
    else {
      X11();
    }
  }
}

void X7() {
  flip (467/500) {
    if (a) {
      X11();
    }
    else {
      X7();
    }
  }
}

void X8() {
  flip (43/100) {
    if (b) {
      X6();
    }
    else {
      X8();
    }
  }
}

void X9() {
  flip (201/250) {
    if (a) {
      X7();
    }
    else {
      X13();
    }
  }
}

void X10() {
  flip (601/1000) {
    b = true;
    X9();
  }
  else {
    b = false;
    X9();
  }
}

void X11() {
  X12();
  X6();
}

void X12() {
  X16();
  X16();
}

void X13() {
  flip (47/200) {
    b = true;
    X9();
  }
  else {
    a = true;
    X13();
  }
}

void X14() {
  X13();
  X12();
}

void X15() {
  X15();
  X10();
}

void X16() {
  flip (669/1000) {
    b = true;
    X12();
  }
  else {
    a = true;
    X18();
  }
}

void X17() {
  flip (327/500) {
    a = true;
    X12();
  }
  else {
    b = true;
    X18();
  }
}

void X18() {
  X22();
  X20();
}

void X19() {
  flip (819/1000) {
    if (a) {
      X22();
    }
    else {
      X22();
    }
  }
}

void X20() {
  X15();
  X16();
}

void X21() {
  X15();
  X23();
}

void X22() {
  X27();
  X23();
}

void X23() {
  flip (403/500) {
    if (b) {
      X28();
    }
    else {
      X19();
    }
  }
}

void X24() {
  flip (367/1000) {
    if (a) {
      X27();
    }
    else {
      X28();
    }
  }
}

void X25() {
  flip (93/250) {
    a = true;
    X26();
  }
  else {
    b = false;
    X20();
  }
}

void X26() {
  flip (343/500) {
    b = true;
    X26();
  }
  else {
    a = false;
    X24();
  }
}

void X27() {
  X30();
  X27();
}

void X28() {
  flip (603/1000) {
    if (a) {
      X33();
    }
    else {
      X31();
    }
  }
}

void X29() {
  flip (887/1000) {
    b = true;
    X27();
  }
  else {
    b = false;
    X29();
  }
}

void X30() {
  flip (833/1000) {
    a = true;
    X24();
  }
  else {
    a = true;
    X28();
  }
}

void X31() {
  X32();
  X33();
}

void X32() {
  flip (167/1000) {
    a = false;
    X35();
  }
  else {
    b = true;
    X32();
  }
}

void X33() {
  flip (21/25) {
    a = true;
    X29();
  }
  else {
    a = false;
    X37();
  }
}

void X34() {
  flip (187/1000) {
    if (a) {
      X32();
    }
    else {
      X32();
    }
  }
}

void X35() {
  flip (189/200) {
    if (a) {
      X38();
    }
    else {
      X31();
    }
  }
}

void X36() {
  flip (13/40) {
    if (b) {
      X35();
    }
    else {
      X37();
    }
  }
}

void X37() {
  X35();
  X35();
}

void X38() {
  flip (363/500) {
    if (b) {
      X33();
    }
    else {
      X33();
    }
  }
}

void X39() {
  flip (359/1000) {
    if (b) {
      X42();
    }
    else {
      X42();
    }
  }
}

void X40() {
  flip (121/1000) {
    a = false;
    X35();
  }
  else {
    b = false;
    X40();
  }
}

void X41() {
  X39();
  X44();
}

void X42() {
  flip (111/250) {
    b = true;
    X38();
  }
  else {
    a = true;
    X43();
  }
}

void X43() {
  flip (13/1000) {
    if (a) {
      X48();
    }
    else {
      X48();
    }
  }
}

void X44() {
  X47();
  X39();
}

void X45() {
  flip (69/200) {
    b = false;
    X42();
  }
  else {
    a = true;
    X46();
  }
}

void X46() {
  X50();
  X46();
}

void X47() {
  flip (139/250) {
    if (a) {
      X49();
    }
    else {
      X41();
    }
  }
}

void X48() {
  flip (471/1000) {
    b = false;
    X43();
  }
  else {
    a = false;
    X48();
  }
}

void X49() {
  X50();
  X53();
}

void X50() {
  flip (643/1000) {
    if (b) {
      X49();
    }
    else {
      X54();
    }
  }
}

void X51() {
  X48();
  X49();
}

void X52() {
  flip (807/1000) {
    a = true;
    X48();
  }
  else {
    a = false;
    X54();
  }
}

void X53() {
  flip (3/250) {
    b = false;
    X51();
  }
  else {
    a = false;
    X51();
  }
}

void X54() {
  X59();
  X50();
}

void X55() {
  X52();
  X53();
}

void X56() {
  flip (269/1000) {
    a = true;
    X60();
  }
  else {
    b = true;
    X51();
  }
}

void X57() {
  X54();
  X56();
}

void X58() {
  flip (31/200) {
    if (a) {
      X52();
    }
    else {
      X57();
    }
  }
}

void X59() {
  flip (159/250) {
    b = false;
    X62();
  }
  else {
    b = false;
    X59();
  }
}

void X60() {
  X57();
  X64();
}

void X61() {
  flip (831/1000) {
    b = true;
    X56();
  }
  else {
    b = false;
    X63();
  }
}

void X62() {
  X64();
  X61();
}

void X63() {
  flip (853/1000) {
    b = true;
    X59();
  }
  else {
    b = false;
    X62();
  }
}

void X64() {
  flip (273/1000) {
    b = false;
    X58();
  }
  else {
    a = true;
    X59();
  }
}

void X65() {
  X62();
  X66();
}

void X66() {
  flip (17/40) {
    b = true;
    X68();
  }
  else {
    b = false;
    X65();
  }
}

void X67() {
  flip (47/250) {
    if (a) {
      X71();
    }
    else {
      X72();
    }
  }
}

void X68() {
  flip (4/5) {
    if (b) {
      X62();
    }
    else {
      X65();
    }
  }
}

void X69() {
  X67();
  X63();
}

void X70() {
  X64();
  X74();
}

void X71() {
  flip (263/500) {
    a = true;
    X68();
  }
  else {
    a = true;
    X68();
  }
}

void X72() {
  flip (733/1000) {
    if (a) {
      X71();
    }
    else {
      X74();
    }
  }
}

void X73() {
  X73();
  X75();
}

void X74() {
  flip (39/50) {
    if (b) {
      X76();
    }
    else {
      X75();
    }
  }
}

void X75() {
  flip (36/125) {
    b = true;
    X72();
  }
  else {
    a = false;
    X71();
  }
}

void X76() {
  X76();
  X77();
}

void X77() {
  flip (451/500) {
    if (b) {
      X80();
    }
    else {
      X78();
    }
  }
}

void X78() {
  X79();
  X74();
}

void X79() {
  flip (42/125) {
    a = false;
    X73();
  }
  else {
    a = true;
    X77();
  }
}

void X80() {
  flip (837/1000) {
    a = true;
    X78();
  }
  else {
    b = false;
    X77();
  }
}

void X81() {
  flip (911/1000) {
    if (b) {
      X81();
    }
    else {
      X86();
    }
  }
}

void X82() {
  flip (317/1000) {
    b = true;
    X76();
  }
  else {
    a = false;
    X85();
  }
}

void X83() {
  flip (907/1000) {
    b = false;
    X77();
  }
  else {
    a = true;
    X79();
  }
}

void X84() {
  flip (451/1000) {
    if (b) {
      X79();
    }
    else {
      X86();
    }
  }
}

void X85() {
  flip (42/125) {
    if (b) {
      X83();
    }
    else {
      X82();
    }
  }
}

void X86() {
  X81();
  X86();
}

void X87() {
  flip (13/20) {
    if (b) {
      X90();
    }
    else {
      X88();
    }
  }
}

void X88() {
  flip (23/40) {
    b = true;
    X92();
  }
  else {
    a = true;
    X85();
  }
}

void X89() {
  flip (13/25) {
    a = true;
    X89();
  }
  else {
    b = true;
    X90();
  }
}

void X90() {
  X88();
  X94();
}

void X91() {
  flip (209/500) {
    if (b) {
      X85();
    }
    else {
      X90();
    }
  }
}

void X92() {
  flip (613/1000) {
    if (a) {
      X96();
    }
    else {
      X93();
    }
  }
}

void X93() {
  flip (99/125) {
    if (b) {
      X87();
    }
    else {
      X92();
    }
  }
}

void X94() {
  X98();
  X88();
}

void X95() {
  flip (39/250) {
    if (b) {
      X90();
    }
    else {
      X92();
    }
  }
}

void X96() {
  X92();
  X94();
}

void X97() {
  X99();
  X1();
}

void X98() {
  flip (481/1000) {
    if (a) {
      X95();
    }
    else {
      X0();
    }
  }
}

void X99() {
  flip (373/500) {
    if (a) {
      X4();
    }
    else {
      X93();
    }
  }
}
