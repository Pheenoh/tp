lbl_80249270:
/* 80249270  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80249274  7C 08 02 A6 */	mflr r0
/* 80249278  90 01 00 14 */	stw r0, 0x14(r1)
/* 8024927C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80249280  93 C1 00 08 */	stw r30, 8(r1)
/* 80249284  7C 7E 1B 78 */	mr r30, r3
/* 80249288  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 8024928C  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80249290  83 E3 5F 50 */	lwz r31, 0x5f50(r3)
/* 80249294  7F E3 FB 78 */	mr r3, r31
/* 80249298  81 9F 00 00 */	lwz r12, 0(r31)
/* 8024929C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802492A0  7D 89 03 A6 */	mtctr r12
/* 802492A4  4E 80 04 21 */	bctrl 
/* 802492A8  80 7E 00 04 */	lwz r3, 4(r30)
/* 802492AC  C0 22 B3 58 */	lfs f1, lit_3949(r2)
/* 802492B0  FC 40 08 90 */	fmr f2, f1
/* 802492B4  7F E4 FB 78 */	mr r4, r31
/* 802492B8  48 0A FC 1D */	bl draw__9J2DScreenFffPC14J2DGrafContext
/* 802492BC  80 7E 00 44 */	lwz r3, 0x44(r30)
/* 802492C0  38 80 00 00 */	li r4, 0
/* 802492C4  C0 22 B3 58 */	lfs f1, lit_3949(r2)
/* 802492C8  FC 40 08 90 */	fmr f2, f1
/* 802492CC  C0 62 B3 5C */	lfs f3, lit_3950(r2)
/* 802492D0  81 83 00 00 */	lwz r12, 0(r3)
/* 802492D4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802492D8  7D 89 03 A6 */	mtctr r12
/* 802492DC  4E 80 04 21 */	bctrl 
/* 802492E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802492E4  83 C1 00 08 */	lwz r30, 8(r1)
/* 802492E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802492EC  7C 08 03 A6 */	mtlr r0
/* 802492F0  38 21 00 10 */	addi r1, r1, 0x10
/* 802492F4  4E 80 00 20 */	blr 
