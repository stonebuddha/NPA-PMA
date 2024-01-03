bool a;
bool b;

void X0() {
  flip (199/200) {
    a = true;
    X97();
  }
  else {
    b = false;
    X95();
  }
}

void X1() {
  flip (48/125) {
    b = false;
    X96();
  }
  else {
    b = false;
    X98();
  }
}

void X2() {
  flip (491/1000) {
    a = true;
    X3();
  }
  else {
    b = true;
    X0();
  }
}

void X3() {
  flip (199/200) {
    if (a) {
      X3();
    }
    else {
      X1();
    }
  }
}

void X4() {
  X5();
  X1();
}

void X5() {
  X4();
  X8();
}

void X6() {
  flip (403/1000) {
    a = false;
    X7();
  }
  else {
    b = true;
    X9();
  }
}

void X7() {
  flip (757/1000) {
    a = false;
    X8();
  }
  else {
    a = false;
    X7();
  }
}

void X8() {
  flip (183/250) {
    a = false;
    X2();
  }
  else {
    a = false;
    X10();
  }
}

void X9() {
  X5();
  X12();
}

void X10() {
  flip (469/500) {
    if (b) {
      X4();
    }
    else {
      X8();
    }
  }
}

void X11() {
  flip (27/40) {
    if (a) {
      X15();
    }
    else {
      X15();
    }
  }
}

void X12() {
  flip (99/500) {
    b = false;
    X13();
  }
  else {
    a = true;
    X12();
  }
}

void X13() {
  X12();
  X11();
}

void X14() {
  flip (1/50) {
    b = true;
    X15();
  }
  else {
    b = true;
    X17();
  }
}

void X15() {
  flip (117/200) {
    a = false;
    X12();
  }
  else {
    b = false;
    X9();
  }
}

void X16() {
  flip (27/500) {
    if (b) {
      X19();
    }
    else {
      X19();
    }
  }
}

void X17() {
  flip (433/500) {
    b = false;
    X16();
  }
  else {
    b = true;
    X17();
  }
}

void X18() {
  flip (151/250) {
    if (b) {
      X20();
    }
    else {
      X16();
    }
  }
}

void X19() {
  flip (108/125) {
    if (b) {
      X18();
    }
    else {
      X18();
    }
  }
}

void X20() {
  X25();
  X24();
}

void X21() {
  X21();
  X19();
}

void X22() {
  flip (119/250) {
    if (b) {
      X20();
    }
    else {
      X18();
    }
  }
}

void X23() {
  X17();
  X24();
}

void X24() {
  X23();
  X29();
}

void X25() {
  flip (91/200) {
    if (b) {
      X22();
    }
    else {
      X28();
    }
  }
}

void X26() {
  X22();
  X23();
}

void X27() {
  X21();
  X23();
}

void X28() {
  flip (289/1000) {
    b = false;
    X28();
  }
  else {
    b = true;
    X22();
  }
}

void X29() {
  flip (727/1000) {
    b = false;
    X29();
  }
  else {
    a = true;
    X33();
  }
}

void X30() {
  X34();
  X33();
}

void X31() {
  flip (761/1000) {
    b = true;
    X33();
  }
  else {
    a = false;
    X26();
  }
}

void X32() {
  X37();
  X32();
}

void X33() {
  flip (613/1000) {
    if (b) {
      X38();
    }
    else {
      X32();
    }
  }
}

void X34() {
  X37();
  X31();
}

void X35() {
  flip (547/1000) {
    a = false;
    X34();
  }
  else {
    a = true;
    X29();
  }
}

void X36() {
  flip (29/250) {
    b = false;
    X36();
  }
  else {
    a = true;
    X36();
  }
}

void X37() {
  X33();
  X39();
}

void X38() {
  X32();
  X38();
}

void X39() {
  flip (623/1000) {
    b = true;
    X37();
  }
  else {
    b = true;
    X43();
  }
}

void X40() {
  X35();
  X45();
}

void X41() {
  flip (67/500) {
    b = true;
    X44();
  }
  else {
    a = false;
    X45();
  }
}

void X42() {
  flip (221/250) {
    if (b) {
      X38();
    }
    else {
      X42();
    }
  }
}

void X43() {
  flip (32/125) {
    b = false;
    X41();
  }
  else {
    a = false;
    X45();
  }
}

void X44() {
  X46();
  X39();
}

void X45() {
  flip (439/500) {
    b = false;
    X48();
  }
  else {
    a = false;
    X50();
  }
}

void X46() {
  flip (133/200) {
    if (b) {
      X48();
    }
    else {
      X41();
    }
  }
}

void X47() {
  X50();
  X44();
}

void X48() {
  flip (677/1000) {
    if (a) {
      X44();
    }
    else {
      X42();
    }
  }
}

void X49() {
  X45();
  X53();
}

void X50() {
  X52();
  X53();
}

