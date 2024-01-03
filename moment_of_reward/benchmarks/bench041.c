void X0() {
  flip (159/500) {
    X495();
  }
  else {
    X2();
  }
}

void X1() {
  flip (543/1000) {
    flip (39/125) {
      X1();
    }
    else {
      X5();
    }
  }
  else {
    tick(1);
  }
}

void X2() {
  X5();
  X498();
}

void X3() {
  flip (223/1000) {
    flip (67/125) {
      X497();
    }
    else {
      X8();
    }
  }
  else {
    tick(1);
  }
}

void X4() {
  flip (19/250) {
    flip (56/125) {
      X499();
    }
    else {
      X2();
    }
  }
  else {
    tick(1);
  }
}

void X5() {
  flip (491/500) {
    X7();
  }
  else {
    X499();
  }
}

void X6() {
  flip (469/1000) {
    X8();
  }
  else {
    X6();
  }
}

void X7() {
  X12();
  X2();
}

void X8() {
  flip (593/1000) {
    flip (701/1000) {
      X4();
    }
    else {
      X2();
    }
  }
  else {
    tick(1);
  }
}

void X9() {
  flip (149/250) {
    X3();
  }
  else {
    X4();
  }
}

void X10() {
  flip (197/200) {
    X7();
  }
  else {
    X7();
  }
}

void X11() {
  X10();
  X13();
}

void X12() {
  X7();
  X16();
}

void X13() {
  X8();
  X8();
}

void X14() {
  flip (121/500) {
    flip (121/500) {
      X10();
    }
    else {
      X18();
    }
  }
  else {
    tick(1);
  }
}

void X15() {
  flip (11/100) {
    flip (989/1000) {
      X15();
    }
    else {
      X17();
    }
  }
  else {
    tick(1);
  }
}

void X16() {
  flip (319/1000) {
    X16();
  }
  else {
    X21();
  }
}

void X17() {
  flip (133/1000) {
    flip (507/1000) {
      X16();
    }
    else {
      X22();
    }
  }
  else {
    tick(1);
  }
}

void X18() {
  flip (27/1000) {
    X20();
  }
  else {
    X17();
  }
}

void X19() {
  flip (813/1000) {
    flip (103/250) {
      X18();
    }
    else {
      X19();
    }
  }
  else {
    tick(1);
  }
}

void X20() {
  flip (3/125) {
    X17();
  }
  else {
    X17();
  }
}

void X21() {
  flip (323/500) {
    X24();
  }
  else {
    X19();
  }
}

void X22() {
  flip (559/1000) {
    flip (877/1000) {
      X16();
    }
    else {
      X18();
    }
  }
  else {
    tick(1);
  }
}

void X23() {
  flip (583/1000) {
    flip (57/250) {
      X18();
    }
    else {
      X22();
    }
  }
  else {
    tick(1);
  }
}

void X24() {
  X22();
  X22();
}

void X25() {
  flip (139/200) {
    X27();
  }
  else {
    X23();
  }
}

void X26() {
  flip (333/500) {
    flip (997/1000) {
      X29();
    }
    else {
      X29();
    }
  }
  else {
    tick(1);
  }
}

void X27() {
  flip (43/100) {
    flip (102/125) {
      X24();
    }
    else {
      X23();
    }
  }
  else {
    tick(1);
  }
}

void X28() {
  flip (183/200) {
    X24();
  }
  else {
    X27();
  }
}

void X29() {
  flip (459/1000) {
    flip (107/1000) {
      X28();
    }
    else {
      X25();
    }
  }
  else {
    tick(1);
  }
}

void X30() {
  X33();
  X26();
}

void X31() {
  flip (53/250) {
    flip (12/125) {
      X35();
    }
    else {
      X34();
    }
  }
  else {
    tick(1);
  }
}

void X32() {
  flip (103/250) {
    flip (359/500) {
      X29();
    }
    else {
      X31();
    }
  }
  else {
    tick(1);
  }
}

void X33() {
  flip (37/40) {
    X28();
  }
  else {
    X33();
  }
}

void X34() {
  X33();
  X30();
}

void X35() {
  X29();
  X35();
}

void X36() {
  flip (117/125) {
    flip (13/20) {
      X34();
    }
    else {
      X38();
    }
  }
  else {
    tick(1);
  }
}

void X37() {
  flip (251/1000) {
    flip (17/250) {
      X39();
    }
    else {
      X36();
    }
  }
  else {
    tick(1);
  }
}

void X38() {
  X41();
  X32();
}

void X39() {
  flip (93/125) {
    flip (73/100) {
      X39();
    }
    else {
      X40();
    }
  }
  else {
    tick(1);
  }
}

void X40() {
  flip (939/1000) {
    flip (999/1000) {
      X37();
    }
    else {
      X34();
    }
  }
  else {
    tick(1);
  }
}

void X41() {
  flip (16/125) {
    X44();
  }
  else {
    X43();
  }
}

void X42() {
  flip (49/250) {
    X40();
  }
  else {
    X45();
  }
}

void X43() {
  flip (173/200) {
    flip (49/50) {
      X48();
    }
    else {
      X46();
    }
  }
  else {
    tick(1);
  }
}

void X44() {
  flip (783/1000) {
    flip (23/40) {
      X48();
    }
    else {
      X38();
    }
  }
  else {
    tick(1);
  }
}

void X45() {
  flip (239/500) {
    X47();
  }
  else {
    X49();
  }
}

void X46() {
  flip (481/1000) {
    flip (421/500) {
      X48();
    }
    else {
      X48();
    }
  }
  else {
    tick(1);
  }
}

void X47() {
  flip (21/100) {
    flip (11/125) {
      X47();
    }
    else {
      X50();
    }
  }
  else {
    tick(1);
  }
}

void X48() {
  flip (169/250) {
    X52();
  }
  else {
    X47();
  }
}

void X49() {
  flip (487/1000) {
    flip (249/500) {
      X54();
    }
    else {
      X46();
    }
  }
  else {
    tick(1);
  }
}

void X50() {
  X45();
  X52();
}

void X51() {
  flip (793/1000) {
    flip (3/1000) {
      X51();
    }
    else {
      X45();
    }
  }
  else {
    tick(1);
  }
}

void X52() {
  X53();
  X52();
}

void X53() {
  flip (379/500) {
    flip (31/40) {
      X56();
    }
    else {
      X52();
    }
  }
  else {
    tick(1);
  }
}

void X54() {
  flip (689/1000) {
    X50();
  }
  else {
    X56();
  }
}

