lbl_80550398:
/* 80550398  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8055039C  7C 08 02 A6 */	mflr r0
/* 805503A0  90 01 00 34 */	stw r0, 0x34(r1)
/* 805503A4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 805503A8  7C 7F 1B 78 */	mr r31, r3
/* 805503AC  3C 80 80 55 */	lis r4, lit_4635@ha /* 0x80553CD4@ha */
/* 805503B0  38 A4 3C D4 */	addi r5, r4, lit_4635@l /* 0x80553CD4@l */
/* 805503B4  80 85 00 00 */	lwz r4, 0(r5)
/* 805503B8  80 05 00 04 */	lwz r0, 4(r5)
/* 805503BC  90 81 00 14 */	stw r4, 0x14(r1)
/* 805503C0  90 01 00 18 */	stw r0, 0x18(r1)
/* 805503C4  80 05 00 08 */	lwz r0, 8(r5)
/* 805503C8  90 01 00 1C */	stw r0, 0x1c(r1)
/* 805503CC  38 81 00 14 */	addi r4, r1, 0x14
/* 805503D0  48 00 09 75 */	bl chkAction__12daNpc_Kkri_cFM12daNpc_Kkri_cFPCvPvPv_i
/* 805503D4  2C 03 00 00 */	cmpwi r3, 0
/* 805503D8  41 82 00 1C */	beq lbl_805503F4
/* 805503DC  7F E3 FB 78 */	mr r3, r31
/* 805503E0  38 80 00 00 */	li r4, 0
/* 805503E4  39 9F 0F 98 */	addi r12, r31, 0xf98
/* 805503E8  4B E1 1C 9D */	bl __ptmf_scall
/* 805503EC  60 00 00 00 */	nop 
/* 805503F0  48 00 00 30 */	b lbl_80550420
lbl_805503F4:
/* 805503F4  3C 60 80 55 */	lis r3, lit_4640@ha /* 0x80553CE0@ha */
/* 805503F8  38 83 3C E0 */	addi r4, r3, lit_4640@l /* 0x80553CE0@l */
/* 805503FC  80 64 00 00 */	lwz r3, 0(r4)
/* 80550400  80 04 00 04 */	lwz r0, 4(r4)
/* 80550404  90 61 00 08 */	stw r3, 8(r1)
/* 80550408  90 01 00 0C */	stw r0, 0xc(r1)
/* 8055040C  80 04 00 08 */	lwz r0, 8(r4)
/* 80550410  90 01 00 10 */	stw r0, 0x10(r1)
/* 80550414  7F E3 FB 78 */	mr r3, r31
/* 80550418  38 81 00 08 */	addi r4, r1, 8
/* 8055041C  48 00 09 55 */	bl setAction__12daNpc_Kkri_cFM12daNpc_Kkri_cFPCvPvPv_i
lbl_80550420:
/* 80550420  38 60 00 01 */	li r3, 1
/* 80550424  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80550428  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8055042C  7C 08 03 A6 */	mtlr r0
/* 80550430  38 21 00 30 */	addi r1, r1, 0x30
/* 80550434  4E 80 00 20 */	blr 
