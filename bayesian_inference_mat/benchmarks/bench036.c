bool a;
bool b;

void X0() {
  flip (103/500) {
    if (a) {
      X5();
    }
    else {
      X2();
    }
  }
}

void X1() {
  flip (56/125) {
    a = false;
    X96();
  }
  else {
    b = false;
    X0();
  }
}

void X2() {
  X97();
  X2();
}

void X3() {
  X1();
  X8();
}

void X4() {
  flip (657/1000) {
    if (b) {
      X8();
    }
    else {
      X8();
    }
  }
}

void X5() {
  flip (49/500) {
    if (a) {
      X10();
    }
    else {
      X10();
    }
  }
}

void X6() {
  flip (199/250) {
    a = true;
    X11();
  }
  else {
    a = true;
    X6();
  }
}

void X7() {
  flip (94/125) {
    b = false;
    X4();
  }
  else {
    a = false;
    X4();
  }
}

void X8() {
  flip (89/250) {
    if (b) {
      X11();
    }
    else {
      X13();
    }
  }
}

void X9() {
  flip (27/125) {
    if (a) {
      X8();
    }
    else {
      X12();
    }
  }
}

void X10() {
  X13();
  X6();
}

void X11() {
  X14();
  X14();
}

void X12() {
  flip (77/100) {
    if (b) {
      X12();
    }
    else {
      X15();
    }
  }
}

void X13() {
  flip (443/500) {
    if (a) {
      X10();
    }
    else {
      X13();
    }
  }
}

void X14() {
  flip (56/125) {
    b = true;
    X9();
  }
  else {
    a = false;
    X13();
  }
}

void X15() {
  flip (4/125) {
    if (b) {
      X13();
    }
    else {
      X20();
    }
  }
}

void X16() {
  X10();
  X10();
}

void X17() {
  flip (807/1000) {
    if (a) {
      X21();
    }
    else {
      X19();
    }
  }
}

void X18() {
  flip (901/1000) {
    b = true;
    X23();
  }
  else {
    b = true;
    X17();
  }
}

void X19() {
  flip (263/500) {
    if (a) {
      X20();
    }
    else {
      X15();
    }
  }
}

void X20() {
  flip (827/1000) {
    b = false;
    X23();
  }
  else {
    b = false;
    X18();
  }
}

void X21() {
  flip (291/1000) {
    if (b) {
      X21();
    }
    else {
      X19();
    }
  }
}

void X22() {
  flip (49/100) {
    if (b) {
      X18();
    }
    else {
      X26();
    }
  }
}

void X23() {
  flip (69/100) {
    a = false;
    X18();
  }
  else {
    a = true;
    X21();
  }
}

void X24() {
  X22();
  X24();
}

void X25() {
  flip (391/1000) {
    b = false;
    X20();
  }
  else {
    a = false;
    X25();
  }
}

void X26() {
  X25();
  X20();
}

void X27() {
  flip (31/1000) {
    if (b) {
      X28();
    }
    else {
      X26();
    }
  }
}

void X28() {
  X32();
  X30();
}

void X29() {
  flip (183/1000) {
    a = false;
    X24();
  }
  else {
    a = false;
    X33();
  }
}

void X30() {
  flip (18/25) {
    b = false;
    X35();
  }
  else {
    a = true;
    X25();
  }
}

void X31() {
  flip (119/200) {
    a = true;
    X34();
  }
  else {
    a = false;
    X34();
  }
}

void X32() {
  flip (139/500) {
    if (b) {
      X26();
    }
    else {
      X26();
    }
  }
}

void X33() {
  X37();
  X32();
}

void X34() {
  X34();
  X32();
}

void X35() {
  X35();
  X37();
}

void X36() {
  X38();
  X39();
}

void X37() {
  flip (147/500) {
    a = true;
    X31();
  }
  else {
    b = true;
    X39();
  }
}

void X38() {
  flip (73/500) {
    if (b) {
      X43();
    }
    else {
      X40();
    }
  }
}

void X39() {
  X42();
  X43();
}

void X40() {
  X34();
  X39();
}

void X41() {
  flip (319/500) {
    b = false;
    X36();
  }
  else {
    b = true;
    X37();
  }
}

void X42() {
  X45();
  X43();
}

void X43() {
  flip (889/1000) {
    if (b) {
      X37();
    }
    else {
      X38();
    }
  }
}

void X44() {
  X46();
  X45();
}

void X45() {
  X39();
  X40();
}

void X46() {
  flip (729/1000) {
    if (b) {
      X41();
    }
    else {
      X47();
    }
  }
}

void X47() {
  flip (33/1000) {
    if (b) {
      X45();
    }
    else {
      X43();
    }
  }
}

void X48() {
  flip (261/500) {
    b = true;
    X43();
  }
  else {
    a = false;
    X44();
  }
}

void X49() {
  flip (703/1000) {
    if (a) {
      X54();
    }
    else {
      X53();
    }
  }
}

