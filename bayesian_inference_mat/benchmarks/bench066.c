bool a;
bool b;

void X0() {
  flip (977/1000) {
    a = true;
    X5();
  }
  else {
    b = true;
    X99();
  }
}

void X1() {
  flip (119/500) {
    a = true;
    X5();
  }
  else {
    a = true;
    X97();
  }
}

void X2() {
  flip (477/1000) {
    if (a) {
      X99();
    }
    else {
      X97();
    }
  }
}

void X3() {
  X4();
  X2();
}

void X4() {
  flip (187/250) {
    if (b) {
      X9();
    }
    else {
      X4();
    }
  }
}

void X5() {
  X4();
  X8();
}

void X6() {
  X11();
  X4();
}

void X7() {
  X9();
  X2();
}

void X8() {
  flip (813/1000) {
    a = false;
    X2();
  }
  else {
    b = true;
    X8();
  }
}

void X9() {
  flip (671/1000) {
    a = true;
    X5();
  }
  else {
    b = false;
    X14();
  }
}

void X10() {
  flip (643/1000) {
    a = false;
    X9();
  }
  else {
    b = false;
    X11();
  }
}

void X11() {
  X15();
  X6();
}

void X12() {
  flip (87/125) {
    a = false;
    X15();
  }
  else {
    a = true;
    X16();
  }
}

void X13() {
  X8();
  X16();
}

void X14() {
  X19();
  X13();
}

void X15() {
  flip (537/1000) {
    if (a) {
      X20();
    }
    else {
      X20();
    }
  }
}

void X16() {
  flip (163/250) {
    if (a) {
      X12();
    }
    else {
      X20();
    }
  }
}

void X17() {
  flip (17/50) {
    if (a) {
      X17();
    }
    else {
      X20();
    }
  }
}

void X18() {
  flip (37/200) {
    a = false;
    X22();
  }
  else {
    a = false;
    X20();
  }
}

void X19() {
  flip (243/1000) {
    if (a) {
      X20();
    }
    else {
      X21();
    }
  }
}

void X20() {
  X21();
  X14();
}

void X21() {
  X23();
  X24();
}

void X22() {
  X21();
  X23();
}

void X23() {
  flip (951/1000) {
    a = false;
    X20();
  }
  else {
    a = false;
    X24();
  }
}

void X24() {
  flip (573/1000) {
    if (b) {
      X29();
    }
    else {
      X24();
    }
  }
}

void X25() {
  X20();
  X24();
}

void X26() {
  flip (22/125) {
    a = true;
    X20();
  }
  else {
    b = false;
    X28();
  }
}

void X27() {
  X22();
  X24();
}

void X28() {
  flip (249/500) {
    if (b) {
      X29();
    }
    else {
      X29();
    }
  }
}

void X29() {
  flip (69/250) {
    a = true;
    X31();
  }
  else {
    a = false;
    X25();
  }
}

void X30() {
  flip (449/500) {
    if (a) {
      X34();
    }
    else {
      X31();
    }
  }
}

void X31() {
  flip (63/200) {
    b = false;
    X31();
  }
  else {
    a = false;
    X31();
  }
}

void X32() {
  X28();
  X29();
}

void X33() {
  flip (9/200) {
    if (a) {
      X29();
    }
    else {
      X35();
    }
  }
}

void X34() {
  flip (149/250) {
    b = true;
    X31();
  }
  else {
    a = true;
    X29();
  }
}

void X35() {
  flip (957/1000) {
    b = true;
    X38();
  }
  else {
    a = false;
    X38();
  }
}

void X36() {
  flip (297/500) {
    b = true;
    X31();
  }
  else {
    a = true;
    X38();
  }
}

void X37() {
  flip (487/1000) {
    a = false;
    X34();
  }
  else {
    a = true;
    X41();
  }
}

void X38() {
  X43();
  X33();
}

void X39() {
  flip (103/1000) {
    a = false;
    X43();
  }
  else {
    a = true;
    X33();
  }
}

void X40() {
  flip (907/1000) {
    a = true;
    X38();
  }
  else {
    b = false;
    X41();
  }
}

void X41() {
  flip (183/500) {
    b = false;
    X45();
  }
  else {
    a = true;
    X44();
  }
}

void X42() {
  flip (111/125) {
    a = true;
    X36();
  }
  else {
    b = true;
    X44();
  }
}

void X43() {
  X41();
  X43();
}

void X44() {
  flip (63/1000) {
    if (b) {
      X40();
    }
    else {
      X41();
    }
  }
}

void X45() {
  flip (411/1000) {
    a = true;
    X44();
  }
  else {
    a = false;
    X49();
  }
}

void X46() {
  X42();
  X45();
}

void X47() {
  flip (383/1000) {
    if (b) {
      X50();
    }
    else {
      X42();
    }
  }
}

void X48() {
  flip (183/500) {
    if (b) {
      X47();
    }
    else {
      X47();
    }
  }
}

void X49() {
  flip (91/250) {
    if (a) {
      X52();
    }
    else {
      X53();
    }
  }
}

