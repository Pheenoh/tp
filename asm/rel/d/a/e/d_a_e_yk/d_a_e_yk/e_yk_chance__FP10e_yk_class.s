lbl_80806308:
/* 80806308  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8080630C  7C 08 02 A6 */	mflr r0
/* 80806310  90 01 00 24 */	stw r0, 0x24(r1)
/* 80806314  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80806318  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8080631C  7C 7F 1B 78 */	mr r31, r3
/* 80806320  3C 80 80 80 */	lis r4, lit_3941@ha /* 0x80807C9C@ha */
/* 80806324  3B C4 7C 9C */	addi r30, r4, lit_3941@l /* 0x80807C9C@l */
/* 80806328  A8 03 06 70 */	lha r0, 0x670(r3)
/* 8080632C  2C 00 00 01 */	cmpwi r0, 1
/* 80806330  41 82 00 8C */	beq lbl_808063BC
/* 80806334  40 80 01 6C */	bge lbl_808064A0
/* 80806338  2C 00 00 00 */	cmpwi r0, 0
/* 8080633C  40 80 00 08 */	bge lbl_80806344
/* 80806340  48 00 01 60 */	b lbl_808064A0
lbl_80806344:
/* 80806344  38 80 00 08 */	li r4, 8
/* 80806348  C0 3E 00 70 */	lfs f1, 0x70(r30)
/* 8080634C  38 A0 00 02 */	li r5, 2
/* 80806350  C0 5E 00 8C */	lfs f2, 0x8c(r30)
/* 80806354  4B FF E6 91 */	bl anm_init__FP10e_yk_classifUcf
/* 80806358  38 00 00 01 */	li r0, 1
/* 8080635C  B0 1F 06 70 */	sth r0, 0x670(r31)
/* 80806360  C0 3E 00 74 */	lfs f1, 0x74(r30)
/* 80806364  4B A6 15 F1 */	bl cM_rndF__Ff
/* 80806368  C0 1E 00 00 */	lfs f0, 0(r30)
/* 8080636C  EC 00 08 2A */	fadds f0, f0, f1
/* 80806370  FC 00 00 1E */	fctiwz f0, f0
/* 80806374  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80806378  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8080637C  B0 1F 06 A2 */	sth r0, 0x6a2(r31)
/* 80806380  C0 1E 00 04 */	lfs f0, 4(r30)
/* 80806384  D0 1F 04 F8 */	stfs f0, 0x4f8(r31)
/* 80806388  D0 1F 04 FC */	stfs f0, 0x4fc(r31)
/* 8080638C  D0 1F 05 00 */	stfs f0, 0x500(r31)
/* 80806390  3C 60 00 07 */	lis r3, 0x0007 /* 0x000701CB@ha */
/* 80806394  38 03 01 CB */	addi r0, r3, 0x01CB /* 0x000701CB@l */
/* 80806398  90 01 00 0C */	stw r0, 0xc(r1)
/* 8080639C  38 7F 05 C4 */	addi r3, r31, 0x5c4
/* 808063A0  38 81 00 0C */	addi r4, r1, 0xc
/* 808063A4  38 A0 FF FF */	li r5, -1
/* 808063A8  81 9F 05 C4 */	lwz r12, 0x5c4(r31)
/* 808063AC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 808063B0  7D 89 03 A6 */	mtctr r12
/* 808063B4  4E 80 04 21 */	bctrl 
/* 808063B8  48 00 00 E8 */	b lbl_808064A0
lbl_808063BC:
/* 808063BC  80 1F 07 34 */	lwz r0, 0x734(r31)
/* 808063C0  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 808063C4  41 82 00 B8 */	beq lbl_8080647C
/* 808063C8  C0 3E 00 48 */	lfs f1, 0x48(r30)
/* 808063CC  4B A6 15 89 */	bl cM_rndF__Ff
/* 808063D0  C0 5E 00 48 */	lfs f2, 0x48(r30)
/* 808063D4  EC 02 08 2A */	fadds f0, f2, f1
/* 808063D8  D0 1F 04 FC */	stfs f0, 0x4fc(r31)
/* 808063DC  FC 20 10 90 */	fmr f1, f2
/* 808063E0  4B A6 15 AD */	bl cM_rndFX__Ff
/* 808063E4  D0 3F 04 F8 */	stfs f1, 0x4f8(r31)
/* 808063E8  C0 3E 00 48 */	lfs f1, 0x48(r30)
/* 808063EC  4B A6 15 A1 */	bl cM_rndFX__Ff
/* 808063F0  D0 3F 05 00 */	stfs f1, 0x500(r31)
/* 808063F4  C0 3E 00 08 */	lfs f1, 8(r30)
/* 808063F8  4B A6 15 5D */	bl cM_rndF__Ff
/* 808063FC  C0 1E 00 64 */	lfs f0, 0x64(r30)
/* 80806400  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80806404  40 80 00 10 */	bge lbl_80806414
/* 80806408  38 00 00 00 */	li r0, 0
/* 8080640C  B0 1F 06 9E */	sth r0, 0x69e(r31)
/* 80806410  48 00 00 0C */	b lbl_8080641C
lbl_80806414:
/* 80806414  38 00 80 00 */	li r0, -32768
/* 80806418  B0 1F 06 9E */	sth r0, 0x69e(r31)
lbl_8080641C:
/* 8080641C  C0 3E 00 90 */	lfs f1, 0x90(r30)
/* 80806420  4B A6 15 35 */	bl cM_rndF__Ff
/* 80806424  FC 00 08 1E */	fctiwz f0, f1
/* 80806428  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8080642C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80806430  B0 1F 06 9C */	sth r0, 0x69c(r31)
/* 80806434  38 7F 0A 78 */	addi r3, r31, 0xa78
/* 80806438  38 9F 0A 7C */	addi r4, r31, 0xa7c
/* 8080643C  38 BF 04 D0 */	addi r5, r31, 0x4d0
/* 80806440  38 DF 04 E4 */	addi r6, r31, 0x4e4
/* 80806444  C0 3E 00 94 */	lfs f1, 0x94(r30)
/* 80806448  38 FF 01 0C */	addi r7, r31, 0x10c
/* 8080644C  39 00 00 01 */	li r8, 1
/* 80806450  4B 81 6B D1 */	bl fopAcM_effSmokeSet1__FPUlPUlPC4cXyzPC5csXyzfPC12dKy_tevstr_ci
/* 80806454  3C 60 00 07 */	lis r3, 0x0007 /* 0x00070207@ha */
/* 80806458  38 03 02 07 */	addi r0, r3, 0x0207 /* 0x00070207@l */
/* 8080645C  90 01 00 08 */	stw r0, 8(r1)
/* 80806460  38 7F 05 C4 */	addi r3, r31, 0x5c4
/* 80806464  38 81 00 08 */	addi r4, r1, 8
/* 80806468  38 A0 FF FF */	li r5, -1
/* 8080646C  81 9F 05 C4 */	lwz r12, 0x5c4(r31)
/* 80806470  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80806474  7D 89 03 A6 */	mtctr r12
/* 80806478  4E 80 04 21 */	bctrl 
lbl_8080647C:
/* 8080647C  A8 1F 06 A2 */	lha r0, 0x6a2(r31)
/* 80806480  2C 00 00 00 */	cmpwi r0, 0
/* 80806484  40 82 00 1C */	bne lbl_808064A0
/* 80806488  38 60 00 00 */	li r3, 0
/* 8080648C  B0 7F 04 E0 */	sth r3, 0x4e0(r31)
/* 80806490  38 00 00 02 */	li r0, 2
/* 80806494  B0 1F 06 6E */	sth r0, 0x66e(r31)
/* 80806498  B0 7F 06 70 */	sth r3, 0x670(r31)
/* 8080649C  48 00 00 4C */	b lbl_808064E8
lbl_808064A0:
/* 808064A0  38 7F 04 D0 */	addi r3, r31, 0x4d0
/* 808064A4  38 9F 04 F8 */	addi r4, r31, 0x4f8
/* 808064A8  7C 65 1B 78 */	mr r5, r3
/* 808064AC  4B B4 0B E5 */	bl PSVECAdd
/* 808064B0  C0 3F 04 FC */	lfs f1, 0x4fc(r31)
/* 808064B4  C0 1E 00 70 */	lfs f0, 0x70(r30)
/* 808064B8  EC 01 00 28 */	fsubs f0, f1, f0
/* 808064BC  D0 1F 04 FC */	stfs f0, 0x4fc(r31)
/* 808064C0  38 7F 04 DE */	addi r3, r31, 0x4de
/* 808064C4  A8 9F 06 9C */	lha r4, 0x69c(r31)
/* 808064C8  38 A0 00 02 */	li r5, 2
/* 808064CC  38 C0 10 00 */	li r6, 0x1000
/* 808064D0  4B A6 A1 39 */	bl cLib_addCalcAngleS2__FPssss
/* 808064D4  38 7F 04 E0 */	addi r3, r31, 0x4e0
/* 808064D8  A8 9F 06 9E */	lha r4, 0x69e(r31)
/* 808064DC  38 A0 00 02 */	li r5, 2
/* 808064E0  38 C0 10 00 */	li r6, 0x1000
/* 808064E4  4B A6 A1 25 */	bl cLib_addCalcAngleS2__FPssss
lbl_808064E8:
/* 808064E8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 808064EC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 808064F0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 808064F4  7C 08 03 A6 */	mtlr r0
/* 808064F8  38 21 00 20 */	addi r1, r1, 0x20
/* 808064FC  4E 80 00 20 */	blr 
