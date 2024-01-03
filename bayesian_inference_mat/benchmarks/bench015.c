bool a;
bool b;

void X0() {
  flip (221/250) {
    if (b) {
      X99();
    }
    else {
      X95();
    }
  }
}

void X1() {
  flip (22/25) {
    if (a) {
      X5();
    }
    else {
      X5();
    }
  }
}

void X2() {
  flip (14/25) {
    a = false;
    X96();
  }
  else {
    b = false;
    X2();
  }
}

void X3() {
  X4();
  X99();
}

void X4() {
  flip (21/40) {
    a = false;
    X3();
  }
  else {
    a = false;
    X0();
  }
}

void X5() {
  X7();
  X8();
}

void X6() {
  flip (81/250) {
    b = false;
    X11();
  }
  else {
    b = false;
    X3();
  }
}

void X7() {
  flip (131/250) {
    a = false;
    X1();
  }
  else {
    a = false;
    X6();
  }
}

void X8() {
  X4();
  X11();
}

void X9() {
  flip (93/1000) {
    if (b) {
      X5();
    }
    else {
      X8();
    }
  }
}

void X10() {
  X9();
  X9();
}

void X11() {
  X8();
  X7();
}

void X12() {
  X10();
  X12();
}

void X13() {
  flip (99/200) {
    b = true;
    X13();
  }
  else {
    a = true;
    X18();
  }
}

void X14() {
  flip (34/125) {
    if (a) {
      X13();
    }
    else {
      X17();
    }
  }
}

void X15() {
  flip (187/500) {
    b = false;
    X15();
  }
  else {
    b = true;
    X20();
  }
}

void X16() {
  flip (259/500) {
    if (b) {
      X14();
    }
    else {
      X10();
    }
  }
}

void X17() {
  flip (849/1000) {
    a = false;
    X21();
  }
  else {
    a = true;
    X14();
  }
}

void X18() {
  X12();
  X21();
}

void X19() {
  flip (169/500) {
    a = true;
    X20();
  }
  else {
    a = true;
    X22();
  }
}

void X20() {
  flip (479/1000) {
    if (b) {
      X17();
    }
    else {
      X14();
    }
  }
}

void X21() {
  X20();
  X16();
}

void X22() {
  flip (637/1000) {
    if (b) {
      X24();
    }
    else {
      X20();
    }
  }
}

void X23() {
  flip (309/1000) {
    a = true;
    X17();
  }
  else {
    a = true;
    X17();
  }
}

void X24() {
  flip (379/1000) {
    a = true;
    X18();
  }
  else {
    b = false;
    X29();
  }
}

void X25() {
  flip (397/1000) {
    if (a) {
      X29();
    }
    else {
      X20();
    }
  }
}

void X26() {
  flip (371/1000) {
    b = false;
    X27();
  }
  else {
    b = true;
    X20();
  }
}

void X27() {
  flip (19/200) {
    a = false;
    X21();
  }
  else {
    a = false;
    X22();
  }
}

void X28() {
  X32();
  X33();
}

void X29() {
  flip (53/250) {
    if (a) {
      X33();
    }
    else {
      X23();
    }
  }
}

void X30() {
  flip (327/1000) {
    if (b) {
      X35();
    }
    else {
      X31();
    }
  }
}

void X31() {
  flip (9/200) {
    if (a) {
      X35();
    }
    else {
      X30();
    }
  }
}

void X32() {
  flip (299/1000) {
    b = true;
    X29();
  }
  else {
    a = true;
    X33();
  }
}

void X33() {
  X28();
  X38();
}

void X34() {
  flip (8/125) {
    b = false;
    X34();
  }
  else {
    b = true;
    X34();
  }
}

void X35() {
  flip (22/125) {
    a = true;
    X34();
  }
  else {
    a = false;
    X30();
  }
}

void X36() {
  X30();
  X32();
}

void X37() {
  X41();
  X32();
}

void X38() {
  X40();
  X35();
}

void X39() {
  flip (279/1000) {
    if (b) {
      X39();
    }
    else {
      X36();
    }
  }
}

void X40() {
  flip (263/1000) {
    b = true;
    X44();
  }
  else {
    a = false;
    X44();
  }
}

void X41() {
  flip (289/500) {
    b = false;
    X42();
  }
  else {
    b = false;
    X41();
  }
}

void X42() {
  flip (51/250) {
    if (a) {
      X38();
    }
    else {
      X44();
    }
  }
}

void X43() {
  X39();
  X42();
}

void X44() {
  flip (3/8) {
    a = false;
    X49();
  }
  else {
    b = true;
    X41();
  }
}

void X45() {
  flip (83/200) {
    b = true;
    X39();
  }
  else {
    a = true;
    X40();
  }
}

void X46() {
  flip (183/250) {
    if (a) {
      X51();
    }
    else {
      X41();
    }
  }
}

void X47() {
  flip (3/50) {
    a = false;
    X44();
  }
  else {
    a = true;
    X52();
  }
}

void X48() {
  flip (69/250) {
    a = true;
    X43();
  }
  else {
    b = false;
    X44();
  }
}

void X49() {
  flip (7/1000) {
    a = true;
    X48();
  }
  else {
    a = true;
    X46();
  }
}

