lbl_80997C44:
/* 80997C44  3C 80 80 3A */	lis r4, __ptmf_null@ha /* 0x803A2180@ha */
/* 80997C48  38 A4 21 80 */	addi r5, r4, __ptmf_null@l /* 0x803A2180@l */
/* 80997C4C  80 85 00 00 */	lwz r4, 0(r5)
/* 80997C50  80 05 00 04 */	lwz r0, 4(r5)
/* 80997C54  90 83 10 E0 */	stw r4, 0x10e0(r3)
/* 80997C58  90 03 10 E4 */	stw r0, 0x10e4(r3)
/* 80997C5C  80 05 00 08 */	lwz r0, 8(r5)
/* 80997C60  90 03 10 E8 */	stw r0, 0x10e8(r3)
/* 80997C64  88 03 10 D4 */	lbz r0, 0x10d4(r3)
/* 80997C68  2C 00 00 00 */	cmpwi r0, 0
/* 80997C6C  41 82 00 08 */	beq lbl_80997C74
/* 80997C70  48 00 00 28 */	b lbl_80997C98
lbl_80997C74:
/* 80997C74  3C 80 80 9A */	lis r4, lit_5165@ha /* 0x80999E5C@ha */
/* 80997C78  38 A4 9E 5C */	addi r5, r4, lit_5165@l /* 0x80999E5C@l */
/* 80997C7C  80 85 00 00 */	lwz r4, 0(r5)
/* 80997C80  80 05 00 04 */	lwz r0, 4(r5)
/* 80997C84  90 83 10 E0 */	stw r4, 0x10e0(r3)
/* 80997C88  90 03 10 E4 */	stw r0, 0x10e4(r3)
/* 80997C8C  80 05 00 08 */	lwz r0, 8(r5)
/* 80997C90  90 03 10 E8 */	stw r0, 0x10e8(r3)
/* 80997C94  48 00 00 24 */	b lbl_80997CB8
lbl_80997C98:
/* 80997C98  3C 80 80 9A */	lis r4, lit_5167@ha /* 0x80999E68@ha */
/* 80997C9C  38 A4 9E 68 */	addi r5, r4, lit_5167@l /* 0x80999E68@l */
/* 80997CA0  80 85 00 00 */	lwz r4, 0(r5)
/* 80997CA4  80 05 00 04 */	lwz r0, 4(r5)
/* 80997CA8  90 83 10 E0 */	stw r4, 0x10e0(r3)
/* 80997CAC  90 03 10 E4 */	stw r0, 0x10e4(r3)
/* 80997CB0  80 05 00 08 */	lwz r0, 8(r5)
/* 80997CB4  90 03 10 E8 */	stw r0, 0x10e8(r3)
lbl_80997CB8:
/* 80997CB8  38 60 00 01 */	li r3, 1
/* 80997CBC  4E 80 00 20 */	blr 
