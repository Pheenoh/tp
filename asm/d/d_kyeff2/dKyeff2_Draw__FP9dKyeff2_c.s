lbl_801ADEA0:
/* 801ADEA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801ADEA4  7C 08 02 A6 */	mflr r0
/* 801ADEA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801ADEAC  4B EA C4 59 */	bl dKyw_wether_draw2__Fv
/* 801ADEB0  38 60 00 01 */	li r3, 1
/* 801ADEB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801ADEB8  7C 08 03 A6 */	mtlr r0
/* 801ADEBC  38 21 00 10 */	addi r1, r1, 0x10
/* 801ADEC0  4E 80 00 20 */	blr 
