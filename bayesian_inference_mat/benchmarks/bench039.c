bool a;
bool b;

void X0() {
  flip (112/125) {
    a = false;
    X4();
  }
  else {
    b = true;
    X95();
  }
}

void X1() {
  X99();
  X98();
}

void X2() {
  flip (169/200) {
    a = true;
    X7();
  }
  else {
    a = true;
    X7();
  }
}

void X3() {
  flip (151/1000) {
    a = true;
    X5();
  }
  else {
    a = false;
    X0();
  }
}

void X4() {
  flip (483/500) {
    a = true;
    X99();
  }
  else {
    b = true;
    X1();
  }
}

void X5() {
  flip (451/1000) {
    b = true;
    X99();
  }
  else {
    b = false;
    X8();
  }
}

void X6() {
  X10();
  X8();
}

void X7() {
  flip (271/1000) {
    if (a) {
      X6();
    }
    else {
      X12();
    }
  }
}

void X8() {
  flip (547/1000) {
    a = true;
    X7();
  }
  else {
    a = false;
    X8();
  }
}

void X9() {
  flip (32/125) {
    if (b) {
      X6();
    }
    else {
      X9();
    }
  }
}

void X10() {
  flip (391/1000) {
    if (b) {
      X4();
    }
    else {
      X11();
    }
  }
}

void X11() {
  X11();
  X12();
}

void X12() {
  flip (19/25) {
    a = true;
    X6();
  }
  else {
    b = true;
    X10();
  }
}

void X13() {
  flip (499/1000) {
    if (a) {
      X9();
    }
    else {
      X16();
    }
  }
}

void X14() {
  X11();
  X17();
}

void X15() {
  flip (39/200) {
    a = false;
    X17();
  }
  else {
    a = false;
    X9();
  }
}

void X16() {
  X19();
  X14();
}

void X17() {
  flip (123/250) {
    if (a) {
      X17();
    }
    else {
      X12();
    }
  }
}

void X18() {
  flip (201/250) {
    b = false;
    X15();
  }
  else {
    b = true;
    X20();
  }
}

void X19() {
  flip (57/1000) {
    b = false;
    X23();
  }
  else {
    a = false;
    X20();
  }
}

void X20() {
  flip (29/40) {
    a = false;
    X14();
  }
  else {
    b = true;
    X16();
  }
}

void X21() {
  flip (583/1000) {
    if (a) {
      X19();
    }
    else {
      X25();
    }
  }
}

void X22() {
  flip (151/200) {
    if (a) {
      X22();
    }
    else {
      X27();
    }
  }
}

void X23() {
  flip (7/1000) {
    if (b) {
      X24();
    }
    else {
      X26();
    }
  }
}

void X24() {
  X19();
  X18();
}

void X25() {
  flip (291/1000) {
    if (a) {
      X27();
    }
    else {
      X20();
    }
  }
}

void X26() {
  flip (253/500) {
    if (b) {
      X23();
    }
    else {
      X24();
    }
  }
}

void X27() {
  flip (79/125) {
    b = false;
    X21();
  }
  else {
    b = true;
    X29();
  }
}

void X28() {
  flip (881/1000) {
    if (b) {
      X29();
    }
    else {
      X33();
    }
  }
}

void X29() {
  flip (1/250) {
    a = false;
    X27();
  }
  else {
    b = false;
    X30();
  }
}

void X30() {
  X31();
  X34();
}

void X31() {
  X29();
  X29();
}

void X32() {
  X34();
  X35();
}

void X33() {
  flip (48/125) {
    a = false;
    X36();
  }
  else {
    a = true;
    X32();
  }
}

void X34() {
  flip (293/1000) {
    if (a) {
      X32();
    }
    else {
      X29();
    }
  }
}

void X35() {
  X39();
  X32();
}

void X36() {
  X30();
  X32();
}

void X37() {
  flip (41/1000) {
    if (b) {
      X36();
    }
    else {
      X31();
    }
  }
}

void X38() {
  flip (17/500) {
    if (a) {
      X34();
    }
    else {
      X42();
    }
  }
}

void X39() {
  X42();
  X33();
}

void X40() {
  flip (159/200) {
    if (b) {
      X39();
    }
    else {
      X39();
    }
  }
}

void X41() {
  flip (181/200) {
    if (a) {
      X40();
    }
    else {
      X42();
    }
  }
}

void X42() {
  flip (119/500) {
    if (a) {
      X47();
    }
    else {
      X46();
    }
  }
}

void X43() {
  flip (511/1000) {
    if (a) {
      X46();
    }
    else {
      X43();
    }
  }
}

void X44() {
  flip (651/1000) {
    a = false;
    X38();
  }
  else {
    b = false;
    X44();
  }
}

void X45() {
  X50();
  X39();
}

void X46() {
  X44();
  X44();
}

