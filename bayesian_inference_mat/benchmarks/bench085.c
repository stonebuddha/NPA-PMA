bool a;
bool b;

void X0() {
  flip (1/2) {
    if (a) {
      X1();
    }
    else {
      X4();
    }
  }
}

void X1() {
  flip (7/250) {
    a = true;
    X0();
  }
  else {
    a = true;
    X98();
  }
}

void X2() {
  flip (52/125) {
    b = true;
    X0();
  }
  else {
    a = false;
    X5();
  }
}

void X3() {
  flip (129/200) {
    b = false;
    X6();
  }
  else {
    a = false;
    X7();
  }
}

void X4() {
  X7();
  X5();
}

void X5() {
  flip (141/250) {
    a = true;
    X99();
  }
  else {
    a = true;
    X4();
  }
}

void X6() {
  flip (429/500) {
    a = false;
    X8();
  }
  else {
    b = true;
    X4();
  }
}

void X7() {
  flip (353/500) {
    if (a) {
      X1();
    }
    else {
      X8();
    }
  }
}

void X8() {
  flip (787/1000) {
    if (b) {
      X5();
    }
    else {
      X3();
    }
  }
}

void X9() {
  flip (239/1000) {
    if (a) {
      X3();
    }
    else {
      X9();
    }
  }
}

void X10() {
  X14();
  X7();
}

void X11() {
  flip (91/100) {
    if (a) {
      X13();
    }
    else {
      X10();
    }
  }
}

void X12() {
  flip (11/100) {
    a = true;
    X13();
  }
  else {
    a = false;
    X10();
  }
}

void X13() {
  flip (419/1000) {
    if (b) {
      X15();
    }
    else {
      X13();
    }
  }
}

void X14() {
  flip (291/1000) {
    if (b) {
      X16();
    }
    else {
      X13();
    }
  }
}

void X15() {
  flip (19/1000) {
    if (a) {
      X12();
    }
    else {
      X17();
    }
  }
}

void X16() {
  X13();
  X21();
}

void X17() {
  flip (193/250) {
    if (a) {
      X15();
    }
    else {
      X20();
    }
  }
}

void X18() {
  X15();
  X16();
}

void X19() {
  X18();
  X20();
}

void X20() {
  flip (193/200) {
    a = false;
    X22();
  }
  else {
    a = false;
    X23();
  }
}

void X21() {
  flip (937/1000) {
    b = true;
    X21();
  }
  else {
    a = true;
    X18();
  }
}

void X22() {
  X24();
  X27();
}

void X23() {
  X18();
  X18();
}

void X24() {
  X24();
  X25();
}

void X25() {
  flip (27/200) {
    b = false;
    X27();
  }
  else {
    b = true;
    X23();
  }
}

void X26() {
  flip (177/500) {
    a = false;
    X29();
  }
  else {
    b = true;
    X24();
  }
}

void X27() {
  flip (7/40) {
    if (b) {
      X30();
    }
    else {
      X28();
    }
  }
}

void X28() {
  flip (227/1000) {
    if (a) {
      X27();
    }
    else {
      X33();
    }
  }
}

void X29() {
  X26();
  X28();
}

void X30() {
  flip (551/1000) {
    a = true;
    X30();
  }
  else {
    b = true;
    X24();
  }
}

void X31() {
  flip (627/1000) {
    b = false;
    X26();
  }
  else {
    a = false;
    X34();
  }
}

void X32() {
  flip (197/250) {
    if (a) {
      X26();
    }
    else {
      X35();
    }
  }
}

void X33() {
  flip (597/1000) {
    if (a) {
      X31();
    }
    else {
      X27();
    }
  }
}

void X34() {
  flip (537/1000) {
    a = false;
    X33();
  }
  else {
    b = true;
    X30();
  }
}

void X35() {
  flip (729/1000) {
    if (a) {
      X30();
    }
    else {
      X33();
    }
  }
}

void X36() {
  X35();
  X31();
}

void X37() {
  X31();
  X39();
}

void X38() {
  flip (169/1000) {
    if (b) {
      X32();
    }
    else {
      X42();
    }
  }
}

void X39() {
  flip (901/1000) {
    b = false;
    X43();
  }
  else {
    b = true;
    X37();
  }
}

void X40() {
  flip (111/250) {
    a = false;
    X41();
  }
  else {
    a = true;
    X44();
  }
}

void X41() {
  flip (93/200) {
    b = true;
    X36();
  }
  else {
    b = false;
    X44();
  }
}

void X42() {
  flip (13/500) {
    if (b) {
      X42();
    }
    else {
      X36();
    }
  }
}

void X43() {
  flip (333/1000) {
    if (b) {
      X39();
    }
    else {
      X40();
    }
  }
}

void X44() {
  flip (197/200) {
    if (a) {
      X42();
    }
    else {
      X41();
    }
  }
}

void X45() {
  flip (49/50) {
    if (b) {
      X46();
    }
    else {
      X50();
    }
  }
}

void X46() {
  flip (403/1000) {
    if (a) {
      X48();
    }
    else {
      X40();
    }
  }
}

