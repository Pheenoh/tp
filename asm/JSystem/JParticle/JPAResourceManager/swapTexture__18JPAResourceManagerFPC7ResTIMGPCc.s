lbl_80273EEC:
/* 80273EEC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80273EF0  7C 08 02 A6 */	mflr r0
/* 80273EF4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80273EF8  39 61 00 20 */	addi r11, r1, 0x20
/* 80273EFC  48 0E E2 D5 */	bl _savegpr_26
/* 80273F00  7C 7A 1B 78 */	mr r26, r3
/* 80273F04  7C 9B 23 78 */	mr r27, r4
/* 80273F08  7C BC 2B 78 */	mr r28, r5
/* 80273F0C  3B C0 00 00 */	li r30, 0
/* 80273F10  3B A0 00 00 */	li r29, 0
/* 80273F14  3B E0 00 00 */	li r31, 0
/* 80273F18  48 00 00 4C */	b lbl_80273F64
lbl_80273F1C:
/* 80273F1C  80 7A 00 08 */	lwz r3, 8(r26)
/* 80273F20  7C 63 F8 2E */	lwzx r3, r3, r31
/* 80273F24  80 63 00 44 */	lwz r3, 0x44(r3)
/* 80273F28  38 83 00 0C */	addi r4, r3, 0xc
/* 80273F2C  7F 83 E3 78 */	mr r3, r28
/* 80273F30  48 0F 4A 65 */	bl strcmp
/* 80273F34  2C 03 00 00 */	cmpwi r3, 0
/* 80273F38  40 82 00 24 */	bne lbl_80273F5C
/* 80273F3C  80 7A 00 08 */	lwz r3, 8(r26)
/* 80273F40  7C 63 F8 2E */	lwzx r3, r3, r31
/* 80273F44  38 63 00 04 */	addi r3, r3, 4
/* 80273F48  83 C3 00 20 */	lwz r30, 0x20(r3)
/* 80273F4C  7F 64 DB 78 */	mr r4, r27
/* 80273F50  38 A0 00 00 */	li r5, 0
/* 80273F54  48 06 A3 55 */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 80273F58  48 00 00 18 */	b lbl_80273F70
lbl_80273F5C:
/* 80273F5C  3B BD 00 01 */	addi r29, r29, 1
/* 80273F60  3B FF 00 04 */	addi r31, r31, 4
lbl_80273F64:
/* 80273F64  A0 1A 00 12 */	lhz r0, 0x12(r26)
/* 80273F68  7C 1D 00 00 */	cmpw r29, r0
/* 80273F6C  41 80 FF B0 */	blt lbl_80273F1C
lbl_80273F70:
/* 80273F70  7F C3 F3 78 */	mr r3, r30
/* 80273F74  39 61 00 20 */	addi r11, r1, 0x20
/* 80273F78  48 0E E2 A5 */	bl _restgpr_26
/* 80273F7C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80273F80  7C 08 03 A6 */	mtlr r0
/* 80273F84  38 21 00 20 */	addi r1, r1, 0x20
/* 80273F88  4E 80 00 20 */	blr 
