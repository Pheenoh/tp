lbl_80159E54:
/* 80159E54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80159E58  7C 08 02 A6 */	mflr r0
/* 80159E5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80159E60  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80159E64  7C 65 1B 78 */	mr r5, r3
/* 80159E68  7C 9F 23 78 */	mr r31, r4
/* 80159E6C  80 03 00 04 */	lwz r0, 4(r3)
/* 80159E70  28 00 00 00 */	cmplwi r0, 0
/* 80159E74  40 82 00 2C */	bne lbl_80159EA0
/* 80159E78  80 65 00 08 */	lwz r3, 8(r5)
/* 80159E7C  80 85 00 20 */	lwz r4, 0x20(r5)
/* 80159E80  4B EF 79 31 */	bl dPath_GetPnt__FPC5dPathi
/* 80159E84  C0 03 00 04 */	lfs f0, 4(r3)
/* 80159E88  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80159E8C  C0 03 00 08 */	lfs f0, 8(r3)
/* 80159E90  D0 1F 00 04 */	stfs f0, 4(r31)
/* 80159E94  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80159E98  D0 1F 00 08 */	stfs f0, 8(r31)
/* 80159E9C  48 00 00 1C */	b lbl_80159EB8
lbl_80159EA0:
/* 80159EA0  C0 05 00 0C */	lfs f0, 0xc(r5)
/* 80159EA4  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80159EA8  C0 05 00 10 */	lfs f0, 0x10(r5)
/* 80159EAC  D0 1F 00 04 */	stfs f0, 4(r31)
/* 80159EB0  C0 05 00 14 */	lfs f0, 0x14(r5)
/* 80159EB4  D0 1F 00 08 */	stfs f0, 8(r31)
lbl_80159EB8:
/* 80159EB8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80159EBC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80159EC0  7C 08 03 A6 */	mtlr r0
/* 80159EC4  38 21 00 10 */	addi r1, r1, 0x10
/* 80159EC8  4E 80 00 20 */	blr 
