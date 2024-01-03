bool a;
bool b;

void X0() {
  flip (101/500) {
    if (a) {
      X97();
    }
    else {
      X99();
    }
  }
}

void X1() {
  flip (16/125) {
    if (a) {
      X97();
    }
    else {
      X95();
    }
  }
}

void X2() {
  flip (161/500) {
    if (a) {
      X5();
    }
    else {
      X1();
    }
  }
}

void X3() {
  flip (351/1000) {
    b = true;
    X3();
  }
  else {
    a = true;
    X6();
  }
}

void X4() {
  flip (21/40) {
    a = true;
    X1();
  }
  else {
    b = true;
    X7();
  }
}

void X5() {
  flip (19/1000) {
    if (b) {
      X1();
    }
    else {
      X5();
    }
  }
}

void X6() {
  flip (761/1000) {
    b = false;
    X2();
  }
  else {
    a = true;
    X5();
  }
}

void X7() {
  flip (351/1000) {
    b = true;
    X4();
  }
  else {
    b = false;
    X11();
  }
}

void X8() {
  flip (117/125) {
    if (a) {
      X4();
    }
    else {
      X3();
    }
  }
}

void X9() {
  X11();
  X4();
}

void X10() {
  X15();
  X5();
}

void X11() {
  X13();
  X6();
}

void X12() {
  flip (969/1000) {
    if (a) {
      X15();
    }
    else {
      X16();
    }
  }
}

void X13() {
  flip (74/125) {
    if (b) {
      X14();
    }
    else {
      X13();
    }
  }
}

void X14() {
  flip (671/1000) {
    if (b) {
      X15();
    }
    else {
      X13();
    }
  }
}

void X15() {
  flip (197/500) {
    if (a) {
      X12();
    }
    else {
      X10();
    }
  }
}

void X16() {
  X21();
  X12();
}

void X17() {
  flip (1/1000) {
    if (a) {
      X12();
    }
    else {
      X12();
    }
  }
}

void X18() {
  flip (363/500) {
    if (a) {
      X23();
    }
    else {
      X19();
    }
  }
}

void X19() {
  flip (713/1000) {
    a = false;
    X19();
  }
  else {
    a = false;
    X19();
  }
}

void X20() {
  X17();
  X25();
}

void X21() {
  X24();
  X26();
}

void X22() {
  flip (841/1000) {
    b = true;
    X25();
  }
  else {
    a = false;
    X23();
  }
}

void X23() {
  flip (489/500) {
    b = false;
    X18();
  }
  else {
    a = false;
    X17();
  }
}

void X24() {
  flip (1/8) {
    if (a) {
      X28();
    }
    else {
      X19();
    }
  }
}

void X25() {
  flip (17/500) {
    a = true;
    X29();
  }
  else {
    b = false;
    X28();
  }
}

void X26() {
  flip (3/20) {
    if (a) {
      X21();
    }
    else {
      X21();
    }
  }
}

void X27() {
  X25();
  X28();
}

void X28() {
  X31();
  X29();
}

void X29() {
  X27();
  X32();
}

void X30() {
  flip (107/250) {
    if (a) {
      X33();
    }
    else {
      X28();
    }
  }
}

void X31() {
  X32();
  X29();
}

void X32() {
  flip (869/1000) {
    a = true;
    X36();
  }
  else {
    b = false;
    X35();
  }
}

void X33() {
  flip (117/250) {
    a = false;
    X27();
  }
  else {
    b = true;
    X36();
  }
}

void X34() {
  flip (159/500) {
    b = true;
    X37();
  }
  else {
    a = false;
    X30();
  }
}

void X35() {
  X29();
  X40();
}

void X36() {
  X30();
  X40();
}

void X37() {
  flip (829/1000) {
    b = true;
    X38();
  }
  else {
    a = false;
    X34();
  }
}

void X38() {
  flip (161/250) {
    if (a) {
      X32();
    }
    else {
      X37();
    }
  }
}

void X39() {
  X33();
  X42();
}

void X40() {
  flip (93/200) {
    if (b) {
      X39();
    }
    else {
      X37();
    }
  }
}

void X41() {
  X37();
  X37();
}

void X42() {
  X38();
  X45();
}

void X43() {
  flip (61/125) {
    b = false;
    X41();
  }
  else {
    a = false;
    X43();
  }
}

void X44() {
  X48();
  X42();
}

void X45() {
  X41();
  X41();
}

void X46() {
  flip (977/1000) {
    if (a) {
      X48();
    }
    else {
      X41();
    }
  }
}

void X47() {
  flip (743/1000) {
    if (b) {
      X43();
    }
    else {
      X49();
    }
  }
}

void X48() {
  X49();
  X45();
}

void X49() {
  flip (841/1000) {
    b = false;
    X46();
  }
  else {
    a = true;
    X51();
  }
}

