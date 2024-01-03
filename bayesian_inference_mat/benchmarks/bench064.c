bool a;
bool b;

void X0() {
  flip (953/1000) {
    if (a) {
      X4();
    }
    else {
      X95();
    }
  }
}

void X1() {
  X99();
  X0();
}

void X2() {
  X2();
  X1();
}

void X3() {
  X5();
  X99();
}

void X4() {
  X7();
  X7();
}

void X5() {
  flip (943/1000) {
    if (b) {
      X1();
    }
    else {
      X2();
    }
  }
}

void X6() {
  flip (3/20) {
    if (a) {
      X1();
    }
    else {
      X8();
    }
  }
}

void X7() {
  X3();
  X5();
}

void X8() {
  flip (9/200) {
    if (a) {
      X7();
    }
    else {
      X5();
    }
  }
}

void X9() {
  flip (123/200) {
    if (a) {
      X8();
    }
    else {
      X9();
    }
  }
}

void X10() {
  flip (31/125) {
    if (b) {
      X9();
    }
    else {
      X5();
    }
  }
}

void X11() {
  X7();
  X12();
}

void X12() {
  flip (187/500) {
    if (b) {
      X8();
    }
    else {
      X15();
    }
  }
}

void X13() {
  flip (411/500) {
    a = false;
    X7();
  }
  else {
    b = true;
    X9();
  }
}

void X14() {
  flip (67/250) {
    if (b) {
      X19();
    }
    else {
      X13();
    }
  }
}

void X15() {
  X18();
  X11();
}

void X16() {
  X16();
  X18();
}

void X17() {
  flip (239/1000) {
    b = false;
    X22();
  }
  else {
    b = true;
    X21();
  }
}

void X18() {
  flip (147/200) {
    if (a) {
      X16();
    }
    else {
      X13();
    }
  }
}

void X19() {
  flip (171/500) {
    b = false;
    X23();
  }
  else {
    a = true;
    X13();
  }
}

void X20() {
  X19();
  X18();
}

void X21() {
  flip (1/1000) {
    a = false;
    X24();
  }
  else {
    b = true;
    X26();
  }
}

void X22() {
  flip (123/200) {
    a = true;
    X25();
  }
  else {
    a = false;
    X27();
  }
}

void X23() {
  X26();
  X23();
}

void X24() {
  X25();
  X19();
}

void X25() {
  flip (97/125) {
    if (b) {
      X19();
    }
    else {
      X21();
    }
  }
}

void X26() {
  flip (69/200) {
    if (a) {
      X31();
    }
    else {
      X22();
    }
  }
}

void X27() {
  flip (53/500) {
    if (b) {
      X21();
    }
    else {
      X22();
    }
  }
}

void X28() {
  flip (107/500) {
    a = false;
    X27();
  }
  else {
    b = true;
    X22();
  }
}

void X29() {
  flip (499/1000) {
    if (b) {
      X33();
    }
    else {
      X25();
    }
  }
}

void X30() {
  X26();
  X28();
}

void X31() {
  flip (723/1000) {
    if (b) {
      X32();
    }
    else {
      X36();
    }
  }
}

void X32() {
  X32();
  X26();
}

void X33() {
  X34();
  X31();
}

void X34() {
  flip (21/50) {
    if (b) {
      X32();
    }
    else {
      X28();
    }
  }
}

void X35() {
  flip (549/1000) {
    a = false;
    X35();
  }
  else {
    b = false;
    X32();
  }
}

void X36() {
  X35();
  X31();
}

void X37() {
  flip (111/250) {
    if (a) {
      X39();
    }
    else {
      X39();
    }
  }
}

void X38() {
  flip (289/500) {
    if (a) {
      X39();
    }
    else {
      X32();
    }
  }
}

void X39() {
  flip (703/1000) {
    b = false;
    X35();
  }
  else {
    a = true;
    X43();
  }
}

void X40() {
  flip (949/1000) {
    b = true;
    X41();
  }
  else {
    b = true;
    X43();
  }
}

void X41() {
  flip (879/1000) {
    a = false;
    X46();
  }
  else {
    a = false;
    X42();
  }
}

void X42() {
  X39();
  X41();
}

void X43() {
  flip (407/1000) {
    if (b) {
      X42();
    }
    else {
      X39();
    }
  }
}

void X44() {
  X49();
  X44();
}

void X45() {
  flip (219/250) {
    a = true;
    X40();
  }
  else {
    b = true;
    X44();
  }
}

void X46() {
  X43();
  X48();
}

void X47() {
  X44();
  X42();
}

void X48() {
  flip (813/1000) {
    a = true;
    X49();
  }
  else {
    b = false;
    X45();
  }
}

