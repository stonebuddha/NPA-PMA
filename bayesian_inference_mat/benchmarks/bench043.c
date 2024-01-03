bool a;
bool b;

void X0() {
  X96();
  X97();
}

void X1() {
  flip (313/1000) {
    if (a) {
      X1();
    }
    else {
      X97();
    }
  }
}

void X2() {
  flip (7/8) {
    a = false;
    X1();
  }
  else {
    b = true;
    X2();
  }
}

void X3() {
  X5();
  X6();
}

void X4() {
  flip (157/250) {
    if (a) {
      X0();
    }
    else {
      X98();
    }
  }
}

void X5() {
  flip (203/1000) {
    b = false;
    X5();
  }
  else {
    a = false;
    X6();
  }
}

void X6() {
  X2();
  X6();
}

void X7() {
  X2();
  X8();
}

void X8() {
  flip (1/10) {
    if (a) {
      X4();
    }
    else {
      X2();
    }
  }
}

void X9() {
  X7();
  X4();
}

void X10() {
  X6();
  X10();
}

void X11() {
  flip (127/1000) {
    if (b) {
      X7();
    }
    else {
      X7();
    }
  }
}

void X12() {
  flip (539/1000) {
    a = true;
    X8();
  }
  else {
    b = true;
    X10();
  }
}

void X13() {
  flip (241/250) {
    if (a) {
      X16();
    }
    else {
      X16();
    }
  }
}

void X14() {
  X14();
  X16();
}

void X15() {
  flip (863/1000) {
    a = false;
    X19();
  }
  else {
    b = false;
    X17();
  }
}

void X16() {
  X15();
  X10();
}

void X17() {
  X15();
  X11();
}

void X18() {
  flip (821/1000) {
    b = true;
    X21();
  }
  else {
    a = false;
    X18();
  }
}

void X19() {
  X13();
  X19();
}

void X20() {
  flip (47/500) {
    if (b) {
      X23();
    }
    else {
      X24();
    }
  }
}

void X21() {
  flip (103/1000) {
    if (b) {
      X22();
    }
    else {
      X23();
    }
  }
}

void X22() {
  flip (141/200) {
    if (a) {
      X27();
    }
    else {
      X27();
    }
  }
}

void X23() {
  flip (131/500) {
    if (b) {
      X20();
    }
    else {
      X25();
    }
  }
}

void X24() {
  flip (157/200) {
    a = false;
    X24();
  }
  else {
    a = false;
    X19();
  }
}

void X25() {
  X22();
  X29();
}

void X26() {
  flip (151/250) {
    if (a) {
      X27();
    }
    else {
      X24();
    }
  }
}

void X27() {
  flip (81/250) {
    a = false;
    X29();
  }
  else {
    b = true;
    X26();
  }
}

void X28() {
  flip (231/250) {
    if (a) {
      X29();
    }
    else {
      X28();
    }
  }
}

void X29() {
  X31();
  X26();
}

void X30() {
  flip (19/125) {
    b = false;
    X27();
  }
  else {
    b = false;
    X28();
  }
}

void X31() {
  flip (49/200) {
    if (a) {
      X34();
    }
    else {
      X26();
    }
  }
}

void X32() {
  flip (899/1000) {
    a = false;
    X28();
  }
  else {
    a = false;
    X36();
  }
}

void X33() {
  flip (17/250) {
    b = true;
    X38();
  }
  else {
    a = true;
    X33();
  }
}

void X34() {
  X28();
  X29();
}

void X35() {
  X35();
  X35();
}

void X36() {
  flip (193/1000) {
    a = true;
    X33();
  }
  else {
    b = false;
    X37();
  }
}

void X37() {
  flip (191/1000) {
    if (b) {
      X33();
    }
    else {
      X36();
    }
  }
}

void X38() {
  flip (261/500) {
    if (b) {
      X32();
    }
    else {
      X38();
    }
  }
}

void X39() {
  flip (1/8) {
    a = true;
    X35();
  }
  else {
    a = false;
    X43();
  }
}

void X40() {
  X38();
  X43();
}

void X41() {
  flip (271/500) {
    b = false;
    X46();
  }
  else {
    a = false;
    X36();
  }
}

void X42() {
  flip (53/100) {
    if (a) {
      X44();
    }
    else {
      X38();
    }
  }
}

void X43() {
  flip (463/500) {
    if (b) {
      X45();
    }
    else {
      X41();
    }
  }
}

void X44() {
  X41();
  X48();
}

void X45() {
  flip (68/125) {
    b = false;
    X47();
  }
  else {
    b = false;
    X39();
  }
}

void X46() {
  flip (13/40) {
    a = true;
    X48();
  }
  else {
    b = false;
    X47();
  }
}

void X47() {
  flip (121/125) {
    if (b) {
      X51();
    }
    else {
      X51();
    }
  }
}

void X48() {
  flip (49/1000) {
    if (a) {
      X48();
    }
    else {
      X47();
    }
  }
}

void X49() {
  flip (76/125) {
    if (a) {
      X50();
    }
    else {
      X51();
    }
  }
}

