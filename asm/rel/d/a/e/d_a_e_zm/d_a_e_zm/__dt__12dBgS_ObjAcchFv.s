lbl_808326B4:
/* 808326B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 808326B8  7C 08 02 A6 */	mflr r0
/* 808326BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 808326C0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 808326C4  93 C1 00 08 */	stw r30, 8(r1)
/* 808326C8  7C 7E 1B 79 */	or. r30, r3, r3
/* 808326CC  7C 9F 23 78 */	mr r31, r4
/* 808326D0  41 82 00 38 */	beq lbl_80832708
/* 808326D4  3C 80 80 83 */	lis r4, __vt__12dBgS_ObjAcch@ha /* 0x80832F48@ha */
/* 808326D8  38 84 2F 48 */	addi r4, r4, __vt__12dBgS_ObjAcch@l /* 0x80832F48@l */
/* 808326DC  90 9E 00 10 */	stw r4, 0x10(r30)
/* 808326E0  38 04 00 0C */	addi r0, r4, 0xc
/* 808326E4  90 1E 00 14 */	stw r0, 0x14(r30)
/* 808326E8  38 04 00 18 */	addi r0, r4, 0x18
/* 808326EC  90 1E 00 24 */	stw r0, 0x24(r30)
/* 808326F0  38 80 00 00 */	li r4, 0
/* 808326F4  4B 84 38 A1 */	bl __dt__9dBgS_AcchFv
/* 808326F8  7F E0 07 35 */	extsh. r0, r31
/* 808326FC  40 81 00 0C */	ble lbl_80832708
/* 80832700  7F C3 F3 78 */	mr r3, r30
/* 80832704  4B A9 C6 39 */	bl __dl__FPv
lbl_80832708:
/* 80832708  7F C3 F3 78 */	mr r3, r30
/* 8083270C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80832710  83 C1 00 08 */	lwz r30, 8(r1)
/* 80832714  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80832718  7C 08 03 A6 */	mtlr r0
/* 8083271C  38 21 00 10 */	addi r1, r1, 0x10
/* 80832720  4E 80 00 20 */	blr 
