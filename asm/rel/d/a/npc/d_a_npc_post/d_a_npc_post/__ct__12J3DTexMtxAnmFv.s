lbl_80AA95C8:
/* 80AA95C8  38 80 00 00 */	li r4, 0
/* 80AA95CC  B0 83 00 00 */	sth r4, 0(r3)
/* 80AA95D0  38 00 00 01 */	li r0, 1
/* 80AA95D4  B0 03 00 02 */	sth r0, 2(r3)
/* 80AA95D8  90 83 00 04 */	stw r4, 4(r3)
/* 80AA95DC  4E 80 00 20 */	blr 
