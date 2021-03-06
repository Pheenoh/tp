#
# Generate By: dol2asm
# Module: 111
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_swallshutter",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"global_destructor_chain",
	"d_a_obj_sWallShutter",
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
	{'addr':0x80598100,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8059812C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80598158,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80598178,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80598194,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805981EC,'size':112,'pad':0,'label':"__ct__17daSwShutter_HIO_cFv",'name':"__ct__17daSwShutter_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8059825C,'size':72,'pad':0,'label':"__dt__14mDoHIO_entry_cFv",'name':"__dt__14mDoHIO_entry_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805982A4,'size':160,'pad':0,'label':"setBaseMtx__13daSwShutter_cFv",'name':"setBaseMtx__13daSwShutter_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80598344,'size':128,'pad':0,'label':"CreateHeap__13daSwShutter_cFv",'name':"CreateHeap__13daSwShutter_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805983C4,'size':416,'pad':0,'label':"create__13daSwShutter_cFv",'name':"create__13daSwShutter_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80598564,'size':80,'pad':0,'label':"Execute__13daSwShutter_cFPPA3_A4_f",'name':"Execute__13daSwShutter_cFPPA3_A4_f",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805985B4,'size':392,'pad':0,'label':"moveMain__13daSwShutter_cFv",'name':"moveMain__13daSwShutter_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8059873C,'size':12,'pad':0,'label':"init_modeWait__13daSwShutter_cFv",'name':"init_modeWait__13daSwShutter_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80598748,'size':84,'pad':0,'label':"modeWait__13daSwShutter_cFv",'name':"modeWait__13daSwShutter_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8059879C,'size':564,'pad':0,'label':"init_modeMoveDownInit__13daSwShutter_cFv",'name':"init_modeMoveDownInit__13daSwShutter_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805989D0,'size':52,'pad':0,'label':"modeMoveDownInit__13daSwShutter_cFv",'name':"modeMoveDownInit__13daSwShutter_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80598A04,'size':248,'pad':0,'label':"init_modeMoveDown__13daSwShutter_cFv",'name':"init_modeMoveDown__13daSwShutter_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80598AFC,'size':592,'pad':0,'label':"modeMoveDown__13daSwShutter_cFv",'name':"modeMoveDown__13daSwShutter_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80598D4C,'size':12,'pad':0,'label':"init_modeMoveDownEnd__13daSwShutter_cFv",'name':"init_modeMoveDownEnd__13daSwShutter_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80598D58,'size':4,'pad':0,'label':"modeMoveDownEnd__13daSwShutter_cFv",'name':"modeMoveDownEnd__13daSwShutter_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80598D5C,'size':164,'pad':0,'label':"Draw__13daSwShutter_cFv",'name':"Draw__13daSwShutter_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80598E00,'size':64,'pad':0,'label':"Delete__13daSwShutter_cFv",'name':"Delete__13daSwShutter_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80598E40,'size':44,'pad':0,'label':"daSwShutter_Draw__FP13daSwShutter_c",'name':"daSwShutter_Draw__FP13daSwShutter_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80598E6C,'size':32,'pad':0,'label':"daSwShutter_Execute__FP13daSwShutter_c",'name':"daSwShutter_Execute__FP13daSwShutter_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80598E8C,'size':32,'pad':0,'label':"daSwShutter_Delete__FP13daSwShutter_c",'name':"daSwShutter_Delete__FP13daSwShutter_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80598EAC,'size':32,'pad':0,'label':"daSwShutter_Create__FP10fopAc_ac_c",'name':"daSwShutter_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80598ECC,'size':92,'pad':0,'label':"__dt__17daSwShutter_HIO_cFv",'name':"__dt__17daSwShutter_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80598F28,'size':60,'pad':0,'label':"__sinit_d_a_obj_sWallShutter_cpp",'name':"__sinit_d_a_obj_sWallShutter_cpp",'lib':-1,'tu':3,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x80598F64,'size':8,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80598F6C,'size':12,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80598F78,'size':4,'pad':0,'label':"lit_3630",'name':"@3630",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':True,'r':[6,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80598F7C,'size':4,'pad':0,'label':"lit_3631",'name':"@3631",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80598F80,'size':4,'pad':0,'label':"lit_3632",'name':"@3632",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80598F84,'size':4,'pad':0,'label':"lit_3633",'name':"@3633",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80598F88,'size':4,'pad':0,'label':"lit_3634",'name':"@3634",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80598F8C,'size':4,'pad':0,'label':"lit_3635",'name':"@3635",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80598F90,'size':4,'pad':0,'label':"lit_3636",'name':"@3636",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80598F94,'size':4,'pad':0,'label':"lit_3637",'name':"@3637",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80598F98,'size':8,'pad':0,'label':"l_bmdIdx",'name':"l_bmdIdx",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80598FA0,'size':8,'pad':0,'label':"l_dzbIdx",'name':"l_dzbIdx",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80598FA8,'size':4,'pad':0,'label':"lit_3730",'name':"@3730",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80598FAC,'size':4,'pad':0,'label':"lit_3766",'name':"@3766",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80598FB0,'size':4,'pad':0,'label':"lit_3826",'name':"@3826",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80598FB4,'size':4,'pad':0,'label':"lit_3827",'name':"@3827",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80598FB8,'size':15,'pad':0,'label':"d_a_obj_sWallShutter__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80598FC8,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80598FD4,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80598FE8,'size':8,'pad':0,'label':"l_resNameIdx",'name':"l_resNameIdx",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80598FF0,'size':12,'pad':0,'label':"lit_3746",'name':"@3746",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80598FFC,'size':12,'pad':0,'label':"lit_3747",'name':"@3747",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80599008,'size':12,'pad':0,'label':"lit_3748",'name':"@3748",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80599014,'size':12,'pad':0,'label':"lit_3749",'name':"@3749",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80599020,'size':48,'pad':0,'label':"mode_proc",'name':"mode_proc$3745",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80599050,'size':32,'pad':0,'label':"l_daSwShutter_Method",'name':"l_daSwShutter_Method",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80599070,'size':48,'pad':0,'label':"g_profile_Obj_SwallShutter",'name':"g_profile_Obj_SwallShutter",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x805990A0,'size':40,'pad':0,'label':"__vt__13daSwShutter_c",'name':"__vt__13daSwShutter_c",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x805990C8,'size':12,'pad':0,'label':"__vt__17daSwShutter_HIO_c",'name':"__vt__17daSwShutter_HIO_c",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x805990D4,'size':12,'pad':0,'label':"__vt__14mDoHIO_entry_c",'name':"__vt__14mDoHIO_entry_c",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':True,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x805990E0,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':-1,'tu':2,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805990E8,'size':12,'pad':0,'label':"lit_3624",'name':"@3624",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805990F4,'size':44,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[4,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80599120,'size':4,'pad':0,'label':"data_80599120",'name':None,'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__17daSwShutter_HIO_cFv":5,
	"__dt__14mDoHIO_entry_cFv":6,
	"setBaseMtx__13daSwShutter_cFv":7,
	"CreateHeap__13daSwShutter_cFv":8,
	"create__13daSwShutter_cFv":9,
	"Execute__13daSwShutter_cFPPA3_A4_f":10,
	"moveMain__13daSwShutter_cFv":11,
	"init_modeWait__13daSwShutter_cFv":12,
	"modeWait__13daSwShutter_cFv":13,
	"init_modeMoveDownInit__13daSwShutter_cFv":14,
	"modeMoveDownInit__13daSwShutter_cFv":15,
	"init_modeMoveDown__13daSwShutter_cFv":16,
	"modeMoveDown__13daSwShutter_cFv":17,
	"init_modeMoveDownEnd__13daSwShutter_cFv":18,
	"modeMoveDownEnd__13daSwShutter_cFv":19,
	"Draw__13daSwShutter_cFv":20,
	"Delete__13daSwShutter_cFv":21,
	"daSwShutter_Draw__FP13daSwShutter_c":22,
	"daSwShutter_Execute__FP13daSwShutter_c":23,
	"daSwShutter_Delete__FP13daSwShutter_c":24,
	"daSwShutter_Create__FP10fopAc_ac_c":25,
	"__dt__17daSwShutter_HIO_cFv":26,
	"__sinit_d_a_obj_sWallShutter_cpp":27,
	"_ctors":28,
	"_dtors":29,
	"lit_3630":30,
	"lit_3631":31,
	"lit_3632":32,
	"lit_3633":33,
	"lit_3634":34,
	"lit_3635":35,
	"lit_3636":36,
	"lit_3637":37,
	"l_bmdIdx":38,
	"l_dzbIdx":39,
	"lit_3730":40,
	"lit_3766":41,
	"lit_3826":42,
	"lit_3827":43,
	"d_a_obj_sWallShutter__stringBase0":44,
	"cNullVec__6Z2Calc":45,
	"lit_1787":46,
	"l_resNameIdx":47,
	"lit_3746":48,
	"lit_3747":49,
	"lit_3748":50,
	"lit_3749":51,
	"mode_proc":52,
	"l_daSwShutter_Method":53,
	"g_profile_Obj_SwallShutter":54,
	"__vt__13daSwShutter_c":55,
	"__vt__17daSwShutter_HIO_c":56,
	"__vt__14mDoHIO_entry_c":57,
	"__global_destructor_chain":58,
	"lit_3624":59,
	"l_HIO":60,
	"data_80599120":61,
}

