lbl_801924A0:
/* 801924A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801924A4  7C 08 02 A6 */	mflr r0
/* 801924A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801924AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801924B0  93 C1 00 08 */	stw r30, 8(r1)
/* 801924B4  7C 7E 1B 79 */	or. r30, r3, r3
/* 801924B8  7C 9F 23 78 */	mr r31, r4
/* 801924BC  41 82 00 98 */	beq lbl_80192554
/* 801924C0  3C 60 80 3C */	lis r3, __vt__12dFile_info_c@ha /* 0x803BB598@ha */
/* 801924C4  38 03 B5 98 */	addi r0, r3, __vt__12dFile_info_c@l /* 0x803BB598@l */
/* 801924C8  90 1E 00 00 */	stw r0, 0(r30)
/* 801924CC  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 801924D0  28 03 00 00 */	cmplwi r3, 0
/* 801924D4  41 82 00 18 */	beq lbl_801924EC
/* 801924D8  38 80 00 01 */	li r4, 1
/* 801924DC  81 83 00 00 */	lwz r12, 0(r3)
/* 801924E0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801924E4  7D 89 03 A6 */	mtctr r12
/* 801924E8  4E 80 04 21 */	bctrl 
lbl_801924EC:
/* 801924EC  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 801924F0  28 03 00 00 */	cmplwi r3, 0
/* 801924F4  41 82 00 18 */	beq lbl_8019250C
/* 801924F8  38 80 00 01 */	li r4, 1
/* 801924FC  81 83 00 00 */	lwz r12, 0(r3)
/* 80192500  81 8C 00 08 */	lwz r12, 8(r12)
/* 80192504  7D 89 03 A6 */	mtctr r12
/* 80192508  4E 80 04 21 */	bctrl 
lbl_8019250C:
/* 8019250C  80 7E 00 28 */	lwz r3, 0x28(r30)
/* 80192510  28 03 00 00 */	cmplwi r3, 0
/* 80192514  41 82 00 18 */	beq lbl_8019252C
/* 80192518  38 80 00 01 */	li r4, 1
/* 8019251C  81 83 00 00 */	lwz r12, 0(r3)
/* 80192520  81 8C 00 08 */	lwz r12, 8(r12)
/* 80192524  7D 89 03 A6 */	mtctr r12
/* 80192528  4E 80 04 21 */	bctrl 
lbl_8019252C:
/* 8019252C  4B E8 25 01 */	bl mDoExt_removeMesgFont__Fv
/* 80192530  34 1E 00 08 */	addic. r0, r30, 8
/* 80192534  41 82 00 10 */	beq lbl_80192544
/* 80192538  3C 60 80 3C */	lis r3, __vt__16dDlst_FileInfo_c@ha /* 0x803BB588@ha */
/* 8019253C  38 03 B5 88 */	addi r0, r3, __vt__16dDlst_FileInfo_c@l /* 0x803BB588@l */
/* 80192540  90 1E 00 08 */	stw r0, 8(r30)
lbl_80192544:
/* 80192544  7F E0 07 35 */	extsh. r0, r31
/* 80192548  40 81 00 0C */	ble lbl_80192554
/* 8019254C  7F C3 F3 78 */	mr r3, r30
/* 80192550  48 13 C7 ED */	bl __dl__FPv
lbl_80192554:
/* 80192554  7F C3 F3 78 */	mr r3, r30
/* 80192558  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8019255C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80192560  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80192564  7C 08 03 A6 */	mtlr r0
/* 80192568  38 21 00 10 */	addi r1, r1, 0x10
/* 8019256C  4E 80 00 20 */	blr 
