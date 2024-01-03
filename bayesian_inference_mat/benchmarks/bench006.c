bool a;
bool b;

void X0() {
  X2();
  X94();
}

void X1() {
  flip (157/1000) {
    if (a) {
      X97();
    }
    else {
      X95();
    }
  }
}

void X2() {
  flip (813/1000) {
    b = false;
    X7();
  }
  else {
    a = true;
    X97();
  }
}

void X3() {
  flip (119/125) {
    if (b) {
      X99();
    }
    else {
      X1();
    }
  }
}

void X4() {
  X6();
  X3();
}

void X5() {
  X3();
  X99();
}

void X6() {
  X6();
  X2();
}

void X7() {
  X4();
  X11();
}

void X8() {
  X7();
  X10();
}

void X9() {
  X10();
  X14();
}

void X10() {
  X9();
  X12();
}

void X11() {
  flip (269/500) {
    b = false;
    X15();
  }
  else {
    a = false;
    X13();
  }
}

void X12() {
  X9();
  X11();
}

void X13() {
  flip (47/200) {
    if (a) {
      X7();
    }
    else {
      X14();
    }
  }
}

void X14() {
  flip (279/1000) {
    b = false;
    X10();
  }
  else {
    b = false;
    X16();
  }
}

void X15() {
  X13();
  X9();
}

void X16() {
  flip (17/250) {
    b = true;
    X13();
  }
  else {
    a = true;
    X19();
  }
}

void X17() {
  flip (313/1000) {
    b = false;
    X16();
  }
  else {
    a = true;
    X19();
  }
}

void X18() {
  X22();
  X16();
}

void X19() {
  flip (327/1000) {
    b = true;
    X24();
  }
  else {
    a = true;
    X17();
  }
}

void X20() {
  flip (111/200) {
    if (a) {
      X19();
    }
    else {
      X18();
    }
  }
}

void X21() {
  flip (201/500) {
    a = false;
    X17();
  }
  else {
    b = true;
    X26();
  }
}

void X22() {
  flip (179/250) {
    if (a) {
      X23();
    }
    else {
      X21();
    }
  }
}

void X23() {
  flip (357/500) {
    b = false;
    X28();
  }
  else {
    b = true;
    X18();
  }
}

void X24() {
  flip (297/500) {
    a = true;
    X20();
  }
  else {
    b = true;
    X25();
  }
}

void X25() {
  flip (387/500) {
    a = true;
    X25();
  }
  else {
    b = true;
    X25();
  }
}

void X26() {
  X25();
  X24();
}

void X27() {
  X28();
  X22();
}

void X28() {
  flip (397/1000) {
    b = false;
    X25();
  }
  else {
    b = false;
    X23();
  }
}

void X29() {
  X28();
  X24();
}

void X30() {
  X35();
  X29();
}

void X31() {
  flip (24/125) {
    if (b) {
      X28();
    }
    else {
      X29();
    }
  }
}

void X32() {
  flip (58/125) {
    a = true;
    X35();
  }
  else {
    a = false;
    X33();
  }
}

void X33() {
  flip (29/500) {
    if (a) {
      X35();
    }
    else {
      X31();
    }
  }
}

void X34() {
  flip (873/1000) {
    if (b) {
      X37();
    }
    else {
      X38();
    }
  }
}

void X35() {
  flip (13/1000) {
    b = true;
    X39();
  }
  else {
    a = false;
    X34();
  }
}

void X36() {
  flip (501/1000) {
    if (b) {
      X35();
    }
    else {
      X30();
    }
  }
}

void X37() {
  flip (3/1000) {
    if (b) {
      X34();
    }
    else {
      X36();
    }
  }
}

void X38() {
  flip (249/500) {
    a = true;
    X38();
  }
  else {
    b = false;
    X42();
  }
}

void X39() {
  flip (543/1000) {
    a = true;
    X42();
  }
  else {
    a = false;
    X40();
  }
}

void X40() {
  X36();
  X38();
}

void X41() {
  flip (367/500) {
    b = true;
    X38();
  }
  else {
    b = true;
    X38();
  }
}

void X42() {
  flip (381/500) {
    b = false;
    X46();
  }
  else {
    a = true;
    X41();
  }
}

void X43() {
  flip (93/100) {
    b = true;
    X44();
  }
  else {
    a = true;
    X44();
  }
}

void X44() {
  flip (17/100) {
    if (b) {
      X46();
    }
    else {
      X49();
    }
  }
}

void X45() {
  flip (2/125) {
    if (a) {
      X44();
    }
    else {
      X49();
    }
  }
}

void X46() {
  flip (81/125) {
    if (a) {
      X44();
    }
    else {
      X50();
    }
  }
}

void X47() {
  flip (73/100) {
    if (a) {
      X51();
    }
    else {
      X43();
    }
  }
}

void X48() {
  flip (1/250) {
    if (a) {
      X48();
    }
    else {
      X53();
    }
  }
}

