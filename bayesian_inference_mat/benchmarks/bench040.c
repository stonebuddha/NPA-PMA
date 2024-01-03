bool a;
bool b;

void X0() {
  X3();
  X5();
}

void X1() {
  X0();
  X3();
}

void X2() {
  X3();
  X7();
}

void X3() {
  flip (63/500) {
    if (b) {
      X99();
    }
    else {
      X2();
    }
  }
}

void X4() {
  flip (191/250) {
    if (b) {
      X7();
    }
    else {
      X0();
    }
  }
}

void X5() {
  flip (257/1000) {
    if (a) {
      X8();
    }
    else {
      X4();
    }
  }
}

void X6() {
  X11();
  X10();
}

void X7() {
  flip (74/125) {
    if (a) {
      X11();
    }
    else {
      X5();
    }
  }
}

void X8() {
  flip (249/250) {
    a = true;
    X6();
  }
  else {
    b = true;
    X2();
  }
}

void X9() {
  flip (103/500) {
    if (a) {
      X4();
    }
    else {
      X6();
    }
  }
}

void X10() {
  X14();
  X4();
}

void X11() {
  flip (69/1000) {
    if (b) {
      X16();
    }
    else {
      X13();
    }
  }
}

void X12() {
  X7();
  X16();
}

void X13() {
  flip (629/1000) {
    if (b) {
      X12();
    }
    else {
      X18();
    }
  }
}

void X14() {
  X15();
  X16();
}

void X15() {
  flip (114/125) {
    if (b) {
      X15();
    }
    else {
      X17();
    }
  }
}

void X16() {
  flip (323/500) {
    b = false;
    X17();
  }
  else {
    a = false;
    X16();
  }
}

void X17() {
  X18();
  X22();
}

void X18() {
  flip (13/250) {
    b = true;
    X20();
  }
  else {
    b = true;
    X15();
  }
}

void X19() {
  X19();
  X15();
}

void X20() {
  flip (223/1000) {
    if (b) {
      X18();
    }
    else {
      X22();
    }
  }
}

void X21() {
  X19();
  X23();
}

void X22() {
  flip (63/1000) {
    a = true;
    X20();
  }
  else {
    b = false;
    X17();
  }
}

void X23() {
  flip (959/1000) {
    b = false;
    X27();
  }
  else {
    a = true;
    X24();
  }
}

void X24() {
  flip (103/500) {
    a = false;
    X25();
  }
  else {
    a = true;
    X25();
  }
}

void X25() {
  flip (37/50) {
    if (b) {
      X22();
    }
    else {
      X22();
    }
  }
}

void X26() {
  flip (281/1000) {
    a = false;
    X29();
  }
  else {
    a = false;
    X24();
  }
}

void X27() {
  flip (129/200) {
    a = false;
    X26();
  }
  else {
    b = false;
    X21();
  }
}

void X28() {
  X31();
  X26();
}

void X29() {
  flip (383/1000) {
    if (a) {
      X25();
    }
    else {
      X34();
    }
  }
}

void X30() {
  flip (39/100) {
    a = false;
    X35();
  }
  else {
    b = false;
    X31();
  }
}

void X31() {
  flip (36/125) {
    a = false;
    X27();
  }
  else {
    b = false;
    X33();
  }
}

void X32() {
  flip (181/500) {
    if (a) {
      X29();
    }
    else {
      X33();
    }
  }
}

void X33() {
  flip (183/500) {
    b = false;
    X35();
  }
  else {
    a = true;
    X29();
  }
}

void X34() {
  flip (29/40) {
    b = true;
    X33();
  }
  else {
    a = true;
    X28();
  }
}

void X35() {
  flip (683/1000) {
    if (b) {
      X37();
    }
    else {
      X30();
    }
  }
}

void X36() {
  X41();
  X38();
}

void X37() {
  X37();
  X37();
}

void X38() {
  X42();
  X42();
}

void X39() {
  flip (803/1000) {
    b = false;
    X37();
  }
  else {
    b = false;
    X37();
  }
}

void X40() {
  flip (11/1000) {
    if (b) {
      X41();
    }
    else {
      X45();
    }
  }
}

void X41() {
  flip (39/200) {
    if (b) {
      X36();
    }
    else {
      X39();
    }
  }
}

void X42() {
  flip (211/1000) {
    a = true;
    X41();
  }
  else {
    b = true;
    X36();
  }
}

void X43() {
  flip (627/1000) {
    if (a) {
      X48();
    }
    else {
      X38();
    }
  }
}

void X44() {
  flip (601/1000) {
    if (a) {
      X38();
    }
    else {
      X40();
    }
  }
}

void X45() {
  flip (191/200) {
    b = true;
    X44();
  }
  else {
    a = false;
    X44();
  }
}

void X46() {
  flip (29/50) {
    if (b) {
      X50();
    }
    else {
      X49();
    }
  }
}

void X47() {
  flip (951/1000) {
    if (a) {
      X47();
    }
    else {
      X42();
    }
  }
}

void X48() {
  X46();
  X48();
}

