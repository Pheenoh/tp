lbl_80797510:
/* 80797510  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80797514  7C 08 02 A6 */	mflr r0
/* 80797518  90 01 00 14 */	stw r0, 0x14(r1)
/* 8079751C  4B FF AD F1 */	bl Draw__8daE_SM_cFv
/* 80797520  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80797524  7C 08 03 A6 */	mtlr r0
/* 80797528  38 21 00 10 */	addi r1, r1, 0x10
/* 8079752C  4E 80 00 20 */	blr 
