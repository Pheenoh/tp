#
# Generate By: dol2asm
# Module: 462
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_gomikabe",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"global_destructor_chain",
	"d_a_obj_gomikabe",
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
	{'addr':0x80BFE140,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFE16C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFE198,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFE1B8,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFE1D4,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFE22C,'size':24,'pad':0,'label':"__ct__19daObjGOMIKABE_HIO_cFv",'name':"__ct__19daObjGOMIKABE_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFE244,'size':136,'pad':0,'label':"initCcCylinder__15daObjGOMIKABE_cFv",'name':"initCcCylinder__15daObjGOMIKABE_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFE2CC,'size':304,'pad':0,'label':"SetCcCyl__15daObjGOMIKABE_cFv",'name':"SetCcCyl__15daObjGOMIKABE_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFE3FC,'size':60,'pad':0,'label':"__dt__4cXyzFv",'name':"__dt__4cXyzFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFE438,'size':32,'pad':0,'label':"daObjGOMIKABE_Create__FP10fopAc_ac_c",'name':"daObjGOMIKABE_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFE458,'size':36,'pad':0,'label':"daObjGOMIKABE_Delete__FP15daObjGOMIKABE_c",'name':"daObjGOMIKABE_Delete__FP15daObjGOMIKABE_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFE47C,'size':72,'pad':0,'label':"WaitAction__15daObjGOMIKABE_cFv",'name':"WaitAction__15daObjGOMIKABE_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFE4C4,'size':104,'pad':0,'label':"BreakChk__15daObjGOMIKABE_cFv",'name':"BreakChk__15daObjGOMIKABE_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFE52C,'size':1272,'pad':0,'label':"BreakSet__15daObjGOMIKABE_cFv",'name':"BreakSet__15daObjGOMIKABE_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':False,'is_reachable':False,'r':[1,0,1],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFEA24,'size':60,'pad':0,'label':"__dt__5csXyzFv",'name':"__dt__5csXyzFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFEA60,'size':304,'pad':0,'label':"getWaterStream__15daObjGOMIKABE_cFR4cXyzR4cXyzf",'name':"getWaterStream__15daObjGOMIKABE_cFR4cXyzR4cXyzf",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFEB90,'size':452,'pad':0,'label':"SpeedSet__15daObjGOMIKABE_cFv",'name':"SpeedSet__15daObjGOMIKABE_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFED54,'size':32,'pad':0,'label':"BreakAction__15daObjGOMIKABE_cFv",'name':"BreakAction__15daObjGOMIKABE_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFED74,'size':176,'pad':0,'label':"CheckCull__15daObjGOMIKABE_cFv",'name':"CheckCull__15daObjGOMIKABE_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFEE24,'size':132,'pad':0,'label':"checkViewArea__15daObjGOMIKABE_cF4cXyz",'name':"checkViewArea__15daObjGOMIKABE_cF4cXyz",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFEEA8,'size':120,'pad':0,'label':"Action__15daObjGOMIKABE_cFv",'name':"Action__15daObjGOMIKABE_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFEF20,'size':100,'pad':0,'label':"setBaseMtx__15daObjGOMIKABE_cFv",'name':"setBaseMtx__15daObjGOMIKABE_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFEF84,'size':148,'pad':0,'label':"setBaseMtx2__15daObjGOMIKABE_cFv",'name':"setBaseMtx2__15daObjGOMIKABE_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFF018,'size':44,'pad':0,'label':"daObjGOMIKABE_Draw__FP15daObjGOMIKABE_c",'name':"daObjGOMIKABE_Draw__FP15daObjGOMIKABE_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFF044,'size':32,'pad':0,'label':"daObjGOMIKABE_Execute__FP15daObjGOMIKABE_c",'name':"daObjGOMIKABE_Execute__FP15daObjGOMIKABE_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFF064,'size':256,'pad':0,'label':"CreateHeap__15daObjGOMIKABE_cFv",'name':"CreateHeap__15daObjGOMIKABE_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFF164,'size':1104,'pad':0,'label':"create__15daObjGOMIKABE_cFv",'name':"create__15daObjGOMIKABE_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFF5B4,'size':204,'pad':0,'label':"__dt__8dCcD_SphFv",'name':"__dt__8dCcD_SphFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFF680,'size':132,'pad':0,'label':"__ct__8dCcD_SphFv",'name':"__ct__8dCcD_SphFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFF704,'size':72,'pad':0,'label':"__dt__8cM3dGSphFv",'name':"__dt__8cM3dGSphFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFF74C,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFF794,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFF804,'size':84,'pad':0,'label':"__ct__12dBgS_ObjAcchFv",'name':"__ct__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFF858,'size':112,'pad':0,'label':"__dt__12dBgS_AcchCirFv",'name':"__dt__12dBgS_AcchCirFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFF8C8,'size':4,'pad':0,'label':"__ct__5csXyzFv",'name':"__ct__5csXyzFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80BFF8CC,'size':4,'pad':0,'label':"__ct__4cXyzFv",'name':"__ct__4cXyzFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80BFF8D0,'size':8,'pad':0,'label':"daObjGOMIKABE_IsDelete__FP15daObjGOMIKABE_c",'name':"daObjGOMIKABE_IsDelete__FP15daObjGOMIKABE_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80BFF8D8,'size':96,'pad':0,'label':"Create__15daObjGOMIKABE_cFv",'name':"Create__15daObjGOMIKABE_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFF938,'size':200,'pad':0,'label':"Execute__15daObjGOMIKABE_cFPPA3_A4_f",'name':"Execute__15daObjGOMIKABE_cFPPA3_A4_f",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFFA00,'size':284,'pad':0,'label':"Draw__15daObjGOMIKABE_cFv",'name':"Draw__15daObjGOMIKABE_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFFB1C,'size':88,'pad':0,'label':"Delete__15daObjGOMIKABE_cFv",'name':"Delete__15daObjGOMIKABE_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFFB74,'size':72,'pad':0,'label':"__dt__19daObjGOMIKABE_HIO_cFv",'name':"__dt__19daObjGOMIKABE_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFFBBC,'size':60,'pad':0,'label':"__sinit_d_a_obj_gomikabe_cpp",'name':"__sinit_d_a_obj_gomikabe_cpp",'lib':-1,'tu':3,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x80BFFBF8,'size':8,'pad':0,'label':"func_80BFFBF8",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFFC00,'size':8,'pad':0,'label':"func_80BFFC00",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFFC08,'size':8,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80BFFC10,'size':12,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80BFFC1C,'size':64,'pad':0,'label':"ccSphSrc",'name':"ccSphSrc$3769",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[7,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BFFC5C,'size':4,'pad':0,'label':"lit_3801",'name':"@3801",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BFFC60,'size':4,'pad':0,'label':"lit_3802",'name':"@3802",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BFFC64,'size':4,'pad':4,'label':"lit_3803",'name':"@3803",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BFFC6C,'size':8,'pad':0,'label':"lit_3805",'name':"@3805",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BFFC74,'size':4,'pad':0,'label':"lit_3842",'name':"@3842",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BFFC78,'size':4,'pad':0,'label':"lit_3977",'name':"@3977",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BFFC7C,'size':4,'pad':0,'label':"lit_3978",'name':"@3978",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BFFC80,'size':4,'pad':0,'label':"lit_3979",'name':"@3979",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BFFC84,'size':4,'pad':0,'label':"lit_3980",'name':"@3980",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BFFC88,'size':4,'pad':0,'label':"lit_3981",'name':"@3981",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BFFC8C,'size':4,'pad':0,'label':"lit_3982",'name':"@3982",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BFFC90,'size':4,'pad':0,'label':"lit_3983",'name':"@3983",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BFFC94,'size':4,'pad':0,'label':"lit_3984",'name':"@3984",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BFFC98,'size':4,'pad':0,'label':"lit_3985",'name':"@3985",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BFFC9C,'size':4,'pad':0,'label':"lit_4011",'name':"@4011",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BFFCA0,'size':4,'pad':0,'label':"lit_4012",'name':"@4012",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BFFCA4,'size':8,'pad':0,'label':"lit_4156",'name':"@4156",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BFFCAC,'size':8,'pad':0,'label':"lit_4157",'name':"@4157",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BFFCB4,'size':8,'pad':0,'label':"lit_4158",'name':"@4158",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BFFCBC,'size':4,'pad':0,'label':"lit_4159",'name':"@4159",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BFFCC0,'size':4,'pad':0,'label':"lit_4160",'name':"@4160",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BFFCC4,'size':4,'pad':0,'label':"lit_4278",'name':"@4278",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BFFCC8,'size':4,'pad':0,'label':"lit_4308",'name':"@4308",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BFFCCC,'size':4,'pad':0,'label':"lit_4321",'name':"@4321",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BFFCD0,'size':4,'pad':0,'label':"lit_4322",'name':"@4322",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BFFCD4,'size':4,'pad':0,'label':"lit_4498",'name':"@4498",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BFFCD8,'size':4,'pad':0,'label':"lit_4499",'name':"@4499",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BFFCDC,'size':4,'pad':0,'label':"lit_4500",'name':"@4500",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BFFCE0,'size':4,'pad':0,'label':"lit_4501",'name':"@4501",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BFFCE4,'size':8,'pad':0,'label':"lit_4503",'name':"@4503",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BFFCEC,'size':4,'pad':0,'label':"lit_4607",'name':"@4607",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BFFCF0,'size':4,'pad':0,'label':"lit_4620",'name':"@4620",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BFFCF4,'size':60,'pad':0,'label':"d_a_obj_gomikabe__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80BFFD30,'size':4,'pad':0,'label':"l_arcName",'name':"l_arcName",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BFFD34,'size':32,'pad':0,'label':"l_daObjGOMIKABE_Method",'name':"l_daObjGOMIKABE_Method",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BFFD54,'size':48,'pad':0,'label':"g_profile_Obj_GOMIKABE",'name':"g_profile_Obj_GOMIKABE",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BFFD84,'size':12,'pad':0,'label':"__vt__12dBgS_AcchCir",'name':"__vt__12dBgS_AcchCir",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BFFD90,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BFFDB4,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BFFDC0,'size':12,'pad':0,'label':"__vt__8cM3dGSph",'name':"__vt__8cM3dGSph",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BFFDCC,'size':40,'pad':0,'label':"__vt__15daObjGOMIKABE_c",'name':"__vt__15daObjGOMIKABE_c",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BFFDF4,'size':12,'pad':0,'label':"__vt__19daObjGOMIKABE_HIO_c",'name':"__vt__19daObjGOMIKABE_HIO_c",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BFFE00,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':-1,'tu':2,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BFFE08,'size':4,'pad':0,'label':"data_80BFFE08",'name':None,'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BFFE0C,'size':12,'pad':0,'label':"lit_3761",'name':"@3761",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BFFE18,'size':8,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__19daObjGOMIKABE_HIO_cFv":5,
	"initCcCylinder__15daObjGOMIKABE_cFv":6,
	"SetCcCyl__15daObjGOMIKABE_cFv":7,
	"__dt__4cXyzFv":8,
	"daObjGOMIKABE_Create__FP10fopAc_ac_c":9,
	"daObjGOMIKABE_Delete__FP15daObjGOMIKABE_c":10,
	"WaitAction__15daObjGOMIKABE_cFv":11,
	"BreakChk__15daObjGOMIKABE_cFv":12,
	"BreakSet__15daObjGOMIKABE_cFv":13,
	"__dt__5csXyzFv":14,
	"getWaterStream__15daObjGOMIKABE_cFR4cXyzR4cXyzf":15,
	"SpeedSet__15daObjGOMIKABE_cFv":16,
	"BreakAction__15daObjGOMIKABE_cFv":17,
	"CheckCull__15daObjGOMIKABE_cFv":18,
	"checkViewArea__15daObjGOMIKABE_cF4cXyz":19,
	"Action__15daObjGOMIKABE_cFv":20,
	"setBaseMtx__15daObjGOMIKABE_cFv":21,
	"setBaseMtx2__15daObjGOMIKABE_cFv":22,
	"daObjGOMIKABE_Draw__FP15daObjGOMIKABE_c":23,
	"daObjGOMIKABE_Execute__FP15daObjGOMIKABE_c":24,
	"CreateHeap__15daObjGOMIKABE_cFv":25,
	"create__15daObjGOMIKABE_cFv":26,
	"__dt__8dCcD_SphFv":27,
	"__ct__8dCcD_SphFv":28,
	"__dt__8cM3dGSphFv":29,
	"__dt__8cM3dGAabFv":30,
	"__dt__12dBgS_ObjAcchFv":31,
	"__ct__12dBgS_ObjAcchFv":32,
	"__dt__12dBgS_AcchCirFv":33,
	"__ct__5csXyzFv":34,
	"__ct__4cXyzFv":35,
	"daObjGOMIKABE_IsDelete__FP15daObjGOMIKABE_c":36,
	"Create__15daObjGOMIKABE_cFv":37,
	"Execute__15daObjGOMIKABE_cFPPA3_A4_f":38,
	"Draw__15daObjGOMIKABE_cFv":39,
	"Delete__15daObjGOMIKABE_cFv":40,
	"__dt__19daObjGOMIKABE_HIO_cFv":41,
	"__sinit_d_a_obj_gomikabe_cpp":42,
	"func_80BFFBF8":43,
	"func_80BFFC00":44,
	"_ctors":45,
	"_dtors":46,
	"ccSphSrc":47,
	"lit_3801":48,
	"lit_3802":49,
	"lit_3803":50,
	"lit_3805":51,
	"lit_3842":52,
	"lit_3977":53,
	"lit_3978":54,
	"lit_3979":55,
	"lit_3980":56,
	"lit_3981":57,
	"lit_3982":58,
	"lit_3983":59,
	"lit_3984":60,
	"lit_3985":61,
	"lit_4011":62,
	"lit_4012":63,
	"lit_4156":64,
	"lit_4157":65,
	"lit_4158":66,
	"lit_4159":67,
	"lit_4160":68,
	"lit_4278":69,
	"lit_4308":70,
	"lit_4321":71,
	"lit_4322":72,
	"lit_4498":73,
	"lit_4499":74,
	"lit_4500":75,
	"lit_4501":76,
	"lit_4503":77,
	"lit_4607":78,
	"lit_4620":79,
	"d_a_obj_gomikabe__stringBase0":80,
	"l_arcName":81,
	"l_daObjGOMIKABE_Method":82,
	"g_profile_Obj_GOMIKABE":83,
	"__vt__12dBgS_AcchCir":84,
	"__vt__12dBgS_ObjAcch":85,
	"__vt__8cM3dGAab":86,
	"__vt__8cM3dGSph":87,
	"__vt__15daObjGOMIKABE_c":88,
	"__vt__19daObjGOMIKABE_HIO_c":89,
	"__global_destructor_chain":90,
	"data_80BFFE08":91,
	"lit_3761":92,
	"l_HIO":93,
}

