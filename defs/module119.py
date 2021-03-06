#
# Generate By: dol2asm
# Module: 119
#

# Libraries
LIBRARIES = [
	"d/a/d_a_sq",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"global_destructor_chain",
	"d_a_sq",
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
	{'addr':0x8059F580,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8059F5AC,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8059F5D8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8059F5F8,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8059F614,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8059F66C,'size':108,'pad':0,'label':"__ct__10daSq_HIO_cFv",'name':"__ct__10daSq_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8059F6D8,'size':304,'pad':0,'label':"anm_init__FP8sq_classifUcfi",'name':"anm_init__FP8sq_classifUcfi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[5,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8059F808,'size':248,'pad':0,'label':"daSq_Draw__FP8sq_class",'name':"daSq_Draw__FP8sq_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8059F900,'size':252,'pad':0,'label':"way_bg_check__FP8sq_class",'name':"way_bg_check__FP8sq_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8059F9FC,'size':108,'pad':0,'label':"turn_set__FP8sq_class",'name':"turn_set__FP8sq_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8059FA68,'size':1000,'pad':0,'label':"sq_normal__FP8sq_class",'name':"sq_normal__FP8sq_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8059FE50,'size':468,'pad':0,'label':"sq_away__FP8sq_class",'name':"sq_away__FP8sq_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805A0024,'size':316,'pad':0,'label':"sq_carry__FP8sq_class",'name':"sq_carry__FP8sq_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805A0160,'size':188,'pad':0,'label':"sq_fly__FP8sq_class",'name':"sq_fly__FP8sq_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805A021C,'size':352,'pad':0,'label':"sq_message__FP8sq_class",'name':"sq_message__FP8sq_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805A037C,'size':808,'pad':0,'label':"action__FP8sq_class",'name':"action__FP8sq_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805A06A4,'size':292,'pad':0,'label':"message__FP8sq_class",'name':"message__FP8sq_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805A07C8,'size':548,'pad':0,'label':"daSq_Execute__FP8sq_class",'name':"daSq_Execute__FP8sq_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805A09EC,'size':8,'pad':0,'label':"daSq_IsDelete__FP8sq_class",'name':"daSq_IsDelete__FP8sq_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x805A09F4,'size':84,'pad':0,'label':"daSq_Delete__FP8sq_class",'name':"daSq_Delete__FP8sq_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805A0A48,'size':416,'pad':0,'label':"useHeapInit__FP10fopAc_ac_c",'name':"useHeapInit__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805A0BE8,'size':72,'pad':0,'label':"__dt__12J3DFrameCtrlFv",'name':"__dt__12J3DFrameCtrlFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805A0C30,'size':896,'pad':0,'label':"daSq_Create__FP10fopAc_ac_c",'name':"daSq_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805A0FB0,'size':72,'pad':0,'label':"__dt__8cM3dGSphFv",'name':"__dt__8cM3dGSphFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805A0FF8,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805A1040,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805A10B0,'size':72,'pad':0,'label':"__dt__10daSq_HIO_cFv",'name':"__dt__10daSq_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805A10F8,'size':60,'pad':0,'label':"__sinit_d_a_sq_cpp",'name':"__sinit_d_a_sq_cpp",'lib':-1,'tu':3,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x805A1134,'size':8,'pad':0,'label':"func_805A1134",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805A113C,'size':8,'pad':0,'label':"func_805A113C",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805A1144,'size':8,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x805A114C,'size':12,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x805A1158,'size':4,'pad':0,'label':"lit_3769",'name':"@3769",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':True,'r':[12,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x805A115C,'size':4,'pad':0,'label':"lit_3770",'name':"@3770",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x805A1160,'size':4,'pad':0,'label':"lit_3771",'name':"@3771",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x805A1164,'size':4,'pad':0,'label':"lit_3772",'name':"@3772",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x805A1168,'size':4,'pad':0,'label':"lit_3773",'name':"@3773",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x805A116C,'size':4,'pad':0,'label':"lit_3774",'name':"@3774",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x805A1170,'size':4,'pad':0,'label':"lit_3775",'name':"@3775",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x805A1174,'size':4,'pad':0,'label':"lit_3776",'name':"@3776",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x805A1178,'size':4,'pad':0,'label':"lit_3798",'name':"@3798",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A117C,'size':4,'pad':0,'label':"lit_3799",'name':"@3799",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x805A1180,'size':4,'pad':0,'label':"lit_3826",'name':"@3826",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x805A1184,'size':4,'pad':0,'label':"lit_3827",'name':"@3827",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x805A1188,'size':6,'pad':2,'label':"lit_3884",'name':"@3884",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A1190,'size':4,'pad':0,'label':"lit_3886",'name':"@3886",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805A1194,'size':4,'pad':0,'label':"lit_3953",'name':"@3953",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x805A1198,'size':4,'pad':0,'label':"lit_3954",'name':"@3954",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x805A119C,'size':4,'pad':0,'label':"lit_3955",'name':"@3955",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x805A11A0,'size':4,'pad':0,'label':"lit_3956",'name':"@3956",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x805A11A4,'size':4,'pad':0,'label':"lit_3957",'name':"@3957",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x805A11A8,'size':4,'pad':0,'label':"lit_3958",'name':"@3958",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x805A11AC,'size':4,'pad':0,'label':"lit_3959",'name':"@3959",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x805A11B0,'size':4,'pad':0,'label':"lit_3960",'name':"@3960",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x805A11B4,'size':4,'pad':0,'label':"lit_3961",'name':"@3961",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x805A11B8,'size':8,'pad':0,'label':"lit_3965",'name':"@3965",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A11C0,'size':4,'pad':0,'label':"lit_3998",'name':"@3998",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x805A11C4,'size':4,'pad':0,'label':"lit_3999",'name':"@3999",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x805A11C8,'size':4,'pad':0,'label':"lit_4000",'name':"@4000",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x805A11CC,'size':4,'pad':0,'label':"lit_4026",'name':"@4026",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805A11D0,'size':4,'pad':0,'label':"lit_4119",'name':"@4119",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x805A11D4,'size':4,'pad':0,'label':"lit_4120",'name':"@4120",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x805A11D8,'size':4,'pad':0,'label':"lit_4121",'name':"@4121",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x805A11DC,'size':4,'pad':0,'label':"lit_4198",'name':"@4198",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x805A11E0,'size':4,'pad':0,'label':"lit_4385",'name':"@4385",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805A11E4,'size':3,'pad':0,'label':"d_a_sq__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x805A11E8,'size':16,'pad':0,'label':"wait_bck",'name':"wait_bck",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A11F8,'size':12,'pad':0,'label':"carry_wait_bck",'name':"carry_wait_bck",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A1204,'size':64,'pad':0,'label':"cc_sph_src",'name':"cc_sph_src$4278",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A1244,'size':64,'pad':0,'label':"at_sph_src",'name':"at_sph_src$4279",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A1284,'size':32,'pad':0,'label':"l_daSq_Method",'name':"l_daSq_Method",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x805A12A4,'size':48,'pad':0,'label':"g_profile_SQ",'name':"g_profile_SQ",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x805A12D4,'size':12,'pad':0,'label':"__vt__8cM3dGSph",'name':"__vt__8cM3dGSph",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x805A12E0,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x805A12EC,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x805A1310,'size':12,'pad':0,'label':"__vt__12J3DFrameCtrl",'name':"__vt__12J3DFrameCtrl",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x805A131C,'size':12,'pad':0,'label':"__vt__10daSq_HIO_c",'name':"__vt__10daSq_HIO_c",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x805A1328,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':-1,'tu':2,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A1330,'size':4,'pad':0,'label':"data_805A1330",'name':None,'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A1334,'size':12,'pad':0,'label':"lit_3764",'name':"@3764",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A1340,'size':48,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[8,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__10daSq_HIO_cFv":5,
	"anm_init__FP8sq_classifUcfi":6,
	"daSq_Draw__FP8sq_class":7,
	"way_bg_check__FP8sq_class":8,
	"turn_set__FP8sq_class":9,
	"sq_normal__FP8sq_class":10,
	"sq_away__FP8sq_class":11,
	"sq_carry__FP8sq_class":12,
	"sq_fly__FP8sq_class":13,
	"sq_message__FP8sq_class":14,
	"action__FP8sq_class":15,
	"message__FP8sq_class":16,
	"daSq_Execute__FP8sq_class":17,
	"daSq_IsDelete__FP8sq_class":18,
	"daSq_Delete__FP8sq_class":19,
	"useHeapInit__FP10fopAc_ac_c":20,
	"__dt__12J3DFrameCtrlFv":21,
	"daSq_Create__FP10fopAc_ac_c":22,
	"__dt__8cM3dGSphFv":23,
	"__dt__8cM3dGAabFv":24,
	"__dt__12dBgS_ObjAcchFv":25,
	"__dt__10daSq_HIO_cFv":26,
	"__sinit_d_a_sq_cpp":27,
	"func_805A1134":28,
	"func_805A113C":29,
	"_ctors":30,
	"_dtors":31,
	"lit_3769":32,
	"lit_3770":33,
	"lit_3771":34,
	"lit_3772":35,
	"lit_3773":36,
	"lit_3774":37,
	"lit_3775":38,
	"lit_3776":39,
	"lit_3798":40,
	"lit_3799":41,
	"lit_3826":42,
	"lit_3827":43,
	"lit_3884":44,
	"lit_3886":45,
	"lit_3953":46,
	"lit_3954":47,
	"lit_3955":48,
	"lit_3956":49,
	"lit_3957":50,
	"lit_3958":51,
	"lit_3959":52,
	"lit_3960":53,
	"lit_3961":54,
	"lit_3965":55,
	"lit_3998":56,
	"lit_3999":57,
	"lit_4000":58,
	"lit_4026":59,
	"lit_4119":60,
	"lit_4120":61,
	"lit_4121":62,
	"lit_4198":63,
	"lit_4385":64,
	"d_a_sq__stringBase0":65,
	"wait_bck":66,
	"carry_wait_bck":67,
	"cc_sph_src":68,
	"at_sph_src":69,
	"l_daSq_Method":70,
	"g_profile_SQ":71,
	"__vt__8cM3dGSph":72,
	"__vt__8cM3dGAab":73,
	"__vt__12dBgS_ObjAcch":74,
	"__vt__12J3DFrameCtrl":75,
	"__vt__10daSq_HIO_c":76,
	"__global_destructor_chain":77,
	"data_805A1330":78,
	"lit_3764":79,
	"l_HIO":80,
}

