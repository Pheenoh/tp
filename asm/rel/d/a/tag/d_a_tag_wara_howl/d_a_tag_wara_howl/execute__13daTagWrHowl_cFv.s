lbl_80D6403C:
/* 80D6403C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80D64040  7C 08 02 A6 */	mflr r0
/* 80D64044  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D64048  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80D6404C  7C 7F 1B 78 */	mr r31, r3
/* 80D64050  38 00 00 00 */	li r0, 0
/* 80D64054  90 03 05 5C */	stw r0, 0x55c(r3)
/* 80D64058  48 00 00 5D */	bl chkWlfInTag__13daTagWrHowl_cFv
/* 80D6405C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80D64060  41 82 00 18 */	beq lbl_80D64078
/* 80D64064  80 1F 05 5C */	lwz r0, 0x55c(r31)
/* 80D64068  60 00 00 80 */	ori r0, r0, 0x80
/* 80D6406C  90 1F 05 5C */	stw r0, 0x55c(r31)
/* 80D64070  38 00 00 41 */	li r0, 0x41
/* 80D64074  98 1F 05 4B */	stb r0, 0x54b(r31)
lbl_80D64078:
/* 80D64078  38 60 00 01 */	li r3, 1
/* 80D6407C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80D64080  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80D64084  7C 08 03 A6 */	mtlr r0
/* 80D64088  38 21 00 10 */	addi r1, r1, 0x10
/* 80D6408C  4E 80 00 20 */	blr 