void X47() {
  flip (277/500) {
    if (b) {
      X42();
    }
    else {
      X48();
    }
  }
}

void X48() {
  X47();
  X52();
}

void X49() {
  X53();
  X47();
}

void X50() {
  flip (189/500) {
    a = true;
    X55();
  }
  else {
    b = true;
    X44();
  }
}

void X51() {
  X47();
  X55();
}

void X52() {
  X57();
  X57();
}

void X53() {
  X58();
  X50();
}

void X54() {
  flip (317/1000) {
    a = true;
    X59();
  }
  else {
    a = false;
    X49();
  }
}

void X55() {
  flip (483/500) {
    a = true;
    X50();
  }
  else {
    b = false;
    X56();
  }
}

void X56() {
  flip (133/500) {
    b = true;
    X50();
  }
  else {
    a = true;
    X60();
  }
}

void X57() {
  X59();
  X58();
}

void X58() {
  X63();
  X54();
}

void X59() {
  flip (643/1000) {
    if (b) {
      X58();
    }
    else {
      X57();
    }
  }
}

void X60() {
  X64();
  X57();
}

void X61() {
  flip (387/500) {
    a = true;
    X60();
  }
  else {
    b = false;
    X61();
  }
}

void X62() {
  X56();
  X58();
}

void X63() {
  X64();
  X60();
}

void X64() {
  X61();
  X66();
}

void X65() {
  flip (149/250) {
    b = true;
    X60();
  }
  else {
    a = false;
    X60();
  }
}

void X66() {
  flip (771/1000) {
    b = false;
    X62();
  }
  else {
    a = false;
    X64();
  }
}

void X67() {
  flip (137/1000) {
    if (b) {
      X65();
    }
    else {
      X70();
    }
  }
}

void X68() {
  flip (569/1000) {
    if (b) {
      X73();
    }
    else {
      X68();
    }
  }
}

void X69() {
  flip (783/1000) {
    if (a) {
      X74();
    }
    else {
      X69();
    }
  }
}

void X70() {
  X65();
  X68();
}

void X71() {
  flip (329/500) {
    if (a) {
      X73();
    }
    else {
      X69();
    }
  }
}

void X72() {
  flip (141/200) {
    b = false;
    X77();
  }
  else {
    b = false;
    X77();
  }
}

void X73() {
  flip (741/1000) {
    if (b) {
      X77();
    }
    else {
      X76();
    }
  }
}

void X74() {
  flip (789/1000) {
    b = true;
    X75();
  }
  else {
    b = false;
    X78();
  }
}

void X75() {
  flip (99/500) {
    b = false;
    X74();
  }
  else {
    b = false;
    X69();
  }
}

void X76() {
  flip (81/200) {
    b = true;
    X74();
  }
  else {
    b = true;
    X80();
  }
}

void X77() {
  flip (159/500) {
    a = false;
    X72();
  }
  else {
    a = false;
    X81();
  }
}

void X78() {
  X83();
  X74();
}

void X79() {
  flip (97/1000) {
    a = true;
    X81();
  }
  else {
    b = false;
    X78();
  }
}

void X80() {
  flip (3/8) {
    if (b) {
      X76();
    }
    else {
      X79();
    }
  }
}

void X81() {
  X85();
  X81();
}

void X82() {
  flip (51/1000) {
    if (b) {
      X86();
    }
    else {
      X84();
    }
  }
}

void X83() {
  X86();
  X83();
}

void X84() {
  flip (41/1000) {
    if (a) {
      X89();
    }
    else {
      X84();
    }
  }
}

void X85() {
  flip (891/1000) {
    if (a) {
      X87();
    }
    else {
      X79();
    }
  }
}

void X86() {
  flip (783/1000) {
    if (b) {
      X81();
    }
    else {
      X80();
    }
  }
}

void X87() {
  flip (919/1000) {
    b = false;
    X89();
  }
  else {
    b = true;
    X90();
  }
}

void X88() {
  flip (181/500) {
    if (b) {
      X87();
    }
    else {
      X93();
    }
  }
}

void X89() {
  flip (553/1000) {
    if (a) {
      X92();
    }
    else {
      X93();
    }
  }
}

void X90() {
  flip (333/1000) {
    if (a) {
      X86();
    }
    else {
      X84();
    }
  }
}

void X91() {
  X96();
  X95();
}

void X92() {
  X87();
  X92();
}

void X93() {
  X88();
  X97();
}

void X94() {
  flip (331/1000) {
    if (a) {
      X94();
    }
    else {
      X98();
    }
  }
}

void X95() {
  X91();
  X95();
}

void X96() {
  flip (337/500) {
    if (a) {
      X1();
    }
    else {
      X90();
    }
  }
}

void X97() {
  X91();
  X93();
}

void X98() {
  X99();
  X94();
}

void X99() {
  flip (57/1000) {
    a = false;
    X99();
  }
  else {
    b = true;
    X97();
  }
}
