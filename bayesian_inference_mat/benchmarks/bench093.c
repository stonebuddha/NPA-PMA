bool a;
bool b;

void X0() {
  flip (657/1000) {
    b = false;
    X2();
  }
  else {
    a = true;
    X0();
  }
}

void X1() {
  flip (269/500) {
    if (a) {
      X0();
    }
    else {
      X2();
    }
  }
}

void X2() {
  flip (31/50) {
    if (b) {
      X6();
    }
    else {
      X2();
    }
  }
}

void X3() {
  X7();
  X3();
}

void X4() {
  flip (71/250) {
    b = true;
    X9();
  }
  else {
    b = false;
    X0();
  }
}

void X5() {
  flip (177/500) {
    if (b) {
      X10();
    }
    else {
      X0();
    }
  }
}

void X6() {
  flip (611/1000) {
    b = false;
    X9();
  }
  else {
    a = true;
    X9();
  }
}

void X7() {
  X2();
  X1();
}

void X8() {
  flip (21/40) {
    if (b) {
      X5();
    }
    else {
      X4();
    }
  }
}

void X9() {
  X5();
  X11();
}

void X10() {
  flip (91/100) {
    if (b) {
      X14();
    }
    else {
      X4();
    }
  }
}

void X11() {
  flip (93/500) {
    if (a) {
      X12();
    }
    else {
      X11();
    }
  }
}

void X12() {
  X7();
  X14();
}

void X13() {
  flip (7/8) {
    if (b) {
      X18();
    }
    else {
      X10();
    }
  }
}

void X14() {
  flip (147/200) {
    if (a) {
      X19();
    }
    else {
      X18();
    }
  }
}

void X15() {
  flip (391/1000) {
    if (a) {
      X17();
    }
    else {
      X13();
    }
  }
}

void X16() {
  flip (49/250) {
    if (a) {
      X18();
    }
    else {
      X18();
    }
  }
}

void X17() {
  flip (9/10) {
    a = true;
    X20();
  }
  else {
    b = true;
    X15();
  }
}

void X18() {
  flip (47/100) {
    a = false;
    X15();
  }
  else {
    a = false;
    X16();
  }
}

void X19() {
  X15();
  X13();
}

void X20() {
  flip (897/1000) {
    if (b) {
      X22();
    }
    else {
      X24();
    }
  }
}

void X21() {
  X24();
  X22();
}

void X22() {
  flip (471/500) {
    if (a) {
      X25();
    }
    else {
      X22();
    }
  }
}

void X23() {
  flip (409/1000) {
    a = true;
    X28();
  }
  else {
    a = true;
    X26();
  }
}

void X24() {
  X27();
  X24();
}

void X25() {
  flip (131/500) {
    if (b) {
      X23();
    }
    else {
      X22();
    }
  }
}

void X26() {
  flip (117/500) {
    a = true;
    X20();
  }
  else {
    b = true;
    X28();
  }
}

void X27() {
  flip (29/250) {
    a = true;
    X32();
  }
  else {
    a = false;
    X27();
  }
}

void X28() {
  flip (143/250) {
    a = true;
    X25();
  }
  else {
    a = true;
    X32();
  }
}

void X29() {
  flip (122/125) {
    b = true;
    X30();
  }
  else {
    b = false;
    X23();
  }
}

void X30() {
  flip (327/1000) {
    a = false;
    X33();
  }
  else {
    b = true;
    X33();
  }
}

void X31() {
  X32();
  X36();
}

void X32() {
  flip (751/1000) {
    a = false;
    X31();
  }
  else {
    a = false;
    X35();
  }
}

void X33() {
  flip (39/100) {
    if (a) {
      X29();
    }
    else {
      X28();
    }
  }
}

void X34() {
  flip (163/1000) {
    if (a) {
      X38();
    }
    else {
      X33();
    }
  }
}

void X35() {
  flip (729/1000) {
    b = true;
    X39();
  }
  else {
    b = true;
    X35();
  }
}

void X36() {
  flip (569/1000) {
    a = false;
    X34();
  }
  else {
    b = false;
    X30();
  }
}

void X37() {
  X34();
  X40();
}

void X38() {
  flip (247/1000) {
    if (b) {
      X32();
    }
    else {
      X41();
    }
  }
}

void X39() {
  flip (59/100) {
    a = false;
    X38();
  }
  else {
    b = false;
    X33();
  }
}

void X40() {
  X41();
  X36();
}

void X41() {
  flip (889/1000) {
    if (b) {
      X44();
    }
    else {
      X45();
    }
  }
}

void X42() {
  flip (9/25) {
    a = false;
    X40();
  }
  else {
    a = true;
    X42();
  }
}

void X43() {
  flip (179/200) {
    a = true;
    X47();
  }
  else {
    a = true;
    X42();
  }
}

void X44() {
  flip (121/250) {
    a = false;
    X38();
  }
  else {
    b = false;
    X38();
  }
}

void X45() {
  flip (439/1000) {
    if (b) {
      X43();
    }
    else {
      X46();
    }
  }
}

void X46() {
  flip (69/100) {
    if (b) {
      X44();
    }
    else {
      X40();
    }
  }
}

void X47() {
  flip (3/20) {
    b = false;
    X50();
  }
  else {
    a = false;
    X50();
  }
}

