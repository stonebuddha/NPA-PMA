bool a;
bool b;

void X0() {
  flip (1/5) {
    if (b) {
      X0();
    }
    else {
      X0();
    }
  }
}

void X1() {
  flip (9/200) {
    if (a) {
      X96();
    }
    else {
      X2();
    }
  }
}

void X2() {
  flip (251/500) {
    if (a) {
      X96();
    }
    else {
      X96();
    }
  }
}

void X3() {
  X99();
  X97();
}

void X4() {
  X9();
  X5();
}

void X5() {
  X7();
  X4();
}

void X6() {
  flip (281/500) {
    a = true;
    X10();
  }
  else {
    a = false;
    X8();
  }
}

void X7() {
  flip (921/1000) {
    if (a) {
      X9();
    }
    else {
      X12();
    }
  }
}

void X8() {
  flip (869/1000) {
    if (b) {
      X8();
    }
    else {
      X8();
    }
  }
}

void X9() {
  flip (543/1000) {
    if (b) {
      X10();
    }
    else {
      X5();
    }
  }
}

void X10() {
  flip (707/1000) {
    a = false;
    X6();
  }
  else {
    b = false;
    X15();
  }
}

void X11() {
  flip (7/25) {
    if (a) {
      X7();
    }
    else {
      X7();
    }
  }
}

void X12() {
  flip (17/200) {
    b = true;
    X8();
  }
  else {
    a = false;
    X13();
  }
}

void X13() {
  flip (27/200) {
    if (b) {
      X17();
    }
    else {
      X7();
    }
  }
}

void X14() {
  flip (317/1000) {
    a = false;
    X14();
  }
  else {
    a = false;
    X18();
  }
}

void X15() {
  flip (993/1000) {
    a = false;
    X19();
  }
  else {
    a = false;
    X20();
  }
}

void X16() {
  flip (369/1000) {
    a = true;
    X10();
  }
  else {
    b = true;
    X16();
  }
}

void X17() {
  flip (14/125) {
    a = false;
    X11();
  }
  else {
    b = false;
    X16();
  }
}

void X18() {
  X14();
  X12();
}

void X19() {
  flip (22/25) {
    if (b) {
      X24();
    }
    else {
      X15();
    }
  }
}

void X20() {
  X17();
  X16();
}

void X21() {
  X22();
  X19();
}

void X22() {
  X22();
  X18();
}

void X23() {
  X26();
  X20();
}

void X24() {
  X27();
  X23();
}

void X25() {
  flip (43/125) {
    if (b) {
      X27();
    }
    else {
      X19();
    }
  }
}

void X26() {
  flip (667/1000) {
    a = true;
    X31();
  }
  else {
    b = false;
    X24();
  }
}

void X27() {
  flip (769/1000) {
    a = true;
    X22();
  }
  else {
    b = false;
    X27();
  }
}

void X28() {
  X23();
  X31();
}

void X29() {
  X27();
  X33();
}

void X30() {
  X34();
  X24();
}

void X31() {
  X27();
  X26();
}

void X32() {
  X29();
  X32();
}

void X33() {
  flip (68/125) {
    if (b) {
      X28();
    }
    else {
      X32();
    }
  }
}

void X34() {
  flip (111/200) {
    if (a) {
      X29();
    }
    else {
      X39();
    }
  }
}

void X35() {
  flip (147/250) {
    a = false;
    X31();
  }
  else {
    a = true;
    X40();
  }
}

void X36() {
  flip (83/200) {
    if (a) {
      X31();
    }
    else {
      X37();
    }
  }
}

void X37() {
  X35();
  X41();
}

void X38() {
  flip (9/125) {
    b = false;
    X41();
  }
  else {
    b = true;
    X34();
  }
}

void X39() {
  flip (79/1000) {
    if (a) {
      X33();
    }
    else {
      X36();
    }
  }
}

void X40() {
  X42();
  X45();
}

void X41() {
  flip (177/200) {
    b = false;
    X45();
  }
  else {
    b = false;
    X42();
  }
}

void X42() {
  X43();
  X40();
}

void X43() {
  flip (587/1000) {
    if (b) {
      X39();
    }
    else {
      X38();
    }
  }
}

void X44() {
  flip (72/125) {
    a = true;
    X46();
  }
  else {
    a = true;
    X40();
  }
}

void X45() {
  X50();
  X50();
}

void X46() {
  flip (297/1000) {
    if (b) {
      X43();
    }
    else {
      X47();
    }
  }
}

void X47() {
  flip (63/1000) {
    b = false;
    X51();
  }
  else {
    b = false;
    X52();
  }
}

void X48() {
  flip (19/1000) {
    if (a) {
      X49();
    }
    else {
      X51();
    }
  }
}

void X49() {
  flip (917/1000) {
    if (b) {
      X51();
    }
    else {
      X44();
    }
  }
}

void X50() {
  flip (529/1000) {
    if (a) {
      X50();
    }
    else {
      X49();
    }
  }
}

void X51() {
  flip (143/200) {
    b = true;
    X48();
  }
  else {
    b = true;
    X50();
  }
}