void X50() {
  X53();
  X50();
}

void X51() {
  X53();
  X52();
}

void X52() {
  X48();
  X54();
}

void X53() {
  flip (13/125) {
    b = false;
    X48();
  }
  else {
    a = false;
    X57();
  }
}

void X54() {
  X51();
  X57();
}

void X55() {
  flip (517/1000) {
    b = true;
    X55();
  }
  else {
    b = true;
    X49();
  }
}

void X56() {
  X56();
  X58();
}

void X57() {
  flip (211/250) {
    b = false;
    X54();
  }
  else {
    b = true;
    X53();
  }
}

void X58() {
  flip (79/125) {
    if (a) {
      X62();
    }
    else {
      X55();
    }
  }
}

void X59() {
  X55();
  X53();
}

void X60() {
  flip (37/200) {
    if (a) {
      X62();
    }
    else {
      X63();
    }
  }
}

void X61() {
  flip (3/125) {
    a = false;
    X61();
  }
  else {
    a = false;
    X59();
  }
}

void X62() {
  flip (23/1000) {
    b = true;
    X61();
  }
  else {
    b = false;
    X61();
  }
}

void X63() {
  flip (237/250) {
    if (b) {
      X61();
    }
    else {
      X58();
    }
  }
}

void X64() {
  flip (707/1000) {
    if (b) {
      X66();
    }
    else {
      X67();
    }
  }
}

void X65() {
  flip (403/500) {
    if (a) {
      X67();
    }
    else {
      X68();
    }
  }
}

void X66() {
  flip (16/125) {
    a = true;
    X65();
  }
  else {
    b = true;
    X69();
  }
}

void X67() {
  flip (527/1000) {
    a = false;
    X69();
  }
  else {
    a = true;
    X69();
  }
}

void X68() {
  X73();
  X64();
}

void X69() {
  flip (3/1000) {
    if (a) {
      X70();
    }
    else {
      X66();
    }
  }
}

void X70() {
  flip (263/500) {
    a = false;
    X64();
  }
  else {
    b = false;
    X72();
  }
}

void X71() {
  X65();
  X67();
}

void X72() {
  flip (173/250) {
    a = true;
    X67();
  }
  else {
    a = true;
    X69();
  }
}

void X73() {
  flip (587/1000) {
    a = true;
    X74();
  }
  else {
    a = true;
    X68();
  }
}

void X74() {
  flip (81/125) {
    if (a) {
      X68();
    }
    else {
      X68();
    }
  }
}

void X75() {
  flip (153/200) {
    a = false;
    X70();
  }
  else {
    a = false;
    X74();
  }
}

void X76() {
  flip (61/125) {
    b = true;
    X78();
  }
  else {
    a = true;
    X79();
  }
}

void X77() {
  flip (114/125) {
    b = true;
    X80();
  }
  else {
    b = false;
    X73();
  }
}

void X78() {
  flip (76/125) {
    if (b) {
      X73();
    }
    else {
      X78();
    }
  }
}

void X79() {
  flip (381/500) {
    if (a) {
      X79();
    }
    else {
      X84();
    }
  }
}

void X80() {
  flip (163/200) {
    b = true;
    X84();
  }
  else {
    a = true;
    X75();
  }
}

void X81() {
  flip (901/1000) {
    a = false;
    X85();
  }
  else {
    b = true;
    X85();
  }
}

void X82() {
  X78();
  X79();
}

void X83() {
  X79();
  X81();
}

void X84() {
  flip (117/200) {
    a = true;
    X89();
  }
  else {
    a = false;
    X79();
  }
}

void X85() {
  X86();
  X85();
}

void X86() {
  flip (29/200) {
    if (b) {
      X86();
    }
    else {
      X85();
    }
  }
}

void X87() {
  X91();
  X89();
}

void X88() {
  flip (7/500) {
    if (b) {
      X82();
    }
    else {
      X92();
    }
  }
}

void X89() {
  X83();
  X90();
}

void X90() {
  flip (383/500) {
    b = false;
    X88();
  }
  else {
    b = false;
    X93();
  }
}

void X91() {
  flip (123/250) {
    a = false;
    X95();
  }
  else {
    a = false;
    X90();
  }
}

void X92() {
  flip (983/1000) {
    a = false;
    X87();
  }
  else {
    a = true;
    X92();
  }
}

void X93() {
  flip (139/1000) {
    if (a) {
      X97();
    }
    else {
      X98();
    }
  }
}

void X94() {
  flip (679/1000) {
    b = false;
    X94();
  }
  else {
    b = false;
    X88();
  }
}

void X95() {
  flip (241/500) {
    if (b) {
      X89();
    }
    else {
      X91();
    }
  }
}

void X96() {
  flip (43/100) {
    if (a) {
      X98();
    }
    else {
      X95();
    }
  }
}

void X97() {
  flip (39/500) {
    if (b) {
      X96();
    }
    else {
      X99();
    }
  }
}

void X98() {
  flip (33/50) {
    if (b) {
      X93();
    }
    else {
      X95();
    }
  }
}

void X99() {
  flip (233/1000) {
    if (b) {
      X94();
    }
    else {
      X1();
    }
  }
}
