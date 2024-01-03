bool a;
bool b;

void X0() {
  flip (53/125) {
    a = false;
    X2();
  }
  else {
    b = true;
    X99();
  }
}

void X1() {
  flip (1/1000) {
    b = true;
    X2();
  }
  else {
    a = false;
    X1();
  }
}

void X2() {
  X97();
  X96();
}

void X3() {
  flip (187/1000) {
    if (a) {
      X99();
    }
    else {
      X98();
    }
  }
}

void X4() {
  flip (37/100) {
    if (b) {
      X8();
    }
    else {
      X4();
    }
  }
}

void X5() {
  flip (191/1000) {
    if (a) {
      X8();
    }
    else {
      X3();
    }
  }
}

void X6() {
  X0();
  X5();
}

void X7() {
  flip (239/250) {
    if (b) {
      X3();
    }
    else {
      X2();
    }
  }
}

void X8() {
  X4();
  X11();
}

void X9() {
  flip (49/1000) {
    b = false;
    X3();
  }
  else {
    a = false;
    X8();
  }
}

void X10() {
  flip (919/1000) {
    b = true;
    X15();
  }
  else {
    b = true;
    X13();
  }
}

void X11() {
  flip (87/200) {
    a = false;
    X15();
  }
  else {
    b = true;
    X13();
  }
}

void X12() {
  flip (847/1000) {
    if (b) {
      X8();
    }
    else {
      X11();
    }
  }
}

void X13() {
  X15();
  X16();
}

void X14() {
  flip (209/250) {
    if (b) {
      X11();
    }
    else {
      X11();
    }
  }
}

void X15() {
  X17();
  X18();
}

void X16() {
  X15();
  X10();
}

void X17() {
  flip (73/200) {
    if (b) {
      X21();
    }
    else {
      X13();
    }
  }
}

void X18() {
  flip (869/1000) {
    if (a) {
      X16();
    }
    else {
      X16();
    }
  }
}

void X19() {
  X21();
  X18();
}

void X20() {
  X20();
  X18();
}

void X21() {
  X17();
  X21();
}

void X22() {
  X20();
  X21();
}

void X23() {
  X21();
  X20();
}

void X24() {
  flip (443/500) {
    if (a) {
      X19();
    }
    else {
      X21();
    }
  }
}

void X25() {
  X23();
  X19();
}

void X26() {
  flip (98/125) {
    a = false;
    X20();
  }
  else {
    a = true;
    X22();
  }
}

void X27() {
  flip (413/1000) {
    a = false;
    X29();
  }
  else {
    a = true;
    X23();
  }
}

void X28() {
  X29();
  X27();
}

void X29() {
  flip (87/250) {
    if (a) {
      X33();
    }
    else {
      X29();
    }
  }
}

void X30() {
  flip (167/1000) {
    if (b) {
      X34();
    }
    else {
      X27();
    }
  }
}

void X31() {
  flip (241/1000) {
    if (a) {
      X28();
    }
    else {
      X36();
    }
  }
}

void X32() {
  X30();
  X35();
}

void X33() {
  X30();
  X29();
}

void X34() {
  flip (161/200) {
    a = false;
    X39();
  }
  else {
    a = false;
    X36();
  }
}

void X35() {
  flip (108/125) {
    a = false;
    X33();
  }
  else {
    b = true;
    X36();
  }
}

void X36() {
  flip (837/1000) {
    if (b) {
      X32();
    }
    else {
      X34();
    }
  }
}

void X37() {
  flip (119/125) {
    b = false;
    X32();
  }
  else {
    b = true;
    X39();
  }
}

void X38() {
  flip (243/1000) {
    a = true;
    X36();
  }
  else {
    b = true;
    X40();
  }
}

void X39() {
  X44();
  X38();
}

void X40() {
  X36();
  X37();
}

void X41() {
  flip (63/200) {
    a = true;
    X42();
  }
  else {
    b = true;
    X43();
  }
}

void X42() {
  X41();
  X43();
}

void X43() {
  flip (623/1000) {
    b = false;
    X38();
  }
  else {
    a = false;
    X38();
  }
}

void X44() {
  X49();
  X46();
}

void X45() {
  flip (123/125) {
    if (b) {
      X41();
    }
    else {
      X47();
    }
  }
}

void X46() {
  flip (93/250) {
    if (b) {
      X45();
    }
    else {
      X46();
    }
  }
}

void X47() {
  flip (191/500) {
    if (b) {
      X50();
    }
    else {
      X47();
    }
  }
}

void X48() {
  X46();
  X48();
}

void X49() {
  flip (621/1000) {
    if (a) {
      X51();
    }
    else {
      X51();
    }
  }
}

void X50() {
  flip (63/1000) {
    if (b) {
      X53();
    }
    else {
      X47();
    }
  }
}

