void X0() {
  flip (31/40) {
    X5();
  }
  else {
    X2();
  }
}

void X1() {
  flip (911/1000) {
    X495();
  }
  else {
    X4();
  }
}

void X2() {
  flip (473/1000) {
    X4();
  }
  else {
    X0();
  }
}

void X3() {
  flip (6/125) {
    flip (997/1000) {
      X7();
    }
    else {
      X6();
    }
  }
  else {
    tick(1);
  }
}

void X4() {
  flip (611/1000) {
    flip (123/250) {
      X9();
    }
    else {
      X498();
    }
  }
  else {
    tick(1);
  }
}

void X5() {
  X2();
  X2();
}

void X6() {
  flip (249/250) {
    X0();
  }
  else {
    X10();
  }
}

void X7() {
  flip (223/250) {
    flip (187/200) {
      X10();
    }
    else {
      X7();
    }
  }
  else {
    tick(1);
  }
}

void X8() {
  flip (243/500) {
    flip (291/1000) {
      X10();
    }
    else {
      X9();
    }
  }
  else {
    tick(1);
  }
}

void X9() {
  flip (547/1000) {
    X12();
  }
  else {
    X9();
  }
}

void X10() {
  flip (61/250) {
    X12();
  }
  else {
    X6();
  }
}

void X11() {
  flip (387/500) {
    flip (743/1000) {
      X13();
    }
    else {
      X5();
    }
  }
  else {
    tick(1);
  }
}

void X12() {
  flip (177/200) {
    X16();
  }
  else {
    X15();
  }
}

void X13() {
  flip (9/10) {
    flip (391/500) {
      X9();
    }
    else {
      X12();
    }
  }
  else {
    tick(1);
  }
}

void X14() {
  flip (143/200) {
    X14();
  }
  else {
    X10();
  }
}

void X15() {
  flip (27/100) {
    X16();
  }
  else {
    X11();
  }
}

void X16() {
  flip (477/500) {
    X13();
  }
  else {
    X15();
  }
}

void X17() {
  flip (461/500) {
    flip (277/500) {
      X17();
    }
    else {
      X19();
    }
  }
  else {
    tick(1);
  }
}

void X18() {
  X19();
  X12();
}

void X19() {
  flip (21/25) {
    X16();
  }
  else {
    X17();
  }
}

