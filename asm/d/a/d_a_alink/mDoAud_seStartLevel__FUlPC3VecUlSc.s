lbl_8014113C:
/* 8014113C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80141140  7C 08 02 A6 */	mflr r0
/* 80141144  90 01 00 14 */	stw r0, 0x14(r1)
/* 80141148  7C 88 23 78 */	mr r8, r4
/* 8014114C  7C A0 2B 78 */	mr r0, r5
/* 80141150  7C C7 33 78 */	mr r7, r6
/* 80141154  90 61 00 08 */	stw r3, 8(r1)
/* 80141158  80 6D 8D E8 */	lwz r3, mAudioMgrPtr__10Z2AudioMgr(r13)
/* 8014115C  38 81 00 08 */	addi r4, r1, 8
/* 80141160  7D 05 43 78 */	mr r5, r8
/* 80141164  7C 06 03 78 */	mr r6, r0
/* 80141168  C0 22 92 B8 */	lfs f1, lit_6040(r2)
/* 8014116C  FC 40 08 90 */	fmr f2, f1
/* 80141170  C0 62 92 BC */	lfs f3, lit_6041(r2)
/* 80141174  FC 80 18 90 */	fmr f4, f3
/* 80141178  39 00 00 00 */	li r8, 0
/* 8014117C  48 16 B3 91 */	bl seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc
/* 80141180  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80141184  7C 08 03 A6 */	mtlr r0
/* 80141188  38 21 00 10 */	addi r1, r1, 0x10
/* 8014118C  4E 80 00 20 */	blr 
