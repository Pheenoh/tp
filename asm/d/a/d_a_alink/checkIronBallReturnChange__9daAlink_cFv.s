lbl_80113CA0:
/* 80113CA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80113CA4  7C 08 02 A6 */	mflr r0
/* 80113CA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80113CAC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80113CB0  7C 7F 1B 78 */	mr r31, r3
/* 80113CB4  A0 03 2F E8 */	lhz r0, 0x2fe8(r3)
/* 80113CB8  28 00 00 DA */	cmplwi r0, 0xda
/* 80113CBC  40 82 00 70 */	bne lbl_80113D2C
/* 80113CC0  A8 1F 05 9C */	lha r0, 0x59c(r31)
/* 80113CC4  2C 00 04 00 */	cmpwi r0, 0x400
/* 80113CC8  41 81 00 1C */	bgt lbl_80113CE4
/* 80113CCC  C0 5F 38 08 */	lfs f2, 0x3808(r31)
/* 80113CD0  C0 3F 04 D4 */	lfs f1, 0x4d4(r31)
/* 80113CD4  C0 02 93 68 */	lfs f0, lit_8472(r2)
/* 80113CD8  EC 01 00 28 */	fsubs f0, f1, f0
/* 80113CDC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80113CE0  41 80 00 4C */	blt lbl_80113D2C
lbl_80113CE4:
/* 80113CE4  2C 00 04 00 */	cmpwi r0, 0x400
/* 80113CE8  40 81 00 10 */	ble lbl_80113CF8
/* 80113CEC  A8 1F 30 1A */	lha r0, 0x301a(r31)
/* 80113CF0  2C 00 00 64 */	cmpwi r0, 0x64
/* 80113CF4  41 82 00 38 */	beq lbl_80113D2C
lbl_80113CF8:
/* 80113CF8  38 7F 0F B8 */	addi r3, r31, 0xfb8
/* 80113CFC  4B F7 05 C5 */	bl ChkAtHit__12dCcD_GObjInfFv
/* 80113D00  28 03 00 00 */	cmplwi r3, 0
/* 80113D04  41 82 00 3C */	beq lbl_80113D40
/* 80113D08  38 7F 0F B8 */	addi r3, r31, 0xfb8
/* 80113D0C  4B F7 06 9D */	bl GetAtHitGObj__12dCcD_GObjInfFv
/* 80113D10  28 03 00 00 */	cmplwi r3, 0
/* 80113D14  41 82 00 2C */	beq lbl_80113D40
/* 80113D18  38 7F 0F B8 */	addi r3, r31, 0xfb8
/* 80113D1C  4B F7 06 8D */	bl GetAtHitGObj__12dCcD_GObjInfFv
/* 80113D20  80 03 00 9C */	lwz r0, 0x9c(r3)
/* 80113D24  54 00 05 EF */	rlwinm. r0, r0, 0, 0x17, 0x17
/* 80113D28  41 82 00 18 */	beq lbl_80113D40
lbl_80113D2C:
/* 80113D2C  7F E3 FB 78 */	mr r3, r31
/* 80113D30  38 80 00 00 */	li r4, 0
/* 80113D34  4B FF E9 C5 */	bl setIronBallReturn__9daAlink_cFi
/* 80113D38  38 60 00 01 */	li r3, 1
/* 80113D3C  48 00 00 08 */	b lbl_80113D44
lbl_80113D40:
/* 80113D40  38 60 00 00 */	li r3, 0
lbl_80113D44:
/* 80113D44  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80113D48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80113D4C  7C 08 03 A6 */	mtlr r0
/* 80113D50  38 21 00 10 */	addi r1, r1, 0x10
/* 80113D54  4E 80 00 20 */	blr 
