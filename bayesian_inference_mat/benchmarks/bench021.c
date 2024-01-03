bool a;
bool b;

void X0() {
  flip (951/1000) {
    if (b) {
      X2();
    }
    else {
      X97();
    }
  }
}

void X1() {
  flip (93/500) {
    a = false;
    X2();
  }
  else {
    a = false;
    X3();
  }
}

void X2() {
  X6();
  X99();
}

void X3() {
  flip (791/1000) {
    if (a) {
      X98();
    }
    else {
      X97();
    }
  }
}

void X4() {
  X98();
  X0();
}

void X5() {
  X5();
  X4();
}

void X6() {
  flip (107/200) {
    if (a) {
      X7();
    }
    else {
      X0();
    }
  }
}

void X7() {
  flip (107/125) {
    a = false;
    X9();
  }
  else {
    a = true;
    X1();
  }
}

void X8() {
  flip (167/200) {
    b = true;
    X11();
  }
  else {
    a = false;
    X9();
  }
}

void X9() {
  X13();
  X12();
}

void X10() {
  X4();
  X8();
}

void X11() {
  X6();
  X14();
}

void X12() {
  X14();
  X12();
}

void X13() {
  flip (297/500) {
    a = false;
    X11();
  }
  else {
    a = false;
    X14();
  }
}

void X14() {
  flip (459/1000) {
    if (b) {
      X9();
    }
    else {
      X9();
    }
  }
}

void X15() {
  flip (31/200) {
    if (a) {
      X19();
    }
    else {
      X11();
    }
  }
}

void X16() {
  X13();
  X11();
}

void X17() {
  X17();
  X12();
}

void X18() {
  flip (57/200) {
    a = true;
    X14();
  }
  else {
    a = false;
    X14();
  }
}

void X19() {
  flip (979/1000) {
    a = true;
    X14();
  }
  else {
    a = true;
    X19();
  }
}

void X20() {
  flip (567/1000) {
    a = false;
    X18();
  }
  else {
    b = true;
    X14();
  }
}

void X21() {
  X15();
  X20();
}

void X22() {
  flip (28/125) {
    a = false;
    X21();
  }
  else {
    a = false;
    X21();
  }
}

void X23() {
  flip (619/1000) {
    if (b) {
      X20();
    }
    else {
      X25();
    }
  }
}

void X24() {
  X19();
  X29();
}

void X25() {
  flip (199/200) {
    b = false;
    X21();
  }
  else {
    b = false;
    X23();
  }
}

void X26() {
  flip (23/200) {
    if (a) {
      X20();
    }
    else {
      X29();
    }
  }
}

void X27() {
  flip (71/125) {
    b = true;
    X23();
  }
  else {
    a = false;
    X24();
  }
}

void X28() {
  flip (957/1000) {
    if (b) {
      X33();
    }
    else {
      X24();
    }
  }
}

void X29() {
  X34();
  X28();
}

void X30() {
  X35();
  X24();
}

void X31() {
  X33();
  X26();
}

void X32() {
  X27();
  X27();
}

void X33() {
  flip (217/1000) {
    if (a) {
      X33();
    }
    else {
      X34();
    }
  }
}

void X34() {
  X36();
  X39();
}

void X35() {
  X32();
  X31();
}

void X36() {
  flip (127/1000) {
    if (b) {
      X31();
    }
    else {
      X38();
    }
  }
}

void X37() {
  flip (419/500) {
    if (b) {
      X40();
    }
    else {
      X37();
    }
  }
}

void X38() {
  flip (263/1000) {
    if (a) {
      X34();
    }
    else {
      X40();
    }
  }
}

void X39() {
  flip (839/1000) {
    if (a) {
      X33();
    }
    else {
      X35();
    }
  }
}

void X40() {
  flip (183/500) {
    if (b) {
      X38();
    }
    else {
      X34();
    }
  }
}

void X41() {
  X40();
  X42();
}

void X42() {
  flip (87/500) {
    if (a) {
      X38();
    }
    else {
      X39();
    }
  }
}

void X43() {
  flip (143/1000) {
    a = true;
    X37();
  }
  else {
    a = false;
    X37();
  }
}

void X44() {
  flip (851/1000) {
    b = true;
    X45();
  }
  else {
    a = true;
    X42();
  }
}

void X45() {
  flip (899/1000) {
    if (b) {
      X50();
    }
    else {
      X40();
    }
  }
}

void X46() {
  flip (273/1000) {
    if (a) {
      X50();
    }
    else {
      X41();
    }
  }
}

void X47() {
  flip (291/1000) {
    a = true;
    X52();
  }
  else {
    b = false;
    X50();
  }
}

void X48() {
  X48();
  X51();
}

void X49() {
  flip (47/100) {
    b = false;
    X54();
  }
  else {
    a = true;
    X43();
  }
}

void X50() {
  X46();
  X48();
}

void X51() {
  flip (873/1000) {
    if (a) {
      X47();
    }
    else {
      X55();
    }
  }
}