void X49() {
  flip (227/250) {
    if (a) {
      X51();
    }
    else {
      X50();
    }
  }
}

void X50() {
  flip (551/1000) {
    if (b) {
      X48();
    }
    else {
      X55();
    }
  }
}

void X51() {
  flip (329/500) {
    if (b) {
      X48();
    }
    else {
      X49();
    }
  }
}

void X52() {
  X53();
  X52();
}

void X53() {
  flip (333/500) {
    b = false;
    X57();
  }
  else {
    b = false;
    X57();
  }
}

void X54() {
  flip (549/1000) {
    b = true;
    X56();
  }
  else {
    a = true;
    X55();
  }
}

void X55() {
  flip (17/125) {
    a = true;
    X51();
  }
  else {
    a = true;
    X51();
  }
}

void X56() {
  flip (227/500) {
    if (a) {
      X57();
    }
    else {
      X55();
    }
  }
}

void X57() {
  X53();
  X62();
}

void X58() {
  flip (6/125) {
    if (a) {
      X56();
    }
    else {
      X58();
    }
  }
}

void X59() {
  X55();
  X59();
}

void X60() {
  flip (409/500) {
    if (b) {
      X54();
    }
    else {
      X61();
    }
  }
}

void X61() {
  X58();
  X57();
}

void X62() {
  flip (411/500) {
    if (a) {
      X56();
    }
    else {
      X64();
    }
  }
}

void X63() {
  flip (181/500) {
    if (a) {
      X68();
    }
    else {
      X66();
    }
  }
}

void X64() {
  X64();
  X61();
}

void X65() {
  flip (33/40) {
    a = true;
    X70();
  }
  else {
    a = false;
    X68();
  }
}

void X66() {
  flip (933/1000) {
    if (b) {
      X60();
    }
    else {
      X62();
    }
  }
}

void X67() {
  flip (617/1000) {
    b = true;
    X66();
  }
  else {
    a = true;
    X69();
  }
}

void X68() {
  flip (77/200) {
    if (b) {
      X68();
    }
    else {
      X69();
    }
  }
}

void X69() {
  flip (173/500) {
    a = true;
    X72();
  }
  else {
    b = true;
    X73();
  }
}

void X70() {
  flip (181/250) {
    a = true;
    X67();
  }
  else {
    b = true;
    X66();
  }
}

void X71() {
  flip (6/25) {
    if (a) {
      X69();
    }
    else {
      X69();
    }
  }
}

void X72() {
  X71();
  X69();
}

void X73() {
  X75();
  X73();
}

void X74() {
  flip (107/200) {
    if (b) {
      X72();
    }
    else {
      X69();
    }
  }
}

void X75() {
  X74();
  X70();
}

void X76() {
  X76();
  X79();
}

void X77() {
  flip (293/1000) {
    if (b) {
      X78();
    }
    else {
      X72();
    }
  }
}

void X78() {
  X81();
  X83();
}

void X79() {
  flip (593/1000) {
    a = false;
    X82();
  }
  else {
    a = false;
    X84();
  }
}

void X80() {
  X74();
  X81();
}

void X81() {
  X78();
  X78();
}

void X82() {
  X81();
  X77();
}

void X83() {
  X82();
  X86();
}

void X84() {
  X87();
  X79();
}

void X85() {
  X84();
  X88();
}

void X86() {
  flip (137/250) {
    a = true;
    X89();
  }
  else {
    b = true;
    X82();
  }
}

void X87() {
  X82();
  X85();
}

void X88() {
  X86();
  X84();
}

void X89() {
  X88();
  X87();
}

void X90() {
  X89();
  X86();
}

void X91() {
  flip (507/1000) {
    if (b) {
      X90();
    }
    else {
      X87();
    }
  }
}

void X92() {
  flip (69/250) {
    if (b) {
      X90();
    }
    else {
      X87();
    }
  }
}

void X93() {
  flip (1/2) {
    if (b) {
      X94();
    }
    else {
      X93();
    }
  }
}

void X94() {
  flip (183/500) {
    if (b) {
      X95();
    }
    else {
      X92();
    }
  }
}

void X95() {
  flip (341/500) {
    a = false;
    X90();
  }
  else {
    b = false;
    X90();
  }
}

void X96() {
  X99();
  X93();
}

void X97() {
  X96();
  X98();
}

void X98() {
  flip (211/500) {
    if (b) {
      X96();
    }
    else {
      X92();
    }
  }
}

void X99() {
  flip (14/25) {
    b = true;
    X0();
  }
  else {
    b = false;
    X99();
  }
}