void X55() {
  X49();
  X58();
}

void X56() {
  flip (817/1000) {
    X52();
  }
  else {
    X52();
  }
}

void X57() {
  X56();
  X56();
}

void X58() {
  flip (3/20) {
    X61();
  }
  else {
    X58();
  }
}

void X59() {
  flip (56/125) {
    X56();
  }
  else {
    X54();
  }
}

void X60() {
  flip (169/1000) {
    X58();
  }
  else {
    X64();
  }
}

void X61() {
  flip (271/500) {
    X65();
  }
  else {
    X59();
  }
}

void X62() {
  X65();
  X61();
}

void X63() {
  X68();
  X62();
}

void X64() {
  flip (339/1000) {
    flip (221/500) {
      X68();
    }
    else {
      X64();
    }
  }
  else {
    tick(1);
  }
}

void X65() {
  X61();
  X63();
}

void X66() {
  flip (421/500) {
    X68();
  }
  else {
    X61();
  }
}

void X67() {
  flip (267/500) {
    flip (267/1000) {
      X63();
    }
    else {
      X65();
    }
  }
  else {
    tick(1);
  }
}

void X68() {
  X68();
  X70();
}

void X69() {
  flip (71/100) {
    X68();
  }
  else {
    X71();
  }
}

void X70() {
  flip (66/125) {
    X64();
  }
  else {
    X67();
  }
}

void X71() {
  flip (24/125) {
    flip (219/500) {
      X65();
    }
    else {
      X67();
    }
  }
  else {
    tick(1);
  }
}

void X72() {
  flip (93/125) {
    flip (287/1000) {
      X71();
    }
    else {
      X67();
    }
  }
  else {
    tick(1);
  }
}

void X73() {
  X75();
  X67();
}

void X74() {
  flip (197/1000) {
    flip (397/500) {
      X69();
    }
    else {
      X68();
    }
  }
  else {
    tick(1);
  }
}

void X75() {
  X79();
  X79();
}

void X76() {
  flip (903/1000) {
    X72();
  }
  else {
    X73();
  }
}

void X77() {
  flip (203/250) {
    X81();
  }
  else {
    X75();
  }
}

void X78() {
  X74();
  X74();
}

void X79() {
  flip (43/125) {
    X75();
  }
  else {
    X79();
  }
}

void X80() {
  X75();
  X76();
}

void X81() {
  flip (467/500) {
    flip (27/1000) {
      X82();
    }
    else {
      X76();
    }
  }
  else {
    tick(1);
  }
}

void X82() {
  flip (271/500) {
    X83();
  }
  else {
    X76();
  }
}

void X83() {
  flip (739/1000) {
    flip (103/200) {
      X87();
    }
    else {
      X86();
    }
  }
  else {
    tick(1);
  }
}

void X84() {
  flip (51/500) {
    X84();
  }
  else {
    X89();
  }
}

void X85() {
  flip (173/500) {
    X79();
  }
  else {
    X84();
  }
}

void X86() {
  flip (443/1000) {
    X81();
  }
  else {
    X85();
  }
}

void X87() {
  flip (133/250) {
    X84();
  }
  else {
    X81();
  }
}

void X88() {
  X86();
  X85();
}

void X89() {
  flip (163/500) {
    flip (307/1000) {
      X92();
    }
    else {
      X85();
    }
  }
  else {
    tick(1);
  }
}

void X90() {
  X84();
  X95();
}

void X91() {
  flip (37/200) {
    flip (477/500) {
      X96();
    }
    else {
      X85();
    }
  }
  else {
    tick(1);
  }
}

void X92() {
  flip (97/250) {
    X97();
  }
  else {
    X87();
  }
}

void X93() {
  X88();
  X96();
}

void X94() {
  flip (459/500) {
    flip (53/1000) {
      X88();
    }
    else {
      X96();
    }
  }
  else {
    tick(1);
  }
}

void X95() {
  flip (169/250) {
    X98();
  }
  else {
    X95();
  }
}

void X96() {
  X95();
  X92();
}

void X97() {
  X100();
  X93();
}

void X98() {
  X95();
  X92();
}

void X99() {
  X96();
  X99();
}

void X100() {
  flip (37/500) {
    flip (41/1000) {
      X105();
    }
    else {
      X103();
    }
  }
  else {
    tick(1);
  }
}

void X101() {
  flip (39/125) {
    flip (3/25) {
      X103();
    }
    else {
      X105();
    }
  }
  else {
    tick(1);
  }
}

void X102() {
  flip (399/500) {
    flip (819/1000) {
      X97();
    }
    else {
      X96();
    }
  }
  else {
    tick(1);
  }
}

void X103() {
  flip (114/125) {
    X99();
  }
  else {
    X100();
  }
}

void X104() {
  flip (42/125) {
    flip (41/500) {
      X98();
    }
    else {
      X105();
    }
  }
  else {
    tick(1);
  }
}

void X105() {
  flip (309/500) {
    flip (909/1000) {
      X104();
    }
    else {
      X99();
    }
  }
  else {
    tick(1);
  }
}

void X106() {
  flip (643/1000) {
    flip (3/100) {
      X104();
    }
    else {
      X106();
    }
  }
  else {
    tick(1);
  }
}

void X107() {
  flip (383/500) {
    flip (869/1000) {
      X102();
    }
    else {
      X112();
    }
  }
  else {
    tick(1);
  }
}

void X108() {
  flip (151/200) {
    X102();
  }
  else {
    X109();
  }
}

void X109() {
  flip (619/1000) {
    X111();
  }
  else {
    X104();
  }
}

void X110() {
  X113();
  X108();
}

void X111() {
  X114();
  X114();
}

void X112() {
  X114();
  X115();
}

void X113() {
  X109();
  X116();
}

void X114() {
  flip (493/500) {
    flip (37/1000) {
      X115();
    }
    else {
      X118();
    }
  }
  else {
    tick(1);
  }
}

void X115() {
  flip (121/1000) {
    X115();
  }
  else {
    X114();
  }
}

void X116() {
  flip (401/1000) {
    flip (41/250) {
      X117();
    }
    else {
      X115();
    }
  }
  else {
    tick(1);
  }
}

void X117() {
  X119();
  X111();
}

void X118() {
  X113();
  X122();
}

void X119() {
  flip (573/1000) {
    X124();
  }
  else {
    X124();
  }
}

void X120() {
  flip (43/1000) {
    flip (29/1000) {
      X122();
    }
    else {
      X116();
    }
  }
  else {
    tick(1);
  }
}

