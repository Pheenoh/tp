lbl_80038518:
/* 80038518  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8003851C  7C 08 02 A6 */	mflr r0
/* 80038520  90 01 00 54 */	stw r0, 0x54(r1)
/* 80038524  39 61 00 50 */	addi r11, r1, 0x50
/* 80038528  48 32 9C 95 */	bl _savegpr_21
/* 8003852C  7C 77 1B 78 */	mr r23, r3
/* 80038530  7C 95 23 78 */	mr r21, r4
/* 80038534  7C B8 2B 78 */	mr r24, r5
/* 80038538  7C D9 33 78 */	mr r25, r6
/* 8003853C  7C FA 3B 78 */	mr r26, r7
/* 80038540  7D 1B 43 78 */	mr r27, r8
/* 80038544  7D 3C 4B 78 */	mr r28, r9
/* 80038548  7D 5D 53 78 */	mr r29, r10
/* 8003854C  80 6D 88 A0 */	lwz r3, m_object__7dDemo_c(r13)
/* 80038550  88 97 04 98 */	lbz r4, 0x498(r23)
/* 80038554  48 00 0B 35 */	bl getActor__14dDemo_object_cFUc
/* 80038558  7C 7F 1B 79 */	or. r31, r3, r3
/* 8003855C  40 82 00 0C */	bne lbl_80038568
/* 80038560  38 60 00 00 */	li r3, 0
/* 80038564  48 00 02 2C */	b lbl_80038790
lbl_80038568:
/* 80038568  A0 7F 00 04 */	lhz r3, 4(r31)
/* 8003856C  56 A0 06 3E */	clrlwi r0, r21, 0x18
/* 80038570  7C 60 00 38 */	and r0, r3, r0
/* 80038574  54 1E 06 3E */	clrlwi r30, r0, 0x18
/* 80038578  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8003857C  41 82 00 34 */	beq lbl_800385B0
/* 80038580  C0 1F 00 08 */	lfs f0, 8(r31)
/* 80038584  D0 17 04 D0 */	stfs f0, 0x4d0(r23)
/* 80038588  C0 1F 00 0C */	lfs f0, 0xc(r31)
/* 8003858C  D0 17 04 D4 */	stfs f0, 0x4d4(r23)
/* 80038590  C0 1F 00 10 */	lfs f0, 0x10(r31)
/* 80038594  D0 17 04 D8 */	stfs f0, 0x4d8(r23)
/* 80038598  C0 17 04 D0 */	lfs f0, 0x4d0(r23)
/* 8003859C  D0 17 04 BC */	stfs f0, 0x4bc(r23)
/* 800385A0  C0 17 04 D4 */	lfs f0, 0x4d4(r23)
/* 800385A4  D0 17 04 C0 */	stfs f0, 0x4c0(r23)
/* 800385A8  C0 17 04 D8 */	lfs f0, 0x4d8(r23)
/* 800385AC  D0 17 04 C4 */	stfs f0, 0x4c4(r23)
lbl_800385B0:
/* 800385B0  57 C0 07 39 */	rlwinm. r0, r30, 0, 0x1c, 0x1c
/* 800385B4  41 82 00 1C */	beq lbl_800385D0
/* 800385B8  A8 1F 00 20 */	lha r0, 0x20(r31)
/* 800385BC  B0 17 04 E4 */	sth r0, 0x4e4(r23)
/* 800385C0  A8 1F 00 22 */	lha r0, 0x22(r31)
/* 800385C4  B0 17 04 E6 */	sth r0, 0x4e6(r23)
/* 800385C8  A8 1F 00 24 */	lha r0, 0x24(r31)
/* 800385CC  B0 17 04 E8 */	sth r0, 0x4e8(r23)
lbl_800385D0:
/* 800385D0  57 C0 07 7B */	rlwinm. r0, r30, 0, 0x1d, 0x1d
/* 800385D4  41 82 00 1C */	beq lbl_800385F0
/* 800385D8  C0 1F 00 14 */	lfs f0, 0x14(r31)
/* 800385DC  D0 17 04 EC */	stfs f0, 0x4ec(r23)
/* 800385E0  C0 1F 00 18 */	lfs f0, 0x18(r31)
/* 800385E4  D0 17 04 F0 */	stfs f0, 0x4f0(r23)
/* 800385E8  C0 1F 00 1C */	lfs f0, 0x1c(r31)
/* 800385EC  D0 17 04 F4 */	stfs f0, 0x4f4(r23)
lbl_800385F0:
/* 800385F0  57 C0 06 31 */	rlwinm. r0, r30, 0, 0x18, 0x18
/* 800385F4  41 82 00 10 */	beq lbl_80038604
/* 800385F8  7F E3 FB 78 */	mr r3, r31
/* 800385FC  4B FF FB A1 */	bl getPrm_Morf__13dDemo_actor_cFv
/* 80038600  D0 37 05 30 */	stfs f1, 0x530(r23)
lbl_80038604:
/* 80038604  28 18 00 00 */	cmplwi r24, 0
/* 80038608  40 82 00 0C */	bne lbl_80038614
/* 8003860C  38 60 00 01 */	li r3, 1
/* 80038610  48 00 01 80 */	b lbl_80038790
lbl_80038614:
/* 80038614  80 18 00 04 */	lwz r0, 4(r24)
/* 80038618  90 1F 00 48 */	stw r0, 0x48(r31)
/* 8003861C  57 C0 06 B5 */	rlwinm. r0, r30, 0, 0x1a, 0x1a
/* 80038620  41 82 00 C0 */	beq lbl_800386E0
/* 80038624  80 9F 00 2C */	lwz r4, 0x2c(r31)
/* 80038628  80 1F 00 5C */	lwz r0, 0x5c(r31)
/* 8003862C  7C 04 00 40 */	cmplw r4, r0
/* 80038630  41 82 00 B0 */	beq lbl_800386E0
/* 80038634  54 80 03 DF */	rlwinm. r0, r4, 0, 0xf, 0xf
/* 80038638  41 82 00 14 */	beq lbl_8003864C
/* 8003863C  3C 60 80 40 */	lis r3, mDemoArcName__20dStage_roomControl_c@ha /* 0x80406194@ha */
/* 80038640  38 03 61 94 */	addi r0, r3, mDemoArcName__20dStage_roomControl_c@l /* 0x80406194@l */
/* 80038644  7C 15 03 78 */	mr r21, r0
/* 80038648  48 00 00 08 */	b lbl_80038650
lbl_8003864C:
/* 8003864C  7F 35 CB 78 */	mr r21, r25
lbl_80038650:
/* 80038650  90 9F 00 5C */	stw r4, 0x5c(r31)
/* 80038654  7E A3 AB 78 */	mr r3, r21
/* 80038658  54 96 04 3E */	clrlwi r22, r4, 0x10
/* 8003865C  7E C4 B3 78 */	mr r4, r22
/* 80038660  3C A0 80 40 */	lis r5, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80038664  38 A5 61 C0 */	addi r5, r5, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80038668  3C A5 00 02 */	addis r5, r5, 2
/* 8003866C  38 C0 00 80 */	li r6, 0x80
/* 80038670  38 A5 C2 F8 */	addi r5, r5, -15624
/* 80038674  48 00 3D 8D */	bl getIDRes__14dRes_control_cFPCcUsP11dRes_info_ci
/* 80038678  7C 79 1B 78 */	mr r25, r3
/* 8003867C  7E A3 AB 78 */	mr r3, r21
/* 80038680  7E C4 B3 78 */	mr r4, r22
/* 80038684  7F 45 D3 78 */	mr r5, r26
/* 80038688  7F 66 DB 78 */	mr r6, r27
/* 8003868C  4B FF FE 05 */	bl dDemo_getJaiPointer__FPCcUliPUs
/* 80038690  7C 76 1B 78 */	mr r22, r3
/* 80038694  7F E3 FB 78 */	mr r3, r31
/* 80038698  4B FF FB 05 */	bl getPrm_Morf__13dDemo_actor_cFv
/* 8003869C  7F 03 C3 78 */	mr r3, r24
/* 800386A0  7F 24 CB 78 */	mr r4, r25
/* 800386A4  38 A0 FF FF */	li r5, -1
/* 800386A8  C0 42 83 B4 */	lfs f2, lit_4041(r2)
/* 800386AC  C0 62 83 B0 */	lfs f3, lit_4040(r2)
/* 800386B0  C0 82 83 C0 */	lfs f4, lit_4152(r2)
/* 800386B4  7E C6 B3 78 */	mr r6, r22
/* 800386B8  4B FD 7C C5 */	bl setAnm__14mDoExt_McaMorfFP15J3DAnmTransformiffffPv
/* 800386BC  A8 18 00 14 */	lha r0, 0x14(r24)
/* 800386C0  C8 22 83 B8 */	lfd f1, lit_4127(r2)
/* 800386C4  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 800386C8  90 01 00 0C */	stw r0, 0xc(r1)
/* 800386CC  3C 00 43 30 */	lis r0, 0x4330
/* 800386D0  90 01 00 08 */	stw r0, 8(r1)
/* 800386D4  C8 01 00 08 */	lfd f0, 8(r1)
/* 800386D8  EC 00 08 28 */	fsubs f0, f0, f1
/* 800386DC  D0 1F 00 38 */	stfs f0, 0x38(r31)
lbl_800386E0:
/* 800386E0  57 C0 06 73 */	rlwinm. r0, r30, 0, 0x19, 0x19
/* 800386E4  41 82 00 94 */	beq lbl_80038778
/* 800386E8  C0 3F 00 30 */	lfs f1, 0x30(r31)
/* 800386EC  C0 02 83 B4 */	lfs f0, lit_4041(r2)
/* 800386F0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800386F4  40 81 00 50 */	ble lbl_80038744
/* 800386F8  EC 01 00 28 */	fsubs f0, f1, f0
/* 800386FC  FC 00 00 1E */	fctiwz f0, f0
/* 80038700  D8 01 00 08 */	stfd f0, 8(r1)
/* 80038704  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80038708  7C 00 07 34 */	extsh r0, r0
/* 8003870C  C8 22 83 B8 */	lfd f1, lit_4127(r2)
/* 80038710  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80038714  90 01 00 14 */	stw r0, 0x14(r1)
/* 80038718  3C 00 43 30 */	lis r0, 0x4330
/* 8003871C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80038720  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80038724  EC 00 08 28 */	fsubs f0, f0, f1
/* 80038728  D0 18 00 1C */	stfs f0, 0x1c(r24)
/* 8003872C  7F 03 C3 78 */	mr r3, r24
/* 80038730  38 97 04 D0 */	addi r4, r23, 0x4d0
/* 80038734  7F 85 E3 78 */	mr r5, r28
/* 80038738  7F A6 EB 78 */	mr r6, r29
/* 8003873C  4B FD 7E 8D */	bl play__14mDoExt_McaMorfFP3VecUlSc
/* 80038740  48 00 00 4C */	b lbl_8003878C
lbl_80038744:
/* 80038744  FC 00 08 1E */	fctiwz f0, f1
/* 80038748  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8003874C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80038750  7C 00 07 34 */	extsh r0, r0
/* 80038754  C8 22 83 B8 */	lfd f1, lit_4127(r2)
/* 80038758  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8003875C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80038760  3C 00 43 30 */	lis r0, 0x4330
/* 80038764  90 01 00 08 */	stw r0, 8(r1)
/* 80038768  C8 01 00 08 */	lfd f0, 8(r1)
/* 8003876C  EC 00 08 28 */	fsubs f0, f0, f1
/* 80038770  D0 18 00 1C */	stfs f0, 0x1c(r24)
/* 80038774  48 00 00 18 */	b lbl_8003878C
lbl_80038778:
/* 80038778  7F 03 C3 78 */	mr r3, r24
/* 8003877C  38 97 04 D0 */	addi r4, r23, 0x4d0
/* 80038780  7F 85 E3 78 */	mr r5, r28
/* 80038784  7F A6 EB 78 */	mr r6, r29
/* 80038788  4B FD 7E 41 */	bl play__14mDoExt_McaMorfFP3VecUlSc
lbl_8003878C:
/* 8003878C  38 60 00 01 */	li r3, 1
lbl_80038790:
/* 80038790  39 61 00 50 */	addi r11, r1, 0x50
/* 80038794  48 32 9A 75 */	bl _restgpr_21
/* 80038798  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8003879C  7C 08 03 A6 */	mtlr r0
/* 800387A0  38 21 00 50 */	addi r1, r1, 0x50
/* 800387A4  4E 80 00 20 */	blr 
