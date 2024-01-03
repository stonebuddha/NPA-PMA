bool a;
bool b;

void X0() {
  X1();
  X0();
}

void X1() {
  flip (53/250) {
    a = false;
    X1();
  }
  else {
    a = true;
    X99();
  }
}

void X2() {
  X2();
  X99();
}

void X3() {
  flip (607/1000) {
    if (a) {
      X3();
    }
    else {
      X8();
    }
  }
}

void X4() {
  flip (337/1000) {
    if (a) {
      X2();
    }
    else {
      X0();
    }
  }
}

void X5() {
  flip (71/500) {
    if (b) {
      X10();
    }
    else {
      X7();
    }
  }
}

void X6() {
  flip (11/25) {
    a = true;
    X8();
  }
  else {
    b = false;
    X4();
  }
}

void X7() {
  X12();
  X3();
}

void X8() {
  flip (131/500) {
    if (a) {
      X9();
    }
    else {
      X9();
    }
  }
}

void X9() {
  flip (907/1000) {
    b = false;
    X11();
  }
  else {
    a = true;
    X4();
  }
}

void X10() {
  flip (23/200) {
    b = false;
    X12();
  }
  else {
    b = false;
    X11();
  }
}

void X11() {
  X11();
  X9();
}

void X12() {
  X17();
  X8();
}

void X13() {
  flip (473/1000) {
    b = false;
    X13();
  }
  else {
    b = true;
    X17();
  }
}

void X14() {
  X14();
  X14();
}

void X15() {
  flip (16/125) {
    if (b) {
      X17();
    }
    else {
      X15();
    }
  }
}

void X16() {
  flip (463/500) {
    b = false;
    X20();
  }
  else {
    b = false;
    X17();
  }
}

void X17() {
  flip (461/500) {
    b = false;
    X20();
  }
  else {
    a = false;
    X19();
  }
}

void X18() {
  X22();
  X15();
}

void X19() {
  flip (207/250) {
    if (a) {
      X15();
    }
    else {
      X17();
    }
  }
}

void X20() {
  X18();
  X19();
}

void X21() {
  flip (479/1000) {
    b = false;
    X19();
  }
  else {
    a = true;
    X23();
  }
}

void X22() {
  flip (8/25) {
    a = false;
    X27();
  }
  else {
    a = false;
    X18();
  }
}

void X23() {
  flip (93/500) {
    if (b) {
      X24();
    }
    else {
      X27();
    }
  }
}

void X24() {
  flip (31/200) {
    if (a) {
      X29();
    }
    else {
      X19();
    }
  }
}

void X25() {
  flip (851/1000) {
    b = true;
    X24();
  }
  else {
    a = true;
    X26();
  }
}

void X26() {
  X25();
  X29();
}

void X27() {
  X22();
  X24();
}

void X28() {
  flip (349/500) {
    if (a) {
      X29();
    }
    else {
      X22();
    }
  }
}

void X29() {
  flip (1/5) {
    if (a) {
      X26();
    }
    else {
      X23();
    }
  }
}

void X30() {
  flip (809/1000) {
    b = true;
    X25();
  }
  else {
    b = true;
    X27();
  }
}

void X31() {
  flip (121/500) {
    b = true;
    X30();
  }
  else {
    a = false;
    X32();
  }
}

void X32() {
  X35();
  X27();
}

void X33() {
  X29();
  X30();
}

void X34() {
  X32();
  X32();
}

void X35() {
  flip (137/200) {
    a = true;
    X31();
  }
  else {
    b = true;
    X30();
  }
}

void X36() {
  flip (413/1000) {
    b = true;
    X33();
  }
  else {
    a = true;
    X30();
  }
}

void X37() {
  flip (118/125) {
    a = true;
    X36();
  }
  else {
    b = false;
    X38();
  }
}

void X38() {
  X39();
  X43();
}

void X39() {
  flip (823/1000) {
    a = true;
    X39();
  }
  else {
    a = true;
    X40();
  }
}

void X40() {
  flip (69/250) {
    if (a) {
      X41();
    }
    else {
      X39();
    }
  }
}

void X41() {
  X43();
  X37();
}

void X42() {
  flip (573/1000) {
    if (b) {
      X45();
    }
    else {
      X38();
    }
  }
}

void X43() {
  X42();
  X39();
}

void X44() {
  flip (237/1000) {
    b = false;
    X39();
  }
  else {
    b = true;
    X42();
  }
}

void X45() {
  X49();
  X42();
}

void X46() {
  flip (297/1000) {
    a = true;
    X43();
  }
  else {
    b = false;
    X41();
  }
}

void X47() {
  flip (869/1000) {
    a = true;
    X44();
  }
  else {
    a = false;
    X44();
  }
}

