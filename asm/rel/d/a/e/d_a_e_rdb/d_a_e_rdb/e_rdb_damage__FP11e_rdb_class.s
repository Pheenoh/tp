lbl_80766294:
/* 80766294  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80766298  7C 08 02 A6 */	mflr r0
/* 8076629C  90 01 00 24 */	stw r0, 0x24(r1)
/* 807662A0  39 61 00 20 */	addi r11, r1, 0x20
/* 807662A4  4B BF BF 39 */	bl _savegpr_29
/* 807662A8  7C 7E 1B 78 */	mr r30, r3
/* 807662AC  3C 60 80 77 */	lis r3, lit_4007@ha /* 0x8076B45C@ha */
/* 807662B0  3B E3 B4 5C */	addi r31, r3, lit_4007@l /* 0x8076B45C@l */
/* 807662B4  80 9E 05 C8 */	lwz r4, 0x5c8(r30)
/* 807662B8  C0 04 00 1C */	lfs f0, 0x1c(r4)
/* 807662BC  FC 00 00 1E */	fctiwz f0, f0
/* 807662C0  D8 01 00 08 */	stfd f0, 8(r1)
/* 807662C4  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 807662C8  A8 1E 05 B4 */	lha r0, 0x5b4(r30)
/* 807662CC  2C 00 00 0A */	cmpwi r0, 0xa
/* 807662D0  41 82 01 60 */	beq lbl_80766430
/* 807662D4  40 80 00 1C */	bge lbl_807662F0
/* 807662D8  2C 00 00 01 */	cmpwi r0, 1
/* 807662DC  41 82 00 F4 */	beq lbl_807663D0
/* 807662E0  40 80 02 AC */	bge lbl_8076658C
/* 807662E4  2C 00 00 00 */	cmpwi r0, 0
/* 807662E8  40 80 00 18 */	bge lbl_80766300
/* 807662EC  48 00 02 A0 */	b lbl_8076658C
lbl_807662F0:
/* 807662F0  2C 00 00 0C */	cmpwi r0, 0xc
/* 807662F4  41 82 02 14 */	beq lbl_80766508
/* 807662F8  40 80 02 94 */	bge lbl_8076658C
/* 807662FC  48 00 01 8C */	b lbl_80766488
lbl_80766300:
/* 80766300  C0 3F 00 70 */	lfs f1, 0x70(r31)
/* 80766304  4B B0 16 51 */	bl cM_rndF__Ff
/* 80766308  FC 00 08 1E */	fctiwz f0, f1
/* 8076630C  D8 01 00 08 */	stfd f0, 8(r1)
/* 80766310  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80766314  2C 00 00 00 */	cmpwi r0, 0
/* 80766318  40 82 00 20 */	bne lbl_80766338
/* 8076631C  7F C3 F3 78 */	mr r3, r30
/* 80766320  38 80 00 0E */	li r4, 0xe
/* 80766324  C0 3F 00 74 */	lfs f1, 0x74(r31)
/* 80766328  38 A0 00 00 */	li r5, 0
/* 8076632C  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80766330  4B FF ED C1 */	bl anm_init__FP11e_rdb_classifUcf
/* 80766334  48 00 00 90 */	b lbl_807663C4
lbl_80766338:
/* 80766338  2C 00 00 01 */	cmpwi r0, 1
/* 8076633C  40 82 00 20 */	bne lbl_8076635C
/* 80766340  7F C3 F3 78 */	mr r3, r30
/* 80766344  38 80 00 0F */	li r4, 0xf
/* 80766348  C0 3F 00 74 */	lfs f1, 0x74(r31)
/* 8076634C  38 A0 00 00 */	li r5, 0
/* 80766350  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80766354  4B FF ED 9D */	bl anm_init__FP11e_rdb_classifUcf
/* 80766358  48 00 00 6C */	b lbl_807663C4
lbl_8076635C:
/* 8076635C  2C 00 00 02 */	cmpwi r0, 2
/* 80766360  40 82 00 20 */	bne lbl_80766380
/* 80766364  7F C3 F3 78 */	mr r3, r30
/* 80766368  38 80 00 10 */	li r4, 0x10
/* 8076636C  C0 3F 00 74 */	lfs f1, 0x74(r31)
/* 80766370  38 A0 00 00 */	li r5, 0
/* 80766374  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80766378  4B FF ED 79 */	bl anm_init__FP11e_rdb_classifUcf
/* 8076637C  48 00 00 48 */	b lbl_807663C4
lbl_80766380:
/* 80766380  2C 00 00 03 */	cmpwi r0, 3
/* 80766384  40 82 00 20 */	bne lbl_807663A4
/* 80766388  7F C3 F3 78 */	mr r3, r30
/* 8076638C  38 80 00 0C */	li r4, 0xc
/* 80766390  C0 3F 00 74 */	lfs f1, 0x74(r31)
/* 80766394  38 A0 00 00 */	li r5, 0
/* 80766398  C0 5F 00 08 */	lfs f2, 8(r31)
/* 8076639C  4B FF ED 55 */	bl anm_init__FP11e_rdb_classifUcf
/* 807663A0  48 00 00 24 */	b lbl_807663C4
lbl_807663A4:
/* 807663A4  2C 00 00 04 */	cmpwi r0, 4
/* 807663A8  40 82 00 1C */	bne lbl_807663C4
/* 807663AC  7F C3 F3 78 */	mr r3, r30
/* 807663B0  38 80 00 0D */	li r4, 0xd
/* 807663B4  C0 3F 00 74 */	lfs f1, 0x74(r31)
/* 807663B8  38 A0 00 00 */	li r5, 0
/* 807663BC  C0 5F 00 08 */	lfs f2, 8(r31)
/* 807663C0  4B FF ED 31 */	bl anm_init__FP11e_rdb_classifUcf
lbl_807663C4:
/* 807663C4  38 00 00 01 */	li r0, 1
/* 807663C8  B0 1E 05 B4 */	sth r0, 0x5b4(r30)
/* 807663CC  48 00 01 C0 */	b lbl_8076658C
lbl_807663D0:
/* 807663D0  A8 1E 06 BE */	lha r0, 0x6be(r30)
/* 807663D4  2C 00 00 00 */	cmpwi r0, 0
/* 807663D8  41 82 00 10 */	beq lbl_807663E8
/* 807663DC  A0 1E 05 8E */	lhz r0, 0x58e(r30)
/* 807663E0  60 00 00 80 */	ori r0, r0, 0x80
/* 807663E4  B0 1E 05 8E */	sth r0, 0x58e(r30)
lbl_807663E8:
/* 807663E8  80 7E 05 C8 */	lwz r3, 0x5c8(r30)
/* 807663EC  38 80 00 01 */	li r4, 1
/* 807663F0  88 03 00 11 */	lbz r0, 0x11(r3)
/* 807663F4  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 807663F8  40 82 00 18 */	bne lbl_80766410
/* 807663FC  C0 3F 00 04 */	lfs f1, 4(r31)
/* 80766400  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80766404  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 80766408  41 82 00 08 */	beq lbl_80766410
/* 8076640C  38 80 00 00 */	li r4, 0
lbl_80766410:
/* 80766410  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80766414  41 82 01 78 */	beq lbl_8076658C
/* 80766418  38 00 00 01 */	li r0, 1
/* 8076641C  B0 1E 06 7E */	sth r0, 0x67e(r30)
/* 80766420  38 00 00 00 */	li r0, 0
/* 80766424  B0 1E 05 B4 */	sth r0, 0x5b4(r30)
/* 80766428  98 1E 0F CD */	stb r0, 0xfcd(r30)
/* 8076642C  48 00 01 60 */	b lbl_8076658C
lbl_80766430:
/* 80766430  38 60 00 01 */	li r3, 1
/* 80766434  88 04 00 11 */	lbz r0, 0x11(r4)
/* 80766438  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8076643C  40 82 00 18 */	bne lbl_80766454
/* 80766440  C0 3F 00 04 */	lfs f1, 4(r31)
/* 80766444  C0 04 00 18 */	lfs f0, 0x18(r4)
/* 80766448  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8076644C  41 82 00 08 */	beq lbl_80766454
/* 80766450  38 60 00 00 */	li r3, 0
lbl_80766454:
/* 80766454  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80766458  41 82 01 34 */	beq lbl_8076658C
/* 8076645C  7F C3 F3 78 */	mr r3, r30
/* 80766460  38 80 00 13 */	li r4, 0x13
/* 80766464  C0 3F 00 44 */	lfs f1, 0x44(r31)
/* 80766468  38 A0 00 02 */	li r5, 2
/* 8076646C  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80766470  4B FF EC 81 */	bl anm_init__FP11e_rdb_classifUcf
/* 80766474  38 00 00 3C */	li r0, 0x3c
/* 80766478  B0 1E 06 B8 */	sth r0, 0x6b8(r30)
/* 8076647C  38 00 00 0B */	li r0, 0xb
/* 80766480  B0 1E 05 B4 */	sth r0, 0x5b4(r30)
/* 80766484  48 00 01 08 */	b lbl_8076658C
lbl_80766488:
/* 80766488  A8 1E 06 B8 */	lha r0, 0x6b8(r30)
/* 8076648C  2C 00 00 00 */	cmpwi r0, 0
/* 80766490  40 82 00 FC */	bne lbl_8076658C
/* 80766494  38 00 00 32 */	li r0, 0x32
/* 80766498  B0 1E 06 C0 */	sth r0, 0x6c0(r30)
/* 8076649C  88 1E 0F CC */	lbz r0, 0xfcc(r30)
/* 807664A0  7C 00 07 74 */	extsb r0, r0
/* 807664A4  2C 00 00 02 */	cmpwi r0, 2
/* 807664A8  41 80 00 3C */	blt lbl_807664E4
/* 807664AC  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 807664B0  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 807664B4  38 63 4E 00 */	addi r3, r3, 0x4e00
/* 807664B8  3C 80 80 77 */	lis r4, d_a_e_rdb__stringBase0@ha /* 0x8076B6C4@ha */
/* 807664BC  38 84 B6 C4 */	addi r4, r4, d_a_e_rdb__stringBase0@l /* 0x8076B6C4@l */
/* 807664C0  38 84 00 06 */	addi r4, r4, 6
/* 807664C4  4B C0 24 D1 */	bl strcmp
/* 807664C8  2C 03 00 00 */	cmpwi r3, 0
/* 807664CC  40 82 00 18 */	bne lbl_807664E4
/* 807664D0  38 00 00 04 */	li r0, 4
/* 807664D4  B0 1E 06 7E */	sth r0, 0x67e(r30)
/* 807664D8  38 00 00 00 */	li r0, 0
/* 807664DC  B0 1E 05 B4 */	sth r0, 0x5b4(r30)
/* 807664E0  48 00 00 AC */	b lbl_8076658C
lbl_807664E4:
/* 807664E4  7F C3 F3 78 */	mr r3, r30
/* 807664E8  38 80 00 12 */	li r4, 0x12
/* 807664EC  C0 3F 00 44 */	lfs f1, 0x44(r31)
/* 807664F0  38 A0 00 00 */	li r5, 0
/* 807664F4  C0 5F 00 08 */	lfs f2, 8(r31)
/* 807664F8  4B FF EB F9 */	bl anm_init__FP11e_rdb_classifUcf
/* 807664FC  38 00 00 0C */	li r0, 0xc
/* 80766500  B0 1E 05 B4 */	sth r0, 0x5b4(r30)
/* 80766504  48 00 00 88 */	b lbl_8076658C
lbl_80766508:
/* 80766508  2C 1D 00 19 */	cmpwi r29, 0x19
/* 8076650C  41 80 00 20 */	blt lbl_8076652C
/* 80766510  2C 1D 00 23 */	cmpwi r29, 0x23
/* 80766514  41 81 00 18 */	bgt lbl_8076652C
/* 80766518  38 7E 04 DE */	addi r3, r30, 0x4de
/* 8076651C  A8 9E 06 B0 */	lha r4, 0x6b0(r30)
/* 80766520  38 A0 00 02 */	li r5, 2
/* 80766524  38 C0 10 00 */	li r6, 0x1000
/* 80766528  4B B0 A0 E1 */	bl cLib_addCalcAngleS2__FPssss
lbl_8076652C:
/* 8076652C  2C 1D 00 23 */	cmpwi r29, 0x23
/* 80766530  41 80 00 14 */	blt lbl_80766544
/* 80766534  2C 1D 00 2A */	cmpwi r29, 0x2a
/* 80766538  41 81 00 0C */	bgt lbl_80766544
/* 8076653C  38 00 00 01 */	li r0, 1
/* 80766540  98 1E 06 C4 */	stb r0, 0x6c4(r30)
lbl_80766544:
/* 80766544  80 7E 05 C8 */	lwz r3, 0x5c8(r30)
/* 80766548  38 80 00 01 */	li r4, 1
/* 8076654C  88 03 00 11 */	lbz r0, 0x11(r3)
/* 80766550  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80766554  40 82 00 18 */	bne lbl_8076656C
/* 80766558  C0 3F 00 04 */	lfs f1, 4(r31)
/* 8076655C  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80766560  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 80766564  41 82 00 08 */	beq lbl_8076656C
/* 80766568  38 80 00 00 */	li r4, 0
lbl_8076656C:
/* 8076656C  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80766570  41 82 00 1C */	beq lbl_8076658C
/* 80766574  38 00 00 01 */	li r0, 1
/* 80766578  B0 1E 06 7E */	sth r0, 0x67e(r30)
/* 8076657C  38 00 00 00 */	li r0, 0
/* 80766580  B0 1E 05 B4 */	sth r0, 0x5b4(r30)
/* 80766584  38 00 00 0A */	li r0, 0xa
/* 80766588  B0 1E 06 C0 */	sth r0, 0x6c0(r30)
lbl_8076658C:
/* 8076658C  38 7E 05 2C */	addi r3, r30, 0x52c
/* 80766590  C0 3F 00 08 */	lfs f1, 8(r31)
/* 80766594  C0 5F 00 54 */	lfs f2, 0x54(r31)
/* 80766598  4B B0 94 E9 */	bl cLib_addCalc0__FPfff
/* 8076659C  39 61 00 20 */	addi r11, r1, 0x20
/* 807665A0  4B BF BC 89 */	bl _restgpr_29
/* 807665A4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 807665A8  7C 08 03 A6 */	mtlr r0
/* 807665AC  38 21 00 20 */	addi r1, r1, 0x20
/* 807665B0  4E 80 00 20 */	blr 