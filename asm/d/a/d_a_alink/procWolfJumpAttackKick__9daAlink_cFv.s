lbl_8013A8A0:
/* 8013A8A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013A8A4  7C 08 02 A6 */	mflr r0
/* 8013A8A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013A8AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013A8B0  7C 7F 1B 78 */	mr r31, r3
/* 8013A8B4  38 7F 1F D0 */	addi r3, r31, 0x1fd0
/* 8013A8B8  48 02 3C 15 */	bl checkAnmEnd__16daPy_frameCtrl_cFv
/* 8013A8BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013A8C0  41 82 00 24 */	beq lbl_8013A8E4
/* 8013A8C4  7F E3 FB 78 */	mr r3, r31
/* 8013A8C8  38 80 00 02 */	li r4, 2
/* 8013A8CC  4B FF 3A CD */	bl procWolfBackJumpInit__9daAlink_cFi
/* 8013A8D0  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 8013A8D4  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 8013A8D8  80 03 5F 1C */	lwz r0, 0x5f1c(r3)
/* 8013A8DC  64 00 00 20 */	oris r0, r0, 0x20
/* 8013A8E0  90 03 5F 1C */	stw r0, 0x5f1c(r3)
lbl_8013A8E4:
/* 8013A8E4  38 60 00 01 */	li r3, 1
/* 8013A8E8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013A8EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013A8F0  7C 08 03 A6 */	mtlr r0
/* 8013A8F4  38 21 00 10 */	addi r1, r1, 0x10
/* 8013A8F8  4E 80 00 20 */	blr 
