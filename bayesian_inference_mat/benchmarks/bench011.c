bool a;
bool b;

void X0() {
  flip (8/125) {
    if (a) {
      X96();
    }
    else {
      X5();
    }
  }
}

void X1() {
  flip (479/1000) {
    a = true;
    X96();
  }
  else {
    b = true;
    X4();
  }
}

void X2() {
  X99();
  X0();
}

void X3() {
  flip (271/1000) {
    b = false;
    X8();
  }
  else {
    a = true;
    X7();
  }
}

void X4() {
  flip (8/25) {
    if (b) {
      X98();
    }
    else {
      X4();
    }
  }
}

void X5() {
  flip (99/1000) {
    b = true;
    X1();
  }
  else {
    b = true;
    X7();
  }
}

void X6() {
  flip (543/1000) {
    if (b) {
      X7();
    }
    else {
      X0();
    }
  }
}

void X7() {
  flip (69/1000) {
    if (b) {
      X4();
    }
    else {
      X1();
    }
  }
}

void X8() {
  flip (207/250) {
    a = false;
    X9();
  }
  else {
    a = true;
    X5();
  }
}

void X9() {
  flip (441/500) {
    b = true;
    X11();
  }
  else {
    a = true;
    X7();
  }
}

void X10() {
  flip (8/25) {
    b = false;
    X9();
  }
  else {
    b = true;
    X11();
  }
}

void X11() {
  flip (67/1000) {
    b = false;
    X14();
  }
  else {
    a = false;
    X6();
  }
}

void X12() {
  X12();
  X9();
}

void X13() {
  X9();
  X16();
}

void X14() {
  flip (963/1000) {
    if (b) {
      X18();
    }
    else {
      X18();
    }
  }
}

void X15() {
  flip (207/250) {
    if (b) {
      X19();
    }
    else {
      X14();
    }
  }
}

void X16() {
  flip (179/200) {
    b = true;
    X16();
  }
  else {
    a = true;
    X16();
  }
}

void X17() {
  flip (161/1000) {
    a = false;
    X19();
  }
  else {
    b = true;
    X18();
  }
}

void X18() {
  flip (49/50) {
    if (a) {
      X18();
    }
    else {
      X16();
    }
  }
}

void X19() {
  flip (107/1000) {
    a = true;
    X21();
  }
  else {
    a = false;
    X23();
  }
}

void X20() {
  flip (427/1000) {
    if (b) {
      X18();
    }
    else {
      X19();
    }
  }
}

void X21() {
  flip (89/250) {
    b = true;
    X21();
  }
  else {
    a = true;
    X17();
  }
}

void X22() {
  flip (69/500) {
    b = true;
    X25();
  }
  else {
    a = false;
    X16();
  }
}

void X23() {
  X17();
  X17();
}

void X24() {
  flip (337/1000) {
    b = true;
    X28();
  }
  else {
    a = true;
    X28();
  }
}

void X25() {
  flip (133/200) {
    if (b) {
      X22();
    }
    else {
      X23();
    }
  }
}

void X26() {
  flip (147/1000) {
    b = true;
    X27();
  }
  else {
    a = false;
    X29();
  }
}

void X27() {
  flip (47/250) {
    a = false;
    X29();
  }
  else {
    a = true;
    X29();
  }
}

void X28() {
  flip (98/125) {
    if (b) {
      X23();
    }
    else {
      X32();
    }
  }
}

void X29() {
  flip (467/500) {
    a = false;
    X31();
  }
  else {
    a = true;
    X24();
  }
}

void X30() {
  flip (103/250) {
    if (a) {
      X24();
    }
    else {
      X29();
    }
  }
}

void X31() {
  flip (631/1000) {
    if (b) {
      X33();
    }
    else {
      X31();
    }
  }
}

void X32() {
  flip (981/1000) {
    a = true;
    X34();
  }
  else {
    a = true;
    X29();
  }
}

void X33() {
  X27();
  X34();
}

void X34() {
  flip (321/1000) {
    b = false;
    X34();
  }
  else {
    a = false;
    X37();
  }
}

void X35() {
  flip (127/250) {
    if (a) {
      X36();
    }
    else {
      X35();
    }
  }
}

void X36() {
  X34();
  X35();
}

void X37() {
  X37();
  X34();
}

void X38() {
  X41();
  X36();
}

void X39() {
  flip (93/500) {
    a = false;
    X33();
  }
  else {
    b = false;
    X35();
  }
}

void X40() {
  flip (49/100) {
    a = true;
    X36();
  }
  else {
    a = false;
    X38();
  }
}

void X41() {
  flip (43/100) {
    b = true;
    X42();
  }
  else {
    b = true;
    X42();
  }
}

void X42() {
  flip (1/500) {
    if (b) {
      X37();
    }
    else {
      X40();
    }
  }
}

void X43() {
  flip (71/100) {
    a = false;
    X38();
  }
  else {
    a = false;
    X39();
  }
}

void X44() {
  X39();
  X42();
}

void X45() {
  flip (783/1000) {
    b = true;
    X39();
  }
  else {
    b = false;
    X42();
  }
}

void X46() {
  flip (28/125) {
    if (b) {
      X50();
    }
    else {
      X46();
    }
  }
}

void X47() {
  flip (89/500) {
    if (b) {
      X42();
    }
    else {
      X42();
    }
  }
}

void X48() {
  flip (149/500) {
    if (b) {
      X48();
    }
    else {
      X51();
    }
  }
}

