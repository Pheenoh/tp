lbl_800AD3A8:
/* 800AD3A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800AD3AC  7C 08 02 A6 */	mflr r0
/* 800AD3B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 800AD3B4  FC 60 10 90 */	fmr f3, f2
/* 800AD3B8  38 A0 00 02 */	li r5, 2
/* 800AD3BC  C0 42 92 C0 */	lfs f2, lit_6108(r2)
/* 800AD3C0  38 C0 FF FF */	li r6, -1
/* 800AD3C4  48 00 00 15 */	bl setUpperAnime__9daAlink_cFUsQ29daAlink_c13daAlink_UPPERffsf
/* 800AD3C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800AD3CC  7C 08 03 A6 */	mtlr r0
/* 800AD3D0  38 21 00 10 */	addi r1, r1, 0x10
/* 800AD3D4  4E 80 00 20 */	blr 
