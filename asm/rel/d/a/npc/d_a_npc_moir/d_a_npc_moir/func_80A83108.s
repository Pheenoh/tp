lbl_80A83108:
/* 80A83108  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80A8310C  7C 08 02 A6 */	mflr r0
/* 80A83110  90 01 00 34 */	stw r0, 0x34(r1)
/* 80A83114  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80A83118  7C 7F 1B 78 */	mr r31, r3
/* 80A8311C  3C 60 80 A8 */	lis r3, lit_5166@ha /* 0x80A837B4@ha */
/* 80A83120  C8 23 37 B4 */	lfd f1, lit_5166@l(r3)  /* 0x80A837B4@l */
/* 80A83124  6C 80 80 00 */	xoris r0, r4, 0x8000
/* 80A83128  90 01 00 0C */	stw r0, 0xc(r1)
/* 80A8312C  3C 00 43 30 */	lis r0, 0x4330
/* 80A83130  90 01 00 08 */	stw r0, 8(r1)
/* 80A83134  C8 01 00 08 */	lfd f0, 8(r1)
/* 80A83138  EC 20 08 28 */	fsubs f1, f0, f1
/* 80A8313C  4B 7E 48 19 */	bl cM_rndF__Ff
/* 80A83140  3C 60 80 A8 */	lis r3, lit_5166@ha /* 0x80A837B4@ha */
/* 80A83144  C8 43 37 B4 */	lfd f2, lit_5166@l(r3)  /* 0x80A837B4@l */
/* 80A83148  6F E0 80 00 */	xoris r0, r31, 0x8000
/* 80A8314C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80A83150  3C 00 43 30 */	lis r0, 0x4330
/* 80A83154  90 01 00 10 */	stw r0, 0x10(r1)
/* 80A83158  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80A8315C  EC 00 10 28 */	fsubs f0, f0, f2
/* 80A83160  EC 00 08 2A */	fadds f0, f0, f1
/* 80A83164  FC 00 00 1E */	fctiwz f0, f0
/* 80A83168  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 80A8316C  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80A83170  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80A83174  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80A83178  7C 08 03 A6 */	mtlr r0
/* 80A8317C  38 21 00 30 */	addi r1, r1, 0x30
/* 80A83180  4E 80 00 20 */	blr 
