bool a;
bool b;

void X0() {
  X1();
  X96();
}

void X1() {
  flip (219/500) {
    if (b) {
      X99();
    }
    else {
      X95();
    }
  }
}

void X2() {
  flip (697/1000) {
    b = false;
    X4();
  }
  else {
    b = false;
    X4();
  }
}

void X3() {
  flip (49/50) {
    b = false;
    X5();
  }
  else {
    a = true;
    X99();
  }
}

void X4() {
  X2();
  X6();
}

void X5() {
  flip (563/1000) {
    b = true;
    X9();
  }
  else {
    a = false;
    X1();
  }
}

void X6() {
  X5();
  X9();
}

void X7() {
  flip (19/50) {
    if (b) {
      X11();
    }
    else {
      X8();
    }
  }
}

void X8() {
  X3();
  X5();
}

void X9() {
  flip (349/1000) {
    if (b) {
      X8();
    }
    else {
      X6();
    }
  }
}

void X10() {
  X6();
  X12();
}

void X11() {
  flip (107/125) {
    a = false;
    X9();
  }
  else {
    a = false;
    X14();
  }
}

void X12() {
  X14();
  X13();
}

void X13() {
  X8();
  X18();
}

void X14() {
  X11();
  X19();
}

void X15() {
  flip (307/500) {
    if (b) {
      X17();
    }
    else {
      X15();
    }
  }
}

void X16() {
  flip (343/1000) {
    if (a) {
      X18();
    }
    else {
      X12();
    }
  }
}

void X17() {
  flip (1/500) {
    b = false;
    X11();
  }
  else {
    a = true;
    X12();
  }
}

void X18() {
  X13();
  X15();
}

void X19() {
  X14();
  X24();
}

void X20() {
  flip (91/200) {
    if (b) {
      X20();
    }
    else {
      X24();
    }
  }
}

void X21() {
  X17();
  X26();
}

void X22() {
  X24();
  X23();
}

void X23() {
  flip (63/1000) {
    if (b) {
      X25();
    }
    else {
      X28();
    }
  }
}

void X24() {
  flip (269/500) {
    if (b) {
      X28();
    }
    else {
      X18();
    }
  }
}

void X25() {
  flip (147/250) {
    a = true;
    X30();
  }
  else {
    a = false;
    X21();
  }
}

void X26() {
  X20();
  X31();
}

void X27() {
  flip (63/100) {
    a = true;
    X23();
  }
  else {
    b = false;
    X30();
  }
}

void X28() {
  X24();
  X33();
}

void X29() {
  flip (417/500) {
    b = false;
    X30();
  }
  else {
    a = true;
    X33();
  }
}

void X30() {
  X30();
  X31();
}

void X31() {
  X36();
  X36();
}

void X32() {
  flip (539/1000) {
    if (a) {
      X37();
    }
    else {
      X32();
    }
  }
}

void X33() {
  X38();
  X31();
}

void X34() {
  flip (783/1000) {
    b = true;
    X39();
  }
  else {
    a = false;
    X38();
  }
}

void X35() {
  X33();
  X32();
}

void X36() {
  X32();
  X39();
}

void X37() {
  flip (9/50) {
    if (b) {
      X40();
    }
    else {
      X37();
    }
  }
}

void X38() {
  X43();
  X40();
}

void X39() {
  flip (443/1000) {
    if (a) {
      X42();
    }
    else {
      X38();
    }
  }
}

void X40() {
  flip (8/25) {
    a = true;
    X40();
  }
  else {
    b = false;
    X38();
  }
}

void X41() {
  X42();
  X43();
}

void X42() {
  X37();
  X46();
}

void X43() {
  flip (869/1000) {
    a = true;
    X46();
  }
  else {
    a = false;
    X43();
  }
}

void X44() {
  flip (179/500) {
    a = false;
    X42();
  }
  else {
    a = true;
    X44();
  }
}

void X45() {
  X46();
  X43();
}

void X46() {
  X46();
  X40();
}

void X47() {
  X47();
  X46();
}

void X48() {
  X48();
  X47();
}

void X49() {
  flip (116/125) {
    b = false;
    X53();
  }
  else {
    a = false;
    X45();
  }
}

void X50() {
  flip (547/1000) {
    if (a) {
      X52();
    }
    else {
      X44();
    }
  }
}

void X51() {
  X46();
  X53();
}

