lbl_807613B0:
/* 807613B0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 807613B4  FC 00 08 1E */	fctiwz f0, f1
/* 807613B8  D8 01 00 08 */	stfd f0, 8(r1)
/* 807613BC  80 01 00 0C */	lwz r0, 0xc(r1)
/* 807613C0  7C 00 07 34 */	extsh r0, r0
/* 807613C4  3C 80 80 76 */	lis r4, lit_5083@ha /* 0x807616D4@ha */
/* 807613C8  C8 24 16 D4 */	lfd f1, lit_5083@l(r4)  /* 0x807616D4@l */
/* 807613CC  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 807613D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 807613D4  3C 00 43 30 */	lis r0, 0x4330
/* 807613D8  90 01 00 10 */	stw r0, 0x10(r1)
/* 807613DC  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 807613E0  EC 00 08 28 */	fsubs f0, f0, f1
/* 807613E4  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 807613E8  38 21 00 20 */	addi r1, r1, 0x20
/* 807613EC  4E 80 00 20 */	blr 
