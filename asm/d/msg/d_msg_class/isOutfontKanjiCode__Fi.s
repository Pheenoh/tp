lbl_802288A8:
/* 802288A8  2C 03 00 5C */	cmpwi r3, 0x5c
/* 802288AC  41 82 00 40 */	beq lbl_802288EC
/* 802288B0  40 80 00 1C */	bge lbl_802288CC
/* 802288B4  2C 03 00 40 */	cmpwi r3, 0x40
/* 802288B8  41 82 00 34 */	beq lbl_802288EC
/* 802288BC  40 80 00 38 */	bge lbl_802288F4
/* 802288C0  2C 03 00 24 */	cmpwi r3, 0x24
/* 802288C4  41 82 00 28 */	beq lbl_802288EC
/* 802288C8  48 00 00 2C */	b lbl_802288F4
lbl_802288CC:
/* 802288CC  3C 80 00 01 */	lis r4, 0x0001 /* 0x000081F4@ha */
/* 802288D0  38 04 81 F4 */	addi r0, r4, 0x81F4 /* 0x000081F4@l */
/* 802288D4  7C 03 00 00 */	cmpw r3, r0
/* 802288D8  40 80 00 1C */	bge lbl_802288F4
/* 802288DC  38 04 81 F2 */	addi r0, r4, -32270
/* 802288E0  7C 03 00 00 */	cmpw r3, r0
/* 802288E4  40 80 00 08 */	bge lbl_802288EC
/* 802288E8  48 00 00 0C */	b lbl_802288F4
lbl_802288EC:
/* 802288EC  38 60 00 01 */	li r3, 1
/* 802288F0  4E 80 00 20 */	blr 
lbl_802288F4:
/* 802288F4  38 60 00 00 */	li r3, 0
/* 802288F8  4E 80 00 20 */	blr 
