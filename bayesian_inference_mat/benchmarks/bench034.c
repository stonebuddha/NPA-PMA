bool a;
bool b;

void X0() {
  flip (161/250) {
    b = true;
    X99();
  }
  else {
    b = true;
    X5();
  }
}

void X1() {
  X3();
  X3();
}

void X2() {
  flip (887/1000) {
    a = false;
    X96();
  }
  else {
    b = false;
    X3();
  }
}

void X3() {
  flip (303/1000) {
    if (a) {
      X97();
    }
    else {
      X2();
    }
  }
}

void X4() {
  flip (23/500) {
    if (b) {
      X98();
    }
    else {
      X3();
    }
  }
}

void X5() {
  flip (259/500) {
    b = false;
    X3();
  }
  else {
    a = false;
    X99();
  }
}

void X6() {
  X11();
  X1();
}

void X7() {
  flip (111/125) {
    b = true;
    X12();
  }
  else {
    a = true;
    X2();
  }
}

void X8() {
  flip (741/1000) {
    if (b) {
      X9();
    }
    else {
      X6();
    }
  }
}

void X9() {
  flip (193/200) {
    a = false;
    X6();
  }
  else {
    b = false;
    X10();
  }
}

void X10() {
  flip (121/500) {
    if (a) {
      X7();
    }
    else {
      X12();
    }
  }
}

void X11() {
  flip (23/200) {
    b = false;
    X10();
  }
  else {
    a = false;
    X10();
  }
}

void X12() {
  X15();
  X8();
}

void X13() {
  flip (513/1000) {
    b = false;
    X17();
  }
  else {
    b = false;
    X13();
  }
}

void X14() {
  flip (87/125) {
    if (a) {
      X19();
    }
    else {
      X12();
    }
  }
}

void X15() {
  flip (947/1000) {
    if (b) {
      X19();
    }
    else {
      X15();
    }
  }
}

void X16() {
  X19();
  X10();
}

void X17() {
  X14();
  X22();
}

void X18() {
  flip (17/200) {
    b = false;
    X12();
  }
  else {
    b = true;
    X16();
  }
}

void X19() {
  flip (429/500) {
    if (b) {
      X23();
    }
    else {
      X21();
    }
  }
}

void X20() {
  flip (951/1000) {
    a = true;
    X16();
  }
  else {
    a = true;
    X15();
  }
}

void X21() {
  flip (217/1000) {
    if (a) {
      X24();
    }
    else {
      X16();
    }
  }
}

void X22() {
  flip (173/500) {
    if (a) {
      X17();
    }
    else {
      X18();
    }
  }
}

void X23() {
  flip (903/1000) {
    if (b) {
      X20();
    }
    else {
      X19();
    }
  }
}

void X24() {
  flip (79/500) {
    a = true;
    X27();
  }
  else {
    a = false;
    X26();
  }
}

void X25() {
  X28();
  X27();
}

void X26() {
  flip (13/200) {
    if (a) {
      X25();
    }
    else {
      X21();
    }
  }
}

void X27() {
  flip (73/200) {
    a = false;
    X32();
  }
  else {
    a = false;
    X29();
  }
}

void X28() {
  flip (351/500) {
    a = true;
    X24();
  }
  else {
    a = true;
    X29();
  }
}

void X29() {
  flip (247/250) {
    if (a) {
      X28();
    }
    else {
      X27();
    }
  }
}

void X30() {
  X24();
  X30();
}

void X31() {
  flip (39/100) {
    if (a) {
      X26();
    }
    else {
      X30();
    }
  }
}

void X32() {
  flip (409/500) {
    if (b) {
      X27();
    }
    else {
      X37();
    }
  }
}

void X33() {
  X29();
  X29();
}

void X34() {
  X31();
  X34();
}

void X35() {
  flip (49/100) {
    if (a) {
      X38();
    }
    else {
      X36();
    }
  }
}

void X36() {
  X31();
  X36();
}

void X37() {
  X38();
  X34();
}

void X38() {
  flip (257/1000) {
    if (a) {
      X35();
    }
    else {
      X32();
    }
  }
}

void X39() {
  flip (987/1000) {
    b = false;
    X34();
  }
  else {
    b = true;
    X43();
  }
}

void X40() {
  flip (379/1000) {
    if (b) {
      X42();
    }
    else {
      X39();
    }
  }
}

void X41() {
  flip (437/1000) {
    b = false;
    X46();
  }
  else {
    b = false;
    X45();
  }
}

void X42() {
  X36();
  X37();
}

void X43() {
  X41();
  X47();
}

void X44() {
  flip (69/1000) {
    b = false;
    X40();
  }
  else {
    b = true;
    X43();
  }
}

void X45() {
  X45();
  X47();
}

void X46() {
  flip (3/200) {
    if (b) {
      X47();
    }
    else {
      X50();
    }
  }
}

void X47() {
  flip (471/500) {
    b = true;
    X49();
  }
  else {
    a = true;
    X43();
  }
}

void X48() {
  flip (53/100) {
    if (a) {
      X53();
    }
    else {
      X42();
    }
  }
}