void X49() {
  X44();
  X50();
}

void X50() {
  flip (3/4) {
    if (b) {
      X54();
    }
    else {
      X49();
    }
  }
}

void X51() {
  flip (7/40) {
    a = false;
    X45();
  }
  else {
    a = true;
    X50();
  }
}

void X52() {
  flip (777/1000) {
    if (b) {
      X50();
    }
    else {
      X48();
    }
  }
}

void X53() {
  flip (691/1000) {
    a = true;
    X47();
  }
  else {
    b = false;
    X49();
  }
}

void X54() {
  flip (7/50) {
    if (b) {
      X48();
    }
    else {
      X59();
    }
  }
}

void X55() {
  flip (873/1000) {
    b = true;
    X49();
  }
  else {
    b = false;
    X57();
  }
}

void X56() {
  flip (87/125) {
    if (b) {
      X61();
    }
    else {
      X57();
    }
  }
}

void X57() {
  flip (879/1000) {
    if (b) {
      X51();
    }
    else {
      X54();
    }
  }
}

void X58() {
  flip (457/1000) {
    if (b) {
      X58();
    }
    else {
      X52();
    }
  }
}

void X59() {
  flip (111/200) {
    b = true;
    X58();
  }
  else {
    a = true;
    X59();
  }
}

void X60() {
  flip (159/200) {
    if (b) {
      X61();
    }
    else {
      X62();
    }
  }
}

void X61() {
  flip (269/1000) {
    b = true;
    X66();
  }
  else {
    b = false;
    X58();
  }
}

void X62() {
  flip (73/125) {
    a = true;
    X59();
  }
  else {
    a = true;
    X64();
  }
}

void X63() {
  X68();
  X66();
}

void X64() {
  flip (13/50) {
    b = true;
    X60();
  }
  else {
    a = false;
    X58();
  }
}

void X65() {
  flip (79/1000) {
    if (a) {
      X60();
    }
    else {
      X69();
    }
  }
}

void X66() {
  X69();
  X61();
}

void X67() {
  flip (5/8) {
    if (b) {
      X67();
    }
    else {
      X62();
    }
  }
}

void X68() {
  flip (71/250) {
    b = true;
    X65();
  }
  else {
    b = true;
    X63();
  }
}

void X69() {
  flip (88/125) {
    a = true;
    X73();
  }
  else {
    a = true;
    X66();
  }
}

void X70() {
  flip (321/1000) {
    if (a) {
      X66();
    }
    else {
      X72();
    }
  }
}

void X71() {
  flip (7/100) {
    if (b) {
      X69();
    }
    else {
      X73();
    }
  }
}

void X72() {
  flip (43/500) {
    if (a) {
      X77();
    }
    else {
      X76();
    }
  }
}

void X73() {
  X69();
  X71();
}

void X74() {
  flip (279/1000) {
    a = true;
    X76();
  }
  else {
    a = false;
    X71();
  }
}

void X75() {
  flip (81/250) {
    if (a) {
      X73();
    }
    else {
      X80();
    }
  }
}

void X76() {
  flip (459/500) {
    if (a) {
      X78();
    }
    else {
      X79();
    }
  }
}

void X77() {
  flip (81/100) {
    if (b) {
      X78();
    }
    else {
      X72();
    }
  }
}

void X78() {
  X77();
  X78();
}

void X79() {
  flip (949/1000) {
    b = false;
    X77();
  }
  else {
    a = false;
    X73();
  }
}

void X80() {
  X77();
  X76();
}

void X81() {
  X75();
  X85();
}

void X82() {
  flip (41/125) {
    b = true;
    X87();
  }
  else {
    b = false;
    X84();
  }
}

void X83() {
  flip (77/1000) {
    if (b) {
      X86();
    }
    else {
      X77();
    }
  }
}

void X84() {
  X78();
  X80();
}

void X85() {
  flip (39/1000) {
    if (b) {
      X81();
    }
    else {
      X83();
    }
  }
}

void X86() {
  flip (241/250) {
    b = true;
    X88();
  }
  else {
    a = false;
    X86();
  }
}

void X87() {
  flip (223/1000) {
    a = true;
    X88();
  }
  else {
    b = true;
    X85();
  }
}

void X88() {
  flip (111/200) {
    if (a) {
      X82();
    }
    else {
      X89();
    }
  }
}

void X89() {
  flip (999/1000) {
    a = true;
    X88();
  }
  else {
    b = true;
    X92();
  }
}

void X90() {
  X87();
  X93();
}

void X91() {
  flip (107/500) {
    a = true;
    X86();
  }
  else {
    b = true;
    X94();
  }
}

void X92() {
  X90();
  X88();
}

void X93() {
  flip (71/125) {
    if (b) {
      X93();
    }
    else {
      X92();
    }
  }
}

void X94() {
  X98();
  X93();
}

void X95() {
  flip (189/250) {
    if (a) {
      X96();
    }
    else {
      X94();
    }
  }
}

void X96() {
  flip (23/40) {
    if (a) {
      X0();
    }
    else {
      X1();
    }
  }
}

void X97() {
  flip (551/1000) {
    if (a) {
      X96();
    }
    else {
      X96();
    }
  }
}

void X98() {
  flip (263/500) {
    if (a) {
      X97();
    }
    else {
      X2();
    }
  }
}

void X99() {
  flip (147/500) {
    if (b) {
      X4();
    }
    else {
      X2();
    }
  }
}
