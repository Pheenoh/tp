lbl_80C27830:
/* 80C27830  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C27834  7C 08 02 A6 */	mflr r0
/* 80C27838  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C2783C  80 83 05 70 */	lwz r4, 0x570(r3)
/* 80C27840  C0 03 04 EC */	lfs f0, 0x4ec(r3)
/* 80C27844  D0 04 00 18 */	stfs f0, 0x18(r4)
/* 80C27848  C0 03 04 F0 */	lfs f0, 0x4f0(r3)
/* 80C2784C  D0 04 00 1C */	stfs f0, 0x1c(r4)
/* 80C27850  C0 03 04 F4 */	lfs f0, 0x4f4(r3)
/* 80C27854  D0 04 00 20 */	stfs f0, 0x20(r4)
/* 80C27858  48 00 00 15 */	bl setBaseMtx__12daObjIBone_cFv
/* 80C2785C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C27860  7C 08 03 A6 */	mtlr r0
/* 80C27864  38 21 00 10 */	addi r1, r1, 0x10
/* 80C27868  4E 80 00 20 */	blr 
