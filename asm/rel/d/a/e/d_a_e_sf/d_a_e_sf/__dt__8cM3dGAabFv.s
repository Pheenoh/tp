lbl_80789460:
/* 80789460  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80789464  7C 08 02 A6 */	mflr r0
/* 80789468  90 01 00 14 */	stw r0, 0x14(r1)
/* 8078946C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80789470  7C 7F 1B 79 */	or. r31, r3, r3
/* 80789474  41 82 00 1C */	beq lbl_80789490
/* 80789478  3C A0 80 79 */	lis r5, __vt__8cM3dGAab@ha /* 0x80789FEC@ha */
/* 8078947C  38 05 9F EC */	addi r0, r5, __vt__8cM3dGAab@l /* 0x80789FEC@l */
/* 80789480  90 1F 00 18 */	stw r0, 0x18(r31)
/* 80789484  7C 80 07 35 */	extsh. r0, r4
/* 80789488  40 81 00 08 */	ble lbl_80789490
/* 8078948C  4B B4 58 B1 */	bl __dl__FPv
lbl_80789490:
/* 80789490  7F E3 FB 78 */	mr r3, r31
/* 80789494  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80789498  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8078949C  7C 08 03 A6 */	mtlr r0
/* 807894A0  38 21 00 10 */	addi r1, r1, 0x10
/* 807894A4  4E 80 00 20 */	blr 