void X49() {
  flip (96/125) {
    a = true;
    X43();
  }
  else {
    b = false;
    X53();
  }
}

void X50() {
  flip (149/200) {
    if (a) {
      X55();
    }
    else {
      X46();
    }
  }
}

void X51() {
  X52();
  X53();
}

void X52() {
  flip (141/500) {
    if (a) {
      X52();
    }
    else {
      X50();
    }
  }
}

void X53() {
  flip (31/500) {
    a = true;
    X51();
  }
  else {
    a = true;
    X50();
  }
}

void X54() {
  X52();
  X55();
}

void X55() {
  X52();
  X55();
}

void X56() {
  X55();
  X52();
}

void X57() {
  X55();
  X51();
}

void X58() {
  flip (3/25) {
    a = true;
    X52();
  }
  else {
    b = false;
    X54();
  }
}

void X59() {
  flip (997/1000) {
    b = false;
    X64();
  }
  else {
    b = false;
    X60();
  }
}

void X60() {
  flip (13/100) {
    if (a) {
      X63();
    }
    else {
      X61();
    }
  }
}

void X61() {
  flip (399/1000) {
    a = true;
    X66();
  }
  else {
    b = true;
    X57();
  }
}

void X62() {
  flip (29/100) {
    if (a) {
      X66();
    }
    else {
      X67();
    }
  }
}

void X63() {
  flip (491/1000) {
    if (a) {
      X63();
    }
    else {
      X57();
    }
  }
}

void X64() {
  X69();
  X64();
}

void X65() {
  flip (267/500) {
    b = true;
    X70();
  }
  else {
    a = true;
    X66();
  }
}

void X66() {
  X60();
  X71();
}

void X67() {
  flip (79/250) {
    if (a) {
      X71();
    }
    else {
      X72();
    }
  }
}

void X68() {
  flip (281/1000) {
    a = false;
    X65();
  }
  else {
    b = false;
    X62();
  }
}

void X69() {
  flip (181/1000) {
    if (a) {
      X63();
    }
    else {
      X64();
    }
  }
}

void X70() {
  X75();
  X68();
}

void X71() {
  X70();
  X67();
}

void X72() {
  flip (54/125) {
    b = true;
    X69();
  }
  else {
    b = false;
    X73();
  }
}

void X73() {
  flip (657/1000) {
    b = false;
    X72();
  }
  else {
    a = true;
    X73();
  }
}

void X74() {
  X75();
  X78();
}

void X75() {
  X78();
  X74();
}

void X76() {
  flip (33/40) {
    if (a) {
      X80();
    }
    else {
      X77();
    }
  }
}

void X77() {
  flip (27/100) {
    a = true;
    X71();
  }
  else {
    b = true;
    X79();
  }
}

void X78() {
  flip (63/1000) {
    a = true;
    X78();
  }
  else {
    a = false;
    X79();
  }
}

void X79() {
  X82();
  X73();
}

void X80() {
  flip (873/1000) {
    if (a) {
      X85();
    }
    else {
      X79();
    }
  }
}

void X81() {
  flip (123/500) {
    if (a) {
      X80();
    }
    else {
      X75();
    }
  }
}

void X82() {
  flip (523/1000) {
    if (b) {
      X81();
    }
    else {
      X78();
    }
  }
}

void X83() {
  flip (813/1000) {
    if (b) {
      X86();
    }
    else {
      X85();
    }
  }
}

void X84() {
  flip (19/200) {
    b = false;
    X85();
  }
  else {
    b = true;
    X89();
  }
}

void X85() {
  X82();
  X82();
}

void X86() {
  flip (267/500) {
    b = true;
    X85();
  }
  else {
    a = false;
    X81();
  }
}

void X87() {
  X83();
  X82();
}

void X88() {
  flip (31/100) {
    if (b) {
      X82();
    }
    else {
      X84();
    }
  }
}

void X89() {
  flip (163/250) {
    a = true;
    X92();
  }
  else {
    b = false;
    X84();
  }
}

void X90() {
  X95();
  X93();
}

void X91() {
  X92();
  X93();
}

void X92() {
  flip (749/1000) {
    if (b) {
      X94();
    }
    else {
      X94();
    }
  }
}

void X93() {
  flip (11/1000) {
    b = false;
    X96();
  }
  else {
    a = true;
    X95();
  }
}

void X94() {
  flip (577/1000) {
    if (a) {
      X91();
    }
    else {
      X92();
    }
  }
}

void X95() {
  flip (47/200) {
    if (a) {
      X95();
    }
    else {
      X93();
    }
  }
}

void X96() {
  flip (7/200) {
    if (b) {
      X91();
    }
    else {
      X1();
    }
  }
}

void X97() {
  flip (83/125) {
    b = true;
    X96();
  }
  else {
    a = false;
    X92();
  }
}

void X98() {
  flip (207/250) {
    b = false;
    X93();
  }
  else {
    a = false;
    X97();
  }
}

void X99() {
  X99();
  X99();
}
