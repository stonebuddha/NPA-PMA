bool a;
bool b;

void X0() {
  flip (411/1000) {
    a = true;
    X0();
  }
  else {
    b = true;
    X1();
  }
}

void X1() {
  flip (7/100) {
    a = true;
    X98();
  }
  else {
    a = true;
    X5();
  }
}

void X2() {
  flip (23/1000) {
    b = true;
    X96();
  }
  else {
    b = false;
    X97();
  }
}

void X3() {
  X8();
  X98();
}

void X4() {
  flip (39/100) {
    if (a) {
      X99();
    }
    else {
      X1();
    }
  }
}

void X5() {
  X3();
  X2();
}

void X6() {
  flip (99/125) {
    b = true;
    X0();
  }
  else {
    a = false;
    X5();
  }
}

void X7() {
  X4();
  X3();
}

void X8() {
  X7();
  X12();
}

void X9() {
  flip (111/250) {
    if (b) {
      X14();
    }
    else {
      X7();
    }
  }
}

void X10() {
  flip (83/250) {
    a = false;
    X7();
  }
  else {
    b = false;
    X5();
  }
}

void X11() {
  flip (12/25) {
    b = true;
    X5();
  }
  else {
    b = true;
    X15();
  }
}

void X12() {
  flip (571/1000) {
    a = false;
    X6();
  }
  else {
    b = false;
    X11();
  }
}

void X13() {
  flip (106/125) {
    if (b) {
      X11();
    }
    else {
      X15();
    }
  }
}

void X14() {
  flip (3/4) {
    if (a) {
      X8();
    }
    else {
      X9();
    }
  }
}

void X15() {
  flip (1/8) {
    if (b) {
      X9();
    }
    else {
      X18();
    }
  }
}

void X16() {
  flip (9/20) {
    b = true;
    X15();
  }
  else {
    b = false;
    X14();
  }
}

void X17() {
  X21();
  X16();
}

void X18() {
  flip (89/500) {
    if (a) {
      X17();
    }
    else {
      X13();
    }
  }
}

void X19() {
  flip (27/125) {
    a = false;
    X16();
  }
  else {
    a = true;
    X15();
  }
}

void X20() {
  flip (689/1000) {
    a = true;
    X21();
  }
  else {
    b = true;
    X14();
  }
}

void X21() {
  X15();
  X23();
}

void X22() {
  X17();
  X19();
}

void X23() {
  X23();
  X25();
}

void X24() {
  flip (213/250) {
    b = false;
    X21();
  }
  else {
    a = true;
    X18();
  }
}

void X25() {
  X25();
  X30();
}

void X26() {
  flip (19/40) {
    if (b) {
      X29();
    }
    else {
      X21();
    }
  }
}

void X27() {
  flip (243/1000) {
    b = true;
    X28();
  }
  else {
    b = true;
    X26();
  }
}

void X28() {
  flip (63/1000) {
    b = true;
    X30();
  }
  else {
    a = false;
    X32();
  }
}

void X29() {
  flip (21/100) {
    if (a) {
      X30();
    }
    else {
      X26();
    }
  }
}

void X30() {
  flip (3/8) {
    a = true;
    X27();
  }
  else {
    b = true;
    X31();
  }
}

void X31() {
  X27();
  X34();
}

void X32() {
  flip (699/1000) {
    if (b) {
      X32();
    }
    else {
      X33();
    }
  }
}

void X33() {
  flip (771/1000) {
    a = true;
    X38();
  }
  else {
    b = false;
    X34();
  }
}

void X34() {
  flip (119/1000) {
    a = false;
    X32();
  }
  else {
    a = true;
    X36();
  }
}

void X35() {
  flip (69/500) {
    a = false;
    X38();
  }
  else {
    b = true;
    X39();
  }
}

void X36() {
  X34();
  X39();
}

void X37() {
  flip (697/1000) {
    if (b) {
      X33();
    }
    else {
      X41();
    }
  }
}

void X38() {
  X42();
  X34();
}

void X39() {
  X40();
  X41();
}

void X40() {
  flip (947/1000) {
    if (a) {
      X35();
    }
    else {
      X44();
    }
  }
}

void X41() {
  X41();
  X44();
}

void X42() {
  flip (47/200) {
    if (b) {
      X36();
    }
    else {
      X43();
    }
  }
}

void X43() {
  flip (517/1000) {
    a = true;
    X42();
  }
  else {
    b = false;
    X47();
  }
}

void X44() {
  flip (221/250) {
    a = true;
    X47();
  }
  else {
    b = true;
    X45();
  }
}

void X45() {
  X41();
  X43();
}

void X46() {
  X43();
  X49();
}

void X47() {
  flip (101/200) {
    if (b) {
      X44();
    }
    else {
      X51();
    }
  }
}

void X48() {
  X48();
  X48();
}

