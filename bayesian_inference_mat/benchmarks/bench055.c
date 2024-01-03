bool a;
bool b;

void X0() {
  X5();
  X94();
}

void X1() {
  flip (471/1000) {
    a = true;
    X98();
  }
  else {
    a = true;
    X1();
  }
}

void X2() {
  flip (263/500) {
    if (a) {
      X7();
    }
    else {
      X98();
    }
  }
}

void X3() {
  flip (3/5) {
    if (b) {
      X99();
    }
    else {
      X97();
    }
  }
}

void X4() {
  X3();
  X7();
}

void X5() {
  X5();
  X7();
}

void X6() {
  flip (33/40) {
    b = true;
    X5();
  }
  else {
    a = false;
    X6();
  }
}

void X7() {
  flip (321/500) {
    a = false;
    X7();
  }
  else {
    b = false;
    X8();
  }
}

void X8() {
  flip (43/250) {
    if (b) {
      X13();
    }
    else {
      X12();
    }
  }
}

void X9() {
  flip (347/1000) {
    if (b) {
      X14();
    }
    else {
      X12();
    }
  }
}

void X10() {
  flip (247/250) {
    a = false;
    X14();
  }
  else {
    b = false;
    X11();
  }
}

void X11() {
  flip (121/250) {
    a = true;
    X6();
  }
  else {
    b = true;
    X9();
  }
}

void X12() {
  flip (861/1000) {
    b = false;
    X13();
  }
  else {
    a = false;
    X16();
  }
}

void X13() {
  X15();
  X13();
}

void X14() {
  X10();
  X14();
}

void X15() {
  flip (257/1000) {
    a = true;
    X12();
  }
  else {
    a = false;
    X9();
  }
}

void X16() {
  flip (131/500) {
    b = true;
    X19();
  }
  else {
    b = true;
    X16();
  }
}

void X17() {
  X14();
  X22();
}

void X18() {
  X20();
  X16();
}

void X19() {
  flip (227/1000) {
    if (a) {
      X22();
    }
    else {
      X18();
    }
  }
}

void X20() {
  flip (1/125) {
    if (b) {
      X21();
    }
    else {
      X14();
    }
  }
}

void X21() {
  X21();
  X18();
}

void X22() {
  X17();
  X26();
}

void X23() {
  flip (17/20) {
    a = false;
    X23();
  }
  else {
    a = true;
    X21();
  }
}

void X24() {
  flip (173/1000) {
    if (a) {
      X25();
    }
    else {
      X22();
    }
  }
}

void X25() {
  flip (119/200) {
    a = true;
    X21();
  }
  else {
    a = true;
    X20();
  }
}

void X26() {
  flip (449/1000) {
    a = true;
    X29();
  }
  else {
    b = true;
    X22();
  }
}

void X27() {
  flip (241/500) {
    if (a) {
      X22();
    }
    else {
      X23();
    }
  }
}

void X28() {
  flip (719/1000) {
    if (a) {
      X29();
    }
    else {
      X33();
    }
  }
}

void X29() {
  flip (61/100) {
    if (b) {
      X31();
    }
    else {
      X33();
    }
  }
}

void X30() {
  flip (24/25) {
    a = true;
    X30();
  }
  else {
    b = true;
    X27();
  }
}

void X31() {
  flip (133/250) {
    b = true;
    X30();
  }
  else {
    b = false;
    X36();
  }
}

void X32() {
  flip (371/500) {
    if (a) {
      X35();
    }
    else {
      X29();
    }
  }
}

void X33() {
  X27();
  X30();
}

void X34() {
  X36();
  X32();
}

void X35() {
  flip (643/1000) {
    if (b) {
      X34();
    }
    else {
      X38();
    }
  }
}

void X36() {
  X40();
  X37();
}

void X37() {
  flip (909/1000) {
    if (a) {
      X39();
    }
    else {
      X37();
    }
  }
}

void X38() {
  flip (757/1000) {
    if (b) {
      X35();
    }
    else {
      X40();
    }
  }
}

void X39() {
  flip (43/100) {
    if (b) {
      X43();
    }
    else {
      X38();
    }
  }
}

void X40() {
  X37();
  X34();
}

void X41() {
  X46();
  X39();
}

void X42() {
  flip (399/500) {
    b = false;
    X41();
  }
  else {
    a = true;
    X41();
  }
}

void X43() {
  X43();
  X47();
}

void X44() {
  flip (239/1000) {
    a = false;
    X42();
  }
  else {
    a = false;
    X44();
  }
}

void X45() {
  X44();
  X48();
}

void X46() {
  flip (6/125) {
    b = true;
    X42();
  }
  else {
    a = true;
    X45();
  }
}

void X47() {
  flip (323/500) {
    if (b) {
      X47();
    }
    else {
      X52();
    }
  }
}

void X48() {
  X47();
  X51();
}

void X49() {
  flip (11/125) {
    b = false;
    X49();
  }
  else {
    a = false;
    X51();
  }
}

