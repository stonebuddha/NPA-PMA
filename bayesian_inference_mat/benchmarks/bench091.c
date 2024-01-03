bool a;
bool b;

void X0() {
  flip (33/50) {
    if (a) {
      X95();
    }
    else {
      X3();
    }
  }
}

void X1() {
  X1();
  X6();
}

void X2() {
  flip (453/1000) {
    if (a) {
      X97();
    }
    else {
      X4();
    }
  }
}

void X3() {
  X6();
  X5();
}

void X4() {
  flip (19/20) {
    if (a) {
      X9();
    }
    else {
      X99();
    }
  }
}

void X5() {
  flip (593/1000) {
    a = true;
    X2();
  }
  else {
    b = false;
    X7();
  }
}

void X6() {
  flip (27/100) {
    if (a) {
      X0();
    }
    else {
      X9();
    }
  }
}

void X7() {
  X10();
  X10();
}

void X8() {
  flip (437/500) {
    b = true;
    X12();
  }
  else {
    b = true;
    X9();
  }
}

void X9() {
  flip (112/125) {
    if (a) {
      X4();
    }
    else {
      X14();
    }
  }
}

void X10() {
  flip (3/40) {
    if (a) {
      X11();
    }
    else {
      X15();
    }
  }
}

void X11() {
  flip (71/100) {
    if (a) {
      X16();
    }
    else {
      X8();
    }
  }
}

void X12() {
  flip (463/500) {
    b = true;
    X6();
  }
  else {
    a = false;
    X8();
  }
}

void X13() {
  flip (41/100) {
    a = false;
    X10();
  }
  else {
    a = false;
    X11();
  }
}

void X14() {
  X12();
  X19();
}

void X15() {
  flip (103/200) {
    if (a) {
      X12();
    }
    else {
      X15();
    }
  }
}

void X16() {
  X15();
  X10();
}

void X17() {
  flip (2/125) {
    if (b) {
      X16();
    }
    else {
      X21();
    }
  }
}

void X18() {
  flip (81/250) {
    if (b) {
      X12();
    }
    else {
      X19();
    }
  }
}

void X19() {
  flip (88/125) {
    a = true;
    X21();
  }
  else {
    a = true;
    X16();
  }
}

void X20() {
  flip (379/1000) {
    if (a) {
      X24();
    }
    else {
      X25();
    }
  }
}

void X21() {
  flip (91/500) {
    a = false;
    X18();
  }
  else {
    b = false;
    X25();
  }
}

void X22() {
  X27();
  X17();
}

void X23() {
  flip (601/1000) {
    if (a) {
      X23();
    }
    else {
      X19();
    }
  }
}

void X24() {
  flip (73/1000) {
    b = true;
    X21();
  }
  else {
    b = true;
    X23();
  }
}

void X25() {
  flip (949/1000) {
    if (b) {
      X29();
    }
    else {
      X21();
    }
  }
}

void X26() {
  flip (419/500) {
    a = false;
    X20();
  }
  else {
    a = false;
    X27();
  }
}

void X27() {
  flip (31/50) {
    if (b) {
      X27();
    }
    else {
      X26();
    }
  }
}

void X28() {
  flip (311/1000) {
    a = false;
    X31();
  }
  else {
    a = true;
    X32();
  }
}

void X29() {
  flip (104/125) {
    a = false;
    X23();
  }
  else {
    a = false;
    X26();
  }
}

void X30() {
  flip (849/1000) {
    if (b) {
      X34();
    }
    else {
      X25();
    }
  }
}

void X31() {
  flip (39/250) {
    a = false;
    X35();
  }
  else {
    a = true;
    X27();
  }
}

void X32() {
  flip (213/1000) {
    b = false;
    X28();
  }
  else {
    a = false;
    X36();
  }
}

void X33() {
  flip (59/125) {
    if (b) {
      X36();
    }
    else {
      X35();
    }
  }
}

void X34() {
  X36();
  X31();
}

void X35() {
  flip (3/1000) {
    if (b) {
      X36();
    }
    else {
      X34();
    }
  }
}

void X36() {
  flip (249/250) {
    if (b) {
      X41();
    }
    else {
      X39();
    }
  }
}

void X37() {
  flip (197/1000) {
    b = true;
    X31();
  }
  else {
    a = false;
    X35();
  }
}

void X38() {
  X38();
  X43();
}

void X39() {
  X44();
  X36();
}

void X40() {
  X40();
  X40();
}

void X41() {
  flip (219/250) {
    a = false;
    X43();
  }
  else {
    b = true;
    X35();
  }
}

void X42() {
  X41();
  X44();
}

void X43() {
  flip (231/1000) {
    if (b) {
      X39();
    }
    else {
      X37();
    }
  }
}

void X44() {
  X43();
  X44();
}

void X45() {
  X47();
  X47();
}

void X46() {
  flip (147/200) {
    b = true;
    X44();
  }
  else {
    a = true;
    X47();
  }
}

void X47() {
  X43();
  X44();
}

void X48() {
  X47();
  X46();
}

