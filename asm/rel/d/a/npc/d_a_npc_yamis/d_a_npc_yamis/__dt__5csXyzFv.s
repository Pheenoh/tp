lbl_80B48828:
/* 80B48828  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80B4882C  7C 08 02 A6 */	mflr r0
/* 80B48830  90 01 00 14 */	stw r0, 0x14(r1)
/* 80B48834  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80B48838  7C 7F 1B 79 */	or. r31, r3, r3
/* 80B4883C  41 82 00 10 */	beq lbl_80B4884C
/* 80B48840  7C 80 07 35 */	extsh. r0, r4
/* 80B48844  40 81 00 08 */	ble lbl_80B4884C
/* 80B48848  4B 78 64 F5 */	bl __dl__FPv
lbl_80B4884C:
/* 80B4884C  7F E3 FB 78 */	mr r3, r31
/* 80B48850  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80B48854  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80B48858  7C 08 03 A6 */	mtlr r0
/* 80B4885C  38 21 00 10 */	addi r1, r1, 0x10
/* 80B48860  4E 80 00 20 */	blr 
