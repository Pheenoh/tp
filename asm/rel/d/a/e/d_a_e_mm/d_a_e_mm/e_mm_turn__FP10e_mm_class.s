lbl_807213BC:
/* 807213BC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 807213C0  7C 08 02 A6 */	mflr r0
/* 807213C4  90 01 00 24 */	stw r0, 0x24(r1)
/* 807213C8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 807213CC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 807213D0  7C 7E 1B 78 */	mr r30, r3
/* 807213D4  3C 60 80 72 */	lis r3, lit_3789@ha /* 0x80722C3C@ha */
/* 807213D8  3B E3 2C 3C */	addi r31, r3, lit_3789@l /* 0x80722C3C@l */
/* 807213DC  38 7E 04 DE */	addi r3, r30, 0x4de
/* 807213E0  A8 9E 06 8C */	lha r4, 0x68c(r30)
/* 807213E4  38 A0 00 08 */	li r5, 8
/* 807213E8  38 C0 02 00 */	li r6, 0x200
/* 807213EC  4B B4 F2 1D */	bl cLib_addCalcAngleS2__FPssss
/* 807213F0  80 7E 05 B8 */	lwz r3, 0x5b8(r30)
/* 807213F4  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 807213F8  FC 00 00 1E */	fctiwz f0, f0
/* 807213FC  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80721400  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80721404  2C 00 00 09 */	cmpwi r0, 9
/* 80721408  41 82 00 14 */	beq lbl_8072141C
/* 8072140C  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80721410  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80721414  2C 00 00 13 */	cmpwi r0, 0x13
/* 80721418  40 82 00 78 */	bne lbl_80721490
lbl_8072141C:
/* 8072141C  38 A0 00 01 */	li r5, 1
/* 80721420  88 1E 06 72 */	lbz r0, 0x672(r30)
/* 80721424  7C 00 07 75 */	extsb. r0, r0
/* 80721428  40 82 00 08 */	bne lbl_80721430
/* 8072142C  38 A0 00 02 */	li r5, 2
lbl_80721430:
/* 80721430  80 1E 07 1C */	lwz r0, 0x71c(r30)
/* 80721434  54 00 05 29 */	rlwinm. r0, r0, 0, 0x14, 0x14
/* 80721438  40 82 00 30 */	bne lbl_80721468
/* 8072143C  3C 60 00 07 */	lis r3, 0x0007 /* 0x000702ED@ha */
/* 80721440  38 03 02 ED */	addi r0, r3, 0x02ED /* 0x000702ED@l */
/* 80721444  90 01 00 0C */	stw r0, 0xc(r1)
/* 80721448  38 7E 05 BC */	addi r3, r30, 0x5bc
/* 8072144C  38 81 00 0C */	addi r4, r1, 0xc
/* 80721450  38 C0 FF FF */	li r6, -1
/* 80721454  81 9E 05 BC */	lwz r12, 0x5bc(r30)
/* 80721458  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8072145C  7D 89 03 A6 */	mtctr r12
/* 80721460  4E 80 04 21 */	bctrl 
/* 80721464  48 00 00 2C */	b lbl_80721490
lbl_80721468:
/* 80721468  3C 60 00 07 */	lis r3, 0x0007 /* 0x000702EE@ha */
/* 8072146C  38 03 02 EE */	addi r0, r3, 0x02EE /* 0x000702EE@l */
/* 80721470  90 01 00 08 */	stw r0, 8(r1)
/* 80721474  38 7E 05 BC */	addi r3, r30, 0x5bc
/* 80721478  38 81 00 08 */	addi r4, r1, 8
/* 8072147C  38 C0 FF FF */	li r6, -1
/* 80721480  81 9E 05 BC */	lwz r12, 0x5bc(r30)
/* 80721484  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80721488  7D 89 03 A6 */	mtctr r12
/* 8072148C  4E 80 04 21 */	bctrl 
lbl_80721490:
/* 80721490  A8 7E 06 8C */	lha r3, 0x68c(r30)
/* 80721494  A8 1E 04 DE */	lha r0, 0x4de(r30)
/* 80721498  7C 63 00 50 */	subf r3, r3, r0
/* 8072149C  4B C4 3C 35 */	bl abs
/* 807214A0  2C 03 04 00 */	cmpwi r3, 0x400
/* 807214A4  40 80 00 6C */	bge lbl_80721510
/* 807214A8  7F C3 F3 78 */	mr r3, r30
/* 807214AC  4B FF F0 E5 */	bl way_gake_check__FP10e_mm_class
/* 807214B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 807214B4  40 82 00 50 */	bne lbl_80721504
/* 807214B8  38 00 00 01 */	li r0, 1
/* 807214BC  B0 1E 06 70 */	sth r0, 0x670(r30)
/* 807214C0  C0 3F 00 00 */	lfs f1, 0(r31)
/* 807214C4  4B B4 64 91 */	bl cM_rndF__Ff
/* 807214C8  C0 1F 00 7C */	lfs f0, 0x7c(r31)
/* 807214CC  EC 00 08 2A */	fadds f0, f0, f1
/* 807214D0  FC 00 00 1E */	fctiwz f0, f0
/* 807214D4  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 807214D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 807214DC  B0 1E 06 9C */	sth r0, 0x69c(r30)
/* 807214E0  7F C3 F3 78 */	mr r3, r30
/* 807214E4  38 80 00 08 */	li r4, 8
/* 807214E8  C0 3F 00 44 */	lfs f1, 0x44(r31)
/* 807214EC  38 A0 00 02 */	li r5, 2
/* 807214F0  C0 5F 00 08 */	lfs f2, 8(r31)
/* 807214F4  4B FF E5 51 */	bl anm_init__FP10e_mm_classifUcf
/* 807214F8  38 00 00 00 */	li r0, 0
/* 807214FC  B0 1E 06 6E */	sth r0, 0x66e(r30)
/* 80721500  48 00 00 20 */	b lbl_80721520
lbl_80721504:
/* 80721504  A8 7E 06 8C */	lha r3, 0x68c(r30)
/* 80721508  38 03 20 00 */	addi r0, r3, 0x2000
/* 8072150C  B0 1E 06 8C */	sth r0, 0x68c(r30)
lbl_80721510:
/* 80721510  38 7E 05 2C */	addi r3, r30, 0x52c
/* 80721514  C0 3F 00 08 */	lfs f1, 8(r31)
/* 80721518  C0 5F 00 50 */	lfs f2, 0x50(r31)
/* 8072151C  4B B4 E5 65 */	bl cLib_addCalc0__FPfff
lbl_80721520:
/* 80721520  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80721524  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80721528  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8072152C  7C 08 03 A6 */	mtlr r0
/* 80721530  38 21 00 20 */	addi r1, r1, 0x20
/* 80721534  4E 80 00 20 */	blr 
