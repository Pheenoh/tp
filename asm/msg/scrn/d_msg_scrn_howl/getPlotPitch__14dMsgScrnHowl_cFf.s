lbl_80244108:
/* 80244108  C0 02 B2 60 */	lfs f0, lit_4431(r2)
/* 8024410C  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 80244110  40 82 00 0C */	bne lbl_8024411C
/* 80244114  C0 23 1B 08 */	lfs f1, 0x1b08(r3)
/* 80244118  4E 80 00 20 */	blr 
lbl_8024411C:
/* 8024411C  C0 02 B2 94 */	lfs f0, lit_4827(r2)
/* 80244120  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 80244124  40 82 00 0C */	bne lbl_80244130
/* 80244128  C0 23 1B 0C */	lfs f1, 0x1b0c(r3)
/* 8024412C  4E 80 00 20 */	blr 
lbl_80244130:
/* 80244130  C0 02 B2 5C */	lfs f0, lit_4430(r2)
/* 80244134  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 80244138  40 82 00 0C */	bne lbl_80244144
/* 8024413C  C0 23 1B 10 */	lfs f1, 0x1b10(r3)
/* 80244140  4E 80 00 20 */	blr 
lbl_80244144:
/* 80244144  C0 22 B2 50 */	lfs f1, lit_4427(r2)
/* 80244148  4E 80 00 20 */	blr 
