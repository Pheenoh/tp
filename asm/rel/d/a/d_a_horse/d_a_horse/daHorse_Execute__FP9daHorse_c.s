lbl_80844570:
/* 80844570  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80844574  7C 08 02 A6 */	mflr r0
/* 80844578  90 01 00 14 */	stw r0, 0x14(r1)
/* 8084457C  4B FF F6 F9 */	bl execute__9daHorse_cFv
/* 80844580  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80844584  7C 08 03 A6 */	mtlr r0
/* 80844588  38 21 00 10 */	addi r1, r1, 0x10
/* 8084458C  4E 80 00 20 */	blr 
