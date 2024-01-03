bool a;
bool b;

void X0() {
  flip (93/500) {
    if (b) {
      X97();
    }
    else {
      X98();
    }
  }
}

void X1() {
  X97();
  X4();
}

void X2() {
  X97();
  X97();
}

void X3() {
  flip (9/50) {
    if (b) {
      X99();
    }
    else {
      X3();
    }
  }
}

void X4() {
  flip (21/125) {
    if (b) {
      X1();
    }
    else {
      X4();
    }
  }
}

void X5() {
  flip (211/1000) {
    if (a) {
      X10();
    }
    else {
      X0();
    }
  }
}

void X6() {
  X2();
  X2();
}

void X7() {
  X3();
  X1();
}

void X8() {
  X12();
  X13();
}

void X9() {
  X14();
  X9();
}

void X10() {
  flip (29/40) {
    b = false;
    X8();
  }
  else {
    a = false;
    X4();
  }
}

void X11() {
  flip (337/1000) {
    if (b) {
      X5();
    }
    else {
      X12();
    }
  }
}

void X12() {
  flip (249/1000) {
    a = true;
    X12();
  }
  else {
    a = false;
    X8();
  }
}

void X13() {
  flip (939/1000) {
    if (b) {
      X14();
    }
    else {
      X11();
    }
  }
}

void X14() {
  flip (611/1000) {
    a = false;
    X17();
  }
  else {
    a = false;
    X19();
  }
}

void X15() {
  flip (19/125) {
    if (b) {
      X20();
    }
    else {
      X15();
    }
  }
}

void X16() {
  flip (57/250) {
    a = false;
    X12();
  }
  else {
    a = false;
    X10();
  }
}

void X17() {
  X17();
  X11();
}

void X18() {
  flip (197/1000) {
    a = false;
    X23();
  }
  else {
    b = true;
    X14();
  }
}

void X19() {
  X17();
  X21();
}

void X20() {
  flip (9/500) {
    a = true;
    X15();
  }
  else {
    b = true;
    X20();
  }
}

void X21() {
  flip (119/200) {
    b = true;
    X17();
  }
  else {
    a = true;
    X16();
  }
}

void X22() {
  flip (17/1000) {
    if (a) {
      X26();
    }
    else {
      X17();
    }
  }
}

void X23() {
  X20();
  X24();
}

void X24() {
  X19();
  X23();
}

void X25() {
  flip (479/500) {
    a = true;
    X19();
  }
  else {
    b = false;
    X29();
  }
}

void X26() {
  X31();
  X27();
}

void X27() {
  flip (249/250) {
    a = true;
    X30();
  }
  else {
    a = true;
    X31();
  }
}

void X28() {
  flip (349/1000) {
    a = true;
    X28();
  }
  else {
    b = false;
    X22();
  }
}

void X29() {
  flip (987/1000) {
    if (a) {
      X32();
    }
    else {
      X28();
    }
  }
}

void X30() {
  flip (219/250) {
    a = false;
    X27();
  }
  else {
    b = false;
    X34();
  }
}

void X31() {
  flip (99/500) {
    if (b) {
      X31();
    }
    else {
      X25();
    }
  }
}

void X32() {
  flip (43/1000) {
    a = false;
    X37();
  }
  else {
    b = false;
    X32();
  }
}

void X33() {
  flip (119/500) {
    a = false;
    X28();
  }
  else {
    a = true;
    X34();
  }
}

void X34() {
  X32();
  X31();
}

void X35() {
  flip (263/1000) {
    b = false;
    X39();
  }
  else {
    a = false;
    X29();
  }
}

void X36() {
  X41();
  X32();
}

void X37() {
  flip (11/25) {
    a = false;
    X37();
  }
  else {
    b = true;
    X38();
  }
}

void X38() {
  X36();
  X41();
}

void X39() {
  flip (61/1000) {
    if (a) {
      X43();
    }
    else {
      X43();
    }
  }
}

void X40() {
  X35();
  X38();
}

void X41() {
  X38();
  X38();
}

void X42() {
  X46();
  X45();
}

void X43() {
  X38();
  X45();
}

void X44() {
  flip (641/1000) {
    if (a) {
      X42();
    }
    else {
      X39();
    }
  }
}

void X45() {
  X41();
  X41();
}

void X46() {
  X50();
  X48();
}

void X47() {
  flip (127/200) {
    if (b) {
      X47();
    }
    else {
      X52();
    }
  }
}

void X48() {
  flip (219/250) {
    if (a) {
      X46();
    }
    else {
      X42();
    }
  }
}

void X49() {
  flip (38/125) {
    a = false;
    X48();
  }
  else {
    a = false;
    X46();
  }
}

void X50() {
  flip (9/1000) {
    if (a) {
      X44();
    }
    else {
      X53();
    }
  }
}

void X51() {
  X50();
  X55();
}