void X52() {
  flip (209/250) {
    if (a) {
      X49();
    }
    else {
      X51();
    }
  }
}

void X53() {
  flip (1/200) {
    b = true;
    X57();
  }
  else {
    b = true;
    X49();
  }
}

void X54() {
  flip (171/200) {
    if (a) {
      X54();
    }
    else {
      X50();
    }
  }
}

void X55() {
  flip (549/1000) {
    a = false;
    X50();
  }
  else {
    b = false;
    X60();
  }
}

void X56() {
  flip (84/125) {
    b = false;
    X54();
  }
  else {
    b = false;
    X57();
  }
}

void X57() {
  X55();
  X56();
}

void X58() {
  X62();
  X59();
}

void X59() {
  flip (207/250) {
    if (b) {
      X62();
    }
    else {
      X54();
    }
  }
}

void X60() {
  flip (187/250) {
    if (b) {
      X57();
    }
    else {
      X63();
    }
  }
}

void X61() {
  flip (11/20) {
    a = false;
    X56();
  }
  else {
    b = false;
    X66();
  }
}

void X62() {
  flip (27/500) {
    if (a) {
      X58();
    }
    else {
      X57();
    }
  }
}

void X63() {
  flip (491/500) {
    if (b) {
      X62();
    }
    else {
      X67();
    }
  }
}

void X64() {
  X66();
  X62();
}

void X65() {
  X62();
  X67();
}

void X66() {
  flip (989/1000) {
    if (a) {
      X64();
    }
    else {
      X67();
    }
  }
}

void X67() {
  flip (7/200) {
    if (b) {
      X67();
    }
    else {
      X69();
    }
  }
}

void X68() {
  flip (91/100) {
    if (b) {
      X66();
    }
    else {
      X73();
    }
  }
}

void X69() {
  flip (657/1000) {
    b = true;
    X73();
  }
  else {
    b = true;
    X63();
  }
}

void X70() {
  flip (217/500) {
    if (b) {
      X68();
    }
    else {
      X68();
    }
  }
}

void X71() {
  flip (16/125) {
    a = false;
    X74();
  }
  else {
    a = false;
    X70();
  }
}

void X72() {
  flip (57/1000) {
    b = false;
    X70();
  }
  else {
    a = true;
    X71();
  }
}

void X73() {
  X73();
  X72();
}

void X74() {
  X78();
  X71();
}

void X75() {
  flip (89/125) {
    a = true;
    X73();
  }
  else {
    a = false;
    X75();
  }
}

void X76() {
  flip (27/250) {
    if (b) {
      X77();
    }
    else {
      X72();
    }
  }
}

void X77() {
  flip (73/250) {
    if (a) {
      X80();
    }
    else {
      X82();
    }
  }
}

void X78() {
  flip (113/1000) {
    if (b) {
      X77();
    }
    else {
      X80();
    }
  }
}

void X79() {
  flip (367/500) {
    if (b) {
      X79();
    }
    else {
      X74();
    }
  }
}

void X80() {
  flip (209/1000) {
    if (a) {
      X79();
    }
    else {
      X76();
    }
  }
}

void X81() {
  X75();
  X85();
}

void X82() {
  flip (3/25) {
    a = false;
    X76();
  }
  else {
    a = true;
    X84();
  }
}

void X83() {
  X84();
  X77();
}

void X84() {
  flip (181/200) {
    if (b) {
      X86();
    }
    else {
      X84();
    }
  }
}

void X85() {
  X85();
  X90();
}

void X86() {
  flip (22/125) {
    if (a) {
      X87();
    }
    else {
      X85();
    }
  }
}

void X87() {
  flip (619/1000) {
    b = true;
    X86();
  }
  else {
    a = true;
    X83();
  }
}

void X88() {
  flip (81/1000) {
    if (b) {
      X91();
    }
    else {
      X87();
    }
  }
}

void X89() {
  flip (821/1000) {
    if (b) {
      X94();
    }
    else {
      X92();
    }
  }
}

void X90() {
  X88();
  X88();
}

void X91() {
  flip (1/4) {
    if (b) {
      X95();
    }
    else {
      X92();
    }
  }
}

void X92() {
  flip (957/1000) {
    if (b) {
      X96();
    }
    else {
      X90();
    }
  }
}

void X93() {
  flip (879/1000) {
    if (a) {
      X90();
    }
    else {
      X87();
    }
  }
}

void X94() {
  X97();
  X94();
}

void X95() {
  flip (143/200) {
    a = true;
    X96();
  }
  else {
    b = true;
    X94();
  }
}

void X96() {
  X90();
  X95();
}

void X97() {
  flip (169/200) {
    if (a) {
      X97();
    }
    else {
      X95();
    }
  }
}

void X98() {
  flip (801/1000) {
    b = true;
    X97();
  }
  else {
    a = true;
    X99();
  }
}

void X99() {
  flip (443/1000) {
    if (b) {
      X98();
    }
    else {
      X94();
    }
  }
}
