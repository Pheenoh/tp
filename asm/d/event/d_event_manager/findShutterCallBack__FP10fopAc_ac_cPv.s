lbl_8004846C:
/* 8004846C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80048470  7C 08 02 A6 */	mflr r0
/* 80048474  90 01 00 34 */	stw r0, 0x34(r1)
/* 80048478  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8004847C  7C 7F 1B 78 */	mr r31, r3
/* 80048480  7C 85 23 78 */	mr r5, r4
/* 80048484  A8 64 00 00 */	lha r3, 0(r4)
/* 80048488  A8 1F 00 0E */	lha r0, 0xe(r31)
/* 8004848C  7C 03 00 00 */	cmpw r3, r0
/* 80048490  41 82 00 0C */	beq lbl_8004849C
/* 80048494  38 60 00 00 */	li r3, 0
/* 80048498  48 00 00 74 */	b lbl_8004850C
lbl_8004849C:
/* 8004849C  38 61 00 08 */	addi r3, r1, 8
/* 800484A0  38 9F 04 A8 */	addi r4, r31, 0x4a8
/* 800484A4  80 A5 00 04 */	lwz r5, 4(r5)
/* 800484A8  38 A5 04 A8 */	addi r5, r5, 0x4a8
/* 800484AC  48 21 E6 89 */	bl __mi__4cXyzCFRC3Vec
/* 800484B0  C0 81 00 08 */	lfs f4, 8(r1)
/* 800484B4  D0 81 00 14 */	stfs f4, 0x14(r1)
/* 800484B8  C0 61 00 0C */	lfs f3, 0xc(r1)
/* 800484BC  D0 61 00 18 */	stfs f3, 0x18(r1)
/* 800484C0  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 800484C4  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 800484C8  C0 22 85 2C */	lfs f1, lit_5025(r2)
/* 800484CC  FC 04 08 40 */	fcmpo cr0, f4, f1
/* 800484D0  40 80 00 38 */	bge lbl_80048508
/* 800484D4  C0 02 85 30 */	lfs f0, lit_5026(r2)
/* 800484D8  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 800484DC  40 81 00 2C */	ble lbl_80048508
/* 800484E0  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 800484E4  40 80 00 24 */	bge lbl_80048508
/* 800484E8  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 800484EC  40 81 00 1C */	ble lbl_80048508
/* 800484F0  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 800484F4  40 80 00 14 */	bge lbl_80048508
/* 800484F8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 800484FC  40 81 00 0C */	ble lbl_80048508
/* 80048500  7F E3 FB 78 */	mr r3, r31
/* 80048504  48 00 00 08 */	b lbl_8004850C
lbl_80048508:
/* 80048508  38 60 00 00 */	li r3, 0
lbl_8004850C:
/* 8004850C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80048510  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80048514  7C 08 03 A6 */	mtlr r0
/* 80048518  38 21 00 30 */	addi r1, r1, 0x30
/* 8004851C  4E 80 00 20 */	blr 
