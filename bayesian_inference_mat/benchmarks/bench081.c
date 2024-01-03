bool a;
bool b;

void X0() {
  flip (93/125) {
    if (b) {
      X3();
    }
    else {
      X94();
    }
  }
}

void X1() {
  flip (291/1000) {
    if (a) {
      X4();
    }
    else {
      X98();
    }
  }
}

void X2() {
  X6();
  X97();
}

void X3() {
  flip (71/250) {
    if (a) {
      X8();
    }
    else {
      X98();
    }
  }
}

void X4() {
  X6();
  X3();
}

void X5() {
  flip (199/1000) {
    if (b) {
      X6();
    }
    else {
      X2();
    }
  }
}

void X6() {
  flip (139/250) {
    if (b) {
      X0();
    }
    else {
      X0();
    }
  }
}

void X7() {
  flip (187/200) {
    if (a) {
      X9();
    }
    else {
      X7();
    }
  }
}

void X8() {
  flip (461/500) {
    if (b) {
      X10();
    }
    else {
      X13();
    }
  }
}

void X9() {
  X4();
  X4();
}

void X10() {
  X10();
  X12();
}

void X11() {
  flip (116/125) {
    a = false;
    X9();
  }
  else {
    b = true;
    X13();
  }
}

void X12() {
  flip (411/500) {
    if (b) {
      X10();
    }
    else {
      X15();
    }
  }
}

void X13() {
  flip (53/125) {
    a = false;
    X16();
  }
  else {
    a = false;
    X18();
  }
}

void X14() {
  flip (469/500) {
    if (b) {
      X18();
    }
    else {
      X14();
    }
  }
}

void X15() {
  flip (649/1000) {
    a = true;
    X20();
  }
  else {
    a = true;
    X14();
  }
}

void X16() {
  flip (102/125) {
    a = false;
    X14();
  }
  else {
    a = true;
    X10();
  }
}

void X17() {
  flip (477/1000) {
    a = true;
    X20();
  }
  else {
    a = false;
    X15();
  }
}

void X18() {
  flip (173/250) {
    if (a) {
      X12();
    }
    else {
      X15();
    }
  }
}

void X19() {
  flip (287/1000) {
    if (a) {
      X23();
    }
    else {
      X22();
    }
  }
}

void X20() {
  flip (103/200) {
    if (a) {
      X24();
    }
    else {
      X17();
    }
  }
}

void X21() {
  X21();
  X19();
}

void X22() {
  flip (959/1000) {
    if (a) {
      X17();
    }
    else {
      X16();
    }
  }
}

void X23() {
  flip (92/125) {
    a = false;
    X24();
  }
  else {
    b = false;
    X22();
  }
}

void X24() {
  flip (67/500) {
    a = false;
    X18();
  }
  else {
    b = false;
    X19();
  }
}

void X25() {
  X29();
  X24();
}

void X26() {
  flip (999/1000) {
    a = true;
    X22();
  }
  else {
    b = true;
    X25();
  }
}

void X27() {
  flip (421/1000) {
    b = false;
    X25();
  }
  else {
    b = true;
    X26();
  }
}

void X28() {
  X23();
  X26();
}

void X29() {
  flip (77/1000) {
    if (a) {
      X23();
    }
    else {
      X31();
    }
  }
}

void X30() {
  flip (611/1000) {
    if (b) {
      X29();
    }
    else {
      X24();
    }
  }
}

void X31() {
  X27();
  X26();
}

void X32() {
  flip (191/250) {
    b = true;
    X27();
  }
  else {
    a = true;
    X32();
  }
}

void X33() {
  X37();
  X31();
}

void X34() {
  flip (211/250) {
    b = true;
    X35();
  }
  else {
    b = true;
    X28();
  }
}

void X35() {
  flip (1/500) {
    if (a) {
      X30();
    }
    else {
      X29();
    }
  }
}

void X36() {
  flip (843/1000) {
    if (a) {
      X35();
    }
    else {
      X40();
    }
  }
}

void X37() {
  X40();
  X38();
}

void X38() {
  flip (787/1000) {
    if (b) {
      X33();
    }
    else {
      X34();
    }
  }
}

void X39() {
  flip (41/100) {
    if (a) {
      X40();
    }
    else {
      X44();
    }
  }
}

void X40() {
  flip (28/125) {
    if (b) {
      X41();
    }
    else {
      X43();
    }
  }
}

void X41() {
  flip (631/1000) {
    if (b) {
      X46();
    }
    else {
      X46();
    }
  }
}

void X42() {
  flip (989/1000) {
    a = false;
    X42();
  }
  else {
    b = false;
    X42();
  }
}

void X43() {
  flip (87/1000) {
    if (b) {
      X41();
    }
    else {
      X45();
    }
  }
}

void X44() {
  X47();
  X44();
}

void X45() {
  flip (431/500) {
    if (b) {
      X44();
    }
    else {
      X46();
    }
  }
}

void X46() {
  flip (31/1000) {
    if (a) {
      X48();
    }
    else {
      X42();
    }
  }
}

