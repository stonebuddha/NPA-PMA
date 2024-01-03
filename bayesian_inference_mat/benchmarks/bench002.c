bool a;
bool b;

void X0() {
  X95();
  X98();
}

void X1() {
  X2();
  X95();
}

void X2() {
  flip (341/1000) {
    if (a) {
      X7();
    }
    else {
      X5();
    }
  }
}

void X3() {
  flip (27/1000) {
    b = false;
    X1();
  }
  else {
    a = false;
    X99();
  }
}

void X4() {
  X7();
  X6();
}

void X5() {
  flip (173/200) {
    b = false;
    X9();
  }
  else {
    a = true;
    X1();
  }
}

void X6() {
  flip (67/1000) {
    if (b) {
      X4();
    }
    else {
      X1();
    }
  }
}

void X7() {
  flip (773/1000) {
    a = false;
    X2();
  }
  else {
    b = false;
    X12();
  }
}

void X8() {
  X12();
  X9();
}

void X9() {
  flip (721/1000) {
    if (a) {
      X8();
    }
    else {
      X14();
    }
  }
}

void X10() {
  flip (1/200) {
    a = true;
    X9();
  }
  else {
    b = false;
    X12();
  }
}

void X11() {
  flip (249/1000) {
    b = true;
    X12();
  }
  else {
    b = false;
    X10();
  }
}

void X12() {
  X12();
  X6();
}

void X13() {
  X16();
  X13();
}

void X14() {
  flip (369/1000) {
    a = true;
    X12();
  }
  else {
    a = true;
    X8();
  }
}

void X15() {
  flip (263/1000) {
    if (a) {
      X16();
    }
    else {
      X16();
    }
  }
}

void X16() {
  flip (923/1000) {
    b = false;
    X11();
  }
  else {
    a = true;
    X16();
  }
}

void X17() {
  flip (379/1000) {
    if (a) {
      X20();
    }
    else {
      X19();
    }
  }
}

void X18() {
  flip (9/10) {
    if (a) {
      X17();
    }
    else {
      X13();
    }
  }
}

void X19() {
  X15();
  X19();
}

void X20() {
  flip (117/500) {
    b = true;
    X20();
  }
  else {
    b = false;
    X16();
  }
}

void X21() {
  flip (101/125) {
    if (a) {
      X16();
    }
    else {
      X16();
    }
  }
}

void X22() {
  flip (2/5) {
    if (b) {
      X25();
    }
    else {
      X24();
    }
  }
}

void X23() {
  flip (117/500) {
    if (a) {
      X25();
    }
    else {
      X18();
    }
  }
}

void X24() {
  flip (16/125) {
    if (a) {
      X22();
    }
    else {
      X22();
    }
  }
}

void X25() {
  flip (307/1000) {
    b = true;
    X21();
  }
  else {
    b = true;
    X21();
  }
}

void X26() {
  flip (943/1000) {
    if (a) {
      X21();
    }
    else {
      X23();
    }
  }
}

void X27() {
  X24();
  X29();
}

void X28() {
  X26();
  X25();
}

void X29() {
  flip (39/50) {
    if (a) {
      X23();
    }
    else {
      X33();
    }
  }
}

void X30() {
  flip (553/1000) {
    if (b) {
      X27();
    }
    else {
      X30();
    }
  }
}

void X31() {
  X35();
  X26();
}

void X32() {
  X29();
  X31();
}

void X33() {
  flip (81/1000) {
    b = false;
    X36();
  }
  else {
    a = true;
    X33();
  }
}

void X34() {
  flip (233/250) {
    if (b) {
      X39();
    }
    else {
      X38();
    }
  }
}

void X35() {
  X36();
  X31();
}

void X36() {
  X39();
  X33();
}

void X37() {
  flip (5/8) {
    if (a) {
      X39();
    }
    else {
      X35();
    }
  }
}

void X38() {
  flip (403/500) {
    if (b) {
      X35();
    }
    else {
      X42();
    }
  }
}

void X39() {
  flip (33/50) {
    if (a) {
      X34();
    }
    else {
      X38();
    }
  }
}

void X40() {
  flip (43/500) {
    b = true;
    X39();
  }
  else {
    a = false;
    X37();
  }
}

void X41() {
  flip (33/125) {
    if (b) {
      X35();
    }
    else {
      X42();
    }
  }
}

void X42() {
  flip (113/125) {
    if (a) {
      X37();
    }
    else {
      X47();
    }
  }
}

void X43() {
  X41();
  X39();
}

void X44() {
  flip (151/1000) {
    a = true;
    X45();
  }
  else {
    b = false;
    X40();
  }
}

void X45() {
  flip (683/1000) {
    if (b) {
      X43();
    }
    else {
      X42();
    }
  }
}

void X46() {
  flip (323/1000) {
    if (b) {
      X47();
    }
    else {
      X45();
    }
  }
}

void X47() {
  flip (669/1000) {
    b = false;
    X45();
  }
  else {
    b = true;
    X50();
  }
}

