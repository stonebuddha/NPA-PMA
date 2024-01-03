bool a;
bool b;

void X0() {
  flip (237/500) {
    if (b) {
      X2();
    }
    else {
      X2();
    }
  }
}

void X1() {
  X6();
  X0();
}

void X2() {
  flip (713/1000) {
    a = false;
    X3();
  }
  else {
    b = true;
    X3();
  }
}

void X3() {
  flip (69/200) {
    a = true;
    X8();
  }
  else {
    a = false;
    X4();
  }
}

void X4() {
  X6();
  X2();
}

void X5() {
  flip (81/500) {
    a = false;
    X0();
  }
  else {
    a = false;
    X4();
  }
}

void X6() {
  X8();
  X0();
}

void X7() {
  flip (29/50) {
    if (b) {
      X3();
    }
    else {
      X4();
    }
  }
}

void X8() {
  flip (147/200) {
    if (a) {
      X8();
    }
    else {
      X13();
    }
  }
}

void X9() {
  X7();
  X13();
}

void X10() {
  flip (7/8) {
    b = true;
    X4();
  }
  else {
    a = false;
    X11();
  }
}

void X11() {
  X10();
  X6();
}

void X12() {
  X16();
  X9();
}

void X13() {
  X10();
  X14();
}

void X14() {
  flip (193/250) {
    b = false;
    X19();
  }
  else {
    b = true;
    X8();
  }
}

void X15() {
  flip (121/500) {
    if (a) {
      X20();
    }
    else {
      X19();
    }
  }
}

void X16() {
  flip (87/200) {
    b = true;
    X12();
  }
  else {
    a = true;
    X17();
  }
}

void X17() {
  X14();
  X16();
}

void X18() {
  flip (57/100) {
    b = false;
    X14();
  }
  else {
    a = false;
    X12();
  }
}

void X19() {
  flip (79/500) {
    if (a) {
      X19();
    }
    else {
      X15();
    }
  }
}

void X20() {
  X17();
  X22();
}

void X21() {
  flip (449/1000) {
    if (a) {
      X26();
    }
    else {
      X26();
    }
  }
}

void X22() {
  flip (847/1000) {
    b = true;
    X18();
  }
  else {
    b = true;
    X19();
  }
}

void X23() {
  X20();
  X26();
}

void X24() {
  X20();
  X19();
}

void X25() {
  X29();
  X23();
}

void X26() {
  X29();
  X29();
}

void X27() {
  flip (123/500) {
    if (a) {
      X31();
    }
    else {
      X27();
    }
  }
}

void X28() {
  flip (343/500) {
    b = true;
    X33();
  }
  else {
    b = true;
    X29();
  }
}

void X29() {
  flip (27/125) {
    b = false;
    X26();
  }
  else {
    b = true;
    X30();
  }
}

void X30() {
  X34();
  X26();
}

void X31() {
  X28();
  X26();
}

void X32() {
  flip (221/1000) {
    a = false;
    X35();
  }
  else {
    a = false;
    X27();
  }
}

void X33() {
  flip (71/500) {
    if (a) {
      X36();
    }
    else {
      X35();
    }
  }
}

void X34() {
  X35();
  X38();
}

void X35() {
  flip (309/500) {
    a = false;
    X31();
  }
  else {
    b = false;
    X38();
  }
}

void X36() {
  flip (481/1000) {
    if (a) {
      X39();
    }
    else {
      X38();
    }
  }
}

void X37() {
  flip (749/1000) {
    if (a) {
      X40();
    }
    else {
      X37();
    }
  }
}

void X38() {
  X37();
  X40();
}

void X39() {
  flip (221/500) {
    if (a) {
      X44();
    }
    else {
      X39();
    }
  }
}

void X40() {
  flip (487/500) {
    a = true;
    X38();
  }
  else {
    a = false;
    X41();
  }
}

void X41() {
  flip (77/200) {
    if (b) {
      X39();
    }
    else {
      X35();
    }
  }
}

void X42() {
  X41();
  X42();
}

void X43() {
  flip (119/500) {
    b = true;
    X43();
  }
  else {
    b = false;
    X46();
  }
}

void X44() {
  flip (311/500) {
    if (a) {
      X40();
    }
    else {
      X46();
    }
  }
}

void X45() {
  flip (103/250) {
    if (b) {
      X46();
    }
    else {
      X50();
    }
  }
}

void X46() {
  flip (387/500) {
    if (a) {
      X41();
    }
    else {
      X50();
    }
  }
}

void X47() {
  flip (137/1000) {
    a = false;
    X44();
  }
  else {
    a = true;
    X42();
  }
}

void X48() {
  flip (64/125) {
    b = false;
    X50();
  }
  else {
    b = false;
    X45();
  }
}

