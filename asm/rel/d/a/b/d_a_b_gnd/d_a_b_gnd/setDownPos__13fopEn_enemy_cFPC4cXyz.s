lbl_80600A1C:
/* 80600A1C  C0 04 00 00 */	lfs f0, 0(r4)
/* 80600A20  D0 03 05 68 */	stfs f0, 0x568(r3)
/* 80600A24  C0 04 00 04 */	lfs f0, 4(r4)
/* 80600A28  D0 03 05 6C */	stfs f0, 0x56c(r3)
/* 80600A2C  C0 04 00 08 */	lfs f0, 8(r4)
/* 80600A30  D0 03 05 70 */	stfs f0, 0x570(r3)
/* 80600A34  4E 80 00 20 */	blr 