void X52() {
  X54();
  X49();
}

void X53() {
  flip (971/1000) {
    if (b) {
      X49();
    }
    else {
      X52();
    }
  }
}

void X54() {
  flip (23/1000) {
    a = false;
    X54();
  }
  else {
    b = true;
    X48();
  }
}

void X55() {
  flip (97/500) {
    if (a) {
      X49();
    }
    else {
      X54();
    }
  }
}

void X56() {
  flip (913/1000) {
    a = true;
    X55();
  }
  else {
    b = true;
    X54();
  }
}

void X57() {
  flip (13/25) {
    if (a) {
      X58();
    }
    else {
      X60();
    }
  }
}

void X58() {
  X58();
  X53();
}

void X59() {
  flip (341/500) {
    a = true;
    X53();
  }
  else {
    b = true;
    X59();
  }
}

void X60() {
  flip (17/50) {
    if (b) {
      X58();
    }
    else {
      X63();
    }
  }
}

void X61() {
  X62();
  X56();
}

void X62() {
  X58();
  X57();
}

void X63() {
  flip (689/1000) {
    if (b) {
      X65();
    }
    else {
      X63();
    }
  }
}

void X64() {
  flip (73/500) {
    if (b) {
      X61();
    }
    else {
      X60();
    }
  }
}

void X65() {
  X67();
  X67();
}

void X66() {
  flip (129/500) {
    if (a) {
      X70();
    }
    else {
      X60();
    }
  }
}

void X67() {
  flip (189/500) {
    if (b) {
      X61();
    }
    else {
      X71();
    }
  }
}

void X68() {
  X70();
  X70();
}

void X69() {
  X70();
  X68();
}

void X70() {
  flip (9/10) {
    b = false;
    X75();
  }
  else {
    b = false;
    X66();
  }
}

void X71() {
  flip (379/500) {
    a = true;
    X72();
  }
  else {
    b = true;
    X72();
  }
}

void X72() {
  flip (687/1000) {
    if (b) {
      X72();
    }
    else {
      X76();
    }
  }
}

void X73() {
  flip (53/200) {
    if (a) {
      X78();
    }
    else {
      X73();
    }
  }
}

void X74() {
  X74();
  X77();
}

void X75() {
  flip (127/500) {
    a = true;
    X73();
  }
  else {
    b = true;
    X80();
  }
}

void X76() {
  flip (81/1000) {
    b = true;
    X71();
  }
  else {
    b = false;
    X75();
  }
}

void X77() {
  flip (17/25) {
    a = true;
    X80();
  }
  else {
    a = true;
    X72();
  }
}

void X78() {
  X73();
  X80();
}

void X79() {
  flip (569/1000) {
    if (b) {
      X77();
    }
    else {
      X74();
    }
  }
}

void X80() {
  X85();
  X76();
}

void X81() {
  flip (179/500) {
    if (a) {
      X78();
    }
    else {
      X85();
    }
  }
}

void X82() {
  flip (37/250) {
    if (b) {
      X80();
    }
    else {
      X77();
    }
  }
}

void X83() {
  flip (491/1000) {
    if (a) {
      X79();
    }
    else {
      X77();
    }
  }
}

void X84() {
  flip (61/250) {
    a = true;
    X89();
  }
  else {
    a = false;
    X80();
  }
}

void X85() {
  X86();
  X88();
}

void X86() {
  flip (163/200) {
    a = false;
    X89();
  }
  else {
    a = false;
    X91();
  }
}

void X87() {
  flip (701/1000) {
    b = true;
    X89();
  }
  else {
    b = true;
    X91();
  }
}

void X88() {
  X93();
  X90();
}

void X89() {
  X83();
  X91();
}

void X90() {
  flip (69/1000) {
    a = false;
    X90();
  }
  else {
    a = true;
    X93();
  }
}

void X91() {
  X89();
  X88();
}

void X92() {
  X96();
  X96();
}

void X93() {
  X89();
  X91();
}

void X94() {
  flip (721/1000) {
    a = true;
    X92();
  }
  else {
    a = true;
    X93();
  }
}

void X95() {
  X90();
  X92();
}

void X96() {
  flip (69/200) {
    if (a) {
      X97();
    }
    else {
      X94();
    }
  }
}

void X97() {
  X93();
  X97();
}

void X98() {
  X98();
  X94();
}

void X99() {
  X96();
  X0();
}
