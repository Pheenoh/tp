lbl_80204068:
/* 80204068  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8020406C  7C 08 02 A6 */	mflr r0
/* 80204070  90 01 00 24 */	stw r0, 0x24(r1)
/* 80204074  39 61 00 20 */	addi r11, r1, 0x20
/* 80204078  48 15 E1 65 */	bl _savegpr_29
/* 8020407C  7C 7E 1B 78 */	mr r30, r3
/* 80204080  7C 9F 23 78 */	mr r31, r4
/* 80204084  7C BD 2B 78 */	mr r29, r5
/* 80204088  54 80 04 63 */	rlwinm. r0, r4, 0, 0x11, 0x11
/* 8020408C  40 82 00 94 */	bne lbl_80204120
/* 80204090  48 03 41 9D */	bl getStatus__12dMsgObject_cFv
/* 80204094  54 60 04 3E */	clrlwi r0, r3, 0x10
/* 80204098  20 60 00 01 */	subfic r3, r0, 1
/* 8020409C  30 03 FF FF */	addic r0, r3, -1
/* 802040A0  7C 00 19 10 */	subfe r0, r0, r3
/* 802040A4  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 802040A8  40 82 00 78 */	bne lbl_80204120
/* 802040AC  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 802040B0  41 82 00 70 */	beq lbl_80204120
/* 802040B4  57 E0 06 31 */	rlwinm. r0, r31, 0, 0x18, 0x18
/* 802040B8  40 82 00 68 */	bne lbl_80204120
/* 802040BC  57 E0 00 43 */	rlwinm. r0, r31, 0, 1, 1
/* 802040C0  40 82 00 60 */	bne lbl_80204120
/* 802040C4  57 E0 04 E7 */	rlwinm. r0, r31, 0, 0x13, 0x13
/* 802040C8  40 82 00 58 */	bne lbl_80204120
/* 802040CC  57 E0 06 73 */	rlwinm. r0, r31, 0, 0x19, 0x19
/* 802040D0  41 82 00 30 */	beq lbl_80204100
/* 802040D4  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 802040D8  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 802040DC  88 03 4F AD */	lbz r0, 0x4fad(r3)
/* 802040E0  28 00 00 00 */	cmplwi r0, 0
/* 802040E4  41 82 00 10 */	beq lbl_802040F4
/* 802040E8  A0 03 4F A4 */	lhz r0, 0x4fa4(r3)
/* 802040EC  54 00 07 FE */	clrlwi r0, r0, 0x1f
/* 802040F0  48 00 00 08 */	b lbl_802040F8
lbl_802040F4:
/* 802040F4  38 00 00 00 */	li r0, 0
lbl_802040F8:
/* 802040F8  54 00 04 3F */	clrlwi. r0, r0, 0x10
/* 802040FC  40 82 00 24 */	bne lbl_80204120
lbl_80204100:
/* 80204100  57 E0 05 EF */	rlwinm. r0, r31, 0, 0x17, 0x17
/* 80204104  40 82 00 1C */	bne lbl_80204120
/* 80204108  57 E0 07 39 */	rlwinm. r0, r31, 0, 0x1c, 0x1c
/* 8020410C  40 82 00 14 */	bne lbl_80204120
/* 80204110  57 E0 06 F7 */	rlwinm. r0, r31, 0, 0x1b, 0x1b
/* 80204114  40 82 00 0C */	bne lbl_80204120
/* 80204118  57 E0 06 B5 */	rlwinm. r0, r31, 0, 0x1a, 0x1a
/* 8020411C  41 82 00 1C */	beq lbl_80204138
lbl_80204120:
/* 80204120  7F C3 F3 78 */	mr r3, r30
/* 80204124  48 00 45 4D */	bl setAlphaButtonNUREAnimeMin__14dMeterButton_cFv
/* 80204128  A0 1E 04 B0 */	lhz r0, 0x4b0(r30)
/* 8020412C  54 00 04 A0 */	rlwinm r0, r0, 0, 0x12, 0x10
/* 80204130  B0 1E 04 B0 */	sth r0, 0x4b0(r30)
/* 80204134  48 00 00 20 */	b lbl_80204154
lbl_80204138:
/* 80204138  7F C3 F3 78 */	mr r3, r30
/* 8020413C  48 00 45 CD */	bl setAlphaButtonNUREAnimeMax__14dMeterButton_cFv
/* 80204140  A0 1E 04 B0 */	lhz r0, 0x4b0(r30)
/* 80204144  60 00 40 00 */	ori r0, r0, 0x4000
/* 80204148  B0 1E 04 B0 */	sth r0, 0x4b0(r30)
/* 8020414C  38 60 00 01 */	li r3, 1
/* 80204150  48 00 00 08 */	b lbl_80204158
lbl_80204154:
/* 80204154  38 60 00 00 */	li r3, 0
lbl_80204158:
/* 80204158  39 61 00 20 */	addi r11, r1, 0x20
/* 8020415C  48 15 E0 CD */	bl _restgpr_29
/* 80204160  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80204164  7C 08 03 A6 */	mtlr r0
/* 80204168  38 21 00 20 */	addi r1, r1, 0x20
/* 8020416C  4E 80 00 20 */	blr 
