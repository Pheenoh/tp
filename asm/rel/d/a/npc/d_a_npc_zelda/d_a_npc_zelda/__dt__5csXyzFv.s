lbl_80B77224:
/* 80B77224  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80B77228  7C 08 02 A6 */	mflr r0
/* 80B7722C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80B77230  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80B77234  7C 7F 1B 79 */	or. r31, r3, r3
/* 80B77238  41 82 00 10 */	beq lbl_80B77248
/* 80B7723C  7C 80 07 35 */	extsh. r0, r4
/* 80B77240  40 81 00 08 */	ble lbl_80B77248
/* 80B77244  4B 75 7A F9 */	bl __dl__FPv
lbl_80B77248:
/* 80B77248  7F E3 FB 78 */	mr r3, r31
/* 80B7724C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80B77250  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80B77254  7C 08 03 A6 */	mtlr r0
/* 80B77258  38 21 00 10 */	addi r1, r1, 0x10
/* 80B7725C  4E 80 00 20 */	blr 
