lbl_80725304:
/* 80725304  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80725308  7C 08 02 A6 */	mflr r0
/* 8072530C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80725310  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80725314  93 C1 00 08 */	stw r30, 8(r1)
/* 80725318  7C 7E 1B 79 */	or. r30, r3, r3
/* 8072531C  7C 9F 23 78 */	mr r31, r4
/* 80725320  41 82 00 38 */	beq lbl_80725358
/* 80725324  3C 80 80 72 */	lis r4, __vt__12dBgS_ObjAcch@ha /* 0x80725A78@ha */
/* 80725328  38 84 5A 78 */	addi r4, r4, __vt__12dBgS_ObjAcch@l /* 0x80725A78@l */
/* 8072532C  90 9E 00 10 */	stw r4, 0x10(r30)
/* 80725330  38 04 00 0C */	addi r0, r4, 0xc
/* 80725334  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80725338  38 04 00 18 */	addi r0, r4, 0x18
/* 8072533C  90 1E 00 24 */	stw r0, 0x24(r30)
/* 80725340  38 80 00 00 */	li r4, 0
/* 80725344  4B 95 0C 51 */	bl __dt__9dBgS_AcchFv
/* 80725348  7F E0 07 35 */	extsh. r0, r31
/* 8072534C  40 81 00 0C */	ble lbl_80725358
/* 80725350  7F C3 F3 78 */	mr r3, r30
/* 80725354  4B BA 99 E9 */	bl __dl__FPv
lbl_80725358:
/* 80725358  7F C3 F3 78 */	mr r3, r30
/* 8072535C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80725360  83 C1 00 08 */	lwz r30, 8(r1)
/* 80725364  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80725368  7C 08 03 A6 */	mtlr r0
/* 8072536C  38 21 00 10 */	addi r1, r1, 0x10
/* 80725370  4E 80 00 20 */	blr 
