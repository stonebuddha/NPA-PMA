bool a;
bool b;

void X0() {
  flip (94/125) {
    if (a) {
      X3();
    }
    else {
      X2();
    }
  }
}

void X1() {
  flip (567/1000) {
    a = false;
    X98();
  }
  else {
    a = false;
    X6();
  }
}

void X2() {
  X2();
  X98();
}

void X3() {
  X4();
  X98();
}

void X4() {
  flip (229/1000) {
    if (a) {
      X99();
    }
    else {
      X0();
    }
  }
}

void X5() {
  flip (859/1000) {
    a = false;
    X3();
  }
  else {
    a = false;
    X8();
  }
}

void X6() {
  X10();
  X6();
}

void X7() {
  X9();
  X11();
}

void X8() {
  flip (711/1000) {
    b = false;
    X11();
  }
  else {
    a = false;
    X10();
  }
}

void X9() {
  flip (16/25) {
    if (a) {
      X4();
    }
    else {
      X13();
    }
  }
}

void X10() {
  flip (17/1000) {
    b = false;
    X4();
  }
  else {
    a = false;
    X8();
  }
}

void X11() {
  flip (603/1000) {
    if (b) {
      X6();
    }
    else {
      X16();
    }
  }
}

void X12() {
  X16();
  X14();
}

void X13() {
  flip (259/500) {
    if (b) {
      X14();
    }
    else {
      X10();
    }
  }
}

void X14() {
  X11();
  X17();
}

void X15() {
  flip (41/50) {
    b = false;
    X14();
  }
  else {
    a = true;
    X16();
  }
}

void X16() {
  flip (739/1000) {
    if (b) {
      X10();
    }
    else {
      X16();
    }
  }
}

void X17() {
  flip (381/1000) {
    if (b) {
      X11();
    }
    else {
      X12();
    }
  }
}

void X18() {
  flip (869/1000) {
    if (b) {
      X17();
    }
    else {
      X18();
    }
  }
}

void X19() {
  flip (531/1000) {
    if (b) {
      X23();
    }
    else {
      X17();
    }
  }
}

void X20() {
  flip (167/200) {
    b = false;
    X21();
  }
  else {
    b = false;
    X15();
  }
}

void X21() {
  flip (87/100) {
    a = false;
    X26();
  }
  else {
    a = true;
    X17();
  }
}

void X22() {
  flip (29/1000) {
    if (b) {
      X25();
    }
    else {
      X26();
    }
  }
}

void X23() {
  flip (407/500) {
    b = false;
    X22();
  }
  else {
    b = false;
    X22();
  }
}

void X24() {
  flip (31/125) {
    a = false;
    X25();
  }
  else {
    b = true;
    X18();
  }
}

void X25() {
  flip (307/1000) {
    if (b) {
      X26();
    }
    else {
      X29();
    }
  }
}

void X26() {
  X25();
  X25();
}

void X27() {
  X30();
  X23();
}

void X28() {
  flip (51/125) {
    if (b) {
      X33();
    }
    else {
      X30();
    }
  }
}

void X29() {
  flip (373/500) {
    b = false;
    X27();
  }
  else {
    a = false;
    X24();
  }
}

void X30() {
  flip (327/500) {
    b = false;
    X35();
  }
  else {
    a = false;
    X25();
  }
}

void X31() {
  flip (116/125) {
    b = true;
    X34();
  }
  else {
    b = true;
    X26();
  }
}

void X32() {
  flip (97/125) {
    if (b) {
      X30();
    }
    else {
      X30();
    }
  }
}

void X33() {
  flip (787/1000) {
    a = false;
    X28();
  }
  else {
    a = false;
    X33();
  }
}

void X34() {
  flip (167/200) {
    a = true;
    X38();
  }
  else {
    b = false;
    X28();
  }
}

void X35() {
  flip (1/10) {
    b = false;
    X29();
  }
  else {
    a = true;
    X32();
  }
}

void X36() {
  X35();
  X37();
}

void X37() {
  flip (36/125) {
    b = true;
    X32();
  }
  else {
    a = true;
    X39();
  }
}

void X38() {
  flip (163/200) {
    a = true;
    X32();
  }
  else {
    b = false;
    X37();
  }
}

void X39() {
  X38();
  X43();
}

void X40() {
  flip (141/500) {
    if (a) {
      X35();
    }
    else {
      X44();
    }
  }
}

void X41() {
  flip (327/1000) {
    if (a) {
      X45();
    }
    else {
      X39();
    }
  }
}

void X42() {
  X43();
  X47();
}

void X43() {
  flip (321/1000) {
    b = true;
    X47();
  }
  else {
    b = true;
    X47();
  }
}

void X44() {
  flip (363/1000) {
    a = true;
    X39();
  }
  else {
    a = false;
    X42();
  }
}

void X45() {
  flip (367/1000) {
    if (b) {
      X41();
    }
    else {
      X42();
    }
  }
}

void X46() {
  flip (867/1000) {
    if (a) {
      X43();
    }
    else {
      X49();
    }
  }
}

