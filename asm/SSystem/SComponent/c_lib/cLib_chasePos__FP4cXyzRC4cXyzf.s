lbl_802707AC:
/* 802707AC  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802707B0  7C 08 02 A6 */	mflr r0
/* 802707B4  90 01 00 54 */	stw r0, 0x54(r1)
/* 802707B8  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 802707BC  F3 E1 00 48 */	psq_st f31, 72(r1), 0, 0 /* qr0 */
/* 802707C0  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802707C4  93 C1 00 38 */	stw r30, 0x38(r1)
/* 802707C8  7C 7E 1B 78 */	mr r30, r3
/* 802707CC  7C 9F 23 78 */	mr r31, r4
/* 802707D0  FF E0 08 90 */	fmr f31, f1
/* 802707D4  C0 02 B7 E0 */	lfs f0, lit_2262(r2)
/* 802707D8  FC 1F 00 00 */	fcmpu cr0, f31, f0
/* 802707DC  41 82 01 7C */	beq lbl_80270958
/* 802707E0  38 61 00 18 */	addi r3, r1, 0x18
/* 802707E4  7F C4 F3 78 */	mr r4, r30
/* 802707E8  7F E5 FB 78 */	mr r5, r31
/* 802707EC  4B FF 63 49 */	bl __mi__4cXyzCFRC3Vec
/* 802707F0  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 802707F4  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 802707F8  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 802707FC  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80270800  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 80270804  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80270808  38 61 00 24 */	addi r3, r1, 0x24
/* 8027080C  48 0D 69 2D */	bl PSVECSquareMag
/* 80270810  C0 02 B7 E0 */	lfs f0, lit_2262(r2)
/* 80270814  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80270818  40 81 00 58 */	ble lbl_80270870
/* 8027081C  FC 00 08 34 */	frsqrte f0, f1
/* 80270820  C8 82 B7 E8 */	lfd f4, lit_2379(r2)
/* 80270824  FC 44 00 32 */	fmul f2, f4, f0
/* 80270828  C8 62 B7 F0 */	lfd f3, lit_2380(r2)
/* 8027082C  FC 00 00 32 */	fmul f0, f0, f0
/* 80270830  FC 01 00 32 */	fmul f0, f1, f0
/* 80270834  FC 03 00 28 */	fsub f0, f3, f0
/* 80270838  FC 02 00 32 */	fmul f0, f2, f0
/* 8027083C  FC 44 00 32 */	fmul f2, f4, f0
/* 80270840  FC 00 00 32 */	fmul f0, f0, f0
/* 80270844  FC 01 00 32 */	fmul f0, f1, f0
/* 80270848  FC 03 00 28 */	fsub f0, f3, f0
/* 8027084C  FC 02 00 32 */	fmul f0, f2, f0
/* 80270850  FC 44 00 32 */	fmul f2, f4, f0
/* 80270854  FC 00 00 32 */	fmul f0, f0, f0
/* 80270858  FC 01 00 32 */	fmul f0, f1, f0
/* 8027085C  FC 03 00 28 */	fsub f0, f3, f0
/* 80270860  FC 02 00 32 */	fmul f0, f2, f0
/* 80270864  FC 21 00 32 */	fmul f1, f1, f0
/* 80270868  FC 20 08 18 */	frsp f1, f1
/* 8027086C  48 00 00 88 */	b lbl_802708F4
lbl_80270870:
/* 80270870  C8 02 B7 F8 */	lfd f0, lit_2381(r2)
/* 80270874  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80270878  40 80 00 10 */	bge lbl_80270888
/* 8027087C  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 80270880  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
/* 80270884  48 00 00 70 */	b lbl_802708F4
lbl_80270888:
/* 80270888  D0 21 00 08 */	stfs f1, 8(r1)
/* 8027088C  80 81 00 08 */	lwz r4, 8(r1)
/* 80270890  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 80270894  3C 00 7F 80 */	lis r0, 0x7f80
/* 80270898  7C 03 00 00 */	cmpw r3, r0
/* 8027089C  41 82 00 14 */	beq lbl_802708B0
/* 802708A0  40 80 00 40 */	bge lbl_802708E0
/* 802708A4  2C 03 00 00 */	cmpwi r3, 0
/* 802708A8  41 82 00 20 */	beq lbl_802708C8
/* 802708AC  48 00 00 34 */	b lbl_802708E0
lbl_802708B0:
/* 802708B0  54 80 02 7F */	clrlwi. r0, r4, 9
/* 802708B4  41 82 00 0C */	beq lbl_802708C0
/* 802708B8  38 00 00 01 */	li r0, 1
/* 802708BC  48 00 00 28 */	b lbl_802708E4
lbl_802708C0:
/* 802708C0  38 00 00 02 */	li r0, 2
/* 802708C4  48 00 00 20 */	b lbl_802708E4
lbl_802708C8:
/* 802708C8  54 80 02 7F */	clrlwi. r0, r4, 9
/* 802708CC  41 82 00 0C */	beq lbl_802708D8
/* 802708D0  38 00 00 05 */	li r0, 5
/* 802708D4  48 00 00 10 */	b lbl_802708E4
lbl_802708D8:
/* 802708D8  38 00 00 03 */	li r0, 3
/* 802708DC  48 00 00 08 */	b lbl_802708E4
lbl_802708E0:
/* 802708E0  38 00 00 04 */	li r0, 4
lbl_802708E4:
/* 802708E4  2C 00 00 01 */	cmpwi r0, 1
/* 802708E8  40 82 00 0C */	bne lbl_802708F4
/* 802708EC  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 802708F0  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
lbl_802708F4:
/* 802708F4  FC 00 0A 10 */	fabs f0, f1
/* 802708F8  FC 40 00 18 */	frsp f2, f0
/* 802708FC  C0 02 B8 00 */	lfs f0, lit_2382(r2)
/* 80270900  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80270904  41 80 00 10 */	blt lbl_80270914
/* 80270908  FC 01 F8 40 */	fcmpo cr0, f1, f31
/* 8027090C  4C 40 13 82 */	cror 2, 0, 2
/* 80270910  40 82 00 24 */	bne lbl_80270934
lbl_80270914:
/* 80270914  C0 1F 00 00 */	lfs f0, 0(r31)
/* 80270918  D0 1E 00 00 */	stfs f0, 0(r30)
/* 8027091C  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80270920  D0 1E 00 04 */	stfs f0, 4(r30)
/* 80270924  C0 1F 00 08 */	lfs f0, 8(r31)
/* 80270928  D0 1E 00 08 */	stfs f0, 8(r30)
/* 8027092C  38 60 00 01 */	li r3, 1
/* 80270930  48 00 00 40 */	b lbl_80270970
lbl_80270934:
/* 80270934  38 61 00 0C */	addi r3, r1, 0xc
/* 80270938  38 81 00 24 */	addi r4, r1, 0x24
/* 8027093C  EC 3F 08 24 */	fdivs f1, f31, f1
/* 80270940  4B FF 62 45 */	bl __ml__4cXyzCFf
/* 80270944  7F C3 F3 78 */	mr r3, r30
/* 80270948  38 81 00 0C */	addi r4, r1, 0xc
/* 8027094C  7F C5 F3 78 */	mr r5, r30
/* 80270950  48 0D 67 65 */	bl PSVECSubtract
/* 80270954  48 00 00 18 */	b lbl_8027096C
lbl_80270958:
/* 80270958  4B FF 66 D5 */	bl __eq__4cXyzCFRC3Vec
/* 8027095C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80270960  41 82 00 0C */	beq lbl_8027096C
/* 80270964  38 60 00 01 */	li r3, 1
/* 80270968  48 00 00 08 */	b lbl_80270970
lbl_8027096C:
/* 8027096C  38 60 00 00 */	li r3, 0
lbl_80270970:
/* 80270970  E3 E1 00 48 */	psq_l f31, 72(r1), 0, 0 /* qr0 */
/* 80270974  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 80270978  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8027097C  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80270980  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80270984  7C 08 03 A6 */	mtlr r0
/* 80270988  38 21 00 50 */	addi r1, r1, 0x50
/* 8027098C  4E 80 00 20 */	blr 
