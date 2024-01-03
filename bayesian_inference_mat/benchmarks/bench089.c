bool a;
bool b;

void X0() {
  X95();
  X2();
}

void X1() {
  flip (529/1000) {
    if (b) {
      X1();
    }
    else {
      X5();
    }
  }
}

void X2() {
  flip (43/125) {
    if (b) {
      X97();
    }
    else {
      X98();
    }
  }
}

void X3() {
  X97();
  X3();
}

void X4() {
  flip (201/500) {
    if (b) {
      X5();
    }
    else {
      X5();
    }
  }
}

void X5() {
  flip (83/200) {
    a = false;
    X5();
  }
  else {
    a = false;
    X0();
  }
}

void X6() {
  flip (67/1000) {
    if (a) {
      X5();
    }
    else {
      X7();
    }
  }
}

void X7() {
  flip (191/200) {
    a = false;
    X5();
  }
  else {
    b = false;
    X7();
  }
}

void X8() {
  flip (3/8) {
    a = false;
    X5();
  }
  else {
    a = true;
    X8();
  }
}

void X9() {
  flip (27/100) {
    if (a) {
      X8();
    }
    else {
      X12();
    }
  }
}

void X10() {
  X14();
  X9();
}

void X11() {
  flip (543/1000) {
    a = false;
    X15();
  }
  else {
    b = false;
    X14();
  }
}

void X12() {
  X15();
  X16();
}

void X13() {
  flip (31/200) {
    a = true;
    X15();
  }
  else {
    a = false;
    X17();
  }
}

void X14() {
  X16();
  X11();
}

void X15() {
  X17();
  X18();
}

void X16() {
  flip (423/1000) {
    if (b) {
      X18();
    }
    else {
      X15();
    }
  }
}

void X17() {
  flip (697/1000) {
    a = true;
    X13();
  }
  else {
    b = false;
    X16();
  }
}

void X18() {
  X15();
  X22();
}

void X19() {
  X24();
  X23();
}

void X20() {
  flip (119/200) {
    b = true;
    X17();
  }
  else {
    a = false;
    X22();
  }
}

void X21() {
  flip (443/500) {
    if (a) {
      X21();
    }
    else {
      X19();
    }
  }
}

void X22() {
  flip (27/1000) {
    if (a) {
      X24();
    }
    else {
      X16();
    }
  }
}

void X23() {
  flip (61/250) {
    if (a) {
      X18();
    }
    else {
      X26();
    }
  }
}

void X24() {
  flip (997/1000) {
    if (b) {
      X29();
    }
    else {
      X29();
    }
  }
}

void X25() {
  flip (114/125) {
    a = false;
    X21();
  }
  else {
    b = true;
    X25();
  }
}

void X26() {
  flip (677/1000) {
    b = true;
    X27();
  }
  else {
    a = true;
    X25();
  }
}

void X27() {
  X29();
  X30();
}

void X28() {
  X24();
  X23();
}

void X29() {
  flip (89/500) {
    if (a) {
      X33();
    }
    else {
      X33();
    }
  }
}

void X30() {
  flip (549/1000) {
    a = false;
    X30();
  }
  else {
    b = true;
    X34();
  }
}

void X31() {
  X31();
  X25();
}

void X32() {
  flip (347/500) {
    a = false;
    X35();
  }
  else {
    b = true;
    X32();
  }
}

void X33() {
  X29();
  X36();
}

void X34() {
  flip (13/100) {
    a = false;
    X32();
  }
  else {
    a = false;
    X32();
  }
}

void X35() {
  X39();
  X30();
}

void X36() {
  flip (23/50) {
    if (a) {
      X36();
    }
    else {
      X35();
    }
  }
}

void X37() {
  X36();
  X35();
}

void X38() {
  flip (929/1000) {
    if (b) {
      X36();
    }
    else {
      X39();
    }
  }
}

void X39() {
  flip (67/125) {
    if (a) {
      X43();
    }
    else {
      X36();
    }
  }
}

void X40() {
  flip (989/1000) {
    if (b) {
      X37();
    }
    else {
      X40();
    }
  }
}

void X41() {
  X45();
  X41();
}

void X42() {
  X43();
  X45();
}

void X43() {
  X45();
  X39();
}

void X44() {
  flip (179/250) {
    if (b) {
      X38();
    }
    else {
      X38();
    }
  }
}

void X45() {
  flip (323/500) {
    if (a) {
      X48();
    }
    else {
      X49();
    }
  }
}

void X46() {
  flip (19/20) {
    if (b) {
      X46();
    }
    else {
      X50();
    }
  }
}

void X47() {
  flip (283/500) {
    if (a) {
      X41();
    }
    else {
      X50();
    }
  }
}

void X48() {
  X47();
  X43();
}

void X49() {
  flip (787/1000) {
    b = true;
    X46();
  }
  else {
    a = false;
    X53();
  }
}

void X50() {
  flip (23/250) {
    b = false;
    X55();
  }
  else {
    b = false;
    X52();
  }
}