void X50() {
  flip (163/500) {
    b = false;
    X49();
  }
  else {
    a = false;
    X51();
  }
}

void X51() {
  flip (96/125) {
    a = true;
    X46();
  }
  else {
    b = true;
    X46();
  }
}

void X52() {
  X54();
  X54();
}

void X53() {
  X55();
  X58();
}

void X54() {
  flip (31/250) {
    if (a) {
      X48();
    }
    else {
      X50();
    }
  }
}

void X55() {
  X52();
  X58();
}

void X56() {
  flip (357/500) {
    b = true;
    X57();
  }
  else {
    b = true;
    X58();
  }
}

void X57() {
  flip (13/25) {
    a = false;
    X60();
  }
  else {
    b = true;
    X61();
  }
}

void X58() {
  flip (961/1000) {
    a = true;
    X60();
  }
  else {
    b = true;
    X55();
  }
}

void X59() {
  flip (3/5) {
    a = false;
    X57();
  }
  else {
    a = true;
    X57();
  }
}

void X60() {
  flip (247/250) {
    b = false;
    X55();
  }
  else {
    a = false;
    X59();
  }
}

void X61() {
  X58();
  X64();
}

void X62() {
  flip (723/1000) {
    if (b) {
      X66();
    }
    else {
      X67();
    }
  }
}

void X63() {
  X60();
  X67();
}

void X64() {
  flip (37/1000) {
    b = false;
    X68();
  }
  else {
    a = true;
    X66();
  }
}

void X65() {
  X64();
  X66();
}

void X66() {
  X62();
  X64();
}

void X67() {
  X62();
  X65();
}

void X68() {
  flip (129/250) {
    b = true;
    X66();
  }
  else {
    a = false;
    X62();
  }
}

void X69() {
  X72();
  X74();
}

void X70() {
  X72();
  X73();
}

void X71() {
  X76();
  X65();
}

void X72() {
  flip (881/1000) {
    if (b) {
      X76();
    }
    else {
      X68();
    }
  }
}

void X73() {
  flip (157/500) {
    if (a) {
      X69();
    }
    else {
      X75();
    }
  }
}

void X74() {
  flip (39/250) {
    b = true;
    X78();
  }
  else {
    b = false;
    X72();
  }
}

void X75() {
  X79();
  X72();
}

void X76() {
  flip (157/200) {
    b = false;
    X72();
  }
  else {
    b = true;
    X76();
  }
}

void X77() {
  X76();
  X75();
}

void X78() {
  X80();
  X83();
}

void X79() {
  flip (82/125) {
    b = true;
    X78();
  }
  else {
    b = true;
    X84();
  }
}

void X80() {
  X76();
  X79();
}

void X81() {
  flip (187/1000) {
    if (a) {
      X85();
    }
    else {
      X75();
    }
  }
}

void X82() {
  flip (43/100) {
    b = true;
    X86();
  }
  else {
    b = true;
    X87();
  }
}

void X83() {
  flip (73/200) {
    if (a) {
      X77();
    }
    else {
      X84();
    }
  }
}

void X84() {
  flip (441/500) {
    a = true;
    X87();
  }
  else {
    b = false;
    X79();
  }
}

void X85() {
  X87();
  X81();
}

void X86() {
  flip (121/500) {
    if (b) {
      X84();
    }
    else {
      X90();
    }
  }
}

void X87() {
  flip (337/500) {
    if (a) {
      X85();
    }
    else {
      X90();
    }
  }
}

void X88() {
  X88();
  X86();
}

void X89() {
  flip (961/1000) {
    a = false;
    X84();
  }
  else {
    a = false;
    X90();
  }
}

void X90() {
  flip (597/1000) {
    if (b) {
      X92();
    }
    else {
      X85();
    }
  }
}

void X91() {
  flip (627/1000) {
    b = false;
    X88();
  }
  else {
    b = true;
    X87();
  }
}

void X92() {
  flip (249/250) {
    a = false;
    X88();
  }
  else {
    a = false;
    X90();
  }
}

void X93() {
  flip (96/125) {
    a = false;
    X93();
  }
  else {
    a = false;
    X96();
  }
}

void X94() {
  flip (193/200) {
    a = false;
    X97();
  }
  else {
    a = false;
    X90();
  }
}

void X95() {
  flip (47/100) {
    if (a) {
      X90();
    }
    else {
      X98();
    }
  }
}

void X96() {
  flip (389/1000) {
    if (a) {
      X98();
    }
    else {
      X95();
    }
  }
}

void X97() {
  flip (959/1000) {
    a = true;
    X2();
  }
  else {
    a = false;
    X93();
  }
}

void X98() {
  flip (227/1000) {
    b = false;
    X2();
  }
  else {
    a = true;
    X97();
  }
}

void X99() {
  flip (49/100) {
    b = false;
    X0();
  }
  else {
    b = false;
    X0();
  }
}
