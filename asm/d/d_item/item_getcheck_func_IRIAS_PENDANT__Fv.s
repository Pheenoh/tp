lbl_8009AC14:
/* 8009AC14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009AC18  7C 08 02 A6 */	mflr r0
/* 8009AC1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009AC20  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 8009AC24  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 8009AC28  38 63 00 9C */	addi r3, r3, 0x9c
/* 8009AC2C  38 80 00 15 */	li r4, 0x15
/* 8009AC30  38 A0 00 01 */	li r5, 1
/* 8009AC34  4B F9 83 FD */	bl getItem__17dSv_player_item_cCFib
/* 8009AC38  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8009AC3C  20 00 00 83 */	subfic r0, r0, 0x83
/* 8009AC40  7C 00 00 34 */	cntlzw r0, r0
/* 8009AC44  54 03 D9 7E */	srwi r3, r0, 5
/* 8009AC48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009AC4C  7C 08 03 A6 */	mtlr r0
/* 8009AC50  38 21 00 10 */	addi r1, r1, 0x10
/* 8009AC54  4E 80 00 20 */	blr 