void X49() {
  X54();
  X48();
}

void X50() {
  X55();
  X49();
}

void X51() {
  X50();
  X49();
}

void X52() {
  flip (49/250) {
    if (a) {
      X50();
    }
    else {
      X56();
    }
  }
}

void X53() {
  flip (99/500) {
    b = false;
    X58();
  }
  else {
    a = false;
    X52();
  }
}

void X54() {
  X52();
  X51();
}

void X55() {
  X49();
  X53();
}

void X56() {
  X51();
  X53();
}

void X57() {
  flip (647/1000) {
    if (a) {
      X56();
    }
    else {
      X54();
    }
  }
}

void X58() {
  flip (9/200) {
    a = false;
    X53();
  }
  else {
    a = false;
    X61();
  }
}

void X59() {
  flip (537/1000) {
    if (a) {
      X64();
    }
    else {
      X58();
    }
  }
}

void X60() {
  X64();
  X65();
}

void X61() {
  flip (17/250) {
    a = true;
    X63();
  }
  else {
    b = false;
    X56();
  }
}

void X62() {
  flip (211/1000) {
    b = true;
    X67();
  }
  else {
    b = true;
    X56();
  }
}

void X63() {
  X58();
  X58();
}

void X64() {
  flip (257/500) {
    if (b) {
      X63();
    }
    else {
      X63();
    }
  }
}

void X65() {
  X63();
  X68();
}

void X66() {
  flip (871/1000) {
    if (b) {
      X71();
    }
    else {
      X62();
    }
  }
}

void X67() {
  flip (147/1000) {
    if (b) {
      X61();
    }
    else {
      X64();
    }
  }
}

void X68() {
  flip (1/200) {
    if (b) {
      X72();
    }
    else {
      X72();
    }
  }
}

void X69() {
  flip (579/1000) {
    if (b) {
      X72();
    }
    else {
      X71();
    }
  }
}

void X70() {
  flip (463/1000) {
    b = true;
    X72();
  }
  else {
    a = false;
    X74();
  }
}

void X71() {
  flip (349/1000) {
    if (a) {
      X68();
    }
    else {
      X71();
    }
  }
}

void X72() {
  X68();
  X67();
}

void X73() {
  flip (667/1000) {
    if (b) {
      X68();
    }
    else {
      X67();
    }
  }
}

void X74() {
  X74();
  X76();
}

void X75() {
  flip (269/500) {
    if (a) {
      X79();
    }
    else {
      X73();
    }
  }
}

void X76() {
  flip (71/100) {
    if (b) {
      X75();
    }
    else {
      X73();
    }
  }
}

void X77() {
  flip (59/500) {
    if (b) {
      X76();
    }
    else {
      X74();
    }
  }
}

void X78() {
  flip (27/500) {
    b = true;
    X82();
  }
  else {
    b = true;
    X76();
  }
}

void X79() {
  flip (51/125) {
    a = true;
    X82();
  }
  else {
    a = true;
    X73();
  }
}

void X80() {
  flip (347/1000) {
    a = false;
    X80();
  }
  else {
    a = true;
    X84();
  }
}

void X81() {
  flip (39/500) {
    if (a) {
      X77();
    }
    else {
      X75();
    }
  }
}

void X82() {
  flip (349/500) {
    if (a) {
      X81();
    }
    else {
      X80();
    }
  }
}

void X83() {
  X80();
  X79();
}

void X84() {
  flip (71/125) {
    a = false;
    X87();
  }
  else {
    b = true;
    X78();
  }
}

void X85() {
  X89();
  X89();
}

void X86() {
  X80();
  X86();
}

void X87() {
  flip (419/1000) {
    if (b) {
      X86();
    }
    else {
      X87();
    }
  }
}

void X88() {
  flip (929/1000) {
    if (b) {
      X86();
    }
    else {
      X82();
    }
  }
}

void X89() {
  flip (353/1000) {
    a = true;
    X85();
  }
  else {
    a = false;
    X84();
  }
}

void X90() {
  flip (649/1000) {
    if (a) {
      X95();
    }
    else {
      X93();
    }
  }
}

void X91() {
  flip (119/125) {
    b = true;
    X91();
  }
  else {
    a = false;
    X94();
  }
}

void X92() {
  X96();
  X91();
}

void X93() {
  X87();
  X88();
}

void X94() {
  flip (527/1000) {
    if (a) {
      X97();
    }
    else {
      X90();
    }
  }
}

void X95() {
  flip (57/200) {
    if (a) {
      X90();
    }
    else {
      X94();
    }
  }
}

void X96() {
  flip (37/250) {
    if (b) {
      X97();
    }
    else {
      X1();
    }
  }
}

void X97() {
  X96();
  X98();
}

void X98() {
  X97();
  X94();
}

void X99() {
  X1();
  X98();
}
