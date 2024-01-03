void X0() {
  flip (567/1000) {
    flip (93/500) {
      X498();
    }
    else {
      X5();
    }
  }
  else {
    tick(1);
  }
}

void X1() {
  flip (301/1000) {
    X498();
  }
  else {
    X0();
  }
}

void X2() {
  flip (457/1000) {
    flip (151/500) {
      X4();
    }
    else {
      X498();
    }
  }
  else {
    tick(1);
  }
}

void X3() {
  X6();
  X0();
}

void X4() {
  flip (1/4) {
    flip (241/500) {
      X7();
    }
    else {
      X499();
    }
  }
  else {
    tick(1);
  }
}

void X5() {
  X4();
  X1();
}

void X6() {
  X0();
  X11();
}

void X7() {
  flip (69/125) {
    X9();
  }
  else {
    X7();
  }
}

void X8() {
  X7();
  X8();
}

void X9() {
  X7();
  X6();
}

void X10() {
  X10();
  X8();
}

void X11() {
  X11();
  X10();
}

void X12() {
  flip (31/500) {
    X11();
  }
  else {
    X16();
  }
}

void X13() {
  flip (119/200) {
    X12();
  }
  else {
    X15();
  }
}

void X14() {
  flip (27/50) {
    flip (68/125) {
      X17();
    }
    else {
      X10();
    }
  }
  else {
    tick(1);
  }
}

void X15() {
  flip (147/1000) {
    flip (17/50) {
      X19();
    }
    else {
      X15();
    }
  }
  else {
    tick(1);
  }
}

void X16() {
  flip (107/500) {
    X19();
  }
  else {
    X20();
  }
}

void X17() {
  flip (341/1000) {
    X21();
  }
  else {
    X16();
  }
}

void X18() {
  X17();
  X19();
}

void X19() {
  flip (113/250) {
    X22();
  }
  else {
    X13();
  }
}

void X20() {
  flip (203/250) {
    flip (309/1000) {
      X17();
    }
    else {
      X24();
    }
  }
  else {
    tick(1);
  }
}

void X21() {
  X16();
  X17();
}

void X22() {
  flip (63/100) {
    X20();
  }
  else {
    X18();
  }
}

void X23() {
  flip (649/1000) {
    flip (31/125) {
      X20();
    }
    else {
      X19();
    }
  }
  else {
    tick(1);
  }
}

void X24() {
  flip (33/250) {
    X22();
  }
  else {
    X28();
  }
}

void X25() {
  X30();
  X29();
}

void X26() {
  X23();
  X24();
}

void X27() {
  flip (431/500) {
    flip (403/1000) {
      X23();
    }
    else {
      X28();
    }
  }
  else {
    tick(1);
  }
}

void X28() {
  flip (67/250) {
    X33();
  }
  else {
    X29();
  }
}

void X29() {
  X23();
  X23();
}

void X30() {
  X27();
  X27();
}

void X31() {
  flip (93/1000) {
    X30();
  }
  else {
    X28();
  }
}

void X32() {
  flip (7/40) {
    flip (104/125) {
      X35();
    }
    else {
      X33();
    }
  }
  else {
    tick(1);
  }
}

void X33() {
  flip (81/250) {
    flip (71/1000) {
      X32();
    }
    else {
      X33();
    }
  }
  else {
    tick(1);
  }
}

void X34() {
  X38();
  X33();
}

void X35() {
  flip (897/1000) {
    flip (777/1000) {
      X30();
    }
    else {
      X40();
    }
  }
  else {
    tick(1);
  }
}

void X36() {
  X37();
  X41();
}

void X37() {
  flip (159/500) {
    flip (399/500) {
      X33();
    }
    else {
      X39();
    }
  }
  else {
    tick(1);
  }
}

void X38() {
  flip (23/25) {
    flip (903/1000) {
      X43();
    }
    else {
      X43();
    }
  }
  else {
    tick(1);
  }
}

void X39() {
  flip (133/200) {
    flip (41/100) {
      X39();
    }
    else {
      X39();
    }
  }
  else {
    tick(1);
  }
}

void X40() {
  X37();
  X44();
}

void X41() {
  flip (641/1000) {
    X40();
  }
  else {
    X35();
  }
}

void X42() {
  flip (287/1000) {
    X41();
  }
  else {
    X44();
  }
}

void X43() {
  flip (219/250) {
    X43();
  }
  else {
    X37();
  }
}

void X44() {
  X40();
  X40();
}

void X45() {
  flip (86/125) {
    X41();
  }
  else {
    X48();
  }
}

void X46() {
  flip (431/1000) {
    flip (94/125) {
      X47();
    }
    else {
      X43();
    }
  }
  else {
    tick(1);
  }
}

void X47() {
  flip (257/500) {
    flip (189/500) {
      X48();
    }
    else {
      X43();
    }
  }
  else {
    tick(1);
  }
}

void X48() {
  flip (811/1000) {
    flip (31/250) {
      X53();
    }
    else {
      X46();
    }
  }
  else {
    tick(1);
  }
}

void X49() {
  X52();
  X47();
}

void X50() {
  X44();
  X47();
}

void X51() {
  flip (511/1000) {
    X52();
  }
  else {
    X55();
  }
}

void X52() {
  flip (571/1000) {
    flip (463/1000) {
      X57();
    }
    else {
      X56();
    }
  }
  else {
    tick(1);
  }
}

void X53() {
  flip (17/100) {
    X51();
  }
  else {
    X52();
  }
}

void X54() {
  flip (57/125) {
    flip (299/500) {
      X57();
    }
    else {
      X54();
    }
  }
  else {
    tick(1);
  }
}

void X55() {
  flip (231/1000) {
    flip (157/200) {
      X50();
    }
    else {
      X57();
    }
  }
  else {
    tick(1);
  }
}

void X56() {
  X57();
  X56();
}

void X57() {
  flip (329/500) {
    flip (319/1000) {
      X59();
    }
    else {
      X57();
    }
  }
  else {
    tick(1);
  }
}

void X58() {
  X58();
  X57();
}

void X59() {
  flip (199/1000) {
    flip (987/1000) {
      X59();
    }
    else {
      X63();
    }
  }
  else {
    tick(1);
  }
}

void X60() {
  X63();
  X61();
}

void X61() {
  flip (23/250) {
    flip (101/250) {
      X60();
    }
    else {
      X60();
    }
  }
  else {
    tick(1);
  }
}

