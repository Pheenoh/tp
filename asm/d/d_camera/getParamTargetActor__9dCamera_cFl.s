lbl_80164878:
/* 80164878  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016487C  7C 08 02 A6 */	mflr r0
/* 80164880  90 01 00 14 */	stw r0, 0x14(r1)
/* 80164884  3C A0 80 40 */	lis r5, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80164888  38 C5 61 C0 */	addi r6, r5, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 8016488C  80 E6 5D B4 */	lwz r7, 0x5db4(r6)
/* 80164890  80 03 06 84 */	lwz r0, 0x684(r3)
/* 80164894  1C 64 00 44 */	mulli r3, r4, 0x44
/* 80164898  38 63 00 10 */	addi r3, r3, 0x10
/* 8016489C  7C 60 1A 14 */	add r3, r0, r3
/* 801648A0  80 A3 00 00 */	lwz r5, 0(r3)
/* 801648A4  3C 80 40 43 */	lis r4, 0x4043 /* 0x40435059@ha */
/* 801648A8  38 04 50 59 */	addi r0, r4, 0x5059 /* 0x40435059@l */
/* 801648AC  7C 05 00 00 */	cmpw r5, r0
/* 801648B0  41 82 00 70 */	beq lbl_80164920
/* 801648B4  40 80 00 28 */	bge lbl_801648DC
/* 801648B8  38 04 48 4B */	addi r0, r4, 0x484b
/* 801648BC  7C 05 00 00 */	cmpw r5, r0
/* 801648C0  41 82 00 50 */	beq lbl_80164910
/* 801648C4  40 80 00 68 */	bge lbl_8016492C
/* 801648C8  3C 80 40 41 */	lis r4, 0x4041 /* 0x40414354@ha */
/* 801648CC  38 04 43 54 */	addi r0, r4, 0x4354 /* 0x40414354@l */
/* 801648D0  7C 05 00 00 */	cmpw r5, r0
/* 801648D4  41 82 00 2C */	beq lbl_80164900
/* 801648D8  48 00 00 54 */	b lbl_8016492C
lbl_801648DC:
/* 801648DC  3C 80 40 4C */	lis r4, 0x404C /* 0x404C4F43@ha */
/* 801648E0  38 04 4F 43 */	addi r0, r4, 0x4F43 /* 0x404C4F43@l */
/* 801648E4  7C 05 00 00 */	cmpw r5, r0
/* 801648E8  41 82 00 08 */	beq lbl_801648F0
/* 801648EC  48 00 00 40 */	b lbl_8016492C
lbl_801648F0:
/* 801648F0  38 66 56 B8 */	addi r3, r6, 0x56b8
/* 801648F4  38 80 00 00 */	li r4, 0
/* 801648F8  4B F0 EC 45 */	bl LockonTarget__12dAttention_cFl
/* 801648FC  48 00 00 38 */	b lbl_80164934
lbl_80164900:
/* 80164900  38 66 56 B8 */	addi r3, r6, 0x56b8
/* 80164904  38 80 00 00 */	li r4, 0
/* 80164908  4B F0 EE 2D */	bl ActionTarget__12dAttention_cFl
/* 8016490C  48 00 00 28 */	b lbl_80164934
lbl_80164910:
/* 80164910  38 66 56 B8 */	addi r3, r6, 0x56b8
/* 80164914  38 80 00 00 */	li r4, 0
/* 80164918  4B F0 EE 75 */	bl CheckObjectTarget__12dAttention_cFl
/* 8016491C  48 00 00 18 */	b lbl_80164934
lbl_80164920:
/* 80164920  7C E3 3B 78 */	mr r3, r7
/* 80164924  4B F7 CA 6D */	bl getCopyRodCameraActor__9daAlink_cFv
/* 80164928  48 00 00 0C */	b lbl_80164934
lbl_8016492C:
/* 8016492C  38 80 FF FF */	li r4, -1
/* 80164930  4B EB 8E 71 */	bl fopAcM_searchFromName4Event__FPCcs
lbl_80164934:
/* 80164934  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80164938  7C 08 03 A6 */	mtlr r0
/* 8016493C  38 21 00 10 */	addi r1, r1, 0x10
/* 80164940  4E 80 00 20 */	blr 
