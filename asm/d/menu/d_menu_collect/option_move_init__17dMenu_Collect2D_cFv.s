lbl_801B51AC:
/* 801B51AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801B51B0  7C 08 02 A6 */	mflr r0
/* 801B51B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801B51B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801B51BC  7C 7F 1B 78 */	mr r31, r3
/* 801B51C0  38 80 04 0C */	li r4, 0x40c
/* 801B51C4  48 00 0D F1 */	bl setAButtonString__17dMenu_Collect2D_cFUs
/* 801B51C8  7F E3 FB 78 */	mr r3, r31
/* 801B51CC  38 80 03 F9 */	li r4, 0x3f9
/* 801B51D0  48 00 0E E9 */	bl setBButtonString__17dMenu_Collect2D_cFUs
/* 801B51D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801B51D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801B51DC  7C 08 03 A6 */	mtlr r0
/* 801B51E0  38 21 00 10 */	addi r1, r1, 0x10
/* 801B51E4  4E 80 00 20 */	blr 
