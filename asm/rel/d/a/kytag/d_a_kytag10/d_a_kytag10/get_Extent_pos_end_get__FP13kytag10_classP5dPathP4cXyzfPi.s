lbl_80528D64:
/* 80528D64  A0 64 00 00 */	lhz r3, 0(r4)
/* 80528D68  38 03 FF FF */	addi r0, r3, -1
/* 80528D6C  90 06 00 00 */	stw r0, 0(r6)
/* 80528D70  7C 83 23 78 */	mr r3, r4
/* 80528D74  4E 80 00 20 */	blr 
