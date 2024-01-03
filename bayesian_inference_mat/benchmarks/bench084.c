bool a;
bool b;

void X0() {
  flip (183/250) {
    if (a) {
      X2();
    }
    else {
      X2();
    }
  }
}

void X1() {
  flip (79/1000) {
    if (b) {
      X97();
    }
    else {
      X4();
    }
  }
}

void X2() {
  flip (57/1000) {
    if (b) {
      X2();
    }
    else {
      X2();
    }
  }
}

void X3() {
  flip (231/250) {
    if (a) {
      X7();
    }
    else {
      X1();
    }
  }
}

void X4() {
  X98();
  X3();
}

void X5() {
  flip (353/1000) {
    a = true;
    X0();
  }
  else {
    a = true;
    X5();
  }
}

void X6() {
  flip (39/40) {
    if (b) {
      X6();
    }
    else {
      X10();
    }
  }
}

void X7() {
  flip (33/40) {
    if (a) {
      X1();
    }
    else {
      X8();
    }
  }
}

void X8() {
  flip (371/1000) {
    b = false;
    X9();
  }
  else {
    b = false;
    X12();
  }
}

void X9() {
  X13();
  X11();
}

void X10() {
  flip (333/500) {
    if (b) {
      X15();
    }
    else {
      X15();
    }
  }
}

void X11() {
  X7();
  X11();
}

void X12() {
  flip (69/125) {
    a = false;
    X13();
  }
  else {
    b = false;
    X15();
  }
}

void X13() {
  flip (473/500) {
    if (b) {
      X7();
    }
    else {
      X11();
    }
  }
}

void X14() {
  X15();
  X9();
}

void X15() {
  flip (49/250) {
    if (b) {
      X17();
    }
    else {
      X17();
    }
  }
}

void X16() {
  flip (733/1000) {
    a = false;
    X10();
  }
  else {
    a = true;
    X15();
  }
}

void X17() {
  X21();
  X20();
}

void X18() {
  flip (58/125) {
    if (a) {
      X23();
    }
    else {
      X18();
    }
  }
}

void X19() {
  X18();
  X16();
}

void X20() {
  X20();
  X15();
}

void X21() {
  flip (9/40) {
    if (a) {
      X23();
    }
    else {
      X24();
    }
  }
}

void X22() {
  flip (19/250) {
    a = false;
    X20();
  }
  else {
    a = true;
    X25();
  }
}

void X23() {
  flip (777/1000) {
    if (a) {
      X25();
    }
    else {
      X17();
    }
  }
}

void X24() {
  flip (709/1000) {
    b = true;
    X29();
  }
  else {
    b = true;
    X28();
  }
}

void X25() {
  X26();
  X25();
}

void X26() {
  X28();
  X26();
}

void X27() {
  flip (259/500) {
    b = false;
    X31();
  }
  else {
    a = false;
    X23();
  }
}

void X28() {
  X26();
  X26();
}

void X29() {
  X23();
  X33();
}

void X30() {
  flip (3/200) {
    a = false;
    X24();
  }
  else {
    b = true;
    X24();
  }
}

void X31() {
  flip (3/500) {
    b = true;
    X28();
  }
  else {
    a = true;
    X34();
  }
}

void X32() {
  flip (88/125) {
    a = true;
    X32();
  }
  else {
    b = false;
    X36();
  }
}

void X33() {
  flip (123/250) {
    if (a) {
      X32();
    }
    else {
      X35();
    }
  }
}

void X34() {
  flip (289/1000) {
    if (a) {
      X30();
    }
    else {
      X37();
    }
  }
}

void X35() {
  X38();
  X30();
}

void X36() {
  flip (114/125) {
    b = true;
    X32();
  }
  else {
    a = false;
    X39();
  }
}

void X37() {
  X42();
  X34();
}

void X38() {
  flip (141/500) {
    if (a) {
      X33();
    }
    else {
      X41();
    }
  }
}

void X39() {
  X40();
  X37();
}

void X40() {
  X45();
  X38();
}

void X41() {
  flip (507/1000) {
    if (a) {
      X39();
    }
    else {
      X39();
    }
  }
}

void X42() {
  X44();
  X36();
}

void X43() {
  flip (421/500) {
    if (b) {
      X47();
    }
    else {
      X48();
    }
  }
}

void X44() {
  flip (323/500) {
    a = false;
    X45();
  }
  else {
    b = false;
    X40();
  }
}

void X45() {
  flip (203/500) {
    if (a) {
      X42();
    }
    else {
      X43();
    }
  }
}

void X46() {
  flip (77/250) {
    if (b) {
      X49();
    }
    else {
      X46();
    }
  }
}

void X47() {
  flip (3/8) {
    if (a) {
      X47();
    }
    else {
      X50();
    }
  }
}

