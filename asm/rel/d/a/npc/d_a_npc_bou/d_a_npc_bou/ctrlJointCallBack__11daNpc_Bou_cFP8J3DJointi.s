lbl_8096D8C0:
/* 8096D8C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8096D8C4  7C 08 02 A6 */	mflr r0
/* 8096D8C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8096D8CC  7C 60 1B 78 */	mr r0, r3
/* 8096D8D0  2C 04 00 00 */	cmpwi r4, 0
/* 8096D8D4  40 82 00 30 */	bne lbl_8096D904
/* 8096D8D8  3C 60 80 43 */	lis r3, j3dSys@ha /* 0x80434AC8@ha */
/* 8096D8DC  38 63 4A C8 */	addi r3, r3, j3dSys@l /* 0x80434AC8@l */
/* 8096D8E0  80 A3 00 38 */	lwz r5, 0x38(r3)
/* 8096D8E4  80 65 00 14 */	lwz r3, 0x14(r5)
/* 8096D8E8  28 03 00 00 */	cmplwi r3, 0
/* 8096D8EC  41 82 00 18 */	beq lbl_8096D904
/* 8096D8F0  7C 04 03 78 */	mr r4, r0
/* 8096D8F4  81 83 0E 3C */	lwz r12, 0xe3c(r3)
/* 8096D8F8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8096D8FC  7D 89 03 A6 */	mtctr r12
/* 8096D900  4E 80 04 21 */	bctrl 
lbl_8096D904:
/* 8096D904  38 60 00 01 */	li r3, 1
/* 8096D908  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8096D90C  7C 08 03 A6 */	mtlr r0
/* 8096D910  38 21 00 10 */	addi r1, r1, 0x10
/* 8096D914  4E 80 00 20 */	blr 
