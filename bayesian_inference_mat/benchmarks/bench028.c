bool a;
bool b;

void X0() {
  flip (567/1000) {
    if (a) {
      X96();
    }
    else {
      X97();
    }
  }
}

void X1() {
  flip (113/1000) {
    if (a) {
      X97();
    }
    else {
      X1();
    }
  }
}

void X2() {
  flip (963/1000) {
    if (a) {
      X99();
    }
    else {
      X3();
    }
  }
}

void X3() {
  flip (893/1000) {
    b = true;
    X8();
  }
  else {
    b = true;
    X0();
  }
}

void X4() {
  X5();
  X99();
}

void X5() {
  flip (449/1000) {
    b = true;
    X9();
  }
  else {
    b = false;
    X2();
  }
}

void X6() {
  X3();
  X5();
}

void X7() {
  flip (133/250) {
    if (b) {
      X5();
    }
    else {
      X9();
    }
  }
}

void X8() {
  flip (21/200) {
    a = true;
    X11();
  }
  else {
    a = true;
    X5();
  }
}

void X9() {
  flip (163/200) {
    a = false;
    X4();
  }
  else {
    b = false;
    X5();
  }
}

void X10() {
  flip (377/1000) {
    if (a) {
      X13();
    }
    else {
      X6();
    }
  }
}

void X11() {
  flip (21/250) {
    a = false;
    X13();
  }
  else {
    a = false;
    X9();
  }
}

void X12() {
  X10();
  X8();
}

void X13() {
  flip (14/125) {
    a = false;
    X12();
  }
  else {
    a = false;
    X8();
  }
}

void X14() {
  flip (7/10) {
    if (a) {
      X16();
    }
    else {
      X17();
    }
  }
}

void X15() {
  X15();
  X20();
}

void X16() {
  X21();
  X20();
}

void X17() {
  flip (39/500) {
    if (a) {
      X12();
    }
    else {
      X20();
    }
  }
}

void X18() {
  flip (753/1000) {
    b = true;
    X12();
  }
  else {
    a = true;
    X15();
  }
}

void X19() {
  flip (697/1000) {
    if (a) {
      X17();
    }
    else {
      X14();
    }
  }
}

void X20() {
  X14();
  X18();
}

void X21() {
  flip (169/1000) {
    a = false;
    X25();
  }
  else {
    a = true;
    X24();
  }
}

void X22() {
  flip (51/200) {
    if (b) {
      X16();
    }
    else {
      X21();
    }
  }
}

void X23() {
  flip (49/500) {
    if (b) {
      X18();
    }
    else {
      X18();
    }
  }
}

void X24() {
  flip (357/500) {
    if (b) {
      X25();
    }
    else {
      X22();
    }
  }
}

void X25() {
  X24();
  X22();
}

void X26() {
  X31();
  X29();
}

void X27() {
  flip (177/250) {
    a = true;
    X22();
  }
  else {
    b = true;
    X29();
  }
}

void X28() {
  flip (743/1000) {
    a = true;
    X25();
  }
  else {
    b = false;
    X26();
  }
}

void X29() {
  flip (103/250) {
    if (a) {
      X31();
    }
    else {
      X34();
    }
  }
}

void X30() {
  flip (317/1000) {
    a = true;
    X30();
  }
  else {
    b = false;
    X28();
  }
}

void X31() {
  flip (807/1000) {
    b = false;
    X34();
  }
  else {
    a = false;
    X28();
  }
}

void X32() {
  flip (171/250) {
    a = true;
    X36();
  }
  else {
    a = false;
    X31();
  }
}

void X33() {
  X30();
  X35();
}

void X34() {
  X36();
  X35();
}

void X35() {
  flip (77/100) {
    a = false;
    X30();
  }
  else {
    a = true;
    X35();
  }
}

void X36() {
  flip (21/100) {
    if (b) {
      X39();
    }
    else {
      X40();
    }
  }
}

void X37() {
  flip (99/100) {
    a = true;
    X37();
  }
  else {
    b = false;
    X36();
  }
}

void X38() {
  X41();
  X42();
}

void X39() {
  X40();
  X39();
}

void X40() {
  flip (77/125) {
    b = true;
    X45();
  }
  else {
    b = true;
    X36();
  }
}

void X41() {
  flip (133/250) {
    if (a) {
      X36();
    }
    else {
      X41();
    }
  }
}

void X42() {
  flip (873/1000) {
    if (a) {
      X47();
    }
    else {
      X42();
    }
  }
}

void X43() {
  flip (77/200) {
    a = true;
    X40();
  }
  else {
    a = false;
    X46();
  }
}

void X44() {
  X40();
  X41();
}

void X45() {
  flip (4/125) {
    a = false;
    X46();
  }
  else {
    b = false;
    X40();
  }
}

void X46() {
  flip (11/1000) {
    if (a) {
      X41();
    }
    else {
      X41();
    }
  }
}

void X47() {
  flip (19/1000) {
    if (b) {
      X45();
    }
    else {
      X45();
    }
  }
}

