lbl_80030D80:
/* 80030D80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80030D84  7C 08 02 A6 */	mflr r0
/* 80030D88  90 01 00 14 */	stw r0, 0x14(r1)
/* 80030D8C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80030D90  7C 7F 1B 78 */	mr r31, r3
/* 80030D94  48 00 3C F1 */	bl init__13dSv_memory2_cFv
/* 80030D98  7F E3 FB 78 */	mr r3, r31
/* 80030D9C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80030DA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80030DA4  7C 08 03 A6 */	mtlr r0
/* 80030DA8  38 21 00 10 */	addi r1, r1, 0x10
/* 80030DAC  4E 80 00 20 */	blr 
