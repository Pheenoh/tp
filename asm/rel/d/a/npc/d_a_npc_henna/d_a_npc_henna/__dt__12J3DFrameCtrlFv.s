lbl_805496DC:
/* 805496DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 805496E0  7C 08 02 A6 */	mflr r0
/* 805496E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 805496E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 805496EC  7C 7F 1B 79 */	or. r31, r3, r3
/* 805496F0  41 82 00 1C */	beq lbl_8054970C
/* 805496F4  3C A0 80 55 */	lis r5, __vt__12J3DFrameCtrl@ha /* 0x8054AF50@ha */
/* 805496F8  38 05 AF 50 */	addi r0, r5, __vt__12J3DFrameCtrl@l /* 0x8054AF50@l */
/* 805496FC  90 1F 00 00 */	stw r0, 0(r31)
/* 80549700  7C 80 07 35 */	extsh. r0, r4
/* 80549704  40 81 00 08 */	ble lbl_8054970C
/* 80549708  4B D8 56 35 */	bl __dl__FPv
lbl_8054970C:
/* 8054970C  7F E3 FB 78 */	mr r3, r31
/* 80549710  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80549714  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80549718  7C 08 03 A6 */	mtlr r0
/* 8054971C  38 21 00 10 */	addi r1, r1, 0x10
/* 80549720  4E 80 00 20 */	blr 