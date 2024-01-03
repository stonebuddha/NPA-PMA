bool a;
bool b;

void X0() {
  flip (729/1000) {
    a = true;
    X99();
  }
  else {
    a = false;
    X5();
  }
}

void X1() {
  X98();
  X99();
}

void X2() {
  flip (417/1000) {
    b = true;
    X4();
  }
  else {
    a = true;
    X0();
  }
}

void X3() {
  flip (47/200) {
    if (b) {
      X4();
    }
    else {
      X3();
    }
  }
}

void X4() {
  flip (549/1000) {
    a = false;
    X5();
  }
  else {
    a = false;
    X0();
  }
}

void X5() {
  X0();
  X0();
}

void X6() {
  X2();
  X0();
}

void X7() {
  flip (643/1000) {
    if (a) {
      X8();
    }
    else {
      X6();
    }
  }
}

void X8() {
  flip (11/1000) {
    if (b) {
      X9();
    }
    else {
      X7();
    }
  }
}

void X9() {
  X12();
  X3();
}

void X10() {
  flip (3/50) {
    b = true;
    X14();
  }
  else {
    b = true;
    X14();
  }
}

void X11() {
  flip (169/1000) {
    if (a) {
      X6();
    }
    else {
      X14();
    }
  }
}

void X12() {
  flip (417/1000) {
    a = true;
    X17();
  }
  else {
    a = false;
    X7();
  }
}

void X13() {
  X10();
  X7();
}

void X14() {
  X18();
  X10();
}

void X15() {
  flip (319/500) {
    b = true;
    X15();
  }
  else {
    b = false;
    X16();
  }
}

void X16() {
  X14();
  X13();
}

void X17() {
  X21();
  X13();
}

void X18() {
  X15();
  X13();
}

void X19() {
  X19();
  X16();
}

void X20() {
  flip (217/250) {
    if (b) {
      X21();
    }
    else {
      X16();
    }
  }
}

void X21() {
  flip (41/250) {
    if (b) {
      X16();
    }
    else {
      X15();
    }
  }
}

void X22() {
  flip (9/40) {
    if (a) {
      X19();
    }
    else {
      X16();
    }
  }
}

void X23() {
  X25();
  X18();
}

void X24() {
  X20();
  X28();
}

void X25() {
  flip (3/5) {
    if (a) {
      X26();
    }
    else {
      X30();
    }
  }
}

void X26() {
  flip (651/1000) {
    a = false;
    X26();
  }
  else {
    a = true;
    X22();
  }
}

void X27() {
  X27();
  X22();
}

void X28() {
  flip (337/500) {
    a = false;
    X30();
  }
  else {
    a = false;
    X33();
  }
}

void X29() {
  flip (63/500) {
    if (a) {
      X23();
    }
    else {
      X29();
    }
  }
}

void X30() {
  X31();
  X27();
}

void X31() {
  flip (193/1000) {
    if (a) {
      X25();
    }
    else {
      X29();
    }
  }
}

void X32() {
  X34();
  X26();
}

void X33() {
  flip (149/1000) {
    if (b) {
      X27();
    }
    else {
      X37();
    }
  }
}

void X34() {
  flip (157/250) {
    a = false;
    X30();
  }
  else {
    a = false;
    X31();
  }
}

void X35() {
  X33();
  X36();
}

void X36() {
  X35();
  X41();
}

void X37() {
  flip (106/125) {
    if (b) {
      X32();
    }
    else {
      X34();
    }
  }
}

void X38() {
  flip (63/200) {
    if (b) {
      X33();
    }
    else {
      X41();
    }
  }
}

void X39() {
  flip (563/1000) {
    b = false;
    X36();
  }
  else {
    a = true;
    X44();
  }
}

void X40() {
  flip (207/1000) {
    if (b) {
      X34();
    }
    else {
      X39();
    }
  }
}

void X41() {
  flip (32/125) {
    if (a) {
      X36();
    }
    else {
      X40();
    }
  }
}

void X42() {
  flip (151/200) {
    a = false;
    X43();
  }
  else {
    b = true;
    X42();
  }
}

void X43() {
  X38();
  X40();
}

void X44() {
  flip (66/125) {
    if (b) {
      X38();
    }
    else {
      X38();
    }
  }
}

void X45() {
  flip (293/500) {
    a = false;
    X46();
  }
  else {
    b = true;
    X47();
  }
}

void X46() {
  flip (101/1000) {
    a = false;
    X47();
  }
  else {
    a = false;
    X40();
  }
}

void X47() {
  X48();
  X52();
}

void X48() {
  flip (163/1000) {
    if (a) {
      X45();
    }
    else {
      X43();
    }
  }
}

void X49() {
  flip (197/200) {
    a = false;
    X45();
  }
  else {
    a = false;
    X43();
  }
}

void X50() {
  flip (323/500) {
    b = true;
    X45();
  }
  else {
    a = true;
    X54();
  }
}

