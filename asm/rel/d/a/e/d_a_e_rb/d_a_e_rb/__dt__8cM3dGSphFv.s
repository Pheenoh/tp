lbl_80764624:
/* 80764624  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80764628  7C 08 02 A6 */	mflr r0
/* 8076462C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80764630  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80764634  7C 7F 1B 79 */	or. r31, r3, r3
/* 80764638  41 82 00 1C */	beq lbl_80764654
/* 8076463C  3C A0 80 76 */	lis r5, __vt__8cM3dGSph@ha /* 0x80764EF4@ha */
/* 80764640  38 05 4E F4 */	addi r0, r5, __vt__8cM3dGSph@l /* 0x80764EF4@l */
/* 80764644  90 1F 00 10 */	stw r0, 0x10(r31)
/* 80764648  7C 80 07 35 */	extsh. r0, r4
/* 8076464C  40 81 00 08 */	ble lbl_80764654
/* 80764650  4B B6 A6 ED */	bl __dl__FPv
lbl_80764654:
/* 80764654  7F E3 FB 78 */	mr r3, r31
/* 80764658  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8076465C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80764660  7C 08 03 A6 */	mtlr r0
/* 80764664  38 21 00 10 */	addi r1, r1, 0x10
/* 80764668  4E 80 00 20 */	blr 
