bool a;
bool b;

void X0() {
  flip (327/1000) {
    b = true;
    X2();
  }
  else {
    a = false;
    X96();
  }
}

void X1() {
  flip (129/250) {
    if (a) {
      X3();
    }
    else {
      X1();
    }
  }
}

void X2() {
  flip (293/1000) {
    if (a) {
      X0();
    }
    else {
      X0();
    }
  }
}

void X3() {
  X7();
  X2();
}

void X4() {
  flip (971/1000) {
    if (b) {
      X1();
    }
    else {
      X8();
    }
  }
}

void X5() {
  X4();
  X2();
}

void X6() {
  flip (143/1000) {
    a = true;
    X3();
  }
  else {
    b = false;
    X4();
  }
}

void X7() {
  flip (649/1000) {
    b = false;
    X8();
  }
  else {
    b = false;
    X9();
  }
}

void X8() {
  flip (9/1000) {
    if (b) {
      X8();
    }
    else {
      X2();
    }
  }
}

void X9() {
  flip (82/125) {
    if (a) {
      X9();
    }
    else {
      X6();
    }
  }
}

void X10() {
  X7();
  X12();
}

void X11() {
  flip (99/200) {
    if (a) {
      X7();
    }
    else {
      X14();
    }
  }
}

void X12() {
  flip (909/1000) {
    if (a) {
      X14();
    }
    else {
      X10();
    }
  }
}

void X13() {
  X11();
  X17();
}

void X14() {
  flip (9/1000) {
    if (a) {
      X13();
    }
    else {
      X15();
    }
  }
}

void X15() {
  flip (131/250) {
    b = false;
    X13();
  }
  else {
    a = false;
    X15();
  }
}

void X16() {
  flip (297/1000) {
    if (a) {
      X10();
    }
    else {
      X15();
    }
  }
}

void X17() {
  flip (79/1000) {
    if (b) {
      X20();
    }
    else {
      X16();
    }
  }
}

void X18() {
  flip (289/500) {
    if (b) {
      X12();
    }
    else {
      X17();
    }
  }
}

void X19() {
  flip (489/500) {
    if (a) {
      X21();
    }
    else {
      X15();
    }
  }
}

void X20() {
  flip (84/125) {
    b = true;
    X20();
  }
  else {
    a = false;
    X20();
  }
}

void X21() {
  flip (441/500) {
    if (a) {
      X20();
    }
    else {
      X21();
    }
  }
}

void X22() {
  X22();
  X27();
}

void X23() {
  X17();
  X28();
}

void X24() {
  X27();
  X26();
}

void X25() {
  X30();
  X26();
}

void X26() {
  flip (719/1000) {
    if (a) {
      X23();
    }
    else {
      X30();
    }
  }
}

void X27() {
  flip (531/1000) {
    b = false;
    X25();
  }
  else {
    a = true;
    X23();
  }
}

void X28() {
  flip (91/100) {
    if (b) {
      X27();
    }
    else {
      X25();
    }
  }
}

void X29() {
  X23();
  X26();
}

void X30() {
  X30();
  X24();
}

void X31() {
  X34();
  X34();
}

void X32() {
  flip (131/1000) {
    if (a) {
      X32();
    }
    else {
      X32();
    }
  }
}

void X33() {
  X28();
  X33();
}

void X34() {
  flip (92/125) {
    if (b) {
      X34();
    }
    else {
      X28();
    }
  }
}

void X35() {
  X40();
  X37();
}

void X36() {
  X38();
  X30();
}

void X37() {
  flip (33/50) {
    b = false;
    X35();
  }
  else {
    b = true;
    X31();
  }
}

void X38() {
  flip (46/125) {
    if (a) {
      X38();
    }
    else {
      X43();
    }
  }
}

void X39() {
  flip (43/200) {
    a = true;
    X36();
  }
  else {
    b = false;
    X38();
  }
}

void X40() {
  flip (79/1000) {
    a = true;
    X43();
  }
  else {
    a = true;
    X40();
  }
}

void X41() {
  X44();
  X45();
}

void X42() {
  X39();
  X47();
}

void X43() {
  flip (69/500) {
    if (b) {
      X42();
    }
    else {
      X46();
    }
  }
}

void X44() {
  flip (103/250) {
    a = true;
    X39();
  }
  else {
    b = true;
    X46();
  }
}

void X45() {
  flip (153/250) {
    if (b) {
      X49();
    }
    else {
      X46();
    }
  }
}

void X46() {
  flip (159/500) {
    b = false;
    X49();
  }
  else {
    b = false;
    X51();
  }
}

void X47() {
  X49();
  X45();
}

