lbl_802915D4:
/* 802915D4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802915D8  7C 08 02 A6 */	mflr r0
/* 802915DC  90 01 00 34 */	stw r0, 0x34(r1)
/* 802915E0  39 61 00 30 */	addi r11, r1, 0x30
/* 802915E4  48 0D 0B F1 */	bl _savegpr_27
/* 802915E8  7C 7C 1B 78 */	mr r28, r3
/* 802915EC  3C 80 80 3A */	lis r4, sAdsTable__8JASTrack@ha /* 0x8039AFD0@ha */
/* 802915F0  3B 64 AF D0 */	addi r27, r4, sAdsTable__8JASTrack@l /* 0x8039AFD0@l */
/* 802915F4  48 00 23 31 */	bl init__10JASSeqCtrlFv
/* 802915F8  38 7C 00 5C */	addi r3, r28, 0x5c
/* 802915FC  48 00 1F 51 */	bl init__12JASTrackPortFv
/* 80291600  7F 83 E3 78 */	mr r3, r28
/* 80291604  48 00 02 F9 */	bl initTimed__8JASTrackFv
/* 80291608  38 7C 00 80 */	addi r3, r28, 0x80
/* 8029160C  48 00 20 59 */	bl init__16JASRegisterParamFv
/* 80291610  80 1B 00 18 */	lwz r0, 0x18(r27)
/* 80291614  90 1C 00 E4 */	stw r0, 0xe4(r28)
/* 80291618  38 7B 00 18 */	addi r3, r27, 0x18
/* 8029161C  C0 03 00 04 */	lfs f0, 4(r3)
/* 80291620  D0 1C 00 E8 */	stfs f0, 0xe8(r28)
/* 80291624  80 03 00 08 */	lwz r0, 8(r3)
/* 80291628  90 1C 00 EC */	stw r0, 0xec(r28)
/* 8029162C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80291630  90 1C 00 F0 */	stw r0, 0xf0(r28)
/* 80291634  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 80291638  D0 1C 00 F4 */	stfs f0, 0xf4(r28)
/* 8029163C  C0 03 00 14 */	lfs f0, 0x14(r3)
/* 80291640  D0 1C 00 F8 */	stfs f0, 0xf8(r28)
/* 80291644  80 1B 00 30 */	lwz r0, 0x30(r27)
/* 80291648  90 1C 00 FC */	stw r0, 0xfc(r28)
/* 8029164C  38 7B 00 30 */	addi r3, r27, 0x30
/* 80291650  C0 03 00 04 */	lfs f0, 4(r3)
/* 80291654  D0 1C 01 00 */	stfs f0, 0x100(r28)
/* 80291658  80 03 00 08 */	lwz r0, 8(r3)
/* 8029165C  90 1C 01 04 */	stw r0, 0x104(r28)
/* 80291660  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80291664  90 1C 01 08 */	stw r0, 0x108(r28)
/* 80291668  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 8029166C  D0 1C 01 0C */	stfs f0, 0x10c(r28)
/* 80291670  C0 03 00 14 */	lfs f0, 0x14(r3)
/* 80291674  D0 1C 01 10 */	stfs f0, 0x110(r28)
/* 80291678  38 60 00 00 */	li r3, 0
/* 8029167C  38 00 00 04 */	li r0, 4
/* 80291680  7C 09 03 A6 */	mtctr r0
lbl_80291684:
/* 80291684  38 9B 00 00 */	addi r4, r27, 0
/* 80291688  7C 84 1A 14 */	add r4, r4, r3
/* 8029168C  A8 04 00 00 */	lha r0, 0(r4)
/* 80291690  7C BC 1A 14 */	add r5, r28, r3
/* 80291694  B0 05 01 14 */	sth r0, 0x114(r5)
/* 80291698  A8 04 00 02 */	lha r0, 2(r4)
/* 8029169C  B0 05 01 16 */	sth r0, 0x116(r5)
/* 802916A0  A8 04 00 04 */	lha r0, 4(r4)
/* 802916A4  B0 05 01 18 */	sth r0, 0x118(r5)
/* 802916A8  38 63 00 06 */	addi r3, r3, 6
/* 802916AC  42 00 FF D8 */	bdnz lbl_80291684
/* 802916B0  38 80 00 00 */	li r4, 0
/* 802916B4  90 9C 01 2C */	stw r4, 0x12c(r28)
/* 802916B8  38 60 00 00 */	li r3, 0
/* 802916BC  38 00 00 10 */	li r0, 0x10
/* 802916C0  7C 09 03 A6 */	mtctr r0
lbl_802916C4:
/* 802916C4  38 03 01 30 */	addi r0, r3, 0x130
/* 802916C8  7C 9C 01 2E */	stwx r4, r28, r0
/* 802916CC  38 63 00 04 */	addi r3, r3, 4
/* 802916D0  42 00 FF F4 */	bdnz lbl_802916C4
/* 802916D4  80 7C 01 70 */	lwz r3, 0x170(r28)
/* 802916D8  48 00 1A 71 */	bl init__Q28JASTrack11TChannelMgrFv
/* 802916DC  38 00 00 01 */	li r0, 1
/* 802916E0  90 1C 01 D0 */	stw r0, 0x1d0(r28)
/* 802916E4  3B A0 00 01 */	li r29, 1
/* 802916E8  3B 60 00 04 */	li r27, 4
lbl_802916EC:
/* 802916EC  3B DB 01 70 */	addi r30, r27, 0x170
/* 802916F0  7F FC F0 2E */	lwzx r31, r28, r30
/* 802916F4  28 1F 00 00 */	cmplwi r31, 0
/* 802916F8  41 82 00 6C */	beq lbl_80291764
/* 802916FC  88 0D 8C B0 */	lbz r0, struct_80451230+0x0(r13)
/* 80291700  7C 00 07 75 */	extsb. r0, r0
/* 80291704  40 82 00 34 */	bne lbl_80291738
/* 80291708  3C 60 80 43 */	lis r3, data_80431AF4@ha /* 0x80431AF4@ha */
/* 8029170C  38 63 1A F4 */	addi r3, r3, data_80431AF4@l /* 0x80431AF4@l */
/* 80291710  4B FF F1 39 */	bl __ct__17JASGenericMemPoolFv
/* 80291714  3C 60 80 43 */	lis r3, data_80431AF4@ha /* 0x80431AF4@ha */
/* 80291718  38 63 1A F4 */	addi r3, r3, data_80431AF4@l /* 0x80431AF4@l */
/* 8029171C  3C 80 80 29 */	lis r4, func_80293334@ha /* 0x80293334@ha */
/* 80291720  38 84 33 34 */	addi r4, r4, func_80293334@l /* 0x80293334@l */
/* 80291724  3C A0 80 43 */	lis r5, lit_470@ha /* 0x80431ADC@ha */
/* 80291728  38 A5 1A DC */	addi r5, r5, lit_470@l /* 0x80431ADC@l */
/* 8029172C  48 0D 04 F9 */	bl __register_global_object
/* 80291730  38 00 00 01 */	li r0, 1
/* 80291734  98 0D 8C B0 */	stb r0, struct_80451230+0x0(r13)
lbl_80291738:
/* 80291738  48 0A BF BD */	bl OSDisableInterrupts
/* 8029173C  90 61 00 08 */	stw r3, 8(r1)
/* 80291740  3C 60 80 43 */	lis r3, data_80431AF4@ha /* 0x80431AF4@ha */
/* 80291744  38 63 1A F4 */	addi r3, r3, data_80431AF4@l /* 0x80431AF4@l */
/* 80291748  7F E4 FB 78 */	mr r4, r31
/* 8029174C  38 A0 00 50 */	li r5, 0x50
/* 80291750  4B FF F2 45 */	bl free__17JASGenericMemPoolFPvUl
/* 80291754  80 61 00 08 */	lwz r3, 8(r1)
/* 80291758  48 0A BF C5 */	bl OSRestoreInterrupts
/* 8029175C  38 00 00 00 */	li r0, 0
/* 80291760  7C 1C F1 2E */	stwx r0, r28, r30
lbl_80291764:
/* 80291764  3B BD 00 01 */	addi r29, r29, 1
/* 80291768  2C 1D 00 04 */	cmpwi r29, 4
/* 8029176C  3B 7B 00 04 */	addi r27, r27, 4
/* 80291770  41 80 FF 7C */	blt lbl_802916EC
/* 80291774  3C 60 80 43 */	lis r3, sDefaultBankTable__8JASTrack@ha /* 0x804316B4@ha */
/* 80291778  38 03 16 B4 */	addi r0, r3, sDefaultBankTable__8JASTrack@l /* 0x804316B4@l */
/* 8029177C  90 1C 01 D4 */	stw r0, 0x1d4(r28)
/* 80291780  C0 22 BB A4 */	lfs f1, lit_679(r2)
/* 80291784  D0 3C 01 D8 */	stfs f1, 0x1d8(r28)
/* 80291788  D0 3C 01 DC */	stfs f1, 0x1dc(r28)
/* 8029178C  C0 02 BB A0 */	lfs f0, lit_457(r2)
/* 80291790  D0 1C 01 E0 */	stfs f0, 0x1e0(r28)
/* 80291794  D0 3C 01 E4 */	stfs f1, 0x1e4(r28)
/* 80291798  D0 1C 01 E8 */	stfs f0, 0x1e8(r28)
/* 8029179C  D0 3C 01 EC */	stfs f1, 0x1ec(r28)
/* 802917A0  38 00 00 00 */	li r0, 0
/* 802917A4  B0 1C 01 F0 */	sth r0, 0x1f0(r28)
/* 802917A8  B0 1C 01 F2 */	sth r0, 0x1f2(r28)
/* 802917AC  D0 3C 02 18 */	stfs f1, 0x218(r28)
/* 802917B0  B0 1C 02 24 */	sth r0, 0x224(r28)
/* 802917B4  90 1C 02 20 */	stw r0, 0x220(r28)
/* 802917B8  38 00 00 78 */	li r0, 0x78
/* 802917BC  B0 1C 02 26 */	sth r0, 0x226(r28)
/* 802917C0  38 00 00 30 */	li r0, 0x30
/* 802917C4  B0 1C 02 28 */	sth r0, 0x228(r28)
/* 802917C8  D0 3C 02 1C */	stfs f1, 0x21c(r28)
/* 802917CC  7F 83 E3 78 */	mr r3, r28
/* 802917D0  48 00 0D 15 */	bl updateTempo__8JASTrackFv
/* 802917D4  38 80 00 00 */	li r4, 0
/* 802917D8  98 9C 02 2A */	stb r4, 0x22a(r28)
/* 802917DC  38 00 00 3C */	li r0, 0x3c
/* 802917E0  98 1C 02 2B */	stb r0, 0x22b(r28)
/* 802917E4  B0 9C 02 2C */	sth r4, 0x22c(r28)
/* 802917E8  38 00 00 F0 */	li r0, 0xf0
/* 802917EC  B0 1C 02 2E */	sth r0, 0x22e(r28)
/* 802917F0  38 00 00 0C */	li r0, 0xc
/* 802917F4  98 1C 02 30 */	stb r0, 0x230(r28)
/* 802917F8  38 00 00 40 */	li r0, 0x40
/* 802917FC  98 1C 02 31 */	stb r0, 0x231(r28)
/* 80291800  98 9C 02 32 */	stb r4, 0x232(r28)
/* 80291804  38 00 00 64 */	li r0, 0x64
/* 80291808  98 1C 02 33 */	stb r0, 0x233(r28)
/* 8029180C  38 00 01 50 */	li r0, 0x150
/* 80291810  B0 1C 02 34 */	sth r0, 0x234(r28)
/* 80291814  38 00 02 10 */	li r0, 0x210
/* 80291818  B0 1C 02 36 */	sth r0, 0x236(r28)
/* 8029181C  38 00 03 52 */	li r0, 0x352
/* 80291820  B0 1C 02 38 */	sth r0, 0x238(r28)
/* 80291824  38 00 04 12 */	li r0, 0x412
/* 80291828  B0 1C 02 3A */	sth r0, 0x23a(r28)
/* 8029182C  B0 9C 02 3C */	sth r4, 0x23c(r28)
/* 80291830  B0 9C 02 3E */	sth r4, 0x23e(r28)
/* 80291834  38 60 00 00 */	li r3, 0
/* 80291838  38 00 00 08 */	li r0, 8
/* 8029183C  7C 09 03 A6 */	mtctr r0
lbl_80291840:
/* 80291840  38 03 01 F4 */	addi r0, r3, 0x1f4
/* 80291844  7C 9C 03 2E */	sthx r4, r28, r0
/* 80291848  38 63 00 02 */	addi r3, r3, 2
/* 8029184C  42 00 FF F4 */	bdnz lbl_80291840
/* 80291850  38 00 7F FF */	li r0, 0x7fff
/* 80291854  B0 1C 01 F4 */	sth r0, 0x1f4(r28)
/* 80291858  38 60 00 00 */	li r3, 0
/* 8029185C  38 80 00 00 */	li r4, 0
/* 80291860  38 00 00 08 */	li r0, 8
/* 80291864  7C 09 03 A6 */	mtctr r0
lbl_80291868:
/* 80291868  38 03 02 04 */	addi r0, r3, 0x204
/* 8029186C  7C 9C 03 2E */	sthx r4, r28, r0
/* 80291870  38 63 00 02 */	addi r3, r3, 2
/* 80291874  42 00 FF F4 */	bdnz lbl_80291868
/* 80291878  38 00 7F FF */	li r0, 0x7fff
/* 8029187C  B0 1C 02 04 */	sth r0, 0x204(r28)
/* 80291880  38 80 00 00 */	li r4, 0
/* 80291884  98 9C 02 14 */	stb r4, 0x214(r28)
/* 80291888  88 1C 02 16 */	lbz r0, 0x216(r28)
/* 8029188C  50 80 3E 30 */	rlwimi r0, r4, 7, 0x18, 0x18
/* 80291890  98 1C 02 16 */	stb r0, 0x216(r28)
/* 80291894  88 1C 02 16 */	lbz r0, 0x216(r28)
/* 80291898  50 80 36 72 */	rlwimi r0, r4, 6, 0x19, 0x19
/* 8029189C  98 1C 02 16 */	stb r0, 0x216(r28)
/* 802918A0  38 60 00 01 */	li r3, 1
/* 802918A4  88 1C 02 16 */	lbz r0, 0x216(r28)
/* 802918A8  50 60 2E B4 */	rlwimi r0, r3, 5, 0x1a, 0x1a
/* 802918AC  98 1C 02 16 */	stb r0, 0x216(r28)
/* 802918B0  88 1C 02 16 */	lbz r0, 0x216(r28)
/* 802918B4  50 60 17 7A */	rlwimi r0, r3, 2, 0x1d, 0x1d
/* 802918B8  98 1C 02 16 */	stb r0, 0x216(r28)
/* 802918BC  88 1C 02 16 */	lbz r0, 0x216(r28)
/* 802918C0  50 80 26 F6 */	rlwimi r0, r4, 4, 0x1b, 0x1b
/* 802918C4  98 1C 02 16 */	stb r0, 0x216(r28)
/* 802918C8  88 1C 02 16 */	lbz r0, 0x216(r28)
/* 802918CC  50 80 1F 38 */	rlwimi r0, r4, 3, 0x1c, 0x1c
/* 802918D0  98 1C 02 16 */	stb r0, 0x216(r28)
/* 802918D4  88 1C 02 16 */	lbz r0, 0x216(r28)
/* 802918D8  50 80 0F BC */	rlwimi r0, r4, 1, 0x1e, 0x1e
/* 802918DC  98 1C 02 16 */	stb r0, 0x216(r28)
/* 802918E0  98 9C 02 15 */	stb r4, 0x215(r28)
/* 802918E4  39 61 00 30 */	addi r11, r1, 0x30
/* 802918E8  48 0D 09 39 */	bl _restgpr_27
/* 802918EC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802918F0  7C 08 03 A6 */	mtlr r0
/* 802918F4  38 21 00 30 */	addi r1, r1, 0x30
/* 802918F8  4E 80 00 20 */	blr 