void X48() {
  X46();
  X43();
}

void X49() {
  flip (3/25) {
    a = true;
    X50();
  }
  else {
    b = false;
    X49();
  }
}

void X50() {
  X53();
  X47();
}

void X51() {
  flip (679/1000) {
    if (b) {
      X45();
    }
    else {
      X47();
    }
  }
}

void X52() {
  X50();
  X48();
}

void X53() {
  flip (23/50) {
    b = true;
    X53();
  }
  else {
    b = false;
    X58();
  }
}

void X54() {
  flip (9/100) {
    if (a) {
      X58();
    }
    else {
      X57();
    }
  }
}

void X55() {
  flip (303/1000) {
    a = true;
    X55();
  }
  else {
    b = false;
    X50();
  }
}

void X56() {
  X50();
  X61();
}

void X57() {
  flip (357/1000) {
    b = true;
    X55();
  }
  else {
    b = false;
    X58();
  }
}

void X58() {
  flip (889/1000) {
    if (a) {
      X53();
    }
    else {
      X52();
    }
  }
}

void X59() {
  X59();
  X58();
}

void X60() {
  flip (7/40) {
    b = false;
    X60();
  }
  else {
    b = true;
    X59();
  }
}

void X61() {
  flip (613/1000) {
    b = false;
    X60();
  }
  else {
    b = false;
    X57();
  }
}

void X62() {
  flip (87/100) {
    a = false;
    X58();
  }
  else {
    b = false;
    X59();
  }
}

void X63() {
  X65();
  X59();
}

void X64() {
  flip (79/1000) {
    a = false;
    X63();
  }
  else {
    a = true;
    X66();
  }
}

void X65() {
  X67();
  X67();
}

void X66() {
  flip (481/1000) {
    if (a) {
      X60();
    }
    else {
      X63();
    }
  }
}

void X67() {
  flip (1/20) {
    if (a) {
      X70();
    }
    else {
      X67();
    }
  }
}

void X68() {
  flip (887/1000) {
    if (b) {
      X63();
    }
    else {
      X70();
    }
  }
}

void X69() {
  flip (113/125) {
    if (b) {
      X74();
    }
    else {
      X68();
    }
  }
}

void X70() {
  flip (711/1000) {
    if (b) {
      X71();
    }
    else {
      X68();
    }
  }
}

void X71() {
  X73();
  X75();
}

void X72() {
  X73();
  X71();
}

void X73() {
  flip (227/1000) {
    if (a) {
      X73();
    }
    else {
      X72();
    }
  }
}

void X74() {
  X78();
  X72();
}

void X75() {
  X79();
  X70();
}

void X76() {
  flip (281/1000) {
    if (a) {
      X76();
    }
    else {
      X72();
    }
  }
}

void X77() {
  flip (26/125) {
    if (b) {
      X81();
    }
    else {
      X72();
    }
  }
}

void X78() {
  flip (249/1000) {
    a = true;
    X76();
  }
  else {
    b = false;
    X82();
  }
}

void X79() {
  X73();
  X75();
}

void X80() {
  X84();
  X74();
}

void X81() {
  flip (103/125) {
    if (b) {
      X75();
    }
    else {
      X85();
    }
  }
}

void X82() {
  flip (261/500) {
    a = false;
    X85();
  }
  else {
    b = true;
    X77();
  }
}

void X83() {
  X78();
  X83();
}

void X84() {
  flip (21/1000) {
    if (a) {
      X85();
    }
    else {
      X80();
    }
  }
}

void X85() {
  flip (227/500) {
    if (a) {
      X87();
    }
    else {
      X89();
    }
  }
}

void X86() {
  X81();
  X89();
}

void X87() {
  flip (187/200) {
    if (a) {
      X81();
    }
    else {
      X88();
    }
  }
}

void X88() {
  flip (353/500) {
    if (b) {
      X85();
    }
    else {
      X87();
    }
  }
}

void X89() {
  flip (63/1000) {
    a = false;
    X91();
  }
  else {
    a = true;
    X93();
  }
}

void X90() {
  X84();
  X93();
}

void X91() {
  flip (411/1000) {
    if (b) {
      X94();
    }
    else {
      X91();
    }
  }
}

void X92() {
  flip (57/100) {
    if (a) {
      X91();
    }
    else {
      X89();
    }
  }
}

void X93() {
  flip (917/1000) {
    if (b) {
      X93();
    }
    else {
      X87();
    }
  }
}

void X94() {
  X93();
  X90();
}

void X95() {
  flip (907/1000) {
    if (a) {
      X93();
    }
    else {
      X90();
    }
  }
}

void X96() {
  flip (7/8) {
    if (a) {
      X92();
    }
    else {
      X94();
    }
  }
}

void X97() {
  flip (24/25) {
    b = true;
    X0();
  }
  else {
    a = false;
    X94();
  }
}

void X98() {
  X98();
  X3();
}

void X99() {
  X95();
  X3();
}
