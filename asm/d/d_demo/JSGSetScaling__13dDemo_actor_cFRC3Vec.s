lbl_80038980:
/* 80038980  C0 04 00 00 */	lfs f0, 0(r4)
/* 80038984  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 80038988  C0 04 00 04 */	lfs f0, 4(r4)
/* 8003898C  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 80038990  C0 04 00 08 */	lfs f0, 8(r4)
/* 80038994  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 80038998  A0 03 00 04 */	lhz r0, 4(r3)
/* 8003899C  60 00 00 04 */	ori r0, r0, 4
/* 800389A0  B0 03 00 04 */	sth r0, 4(r3)
/* 800389A4  4E 80 00 20 */	blr 