void X121() {
  flip (719/1000) {
    X120();
  }
  else {
    X120();
  }
}

void X122() {
  flip (217/1000) {
    flip (88/125) {
      X116();
    }
    else {
      X118();
    }
  }
  else {
    tick(1);
  }
}

void X123() {
  X123();
  X119();
}

void X124() {
  flip (69/1000) {
    flip (679/1000) {
      X121();
    }
    else {
      X124();
    }
  }
  else {
    tick(1);
  }
}

void X125() {
  flip (907/1000) {
    X119();
  }
  else {
    X124();
  }
}

void X126() {
  X121();
  X131();
}

void X127() {
  flip (3/500) {
    flip (51/250) {
      X129();
    }
    else {
      X122();
    }
  }
  else {
    tick(1);
  }
}

void X128() {
  flip (4/25) {
    flip (291/500) {
      X127();
    }
    else {
      X133();
    }
  }
  else {
    tick(1);
  }
}

void X129() {
  X126();
  X127();
}

void X130() {
  flip (351/1000) {
    X125();
  }
  else {
    X135();
  }
}

void X131() {
  flip (3/1000) {
    X126();
  }
  else {
    X136();
  }
}

void X132() {
  flip (193/200) {
    X130();
  }
  else {
    X127();
  }
}

void X133() {
  flip (52/125) {
    X135();
  }
  else {
    X127();
  }
}

void X134() {
  flip (37/500) {
    flip (349/1000) {
      X130();
    }
    else {
      X133();
    }
  }
  else {
    tick(1);
  }
}

void X135() {
  flip (371/1000) {
    flip (9/40) {
      X138();
    }
    else {
      X136();
    }
  }
  else {
    tick(1);
  }
}

void X136() {
  flip (41/1000) {
    X132();
  }
  else {
    X139();
  }
}

void X137() {
  flip (359/500) {
    X140();
  }
  else {
    X134();
  }
}

void X138() {
  flip (51/200) {
    X135();
  }
  else {
    X132();
  }
}

void X139() {
  flip (47/50) {
    flip (99/250) {
      X140();
    }
    else {
      X135();
    }
  }
  else {
    tick(1);
  }
}

void X140() {
  flip (77/125) {
    X136();
  }
  else {
    X140();
  }
}

void X141() {
  flip (93/1000) {
    X137();
  }
  else {
    X138();
  }
}

void X142() {
  flip (949/1000) {
    X140();
  }
  else {
    X140();
  }
}

void X143() {
  X141();
  X143();
}

void X144() {
  X141();
  X147();
}

void X145() {
  X140();
  X139();
}

void X146() {
  flip (37/200) {
    X146();
  }
  else {
    X149();
  }
}

void X147() {
  flip (289/500) {
    flip (763/1000) {
      X151();
    }
    else {
      X147();
    }
  }
  else {
    tick(1);
  }
}

void X148() {
  flip (373/1000) {
    flip (399/500) {
      X153();
    }
    else {
      X151();
    }
  }
  else {
    tick(1);
  }
}

void X149() {
  X153();
  X150();
}

void X150() {
  flip (197/250) {
    X152();
  }
  else {
    X144();
  }
}

void X151() {
  X153();
  X145();
}

void X152() {
  flip (127/1000) {
    X156();
  }
  else {
    X151();
  }
}

void X153() {
  flip (353/500) {
    X152();
  }
  else {
    X150();
  }
}

void X154() {
  flip (61/500) {
    X154();
  }
  else {
    X148();
  }
}

void X155() {
  X159();
  X159();
}

void X156() {
  X159();
  X159();
}

void X157() {
  flip (31/40) {
    X151();
  }
  else {
    X157();
  }
}

void X158() {
  flip (463/1000) {
    flip (4/125) {
      X158();
    }
    else {
      X153();
    }
  }
  else {
    tick(1);
  }
}

void X159() {
  X164();
  X153();
}

void X160() {
  flip (293/500) {
    X158();
  }
  else {
    X164();
  }
}

void X161() {
  flip (569/1000) {
    flip (99/500) {
      X157();
    }
    else {
      X163();
    }
  }
  else {
    tick(1);
  }
}

void X162() {
  X163();
  X160();
}

void X163() {
  X162();
  X158();
}

void X164() {
  flip (72/125) {
    flip (82/125) {
      X162();
    }
    else {
      X165();
    }
  }
  else {
    tick(1);
  }
}

void X165() {
  flip (1/1000) {
    flip (67/1000) {
      X163();
    }
    else {
      X167();
    }
  }
  else {
    tick(1);
  }
}

void X166() {
  X170();
  X169();
}

void X167() {
  flip (143/1000) {
    flip (171/250) {
      X169();
    }
    else {
      X166();
    }
  }
  else {
    tick(1);
  }
}

void X168() {
  flip (177/250) {
    flip (813/1000) {
      X162();
    }
    else {
      X168();
    }
  }
  else {
    tick(1);
  }
}

void X169() {
  X174();
  X171();
}

void X170() {
  X165();
  X165();
}

void X171() {
  flip (57/125) {
    flip (37/200) {
      X176();
    }
    else {
      X175();
    }
  }
  else {
    tick(1);
  }
}

void X172() {
  flip (91/125) {
    X174();
  }
  else {
    X176();
  }
}

void X173() {
  X171();
  X172();
}

void X174() {
  flip (233/500) {
    flip (439/500) {
      X175();
    }
    else {
      X171();
    }
  }
  else {
    tick(1);
  }
}

void X175() {
  X179();
  X178();
}

void X176() {
  flip (47/125) {
    flip (283/1000) {
      X171();
    }
    else {
      X176();
    }
  }
  else {
    tick(1);
  }
}

void X177() {
  flip (409/1000) {
    flip (13/500) {
      X173();
    }
    else {
      X182();
    }
  }
  else {
    tick(1);
  }
}

void X178() {
  X181();
  X172();
}

void X179() {
  flip (593/1000) {
    flip (441/500) {
      X174();
    }
    else {
      X179();
    }
  }
  else {
    tick(1);
  }
}

void X180() {
  X182();
  X180();
}

void X181() {
  X183();
  X186();
}

void X182() {
  X182();
  X181();
}

void X183() {
  X179();
  X183();
}

void X184() {
  flip (22/125) {
    X182();
  }
  else {
    X180();
  }
}

void X185() {
  X182();
  X188();
}

void X186() {
  flip (19/50) {
    X190();
  }
  else {
    X190();
  }
}

void X187() {
  X185();
  X186();
}

void X188() {
  flip (543/1000) {
    X182();
  }
  else {
    X187();
  }
}

