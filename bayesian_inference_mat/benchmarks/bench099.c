bool a;
bool b;

void X0() {
  flip (343/500) {
    b = true;
    X94();
  }
  else {
    b = true;
    X1();
  }
}

void X1() {
  X97();
  X2();
}

void X2() {
  flip (27/100) {
    if (b) {
      X3();
    }
    else {
      X2();
    }
  }
}

void X3() {
  flip (1/8) {
    if (a) {
      X98();
    }
    else {
      X4();
    }
  }
}

void X4() {
  flip (297/500) {
    b = true;
    X98();
  }
  else {
    a = false;
    X3();
  }
}

void X5() {
  flip (771/1000) {
    b = true;
    X4();
  }
  else {
    a = true;
    X6();
  }
}

void X6() {
  X3();
  X0();
}

void X7() {
  X4();
  X6();
}

void X8() {
  flip (49/500) {
    if (b) {
      X11();
    }
    else {
      X13();
    }
  }
}

void X9() {
  flip (963/1000) {
    if (b) {
      X9();
    }
    else {
      X4();
    }
  }
}

void X10() {
  X10();
  X4();
}

void X11() {
  X10();
  X14();
}

void X12() {
  X6();
  X9();
}

void X13() {
  X7();
  X12();
}

void X14() {
  flip (289/500) {
    b = false;
    X11();
  }
  else {
    a = true;
    X17();
  }
}

void X15() {
  flip (187/1000) {
    b = false;
    X18();
  }
  else {
    a = false;
    X16();
  }
}

void X16() {
  flip (189/250) {
    a = true;
    X21();
  }
  else {
    b = false;
    X18();
  }
}

void X17() {
  flip (81/1000) {
    a = false;
    X12();
  }
  else {
    a = false;
    X15();
  }
}

void X18() {
  flip (91/100) {
    if (b) {
      X13();
    }
    else {
      X19();
    }
  }
}

void X19() {
  X14();
  X19();
}

void X20() {
  flip (727/1000) {
    if (b) {
      X20();
    }
    else {
      X15();
    }
  }
}

void X21() {
  flip (683/1000) {
    if (b) {
      X26();
    }
    else {
      X24();
    }
  }
}

void X22() {
  flip (29/250) {
    if (b) {
      X25();
    }
    else {
      X25();
    }
  }
}

void X23() {
  X17();
  X27();
}

void X24() {
  X22();
  X21();
}

void X25() {
  flip (11/50) {
    if (b) {
      X29();
    }
    else {
      X19();
    }
  }
}

void X26() {
  X30();
  X25();
}

void X27() {
  flip (341/500) {
    if (b) {
      X31();
    }
    else {
      X30();
    }
  }
}

void X28() {
  flip (727/1000) {
    a = true;
    X31();
  }
  else {
    b = false;
    X31();
  }
}

void X29() {
  X29();
  X29();
}

void X30() {
  flip (57/250) {
    if (b) {
      X27();
    }
    else {
      X32();
    }
  }
}

void X31() {
  flip (66/125) {
    b = true;
    X29();
  }
  else {
    b = false;
    X34();
  }
}

void X32() {
  flip (171/250) {
    if (b) {
      X33();
    }
    else {
      X30();
    }
  }
}

void X33() {
  X32();
  X29();
}

void X34() {
  X36();
  X37();
}

void X35() {
  flip (497/500) {
    if (b) {
      X32();
    }
    else {
      X30();
    }
  }
}

void X36() {
  flip (13/25) {
    b = false;
    X33();
  }
  else {
    a = false;
    X41();
  }
}

void X37() {
  flip (13/25) {
    if (a) {
      X37();
    }
    else {
      X33();
    }
  }
}

void X38() {
  X35();
  X35();
}

void X39() {
  flip (341/1000) {
    a = true;
    X33();
  }
  else {
    b = true;
    X38();
  }
}

void X40() {
  flip (399/1000) {
    if (b) {
      X44();
    }
    else {
      X38();
    }
  }
}

void X41() {
  flip (387/1000) {
    if (b) {
      X44();
    }
    else {
      X45();
    }
  }
}

void X42() {
  X38();
  X43();
}

void X43() {
  flip (33/1000) {
    if (b) {
      X46();
    }
    else {
      X38();
    }
  }
}

void X44() {
  flip (713/1000) {
    b = false;
    X41();
  }
  else {
    a = true;
    X44();
  }
}

void X45() {
  X39();
  X41();
}

void X46() {
  flip (31/50) {
    a = true;
    X49();
  }
  else {
    b = true;
    X46();
  }
}

void X47() {
  flip (93/125) {
    b = true;
    X41();
  }
  else {
    a = true;
    X48();
  }
}

void X48() {
  X45();
  X51();
}

void X49() {
  X46();
  X49();
}

void X50() {
  X51();
  X46();
}

