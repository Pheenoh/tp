lbl_805BAE6C:
/* 805BAE6C  3C 80 80 5C */	lis r4, lit_3800@ha /* 0x805C6C74@ha */
/* 805BAE70  38 A4 6C 74 */	addi r5, r4, lit_3800@l /* 0x805C6C74@l */
/* 805BAE74  3C 80 80 5C */	lis r4, __vt__12daB_DR_HIO_c@ha /* 0x805C78AC@ha */
/* 805BAE78  38 04 78 AC */	addi r0, r4, __vt__12daB_DR_HIO_c@l /* 0x805C78AC@l */
/* 805BAE7C  90 03 00 00 */	stw r0, 0(r3)
/* 805BAE80  38 00 FF FF */	li r0, -1
/* 805BAE84  98 03 00 04 */	stb r0, 4(r3)
/* 805BAE88  C0 05 00 00 */	lfs f0, 0(r5)
/* 805BAE8C  D0 03 00 08 */	stfs f0, 8(r3)
/* 805BAE90  C0 05 00 04 */	lfs f0, 4(r5)
/* 805BAE94  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 805BAE98  C0 25 00 08 */	lfs f1, 8(r5)
/* 805BAE9C  D0 23 00 10 */	stfs f1, 0x10(r3)
/* 805BAEA0  C0 05 00 0C */	lfs f0, 0xc(r5)
/* 805BAEA4  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 805BAEA8  C0 05 00 10 */	lfs f0, 0x10(r5)
/* 805BAEAC  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 805BAEB0  C0 05 00 14 */	lfs f0, 0x14(r5)
/* 805BAEB4  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 805BAEB8  D0 23 00 24 */	stfs f1, 0x24(r3)
/* 805BAEBC  C0 05 00 18 */	lfs f0, 0x18(r5)
/* 805BAEC0  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 805BAEC4  C0 05 00 1C */	lfs f0, 0x1c(r5)
/* 805BAEC8  D0 03 00 30 */	stfs f0, 0x30(r3)
/* 805BAECC  C0 05 00 20 */	lfs f0, 0x20(r5)
/* 805BAED0  D0 03 00 34 */	stfs f0, 0x34(r3)
/* 805BAED4  C0 05 00 24 */	lfs f0, 0x24(r5)
/* 805BAED8  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 805BAEDC  C0 05 00 28 */	lfs f0, 0x28(r5)
/* 805BAEE0  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 805BAEE4  39 00 00 B4 */	li r8, 0xb4
/* 805BAEE8  B1 03 00 38 */	sth r8, 0x38(r3)
/* 805BAEEC  38 00 00 32 */	li r0, 0x32
/* 805BAEF0  B0 03 00 3C */	sth r0, 0x3c(r3)
/* 805BAEF4  38 E0 01 2C */	li r7, 0x12c
/* 805BAEF8  B0 E3 00 3E */	sth r7, 0x3e(r3)
/* 805BAEFC  38 C0 00 64 */	li r6, 0x64
/* 805BAF00  B0 C3 00 4C */	sth r6, 0x4c(r3)
/* 805BAF04  38 00 00 F0 */	li r0, 0xf0
/* 805BAF08  B0 03 00 40 */	sth r0, 0x40(r3)
/* 805BAF0C  38 00 00 C8 */	li r0, 0xc8
/* 805BAF10  B0 03 00 42 */	sth r0, 0x42(r3)
/* 805BAF14  B0 E3 00 44 */	sth r7, 0x44(r3)
/* 805BAF18  B0 E3 00 46 */	sth r7, 0x46(r3)
/* 805BAF1C  B0 E3 00 4A */	sth r7, 0x4a(r3)
/* 805BAF20  38 80 01 C2 */	li r4, 0x1c2
/* 805BAF24  B0 83 00 3A */	sth r4, 0x3a(r3)
/* 805BAF28  B0 83 00 48 */	sth r4, 0x48(r3)
/* 805BAF2C  38 00 00 96 */	li r0, 0x96
/* 805BAF30  B0 03 00 4E */	sth r0, 0x4e(r3)
/* 805BAF34  38 00 01 86 */	li r0, 0x186
/* 805BAF38  B0 03 00 50 */	sth r0, 0x50(r3)
/* 805BAF3C  B0 83 00 52 */	sth r4, 0x52(r3)
/* 805BAF40  38 00 01 90 */	li r0, 0x190
/* 805BAF44  B0 03 00 54 */	sth r0, 0x54(r3)
/* 805BAF48  38 A0 01 F4 */	li r5, 0x1f4
/* 805BAF4C  B0 A3 00 56 */	sth r5, 0x56(r3)
/* 805BAF50  38 00 00 0F */	li r0, 0xf
/* 805BAF54  B0 03 00 58 */	sth r0, 0x58(r3)
/* 805BAF58  38 80 00 01 */	li r4, 1
/* 805BAF5C  B0 83 00 5A */	sth r4, 0x5a(r3)
/* 805BAF60  B0 C3 00 5C */	sth r6, 0x5c(r3)
/* 805BAF64  B0 A3 00 5E */	sth r5, 0x5e(r3)
/* 805BAF68  B1 03 00 60 */	sth r8, 0x60(r3)
/* 805BAF6C  B0 E3 00 62 */	sth r7, 0x62(r3)
/* 805BAF70  38 00 00 00 */	li r0, 0
/* 805BAF74  98 03 00 64 */	stb r0, 0x64(r3)
/* 805BAF78  98 83 00 65 */	stb r4, 0x65(r3)
/* 805BAF7C  4E 80 00 20 */	blr 