void X48() {
  X51();
  X42();
}

void X49() {
  flip (759/1000) {
    if (b) {
      X45();
    }
    else {
      X51();
    }
  }
}

void X50() {
  flip (87/100) {
    if (b) {
      X47();
    }
    else {
      X45();
    }
  }
}

void X51() {
  X51();
  X53();
}

void X52() {
  flip (28/125) {
    if (b) {
      X50();
    }
    else {
      X54();
    }
  }
}

void X53() {
  X48();
  X47();
}

void X54() {
  X51();
  X53();
}

void X55() {
  flip (19/40) {
    if (b) {
      X51();
    }
    else {
      X51();
    }
  }
}

void X56() {
  flip (23/500) {
    if (b) {
      X55();
    }
    else {
      X60();
    }
  }
}

void X57() {
  flip (501/1000) {
    if (a) {
      X61();
    }
    else {
      X58();
    }
  }
}

void X58() {
  X55();
  X53();
}

void X59() {
  X63();
  X58();
}

void X60() {
  flip (171/200) {
    if (b) {
      X65();
    }
    else {
      X56();
    }
  }
}

void X61() {
  flip (79/250) {
    b = false;
    X63();
  }
  else {
    a = false;
    X57();
  }
}

void X62() {
  X58();
  X57();
}

void X63() {
  flip (19/25) {
    if (a) {
      X61();
    }
    else {
      X57();
    }
  }
}

void X64() {
  flip (79/125) {
    if (a) {
      X58();
    }
    else {
      X60();
    }
  }
}

void X65() {
  flip (1/50) {
    a = false;
    X68();
  }
  else {
    b = true;
    X68();
  }
}

void X66() {
  flip (177/500) {
    b = false;
    X68();
  }
  else {
    a = true;
    X60();
  }
}

void X67() {
  X71();
  X66();
}

void X68() {
  flip (29/200) {
    if (b) {
      X72();
    }
    else {
      X64();
    }
  }
}

void X69() {
  X72();
  X71();
}

void X70() {
  flip (249/1000) {
    if (a) {
      X69();
    }
    else {
      X68();
    }
  }
}

void X71() {
  X66();
  X69();
}

void X72() {
  flip (77/1000) {
    b = false;
    X76();
  }
  else {
    a = true;
    X74();
  }
}

void X73() {
  X72();
  X76();
}

void X74() {
  X78();
  X72();
}

void X75() {
  X79();
  X79();
}

void X76() {
  flip (109/125) {
    if (a) {
      X70();
    }
    else {
      X78();
    }
  }
}

void X77() {
  flip (909/1000) {
    b = false;
    X74();
  }
  else {
    b = true;
    X82();
  }
}

void X78() {
  flip (4/5) {
    b = false;
    X83();
  }
  else {
    a = true;
    X79();
  }
}

void X79() {
  X74();
  X73();
}

void X80() {
  X84();
  X75();
}

void X81() {
  flip (68/125) {
    b = true;
    X86();
  }
  else {
    b = true;
    X81();
  }
}

void X82() {
  flip (461/1000) {
    a = true;
    X82();
  }
  else {
    b = false;
    X78();
  }
}

void X83() {
  X88();
  X85();
}

void X84() {
  flip (909/1000) {
    if (b) {
      X89();
    }
    else {
      X86();
    }
  }
}

void X85() {
  flip (149/1000) {
    a = true;
    X80();
  }
  else {
    b = true;
    X86();
  }
}

void X86() {
  flip (77/200) {
    if (b) {
      X81();
    }
    else {
      X80();
    }
  }
}

void X87() {
  flip (29/40) {
    if (b) {
      X91();
    }
    else {
      X91();
    }
  }
}

void X88() {
  X85();
  X90();
}

void X89() {
  X88();
  X94();
}

void X90() {
  flip (237/1000) {
    a = false;
    X90();
  }
  else {
    a = false;
    X88();
  }
}

void X91() {
  X90();
  X89();
}

void X92() {
  X89();
  X90();
}

void X93() {
  flip (118/125) {
    a = true;
    X97();
  }
  else {
    a = false;
    X92();
  }
}

void X94() {
  flip (221/500) {
    if (b) {
      X88();
    }
    else {
      X88();
    }
  }
}

void X95() {
  X94();
  X0();
}

void X96() {
  X91();
  X0();
}

void X97() {
  flip (103/200) {
    if (a) {
      X97();
    }
    else {
      X0();
    }
  }
}

void X98() {
  X1();
  X0();
}

void X99() {
  flip (439/500) {
    b = false;
    X0();
  }
  else {
    a = false;
    X99();
  }
}
