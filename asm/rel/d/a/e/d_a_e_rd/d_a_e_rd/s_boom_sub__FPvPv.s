lbl_8050E8F0:
/* 8050E8F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8050E8F4  7C 08 02 A6 */	mflr r0
/* 8050E8F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8050E8FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8050E900  7C 7F 1B 78 */	mr r31, r3
/* 8050E904  4B B0 A3 DD */	bl fopAc_IsActor__FPv
/* 8050E908  2C 03 00 00 */	cmpwi r3, 0
/* 8050E90C  41 82 00 24 */	beq lbl_8050E930
/* 8050E910  A8 1F 00 08 */	lha r0, 8(r31)
/* 8050E914  2C 00 01 D4 */	cmpwi r0, 0x1d4
/* 8050E918  40 82 00 18 */	bne lbl_8050E930
/* 8050E91C  A8 1F 09 9A */	lha r0, 0x99a(r31)
/* 8050E920  2C 00 00 00 */	cmpwi r0, 0
/* 8050E924  41 82 00 0C */	beq lbl_8050E930
/* 8050E928  7F E3 FB 78 */	mr r3, r31
/* 8050E92C  48 00 00 08 */	b lbl_8050E934
lbl_8050E930:
/* 8050E930  38 60 00 00 */	li r3, 0
lbl_8050E934:
/* 8050E934  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8050E938  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8050E93C  7C 08 03 A6 */	mtlr r0
/* 8050E940  38 21 00 10 */	addi r1, r1, 0x10
/* 8050E944  4E 80 00 20 */	blr 
