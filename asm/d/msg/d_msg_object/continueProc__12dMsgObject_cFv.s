lbl_80234FF4:
/* 80234FF4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80234FF8  7C 08 02 A6 */	mflr r0
/* 80234FFC  90 01 00 34 */	stw r0, 0x34(r1)
/* 80235000  39 61 00 30 */	addi r11, r1, 0x30
/* 80235004  48 12 D1 CD */	bl _savegpr_26
/* 80235008  7C 7E 1B 78 */	mr r30, r3
/* 8023500C  80 63 01 20 */	lwz r3, 0x120(r3)
/* 80235010  83 E3 00 04 */	lwz r31, 4(r3)
/* 80235014  88 1F 12 4C */	lbz r0, 0x124c(r31)
/* 80235018  28 00 00 01 */	cmplwi r0, 1
/* 8023501C  41 82 00 30 */	beq lbl_8023504C
/* 80235020  28 00 00 03 */	cmplwi r0, 3
/* 80235024  41 82 00 28 */	beq lbl_8023504C
/* 80235028  28 00 00 04 */	cmplwi r0, 4
/* 8023502C  41 82 00 20 */	beq lbl_8023504C
/* 80235030  28 00 00 06 */	cmplwi r0, 6
/* 80235034  41 82 00 18 */	beq lbl_8023504C
/* 80235038  80 7E 01 04 */	lwz r3, 0x104(r30)
/* 8023503C  81 83 00 00 */	lwz r12, 0(r3)
/* 80235040  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80235044  7D 89 03 A6 */	mtctr r12
/* 80235048  4E 80 04 21 */	bctrl 
lbl_8023504C:
/* 8023504C  3C 60 80 3E */	lis r3, m_cpadInfo__8mDoCPd_c@ha /* 0x803DD2E8@ha */
/* 80235050  38 63 D2 E8 */	addi r3, r3, m_cpadInfo__8mDoCPd_c@l /* 0x803DD2E8@l */
/* 80235054  80 63 00 34 */	lwz r3, 0x34(r3)
/* 80235058  54 60 05 EF */	rlwinm. r0, r3, 0, 0x17, 0x17
/* 8023505C  40 82 00 0C */	bne lbl_80235068
/* 80235060  54 60 05 AD */	rlwinm. r0, r3, 0, 0x16, 0x16
/* 80235064  41 82 00 14 */	beq lbl_80235078
lbl_80235068:
/* 80235068  7F C3 F3 78 */	mr r3, r30
/* 8023506C  48 00 20 7D */	bl isHowlMessage__12dMsgObject_cFv
/* 80235070  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80235074  40 82 02 90 */	bne lbl_80235304
lbl_80235078:
/* 80235078  7F C3 F3 78 */	mr r3, r30
/* 8023507C  48 00 19 5D */	bl isSend__12dMsgObject_cFv
/* 80235080  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80235084  41 82 02 80 */	beq lbl_80235304
/* 80235088  80 9E 01 14 */	lwz r4, 0x114(r30)
/* 8023508C  38 60 00 00 */	li r3, 0
/* 80235090  80 04 00 20 */	lwz r0, 0x20(r4)
/* 80235094  28 00 00 00 */	cmplwi r0, 0
/* 80235098  41 82 00 14 */	beq lbl_802350AC
/* 8023509C  80 04 00 08 */	lwz r0, 8(r4)
/* 802350A0  28 00 00 00 */	cmplwi r0, 0
/* 802350A4  41 82 00 08 */	beq lbl_802350AC
/* 802350A8  38 60 00 01 */	li r3, 1
lbl_802350AC:
/* 802350AC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802350B0  41 82 00 60 */	beq lbl_80235110
/* 802350B4  80 04 00 1C */	lwz r0, 0x1c(r4)
/* 802350B8  90 04 00 20 */	stw r0, 0x20(r4)
/* 802350BC  80 64 00 08 */	lwz r3, 8(r4)
/* 802350C0  38 A3 00 10 */	addi r5, r3, 0x10
/* 802350C4  80 03 00 10 */	lwz r0, 0x10(r3)
/* 802350C8  90 04 00 24 */	stw r0, 0x24(r4)
/* 802350CC  80 03 00 10 */	lwz r0, 0x10(r3)
/* 802350D0  54 03 10 3A */	slwi r3, r0, 2
/* 802350D4  38 63 00 04 */	addi r3, r3, 4
/* 802350D8  7C 65 1A 14 */	add r3, r5, r3
/* 802350DC  38 C4 00 28 */	addi r6, r4, 0x28
/* 802350E0  38 85 00 04 */	addi r4, r5, 4
/* 802350E4  38 03 00 03 */	addi r0, r3, 3
/* 802350E8  7C 04 00 50 */	subf r0, r4, r0
/* 802350EC  54 00 F0 BE */	srwi r0, r0, 2
/* 802350F0  7C 09 03 A6 */	mtctr r0
/* 802350F4  7C 04 18 40 */	cmplw r4, r3
/* 802350F8  40 80 00 18 */	bge lbl_80235110
lbl_802350FC:
/* 802350FC  80 04 00 00 */	lwz r0, 0(r4)
/* 80235100  90 06 00 00 */	stw r0, 0(r6)
/* 80235104  38 84 00 04 */	addi r4, r4, 4
/* 80235108  38 C6 00 04 */	addi r6, r6, 4
/* 8023510C  42 00 FF F0 */	bdnz lbl_802350FC
lbl_80235110:
/* 80235110  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 80235114  48 07 24 C1 */	bl reset__Q28JMessage8TControlFv
/* 80235118  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 8023511C  80 83 00 04 */	lwz r4, 4(r3)
/* 80235120  28 04 00 00 */	cmplwi r4, 0
/* 80235124  41 82 00 0C */	beq lbl_80235130
/* 80235128  38 00 00 00 */	li r0, 0
/* 8023512C  90 04 00 08 */	stw r0, 8(r4)
lbl_80235130:
/* 80235130  80 83 00 08 */	lwz r4, 8(r3)
/* 80235134  28 04 00 00 */	cmplwi r4, 0
/* 80235138  41 82 00 0C */	beq lbl_80235144
/* 8023513C  38 00 00 00 */	li r0, 0
/* 80235140  90 04 00 08 */	stw r0, 8(r4)
lbl_80235144:
/* 80235144  38 00 00 00 */	li r0, 0
/* 80235148  90 03 00 10 */	stw r0, 0x10(r3)
/* 8023514C  80 7E 01 18 */	lwz r3, 0x118(r30)
/* 80235150  4B FF 46 C1 */	bl resetCharCountBuffer__19jmessage_tReferenceFv
/* 80235154  38 00 00 00 */	li r0, 0
/* 80235158  B0 1E 01 7E */	sth r0, 0x17e(r30)
/* 8023515C  98 1E 01 99 */	stb r0, 0x199(r30)
/* 80235160  7F C3 F3 78 */	mr r3, r30
/* 80235164  48 00 25 E5 */	bl updateEquipBombInfoLocal__12dMsgObject_cFv
/* 80235168  38 00 00 00 */	li r0, 0
/* 8023516C  98 1E 04 CF */	stb r0, 0x4cf(r30)
/* 80235170  80 BE 01 00 */	lwz r5, 0x100(r30)
/* 80235174  7F C3 F3 78 */	mr r3, r30
/* 80235178  80 85 00 EC */	lwz r4, 0xec(r5)
/* 8023517C  80 A5 00 F0 */	lwz r5, 0xf0(r5)
/* 80235180  38 C0 00 01 */	li r6, 1
/* 80235184  4B FF EB 81 */	bl setMessageIndex__12dMsgObject_cFUlUlb
/* 80235188  80 7E 01 04 */	lwz r3, 0x104(r30)
/* 8023518C  88 9F 12 45 */	lbz r4, 0x1245(r31)
/* 80235190  81 83 00 00 */	lwz r12, 0(r3)
/* 80235194  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 80235198  7D 89 03 A6 */	mtctr r12
/* 8023519C  4E 80 04 21 */	bctrl 
/* 802351A0  38 7F 0A 1C */	addi r3, r31, 0xa1c
/* 802351A4  3C 80 80 3A */	lis r4, d_msg_d_msg_object__stringBase0@ha /* 0x80399660@ha */
/* 802351A8  38 84 96 60 */	addi r4, r4, d_msg_d_msg_object__stringBase0@l /* 0x80399660@l */
/* 802351AC  38 84 00 6E */	addi r4, r4, 0x6e
/* 802351B0  48 13 39 7D */	bl strcpy
/* 802351B4  38 7F 0C 1C */	addi r3, r31, 0xc1c
/* 802351B8  3C 80 80 3A */	lis r4, d_msg_d_msg_object__stringBase0@ha /* 0x80399660@ha */
/* 802351BC  38 84 96 60 */	addi r4, r4, d_msg_d_msg_object__stringBase0@l /* 0x80399660@l */
/* 802351C0  38 84 00 6E */	addi r4, r4, 0x6e
/* 802351C4  48 13 39 69 */	bl strcpy
/* 802351C8  38 7F 0E 1C */	addi r3, r31, 0xe1c
/* 802351CC  3C 80 80 3A */	lis r4, d_msg_d_msg_object__stringBase0@ha /* 0x80399660@ha */
/* 802351D0  38 84 96 60 */	addi r4, r4, d_msg_d_msg_object__stringBase0@l /* 0x80399660@l */
/* 802351D4  38 84 00 6E */	addi r4, r4, 0x6e
/* 802351D8  48 13 39 55 */	bl strcpy
/* 802351DC  3B 40 00 00 */	li r26, 0
/* 802351E0  3B A0 00 00 */	li r29, 0
/* 802351E4  3B 80 00 00 */	li r28, 0
/* 802351E8  3C 60 80 3A */	lis r3, d_msg_d_msg_object__stringBase0@ha /* 0x80399660@ha */
/* 802351EC  3B 63 96 60 */	addi r27, r3, d_msg_d_msg_object__stringBase0@l /* 0x80399660@l */
lbl_802351F0:
/* 802351F0  38 7C 10 1C */	addi r3, r28, 0x101c
/* 802351F4  7C 7F 1A 14 */	add r3, r31, r3
/* 802351F8  38 9B 00 6E */	addi r4, r27, 0x6e
/* 802351FC  48 13 39 31 */	bl strcpy
/* 80235200  38 7D 10 B2 */	addi r3, r29, 0x10b2
/* 80235204  7C 7F 1A 14 */	add r3, r31, r3
/* 80235208  38 9B 00 6E */	addi r4, r27, 0x6e
/* 8023520C  48 13 39 21 */	bl strcpy
/* 80235210  3B 5A 00 01 */	addi r26, r26, 1
/* 80235214  2C 1A 00 03 */	cmpwi r26, 3
/* 80235218  3B BD 00 50 */	addi r29, r29, 0x50
/* 8023521C  3B 9C 00 32 */	addi r28, r28, 0x32
/* 80235220  41 80 FF D0 */	blt lbl_802351F0
/* 80235224  80 7E 01 04 */	lwz r3, 0x104(r30)
/* 80235228  81 83 00 00 */	lwz r12, 0(r3)
/* 8023522C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80235230  7D 89 03 A6 */	mtctr r12
/* 80235234  4E 80 04 21 */	bctrl 
/* 80235238  80 7E 01 04 */	lwz r3, 0x104(r30)
/* 8023523C  C0 03 00 68 */	lfs f0, 0x68(r3)
/* 80235240  C0 23 00 64 */	lfs f1, 0x64(r3)
/* 80235244  80 7E 01 20 */	lwz r3, 0x120(r30)
/* 80235248  D0 23 00 50 */	stfs f1, 0x50(r3)
/* 8023524C  D0 03 00 54 */	stfs f0, 0x54(r3)
/* 80235250  80 7E 01 04 */	lwz r3, 0x104(r30)
/* 80235254  C0 03 00 70 */	lfs f0, 0x70(r3)
/* 80235258  C0 23 00 6C */	lfs f1, 0x6c(r3)
/* 8023525C  80 7E 01 20 */	lwz r3, 0x120(r30)
/* 80235260  D0 23 00 58 */	stfs f1, 0x58(r3)
/* 80235264  D0 03 00 5C */	stfs f0, 0x5c(r3)
/* 80235268  38 60 00 00 */	li r3, 0
/* 8023526C  38 00 00 03 */	li r0, 3
/* 80235270  7C 09 03 A6 */	mtctr r0
lbl_80235274:
/* 80235274  80 1E 01 04 */	lwz r0, 0x104(r30)
/* 80235278  7C 80 1A 14 */	add r4, r0, r3
/* 8023527C  C0 04 00 9C */	lfs f0, 0x9c(r4)
/* 80235280  C0 24 00 90 */	lfs f1, 0x90(r4)
/* 80235284  80 1E 01 20 */	lwz r0, 0x120(r30)
/* 80235288  7C 80 1A 14 */	add r4, r0, r3
/* 8023528C  D0 24 00 60 */	stfs f1, 0x60(r4)
/* 80235290  D0 04 00 6C */	stfs f0, 0x6c(r4)
/* 80235294  38 63 00 04 */	addi r3, r3, 4
/* 80235298  42 00 FF DC */	bdnz lbl_80235274
/* 8023529C  80 7E 01 20 */	lwz r3, 0x120(r30)
/* 802352A0  4B FF 8E 8D */	bl resetRendering__28jmessage_tRenderingProcessorFv
/* 802352A4  7F C3 F3 78 */	mr r3, r30
/* 802352A8  38 80 00 06 */	li r4, 6
/* 802352AC  48 00 16 39 */	bl setStatusLocal__12dMsgObject_cFUs
/* 802352B0  7F C3 F3 78 */	mr r3, r30
/* 802352B4  48 00 1F 89 */	bl isTalkMessage__12dMsgObject_cFv
/* 802352B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802352BC  41 82 00 48 */	beq lbl_80235304
/* 802352C0  80 7E 01 18 */	lwz r3, 0x118(r30)
/* 802352C4  88 03 12 47 */	lbz r0, 0x1247(r3)
/* 802352C8  28 00 00 01 */	cmplwi r0, 1
/* 802352CC  41 82 00 38 */	beq lbl_80235304
/* 802352D0  38 00 00 5F */	li r0, 0x5f
/* 802352D4  90 01 00 08 */	stw r0, 8(r1)
/* 802352D8  80 6D 8D E8 */	lwz r3, mAudioMgrPtr__10Z2AudioMgr(r13)
/* 802352DC  38 81 00 08 */	addi r4, r1, 8
/* 802352E0  38 A0 00 00 */	li r5, 0
/* 802352E4  38 C0 00 00 */	li r6, 0
/* 802352E8  38 E0 00 00 */	li r7, 0
/* 802352EC  C0 22 B0 C0 */	lfs f1, lit_4084(r2)
/* 802352F0  FC 40 08 90 */	fmr f2, f1
/* 802352F4  C0 62 B1 10 */	lfs f3, lit_4145(r2)
/* 802352F8  FC 80 18 90 */	fmr f4, f3
/* 802352FC  39 00 00 00 */	li r8, 0
/* 80235300  48 07 66 85 */	bl seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc
lbl_80235304:
/* 80235304  39 61 00 30 */	addi r11, r1, 0x30
/* 80235308  48 12 CF 15 */	bl _restgpr_26
/* 8023530C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80235310  7C 08 03 A6 */	mtlr r0
/* 80235314  38 21 00 30 */	addi r1, r1, 0x30
/* 80235318  4E 80 00 20 */	blr 
