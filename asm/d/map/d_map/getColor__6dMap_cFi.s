lbl_80028DF4:
/* 80028DF4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80028DF8  7C 08 02 A6 */	mflr r0
/* 80028DFC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80028E00  39 61 00 20 */	addi r11, r1, 0x20
/* 80028E04  48 33 93 D9 */	bl _savegpr_29
/* 80028E08  7C 9D 23 78 */	mr r29, r4
/* 80028E0C  3C 80 80 38 */	lis r4, l_iconSize@ha /* 0x80378E48@ha */
/* 80028E10  3B E4 8E 48 */	addi r31, r4, l_iconSize@l /* 0x80378E48@l */
/* 80028E14  3B DF 00 44 */	addi r30, r31, 0x44
/* 80028E18  88 03 00 8E */	lbz r0, 0x8e(r3)
/* 80028E1C  28 00 00 02 */	cmplwi r0, 2
/* 80028E20  40 82 00 78 */	bne lbl_80028E98
/* 80028E24  88 03 00 8F */	lbz r0, 0x8f(r3)
/* 80028E28  28 00 00 00 */	cmplwi r0, 0
/* 80028E2C  41 82 00 6C */	beq lbl_80028E98
/* 80028E30  28 00 00 06 */	cmplwi r0, 6
/* 80028E34  40 80 00 64 */	bge lbl_80028E98
/* 80028E38  80 03 00 2C */	lwz r0, 0x2c(r3)
/* 80028E3C  80 83 00 88 */	lwz r4, 0x88(r3)
/* 80028E40  7C 00 20 00 */	cmpw r0, r4
/* 80028E44  40 82 00 2C */	bne lbl_80028E70
/* 80028E48  80 A3 00 24 */	lwz r5, 0x24(r3)
/* 80028E4C  7C 05 20 00 */	cmpw r5, r4
/* 80028E50  40 82 00 0C */	bne lbl_80028E5C
/* 80028E54  3B DF 00 8C */	addi r30, r31, 0x8c
/* 80028E58  48 00 00 6C */	b lbl_80028EC4
lbl_80028E5C:
/* 80028E5C  80 03 00 84 */	lwz r0, 0x84(r3)
/* 80028E60  7C 05 00 00 */	cmpw r5, r0
/* 80028E64  40 82 00 60 */	bne lbl_80028EC4
/* 80028E68  3B DF 00 68 */	addi r30, r31, 0x68
/* 80028E6C  48 00 00 58 */	b lbl_80028EC4
lbl_80028E70:
/* 80028E70  80 A3 00 24 */	lwz r5, 0x24(r3)
/* 80028E74  7C 05 20 00 */	cmpw r5, r4
/* 80028E78  40 82 00 0C */	bne lbl_80028E84
/* 80028E7C  3B DF 00 68 */	addi r30, r31, 0x68
/* 80028E80  48 00 00 44 */	b lbl_80028EC4
lbl_80028E84:
/* 80028E84  80 03 00 84 */	lwz r0, 0x84(r3)
/* 80028E88  7C 05 00 00 */	cmpw r5, r0
/* 80028E8C  40 82 00 38 */	bne lbl_80028EC4
/* 80028E90  3B DF 00 8C */	addi r30, r31, 0x8c
/* 80028E94  48 00 00 30 */	b lbl_80028EC4
lbl_80028E98:
/* 80028E98  80 83 00 24 */	lwz r4, 0x24(r3)
/* 80028E9C  80 03 00 2C */	lwz r0, 0x2c(r3)
/* 80028EA0  7C 04 00 00 */	cmpw r4, r0
/* 80028EA4  40 82 00 0C */	bne lbl_80028EB0
/* 80028EA8  3B DF 00 8C */	addi r30, r31, 0x8c
/* 80028EAC  48 00 00 18 */	b lbl_80028EC4
lbl_80028EB0:
/* 80028EB0  7C 83 23 78 */	mr r3, r4
/* 80028EB4  48 01 5E 5D */	bl isVisitedRoom__10dMapInfo_nFi
/* 80028EB8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80028EBC  41 82 00 08 */	beq lbl_80028EC4
/* 80028EC0  3B DF 00 68 */	addi r30, r31, 0x68
lbl_80028EC4:
/* 80028EC4  57 A0 10 3A */	slwi r0, r29, 2
/* 80028EC8  7C 7E 02 14 */	add r3, r30, r0
/* 80028ECC  39 61 00 20 */	addi r11, r1, 0x20
/* 80028ED0  48 33 93 59 */	bl _restgpr_29
/* 80028ED4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80028ED8  7C 08 03 A6 */	mtlr r0
/* 80028EDC  38 21 00 20 */	addi r1, r1, 0x20
/* 80028EE0  4E 80 00 20 */	blr 