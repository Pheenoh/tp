lbl_804E2238:
/* 804E2238  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804E223C  7C 08 02 A6 */	mflr r0
/* 804E2240  90 01 00 14 */	stw r0, 0x14(r1)
/* 804E2244  48 00 00 15 */	bl CreateHeap__11daBdoorL1_cFv
/* 804E2248  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804E224C  7C 08 03 A6 */	mtlr r0
/* 804E2250  38 21 00 10 */	addi r1, r1, 0x10
/* 804E2254  4E 80 00 20 */	blr 