void X52() {
  flip (37/250) {
    b = true;
    X50();
  }
  else {
    b = true;
    X48();
  }
}

void X53() {
  flip (219/500) {
    if (b) {
      X52();
    }
    else {
      X53();
    }
  }
}

void X54() {
  flip (713/1000) {
    a = true;
    X50();
  }
  else {
    b = true;
    X51();
  }
}

void X55() {
  flip (49/250) {
    if (a) {
      X57();
    }
    else {
      X52();
    }
  }
}

void X56() {
  X58();
  X59();
}

void X57() {
  X51();
  X55();
}

void X58() {
  flip (441/500) {
    if (b) {
      X54();
    }
    else {
      X60();
    }
  }
}

void X59() {
  X54();
  X63();
}

void X60() {
  flip (31/1000) {
    b = false;
    X54();
  }
  else {
    a = true;
    X59();
  }
}

void X61() {
  flip (99/200) {
    a = true;
    X61();
  }
  else {
    a = true;
    X62();
  }
}

void X62() {
  X57();
  X59();
}

void X63() {
  flip (27/40) {
    if (a) {
      X58();
    }
    else {
      X68();
    }
  }
}

void X64() {
  flip (993/1000) {
    b = true;
    X68();
  }
  else {
    a = false;
    X65();
  }
}

void X65() {
  X68();
  X62();
}

void X66() {
  flip (93/200) {
    if (a) {
      X69();
    }
    else {
      X69();
    }
  }
}

void X67() {
  flip (171/250) {
    a = true;
    X64();
  }
  else {
    a = true;
    X63();
  }
}

void X68() {
  X63();
  X70();
}

void X69() {
  flip (221/500) {
    if (b) {
      X71();
    }
    else {
      X65();
    }
  }
}

void X70() {
  flip (13/50) {
    if (a) {
      X75();
    }
    else {
      X65();
    }
  }
}

void X71() {
  X65();
  X67();
}

void X72() {
  flip (189/1000) {
    b = false;
    X67();
  }
  else {
    a = false;
    X70();
  }
}

void X73() {
  flip (93/250) {
    a = false;
    X78();
  }
  else {
    b = false;
    X71();
  }
}

void X74() {
  flip (173/1000) {
    if (a) {
      X76();
    }
    else {
      X76();
    }
  }
}

void X75() {
  flip (43/200) {
    b = false;
    X76();
  }
  else {
    b = true;
    X69();
  }
}

void X76() {
  flip (151/200) {
    a = true;
    X70();
  }
  else {
    a = true;
    X76();
  }
}

void X77() {
  flip (321/500) {
    if (a) {
      X82();
    }
    else {
      X73();
    }
  }
}

void X78() {
  flip (449/500) {
    b = true;
    X81();
  }
  else {
    b = true;
    X77();
  }
}

void X79() {
  X76();
  X76();
}

void X80() {
  X84();
  X85();
}

void X81() {
  flip (413/500) {
    b = true;
    X77();
  }
  else {
    b = true;
    X81();
  }
}

void X82() {
  flip (147/250) {
    if (b) {
      X76();
    }
    else {
      X81();
    }
  }
}

void X83() {
  flip (621/1000) {
    a = false;
    X83();
  }
  else {
    b = true;
    X82();
  }
}

void X84() {
  flip (171/1000) {
    b = false;
    X81();
  }
  else {
    a = false;
    X82();
  }
}

void X85() {
  flip (63/200) {
    if (b) {
      X89();
    }
    else {
      X83();
    }
  }
}

void X86() {
  X81();
  X89();
}

void X87() {
  X84();
  X83();
}

void X88() {
  flip (283/500) {
    if (a) {
      X91();
    }
    else {
      X93();
    }
  }
}

void X89() {
  flip (597/1000) {
    b = false;
    X88();
  }
  else {
    b = false;
    X88();
  }
}

void X90() {
  flip (427/500) {
    if (b) {
      X89();
    }
    else {
      X93();
    }
  }
}

void X91() {
  flip (3/40) {
    if (a) {
      X91();
    }
    else {
      X96();
    }
  }
}

void X92() {
  flip (351/500) {
    b = false;
    X92();
  }
  else {
    a = false;
    X95();
  }
}

void X93() {
  X97();
  X96();
}

void X94() {
  X91();
  X97();
}

void X95() {
  flip (849/1000) {
    if (a) {
      X93();
    }
    else {
      X96();
    }
  }
}

void X96() {
  flip (539/1000) {
    if (b) {
      X92();
    }
    else {
      X98();
    }
  }
}

void X97() {
  flip (957/1000) {
    if (b) {
      X0();
    }
    else {
      X98();
    }
  }
}

void X98() {
  flip (97/500) {
    if (b) {
      X3();
    }
    else {
      X1();
    }
  }
}

void X99() {
  flip (951/1000) {
    if (a) {
      X99();
    }
    else {
      X94();
    }
  }
}
