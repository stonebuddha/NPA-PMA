bool a;
bool b;

void X0() {
  X97();
  X95();
}

void X1() {
  flip (4/125) {
    if (a) {
      X0();
    }
    else {
      X5();
    }
  }
}

void X2() {
  X99();
  X4();
}

void X3() {
  X7();
  X5();
}

void X4() {
  flip (579/1000) {
    if (a) {
      X8();
    }
    else {
      X6();
    }
  }
}

void X5() {
  flip (102/125) {
    if (a) {
      X10();
    }
    else {
      X3();
    }
  }
}

void X6() {
  X0();
  X8();
}

void X7() {
  flip (371/500) {
    if (a) {
      X3();
    }
    else {
      X3();
    }
  }
}

void X8() {
  X9();
  X2();
}

void X9() {
  flip (303/500) {
    b = true;
    X13();
  }
  else {
    b = false;
    X5();
  }
}

void X10() {
  flip (29/500) {
    if (b) {
      X6();
    }
    else {
      X4();
    }
  }
}

void X11() {
  flip (407/500) {
    if (a) {
      X13();
    }
    else {
      X8();
    }
  }
}

void X12() {
  X14();
  X15();
}

void X13() {
  flip (809/1000) {
    b = true;
    X9();
  }
  else {
    b = true;
    X8();
  }
}

void X14() {
  flip (57/125) {
    if (a) {
      X18();
    }
    else {
      X16();
    }
  }
}

void X15() {
  flip (97/200) {
    a = true;
    X14();
  }
  else {
    a = false;
    X10();
  }
}

void X16() {
  flip (997/1000) {
    if (b) {
      X17();
    }
    else {
      X10();
    }
  }
}

void X17() {
  X18();
  X19();
}

void X18() {
  X19();
  X12();
}

void X19() {
  flip (33/1000) {
    if (a) {
      X21();
    }
    else {
      X15();
    }
  }
}

void X20() {
  flip (141/1000) {
    if (b) {
      X15();
    }
    else {
      X19();
    }
  }
}

void X21() {
  X16();
  X21();
}

void X22() {
  flip (91/250) {
    if (a) {
      X18();
    }
    else {
      X25();
    }
  }
}

void X23() {
  X28();
  X24();
}

void X24() {
  flip (71/500) {
    b = false;
    X25();
  }
  else {
    b = true;
    X20();
  }
}

void X25() {
  flip (891/1000) {
    if (b) {
      X26();
    }
    else {
      X20();
    }
  }
}

void X26() {
  flip (371/500) {
    if (a) {
      X26();
    }
    else {
      X20();
    }
  }
}

void X27() {
  flip (103/125) {
    if (a) {
      X28();
    }
    else {
      X24();
    }
  }
}

void X28() {
  X24();
  X29();
}

void X29() {
  X32();
  X23();
}

void X30() {
  flip (1/500) {
    b = false;
    X25();
  }
  else {
    b = true;
    X34();
  }
}

void X31() {
  flip (121/125) {
    a = false;
    X29();
  }
  else {
    a = false;
    X25();
  }
}

void X32() {
  X32();
  X33();
}

void X33() {
  flip (829/1000) {
    b = true;
    X37();
  }
  else {
    a = true;
    X33();
  }
}

void X34() {
  flip (121/1000) {
    if (a) {
      X36();
    }
    else {
      X38();
    }
  }
}

void X35() {
  flip (217/500) {
    if (b) {
      X30();
    }
    else {
      X29();
    }
  }
}

void X36() {
  X32();
  X35();
}

void X37() {
  flip (38/125) {
    if (b) {
      X42();
    }
    else {
      X35();
    }
  }
}

void X38() {
  X33();
  X41();
}

void X39() {
  X41();
  X38();
}

void X40() {
  flip (173/200) {
    b = false;
    X34();
  }
  else {
    b = false;
    X37();
  }
}

void X41() {
  flip (917/1000) {
    a = false;
    X39();
  }
  else {
    b = false;
    X46();
  }
}

void X42() {
  flip (17/25) {
    if (a) {
      X38();
    }
    else {
      X38();
    }
  }
}

void X43() {
  flip (78/125) {
    a = true;
    X46();
  }
  else {
    b = false;
    X44();
  }
}

void X44() {
  flip (83/250) {
    a = true;
    X43();
  }
  else {
    b = true;
    X45();
  }
}

void X45() {
  flip (281/1000) {
    b = true;
    X44();
  }
  else {
    a = false;
    X50();
  }
}

void X46() {
  X45();
  X50();
}

void X47() {
  flip (367/1000) {
    a = true;
    X49();
  }
  else {
    a = false;
    X52();
  }
}

void X48() {
  flip (14/125) {
    a = false;
    X53();
  }
  else {
    a = true;
    X44();
  }
}

void X49() {
  flip (957/1000) {
    if (b) {
      X45();
    }
    else {
      X50();
    }
  }
}

void X50() {
  flip (67/125) {
    if (a) {
      X53();
    }
    else {
      X54();
    }
  }
}