void X48() {
  flip (51/125) {
    if (a) {
      X49();
    }
    else {
      X44();
    }
  }
}

void X49() {
  X48();
  X50();
}

void X50() {
  flip (347/1000) {
    b = true;
    X50();
  }
  else {
    b = true;
    X53();
  }
}

void X51() {
  flip (209/500) {
    a = true;
    X52();
  }
  else {
    b = false;
    X51();
  }
}

void X52() {
  flip (951/1000) {
    a = true;
    X57();
  }
  else {
    b = false;
    X52();
  }
}

void X53() {
  X58();
  X58();
}

void X54() {
  flip (129/200) {
    b = false;
    X49();
  }
  else {
    a = true;
    X57();
  }
}

void X55() {
  flip (13/100) {
    b = true;
    X50();
  }
  else {
    b = false;
    X53();
  }
}

void X56() {
  flip (903/1000) {
    a = false;
    X50();
  }
  else {
    b = true;
    X52();
  }
}

void X57() {
  flip (423/500) {
    a = false;
    X57();
  }
  else {
    a = false;
    X60();
  }
}

void X58() {
  flip (31/50) {
    if (b) {
      X56();
    }
    else {
      X58();
    }
  }
}

void X59() {
  X59();
  X55();
}

void X60() {
  flip (349/500) {
    b = false;
    X58();
  }
  else {
    b = false;
    X57();
  }
}

void X61() {
  X56();
  X58();
}

void X62() {
  flip (679/1000) {
    b = true;
    X59();
  }
  else {
    a = true;
    X60();
  }
}

void X63() {
  flip (71/250) {
    a = true;
    X64();
  }
  else {
    a = true;
    X63();
  }
}

void X64() {
  flip (41/125) {
    if (b) {
      X66();
    }
    else {
      X68();
    }
  }
}

void X65() {
  flip (43/1000) {
    b = true;
    X61();
  }
  else {
    b = false;
    X61();
  }
}

void X66() {
  flip (183/250) {
    b = true;
    X62();
  }
  else {
    b = true;
    X60();
  }
}

void X67() {
  flip (122/125) {
    a = false;
    X64();
  }
  else {
    b = true;
    X62();
  }
}

void X68() {
  flip (129/200) {
    b = true;
    X69();
  }
  else {
    b = false;
    X73();
  }
}

void X69() {
  flip (78/125) {
    a = false;
    X66();
  }
  else {
    b = true;
    X63();
  }
}

void X70() {
  flip (193/250) {
    b = true;
    X68();
  }
  else {
    b = false;
    X72();
  }
}

void X71() {
  X74();
  X71();
}

void X72() {
  X69();
  X71();
}

void X73() {
  flip (739/1000) {
    if (a) {
      X69();
    }
    else {
      X72();
    }
  }
}

void X74() {
  X73();
  X69();
}

void X75() {
  flip (39/50) {
    a = true;
    X77();
  }
  else {
    a = true;
    X69();
  }
}

void X76() {
  X80();
  X70();
}

void X77() {
  flip (279/1000) {
    if (b) {
      X76();
    }
    else {
      X80();
    }
  }
}

void X78() {
  X78();
  X77();
}

void X79() {
  flip (759/1000) {
    if (b) {
      X78();
    }
    else {
      X81();
    }
  }
}

void X80() {
  X84();
  X77();
}

void X81() {
  flip (13/250) {
    a = true;
    X77();
  }
  else {
    b = true;
    X83();
  }
}

void X82() {
  X85();
  X78();
}

void X83() {
  flip (173/500) {
    b = false;
    X78();
  }
  else {
    b = false;
    X78();
  }
}

void X84() {
  flip (127/500) {
    a = false;
    X84();
  }
  else {
    b = false;
    X83();
  }
}

void X85() {
  flip (17/40) {
    if (a) {
      X82();
    }
    else {
      X89();
    }
  }
}

void X86() {
  X87();
  X90();
}

void X87() {
  flip (489/1000) {
    a = true;
    X81();
  }
  else {
    b = true;
    X91();
  }
}

void X88() {
  flip (113/1000) {
    if (a) {
      X87();
    }
    else {
      X88();
    }
  }
}

void X89() {
  flip (229/1000) {
    b = false;
    X91();
  }
  else {
    b = false;
    X88();
  }
}

void X90() {
  flip (42/125) {
    b = false;
    X91();
  }
  else {
    b = false;
    X84();
  }
}

void X91() {
  X90();
  X87();
}

void X92() {
  flip (687/1000) {
    b = true;
    X86();
  }
  else {
    a = true;
    X95();
  }
}

void X93() {
  flip (11/100) {
    if (a) {
      X97();
    }
    else {
      X93();
    }
  }
}

void X94() {
  flip (169/200) {
    if (b) {
      X88();
    }
    else {
      X90();
    }
  }
}

void X95() {
  flip (253/500) {
    a = true;
    X94();
  }
  else {
    a = false;
    X99();
  }
}

void X96() {
  flip (903/1000) {
    a = true;
    X95();
  }
  else {
    b = false;
    X0();
  }
}

void X97() {
  flip (103/1000) {
    b = false;
    X99();
  }
  else {
    a = false;
    X1();
  }
}

void X98() {
  X99();
  X94();
}

void X99() {
  X94();
  X97();
}
