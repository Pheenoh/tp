lbl_8050642C:
/* 8050642C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80506430  7C 08 02 A6 */	mflr r0
/* 80506434  90 01 00 24 */	stw r0, 0x24(r1)
/* 80506438  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8050643C  7C 7F 1B 78 */	mr r31, r3
/* 80506440  3C 60 80 52 */	lis r3, data_80519200@ha /* 0x80519200@ha */
/* 80506444  88 03 92 00 */	lbz r0, data_80519200@l(r3)  /* 0x80519200@l */
/* 80506448  28 00 00 76 */	cmplwi r0, 0x76
/* 8050644C  40 82 00 10 */	bne lbl_8050645C
/* 80506450  88 1F 04 E2 */	lbz r0, 0x4e2(r31)
/* 80506454  2C 00 00 01 */	cmpwi r0, 1
/* 80506458  41 82 00 B0 */	beq lbl_80506508
lbl_8050645C:
/* 8050645C  7F E3 FB 78 */	mr r3, r31
/* 80506460  4B FF FD 7D */	bl search_wb__FP10e_rd_classs
/* 80506464  90 7F 09 8C */	stw r3, 0x98c(r31)
/* 80506468  80 1F 09 8C */	lwz r0, 0x98c(r31)
/* 8050646C  90 01 00 08 */	stw r0, 8(r1)
/* 80506470  3C 60 80 02 */	lis r3, fpcSch_JudgeByID__FPvPv@ha /* 0x80023590@ha */
/* 80506474  38 63 35 90 */	addi r3, r3, fpcSch_JudgeByID__FPvPv@l /* 0x80023590@l */
/* 80506478  38 81 00 08 */	addi r4, r1, 8
/* 8050647C  4B B1 33 7D */	bl fopAcIt_Judge__FPFPvPv_PvPv
/* 80506480  28 03 00 00 */	cmplwi r3, 0
/* 80506484  41 82 00 84 */	beq lbl_80506508
/* 80506488  3C 80 80 52 */	lis r4, data_80519200@ha /* 0x80519200@ha */
/* 8050648C  88 04 92 00 */	lbz r0, data_80519200@l(r4)  /* 0x80519200@l */
/* 80506490  28 00 00 00 */	cmplwi r0, 0
/* 80506494  41 82 00 2C */	beq lbl_805064C0
/* 80506498  88 1F 05 BC */	lbz r0, 0x5bc(r31)
/* 8050649C  28 00 00 01 */	cmplwi r0, 1
/* 805064A0  41 82 00 14 */	beq lbl_805064B4
/* 805064A4  A0 03 06 BE */	lhz r0, 0x6be(r3)
/* 805064A8  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 805064AC  40 82 00 14 */	bne lbl_805064C0
/* 805064B0  48 00 00 58 */	b lbl_80506508
lbl_805064B4:
/* 805064B4  A0 03 06 BE */	lhz r0, 0x6be(r3)
/* 805064B8  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 805064BC  40 82 00 4C */	bne lbl_80506508
lbl_805064C0:
/* 805064C0  38 00 00 0B */	li r0, 0xb
/* 805064C4  B0 1F 09 72 */	sth r0, 0x972(r31)
/* 805064C8  38 00 00 00 */	li r0, 0
/* 805064CC  B0 1F 05 B4 */	sth r0, 0x5b4(r31)
/* 805064D0  A0 83 06 BE */	lhz r4, 0x6be(r3)
/* 805064D4  54 80 07 FF */	clrlwi. r0, r4, 0x1f
/* 805064D8  40 82 00 18 */	bne lbl_805064F0
/* 805064DC  60 80 00 01 */	ori r0, r4, 1
/* 805064E0  B0 03 06 BE */	sth r0, 0x6be(r3)
/* 805064E4  38 00 00 01 */	li r0, 1
/* 805064E8  98 1F 09 BE */	stb r0, 0x9be(r31)
/* 805064EC  48 00 00 1C */	b lbl_80506508
lbl_805064F0:
/* 805064F0  54 80 07 BD */	rlwinm. r0, r4, 0, 0x1e, 0x1e
/* 805064F4  40 82 00 14 */	bne lbl_80506508
/* 805064F8  60 80 00 02 */	ori r0, r4, 2
/* 805064FC  B0 03 06 BE */	sth r0, 0x6be(r3)
/* 80506500  38 00 00 02 */	li r0, 2
/* 80506504  98 1F 09 BE */	stb r0, 0x9be(r31)
lbl_80506508:
/* 80506508  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8050650C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80506510  7C 08 03 A6 */	mtlr r0
/* 80506514  38 21 00 20 */	addi r1, r1, 0x20
/* 80506518  4E 80 00 20 */	blr 
