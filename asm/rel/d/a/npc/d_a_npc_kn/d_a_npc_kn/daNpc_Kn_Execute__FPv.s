lbl_80A38490:
/* 80A38490  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80A38494  7C 08 02 A6 */	mflr r0
/* 80A38498  90 01 00 14 */	stw r0, 0x14(r1)
/* 80A3849C  4B FF 31 B9 */	bl Execute__10daNpc_Kn_cFv
/* 80A384A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80A384A4  7C 08 03 A6 */	mtlr r0
/* 80A384A8  38 21 00 10 */	addi r1, r1, 0x10
/* 80A384AC  4E 80 00 20 */	blr 
