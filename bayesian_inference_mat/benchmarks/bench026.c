bool a;
bool b;

void X0() {
  X96();
  X2();
}

void X1() {
  flip (139/250) {
    a = true;
    X96();
  }
  else {
    b = false;
    X5();
  }
}

void X2() {
  flip (131/1000) {
    if (a) {
      X6();
    }
    else {
      X98();
    }
  }
}

void X3() {
  X3();
  X7();
}

void X4() {
  flip (131/500) {
    a = true;
    X4();
  }
  else {
    a = true;
    X1();
  }
}

void X5() {
  flip (23/250) {
    if (b) {
      X9();
    }
    else {
      X5();
    }
  }
}

void X6() {
  X8();
  X10();
}

void X7() {
  flip (663/1000) {
    a = false;
    X10();
  }
  else {
    a = false;
    X6();
  }
}

void X8() {
  flip (543/1000) {
    if (b) {
      X2();
    }
    else {
      X4();
    }
  }
}

void X9() {
  flip (271/500) {
    if (b) {
      X5();
    }
    else {
      X13();
    }
  }
}

void X10() {
  X12();
  X5();
}

void X11() {
  flip (279/1000) {
    if (b) {
      X10();
    }
    else {
      X6();
    }
  }
}

void X12() {
  flip (889/1000) {
    a = false;
    X13();
  }
  else {
    a = false;
    X17();
  }
}

void X13() {
  flip (923/1000) {
    if (b) {
      X8();
    }
    else {
      X8();
    }
  }
}

void X14() {
  X17();
  X15();
}

void X15() {
  X20();
  X19();
}

void X16() {
  flip (163/1000) {
    b = true;
    X14();
  }
  else {
    a = false;
    X16();
  }
}

void X17() {
  flip (183/1000) {
    if (b) {
      X16();
    }
    else {
      X15();
    }
  }
}

void X18() {
  flip (79/250) {
    a = false;
    X17();
  }
  else {
    b = false;
    X21();
  }
}

void X19() {
  flip (849/1000) {
    b = true;
    X22();
  }
  else {
    a = true;
    X19();
  }
}

void X20() {
  X20();
  X22();
}

void X21() {
  X19();
  X18();
}

void X22() {
  X27();
  X19();
}

void X23() {
  flip (181/250) {
    if (b) {
      X17();
    }
    else {
      X28();
    }
  }
}

void X24() {
  X27();
  X18();
}

void X25() {
  flip (3/8) {
    b = false;
    X20();
  }
  else {
    b = true;
    X23();
  }
}

void X26() {
  X30();
  X21();
}

void X27() {
  flip (5/8) {
    a = true;
    X28();
  }
  else {
    a = false;
    X30();
  }
}

void X28() {
  flip (3/200) {
    if (a) {
      X25();
    }
    else {
      X22();
    }
  }
}

void X29() {
  X33();
  X27();
}

void X30() {
  flip (137/1000) {
    if (a) {
      X34();
    }
    else {
      X33();
    }
  }
}

void X31() {
  flip (791/1000) {
    b = false;
    X26();
  }
  else {
    a = false;
    X32();
  }
}

void X32() {
  flip (567/1000) {
    if (b) {
      X36();
    }
    else {
      X27();
    }
  }
}

void X33() {
  X35();
  X30();
}

void X34() {
  flip (78/125) {
    b = false;
    X30();
  }
  else {
    b = false;
    X30();
  }
}

void X35() {
  X31();
  X35();
}

void X36() {
  flip (187/250) {
    a = true;
    X34();
  }
  else {
    a = true;
    X34();
  }
}

void X37() {
  X32();
  X32();
}

void X38() {
  flip (103/1000) {
    a = true;
    X37();
  }
  else {
    a = true;
    X39();
  }
}

void X39() {
  flip (13/20) {
    if (b) {
      X36();
    }
    else {
      X44();
    }
  }
}

void X40() {
  flip (907/1000) {
    if (b) {
      X39();
    }
    else {
      X35();
    }
  }
}

void X41() {
  flip (43/250) {
    if (b) {
      X43();
    }
    else {
      X46();
    }
  }
}

void X42() {
  flip (567/1000) {
    if (b) {
      X41();
    }
    else {
      X47();
    }
  }
}

void X43() {
  flip (23/500) {
    if (a) {
      X41();
    }
    else {
      X45();
    }
  }
}

void X44() {
  flip (897/1000) {
    a = true;
    X46();
  }
  else {
    b = false;
    X49();
  }
}

void X45() {
  flip (183/1000) {
    if (b) {
      X42();
    }
    else {
      X39();
    }
  }
}

void X46() {
  flip (87/200) {
    if (b) {
      X47();
    }
    else {
      X50();
    }
  }
}

void X47() {
  flip (56/125) {
    b = true;
    X49();
  }
  else {
    a = true;
    X50();
  }
}

void X48() {
  flip (63/100) {
    if (a) {
      X47();
    }
    else {
      X43();
    }
  }
}

