lbl_800150AC:
/* 800150AC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 800150B0  7C 08 02 A6 */	mflr r0
/* 800150B4  90 01 00 34 */	stw r0, 0x34(r1)
/* 800150B8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 800150BC  93 C1 00 28 */	stw r30, 0x28(r1)
/* 800150C0  7C 7E 1B 78 */	mr r30, r3
/* 800150C4  81 83 00 00 */	lwz r12, 0(r3)
/* 800150C8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 800150CC  7D 89 03 A6 */	mtctr r12
/* 800150D0  4E 80 04 21 */	bctrl 
/* 800150D4  28 03 00 00 */	cmplwi r3, 0
/* 800150D8  41 82 00 40 */	beq lbl_80015118
/* 800150DC  80 6D 90 74 */	lwz r3, mJoint__10J3DMtxCalc(r13)
/* 800150E0  A3 E3 00 14 */	lhz r31, 0x14(r3)
/* 800150E4  7F C3 F3 78 */	mr r3, r30
/* 800150E8  81 9E 00 00 */	lwz r12, 0(r30)
/* 800150EC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 800150F0  7D 89 03 A6 */	mtctr r12
/* 800150F4  4E 80 04 21 */	bctrl 
/* 800150F8  7F E4 FB 78 */	mr r4, r31
/* 800150FC  38 A1 00 08 */	addi r5, r1, 8
/* 80015100  81 83 00 00 */	lwz r12, 0(r3)
/* 80015104  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80015108  7D 89 03 A6 */	mtctr r12
/* 8001510C  4E 80 04 21 */	bctrl 
/* 80015110  38 61 00 08 */	addi r3, r1, 8
/* 80015114  48 00 00 0C */	b lbl_80015120
lbl_80015118:
/* 80015118  80 6D 90 74 */	lwz r3, mJoint__10J3DMtxCalc(r13)
/* 8001511C  38 63 00 18 */	addi r3, r3, 0x18
lbl_80015120:
/* 80015120  48 31 9E 9D */	bl calcTransform__27J3DMtxCalcCalcTransformMayaFRC16J3DTransformInfo
/* 80015124  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80015128  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8001512C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80015130  7C 08 03 A6 */	mtlr r0
/* 80015134  38 21 00 30 */	addi r1, r1, 0x30
/* 80015138  4E 80 00 20 */	blr 
