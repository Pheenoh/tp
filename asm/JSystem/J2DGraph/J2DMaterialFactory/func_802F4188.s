lbl_802F4188:
/* 802F4188  28 04 00 00 */	cmplwi r4, 0
/* 802F418C  40 82 00 0C */	bne lbl_802F4198
/* 802F4190  38 60 00 00 */	li r3, 0
/* 802F4194  4E 80 00 20 */	blr 
lbl_802F4198:
/* 802F4198  7C 63 22 14 */	add r3, r3, r4
/* 802F419C  4E 80 00 20 */	blr 