void X51() {
  X51();
  X49();
}

void X52() {
  flip (643/1000) {
    if (b) {
      X57();
    }
    else {
      X53();
    }
  }
}

void X53() {
  X51();
  X54();
}

void X54() {
  flip (661/1000) {
    b = false;
    X54();
  }
  else {
    b = true;
    X59();
  }
}

void X55() {
  flip (201/1000) {
    if (a) {
      X56();
    }
    else {
      X59();
    }
  }
}

void X56() {
  flip (483/500) {
    b = true;
    X51();
  }
  else {
    b = false;
    X58();
  }
}

void X57() {
  flip (79/500) {
    if (b) {
      X51();
    }
    else {
      X54();
    }
  }
}

void X58() {
  flip (73/500) {
    b = false;
    X57();
  }
  else {
    a = false;
    X53();
  }
}

void X59() {
  X53();
  X56();
}

void X60() {
  flip (67/200) {
    b = true;
    X65();
  }
  else {
    a = true;
    X54();
  }
}

void X61() {
  X58();
  X58();
}

void X62() {
  flip (983/1000) {
    if (a) {
      X62();
    }
    else {
      X62();
    }
  }
}

void X63() {
  flip (499/500) {
    if (b) {
      X58();
    }
    else {
      X68();
    }
  }
}

void X64() {
  flip (287/1000) {
    a = true;
    X63();
  }
  else {
    a = true;
    X68();
  }
}

void X65() {
  X63();
  X60();
}

void X66() {
  flip (7/250) {
    b = false;
    X64();
  }
  else {
    a = false;
    X69();
  }
}

void X67() {
  X69();
  X63();
}

void X68() {
  X73();
  X69();
}

void X69() {
  X63();
  X63();
}

void X70() {
  flip (421/500) {
    b = true;
    X73();
  }
  else {
    b = false;
    X66();
  }
}

void X71() {
  flip (153/200) {
    b = true;
    X67();
  }
  else {
    b = true;
    X65();
  }
}

void X72() {
  X73();
  X67();
}

void X73() {
  flip (711/1000) {
    b = true;
    X74();
  }
  else {
    b = false;
    X75();
  }
}

void X74() {
  flip (241/250) {
    if (a) {
      X73();
    }
    else {
      X75();
    }
  }
}

void X75() {
  flip (753/1000) {
    if (a) {
      X72();
    }
    else {
      X72();
    }
  }
}

void X76() {
  flip (37/40) {
    if (a) {
      X73();
    }
    else {
      X72();
    }
  }
}

void X77() {
  X71();
  X78();
}

void X78() {
  X73();
  X81();
}

void X79() {
  X83();
  X83();
}

void X80() {
  X83();
  X83();
}

void X81() {
  flip (209/500) {
    b = true;
    X76();
  }
  else {
    b = true;
    X78();
  }
}

void X82() {
  flip (3/5) {
    if (a) {
      X82();
    }
    else {
      X76();
    }
  }
}

void X83() {
  X86();
  X83();
}

void X84() {
  flip (447/500) {
    b = false;
    X84();
  }
  else {
    a = false;
    X82();
  }
}

void X85() {
  X79();
  X85();
}

void X86() {
  flip (124/125) {
    b = false;
    X82();
  }
  else {
    a = true;
    X87();
  }
}

void X87() {
  flip (141/200) {
    a = true;
    X89();
  }
  else {
    a = true;
    X81();
  }
}

void X88() {
  flip (81/200) {
    a = false;
    X92();
  }
  else {
    a = false;
    X89();
  }
}

void X89() {
  flip (137/1000) {
    b = false;
    X88();
  }
  else {
    b = false;
    X90();
  }
}

void X90() {
  flip (399/500) {
    a = false;
    X85();
  }
  else {
    b = false;
    X90();
  }
}

void X91() {
  X96();
  X92();
}

void X92() {
  flip (93/250) {
    b = true;
    X89();
  }
  else {
    a = false;
    X95();
  }
}

void X93() {
  flip (52/125) {
    b = true;
    X95();
  }
  else {
    b = true;
    X87();
  }
}

void X94() {
  flip (43/100) {
    if (a) {
      X95();
    }
    else {
      X93();
    }
  }
}

void X95() {
  flip (21/500) {
    if (a) {
      X95();
    }
    else {
      X0();
    }
  }
}

void X96() {
  flip (309/500) {
    if (b) {
      X96();
    }
    else {
      X90();
    }
  }
}

void X97() {
  X95();
  X2();
}

void X98() {
  flip (141/250) {
    a = true;
    X96();
  }
  else {
    b = false;
    X95();
  }
}

void X99() {
  flip (203/250) {
    a = true;
    X2();
  }
  else {
    a = false;
    X2();
  }
}