void X20() {
  flip (201/500) {
    flip (209/250) {
      X16();
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
  flip (407/500) {
    X21();
  }
  else {
    X21();
  }
}

void X22() {
  flip (363/500) {
    flip (717/1000) {
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
  X20();
  X25();
}

void X24() {
  flip (727/1000) {
    X29();
  }
  else {
    X21();
  }
}

void X25() {
  flip (803/1000) {
    X21();
  }
  else {
    X30();
  }
}

void X26() {
  flip (369/1000) {
    flip (72/125) {
      X29();
    }
    else {
      X22();
    }
  }
  else {
    tick(1);
  }
}

void X27() {
  flip (197/500) {
    flip (539/1000) {
      X28();
    }
    else {
      X26();
    }
  }
  else {
    tick(1);
  }
}

void X28() {
  flip (231/500) {
    X25();
  }
  else {
    X30();
  }
}

void X29() {
  flip (917/1000) {
    X24();
  }
  else {
    X34();
  }
}

void X30() {
  flip (711/1000) {
    X34();
  }
  else {
    X25();
  }
}

void X31() {
  flip (409/1000) {
    flip (149/1000) {
      X29();
    }
    else {
      X27();
    }
  }
  else {
    tick(1);
  }
}

void X32() {
  flip (217/500) {
    flip (1/10) {
      X31();
    }
    else {
      X34();
    }
  }
  else {
    tick(1);
  }
}

void X33() {
  flip (41/250) {
    X27();
  }
  else {
    X28();
  }
}

void X34() {
  X34();
  X38();
}

void X35() {
  flip (347/1000) {
    flip (457/1000) {
      X35();
    }
    else {
      X37();
    }
  }
  else {
    tick(1);
  }
}

void X36() {
  flip (69/500) {
    flip (37/500) {
      X35();
    }
    else {
      X30();
    }
  }
  else {
    tick(1);
  }
}

void X37() {
  flip (167/200) {
    flip (363/1000) {
      X40();
    }
    else {
      X34();
    }
  }
  else {
    tick(1);
  }
}

void X38() {
  flip (81/500) {
    X35();
  }
  else {
    X40();
  }
}

void X39() {
  flip (23/100) {
    X39();
  }
  else {
    X36();
  }
}

void X40() {
  X35();
  X44();
}

void X41() {
  flip (29/1000) {
    X46();
  }
  else {
    X44();
  }
}

void X42() {
  flip (427/1000) {
    X44();
  }
  else {
    X36();
  }
}

void X43() {
  flip (113/1000) {
    flip (69/200) {
      X37();
    }
    else {
      X37();
    }
  }
  else {
    tick(1);
  }
}

void X44() {
  X39();
  X48();
}

void X45() {
  X43();
  X47();
}

void X46() {
  flip (111/200) {
    flip (133/1000) {
      X46();
    }
    else {
      X41();
    }
  }
  else {
    tick(1);
  }
}

void X47() {
  flip (441/1000) {
    X43();
  }
  else {
    X46();
  }
}

void X48() {
  flip (383/500) {
    X49();
  }
  else {
    X47();
  }
}

void X49() {
  flip (43/200) {
    X51();
  }
  else {
    X50();
  }
}

void X50() {
  flip (677/1000) {
    flip (991/1000) {
      X49();
    }
    else {
      X49();
    }
  }
  else {
    tick(1);
  }
}

void X51() {
  X49();
  X49();
}

void X52() {
  flip (121/500) {
    X55();
  }
  else {
    X47();
  }
}

void X53() {
  flip (221/500) {
    X54();
  }
  else {
    X55();
  }
}

void X54() {
  flip (537/1000) {
    flip (11/40) {
      X49();
    }
    else {
      X57();
    }
  }
  else {
    tick(1);
  }
}

void X55() {
  X56();
  X52();
}

void X56() {
  flip (1/25) {
    flip (283/500) {
      X52();
    }
    else {
      X56();
    }
  }
  else {
    tick(1);
  }
}

void X57() {
  flip (887/1000) {
    X51();
  }
  else {
    X55();
  }
}

void X58() {
  flip (33/100) {
    X62();
  }
  else {
    X58();
  }
}

void X59() {
  flip (101/250) {
    flip (1/10) {
      X57();
    }
    else {
      X59();
    }
  }
  else {
    tick(1);
  }
}

void X60() {
  X56();
  X65();
}

void X61() {
  X57();
  X63();
}

void X62() {
  flip (1/5) {
    flip (473/500) {
      X57();
    }
    else {
      X65();
    }
  }
  else {
    tick(1);
  }
}

void X63() {
  flip (213/500) {
    X67();
  }
  else {
    X66();
  }
}

void X64() {
  flip (649/1000) {
    X61();
  }
  else {
    X66();
  }
}

void X65() {
  flip (91/250) {
    X60();
  }
  else {
    X63();
  }
}

void X66() {
  X66();
  X61();
}

void X67() {
  flip (64/125) {
    flip (16/125) {
      X71();
    }
    else {
      X71();
    }
  }
  else {
    tick(1);
  }
}

void X68() {
  flip (109/1000) {
    X66();
  }
  else {
    X72();
  }
}

void X69() {
  flip (131/500) {
    X73();
  }
  else {
    X66();
  }
}

void X70() {
  flip (17/1000) {
    X74();
  }
  else {
    X66();
  }
}

void X71() {
  flip (209/1000) {
    flip (939/1000) {
      X65();
    }
    else {
      X72();
    }
  }
  else {
    tick(1);
  }
}

void X72() {
  X70();
  X77();
}

void X73() {
  X76();
  X68();
}

void X74() {
  flip (171/500) {
    flip (673/1000) {
      X75();
    }
    else {
      X76();
    }
  }
  else {
    tick(1);
  }
}

void X75() {
  flip (183/200) {
    flip (899/1000) {
      X72();
    }
    else {
      X70();
    }
  }
  else {
    tick(1);
  }
}

void X76() {
  X70();
  X74();
}

void X77() {
  flip (179/500) {
    flip (7/200) {
      X78();
    }
    else {
      X74();
    }
  }
  else {
    tick(1);
  }
}

void X78() {
  flip (23/100) {
    flip (17/1000) {
      X80();
    }
    else {
      X79();
    }
  }
  else {
    tick(1);
  }
}

void X79() {
  flip (53/125) {
    X77();
  }
  else {
    X83();
  }
}

void X80() {
  flip (13/25) {
    flip (297/1000) {
      X78();
    }
    else {
      X82();
    }
  }
  else {
    tick(1);
  }
}

void X81() {
  X76();
  X75();
}

void X82() {
  X82();
  X86();
}

void X83() {
  flip (81/125) {
    flip (116/125) {
      X78();
    }
    else {
      X85();
    }
  }
  else {
    tick(1);
  }
}

void X84() {
  flip (207/1000) {
    flip (949/1000) {
      X84();
    }
    else {
      X86();
    }
  }
  else {
    tick(1);
  }
}

void X85() {
  flip (173/500) {
    flip (197/500) {
      X88();
    }
    else {
      X82();
    }
  }
  else {
    tick(1);
  }
}

void X86() {
  X84();
  X85();
}

void X87() {
  flip (9/40) {
    flip (47/500) {
      X92();
    }
    else {
      X89();
    }
  }
  else {
    tick(1);
  }
}

void X88() {
  X93();
  X89();
}

void X89() {
  flip (37/40) {
    X90();
  }
  else {
    X84();
  }
}

void X90() {
  flip (91/500) {
    flip (121/250) {
      X84();
    }
    else {
      X92();
    }
  }
  else {
    tick(1);
  }
}

void X91() {
  flip (29/100) {
    X95();
  }
  else {
    X88();
  }
}

void X92() {
  flip (313/1000) {
    X92();
  }
  else {
    X97();
  }
}

void X93() {
  flip (617/1000) {
    X94();
  }
  else {
    X94();
  }
}

void X94() {
  X93();
  X88();
}

void X95() {
  flip (103/125) {
    X96();
  }
  else {
    X93();
  }
}

void X96() {
  X93();
  X90();
}

void X97() {
  X95();
  X97();
}

void X98() {
  X98();
  X93();
}

void X99() {
  X100();
  X103();
}

void X100() {
  X105();
  X102();
}

void X101() {
  flip (839/1000) {
    X102();
  }
  else {
    X103();
  }
}

void X102() {
  flip (663/1000) {
    X100();
  }
  else {
    X102();
  }
}

void X103() {
  X97();
  X106();
}

void X104() {
  flip (72/125) {
    X108();
  }
  else {
    X103();
  }
}

void X105() {
  flip (889/1000) {
    X100();
  }
  else {
    X103();
  }
}

void X106() {
  flip (43/250) {
    flip (177/200) {
      X101();
    }
    else {
      X111();
    }
  }
  else {
    tick(1);
  }
}

void X107() {
  X101();
  X111();
}

void X108() {
  flip (363/500) {
    flip (3/5) {
      X108();
    }
    else {
      X109();
    }
  }
  else {
    tick(1);
  }
}

void X109() {
  flip (609/1000) {
    X113();
  }
  else {
    X110();
  }
}

void X110() {
  flip (207/500) {
    X113();
  }
  else {
    X112();
  }
}

void X111() {
  flip (803/1000) {
    X106();
  }
  else {
    X112();
  }
}

void X112() {
  flip (921/1000) {
    flip (23/40) {
      X109();
    }
    else {
      X115();
    }
  }
  else {
    tick(1);
  }
}

void X113() {
  flip (119/125) {
    X117();
  }
  else {
    X108();
  }
}

void X114() {
  flip (33/125) {
    flip (43/125) {
      X111();
    }
    else {
      X116();
    }
  }
  else {
    tick(1);
  }
}

void X115() {
  flip (523/1000) {
    flip (67/500) {
      X117();
    }
    else {
      X112();
    }
  }
  else {
    tick(1);
  }
}

void X116() {
  flip (49/200) {
    flip (233/1000) {
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

void X117() {
  flip (379/1000) {
    X114();
  }
  else {
    X119();
  }
}

void X118() {
  X114();
  X122();
}

void X119() {
  X118();
  X116();
}

void X120() {
  X115();
  X124();
}

void X121() {
  flip (47/1000) {
    X119();
  }
  else {
    X116();
  }
}

void X122() {
  flip (159/250) {
    flip (231/500) {
      X126();
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
  flip (49/125) {
    X123();
  }
  else {
    X117();
  }
}

void X124() {
  flip (11/125) {
    flip (703/1000) {
      X118();
    }
    else {
      X120();
    }
  }
  else {
    tick(1);
  }
}

void X125() {
  flip (369/500) {
    flip (16/25) {
      X125();
    }
    else {
      X126();
    }
  }
  else {
    tick(1);
  }
}

void X126() {
  X121();
  X129();
}

void X127() {
  flip (343/1000) {
    flip (289/1000) {
      X132();
    }
    else {
      X132();
    }
  }
  else {
    tick(1);
  }
}

void X128() {
  flip (183/250) {
    flip (309/1000) {
      X126();
    }
    else {
      X126();
    }
  }
  else {
    tick(1);
  }
}

void X129() {
  flip (519/1000) {
    flip (33/50) {
      X130();
    }
    else {
      X125();
    }
  }
  else {
    tick(1);
  }
}

void X130() {
  X127();
  X129();
}

void X131() {
  flip (17/50) {
    flip (3/5) {
      X131();
    }
    else {
      X125();
    }
  }
  else {
    tick(1);
  }
}

void X132() {
  X137();
  X130();
}

void X133() {
  flip (803/1000) {
    X129();
  }
  else {
    X134();
  }
}

void X134() {
  X133();
  X139();
}

void X135() {
  flip (629/1000) {
    flip (69/500) {
      X129();
    }
    else {
      X134();
    }
  }
  else {
    tick(1);
  }
}

void X136() {
  X141();
  X136();
}

void X137() {
  X141();
  X132();
}

void X138() {
  flip (237/1000) {
    flip (51/1000) {
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

void X139() {
  flip (119/500) {
    X139();
  }
  else {
    X140();
  }
}

void X140() {
  flip (19/500) {
    flip (13/250) {
      X135();
    }
    else {
      X136();
    }
  }
  else {
    tick(1);
  }
}

void X141() {
  flip (233/1000) {
    X146();
  }
  else {
    X145();
  }
}

void X142() {
  flip (437/1000) {
    flip (373/500) {
      X136();
    }
    else {
      X140();
    }
  }
  else {
    tick(1);
  }
}

void X143() {
  flip (4/125) {
    X139();
  }
  else {
    X146();
  }
}

void X144() {
  flip (801/1000) {
    flip (121/1000) {
      X138();
    }
    else {
      X142();
    }
  }
  else {
    tick(1);
  }
}

void X145() {
  flip (271/500) {
    X150();
  }
  else {
    X145();
  }
}

void X146() {
  flip (129/250) {
    flip (429/1000) {
      X147();
    }
    else {
      X140();
    }
  }
  else {
    tick(1);
  }
}

void X147() {
  flip (41/125) {
    X143();
  }
  else {
    X141();
  }
}

void X148() {
  flip (187/250) {
    flip (933/1000) {
      X150();
    }
    else {
      X143();
    }
  }
  else {
    tick(1);
  }
}

void X149() {
  flip (67/200) {
    flip (731/1000) {
      X154();
    }
    else {
      X147();
    }
  }
  else {
    tick(1);
  }
}

void X150() {
  X148();
  X151();
}

void X151() {
  X151();
  X146();
}

void X152() {
  X152();
  X153();
}

void X153() {
  flip (147/500) {
    X149();
  }
  else {
    X147();
  }
}

void X154() {
  flip (329/500) {
    X149();
  }
  else {
    X154();
  }
}

void X155() {
  flip (503/1000) {
    flip (663/1000) {
      X159();
    }
    else {
      X160();
    }
  }
  else {
    tick(1);
  }
}

void X156() {
  X161();
  X158();
}

void X157() {
  flip (419/1000) {
    X162();
  }
  else {
    X154();
  }
}

void X158() {
  flip (557/1000) {
    X162();
  }
  else {
    X161();
  }
}

void X159() {
  flip (167/200) {
    X158();
  }
  else {
    X161();
  }
}

void X160() {
  X154();
  X163();
}

void X161() {
  X157();
  X156();
}

void X162() {
  flip (187/250) {
    X167();
  }
  else {
    X165();
  }
}

void X163() {
  flip (51/100) {
    X167();
  }
  else {
    X167();
  }
}

void X164() {
  flip (27/40) {
    flip (129/1000) {
      X158();
    }
    else {
      X158();
    }
  }
  else {
    tick(1);
  }
}

void X165() {
  flip (33/1000) {
    flip (92/125) {
      X162();
    }
    else {
      X159();
    }
  }
  else {
    tick(1);
  }
}

void X166() {
  flip (177/200) {
    X171();
  }
  else {
    X164();
  }
}

void X167() {
  flip (479/500) {
    flip (29/1000) {
      X162();
    }
    else {
      X162();
    }
  }
  else {
    tick(1);
  }
}

void X168() {
  flip (567/1000) {
    flip (303/1000) {
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

void X169() {
  flip (37/50) {
    flip (33/1000) {
      X172();
    }
    else {
      X163();
    }
  }
  else {
    tick(1);
  }
}

void X170() {
  flip (63/200) {
    X165();
  }
  else {
    X167();
  }
}

void X171() {
  X168();
  X176();
}

void X172() {
  X173();
  X170();
}

void X173() {
  flip (383/500) {
    flip (499/1000) {
      X167();
    }
    else {
      X172();
    }
  }
  else {
    tick(1);
  }
}

void X174() {
  flip (37/40) {
    flip (389/1000) {
      X168();
    }
    else {
      X168();
    }
  }
  else {
    tick(1);
  }
}

void X175() {
  X176();
  X170();
}

void X176() {
  flip (863/1000) {
    X181();
  }
  else {
    X170();
  }
}

void X177() {
  flip (37/40) {
    flip (647/1000) {
      X178();
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
  X176();
  X181();
}

void X179() {
  flip (611/1000) {
    X182();
  }
  else {
    X175();
  }
}

void X180() {
  flip (29/40) {
    flip (23/100) {
      X180();
    }
    else {
      X183();
    }
  }
  else {
    tick(1);
  }
}

void X181() {
  flip (31/50) {
    X177();
  }
  else {
    X178();
  }
}

void X182() {
  X186();
  X181();
}

void X183() {
  X177();
  X184();
}

void X184() {
  X178();
  X185();
}

void X185() {
  flip (99/1000) {
    flip (237/250) {
      X182();
    }
    else {
      X179();
    }
  }
  else {
    tick(1);
  }
}

void X186() {
  flip (9/125) {
    X180();
  }
  else {
    X180();
  }
}

void X187() {
  flip (329/1000) {
    X190();
  }
  else {
    X187();
  }
}

void X188() {
  flip (489/500) {
    X183();
  }
  else {
    X191();
  }
}

void X189() {
  flip (181/500) {
    flip (943/1000) {
      X184();
    }
    else {
      X190();
    }
  }
  else {
    tick(1);
  }
}

void X190() {
  flip (949/1000) {
    flip (13/500) {
      X191();
    }
    else {
      X188();
    }
  }
  else {
    tick(1);
  }
}

void X191() {
  flip (63/250) {
    flip (327/500) {
      X191();
    }
    else {
      X189();
    }
  }
  else {
    tick(1);
  }
}

void X192() {
  flip (453/500) {
    flip (209/1000) {
      X187();
    }
    else {
      X190();
    }
  }
  else {
    tick(1);
  }
}

void X193() {
  flip (39/125) {
    flip (253/1000) {
      X194();
    }
    else {
      X187();
    }
  }
  else {
    tick(1);
  }
}

void X194() {
  X193();
  X194();
}

void X195() {
  flip (257/500) {
    flip (97/200) {
      X194();
    }
    else {
      X191();
    }
  }
  else {
    tick(1);
  }
}

void X196() {
  flip (87/500) {
    flip (451/500) {
      X196();
    }
    else {
      X194();
    }
  }
  else {
    tick(1);
  }
}

void X197() {
  flip (112/125) {
    flip (62/125) {
      X201();
    }
    else {
      X202();
    }
  }
  else {
    tick(1);
  }
}

void X198() {
  flip (161/250) {
    flip (677/1000) {
      X196();
    }
    else {
      X198();
    }
  }
  else {
    tick(1);
  }
}

void X199() {
  flip (891/1000) {
    flip (703/1000) {
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
  flip (753/1000) {
    X200();
  }
  else {
    X198();
  }
}

void X201() {
  flip (473/500) {
    X203();
  }
  else {
    X198();
  }
}

void X202() {
  flip (149/200) {
    flip (29/125) {
      X196();
    }
    else {
      X196();
    }
  }
  else {
    tick(1);
  }
}

void X203() {
  flip (721/1000) {
    X202();
  }
  else {
    X204();
  }
}

void X204() {
  flip (329/1000) {
    X205();
  }
  else {
    X203();
  }
}

void X205() {
  flip (93/250) {
    flip (11/200) {
      X203();
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
  flip (763/1000) {
    X202();
  }
  else {
    X207();
  }
}

void X207() {
  X206();
  X208();
}

void X208() {
  flip (127/250) {
    X206();
  }
  else {
    X212();
  }
}

void X209() {
  flip (923/1000) {
    flip (119/250) {
      X213();
    }
    else {
      X213();
    }
  }
  else {
    tick(1);
  }
}

void X210() {
  X213();
  X204();
}

void X211() {
  flip (33/125) {
    flip (629/1000) {
      X208();
    }
    else {
      X216();
    }
  }
  else {
    tick(1);
  }
}

void X212() {
  flip (41/50) {
    flip (601/1000) {
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

void X213() {
  X216();
  X214();
}

void X214() {
  X216();
  X214();
}

void X215() {
  X219();
  X218();
}

void X216() {
  flip (18/25) {
    flip (62/125) {
      X216();
    }
    else {
      X218();
    }
  }
  else {
    tick(1);
  }
}

void X217() {
  flip (99/1000) {
    X220();
  }
  else {
    X217();
  }
}

void X218() {
  flip (84/125) {
    X214();
  }
  else {
    X217();
  }
}

void X219() {
  flip (141/250) {
    flip (419/1000) {
      X217();
    }
    else {
      X216();
    }
  }
  else {
    tick(1);
  }
}

void X220() {
  flip (19/20) {
    flip (133/1000) {
      X214();
    }
    else {
      X214();
    }
  }
  else {
    tick(1);
  }
}

void X221() {
  flip (89/200) {
    X225();
  }
  else {
    X223();
  }
}

void X222() {
  flip (221/500) {
    X225();
  }
  else {
    X219();
  }
}

void X223() {
  X222();
  X221();
}

void X224() {
  X226();
  X229();
}

void X225() {
  X219();
  X228();
}

void X226() {
  X224();
  X230();
}

void X227() {
  flip (289/1000) {
    X230();
  }
  else {
    X221();
  }
}

void X228() {
  flip (106/125) {
    X227();
  }
  else {
    X232();
  }
}

void X229() {
  flip (381/500) {
    X224();
  }
  else {
    X223();
  }
}

void X230() {
  flip (343/1000) {
    X229();
  }
  else {
    X233();
  }
}

void X231() {
  flip (229/250) {
    flip (139/1000) {
      X233();
    }
    else {
      X228();
    }
  }
  else {
    tick(1);
  }
}

void X232() {
  X237();
  X233();
}

void X233() {
  X236();
  X236();
}

void X234() {
  X238();
  X235();
}

void X235() {
  X232();
  X233();
}

void X236() {
  flip (3/50) {
    flip (251/1000) {
      X238();
    }
    else {
      X231();
    }
  }
  else {
    tick(1);
  }
}

void X237() {
  flip (437/500) {
    flip (91/1000) {
      X239();
    }
    else {
      X242();
    }
  }
  else {
    tick(1);
  }
}

void X238() {
  flip (29/40) {
    flip (127/200) {
      X242();
    }
    else {
      X236();
    }
  }
  else {
    tick(1);
  }
}

void X239() {
  X236();
  X243();
}

void X240() {
  X245();
  X242();
}

void X241() {
  flip (313/1000) {
    X241();
  }
  else {
    X235();
  }
}

void X242() {
  flip (469/1000) {
    X237();
  }
  else {
    X239();
  }
}

void X243() {
  flip (11/20) {
    flip (323/1000) {
      X243();
    }
    else {
      X248();
    }
  }
  else {
    tick(1);
  }
}

void X244() {
  flip (81/250) {
    flip (18/25) {
      X247();
    }
    else {
      X241();
    }
  }
  else {
    tick(1);
  }
}

void X245() {
  flip (269/500) {
    flip (279/500) {
      X242();
    }
    else {
      X246();
    }
  }
  else {
    tick(1);
  }
}

void X246() {
  flip (31/1000) {
    flip (143/250) {
      X249();
    }
    else {
      X243();
    }
  }
  else {
    tick(1);
  }
}

void X247() {
  flip (659/1000) {
    flip (741/1000) {
      X244();
    }
    else {
      X241();
    }
  }
  else {
    tick(1);
  }
}

void X248() {
  X250();
  X246();
}

void X249() {
  flip (47/200) {
    flip (7/1000) {
      X254();
    }
    else {
      X253();
    }
  }
  else {
    tick(1);
  }
}

void X250() {
  flip (307/500) {
    flip (677/1000) {
      X244();
    }
    else {
      X252();
    }
  }
  else {
    tick(1);
  }
}

void X251() {
  flip (657/1000) {
    X255();
  }
  else {
    X254();
  }
}

void X252() {
  flip (41/50) {
    flip (429/1000) {
      X254();
    }
    else {
      X253();
    }
  }
  else {
    tick(1);
  }
}

void X253() {
  flip (223/250) {
    flip (23/500) {
      X256();
    }
    else {
      X258();
    }
  }
  else {
    tick(1);
  }
}

void X254() {
  X250();
  X255();
}

void X255() {
  X260();
  X260();
}

void X256() {
  X256();
  X255();
}

void X257() {
  flip (493/1000) {
    flip (731/1000) {
      X252();
    }
    else {
      X261();
    }
  }
  else {
    tick(1);
  }
}

void X258() {
  flip (1/500) {
    flip (63/500) {
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

void X259() {
  flip (819/1000) {
    flip (633/1000) {
      X261();
    }
    else {
      X264();
    }
  }
  else {
    tick(1);
  }
}

void X260() {
  flip (27/40) {
    flip (691/1000) {
      X257();
    }
    else {
      X260();
    }
  }
  else {
    tick(1);
  }
}

void X261() {
  flip (741/1000) {
    flip (361/1000) {
      X256();
    }
    else {
      X260();
    }
  }
  else {
    tick(1);
  }
}

void X262() {
  flip (43/200) {
    flip (71/100) {
      X267();
    }
    else {
      X259();
    }
  }
  else {
    tick(1);
  }
}

void X263() {
  flip (59/125) {
    flip (9/125) {
      X260();
    }
    else {
      X266();
    }
  }
  else {
    tick(1);
  }
}

void X264() {
  flip (54/125) {
    flip (387/500) {
      X266();
    }
    else {
      X265();
    }
  }
  else {
    tick(1);
  }
}

void X265() {
  X269();
  X265();
}

void X266() {
  flip (993/1000) {
    X263();
  }
  else {
    X262();
  }
}

void X267() {
  flip (189/200) {
    X266();
  }
  else {
    X268();
  }
}

void X268() {
  flip (7/25) {
    X272();
  }
  else {
    X270();
  }
}

void X269() {
  X271();
  X274();
}

void X270() {
  flip (104/125) {
    X274();
  }
  else {
    X266();
  }
}

void X271() {
  flip (249/250) {
    X267();
  }
  else {
    X267();
  }
}

void X272() {
  X275();
  X274();
}

void X273() {
  flip (94/125) {
    flip (687/1000) {
      X273();
    }
    else {
      X267();
    }
  }
  else {
    tick(1);
  }
}

void X274() {
  flip (91/1000) {
    flip (73/200) {
      X272();
    }
    else {
      X273();
    }
  }
  else {
    tick(1);
  }
}

void X275() {
  flip (63/250) {
    flip (86/125) {
      X271();
    }
    else {
      X280();
    }
  }
  else {
    tick(1);
  }
}

void X276() {
  X271();
  X273();
}

void X277() {
  flip (591/1000) {
    flip (437/1000) {
      X280();
    }
    else {
      X278();
    }
  }
  else {
    tick(1);
  }
}

void X278() {
  X282();
  X280();
}

void X279() {
  flip (89/100) {
    X275();
  }
  else {
    X275();
  }
}

void X280() {
  flip (451/500) {
    flip (317/1000) {
      X282();
    }
    else {
      X281();
    }
  }
  else {
    tick(1);
  }
}

void X281() {
  flip (7/50) {
    X276();
  }
  else {
    X282();
  }
}

void X282() {
  X279();
  X278();
}

void X283() {
  X287();
  X280();
}

void X284() {
  X286();
  X280();
}

void X285() {
  flip (299/500) {
    flip (893/1000) {
      X283();
    }
    else {
      X287();
    }
  }
  else {
    tick(1);
  }
}

void X286() {
  flip (1/1000) {
    X284();
  }
  else {
    X281();
  }
}

void X287() {
  flip (31/1000) {
    flip (51/250) {
      X286();
    }
    else {
      X281();
    }
  }
  else {
    tick(1);
  }
}

void X288() {
  flip (17/100) {
    X287();
  }
  else {
    X283();
  }
}

void X289() {
  X289();
  X287();
}

void X290() {
  flip (819/1000) {
    flip (17/250) {
      X291();
    }
    else {
      X290();
    }
  }
  else {
    tick(1);
  }
}

void X291() {
  X294();
  X289();
}

void X292() {
  flip (801/1000) {
    X291();
  }
  else {
    X287();
  }
}

void X293() {
  X289();
  X297();
}

void X294() {
  X298();
  X298();
}

void X295() {
  flip (161/250) {
    X295();
  }
  else {
    X297();
  }
}

void X296() {
  flip (28/125) {
    X298();
  }
  else {
    X298();
  }
}

void X297() {
  X302();
  X300();
}

void X298() {
  flip (101/125) {
    X298();
  }
  else {
    X298();
  }
}

void X299() {
  flip (289/500) {
    flip (31/200) {
      X294();
    }
    else {
      X293();
    }
  }
  else {
    tick(1);
  }
}

void X300() {
  flip (217/1000) {
    flip (451/1000) {
      X295();
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
  X303();
  X295();
}

void X302() {
  flip (1/10) {
    flip (181/200) {
      X297();
    }
    else {
      X307();
    }
  }
  else {
    tick(1);
  }
}

void X303() {
  flip (1/1000) {
    flip (63/100) {
      X303();
    }
    else {
      X297();
    }
  }
  else {
    tick(1);
  }
}

void X304() {
  flip (13/40) {
    flip (469/1000) {
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

void X305() {
  X307();
  X303();
}

void X306() {
  flip (72/125) {
    flip (93/200) {
      X309();
    }
    else {
      X303();
    }
  }
  else {
    tick(1);
  }
}

void X307() {
  flip (523/1000) {
    flip (397/1000) {
      X305();
    }
    else {
      X303();
    }
  }
  else {
    tick(1);
  }
}

void X308() {
  flip (51/100) {
    flip (209/250) {
      X309();
    }
    else {
      X304();
    }
  }
  else {
    tick(1);
  }
}

void X309() {
  flip (563/1000) {
    flip (143/250) {
      X312();
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
  flip (727/1000) {
    X308();
  }
  else {
    X315();
  }
}

void X311() {
  flip (687/1000) {
    X311();
  }
  else {
    X316();
  }
}

void X312() {
  X309();
  X311();
}

void X313() {
  flip (159/1000) {
    X317();
  }
  else {
    X313();
  }
}

void X314() {
  flip (2/125) {
    flip (621/1000) {
      X315();
    }
    else {
      X309();
    }
  }
  else {
    tick(1);
  }
}

void X315() {
  X313();
  X311();
}

void X316() {
  X320();
  X318();
}

void X317() {
  X316();
  X314();
}

void X318() {
  X322();
  X314();
}

void X319() {
  flip (287/500) {
    X314();
  }
  else {
    X315();
  }
}

void X320() {
  X314();
  X323();
}

void X321() {
  X318();
  X324();
}

void X322() {
  X323();
  X322();
}

void X323() {
  flip (111/1000) {
    flip (94/125) {
      X324();
    }
    else {
      X321();
    }
  }
  else {
    tick(1);
  }
}

void X324() {
  flip (251/500) {
    flip (67/100) {
      X326();
    }
    else {
      X322();
    }
  }
  else {
    tick(1);
  }
}

void X325() {
  flip (37/250) {
    flip (949/1000) {
      X325();
    }
    else {
      X330();
    }
  }
  else {
    tick(1);
  }
}

void X326() {
  flip (969/1000) {
    X330();
  }
  else {
    X325();
  }
}

void X327() {
  X323();
  X328();
}

void X328() {
  flip (9/1000) {
    flip (357/500) {
      X324();
    }
    else {
      X331();
    }
  }
  else {
    tick(1);
  }
}

void X329() {
  X334();
  X331();
}

void X330() {
  flip (687/1000) {
    flip (999/1000) {
      X327();
    }
    else {
      X328();
    }
  }
  else {
    tick(1);
  }
}

void X331() {
  X331();
  X325();
}

void X332() {
  X335();
  X333();
}

void X333() {
  flip (81/250) {
    flip (637/1000) {
      X335();
    }
    else {
      X333();
    }
  }
  else {
    tick(1);
  }
}

void X334() {
  X332();
  X332();
}

void X335() {
  X338();
  X330();
}

void X336() {
  flip (9/50) {
    flip (29/1000) {
      X338();
    }
    else {
      X332();
    }
  }
  else {
    tick(1);
  }
}

void X337() {
  flip (141/200) {
    X339();
  }
  else {
    X341();
  }
}

void X338() {
  X334();
  X337();
}

void X339() {
  flip (329/1000) {
    flip (439/1000) {
      X334();
    }
    else {
      X343();
    }
  }
  else {
    tick(1);
  }
}

void X340() {
  X336();
  X338();
}

void X341() {
  flip (843/1000) {
    X344();
  }
  else {
    X342();
  }
}

void X342() {
  flip (4/25) {
    flip (1/200) {
      X339();
    }
    else {
      X347();
    }
  }
  else {
    tick(1);
  }
}

void X343() {
  X337();
  X346();
}

void X344() {
  flip (451/1000) {
    flip (53/100) {
      X340();
    }
    else {
      X339();
    }
  }
  else {
    tick(1);
  }
}

void X345() {
  flip (789/1000) {
    X346();
  }
  else {
    X349();
  }
}

void X346() {
  flip (221/1000) {
    X349();
  }
  else {
    X342();
  }
}

void X347() {
  flip (1/20) {
    X341();
  }
  else {
    X345();
  }
}

void X348() {
  flip (119/1000) {
    flip (461/1000) {
      X348();
    }
    else {
      X353();
    }
  }
  else {
    tick(1);
  }
}

void X349() {
  flip (723/1000) {
    flip (81/200) {
      X350();
    }
    else {
      X344();
    }
  }
  else {
    tick(1);
  }
}

void X350() {
  flip (111/125) {
    flip (89/500) {
      X349();
    }
    else {
      X346();
    }
  }
  else {
    tick(1);
  }
}

void X351() {
  flip (21/40) {
    flip (211/500) {
      X349();
    }
    else {
      X349();
    }
  }
  else {
    tick(1);
  }
}

void X352() {
  X355();
  X353();
}

void X353() {
  X354();
  X348();
}

void X354() {
  flip (927/1000) {
    X348();
  }
  else {
    X349();
  }
}

void X355() {
  flip (99/200) {
    flip (233/250) {
      X350();
    }
    else {
      X353();
    }
  }
  else {
    tick(1);
  }
}

void X356() {
  flip (689/1000) {
    flip (399/1000) {
      X359();
    }
    else {
      X354();
    }
  }
  else {
    tick(1);
  }
}

void X357() {
  flip (43/500) {
    flip (21/500) {
      X362();
    }
    else {
      X354();
    }
  }
  else {
    tick(1);
  }
}

void X358() {
  X358();
  X363();
}

void X359() {
  X360();
  X361();
}

void X360() {
  flip (957/1000) {
    X359();
  }
  else {
    X364();
  }
}

void X361() {
  flip (579/1000) {
    X364();
  }
  else {
    X366();
  }
}

void X362() {
  flip (347/1000) {
    flip (53/200) {
      X362();
    }
    else {
      X359();
    }
  }
  else {
    tick(1);
  }
}

void X363() {
  flip (371/1000) {
    X361();
  }
  else {
    X359();
  }
}

void X364() {
  flip (117/1000) {
    X362();
  }
  else {
    X364();
  }
}

void X365() {
  X361();
  X363();
}

void X366() {
  X370();
  X370();
}

void X367() {
  X372();
  X364();
}

void X368() {
  flip (3/250) {
    flip (249/500) {
      X362();
    }
    else {
      X364();
    }
  }
  else {
    tick(1);
  }
}

void X369() {
  X367();
  X374();
}

void X370() {
  flip (451/1000) {
    flip (263/500) {
      X375();
    }
    else {
      X368();
    }
  }
  else {
    tick(1);
  }
}

void X371() {
  X376();
  X372();
}

void X372() {
  flip (113/200) {
    flip (83/250) {
      X372();
    }
    else {
      X373();
    }
  }
  else {
    tick(1);
  }
}

void X373() {
  flip (43/250) {
    flip (113/125) {
      X375();
    }
    else {
      X373();
    }
  }
  else {
    tick(1);
  }
}

void X374() {
  X374();
  X371();
}

void X375() {
  flip (91/125) {
    X377();
  }
  else {
    X379();
  }
}

void X376() {
  flip (461/1000) {
    X370();
  }
  else {
    X380();
  }
}

void X377() {
  flip (381/1000) {
    flip (83/250) {
      X372();
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
  flip (653/1000) {
    flip (473/1000) {
      X379();
    }
    else {
      X375();
    }
  }
  else {
    tick(1);
  }
}

void X379() {
  flip (71/250) {
    flip (37/125) {
      X384();
    }
    else {
      X382();
    }
  }
  else {
    tick(1);
  }
}

void X380() {
  flip (97/200) {
    flip (66/125) {
      X381();
    }
    else {
      X383();
    }
  }
  else {
    tick(1);
  }
}

void X381() {
  X381();
  X375();
}

void X382() {
  X382();
  X378();
}

void X383() {
  flip (119/125) {
    X382();
  }
  else {
    X380();
  }
}

void X384() {
  flip (187/500) {
    flip (21/200) {
      X387();
    }
    else {
      X383();
    }
  }
  else {
    tick(1);
  }
}

void X385() {
  flip (11/40) {
    X385();
  }
  else {
    X389();
  }
}

void X386() {
  X387();
  X382();
}

void X387() {
  X383();
  X384();
}

void X388() {
  flip (137/1000) {
    X390();
  }
  else {
    X390();
  }
}

void X389() {
  X388();
  X387();
}

void X390() {
  X395();
  X388();
}

void X391() {
  flip (114/125) {
    flip (569/1000) {
      X396();
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
  flip (106/125) {
    flip (357/1000) {
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

void X393() {
  flip (68/125) {
    flip (571/1000) {
      X389();
    }
    else {
      X387();
    }
  }
  else {
    tick(1);
  }
}

void X394() {
  flip (98/125) {
    flip (403/500) {
      X394();
    }
    else {
      X398();
    }
  }
  else {
    tick(1);
  }
}

void X395() {
  X390();
  X391();
}

void X396() {
  flip (99/500) {
    flip (29/50) {
      X399();
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
  flip (12/125) {
    flip (557/1000) {
      X400();
    }
    else {
      X399();
    }
  }
  else {
    tick(1);
  }
}

void X398() {
  flip (39/500) {
    flip (703/1000) {
      X401();
    }
    else {
      X401();
    }
  }
  else {
    tick(1);
  }
}

void X399() {
  X401();
  X398();
}

void X400() {
  flip (33/125) {
    X395();
  }
  else {
    X402();
  }
}

void X401() {
  flip (357/500) {
    X405();
  }
  else {
    X403();
  }
}

void X402() {
  flip (263/1000) {
    X403();
  }
  else {
    X404();
  }
}

void X403() {
  flip (119/250) {
    X402();
  }
  else {
    X399();
  }
}

void X404() {
  flip (77/500) {
    X403();
  }
  else {
    X409();
  }
}

void X405() {
  flip (331/1000) {
    flip (483/500) {
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

void X406() {
  flip (21/50) {
    flip (233/1000) {
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

void X407() {
  X403();
  X401();
}

void X408() {
  flip (439/1000) {
    flip (23/1000) {
      X405();
    }
    else {
      X410();
    }
  }
  else {
    tick(1);
  }
}

void X409() {
  flip (733/1000) {
    X413();
  }
  else {
    X404();
  }
}

void X410() {
  flip (417/1000) {
    flip (353/500) {
      X405();
    }
    else {
      X410();
    }
  }
  else {
    tick(1);
  }
}

void X411() {
  X406();
  X409();
}

void X412() {
  X409();
  X413();
}

void X413() {
  X418();
  X416();
}

void X414() {
  flip (793/1000) {
    X414();
  }
  else {
    X414();
  }
}

void X415() {
  flip (411/500) {
    X411();
  }
  else {
    X419();
  }
}

void X416() {
  flip (39/100) {
    flip (917/1000) {
      X419();
    }
    else {
      X415();
    }
  }
  else {
    tick(1);
  }
}

void X417() {
  flip (427/1000) {
    flip (11/250) {
      X419();
    }
    else {
      X411();
    }
  }
  else {
    tick(1);
  }
}

void X418() {
  flip (803/1000) {
    flip (27/500) {
      X420();
    }
    else {
      X418();
    }
  }
  else {
    tick(1);
  }
}

void X419() {
  X415();
  X423();
}

void X420() {
  flip (621/1000) {
    X422();
  }
  else {
    X421();
  }
}

void X421() {
  X422();
  X421();
}

void X422() {
  flip (223/500) {
    flip (673/1000) {
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

void X423() {
  X420();
  X427();
}

void X424() {
  flip (179/500) {
    flip (7/125) {
      X426();
    }
    else {
      X424();
    }
  }
  else {
    tick(1);
  }
}

void X425() {
  X425();
  X421();
}

void X426() {
  X425();
  X423();
}

void X427() {
  flip (341/1000) {
    flip (427/500) {
      X432();
    }
    else {
      X429();
    }
  }
  else {
    tick(1);
  }
}

void X428() {
  flip (431/1000) {
    flip (1/20) {
      X428();
    }
    else {
      X425();
    }
  }
  else {
    tick(1);
  }
}

void X429() {
  X432();
  X431();
}

void X430() {
  flip (89/125) {
    flip (419/500) {
      X433();
    }
    else {
      X425();
    }
  }
  else {
    tick(1);
  }
}

void X431() {
  flip (7/40) {
    X433();
  }
  else {
    X430();
  }
}

void X432() {
  X428();
  X429();
}

void X433() {
  X438();
  X427();
}

void X434() {
  flip (577/1000) {
    flip (77/200) {
      X434();
    }
    else {
      X439();
    }
  }
  else {
    tick(1);
  }
}

void X435() {
  flip (187/500) {
    flip (99/250) {
      X431();
    }
    else {
      X438();
    }
  }
  else {
    tick(1);
  }
}

void X436() {
  X434();
  X437();
}

void X437() {
  flip (677/1000) {
    flip (383/1000) {
      X431();
    }
    else {
      X440();
    }
  }
  else {
    tick(1);
  }
}

void X438() {
  flip (147/1000) {
    X442();
  }
  else {
    X437();
  }
}

void X439() {
  flip (161/1000) {
    flip (567/1000) {
      X440();
    }
    else {
      X439();
    }
  }
  else {
    tick(1);
  }
}

void X440() {
  flip (33/500) {
    flip (721/1000) {
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

void X441() {
  flip (423/500) {
    flip (273/1000) {
      X437();
    }
    else {
      X442();
    }
  }
  else {
    tick(1);
  }
}

void X442() {
  X447();
  X443();
}

void X443() {
  flip (98/125) {
    X444();
  }
  else {
    X440();
  }
}

void X444() {
  flip (83/250) {
    flip (957/1000) {
      X440();
    }
    else {
      X445();
    }
  }
  else {
    tick(1);
  }
}

void X445() {
  X441();
  X443();
}

void X446() {
  flip (837/1000) {
    flip (229/1000) {
      X444();
    }
    else {
      X444();
    }
  }
  else {
    tick(1);
  }
}

void X447() {
  flip (379/1000) {
    flip (137/500) {
      X441();
    }
    else {
      X450();
    }
  }
  else {
    tick(1);
  }
}

void X448() {
  flip (79/125) {
    X442();
  }
  else {
    X450();
  }
}

void X449() {
  flip (157/1000) {
    X445();
  }
  else {
    X449();
  }
}

void X450() {
  X455();
  X455();
}

void X451() {
  X445();
  X449();
}

void X452() {
  flip (39/100) {
    flip (253/1000) {
      X453();
    }
    else {
      X457();
    }
  }
  else {
    tick(1);
  }
}

void X453() {
  X453();
  X454();
}

void X454() {
  X455();
  X452();
}

void X455() {
  X454();
  X457();
}

void X456() {
  flip (707/1000) {
    X450();
  }
  else {
    X458();
  }
}

void X457() {
  flip (7/100) {
    X458();
  }
  else {
    X462();
  }
}

void X458() {
  flip (213/250) {
    X457();
  }
  else {
    X463();
  }
}

void X459() {
  flip (957/1000) {
    X454();
  }
  else {
    X458();
  }
}

void X460() {
  flip (837/1000) {
    flip (101/200) {
      X460();
    }
    else {
      X456();
    }
  }
  else {
    tick(1);
  }
}

void X461() {
  flip (927/1000) {
    X456();
  }
  else {
    X456();
  }
}

void X462() {
  X464();
  X456();
}

void X463() {
  X460();
  X459();
}

void X464() {
  flip (13/20) {
    X467();
  }
  else {
    X462();
  }
}

void X465() {
  flip (67/250) {
    flip (127/500) {
      X466();
    }
    else {
      X467();
    }
  }
  else {
    tick(1);
  }
}

void X466() {
  flip (103/250) {
    flip (69/100) {
      X463();
    }
    else {
      X466();
    }
  }
  else {
    tick(1);
  }
}

void X467() {
  flip (7/1000) {
    X464();
  }
  else {
    X467();
  }
}

void X468() {
  flip (331/1000) {
    X462();
  }
  else {
    X470();
  }
}

void X469() {
  X468();
  X463();
}

void X470() {
  X470();
  X464();
}

void X471() {
  flip (93/200) {
    X473();
  }
  else {
    X475();
  }
}

void X472() {
  flip (341/1000) {
    flip (179/500) {
      X473();
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
  flip (21/500) {
    flip (3/20) {
      X468();
    }
    else {
      X477();
    }
  }
  else {
    tick(1);
  }
}

void X474() {
  X470();
  X475();
}

void X475() {
  X478();
  X475();
}

void X476() {
  X476();
  X481();
}

void X477() {
  flip (999/1000) {
    flip (77/100) {
      X481();
    }
    else {
      X481();
    }
  }
  else {
    tick(1);
  }
}

void X478() {
  flip (86/125) {
    X475();
  }
  else {
    X474();
  }
}

void X479() {
  flip (49/100) {
    X473();
  }
  else {
    X474();
  }
}

void X480() {
  flip (7/20) {
    flip (37/200) {
      X476();
    }
    else {
      X485();
    }
  }
  else {
    tick(1);
  }
}

void X481() {
  flip (573/1000) {
    flip (123/200) {
      X483();
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
  X476();
  X478();
}

void X483() {
  flip (133/200) {
    flip (803/1000) {
      X482();
    }
    else {
      X480();
    }
  }
  else {
    tick(1);
  }
}

void X484() {
  X479();
  X482();
}

void X485() {
  flip (209/250) {
    X487();
  }
  else {
    X482();
  }
}

void X486() {
  flip (123/200) {
    X486();
  }
  else {
    X482();
  }
}

void X487() {
  X489();
  X487();
}

void X488() {
  flip (129/200) {
    flip (503/1000) {
      X482();
    }
    else {
      X493();
    }
  }
  else {
    tick(1);
  }
}

void X489() {
  X484();
  X484();
}

void X490() {
  flip (281/1000) {
    flip (221/1000) {
      X484();
    }
    else {
      X493();
    }
  }
  else {
    tick(1);
  }
}

void X491() {
  flip (353/1000) {
    flip (411/500) {
      X489();
    }
    else {
      X494();
    }
  }
  else {
    tick(1);
  }
}

void X492() {
  X497();
  X492();
}

void X493() {
  flip (267/500) {
    X496();
  }
  else {
    X496();
  }
}

void X494() {
  X495();
  X492();
}

void X495() {
  flip (7/40) {
    X0();
  }
  else {
    X494();
  }
}

void X496() {
  X492();
  X492();
}

void X497() {
  flip (279/500) {
    X1();
  }
  else {
    X492();
  }
}

void X498() {
  flip (363/500) {
    X492();
  }
  else {
    X494();
  }
}

void X499() {
  flip (167/500) {
    X3();
  }
  else {
    X0();
  }
}
