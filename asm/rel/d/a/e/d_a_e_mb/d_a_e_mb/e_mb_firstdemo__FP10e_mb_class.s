lbl_8070723C:
/* 8070723C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80707240  7C 08 02 A6 */	mflr r0
/* 80707244  90 01 00 44 */	stw r0, 0x44(r1)
/* 80707248  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8070724C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80707250  7C 7E 1B 78 */	mr r30, r3
/* 80707254  3C 60 80 71 */	lis r3, lit_3764@ha /* 0x80708A10@ha */
/* 80707258  3B E3 8A 10 */	addi r31, r3, lit_3764@l /* 0x80708A10@l */
/* 8070725C  80 1E 04 A4 */	lwz r0, 0x4a4(r30)
/* 80707260  90 01 00 08 */	stw r0, 8(r1)
/* 80707264  3C 60 80 02 */	lis r3, fpcSch_JudgeByID__FPvPv@ha /* 0x80023590@ha */
/* 80707268  38 63 35 90 */	addi r3, r3, fpcSch_JudgeByID__FPvPv@l /* 0x80023590@l */
/* 8070726C  38 81 00 08 */	addi r4, r1, 8
/* 80707270  4B 91 25 89 */	bl fopAcIt_Judge__FPFPvPv_PvPv
/* 80707274  28 03 00 00 */	cmplwi r3, 0
/* 80707278  41 82 02 D0 */	beq lbl_80707548
/* 8070727C  38 61 00 18 */	addi r3, r1, 0x18
/* 80707280  38 9E 05 B8 */	addi r4, r30, 0x5b8
/* 80707284  38 BE 04 D0 */	addi r5, r30, 0x4d0
/* 80707288  4B B5 F8 AD */	bl __mi__4cXyzCFRC3Vec
/* 8070728C  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 80707290  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80707294  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80707298  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8070729C  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 807072A0  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 807072A4  A8 1E 05 B4 */	lha r0, 0x5b4(r30)
/* 807072A8  2C 00 00 03 */	cmpwi r0, 3
/* 807072AC  41 82 02 9C */	beq lbl_80707548
/* 807072B0  40 80 00 1C */	bge lbl_807072CC
/* 807072B4  2C 00 00 01 */	cmpwi r0, 1
/* 807072B8  41 82 00 8C */	beq lbl_80707344
/* 807072BC  40 80 00 BC */	bge lbl_80707378
/* 807072C0  2C 00 00 00 */	cmpwi r0, 0
/* 807072C4  40 80 00 18 */	bge lbl_807072DC
/* 807072C8  48 00 02 80 */	b lbl_80707548
lbl_807072CC:
/* 807072CC  2C 00 00 05 */	cmpwi r0, 5
/* 807072D0  41 82 01 CC */	beq lbl_8070749C
/* 807072D4  40 80 02 74 */	bge lbl_80707548
/* 807072D8  48 00 01 78 */	b lbl_80707450
lbl_807072DC:
/* 807072DC  7F C3 F3 78 */	mr r3, r30
/* 807072E0  38 80 00 08 */	li r4, 8
/* 807072E4  C0 3F 00 28 */	lfs f1, 0x28(r31)
/* 807072E8  38 A0 00 02 */	li r5, 2
/* 807072EC  C0 5F 00 00 */	lfs f2, 0(r31)
/* 807072F0  4B FF EE C5 */	bl anm_init__FP10e_mb_classifUcf
/* 807072F4  A8 7E 04 DE */	lha r3, 0x4de(r30)
/* 807072F8  3C 63 00 01 */	addis r3, r3, 1
/* 807072FC  38 03 80 00 */	addi r0, r3, -32768
/* 80707300  B0 1E 04 DE */	sth r0, 0x4de(r30)
/* 80707304  A8 7E 05 B4 */	lha r3, 0x5b4(r30)
/* 80707308  38 03 00 01 */	addi r0, r3, 1
/* 8070730C  B0 1E 05 B4 */	sth r0, 0x5b4(r30)
/* 80707310  38 00 00 1E */	li r0, 0x1e
/* 80707314  B0 1E 06 9C */	sth r0, 0x69c(r30)
/* 80707318  3C 60 00 05 */	lis r3, 0x0005 /* 0x0005002B@ha */
/* 8070731C  38 03 00 2B */	addi r0, r3, 0x002B /* 0x0005002B@l */
/* 80707320  90 01 00 14 */	stw r0, 0x14(r1)
/* 80707324  38 7E 05 E8 */	addi r3, r30, 0x5e8
/* 80707328  38 81 00 14 */	addi r4, r1, 0x14
/* 8070732C  38 A0 FF FF */	li r5, -1
/* 80707330  81 9E 05 E8 */	lwz r12, 0x5e8(r30)
/* 80707334  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80707338  7D 89 03 A6 */	mtctr r12
/* 8070733C  4E 80 04 21 */	bctrl 
/* 80707340  48 00 02 08 */	b lbl_80707548
lbl_80707344:
/* 80707344  A8 1E 06 9C */	lha r0, 0x69c(r30)
/* 80707348  2C 00 00 00 */	cmpwi r0, 0
/* 8070734C  40 82 01 FC */	bne lbl_80707548
/* 80707350  7F C3 F3 78 */	mr r3, r30
/* 80707354  38 80 00 09 */	li r4, 9
/* 80707358  C0 3F 00 28 */	lfs f1, 0x28(r31)
/* 8070735C  38 A0 00 00 */	li r5, 0
/* 80707360  C0 5F 00 00 */	lfs f2, 0(r31)
/* 80707364  4B FF EE 51 */	bl anm_init__FP10e_mb_classifUcf
/* 80707368  A8 7E 05 B4 */	lha r3, 0x5b4(r30)
/* 8070736C  38 03 00 01 */	addi r0, r3, 1
/* 80707370  B0 1E 05 B4 */	sth r0, 0x5b4(r30)
/* 80707374  48 00 01 D4 */	b lbl_80707548
lbl_80707378:
/* 80707378  80 7E 05 C8 */	lwz r3, 0x5c8(r30)
/* 8070737C  38 80 00 01 */	li r4, 1
/* 80707380  88 03 00 11 */	lbz r0, 0x11(r3)
/* 80707384  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80707388  40 82 00 18 */	bne lbl_807073A0
/* 8070738C  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 80707390  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80707394  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 80707398  41 82 00 08 */	beq lbl_807073A0
/* 8070739C  38 80 00 00 */	li r4, 0
lbl_807073A0:
/* 807073A0  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 807073A4  41 82 01 A4 */	beq lbl_80707548
/* 807073A8  7F C3 F3 78 */	mr r3, r30
/* 807073AC  38 80 00 07 */	li r4, 7
/* 807073B0  C0 3F 00 28 */	lfs f1, 0x28(r31)
/* 807073B4  38 A0 00 00 */	li r5, 0
/* 807073B8  C0 5F 00 00 */	lfs f2, 0(r31)
/* 807073BC  4B FF ED F9 */	bl anm_init__FP10e_mb_classifUcf
/* 807073C0  3C 60 80 71 */	lis r3, d_a_e_mb__stringBase0@ha /* 0x80708AE8@ha */
/* 807073C4  38 63 8A E8 */	addi r3, r3, d_a_e_mb__stringBase0@l /* 0x80708AE8@l */
/* 807073C8  38 80 00 14 */	li r4, 0x14
/* 807073CC  3C A0 80 40 */	lis r5, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 807073D0  38 A5 61 C0 */	addi r5, r5, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 807073D4  3C A5 00 02 */	addis r5, r5, 2
/* 807073D8  38 C0 00 80 */	li r6, 0x80
/* 807073DC  38 A5 C2 F8 */	addi r5, r5, -15624
/* 807073E0  4B 93 4F 0D */	bl getRes__14dRes_control_cFPCclP11dRes_info_ci
/* 807073E4  7C 64 1B 78 */	mr r4, r3
/* 807073E8  80 7E 06 94 */	lwz r3, 0x694(r30)
/* 807073EC  38 A0 00 00 */	li r5, 0
/* 807073F0  C0 3F 00 28 */	lfs f1, 0x28(r31)
/* 807073F4  C0 5F 00 00 */	lfs f2, 0(r31)
/* 807073F8  C0 7F 00 0C */	lfs f3, 0xc(r31)
/* 807073FC  C0 9F 00 14 */	lfs f4, 0x14(r31)
/* 80707400  38 C0 00 00 */	li r6, 0
/* 80707404  4B 90 8F 79 */	bl setAnm__14mDoExt_McaMorfFP15J3DAnmTransformiffffPv
/* 80707408  38 00 00 02 */	li r0, 2
/* 8070740C  98 1E 06 8C */	stb r0, 0x68c(r30)
/* 80707410  A8 7E 05 B4 */	lha r3, 0x5b4(r30)
/* 80707414  38 03 00 01 */	addi r0, r3, 1
/* 80707418  B0 1E 05 B4 */	sth r0, 0x5b4(r30)
/* 8070741C  38 00 00 78 */	li r0, 0x78
/* 80707420  B0 1E 06 9C */	sth r0, 0x69c(r30)
/* 80707424  3C 60 00 05 */	lis r3, 0x0005 /* 0x0005002C@ha */
/* 80707428  38 03 00 2C */	addi r0, r3, 0x002C /* 0x0005002C@l */
/* 8070742C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80707430  38 7E 05 E8 */	addi r3, r30, 0x5e8
/* 80707434  38 81 00 10 */	addi r4, r1, 0x10
/* 80707438  38 A0 FF FF */	li r5, -1
/* 8070743C  81 9E 05 E8 */	lwz r12, 0x5e8(r30)
/* 80707440  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80707444  7D 89 03 A6 */	mtctr r12
/* 80707448  4E 80 04 21 */	bctrl 
/* 8070744C  48 00 00 FC */	b lbl_80707548
lbl_80707450:
/* 80707450  3C 60 80 71 */	lis r3, R_pos2@ha /* 0x80708CC4@ha */
/* 80707454  C4 03 8C C4 */	lfsu f0, R_pos2@l(r3)  /* 0x80708CC4@l */
/* 80707458  D0 1E 05 B8 */	stfs f0, 0x5b8(r30)
/* 8070745C  C0 03 00 04 */	lfs f0, 4(r3)
/* 80707460  D0 1E 05 BC */	stfs f0, 0x5bc(r30)
/* 80707464  C0 03 00 08 */	lfs f0, 8(r3)
/* 80707468  D0 1E 05 C0 */	stfs f0, 0x5c0(r30)
/* 8070746C  38 00 00 01 */	li r0, 1
/* 80707470  98 1E 06 8C */	stb r0, 0x68c(r30)
/* 80707474  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 80707478  D0 3E 05 2C */	stfs f1, 0x52c(r30)
/* 8070747C  7F C3 F3 78 */	mr r3, r30
/* 80707480  38 80 00 06 */	li r4, 6
/* 80707484  38 A0 00 00 */	li r5, 0
/* 80707488  C0 5F 00 00 */	lfs f2, 0(r31)
/* 8070748C  4B FF ED 29 */	bl anm_init__FP10e_mb_classifUcf
/* 80707490  38 00 00 05 */	li r0, 5
/* 80707494  B0 1E 05 B4 */	sth r0, 0x5b4(r30)
/* 80707498  48 00 00 B0 */	b lbl_80707548
lbl_8070749C:
/* 8070749C  80 7E 05 C8 */	lwz r3, 0x5c8(r30)
/* 807074A0  38 80 00 01 */	li r4, 1
/* 807074A4  88 03 00 11 */	lbz r0, 0x11(r3)
/* 807074A8  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 807074AC  40 82 00 18 */	bne lbl_807074C4
/* 807074B0  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 807074B4  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 807074B8  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 807074BC  41 82 00 08 */	beq lbl_807074C4
/* 807074C0  38 80 00 00 */	li r4, 0
lbl_807074C4:
/* 807074C4  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 807074C8  41 82 00 80 */	beq lbl_80707548
/* 807074CC  38 00 00 02 */	li r0, 2
/* 807074D0  B0 1E 06 9A */	sth r0, 0x69a(r30)
/* 807074D4  7F C3 F3 78 */	mr r3, r30
/* 807074D8  38 80 00 11 */	li r4, 0x11
/* 807074DC  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 807074E0  38 A0 00 00 */	li r5, 0
/* 807074E4  C0 5F 00 00 */	lfs f2, 0(r31)
/* 807074E8  4B FF EC CD */	bl anm_init__FP10e_mb_classifUcf
/* 807074EC  C0 1E 04 D0 */	lfs f0, 0x4d0(r30)
/* 807074F0  D0 1E 06 A4 */	stfs f0, 0x6a4(r30)
/* 807074F4  C0 1E 04 D4 */	lfs f0, 0x4d4(r30)
/* 807074F8  D0 1E 06 A8 */	stfs f0, 0x6a8(r30)
/* 807074FC  C0 1E 04 D8 */	lfs f0, 0x4d8(r30)
/* 80707500  D0 1E 06 AC */	stfs f0, 0x6ac(r30)
/* 80707504  38 00 00 02 */	li r0, 2
/* 80707508  B0 1E 05 B4 */	sth r0, 0x5b4(r30)
/* 8070750C  88 1E 06 B0 */	lbz r0, 0x6b0(r30)
/* 80707510  7C 00 07 74 */	extsb r0, r0
/* 80707514  7C 00 00 34 */	cntlzw r0, r0
/* 80707518  54 00 D9 7E */	srwi r0, r0, 5
/* 8070751C  98 1E 06 B0 */	stb r0, 0x6b0(r30)
/* 80707520  3C 60 00 05 */	lis r3, 0x0005 /* 0x00050029@ha */
/* 80707524  38 03 00 29 */	addi r0, r3, 0x0029 /* 0x00050029@l */
/* 80707528  90 01 00 0C */	stw r0, 0xc(r1)
/* 8070752C  38 7E 05 E8 */	addi r3, r30, 0x5e8
/* 80707530  38 81 00 0C */	addi r4, r1, 0xc
/* 80707534  38 A0 FF FF */	li r5, -1
/* 80707538  81 9E 05 E8 */	lwz r12, 0x5e8(r30)
/* 8070753C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80707540  7D 89 03 A6 */	mtctr r12
/* 80707544  4E 80 04 21 */	bctrl 
lbl_80707548:
/* 80707548  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8070754C  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80707550  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80707554  7C 08 03 A6 */	mtlr r0
/* 80707558  38 21 00 40 */	addi r1, r1, 0x40
/* 8070755C  4E 80 00 20 */	blr 