lbl_80588078:
/* 80588078  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8058807C  7C 08 02 A6 */	mflr r0
/* 80588080  90 01 00 14 */	stw r0, 0x14(r1)
/* 80588084  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80588088  7C 7F 1B 79 */	or. r31, r3, r3
/* 8058808C  41 82 00 24 */	beq lbl_805880B0
/* 80588090  4B A9 0C 51 */	bl fopAc_IsActor__FPv
/* 80588094  2C 03 00 00 */	cmpwi r3, 0
/* 80588098  41 82 00 18 */	beq lbl_805880B0
/* 8058809C  A8 1F 00 0E */	lha r0, 0xe(r31)
/* 805880A0  2C 00 00 56 */	cmpwi r0, 0x56
/* 805880A4  40 82 00 0C */	bne lbl_805880B0
/* 805880A8  7F E3 FB 78 */	mr r3, r31
/* 805880AC  48 00 00 08 */	b lbl_805880B4
lbl_805880B0:
/* 805880B0  38 60 00 00 */	li r3, 0
lbl_805880B4:
/* 805880B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 805880B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 805880BC  7C 08 03 A6 */	mtlr r0
/* 805880C0  38 21 00 10 */	addi r1, r1, 0x10
/* 805880C4  4E 80 00 20 */	blr 
