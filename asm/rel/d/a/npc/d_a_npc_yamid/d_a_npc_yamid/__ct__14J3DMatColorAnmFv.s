lbl_80B43770:
/* 80B43770  38 80 00 00 */	li r4, 0
/* 80B43774  B0 83 00 00 */	sth r4, 0(r3)
/* 80B43778  38 00 00 01 */	li r0, 1
/* 80B4377C  B0 03 00 02 */	sth r0, 2(r3)
/* 80B43780  90 83 00 04 */	stw r4, 4(r3)
/* 80B43784  4E 80 00 20 */	blr 
