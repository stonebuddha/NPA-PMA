bool a;
bool b;

void X0() {
  X97();
  X0();
}

void X1() {
  flip (741/1000) {
    if (b) {
      X6();
    }
    else {
      X98();
    }
  }
}

void X2() {
  flip (23/250) {
    if (b) {
      X2();
    }
    else {
      X6();
    }
  }
}

void X3() {
  flip (97/125) {
    a = false;
    X1();
  }
  else {
    b = true;
    X8();
  }
}

void X4() {
  X2();
  X98();
}

void X5() {
  X99();
  X3();
}

void X6() {
  flip (491/1000) {
    b = false;
    X2();
  }
  else {
    a = true;
    X1();
  }
}

void X7() {
  flip (21/25) {
    a = false;
    X4();
  }
  else {
    a = false;
    X2();
  }
}

void X8() {
  flip (53/100) {
    a = false;
    X10();
  }
  else {
    a = false;
    X10();
  }
}

void X9() {
  X7();
  X5();
}

void X10() {
  X15();
  X10();
}

void X11() {
  flip (279/500) {
    if (b) {
      X13();
    }
    else {
      X12();
    }
  }
}

void X12() {
  flip (17/200) {
    b = true;
    X15();
  }
  else {
    a = false;
    X6();
  }
}

void X13() {
  flip (377/500) {
    b = false;
    X10();
  }
  else {
    a = true;
    X12();
  }
}

void X14() {
  flip (103/125) {
    a = false;
    X8();
  }
  else {
    a = true;
    X12();
  }
}

void X15() {
  flip (63/200) {
    b = false;
    X12();
  }
  else {
    a = false;
    X15();
  }
}

void X16() {
  flip (187/500) {
    if (b) {
      X16();
    }
    else {
      X11();
    }
  }
}

void X17() {
  flip (81/200) {
    if (b) {
      X15();
    }
    else {
      X22();
    }
  }
}

void X18() {
  flip (541/1000) {
    b = true;
    X17();
  }
  else {
    a = true;
    X20();
  }
}

void X19() {
  X13();
  X21();
}

void X20() {
  flip (54/125) {
    b = false;
    X16();
  }
  else {
    b = false;
    X24();
  }
}

void X21() {
  flip (657/1000) {
    if (a) {
      X23();
    }
    else {
      X16();
    }
  }
}

void X22() {
  flip (797/1000) {
    b = false;
    X27();
  }
  else {
    b = true;
    X24();
  }
}

void X23() {
  flip (3/200) {
    if (b) {
      X25();
    }
    else {
      X23();
    }
  }
}

void X24() {
  X21();
  X20();
}

void X25() {
  flip (467/500) {
    b = false;
    X22();
  }
  else {
    a = false;
    X27();
  }
}

void X26() {
  X27();
  X20();
}

void X27() {
  X25();
  X22();
}

void X28() {
  flip (108/125) {
    if (b) {
      X32();
    }
    else {
      X29();
    }
  }
}

void X29() {
  flip (217/1000) {
    a = false;
    X28();
  }
  else {
    b = false;
    X33();
  }
}

void X30() {
  flip (123/125) {
    b = false;
    X30();
  }
  else {
    a = false;
    X32();
  }
}

void X31() {
  flip (393/1000) {
    a = true;
    X25();
  }
  else {
    b = false;
    X29();
  }
}

void X32() {
  flip (967/1000) {
    if (b) {
      X37();
    }
    else {
      X35();
    }
  }
}

void X33() {
  flip (257/1000) {
    a = true;
    X28();
  }
  else {
    b = true;
    X29();
  }
}

void X34() {
  flip (441/500) {
    if (a) {
      X39();
    }
    else {
      X34();
    }
  }
}

void X35() {
  flip (17/1000) {
    a = true;
    X30();
  }
  else {
    b = true;
    X30();
  }
}

void X36() {
  X32();
  X39();
}

void X37() {
  flip (671/1000) {
    a = false;
    X39();
  }
  else {
    a = true;
    X37();
  }
}

void X38() {
  flip (311/1000) {
    if (a) {
      X38();
    }
    else {
      X32();
    }
  }
}

void X39() {
  flip (11/125) {
    b = false;
    X44();
  }
  else {
    b = true;
    X41();
  }
}

void X40() {
  flip (243/1000) {
    if (a) {
      X39();
    }
    else {
      X43();
    }
  }
}

void X41() {
  flip (251/1000) {
    a = true;
    X45();
  }
  else {
    b = true;
    X41();
  }
}

void X42() {
  flip (611/1000) {
    a = true;
    X36();
  }
  else {
    a = true;
    X46();
  }
}

void X43() {
  X47();
  X40();
}

void X44() {
  flip (727/1000) {
    a = false;
    X38();
  }
  else {
    a = false;
    X44();
  }
}

void X45() {
  flip (103/1000) {
    if (b) {
      X48();
    }
    else {
      X49();
    }
  }
}

void X46() {
  X47();
  X41();
}

