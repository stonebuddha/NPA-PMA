bool a;
bool b;

void X0() {
  flip (163/1000) {
    b = false;
    X2();
  }
  else {
    b = false;
    X99();
  }
}

void X1() {
  X1();
  X0();
}

void X2() {
  flip (57/500) {
    if (b) {
      X2();
    }
    else {
      X4();
    }
  }
}

void X3() {
  X8();
  X97();
}

void X4() {
  flip (27/125) {
    b = true;
    X98();
  }
  else {
    a = true;
    X4();
  }
}

void X5() {
  X0();
  X99();
}

void X6() {
  X10();
  X8();
}

void X7() {
  flip (16/25) {
    if (b) {
      X3();
    }
    else {
      X7();
    }
  }
}

void X8() {
  flip (849/1000) {
    if (a) {
      X3();
    }
    else {
      X9();
    }
  }
}

void X9() {
  flip (57/200) {
    if (a) {
      X7();
    }
    else {
      X5();
    }
  }
}

void X10() {
  X12();
  X6();
}

void X11() {
  flip (53/1000) {
    if (a) {
      X15();
    }
    else {
      X11();
    }
  }
}

void X12() {
  flip (93/1000) {
    if (a) {
      X6();
    }
    else {
      X16();
    }
  }
}

void X13() {
  flip (183/500) {
    if (b) {
      X12();
    }
    else {
      X14();
    }
  }
}

void X14() {
  X19();
  X8();
}

void X15() {
  X10();
  X19();
}

void X16() {
  flip (303/500) {
    a = true;
    X11();
  }
  else {
    a = false;
    X13();
  }
}

void X17() {
  flip (367/500) {
    b = true;
    X16();
  }
  else {
    b = true;
    X22();
  }
}

void X18() {
  X14();
  X19();
}

void X19() {
  flip (551/1000) {
    b = false;
    X15();
  }
  else {
    a = true;
    X17();
  }
}

void X20() {
  flip (91/200) {
    if (b) {
      X21();
    }
    else {
      X22();
    }
  }
}

void X21() {
  X18();
  X21();
}

void X22() {
  flip (39/250) {
    a = false;
    X23();
  }
  else {
    a = false;
    X24();
  }
}

void X23() {
  X27();
  X27();
}

void X24() {
  X19();
  X19();
}

void X25() {
  flip (801/1000) {
    b = true;
    X19();
  }
  else {
    b = true;
    X29();
  }
}

void X26() {
  flip (1/25) {
    a = false;
    X23();
  }
  else {
    b = false;
    X29();
  }
}

void X27() {
  flip (293/1000) {
    a = true;
    X29();
  }
  else {
    b = false;
    X21();
  }
}

void X28() {
  flip (257/1000) {
    if (b) {
      X32();
    }
    else {
      X25();
    }
  }
}

void X29() {
  flip (47/500) {
    if (a) {
      X34();
    }
    else {
      X27();
    }
  }
}

void X30() {
  flip (79/200) {
    a = true;
    X27();
  }
  else {
    a = false;
    X25();
  }
}

void X31() {
  flip (751/1000) {
    b = false;
    X36();
  }
  else {
    a = true;
    X34();
  }
}

void X32() {
  X31();
  X32();
}

void X33() {
  X36();
  X28();
}

void X34() {
  flip (797/1000) {
    if (a) {
      X31();
    }
    else {
      X31();
    }
  }
}

void X35() {
  flip (16/125) {
    if (a) {
      X38();
    }
    else {
      X32();
    }
  }
}

void X36() {
  flip (7/1000) {
    if (a) {
      X41();
    }
    else {
      X31();
    }
  }
}

void X37() {
  flip (93/1000) {
    b = true;
    X35();
  }
  else {
    b = true;
    X41();
  }
}

void X38() {
  flip (359/1000) {
    a = true;
    X41();
  }
  else {
    a = false;
    X40();
  }
}

void X39() {
  flip (763/1000) {
    if (b) {
      X43();
    }
    else {
      X36();
    }
  }
}

void X40() {
  X39();
  X39();
}

void X41() {
  X46();
  X39();
}

void X42() {
  flip (111/1000) {
    b = true;
    X39();
  }
  else {
    b = true;
    X40();
  }
}

void X43() {
  flip (171/200) {
    if (b) {
      X43();
    }
    else {
      X40();
    }
  }
}

void X44() {
  flip (137/200) {
    if (a) {
      X42();
    }
    else {
      X42();
    }
  }
}

void X45() {
  flip (277/1000) {
    a = false;
    X40();
  }
  else {
    b = true;
    X40();
  }
}

void X46() {
  flip (811/1000) {
    if (a) {
      X48();
    }
    else {
      X50();
    }
  }
}

void X47() {
  flip (303/1000) {
    if (a) {
      X50();
    }
    else {
      X52();
    }
  }
}

void X48() {
  X48();
  X53();
}

void X49() {
  X50();
  X49();
}

void X50() {
  X46();
  X53();
}

void X51() {
  flip (57/250) {
    if (a) {
      X50();
    }
    else {
      X45();
    }
  }
}