void X62() {
  X63();
  X65();
}

void X63() {
  X62();
  X63();
}

void X64() {
  flip (97/250) {
    X61();
  }
  else {
    X66();
  }
}

void X65() {
  flip (821/1000) {
    flip (411/500) {
      X59();
    }
    else {
      X62();
    }
  }
  else {
    tick(1);
  }
}

void X66() {
  flip (461/500) {
    flip (793/1000) {
      X64();
    }
    else {
      X70();
    }
  }
  else {
    tick(1);
  }
}

void X67() {
  flip (181/250) {
    flip (931/1000) {
      X69();
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
  X66();
  X70();
}

void X69() {
  X74();
  X69();
}

void X70() {
  flip (683/1000) {
    X69();
  }
  else {
    X70();
  }
}

void X71() {
  flip (241/500) {
    X66();
  }
  else {
    X74();
  }
}

void X72() {
  X69();
  X70();
}

void X73() {
  flip (83/200) {
    flip (3/1000) {
      X74();
    }
    else {
      X72();
    }
  }
  else {
    tick(1);
  }
}

void X74() {
  flip (79/200) {
    X74();
  }
  else {
    X70();
  }
}

void X75() {
  flip (9/40) {
    X73();
  }
  else {
    X77();
  }
}

void X76() {
  flip (79/100) {
    X77();
  }
  else {
    X73();
  }
}

void X77() {
  flip (303/500) {
    X71();
  }
  else {
    X76();
  }
}

void X78() {
  flip (9/10) {
    X76();
  }
  else {
    X78();
  }
}

void X79() {
  X73();
  X80();
}

void X80() {
  flip (109/500) {
    X79();
  }
  else {
    X81();
  }
}

void X81() {
  X81();
  X86();
}

void X82() {
  flip (213/1000) {
    X76();
  }
  else {
    X82();
  }
}

void X83() {
  flip (411/500) {
    X79();
  }
  else {
    X88();
  }
}

void X84() {
  flip (23/125) {
    flip (687/1000) {
      X81();
    }
    else {
      X82();
    }
  }
  else {
    tick(1);
  }
}

void X85() {
  X80();
  X82();
}

void X86() {
  X89();
  X88();
}

void X87() {
  flip (983/1000) {
    flip (867/1000) {
      X82();
    }
    else {
      X85();
    }
  }
  else {
    tick(1);
  }
}

void X88() {
  X83();
  X82();
}

void X89() {
  flip (349/500) {
    X88();
  }
  else {
    X89();
  }
}

void X90() {
  flip (47/200) {
    X88();
  }
  else {
    X94();
  }
}

void X91() {
  flip (687/1000) {
    flip (113/200) {
      X95();
    }
    else {
      X91();
    }
  }
  else {
    tick(1);
  }
}

void X92() {
  flip (311/1000) {
    X94();
  }
  else {
    X86();
  }
}

void X93() {
  flip (477/1000) {
    X88();
  }
  else {
    X97();
  }
}

void X94() {
  flip (57/250) {
    X98();
  }
  else {
    X88();
  }
}

void X95() {
  flip (109/1000) {
    X89();
  }
  else {
    X99();
  }
}

void X96() {
  X94();
  X91();
}

void X97() {
  flip (131/500) {
    X96();
  }
  else {
    X99();
  }
}

void X98() {
  flip (511/1000) {
    flip (1/8) {
      X96();
    }
    else {
      X100();
    }
  }
  else {
    tick(1);
  }
}

void X99() {
  flip (27/250) {
    flip (83/100) {
      X93();
    }
    else {
      X104();
    }
  }
  else {
    tick(1);
  }
}

void X100() {
  flip (119/125) {
    flip (429/1000) {
      X103();
    }
    else {
      X95();
    }
  }
  else {
    tick(1);
  }
}

void X101() {
  flip (559/1000) {
    X106();
  }
  else {
    X105();
  }
}

void X102() {
  flip (657/1000) {
    flip (227/500) {
      X100();
    }
    else {
      X106();
    }
  }
  else {
    tick(1);
  }
}

void X103() {
  X103();
  X105();
}

void X104() {
  flip (124/125) {
    flip (463/1000) {
      X99();
    }
    else {
      X100();
    }
  }
  else {
    tick(1);
  }
}

void X105() {
  X106();
  X102();
}

void X106() {
  X111();
  X109();
}

void X107() {
  X112();
  X101();
}

void X108() {
  flip (11/500) {
    X107();
  }
  else {
    X103();
  }
}

void X109() {
  X112();
  X107();
}

void X110() {
  flip (867/1000) {
    X114();
  }
  else {
    X109();
  }
}

void X111() {
  flip (121/200) {
    X110();
  }
  else {
    X111();
  }
}

void X112() {
  X107();
  X106();
}

void X113() {
  flip (721/1000) {
    flip (413/500) {
      X116();
    }
    else {
      X115();
    }
  }
  else {
    tick(1);
  }
}

void X114() {
  X115();
  X119();
}

void X115() {
  flip (16/125) {
    flip (291/500) {
      X116();
    }
    else {
      X120();
    }
  }
  else {
    tick(1);
  }
}

void X116() {
  flip (92/125) {
    X117();
  }
  else {
    X111();
  }
}

void X117() {
  X115();
  X115();
}

void X118() {
  flip (21/40) {
    flip (51/1000) {
      X114();
    }
    else {
      X112();
    }
  }
  else {
    tick(1);
  }
}

void X119() {
  flip (63/1000) {
    flip (39/100) {
      X123();
    }
    else {
      X116();
    }
  }
  else {
    tick(1);
  }
}

void X120() {
  flip (1/20) {
    X125();
  }
  else {
    X120();
  }
}

void X121() {
  flip (301/1000) {
    X117();
  }
  else {
    X115();
  }
}

void X122() {
  flip (53/100) {
    flip (873/1000) {
      X117();
    }
    else {
      X123();
    }
  }
  else {
    tick(1);
  }
}

void X123() {
  X125();
  X126();
}

void X124() {
  flip (337/1000) {
    X121();
  }
  else {
    X119();
  }
}

void X125() {
  flip (99/200) {
    flip (359/1000) {
      X130();
    }
    else {
      X119();
    }
  }
  else {
    tick(1);
  }
}

void X126() {
  flip (833/1000) {
    flip (581/1000) {
      X123();
    }
    else {
      X127();
    }
  }
  else {
    tick(1);
  }
}

void X127() {
  flip (29/125) {
    X122();
  }
  else {
    X122();
  }
}

void X128() {
  X132();
  X131();
}

void X129() {
  flip (3/20) {
    X129();
  }
  else {
    X133();
  }
}

void X130() {
  X124();
  X127();
}

void X131() {
  X126();
  X134();
}

void X132() {
  flip (589/1000) {
    X133();
  }
  else {
    X134();
  }
}

void X133() {
  X127();
  X138();
}

void X134() {
  flip (377/1000) {
    X139();
  }
  else {
    X133();
  }
}

void X135() {
  X131();
  X140();
}

void X136() {
  flip (39/1000) {
    flip (203/500) {
      X131();
    }
    else {
      X139();
    }
  }
  else {
    tick(1);
  }
}

void X137() {
  flip (31/200) {
    X138();
  }
  else {
    X142();
  }
}

void X138() {
  X133();
  X140();
}

void X139() {
  X140();
  X133();
}

void X140() {
  X141();
  X145();
}

void X141() {
  flip (87/500) {
    X143();
  }
  else {
    X141();
  }
}

void X142() {
  flip (11/200) {
    flip (809/1000) {
      X140();
    }
    else {
      X141();
    }
  }
  else {
    tick(1);
  }
}

void X143() {
  flip (573/1000) {
    flip (153/200) {
      X146();
    }
    else {
      X138();
    }
  }
  else {
    tick(1);
  }
}

void X144() {
  flip (29/1000) {
    X148();
  }
  else {
    X145();
  }
}

void X145() {
  flip (907/1000) {
    X147();
  }
  else {
    X144();
  }
}

void X146() {
  flip (223/500) {
    flip (437/500) {
      X145();
    }
    else {
      X147();
    }
  }
  else {
    tick(1);
  }
}

void X147() {
  flip (329/1000) {
    flip (243/1000) {
      X142();
    }
    else {
      X149();
    }
  }
  else {
    tick(1);
  }
}

void X148() {
  flip (159/200) {
    X148();
  }
  else {
    X153();
  }
}

void X149() {
  X144();
  X154();
}

void X150() {
  X150();
  X147();
}

void X151() {
  flip (217/250) {
    X152();
  }
  else {
    X150();
  }
}

void X152() {
  flip (47/50) {
    flip (547/1000) {
      X148();
    }
    else {
      X153();
    }
  }
  else {
    tick(1);
  }
}

void X153() {
  flip (69/250) {
    flip (317/500) {
      X157();
    }
    else {
      X151();
    }
  }
  else {
    tick(1);
  }
}

void X154() {
  flip (21/125) {
    X148();
  }
  else {
    X150();
  }
}

void X155() {
  X160();
  X155();
}

void X156() {
  flip (157/250) {
    X151();
  }
  else {
    X150();
  }
}

void X157() {
  flip (163/1000) {
    X162();
  }
  else {
    X162();
  }
}

void X158() {
  flip (127/250) {
    X161();
  }
  else {
    X152();
  }
}

void X159() {
  flip (169/500) {
    flip (389/1000) {
      X156();
    }
    else {
      X162();
    }
  }
  else {
    tick(1);
  }
}

void X160() {
  flip (189/250) {
    flip (153/200) {
      X159();
    }
    else {
      X158();
    }
  }
  else {
    tick(1);
  }
}

void X161() {
  X157();
  X161();
}

void X162() {
  X165();
  X161();
}

void X163() {
  flip (1/50) {
    X168();
  }
  else {
    X158();
  }
}

void X164() {
  flip (1/1000) {
    flip (449/500) {
      X163();
    }
    else {
      X164();
    }
  }
  else {
    tick(1);
  }
}

void X165() {
  flip (211/250) {
    flip (273/500) {
      X167();
    }
    else {
      X168();
    }
  }
  else {
    tick(1);
  }
}

void X166() {
  flip (323/1000) {
    flip (37/40) {
      X167();
    }
    else {
      X162();
    }
  }
  else {
    tick(1);
  }
}

void X167() {
  X164();
  X172();
}

void X168() {
  flip (63/100) {
    flip (17/1000) {
      X165();
    }
    else {
      X163();
    }
  }
  else {
    tick(1);
  }
}

void X169() {
  X166();
  X168();
}

void X170() {
  flip (461/500) {
    X173();
  }
  else {
    X175();
  }
}

void X171() {
  flip (7/125) {
    X166();
  }
  else {
    X173();
  }
}

void X172() {
  flip (17/500) {
    X170();
  }
  else {
    X170();
  }
}

void X173() {
  flip (157/1000) {
    flip (393/500) {
      X178();
    }
    else {
      X171();
    }
  }
  else {
    tick(1);
  }
}

void X174() {
  flip (497/500) {
    flip (161/1000) {
      X169();
    }
    else {
      X169();
    }
  }
  else {
    tick(1);
  }
}

void X175() {
  flip (93/500) {
    X172();
  }
  else {
    X171();
  }
}

void X176() {
  X171();
  X171();
}

void X177() {
  flip (111/125) {
    flip (87/500) {
      X181();
    }
    else {
      X172();
    }
  }
  else {
    tick(1);
  }
}

void X178() {
  flip (161/500) {
    X183();
  }
  else {
    X173();
  }
}

void X179() {
  X173();
  X174();
}

void X180() {
  flip (323/1000) {
    flip (477/500) {
      X184();
    }
    else {
      X182();
    }
  }
  else {
    tick(1);
  }
}

void X181() {
  flip (123/500) {
    X183();
  }
  else {
    X183();
  }
}

void X182() {
  flip (409/500) {
    flip (47/125) {
      X178();
    }
    else {
      X181();
    }
  }
  else {
    tick(1);
  }
}

void X183() {
  flip (199/250) {
    X186();
  }
  else {
    X181();
  }
}

void X184() {
  flip (597/1000) {
    X189();
  }
  else {
    X189();
  }
}

void X185() {
  X186();
  X186();
}

void X186() {
  flip (127/500) {
    flip (89/125) {
      X191();
    }
    else {
      X180();
    }
  }
  else {
    tick(1);
  }
}

void X187() {
  flip (54/125) {
    flip (893/1000) {
      X191();
    }
    else {
      X182();
    }
  }
  else {
    tick(1);
  }
}

void X188() {
  flip (383/1000) {
    X192();
  }
  else {
    X189();
  }
}

void X189() {
  flip (219/1000) {
    X189();
  }
  else {
    X185();
  }
}

void X190() {
  flip (3/4) {
    X193();
  }
  else {
    X193();
  }
}

void X191() {
  flip (27/500) {
    flip (47/125) {
      X186();
    }
    else {
      X191();
    }
  }
  else {
    tick(1);
  }
}

void X192() {
  flip (219/1000) {
    flip (114/125) {
      X190();
    }
    else {
      X187();
    }
  }
  else {
    tick(1);
  }
}

void X193() {
  flip (197/500) {
    X193();
  }
  else {
    X197();
  }
}

void X194() {
  flip (29/200) {
    X193();
  }
  else {
    X196();
  }
}

void X195() {
  flip (781/1000) {
    X192();
  }
  else {
    X199();
  }
}

void X196() {
  flip (87/250) {
    X200();
  }
  else {
    X194();
  }
}

void X197() {
  flip (879/1000) {
    X198();
  }
  else {
    X191();
  }
}

void X198() {
  flip (61/125) {
    X198();
  }
  else {
    X199();
  }
}

void X199() {
  flip (493/500) {
    flip (853/1000) {
      X199();
    }
    else {
      X202();
    }
  }
  else {
    tick(1);
  }
}

void X200() {
  flip (37/40) {
    flip (57/125) {
      X200();
    }
    else {
      X197();
    }
  }
  else {
    tick(1);
  }
}

void X201() {
  flip (281/1000) {
    flip (33/40) {
      X206();
    }
    else {
      X201();
    }
  }
  else {
    tick(1);
  }
}

void X202() {
  flip (96/125) {
    X206();
  }
  else {
    X198();
  }
}

void X203() {
  X199();
  X203();
}

void X204() {
  flip (469/500) {
    X203();
  }
  else {
    X207();
  }
}

void X205() {
  X203();
  X205();
}

void X206() {
  X211();
  X207();
}

void X207() {
  flip (183/500) {
    X212();
  }
  else {
    X208();
  }
}

void X208() {
  flip (397/1000) {
    flip (177/200) {
      X203();
    }
    else {
      X211();
    }
  }
  else {
    tick(1);
  }
}

void X209() {
  flip (393/1000) {
    X208();
  }
  else {
    X206();
  }
}

void X210() {
  X207();
  X213();
}

void X211() {
  flip (833/1000) {
    X209();
  }
  else {
    X214();
  }
}

void X212() {
  flip (31/500) {
    flip (99/1000) {
      X210();
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
  X216();
  X217();
}

void X214() {
  flip (21/125) {
    flip (217/1000) {
      X218();
    }
    else {
      X214();
    }
  }
  else {
    tick(1);
  }
}

void X215() {
  flip (47/250) {
    flip (54/125) {
      X216();
    }
    else {
      X215();
    }
  }
  else {
    tick(1);
  }
}

void X216() {
  flip (93/500) {
    X211();
  }
  else {
    X217();
  }
}

void X217() {
  flip (541/1000) {
    X219();
  }
  else {
    X218();
  }
}

void X218() {
  flip (187/500) {
    flip (9/125) {
      X213();
    }
    else {
      X222();
    }
  }
  else {
    tick(1);
  }
}

void X219() {
  flip (111/1000) {
    flip (479/1000) {
      X217();
    }
    else {
      X220();
    }
  }
  else {
    tick(1);
  }
}

void X220() {
  flip (661/1000) {
    X218();
  }
  else {
    X223();
  }
}

void X221() {
  X222();
  X221();
}

void X222() {
  flip (77/200) {
    X217();
  }
  else {
    X217();
  }
}

void X223() {
  flip (137/250) {
    X223();
  }
  else {
    X224();
  }
}

void X224() {
  flip (793/1000) {
    flip (107/1000) {
      X222();
    }
    else {
      X229();
    }
  }
  else {
    tick(1);
  }
}

void X225() {
  flip (239/250) {
    X228();
  }
  else {
    X225();
  }
}

void X226() {
  X220();
  X227();
}

void X227() {
  X225();
  X226();
}

void X228() {
  X223();
  X225();
}

void X229() {
  flip (277/500) {
    flip (3/25) {
      X232();
    }
    else {
      X227();
    }
  }
  else {
    tick(1);
  }
}

void X230() {
  flip (737/1000) {
    flip (253/500) {
      X228();
    }
    else {
      X226();
    }
  }
  else {
    tick(1);
  }
}

void X231() {
  flip (227/500) {
    X231();
  }
  else {
    X229();
  }
}

void X232() {
  X236();
  X231();
}

void X233() {
  flip (21/50) {
    flip (483/1000) {
      X238();
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
  X231();
  X236();
}

void X235() {
  X238();
  X229();
}

void X236() {
  flip (439/500) {
    flip (983/1000) {
      X230();
    }
    else {
      X232();
    }
  }
  else {
    tick(1);
  }
}

void X237() {
  flip (89/100) {
    X240();
  }
  else {
    X240();
  }
}

void X238() {
  X241();
  X238();
}

void X239() {
  flip (767/1000) {
    flip (793/1000) {
      X235();
    }
    else {
      X240();
    }
  }
  else {
    tick(1);
  }
}

void X240() {
  X243();
  X244();
}

void X241() {
  X237();
  X238();
}

void X242() {
  X244();
  X239();
}

void X243() {
  flip (843/1000) {
    X246();
  }
  else {
    X247();
  }
}

void X244() {
  flip (37/40) {
    X245();
  }
  else {
    X245();
  }
}

void X245() {
  flip (101/500) {
    X240();
  }
  else {
    X245();
  }
}

void X246() {
  X248();
  X249();
}

void X247() {
  X252();
  X243();
}

void X248() {
  X252();
  X249();
}

void X249() {
  flip (819/1000) {
    X243();
  }
  else {
    X249();
  }
}

void X250() {
  flip (413/1000) {
    X250();
  }
  else {
    X254();
  }
}

void X251() {
  flip (86/125) {
    flip (313/500) {
      X251();
    }
    else {
      X256();
    }
  }
  else {
    tick(1);
  }
}

void X252() {
  X252();
  X251();
}

void X253() {
  X257();
  X257();
}

void X254() {
  flip (249/500) {
    flip (117/1000) {
      X252();
    }
    else {
      X255();
    }
  }
  else {
    tick(1);
  }
}

void X255() {
  flip (227/500) {
    X254();
  }
  else {
    X249();
  }
}

void X256() {
  flip (163/500) {
    flip (9/500) {
      X257();
    }
    else {
      X261();
    }
  }
  else {
    tick(1);
  }
}

void X257() {
  flip (679/1000) {
    X252();
  }
  else {
    X262();
  }
}

void X258() {
  flip (221/500) {
    flip (139/250) {
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

void X259() {
  flip (447/500) {
    flip (11/500) {
      X256();
    }
    else {
      X259();
    }
  }
  else {
    tick(1);
  }
}

void X260() {
  X259();
  X260();
}

void X261() {
  flip (551/1000) {
    X255();
  }
  else {
    X262();
  }
}

void X262() {
  flip (83/500) {
    X266();
  }
  else {
    X265();
  }
}

void X263() {
  flip (187/1000) {
    flip (411/500) {
      X262();
    }
    else {
      X262();
    }
  }
  else {
    tick(1);
  }
}

void X264() {
  X263();
  X266();
}

void X265() {
  flip (133/200) {
    flip (241/500) {
      X267();
    }
    else {
      X270();
    }
  }
  else {
    tick(1);
  }
}

void X266() {
  flip (759/1000) {
    flip (431/1000) {
      X264();
    }
    else {
      X262();
    }
  }
  else {
    tick(1);
  }
}

void X267() {
  X262();
  X269();
}

void X268() {
  flip (37/50) {
    X272();
  }
  else {
    X273();
  }
}

void X269() {
  flip (83/100) {
    X273();
  }
  else {
    X268();
  }
}

void X270() {
  flip (461/1000) {
    flip (19/20) {
      X270();
    }
    else {
      X268();
    }
  }
  else {
    tick(1);
  }
}

void X271() {
  flip (97/500) {
    X273();
  }
  else {
    X266();
  }
}

void X272() {
  flip (179/200) {
    X273();
  }
  else {
    X267();
  }
}

void X273() {
  flip (63/250) {
    X269();
  }
  else {
    X270();
  }
}

void X274() {
  flip (531/1000) {
    X269();
  }
  else {
    X271();
  }
}

void X275() {
  X272();
  X277();
}

void X276() {
  X276();
  X270();
}

void X277() {
  flip (99/125) {
    X276();
  }
  else {
    X279();
  }
}

void X278() {
  flip (179/1000) {
    flip (907/1000) {
      X281();
    }
    else {
      X280();
    }
  }
  else {
    tick(1);
  }
}

void X279() {
  X279();
  X278();
}

void X280() {
  flip (114/125) {
    flip (267/500) {
      X278();
    }
    else {
      X274();
    }
  }
  else {
    tick(1);
  }
}

void X281() {
  flip (217/1000) {
    X278();
  }
  else {
    X281();
  }
}

void X282() {
  X282();
  X283();
}

void X283() {
  X278();
  X279();
}

void X284() {
  flip (43/1000) {
    flip (31/100) {
      X284();
    }
    else {
      X279();
    }
  }
  else {
    tick(1);
  }
}

void X285() {
  flip (681/1000) {
    flip (297/1000) {
      X280();
    }
    else {
      X280();
    }
  }
  else {
    tick(1);
  }
}

void X286() {
  X280();
  X283();
}

void X287() {
  flip (587/1000) {
    X291();
  }
  else {
    X285();
  }
}

void X288() {
  flip (104/125) {
    X287();
  }
  else {
    X284();
  }
}

void X289() {
  flip (111/125) {
    flip (453/1000) {
      X288();
    }
    else {
      X284();
    }
  }
  else {
    tick(1);
  }
}

void X290() {
  flip (71/250) {
    flip (577/1000) {
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

void X291() {
  flip (377/500) {
    flip (643/1000) {
      X293();
    }
    else {
      X292();
    }
  }
  else {
    tick(1);
  }
}

void X292() {
  X291();
  X291();
}

void X293() {
  flip (103/500) {
    flip (47/200) {
      X292();
    }
    else {
      X298();
    }
  }
  else {
    tick(1);
  }
}

void X294() {
  flip (479/500) {
    X298();
  }
  else {
    X294();
  }
}

void X295() {
  flip (23/40) {
    flip (949/1000) {
      X300();
    }
    else {
      X293();
    }
  }
  else {
    tick(1);
  }
}

void X296() {
  flip (3/100) {
    flip (823/1000) {
      X291();
    }
    else {
      X299();
    }
  }
  else {
    tick(1);
  }
}

void X297() {
  flip (997/1000) {
    X291();
  }
  else {
    X300();
  }
}

void X298() {
  X301();
  X303();
}

void X299() {
  flip (321/500) {
    flip (887/1000) {
      X304();
    }
    else {
      X304();
    }
  }
  else {
    tick(1);
  }
}

void X300() {
  flip (351/1000) {
    X297();
  }
  else {
    X299();
  }
}

void X301() {
  flip (543/1000) {
    X297();
  }
  else {
    X298();
  }
}

void X302() {
  flip (353/500) {
    flip (143/500) {
      X300();
    }
    else {
      X296();
    }
  }
  else {
    tick(1);
  }
}

void X303() {
  flip (497/1000) {
    X302();
  }
  else {
    X308();
  }
}

void X304() {
  flip (13/100) {
    flip (23/125) {
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

void X305() {
  X299();
  X301();
}

void X306() {
  flip (419/1000) {
    X307();
  }
  else {
    X300();
  }
}

void X307() {
  X311();
  X306();
}

void X308() {
  flip (449/500) {
    flip (133/500) {
      X310();
    }
    else {
      X311();
    }
  }
  else {
    tick(1);
  }
}

void X309() {
  flip (379/500) {
    X307();
  }
  else {
    X313();
  }
}

void X310() {
  flip (31/40) {
    X310();
  }
  else {
    X306();
  }
}

void X311() {
  flip (21/125) {
    flip (637/1000) {
      X307();
    }
    else {
      X316();
    }
  }
  else {
    tick(1);
  }
}

void X312() {
  X314();
  X315();
}

void X313() {
  flip (643/1000) {
    flip (253/1000) {
      X314();
    }
    else {
      X314();
    }
  }
  else {
    tick(1);
  }
}

void X314() {
  flip (27/50) {
    flip (19/100) {
      X313();
    }
    else {
      X314();
    }
  }
  else {
    tick(1);
  }
}

void X315() {
  flip (927/1000) {
    X313();
  }
  else {
    X316();
  }
}

void X316() {
  flip (22/25) {
    X312();
  }
  else {
    X318();
  }
}

void X317() {
  X322();
  X313();
}

void X318() {
  X312();
  X323();
}

void X319() {
  flip (3/1000) {
    X319();
  }
  else {
    X324();
  }
}

void X320() {
  flip (651/1000) {
    flip (83/100) {
      X315();
    }
    else {
      X318();
    }
  }
  else {
    tick(1);
  }
}

void X321() {
  flip (983/1000) {
    flip (139/250) {
      X325();
    }
    else {
      X325();
    }
  }
  else {
    tick(1);
  }
}

void X322() {
  flip (21/125) {
    X316();
  }
  else {
    X322();
  }
}

void X323() {
  flip (74/125) {
    flip (427/1000) {
      X325();
    }
    else {
      X318();
    }
  }
  else {
    tick(1);
  }
}

void X324() {
  flip (167/1000) {
    flip (959/1000) {
      X326();
    }
    else {
      X325();
    }
  }
  else {
    tick(1);
  }
}

void X325() {
  flip (13/50) {
    X321();
  }
  else {
    X329();
  }
}

void X326() {
  flip (823/1000) {
    X320();
  }
  else {
    X331();
  }
}

void X327() {
  X326();
  X332();
}

void X328() {
  flip (207/1000) {
    X325();
  }
  else {
    X328();
  }
}

void X329() {
  X323();
  X330();
}

void X330() {
  X334();
  X332();
}

void X331() {
  X331();
  X328();
}

void X332() {
  flip (21/50) {
    flip (39/125) {
      X330();
    }
    else {
      X327();
    }
  }
  else {
    tick(1);
  }
}

void X333() {
  X328();
  X330();
}

void X334() {
  flip (127/200) {
    flip (603/1000) {
      X339();
    }
    else {
      X333();
    }
  }
  else {
    tick(1);
  }
}

void X335() {
  flip (911/1000) {
    flip (106/125) {
      X335();
    }
    else {
      X336();
    }
  }
  else {
    tick(1);
  }
}

void X336() {
  X330();
  X337();
}

void X337() {
  flip (17/40) {
    X342();
  }
  else {
    X333();
  }
}

void X338() {
  flip (199/250) {
    flip (121/250) {
      X339();
    }
    else {
      X337();
    }
  }
  else {
    tick(1);
  }
}

void X339() {
  flip (563/1000) {
    X335();
  }
  else {
    X333();
  }
}

void X340() {
  flip (83/200) {
    X335();
  }
  else {
    X342();
  }
}

void X341() {
  flip (857/1000) {
    X337();
  }
  else {
    X344();
  }
}

void X342() {
  flip (4/125) {
    X340();
  }
  else {
    X343();
  }
}

void X343() {
  flip (173/250) {
    X340();
  }
  else {
    X343();
  }
}

void X344() {
  flip (51/100) {
    X345();
  }
  else {
    X340();
  }
}

void X345() {
  X348();
  X347();
}

void X346() {
  flip (17/40) {
    flip (263/1000) {
      X342();
    }
    else {
      X341();
    }
  }
  else {
    tick(1);
  }
}

void X347() {
  flip (421/500) {
    X351();
  }
  else {
    X343();
  }
}

void X348() {
  X350();
  X344();
}

void X349() {
  flip (27/250) {
    X348();
  }
  else {
    X347();
  }
}

void X350() {
  flip (311/1000) {
    X353();
  }
  else {
    X345();
  }
}

void X351() {
  flip (97/1000) {
    X355();
  }
  else {
    X345();
  }
}

void X352() {
  X354();
  X354();
}

void X353() {
  flip (78/125) {
    flip (929/1000) {
      X355();
    }
    else {
      X347();
    }
  }
  else {
    tick(1);
  }
}

void X354() {
  flip (81/125) {
    X352();
  }
  else {
    X351();
  }
}

void X355() {
  flip (957/1000) {
    flip (49/125) {
      X356();
    }
    else {
      X360();
    }
  }
  else {
    tick(1);
  }
}

void X356() {
  flip (17/25) {
    X355();
  }
  else {
    X351();
  }
}

void X357() {
  X360();
  X357();
}

void X358() {
  flip (107/200) {
    flip (967/1000) {
      X358();
    }
    else {
      X356();
    }
  }
  else {
    tick(1);
  }
}

void X359() {
  X359();
  X362();
}

void X360() {
  X354();
  X365();
}

void X361() {
  flip (9/20) {
    flip (7/10) {
      X356();
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
  flip (423/500) {
    flip (123/250) {
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

void X363() {
  X361();
  X360();
}

void X364() {
  X369();
  X363();
}

void X365() {
  X370();
  X362();
}

void X366() {
  flip (9/25) {
    X363();
  }
  else {
    X360();
  }
}

void X367() {
  X365();
  X368();
}

void X368() {
  flip (89/500) {
    X372();
  }
  else {
    X373();
  }
}

void X369() {
  flip (493/1000) {
    flip (251/1000) {
      X374();
    }
    else {
      X363();
    }
  }
  else {
    tick(1);
  }
}

void X370() {
  flip (627/1000) {
    flip (531/1000) {
      X369();
    }
    else {
      X375();
    }
  }
  else {
    tick(1);
  }
}

void X371() {
  flip (957/1000) {
    X372();
  }
  else {
    X371();
  }
}

void X372() {
  X372();
  X375();
}

void X373() {
  X367();
  X368();
}

void X374() {
  X376();
  X372();
}

void X375() {
  flip (417/1000) {
    X379();
  }
  else {
    X377();
  }
}

void X376() {
  flip (7/8) {
    flip (69/500) {
      X372();
    }
    else {
      X381();
    }
  }
  else {
    tick(1);
  }
}

void X377() {
  flip (37/50) {
    flip (759/1000) {
      X374();
    }
    else {
      X379();
    }
  }
  else {
    tick(1);
  }
}

void X378() {
  X382();
  X381();
}

void X379() {
  flip (66/125) {
    X380();
  }
  else {
    X383();
  }
}

void X380() {
  flip (983/1000) {
    flip (369/1000) {
      X385();
    }
    else {
      X381();
    }
  }
  else {
    tick(1);
  }
}

void X381() {
  flip (357/1000) {
    X384();
  }
  else {
    X375();
  }
}

void X382() {
  flip (26/125) {
    X385();
  }
  else {
    X385();
  }
}

void X383() {
  X387();
  X377();
}

void X384() {
  flip (89/250) {
    flip (267/1000) {
      X383();
    }
    else {
      X389();
    }
  }
  else {
    tick(1);
  }
}

void X385() {
  flip (483/1000) {
    X385();
  }
  else {
    X387();
  }
}

void X386() {
  flip (807/1000) {
    X382();
  }
  else {
    X381();
  }
}

void X387() {
  flip (22/125) {
    flip (33/1000) {
      X382();
    }
    else {
      X391();
    }
  }
  else {
    tick(1);
  }
}

void X388() {
  X383();
  X382();
}

void X389() {
  flip (979/1000) {
    X393();
  }
  else {
    X386();
  }
}

void X390() {
  flip (29/200) {
    X388();
  }
  else {
    X395();
  }
}

void X391() {
  flip (349/500) {
    flip (111/250) {
      X390();
    }
    else {
      X395();
    }
  }
  else {
    tick(1);
  }
}

void X392() {
  flip (93/500) {
    flip (441/1000) {
      X387();
    }
    else {
      X388();
    }
  }
  else {
    tick(1);
  }
}

void X393() {
  X391();
  X391();
}

void X394() {
  X394();
  X393();
}

void X395() {
  X393();
  X391();
}

void X396() {
  X396();
  X401();
}

void X397() {
  flip (327/1000) {
    flip (141/250) {
      X395();
    }
    else {
      X397();
    }
  }
  else {
    tick(1);
  }
}

void X398() {
  flip (539/1000) {
    X393();
  }
  else {
    X393();
  }
}

void X399() {
  flip (539/1000) {
    X404();
  }
  else {
    X396();
  }
}

void X400() {
  flip (19/40) {
    flip (49/125) {
      X404();
    }
    else {
      X402();
    }
  }
  else {
    tick(1);
  }
}

void X401() {
  X397();
  X402();
}

void X402() {
  flip (989/1000) {
    flip (173/1000) {
      X406();
    }
    else {
      X400();
    }
  }
  else {
    tick(1);
  }
}

void X403() {
  flip (83/500) {
    X401();
  }
  else {
    X407();
  }
}

void X404() {
  flip (63/200) {
    flip (157/200) {
      X404();
    }
    else {
      X404();
    }
  }
  else {
    tick(1);
  }
}

void X405() {
  X410();
  X401();
}

void X406() {
  X404();
  X402();
}

void X407() {
  flip (79/200) {
    flip (133/1000) {
      X406();
    }
    else {
      X407();
    }
  }
  else {
    tick(1);
  }
}

void X408() {
  flip (237/500) {
    flip (987/1000) {
      X407();
    }
    else {
      X411();
    }
  }
  else {
    tick(1);
  }
}

void X409() {
  flip (511/1000) {
    flip (279/1000) {
      X405();
    }
    else {
      X404();
    }
  }
  else {
    tick(1);
  }
}

void X410() {
  X412();
  X414();
}

void X411() {
  flip (763/1000) {
    flip (517/1000) {
      X409();
    }
    else {
      X406();
    }
  }
  else {
    tick(1);
  }
}

void X412() {
  flip (1/20) {
    X416();
  }
  else {
    X409();
  }
}

void X413() {
  flip (118/125) {
    flip (89/500) {
      X415();
    }
    else {
      X418();
    }
  }
  else {
    tick(1);
  }
}

void X414() {
  flip (433/1000) {
    X409();
  }
  else {
    X414();
  }
}

void X415() {
  flip (143/500) {
    flip (203/250) {
      X418();
    }
    else {
      X415();
    }
  }
  else {
    tick(1);
  }
}

void X416() {
  flip (333/500) {
    flip (4/5) {
      X415();
    }
    else {
      X421();
    }
  }
  else {
    tick(1);
  }
}

void X417() {
  flip (87/100) {
    flip (917/1000) {
      X418();
    }
    else {
      X415();
    }
  }
  else {
    tick(1);
  }
}

void X418() {
  flip (671/1000) {
    flip (241/1000) {
      X422();
    }
    else {
      X420();
    }
  }
  else {
    tick(1);
  }
}

void X419() {
  flip (21/500) {
    flip (621/1000) {
      X415();
    }
    else {
      X424();
    }
  }
  else {
    tick(1);
  }
}

void X420() {
  flip (97/500) {
    X419();
  }
  else {
    X424();
  }
}

void X421() {
  flip (843/1000) {
    flip (67/500) {
      X419();
    }
    else {
      X424();
    }
  }
  else {
    tick(1);
  }
}

void X422() {
  flip (431/1000) {
    flip (37/200) {
      X425();
    }
    else {
      X417();
    }
  }
  else {
    tick(1);
  }
}

void X423() {
  flip (517/1000) {
    flip (9/40) {
      X419();
    }
    else {
      X426();
    }
  }
  else {
    tick(1);
  }
}

void X424() {
  flip (118/125) {
    flip (279/500) {
      X423();
    }
    else {
      X420();
    }
  }
  else {
    tick(1);
  }
}

void X425() {
  flip (103/1000) {
    X429();
  }
  else {
    X422();
  }
}

void X426() {
  flip (457/1000) {
    X420();
  }
  else {
    X430();
  }
}

void X427() {
  flip (507/1000) {
    X424();
  }
  else {
    X423();
  }
}

void X428() {
  flip (127/1000) {
    flip (707/1000) {
      X431();
    }
    else {
      X426();
    }
  }
  else {
    tick(1);
  }
}

void X429() {
  flip (619/1000) {
    X428();
  }
  else {
    X424();
  }
}

void X430() {
  X433();
  X426();
}

void X431() {
  flip (249/250) {
    flip (147/200) {
      X427();
    }
    else {
      X430();
    }
  }
  else {
    tick(1);
  }
}

void X432() {
  flip (381/1000) {
    flip (23/500) {
      X435();
    }
    else {
      X436();
    }
  }
  else {
    tick(1);
  }
}

void X433() {
  flip (203/250) {
    X427();
  }
  else {
    X427();
  }
}

void X434() {
  flip (493/500) {
    X434();
  }
  else {
    X432();
  }
}

void X435() {
  flip (43/500) {
    X437();
  }
  else {
    X437();
  }
}

void X436() {
  flip (83/1000) {
    flip (66/125) {
      X430();
    }
    else {
      X434();
    }
  }
  else {
    tick(1);
  }
}

void X437() {
  X433();
  X438();
}

void X438() {
  flip (31/40) {
    X437();
  }
  else {
    X438();
  }
}

void X439() {
  flip (353/500) {
    flip (593/1000) {
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

void X440() {
  flip (118/125) {
    X435();
  }
  else {
    X439();
  }
}

void X441() {
  flip (399/1000) {
    X439();
  }
  else {
    X435();
  }
}

void X442() {
  flip (21/25) {
    flip (19/250) {
      X446();
    }
    else {
      X438();
    }
  }
  else {
    tick(1);
  }
}

void X443() {
  X438();
  X438();
}

void X444() {
  X446();
  X440();
}

void X445() {
  X444();
  X447();
}

void X446() {
  flip (73/500) {
    flip (791/1000) {
      X451();
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
  X442();
  X451();
}

void X448() {
  flip (211/250) {
    flip (71/125) {
      X450();
    }
    else {
      X452();
    }
  }
  else {
    tick(1);
  }
}

void X449() {
  flip (41/200) {
    X454();
  }
  else {
    X444();
  }
}

void X450() {
  flip (201/250) {
    X444();
  }
  else {
    X445();
  }
}

void X451() {
  flip (977/1000) {
    X450();
  }
  else {
    X447();
  }
}

void X452() {
  X452();
  X453();
}

void X453() {
  flip (697/1000) {
    X447();
  }
  else {
    X457();
  }
}

void X454() {
  X452();
  X450();
}

void X455() {
  X460();
  X449();
}

void X456() {
  flip (831/1000) {
    X457();
  }
  else {
    X450();
  }
}

void X457() {
  flip (871/1000) {
    flip (77/250) {
      X459();
    }
    else {
      X451();
    }
  }
  else {
    tick(1);
  }
}

void X458() {
  flip (137/500) {
    X458();
  }
  else {
    X456();
  }
}

void X459() {
  flip (309/500) {
    flip (359/500) {
      X456();
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
  X456();
  X463();
}

void X461() {
  flip (121/500) {
    X461();
  }
  else {
    X455();
  }
}

void X462() {
  flip (59/250) {
    X466();
  }
  else {
    X458();
  }
}

void X463() {
  flip (201/1000) {
    flip (139/200) {
      X458();
    }
    else {
      X467();
    }
  }
  else {
    tick(1);
  }
}

void X464() {
  flip (439/500) {
    X466();
  }
  else {
    X464();
  }
}

void X465() {
  X461();
  X470();
}

void X466() {
  flip (199/500) {
    X467();
  }
  else {
    X469();
  }
}

void X467() {
  flip (3/40) {
    X462();
  }
  else {
    X472();
  }
}

void X468() {
  flip (27/40) {
    flip (339/500) {
      X467();
    }
    else {
      X466();
    }
  }
  else {
    tick(1);
  }
}

void X469() {
  X465();
  X468();
}

void X470() {
  flip (377/500) {
    X465();
  }
  else {
    X475();
  }
}

void X471() {
  flip (71/250) {
    X475();
  }
  else {
    X466();
  }
}

void X472() {
  flip (78/125) {
    flip (143/1000) {
      X473();
    }
    else {
      X468();
    }
  }
  else {
    tick(1);
  }
}

void X473() {
  flip (31/1000) {
    X474();
  }
  else {
    X469();
  }
}

void X474() {
  flip (449/1000) {
    flip (13/20) {
      X468();
    }
    else {
      X472();
    }
  }
  else {
    tick(1);
  }
}

void X475() {
  flip (7/50) {
    flip (89/500) {
      X472();
    }
    else {
      X479();
    }
  }
  else {
    tick(1);
  }
}

void X476() {
  flip (143/250) {
    flip (63/1000) {
      X473();
    }
    else {
      X470();
    }
  }
  else {
    tick(1);
  }
}

void X477() {
  flip (191/500) {
    X478();
  }
  else {
    X476();
  }
}

void X478() {
  flip (9/50) {
    X472();
  }
  else {
    X480();
  }
}

void X479() {
  flip (41/200) {
    flip (97/200) {
      X482();
    }
    else {
      X482();
    }
  }
  else {
    tick(1);
  }
}

void X480() {
  flip (59/200) {
    flip (131/250) {
      X481();
    }
    else {
      X480();
    }
  }
  else {
    tick(1);
  }
}

void X481() {
  X486();
  X481();
}

void X482() {
  X483();
  X476();
}

void X483() {
  flip (73/250) {
    X485();
  }
  else {
    X488();
  }
}

void X484() {
  X480();
  X488();
}

void X485() {
  flip (427/1000) {
    X486();
  }
  else {
    X487();
  }
}

void X486() {
  X485();
  X480();
}

void X487() {
  flip (53/1000) {
    flip (4/125) {
      X492();
    }
    else {
      X486();
    }
  }
  else {
    tick(1);
  }
}

void X488() {
  flip (211/500) {
    X487();
  }
  else {
    X492();
  }
}

void X489() {
  flip (93/250) {
    flip (72/125) {
      X485();
    }
    else {
      X484();
    }
  }
  else {
    tick(1);
  }
}

void X490() {
  X491();
  X493();
}

void X491() {
  flip (947/1000) {
    X488();
  }
  else {
    X490();
  }
}

void X492() {
  flip (261/1000) {
    flip (241/500) {
      X494();
    }
    else {
      X496();
    }
  }
  else {
    tick(1);
  }
}

void X493() {
  X487();
  X488();
}

void X494() {
  flip (473/500) {
    X497();
  }
  else {
    X488();
  }
}

void X495() {
  flip (881/1000) {
    flip (783/1000) {
      X0();
    }
    else {
      X489();
    }
  }
  else {
    tick(1);
  }
}

void X496() {
  X499();
  X1();
}

void X497() {
  flip (939/1000) {
    flip (83/250) {
      X491();
    }
    else {
      X495();
    }
  }
  else {
    tick(1);
  }
}

void X498() {
  X495();
  X498();
}

void X499() {
  X2();
  X497();
}
