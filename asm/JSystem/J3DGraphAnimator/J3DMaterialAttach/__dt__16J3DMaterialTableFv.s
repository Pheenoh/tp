lbl_8032F604:
/* 8032F604  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8032F608  7C 08 02 A6 */	mflr r0
/* 8032F60C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8032F610  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8032F614  7C 7F 1B 79 */	or. r31, r3, r3
/* 8032F618  41 82 00 1C */	beq lbl_8032F634
/* 8032F61C  3C A0 80 3D */	lis r5, __vt__16J3DMaterialTable@ha /* 0x803CEE80@ha */
/* 8032F620  38 05 EE 80 */	addi r0, r5, __vt__16J3DMaterialTable@l /* 0x803CEE80@l */
/* 8032F624  90 1F 00 00 */	stw r0, 0(r31)
/* 8032F628  7C 80 07 35 */	extsh. r0, r4
/* 8032F62C  40 81 00 08 */	ble lbl_8032F634
/* 8032F630  4B F9 F7 0D */	bl __dl__FPv
lbl_8032F634:
/* 8032F634  7F E3 FB 78 */	mr r3, r31
/* 8032F638  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8032F63C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8032F640  7C 08 03 A6 */	mtlr r0
/* 8032F644  38 21 00 10 */	addi r1, r1, 0x10
/* 8032F648  4E 80 00 20 */	blr 