void X50() {
  X55();
  X46();
}

void X51() {
  flip (757/1000) {
    if (b) {
      X50();
    }
    else {
      X51();
    }
  }
}

void X52() {
  flip (109/200) {
    a = false;
    X48();
  }
  else {
    b = true;
    X54();
  }
}

void X53() {
  flip (54/125) {
    if (b) {
      X57();
    }
    else {
      X54();
    }
  }
}

void X54() {
  flip (713/1000) {
    if (b) {
      X54();
    }
    else {
      X48();
    }
  }
}

void X55() {
  flip (6/25) {
    if (a) {
      X53();
    }
    else {
      X49();
    }
  }
}

void X56() {
  flip (111/125) {
    if (a) {
      X54();
    }
    else {
      X56();
    }
  }
}

void X57() {
  flip (941/1000) {
    a = false;
    X55();
  }
  else {
    a = false;
    X51();
  }
}

void X58() {
  X52();
  X56();
}

void X59() {
  flip (113/500) {
    if (b) {
      X53();
    }
    else {
      X61();
    }
  }
}

void X60() {
  X62();
  X58();
}

void X61() {
  X61();
  X61();
}

void X62() {
  X61();
  X64();
}

void X63() {
  flip (81/200) {
    if (a) {
      X59();
    }
    else {
      X62();
    }
  }
}

void X64() {
  flip (98/125) {
    if (b) {
      X61();
    }
    else {
      X59();
    }
  }
}

void X65() {
  X59();
  X63();
}

void X66() {
  flip (219/1000) {
    b = false;
    X68();
  }
  else {
    a = true;
    X62();
  }
}

void X67() {
  flip (219/250) {
    b = false;
    X68();
  }
  else {
    a = true;
    X69();
  }
}

void X68() {
  flip (173/500) {
    a = false;
    X70();
  }
  else {
    b = true;
    X63();
  }
}

void X69() {
  flip (537/1000) {
    if (a) {
      X66();
    }
    else {
      X70();
    }
  }
}

void X70() {
  flip (213/1000) {
    b = true;
    X64();
  }
  else {
    b = true;
    X68();
  }
}

void X71() {
  X68();
  X68();
}

void X72() {
  X73();
  X67();
}

void X73() {
  flip (71/125) {
    a = false;
    X69();
  }
  else {
    b = false;
    X76();
  }
}

void X74() {
  X74();
  X75();
}

void X75() {
  X73();
  X73();
}

void X76() {
  flip (999/1000) {
    a = false;
    X79();
  }
  else {
    b = true;
    X72();
  }
}

void X77() {
  flip (537/1000) {
    b = true;
    X82();
  }
  else {
    a = false;
    X77();
  }
}

void X78() {
  flip (111/125) {
    if (b) {
      X77();
    }
    else {
      X81();
    }
  }
}

void X79() {
  X84();
  X75();
}

void X80() {
  flip (917/1000) {
    if (a) {
      X83();
    }
    else {
      X77();
    }
  }
}

void X81() {
  flip (731/1000) {
    if (a) {
      X80();
    }
    else {
      X79();
    }
  }
}

void X82() {
  flip (43/250) {
    if (a) {
      X82();
    }
    else {
      X87();
    }
  }
}

void X83() {
  flip (841/1000) {
    if (a) {
      X82();
    }
    else {
      X79();
    }
  }
}

void X84() {
  flip (393/500) {
    if (a) {
      X80();
    }
    else {
      X82();
    }
  }
}

void X85() {
  flip (31/250) {
    a = false;
    X87();
  }
  else {
    b = false;
    X79();
  }
}

void X86() {
  X86();
  X88();
}

void X87() {
  flip (859/1000) {
    if (b) {
      X85();
    }
    else {
      X91();
    }
  }
}

void X88() {
  flip (17/20) {
    if (a) {
      X84();
    }
    else {
      X86();
    }
  }
}

void X89() {
  flip (143/250) {
    if (b) {
      X90();
    }
    else {
      X94();
    }
  }
}

void X90() {
  flip (61/100) {
    a = true;
    X90();
  }
  else {
    a = true;
    X87();
  }
}

void X91() {
  flip (393/1000) {
    if (b) {
      X96();
    }
    else {
      X96();
    }
  }
}

void X92() {
  flip (149/250) {
    b = true;
    X92();
  }
  else {
    b = true;
    X93();
  }
}

void X93() {
  X96();
  X98();
}

void X94() {
  flip (221/500) {
    b = true;
    X93();
  }
  else {
    a = false;
    X93();
  }
}

void X95() {
  flip (48/125) {
    if (b) {
      X99();
    }
    else {
      X98();
    }
  }
}

void X96() {
  flip (273/1000) {
    b = false;
    X97();
  }
  else {
    a = true;
    X93();
  }
}

void X97() {
  flip (223/500) {
    a = false;
    X94();
  }
  else {
    a = false;
    X97();
  }
}

void X98() {
  flip (78/125) {
    b = true;
    X98();
  }
  else {
    a = false;
    X98();
  }
}

void X99() {
  X97();
  X98();
}
