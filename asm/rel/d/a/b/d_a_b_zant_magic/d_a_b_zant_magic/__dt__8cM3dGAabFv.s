lbl_80650298:
/* 80650298  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8065029C  7C 08 02 A6 */	mflr r0
/* 806502A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 806502A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 806502A8  7C 7F 1B 79 */	or. r31, r3, r3
/* 806502AC  41 82 00 1C */	beq lbl_806502C8
/* 806502B0  3C A0 80 65 */	lis r5, __vt__8cM3dGAab@ha /* 0x80650664@ha */
/* 806502B4  38 05 06 64 */	addi r0, r5, __vt__8cM3dGAab@l /* 0x80650664@l */
/* 806502B8  90 1F 00 18 */	stw r0, 0x18(r31)
/* 806502BC  7C 80 07 35 */	extsh. r0, r4
/* 806502C0  40 81 00 08 */	ble lbl_806502C8
/* 806502C4  4B C7 EA 79 */	bl __dl__FPv
lbl_806502C8:
/* 806502C8  7F E3 FB 78 */	mr r3, r31
/* 806502CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 806502D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 806502D4  7C 08 03 A6 */	mtlr r0
/* 806502D8  38 21 00 10 */	addi r1, r1, 0x10
/* 806502DC  4E 80 00 20 */	blr 
