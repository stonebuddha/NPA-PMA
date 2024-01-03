bool a;
bool b;

void X0() {
  X94();
  X99();
}

void X1() {
  flip (463/1000) {
    b = true;
    X98();
  }
  else {
    a = false;
    X98();
  }
}

void X2() {
  flip (263/500) {
    b = true;
    X99();
  }
  else {
    b = false;
    X6();
  }
}

void X3() {
  X3();
  X1();
}

void X4() {
  flip (111/250) {
    if (b) {
      X0();
    }
    else {
      X9();
    }
  }
}

void X5() {
  flip (71/200) {
    if (a) {
      X0();
    }
    else {
      X7();
    }
  }
}

void X6() {
  flip (129/1000) {
    if (a) {
      X6();
    }
    else {
      X7();
    }
  }
}

void X7() {
  X1();
  X4();
}

void X8() {
  flip (583/1000) {
    if (a) {
      X13();
    }
    else {
      X7();
    }
  }
}

void X9() {
  flip (173/1000) {
    if (a) {
      X12();
    }
    else {
      X8();
    }
  }
}

void X10() {
  X6();
  X12();
}

void X11() {
  flip (951/1000) {
    a = false;
    X7();
  }
  else {
    b = true;
    X14();
  }
}

void X12() {
  X12();
  X7();
}

void X13() {
  X8();
  X7();
}

void X14() {
  flip (79/250) {
    b = false;
    X18();
  }
  else {
    b = true;
    X14();
  }
}

void X15() {
  flip (37/100) {
    if (b) {
      X14();
    }
    else {
      X11();
    }
  }
}

void X16() {
  X16();
  X16();
}

void X17() {
  flip (331/1000) {
    b = true;
    X14();
  }
  else {
    b = true;
    X21();
  }
}

void X18() {
  X12();
  X16();
}

void X19() {
  flip (611/1000) {
    b = true;
    X24();
  }
  else {
    b = true;
    X18();
  }
}

void X20() {
  X25();
  X20();
}

void X21() {
  X16();
  X22();
}

void X22() {
  flip (711/1000) {
    b = false;
    X18();
  }
  else {
    b = true;
    X26();
  }
}

void X23() {
  flip (273/1000) {
    if (b) {
      X26();
    }
    else {
      X17();
    }
  }
}

void X24() {
  X19();
  X19();
}

void X25() {
  flip (171/200) {
    if (a) {
      X20();
    }
    else {
      X23();
    }
  }
}

void X26() {
  X25();
  X20();
}

void X27() {
  X30();
  X22();
}

void X28() {
  flip (59/200) {
    b = false;
    X22();
  }
  else {
    b = true;
    X24();
  }
}

void X29() {
  X23();
  X28();
}

void X30() {
  flip (103/250) {
    a = false;
    X32();
  }
  else {
    a = true;
    X29();
  }
}

void X31() {
  flip (949/1000) {
    if (b) {
      X34();
    }
    else {
      X35();
    }
  }
}

void X32() {
  flip (239/500) {
    b = true;
    X28();
  }
  else {
    b = true;
    X35();
  }
}

void X33() {
  flip (104/125) {
    b = false;
    X27();
  }
  else {
    a = true;
    X31();
  }
}

void X34() {
  flip (811/1000) {
    if (a) {
      X31();
    }
    else {
      X34();
    }
  }
}

void X35() {
  flip (277/500) {
    a = true;
    X29();
  }
  else {
    a = false;
    X29();
  }
}

void X36() {
  flip (29/100) {
    if (b) {
      X36();
    }
    else {
      X33();
    }
  }
}

void X37() {
  flip (94/125) {
    if (b) {
      X40();
    }
    else {
      X36();
    }
  }
}

void X38() {
  X39();
  X42();
}

void X39() {
  X38();
  X39();
}

void X40() {
  X36();
  X42();
}

void X41() {
  flip (61/500) {
    a = true;
    X43();
  }
  else {
    a = true;
    X45();
  }
}

void X42() {
  flip (123/200) {
    a = false;
    X39();
  }
  else {
    a = true;
    X38();
  }
}

void X43() {
  flip (91/125) {
    if (a) {
      X42();
    }
    else {
      X45();
    }
  }
}

void X44() {
  flip (111/200) {
    if (b) {
      X45();
    }
    else {
      X38();
    }
  }
}

void X45() {
  X45();
  X50();
}

void X46() {
  flip (39/50) {
    b = true;
    X43();
  }
  else {
    a = false;
    X51();
  }
}

void X47() {
  flip (681/1000) {
    b = false;
    X51();
  }
  else {
    a = true;
    X48();
  }
}

void X48() {
  flip (127/200) {
    a = true;
    X50();
  }
  else {
    a = true;
    X50();
  }
}

void X49() {
  flip (217/500) {
    a = false;
    X45();
  }
  else {
    a = true;
    X54();
  }
}

void X50() {
  flip (107/200) {
    b = true;
    X50();
  }
  else {
    a = true;
    X46();
  }
}