void X50() {
  flip (3/250) {
    if (a) {
      X55();
    }
    else {
      X51();
    }
  }
}

void X51() {
  flip (14/25) {
    if (b) {
      X45();
    }
    else {
      X52();
    }
  }
}

void X52() {
  flip (609/1000) {
    a = true;
    X54();
  }
  else {
    a = true;
    X49();
  }
}

void X53() {
  flip (407/500) {
    if (b) {
      X54();
    }
    else {
      X50();
    }
  }
}

void X54() {
  X59();
  X54();
}

void X55() {
  flip (7/20) {
    if (b) {
      X52();
    }
    else {
      X56();
    }
  }
}

void X56() {
  flip (379/1000) {
    if (a) {
      X50();
    }
    else {
      X56();
    }
  }
}

void X57() {
  flip (93/500) {
    if (b) {
      X61();
    }
    else {
      X53();
    }
  }
}

void X58() {
  flip (27/50) {
    if (b) {
      X57();
    }
    else {
      X52();
    }
  }
}

void X59() {
  X53();
  X54();
}

void X60() {
  X56();
  X59();
}

void X61() {
  flip (637/1000) {
    a = false;
    X63();
  }
  else {
    a = false;
    X58();
  }
}

void X62() {
  flip (643/1000) {
    b = false;
    X58();
  }
  else {
    a = true;
    X64();
  }
}

void X63() {
  X66();
  X58();
}

void X64() {
  X68();
  X61();
}

void X65() {
  flip (11/200) {
    if (b) {
      X63();
    }
    else {
      X64();
    }
  }
}

void X66() {
  X63();
  X62();
}

void X67() {
  flip (451/1000) {
    a = true;
    X72();
  }
  else {
    a = true;
    X71();
  }
}

void X68() {
  flip (18/125) {
    if (b) {
      X65();
    }
    else {
      X62();
    }
  }
}

void X69() {
  flip (137/250) {
    b = false;
    X74();
  }
  else {
    b = false;
    X68();
  }
}

void X70() {
  flip (89/1000) {
    if (a) {
      X74();
    }
    else {
      X73();
    }
  }
}

void X71() {
  flip (567/1000) {
    a = true;
    X68();
  }
  else {
    b = false;
    X76();
  }
}

void X72() {
  flip (467/500) {
    a = false;
    X69();
  }
  else {
    b = true;
    X77();
  }
}

void X73() {
  X78();
  X68();
}

void X74() {
  X77();
  X72();
}

void X75() {
  X74();
  X76();
}

void X76() {
  flip (189/500) {
    a = false;
    X73();
  }
  else {
    a = true;
    X77();
  }
}

void X77() {
  flip (389/500) {
    if (a) {
      X72();
    }
    else {
      X80();
    }
  }
}

void X78() {
  X77();
  X73();
}

void X79() {
  X77();
  X80();
}

void X80() {
  flip (499/500) {
    if (a) {
      X74();
    }
    else {
      X74();
    }
  }
}

void X81() {
  flip (473/500) {
    if (a) {
      X84();
    }
    else {
      X81();
    }
  }
}

void X82() {
  flip (33/125) {
    if (a) {
      X87();
    }
    else {
      X81();
    }
  }
}

void X83() {
  flip (1/500) {
    if (b) {
      X86();
    }
    else {
      X85();
    }
  }
}

void X84() {
  flip (49/250) {
    if (a) {
      X86();
    }
    else {
      X81();
    }
  }
}

void X85() {
  flip (341/1000) {
    if (a) {
      X86();
    }
    else {
      X80();
    }
  }
}

void X86() {
  flip (149/200) {
    if (b) {
      X84();
    }
    else {
      X85();
    }
  }
}

void X87() {
  flip (107/200) {
    a = true;
    X81();
  }
  else {
    b = false;
    X90();
  }
}

void X88() {
  flip (97/200) {
    a = false;
    X93();
  }
  else {
    a = false;
    X91();
  }
}

void X89() {
  flip (469/500) {
    if (b) {
      X89();
    }
    else {
      X85();
    }
  }
}

void X90() {
  flip (181/1000) {
    a = false;
    X89();
  }
  else {
    b = false;
    X84();
  }
}

void X91() {
  X86();
  X93();
}

void X92() {
  X89();
  X97();
}

void X93() {
  flip (149/1000) {
    if (a) {
      X97();
    }
    else {
      X90();
    }
  }
}

void X94() {
  X98();
  X93();
}

void X95() {
  flip (21/250) {
    a = false;
    X98();
  }
  else {
    a = true;
    X93();
  }
}

void X96() {
  flip (37/500) {
    a = true;
    X91();
  }
  else {
    b = false;
    X94();
  }
}

void X97() {
  flip (429/500) {
    if (a) {
      X95();
    }
    else {
      X93();
    }
  }
}

void X98() {
  flip (9/100) {
    a = true;
    X1();
  }
  else {
    a = true;
    X2();
  }
}

void X99() {
  flip (343/1000) {
    if (b) {
      X99();
    }
    else {
      X2();
    }
  }
}
