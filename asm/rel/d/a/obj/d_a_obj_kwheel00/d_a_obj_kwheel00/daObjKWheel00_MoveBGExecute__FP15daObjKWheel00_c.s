lbl_80C4E5F0:
/* 80C4E5F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C4E5F4  7C 08 02 A6 */	mflr r0
/* 80C4E5F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C4E5FC  4B 42 A3 55 */	bl MoveBGExecute__16dBgS_MoveBgActorFv
/* 80C4E600  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C4E604  7C 08 03 A6 */	mtlr r0
/* 80C4E608  38 21 00 10 */	addi r1, r1, 0x10
/* 80C4E60C  4E 80 00 20 */	blr 