void X51() {
  X54();
  X51();
}

void X52() {
  flip (29/100) {
    if (b) {
      X55();
    }
    else {
      X47();
    }
  }
}

void X53() {
  flip (11/100) {
    if (a) {
      X58();
    }
    else {
      X49();
    }
  }
}

void X54() {
  flip (31/100) {
    a = true;
    X57();
  }
  else {
    b = false;
    X50();
  }
}

void X55() {
  X57();
  X54();
}

void X56() {
  X58();
  X56();
}

void X57() {
  X52();
  X56();
}

void X58() {
  X56();
  X60();
}

void X59() {
  X53();
  X61();
}

void X60() {
  flip (297/1000) {
    b = true;
    X54();
  }
  else {
    b = false;
    X56();
  }
}

void X61() {
  flip (19/100) {
    if (b) {
      X58();
    }
    else {
      X62();
    }
  }
}

void X62() {
  X58();
  X57();
}

void X63() {
  X64();
  X66();
}

void X64() {
  X65();
  X68();
}

void X65() {
  flip (71/1000) {
    if (a) {
      X63();
    }
    else {
      X59();
    }
  }
}

void X66() {
  flip (661/1000) {
    a = false;
    X66();
  }
  else {
    a = true;
    X67();
  }
}

void X67() {
  flip (757/1000) {
    b = false;
    X70();
  }
  else {
    a = true;
    X71();
  }
}

void X68() {
  flip (9/40) {
    a = true;
    X67();
  }
  else {
    a = false;
    X72();
  }
}

void X69() {
  flip (301/1000) {
    if (a) {
      X65();
    }
    else {
      X70();
    }
  }
}

void X70() {
  flip (257/1000) {
    a = true;
    X73();
  }
  else {
    a = false;
    X71();
  }
}

void X71() {
  flip (21/50) {
    b = true;
    X68();
  }
  else {
    a = false;
    X75();
  }
}

void X72() {
  flip (251/1000) {
    a = true;
    X68();
  }
  else {
    b = true;
    X77();
  }
}

void X73() {
  flip (123/500) {
    if (b) {
      X67();
    }
    else {
      X71();
    }
  }
}

void X74() {
  flip (73/100) {
    if (a) {
      X72();
    }
    else {
      X75();
    }
  }
}

void X75() {
  flip (29/500) {
    if (b) {
      X73();
    }
    else {
      X73();
    }
  }
}

void X76() {
  flip (563/1000) {
    if (b) {
      X71();
    }
    else {
      X79();
    }
  }
}

void X77() {
  X77();
  X81();
}

void X78() {
  flip (2/125) {
    a = true;
    X77();
  }
  else {
    b = true;
    X73();
  }
}

void X79() {
  X81();
  X78();
}

void X80() {
  X82();
  X83();
}

void X81() {
  flip (331/500) {
    if (b) {
      X78();
    }
    else {
      X80();
    }
  }
}

void X82() {
  flip (113/200) {
    if (a) {
      X82();
    }
    else {
      X80();
    }
  }
}

void X83() {
  flip (879/1000) {
    b = true;
    X87();
  }
  else {
    a = true;
    X83();
  }
}

void X84() {
  X81();
  X84();
}

void X85() {
  flip (791/1000) {
    if (b) {
      X86();
    }
    else {
      X82();
    }
  }
}

void X86() {
  X84();
  X81();
}

void X87() {
  flip (57/200) {
    a = false;
    X82();
  }
  else {
    b = false;
    X91();
  }
}

void X88() {
  flip (73/1000) {
    if (a) {
      X86();
    }
    else {
      X93();
    }
  }
}

void X89() {
  flip (181/1000) {
    if (a) {
      X93();
    }
    else {
      X93();
    }
  }
}

void X90() {
  flip (47/250) {
    if (a) {
      X90();
    }
    else {
      X93();
    }
  }
}

void X91() {
  X91();
  X91();
}

void X92() {
  flip (759/1000) {
    a = true;
    X94();
  }
  else {
    b = true;
    X90();
  }
}

void X93() {
  flip (48/125) {
    a = false;
    X93();
  }
  else {
    b = false;
    X93();
  }
}

void X94() {
  X91();
  X90();
}

void X95() {
  flip (699/1000) {
    a = true;
    X93();
  }
  else {
    b = false;
    X93();
  }
}

void X96() {
  flip (999/1000) {
    if (a) {
      X91();
    }
    else {
      X99();
    }
  }
}

void X97() {
  flip (491/500) {
    b = false;
    X92();
  }
  else {
    b = false;
    X0();
  }
}

void X98() {
  flip (271/1000) {
    if (b) {
      X95();
    }
    else {
      X95();
    }
  }
}

void X99() {
  flip (213/250) {
    b = false;
    X2();
  }
  else {
    a = false;
    X93();
  }
}