void X189() {
  flip (183/200) {
    X187();
  }
  else {
    X183();
  }
}

void X190() {
  flip (489/1000) {
    flip (279/1000) {
      X189();
    }
    else {
      X191();
    }
  }
  else {
    tick(1);
  }
}

void X191() {
  flip (42/125) {
    flip (11/250) {
      X193();
    }
    else {
      X190();
    }
  }
  else {
    tick(1);
  }
}

void X192() {
  flip (309/1000) {
    flip (357/1000) {
      X196();
    }
    else {
      X192();
    }
  }
  else {
    tick(1);
  }
}

void X193() {
  X189();
  X195();
}

void X194() {
  flip (797/1000) {
    X194();
  }
  else {
    X192();
  }
}

void X195() {
  flip (767/1000) {
    flip (379/500) {
      X197();
    }
    else {
      X200();
    }
  }
  else {
    tick(1);
  }
}

void X196() {
  flip (69/125) {
    X201();
  }
  else {
    X200();
  }
}

void X197() {
  X202();
  X201();
}

void X198() {
  flip (343/1000) {
    flip (953/1000) {
      X199();
    }
    else {
      X203();
    }
  }
  else {
    tick(1);
  }
}

void X199() {
  flip (18/25) {
    X193();
  }
  else {
    X193();
  }
}

void X200() {
  flip (289/1000) {
    flip (151/200) {
      X200();
    }
    else {
      X199();
    }
  }
  else {
    tick(1);
  }
}

void X201() {
  flip (77/1000) {
    X200();
  }
  else {
    X206();
  }
}

void X202() {
  X197();
  X196();
}

void X203() {
  flip (131/250) {
    X202();
  }
  else {
    X203();
  }
}

void X204() {
  flip (21/1000) {
    X202();
  }
  else {
    X204();
  }
}

void X205() {
  flip (69/100) {
    flip (963/1000) {
      X210();
    }
    else {
      X199();
    }
  }
  else {
    tick(1);
  }
}

void X206() {
  X210();
  X203();
}

void X207() {
  flip (597/1000) {
    X208();
  }
  else {
    X212();
  }
}

void X208() {
  flip (106/125) {
    flip (971/1000) {
      X205();
    }
    else {
      X205();
    }
  }
  else {
    tick(1);
  }
}

void X209() {
  flip (51/1000) {
    flip (279/1000) {
      X208();
    }
    else {
      X205();
    }
  }
  else {
    tick(1);
  }
}

void X210() {
  flip (369/500) {
    flip (1/25) {
      X210();
    }
    else {
      X215();
    }
  }
  else {
    tick(1);
  }
}

void X211() {
  X213();
  X215();
}

void X212() {
  flip (61/100) {
    flip (229/250) {
      X207();
    }
    else {
      X206();
    }
  }
  else {
    tick(1);
  }
}

void X213() {
  flip (161/500) {
    flip (469/1000) {
      X210();
    }
    else {
      X218();
    }
  }
  else {
    tick(1);
  }
}

void X214() {
  X212();
  X215();
}

void X215() {
  flip (33/250) {
    X214();
  }
  else {
    X217();
  }
}

void X216() {
  X211();
  X210();
}

void X217() {
  X219();
  X213();
}

void X218() {
  flip (121/250) {
    X222();
  }
  else {
    X215();
  }
}

void X219() {
  flip (149/1000) {
    flip (149/250) {
      X213();
    }
    else {
      X217();
    }
  }
  else {
    tick(1);
  }
}

void X220() {
  X223();
  X221();
}

void X221() {
  flip (97/200) {
    flip (439/1000) {
      X222();
    }
    else {
      X222();
    }
  }
  else {
    tick(1);
  }
}

void X222() {
  flip (9/25) {
    flip (87/125) {
      X219();
    }
    else {
      X223();
    }
  }
  else {
    tick(1);
  }
}

void X223() {
  X219();
  X223();
}

void X224() {
  flip (81/250) {
    flip (987/1000) {
      X229();
    }
    else {
      X225();
    }
  }
  else {
    tick(1);
  }
}

void X225() {
  X223();
  X225();
}

void X226() {
  flip (119/250) {
    X228();
  }
  else {
    X231();
  }
}

void X227() {
  flip (243/500) {
    flip (619/1000) {
      X231();
    }
    else {
      X230();
    }
  }
  else {
    tick(1);
  }
}

void X228() {
  flip (921/1000) {
    flip (909/1000) {
      X227();
    }
    else {
      X224();
    }
  }
  else {
    tick(1);
  }
}

void X229() {
  flip (34/125) {
    flip (76/125) {
      X229();
    }
    else {
      X223();
    }
  }
  else {
    tick(1);
  }
}

void X230() {
  flip (617/1000) {
    X234();
  }
  else {
    X231();
  }
}

void X231() {
  flip (331/500) {
    X228();
  }
  else {
    X232();
  }
}

void X232() {
  X237();
  X233();
}

void X233() {
  flip (102/125) {
    flip (7/200) {
      X232();
    }
    else {
      X230();
    }
  }
  else {
    tick(1);
  }
}

void X234() {
  flip (49/1000) {
    flip (106/125) {
      X238();
    }
    else {
      X234();
    }
  }
  else {
    tick(1);
  }
}

void X235() {
  flip (119/200) {
    flip (919/1000) {
      X236();
    }
    else {
      X232();
    }
  }
  else {
    tick(1);
  }
}

void X236() {
  X235();
  X237();
}

void X237() {
  flip (489/1000) {
    flip (819/1000) {
      X233();
    }
    else {
      X234();
    }
  }
  else {
    tick(1);
  }
}

void X238() {
  flip (329/500) {
    flip (103/125) {
      X235();
    }
    else {
      X237();
    }
  }
  else {
    tick(1);
  }
}

void X239() {
  flip (177/1000) {
    X238();
  }
  else {
    X244();
  }
}

void X240() {
  flip (3/250) {
    flip (141/500) {
      X237();
    }
    else {
      X244();
    }
  }
  else {
    tick(1);
  }
}

void X241() {
  flip (363/1000) {
    flip (67/100) {
      X242();
    }
    else {
      X238();
    }
  }
  else {
    tick(1);
  }
}

void X242() {
  flip (329/500) {
    flip (247/250) {
      X245();
    }
    else {
      X244();
    }
  }
  else {
    tick(1);
  }
}

void X243() {
  flip (181/200) {
    X245();
  }
  else {
    X240();
  }
}

