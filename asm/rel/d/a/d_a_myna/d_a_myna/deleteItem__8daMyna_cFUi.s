lbl_80949144:
/* 80949144  39 20 00 00 */	li r9, 0
/* 80949148  38 A0 00 00 */	li r5, 0
/* 8094914C  54 80 20 36 */	slwi r0, r4, 4
/* 80949150  7D 03 02 14 */	add r8, r3, r0
/* 80949154  38 E0 FF FF */	li r7, -1
/* 80949158  38 C0 00 04 */	li r6, 4
/* 8094915C  48 00 00 24 */	b lbl_80949180
lbl_80949160:
/* 80949160  38 05 08 68 */	addi r0, r5, 0x868
/* 80949164  7C 03 00 2E */	lwzx r0, r3, r0
/* 80949168  7C 04 00 40 */	cmplw r4, r0
/* 8094916C  40 82 00 0C */	bne lbl_80949178
/* 80949170  90 E8 08 68 */	stw r7, 0x868(r8)
/* 80949174  98 C8 08 75 */	stb r6, 0x875(r8)
lbl_80949178:
/* 80949178  39 29 00 01 */	addi r9, r9, 1
/* 8094917C  38 A5 00 10 */	addi r5, r5, 0x10
lbl_80949180:
/* 80949180  88 03 09 30 */	lbz r0, 0x930(r3)
/* 80949184  7C 09 00 00 */	cmpw r9, r0
/* 80949188  41 80 FF D8 */	blt lbl_80949160
/* 8094918C  4E 80 00 20 */	blr 