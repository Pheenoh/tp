lbl_80969504:
/* 80969504  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80969508  7C 08 02 A6 */	mflr r0
/* 8096950C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80969510  7C 67 1B 78 */	mr r7, r3
/* 80969514  88 63 0E 11 */	lbz r3, 0xe11(r3)
/* 80969518  38 00 00 03 */	li r0, 3
/* 8096951C  7C A3 03 D7 */	divw. r5, r3, r0
/* 80969520  7C 05 01 D6 */	mullw r0, r5, r0
/* 80969524  7C C0 18 50 */	subf r6, r0, r3
/* 80969528  41 82 00 14 */	beq lbl_8096953C
/* 8096952C  2C 06 00 02 */	cmpwi r6, 2
/* 80969530  41 82 00 0C */	beq lbl_8096953C
/* 80969534  38 A0 00 00 */	li r5, 0
/* 80969538  38 C0 00 02 */	li r6, 2
lbl_8096953C:
/* 8096953C  80 07 00 B0 */	lwz r0, 0xb0(r7)
/* 80969540  54 00 42 1E */	rlwinm r0, r0, 8, 8, 0xf
/* 80969544  2C 04 00 00 */	cmpwi r4, 0
/* 80969548  7C A0 03 78 */	or r0, r5, r0
/* 8096954C  64 03 10 00 */	oris r3, r0, 0x1000
/* 80969550  41 82 00 08 */	beq lbl_80969558
/* 80969554  7C 03 03 78 */	mr r3, r0
lbl_80969558:
/* 80969558  7C 64 1B 78 */	mr r4, r3
/* 8096955C  C0 07 04 D0 */	lfs f0, 0x4d0(r7)
/* 80969560  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80969564  C0 07 04 D4 */	lfs f0, 0x4d4(r7)
/* 80969568  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8096956C  C0 07 04 D8 */	lfs f0, 0x4d8(r7)
/* 80969570  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80969574  80 07 04 DC */	lwz r0, 0x4dc(r7)
/* 80969578  90 01 00 08 */	stw r0, 8(r1)
/* 8096957C  A0 07 04 E0 */	lhz r0, 0x4e0(r7)
/* 80969580  B0 01 00 0C */	sth r0, 0xc(r1)
/* 80969584  A8 07 04 B4 */	lha r0, 0x4b4(r7)
/* 80969588  54 03 04 3E */	clrlwi r3, r0, 0x10
/* 8096958C  28 03 FF FF */	cmplwi r3, 0xffff
/* 80969590  38 00 FF FF */	li r0, -1
/* 80969594  41 82 00 08 */	beq lbl_8096959C
/* 80969598  7C 60 1B 78 */	mr r0, r3
lbl_8096959C:
/* 8096959C  B0 01 00 08 */	sth r0, 8(r1)
/* 809695A0  3C 60 80 97 */	lis r3, lit_4306@ha /* 0x8096C9E8@ha */
/* 809695A4  C0 03 C9 E8 */	lfs f0, lit_4306@l(r3)  /* 0x8096C9E8@l */
/* 809695A8  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 809695AC  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 809695B0  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 809695B4  54 C0 08 3C */	slwi r0, r6, 1
/* 809695B8  3C 60 80 97 */	lis r3, sNameYami@ha /* 0x8096CA04@ha */
/* 809695BC  38 63 CA 04 */	addi r3, r3, sNameYami@l /* 0x8096CA04@l */
/* 809695C0  7C 63 02 AE */	lhax r3, r3, r0
/* 809695C4  38 A1 00 1C */	addi r5, r1, 0x1c
/* 809695C8  88 07 04 E2 */	lbz r0, 0x4e2(r7)
/* 809695CC  7C 06 07 74 */	extsb r6, r0
/* 809695D0  38 E1 00 08 */	addi r7, r1, 8
/* 809695D4  39 01 00 10 */	addi r8, r1, 0x10
/* 809695D8  39 20 FF FF */	li r9, -1
/* 809695DC  4B 6B 07 BD */	bl fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc
/* 809695E0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 809695E4  7C 08 03 A6 */	mtlr r0
/* 809695E8  38 21 00 30 */	addi r1, r1, 0x30
/* 809695EC  4E 80 00 20 */	blr 