void X244() {
  flip (99/200) {
    X243();
  }
  else {
    X244();
  }
}

void X245() {
  flip (151/1000) {
    flip (739/1000) {
      X244();
    }
    else {
      X247();
    }
  }
  else {
    tick(1);
  }
}

void X246() {
  flip (17/500) {
    flip (29/200) {
      X249();
    }
    else {
      X240();
    }
  }
  else {
    tick(1);
  }
}

void X247() {
  flip (303/500) {
    flip (181/1000) {
      X245();
    }
    else {
      X252();
    }
  }
  else {
    tick(1);
  }
}

void X248() {
  flip (229/1000) {
    flip (9/10) {
      X248();
    }
    else {
      X252();
    }
  }
  else {
    tick(1);
  }
}

void X249() {
  flip (117/200) {
    flip (112/125) {
      X252();
    }
    else {
      X246();
    }
  }
  else {
    tick(1);
  }
}

void X250() {
  flip (54/125) {
    flip (79/500) {
      X253();
    }
    else {
      X250();
    }
  }
  else {
    tick(1);
  }
}

void X251() {
  flip (4/125) {
    X248();
  }
  else {
    X252();
  }
}

void X252() {
  flip (723/1000) {
    flip (117/250) {
      X254();
    }
    else {
      X249();
    }
  }
  else {
    tick(1);
  }
}

void X253() {
  flip (213/1000) {
    flip (147/500) {
      X250();
    }
    else {
      X251();
    }
  }
  else {
    tick(1);
  }
}

void X254() {
  flip (157/1000) {
    flip (327/1000) {
      X259();
    }
    else {
      X251();
    }
  }
  else {
    tick(1);
  }
}

void X255() {
  X250();
  X256();
}

void X256() {
  X257();
  X260();
}

void X257() {
  flip (177/250) {
    flip (641/1000) {
      X260();
    }
    else {
      X260();
    }
  }
  else {
    tick(1);
  }
}

void X258() {
  flip (57/100) {
    flip (51/500) {
      X254();
    }
    else {
      X256();
    }
  }
  else {
    tick(1);
  }
}

void X259() {
  flip (61/250) {
    flip (27/200) {
      X261();
    }
    else {
      X256();
    }
  }
  else {
    tick(1);
  }
}

void X260() {
  X255();
  X261();
}

void X261() {
  flip (29/250) {
    flip (231/250) {
      X255();
    }
    else {
      X266();
    }
  }
  else {
    tick(1);
  }
}

void X262() {
  flip (531/1000) {
    flip (193/1000) {
      X257();
    }
    else {
      X262();
    }
  }
  else {
    tick(1);
  }
}

void X263() {
  X264();
  X260();
}

void X264() {
  flip (603/1000) {
    X264();
  }
  else {
    X267();
  }
}

void X265() {
  X260();
  X264();
}

void X266() {
  X260();
  X264();
}

void X267() {
  flip (47/1000) {
    X265();
  }
  else {
    X261();
  }
}

void X268() {
  flip (7/200) {
    flip (44/125) {
      X271();
    }
    else {
      X272();
    }
  }
  else {
    tick(1);
  }
}

void X269() {
  flip (587/1000) {
    X267();
  }
  else {
    X267();
  }
}

void X270() {
  X270();
  X270();
}

void X271() {
  X275();
  X276();
}

void X272() {
  X276();
  X274();
}

void X273() {
  X277();
  X274();
}

void X274() {
  flip (337/500) {
    flip (109/1000) {
      X276();
    }
    else {
      X275();
    }
  }
  else {
    tick(1);
  }
}

void X275() {
  X275();
  X277();
}

void X276() {
  flip (213/1000) {
    flip (171/1000) {
      X277();
    }
    else {
      X275();
    }
  }
  else {
    tick(1);
  }
}

void X277() {
  flip (37/125) {
    flip (503/1000) {
      X277();
    }
    else {
      X275();
    }
  }
  else {
    tick(1);
  }
}

void X278() {
  X279();
  X278();
}

void X279() {
  flip (57/500) {
    flip (981/1000) {
      X276();
    }
    else {
      X281();
    }
  }
  else {
    tick(1);
  }
}

void X280() {
  X281();
  X275();
}

void X281() {
  flip (661/1000) {
    flip (927/1000) {
      X283();
    }
    else {
      X281();
    }
  }
  else {
    tick(1);
  }
}

void X282() {
  flip (741/1000) {
    X278();
  }
  else {
    X285();
  }
}

void X283() {
  X281();
  X282();
}

void X284() {
  X280();
  X284();
}

void X285() {
  flip (43/500) {
    X279();
  }
  else {
    X285();
  }
}

void X286() {
  flip (57/100) {
    flip (161/500) {
      X291();
    }
    else {
      X291();
    }
  }
  else {
    tick(1);
  }
}

void X287() {
  flip (1/25) {
    flip (67/250) {
      X281();
    }
    else {
      X289();
    }
  }
  else {
    tick(1);
  }
}

void X288() {
  flip (43/1000) {
    X289();
  }
  else {
    X291();
  }
}

void X289() {
  X287();
  X286();
}

void X290() {
  X288();
  X295();
}

void X291() {
  flip (103/250) {
    X296();
  }
  else {
    X288();
  }
}

void X292() {
  X292();
  X287();
}

void X293() {
  flip (81/1000) {
    flip (657/1000) {
      X288();
    }
    else {
      X293();
    }
  }
  else {
    tick(1);
  }
}

void X294() {
  flip (827/1000) {
    flip (7/50) {
      X288();
    }
    else {
      X289();
    }
  }
  else {
    tick(1);
  }
}

void X295() {
  X289();
  X295();
}

void X296() {
  flip (661/1000) {
    flip (641/1000) {
      X297();
    }
    else {
      X297();
    }
  }
  else {
    tick(1);
  }
}

void X297() {
  flip (171/200) {
    flip (17/250) {
      X294();
    }
    else {
      X298();
    }
  }
  else {
    tick(1);
  }
}

void X298() {
  flip (107/250) {
    flip (557/1000) {
      X295();
    }
    else {
      X302();
    }
  }
  else {
    tick(1);
  }
}

void X299() {
  X301();
  X295();
}

void X300() {
  flip (477/500) {
    X295();
  }
  else {
    X297();
  }
}

void X301() {
  X302();
  X304();
}

void X302() {
  flip (191/500) {
    X300();
  }
  else {
    X301();
  }
}

void X303() {
  flip (181/500) {
    flip (13/20) {
      X298();
    }
    else {
      X301();
    }
  }
  else {
    tick(1);
  }
}

