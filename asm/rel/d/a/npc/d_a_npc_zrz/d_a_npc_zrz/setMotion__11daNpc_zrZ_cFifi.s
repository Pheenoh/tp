lbl_80B9612C:
/* 80B9612C  7C 86 07 34 */	extsh r6, r4
/* 80B96130  2C 05 00 00 */	cmpwi r5, 0
/* 80B96134  40 82 00 10 */	bne lbl_80B96144
/* 80B96138  A8 03 09 E0 */	lha r0, 0x9e0(r3)
/* 80B9613C  7C 00 30 00 */	cmpw r0, r6
/* 80B96140  4D 82 00 20 */	beqlr 
lbl_80B96144:
/* 80B96144  2C 04 00 00 */	cmpwi r4, 0
/* 80B96148  4D 80 00 20 */	bltlr 
/* 80B9614C  2C 04 00 03 */	cmpwi r4, 3
/* 80B96150  4C 80 00 20 */	bgelr 
/* 80B96154  B0 C3 09 E0 */	sth r6, 0x9e0(r3)
/* 80B96158  D0 23 09 7C */	stfs f1, 0x97c(r3)
/* 80B9615C  38 00 FF FF */	li r0, -1
/* 80B96160  B0 03 09 DC */	sth r0, 0x9dc(r3)
/* 80B96164  38 00 00 00 */	li r0, 0
/* 80B96168  B0 03 09 DA */	sth r0, 0x9da(r3)
/* 80B9616C  4E 80 00 20 */	blr 