void X51() {
  flip (457/500) {
    a = false;
    X50();
  }
  else {
    b = true;
    X56();
  }
}

void X52() {
  flip (83/1000) {
    a = false;
    X49();
  }
  else {
    b = false;
    X57();
  }
}

void X53() {
  flip (189/250) {
    if (a) {
      X54();
    }
    else {
      X57();
    }
  }
}

void X54() {
  flip (7/8) {
    if (b) {
      X57();
    }
    else {
      X57();
    }
  }
}

void X55() {
  flip (57/100) {
    if (b) {
      X52();
    }
    else {
      X49();
    }
  }
}

void X56() {
  flip (539/1000) {
    if (a) {
      X54();
    }
    else {
      X53();
    }
  }
}

void X57() {
  X57();
  X62();
}

void X58() {
  flip (887/1000) {
    if (b) {
      X58();
    }
    else {
      X60();
    }
  }
}

void X59() {
  X53();
  X62();
}

void X60() {
  X55();
  X60();
}

void X61() {
  flip (3/10) {
    b = true;
    X62();
  }
  else {
    a = true;
    X59();
  }
}

void X62() {
  flip (103/125) {
    if (a) {
      X59();
    }
    else {
      X63();
    }
  }
}

void X63() {
  flip (66/125) {
    a = true;
    X62();
  }
  else {
    b = true;
    X60();
  }
}

void X64() {
  X58();
  X63();
}

void X65() {
  flip (7/50) {
    a = true;
    X66();
  }
  else {
    b = true;
    X68();
  }
}

void X66() {
  flip (459/1000) {
    a = false;
    X61();
  }
  else {
    b = false;
    X63();
  }
}

void X67() {
  X65();
  X68();
}

void X68() {
  flip (11/1000) {
    if (b) {
      X62();
    }
    else {
      X71();
    }
  }
}

void X69() {
  X66();
  X68();
}

void X70() {
  flip (993/1000) {
    b = true;
    X73();
  }
  else {
    b = false;
    X75();
  }
}

void X71() {
  X75();
  X65();
}

void X72() {
  flip (91/200) {
    b = false;
    X73();
  }
  else {
    b = true;
    X67();
  }
}

void X73() {
  X77();
  X71();
}

void X74() {
  flip (473/1000) {
    if (a) {
      X72();
    }
    else {
      X79();
    }
  }
}

void X75() {
  flip (31/50) {
    a = true;
    X79();
  }
  else {
    b = true;
    X80();
  }
}

void X76() {
  flip (127/500) {
    if (b) {
      X81();
    }
    else {
      X76();
    }
  }
}

void X77() {
  flip (511/1000) {
    b = false;
    X77();
  }
  else {
    a = false;
    X77();
  }
}

void X78() {
  flip (112/125) {
    if (a) {
      X83();
    }
    else {
      X75();
    }
  }
}

void X79() {
  X82();
  X74();
}

void X80() {
  flip (43/100) {
    b = false;
    X79();
  }
  else {
    b = false;
    X74();
  }
}

void X81() {
  flip (119/250) {
    b = true;
    X78();
  }
  else {
    a = false;
    X82();
  }
}

void X82() {
  X86();
  X83();
}

void X83() {
  flip (917/1000) {
    b = false;
    X88();
  }
  else {
    b = true;
    X81();
  }
}

void X84() {
  flip (269/1000) {
    if (a) {
      X79();
    }
    else {
      X80();
    }
  }
}

void X85() {
  flip (104/125) {
    b = true;
    X85();
  }
  else {
    b = false;
    X85();
  }
}

void X86() {
  flip (86/125) {
    b = false;
    X87();
  }
  else {
    a = true;
    X82();
  }
}

void X87() {
  flip (4/5) {
    b = true;
    X83();
  }
  else {
    b = false;
    X87();
  }
}

void X88() {
  X92();
  X88();
}

void X89() {
  flip (413/1000) {
    a = true;
    X83();
  }
  else {
    b = true;
    X93();
  }
}

void X90() {
  flip (19/40) {
    b = false;
    X88();
  }
  else {
    b = false;
    X92();
  }
}

void X91() {
  X94();
  X95();
}

void X92() {
  flip (167/250) {
    if (b) {
      X87();
    }
    else {
      X97();
    }
  }
}

void X93() {
  flip (371/1000) {
    a = true;
    X98();
  }
  else {
    b = true;
    X93();
  }
}

void X94() {
  X88();
  X98();
}

void X95() {
  flip (3/10) {
    b = true;
    X91();
  }
  else {
    a = false;
    X96();
  }
}

void X96() {
  X91();
  X97();
}

void X97() {
  X98();
  X99();
}

void X98() {
  flip (73/500) {
    b = true;
    X94();
  }
  else {
    b = false;
    X94();
  }
}

void X99() {
  flip (831/1000) {
    b = false;
    X1();
  }
  else {
    b = true;
    X98();
  }
}
