bool a;
bool b;

void X0() {
  flip (333/500) {
    b = true;
    X0();
  }
  else {
    a = true;
    X94();
  }
}

void X1() {
  flip (229/250) {
    a = true;
    X5();
  }
  else {
    a = false;
    X6();
  }
}

void X2() {
  flip (327/1000) {
    if (b) {
      X96();
    }
    else {
      X3();
    }
  }
}

void X3() {
  X2();
  X8();
}

void X4() {
  flip (337/500) {
    b = true;
    X1();
  }
  else {
    b = true;
    X4();
  }
}

void X5() {
  flip (803/1000) {
    b = true;
    X9();
  }
  else {
    b = true;
    X2();
  }
}

void X6() {
  X5();
  X11();
}

void X7() {
  X5();
  X7();
}

void X8() {
  flip (27/250) {
    a = false;
    X13();
  }
  else {
    a = false;
    X11();
  }
}

void X9() {
  X8();
  X8();
}

void X10() {
  X14();
  X14();
}

void X11() {
  flip (137/500) {
    if (a) {
      X8();
    }
    else {
      X11();
    }
  }
}

void X12() {
  flip (19/1000) {
    b = true;
    X10();
  }
  else {
    b = false;
    X11();
  }
}

void X13() {
  flip (909/1000) {
    if (b) {
      X17();
    }
    else {
      X9();
    }
  }
}

void X14() {
  flip (104/125) {
    a = true;
    X14();
  }
  else {
    b = false;
    X9();
  }
}

void X15() {
  flip (467/500) {
    if (a) {
      X19();
    }
    else {
      X16();
    }
  }
}

void X16() {
  flip (41/50) {
    a = true;
    X10();
  }
  else {
    a = true;
    X15();
  }
}

void X17() {
  X12();
  X13();
}

void X18() {
  X16();
  X22();
}

void X19() {
  X13();
  X15();
}

void X20() {
  flip (919/1000) {
    b = false;
    X16();
  }
  else {
    a = false;
    X22();
  }
}

void X21() {
  flip (69/200) {
    b = true;
    X24();
  }
  else {
    b = true;
    X24();
  }
}

void X22() {
  flip (913/1000) {
    if (b) {
      X18();
    }
    else {
      X16();
    }
  }
}

void X23() {
  X27();
  X17();
}

void X24() {
  flip (117/125) {
    if (b) {
      X22();
    }
    else {
      X22();
    }
  }
}

void X25() {
  X23();
  X23();
}

void X26() {
  flip (661/1000) {
    if (a) {
      X29();
    }
    else {
      X22();
    }
  }
}

void X27() {
  X27();
  X29();
}

void X28() {
  flip (12/25) {
    if (b) {
      X24();
    }
    else {
      X26();
    }
  }
}

void X29() {
  X31();
  X31();
}

void X30() {
  flip (127/500) {
    if (a) {
      X34();
    }
    else {
      X33();
    }
  }
}

void X31() {
  flip (357/1000) {
    if (b) {
      X35();
    }
    else {
      X36();
    }
  }
}

void X32() {
  flip (39/250) {
    if (a) {
      X32();
    }
    else {
      X27();
    }
  }
}

void X33() {
  X33();
  X36();
}

void X34() {
  flip (493/500) {
    a = false;
    X28();
  }
  else {
    b = true;
    X33();
  }
}

void X35() {
  flip (57/200) {
    a = false;
    X33();
  }
  else {
    a = true;
    X29();
  }
}

void X36() {
  X30();
  X33();
}

void X37() {
  X41();
  X41();
}

void X38() {
  X41();
  X41();
}

void X39() {
  flip (639/1000) {
    if (a) {
      X36();
    }
    else {
      X42();
    }
  }
}

void X40() {
  X40();
  X40();
}

void X41() {
  flip (69/125) {
    if (a) {
      X39();
    }
    else {
      X39();
    }
  }
}

void X42() {
  flip (157/200) {
    if (b) {
      X37();
    }
    else {
      X37();
    }
  }
}

void X43() {
  flip (383/500) {
    b = true;
    X37();
  }
  else {
    a = false;
    X38();
  }
}

void X44() {
  flip (711/1000) {
    if (b) {
      X39();
    }
    else {
      X40();
    }
  }
}

void X45() {
  flip (351/1000) {
    if (b) {
      X44();
    }
    else {
      X50();
    }
  }
}

void X46() {
  flip (387/1000) {
    a = true;
    X40();
  }
  else {
    a = false;
    X44();
  }
}

void X47() {
  flip (81/100) {
    if (b) {
      X41();
    }
    else {
      X48();
    }
  }
}

void X48() {
  flip (293/500) {
    if (b) {
      X45();
    }
    else {
      X47();
    }
  }
}