void X49() {
  flip (7/40) {
    b = false;
    X50();
  }
  else {
    a = false;
    X48();
  }
}

void X50() {
  flip (489/500) {
    if (a) {
      X45();
    }
    else {
      X44();
    }
  }
}

void X51() {
  X51();
  X54();
}

void X52() {
  flip (61/125) {
    b = false;
    X47();
  }
  else {
    a = true;
    X57();
  }
}

void X53() {
  flip (821/1000) {
    b = false;
    X53();
  }
  else {
    a = true;
    X49();
  }
}

void X54() {
  flip (13/125) {
    b = false;
    X56();
  }
  else {
    b = true;
    X55();
  }
}

void X55() {
  X53();
  X57();
}

void X56() {
  X60();
  X54();
}

void X57() {
  X56();
  X52();
}

void X58() {
  X61();
  X63();
}

void X59() {
  X54();
  X55();
}

void X60() {
  X65();
  X56();
}

void X61() {
  flip (337/1000) {
    if (b) {
      X66();
    }
    else {
      X60();
    }
  }
}

void X62() {
  flip (101/1000) {
    b = true;
    X61();
  }
  else {
    a = true;
    X64();
  }
}

void X63() {
  X67();
  X64();
}

void X64() {
  flip (84/125) {
    if (b) {
      X62();
    }
    else {
      X64();
    }
  }
}

void X65() {
  flip (483/1000) {
    a = false;
    X66();
  }
  else {
    b = false;
    X70();
  }
}

void X66() {
  flip (367/1000) {
    if (b) {
      X66();
    }
    else {
      X71();
    }
  }
}

void X67() {
  X69();
  X66();
}

void X68() {
  flip (281/1000) {
    if (b) {
      X68();
    }
    else {
      X66();
    }
  }
}

void X69() {
  flip (63/100) {
    b = true;
    X65();
  }
  else {
    b = false;
    X69();
  }
}

void X70() {
  X68();
  X67();
}

void X71() {
  flip (553/1000) {
    if (a) {
      X68();
    }
    else {
      X71();
    }
  }
}

void X72() {
  flip (17/20) {
    a = true;
    X71();
  }
  else {
    a = true;
    X75();
  }
}

void X73() {
  flip (9/10) {
    if (b) {
      X74();
    }
    else {
      X67();
    }
  }
}

void X74() {
  flip (483/500) {
    if (a) {
      X69();
    }
    else {
      X74();
    }
  }
}

void X75() {
  flip (47/1000) {
    a = true;
    X71();
  }
  else {
    a = false;
    X72();
  }
}

void X76() {
  X78();
  X80();
}

void X77() {
  flip (257/1000) {
    if (b) {
      X73();
    }
    else {
      X80();
    }
  }
}

void X78() {
  flip (87/125) {
    if (a) {
      X77();
    }
    else {
      X78();
    }
  }
}

void X79() {
  flip (519/1000) {
    b = false;
    X77();
  }
  else {
    a = false;
    X77();
  }
}

void X80() {
  flip (403/1000) {
    if (a) {
      X83();
    }
    else {
      X82();
    }
  }
}

void X81() {
  flip (39/40) {
    b = false;
    X77();
  }
  else {
    b = false;
    X83();
  }
}

void X82() {
  flip (293/1000) {
    a = false;
    X83();
  }
  else {
    b = true;
    X76();
  }
}

void X83() {
  flip (92/125) {
    if (b) {
      X79();
    }
    else {
      X81();
    }
  }
}

void X84() {
  flip (131/1000) {
    a = true;
    X81();
  }
  else {
    a = true;
    X79();
  }
}

void X85() {
  flip (381/1000) {
    b = false;
    X86();
  }
  else {
    a = true;
    X90();
  }
}

void X86() {
  X91();
  X80();
}

void X87() {
  flip (313/500) {
    if (b) {
      X84();
    }
    else {
      X81();
    }
  }
}

void X88() {
  flip (143/500) {
    if (b) {
      X85();
    }
    else {
      X90();
    }
  }
}

void X89() {
  flip (81/250) {
    if (a) {
      X84();
    }
    else {
      X92();
    }
  }
}

void X90() {
  X84();
  X90();
}

void X91() {
  flip (12/25) {
    a = false;
    X92();
  }
  else {
    a = false;
    X90();
  }
}

void X92() {
  flip (497/500) {
    a = true;
    X94();
  }
  else {
    a = false;
    X95();
  }
}

void X93() {
  flip (53/250) {
    if (b) {
      X98();
    }
    else {
      X98();
    }
  }
}

void X94() {
  flip (91/200) {
    a = true;
    X98();
  }
  else {
    a = true;
    X97();
  }
}

void X95() {
  flip (37/1000) {
    a = true;
    X92();
  }
  else {
    a = true;
    X95();
  }
}

void X96() {
  X91();
  X93();
}

void X97() {
  flip (397/1000) {
    a = false;
    X91();
  }
  else {
    b = false;
    X95();
  }
}

void X98() {
  X0();
  X0();
}

void X99() {
  flip (491/1000) {
    b = true;
    X1();
  }
  else {
    a = true;
    X93();
  }
}
