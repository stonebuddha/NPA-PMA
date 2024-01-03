bool a;
bool b;

void X0() {
  flip (21/500) {
    if (a) {
      X0();
    }
    else {
      X5();
    }
  }
}

void X1() {
  X99();
  X0();
}

void X2() {
  flip (409/1000) {
    a = false;
    X5();
  }
  else {
    a = false;
    X99();
  }
}

void X3() {
  flip (19/20) {
    a = false;
    X6();
  }
  else {
    a = false;
    X5();
  }
}

void X4() {
  flip (108/125) {
    if (a) {
      X5();
    }
    else {
      X9();
    }
  }
}

void X5() {
  flip (49/200) {
    if (a) {
      X9();
    }
    else {
      X2();
    }
  }
}

void X6() {
  flip (279/500) {
    b = true;
    X0();
  }
  else {
    a = true;
    X3();
  }
}

void X7() {
  flip (7/25) {
    b = false;
    X4();
  }
  else {
    a = false;
    X6();
  }
}

void X8() {
  X10();
  X3();
}

void X9() {
  X13();
  X8();
}

void X10() {
  flip (173/200) {
    if (b) {
      X9();
    }
    else {
      X11();
    }
  }
}

void X11() {
  X9();
  X5();
}

void X12() {
  flip (209/1000) {
    a = false;
    X13();
  }
  else {
    a = false;
    X16();
  }
}

void X13() {
  flip (153/500) {
    b = false;
    X16();
  }
  else {
    a = true;
    X16();
  }
}

void X14() {
  X18();
  X12();
}

void X15() {
  flip (577/1000) {
    if (a) {
      X14();
    }
    else {
      X10();
    }
  }
}

void X16() {
  X14();
  X12();
}

void X17() {
  X18();
  X15();
}

void X18() {
  flip (387/500) {
    b = true;
    X17();
  }
  else {
    b = false;
    X13();
  }
}

void X19() {
  X19();
  X18();
}

void X20() {
  flip (301/1000) {
    a = false;
    X21();
  }
  else {
    a = false;
    X19();
  }
}

void X21() {
  flip (393/500) {
    if (a) {
      X22();
    }
    else {
      X19();
    }
  }
}

void X22() {
  flip (59/500) {
    if (a) {
      X18();
    }
    else {
      X21();
    }
  }
}

void X23() {
  flip (341/1000) {
    if (a) {
      X22();
    }
    else {
      X21();
    }
  }
}

void X24() {
  X29();
  X29();
}

void X25() {
  X19();
  X23();
}

void X26() {
  flip (791/1000) {
    if (a) {
      X22();
    }
    else {
      X24();
    }
  }
}

void X27() {
  flip (77/1000) {
    b = false;
    X23();
  }
  else {
    b = true;
    X30();
  }
}

void X28() {
  X24();
  X29();
}

void X29() {
  flip (16/125) {
    a = false;
    X26();
  }
  else {
    b = true;
    X29();
  }
}

void X30() {
  flip (9/25) {
    b = false;
    X26();
  }
  else {
    b = true;
    X30();
  }
}

void X31() {
  X36();
  X32();
}

void X32() {
  X29();
  X26();
}

void X33() {
  flip (191/200) {
    a = false;
    X36();
  }
  else {
    b = true;
    X30();
  }
}

void X34() {
  flip (539/1000) {
    if (a) {
      X29();
    }
    else {
      X29();
    }
  }
}

void X35() {
  flip (569/1000) {
    b = true;
    X30();
  }
  else {
    a = false;
    X36();
  }
}

void X36() {
  flip (57/250) {
    if (b) {
      X32();
    }
    else {
      X38();
    }
  }
}

void X37() {
  flip (613/1000) {
    if (a) {
      X37();
    }
    else {
      X32();
    }
  }
}

void X38() {
  X39();
  X38();
}

void X39() {
  flip (253/1000) {
    b = false;
    X37();
  }
  else {
    b = false;
    X44();
  }
}

void X40() {
  flip (261/500) {
    if (a) {
      X42();
    }
    else {
      X38();
    }
  }
}

void X41() {
  flip (1/8) {
    if (b) {
      X38();
    }
    else {
      X39();
    }
  }
}

void X42() {
  flip (151/500) {
    if (a) {
      X47();
    }
    else {
      X46();
    }
  }
}

void X43() {
  flip (41/50) {
    b = false;
    X38();
  }
  else {
    b = false;
    X47();
  }
}

void X44() {
  X41();
  X47();
}

void X45() {
  X47();
  X42();
}

void X46() {
  X42();
  X40();
}

void X47() {
  flip (21/1000) {
    if (a) {
      X51();
    }
    else {
      X50();
    }
  }
}

void X48() {
  X50();
  X51();
}

void X49() {
  X51();
  X50();
}

void X50() {
  flip (729/1000) {
    if (a) {
      X53();
    }
    else {
      X54();
    }
  }
}

