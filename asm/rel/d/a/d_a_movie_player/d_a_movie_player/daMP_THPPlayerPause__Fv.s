lbl_808783FC:
/* 808783FC  3C 60 80 88 */	lis r3, daMP_ActivePlayer@ha /* 0x80879BD0@ha */
/* 80878400  38 63 9B D0 */	addi r3, r3, daMP_ActivePlayer@l /* 0x80879BD0@l */
/* 80878404  80 03 00 A0 */	lwz r0, 0xa0(r3)
/* 80878408  2C 00 00 00 */	cmpwi r0, 0
/* 8087840C  41 82 00 24 */	beq lbl_80878430
/* 80878410  88 03 00 A4 */	lbz r0, 0xa4(r3)
/* 80878414  28 00 00 02 */	cmplwi r0, 2
/* 80878418  40 82 00 18 */	bne lbl_80878430
/* 8087841C  38 00 00 04 */	li r0, 4
/* 80878420  98 03 00 A5 */	stb r0, 0xa5(r3)
/* 80878424  98 03 00 A4 */	stb r0, 0xa4(r3)
/* 80878428  38 60 00 01 */	li r3, 1
/* 8087842C  4E 80 00 20 */	blr 
lbl_80878430:
/* 80878430  38 60 00 00 */	li r3, 0
/* 80878434  4E 80 00 20 */	blr 