void X47() {
  X50();
  X52();
}

void X48() {
  X47();
  X51();
}

void X49() {
  flip (393/1000) {
    if (a) {
      X51();
    }
    else {
      X52();
    }
  }
}

void X50() {
  flip (133/250) {
    b = true;
    X54();
  }
  else {
    a = true;
    X52();
  }
}

void X51() {
  flip (117/500) {
    a = false;
    X54();
  }
  else {
    b = true;
    X46();
  }
}

void X52() {
  X56();
  X50();
}

void X53() {
  X54();
  X52();
}

void X54() {
  X54();
  X55();
}

void X55() {
  flip (29/125) {
    if (b) {
      X56();
    }
    else {
      X50();
    }
  }
}

void X56() {
  flip (149/200) {
    a = false;
    X56();
  }
  else {
    b = false;
    X61();
  }
}

void X57() {
  flip (989/1000) {
    if (a) {
      X61();
    }
    else {
      X59();
    }
  }
}

void X58() {
  flip (79/100) {
    a = false;
    X53();
  }
  else {
    b = true;
    X56();
  }
}

void X59() {
  X60();
  X58();
}

void X60() {
  flip (83/200) {
    if (b) {
      X60();
    }
    else {
      X61();
    }
  }
}

void X61() {
  X64();
  X63();
}

void X62() {
  flip (99/250) {
    if (a) {
      X65();
    }
    else {
      X57();
    }
  }
}

void X63() {
  X59();
  X62();
}

void X64() {
  flip (62/125) {
    b = true;
    X67();
  }
  else {
    a = false;
    X59();
  }
}

void X65() {
  flip (151/500) {
    b = true;
    X70();
  }
  else {
    a = false;
    X67();
  }
}

void X66() {
  X64();
  X69();
}

void X67() {
  flip (1/20) {
    if (a) {
      X72();
    }
    else {
      X61();
    }
  }
}

void X68() {
  flip (1/10) {
    if (a) {
      X73();
    }
    else {
      X68();
    }
  }
}

void X69() {
  flip (283/1000) {
    a = true;
    X65();
  }
  else {
    b = true;
    X74();
  }
}

void X70() {
  flip (43/50) {
    if (a) {
      X75();
    }
    else {
      X71();
    }
  }
}

void X71() {
  flip (281/1000) {
    if (b) {
      X71();
    }
    else {
      X75();
    }
  }
}

void X72() {
  flip (303/1000) {
    if (b) {
      X75();
    }
    else {
      X72();
    }
  }
}

void X73() {
  X68();
  X72();
}

void X74() {
  X74();
  X78();
}

void X75() {
  X72();
  X71();
}

void X76() {
  flip (62/125) {
    a = false;
    X76();
  }
  else {
    a = true;
    X70();
  }
}

void X77() {
  flip (623/1000) {
    if (b) {
      X77();
    }
    else {
      X78();
    }
  }
}

void X78() {
  flip (181/250) {
    if (a) {
      X74();
    }
    else {
      X83();
    }
  }
}

void X79() {
  flip (139/200) {
    b = true;
    X76();
  }
  else {
    b = false;
    X81();
  }
}

void X80() {
  flip (31/125) {
    b = false;
    X77();
  }
  else {
    b = false;
    X76();
  }
}

void X81() {
  X84();
  X84();
}

void X82() {
  X87();
  X78();
}

void X83() {
  flip (109/250) {
    b = true;
    X85();
  }
  else {
    a = false;
    X84();
  }
}

void X84() {
  X80();
  X79();
}

void X85() {
  flip (31/100) {
    if (a) {
      X85();
    }
    else {
      X88();
    }
  }
}

void X86() {
  flip (583/1000) {
    if (a) {
      X91();
    }
    else {
      X84();
    }
  }
}

void X87() {
  X89();
  X83();
}

void X88() {
  flip (69/1000) {
    if (b) {
      X92();
    }
    else {
      X89();
    }
  }
}

void X89() {
  flip (377/500) {
    if (b) {
      X86();
    }
    else {
      X90();
    }
  }
}

void X90() {
  X92();
  X84();
}

void X91() {
  flip (293/500) {
    b = false;
    X90();
  }
  else {
    a = false;
    X85();
  }
}

void X92() {
  flip (23/100) {
    b = true;
    X92();
  }
  else {
    a = true;
    X96();
  }
}

void X93() {
  flip (273/500) {
    if (a) {
      X94();
    }
    else {
      X95();
    }
  }
}

void X94() {
  flip (509/1000) {
    a = false;
    X98();
  }
  else {
    b = true;
    X97();
  }
}

void X95() {
  X92();
  X95();
}

void X96() {
  flip (41/100) {
    a = true;
    X0();
  }
  else {
    a = true;
    X97();
  }
}

void X97() {
  flip (19/125) {
    if (b) {
      X91();
    }
    else {
      X95();
    }
  }
}

void X98() {
  X97();
  X95();
}

void X99() {
  flip (7/200) {
    if (b) {
      X1();
    }
    else {
      X93();
    }
  }
}
