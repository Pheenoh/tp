lbl_80BBB5A4:
/* 80BBB5A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80BBB5A8  7C 08 02 A6 */	mflr r0
/* 80BBB5AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80BBB5B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80BBB5B4  7C 7F 1B 79 */	or. r31, r3, r3
/* 80BBB5B8  41 82 00 1C */	beq lbl_80BBB5D4
/* 80BBB5BC  3C A0 80 BC */	lis r5, __vt__8cM3dGCyl@ha /* 0x80BBC63C@ha */
/* 80BBB5C0  38 05 C6 3C */	addi r0, r5, __vt__8cM3dGCyl@l /* 0x80BBC63C@l */
/* 80BBB5C4  90 1F 00 14 */	stw r0, 0x14(r31)
/* 80BBB5C8  7C 80 07 35 */	extsh. r0, r4
/* 80BBB5CC  40 81 00 08 */	ble lbl_80BBB5D4
/* 80BBB5D0  4B 71 37 6D */	bl __dl__FPv
lbl_80BBB5D4:
/* 80BBB5D4  7F E3 FB 78 */	mr r3, r31
/* 80BBB5D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80BBB5DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80BBB5E0  7C 08 03 A6 */	mtlr r0
/* 80BBB5E4  38 21 00 10 */	addi r1, r1, 0x10
/* 80BBB5E8  4E 80 00 20 */	blr 