void X51() {
  X50();
  X47();
}

void X52() {
  X54();
  X50();
}

void X53() {
  X56();
  X50();
}

void X54() {
  flip (111/125) {
    if (a) {
      X51();
    }
    else {
      X50();
    }
  }
}

void X55() {
  flip (22/25) {
    b = true;
    X49();
  }
  else {
    a = true;
    X51();
  }
}

void X56() {
  X54();
  X55();
}

void X57() {
  flip (47/200) {
    b = false;
    X62();
  }
  else {
    a = false;
    X57();
  }
}

void X58() {
  X61();
  X63();
}

void X59() {
  flip (229/500) {
    a = false;
    X56();
  }
  else {
    a = true;
    X59();
  }
}

void X60() {
  flip (191/200) {
    if (b) {
      X65();
    }
    else {
      X63();
    }
  }
}

void X61() {
  flip (111/200) {
    b = false;
    X66();
  }
  else {
    a = false;
    X58();
  }
}

void X62() {
  flip (421/500) {
    if (a) {
      X61();
    }
    else {
      X65();
    }
  }
}

void X63() {
  X63();
  X67();
}

void X64() {
  flip (609/1000) {
    b = true;
    X66();
  }
  else {
    a = false;
    X63();
  }
}

void X65() {
  flip (97/100) {
    if (b) {
      X70();
    }
    else {
      X64();
    }
  }
}

void X66() {
  flip (71/250) {
    b = false;
    X70();
  }
  else {
    b = true;
    X62();
  }
}

void X67() {
  flip (8/25) {
    a = false;
    X68();
  }
  else {
    a = false;
    X71();
  }
}

void X68() {
  X71();
  X72();
}

void X69() {
  X64();
  X63();
}

void X70() {
  flip (353/500) {
    a = true;
    X68();
  }
  else {
    a = true;
    X66();
  }
}

void X71() {
  X65();
  X66();
}

void X72() {
  flip (537/1000) {
    a = true;
    X69();
  }
  else {
    b = false;
    X68();
  }
}

void X73() {
  flip (521/1000) {
    a = true;
    X72();
  }
  else {
    b = true;
    X69();
  }
}

void X74() {
  flip (261/500) {
    if (a) {
      X79();
    }
    else {
      X76();
    }
  }
}

void X75() {
  flip (349/500) {
    if (a) {
      X69();
    }
    else {
      X73();
    }
  }
}

void X76() {
  X74();
  X71();
}

void X77() {
  flip (899/1000) {
    b = false;
    X79();
  }
  else {
    a = true;
    X79();
  }
}

void X78() {
  flip (423/500) {
    if (a) {
      X76();
    }
    else {
      X79();
    }
  }
}

void X79() {
  flip (647/1000) {
    a = false;
    X75();
  }
  else {
    b = false;
    X76();
  }
}

void X80() {
  X75();
  X79();
}

void X81() {
  flip (7/125) {
    b = false;
    X80();
  }
  else {
    b = false;
    X83();
  }
}

void X82() {
  flip (97/100) {
    b = false;
    X78();
  }
  else {
    b = false;
    X76();
  }
}

void X83() {
  flip (149/200) {
    b = false;
    X85();
  }
  else {
    b = false;
    X80();
  }
}

void X84() {
  flip (41/50) {
    if (a) {
      X82();
    }
    else {
      X85();
    }
  }
}

void X85() {
  flip (89/500) {
    b = false;
    X90();
  }
  else {
    a = true;
    X89();
  }
}

void X86() {
  flip (463/500) {
    b = true;
    X89();
  }
  else {
    a = false;
    X83();
  }
}

void X87() {
  flip (119/500) {
    if (b) {
      X88();
    }
    else {
      X83();
    }
  }
}

void X88() {
  X82();
  X83();
}

void X89() {
  X92();
  X83();
}

void X90() {
  flip (49/1000) {
    a = true;
    X86();
  }
  else {
    b = false;
    X95();
  }
}

void X91() {
  flip (67/1000) {
    a = false;
    X95();
  }
  else {
    b = false;
    X88();
  }
}

void X92() {
  flip (699/1000) {
    a = false;
    X91();
  }
  else {
    a = false;
    X97();
  }
}

void X93() {
  flip (453/1000) {
    if (a) {
      X98();
    }
    else {
      X98();
    }
  }
}

void X94() {
  X97();
  X95();
}

void X95() {
  X95();
  X96();
}

void X96() {
  flip (981/1000) {
    a = false;
    X92();
  }
  else {
    a = false;
    X1();
  }
}

void X97() {
  flip (1/20) {
    b = false;
    X97();
  }
  else {
    a = false;
    X98();
  }
}

void X98() {
  flip (483/500) {
    if (a) {
      X3();
    }
    else {
      X95();
    }
  }
}

void X99() {
  flip (79/200) {
    if (b) {
      X1();
    }
    else {
      X97();
    }
  }
}
