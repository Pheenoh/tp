lbl_8095E848:
/* 8095E848  3C 80 80 96 */	lis r4, __vt__11J3DTexNoAnm@ha /* 0x809626D0@ha */
/* 8095E84C  38 04 26 D0 */	addi r0, r4, __vt__11J3DTexNoAnm@l /* 0x809626D0@l */
/* 8095E850  90 03 00 00 */	stw r0, 0(r3)
/* 8095E854  38 80 00 00 */	li r4, 0
/* 8095E858  B0 83 00 04 */	sth r4, 4(r3)
/* 8095E85C  38 00 00 01 */	li r0, 1
/* 8095E860  B0 03 00 06 */	sth r0, 6(r3)
/* 8095E864  90 83 00 08 */	stw r4, 8(r3)
/* 8095E868  4E 80 00 20 */	blr 
