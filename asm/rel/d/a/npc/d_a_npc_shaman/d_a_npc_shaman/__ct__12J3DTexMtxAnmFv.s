lbl_80AE3560:
/* 80AE3560  38 80 00 00 */	li r4, 0
/* 80AE3564  B0 83 00 00 */	sth r4, 0(r3)
/* 80AE3568  38 00 00 01 */	li r0, 1
/* 80AE356C  B0 03 00 02 */	sth r0, 2(r3)
/* 80AE3570  90 83 00 04 */	stw r4, 4(r3)
/* 80AE3574  4E 80 00 20 */	blr 
