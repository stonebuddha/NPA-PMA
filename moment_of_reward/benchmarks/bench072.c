void X0() {
  flip (911/1000) {
    flip (39/1000) {
      X5();
    }
    else {
      X3();
    }
  }
  else {
    tick(1);
  }
}

void X1() {
  flip (683/1000) {
    X6();
  }
  else {
    X4();
  }
}

void X2() {
  X4();
  X2();
}

void X3() {
  flip (96/125) {
    flip (419/500) {
      X2();
    }
    else {
      X2();
    }
  }
  else {
    tick(1);
  }
}

void X4() {
  flip (83/250) {
    flip (19/20) {
      X5();
    }
    else {
      X7();
    }
  }
  else {
    tick(1);
  }
}

void X5() {
  flip (109/200) {
    flip (117/200) {
      X499();
    }
    else {
      X7();
    }
  }
  else {
    tick(1);
  }
}

void X6() {
  X2();
  X5();
}

void X7() {
  flip (219/250) {
    flip (64/125) {
      X11();
    }
    else {
      X9();
    }
  }
  else {
    tick(1);
  }
}

void X8() {
  flip (33/40) {
    flip (13/50) {
      X10();
    }
    else {
      X12();
    }
  }
  else {
    tick(1);
  }
}

void X9() {
  flip (243/500) {
    flip (187/500) {
      X8();
    }
    else {
      X12();
    }
  }
  else {
    tick(1);
  }
}

void X10() {
  flip (301/500) {
    flip (1/250) {
      X11();
    }
    else {
      X15();
    }
  }
  else {
    tick(1);
  }
}

void X11() {
  X10();
  X5();
}

void X12() {
  flip (223/1000) {
    X12();
  }
  else {
    X7();
  }
}

void X13() {
  flip (161/500) {
    X8();
  }
  else {
    X9();
  }
}

void X14() {
  X17();
  X15();
}

void X15() {
  flip (317/500) {
    X13();
  }
  else {
    X18();
  }
}

void X16() {
  flip (42/125) {
    X16();
  }
  else {
    X12();
  }
}

void X17() {
  flip (91/125) {
    flip (181/500) {
      X19();
    }
    else {
      X12();
    }
  }
  else {
    tick(1);
  }
}

void X18() {
  flip (363/1000) {
    X19();
  }
  else {
    X14();
  }
}

void X19() {
  X13();
  X17();
}

void X20() {
  flip (69/125) {
    X21();
  }
  else {
    X23();
  }
}

void X21() {
  flip (21/200) {
    X19();
  }
  else {
    X19();
  }
}

void X22() {
  flip (527/1000) {
    flip (471/500) {
      X21();
    }
    else {
      X16();
    }
  }
  else {
    tick(1);
  }
}

void X23() {
  flip (373/500) {
    flip (12/125) {
      X28();
    }
    else {
      X17();
    }
  }
  else {
    tick(1);
  }
}

void X24() {
  flip (67/500) {
    X19();
  }
  else {
    X25();
  }
}

void X25() {
  X23();
  X21();
}

void X26() {
  flip (633/1000) {
    X27();
  }
  else {
    X26();
  }
}

void X27() {
  X31();
  X32();
}

void X28() {
  flip (21/50) {
    flip (589/1000) {
      X27();
    }
    else {
      X27();
    }
  }
  else {
    tick(1);
  }
}

void X29() {
  flip (1/500) {
    X33();
  }
  else {
    X33();
  }
}

void X30() {
  X27();
  X30();
}

void X31() {
  X30();
  X28();
}

void X32() {
  flip (173/500) {
    X28();
  }
  else {
    X35();
  }
}

void X33() {
  X35();
  X33();
}

void X34() {
  flip (667/1000) {
    X39();
  }
  else {
    X38();
  }
}

void X35() {
  flip (399/500) {
    flip (927/1000) {
      X30();
    }
    else {
      X34();
    }
  }
  else {
    tick(1);
  }
}

void X36() {
  flip (21/250) {
    X35();
  }
  else {
    X38();
  }
}

void X37() {
  X38();
  X41();
}

void X38() {
  flip (63/500) {
    X36();
  }
  else {
    X34();
  }
}

void X39() {
  X37();
  X37();
}

void X40() {
  flip (133/200) {
    flip (237/1000) {
      X40();
    }
    else {
      X45();
    }
  }
  else {
    tick(1);
  }
}

void X41() {
  flip (17/500) {
    flip (24/25) {
      X38();
    }
    else {
      X35();
    }
  }
  else {
    tick(1);
  }
}

void X42() {
  flip (62/125) {
    flip (517/1000) {
      X47();
    }
    else {
      X37();
    }
  }
  else {
    tick(1);
  }
}

void X43() {
  flip (681/1000) {
    flip (669/1000) {
      X38();
    }
    else {
      X48();
    }
  }
  else {
    tick(1);
  }
}

void X44() {
  flip (77/100) {
    X47();
  }
  else {
    X47();
  }
}

void X45() {
  X46();
  X50();
}

