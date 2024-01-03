bool a;
bool b;

void X0() {
  flip (97/200) {
    if (b) {
      X0();
    }
    else {
      X98();
    }
  }
}

void X1() {
  X3();
  X0();
}

void X2() {
  flip (59/1000) {
    if (b) {
      X5();
    }
    else {
      X2();
    }
  }
}

void X3() {
  X2();
  X2();
}

void X4() {
  X6();
  X2();
}

void X5() {
  flip (151/1000) {
    if (b) {
      X3();
    }
    else {
      X3();
    }
  }
}

void X6() {
  flip (387/500) {
    a = false;
    X11();
  }
  else {
    a = true;
    X11();
  }
}

void X7() {
  flip (141/500) {
    if (b) {
      X6();
    }
    else {
      X7();
    }
  }
}

void X8() {
  flip (621/1000) {
    if (b) {
      X13();
    }
    else {
      X13();
    }
  }
}

void X9() {
  flip (1/10) {
    if (b) {
      X7();
    }
    else {
      X11();
    }
  }
}

void X10() {
  flip (3/20) {
    if (b) {
      X8();
    }
    else {
      X10();
    }
  }
}

void X11() {
  flip (179/200) {
    b = false;
    X13();
  }
  else {
    a = true;
    X5();
  }
}

void X12() {
  X14();
  X8();
}

void X13() {
  flip (337/1000) {
    if (b) {
      X16();
    }
    else {
      X14();
    }
  }
}

void X14() {
  X8();
  X16();
}

void X15() {
  flip (37/40) {
    if (b) {
      X9();
    }
    else {
      X15();
    }
  }
}

void X16() {
  flip (3/1000) {
    b = false;
    X21();
  }
  else {
    b = false;
    X11();
  }
}

void X17() {
  flip (379/1000) {
    if (b) {
      X13();
    }
    else {
      X19();
    }
  }
}

void X18() {
  flip (133/1000) {
    if (b) {
      X20();
    }
    else {
      X21();
    }
  }
}

void X19() {
  flip (87/125) {
    if (b) {
      X15();
    }
    else {
      X20();
    }
  }
}

void X20() {
  flip (679/1000) {
    if (b) {
      X18();
    }
    else {
      X16();
    }
  }
}

void X21() {
  flip (993/1000) {
    b = false;
    X15();
  }
  else {
    a = true;
    X24();
  }
}

void X22() {
  flip (433/500) {
    if (a) {
      X22();
    }
    else {
      X18();
    }
  }
}

void X23() {
  flip (109/125) {
    if (b) {
      X21();
    }
    else {
      X26();
    }
  }
}

void X24() {
  flip (463/1000) {
    if (b) {
      X24();
    }
    else {
      X28();
    }
  }
}

void X25() {
  flip (23/125) {
    if (b) {
      X30();
    }
    else {
      X21();
    }
  }
}

void X26() {
  flip (143/250) {
    b = false;
    X20();
  }
  else {
    b = true;
    X21();
  }
}

void X27() {
  flip (479/500) {
    b = true;
    X32();
  }
  else {
    b = true;
    X26();
  }
}

void X28() {
  flip (123/200) {
    b = false;
    X26();
  }
  else {
    a = false;
    X23();
  }
}

void X29() {
  X23();
  X28();
}

void X30() {
  flip (59/250) {
    a = true;
    X31();
  }
  else {
    b = true;
    X29();
  }
}

void X31() {
  X30();
  X35();
}

void X32() {
  X33();
  X26();
}

void X33() {
  X28();
  X27();
}

void X34() {
  X37();
  X29();
}

void X35() {
  flip (119/1000) {
    b = false;
    X38();
  }
  else {
    b = true;
    X39();
  }
}

void X36() {
  X36();
  X37();
}

void X37() {
  flip (139/1000) {
    if (a) {
      X38();
    }
    else {
      X42();
    }
  }
}

void X38() {
  flip (657/1000) {
    if (a) {
      X43();
    }
    else {
      X42();
    }
  }
}

void X39() {
  X41();
  X38();
}

void X40() {
  flip (769/1000) {
    if (a) {
      X43();
    }
    else {
      X38();
    }
  }
}

void X41() {
  X40();
  X41();
}

void X42() {
  X42();
  X42();
}

void X43() {
  flip (27/40) {
    if (b) {
      X44();
    }
    else {
      X48();
    }
  }
}

void X44() {
  flip (757/1000) {
    b = false;
    X39();
  }
  else {
    b = false;
    X48();
  }
}

void X45() {
  flip (713/1000) {
    b = true;
    X44();
  }
  else {
    b = true;
    X45();
  }
}

void X46() {
  X51();
  X46();
}

void X47() {
  flip (153/500) {
    if (b) {
      X47();
    }
    else {
      X46();
    }
  }
}

void X48() {
  flip (257/500) {
    if (b) {
      X46();
    }
    else {
      X53();
    }
  }
}

void X49() {
  X50();
  X45();
}

