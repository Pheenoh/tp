lbl_80346990:
/* 80346990  FC 20 08 18 */	frsp f1, f1
/* 80346994  E0 83 00 00 */	psq_l f4, 0(r3), 0, 0 /* qr0 */
/* 80346998  FC 40 10 18 */	frsp f2, f2
/* 8034699C  E0 A3 00 08 */	psq_l f5, 8(r3), 0, 0 /* qr0 */
/* 803469A0  FC 60 18 18 */	frsp f3, f3
/* 803469A4  10 84 00 58 */	ps_muls0 f4, f4, f1
/* 803469A8  E0 C3 00 10 */	psq_l f6, 16(r3), 0, 0 /* qr0 */
/* 803469AC  10 A5 00 58 */	ps_muls0 f5, f5, f1
/* 803469B0  E0 E3 00 18 */	psq_l f7, 24(r3), 0, 0 /* qr0 */
/* 803469B4  10 C6 00 98 */	ps_muls0 f6, f6, f2
/* 803469B8  E1 03 00 20 */	psq_l f8, 32(r3), 0, 0 /* qr0 */
/* 803469BC  F0 84 00 00 */	psq_st f4, 0(r4), 0, 0 /* qr0 */
/* 803469C0  10 E7 00 98 */	ps_muls0 f7, f7, f2
/* 803469C4  E0 43 00 28 */	psq_l f2, 40(r3), 0, 0 /* qr0 */
/* 803469C8  F0 A4 00 08 */	psq_st f5, 8(r4), 0, 0 /* qr0 */
/* 803469CC  11 08 00 D8 */	ps_muls0 f8, f8, f3
/* 803469D0  F0 C4 00 10 */	psq_st f6, 16(r4), 0, 0 /* qr0 */
/* 803469D4  10 42 00 D8 */	ps_muls0 f2, f2, f3
/* 803469D8  F0 E4 00 18 */	psq_st f7, 24(r4), 0, 0 /* qr0 */
/* 803469DC  F1 04 00 20 */	psq_st f8, 32(r4), 0, 0 /* qr0 */
/* 803469E0  F0 44 00 28 */	psq_st f2, 40(r4), 0, 0 /* qr0 */
/* 803469E4  4E 80 00 20 */	blr 
