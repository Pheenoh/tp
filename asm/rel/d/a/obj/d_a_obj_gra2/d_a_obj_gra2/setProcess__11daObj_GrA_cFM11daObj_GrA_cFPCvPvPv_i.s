lbl_80C018F4:
/* 80C018F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C018F8  7C 08 02 A6 */	mflr r0
/* 80C018FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C01900  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80C01904  93 C1 00 08 */	stw r30, 8(r1)
/* 80C01908  7C 7E 1B 78 */	mr r30, r3
/* 80C0190C  7C 9F 23 78 */	mr r31, r4
/* 80C01910  38 00 00 02 */	li r0, 2
/* 80C01914  B0 03 0A 7C */	sth r0, 0xa7c(r3)
/* 80C01918  38 7E 0A 50 */	addi r3, r30, 0xa50
/* 80C0191C  4B 76 06 FD */	bl __ptmf_test
/* 80C01920  2C 03 00 00 */	cmpwi r3, 0
/* 80C01924  41 82 00 18 */	beq lbl_80C0193C
/* 80C01928  7F C3 F3 78 */	mr r3, r30
/* 80C0192C  38 80 00 00 */	li r4, 0
/* 80C01930  39 9E 0A 50 */	addi r12, r30, 0xa50
/* 80C01934  4B 76 07 51 */	bl __ptmf_scall
/* 80C01938  60 00 00 00 */	nop 
lbl_80C0193C:
/* 80C0193C  38 00 00 00 */	li r0, 0
/* 80C01940  B0 1E 0A 7C */	sth r0, 0xa7c(r30)
/* 80C01944  80 7F 00 00 */	lwz r3, 0(r31)
/* 80C01948  80 1F 00 04 */	lwz r0, 4(r31)
/* 80C0194C  90 7E 0A 50 */	stw r3, 0xa50(r30)
/* 80C01950  90 1E 0A 54 */	stw r0, 0xa54(r30)
/* 80C01954  80 1F 00 08 */	lwz r0, 8(r31)
/* 80C01958  90 1E 0A 58 */	stw r0, 0xa58(r30)
/* 80C0195C  38 7E 0A 50 */	addi r3, r30, 0xa50
/* 80C01960  4B 76 06 B9 */	bl __ptmf_test
/* 80C01964  2C 03 00 00 */	cmpwi r3, 0
/* 80C01968  41 82 00 18 */	beq lbl_80C01980
/* 80C0196C  7F C3 F3 78 */	mr r3, r30
/* 80C01970  38 80 00 00 */	li r4, 0
/* 80C01974  39 9E 0A 50 */	addi r12, r30, 0xa50
/* 80C01978  4B 76 07 0D */	bl __ptmf_scall
/* 80C0197C  60 00 00 00 */	nop 
lbl_80C01980:
/* 80C01980  38 00 00 01 */	li r0, 1
/* 80C01984  B0 1E 0A 7C */	sth r0, 0xa7c(r30)
/* 80C01988  38 60 00 01 */	li r3, 1
/* 80C0198C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80C01990  83 C1 00 08 */	lwz r30, 8(r1)
/* 80C01994  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C01998  7C 08 03 A6 */	mtlr r0
/* 80C0199C  38 21 00 10 */	addi r1, r1, 0x10
/* 80C019A0  4E 80 00 20 */	blr 