void X50() {
  flip (89/1000) {
    if (b) {
      X46();
    }
    else {
      X53();
    }
  }
}

void X51() {
  flip (247/250) {
    b = false;
    X49();
  }
  else {
    a = false;
    X48();
  }
}

void X52() {
  flip (379/1000) {
    b = false;
    X53();
  }
  else {
    a = false;
    X48();
  }
}

void X53() {
  X55();
  X49();
}

void X54() {
  flip (147/250) {
    a = true;
    X54();
  }
  else {
    a = false;
    X59();
  }
}

void X55() {
  X59();
  X55();
}

void X56() {
  flip (107/200) {
    if (a) {
      X59();
    }
    else {
      X60();
    }
  }
}

void X57() {
  flip (497/500) {
    a = true;
    X57();
  }
  else {
    b = false;
    X56();
  }
}

void X58() {
  flip (18/125) {
    if (b) {
      X52();
    }
    else {
      X58();
    }
  }
}

void X59() {
  flip (161/500) {
    b = true;
    X60();
  }
  else {
    b = false;
    X57();
  }
}

void X60() {
  flip (277/500) {
    a = true;
    X65();
  }
  else {
    a = false;
    X57();
  }
}

void X61() {
  flip (979/1000) {
    a = true;
    X56();
  }
  else {
    a = false;
    X56();
  }
}

void X62() {
  X62();
  X58();
}

void X63() {
  flip (19/125) {
    if (a) {
      X57();
    }
    else {
      X65();
    }
  }
}

void X64() {
  flip (102/125) {
    b = true;
    X68();
  }
  else {
    a = true;
    X67();
  }
}

void X65() {
  X68();
  X65();
}

void X66() {
  flip (13/500) {
    if (a) {
      X70();
    }
    else {
      X71();
    }
  }
}

void X67() {
  X61();
  X63();
}

void X68() {
  X72();
  X68();
}

void X69() {
  flip (413/1000) {
    if (a) {
      X70();
    }
    else {
      X69();
    }
  }
}

void X70() {
  flip (151/250) {
    a = true;
    X69();
  }
  else {
    b = false;
    X66();
  }
}

void X71() {
  flip (129/250) {
    if (b) {
      X73();
    }
    else {
      X75();
    }
  }
}

void X72() {
  flip (12/25) {
    a = true;
    X77();
  }
  else {
    a = true;
    X70();
  }
}

void X73() {
  flip (511/1000) {
    a = false;
    X72();
  }
  else {
    a = true;
    X70();
  }
}

void X74() {
  flip (361/1000) {
    b = true;
    X68();
  }
  else {
    b = true;
    X76();
  }
}

void X75() {
  X71();
  X71();
}

void X76() {
  X76();
  X73();
}

void X77() {
  flip (71/100) {
    a = false;
    X75();
  }
  else {
    a = true;
    X74();
  }
}

void X78() {
  flip (33/250) {
    if (b) {
      X75();
    }
    else {
      X83();
    }
  }
}

void X79() {
  flip (981/1000) {
    if (b) {
      X78();
    }
    else {
      X74();
    }
  }
}

void X80() {
  flip (74/125) {
    if (a) {
      X84();
    }
    else {
      X85();
    }
  }
}

void X81() {
  flip (111/1000) {
    a = false;
    X81();
  }
  else {
    a = false;
    X85();
  }
}

void X82() {
  X80();
  X83();
}

void X83() {
  flip (619/1000) {
    a = true;
    X78();
  }
  else {
    b = true;
    X83();
  }
}

void X84() {
  flip (73/200) {
    a = true;
    X80();
  }
  else {
    a = true;
    X81();
  }
}

void X85() {
  X80();
  X85();
}

void X86() {
  flip (89/100) {
    a = true;
    X83();
  }
  else {
    b = false;
    X81();
  }
}

void X87() {
  flip (53/200) {
    a = false;
    X87();
  }
  else {
    a = false;
    X88();
  }
}

void X88() {
  flip (651/1000) {
    if (a) {
      X92();
    }
    else {
      X87();
    }
  }
}

void X89() {
  X93();
  X88();
}

void X90() {
  flip (457/500) {
    if (b) {
      X93();
    }
    else {
      X95();
    }
  }
}

void X91() {
  X86();
  X90();
}

void X92() {
  flip (32/125) {
    a = false;
    X93();
  }
  else {
    b = false;
    X89();
  }
}

void X93() {
  flip (14/25) {
    b = true;
    X88();
  }
  else {
    a = true;
    X96();
  }
}

void X94() {
  flip (93/200) {
    if (a) {
      X94();
    }
    else {
      X98();
    }
  }
}

void X95() {
  X0();
  X89();
}

void X96() {
  X92();
  X0();
}

void X97() {
  flip (283/1000) {
    if (b) {
      X92();
    }
    else {
      X2();
    }
  }
}

void X98() {
  X96();
  X99();
}

void X99() {
  flip (189/250) {
    if (a) {
      X98();
    }
    else {
      X96();
    }
  }
}