void X304() {
  flip (327/500) {
    X304();
  }
  else {
    X299();
  }
}

void X305() {
  X306();
  X309();
}

void X306() {
  X302();
  X300();
}

void X307() {
  flip (803/1000) {
    flip (363/500) {
      X306();
    }
    else {
      X304();
    }
  }
  else {
    tick(1);
  }
}

void X308() {
  flip (313/1000) {
    flip (597/1000) {
      X304();
    }
    else {
      X305();
    }
  }
  else {
    tick(1);
  }
}

void X309() {
  flip (82/125) {
    flip (407/500) {
      X308();
    }
    else {
      X303();
    }
  }
  else {
    tick(1);
  }
}

void X310() {
  flip (951/1000) {
    X304();
  }
  else {
    X307();
  }
}

void X311() {
  X312();
  X310();
}

void X312() {
  X308();
  X314();
}

void X313() {
  X317();
  X312();
}

void X314() {
  flip (489/500) {
    flip (401/500) {
      X312();
    }
    else {
      X312();
    }
  }
  else {
    tick(1);
  }
}

void X315() {
  X315();
  X319();
}

void X316() {
  X313();
  X321();
}

void X317() {
  X314();
  X319();
}

void X318() {
  flip (189/250) {
    flip (39/500) {
      X318();
    }
    else {
      X315();
    }
  }
  else {
    tick(1);
  }
}

void X319() {
  flip (22/125) {
    flip (9/50) {
      X315();
    }
    else {
      X322();
    }
  }
  else {
    tick(1);
  }
}

void X320() {
  flip (3/250) {
    flip (107/200) {
      X323();
    }
    else {
      X314();
    }
  }
  else {
    tick(1);
  }
}

void X321() {
  X321();
  X321();
}

void X322() {
  flip (3/200) {
    flip (99/250) {
      X323();
    }
    else {
      X321();
    }
  }
  else {
    tick(1);
  }
}

void X323() {
  X322();
  X328();
}

void X324() {
  X325();
  X325();
}

void X325() {
  flip (137/250) {
    flip (453/1000) {
      X319();
    }
    else {
      X325();
    }
  }
  else {
    tick(1);
  }
}

void X326() {
  X325();
  X326();
}

void X327() {
  X328();
  X322();
}

void X328() {
  flip (241/500) {
    X322();
  }
  else {
    X323();
  }
}

void X329() {
  flip (463/500) {
    X323();
  }
  else {
    X332();
  }
}

void X330() {
  flip (21/125) {
    flip (33/40) {
      X332();
    }
    else {
      X332();
    }
  }
  else {
    tick(1);
  }
}

void X331() {
  flip (817/1000) {
    X330();
  }
  else {
    X331();
  }
}

void X332() {
  flip (153/200) {
    X331();
  }
  else {
    X337();
  }
}

void X333() {
  flip (14/25) {
    X337();
  }
  else {
    X332();
  }
}

void X334() {
  flip (401/500) {
    X337();
  }
  else {
    X339();
  }
}

void X335() {
  flip (77/100) {
    flip (763/1000) {
      X334();
    }
    else {
      X340();
    }
  }
  else {
    tick(1);
  }
}

void X336() {
  X337();
  X332();
}

void X337() {
  flip (17/100) {
    X334();
  }
  else {
    X342();
  }
}

void X338() {
  flip (11/25) {
    X338();
  }
  else {
    X343();
  }
}

void X339() {
  X339();
  X334();
}

void X340() {
  flip (787/1000) {
    X340();
  }
  else {
    X335();
  }
}

void X341() {
  flip (323/500) {
    flip (113/200) {
      X340();
    }
    else {
      X338();
    }
  }
  else {
    tick(1);
  }
}

void X342() {
  flip (2/125) {
    X345();
  }
  else {
    X339();
  }
}

void X343() {
  flip (573/1000) {
    flip (33/200) {
      X348();
    }
    else {
      X345();
    }
  }
  else {
    tick(1);
  }
}

void X344() {
  flip (106/125) {
    X343();
  }
  else {
    X347();
  }
}

void X345() {
  flip (949/1000) {
    flip (89/125) {
      X342();
    }
    else {
      X342();
    }
  }
  else {
    tick(1);
  }
}

void X346() {
  flip (499/500) {
    flip (61/125) {
      X347();
    }
    else {
      X348();
    }
  }
  else {
    tick(1);
  }
}

void X347() {
  flip (623/1000) {
    X349();
  }
  else {
    X347();
  }
}

void X348() {
  X353();
  X343();
}

void X349() {
  flip (623/1000) {
    flip (207/250) {
      X345();
    }
    else {
      X353();
    }
  }
  else {
    tick(1);
  }
}

void X350() {
  X348();
  X348();
}

void X351() {
  X356();
  X356();
}

void X352() {
  flip (223/250) {
    flip (61/250) {
      X347();
    }
    else {
      X355();
    }
  }
  else {
    tick(1);
  }
}

void X353() {
  flip (27/200) {
    flip (103/500) {
      X347();
    }
    else {
      X352();
    }
  }
  else {
    tick(1);
  }
}

void X354() {
  flip (113/500) {
    flip (52/125) {
      X349();
    }
    else {
      X348();
    }
  }
  else {
    tick(1);
  }
}

void X355() {
  X351();
  X356();
}

void X356() {
  flip (61/125) {
    X358();
  }
  else {
    X356();
  }
}

void X357() {
  X359();
  X362();
}

void X358() {
  X362();
  X362();
}

void X359() {
  X358();
  X361();
}

void X360() {
  flip (101/250) {
    flip (487/500) {
      X359();
    }
    else {
      X363();
    }
  }
  else {
    tick(1);
  }
}

void X361() {
  flip (191/200) {
    flip (52/125) {
      X357();
    }
    else {
      X360();
    }
  }
  else {
    tick(1);
  }
}

void X362() {
  flip (82/125) {
    X361();
  }
  else {
    X364();
  }
}

void X363() {
  flip (979/1000) {
    X367();
  }
  else {
    X357();
  }
}

void X364() {
  X358();
  X362();
}

void X365() {
  flip (63/100) {
    flip (277/500) {
      X364();
    }
    else {
      X369();
    }
  }
  else {
    tick(1);
  }
}

void X366() {
  flip (67/500) {
    X367();
  }
  else {
    X364();
  }
}

void X367() {
  X371();
  X368();
}

void X368() {
  X371();
  X373();
}

