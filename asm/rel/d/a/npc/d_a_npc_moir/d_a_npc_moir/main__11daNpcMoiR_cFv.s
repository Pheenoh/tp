lbl_80A81274:
/* 80A81274  94 21 FE F0 */	stwu r1, -0x110(r1)
/* 80A81278  7C 08 02 A6 */	mflr r0
/* 80A8127C  90 01 01 14 */	stw r0, 0x114(r1)
/* 80A81280  93 E1 01 0C */	stw r31, 0x10c(r1)
/* 80A81284  93 C1 01 08 */	stw r30, 0x108(r1)
/* 80A81288  7C 7E 1B 78 */	mr r30, r3
/* 80A8128C  3C 60 80 A8 */	lis r3, m__17daNpcMoiR_Param_c@ha /* 0x80A832AC@ha */
/* 80A81290  3B E3 32 AC */	addi r31, r3, m__17daNpcMoiR_Param_c@l /* 0x80A832AC@l */
/* 80A81294  38 7E 0D DC */	addi r3, r30, 0xddc
/* 80A81298  4B 8E 0D 81 */	bl __ptmf_test
/* 80A8129C  2C 03 00 00 */	cmpwi r3, 0
/* 80A812A0  41 82 00 18 */	beq lbl_80A812B8
/* 80A812A4  7F C3 F3 78 */	mr r3, r30
/* 80A812A8  38 80 00 00 */	li r4, 0
/* 80A812AC  39 9E 0D DC */	addi r12, r30, 0xddc
/* 80A812B0  4B 8E 0D D5 */	bl __ptmf_scall
/* 80A812B4  60 00 00 00 */	nop 
lbl_80A812B8:
/* 80A812B8  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80A812BC  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80A812C0  88 03 4F AD */	lbz r0, 0x4fad(r3)
/* 80A812C4  28 00 00 00 */	cmplwi r0, 0
/* 80A812C8  41 82 00 30 */	beq lbl_80A812F8
/* 80A812CC  A0 1E 00 F8 */	lhz r0, 0xf8(r30)
/* 80A812D0  28 00 00 01 */	cmplwi r0, 1
/* 80A812D4  41 82 00 24 */	beq lbl_80A812F8
/* 80A812D8  80 9E 0D F8 */	lwz r4, 0xdf8(r30)
/* 80A812DC  3C 04 00 01 */	addis r0, r4, 1
/* 80A812E0  28 00 FF FF */	cmplwi r0, 0xffff
/* 80A812E4  41 82 00 14 */	beq lbl_80A812F8
/* 80A812E8  38 63 4E C8 */	addi r3, r3, 0x4ec8
/* 80A812EC  4B 5C 24 01 */	bl setPtI_Id__14dEvt_control_cFUi
/* 80A812F0  38 00 FF FF */	li r0, -1
/* 80A812F4  90 1E 0D F8 */	stw r0, 0xdf8(r30)
lbl_80A812F8:
/* 80A812F8  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 80A812FC  80 1F 00 9C */	lwz r0, 0x9c(r31)
/* 80A81300  90 61 00 38 */	stw r3, 0x38(r1)
/* 80A81304  90 01 00 3C */	stw r0, 0x3c(r1)
/* 80A81308  80 1F 00 A0 */	lwz r0, 0xa0(r31)
/* 80A8130C  90 01 00 40 */	stw r0, 0x40(r1)
/* 80A81310  38 7F 00 00 */	addi r3, r31, 0
/* 80A81314  C0 03 00 44 */	lfs f0, 0x44(r3)
/* 80A81318  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 80A8131C  80 1F 00 A4 */	lwz r0, 0xa4(r31)
/* 80A81320  90 01 00 08 */	stw r0, 8(r1)
/* 80A81324  38 01 00 38 */	addi r0, r1, 0x38
/* 80A81328  90 01 00 08 */	stw r0, 8(r1)
/* 80A8132C  80 9F 00 A8 */	lwz r4, 0xa8(r31)
/* 80A81330  80 7F 00 AC */	lwz r3, 0xac(r31)
/* 80A81334  90 81 00 44 */	stw r4, 0x44(r1)
/* 80A81338  90 61 00 48 */	stw r3, 0x48(r1)
/* 80A8133C  80 7F 00 B0 */	lwz r3, 0xb0(r31)
/* 80A81340  90 61 00 4C */	stw r3, 0x4c(r1)
/* 80A81344  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 80A81348  80 7F 00 B4 */	lwz r3, 0xb4(r31)
/* 80A8134C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80A81350  38 61 00 44 */	addi r3, r1, 0x44
/* 80A81354  90 61 00 0C */	stw r3, 0xc(r1)
/* 80A81358  80 9F 00 B8 */	lwz r4, 0xb8(r31)
/* 80A8135C  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 80A81360  90 81 00 50 */	stw r4, 0x50(r1)
/* 80A81364  90 61 00 54 */	stw r3, 0x54(r1)
/* 80A81368  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80A8136C  90 61 00 58 */	stw r3, 0x58(r1)
/* 80A81370  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 80A81374  80 7F 00 C4 */	lwz r3, 0xc4(r31)
/* 80A81378  90 61 00 10 */	stw r3, 0x10(r1)
/* 80A8137C  38 61 00 50 */	addi r3, r1, 0x50
/* 80A81380  90 61 00 10 */	stw r3, 0x10(r1)
/* 80A81384  80 9F 00 C8 */	lwz r4, 0xc8(r31)
/* 80A81388  80 7F 00 CC */	lwz r3, 0xcc(r31)
/* 80A8138C  90 81 00 5C */	stw r4, 0x5c(r1)
/* 80A81390  90 61 00 60 */	stw r3, 0x60(r1)
/* 80A81394  80 7F 00 D0 */	lwz r3, 0xd0(r31)
/* 80A81398  90 61 00 64 */	stw r3, 0x64(r1)
/* 80A8139C  D0 01 00 60 */	stfs f0, 0x60(r1)
/* 80A813A0  80 7F 00 D4 */	lwz r3, 0xd4(r31)
/* 80A813A4  90 61 00 14 */	stw r3, 0x14(r1)
/* 80A813A8  38 61 00 5C */	addi r3, r1, 0x5c
/* 80A813AC  90 61 00 14 */	stw r3, 0x14(r1)
/* 80A813B0  80 9F 00 D8 */	lwz r4, 0xd8(r31)
/* 80A813B4  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 80A813B8  90 81 00 68 */	stw r4, 0x68(r1)
/* 80A813BC  90 61 00 6C */	stw r3, 0x6c(r1)
/* 80A813C0  80 7F 00 E0 */	lwz r3, 0xe0(r31)
/* 80A813C4  90 61 00 70 */	stw r3, 0x70(r1)
/* 80A813C8  D0 01 00 6C */	stfs f0, 0x6c(r1)
/* 80A813CC  80 7F 00 E4 */	lwz r3, 0xe4(r31)
/* 80A813D0  90 61 00 18 */	stw r3, 0x18(r1)
/* 80A813D4  38 61 00 68 */	addi r3, r1, 0x68
/* 80A813D8  90 61 00 18 */	stw r3, 0x18(r1)
/* 80A813DC  80 9F 00 E8 */	lwz r4, 0xe8(r31)
/* 80A813E0  80 7F 00 EC */	lwz r3, 0xec(r31)
/* 80A813E4  90 81 00 74 */	stw r4, 0x74(r1)
/* 80A813E8  90 61 00 78 */	stw r3, 0x78(r1)
/* 80A813EC  80 7F 00 F0 */	lwz r3, 0xf0(r31)
/* 80A813F0  90 61 00 7C */	stw r3, 0x7c(r1)
/* 80A813F4  80 7F 00 F4 */	lwz r3, 0xf4(r31)
/* 80A813F8  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80A813FC  38 61 00 74 */	addi r3, r1, 0x74
/* 80A81400  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80A81404  80 9F 00 F8 */	lwz r4, 0xf8(r31)
/* 80A81408  80 7F 00 FC */	lwz r3, 0xfc(r31)
/* 80A8140C  90 81 00 80 */	stw r4, 0x80(r1)
/* 80A81410  90 61 00 84 */	stw r3, 0x84(r1)
/* 80A81414  80 7F 01 00 */	lwz r3, 0x100(r31)
/* 80A81418  90 61 00 88 */	stw r3, 0x88(r1)
/* 80A8141C  80 7F 01 04 */	lwz r3, 0x104(r31)
/* 80A81420  90 61 00 20 */	stw r3, 0x20(r1)
/* 80A81424  38 61 00 80 */	addi r3, r1, 0x80
/* 80A81428  90 61 00 20 */	stw r3, 0x20(r1)
/* 80A8142C  80 9F 01 08 */	lwz r4, 0x108(r31)
/* 80A81430  80 7F 01 0C */	lwz r3, 0x10c(r31)
/* 80A81434  90 81 00 8C */	stw r4, 0x8c(r1)
/* 80A81438  90 61 00 90 */	stw r3, 0x90(r1)
/* 80A8143C  80 7F 01 10 */	lwz r3, 0x110(r31)
/* 80A81440  90 61 00 94 */	stw r3, 0x94(r1)
/* 80A81444  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 80A81448  90 61 00 24 */	stw r3, 0x24(r1)
/* 80A8144C  38 61 00 8C */	addi r3, r1, 0x8c
/* 80A81450  90 61 00 24 */	stw r3, 0x24(r1)
/* 80A81454  80 9F 01 18 */	lwz r4, 0x118(r31)
/* 80A81458  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 80A8145C  90 81 00 98 */	stw r4, 0x98(r1)
/* 80A81460  90 61 00 9C */	stw r3, 0x9c(r1)
/* 80A81464  80 7F 01 20 */	lwz r3, 0x120(r31)
/* 80A81468  90 61 00 A0 */	stw r3, 0xa0(r1)
/* 80A8146C  80 7F 01 24 */	lwz r3, 0x124(r31)
/* 80A81470  90 61 00 28 */	stw r3, 0x28(r1)
/* 80A81474  38 61 00 98 */	addi r3, r1, 0x98
/* 80A81478  90 61 00 28 */	stw r3, 0x28(r1)
/* 80A8147C  80 9F 01 28 */	lwz r4, 0x128(r31)
/* 80A81480  80 7F 01 2C */	lwz r3, 0x12c(r31)
/* 80A81484  90 81 00 A4 */	stw r4, 0xa4(r1)
/* 80A81488  90 61 00 A8 */	stw r3, 0xa8(r1)
/* 80A8148C  80 7F 01 30 */	lwz r3, 0x130(r31)
/* 80A81490  90 61 00 AC */	stw r3, 0xac(r1)
/* 80A81494  D0 01 00 A8 */	stfs f0, 0xa8(r1)
/* 80A81498  80 7F 01 34 */	lwz r3, 0x134(r31)
/* 80A8149C  90 61 00 2C */	stw r3, 0x2c(r1)
/* 80A814A0  38 61 00 A4 */	addi r3, r1, 0xa4
/* 80A814A4  90 61 00 2C */	stw r3, 0x2c(r1)
/* 80A814A8  80 9F 01 38 */	lwz r4, 0x138(r31)
/* 80A814AC  80 7F 01 3C */	lwz r3, 0x13c(r31)
/* 80A814B0  90 81 00 B0 */	stw r4, 0xb0(r1)
/* 80A814B4  90 61 00 B4 */	stw r3, 0xb4(r1)
/* 80A814B8  80 7F 01 40 */	lwz r3, 0x140(r31)
/* 80A814BC  90 61 00 B8 */	stw r3, 0xb8(r1)
/* 80A814C0  D0 01 00 B4 */	stfs f0, 0xb4(r1)
/* 80A814C4  80 7F 01 44 */	lwz r3, 0x144(r31)
/* 80A814C8  90 61 00 30 */	stw r3, 0x30(r1)
/* 80A814CC  38 61 00 B0 */	addi r3, r1, 0xb0
/* 80A814D0  90 61 00 30 */	stw r3, 0x30(r1)
/* 80A814D4  80 7F 01 48 */	lwz r3, 0x148(r31)
/* 80A814D8  90 61 00 34 */	stw r3, 0x34(r1)
/* 80A814DC  90 01 00 34 */	stw r0, 0x34(r1)
/* 80A814E0  38 A1 00 B8 */	addi r5, r1, 0xb8
/* 80A814E4  38 9F 01 48 */	addi r4, r31, 0x148
/* 80A814E8  38 00 00 09 */	li r0, 9
/* 80A814EC  7C 09 03 A6 */	mtctr r0
lbl_80A814F0:
/* 80A814F0  80 64 00 04 */	lwz r3, 4(r4)
/* 80A814F4  84 04 00 08 */	lwzu r0, 8(r4)
/* 80A814F8  90 65 00 04 */	stw r3, 4(r5)
/* 80A814FC  94 05 00 08 */	stwu r0, 8(r5)
/* 80A81500  42 00 FF F0 */	bdnz lbl_80A814F0
/* 80A81504  80 04 00 04 */	lwz r0, 4(r4)
/* 80A81508  90 05 00 04 */	stw r0, 4(r5)
/* 80A8150C  38 01 00 08 */	addi r0, r1, 8
/* 80A81510  90 01 00 BC */	stw r0, 0xbc(r1)
/* 80A81514  38 61 00 34 */	addi r3, r1, 0x34
/* 80A81518  90 61 00 C0 */	stw r3, 0xc0(r1)
/* 80A8151C  90 61 00 C4 */	stw r3, 0xc4(r1)
/* 80A81520  38 01 00 0C */	addi r0, r1, 0xc
/* 80A81524  90 01 00 C8 */	stw r0, 0xc8(r1)
/* 80A81528  90 61 00 CC */	stw r3, 0xcc(r1)
/* 80A8152C  90 61 00 D0 */	stw r3, 0xd0(r1)
/* 80A81530  90 61 00 D4 */	stw r3, 0xd4(r1)
/* 80A81534  90 61 00 D8 */	stw r3, 0xd8(r1)
/* 80A81538  90 61 00 DC */	stw r3, 0xdc(r1)
/* 80A8153C  90 61 00 E0 */	stw r3, 0xe0(r1)
/* 80A81540  38 01 00 10 */	addi r0, r1, 0x10
/* 80A81544  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 80A81548  38 01 00 14 */	addi r0, r1, 0x14
/* 80A8154C  90 01 00 E8 */	stw r0, 0xe8(r1)
/* 80A81550  38 01 00 18 */	addi r0, r1, 0x18
/* 80A81554  90 01 00 EC */	stw r0, 0xec(r1)
/* 80A81558  38 01 00 1C */	addi r0, r1, 0x1c
/* 80A8155C  90 01 00 F0 */	stw r0, 0xf0(r1)
/* 80A81560  38 01 00 20 */	addi r0, r1, 0x20
/* 80A81564  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 80A81568  38 01 00 24 */	addi r0, r1, 0x24
/* 80A8156C  90 01 00 F8 */	stw r0, 0xf8(r1)
/* 80A81570  38 01 00 28 */	addi r0, r1, 0x28
/* 80A81574  90 01 00 FC */	stw r0, 0xfc(r1)
/* 80A81578  38 01 00 2C */	addi r0, r1, 0x2c
/* 80A8157C  90 01 01 00 */	stw r0, 0x100(r1)
/* 80A81580  38 01 00 30 */	addi r0, r1, 0x30
/* 80A81584  90 01 01 04 */	stw r0, 0x104(r1)
/* 80A81588  A8 7E 09 DE */	lha r3, 0x9de(r30)
/* 80A8158C  7C 60 07 35 */	extsh. r0, r3
/* 80A81590  41 80 00 18 */	blt lbl_80A815A8
/* 80A81594  2C 03 00 13 */	cmpwi r3, 0x13
/* 80A81598  40 80 00 10 */	bge lbl_80A815A8
/* 80A8159C  7F C3 F3 78 */	mr r3, r30
/* 80A815A0  38 81 00 BC */	addi r4, r1, 0xbc
/* 80A815A4  4B 6D 1B AD */	bl playExpressionAnm__8daNpcF_cFPPPQ28daNpcF_c18daNpcF_anmPlayData
lbl_80A815A8:
/* 80A815A8  7F C3 F3 78 */	mr r3, r30
/* 80A815AC  48 00 03 09 */	bl playMotion__11daNpcMoiR_cFv
/* 80A815B0  7F C3 F3 78 */	mr r3, r30
/* 80A815B4  48 00 00 21 */	bl checkHeadGear__11daNpcMoiR_cFv
/* 80A815B8  38 60 00 01 */	li r3, 1
/* 80A815BC  83 E1 01 0C */	lwz r31, 0x10c(r1)
/* 80A815C0  83 C1 01 08 */	lwz r30, 0x108(r1)
/* 80A815C4  80 01 01 14 */	lwz r0, 0x114(r1)
/* 80A815C8  7C 08 03 A6 */	mtlr r0
/* 80A815CC  38 21 01 10 */	addi r1, r1, 0x110
/* 80A815D0  4E 80 00 20 */	blr 