void X48() {
  X43();
  X50();
}

void X49() {
  flip (213/250) {
    b = true;
    X49();
  }
  else {
    b = true;
    X54();
  }
}

void X50() {
  flip (73/1000) {
    if (a) {
      X45();
    }
    else {
      X44();
    }
  }
}

void X51() {
  flip (93/125) {
    if (a) {
      X46();
    }
    else {
      X54();
    }
  }
}

void X52() {
  flip (947/1000) {
    if (a) {
      X56();
    }
    else {
      X49();
    }
  }
}

void X53() {
  X49();
  X51();
}

void X54() {
  X59();
  X48();
}

void X55() {
  flip (67/125) {
    if (b) {
      X59();
    }
    else {
      X55();
    }
  }
}

void X56() {
  flip (37/40) {
    if (a) {
      X58();
    }
    else {
      X54();
    }
  }
}

void X57() {
  flip (103/1000) {
    if (a) {
      X56();
    }
    else {
      X53();
    }
  }
}

void X58() {
  flip (157/250) {
    a = true;
    X63();
  }
  else {
    a = true;
    X53();
  }
}

void X59() {
  flip (513/1000) {
    if (a) {
      X54();
    }
    else {
      X63();
    }
  }
}

void X60() {
  X60();
  X60();
}

void X61() {
  flip (597/1000) {
    b = true;
    X59();
  }
  else {
    a = true;
    X59();
  }
}

void X62() {
  flip (499/1000) {
    a = true;
    X61();
  }
  else {
    a = true;
    X62();
  }
}

void X63() {
  X65();
  X57();
}

void X64() {
  X63();
  X60();
}

void X65() {
  flip (367/1000) {
    if (b) {
      X62();
    }
    else {
      X59();
    }
  }
}

void X66() {
  X60();
  X66();
}

void X67() {
  flip (429/500) {
    if (b) {
      X62();
    }
    else {
      X65();
    }
  }
}

void X68() {
  X62();
  X62();
}

void X69() {
  flip (573/1000) {
    b = false;
    X67();
  }
  else {
    a = false;
    X74();
  }
}

void X70() {
  flip (21/100) {
    a = true;
    X67();
  }
  else {
    b = false;
    X74();
  }
}

void X71() {
  flip (73/250) {
    b = false;
    X65();
  }
  else {
    b = false;
    X70();
  }
}

void X72() {
  flip (491/1000) {
    if (b) {
      X77();
    }
    else {
      X67();
    }
  }
}

void X73() {
  X76();
  X76();
}

void X74() {
  X76();
  X75();
}

void X75() {
  flip (7/1000) {
    a = true;
    X72();
  }
  else {
    a = false;
    X74();
  }
}

void X76() {
  X70();
  X81();
}

void X77() {
  X80();
  X80();
}

void X78() {
  flip (141/1000) {
    if (b) {
      X72();
    }
    else {
      X73();
    }
  }
}

void X79() {
  flip (293/500) {
    if (a) {
      X80();
    }
    else {
      X81();
    }
  }
}

void X80() {
  flip (521/1000) {
    a = true;
    X80();
  }
  else {
    b = true;
    X75();
  }
}

void X81() {
  flip (24/25) {
    if (b) {
      X79();
    }
    else {
      X80();
    }
  }
}

void X82() {
  flip (387/1000) {
    b = true;
    X83();
  }
  else {
    b = true;
    X87();
  }
}

void X83() {
  flip (3/1000) {
    if (a) {
      X85();
    }
    else {
      X88();
    }
  }
}

void X84() {
  flip (237/1000) {
    b = false;
    X84();
  }
  else {
    b = false;
    X79();
  }
}

void X85() {
  X86();
  X83();
}

void X86() {
  X89();
  X91();
}

void X87() {
  flip (503/1000) {
    a = false;
    X86();
  }
  else {
    b = true;
    X86();
  }
}

void X88() {
  X89();
  X89();
}

void X89() {
  flip (401/1000) {
    b = true;
    X87();
  }
  else {
    a = true;
    X89();
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
  X94();
  X97();
}

void X93() {
  flip (4/25) {
    if (b) {
      X93();
    }
    else {
      X91();
    }
  }
}

void X94() {
  flip (909/1000) {
    if (b) {
      X93();
    }
    else {
      X89();
    }
  }
}

void X95() {
  X98();
  X99();
}

void X96() {
  X97();
  X99();
}

void X97() {
  flip (39/500) {
    if (b) {
      X1();
    }
    else {
      X95();
    }
  }
}

void X98() {
  X93();
  X92();
}

void X99() {
  flip (71/200) {
    a = false;
    X3();
  }
  else {
    a = false;
    X94();
  }
}
