lbl_80B2FDB0:
/* 80B2FDB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80B2FDB4  7C 08 02 A6 */	mflr r0
/* 80B2FDB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80B2FDBC  38 80 FF FF */	li r4, -1
/* 80B2FDC0  81 83 0B 44 */	lwz r12, 0xb44(r3)
/* 80B2FDC4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80B2FDC8  7D 89 03 A6 */	mtctr r12
/* 80B2FDCC  4E 80 04 21 */	bctrl 
/* 80B2FDD0  38 60 00 01 */	li r3, 1
/* 80B2FDD4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80B2FDD8  7C 08 03 A6 */	mtlr r0
/* 80B2FDDC  38 21 00 10 */	addi r1, r1, 0x10
/* 80B2FDE0  4E 80 00 20 */	blr 
