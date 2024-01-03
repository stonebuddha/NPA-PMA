bool a;
bool b;

void X0() {
  flip (13/1000) {
    b = false;
    X96();
  }
  else {
    a = false;
    X3();
  }
}

void X1() {
  flip (37/200) {
    a = false;
    X99();
  }
  else {
    a = true;
    X99();
  }
}

void X2() {
  flip (137/500) {
    a = false;
    X2();
  }
  else {
    b = true;
    X96();
  }
}

void X3() {
  X8();
  X7();
}

void X4() {
  flip (1/250) {
    a = true;
    X2();
  }
  else {
    a = true;
    X2();
  }
}

void X5() {
  flip (91/100) {
    a = true;
    X4();
  }
  else {
    b = true;
    X1();
  }
}

void X6() {
  flip (67/200) {
    if (a) {
      X9();
    }
    else {
      X8();
    }
  }
}

void X7() {
  X1();
  X1();
}

void X8() {
  X12();
  X4();
}

void X9() {
  flip (1/5) {
    if (b) {
      X8();
    }
    else {
      X9();
    }
  }
}

void X10() {
  X7();
  X8();
}

void X11() {
  flip (69/125) {
    a = false;
    X7();
  }
  else {
    a = true;
    X13();
  }
}

void X12() {
  flip (7/250) {
    if (b) {
      X6();
    }
    else {
      X15();
    }
  }
}

void X13() {
  flip (41/100) {
    if (b) {
      X13();
    }
    else {
      X17();
    }
  }
}

void X14() {
  flip (86/125) {
    a = false;
    X19();
  }
  else {
    b = true;
    X18();
  }
}

void X15() {
  X10();
  X19();
}

void X16() {
  X13();
  X16();
}

void X17() {
  X11();
  X13();
}

void X18() {
  X12();
  X13();
}

void X19() {
  flip (541/1000) {
    if (a) {
      X20();
    }
    else {
      X17();
    }
  }
}

void X20() {
  X20();
  X25();
}

void X21() {
  flip (487/500) {
    a = true;
    X24();
  }
  else {
    a = true;
    X18();
  }
}

void X22() {
  X19();
  X22();
}

void X23() {
  X19();
  X19();
}

void X24() {
  flip (969/1000) {
    if (a) {
      X23();
    }
    else {
      X19();
    }
  }
}

void X25() {
  flip (323/500) {
    if (a) {
      X19();
    }
    else {
      X24();
    }
  }
}

void X26() {
  flip (77/200) {
    if (b) {
      X27();
    }
    else {
      X21();
    }
  }
}

void X27() {
  flip (37/40) {
    a = true;
    X28();
  }
  else {
    a = false;
    X26();
  }
}

void X28() {
  X23();
  X27();
}

void X29() {
  flip (12/125) {
    if (b) {
      X23();
    }
    else {
      X24();
    }
  }
}

void X30() {
  flip (831/1000) {
    b = false;
    X25();
  }
  else {
    a = false;
    X26();
  }
}

void X31() {
  flip (439/500) {
    if (b) {
      X29();
    }
    else {
      X28();
    }
  }
}

void X32() {
  X30();
  X29();
}

void X33() {
  flip (783/1000) {
    b = true;
    X33();
  }
  else {
    b = true;
    X28();
  }
}

void X34() {
  flip (34/125) {
    if (a) {
      X31();
    }
    else {
      X29();
    }
  }
}

void X35() {
  flip (119/500) {
    b = true;
    X32();
  }
  else {
    a = true;
    X32();
  }
}

void X36() {
  X40();
  X38();
}

void X37() {
  flip (23/200) {
    if (a) {
      X33();
    }
    else {
      X41();
    }
  }
}

void X38() {
  flip (47/250) {
    if (b) {
      X42();
    }
    else {
      X34();
    }
  }
}

void X39() {
  flip (117/250) {
    if (a) {
      X39();
    }
    else {
      X36();
    }
  }
}

void X40() {
  X38();
  X35();
}

void X41() {
  flip (717/1000) {
    if (a) {
      X42();
    }
    else {
      X38();
    }
  }
}

void X42() {
  flip (67/200) {
    if (a) {
      X36();
    }
    else {
      X45();
    }
  }
}

void X43() {
  flip (27/200) {
    b = false;
    X41();
  }
  else {
    a = false;
    X48();
  }
}

void X44() {
  X47();
  X42();
}

void X45() {
  flip (109/125) {
    if (b) {
      X40();
    }
    else {
      X44();
    }
  }
}

void X46() {
  X45();
  X46();
}

void X47() {
  flip (333/1000) {
    a = false;
    X49();
  }
  else {
    a = true;
    X51();
  }
}

void X48() {
  flip (131/250) {
    a = true;
    X42();
  }
  else {
    b = true;
    X50();
  }
}