void X49() {
  X43();
  X50();
}

void X50() {
  X50();
  X49();
}

void X51() {
  flip (593/1000) {
    if (b) {
      X48();
    }
    else {
      X46();
    }
  }
}

void X52() {
  X46();
  X57();
}

void X53() {
  flip (93/500) {
    a = true;
    X49();
  }
  else {
    b = true;
    X58();
  }
}

void X54() {
  X49();
  X52();
}

void X55() {
  flip (811/1000) {
    if (b) {
      X54();
    }
    else {
      X60();
    }
  }
}

void X56() {
  flip (737/1000) {
    if (b) {
      X52();
    }
    else {
      X51();
    }
  }
}

void X57() {
  X54();
  X60();
}

void X58() {
  flip (21/25) {
    b = false;
    X52();
  }
  else {
    a = false;
    X58();
  }
}

void X59() {
  flip (139/250) {
    a = true;
    X63();
  }
  else {
    a = false;
    X63();
  }
}

void X60() {
  flip (857/1000) {
    if (b) {
      X60();
    }
    else {
      X59();
    }
  }
}

void X61() {
  flip (13/250) {
    a = false;
    X55();
  }
  else {
    a = true;
    X61();
  }
}

void X62() {
  flip (139/500) {
    if (a) {
      X59();
    }
    else {
      X63();
    }
  }
}

void X63() {
  X58();
  X68();
}

void X64() {
  flip (961/1000) {
    if (b) {
      X60();
    }
    else {
      X64();
    }
  }
}

void X65() {
  X64();
  X64();
}

void X66() {
  flip (703/1000) {
    if (a) {
      X64();
    }
    else {
      X66();
    }
  }
}

void X67() {
  flip (697/1000) {
    if (a) {
      X64();
    }
    else {
      X65();
    }
  }
}

void X68() {
  X69();
  X72();
}

void X69() {
  X73();
  X74();
}

void X70() {
  X73();
  X66();
}

void X71() {
  flip (329/500) {
    if (a) {
      X71();
    }
    else {
      X65();
    }
  }
}

void X72() {
  flip (629/1000) {
    b = true;
    X75();
  }
  else {
    a = true;
    X74();
  }
}

void X73() {
  flip (389/1000) {
    b = true;
    X72();
  }
  else {
    a = false;
    X74();
  }
}

void X74() {
  X73();
  X74();
}

void X75() {
  X76();
  X77();
}

void X76() {
  X80();
  X75();
}

void X77() {
  flip (27/100) {
    a = false;
    X72();
  }
  else {
    b = true;
    X79();
  }
}

void X78() {
  flip (823/1000) {
    b = true;
    X82();
  }
  else {
    b = false;
    X80();
  }
}

void X79() {
  X76();
  X78();
}

void X80() {
  flip (77/1000) {
    b = false;
    X83();
  }
  else {
    a = true;
    X77();
  }
}

void X81() {
  flip (79/250) {
    b = true;
    X83();
  }
  else {
    a = true;
    X80();
  }
}

void X82() {
  X80();
  X76();
}

void X83() {
  X77();
  X82();
}

void X84() {
  X85();
  X86();
}

void X85() {
  flip (199/500) {
    if (a) {
      X87();
    }
    else {
      X81();
    }
  }
}

void X86() {
  X91();
  X85();
}

void X87() {
  flip (477/1000) {
    b = false;
    X86();
  }
  else {
    a = false;
    X92();
  }
}

void X88() {
  X83();
  X93();
}

void X89() {
  flip (247/1000) {
    if (a) {
      X94();
    }
    else {
      X88();
    }
  }
}

void X90() {
  flip (931/1000) {
    if (a) {
      X93();
    }
    else {
      X93();
    }
  }
}

void X91() {
  flip (181/1000) {
    b = true;
    X86();
  }
  else {
    b = true;
    X95();
  }
}

void X92() {
  flip (104/125) {
    a = false;
    X92();
  }
  else {
    b = false;
    X89();
  }
}

void X93() {
  X96();
  X89();
}

void X94() {
  flip (947/1000) {
    if (a) {
      X98();
    }
    else {
      X99();
    }
  }
}

void X95() {
  flip (441/1000) {
    if (a) {
      X94();
    }
    else {
      X97();
    }
  }
}

void X96() {
  flip (631/1000) {
    if (b) {
      X96();
    }
    else {
      X1();
    }
  }
}

void X97() {
  flip (69/100) {
    if (b) {
      X97();
    }
    else {
      X93();
    }
  }
}

void X98() {
  X2();
  X98();
}

void X99() {
  flip (447/500) {
    if (a) {
      X98();
    }
    else {
      X95();
    }
  }
}