void X51() {
  flip (187/250) {
    if (b) {
      X53();
    }
    else {
      X54();
    }
  }
}

void X52() {
  flip (191/250) {
    if (b) {
      X54();
    }
    else {
      X57();
    }
  }
}

void X53() {
  flip (137/500) {
    if (b) {
      X56();
    }
    else {
      X58();
    }
  }
}

void X54() {
  flip (88/125) {
    b = false;
    X58();
  }
  else {
    b = false;
    X58();
  }
}

void X55() {
  flip (67/125) {
    if (a) {
      X53();
    }
    else {
      X55();
    }
  }
}

void X56() {
  flip (79/250) {
    b = false;
    X61();
  }
  else {
    a = false;
    X54();
  }
}

void X57() {
  flip (431/1000) {
    b = false;
    X60();
  }
  else {
    b = false;
    X59();
  }
}

void X58() {
  flip (81/200) {
    b = true;
    X56();
  }
  else {
    b = true;
    X53();
  }
}

void X59() {
  flip (219/500) {
    b = true;
    X63();
  }
  else {
    b = false;
    X57();
  }
}

void X60() {
  X62();
  X56();
}

void X61() {
  flip (649/1000) {
    if (b) {
      X60();
    }
    else {
      X56();
    }
  }
}

void X62() {
  flip (53/500) {
    if (a) {
      X62();
    }
    else {
      X59();
    }
  }
}

void X63() {
  X60();
  X59();
}

void X64() {
  X63();
  X63();
}

void X65() {
  X61();
  X69();
}

void X66() {
  flip (67/1000) {
    if (a) {
      X67();
    }
    else {
      X61();
    }
  }
}

void X67() {
  flip (307/1000) {
    if (b) {
      X66();
    }
    else {
      X66();
    }
  }
}

void X68() {
  flip (187/250) {
    a = true;
    X73();
  }
  else {
    b = true;
    X65();
  }
}

void X69() {
  flip (173/500) {
    a = false;
    X69();
  }
  else {
    a = true;
    X65();
  }
}

void X70() {
  flip (923/1000) {
    a = false;
    X71();
  }
  else {
    a = true;
    X74();
  }
}

void X71() {
  X76();
  X67();
}

void X72() {
  flip (393/1000) {
    a = true;
    X68();
  }
  else {
    b = false;
    X67();
  }
}

void X73() {
  X70();
  X75();
}

void X74() {
  flip (249/500) {
    a = false;
    X75();
  }
  else {
    b = true;
    X76();
  }
}

void X75() {
  X80();
  X69();
}

void X76() {
  X79();
  X79();
}

void X77() {
  flip (49/50) {
    if (b) {
      X78();
    }
    else {
      X81();
    }
  }
}

void X78() {
  flip (923/1000) {
    b = true;
    X82();
  }
  else {
    b = false;
    X80();
  }
}

void X79() {
  X84();
  X73();
}

void X80() {
  X81();
  X75();
}

void X81() {
  X78();
  X86();
}

void X82() {
  flip (58/125) {
    if (b) {
      X87();
    }
    else {
      X77();
    }
  }
}

void X83() {
  flip (227/1000) {
    if (b) {
      X79();
    }
    else {
      X87();
    }
  }
}

void X84() {
  flip (99/125) {
    if (b) {
      X87();
    }
    else {
      X80();
    }
  }
}

void X85() {
  flip (23/500) {
    a = false;
    X89();
  }
  else {
    b = true;
    X90();
  }
}

void X86() {
  X87();
  X87();
}

void X87() {
  X89();
  X86();
}

void X88() {
  flip (53/250) {
    b = false;
    X84();
  }
  else {
    a = false;
    X83();
  }
}

void X89() {
  X92();
  X83();
}

void X90() {
  flip (7/500) {
    b = false;
    X92();
  }
  else {
    a = false;
    X86();
  }
}

void X91() {
  flip (21/125) {
    a = false;
    X96();
  }
  else {
    a = false;
    X85();
  }
}

void X92() {
  flip (43/1000) {
    if (a) {
      X94();
    }
    else {
      X93();
    }
  }
}

void X93() {
  flip (3/500) {
    a = false;
    X88();
  }
  else {
    b = false;
    X90();
  }
}

void X94() {
  flip (129/500) {
    b = false;
    X90();
  }
  else {
    a = false;
    X93();
  }
}

void X95() {
  flip (243/250) {
    if (a) {
      X94();
    }
    else {
      X99();
    }
  }
}

void X96() {
  flip (97/125) {
    if (a) {
      X99();
    }
    else {
      X99();
    }
  }
}

void X97() {
  flip (993/1000) {
    b = true;
    X96();
  }
  else {
    b = false;
    X2();
  }
}

void X98() {
  flip (543/1000) {
    if (a) {
      X95();
    }
    else {
      X97();
    }
  }
}

void X99() {
  flip (113/200) {
    a = true;
    X93();
  }
  else {
    b = true;
    X96();
  }
}