void X369() {
  flip (21/200) {
    flip (91/500) {
      X367();
    }
    else {
      X367();
    }
  }
  else {
    tick(1);
  }
}

void X370() {
  X372();
  X369();
}

void X371() {
  flip (77/100) {
    X375();
  }
  else {
    X369();
  }
}

void X372() {
  X377();
  X377();
}

void X373() {
  X378();
  X376();
}

void X374() {
  X375();
  X373();
}

void X375() {
  flip (149/200) {
    X375();
  }
  else {
    X378();
  }
}

void X376() {
  X379();
  X370();
}

void X377() {
  flip (9/25) {
    X372();
  }
  else {
    X380();
  }
}

void X378() {
  flip (429/500) {
    flip (21/50) {
      X372();
    }
    else {
      X376();
    }
  }
  else {
    tick(1);
  }
}

void X379() {
  flip (77/100) {
    flip (421/1000) {
      X373();
    }
    else {
      X383();
    }
  }
  else {
    tick(1);
  }
}

void X380() {
  X376();
  X375();
}

void X381() {
  flip (34/125) {
    flip (37/1000) {
      X385();
    }
    else {
      X380();
    }
  }
  else {
    tick(1);
  }
}

void X382() {
  X382();
  X379();
}

void X383() {
  flip (201/1000) {
    X385();
  }
  else {
    X378();
  }
}

void X384() {
  flip (383/1000) {
    flip (83/100) {
      X381();
    }
    else {
      X388();
    }
  }
  else {
    tick(1);
  }
}

void X385() {
  flip (61/500) {
    X386();
  }
  else {
    X384();
  }
}

void X386() {
  flip (33/40) {
    X384();
  }
  else {
    X385();
  }
}

void X387() {
  flip (273/1000) {
    X382();
  }
  else {
    X387();
  }
}

void X388() {
  flip (247/500) {
    X383();
  }
  else {
    X393();
  }
}

void X389() {
  flip (343/500) {
    flip (629/1000) {
      X390();
    }
    else {
      X386();
    }
  }
  else {
    tick(1);
  }
}

void X390() {
  flip (101/125) {
    flip (79/100) {
      X386();
    }
    else {
      X384();
    }
  }
  else {
    tick(1);
  }
}

void X391() {
  flip (33/40) {
    flip (201/250) {
      X388();
    }
    else {
      X391();
    }
  }
  else {
    tick(1);
  }
}

void X392() {
  X389();
  X389();
}

void X393() {
  flip (29/100) {
    X389();
  }
  else {
    X389();
  }
}

void X394() {
  flip (731/1000) {
    X397();
  }
  else {
    X390();
  }
}

void X395() {
  X392();
  X394();
}

void X396() {
  flip (201/500) {
    flip (901/1000) {
      X390();
    }
    else {
      X391();
    }
  }
  else {
    tick(1);
  }
}

void X397() {
  flip (11/50) {
    flip (343/500) {
      X398();
    }
    else {
      X400();
    }
  }
  else {
    tick(1);
  }
}

void X398() {
  flip (363/1000) {
    flip (61/125) {
      X392();
    }
    else {
      X402();
    }
  }
  else {
    tick(1);
  }
}

void X399() {
  flip (153/200) {
    X394();
  }
  else {
    X402();
  }
}

void X400() {
  X405();
  X396();
}

void X401() {
  X406();
  X399();
}

void X402() {
  X406();
  X396();
}

void X403() {
  flip (277/1000) {
    X406();
  }
  else {
    X407();
  }
}

void X404() {
  X400();
  X402();
}

void X405() {
  X404();
  X405();
}

void X406() {
  flip (41/50) {
    flip (151/1000) {
      X401();
    }
    else {
      X408();
    }
  }
  else {
    tick(1);
  }
}

void X407() {
  X401();
  X404();
}

void X408() {
  flip (2/5) {
    X413();
  }
  else {
    X412();
  }
}

void X409() {
  flip (111/1000) {
    flip (201/250) {
      X403();
    }
    else {
      X410();
    }
  }
  else {
    tick(1);
  }
}

void X410() {
  X412();
  X405();
}

void X411() {
  X408();
  X407();
}

void X412() {
  X406();
  X409();
}

void X413() {
  flip (19/20) {
    X417();
  }
  else {
    X415();
  }
}

void X414() {
  flip (423/500) {
    flip (163/200) {
      X409();
    }
    else {
      X419();
    }
  }
  else {
    tick(1);
  }
}

void X415() {
  flip (923/1000) {
    X412();
  }
  else {
    X415();
  }
}

void X416() {
  X414();
  X419();
}

void X417() {
  X413();
  X416();
}

void X418() {
  X422();
  X419();
}

void X419() {
  flip (161/250) {
    flip (319/500) {
      X417();
    }
    else {
      X415();
    }
  }
  else {
    tick(1);
  }
}

void X420() {
  X419();
  X419();
}

void X421() {
  flip (13/125) {
    X423();
  }
  else {
    X421();
  }
}

void X422() {
  flip (397/1000) {
    X422();
  }
  else {
    X424();
  }
}

void X423() {
  flip (19/500) {
    X417();
  }
  else {
    X421();
  }
}

void X424() {
  flip (419/500) {
    X428();
  }
  else {
    X428();
  }
}

void X425() {
  X430();
  X428();
}

void X426() {
  flip (13/500) {
    X424();
  }
  else {
    X422();
  }
}

void X427() {
  X430();
  X425();
}

void X428() {
  flip (719/1000) {
    X430();
  }
  else {
    X431();
  }
}

void X429() {
  flip (631/1000) {
    X434();
  }
  else {
    X429();
  }
}

void X430() {
  X426();
  X427();
}

void X431() {
  flip (29/125) {
    flip (129/500) {
      X436();
    }
    else {
      X435();
    }
  }
  else {
    tick(1);
  }
}

void X432() {
  flip (51/500) {
    X426();
  }
  else {
    X436();
  }
}

void X433() {
  X438();
  X433();
}

void X434() {
  flip (87/200) {
    flip (11/50) {
      X438();
    }
    else {
      X437();
    }
  }
  else {
    tick(1);
  }
}

void X435() {
  X439();
  X440();
}

void X436() {
  flip (219/500) {
    X432();
  }
  else {
    X433();
  }
}

void X437() {
  flip (227/1000) {
    X438();
  }
  else {
    X438();
  }
}

void X438() {
  flip (727/1000) {
    flip (327/1000) {
      X437();
    }
    else {
      X440();
    }
  }
  else {
    tick(1);
  }
}

