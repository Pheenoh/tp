lbl_809C770C:
/* 809C770C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809C7710  7C 08 02 A6 */	mflr r0
/* 809C7714  90 01 00 14 */	stw r0, 0x14(r1)
/* 809C7718  93 E1 00 0C */	stw r31, 0xc(r1)
/* 809C771C  7C 7F 1B 78 */	mr r31, r3
/* 809C7720  A0 03 14 72 */	lhz r0, 0x1472(r3)
/* 809C7724  2C 00 00 02 */	cmpwi r0, 2
/* 809C7728  41 82 00 8C */	beq lbl_809C77B4
/* 809C772C  40 80 00 9C */	bge lbl_809C77C8
/* 809C7730  2C 00 00 00 */	cmpwi r0, 0
/* 809C7734  41 82 00 0C */	beq lbl_809C7740
/* 809C7738  48 00 00 90 */	b lbl_809C77C8
/* 809C773C  48 00 00 8C */	b lbl_809C77C8
lbl_809C7740:
/* 809C7740  38 80 00 17 */	li r4, 0x17
/* 809C7744  3C A0 80 9D */	lis r5, lit_4611@ha /* 0x809C9E34@ha */
/* 809C7748  C0 25 9E 34 */	lfs f1, lit_4611@l(r5)  /* 0x809C9E34@l */
/* 809C774C  81 83 0B 44 */	lwz r12, 0xb44(r3)
/* 809C7750  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 809C7754  7D 89 03 A6 */	mtctr r12
/* 809C7758  4E 80 04 21 */	bctrl 
/* 809C775C  7F E3 FB 78 */	mr r3, r31
/* 809C7760  38 80 00 13 */	li r4, 0x13
/* 809C7764  3C A0 80 9D */	lis r5, lit_4611@ha /* 0x809C9E34@ha */
/* 809C7768  C0 25 9E 34 */	lfs f1, lit_4611@l(r5)  /* 0x809C9E34@l */
/* 809C776C  38 A0 00 00 */	li r5, 0
/* 809C7770  81 9F 0B 44 */	lwz r12, 0xb44(r31)
/* 809C7774  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 809C7778  7D 89 03 A6 */	mtctr r12
/* 809C777C  4E 80 04 21 */	bctrl 
/* 809C7780  7F E3 FB 78 */	mr r3, r31
/* 809C7784  38 80 00 00 */	li r4, 0
/* 809C7788  4B FF B8 E9 */	bl setLookMode__11daNpc_grA_cFi
/* 809C778C  38 00 00 00 */	li r0, 0
/* 809C7790  90 1F 09 6C */	stw r0, 0x96c(r31)
/* 809C7794  80 1F 05 FC */	lwz r0, 0x5fc(r31)
/* 809C7798  60 00 00 02 */	ori r0, r0, 2
/* 809C779C  90 1F 05 FC */	stw r0, 0x5fc(r31)
/* 809C77A0  80 1F 05 FC */	lwz r0, 0x5fc(r31)
/* 809C77A4  60 00 00 04 */	ori r0, r0, 4
/* 809C77A8  90 1F 05 FC */	stw r0, 0x5fc(r31)
/* 809C77AC  38 00 00 02 */	li r0, 2
/* 809C77B0  B0 1F 14 72 */	sth r0, 0x1472(r31)
lbl_809C77B4:
/* 809C77B4  3C 60 80 9D */	lis r3, lit_4611@ha /* 0x809C9E34@ha */
/* 809C77B8  C0 03 9E 34 */	lfs f0, lit_4611@l(r3)  /* 0x809C9E34@l */
/* 809C77BC  D0 1F 05 30 */	stfs f0, 0x530(r31)
/* 809C77C0  38 00 00 06 */	li r0, 6
/* 809C77C4  B0 1F 09 E6 */	sth r0, 0x9e6(r31)
lbl_809C77C8:
/* 809C77C8  38 60 00 01 */	li r3, 1
/* 809C77CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 809C77D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 809C77D4  7C 08 03 A6 */	mtlr r0
/* 809C77D8  38 21 00 10 */	addi r1, r1, 0x10
/* 809C77DC  4E 80 00 20 */	blr 