void X48() {
  X46();
  X50();
}

void X49() {
  X52();
  X48();
}

void X50() {
  flip (467/1000) {
    if (b) {
      X54();
    }
    else {
      X47();
    }
  }
}

void X51() {
  flip (747/1000) {
    if (b) {
      X56();
    }
    else {
      X45();
    }
  }
}

void X52() {
  flip (793/1000) {
    b = false;
    X48();
  }
  else {
    b = true;
    X46();
  }
}

void X53() {
  X50();
  X48();
}

void X54() {
  flip (721/1000) {
    if (b) {
      X56();
    }
    else {
      X57();
    }
  }
}

void X55() {
  flip (21/1000) {
    a = true;
    X60();
  }
  else {
    b = false;
    X49();
  }
}

void X56() {
  X50();
  X50();
}

void X57() {
  flip (317/500) {
    if (b) {
      X55();
    }
    else {
      X56();
    }
  }
}

void X58() {
  flip (721/1000) {
    b = true;
    X60();
  }
  else {
    b = true;
    X54();
  }
}

void X59() {
  flip (1/50) {
    a = true;
    X60();
  }
  else {
    b = true;
    X60();
  }
}

void X60() {
  flip (173/500) {
    if (a) {
      X61();
    }
    else {
      X64();
    }
  }
}

void X61() {
  flip (247/1000) {
    if (a) {
      X61();
    }
    else {
      X58();
    }
  }
}

void X62() {
  flip (81/100) {
    if (a) {
      X64();
    }
    else {
      X62();
    }
  }
}

void X63() {
  X68();
  X66();
}

void X64() {
  flip (241/500) {
    if (b) {
      X59();
    }
    else {
      X60();
    }
  }
}

void X65() {
  flip (7/125) {
    a = false;
    X61();
  }
  else {
    b = true;
    X60();
  }
}

void X66() {
  flip (3/100) {
    if (a) {
      X70();
    }
    else {
      X66();
    }
  }
}

void X67() {
  X61();
  X66();
}

void X68() {
  flip (7/20) {
    if (a) {
      X68();
    }
    else {
      X63();
    }
  }
}

void X69() {
  flip (87/1000) {
    b = true;
    X67();
  }
  else {
    b = false;
    X65();
  }
}

void X70() {
  X64();
  X65();
}

void X71() {
  flip (337/1000) {
    if (a) {
      X70();
    }
    else {
      X75();
    }
  }
}

void X72() {
  flip (673/1000) {
    if (a) {
      X67();
    }
    else {
      X66();
    }
  }
}

void X73() {
  X75();
  X74();
}

void X74() {
  X71();
  X71();
}

void X75() {
  flip (927/1000) {
    if (a) {
      X79();
    }
    else {
      X80();
    }
  }
}

void X76() {
  flip (73/250) {
    a = false;
    X72();
  }
  else {
    a = true;
    X70();
  }
}

void X77() {
  flip (729/1000) {
    if (b) {
      X80();
    }
    else {
      X79();
    }
  }
}

void X78() {
  X76();
  X75();
}

void X79() {
  flip (77/500) {
    a = false;
    X75();
  }
  else {
    b = true;
    X74();
  }
}

void X80() {
  flip (153/1000) {
    a = false;
    X76();
  }
  else {
    a = false;
    X82();
  }
}

void X81() {
  X83();
  X76();
}

void X82() {
  flip (239/250) {
    if (a) {
      X78();
    }
    else {
      X87();
    }
  }
}

void X83() {
  flip (431/1000) {
    a = true;
    X81();
  }
  else {
    b = false;
    X83();
  }
}

void X84() {
  flip (193/500) {
    if (b) {
      X83();
    }
    else {
      X83();
    }
  }
}

void X85() {
  X81();
  X88();
}

void X86() {
  flip (1/250) {
    a = true;
    X84();
  }
  else {
    a = false;
    X87();
  }
}

void X87() {
  flip (13/125) {
    if (b) {
      X84();
    }
    else {
      X81();
    }
  }
}

void X88() {
  X93();
  X88();
}

void X89() {
  flip (591/1000) {
    if (b) {
      X87();
    }
    else {
      X94();
    }
  }
}

void X90() {
  X90();
  X87();
}

void X91() {
  X89();
  X94();
}

void X92() {
  flip (23/50) {
    b = true;
    X86();
  }
  else {
    a = false;
    X92();
  }
}

void X93() {
  flip (737/1000) {
    a = false;
    X98();
  }
  else {
    b = true;
    X95();
  }
}

void X94() {
  X99();
  X88();
}

void X95() {
  X90();
  X99();
}

void X96() {
  flip (443/500) {
    b = false;
    X97();
  }
  else {
    a = false;
    X1();
  }
}

void X97() {
  flip (189/500) {
    b = true;
    X98();
  }
  else {
    a = true;
    X93();
  }
}

void X98() {
  flip (1/250) {
    a = false;
    X95();
  }
  else {
    b = true;
    X2();
  }
}

void X99() {
  X95();
  X93();
}