void X47() {
  X45();
  X47();
}

void X48() {
  flip (247/500) {
    b = true;
    X42();
  }
  else {
    a = true;
    X47();
  }
}

void X49() {
  flip (12/25) {
    b = true;
    X44();
  }
  else {
    b = false;
    X49();
  }
}

void X50() {
  X45();
  X51();
}

void X51() {
  flip (23/100) {
    if (a) {
      X54();
    }
    else {
      X53();
    }
  }
}

void X52() {
  flip (17/50) {
    if (b) {
      X54();
    }
    else {
      X57();
    }
  }
}

void X53() {
  flip (1/4) {
    a = true;
    X51();
  }
  else {
    a = false;
    X50();
  }
}

void X54() {
  X48();
  X52();
}

void X55() {
  X53();
  X55();
}

void X56() {
  flip (109/250) {
    a = false;
    X53();
  }
  else {
    a = true;
    X59();
  }
}

void X57() {
  X62();
  X53();
}

void X58() {
  flip (779/1000) {
    if (b) {
      X57();
    }
    else {
      X55();
    }
  }
}

void X59() {
  flip (53/250) {
    a = false;
    X59();
  }
  else {
    a = true;
    X64();
  }
}

void X60() {
  flip (73/100) {
    a = false;
    X62();
  }
  else {
    b = true;
    X64();
  }
}

void X61() {
  X62();
  X58();
}

void X62() {
  flip (343/500) {
    b = false;
    X60();
  }
  else {
    a = true;
    X64();
  }
}

void X63() {
  X60();
  X63();
}

void X64() {
  flip (23/40) {
    a = false;
    X66();
  }
  else {
    a = true;
    X61();
  }
}

void X65() {
  flip (88/125) {
    a = true;
    X69();
  }
  else {
    b = true;
    X63();
  }
}

void X66() {
  flip (39/500) {
    if (a) {
      X68();
    }
    else {
      X70();
    }
  }
}

void X67() {
  flip (773/1000) {
    b = false;
    X62();
  }
  else {
    a = true;
    X64();
  }
}

void X68() {
  flip (947/1000) {
    a = false;
    X67();
  }
  else {
    b = false;
    X70();
  }
}

void X69() {
  flip (173/250) {
    b = false;
    X68();
  }
  else {
    b = true;
    X72();
  }
}

void X70() {
  flip (221/500) {
    a = false;
    X75();
  }
  else {
    b = true;
    X68();
  }
}

void X71() {
  X72();
  X66();
}

void X72() {
  flip (21/50) {
    b = true;
    X73();
  }
  else {
    b = false;
    X73();
  }
}

void X73() {
  flip (97/1000) {
    if (a) {
      X67();
    }
    else {
      X72();
    }
  }
}

void X74() {
  flip (34/125) {
    a = true;
    X69();
  }
  else {
    a = true;
    X77();
  }
}

void X75() {
  flip (129/500) {
    b = true;
    X76();
  }
  else {
    b = true;
    X75();
  }
}

void X76() {
  flip (177/250) {
    if (a) {
      X76();
    }
    else {
      X71();
    }
  }
}

void X77() {
  flip (7/125) {
    a = false;
    X75();
  }
  else {
    a = false;
    X73();
  }
}

void X78() {
  flip (87/125) {
    a = false;
    X80();
  }
  else {
    b = true;
    X72();
  }
}

void X79() {
  X80();
  X84();
}

void X80() {
  X74();
  X84();
}

void X81() {
  flip (13/500) {
    a = true;
    X79();
  }
  else {
    a = true;
    X82();
  }
}

void X82() {
  X79();
  X77();
}

void X83() {
  X78();
  X83();
}

void X84() {
  flip (231/1000) {
    if (a) {
      X79();
    }
    else {
      X83();
    }
  }
}

void X85() {
  flip (127/200) {
    b = false;
    X82();
  }
  else {
    b = true;
    X83();
  }
}

void X86() {
  X89();
  X82();
}

void X87() {
  flip (107/250) {
    a = true;
    X91();
  }
  else {
    b = true;
    X90();
  }
}

void X88() {
  X86();
  X90();
}

void X89() {
  flip (213/1000) {
    if (b) {
      X84();
    }
    else {
      X87();
    }
  }
}

void X90() {
  X84();
  X86();
}

void X91() {
  flip (249/1000) {
    a = true;
    X86();
  }
  else {
    b = true;
    X85();
  }
}

void X92() {
  X90();
  X87();
}

void X93() {
  flip (643/1000) {
    if (a) {
      X87();
    }
    else {
      X90();
    }
  }
}

void X94() {
  flip (1/5) {
    b = true;
    X96();
  }
  else {
    b = true;
    X91();
  }
}

void X95() {
  flip (33/250) {
    if (b) {
      X89();
    }
    else {
      X92();
    }
  }
}

void X96() {
  X90();
  X93();
}

void X97() {
  X1();
  X97();
}

void X98() {
  X92();
  X3();
}

void X99() {
  X97();
  X97();
}