void X49() {
  X43();
  X54();
}

void X50() {
  flip (99/500) {
    if (a) {
      X47();
    }
    else {
      X48();
    }
  }
}

void X51() {
  flip (781/1000) {
    if (b) {
      X45();
    }
    else {
      X47();
    }
  }
}

void X52() {
  X48();
  X47();
}

void X53() {
  flip (179/250) {
    b = false;
    X52();
  }
  else {
    a = true;
    X52();
  }
}

void X54() {
  X55();
  X49();
}

void X55() {
  X55();
  X54();
}

void X56() {
  flip (237/500) {
    if (a) {
      X53();
    }
    else {
      X55();
    }
  }
}

void X57() {
  flip (163/500) {
    a = true;
    X53();
  }
  else {
    a = true;
    X60();
  }
}

void X58() {
  flip (39/40) {
    if (b) {
      X56();
    }
    else {
      X54();
    }
  }
}

void X59() {
  X60();
  X55();
}

void X60() {
  flip (473/1000) {
    a = false;
    X59();
  }
  else {
    b = true;
    X61();
  }
}

void X61() {
  flip (69/500) {
    if (b) {
      X64();
    }
    else {
      X65();
    }
  }
}

void X62() {
  flip (51/1000) {
    if (b) {
      X65();
    }
    else {
      X58();
    }
  }
}

void X63() {
  flip (339/500) {
    a = true;
    X57();
  }
  else {
    a = true;
    X65();
  }
}

void X64() {
  flip (201/1000) {
    b = true;
    X64();
  }
  else {
    a = true;
    X58();
  }
}

void X65() {
  X60();
  X59();
}

void X66() {
  flip (93/200) {
    if (b) {
      X60();
    }
    else {
      X70();
    }
  }
}

void X67() {
  flip (283/500) {
    if (a) {
      X66();
    }
    else {
      X72();
    }
  }
}

void X68() {
  X67();
  X71();
}

void X69() {
  flip (133/250) {
    a = true;
    X72();
  }
  else {
    a = false;
    X68();
  }
}

void X70() {
  X70();
  X67();
}

void X71() {
  X67();
  X74();
}

void X72() {
  X75();
  X66();
}

void X73() {
  X76();
  X72();
}

void X74() {
  X74();
  X72();
}

void X75() {
  X74();
  X73();
}

void X76() {
  flip (793/1000) {
    if (b) {
      X81();
    }
    else {
      X80();
    }
  }
}

void X77() {
  flip (133/200) {
    a = true;
    X73();
  }
  else {
    b = true;
    X81();
  }
}

void X78() {
  flip (413/1000) {
    b = false;
    X72();
  }
  else {
    b = false;
    X75();
  }
}

void X79() {
  flip (133/200) {
    if (a) {
      X76();
    }
    else {
      X80();
    }
  }
}

void X80() {
  flip (821/1000) {
    a = false;
    X77();
  }
  else {
    b = false;
    X79();
  }
}

void X81() {
  X84();
  X76();
}

void X82() {
  flip (821/1000) {
    a = false;
    X87();
  }
  else {
    a = false;
    X87();
  }
}

void X83() {
  X82();
  X79();
}

void X84() {
  X88();
  X81();
}

void X85() {
  flip (693/1000) {
    if (b) {
      X90();
    }
    else {
      X87();
    }
  }
}

void X86() {
  X88();
  X83();
}

void X87() {
  flip (451/500) {
    if (b) {
      X92();
    }
    else {
      X81();
    }
  }
}

void X88() {
  flip (23/100) {
    b = true;
    X82();
  }
  else {
    a = true;
    X89();
  }
}

void X89() {
  flip (963/1000) {
    b = true;
    X90();
  }
  else {
    a = true;
    X88();
  }
}

void X90() {
  flip (341/1000) {
    b = false;
    X87();
  }
  else {
    a = false;
    X84();
  }
}

void X91() {
  flip (181/250) {
    b = false;
    X92();
  }
  else {
    b = true;
    X94();
  }
}

void X92() {
  flip (433/1000) {
    b = false;
    X96();
  }
  else {
    a = true;
    X86();
  }
}

void X93() {
  X88();
  X90();
}

void X94() {
  flip (361/1000) {
    b = false;
    X94();
  }
  else {
    b = false;
    X96();
  }
}

void X95() {
  flip (124/125) {
    if (a) {
      X91();
    }
    else {
      X89();
    }
  }
}

void X96() {
  flip (101/250) {
    a = false;
    X96();
  }
  else {
    b = false;
    X98();
  }
}

void X97() {
  X0();
  X2();
}

void X98() {
  X94();
  X96();
}

void X99() {
  flip (519/1000) {
    b = true;
    X0();
  }
  else {
    a = true;
    X99();
  }
}