void X439() {
  flip (6/125) {
    flip (917/1000) {
      X439();
    }
    else {
      X437();
    }
  }
  else {
    tick(1);
  }
}

void X440() {
  flip (253/500) {
    flip (499/500) {
      X444();
    }
    else {
      X438();
    }
  }
  else {
    tick(1);
  }
}

void X441() {
  flip (217/1000) {
    X436();
  }
  else {
    X445();
  }
}

void X442() {
  flip (153/200) {
    X436();
  }
  else {
    X439();
  }
}

void X443() {
  flip (159/250) {
    flip (251/500) {
      X446();
    }
    else {
      X446();
    }
  }
  else {
    tick(1);
  }
}

void X444() {
  flip (277/500) {
    flip (889/1000) {
      X443();
    }
    else {
      X439();
    }
  }
  else {
    tick(1);
  }
}

void X445() {
  X446();
  X449();
}

void X446() {
  flip (98/125) {
    flip (27/50) {
      X440();
    }
    else {
      X440();
    }
  }
  else {
    tick(1);
  }
}

void X447() {
  X447();
  X448();
}

void X448() {
  X449();
  X444();
}

void X449() {
  flip (963/1000) {
    X450();
  }
  else {
    X452();
  }
}

void X450() {
  X452();
  X453();
}

void X451() {
  flip (2/25) {
    X446();
  }
  else {
    X445();
  }
}

void X452() {
  flip (249/250) {
    flip (721/1000) {
      X451();
    }
    else {
      X454();
    }
  }
  else {
    tick(1);
  }
}

void X453() {
  flip (51/125) {
    flip (929/1000) {
      X449();
    }
    else {
      X451();
    }
  }
  else {
    tick(1);
  }
}

void X454() {
  flip (577/1000) {
    flip (121/1000) {
      X459();
    }
    else {
      X453();
    }
  }
  else {
    tick(1);
  }
}

void X455() {
  flip (337/1000) {
    flip (5/8) {
      X454();
    }
    else {
      X449();
    }
  }
  else {
    tick(1);
  }
}

void X456() {
  X457();
  X460();
}

void X457() {
  flip (61/500) {
    X462();
  }
  else {
    X455();
  }
}

void X458() {
  flip (843/1000) {
    X462();
  }
  else {
    X452();
  }
}

void X459() {
  flip (41/500) {
    flip (19/100) {
      X458();
    }
    else {
      X455();
    }
  }
  else {
    tick(1);
  }
}

void X460() {
  flip (811/1000) {
    X454();
  }
  else {
    X461();
  }
}

void X461() {
  flip (439/1000) {
    flip (67/125) {
      X460();
    }
    else {
      X466();
    }
  }
  else {
    tick(1);
  }
}

void X462() {
  X459();
  X458();
}

void X463() {
  flip (69/500) {
    X462();
  }
  else {
    X463();
  }
}

void X464() {
  flip (269/500) {
    X460();
  }
  else {
    X469();
  }
}

void X465() {
  X467();
  X465();
}

void X466() {
  flip (131/1000) {
    flip (217/500) {
      X470();
    }
    else {
      X471();
    }
  }
  else {
    tick(1);
  }
}

void X467() {
  flip (31/100) {
    flip (399/500) {
      X468();
    }
    else {
      X464();
    }
  }
  else {
    tick(1);
  }
}

void X468() {
  flip (2/5) {
    flip (121/200) {
      X468();
    }
    else {
      X467();
    }
  }
  else {
    tick(1);
  }
}

void X469() {
  X466();
  X466();
}

void X470() {
  X468();
  X464();
}

void X471() {
  flip (33/50) {
    flip (623/1000) {
      X473();
    }
    else {
      X471();
    }
  }
  else {
    tick(1);
  }
}

void X472() {
  flip (147/500) {
    flip (1/100) {
      X466();
    }
    else {
      X476();
    }
  }
  else {
    tick(1);
  }
}

void X473() {
  X478();
  X468();
}

void X474() {
  X468();
  X477();
}

void X475() {
  flip (877/1000) {
    X477();
  }
  else {
    X473();
  }
}

void X476() {
  flip (661/1000) {
    X478();
  }
  else {
    X477();
  }
}

void X477() {
  flip (451/1000) {
    flip (449/500) {
      X474();
    }
    else {
      X479();
    }
  }
  else {
    tick(1);
  }
}

void X478() {
  X475();
  X478();
}

void X479() {
  flip (53/250) {
    flip (58/125) {
      X475();
    }
    else {
      X474();
    }
  }
  else {
    tick(1);
  }
}

void X480() {
  flip (911/1000) {
    flip (87/125) {
      X474();
    }
    else {
      X481();
    }
  }
  else {
    tick(1);
  }
}

void X481() {
  X480();
  X483();
}

void X482() {
  flip (189/250) {
    flip (169/200) {
      X486();
    }
    else {
      X484();
    }
  }
  else {
    tick(1);
  }
}

void X483() {
  flip (889/1000) {
    flip (433/1000) {
      X480();
    }
    else {
      X487();
    }
  }
  else {
    tick(1);
  }
}

void X484() {
  flip (361/500) {
    X482();
  }
  else {
    X479();
  }
}

void X485() {
  X487();
  X485();
}

void X486() {
  flip (139/200) {
    flip (179/250) {
      X488();
    }
    else {
      X489();
    }
  }
  else {
    tick(1);
  }
}

void X487() {
  X492();
  X484();
}

void X488() {
  flip (437/1000) {
    flip (7/200) {
      X485();
    }
    else {
      X490();
    }
  }
  else {
    tick(1);
  }
}

void X489() {
  X487();
  X492();
}

void X490() {
  flip (33/500) {
    X485();
  }
  else {
    X487();
  }
}

void X491() {
  X490();
  X495();
}

void X492() {
  X492();
  X496();
}

void X493() {
  X496();
  X496();
}

void X494() {
  flip (119/200) {
    X498();
  }
  else {
    X499();
  }
}

void X495() {
  flip (13/20) {
    X493();
  }
  else {
    X499();
  }
}

void X496() {
  flip (16/125) {
    X493();
  }
  else {
    X498();
  }
}

void X497() {
  flip (24/25) {
    flip (189/250) {
      X1();
    }
    else {
      X493();
    }
  }
  else {
    tick(1);
  }
}

void X498() {
  flip (697/1000) {
    X495();
  }
  else {
    X498();
  }
}

void X499() {
  flip (91/100) {
    flip (3/250) {
      X4();
    }
    else {
      X3();
    }
  }
  else {
    tick(1);
  }
}
