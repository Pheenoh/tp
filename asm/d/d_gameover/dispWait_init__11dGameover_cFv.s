lbl_8019B40C:
/* 8019B40C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8019B410  7C 08 02 A6 */	mflr r0
/* 8019B414  90 01 00 14 */	stw r0, 0x14(r1)
/* 8019B418  38 00 00 5A */	li r0, 0x5a
/* 8019B41C  B0 03 01 14 */	sth r0, 0x114(r3)
/* 8019B420  80 6D 8C 40 */	lwz r3, sManager__10JFWDisplay(r13)
/* 8019B424  80 63 00 04 */	lwz r3, 4(r3)
/* 8019B428  28 03 00 00 */	cmplwi r3, 0
/* 8019B42C  41 82 00 18 */	beq lbl_8019B444
/* 8019B430  38 80 00 1E */	li r4, 0x1e
/* 8019B434  81 83 00 00 */	lwz r12, 0(r3)
/* 8019B438  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8019B43C  7D 89 03 A6 */	mtctr r12
/* 8019B440  4E 80 04 21 */	bctrl 
lbl_8019B444:
/* 8019B444  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8019B448  7C 08 03 A6 */	mtlr r0
/* 8019B44C  38 21 00 10 */	addi r1, r1, 0x10
/* 8019B450  4E 80 00 20 */	blr 
