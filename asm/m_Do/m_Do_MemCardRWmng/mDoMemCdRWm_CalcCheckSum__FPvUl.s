lbl_80017C74:
/* 80017C74  38 C0 00 00 */	li r6, 0
/* 80017C78  38 A0 00 00 */	li r5, 0
/* 80017C7C  54 80 F8 7E */	srwi r0, r4, 1
/* 80017C80  7C 09 03 A6 */	mtctr r0
/* 80017C84  28 00 00 00 */	cmplwi r0, 0
/* 80017C88  40 81 00 20 */	ble lbl_80017CA8
lbl_80017C8C:
/* 80017C8C  A0 03 00 00 */	lhz r0, 0(r3)
/* 80017C90  7C A5 02 14 */	add r5, r5, r0
/* 80017C94  7C 00 00 F8 */	nor r0, r0, r0
/* 80017C98  7C 06 02 14 */	add r0, r6, r0
/* 80017C9C  54 06 04 3E */	clrlwi r6, r0, 0x10
/* 80017CA0  38 63 00 02 */	addi r3, r3, 2
/* 80017CA4  42 00 FF E8 */	bdnz lbl_80017C8C
lbl_80017CA8:
/* 80017CA8  7C C3 33 78 */	mr r3, r6
/* 80017CAC  50 A3 80 1E */	rlwimi r3, r5, 0x10, 0, 0xf
/* 80017CB0  4E 80 00 20 */	blr 
