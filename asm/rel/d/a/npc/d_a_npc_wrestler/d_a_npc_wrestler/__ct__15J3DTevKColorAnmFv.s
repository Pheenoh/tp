lbl_80B2FC30:
/* 80B2FC30  38 80 00 00 */	li r4, 0
/* 80B2FC34  B0 83 00 00 */	sth r4, 0(r3)
/* 80B2FC38  38 00 00 01 */	li r0, 1
/* 80B2FC3C  B0 03 00 02 */	sth r0, 2(r3)
/* 80B2FC40  90 83 00 04 */	stw r4, 4(r3)
/* 80B2FC44  4E 80 00 20 */	blr 
