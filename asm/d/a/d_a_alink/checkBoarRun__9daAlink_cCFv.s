lbl_800D0718:
/* 800D0718  A0 03 2F E8 */	lhz r0, 0x2fe8(r3)
/* 800D071C  20 00 00 53 */	subfic r0, r0, 0x53
/* 800D0720  7C 00 00 34 */	cntlzw r0, r0
/* 800D0724  54 03 DE 3E */	rlwinm r3, r0, 0x1b, 0x18, 0x1f
/* 800D0728  4E 80 00 20 */	blr 
