bool a;
bool b;

void X0() {
  X1();
  X99();
}

void X1() {
  flip (2/5) {
    if (a) {
      X97();
    }
    else {
      X98();
    }
  }
}

void X2() {
  flip (273/500) {
    a = true;
    X97();
  }
  else {
    a = true;
    X5();
  }
}

void X3() {
  flip (399/500) {
    if (b) {
      X1();
    }
    else {
      X97();
    }
  }
}

void X4() {
  X98();
  X9();
}

void X5() {
  X1();
  X7();
}

void X6() {
  X2();
  X3();
}

void X7() {
  flip (163/500) {
    if (a) {
      X12();
    }
    else {
      X3();
    }
  }
}

void X8() {
  flip (51/500) {
    if (a) {
      X10();
    }
    else {
      X12();
    }
  }
}

void X9() {
  flip (73/500) {
    if (b) {
      X11();
    }
    else {
      X13();
    }
  }
}

void X10() {
  flip (397/1000) {
    if (b) {
      X10();
    }
    else {
      X14();
    }
  }
}

void X11() {
  X10();
  X6();
}

void X12() {
  flip (607/1000) {
    if (b) {
      X15();
    }
    else {
      X17();
    }
  }
}

void X13() {
  flip (79/100) {
    a = false;
    X9();
  }
  else {
    b = false;
    X16();
  }
}

void X14() {
  flip (439/500) {
    b = true;
    X16();
  }
  else {
    a = true;
    X15();
  }
}

void X15() {
  X9();
  X10();
}

void X16() {
  flip (193/200) {
    b = true;
    X18();
  }
  else {
    b = false;
    X13();
  }
}

void X17() {
  flip (271/500) {
    b = true;
    X12();
  }
  else {
    b = false;
    X20();
  }
}

void X18() {
  X23();
  X14();
}

void X19() {
  X13();
  X19();
}

void X20() {
  X23();
  X21();
}

void X21() {
  flip (193/500) {
    b = false;
    X23();
  }
  else {
    b = false;
    X23();
  }
}

void X22() {
  flip (73/125) {
    if (b) {
      X24();
    }
    else {
      X27();
    }
  }
}

void X23() {
  flip (313/1000) {
    if (b) {
      X21();
    }
    else {
      X24();
    }
  }
}

void X24() {
  flip (71/250) {
    b = true;
    X21();
  }
  else {
    b = false;
    X24();
  }
}

void X25() {
  flip (817/1000) {
    a = true;
    X27();
  }
  else {
    b = false;
    X20();
  }
}

void X26() {
  flip (417/500) {
    if (b) {
      X26();
    }
    else {
      X21();
    }
  }
}

void X27() {
  flip (121/1000) {
    b = false;
    X23();
  }
  else {
    b = true;
    X22();
  }
}

void X28() {
  flip (991/1000) {
    if (a) {
      X29();
    }
    else {
      X27();
    }
  }
}

void X29() {
  flip (137/1000) {
    if (a) {
      X29();
    }
    else {
      X34();
    }
  }
}

void X30() {
  flip (491/500) {
    b = false;
    X33();
  }
  else {
    a = false;
    X29();
  }
}

void X31() {
  X34();
  X30();
}

void X32() {
  flip (183/500) {
    a = false;
    X32();
  }
  else {
    a = true;
    X29();
  }
}

void X33() {
  X27();
  X27();
}

void X34() {
  flip (403/1000) {
    a = false;
    X31();
  }
  else {
    a = false;
    X38();
  }
}

void X35() {
  flip (9/250) {
    a = false;
    X37();
  }
  else {
    a = false;
    X39();
  }
}

void X36() {
  X30();
  X38();
}

void X37() {
  flip (229/1000) {
    if (b) {
      X31();
    }
    else {
      X32();
    }
  }
}

void X38() {
  flip (137/500) {
    b = false;
    X37();
  }
  else {
    b = true;
    X35();
  }
}

void X39() {
  flip (1/500) {
    b = false;
    X33();
  }
  else {
    a = true;
    X35();
  }
}

void X40() {
  flip (407/500) {
    if (b) {
      X45();
    }
    else {
      X44();
    }
  }
}

void X41() {
  flip (32/125) {
    a = true;
    X39();
  }
  else {
    a = false;
    X44();
  }
}

void X42() {
  flip (21/500) {
    if (a) {
      X46();
    }
    else {
      X45();
    }
  }
}

void X43() {
  flip (403/500) {
    if (a) {
      X40();
    }
    else {
      X41();
    }
  }
}

void X44() {
  X44();
  X39();
}

void X45() {
  flip (421/500) {
    if (b) {
      X47();
    }
    else {
      X49();
    }
  }
}

void X46() {
  flip (119/125) {
    a = true;
    X49();
  }
  else {
    a = false;
    X48();
  }
}

void X47() {
  X45();
  X48();
}

void X48() {
  flip (459/1000) {
    if (a) {
      X45();
    }
    else {
      X42();
    }
  }
}