void X49() {
  flip (5/8) {
    if (a) {
      X49();
    }
    else {
      X52();
    }
  }
}

void X50() {
  X46();
  X50();
}

void X51() {
  flip (569/1000) {
    a = true;
    X49();
  }
  else {
    a = true;
    X56();
  }
}

void X52() {
  flip (11/500) {
    if (a) {
      X46();
    }
    else {
      X49();
    }
  }
}

void X53() {
  X54();
  X49();
}

void X54() {
  flip (121/125) {
    if (a) {
      X53();
    }
    else {
      X57();
    }
  }
}

void X55() {
  flip (73/1000) {
    if (a) {
      X50();
    }
    else {
      X54();
    }
  }
}

void X56() {
  flip (961/1000) {
    if (b) {
      X53();
    }
    else {
      X54();
    }
  }
}

void X57() {
  X51();
  X61();
}

void X58() {
  flip (221/500) {
    if (b) {
      X62();
    }
    else {
      X57();
    }
  }
}

void X59() {
  flip (13/40) {
    if (b) {
      X62();
    }
    else {
      X57();
    }
  }
}

void X60() {
  flip (733/1000) {
    a = false;
    X62();
  }
  else {
    a = false;
    X62();
  }
}

void X61() {
  X65();
  X63();
}

void X62() {
  flip (19/200) {
    if (a) {
      X60();
    }
    else {
      X56();
    }
  }
}

void X63() {
  X60();
  X58();
}

void X64() {
  flip (341/1000) {
    if (b) {
      X66();
    }
    else {
      X64();
    }
  }
}

void X65() {
  X66();
  X64();
}

void X66() {
  flip (499/1000) {
    a = true;
    X63();
  }
  else {
    b = false;
    X60();
  }
}

void X67() {
  flip (37/50) {
    b = true;
    X69();
  }
  else {
    b = true;
    X72();
  }
}

void X68() {
  X73();
  X62();
}

void X69() {
  flip (71/500) {
    if (a) {
      X73();
    }
    else {
      X73();
    }
  }
}

void X70() {
  X66();
  X64();
}

void X71() {
  flip (831/1000) {
    b = true;
    X75();
  }
  else {
    b = false;
    X72();
  }
}

void X72() {
  flip (161/1000) {
    a = false;
    X75();
  }
  else {
    a = true;
    X73();
  }
}

void X73() {
  X68();
  X74();
}

void X74() {
  flip (451/1000) {
    if (a) {
      X75();
    }
    else {
      X74();
    }
  }
}

void X75() {
  X71();
  X73();
}

void X76() {
  flip (47/500) {
    if (a) {
      X79();
    }
    else {
      X74();
    }
  }
}

void X77() {
  X78();
  X77();
}

void X78() {
  X73();
  X78();
}

void X79() {
  X81();
  X77();
}

void X80() {
  flip (71/100) {
    if (b) {
      X75();
    }
    else {
      X83();
    }
  }
}

void X81() {
  X83();
  X75();
}

void X82() {
  flip (963/1000) {
    if (b) {
      X84();
    }
    else {
      X81();
    }
  }
}

void X83() {
  X77();
  X88();
}

void X84() {
  flip (81/125) {
    a = false;
    X84();
  }
  else {
    b = true;
    X89();
  }
}

void X85() {
  flip (751/1000) {
    if (a) {
      X82();
    }
    else {
      X89();
    }
  }
}

void X86() {
  flip (71/100) {
    if (a) {
      X83();
    }
    else {
      X82();
    }
  }
}

void X87() {
  flip (7/40) {
    b = true;
    X83();
  }
  else {
    b = true;
    X81();
  }
}

void X88() {
  flip (443/1000) {
    if (b) {
      X83();
    }
    else {
      X85();
    }
  }
}

void X89() {
  flip (1/25) {
    if (a) {
      X84();
    }
    else {
      X90();
    }
  }
}

void X90() {
  X94();
  X85();
}

void X91() {
  flip (623/1000) {
    a = true;
    X86();
  }
  else {
    a = true;
    X86();
  }
}

void X92() {
  flip (213/1000) {
    a = false;
    X92();
  }
  else {
    a = true;
    X94();
  }
}

void X93() {
  X93();
  X93();
}

void X94() {
  flip (183/200) {
    if (b) {
      X89();
    }
    else {
      X91();
    }
  }
}

void X95() {
  X89();
  X89();
}

void X96() {
  flip (217/1000) {
    if (b) {
      X0();
    }
    else {
      X93();
    }
  }
}

void X97() {
  flip (77/250) {
    b = false;
    X92();
  }
  else {
    a = false;
    X2();
  }
}

void X98() {
  flip (271/1000) {
    b = false;
    X3();
  }
  else {
    a = false;
    X1();
  }
}

void X99() {
  flip (127/200) {
    if (b) {
      X99();
    }
    else {
      X93();
    }
  }
}
