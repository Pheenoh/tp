lbl_80963500:
/* 80963500  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80963504  7C 08 02 A6 */	mflr r0
/* 80963508  90 01 00 14 */	stw r0, 0x14(r1)
/* 8096350C  7C 60 1B 78 */	mr r0, r3
/* 80963510  2C 04 00 00 */	cmpwi r4, 0
/* 80963514  40 82 00 30 */	bne lbl_80963544
/* 80963518  3C 60 80 43 */	lis r3, j3dSys@ha /* 0x80434AC8@ha */
/* 8096351C  38 63 4A C8 */	addi r3, r3, j3dSys@l /* 0x80434AC8@l */
/* 80963520  80 A3 00 38 */	lwz r5, 0x38(r3)
/* 80963524  80 65 00 14 */	lwz r3, 0x14(r5)
/* 80963528  28 03 00 00 */	cmplwi r3, 0
/* 8096352C  41 82 00 18 */	beq lbl_80963544
/* 80963530  7C 04 03 78 */	mr r4, r0
/* 80963534  81 83 0E 3C */	lwz r12, 0xe3c(r3)
/* 80963538  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8096353C  7D 89 03 A6 */	mtctr r12
/* 80963540  4E 80 04 21 */	bctrl 
lbl_80963544:
/* 80963544  38 60 00 01 */	li r3, 1
/* 80963548  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8096354C  7C 08 03 A6 */	mtlr r0
/* 80963550  38 21 00 10 */	addi r1, r1, 0x10
/* 80963554  4E 80 00 20 */	blr 
