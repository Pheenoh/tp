lbl_80764780:
/* 80764780  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80764784  7C 08 02 A6 */	mflr r0
/* 80764788  90 01 00 14 */	stw r0, 0x14(r1)
/* 8076478C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80764790  93 C1 00 08 */	stw r30, 8(r1)
/* 80764794  7C 7E 1B 79 */	or. r30, r3, r3
/* 80764798  7C 9F 23 78 */	mr r31, r4
/* 8076479C  41 82 00 38 */	beq lbl_807647D4
/* 807647A0  3C 60 80 76 */	lis r3, __vt__12dBgS_AcchCir@ha /* 0x80764ED0@ha */
/* 807647A4  38 03 4E D0 */	addi r0, r3, __vt__12dBgS_AcchCir@l /* 0x80764ED0@l */
/* 807647A8  90 1E 00 0C */	stw r0, 0xc(r30)
/* 807647AC  38 7E 00 14 */	addi r3, r30, 0x14
/* 807647B0  38 80 FF FF */	li r4, -1
/* 807647B4  4B B0 A7 65 */	bl __dt__8cM3dGCirFv
/* 807647B8  7F C3 F3 78 */	mr r3, r30
/* 807647BC  38 80 00 00 */	li r4, 0
/* 807647C0  4B B0 38 F1 */	bl __dt__13cBgS_PolyInfoFv
/* 807647C4  7F E0 07 35 */	extsh. r0, r31
/* 807647C8  40 81 00 0C */	ble lbl_807647D4
/* 807647CC  7F C3 F3 78 */	mr r3, r30
/* 807647D0  4B B6 A5 6D */	bl __dl__FPv
lbl_807647D4:
/* 807647D4  7F C3 F3 78 */	mr r3, r30
/* 807647D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 807647DC  83 C1 00 08 */	lwz r30, 8(r1)
/* 807647E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 807647E4  7C 08 03 A6 */	mtlr r0
/* 807647E8  38 21 00 10 */	addi r1, r1, 0x10
/* 807647EC  4E 80 00 20 */	blr 