void X50() {
  flip (102/125) {
    if (b) {
      X51();
    }
    else {
      X49();
    }
  }
}

void X51() {
  flip (857/1000) {
    if (b) {
      X56();
    }
    else {
      X50();
    }
  }
}

void X52() {
  X56();
  X57();
}

void X53() {
  X52();
  X58();
}

void X54() {
  flip (471/500) {
    if (a) {
      X56();
    }
    else {
      X53();
    }
  }
}

void X55() {
  X52();
  X52();
}

void X56() {
  X55();
  X54();
}

void X57() {
  X58();
  X56();
}

void X58() {
  X56();
  X63();
}

void X59() {
  flip (403/1000) {
    b = true;
    X53();
  }
  else {
    a = true;
    X60();
  }
}

void X60() {
  flip (41/1000) {
    if (b) {
      X63();
    }
    else {
      X54();
    }
  }
}

void X61() {
  X59();
  X63();
}

void X62() {
  flip (411/500) {
    if (a) {
      X59();
    }
    else {
      X65();
    }
  }
}

void X63() {
  flip (49/200) {
    if (a) {
      X64();
    }
    else {
      X57();
    }
  }
}

void X64() {
  flip (257/500) {
    a = false;
    X64();
  }
  else {
    a = true;
    X66();
  }
}

void X65() {
  X65();
  X63();
}

void X66() {
  flip (3/8) {
    if (b) {
      X62();
    }
    else {
      X69();
    }
  }
}

void X67() {
  flip (31/125) {
    if (b) {
      X72();
    }
    else {
      X63();
    }
  }
}

void X68() {
  flip (917/1000) {
    if (b) {
      X62();
    }
    else {
      X72();
    }
  }
}

void X69() {
  X73();
  X70();
}

void X70() {
  flip (19/125) {
    b = false;
    X74();
  }
  else {
    b = false;
    X67();
  }
}

void X71() {
  flip (1/4) {
    b = true;
    X67();
  }
  else {
    a = false;
    X69();
  }
}

void X72() {
  X76();
  X69();
}

void X73() {
  flip (459/500) {
    a = false;
    X68();
  }
  else {
    a = true;
    X76();
  }
}

void X74() {
  X75();
  X70();
}

void X75() {
  flip (487/1000) {
    a = false;
    X76();
  }
  else {
    a = false;
    X80();
  }
}

void X76() {
  X76();
  X72();
}

void X77() {
  flip (563/1000) {
    if (a) {
      X71();
    }
    else {
      X80();
    }
  }
}

void X78() {
  flip (129/200) {
    if (b) {
      X74();
    }
    else {
      X80();
    }
  }
}

void X79() {
  flip (743/1000) {
    b = true;
    X78();
  }
  else {
    b = false;
    X84();
  }
}

void X80() {
  flip (191/200) {
    b = false;
    X76();
  }
  else {
    b = false;
    X78();
  }
}

void X81() {
  flip (237/250) {
    b = true;
    X75();
  }
  else {
    a = false;
    X86();
  }
}

void X82() {
  flip (191/250) {
    if (b) {
      X78();
    }
    else {
      X78();
    }
  }
}

void X83() {
  flip (907/1000) {
    a = false;
    X84();
  }
  else {
    a = false;
    X83();
  }
}

void X84() {
  flip (97/125) {
    if (a) {
      X83();
    }
    else {
      X82();
    }
  }
}

void X85() {
  flip (4/5) {
    if (a) {
      X89();
    }
    else {
      X90();
    }
  }
}

void X86() {
  flip (3/40) {
    a = true;
    X88();
  }
  else {
    a = true;
    X89();
  }
}

void X87() {
  flip (323/1000) {
    if (b) {
      X81();
    }
    else {
      X86();
    }
  }
}

void X88() {
  flip (127/500) {
    b = true;
    X88();
  }
  else {
    b = true;
    X88();
  }
}

void X89() {
  flip (293/500) {
    b = true;
    X87();
  }
  else {
    b = false;
    X94();
  }
}

void X90() {
  X85();
  X90();
}

void X91() {
  X91();
  X91();
}

void X92() {
  flip (41/500) {
    b = true;
    X97();
  }
  else {
    a = true;
    X88();
  }
}

void X93() {
  X88();
  X88();
}

void X94() {
  flip (841/1000) {
    a = true;
    X98();
  }
  else {
    b = false;
    X89();
  }
}

void X95() {
  flip (29/40) {
    b = true;
    X89();
  }
  else {
    b = false;
    X98();
  }
}

void X96() {
  flip (7/1000) {
    b = true;
    X99();
  }
  else {
    a = false;
    X0();
  }
}

void X97() {
  flip (653/1000) {
    if (a) {
      X2();
    }
    else {
      X0();
    }
  }
}

void X98() {
  flip (23/200) {
    if (a) {
      X0();
    }
    else {
      X94();
    }
  }
}

void X99() {
  flip (399/1000) {
    b = false;
    X0();
  }
  else {
    a = false;
    X99();
  }
}
