#
# Generate By: dol2asm
# Module: 561
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_lv8Lift",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"global_destructor_chain",
	"d_a_obj_lv8Lift",
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
	{'addr':0x80C88640,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8866C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C88698,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C886B8,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C886D4,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8872C,'size':100,'pad':0,'label':"__ct__14daL8Lift_HIO_cFv",'name':"__ct__14daL8Lift_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C88790,'size':72,'pad':0,'label':"__dt__14mDoHIO_entry_cFv",'name':"__dt__14mDoHIO_entry_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C887D8,'size':136,'pad':0,'label':"setBaseMtx__10daL8Lift_cFv",'name':"setBaseMtx__10daL8Lift_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C88860,'size':200,'pad':0,'label':"CreateHeap__10daL8Lift_cFv",'name':"CreateHeap__10daL8Lift_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C88928,'size':796,'pad':0,'label':"create__10daL8Lift_cFv",'name':"create__10daL8Lift_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C88C44,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C88CB4,'size':112,'pad':0,'label':"__dt__12dBgS_AcchCirFv",'name':"__dt__12dBgS_AcchCirFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C88D24,'size':72,'pad':0,'label':"__dt__12J3DFrameCtrlFv",'name':"__dt__12J3DFrameCtrlFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C88D6C,'size':80,'pad':0,'label':"lightSet__10daL8Lift_cFv",'name':"lightSet__10daL8Lift_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C88DBC,'size':24,'pad':0,'label':"rideCallBack__10daL8Lift_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c",'name':"rideCallBack__10daL8Lift_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C88DD4,'size':96,'pad':0,'label':"Execute__10daL8Lift_cFPPA3_A4_f",'name':"Execute__10daL8Lift_cFPPA3_A4_f",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C88E34,'size':644,'pad':0,'label':"moveLift__10daL8Lift_cFv",'name':"moveLift__10daL8Lift_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C890B8,'size':224,'pad':0,'label':"modeAcc__10daL8Lift_cFv",'name':"modeAcc__10daL8Lift_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C89198,'size':12,'pad':0,'label':"init_modeMove__10daL8Lift_cFv",'name':"init_modeMove__10daL8Lift_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C891A4,'size':792,'pad':0,'label':"modeMove__10daL8Lift_cFv",'name':"modeMove__10daL8Lift_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C894BC,'size':12,'pad':0,'label':"init_modeBrk__10daL8Lift_cFv",'name':"init_modeBrk__10daL8Lift_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C894C8,'size':512,'pad':0,'label':"modeBrk__10daL8Lift_cFv",'name':"modeBrk__10daL8Lift_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C896C8,'size':12,'pad':0,'label':"init_modeWaitInit__10daL8Lift_cFv",'name':"init_modeWaitInit__10daL8Lift_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C896D4,'size':52,'pad':0,'label':"modeWaitInit__10daL8Lift_cFv",'name':"modeWaitInit__10daL8Lift_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C89708,'size':12,'pad':0,'label':"init_modeWait__10daL8Lift_cFv",'name':"init_modeWait__10daL8Lift_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C89714,'size':12,'pad':0,'label':"modeWait__10daL8Lift_cFv",'name':"modeWait__10daL8Lift_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C89720,'size':12,'pad':0,'label':"init_modeMoveWait__10daL8Lift_cFv",'name':"init_modeMoveWait__10daL8Lift_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8972C,'size':68,'pad':0,'label':"modeMoveWait__10daL8Lift_cFv",'name':"modeMoveWait__10daL8Lift_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C89770,'size':176,'pad':0,'label':"init_modeOnAnm__10daL8Lift_cFv",'name':"init_modeOnAnm__10daL8Lift_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C89820,'size':84,'pad':0,'label':"modeOnAnm__10daL8Lift_cFv",'name':"modeOnAnm__10daL8Lift_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C89874,'size':104,'pad':0,'label':"init_modeStop__10daL8Lift_cFv",'name':"init_modeStop__10daL8Lift_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C898DC,'size':244,'pad':0,'label':"modeStop__10daL8Lift_cFv",'name':"modeStop__10daL8Lift_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C899D0,'size':52,'pad':0,'label':"init_modeInitSet__10daL8Lift_cFv",'name':"init_modeInitSet__10daL8Lift_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C89A04,'size':32,'pad':0,'label':"modeInitSet__10daL8Lift_cFv",'name':"modeInitSet__10daL8Lift_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C89A24,'size':52,'pad':0,'label':"init_modeInitSet2__10daL8Lift_cFv",'name':"init_modeInitSet2__10daL8Lift_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C89A58,'size':32,'pad':0,'label':"modeInitSet2__10daL8Lift_cFv",'name':"modeInitSet2__10daL8Lift_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C89A78,'size':100,'pad':0,'label':"liftReset__10daL8Lift_cFv",'name':"liftReset__10daL8Lift_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C89ADC,'size':308,'pad':0,'label':"setNextPoint__10daL8Lift_cFv",'name':"setNextPoint__10daL8Lift_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C89C10,'size':440,'pad':0,'label':"Draw__10daL8Lift_cFv",'name':"Draw__10daL8Lift_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C89DC8,'size':80,'pad':0,'label':"Delete__10daL8Lift_cFv",'name':"Delete__10daL8Lift_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C89E18,'size':44,'pad':0,'label':"daL8Lift_Draw__FP10daL8Lift_c",'name':"daL8Lift_Draw__FP10daL8Lift_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C89E44,'size':32,'pad':0,'label':"daL8Lift_Execute__FP10daL8Lift_c",'name':"daL8Lift_Execute__FP10daL8Lift_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C89E64,'size':32,'pad':0,'label':"daL8Lift_Delete__FP10daL8Lift_c",'name':"daL8Lift_Delete__FP10daL8Lift_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C89E84,'size':32,'pad':0,'label':"daL8Lift_Create__FP10fopAc_ac_c",'name':"daL8Lift_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C89EA4,'size':92,'pad':0,'label':"__dt__14daL8Lift_HIO_cFv",'name':"__dt__14daL8Lift_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C89F00,'size':60,'pad':0,'label':"__sinit_d_a_obj_lv8Lift_cpp",'name':"__sinit_d_a_obj_lv8Lift_cpp",'lib':-1,'tu':3,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x80C89F3C,'size':8,'pad':0,'label':"func_80C89F3C",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C89F44,'size':8,'pad':0,'label':"func_80C89F44",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C89F4C,'size':8,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80C89F54,'size':12,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80C89F60,'size':4,'pad':0,'label':"lit_3627",'name':"@3627",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':True,'r':[6,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C89F64,'size':64,'pad':0,'label':"mSpeed__10daL8Lift_c",'name':"mSpeed__10daL8Lift_c",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C89FA4,'size':4,'pad':0,'label':"lit_3661",'name':"@3661",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C89FA8,'size':4,'pad':0,'label':"lit_3766",'name':"@3766",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C89FAC,'size':4,'pad':0,'label':"lit_3767",'name':"@3767",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C89FB0,'size':4,'pad':4,'label':"lit_3768",'name':"@3768",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C89FB8,'size':8,'pad':0,'label':"lit_3770",'name':"@3770",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C89FC0,'size':4,'pad':0,'label':"lit_3894",'name':"@3894",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C89FC4,'size':4,'pad':0,'label':"lit_3895",'name':"@3895",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C89FC8,'size':4,'pad':4,'label':"lit_3896",'name':"@3896",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C89FD0,'size':8,'pad':0,'label':"lit_3978",'name':"@3978",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C89FD8,'size':8,'pad':0,'label':"lit_3979",'name':"@3979",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C89FE0,'size':8,'pad':0,'label':"lit_3980",'name':"@3980",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C89FE8,'size':4,'pad':0,'label':"lit_3981",'name':"@3981",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C89FEC,'size':4,'pad':0,'label':"lit_3982",'name':"@3982",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C89FF0,'size':4,'pad':0,'label':"lit_4030",'name':"@4030",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C89FF4,'size':4,'pad':0,'label':"lit_4110",'name':"@4110",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C89FF8,'size':4,'pad':0,'label':"lit_4213",'name':"@4213",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C89FFC,'size':7,'pad':0,'label':"d_a_obj_lv8Lift__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80C8A004,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C8A010,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C8A024,'size':12,'pad':0,'label':"lit_3822",'name':"@3822",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C8A030,'size':12,'pad':0,'label':"lit_3823",'name':"@3823",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C8A03C,'size':12,'pad':0,'label':"lit_3824",'name':"@3824",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C8A048,'size':12,'pad':0,'label':"lit_3825",'name':"@3825",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C8A054,'size':12,'pad':0,'label':"lit_3826",'name':"@3826",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C8A060,'size':12,'pad':0,'label':"lit_3827",'name':"@3827",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C8A06C,'size':12,'pad':0,'label':"lit_3828",'name':"@3828",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C8A078,'size':12,'pad':0,'label':"lit_3829",'name':"@3829",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C8A084,'size':12,'pad':0,'label':"lit_3830",'name':"@3830",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C8A090,'size':12,'pad':0,'label':"lit_3831",'name':"@3831",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C8A09C,'size':120,'pad':0,'label':"mode_proc",'name':"mode_proc$3821",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C8A114,'size':32,'pad':0,'label':"l_daL8Lift_Method",'name':"l_daL8Lift_Method",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C8A134,'size':48,'pad':0,'label':"g_profile_Obj_Lv8Lift",'name':"g_profile_Obj_Lv8Lift",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C8A164,'size':12,'pad':0,'label':"__vt__12dBgS_AcchCir",'name':"__vt__12dBgS_AcchCir",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C8A170,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C8A194,'size':12,'pad':0,'label':"__vt__12J3DFrameCtrl",'name':"__vt__12J3DFrameCtrl",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C8A1A0,'size':40,'pad':0,'label':"__vt__10daL8Lift_c",'name':"__vt__10daL8Lift_c",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C8A1C8,'size':12,'pad':0,'label':"__vt__14daL8Lift_HIO_c",'name':"__vt__14daL8Lift_HIO_c",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C8A1D4,'size':12,'pad':0,'label':"__vt__14mDoHIO_entry_c",'name':"__vt__14mDoHIO_entry_c",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':True,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C8A1E0,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':-1,'tu':2,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C8A1E8,'size':12,'pad':0,'label':"lit_3621",'name':"@3621",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C8A1F4,'size':20,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[5,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C8A208,'size':4,'pad':0,'label':"data_80C8A208",'name':None,'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__14daL8Lift_HIO_cFv":5,
	"__dt__14mDoHIO_entry_cFv":6,
	"setBaseMtx__10daL8Lift_cFv":7,
	"CreateHeap__10daL8Lift_cFv":8,
	"create__10daL8Lift_cFv":9,
	"__dt__12dBgS_ObjAcchFv":10,
	"__dt__12dBgS_AcchCirFv":11,
	"__dt__12J3DFrameCtrlFv":12,
	"lightSet__10daL8Lift_cFv":13,
	"rideCallBack__10daL8Lift_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c":14,
	"Execute__10daL8Lift_cFPPA3_A4_f":15,
	"moveLift__10daL8Lift_cFv":16,
	"modeAcc__10daL8Lift_cFv":17,
	"init_modeMove__10daL8Lift_cFv":18,
	"modeMove__10daL8Lift_cFv":19,
	"init_modeBrk__10daL8Lift_cFv":20,
	"modeBrk__10daL8Lift_cFv":21,
	"init_modeWaitInit__10daL8Lift_cFv":22,
	"modeWaitInit__10daL8Lift_cFv":23,
	"init_modeWait__10daL8Lift_cFv":24,
	"modeWait__10daL8Lift_cFv":25,
	"init_modeMoveWait__10daL8Lift_cFv":26,
	"modeMoveWait__10daL8Lift_cFv":27,
	"init_modeOnAnm__10daL8Lift_cFv":28,
	"modeOnAnm__10daL8Lift_cFv":29,
	"init_modeStop__10daL8Lift_cFv":30,
	"modeStop__10daL8Lift_cFv":31,
	"init_modeInitSet__10daL8Lift_cFv":32,
	"modeInitSet__10daL8Lift_cFv":33,
	"init_modeInitSet2__10daL8Lift_cFv":34,
	"modeInitSet2__10daL8Lift_cFv":35,
	"liftReset__10daL8Lift_cFv":36,
	"setNextPoint__10daL8Lift_cFv":37,
	"Draw__10daL8Lift_cFv":38,
	"Delete__10daL8Lift_cFv":39,
	"daL8Lift_Draw__FP10daL8Lift_c":40,
	"daL8Lift_Execute__FP10daL8Lift_c":41,
	"daL8Lift_Delete__FP10daL8Lift_c":42,
	"daL8Lift_Create__FP10fopAc_ac_c":43,
	"__dt__14daL8Lift_HIO_cFv":44,
	"__sinit_d_a_obj_lv8Lift_cpp":45,
	"func_80C89F3C":46,
	"func_80C89F44":47,
	"_ctors":48,
	"_dtors":49,
	"lit_3627":50,
	"mSpeed__10daL8Lift_c":51,
	"lit_3661":52,
	"lit_3766":53,
	"lit_3767":54,
	"lit_3768":55,
	"lit_3770":56,
	"lit_3894":57,
	"lit_3895":58,
	"lit_3896":59,
	"lit_3978":60,
	"lit_3979":61,
	"lit_3980":62,
	"lit_3981":63,
	"lit_3982":64,
	"lit_4030":65,
	"lit_4110":66,
	"lit_4213":67,
	"d_a_obj_lv8Lift__stringBase0":68,
	"cNullVec__6Z2Calc":69,
	"lit_1787":70,
	"lit_3822":71,
	"lit_3823":72,
	"lit_3824":73,
	"lit_3825":74,
	"lit_3826":75,
	"lit_3827":76,
	"lit_3828":77,
	"lit_3829":78,
	"lit_3830":79,
	"lit_3831":80,
	"mode_proc":81,
	"l_daL8Lift_Method":82,
	"g_profile_Obj_Lv8Lift":83,
	"__vt__12dBgS_AcchCir":84,
	"__vt__12dBgS_ObjAcch":85,
	"__vt__12J3DFrameCtrl":86,
	"__vt__10daL8Lift_c":87,
	"__vt__14daL8Lift_HIO_c":88,
	"__vt__14mDoHIO_entry_c":89,
	"__global_destructor_chain":90,
	"lit_3621":91,
	"l_HIO":92,
	"data_80C8A208":93,
}

