lbl_802924E4:
/* 802924E4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802924E8  7C 08 02 A6 */	mflr r0
/* 802924EC  90 01 00 24 */	stw r0, 0x24(r1)
/* 802924F0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802924F4  7C 7F 1B 78 */	mr r31, r3
/* 802924F8  80 63 01 2C */	lwz r3, 0x12c(r3)
/* 802924FC  28 03 00 00 */	cmplwi r3, 0
/* 80292500  40 82 00 4C */	bne lbl_8029254C
/* 80292504  48 00 A4 E5 */	bl getDacRate__9JASDriverFv
/* 80292508  C0 62 BB BC */	lfs f3, lit_1042(r2)
/* 8029250C  A0 7F 02 28 */	lhz r3, 0x228(r31)
/* 80292510  A0 1F 02 26 */	lhz r0, 0x226(r31)
/* 80292514  7C 03 01 D6 */	mullw r0, r3, r0
/* 80292518  C8 42 BB C0 */	lfd f2, lit_1044(r2)
/* 8029251C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80292520  90 01 00 0C */	stw r0, 0xc(r1)
/* 80292524  3C 00 43 30 */	lis r0, 0x4330
/* 80292528  90 01 00 08 */	stw r0, 8(r1)
/* 8029252C  C8 01 00 08 */	lfd f0, 8(r1)
/* 80292530  EC 00 10 28 */	fsubs f0, f0, f2
/* 80292534  EC 03 00 32 */	fmuls f0, f3, f0
/* 80292538  EC 20 08 24 */	fdivs f1, f0, f1
/* 8029253C  C0 1F 02 1C */	lfs f0, 0x21c(r31)
/* 80292540  EC 00 00 72 */	fmuls f0, f0, f1
/* 80292544  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80292548  48 00 00 24 */	b lbl_8029256C
lbl_8029254C:
/* 8029254C  A0 03 02 26 */	lhz r0, 0x226(r3)
/* 80292550  B0 1F 02 26 */	sth r0, 0x226(r31)
/* 80292554  80 7F 01 2C */	lwz r3, 0x12c(r31)
/* 80292558  A0 03 02 28 */	lhz r0, 0x228(r3)
/* 8029255C  B0 1F 02 28 */	sth r0, 0x228(r31)
/* 80292560  80 7F 01 2C */	lwz r3, 0x12c(r31)
/* 80292564  C0 03 01 DC */	lfs f0, 0x1dc(r3)
/* 80292568  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
lbl_8029256C:
/* 8029256C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80292570  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80292574  7C 08 03 A6 */	mtlr r0
/* 80292578  38 21 00 20 */	addi r1, r1, 0x20
/* 8029257C  4E 80 00 20 */	blr 
