lbl_8057BD9C:
/* 8057BD9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8057BDA0  7C 08 02 A6 */	mflr r0
/* 8057BDA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8057BDA8  81 83 05 9C */	lwz r12, 0x59c(r3)
/* 8057BDAC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8057BDB0  7D 89 03 A6 */	mtctr r12
/* 8057BDB4  4E 80 04 21 */	bctrl 
/* 8057BDB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8057BDBC  7C 08 03 A6 */	mtlr r0
/* 8057BDC0  38 21 00 10 */	addi r1, r1, 0x10
/* 8057BDC4  4E 80 00 20 */	blr 