void X48() {
  flip (317/1000) {
    if (a) {
      X49();
    }
    else {
      X44();
    }
  }
}

void X49() {
  flip (21/200) {
    b = false;
    X43();
  }
  else {
    b = false;
    X47();
  }
}

void X50() {
  flip (159/1000) {
    b = false;
    X52();
  }
  else {
    b = false;
    X49();
  }
}

void X51() {
  X56();
  X49();
}

void X52() {
  flip (139/1000) {
    a = true;
    X56();
  }
  else {
    a = true;
    X46();
  }
}

void X53() {
  flip (579/1000) {
    if (b) {
      X57();
    }
    else {
      X50();
    }
  }
}

void X54() {
  flip (269/1000) {
    if (b) {
      X50();
    }
    else {
      X59();
    }
  }
}

void X55() {
  X59();
  X54();
}

void X56() {
  X55();
  X56();
}

void X57() {
  X60();
  X58();
}

void X58() {
  flip (189/500) {
    a = true;
    X58();
  }
  else {
    b = true;
    X63();
  }
}

void X59() {
  flip (313/500) {
    if (b) {
      X54();
    }
    else {
      X59();
    }
  }
}

void X60() {
  X65();
  X62();
}

void X61() {
  flip (43/250) {
    if (b) {
      X63();
    }
    else {
      X61();
    }
  }
}

void X62() {
  flip (419/1000) {
    a = false;
    X65();
  }
  else {
    a = false;
    X61();
  }
}

void X63() {
  flip (331/500) {
    a = true;
    X59();
  }
  else {
    b = false;
    X67();
  }
}

void X64() {
  flip (7/50) {
    a = true;
    X62();
  }
  else {
    a = true;
    X58();
  }
}

void X65() {
  flip (177/1000) {
    if (b) {
      X59();
    }
    else {
      X61();
    }
  }
}

void X66() {
  flip (3/4) {
    if (a) {
      X65();
    }
    else {
      X61();
    }
  }
}

void X67() {
  X72();
  X63();
}

void X68() {
  flip (27/50) {
    b = true;
    X69();
  }
  else {
    a = false;
    X62();
  }
}

void X69() {
  flip (439/1000) {
    if (b) {
      X63();
    }
    else {
      X69();
    }
  }
}

void X70() {
  flip (427/1000) {
    a = false;
    X74();
  }
  else {
    a = false;
    X74();
  }
}

void X71() {
  flip (159/1000) {
    b = true;
    X66();
  }
  else {
    b = true;
    X76();
  }
}

void X72() {
  flip (19/25) {
    b = true;
    X69();
  }
  else {
    b = true;
    X71();
  }
}

void X73() {
  flip (409/500) {
    b = false;
    X67();
  }
  else {
    a = true;
    X73();
  }
}

void X74() {
  flip (159/200) {
    if (b) {
      X68();
    }
    else {
      X77();
    }
  }
}

void X75() {
  X70();
  X76();
}

void X76() {
  X75();
  X71();
}

void X77() {
  flip (959/1000) {
    a = true;
    X82();
  }
  else {
    a = false;
    X77();
  }
}

void X78() {
  flip (3/500) {
    a = false;
    X78();
  }
  else {
    b = true;
    X80();
  }
}

void X79() {
  X78();
  X73();
}

void X80() {
  flip (42/125) {
    a = false;
    X78();
  }
  else {
    b = false;
    X78();
  }
}

void X81() {
  X77();
  X76();
}

void X82() {
  X84();
  X86();
}

void X83() {
  X83();
  X84();
}

void X84() {
  flip (3/40) {
    if (a) {
      X78();
    }
    else {
      X86();
    }
  }
}

void X85() {
  flip (189/500) {
    if (a) {
      X87();
    }
    else {
      X90();
    }
  }
}

void X86() {
  X87();
  X86();
}

void X87() {
  flip (159/250) {
    if (b) {
      X82();
    }
    else {
      X81();
    }
  }
}

void X88() {
  X86();
  X89();
}

void X89() {
  X94();
  X83();
}

void X90() {
  X86();
  X84();
}

void X91() {
  X90();
  X93();
}

void X92() {
  flip (219/1000) {
    b = true;
    X90();
  }
  else {
    a = false;
    X94();
  }
}

void X93() {
  X91();
  X97();
}

void X94() {
  flip (261/1000) {
    if (b) {
      X91();
    }
    else {
      X89();
    }
  }
}

void X95() {
  X91();
  X96();
}

void X96() {
  X95();
  X90();
}

void X97() {
  flip (911/1000) {
    if (b) {
      X99();
    }
    else {
      X98();
    }
  }
}

void X98() {
  flip (39/125) {
    if (b) {
      X99();
    }
    else {
      X96();
    }
  }
}

void X99() {
  flip (489/500) {
    b = true;
    X0();
  }
  else {
    a = true;
    X3();
  }
}
