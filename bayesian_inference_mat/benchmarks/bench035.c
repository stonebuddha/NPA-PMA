bool a;
bool b;

void X0() {
  flip (729/1000) {
    a = false;
    X1();
  }
  else {
    b = true;
    X98();
  }
}

void X1() {
  flip (1/100) {
    b = true;
    X3();
  }
  else {
    b = false;
    X5();
  }
}

void X2() {
  flip (453/500) {
    if (a) {
      X6();
    }
    else {
      X97();
    }
  }
}

void X3() {
  X2();
  X6();
}

void X4() {
  flip (383/500) {
    if (b) {
      X8();
    }
    else {
      X5();
    }
  }
}

void X5() {
  X2();
  X6();
}

void X6() {
  flip (21/200) {
    if (b) {
      X6();
    }
    else {
      X7();
    }
  }
}

void X7() {
  X9();
  X10();
}

void X8() {
  flip (31/200) {
    if (b) {
      X8();
    }
    else {
      X13();
    }
  }
}

void X9() {
  flip (71/1000) {
    if (b) {
      X11();
    }
    else {
      X11();
    }
  }
}

void X10() {
  X12();
  X5();
}

void X11() {
  X5();
  X11();
}

void X12() {
  flip (399/500) {
    if (b) {
      X9();
    }
    else {
      X12();
    }
  }
}

void X13() {
  flip (357/500) {
    if (a) {
      X14();
    }
    else {
      X10();
    }
  }
}

void X14() {
  flip (117/1000) {
    a = false;
    X12();
  }
  else {
    a = true;
    X12();
  }
}

void X15() {
  flip (233/1000) {
    a = true;
    X19();
  }
  else {
    b = true;
    X20();
  }
}

void X16() {
  X14();
  X16();
}

void X17() {
  X17();
  X13();
}

void X18() {
  flip (99/125) {
    if (a) {
      X22();
    }
    else {
      X19();
    }
  }
}

void X19() {
  flip (157/1000) {
    if (a) {
      X23();
    }
    else {
      X17();
    }
  }
}

void X20() {
  flip (21/40) {
    if (b) {
      X14();
    }
    else {
      X23();
    }
  }
}

void X21() {
  flip (599/1000) {
    a = false;
    X24();
  }
  else {
    a = false;
    X25();
  }
}

void X22() {
  X16();
  X25();
}

void X23() {
  X23();
  X25();
}

void X24() {
  flip (671/1000) {
    if (b) {
      X23();
    }
    else {
      X23();
    }
  }
}

void X25() {
  flip (291/1000) {
    a = false;
    X20();
  }
  else {
    b = false;
    X19();
  }
}

void X26() {
  flip (203/500) {
    if (a) {
      X30();
    }
    else {
      X31();
    }
  }
}

void X27() {
  flip (177/1000) {
    b = true;
    X30();
  }
  else {
    a = false;
    X26();
  }
}

void X28() {
  X28();
  X30();
}

void X29() {
  flip (249/1000) {
    b = true;
    X31();
  }
  else {
    b = true;
    X30();
  }
}

void X30() {
  X28();
  X28();
}

void X31() {
  X33();
  X35();
}

void X32() {
  flip (9/200) {
    if (a) {
      X37();
    }
    else {
      X32();
    }
  }
}

void X33() {
  flip (17/20) {
    a = false;
    X29();
  }
  else {
    a = false;
    X31();
  }
}

void X34() {
  flip (757/1000) {
    if (b) {
      X31();
    }
    else {
      X28();
    }
  }
}

void X35() {
  flip (641/1000) {
    b = true;
    X38();
  }
  else {
    b = false;
    X37();
  }
}

void X36() {
  flip (819/1000) {
    b = true;
    X40();
  }
  else {
    a = true;
    X38();
  }
}

void X37() {
  flip (267/1000) {
    if (a) {
      X38();
    }
    else {
      X38();
    }
  }
}

void X38() {
  X40();
  X38();
}

void X39() {
  flip (167/1000) {
    if (a) {
      X33();
    }
    else {
      X38();
    }
  }
}

void X40() {
  flip (49/125) {
    b = false;
    X37();
  }
  else {
    a = true;
    X37();
  }
}

void X41() {
  X42();
  X39();
}

void X42() {
  X46();
  X46();
}

void X43() {
  X40();
  X40();
}

void X44() {
  flip (199/1000) {
    a = true;
    X38();
  }
  else {
    b = false;
    X44();
  }
}

void X45() {
  flip (193/1000) {
    a = false;
    X49();
  }
  else {
    b = false;
    X40();
  }
}

void X46() {
  flip (829/1000) {
    b = false;
    X41();
  }
  else {
    b = false;
    X42();
  }
}

void X47() {
  X46();
  X44();
}

void X48() {
  flip (153/250) {
    if (b) {
      X47();
    }
    else {
      X43();
    }
  }
}

