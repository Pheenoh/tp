lbl_8027E3F4:
/* 8027E3F4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8027E3F8  80 83 00 20 */	lwz r4, 0x20(r3)
/* 8027E3FC  C0 24 01 A8 */	lfs f1, 0x1a8(r4)
/* 8027E400  C0 04 01 98 */	lfs f0, 0x198(r4)
/* 8027E404  C0 42 B9 58 */	lfs f2, lit_2632(r2)
/* 8027E408  D0 41 00 08 */	stfs f2, 8(r1)
/* 8027E40C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8027E410  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8027E414  E0 01 00 08 */	psq_l f0, 8(r1), 0, 0 /* qr0 */
/* 8027E418  10 00 00 32 */	ps_mul f0, f0, f0
/* 8027E41C  10 A1 00 7A */	ps_madd f5, f1, f1, f0
/* 8027E420  10 A5 00 14 */	ps_sum0 f5, f5, f0, f0
/* 8027E424  C0 22 B9 5C */	lfs f1, lit_2633(r2)
/* 8027E428  3C 80 80 45 */	lis r4, __float_epsilon@ha /* 0x80450AEC@ha */
/* 8027E42C  C0 04 0A EC */	lfs f0, __float_epsilon@l(r4)  /* 0x80450AEC@l */
/* 8027E430  EC 01 00 32 */	fmuls f0, f1, f0
/* 8027E434  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 8027E438  4C 40 13 82 */	cror 2, 0, 2
/* 8027E43C  41 82 00 58 */	beq lbl_8027E494
/* 8027E440  FC 05 10 40 */	fcmpo cr0, f5, f2
/* 8027E444  4C 40 13 82 */	cror 2, 0, 2
/* 8027E448  40 82 00 0C */	bne lbl_8027E454
/* 8027E44C  FC 60 28 90 */	fmr f3, f5
/* 8027E450  48 00 00 2C */	b lbl_8027E47C
lbl_8027E454:
/* 8027E454  FC 80 28 34 */	frsqrte f4, f5
/* 8027E458  FC 80 20 18 */	frsp f4, f4
/* 8027E45C  C0 02 B9 60 */	lfs f0, lit_2634(r2)
/* 8027E460  EC 40 01 32 */	fmuls f2, f0, f4
/* 8027E464  C0 22 B9 64 */	lfs f1, lit_2635(r2)
/* 8027E468  EC 04 01 32 */	fmuls f0, f4, f4
/* 8027E46C  EC 05 00 32 */	fmuls f0, f5, f0
/* 8027E470  EC 01 00 28 */	fsubs f0, f1, f0
/* 8027E474  EC 02 00 32 */	fmuls f0, f2, f0
/* 8027E478  FC 60 00 90 */	fmr f3, f0
lbl_8027E47C:
/* 8027E47C  E0 01 00 08 */	psq_l f0, 8(r1), 0, 0 /* qr0 */
/* 8027E480  E0 21 80 10 */	psq_l f1, 16(r1), 1, 0 /* qr0 */
/* 8027E484  10 00 00 D8 */	ps_muls0 f0, f0, f3
/* 8027E488  F0 01 00 08 */	psq_st f0, 8(r1), 0, 0 /* qr0 */
/* 8027E48C  10 01 00 D8 */	ps_muls0 f0, f1, f3
/* 8027E490  F0 01 80 10 */	psq_st f0, 16(r1), 1, 0 /* qr0 */
lbl_8027E494:
/* 8027E494  C0 02 B9 68 */	lfs f0, lit_2636(r2)
/* 8027E498  80 83 00 20 */	lwz r4, 0x20(r3)
/* 8027E49C  D0 04 01 54 */	stfs f0, 0x154(r4)
/* 8027E4A0  C0 62 B9 58 */	lfs f3, lit_2632(r2)
/* 8027E4A4  80 83 00 20 */	lwz r4, 0x20(r3)
/* 8027E4A8  D0 64 01 58 */	stfs f3, 0x158(r4)
/* 8027E4AC  80 83 00 20 */	lwz r4, 0x20(r3)
/* 8027E4B0  D0 64 01 5C */	stfs f3, 0x15c(r4)
/* 8027E4B4  80 83 00 20 */	lwz r4, 0x20(r3)
/* 8027E4B8  C0 04 01 90 */	lfs f0, 0x190(r4)
/* 8027E4BC  D0 04 01 60 */	stfs f0, 0x160(r4)
/* 8027E4C0  80 83 00 20 */	lwz r4, 0x20(r3)
/* 8027E4C4  D0 64 01 64 */	stfs f3, 0x164(r4)
/* 8027E4C8  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 8027E4CC  80 83 00 20 */	lwz r4, 0x20(r3)
/* 8027E4D0  D0 44 01 68 */	stfs f2, 0x168(r4)
/* 8027E4D4  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 8027E4D8  FC 00 08 50 */	fneg f0, f1
/* 8027E4DC  80 83 00 20 */	lwz r4, 0x20(r3)
/* 8027E4E0  D0 04 01 6C */	stfs f0, 0x16c(r4)
/* 8027E4E4  80 83 00 20 */	lwz r4, 0x20(r3)
/* 8027E4E8  C0 04 01 A0 */	lfs f0, 0x1a0(r4)
/* 8027E4EC  D0 04 01 70 */	stfs f0, 0x170(r4)
/* 8027E4F0  80 83 00 20 */	lwz r4, 0x20(r3)
/* 8027E4F4  D0 64 01 74 */	stfs f3, 0x174(r4)
/* 8027E4F8  80 83 00 20 */	lwz r4, 0x20(r3)
/* 8027E4FC  D0 24 01 78 */	stfs f1, 0x178(r4)
/* 8027E500  80 83 00 20 */	lwz r4, 0x20(r3)
/* 8027E504  D0 44 01 7C */	stfs f2, 0x17c(r4)
/* 8027E508  80 63 00 20 */	lwz r3, 0x20(r3)
/* 8027E50C  C0 03 01 B0 */	lfs f0, 0x1b0(r3)
/* 8027E510  D0 03 01 80 */	stfs f0, 0x180(r3)
/* 8027E514  38 21 00 20 */	addi r1, r1, 0x20
/* 8027E518  4E 80 00 20 */	blr 
