lbl_802A9048:
/* 802A9048  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A904C  7C 08 02 A6 */	mflr r0
/* 802A9050  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A9054  7C 83 23 78 */	mr r3, r4
/* 802A9058  48 02 5C E5 */	bl __dl__FPv
/* 802A905C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A9060  7C 08 03 A6 */	mtlr r0
/* 802A9064  38 21 00 10 */	addi r1, r1, 0x10
/* 802A9068  4E 80 00 20 */	blr 