void X46() {
  flip (193/1000) {
    flip (171/250) {
      X44();
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
  X52();
  X49();
}

void X48() {
  X50();
  X50();
}

void X49() {
  flip (201/250) {
    flip (157/1000) {
      X48();
    }
    else {
      X45();
    }
  }
  else {
    tick(1);
  }
}

void X50() {
  X45();
  X44();
}

void X51() {
  X49();
  X50();
}

void X52() {
  X46();
  X49();
}

void X53() {
  flip (21/50) {
    flip (99/200) {
      X53();
    }
    else {
      X50();
    }
  }
  else {
    tick(1);
  }
}

void X54() {
  X55();
  X52();
}

void X55() {
  flip (439/500) {
    X50();
  }
  else {
    X50();
  }
}

void X56() {
  flip (519/1000) {
    flip (92/125) {
      X55();
    }
    else {
      X61();
    }
  }
  else {
    tick(1);
  }
}

void X57() {
  X60();
  X59();
}

void X58() {
  X55();
  X60();
}

void X59() {
  flip (263/1000) {
    X55();
  }
  else {
    X59();
  }
}

void X60() {
  flip (313/500) {
    X60();
  }
  else {
    X61();
  }
}

void X61() {
  X58();
  X56();
}

void X62() {
  flip (769/1000) {
    flip (463/500) {
      X64();
    }
    else {
      X61();
    }
  }
  else {
    tick(1);
  }
}

void X63() {
  flip (237/500) {
    X58();
  }
  else {
    X62();
  }
}

void X64() {
  X63();
  X66();
}

void X65() {
  X64();
  X59();
}

void X66() {
  flip (69/100) {
    flip (869/1000) {
      X69();
    }
    else {
      X60();
    }
  }
  else {
    tick(1);
  }
}

void X67() {
  X62();
  X63();
}

void X68() {
  flip (253/500) {
    flip (149/1000) {
      X73();
    }
    else {
      X67();
    }
  }
  else {
    tick(1);
  }
}

void X69() {
  flip (353/500) {
    X65();
  }
  else {
    X70();
  }
}

void X70() {
  flip (331/1000) {
    flip (67/1000) {
      X69();
    }
    else {
      X73();
    }
  }
  else {
    tick(1);
  }
}

void X71() {
  X66();
  X73();
}

void X72() {
  X73();
  X68();
}

void X73() {
  X75();
  X73();
}

void X74() {
  flip (29/40) {
    flip (917/1000) {
      X74();
    }
    else {
      X73();
    }
  }
  else {
    tick(1);
  }
}

void X75() {
  X80();
  X69();
}

void X76() {
  flip (19/25) {
    flip (487/500) {
      X75();
    }
    else {
      X78();
    }
  }
  else {
    tick(1);
  }
}

void X77() {
  X72();
  X72();
}

void X78() {
  flip (78/125) {
    X80();
  }
  else {
    X83();
  }
}

void X79() {
  flip (97/250) {
    X74();
  }
  else {
    X75();
  }
}

void X80() {
  X77();
  X85();
}

void X81() {
  flip (99/125) {
    X83();
  }
  else {
    X78();
  }
}

void X82() {
  flip (753/1000) {
    X84();
  }
  else {
    X83();
  }
}

void X83() {
  X80();
  X82();
}

void X84() {
  flip (321/500) {
    flip (22/125) {
      X84();
    }
    else {
      X83();
    }
  }
  else {
    tick(1);
  }
}

void X85() {
  flip (37/1000) {
    X83();
  }
  else {
    X86();
  }
}

void X86() {
  X80();
  X83();
}

void X87() {
  flip (81/200) {
    X84();
  }
  else {
    X92();
  }
}

void X88() {
  flip (89/500) {
    flip (319/1000) {
      X83();
    }
    else {
      X89();
    }
  }
  else {
    tick(1);
  }
}

void X89() {
  flip (451/500) {
    flip (22/25) {
      X90();
    }
    else {
      X83();
    }
  }
  else {
    tick(1);
  }
}

void X90() {
  flip (621/1000) {
    flip (97/500) {
      X85();
    }
    else {
      X94();
    }
  }
  else {
    tick(1);
  }
}

void X91() {
  flip (59/500) {
    X89();
  }
  else {
    X86();
  }
}

void X92() {
  flip (141/1000) {
    flip (23/40) {
      X88();
    }
    else {
      X94();
    }
  }
  else {
    tick(1);
  }
}

void X93() {
  X91();
  X94();
}

void X94() {
  flip (217/1000) {
    flip (583/1000) {
      X92();
    }
    else {
      X92();
    }
  }
  else {
    tick(1);
  }
}

void X95() {
  flip (233/500) {
    flip (57/125) {
      X99();
    }
    else {
      X92();
    }
  }
  else {
    tick(1);
  }
}

void X96() {
  flip (83/1000) {
    flip (977/1000) {
      X93();
    }
    else {
      X91();
    }
  }
  else {
    tick(1);
  }
}

void X97() {
  flip (23/500) {
    flip (231/1000) {
      X94();
    }
    else {
      X91();
    }
  }
  else {
    tick(1);
  }
}

void X98() {
  X96();
  X93();
}

void X99() {
  flip (371/1000) {
    X103();
  }
  else {
    X96();
  }
}

void X100() {
  flip (141/250) {
    flip (159/1000) {
      X94();
    }
    else {
      X105();
    }
  }
  else {
    tick(1);
  }
}

void X101() {
  flip (118/125) {
    flip (291/1000) {
      X99();
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
  X105();
  X107();
}

void X103() {
  flip (117/125) {
    X97();
  }
  else {
    X107();
  }
}

void X104() {
  X109();
  X99();
}

void X105() {
  flip (819/1000) {
    X106();
  }
  else {
    X101();
  }
}

void X106() {
  X105();
  X110();
}

void X107() {
  X105();
  X109();
}

void X108() {
  flip (489/1000) {
    X106();
  }
  else {
    X105();
  }
}

void X109() {
  flip (84/125) {
    X105();
  }
  else {
    X109();
  }
}

void X110() {
  flip (41/1000) {
    flip (911/1000) {
      X112();
    }
    else {
      X114();
    }
  }
  else {
    tick(1);
  }
}

void X111() {
  X109();
  X109();
}

void X112() {
  flip (483/500) {
    X106();
  }
  else {
    X111();
  }
}

void X113() {
  flip (8/125) {
    flip (77/100) {
      X115();
    }
    else {
      X116();
    }
  }
  else {
    tick(1);
  }
}

void X114() {
  flip (187/500) {
    X108();
  }
  else {
    X109();
  }
}

void X115() {
  flip (49/125) {
    X114();
  }
  else {
    X114();
  }
}

void X116() {
  X112();
  X114();
}

void X117() {
  flip (261/500) {
    flip (61/250) {
      X114();
    }
    else {
      X114();
    }
  }
  else {
    tick(1);
  }
}

void X118() {
  X119();
  X117();
}

void X119() {
  X124();
  X122();
}

void X120() {
  flip (13/20) {
    flip (56/125) {
      X125();
    }
    else {
      X115();
    }
  }
  else {
    tick(1);
  }
}

void X121() {
  X120();
  X126();
}

void X122() {
  flip (787/1000) {
    flip (551/1000) {
      X124();
    }
    else {
      X124();
    }
  }
  else {
    tick(1);
  }
}

void X123() {
  flip (241/500) {
    X127();
  }
  else {
    X127();
  }
}

void X124() {
  X121();
  X121();
}

void X125() {
  flip (53/500) {
    X120();
  }
  else {
    X128();
  }
}

void X126() {
  X123();
  X124();
}

void X127() {
  flip (309/500) {
    flip (557/1000) {
      X130();
    }
    else {
      X127();
    }
  }
  else {
    tick(1);
  }
}

void X128() {
  X125();
  X125();
}

void X129() {
  flip (57/100) {
    flip (603/1000) {
      X134();
    }
    else {
      X126();
    }
  }
  else {
    tick(1);
  }
}

void X130() {
  flip (467/500) {
    X134();
  }
  else {
    X133();
  }
}

void X131() {
  flip (231/250) {
    flip (159/200) {
      X136();
    }
    else {
      X132();
    }
  }
  else {
    tick(1);
  }
}

void X132() {
  flip (277/500) {
    flip (51/100) {
      X134();
    }
    else {
      X133();
    }
  }
  else {
    tick(1);
  }
}

void X133() {
  flip (573/1000) {
    X129();
  }
  else {
    X136();
  }
}

void X134() {
  flip (441/1000) {
    X131();
  }
  else {
    X130();
  }
}

void X135() {
  flip (119/250) {
    X129();
  }
  else {
    X133();
  }
}

void X136() {
  X138();
  X138();
}

void X137() {
  flip (407/1000) {
    flip (187/250) {
      X139();
    }
    else {
      X135();
    }
  }
  else {
    tick(1);
  }
}

void X138() {
  X136();
  X132();
}

void X139() {
  flip (333/1000) {
    flip (797/1000) {
      X134();
    }
    else {
      X136();
    }
  }
  else {
    tick(1);
  }
}

void X140() {
  X136();
  X144();
}

void X141() {
  flip (257/1000) {
    X141();
  }
  else {
    X144();
  }
}

void X142() {
  flip (287/500) {
    flip (931/1000) {
      X137();
    }
    else {
      X144();
    }
  }
  else {
    tick(1);
  }
}

void X143() {
  flip (237/500) {
    flip (453/1000) {
      X141();
    }
    else {
      X143();
    }
  }
  else {
    tick(1);
  }
}

void X144() {
  X145();
  X148();
}

void X145() {
  flip (23/40) {
    X139();
  }
  else {
    X144();
  }
}

void X146() {
  flip (409/1000) {
    X141();
  }
  else {
    X148();
  }
}

void X147() {
  flip (77/250) {
    X142();
  }
  else {
    X152();
  }
}

void X148() {
  flip (203/1000) {
    flip (1/4) {
      X147();
    }
    else {
      X146();
    }
  }
  else {
    tick(1);
  }
}

void X149() {
  flip (48/125) {
    X147();
  }
  else {
    X150();
  }
}

void X150() {
  X151();
  X146();
}

void X151() {
  X151();
  X148();
}

void X152() {
  flip (431/500) {
    flip (3/250) {
      X152();
    }
    else {
      X156();
    }
  }
  else {
    tick(1);
  }
}

void X153() {
  flip (71/1000) {
    X152();
  }
  else {
    X153();
  }
}

void X154() {
  flip (191/1000) {
    X159();
  }
  else {
    X158();
  }
}

void X155() {
  flip (347/500) {
    X152();
  }
  else {
    X159();
  }
}

void X156() {
  X157();
  X156();
}

void X157() {
  X154();
  X154();
}

void X158() {
  flip (439/1000) {
    flip (301/1000) {
      X155();
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
  flip (381/1000) {
    flip (291/500) {
      X156();
    }
    else {
      X159();
    }
  }
  else {
    tick(1);
  }
}

void X160() {
  flip (817/1000) {
    flip (9/500) {
      X155();
    }
    else {
      X156();
    }
  }
  else {
    tick(1);
  }
}

void X161() {
  X163();
  X166();
}

void X162() {
  flip (123/250) {
    X162();
  }
  else {
    X164();
  }
}

void X163() {
  X157();
  X158();
}

void X164() {
  flip (443/500) {
    flip (251/1000) {
      X167();
    }
    else {
      X159();
    }
  }
  else {
    tick(1);
  }
}

void X165() {
  flip (133/500) {
    X166();
  }
  else {
    X159();
  }
}

void X166() {
  X162();
  X171();
}

void X167() {
  flip (43/250) {
    flip (703/1000) {
      X162();
    }
    else {
      X163();
    }
  }
  else {
    tick(1);
  }
}

void X168() {
  flip (189/500) {
    flip (411/1000) {
      X168();
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
  X163();
  X168();
}

void X170() {
  flip (133/200) {
    flip (381/1000) {
      X168();
    }
    else {
      X164();
    }
  }
  else {
    tick(1);
  }
}

void X171() {
  flip (739/1000) {
    flip (447/500) {
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
  flip (112/125) {
    X168();
  }
  else {
    X176();
  }
}

void X173() {
  flip (11/100) {
    X169();
  }
  else {
    X172();
  }
}

void X174() {
  flip (27/200) {
    flip (177/200) {
      X168();
    }
    else {
      X173();
    }
  }
  else {
    tick(1);
  }
}

void X175() {
  X179();
  X175();
}

void X176() {
  flip (423/500) {
    flip (33/250) {
      X170();
    }
    else {
      X178();
    }
  }
  else {
    tick(1);
  }
}

void X177() {
  flip (21/25) {
    flip (153/250) {
      X174();
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
  flip (63/100) {
    flip (53/500) {
      X173();
    }
    else {
      X175();
    }
  }
  else {
    tick(1);
  }
}

void X179() {
  X183();
  X184();
}

void X180() {
  X174();
  X177();
}

void X181() {
  flip (187/1000) {
    flip (3/8) {
      X175();
    }
    else {
      X179();
    }
  }
  else {
    tick(1);
  }
}

void X182() {
  X186();
  X179();
}

void X183() {
  flip (77/100) {
    X184();
  }
  else {
    X184();
  }
}

void X184() {
  X179();
  X189();
}

void X185() {
  flip (18/25) {
    flip (351/1000) {
      X180();
    }
    else {
      X189();
    }
  }
  else {
    tick(1);
  }
}

void X186() {
  X188();
  X189();
}

void X187() {
  X184();
  X189();
}

void X188() {
  flip (179/200) {
    X188();
  }
  else {
    X186();
  }
}

void X189() {
  flip (183/250) {
    flip (89/1000) {
      X190();
    }
    else {
      X184();
    }
  }
  else {
    tick(1);
  }
}

void X190() {
  flip (191/1000) {
    flip (14/25) {
      X187();
    }
    else {
      X187();
    }
  }
  else {
    tick(1);
  }
}

void X191() {
  flip (479/500) {
    flip (3/25) {
      X196();
    }
    else {
      X193();
    }
  }
  else {
    tick(1);
  }
}

void X192() {
  flip (379/1000) {
    X190();
  }
  else {
    X191();
  }
}

void X193() {
  flip (639/1000) {
    X191();
  }
  else {
    X195();
  }
}

void X194() {
  X191();
  X190();
}

void X195() {
  flip (129/200) {
    flip (153/200) {
      X192();
    }
    else {
      X190();
    }
  }
  else {
    tick(1);
  }
}

void X196() {
  flip (283/500) {
    flip (19/500) {
      X197();
    }
    else {
      X198();
    }
  }
  else {
    tick(1);
  }
}

void X197() {
  flip (93/250) {
    flip (39/1000) {
      X202();
    }
    else {
      X201();
    }
  }
  else {
    tick(1);
  }
}

void X198() {
  flip (69/200) {
    flip (941/1000) {
      X193();
    }
    else {
      X192();
    }
  }
  else {
    tick(1);
  }
}

void X199() {
  flip (9/40) {
    X201();
  }
  else {
    X193();
  }
}

void X200() {
  X199();
  X198();
}

void X201() {
  flip (183/250) {
    X206();
  }
  else {
    X200();
  }
}

void X202() {
  flip (871/1000) {
    X200();
  }
  else {
    X203();
  }
}

void X203() {
  X205();
  X208();
}

void X204() {
  flip (129/200) {
    X199();
  }
  else {
    X200();
  }
}

void X205() {
  flip (91/250) {
    flip (787/1000) {
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

void X206() {
  X201();
  X210();
}

void X207() {
  flip (72/125) {
    flip (139/500) {
      X211();
    }
    else {
      X212();
    }
  }
  else {
    tick(1);
  }
}

void X208() {
  X203();
  X207();
}

void X209() {
  flip (271/500) {
    X208();
  }
  else {
    X212();
  }
}

void X210() {
  flip (527/1000) {
    X212();
  }
  else {
    X215();
  }
}

void X211() {
  X210();
  X213();
}

void X212() {
  flip (863/1000) {
    flip (599/1000) {
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
  flip (319/500) {
    flip (111/200) {
      X215();
    }
    else {
      X217();
    }
  }
  else {
    tick(1);
  }
}

void X214() {
  X209();
  X210();
}

void X215() {
  X212();
  X213();
}

void X216() {
  flip (439/500) {
    X218();
  }
  else {
    X219();
  }
}

void X217() {
  X216();
  X219();
}

void X218() {
  X223();
  X215();
}

void X219() {
  X213();
  X217();
}

void X220() {
  flip (161/1000) {
    flip (161/200) {
      X221();
    }
    else {
      X216();
    }
  }
  else {
    tick(1);
  }
}

void X221() {
  flip (309/1000) {
    X221();
  }
  else {
    X215();
  }
}

void X222() {
  X218();
  X225();
}

void X223() {
  X221();
  X227();
}

void X224() {
  X219();
  X223();
}

void X225() {
  X226();
  X224();
}

void X226() {
  X222();
  X223();
}

void X227() {
  flip (1/25) {
    flip (197/500) {
      X227();
    }
    else {
      X232();
    }
  }
  else {
    tick(1);
  }
}

void X228() {
  X231();
  X230();
}

void X229() {
  flip (4/125) {
    flip (22/25) {
      X234();
    }
    else {
      X231();
    }
  }
  else {
    tick(1);
  }
}

void X230() {
  flip (981/1000) {
    X230();
  }
  else {
    X225();
  }
}

void X231() {
  flip (33/50) {
    flip (301/500) {
      X230();
    }
    else {
      X226();
    }
  }
  else {
    tick(1);
  }
}

void X232() {
  flip (461/500) {
    X229();
  }
  else {
    X236();
  }
}

void X233() {
  X236();
  X232();
}

void X234() {
  X228();
  X233();
}

void X235() {
  flip (13/50) {
    flip (143/500) {
      X230();
    }
    else {
      X236();
    }
  }
  else {
    tick(1);
  }
}

void X236() {
  X230();
  X238();
}

void X237() {
  X241();
  X239();
}

void X238() {
  flip (277/500) {
    X232();
  }
  else {
    X243();
  }
}

void X239() {
  flip (124/125) {
    flip (329/1000) {
      X239();
    }
    else {
      X237();
    }
  }
  else {
    tick(1);
  }
}

void X240() {
  flip (151/250) {
    X235();
  }
  else {
    X239();
  }
}

void X241() {
  flip (193/250) {
    X245();
  }
  else {
    X240();
  }
}

void X242() {
  flip (29/100) {
    flip (63/1000) {
      X240();
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
  X239();
  X240();
}

void X244() {
  flip (151/200) {
    flip (153/250) {
      X244();
    }
    else {
      X246();
    }
  }
  else {
    tick(1);
  }
}

void X245() {
  flip (9/10) {
    flip (49/500) {
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
  flip (833/1000) {
    flip (311/500) {
      X245();
    }
    else {
      X248();
    }
  }
  else {
    tick(1);
  }
}

void X247() {
  flip (463/1000) {
    flip (111/1000) {
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

void X248() {
  X253();
  X245();
}

void X249() {
  X254();
  X254();
}

void X250() {
  flip (11/500) {
    flip (14/25) {
      X245();
    }
    else {
      X246();
    }
  }
  else {
    tick(1);
  }
}

void X251() {
  X255();
  X245();
}

void X252() {
  X249();
  X257();
}

void X253() {
  flip (821/1000) {
    flip (119/250) {
      X252();
    }
    else {
      X249();
    }
  }
  else {
    tick(1);
  }
}

void X254() {
  flip (131/200) {
    flip (27/500) {
      X252();
    }
    else {
      X254();
    }
  }
  else {
    tick(1);
  }
}

void X255() {
  X260();
  X255();
}

void X256() {
  X251();
  X251();
}

void X257() {
  flip (83/100) {
    X251();
  }
  else {
    X262();
  }
}

void X258() {
  flip (603/1000) {
    flip (503/1000) {
      X259();
    }
    else {
      X254();
    }
  }
  else {
    tick(1);
  }
}

void X259() {
  X261();
  X255();
}

void X260() {
  X255();
  X262();
}

void X261() {
  flip (193/500) {
    flip (377/1000) {
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

void X262() {
  flip (57/125) {
    flip (499/500) {
      X257();
    }
    else {
      X265();
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
  flip (88/125) {
    X269();
  }
  else {
    X267();
  }
}

void X265() {
  X263();
  X263();
}

void X266() {
  flip (429/1000) {
    X266();
  }
  else {
    X270();
  }
}

void X267() {
  flip (83/1000) {
    flip (373/500) {
      X270();
    }
    else {
      X263();
    }
  }
  else {
    tick(1);
  }
}

void X268() {
  flip (217/1000) {
    flip (57/1000) {
      X267();
    }
    else {
      X262();
    }
  }
  else {
    tick(1);
  }
}

void X269() {
  flip (229/1000) {
    flip (3/500) {
      X269();
    }
    else {
      X264();
    }
  }
  else {
    tick(1);
  }
}

void X270() {
  flip (467/1000) {
    flip (751/1000) {
      X270();
    }
    else {
      X264();
    }
  }
  else {
    tick(1);
  }
}

void X271() {
  flip (83/1000) {
    X274();
  }
  else {
    X269();
  }
}

void X272() {
  X269();
  X268();
}

void X273() {
  X274();
  X271();
}

void X274() {
  flip (79/250) {
    X274();
  }
  else {
    X269();
  }
}

void X275() {
  X274();
  X280();
}

void X276() {
  flip (223/250) {
    X271();
  }
  else {
    X275();
  }
}

void X277() {
  flip (83/100) {
    flip (127/200) {
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
  flip (11/250) {
    flip (18/25) {
      X274();
    }
    else {
      X278();
    }
  }
  else {
    tick(1);
  }
}

void X279() {
  flip (347/1000) {
    flip (53/125) {
      X276();
    }
    else {
      X284();
    }
  }
  else {
    tick(1);
  }
}

void X280() {
  X275();
  X284();
}

void X281() {
  flip (31/500) {
    flip (477/500) {
      X281();
    }
    else {
      X279();
    }
  }
  else {
    tick(1);
  }
}

void X282() {
  flip (377/1000) {
    flip (137/200) {
      X281();
    }
    else {
      X283();
    }
  }
  else {
    tick(1);
  }
}

void X283() {
  flip (89/125) {
    X277();
  }
  else {
    X283();
  }
}

void X284() {
  flip (349/1000) {
    flip (663/1000) {
      X284();
    }
    else {
      X289();
    }
  }
  else {
    tick(1);
  }
}

void X285() {
  X285();
  X282();
}

void X286() {
  flip (43/125) {
    X288();
  }
  else {
    X280();
  }
}

void X287() {
  flip (39/250) {
    flip (321/500) {
      X289();
    }
    else {
      X283();
    }
  }
  else {
    tick(1);
  }
}

void X288() {
  X287();
  X289();
}

void X289() {
  X284();
  X292();
}

void X290() {
  flip (889/1000) {
    X288();
  }
  else {
    X290();
  }
}

void X291() {
  flip (83/125) {
    flip (709/1000) {
      X287();
    }
    else {
      X286();
    }
  }
  else {
    tick(1);
  }
}

void X292() {
  X287();
  X294();
}

void X293() {
  X287();
  X291();
}

void X294() {
  flip (909/1000) {
    X290();
  }
  else {
    X295();
  }
}

void X295() {
  flip (253/1000) {
    X292();
  }
  else {
    X295();
  }
}

void X296() {
  X296();
  X291();
}

void X297() {
  flip (941/1000) {
    flip (7/125) {
      X293();
    }
    else {
      X295();
    }
  }
  else {
    tick(1);
  }
}

void X298() {
  X299();
  X292();
}

void X299() {
  flip (389/1000) {
    X302();
  }
  else {
    X303();
  }
}

void X300() {
  flip (106/125) {
    flip (141/250) {
      X298();
    }
    else {
      X295();
    }
  }
  else {
    tick(1);
  }
}

void X301() {
  flip (497/500) {
    X305();
  }
  else {
    X304();
  }
}

void X302() {
  flip (21/40) {
    flip (339/1000) {
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
  X297();
  X305();
}

void X304() {
  X304();
  X300();
}

void X305() {
  flip (433/500) {
    flip (573/1000) {
      X305();
    }
    else {
      X302();
    }
  }
  else {
    tick(1);
  }
}

void X306() {
  flip (341/1000) {
    flip (67/500) {
      X311();
    }
    else {
      X308();
    }
  }
  else {
    tick(1);
  }
}

void X307() {
  X301();
  X301();
}

void X308() {
  X302();
  X304();
}

void X309() {
  flip (659/1000) {
    flip (117/250) {
      X313();
    }
    else {
      X309();
    }
  }
  else {
    tick(1);
  }
}

void X310() {
  flip (703/1000) {
    flip (417/1000) {
      X308();
    }
    else {
      X309();
    }
  }
  else {
    tick(1);
  }
}

void X311() {
  X313();
  X309();
}

void X312() {
  X317();
  X312();
}

void X313() {
  X312();
  X314();
}

void X314() {
  flip (579/1000) {
    flip (471/1000) {
      X313();
    }
    else {
      X317();
    }
  }
  else {
    tick(1);
  }
}

void X315() {
  X315();
  X315();
}

void X316() {
  X313();
  X319();
}

void X317() {
  flip (699/1000) {
    flip (247/250) {
      X322();
    }
    else {
      X311();
    }
  }
  else {
    tick(1);
  }
}

void X318() {
  X314();
  X321();
}

void X319() {
  flip (24/125) {
    X313();
  }
  else {
    X323();
  }
}

void X320() {
  flip (421/500) {
    flip (47/1000) {
      X320();
    }
    else {
      X323();
    }
  }
  else {
    tick(1);
  }
}

void X321() {
  X318();
  X326();
}

void X322() {
  flip (54/125) {
    X321();
  }
  else {
    X327();
  }
}

void X323() {
  flip (139/250) {
    X327();
  }
  else {
    X323();
  }
}

void X324() {
  X321();
  X326();
}

void X325() {
  flip (17/250) {
    X328();
  }
  else {
    X327();
  }
}

void X326() {
  X331();
  X325();
}

void X327() {
  X332();
  X323();
}

void X328() {
  flip (859/1000) {
    X323();
  }
  else {
    X330();
  }
}

void X329() {
  flip (69/125) {
    X332();
  }
  else {
    X332();
  }
}

void X330() {
  X329();
  X324();
}

void X331() {
  flip (42/125) {
    flip (36/125) {
      X334();
    }
    else {
      X327();
    }
  }
  else {
    tick(1);
  }
}

void X332() {
  flip (647/1000) {
    flip (21/250) {
      X329();
    }
    else {
      X336();
    }
  }
  else {
    tick(1);
  }
}

void X333() {
  flip (763/1000) {
    flip (333/500) {
      X333();
    }
    else {
      X331();
    }
  }
  else {
    tick(1);
  }
}

void X334() {
  flip (797/1000) {
    flip (31/40) {
      X330();
    }
    else {
      X328();
    }
  }
  else {
    tick(1);
  }
}

void X335() {
  flip (19/40) {
    flip (61/1000) {
      X338();
    }
    else {
      X337();
    }
  }
  else {
    tick(1);
  }
}

void X336() {
  flip (409/500) {
    flip (751/1000) {
      X340();
    }
    else {
      X336();
    }
  }
  else {
    tick(1);
  }
}

void X337() {
  flip (19/125) {
    flip (99/250) {
      X338();
    }
    else {
      X336();
    }
  }
  else {
    tick(1);
  }
}

void X338() {
  X342();
  X341();
}

void X339() {
  X339();
  X334();
}

void X340() {
  X338();
  X345();
}

void X341() {
  flip (153/1000) {
    flip (461/1000) {
      X337();
    }
    else {
      X337();
    }
  }
  else {
    tick(1);
  }
}

void X342() {
  flip (301/500) {
    flip (813/1000) {
      X346();
    }
    else {
      X343();
    }
  }
  else {
    tick(1);
  }
}

void X343() {
  X339();
  X339();
}

void X344() {
  flip (61/125) {
    flip (827/1000) {
      X345();
    }
    else {
      X345();
    }
  }
  else {
    tick(1);
  }
}

void X345() {
  flip (199/500) {
    flip (893/1000) {
      X348();
    }
    else {
      X339();
    }
  }
  else {
    tick(1);
  }
}

void X346() {
  flip (219/500) {
    X349();
  }
  else {
    X341();
  }
}

void X347() {
  flip (61/100) {
    X348();
  }
  else {
    X350();
  }
}

void X348() {
  flip (61/200) {
    flip (23/125) {
      X345();
    }
    else {
      X344();
    }
  }
  else {
    tick(1);
  }
}

void X349() {
  flip (607/1000) {
    flip (887/1000) {
      X348();
    }
    else {
      X347();
    }
  }
  else {
    tick(1);
  }
}

void X350() {
  flip (913/1000) {
    flip (91/200) {
      X344();
    }
    else {
      X355();
    }
  }
  else {
    tick(1);
  }
}

void X351() {
  flip (347/500) {
    X349();
  }
  else {
    X351();
  }
}

void X352() {
  flip (24/125) {
    flip (379/1000) {
      X355();
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
  X349();
  X356();
}

void X354() {
  X354();
  X359();
}

void X355() {
  flip (77/125) {
    X352();
  }
  else {
    X357();
  }
}

void X356() {
  flip (389/1000) {
    X355();
  }
  else {
    X358();
  }
}

void X357() {
  X361();
  X357();
}

void X358() {
  flip (157/250) {
    X352();
  }
  else {
    X358();
  }
}

void X359() {
  flip (333/500) {
    flip (121/500) {
      X354();
    }
    else {
      X356();
    }
  }
  else {
    tick(1);
  }
}

void X360() {
  flip (701/1000) {
    X359();
  }
  else {
    X364();
  }
}

void X361() {
  X359();
  X361();
}

void X362() {
  flip (87/200) {
    X364();
  }
  else {
    X356();
  }
}

void X363() {
  X361();
  X358();
}

void X364() {
  flip (207/250) {
    flip (581/1000) {
      X365();
    }
    else {
      X358();
    }
  }
  else {
    tick(1);
  }
}

void X365() {
  flip (21/200) {
    X367();
  }
  else {
    X361();
  }
}

void X366() {
  flip (447/1000) {
    X368();
  }
  else {
    X362();
  }
}

void X367() {
  flip (811/1000) {
    flip (61/1000) {
      X366();
    }
    else {
      X364();
    }
  }
  else {
    tick(1);
  }
}

void X368() {
  flip (51/200) {
    flip (137/250) {
      X362();
    }
    else {
      X371();
    }
  }
  else {
    tick(1);
  }
}

void X369() {
  flip (421/500) {
    X366();
  }
  else {
    X364();
  }
}

void X370() {
  X366();
  X368();
}

void X371() {
  flip (387/500) {
    flip (16/25) {
      X376();
    }
    else {
      X372();
    }
  }
  else {
    tick(1);
  }
}

void X372() {
  flip (38/125) {
    flip (347/500) {
      X367();
    }
    else {
      X370();
    }
  }
  else {
    tick(1);
  }
}

void X373() {
  flip (583/1000) {
    X374();
  }
  else {
    X373();
  }
}

void X374() {
  flip (567/1000) {
    flip (933/1000) {
      X368();
    }
    else {
      X376();
    }
  }
  else {
    tick(1);
  }
}

void X375() {
  flip (407/1000) {
    flip (719/1000) {
      X370();
    }
    else {
      X377();
    }
  }
  else {
    tick(1);
  }
}

void X376() {
  flip (413/500) {
    flip (133/1000) {
      X380();
    }
    else {
      X377();
    }
  }
  else {
    tick(1);
  }
}

void X377() {
  flip (73/1000) {
    X373();
  }
  else {
    X380();
  }
}

void X378() {
  flip (149/200) {
    X375();
  }
  else {
    X380();
  }
}

void X379() {
  flip (137/1000) {
    flip (997/1000) {
      X377();
    }
    else {
      X384();
    }
  }
  else {
    tick(1);
  }
}

void X380() {
  flip (431/1000) {
    X379();
  }
  else {
    X375();
  }
}

void X381() {
  X382();
  X382();
}

void X382() {
  X378();
  X378();
}

void X383() {
  X383();
  X383();
}

void X384() {
  X385();
  X380();
}

void X385() {
  flip (27/40) {
    X387();
  }
  else {
    X379();
  }
}

void X386() {
  X385();
  X386();
}

void X387() {
  X384();
  X383();
}

void X388() {
  X391();
  X386();
}

void X389() {
  flip (19/250) {
    flip (443/500) {
      X393();
    }
    else {
      X390();
    }
  }
  else {
    tick(1);
  }
}

void X390() {
  flip (49/100) {
    X387();
  }
  else {
    X390();
  }
}

void X391() {
  flip (537/1000) {
    X390();
  }
  else {
    X394();
  }
}

void X392() {
  X390();
  X390();
}

void X393() {
  X391();
  X388();
}

void X394() {
  flip (259/1000) {
    X391();
  }
  else {
    X390();
  }
}

void X395() {
  flip (519/1000) {
    X399();
  }
  else {
    X397();
  }
}

void X396() {
  flip (7/200) {
    flip (37/500) {
      X394();
    }
    else {
      X397();
    }
  }
  else {
    tick(1);
  }
}

void X397() {
  flip (77/500) {
    flip (41/250) {
      X401();
    }
    else {
      X396();
    }
  }
  else {
    tick(1);
  }
}

void X398() {
  flip (337/1000) {
    X401();
  }
  else {
    X399();
  }
}

void X399() {
  flip (353/500) {
    flip (151/1000) {
      X403();
    }
    else {
      X394();
    }
  }
  else {
    tick(1);
  }
}

void X400() {
  flip (221/250) {
    flip (669/1000) {
      X395();
    }
    else {
      X405();
    }
  }
  else {
    tick(1);
  }
}

void X401() {
  X406();
  X403();
}

void X402() {
  X403();
  X399();
}

void X403() {
  X403();
  X398();
}

void X404() {
  flip (1/250) {
    flip (7/50) {
      X399();
    }
    else {
      X406();
    }
  }
  else {
    tick(1);
  }
}

void X405() {
  flip (77/125) {
    flip (127/200) {
      X406();
    }
    else {
      X399();
    }
  }
  else {
    tick(1);
  }
}

void X406() {
  flip (259/500) {
    flip (39/200) {
      X400();
    }
    else {
      X401();
    }
  }
  else {
    tick(1);
  }
}

void X407() {
  flip (277/1000) {
    flip (82/125) {
      X412();
    }
    else {
      X406();
    }
  }
  else {
    tick(1);
  }
}

void X408() {
  flip (357/1000) {
    flip (51/1000) {
      X408();
    }
    else {
      X403();
    }
  }
  else {
    tick(1);
  }
}

void X409() {
  flip (873/1000) {
    X403();
  }
  else {
    X412();
  }
}

void X410() {
  X413();
  X405();
}

void X411() {
  X407();
  X412();
}

void X412() {
  flip (601/1000) {
    flip (349/500) {
      X417();
    }
    else {
      X416();
    }
  }
  else {
    tick(1);
  }
}

void X413() {
  flip (41/500) {
    flip (403/1000) {
      X416();
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
  flip (251/1000) {
    X415();
  }
  else {
    X409();
  }
}

void X415() {
  flip (47/1000) {
    flip (281/500) {
      X413();
    }
    else {
      X418();
    }
  }
  else {
    tick(1);
  }
}

void X416() {
  flip (1/1000) {
    flip (107/200) {
      X420();
    }
    else {
      X411();
    }
  }
  else {
    tick(1);
  }
}

void X417() {
  flip (249/1000) {
    X414();
  }
  else {
    X422();
  }
}

void X418() {
  X418();
  X418();
}

void X419() {
  flip (253/500) {
    flip (13/250) {
      X418();
    }
    else {
      X416();
    }
  }
  else {
    tick(1);
  }
}

void X420() {
  flip (193/200) {
    flip (209/500) {
      X414();
    }
    else {
      X415();
    }
  }
  else {
    tick(1);
  }
}

void X421() {
  flip (51/500) {
    flip (663/1000) {
      X422();
    }
    else {
      X416();
    }
  }
  else {
    tick(1);
  }
}

void X422() {
  X419();
  X421();
}

void X423() {
  flip (81/250) {
    flip (96/125) {
      X417();
    }
    else {
      X425();
    }
  }
  else {
    tick(1);
  }
}

void X424() {
  flip (303/1000) {
    flip (92/125) {
      X419();
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
  flip (123/1000) {
    X421();
  }
  else {
    X419();
  }
}

void X426() {
  flip (69/200) {
    flip (279/1000) {
      X427();
    }
    else {
      X423();
    }
  }
  else {
    tick(1);
  }
}

void X427() {
  X426();
  X421();
}

void X428() {
  X433();
  X427();
}

void X429() {
  X431();
  X429();
}

void X430() {
  flip (111/125) {
    flip (58/125) {
      X426();
    }
    else {
      X434();
    }
  }
  else {
    tick(1);
  }
}

void X431() {
  flip (913/1000) {
    flip (203/1000) {
      X427();
    }
    else {
      X429();
    }
  }
  else {
    tick(1);
  }
}

void X432() {
  flip (104/125) {
    flip (29/125) {
      X433();
    }
    else {
      X426();
    }
  }
  else {
    tick(1);
  }
}

void X433() {
  X436();
  X433();
}

void X434() {
  flip (639/1000) {
    X430();
  }
  else {
    X429();
  }
}

void X435() {
  X435();
  X439();
}

void X436() {
  flip (86/125) {
    flip (461/1000) {
      X431();
    }
    else {
      X432();
    }
  }
  else {
    tick(1);
  }
}

void X437() {
  flip (871/1000) {
    X439();
  }
  else {
    X431();
  }
}

void X438() {
  X432();
  X441();
}

void X439() {
  flip (56/125) {
    X435();
  }
  else {
    X442();
  }
}

void X440() {
  flip (97/100) {
    X443();
  }
  else {
    X436();
  }
}

void X441() {
  flip (193/1000) {
    X436();
  }
  else {
    X437();
  }
}

void X442() {
  flip (33/500) {
    flip (173/500) {
      X445();
    }
    else {
      X437();
    }
  }
  else {
    tick(1);
  }
}

void X443() {
  X441();
  X439();
}

void X444() {
  X448();
  X449();
}

void X445() {
  flip (443/1000) {
    flip (39/200) {
      X442();
    }
    else {
      X442();
    }
  }
  else {
    tick(1);
  }
}

void X446() {
  flip (13/125) {
    flip (13/50) {
      X450();
    }
    else {
      X446();
    }
  }
  else {
    tick(1);
  }
}

void X447() {
  flip (99/200) {
    flip (72/125) {
      X445();
    }
    else {
      X442();
    }
  }
  else {
    tick(1);
  }
}

void X448() {
  flip (121/200) {
    flip (237/1000) {
      X447();
    }
    else {
      X442();
    }
  }
  else {
    tick(1);
  }
}

void X449() {
  flip (657/1000) {
    X449();
  }
  else {
    X450();
  }
}

void X450() {
  flip (11/250) {
    flip (123/200) {
      X447();
    }
    else {
      X455();
    }
  }
  else {
    tick(1);
  }
}

void X451() {
  flip (106/125) {
    flip (589/1000) {
      X446();
    }
    else {
      X456();
    }
  }
  else {
    tick(1);
  }
}

void X452() {
  flip (103/500) {
    X450();
  }
  else {
    X451();
  }
}

void X453() {
  X452();
  X458();
}

void X454() {
  flip (47/500) {
    X450();
  }
  else {
    X456();
  }
}

void X455() {
  flip (113/250) {
    X457();
  }
  else {
    X451();
  }
}

void X456() {
  flip (97/250) {
    X459();
  }
  else {
    X455();
  }
}

void X457() {
  X454();
  X460();
}

void X458() {
  flip (203/500) {
    flip (517/1000) {
      X458();
    }
    else {
      X456();
    }
  }
  else {
    tick(1);
  }
}

void X459() {
  flip (653/1000) {
    X461();
  }
  else {
    X459();
  }
}

void X460() {
  X457();
  X463();
}

void X461() {
  X461();
  X466();
}

void X462() {
  flip (43/100) {
    X460();
  }
  else {
    X457();
  }
}

void X463() {
  flip (51/200) {
    flip (57/500) {
      X457();
    }
    else {
      X457();
    }
  }
  else {
    tick(1);
  }
}

void X464() {
  flip (529/1000) {
    X467();
  }
  else {
    X459();
  }
}

void X465() {
  flip (503/1000) {
    X463();
  }
  else {
    X462();
  }
}

void X466() {
  flip (717/1000) {
    flip (69/1000) {
      X469();
    }
    else {
      X469();
    }
  }
  else {
    tick(1);
  }
}

void X467() {
  X468();
  X463();
}

void X468() {
  flip (221/500) {
    flip (151/250) {
      X468();
    }
    else {
      X470();
    }
  }
  else {
    tick(1);
  }
}

void X469() {
  flip (639/1000) {
    flip (493/1000) {
      X466();
    }
    else {
      X465();
    }
  }
  else {
    tick(1);
  }
}

void X470() {
  flip (59/100) {
    X464();
  }
  else {
    X464();
  }
}

void X471() {
  flip (217/1000) {
    flip (159/1000) {
      X475();
    }
    else {
      X469();
    }
  }
  else {
    tick(1);
  }
}

void X472() {
  flip (739/1000) {
    X475();
  }
  else {
    X466();
  }
}

void X473() {
  flip (437/500) {
    flip (237/250) {
      X474();
    }
    else {
      X471();
    }
  }
  else {
    tick(1);
  }
}

void X474() {
  X470();
  X476();
}

void X475() {
  flip (7/20) {
    X479();
  }
  else {
    X473();
  }
}

void X476() {
  X481();
  X476();
}

void X477() {
  flip (763/1000) {
    X473();
  }
  else {
    X478();
  }
}

void X478() {
  flip (79/500) {
    X476();
  }
  else {
    X476();
  }
}

void X479() {
  X480();
  X484();
}

void X480() {
  flip (359/500) {
    X477();
  }
  else {
    X475();
  }
}

void X481() {
  flip (3/250) {
    flip (417/1000) {
      X478();
    }
    else {
      X484();
    }
  }
  else {
    tick(1);
  }
}

void X482() {
  X485();
  X484();
}

void X483() {
  flip (17/500) {
    flip (497/500) {
      X477();
    }
    else {
      X488();
    }
  }
  else {
    tick(1);
  }
}

void X484() {
  flip (111/200) {
    flip (101/200) {
      X485();
    }
    else {
      X481();
    }
  }
  else {
    tick(1);
  }
}

void X485() {
  flip (97/250) {
    flip (199/1000) {
      X489();
    }
    else {
      X481();
    }
  }
  else {
    tick(1);
  }
}

void X486() {
  flip (369/500) {
    flip (293/1000) {
      X481();
    }
    else {
      X491();
    }
  }
  else {
    tick(1);
  }
}

void X487() {
  X491();
  X483();
}

void X488() {
  flip (56/125) {
    flip (171/250) {
      X493();
    }
    else {
      X485();
    }
  }
  else {
    tick(1);
  }
}

void X489() {
  flip (1/500) {
    flip (27/1000) {
      X494();
    }
    else {
      X483();
    }
  }
  else {
    tick(1);
  }
}

void X490() {
  flip (153/1000) {
    X491();
  }
  else {
    X490();
  }
}

void X491() {
  flip (73/250) {
    X490();
  }
  else {
    X494();
  }
}

void X492() {
  flip (187/1000) {
    X493();
  }
  else {
    X489();
  }
}

void X493() {
  flip (381/500) {
    flip (411/1000) {
      X496();
    }
    else {
      X490();
    }
  }
  else {
    tick(1);
  }
}

void X494() {
  flip (79/100) {
    flip (743/1000) {
      X499();
    }
    else {
      X492();
    }
  }
  else {
    tick(1);
  }
}

void X495() {
  flip (899/1000) {
    X491();
  }
  else {
    X492();
  }
}

void X496() {
  X496();
  X495();
}

void X497() {
  X492();
  X499();
}

void X498() {
  flip (62/125) {
    flip (27/1000) {
      X499();
    }
    else {
      X3();
    }
  }
  else {
    tick(1);
  }
}

void X499() {
  X495();
  X1();
}
