lbl_802481D8:
/* 802481D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802481DC  7C 08 02 A6 */	mflr r0
/* 802481E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802481E4  80 63 00 CC */	lwz r3, 0xcc(r3)
/* 802481E8  28 03 00 00 */	cmplwi r3, 0
/* 802481EC  41 82 00 0C */	beq lbl_802481F8
/* 802481F0  4B FF 1A 75 */	bl isSelect__17dMsgScrn3Select_cFv
/* 802481F4  48 00 00 08 */	b lbl_802481FC
lbl_802481F8:
/* 802481F8  38 60 00 00 */	li r3, 0
lbl_802481FC:
/* 802481FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80248200  7C 08 03 A6 */	mtlr r0
/* 80248204  38 21 00 10 */	addi r1, r1, 0x10
/* 80248208  4E 80 00 20 */	blr 