void X47() {
  flip (81/100) {
    a = false;
    X45();
  }
  else {
    a = true;
    X41();
  }
}

void X48() {
  flip (21/100) {
    b = false;
    X42();
  }
  else {
    a = false;
    X52();
  }
}

void X49() {
  X46();
  X44();
}

void X50() {
  X48();
  X50();
}

void X51() {
  flip (969/1000) {
    if (b) {
      X56();
    }
    else {
      X53();
    }
  }
}

void X52() {
  X50();
  X48();
}

void X53() {
  flip (119/250) {
    a = true;
    X58();
  }
  else {
    a = false;
    X53();
  }
}

void X54() {
  flip (13/200) {
    b = true;
    X55();
  }
  else {
    a = false;
    X58();
  }
}

void X55() {
  flip (47/200) {
    if (a) {
      X50();
    }
    else {
      X58();
    }
  }
}

void X56() {
  flip (511/1000) {
    a = false;
    X57();
  }
  else {
    b = true;
    X58();
  }
}

void X57() {
  flip (9/50) {
    if (b) {
      X58();
    }
    else {
      X54();
    }
  }
}

void X58() {
  flip (79/250) {
    if (b) {
      X63();
    }
    else {
      X53();
    }
  }
}

void X59() {
  flip (749/1000) {
    b = false;
    X53();
  }
  else {
    b = false;
    X58();
  }
}

void X60() {
  flip (48/125) {
    a = false;
    X63();
  }
  else {
    a = true;
    X56();
  }
}

void X61() {
  flip (43/125) {
    if (b) {
      X63();
    }
    else {
      X66();
    }
  }
}

void X62() {
  X67();
  X66();
}

void X63() {
  flip (831/1000) {
    if (a) {
      X64();
    }
    else {
      X58();
    }
  }
}

void X64() {
  flip (577/1000) {
    a = false;
    X61();
  }
  else {
    b = false;
    X58();
  }
}

void X65() {
  X66();
  X64();
}

void X66() {
  X62();
  X61();
}

void X67() {
  flip (99/500) {
    b = false;
    X64();
  }
  else {
    a = false;
    X69();
  }
}

void X68() {
  flip (59/500) {
    a = false;
    X72();
  }
  else {
    a = true;
    X66();
  }
}

void X69() {
  X74();
  X63();
}

void X70() {
  flip (4/5) {
    if (b) {
      X65();
    }
    else {
      X68();
    }
  }
}

void X71() {
  X65();
  X71();
}

void X72() {
  flip (481/1000) {
    b = false;
    X66();
  }
  else {
    a = true;
    X68();
  }
}

void X73() {
  flip (91/500) {
    b = false;
    X75();
  }
  else {
    b = false;
    X71();
  }
}

void X74() {
  flip (21/250) {
    if (b) {
      X71();
    }
    else {
      X79();
    }
  }
}

void X75() {
  X79();
  X70();
}

void X76() {
  X70();
  X81();
}

void X77() {
  X75();
  X72();
}

void X78() {
  flip (253/1000) {
    if (a) {
      X73();
    }
    else {
      X73();
    }
  }
}

void X79() {
  flip (23/100) {
    a = true;
    X79();
  }
  else {
    b = false;
    X77();
  }
}

void X80() {
  X79();
  X84();
}

void X81() {
  flip (889/1000) {
    if (a) {
      X86();
    }
    else {
      X75();
    }
  }
}

void X82() {
  flip (9/1000) {
    if (a) {
      X77();
    }
    else {
      X77();
    }
  }
}

void X83() {
  X85();
  X78();
}

void X84() {
  flip (487/1000) {
    if (b) {
      X87();
    }
    else {
      X86();
    }
  }
}

void X85() {
  flip (897/1000) {
    if (b) {
      X89();
    }
    else {
      X82();
    }
  }
}

void X86() {
  X87();
  X85();
}

void X87() {
  flip (83/125) {
    if (a) {
      X88();
    }
    else {
      X89();
    }
  }
}

void X88() {
  flip (33/250) {
    a = false;
    X86();
  }
  else {
    b = false;
    X82();
  }
}

void X89() {
  flip (49/250) {
    a = false;
    X84();
  }
  else {
    a = true;
    X87();
  }
}

void X90() {
  X94();
  X87();
}

void X91() {
  X86();
  X89();
}

void X92() {
  flip (9/40) {
    if (b) {
      X94();
    }
    else {
      X97();
    }
  }
}

void X93() {
  flip (39/40) {
    if (b) {
      X98();
    }
    else {
      X97();
    }
  }
}

void X94() {
  X91();
  X88();
}

void X95() {
  X95();
  X99();
}

void X96() {
  flip (709/1000) {
    if (b) {
      X94();
    }
    else {
      X99();
    }
  }
}

void X97() {
  X96();
  X0();
}

void X98() {
  X96();
  X97();
}

void X99() {
  flip (181/1000) {
    if (b) {
      X94();
    }
    else {
      X97();
    }
  }
}
