lbl_80705438:
/* 80705438  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8070543C  7C 08 02 A6 */	mflr r0
/* 80705440  90 01 00 14 */	stw r0, 0x14(r1)
/* 80705444  3C 60 80 70 */	lis r3, lit_3903@ha /* 0x80705AF8@ha */
/* 80705448  38 A3 5A F8 */	addi r5, r3, lit_3903@l /* 0x80705AF8@l */
/* 8070544C  3C 60 80 70 */	lis r3, __vt__14mDoHIO_entry_c@ha /* 0x80705FD0@ha */
/* 80705450  38 03 5F D0 */	addi r0, r3, __vt__14mDoHIO_entry_c@l /* 0x80705FD0@l */
/* 80705454  3C 60 80 70 */	lis r3, l_e_krHIO@ha /* 0x80705FF4@ha */
/* 80705458  94 03 5F F4 */	stwu r0, l_e_krHIO@l(r3)  /* 0x80705FF4@l */
/* 8070545C  3C 80 80 70 */	lis r4, __vt__18fOpAcm_HIO_entry_c@ha /* 0x80705FC4@ha */
/* 80705460  38 04 5F C4 */	addi r0, r4, __vt__18fOpAcm_HIO_entry_c@l /* 0x80705FC4@l */
/* 80705464  90 03 00 00 */	stw r0, 0(r3)
/* 80705468  3C 80 80 70 */	lis r4, __vt__9e_krHIO_c@ha /* 0x80705FB8@ha */
/* 8070546C  38 04 5F B8 */	addi r0, r4, __vt__9e_krHIO_c@l /* 0x80705FB8@l */
/* 80705470  90 03 00 00 */	stw r0, 0(r3)
/* 80705474  38 00 00 00 */	li r0, 0
/* 80705478  98 03 00 04 */	stb r0, 4(r3)
/* 8070547C  98 03 00 05 */	stb r0, 5(r3)
/* 80705480  C0 05 00 38 */	lfs f0, 0x38(r5)
/* 80705484  D0 03 00 08 */	stfs f0, 8(r3)
/* 80705488  C0 05 01 3C */	lfs f0, 0x13c(r5)
/* 8070548C  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 80705490  C0 25 00 08 */	lfs f1, 8(r5)
/* 80705494  D0 23 00 14 */	stfs f1, 0x14(r3)
/* 80705498  38 80 07 D0 */	li r4, 0x7d0
/* 8070549C  B0 83 00 18 */	sth r4, 0x18(r3)
/* 807054A0  38 00 09 C4 */	li r0, 0x9c4
/* 807054A4  B0 03 00 1A */	sth r0, 0x1a(r3)
/* 807054A8  B0 83 00 1C */	sth r4, 0x1c(r3)
/* 807054AC  B0 03 00 1E */	sth r0, 0x1e(r3)
/* 807054B0  C0 05 01 40 */	lfs f0, 0x140(r5)
/* 807054B4  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 807054B8  C0 05 00 44 */	lfs f0, 0x44(r5)
/* 807054BC  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 807054C0  D0 23 00 28 */	stfs f1, 0x28(r3)
/* 807054C4  D0 23 00 2C */	stfs f1, 0x2c(r3)
/* 807054C8  D0 23 00 30 */	stfs f1, 0x30(r3)
/* 807054CC  D0 23 00 38 */	stfs f1, 0x38(r3)
/* 807054D0  D0 23 00 3C */	stfs f1, 0x3c(r3)
/* 807054D4  38 00 00 1E */	li r0, 0x1e
/* 807054D8  B0 03 00 40 */	sth r0, 0x40(r3)
/* 807054DC  D0 23 00 44 */	stfs f1, 0x44(r3)
/* 807054E0  D0 23 00 48 */	stfs f1, 0x48(r3)
/* 807054E4  C0 05 00 F0 */	lfs f0, 0xf0(r5)
/* 807054E8  D0 03 00 4C */	stfs f0, 0x4c(r3)
/* 807054EC  38 00 04 4C */	li r0, 0x44c
/* 807054F0  B0 03 00 50 */	sth r0, 0x50(r3)
/* 807054F4  C0 05 01 44 */	lfs f0, 0x144(r5)
/* 807054F8  D0 03 00 54 */	stfs f0, 0x54(r3)
/* 807054FC  38 00 00 3C */	li r0, 0x3c
/* 80705500  B0 03 00 34 */	sth r0, 0x34(r3)
/* 80705504  C0 05 00 84 */	lfs f0, 0x84(r5)
/* 80705508  D0 03 00 58 */	stfs f0, 0x58(r3)
/* 8070550C  C0 05 01 48 */	lfs f0, 0x148(r5)
/* 80705510  D0 03 00 5C */	stfs f0, 0x5c(r3)
/* 80705514  38 00 00 01 */	li r0, 1
/* 80705518  B0 03 00 60 */	sth r0, 0x60(r3)
/* 8070551C  C0 05 01 08 */	lfs f0, 0x108(r5)
/* 80705520  D0 03 00 64 */	stfs f0, 0x64(r3)
/* 80705524  C0 05 00 BC */	lfs f0, 0xbc(r5)
/* 80705528  D0 03 00 70 */	stfs f0, 0x70(r3)
/* 8070552C  38 00 4E 20 */	li r0, 0x4e20
/* 80705530  B0 03 00 6C */	sth r0, 0x6c(r3)
/* 80705534  C0 05 01 4C */	lfs f0, 0x14c(r5)
/* 80705538  D0 03 00 68 */	stfs f0, 0x68(r3)
/* 8070553C  C0 05 00 74 */	lfs f0, 0x74(r5)
/* 80705540  D0 03 00 74 */	stfs f0, 0x74(r3)
/* 80705544  B0 03 00 6E */	sth r0, 0x6e(r3)
/* 80705548  C0 05 01 50 */	lfs f0, 0x150(r5)
/* 8070554C  D0 03 00 78 */	stfs f0, 0x78(r3)
/* 80705550  3C 80 80 70 */	lis r4, __dt__9e_krHIO_cFv@ha /* 0x80705574@ha */
/* 80705554  38 84 55 74 */	addi r4, r4, __dt__9e_krHIO_cFv@l /* 0x80705574@l */
/* 80705558  3C A0 80 70 */	lis r5, lit_3921@ha /* 0x80705FE8@ha */
/* 8070555C  38 A5 5F E8 */	addi r5, r5, lit_3921@l /* 0x80705FE8@l */
/* 80705560  4B FF A3 D9 */	bl __register_global_object
/* 80705564  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80705568  7C 08 03 A6 */	mtlr r0
/* 8070556C  38 21 00 10 */	addi r1, r1, 0x10
/* 80705570  4E 80 00 20 */	blr 