void X49() {
  X46();
  X54();
}

void X50() {
  flip (789/1000) {
    if (a) {
      X47();
    }
    else {
      X52();
    }
  }
}

void X51() {
  flip (57/500) {
    b = true;
    X47();
  }
  else {
    b = true;
    X56();
  }
}

void X52() {
  X49();
  X56();
}

void X53() {
  flip (31/500) {
    if (a) {
      X55();
    }
    else {
      X57();
    }
  }
}

void X54() {
  X50();
  X51();
}

void X55() {
  flip (109/250) {
    if (b) {
      X52();
    }
    else {
      X60();
    }
  }
}

void X56() {
  X50();
  X54();
}

void X57() {
  X53();
  X54();
}

void X58() {
  flip (137/500) {
    a = true;
    X57();
  }
  else {
    b = true;
    X56();
  }
}

void X59() {
  flip (43/200) {
    b = true;
    X60();
  }
  else {
    b = false;
    X56();
  }
}

void X60() {
  flip (221/500) {
    b = false;
    X59();
  }
  else {
    a = true;
    X57();
  }
}

void X61() {
  flip (157/250) {
    if (a) {
      X61();
    }
    else {
      X55();
    }
  }
}

void X62() {
  flip (293/500) {
    if (b) {
      X64();
    }
    else {
      X67();
    }
  }
}

void X63() {
  flip (339/500) {
    a = false;
    X68();
  }
  else {
    b = false;
    X57();
  }
}

void X64() {
  flip (83/1000) {
    if (a) {
      X66();
    }
    else {
      X68();
    }
  }
}

void X65() {
  flip (439/500) {
    a = true;
    X62();
  }
  else {
    a = false;
    X66();
  }
}

void X66() {
  X60();
  X61();
}

void X67() {
  flip (441/1000) {
    b = false;
    X68();
  }
  else {
    a = true;
    X68();
  }
}

void X68() {
  X68();
  X71();
}

void X69() {
  flip (671/1000) {
    a = true;
    X73();
  }
  else {
    a = false;
    X66();
  }
}

void X70() {
  flip (223/500) {
    if (b) {
      X65();
    }
    else {
      X74();
    }
  }
}

void X71() {
  flip (619/1000) {
    b = true;
    X75();
  }
  else {
    a = true;
    X71();
  }
}

void X72() {
  flip (39/40) {
    b = true;
    X66();
  }
  else {
    a = true;
    X72();
  }
}

void X73() {
  flip (73/100) {
    if (a) {
      X67();
    }
    else {
      X68();
    }
  }
}

void X74() {
  X77();
  X75();
}

void X75() {
  X78();
  X70();
}

void X76() {
  flip (579/1000) {
    if (b) {
      X73();
    }
    else {
      X76();
    }
  }
}

void X77() {
  X80();
  X78();
}

void X78() {
  X76();
  X72();
}

void X79() {
  flip (929/1000) {
    if (b) {
      X79();
    }
    else {
      X81();
    }
  }
}

void X80() {
  flip (177/200) {
    b = false;
    X83();
  }
  else {
    a = true;
    X76();
  }
}

void X81() {
  flip (249/500) {
    b = true;
    X81();
  }
  else {
    a = true;
    X81();
  }
}

void X82() {
  flip (163/500) {
    b = true;
    X77();
  }
  else {
    b = false;
    X82();
  }
}

void X83() {
  X86();
  X77();
}

void X84() {
  flip (753/1000) {
    if (a) {
      X84();
    }
    else {
      X81();
    }
  }
}

void X85() {
  X84();
  X90();
}

void X86() {
  X86();
  X85();
}

void X87() {
  X88();
  X92();
}

void X88() {
  flip (231/1000) {
    b = false;
    X92();
  }
  else {
    b = true;
    X90();
  }
}

void X89() {
  flip (241/1000) {
    if (a) {
      X86();
    }
    else {
      X87();
    }
  }
}

void X90() {
  X95();
  X87();
}

void X91() {
  flip (69/250) {
    a = false;
    X96();
  }
  else {
    b = true;
    X94();
  }
}

void X92() {
  flip (99/200) {
    a = true;
    X94();
  }
  else {
    b = false;
    X95();
  }
}

void X93() {
  X88();
  X96();
}

void X94() {
  X98();
  X98();
}

void X95() {
  flip (173/200) {
    a = true;
    X91();
  }
  else {
    a = true;
    X91();
  }
}

void X96() {
  flip (31/200) {
    if (a) {
      X0();
    }
    else {
      X0();
    }
  }
}

void X97() {
  flip (463/1000) {
    b = false;
    X99();
  }
  else {
    a = true;
    X2();
  }
}

void X98() {
  flip (363/500) {
    b = true;
    X1();
  }
  else {
    b = true;
    X2();
  }
}

void X99() {
  flip (191/250) {
    if (a) {
      X1();
    }
    else {
      X2();
    }
  }
}