void X47() {
  flip (311/500) {
    a = false;
    X44();
  }
  else {
    a = true;
    X46();
  }
}

void X48() {
  flip (389/500) {
    if (a) {
      X50();
    }
    else {
      X50();
    }
  }
}

void X49() {
  flip (427/1000) {
    if (b) {
      X48();
    }
    else {
      X53();
    }
  }
}

void X50() {
  flip (96/125) {
    b = true;
    X53();
  }
  else {
    a = true;
    X52();
  }
}

void X51() {
  flip (31/100) {
    if (a) {
      X52();
    }
    else {
      X46();
    }
  }
}

void X52() {
  X54();
  X50();
}

void X53() {
  flip (97/500) {
    b = true;
    X48();
  }
  else {
    a = true;
    X50();
  }
}

void X54() {
  X48();
  X56();
}

void X55() {
  flip (189/250) {
    a = true;
    X58();
  }
  else {
    a = false;
    X49();
  }
}

void X56() {
  flip (161/250) {
    b = false;
    X51();
  }
  else {
    a = true;
    X53();
  }
}

void X57() {
  X62();
  X51();
}

void X58() {
  flip (27/500) {
    b = false;
    X53();
  }
  else {
    a = false;
    X60();
  }
}

void X59() {
  flip (297/500) {
    if (b) {
      X64();
    }
    else {
      X56();
    }
  }
}

void X60() {
  flip (63/250) {
    if (a) {
      X61();
    }
    else {
      X62();
    }
  }
}

void X61() {
  X66();
  X59();
}

void X62() {
  flip (1/10) {
    a = false;
    X60();
  }
  else {
    a = true;
    X60();
  }
}

void X63() {
  X67();
  X64();
}

void X64() {
  X63();
  X64();
}

void X65() {
  X68();
  X67();
}

void X66() {
  X68();
  X60();
}

void X67() {
  X64();
  X66();
}

void X68() {
  X63();
  X69();
}

void X69() {
  flip (211/250) {
    b = false;
    X67();
  }
  else {
    b = false;
    X68();
  }
}

void X70() {
  X66();
  X75();
}

void X71() {
  flip (453/1000) {
    if (a) {
      X72();
    }
    else {
      X76();
    }
  }
}

void X72() {
  X73();
  X69();
}

void X73() {
  X74();
  X74();
}

void X74() {
  X70();
  X76();
}

void X75() {
  X70();
  X80();
}

void X76() {
  flip (83/125) {
    if (a) {
      X79();
    }
    else {
      X72();
    }
  }
}

void X77() {
  flip (241/250) {
    if (a) {
      X81();
    }
    else {
      X79();
    }
  }
}

void X78() {
  flip (331/500) {
    if (a) {
      X82();
    }
    else {
      X76();
    }
  }
}

void X79() {
  flip (197/200) {
    a = false;
    X77();
  }
  else {
    a = false;
    X83();
  }
}

void X80() {
  flip (41/250) {
    if (a) {
      X83();
    }
    else {
      X79();
    }
  }
}

void X81() {
  flip (171/250) {
    if (a) {
      X76();
    }
    else {
      X83();
    }
  }
}

void X82() {
  flip (39/50) {
    if (a) {
      X82();
    }
    else {
      X83();
    }
  }
}

void X83() {
  X83();
  X83();
}

void X84() {
  flip (47/200) {
    a = true;
    X82();
  }
  else {
    a = true;
    X78();
  }
}

void X85() {
  X90();
  X81();
}

void X86() {
  flip (29/250) {
    if (a) {
      X80();
    }
    else {
      X90();
    }
  }
}

void X87() {
  flip (191/500) {
    if (b) {
      X84();
    }
    else {
      X91();
    }
  }
}

void X88() {
  flip (109/500) {
    if (a) {
      X85();
    }
    else {
      X93();
    }
  }
}

void X89() {
  flip (939/1000) {
    if (a) {
      X91();
    }
    else {
      X91();
    }
  }
}

void X90() {
  flip (141/200) {
    if (b) {
      X94();
    }
    else {
      X93();
    }
  }
}

void X91() {
  flip (213/500) {
    b = true;
    X86();
  }
  else {
    a = false;
    X96();
  }
}

void X92() {
  flip (291/500) {
    if (a) {
      X92();
    }
    else {
      X90();
    }
  }
}

void X93() {
  flip (471/500) {
    a = false;
    X91();
  }
  else {
    b = true;
    X89();
  }
}

void X94() {
  flip (239/250) {
    if (a) {
      X93();
    }
    else {
      X93();
    }
  }
}

void X95() {
  flip (43/250) {
    b = false;
    X89();
  }
  else {
    b = true;
    X90();
  }
}

void X96() {
  flip (151/500) {
    b = false;
    X94();
  }
  else {
    b = true;
    X92();
  }
}

void X97() {
  flip (497/500) {
    b = false;
    X95();
  }
  else {
    a = false;
    X94();
  }
}

void X98() {
  X3();
  X93();
}

void X99() {
  X98();
  X93();
}
