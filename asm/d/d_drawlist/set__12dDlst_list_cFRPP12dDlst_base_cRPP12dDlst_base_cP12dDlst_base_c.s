lbl_80056794:
/* 80056794  80 64 00 00 */	lwz r3, 0(r4)
/* 80056798  80 05 00 00 */	lwz r0, 0(r5)
/* 8005679C  7C 03 00 40 */	cmplw r3, r0
/* 800567A0  41 80 00 0C */	blt lbl_800567AC
/* 800567A4  38 60 00 00 */	li r3, 0
/* 800567A8  4E 80 00 20 */	blr 
lbl_800567AC:
/* 800567AC  90 C3 00 00 */	stw r6, 0(r3)
/* 800567B0  80 64 00 00 */	lwz r3, 0(r4)
/* 800567B4  38 03 00 04 */	addi r0, r3, 4
/* 800567B8  90 04 00 00 */	stw r0, 0(r4)
/* 800567BC  38 60 00 01 */	li r3, 1
/* 800567C0  4E 80 00 20 */	blr 