void X52() {
  X57();
  X50();
}

void X53() {
  flip (369/1000) {
    b = true;
    X49();
  }
  else {
    b = true;
    X49();
  }
}

void X54() {
  X48();
  X50();
}

void X55() {
  flip (669/1000) {
    if (a) {
      X58();
    }
    else {
      X57();
    }
  }
}

void X56() {
  flip (367/500) {
    a = false;
    X58();
  }
  else {
    a = true;
    X58();
  }
}

void X57() {
  flip (841/1000) {
    b = false;
    X54();
  }
  else {
    b = true;
    X55();
  }
}

void X58() {
  flip (151/250) {
    if (a) {
      X60();
    }
    else {
      X60();
    }
  }
}

void X59() {
  flip (21/25) {
    b = false;
    X55();
  }
  else {
    a = false;
    X61();
  }
}

void X60() {
  flip (143/250) {
    if (b) {
      X54();
    }
    else {
      X57();
    }
  }
}

void X61() {
  X56();
  X60();
}

void X62() {
  X61();
  X57();
}

void X63() {
  flip (199/200) {
    if (a) {
      X59();
    }
    else {
      X66();
    }
  }
}

void X64() {
  flip (283/1000) {
    if (b) {
      X64();
    }
    else {
      X66();
    }
  }
}

void X65() {
  flip (337/500) {
    if (a) {
      X64();
    }
    else {
      X61();
    }
  }
}

void X66() {
  X68();
  X64();
}

void X67() {
  flip (191/250) {
    if (a) {
      X64();
    }
    else {
      X71();
    }
  }
}

void X68() {
  X71();
  X70();
}

void X69() {
  flip (413/500) {
    a = true;
    X64();
  }
  else {
    a = false;
    X70();
  }
}

void X70() {
  flip (189/1000) {
    if (b) {
      X68();
    }
    else {
      X65();
    }
  }
}

void X71() {
  flip (73/500) {
    b = true;
    X71();
  }
  else {
    a = false;
    X66();
  }
}

void X72() {
  flip (3/500) {
    if (a) {
      X77();
    }
    else {
      X77();
    }
  }
}

void X73() {
  flip (13/100) {
    if (b) {
      X69();
    }
    else {
      X77();
    }
  }
}

void X74() {
  flip (107/250) {
    if (a) {
      X78();
    }
    else {
      X71();
    }
  }
}

void X75() {
  flip (7/20) {
    a = true;
    X71();
  }
  else {
    a = false;
    X72();
  }
}

void X76() {
  flip (143/250) {
    if (b) {
      X78();
    }
    else {
      X73();
    }
  }
}

void X77() {
  flip (191/1000) {
    if (a) {
      X74();
    }
    else {
      X79();
    }
  }
}

void X78() {
  flip (433/1000) {
    b = true;
    X82();
  }
  else {
    a = false;
    X78();
  }
}

void X79() {
  flip (231/1000) {
    if (a) {
      X81();
    }
    else {
      X78();
    }
  }
}

void X80() {
  flip (731/1000) {
    b = true;
    X83();
  }
  else {
    b = false;
    X78();
  }
}

void X81() {
  X78();
  X80();
}

void X82() {
  X83();
  X83();
}

void X83() {
  flip (257/500) {
    a = false;
    X77();
  }
  else {
    b = false;
    X82();
  }
}

void X84() {
  flip (381/500) {
    if (b) {
      X80();
    }
    else {
      X87();
    }
  }
}

void X85() {
  flip (79/125) {
    if (b) {
      X90();
    }
    else {
      X81();
    }
  }
}

void X86() {
  flip (913/1000) {
    if (b) {
      X86();
    }
    else {
      X90();
    }
  }
}

void X87() {
  flip (2/25) {
    if (a) {
      X83();
    }
    else {
      X92();
    }
  }
}

void X88() {
  flip (43/500) {
    a = false;
    X86();
  }
  else {
    a = false;
    X86();
  }
}

void X89() {
  flip (727/1000) {
    if (b) {
      X91();
    }
    else {
      X84();
    }
  }
}

void X90() {
  flip (831/1000) {
    b = false;
    X94();
  }
  else {
    a = true;
    X84();
  }
}

void X91() {
  X95();
  X92();
}

void X92() {
  flip (439/1000) {
    if (a) {
      X95();
    }
    else {
      X96();
    }
  }
}

void X93() {
  flip (117/1000) {
    b = true;
    X87();
  }
  else {
    b = true;
    X92();
  }
}

void X94() {
  flip (54/125) {
    a = false;
    X89();
  }
  else {
    a = true;
    X91();
  }
}

void X95() {
  X90();
  X89();
}

void X96() {
  flip (319/500) {
    if (b) {
      X90();
    }
    else {
      X1();
    }
  }
}

void X97() {
  flip (117/250) {
    a = true;
    X1();
  }
  else {
    b = false;
    X0();
  }
}

void X98() {
  flip (21/250) {
    a = false;
    X0();
  }
  else {
    a = true;
    X0();
  }
}

void X99() {
  flip (183/200) {
    if (b) {
      X4();
    }
    else {
      X95();
    }
  }
}
