lbl_80C73BD0:
/* 80C73BD0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C73BD4  7C 08 02 A6 */	mflr r0
/* 80C73BD8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C73BDC  4B 40 4D 01 */	bl MoveBGDelete__16dBgS_MoveBgActorFv
/* 80C73BE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C73BE4  7C 08 03 A6 */	mtlr r0
/* 80C73BE8  38 21 00 10 */	addi r1, r1, 0x10
/* 80C73BEC  4E 80 00 20 */	blr 
