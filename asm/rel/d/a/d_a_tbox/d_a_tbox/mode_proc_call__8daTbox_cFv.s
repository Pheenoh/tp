lbl_80495660:
/* 80495660  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80495664  7C 08 02 A6 */	mflr r0
/* 80495668  90 01 00 14 */	stw r0, 0x14(r1)
/* 8049566C  3C 80 80 49 */	lis r4, cNullVec__6Z2Calc@ha /* 0x80496494@ha */
/* 80495670  38 E4 64 94 */	addi r7, r4, cNullVec__6Z2Calc@l /* 0x80496494@l */
/* 80495674  3C 80 80 49 */	lis r4, data_80496930@ha /* 0x80496930@ha */
/* 80495678  38 C4 69 30 */	addi r6, r4, data_80496930@l /* 0x80496930@l */
/* 8049567C  88 06 00 00 */	lbz r0, 0(r6)
/* 80495680  7C 00 07 75 */	extsb. r0, r0
/* 80495684  40 82 00 40 */	bne lbl_804956C4
/* 80495688  80 87 02 6C */	lwz r4, 0x26c(r7)
/* 8049568C  80 07 02 70 */	lwz r0, 0x270(r7)
/* 80495690  90 87 02 84 */	stw r4, 0x284(r7)
/* 80495694  90 07 02 88 */	stw r0, 0x288(r7)
/* 80495698  80 07 02 74 */	lwz r0, 0x274(r7)
/* 8049569C  90 07 02 8C */	stw r0, 0x28c(r7)
/* 804956A0  38 A7 02 84 */	addi r5, r7, 0x284
/* 804956A4  80 87 02 78 */	lwz r4, 0x278(r7)
/* 804956A8  80 07 02 7C */	lwz r0, 0x27c(r7)
/* 804956AC  90 85 00 0C */	stw r4, 0xc(r5)
/* 804956B0  90 05 00 10 */	stw r0, 0x10(r5)
/* 804956B4  80 07 02 80 */	lwz r0, 0x280(r7)
/* 804956B8  90 05 00 14 */	stw r0, 0x14(r5)
/* 804956BC  38 00 00 01 */	li r0, 1
/* 804956C0  98 06 00 00 */	stb r0, 0(r6)
lbl_804956C4:
/* 804956C4  88 03 09 CD */	lbz r0, 0x9cd(r3)
/* 804956C8  1C 00 00 0C */	mulli r0, r0, 0xc
/* 804956CC  39 87 02 84 */	addi r12, r7, 0x284
/* 804956D0  7D 8C 02 14 */	add r12, r12, r0
/* 804956D4  4B EC C9 B1 */	bl __ptmf_scall
/* 804956D8  60 00 00 00 */	nop 
/* 804956DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804956E0  7C 08 03 A6 */	mtlr r0
/* 804956E4  38 21 00 10 */	addi r1, r1, 0x10
/* 804956E8  4E 80 00 20 */	blr 