void X52() {
  flip (63/200) {
    a = true;
    X55();
  }
  else {
    b = false;
    X57();
  }
}

void X53() {
  flip (181/1000) {
    b = false;
    X56();
  }
  else {
    b = false;
    X50();
  }
}

void X54() {
  flip (27/1000) {
    a = true;
    X50();
  }
  else {
    a = false;
    X56();
  }
}

void X55() {
  X58();
  X57();
}

void X56() {
  flip (951/1000) {
    b = true;
    X53();
  }
  else {
    a = true;
    X57();
  }
}

void X57() {
  flip (109/250) {
    b = true;
    X61();
  }
  else {
    a = false;
    X54();
  }
}

void X58() {
  flip (119/500) {
    a = false;
    X61();
  }
  else {
    b = true;
    X53();
  }
}

void X59() {
  X53();
  X57();
}

void X60() {
  X57();
  X64();
}

void X61() {
  flip (431/500) {
    if (a) {
      X59();
    }
    else {
      X56();
    }
  }
}

void X62() {
  flip (22/125) {
    if (a) {
      X57();
    }
    else {
      X62();
    }
  }
}

void X63() {
  flip (47/125) {
    b = true;
    X65();
  }
  else {
    b = false;
    X67();
  }
}

void X64() {
  X68();
  X60();
}

void X65() {
  X60();
  X61();
}

void X66() {
  flip (369/500) {
    if (b) {
      X66();
    }
    else {
      X65();
    }
  }
}

void X67() {
  flip (137/250) {
    if (b) {
      X70();
    }
    else {
      X65();
    }
  }
}

void X68() {
  flip (24/25) {
    if (b) {
      X63();
    }
    else {
      X62();
    }
  }
}

void X69() {
  X71();
  X68();
}

void X70() {
  flip (617/1000) {
    b = false;
    X73();
  }
  else {
    b = false;
    X73();
  }
}

void X71() {
  X69();
  X74();
}

void X72() {
  flip (157/500) {
    a = true;
    X76();
  }
  else {
    a = false;
    X70();
  }
}

void X73() {
  X75();
  X71();
}

void X74() {
  X74();
  X71();
}

void X75() {
  flip (601/1000) {
    a = true;
    X72();
  }
  else {
    b = false;
    X70();
  }
}

void X76() {
  flip (29/250) {
    if (a) {
      X80();
    }
    else {
      X76();
    }
  }
}

void X77() {
  flip (21/25) {
    b = false;
    X71();
  }
  else {
    b = false;
    X81();
  }
}

void X78() {
  flip (473/500) {
    if (a) {
      X78();
    }
    else {
      X80();
    }
  }
}

void X79() {
  flip (123/200) {
    if (a) {
      X80();
    }
    else {
      X79();
    }
  }
}

void X80() {
  flip (229/250) {
    if (b) {
      X76();
    }
    else {
      X83();
    }
  }
}

void X81() {
  flip (99/100) {
    if (a) {
      X78();
    }
    else {
      X80();
    }
  }
}

void X82() {
  flip (351/1000) {
    a = true;
    X81();
  }
  else {
    a = true;
    X82();
  }
}

void X83() {
  X81();
  X85();
}

void X84() {
  X79();
  X88();
}

void X85() {
  flip (617/1000) {
    if (a) {
      X80();
    }
    else {
      X85();
    }
  }
}

void X86() {
  flip (96/125) {
    b = true;
    X87();
  }
  else {
    b = false;
    X84();
  }
}

void X87() {
  flip (26/125) {
    a = true;
    X88();
  }
  else {
    a = true;
    X83();
  }
}

void X88() {
  flip (387/1000) {
    b = false;
    X86();
  }
  else {
    a = false;
    X84();
  }
}

void X89() {
  flip (381/1000) {
    if (a) {
      X90();
    }
    else {
      X91();
    }
  }
}

void X90() {
  flip (279/500) {
    b = false;
    X85();
  }
  else {
    b = false;
    X92();
  }
}

void X91() {
  flip (27/50) {
    if (a) {
      X87();
    }
    else {
      X90();
    }
  }
}

void X92() {
  flip (33/200) {
    if (a) {
      X91();
    }
    else {
      X91();
    }
  }
}

void X93() {
  flip (833/1000) {
    a = true;
    X89();
  }
  else {
    b = true;
    X94();
  }
}

void X94() {
  X97();
  X93();
}

void X95() {
  flip (487/500) {
    if (a) {
      X97();
    }
    else {
      X97();
    }
  }
}

void X96() {
  flip (841/1000) {
    if (a) {
      X1();
    }
    else {
      X92();
    }
  }
}

void X97() {
  X95();
  X0();
}

void X98() {
  flip (83/200) {
    if (b) {
      X2();
    }
    else {
      X93();
    }
  }
}

void X99() {
  flip (247/500) {
    b = false;
    X93();
  }
  else {
    a = false;
    X94();
  }
}
