lbl_801188B0:
/* 801188B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801188B4  7C 08 02 A6 */	mflr r0
/* 801188B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801188BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801188C0  7C 7F 1B 78 */	mr r31, r3
/* 801188C4  54 80 04 3E */	clrlwi r0, r4, 0x10
/* 801188C8  28 00 00 FD */	cmplwi r0, 0xfd
/* 801188CC  40 82 00 2C */	bne lbl_801188F8
/* 801188D0  A0 1F 2F DC */	lhz r0, 0x2fdc(r31)
/* 801188D4  28 00 01 03 */	cmplwi r0, 0x103
/* 801188D8  41 82 00 18 */	beq lbl_801188F0
/* 801188DC  38 80 00 00 */	li r4, 0
/* 801188E0  38 A0 00 01 */	li r5, 1
/* 801188E4  4B FA 89 F9 */	bl deleteEquipItem__9daAlink_cFii
/* 801188E8  7F E3 FB 78 */	mr r3, r31
/* 801188EC  4B FB 89 7D */	bl setSwordModel__9daAlink_cFv
lbl_801188F0:
/* 801188F0  38 60 00 00 */	li r3, 0
/* 801188F4  48 00 00 44 */	b lbl_80118938
lbl_801188F8:
/* 801188F8  28 00 00 FC */	cmplwi r0, 0xfc
/* 801188FC  40 82 00 18 */	bne lbl_80118914
/* 80118900  88 1F 2F AB */	lbz r0, 0x2fab(r31)
/* 80118904  60 00 00 08 */	ori r0, r0, 8
/* 80118908  98 1F 2F AB */	stb r0, 0x2fab(r31)
/* 8011890C  38 60 00 00 */	li r3, 0
/* 80118910  48 00 00 28 */	b lbl_80118938
lbl_80118914:
/* 80118914  28 00 00 FB */	cmplwi r0, 0xfb
/* 80118918  40 82 00 1C */	bne lbl_80118934
/* 8011891C  80 1F 06 A0 */	lwz r0, 0x6a0(r31)
/* 80118920  28 00 00 00 */	cmplwi r0, 0
/* 80118924  38 60 00 FE */	li r3, 0xfe
/* 80118928  41 82 00 10 */	beq lbl_80118938
/* 8011892C  38 60 00 FB */	li r3, 0xfb
/* 80118930  48 00 00 08 */	b lbl_80118938
lbl_80118934:
/* 80118934  54 83 06 3E */	clrlwi r3, r4, 0x18
lbl_80118938:
/* 80118938  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8011893C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80118940  7C 08 03 A6 */	mtlr r0
/* 80118944  38 21 00 10 */	addi r1, r1, 0x10
/* 80118948  4E 80 00 20 */	blr 
