lbl_8027C24C:
/* 8027C24C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027C250  7C 08 02 A6 */	mflr r0
/* 8027C254  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027C258  38 C3 00 10 */	addi r6, r3, 0x10
/* 8027C25C  E0 25 00 10 */	psq_l f1, 16(r5), 0, 0 /* qr0 */
/* 8027C260  E0 04 01 08 */	psq_l f0, 264(r4), 0, 0 /* qr0 */
/* 8027C264  10 01 00 28 */	ps_sub f0, f1, f0
/* 8027C268  F0 06 00 00 */	psq_st f0, 0(r6), 0, 0 /* qr0 */
/* 8027C26C  E0 25 80 18 */	psq_l f1, 24(r5), 1, 0 /* qr0 */
/* 8027C270  E0 04 81 10 */	psq_l f0, 272(r4), 1, 0 /* qr0 */
/* 8027C274  10 01 00 28 */	ps_sub f0, f1, f0
/* 8027C278  F0 06 80 08 */	psq_st f0, 8(r6), 1, 0 /* qr0 */
/* 8027C27C  38 64 00 78 */	addi r3, r4, 0x78
/* 8027C280  7C C4 33 78 */	mr r4, r6
/* 8027C284  7C C5 33 78 */	mr r5, r6
/* 8027C288  48 0C AB C5 */	bl PSMTXMultVecSR
/* 8027C28C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027C290  7C 08 03 A6 */	mtlr r0
/* 8027C294  38 21 00 10 */	addi r1, r1, 0x10
/* 8027C298  4E 80 00 20 */	blr 
