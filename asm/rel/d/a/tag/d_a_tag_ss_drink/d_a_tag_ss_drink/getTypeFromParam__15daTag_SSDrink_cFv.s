lbl_80D62ED8:
/* 80D62ED8  80 03 00 B0 */	lwz r0, 0xb0(r3)
/* 80D62EDC  54 00 07 3E */	clrlwi r0, r0, 0x1c
/* 80D62EE0  28 00 00 06 */	cmplwi r0, 6
/* 80D62EE4  41 81 00 8C */	bgt lbl_80D62F70
/* 80D62EE8  3C 80 80 D6 */	lis r4, lit_3806@ha /* 0x80D637BC@ha */
/* 80D62EEC  38 84 37 BC */	addi r4, r4, lit_3806@l /* 0x80D637BC@l */
/* 80D62EF0  54 00 10 3A */	slwi r0, r0, 2
/* 80D62EF4  7C 04 00 2E */	lwzx r0, r4, r0
/* 80D62EF8  7C 09 03 A6 */	mtctr r0
/* 80D62EFC  4E 80 04 20 */	bctr 
lbl_80D62F00:
/* 80D62F00  38 00 00 69 */	li r0, 0x69
/* 80D62F04  98 03 05 D3 */	stb r0, 0x5d3(r3)
/* 80D62F08  38 60 00 00 */	li r3, 0
/* 80D62F0C  4E 80 00 20 */	blr 
lbl_80D62F10:
/* 80D62F10  38 00 00 62 */	li r0, 0x62
/* 80D62F14  98 03 05 D3 */	stb r0, 0x5d3(r3)
/* 80D62F18  38 60 00 01 */	li r3, 1
/* 80D62F1C  4E 80 00 20 */	blr 
lbl_80D62F20:
/* 80D62F20  38 00 00 63 */	li r0, 0x63
/* 80D62F24  98 03 05 D3 */	stb r0, 0x5d3(r3)
/* 80D62F28  38 60 00 02 */	li r3, 2
/* 80D62F2C  4E 80 00 20 */	blr 
lbl_80D62F30:
/* 80D62F30  38 00 00 64 */	li r0, 0x64
/* 80D62F34  98 03 05 D3 */	stb r0, 0x5d3(r3)
/* 80D62F38  38 60 00 03 */	li r3, 3
/* 80D62F3C  4E 80 00 20 */	blr 
lbl_80D62F40:
/* 80D62F40  38 00 00 68 */	li r0, 0x68
/* 80D62F44  98 03 05 D3 */	stb r0, 0x5d3(r3)
/* 80D62F48  38 60 00 04 */	li r3, 4
/* 80D62F4C  4E 80 00 20 */	blr 
lbl_80D62F50:
/* 80D62F50  38 00 00 67 */	li r0, 0x67
/* 80D62F54  98 03 05 D3 */	stb r0, 0x5d3(r3)
/* 80D62F58  38 60 00 05 */	li r3, 5
/* 80D62F5C  4E 80 00 20 */	blr 
lbl_80D62F60:
/* 80D62F60  38 00 00 6A */	li r0, 0x6a
/* 80D62F64  98 03 05 D3 */	stb r0, 0x5d3(r3)
/* 80D62F68  38 60 00 06 */	li r3, 6
/* 80D62F6C  4E 80 00 20 */	blr 
lbl_80D62F70:
/* 80D62F70  38 00 00 60 */	li r0, 0x60
/* 80D62F74  98 03 05 D3 */	stb r0, 0x5d3(r3)
/* 80D62F78  38 60 00 07 */	li r3, 7
/* 80D62F7C  4E 80 00 20 */	blr 