void X49() {
  flip (221/1000) {
    a = true;
    X53();
  }
  else {
    b = true;
    X49();
  }
}

void X50() {
  flip (39/100) {
    if (b) {
      X46();
    }
    else {
      X49();
    }
  }
}

void X51() {
  flip (73/200) {
    b = false;
    X47();
  }
  else {
    a = false;
    X46();
  }
}

void X52() {
  flip (49/50) {
    if (a) {
      X57();
    }
    else {
      X56();
    }
  }
}

void X53() {
  X51();
  X53();
}

void X54() {
  X51();
  X59();
}

void X55() {
  flip (171/200) {
    if (b) {
      X54();
    }
    else {
      X53();
    }
  }
}

void X56() {
  X56();
  X55();
}

void X57() {
  flip (341/500) {
    if (a) {
      X53();
    }
    else {
      X60();
    }
  }
}

void X58() {
  flip (159/1000) {
    b = true;
    X59();
  }
  else {
    b = true;
    X53();
  }
}

void X59() {
  flip (963/1000) {
    if (a) {
      X62();
    }
    else {
      X55();
    }
  }
}

void X60() {
  X63();
  X56();
}

void X61() {
  flip (37/500) {
    if (a) {
      X57();
    }
    else {
      X63();
    }
  }
}

void X62() {
  flip (417/1000) {
    if (b) {
      X67();
    }
    else {
      X56();
    }
  }
}

void X63() {
  X62();
  X59();
}

void X64() {
  flip (1/4) {
    a = false;
    X66();
  }
  else {
    a = true;
    X60();
  }
}

void X65() {
  flip (541/1000) {
    b = true;
    X63();
  }
  else {
    a = true;
    X68();
  }
}

void X66() {
  X64();
  X61();
}

void X67() {
  flip (521/1000) {
    a = true;
    X64();
  }
  else {
    a = true;
    X72();
  }
}

void X68() {
  flip (147/250) {
    if (b) {
      X68();
    }
    else {
      X70();
    }
  }
}

void X69() {
  X72();
  X68();
}

void X70() {
  flip (981/1000) {
    if (a) {
      X74();
    }
    else {
      X66();
    }
  }
}

void X71() {
  flip (109/200) {
    if (b) {
      X72();
    }
    else {
      X76();
    }
  }
}

void X72() {
  X74();
  X73();
}

void X73() {
  X76();
  X76();
}

void X74() {
  flip (783/1000) {
    b = true;
    X75();
  }
  else {
    b = false;
    X74();
  }
}

void X75() {
  X76();
  X69();
}

void X76() {
  flip (289/1000) {
    if (a) {
      X80();
    }
    else {
      X76();
    }
  }
}

void X77() {
  flip (449/1000) {
    if (b) {
      X73();
    }
    else {
      X78();
    }
  }
}

void X78() {
  flip (127/500) {
    a = false;
    X74();
  }
  else {
    a = true;
    X78();
  }
}

void X79() {
  flip (29/250) {
    if (b) {
      X76();
    }
    else {
      X80();
    }
  }
}

void X80() {
  X83();
  X82();
}

void X81() {
  flip (271/1000) {
    a = true;
    X77();
  }
  else {
    a = false;
    X78();
  }
}

void X82() {
  X81();
  X79();
}

void X83() {
  flip (72/125) {
    b = true;
    X78();
  }
  else {
    b = true;
    X81();
  }
}

void X84() {
  flip (409/500) {
    if (b) {
      X89();
    }
    else {
      X84();
    }
  }
}

void X85() {
  flip (133/250) {
    a = true;
    X82();
  }
  else {
    b = true;
    X83();
  }
}

void X86() {
  X90();
  X84();
}

void X87() {
  flip (119/500) {
    if (b) {
      X89();
    }
    else {
      X88();
    }
  }
}

void X88() {
  flip (109/500) {
    if (a) {
      X91();
    }
    else {
      X92();
    }
  }
}

void X89() {
  flip (433/1000) {
    b = true;
    X88();
  }
  else {
    a = true;
    X84();
  }
}

void X90() {
  X94();
  X86();
}

void X91() {
  flip (201/1000) {
    a = true;
    X89();
  }
  else {
    a = false;
    X89();
  }
}

void X92() {
  flip (81/1000) {
    a = false;
    X95();
  }
  else {
    b = true;
    X97();
  }
}

void X93() {
  flip (471/1000) {
    if (b) {
      X93();
    }
    else {
      X87();
    }
  }
}

void X94() {
  flip (759/1000) {
    a = true;
    X95();
  }
  else {
    b = true;
    X89();
  }
}

void X95() {
  flip (217/500) {
    b = false;
    X95();
  }
  else {
    a = false;
    X90();
  }
}

void X96() {
  flip (457/500) {
    a = false;
    X95();
  }
  else {
    a = false;
    X90();
  }
}

void X97() {
  X1();
  X94();
}

void X98() {
  X0();
  X94();
}

void X99() {
  flip (51/500) {
    if (b) {
      X3();
    }
    else {
      X94();
    }
  }
}
