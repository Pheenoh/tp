lbl_8035E6D4:
/* 8035E6D4  81 02 CB 80 */	lwz r8, __GXData(r2)
/* 8035E6D8  38 00 00 01 */	li r0, 1
/* 8035E6DC  54 84 06 3F */	clrlwi. r4, r4, 0x18
/* 8035E6E0  80 E8 05 94 */	lwz r7, 0x594(r8)
/* 8035E6E4  7C 00 18 30 */	slw r0, r0, r3
/* 8035E6E8  7C E7 00 78 */	andc r7, r7, r0
/* 8035E6EC  7C 80 18 30 */	slw r0, r4, r3
/* 8035E6F0  7C E0 03 78 */	or r0, r7, r0
/* 8035E6F4  90 08 05 94 */	stw r0, 0x594(r8)
/* 8035E6F8  4D 82 00 20 */	beqlr 
/* 8035E6FC  54 60 10 3A */	slwi r0, r3, 2
/* 8035E700  7C E8 02 14 */	add r7, r8, r0
/* 8035E704  38 05 FF FF */	addi r0, r5, -1
/* 8035E708  80 67 00 B8 */	lwz r3, 0xb8(r7)
/* 8035E70C  50 03 04 3E */	rlwimi r3, r0, 0, 0x10, 0x1f
/* 8035E710  90 67 00 B8 */	stw r3, 0xb8(r7)
/* 8035E714  38 06 FF FF */	addi r0, r6, -1
/* 8035E718  38 A0 00 61 */	li r5, 0x61
/* 8035E71C  80 67 00 D8 */	lwz r3, 0xd8(r7)
/* 8035E720  50 03 04 3E */	rlwimi r3, r0, 0, 0x10, 0x1f
/* 8035E724  3C 80 CC 01 */	lis r4, 0xCC01 /* 0xCC008000@ha */
/* 8035E728  90 67 00 D8 */	stw r3, 0xd8(r7)
/* 8035E72C  38 00 00 00 */	li r0, 0
/* 8035E730  98 A4 80 00 */	stb r5, 0x8000(r4)  /* 0xCC008000@l */
/* 8035E734  80 67 00 B8 */	lwz r3, 0xb8(r7)
/* 8035E738  90 64 80 00 */	stw r3, -0x8000(r4)
/* 8035E73C  98 A4 80 00 */	stb r5, -0x8000(r4)
/* 8035E740  80 67 00 D8 */	lwz r3, 0xd8(r7)
/* 8035E744  90 64 80 00 */	stw r3, -0x8000(r4)
/* 8035E748  B0 08 00 02 */	sth r0, 2(r8)
/* 8035E74C  4E 80 00 20 */	blr 