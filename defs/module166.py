#
# Generate By: dol2asm
# Module: 166
#

# Libraries
LIBRARIES = [
	"d/a/door/d_a_door_boss",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"unknown_translation_unit_dtors",
	"unknown_translation_unit_bss",
	"d_a_door_boss",
]

# Sections
SECTIONS = [
	".text",
	".ctors",
	".dtors",
	".bss",
	".rodata",
	".data",
]

# Symbols
SYMBOLS = [
	{'addr':0x8066F3A0,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8066F3CC,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8066F3F8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8066F418,'size':12,'pad':0,'label':"getArcName__9daBdoor_cFv",'name':"getArcName__9daBdoor_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8066F424,'size':16,'pad':0,'label':"getBmd__9daBdoor_cFv",'name':"getBmd__9daBdoor_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8066F434,'size':16,'pad':0,'label':"getDzb__9daBdoor_cFv",'name':"getDzb__9daBdoor_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8066F444,'size':16,'pad':0,'label':"getBmd2__9daBdoor_cFv",'name':"getBmd2__9daBdoor_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8066F454,'size':112,'pad':0,'label':"getDoorModelData__9daBdoor_cFv",'name':"getDoorModelData__9daBdoor_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8066F4C4,'size':32,'pad':0,'label':"CheckCreateHeap__FP10fopAc_ac_c",'name':"CheckCreateHeap__FP10fopAc_ac_c",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8066F4E4,'size':524,'pad':0,'label':"CreateHeap__9daBdoor_cFv",'name':"CreateHeap__9daBdoor_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8066F6F0,'size':72,'pad':0,'label':"__dt__12J3DFrameCtrlFv",'name':"__dt__12J3DFrameCtrlFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8066F738,'size':180,'pad':0,'label':"calcMtx__9daBdoor_cFv",'name':"calcMtx__9daBdoor_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8066F7EC,'size':248,'pad':0,'label':"CreateInit__9daBdoor_cFv",'name':"CreateInit__9daBdoor_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8066F8E4,'size':244,'pad':0,'label':"create__9daBdoor_cFv",'name':"create__9daBdoor_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8066F9D8,'size':112,'pad':0,'label':"__dt__12dBgS_AcchCirFv",'name':"__dt__12dBgS_AcchCirFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8066FA48,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8066FAB8,'size':72,'pad':0,'label':"getDemoAction__9daBdoor_cFv",'name':"getDemoAction__9daBdoor_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8066FB00,'size':1028,'pad':0,'label':"demoProc__9daBdoor_cFv",'name':"demoProc__9daBdoor_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[5,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8066FF04,'size':296,'pad':0,'label':"calcGoal__9daBdoor_cFP4cXyzi",'name':"calcGoal__9daBdoor_cFP4cXyzi",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067002C,'size':152,'pad':0,'label':"smokeInit__9daBdoor_cFv",'name':"smokeInit__9daBdoor_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806700C4,'size':304,'pad':0,'label':"checkArea__9daBdoor_cFv",'name':"checkArea__9daBdoor_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806701F4,'size':160,'pad':0,'label':"checkFront__9daBdoor_cFv",'name':"checkFront__9daBdoor_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80670294,'size':140,'pad':0,'label':"checkOpen__9daBdoor_cFv",'name':"checkOpen__9daBdoor_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80670320,'size':8,'pad':0,'label':"actionWait__9daBdoor_cFv",'name':"actionWait__9daBdoor_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80670328,'size':152,'pad':0,'label':"actionCloseWait__9daBdoor_cFv",'name':"actionCloseWait__9daBdoor_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806703C0,'size':36,'pad':0,'label':"actionOpen__9daBdoor_cFv",'name':"actionOpen__9daBdoor_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806703E4,'size':352,'pad':0,'label':"actionEnd__9daBdoor_cFv",'name':"actionEnd__9daBdoor_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80670544,'size':288,'pad':0,'label':"execute__9daBdoor_cFv",'name':"execute__9daBdoor_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80670664,'size':64,'pad':0,'label':"checkDraw__9daBdoor_cFv",'name':"checkDraw__9daBdoor_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806706A4,'size':352,'pad':0,'label':"draw__9daBdoor_cFv",'name':"draw__9daBdoor_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80670804,'size':112,'pad':0,'label':"Delete__9daBdoor_cFv",'name':"Delete__9daBdoor_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80670874,'size':32,'pad':0,'label':"daBdoor_Draw__FP9daBdoor_c",'name':"daBdoor_Draw__FP9daBdoor_c",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80670894,'size':36,'pad':0,'label':"daBdoor_Execute__FP9daBdoor_c",'name':"daBdoor_Execute__FP9daBdoor_c",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806708B8,'size':36,'pad':0,'label':"daBdoor_Delete__FP9daBdoor_c",'name':"daBdoor_Delete__FP9daBdoor_c",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806708DC,'size':32,'pad':0,'label':"daBdoor_Create__FP10fopAc_ac_c",'name':"daBdoor_Create__FP10fopAc_ac_c",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806708FC,'size':8,'pad':0,'label':"func_806708FC",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':4,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80670904,'size':8,'pad':0,'label':"func_80670904",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':4,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067090C,'size':4,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80670910,'size':4,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80670914,'size':4,'pad':0,'label':"lit_3726",'name':"@3726",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80670918,'size':4,'pad':0,'label':"lit_3755",'name':"@3755",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067091C,'size':4,'pad':0,'label':"lit_3769",'name':"@3769",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80670920,'size':4,'pad':0,'label':"lit_3770",'name':"@3770",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80670924,'size':4,'pad':0,'label':"lit_3934",'name':"@3934",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80670928,'size':4,'pad':0,'label':"lit_3935",'name':"@3935",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067092C,'size':4,'pad':0,'label':"lit_3936",'name':"@3936",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80670930,'size':4,'pad':0,'label':"lit_3937",'name':"@3937",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80670934,'size':4,'pad':0,'label':"lit_3968",'name':"@3968",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80670938,'size':4,'pad':0,'label':"lit_3969",'name':"@3969",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067093C,'size':4,'pad':0,'label':"lit_3970",'name':"@3970",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80670940,'size':4,'pad':0,'label':"lit_4028",'name':"@4028",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80670944,'size':4,'pad':4,'label':"lit_4029",'name':"@4029",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067094C,'size':8,'pad':0,'label':"lit_4031",'name':"@4031",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80670954,'size':21,'pad':3,'label':"l_door_open_demo",'name':"l_door_open_demo",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8067096C,'size':13,'pad':3,'label':"l_staff_name",'name':"l_staff_name",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8067097C,'size':4,'pad':0,'label':"lit_4143",'name':"@4143",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80670980,'size':4,'pad':0,'label':"lit_4144",'name':"@4144",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80670984,'size':156,'pad':0,'label':"d_a_door_boss__stringBase0",'name':"@stringBase0",'lib':-1,'tu':4,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[6,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80670A20,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80670A2C,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80670A40,'size':44,'pad':0,'label':"action_table",'name':"action_table$3817",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80670A6C,'size':44,'pad':0,'label':"lit_3939",'name':"@3939",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80670A98,'size':44,'pad':0,'label':"lit_3938",'name':"@3938",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80670AC4,'size':12,'pad':0,'label':"lit_4149",'name':"@4149",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80670AD0,'size':12,'pad':0,'label':"lit_4150",'name':"@4150",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80670ADC,'size':12,'pad':0,'label':"lit_4151",'name':"@4151",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80670AE8,'size':12,'pad':0,'label':"lit_4152",'name':"@4152",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80670AF4,'size':48,'pad':0,'label':"l_action",'name':"l_action$4148",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80670B24,'size':32,'pad':0,'label':"l_daBdoor_Method",'name':"l_daBdoor_Method",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80670B44,'size':48,'pad':0,'label':"g_profile_BOSS_DOOR",'name':"g_profile_BOSS_DOOR",'lib':-1,'tu':4,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80670B74,'size':12,'pad':0,'label':"__vt__12dBgS_AcchCir",'name':"__vt__12dBgS_AcchCir",'lib':-1,'tu':4,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80670B80,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':4,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80670BA4,'size':12,'pad':0,'label':"__vt__12J3DFrameCtrl",'name':"__vt__12J3DFrameCtrl",'lib':-1,'tu':4,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80670BB0,'size':4,'pad':0,'label':"data_80670BB0",'name':None,'lib':-1,'tu':3,'section':3,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"getArcName__9daBdoor_cFv":3,
	"getBmd__9daBdoor_cFv":4,
	"getDzb__9daBdoor_cFv":5,
	"getBmd2__9daBdoor_cFv":6,
	"getDoorModelData__9daBdoor_cFv":7,
	"CheckCreateHeap__FP10fopAc_ac_c":8,
	"CreateHeap__9daBdoor_cFv":9,
	"__dt__12J3DFrameCtrlFv":10,
	"calcMtx__9daBdoor_cFv":11,
	"CreateInit__9daBdoor_cFv":12,
	"create__9daBdoor_cFv":13,
	"__dt__12dBgS_AcchCirFv":14,
	"__dt__12dBgS_ObjAcchFv":15,
	"getDemoAction__9daBdoor_cFv":16,
	"demoProc__9daBdoor_cFv":17,
	"calcGoal__9daBdoor_cFP4cXyzi":18,
	"smokeInit__9daBdoor_cFv":19,
	"checkArea__9daBdoor_cFv":20,
	"checkFront__9daBdoor_cFv":21,
	"checkOpen__9daBdoor_cFv":22,
	"actionWait__9daBdoor_cFv":23,
	"actionCloseWait__9daBdoor_cFv":24,
	"actionOpen__9daBdoor_cFv":25,
	"actionEnd__9daBdoor_cFv":26,
	"execute__9daBdoor_cFv":27,
	"checkDraw__9daBdoor_cFv":28,
	"draw__9daBdoor_cFv":29,
	"Delete__9daBdoor_cFv":30,
	"daBdoor_Draw__FP9daBdoor_c":31,
	"daBdoor_Execute__FP9daBdoor_c":32,
	"daBdoor_Delete__FP9daBdoor_c":33,
	"daBdoor_Create__FP10fopAc_ac_c":34,
	"func_806708FC":35,
	"func_80670904":36,
	"_ctors":37,
	"_dtors":38,
	"lit_3726":39,
	"lit_3755":40,
	"lit_3769":41,
	"lit_3770":42,
	"lit_3934":43,
	"lit_3935":44,
	"lit_3936":45,
	"lit_3937":46,
	"lit_3968":47,
	"lit_3969":48,
	"lit_3970":49,
	"lit_4028":50,
	"lit_4029":51,
	"lit_4031":52,
	"l_door_open_demo":53,
	"l_staff_name":54,
	"lit_4143":55,
	"lit_4144":56,
	"d_a_door_boss__stringBase0":57,
	"cNullVec__6Z2Calc":58,
	"lit_1787":59,
	"action_table":60,
	"lit_3939":61,
	"lit_3938":62,
	"lit_4149":63,
	"lit_4150":64,
	"lit_4151":65,
	"lit_4152":66,
	"l_action":67,
	"l_daBdoor_Method":68,
	"g_profile_BOSS_DOOR":69,
	"__vt__12dBgS_AcchCir":70,
	"__vt__12dBgS_ObjAcch":71,
	"__vt__12J3DFrameCtrl":72,
	"data_80670BB0":73,
}

