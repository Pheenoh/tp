lbl_809714F4:
/* 809714F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809714F8  7C 08 02 A6 */	mflr r0
/* 809714FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80971500  7C 66 1B 78 */	mr r6, r3
/* 80971504  7C 85 23 78 */	mr r5, r4
/* 80971508  80 63 00 08 */	lwz r3, 8(r3)
/* 8097150C  A0 86 00 04 */	lhz r4, 4(r6)
/* 80971510  4B 9B 9A 41 */	bl getTexNo__16J3DAnmTexPatternCFUsPUs
/* 80971514  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80971518  7C 08 03 A6 */	mtlr r0
/* 8097151C  38 21 00 10 */	addi r1, r1, 0x10
/* 80971520  4E 80 00 20 */	blr 
