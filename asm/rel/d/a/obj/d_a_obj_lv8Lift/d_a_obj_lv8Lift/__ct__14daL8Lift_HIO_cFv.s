lbl_80C8872C:
/* 80C8872C  3C 80 80 C9 */	lis r4, __vt__14mDoHIO_entry_c@ha /* 0x80C8A1D4@ha */
/* 80C88730  38 04 A1 D4 */	addi r0, r4, __vt__14mDoHIO_entry_c@l /* 0x80C8A1D4@l */
/* 80C88734  90 03 00 00 */	stw r0, 0(r3)
/* 80C88738  3C 80 80 C9 */	lis r4, __vt__14daL8Lift_HIO_c@ha /* 0x80C8A1C8@ha */
/* 80C8873C  38 04 A1 C8 */	addi r0, r4, __vt__14daL8Lift_HIO_c@l /* 0x80C8A1C8@l */
/* 80C88740  90 03 00 00 */	stw r0, 0(r3)
/* 80C88744  38 00 00 1E */	li r0, 0x1e
/* 80C88748  98 03 00 04 */	stb r0, 4(r3)
/* 80C8874C  38 00 00 3C */	li r0, 0x3c
/* 80C88750  98 03 00 05 */	stb r0, 5(r3)
/* 80C88754  38 00 00 01 */	li r0, 1
/* 80C88758  98 03 00 06 */	stb r0, 6(r3)
/* 80C8875C  38 A0 00 03 */	li r5, 3
/* 80C88760  98 A3 00 07 */	stb r5, 7(r3)
/* 80C88764  38 80 00 96 */	li r4, 0x96
/* 80C88768  98 83 00 08 */	stb r4, 8(r3)
/* 80C8876C  38 00 00 FF */	li r0, 0xff
/* 80C88770  98 03 00 09 */	stb r0, 9(r3)
/* 80C88774  98 A3 00 10 */	stb r5, 0x10(r3)
/* 80C88778  98 83 00 11 */	stb r4, 0x11(r3)
/* 80C8877C  98 03 00 12 */	stb r0, 0x12(r3)
/* 80C88780  3C 80 80 C9 */	lis r4, lit_3627@ha /* 0x80C89F60@ha */
/* 80C88784  C0 04 9F 60 */	lfs f0, lit_3627@l(r4)  /* 0x80C89F60@l */
/* 80C88788  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 80C8878C  4E 80 00 20 */	blr 