void X49() {
  X53();
  X43();
}

void X50() {
  flip (13/250) {
    a = true;
    X49();
  }
  else {
    a = true;
    X50();
  }
}

void X51() {
  flip (197/1000) {
    if (a) {
      X47();
    }
    else {
      X46();
    }
  }
}

void X52() {
  X46();
  X47();
}

void X53() {
  flip (33/500) {
    if (b) {
      X52();
    }
    else {
      X47();
    }
  }
}

void X54() {
  X52();
  X59();
}

void X55() {
  flip (209/250) {
    if (b) {
      X52();
    }
    else {
      X58();
    }
  }
}

void X56() {
  flip (553/1000) {
    if (b) {
      X50();
    }
    else {
      X54();
    }
  }
}

void X57() {
  flip (371/500) {
    if (a) {
      X53();
    }
    else {
      X54();
    }
  }
}

void X58() {
  flip (94/125) {
    a = true;
    X61();
  }
  else {
    b = false;
    X56();
  }
}

void X59() {
  flip (511/1000) {
    if (b) {
      X61();
    }
    else {
      X59();
    }
  }
}

void X60() {
  flip (59/100) {
    a = false;
    X58();
  }
  else {
    b = true;
    X57();
  }
}

void X61() {
  flip (99/1000) {
    if (a) {
      X65();
    }
    else {
      X62();
    }
  }
}

void X62() {
  X57();
  X58();
}

void X63() {
  X67();
  X68();
}

void X64() {
  flip (553/1000) {
    if (a) {
      X63();
    }
    else {
      X59();
    }
  }
}

void X65() {
  flip (451/500) {
    b = false;
    X60();
  }
  else {
    b = true;
    X66();
  }
}

void X66() {
  X69();
  X63();
}

void X67() {
  X61();
  X65();
}

void X68() {
  X72();
  X63();
}

void X69() {
  flip (373/1000) {
    a = true;
    X70();
  }
  else {
    a = true;
    X70();
  }
}

void X70() {
  X69();
  X70();
}

void X71() {
  flip (921/1000) {
    a = true;
    X67();
  }
  else {
    b = true;
    X68();
  }
}

void X72() {
  flip (213/250) {
    a = true;
    X72();
  }
  else {
    a = true;
    X77();
  }
}

void X73() {
  flip (89/1000) {
    b = true;
    X74();
  }
  else {
    a = false;
    X77();
  }
}

void X74() {
  flip (369/500) {
    b = false;
    X73();
  }
  else {
    a = false;
    X71();
  }
}

void X75() {
  X74();
  X76();
}

void X76() {
  flip (207/1000) {
    if (b) {
      X72();
    }
    else {
      X77();
    }
  }
}

void X77() {
  flip (241/1000) {
    a = true;
    X77();
  }
  else {
    a = true;
    X82();
  }
}

void X78() {
  flip (71/125) {
    b = false;
    X82();
  }
  else {
    b = true;
    X74();
  }
}

void X79() {
  flip (219/250) {
    if (b) {
      X76();
    }
    else {
      X74();
    }
  }
}

void X80() {
  X84();
  X79();
}

void X81() {
  flip (91/125) {
    b = true;
    X76();
  }
  else {
    a = true;
    X77();
  }
}

void X82() {
  flip (177/250) {
    if (a) {
      X84();
    }
    else {
      X87();
    }
  }
}

void X83() {
  flip (11/25) {
    if (b) {
      X78();
    }
    else {
      X78();
    }
  }
}

void X84() {
  flip (357/500) {
    a = true;
    X84();
  }
  else {
    b = false;
    X88();
  }
}

void X85() {
  X83();
  X86();
}

void X86() {
  X84();
  X88();
}

void X87() {
  flip (33/500) {
    if (a) {
      X88();
    }
    else {
      X92();
    }
  }
}

void X88() {
  X89();
  X82();
}

void X89() {
  flip (82/125) {
    a = true;
    X92();
  }
  else {
    b = true;
    X94();
  }
}

void X90() {
  flip (473/1000) {
    a = false;
    X86();
  }
  else {
    b = false;
    X90();
  }
}

void X91() {
  flip (167/250) {
    a = true;
    X89();
  }
  else {
    b = true;
    X89();
  }
}

void X92() {
  flip (991/1000) {
    if (a) {
      X87();
    }
    else {
      X87();
    }
  }
}

void X93() {
  flip (959/1000) {
    if (b) {
      X93();
    }
    else {
      X87();
    }
  }
}

void X94() {
  X92();
  X96();
}

void X95() {
  flip (499/500) {
    b = false;
    X94();
  }
  else {
    b = true;
    X89();
  }
}

void X96() {
  flip (663/1000) {
    if (b) {
      X99();
    }
    else {
      X99();
    }
  }
}

void X97() {
  X94();
  X92();
}

void X98() {
  X92();
  X96();
}

void X99() {
  X4();
  X98();
}