void X51() {
  flip (337/500) {
    b = false;
    X53();
  }
  else {
    b = true;
    X54();
  }
}

void X52() {
  X46();
  X47();
}

void X53() {
  flip (101/250) {
    b = false;
    X55();
  }
  else {
    a = false;
    X52();
  }
}

void X54() {
  flip (331/1000) {
    a = true;
    X57();
  }
  else {
    b = true;
    X52();
  }
}

void X55() {
  flip (479/1000) {
    if (b) {
      X53();
    }
    else {
      X49();
    }
  }
}

void X56() {
  flip (609/1000) {
    if (a) {
      X60();
    }
    else {
      X54();
    }
  }
}

void X57() {
  flip (541/1000) {
    b = false;
    X52();
  }
  else {
    b = false;
    X51();
  }
}

void X58() {
  flip (113/1000) {
    if (b) {
      X61();
    }
    else {
      X59();
    }
  }
}

void X59() {
  flip (113/125) {
    b = true;
    X63();
  }
  else {
    a = false;
    X62();
  }
}

void X60() {
  flip (509/1000) {
    if (b) {
      X55();
    }
    else {
      X60();
    }
  }
}

void X61() {
  X58();
  X66();
}

void X62() {
  flip (147/500) {
    b = false;
    X66();
  }
  else {
    a = false;
    X59();
  }
}

void X63() {
  flip (21/50) {
    a = false;
    X63();
  }
  else {
    b = true;
    X60();
  }
}

void X64() {
  flip (311/500) {
    b = true;
    X64();
  }
  else {
    a = true;
    X63();
  }
}

void X65() {
  flip (102/125) {
    b = true;
    X61();
  }
  else {
    a = true;
    X63();
  }
}

void X66() {
  X69();
  X64();
}

void X67() {
  flip (137/1000) {
    if (a) {
      X65();
    }
    else {
      X72();
    }
  }
}

void X68() {
  flip (8/125) {
    if (b) {
      X68();
    }
    else {
      X62();
    }
  }
}

void X69() {
  X64();
  X63();
}

void X70() {
  flip (421/1000) {
    if (a) {
      X74();
    }
    else {
      X73();
    }
  }
}

void X71() {
  X72();
  X66();
}

void X72() {
  flip (4/25) {
    a = false;
    X76();
  }
  else {
    a = true;
    X67();
  }
}

void X73() {
  flip (23/125) {
    a = true;
    X68();
  }
  else {
    a = true;
    X74();
  }
}

void X74() {
  flip (51/100) {
    if (a) {
      X74();
    }
    else {
      X71();
    }
  }
}

void X75() {
  flip (357/1000) {
    a = false;
    X73();
  }
  else {
    a = true;
    X71();
  }
}

void X76() {
  X72();
  X70();
}

void X77() {
  flip (171/250) {
    if (a) {
      X79();
    }
    else {
      X79();
    }
  }
}

void X78() {
  X75();
  X75();
}

void X79() {
  flip (79/250) {
    a = false;
    X78();
  }
  else {
    b = false;
    X75();
  }
}

void X80() {
  X85();
  X75();
}

void X81() {
  flip (31/50) {
    a = false;
    X85();
  }
  else {
    b = true;
    X82();
  }
}

void X82() {
  flip (329/500) {
    b = false;
    X80();
  }
  else {
    b = true;
    X86();
  }
}

void X83() {
  flip (139/500) {
    a = false;
    X81();
  }
  else {
    a = true;
    X82();
  }
}

void X84() {
  flip (1/125) {
    b = true;
    X86();
  }
  else {
    a = false;
    X89();
  }
}

void X85() {
  X84();
  X84();
}

void X86() {
  flip (181/200) {
    if (a) {
      X84();
    }
    else {
      X89();
    }
  }
}

void X87() {
  flip (112/125) {
    b = false;
    X86();
  }
  else {
    b = true;
    X90();
  }
}

void X88() {
  flip (441/1000) {
    b = true;
    X89();
  }
  else {
    a = true;
    X93();
  }
}

void X89() {
  flip (213/1000) {
    b = true;
    X89();
  }
  else {
    a = true;
    X83();
  }
}

void X90() {
  X88();
  X87();
}

void X91() {
  flip (629/1000) {
    b = true;
    X85();
  }
  else {
    b = false;
    X90();
  }
}

void X92() {
  X94();
  X95();
}

void X93() {
  X90();
  X94();
}

void X94() {
  flip (351/500) {
    b = false;
    X95();
  }
  else {
    a = false;
    X99();
  }
}

void X95() {
  X92();
  X95();
}

void X96() {
  X92();
  X97();
}

void X97() {
  flip (147/1000) {
    b = true;
    X94();
  }
  else {
    a = true;
    X95();
  }
}

void X98() {
  flip (29/200) {
    a = false;
    X95();
  }
  else {
    b = true;
    X3();
  }
}

void X99() {
  X4();
  X4();
}