void X51() {
  flip (19/40) {
    b = false;
    X51();
  }
  else {
    a = true;
    X52();
  }
}

void X52() {
  flip (827/1000) {
    a = true;
    X47();
  }
  else {
    b = false;
    X50();
  }
}

void X53() {
  flip (71/1000) {
    if (a) {
      X55();
    }
    else {
      X58();
    }
  }
}

void X54() {
  X57();
  X48();
}

void X55() {
  flip (223/500) {
    a = true;
    X59();
  }
  else {
    b = true;
    X60();
  }
}

void X56() {
  flip (83/250) {
    if (a) {
      X60();
    }
    else {
      X59();
    }
  }
}

void X57() {
  flip (481/500) {
    if (b) {
      X52();
    }
    else {
      X53();
    }
  }
}

void X58() {
  X52();
  X62();
}

void X59() {
  flip (211/1000) {
    if (a) {
      X53();
    }
    else {
      X57();
    }
  }
}

void X60() {
  X65();
  X57();
}

void X61() {
  flip (867/1000) {
    b = false;
    X58();
  }
  else {
    a = true;
    X59();
  }
}

void X62() {
  flip (87/250) {
    if (b) {
      X58();
    }
    else {
      X57();
    }
  }
}

void X63() {
  flip (81/1000) {
    if (a) {
      X65();
    }
    else {
      X66();
    }
  }
}

void X64() {
  flip (9/10) {
    if (a) {
      X65();
    }
    else {
      X67();
    }
  }
}

void X65() {
  flip (249/250) {
    b = true;
    X61();
  }
  else {
    a = false;
    X63();
  }
}

void X66() {
  flip (17/40) {
    b = true;
    X63();
  }
  else {
    a = true;
    X69();
  }
}

void X67() {
  flip (49/125) {
    if (a) {
      X67();
    }
    else {
      X62();
    }
  }
}

void X68() {
  flip (391/1000) {
    a = false;
    X67();
  }
  else {
    b = false;
    X70();
  }
}

void X69() {
  flip (114/125) {
    a = false;
    X72();
  }
  else {
    b = true;
    X74();
  }
}

void X70() {
  flip (617/1000) {
    a = false;
    X75();
  }
  else {
    b = true;
    X70();
  }
}

void X71() {
  flip (901/1000) {
    if (a) {
      X65();
    }
    else {
      X74();
    }
  }
}

void X72() {
  flip (151/500) {
    b = false;
    X76();
  }
  else {
    a = true;
    X66();
  }
}

void X73() {
  flip (87/200) {
    if (a) {
      X69();
    }
    else {
      X72();
    }
  }
}

void X74() {
  flip (53/125) {
    b = false;
    X77();
  }
  else {
    b = true;
    X72();
  }
}

void X75() {
  X73();
  X78();
}

void X76() {
  X75();
  X79();
}

void X77() {
  X76();
  X74();
}

void X78() {
  flip (327/1000) {
    if (b) {
      X73();
    }
    else {
      X75();
    }
  }
}

void X79() {
  X78();
  X76();
}

void X80() {
  X84();
  X82();
}

void X81() {
  flip (213/500) {
    if (a) {
      X75();
    }
    else {
      X85();
    }
  }
}

void X82() {
  flip (687/1000) {
    a = true;
    X87();
  }
  else {
    a = false;
    X85();
  }
}

void X83() {
  flip (697/1000) {
    b = false;
    X82();
  }
  else {
    b = true;
    X78();
  }
}

void X84() {
  flip (51/250) {
    b = true;
    X84();
  }
  else {
    a = false;
    X84();
  }
}

void X85() {
  flip (879/1000) {
    b = true;
    X82();
  }
  else {
    a = true;
    X81();
  }
}

void X86() {
  flip (103/250) {
    if (b) {
      X80();
    }
    else {
      X90();
    }
  }
}

void X87() {
  X86();
  X88();
}

void X88() {
  flip (487/1000) {
    a = true;
    X83();
  }
  else {
    a = true;
    X89();
  }
}

void X89() {
  X94();
  X85();
}

void X90() {
  X94();
  X89();
}

void X91() {
  flip (67/125) {
    b = false;
    X85();
  }
  else {
    a = false;
    X92();
  }
}

void X92() {
  flip (237/250) {
    if (b) {
      X87();
    }
    else {
      X93();
    }
  }
}

void X93() {
  flip (211/500) {
    if (a) {
      X93();
    }
    else {
      X94();
    }
  }
}

void X94() {
  flip (413/500) {
    if (b) {
      X98();
    }
    else {
      X95();
    }
  }
}

void X95() {
  flip (19/20) {
    if (a) {
      X97();
    }
    else {
      X96();
    }
  }
}

void X96() {
  flip (249/250) {
    b = true;
    X0();
  }
  else {
    b = false;
    X0();
  }
}

void X97() {
  X97();
  X98();
}

void X98() {
  X96();
  X97();
}

void X99() {
  flip (1/20) {
    b = false;
    X1();
  }
  else {
    b = false;
    X1();
  }
}
