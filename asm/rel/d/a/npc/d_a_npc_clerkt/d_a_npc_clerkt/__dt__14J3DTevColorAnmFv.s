lbl_8099A804:
/* 8099A804  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8099A808  7C 08 02 A6 */	mflr r0
/* 8099A80C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8099A810  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8099A814  7C 7F 1B 79 */	or. r31, r3, r3
/* 8099A818  41 82 00 10 */	beq lbl_8099A828
/* 8099A81C  7C 80 07 35 */	extsh. r0, r4
/* 8099A820  40 81 00 08 */	ble lbl_8099A828
/* 8099A824  4B 93 45 19 */	bl __dl__FPv
lbl_8099A828:
/* 8099A828  7F E3 FB 78 */	mr r3, r31
/* 8099A82C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8099A830  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8099A834  7C 08 03 A6 */	mtlr r0
/* 8099A838  38 21 00 10 */	addi r1, r1, 0x10
/* 8099A83C  4E 80 00 20 */	blr 