void X49() {
  flip (3/125) {
    if (b) {
      X47();
    }
    else {
      X53();
    }
  }
}

void X50() {
  flip (261/1000) {
    if (b) {
      X44();
    }
    else {
      X54();
    }
  }
}

void X51() {
  flip (279/500) {
    if (b) {
      X45();
    }
    else {
      X51();
    }
  }
}

void X52() {
  X53();
  X46();
}

void X53() {
  flip (293/500) {
    if (a) {
      X58();
    }
    else {
      X53();
    }
  }
}

void X54() {
  flip (893/1000) {
    if (a) {
      X49();
    }
    else {
      X55();
    }
  }
}

void X55() {
  X52();
  X60();
}

void X56() {
  flip (473/1000) {
    a = false;
    X53();
  }
  else {
    b = true;
    X56();
  }
}

void X57() {
  flip (73/100) {
    if (a) {
      X53();
    }
    else {
      X52();
    }
  }
}

void X58() {
  flip (343/500) {
    a = true;
    X53();
  }
  else {
    b = true;
    X58();
  }
}

void X59() {
  flip (149/200) {
    b = false;
    X63();
  }
  else {
    a = true;
    X62();
  }
}

void X60() {
  flip (13/250) {
    b = true;
    X64();
  }
  else {
    a = true;
    X61();
  }
}

void X61() {
  flip (47/125) {
    if (a) {
      X56();
    }
    else {
      X62();
    }
  }
}

void X62() {
  flip (151/250) {
    a = false;
    X67();
  }
  else {
    a = true;
    X56();
  }
}

void X63() {
  flip (54/125) {
    a = true;
    X67();
  }
  else {
    b = true;
    X60();
  }
}

void X64() {
  flip (107/250) {
    if (b) {
      X67();
    }
    else {
      X65();
    }
  }
}

void X65() {
  flip (77/1000) {
    if (b) {
      X66();
    }
    else {
      X65();
    }
  }
}

void X66() {
  X67();
  X62();
}

void X67() {
  flip (79/125) {
    if (a) {
      X67();
    }
    else {
      X65();
    }
  }
}

void X68() {
  X65();
  X70();
}

void X69() {
  X64();
  X69();
}

void X70() {
  flip (1/250) {
    b = false;
    X68();
  }
  else {
    b = false;
    X73();
  }
}

void X71() {
  flip (7/100) {
    b = true;
    X73();
  }
  else {
    a = false;
    X73();
  }
}

void X72() {
  X76();
  X69();
}

void X73() {
  flip (493/1000) {
    b = true;
    X73();
  }
  else {
    b = false;
    X68();
  }
}

void X74() {
  flip (309/500) {
    a = true;
    X79();
  }
  else {
    b = false;
    X75();
  }
}

void X75() {
  flip (593/1000) {
    if (a) {
      X80();
    }
    else {
      X79();
    }
  }
}

void X76() {
  X73();
  X76();
}

void X77() {
  flip (72/125) {
    a = true;
    X76();
  }
  else {
    b = true;
    X73();
  }
}

void X78() {
  flip (461/1000) {
    if (a) {
      X76();
    }
    else {
      X79();
    }
  }
}

void X79() {
  flip (129/250) {
    if (a) {
      X83();
    }
    else {
      X79();
    }
  }
}

void X80() {
  flip (193/200) {
    if (a) {
      X75();
    }
    else {
      X76();
    }
  }
}

void X81() {
  X75();
  X83();
}

void X82() {
  flip (7/25) {
    if (a) {
      X78();
    }
    else {
      X79();
    }
  }
}

void X83() {
  flip (453/1000) {
    if (a) {
      X77();
    }
    else {
      X88();
    }
  }
}

void X84() {
  flip (81/125) {
    if (b) {
      X82();
    }
    else {
      X82();
    }
  }
}

void X85() {
  X85();
  X90();
}

void X86() {
  flip (349/1000) {
    a = false;
    X80();
  }
  else {
    a = false;
    X82();
  }
}

void X87() {
  X87();
  X87();
}

void X88() {
  X91();
  X91();
}

void X89() {
  X94();
  X88();
}

void X90() {
  flip (62/125) {
    a = false;
    X91();
  }
  else {
    b = true;
    X91();
  }
}

void X91() {
  flip (487/500) {
    b = false;
    X89();
  }
  else {
    b = false;
    X90();
  }
}

void X92() {
  flip (249/1000) {
    if (b) {
      X96();
    }
    else {
      X91();
    }
  }
}

void X93() {
  X97();
  X98();
}

void X94() {
  flip (171/500) {
    b = true;
    X97();
  }
  else {
    b = false;
    X93();
  }
}

void X95() {
  X90();
  X89();
}

void X96() {
  flip (921/1000) {
    a = false;
    X99();
  }
  else {
    b = false;
    X99();
  }
}

void X97() {
  X1();
  X97();
}

void X98() {
  X99();
  X95();
}

void X99() {
  flip (859/1000) {
    a = false;
    X93();
  }
  else {
    b = true;
    X98();
  }
}
