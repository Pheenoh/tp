lbl_80A00514:
/* 80A00514  20 04 00 08 */	subfic r0, r4, 8
/* 80A00518  7C 00 00 34 */	cntlzw r0, r0
/* 80A0051C  54 03 DE 3E */	rlwinm r3, r0, 0x1b, 0x18, 0x1f
/* 80A00520  4E 80 00 20 */	blr 