void X50() {
  X44();
  X55();
}

void X51() {
  flip (209/1000) {
    if (b) {
      X48();
    }
    else {
      X47();
    }
  }
}

void X52() {
  flip (963/1000) {
    a = true;
    X53();
  }
  else {
    b = false;
    X52();
  }
}

void X53() {
  X54();
  X54();
}

void X54() {
  X52();
  X57();
}

void X55() {
  flip (157/1000) {
    if (a) {
      X58();
    }
    else {
      X60();
    }
  }
}

void X56() {
  flip (169/1000) {
    if (b) {
      X55();
    }
    else {
      X50();
    }
  }
}

void X57() {
  X52();
  X57();
}

void X58() {
  flip (58/125) {
    a = true;
    X63();
  }
  else {
    a = true;
    X57();
  }
}

void X59() {
  flip (193/250) {
    if (a) {
      X55();
    }
    else {
      X53();
    }
  }
}

void X60() {
  flip (23/25) {
    a = false;
    X62();
  }
  else {
    a = true;
    X56();
  }
}

void X61() {
  flip (563/1000) {
    b = true;
    X66();
  }
  else {
    b = true;
    X60();
  }
}

void X62() {
  flip (7/200) {
    a = true;
    X61();
  }
  else {
    a = true;
    X66();
  }
}

void X63() {
  flip (63/500) {
    a = false;
    X57();
  }
  else {
    b = true;
    X63();
  }
}

void X64() {
  flip (118/125) {
    if (b) {
      X62();
    }
    else {
      X60();
    }
  }
}

void X65() {
  X69();
  X65();
}

void X66() {
  X62();
  X67();
}

void X67() {
  flip (213/500) {
    a = true;
    X64();
  }
  else {
    b = true;
    X62();
  }
}

void X68() {
  flip (207/500) {
    if (a) {
      X71();
    }
    else {
      X64();
    }
  }
}

void X69() {
  flip (443/500) {
    a = false;
    X64();
  }
  else {
    a = false;
    X63();
  }
}

void X70() {
  X73();
  X71();
}

void X71() {
  flip (73/100) {
    if (b) {
      X68();
    }
    else {
      X76();
    }
  }
}

void X72() {
  flip (98/125) {
    if (b) {
      X66();
    }
    else {
      X66();
    }
  }
}

void X73() {
  flip (657/1000) {
    if (b) {
      X74();
    }
    else {
      X74();
    }
  }
}

void X74() {
  flip (189/250) {
    if (b) {
      X69();
    }
    else {
      X75();
    }
  }
}

void X75() {
  X74();
  X72();
}

void X76() {
  flip (91/125) {
    a = false;
    X77();
  }
  else {
    a = false;
    X71();
  }
}

void X77() {
  X81();
  X73();
}

void X78() {
  flip (589/1000) {
    b = false;
    X79();
  }
  else {
    a = false;
    X80();
  }
}

void X79() {
  X84();
  X75();
}

void X80() {
  flip (117/200) {
    b = true;
    X75();
  }
  else {
    a = true;
    X78();
  }
}

void X81() {
  flip (179/250) {
    b = false;
    X77();
  }
  else {
    a = false;
    X83();
  }
}

void X82() {
  flip (141/1000) {
    if (a) {
      X84();
    }
    else {
      X80();
    }
  }
}

void X83() {
  flip (73/1000) {
    if (a) {
      X88();
    }
    else {
      X83();
    }
  }
}

void X84() {
  X86();
  X84();
}

void X85() {
  X86();
  X80();
}

void X86() {
  X88();
  X88();
}

void X87() {
  flip (257/500) {
    if (b) {
      X92();
    }
    else {
      X83();
    }
  }
}

void X88() {
  flip (383/1000) {
    a = true;
    X84();
  }
  else {
    b = true;
    X87();
  }
}

void X89() {
  flip (59/200) {
    if (a) {
      X87();
    }
    else {
      X88();
    }
  }
}

void X90() {
  X92();
  X90();
}

void X91() {
  flip (73/100) {
    b = true;
    X89();
  }
  else {
    b = true;
    X90();
  }
}

void X92() {
  X88();
  X86();
}

void X93() {
  flip (43/50) {
    a = true;
    X91();
  }
  else {
    b = false;
    X92();
  }
}

void X94() {
  X91();
  X97();
}

void X95() {
  flip (137/250) {
    if (a) {
      X96();
    }
    else {
      X97();
    }
  }
}

void X96() {
  X97();
  X0();
}

void X97() {
  flip (991/1000) {
    a = true;
    X0();
  }
  else {
    b = false;
    X0();
  }
}

void X98() {
  flip (1/40) {
    if (a) {
      X2();
    }
    else {
      X99();
    }
  }
}

void X99() {
  flip (257/500) {
    b = true;
    X2();
  }
  else {
    a = true;
    X93();
  }
}