void X51() {
  flip (107/200) {
    if (b) {
      X51();
    }
    else {
      X49();
    }
  }
}

void X52() {
  flip (201/250) {
    if (b) {
      X57();
    }
    else {
      X49();
    }
  }
}

void X53() {
  flip (91/500) {
    a = false;
    X52();
  }
  else {
    b = false;
    X48();
  }
}

void X54() {
  flip (299/500) {
    if (a) {
      X51();
    }
    else {
      X59();
    }
  }
}

void X55() {
  flip (471/500) {
    a = true;
    X53();
  }
  else {
    b = true;
    X53();
  }
}

void X56() {
  X56();
  X52();
}

void X57() {
  flip (281/500) {
    if (b) {
      X53();
    }
    else {
      X51();
    }
  }
}

void X58() {
  flip (199/500) {
    if (a) {
      X54();
    }
    else {
      X61();
    }
  }
}

void X59() {
  flip (71/250) {
    if (b) {
      X61();
    }
    else {
      X55();
    }
  }
}

void X60() {
  X56();
  X54();
}

void X61() {
  X58();
  X59();
}

void X62() {
  flip (309/500) {
    a = true;
    X60();
  }
  else {
    b = false;
    X65();
  }
}

void X63() {
  flip (933/1000) {
    if (a) {
      X66();
    }
    else {
      X66();
    }
  }
}

void X64() {
  X65();
  X66();
}

void X65() {
  X62();
  X68();
}

void X66() {
  X60();
  X63();
}

void X67() {
  flip (639/1000) {
    a = false;
    X70();
  }
  else {
    a = true;
    X72();
  }
}

void X68() {
  X70();
  X68();
}

void X69() {
  X65();
  X70();
}

void X70() {
  X71();
  X72();
}

void X71() {
  flip (609/1000) {
    b = true;
    X73();
  }
  else {
    a = false;
    X66();
  }
}

void X72() {
  flip (473/500) {
    if (a) {
      X72();
    }
    else {
      X69();
    }
  }
}

void X73() {
  flip (97/100) {
    a = true;
    X74();
  }
  else {
    a = false;
    X75();
  }
}

void X74() {
  X74();
  X78();
}

void X75() {
  flip (147/1000) {
    a = false;
    X71();
  }
  else {
    a = false;
    X74();
  }
}

void X76() {
  flip (393/1000) {
    if (a) {
      X77();
    }
    else {
      X81();
    }
  }
}

void X77() {
  X74();
  X82();
}

void X78() {
  flip (491/1000) {
    a = false;
    X77();
  }
  else {
    a = true;
    X83();
  }
}

void X79() {
  flip (329/500) {
    if (b) {
      X81();
    }
    else {
      X73();
    }
  }
}

void X80() {
  flip (17/50) {
    if (a) {
      X85();
    }
    else {
      X81();
    }
  }
}

void X81() {
  flip (9/500) {
    a = false;
    X76();
  }
  else {
    a = true;
    X85();
  }
}

void X82() {
  flip (119/500) {
    if (a) {
      X82();
    }
    else {
      X87();
    }
  }
}

void X83() {
  X85();
  X79();
}

void X84() {
  X82();
  X89();
}

void X85() {
  flip (51/1000) {
    a = false;
    X80();
  }
  else {
    b = false;
    X80();
  }
}

void X86() {
  flip (109/125) {
    a = true;
    X86();
  }
  else {
    b = true;
    X87();
  }
}

void X87() {
  flip (3/25) {
    if (a) {
      X89();
    }
    else {
      X83();
    }
  }
}

void X88() {
  flip (251/500) {
    b = true;
    X87();
  }
  else {
    a = true;
    X89();
  }
}

void X89() {
  X93();
  X91();
}

void X90() {
  flip (187/1000) {
    if (b) {
      X95();
    }
    else {
      X93();
    }
  }
}

void X91() {
  flip (837/1000) {
    if (b) {
      X93();
    }
    else {
      X96();
    }
  }
}

void X92() {
  X97();
  X97();
}

void X93() {
  flip (491/1000) {
    if (a) {
      X95();
    }
    else {
      X96();
    }
  }
}

void X94() {
  flip (7/10) {
    if (a) {
      X93();
    }
    else {
      X89();
    }
  }
}

void X95() {
  flip (49/125) {
    b = true;
    X98();
  }
  else {
    b = true;
    X91();
  }
}

void X96() {
  flip (199/1000) {
    b = true;
    X96();
  }
  else {
    a = false;
    X92();
  }
}

void X97() {
  X93();
  X2();
}

void X98() {
  flip (7/250) {
    if (b) {
      X92();
    }
    else {
      X1();
    }
  }
}

void X99() {
  flip (483/500) {
    b = false;
    X4();
  }
  else {
    b = true;
    X97();
  }
}