void X49() {
  flip (124/125) {
    if (b) {
      X47();
    }
    else {
      X49();
    }
  }
}

void X50() {
  flip (77/500) {
    b = true;
    X47();
  }
  else {
    a = true;
    X44();
  }
}

void X51() {
  X45();
  X47();
}

void X52() {
  flip (193/1000) {
    b = false;
    X47();
  }
  else {
    a = false;
    X56();
  }
}

void X53() {
  flip (549/1000) {
    b = false;
    X55();
  }
  else {
    a = true;
    X56();
  }
}

void X54() {
  flip (99/200) {
    if (a) {
      X58();
    }
    else {
      X49();
    }
  }
}

void X55() {
  flip (119/250) {
    if (b) {
      X56();
    }
    else {
      X54();
    }
  }
}

void X56() {
  flip (127/1000) {
    if (b) {
      X53();
    }
    else {
      X50();
    }
  }
}

void X57() {
  flip (221/500) {
    b = true;
    X60();
  }
  else {
    a = true;
    X56();
  }
}

void X58() {
  flip (373/500) {
    a = true;
    X53();
  }
  else {
    b = false;
    X62();
  }
}

void X59() {
  X55();
  X54();
}

void X60() {
  flip (443/1000) {
    b = true;
    X54();
  }
  else {
    b = false;
    X60();
  }
}

void X61() {
  flip (3/50) {
    a = true;
    X63();
  }
  else {
    a = true;
    X59();
  }
}

void X62() {
  flip (401/500) {
    if (b) {
      X60();
    }
    else {
      X63();
    }
  }
}

void X63() {
  X60();
  X59();
}

void X64() {
  X63();
  X68();
}

void X65() {
  X61();
  X60();
}

void X66() {
  flip (513/1000) {
    if (b) {
      X71();
    }
    else {
      X70();
    }
  }
}

void X67() {
  flip (271/500) {
    b = true;
    X68();
  }
  else {
    a = true;
    X61();
  }
}

void X68() {
  X66();
  X68();
}

void X69() {
  flip (791/1000) {
    if (b) {
      X74();
    }
    else {
      X68();
    }
  }
}

void X70() {
  X72();
  X69();
}

void X71() {
  flip (19/1000) {
    a = false;
    X68();
  }
  else {
    b = false;
    X74();
  }
}

void X72() {
  X70();
  X70();
}

void X73() {
  flip (71/500) {
    if (a) {
      X74();
    }
    else {
      X69();
    }
  }
}

void X74() {
  flip (661/1000) {
    a = true;
    X75();
  }
  else {
    b = true;
    X74();
  }
}

void X75() {
  X75();
  X71();
}

void X76() {
  X80();
  X72();
}

void X77() {
  flip (697/1000) {
    a = false;
    X82();
  }
  else {
    a = false;
    X76();
  }
}

void X78() {
  X72();
  X78();
}

void X79() {
  flip (469/500) {
    if (a) {
      X74();
    }
    else {
      X73();
    }
  }
}

void X80() {
  flip (909/1000) {
    if (a) {
      X78();
    }
    else {
      X80();
    }
  }
}

void X81() {
  X78();
  X80();
}

void X82() {
  X87();
  X79();
}

void X83() {
  flip (219/500) {
    a = false;
    X82();
  }
  else {
    b = false;
    X78();
  }
}

void X84() {
  flip (7/200) {
    a = true;
    X80();
  }
  else {
    a = false;
    X81();
  }
}

void X85() {
  flip (109/200) {
    b = true;
    X86();
  }
  else {
    b = false;
    X84();
  }
}

void X86() {
  flip (113/500) {
    if (a) {
      X90();
    }
    else {
      X88();
    }
  }
}

void X87() {
  X87();
  X88();
}

void X88() {
  X85();
  X82();
}

void X89() {
  X89();
  X92();
}

void X90() {
  flip (703/1000) {
    if (b) {
      X89();
    }
    else {
      X94();
    }
  }
}

void X91() {
  flip (33/100) {
    if (b) {
      X91();
    }
    else {
      X95();
    }
  }
}

void X92() {
  X94();
  X86();
}

void X93() {
  flip (71/100) {
    b = true;
    X94();
  }
  else {
    a = true;
    X94();
  }
}

void X94() {
  X94();
  X95();
}

void X95() {
  flip (163/500) {
    b = false;
    X94();
  }
  else {
    b = true;
    X95();
  }
}

void X96() {
  X0();
  X91();
}

void X97() {
  flip (111/200) {
    b = false;
    X0();
  }
  else {
    b = true;
    X99();
  }
}

void X98() {
  flip (171/1000) {
    b = false;
    X96();
  }
  else {
    a = false;
    X1();
  }
}

void X99() {
  flip (68/125) {
    a = true;
    X93();
  }
  else {
    b = true;
    X97();
  }
}
