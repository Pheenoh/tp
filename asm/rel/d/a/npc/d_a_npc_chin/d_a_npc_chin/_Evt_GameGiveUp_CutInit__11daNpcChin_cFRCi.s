lbl_80990854:
/* 80990854  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80990858  7C 08 02 A6 */	mflr r0
/* 8099085C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80990860  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80990864  7C 7F 1B 78 */	mr r31, r3
/* 80990868  80 04 00 00 */	lwz r0, 0(r4)
/* 8099086C  2C 00 00 14 */	cmpwi r0, 0x14
/* 80990870  41 82 00 78 */	beq lbl_809908E8
/* 80990874  40 80 00 C4 */	bge lbl_80990938
/* 80990878  2C 00 00 0A */	cmpwi r0, 0xa
/* 8099087C  41 82 00 08 */	beq lbl_80990884
/* 80990880  48 00 00 B8 */	b lbl_80990938
lbl_80990884:
/* 80990884  38 80 00 00 */	li r4, 0
/* 80990888  3C A0 80 99 */	lis r5, lit_4627@ha /* 0x809919A4@ha */
/* 8099088C  C0 25 19 A4 */	lfs f1, lit_4627@l(r5)  /* 0x809919A4@l */
/* 80990890  38 A0 00 00 */	li r5, 0
/* 80990894  81 83 0B 44 */	lwz r12, 0xb44(r3)
/* 80990898  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8099089C  7D 89 03 A6 */	mtctr r12
/* 809908A0  4E 80 04 21 */	bctrl 
/* 809908A4  7F E3 FB 78 */	mr r3, r31
/* 809908A8  38 80 00 0E */	li r4, 0xe
/* 809908AC  3C A0 80 99 */	lis r5, lit_4627@ha /* 0x809919A4@ha */
/* 809908B0  C0 25 19 A4 */	lfs f1, lit_4627@l(r5)  /* 0x809919A4@l */
/* 809908B4  81 9F 0B 44 */	lwz r12, 0xb44(r31)
/* 809908B8  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 809908BC  7D 89 03 A6 */	mtctr r12
/* 809908C0  4E 80 04 21 */	bctrl 
/* 809908C4  7F E3 FB 78 */	mr r3, r31
/* 809908C8  3C 80 80 40 */	lis r4, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 809908CC  38 84 61 C0 */	addi r4, r4, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 809908D0  80 84 5D AC */	lwz r4, 0x5dac(r4)
/* 809908D4  4B 68 9E 3D */	bl fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c
/* 809908D8  7C 64 1B 78 */	mr r4, r3
/* 809908DC  7F E3 FB 78 */	mr r3, r31
/* 809908E0  4B 7C 39 71 */	bl setAngle__8daNpcF_cFs
/* 809908E4  48 00 00 54 */	b lbl_80990938
lbl_809908E8:
/* 809908E8  38 00 04 3E */	li r0, 0x43e
/* 809908EC  B0 1F 0E 00 */	sth r0, 0xe00(r31)
/* 809908F0  38 00 00 00 */	li r0, 0
/* 809908F4  90 1F 09 50 */	stw r0, 0x950(r31)
/* 809908F8  A8 9F 0E 00 */	lha r4, 0xe00(r31)
/* 809908FC  38 A0 00 00 */	li r5, 0
/* 80990900  4B 7C 34 1D */	bl initTalk__8daNpcF_cFiPP10fopAc_ac_c
/* 80990904  38 00 00 00 */	li r0, 0
/* 80990908  98 1F 0E 06 */	stb r0, 0xe06(r31)
/* 8099090C  7F E3 FB 78 */	mr r3, r31
/* 80990910  38 80 00 00 */	li r4, 0
/* 80990914  3C A0 80 99 */	lis r5, lit_4627@ha /* 0x809919A4@ha */
/* 80990918  C0 25 19 A4 */	lfs f1, lit_4627@l(r5)  /* 0x809919A4@l */
/* 8099091C  81 9F 0B 44 */	lwz r12, 0xb44(r31)
/* 80990920  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 80990924  7D 89 03 A6 */	mtctr r12
/* 80990928  4E 80 04 21 */	bctrl 
/* 8099092C  7F E3 FB 78 */	mr r3, r31
/* 80990930  38 80 00 03 */	li r4, 3
/* 80990934  4B FF DD 39 */	bl setLookMode__11daNpcChin_cFi
lbl_80990938:
/* 80990938  38 60 00 01 */	li r3, 1
/* 8099093C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80990940  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80990944  7C 08 03 A6 */	mtlr r0
/* 80990948  38 21 00 10 */	addi r1, r1, 0x10
/* 8099094C  4E 80 00 20 */	blr 
