#
# Generate By: dol2asm
# Module: 363
#

# Libraries
LIBRARIES = [
	"d/a/npc/d_a_npc_shop_maro",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"unknown_translation_unit_dtors",
	"d_a_npc_shop_maro",
]

# Sections
SECTIONS = [
	".text",
	".ctors",
	".dtors",
	".rodata",
	".data",
]

# Symbols
SYMBOLS = [
	{'addr':0x80AEBDE0,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AEBE0C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AEBE38,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AEBE58,'size':32,'pad':0,'label':"daNpc_shopMaro_Create__FPv",'name':"daNpc_shopMaro_Create__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AEBE78,'size':36,'pad':0,'label':"daNpc_shopMaro_Delete__FPv",'name':"daNpc_shopMaro_Delete__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AEBE9C,'size':8,'pad':0,'label':"daNpc_shopMaro_Execute__FPv",'name':"daNpc_shopMaro_Execute__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEBEA4,'size':8,'pad':0,'label':"daNpc_shopMaro_Draw__FPv",'name':"daNpc_shopMaro_Draw__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEBEAC,'size':8,'pad':0,'label':"daNpc_shopMaro_IsDelete__FPv",'name':"daNpc_shopMaro_IsDelete__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEBEB4,'size':80,'pad':0,'label':"create__16daNpc_shopMaro_cFv",'name':"create__16daNpc_shopMaro_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AEBF04,'size':96,'pad':0,'label':"__ct__16daNpc_shopMaro_cFv",'name':"__ct__16daNpc_shopMaro_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AEBF64,'size':96,'pad':0,'label':"__dt__16daNpc_shopMaro_cFv",'name':"__dt__16daNpc_shopMaro_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AEBFC4,'size':280,'pad':0,'label':"__ct__13dShopSystem_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc",'name':"__ct__13dShopSystem_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AEC0DC,'size':60,'pad':0,'label':"__dt__4cXyzFv",'name':"__dt__4cXyzFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AEC118,'size':8,'pad':0,'label':"getResName2__13dShopSystem_cFi",'name':"getResName2__13dShopSystem_cFi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC120,'size':8,'pad':0,'label':"beforeStartSeqAction__13dShopSystem_cFP10dMsgFlow_ci",'name':"beforeStartSeqAction__13dShopSystem_cFP10dMsgFlow_ci",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC128,'size':8,'pad':0,'label':"beforeSelectSeqAction__13dShopSystem_cFP10dMsgFlow_ci",'name':"beforeSelectSeqAction__13dShopSystem_cFP10dMsgFlow_ci",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC130,'size':60,'pad':0,'label':"__dt__5csXyzFv",'name':"__dt__5csXyzFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AEC16C,'size':1028,'pad':0,'label':"__ct__8daNpcT_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc",'name':"__ct__8daNpcT_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AEC570,'size':4,'pad':0,'label':"__ct__5csXyzFv",'name':"__ct__5csXyzFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC574,'size':252,'pad':0,'label':"__dt__15daNpcT_JntAnm_cFv",'name':"__dt__15daNpcT_JntAnm_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AEC670,'size':4,'pad':0,'label':"__ct__4cXyzFv",'name':"__ct__4cXyzFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC674,'size':72,'pad':0,'label':"__dt__18daNpcT_ActorMngr_cFv",'name':"__dt__18daNpcT_ActorMngr_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AEC6BC,'size':72,'pad':0,'label':"__dt__22daNpcT_MotionSeqMngr_cFv",'name':"__dt__22daNpcT_MotionSeqMngr_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AEC704,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AEC774,'size':72,'pad':0,'label':"__dt__12J3DFrameCtrlFv",'name':"__dt__12J3DFrameCtrlFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AEC7BC,'size':4,'pad':0,'label':"ctrlSubFaceMotion__8daNpcT_cFi",'name':"ctrlSubFaceMotion__8daNpcT_cFi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC7C0,'size':8,'pad':0,'label':"checkChangeJoint__8daNpcT_cFi",'name':"checkChangeJoint__8daNpcT_cFi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC7C8,'size':8,'pad':0,'label':"checkRemoveJoint__8daNpcT_cFi",'name':"checkRemoveJoint__8daNpcT_cFi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC7D0,'size':8,'pad':0,'label':"getBackboneJointNo__8daNpcT_cFv",'name':"getBackboneJointNo__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC7D8,'size':8,'pad':0,'label':"getNeckJointNo__8daNpcT_cFv",'name':"getNeckJointNo__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC7E0,'size':8,'pad':0,'label':"getHeadJointNo__8daNpcT_cFv",'name':"getHeadJointNo__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC7E8,'size':8,'pad':0,'label':"getFootLJointNo__8daNpcT_cFv",'name':"getFootLJointNo__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC7F0,'size':8,'pad':0,'label':"getFootRJointNo__8daNpcT_cFv",'name':"getFootRJointNo__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC7F8,'size':8,'pad':0,'label':"getEyeballLMaterialNo__8daNpcT_cFv",'name':"getEyeballLMaterialNo__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC800,'size':8,'pad':0,'label':"getEyeballRMaterialNo__8daNpcT_cFv",'name':"getEyeballRMaterialNo__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC808,'size':8,'pad':0,'label':"getEyeballMaterialNo__8daNpcT_cFv",'name':"getEyeballMaterialNo__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC810,'size':4,'pad':0,'label':"afterJntAnm__8daNpcT_cFi",'name':"afterJntAnm__8daNpcT_cFi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC814,'size':4,'pad':0,'label':"setParam__8daNpcT_cFv",'name':"setParam__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC818,'size':8,'pad':0,'label':"checkChangeEvt__8daNpcT_cFv",'name':"checkChangeEvt__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC820,'size':8,'pad':0,'label':"evtTalk__8daNpcT_cFv",'name':"evtTalk__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC828,'size':8,'pad':0,'label':"evtEndProc__8daNpcT_cFv",'name':"evtEndProc__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC830,'size':8,'pad':0,'label':"evtCutProc__8daNpcT_cFv",'name':"evtCutProc__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC838,'size':4,'pad':0,'label':"setAfterTalkMotion__8daNpcT_cFv",'name':"setAfterTalkMotion__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC83C,'size':4,'pad':0,'label':"action__8daNpcT_cFv",'name':"action__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC840,'size':4,'pad':0,'label':"beforeMove__8daNpcT_cFv",'name':"beforeMove__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC844,'size':4,'pad':0,'label':"afterMoved__8daNpcT_cFv",'name':"afterMoved__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC848,'size':4,'pad':0,'label':"setAttnPos__8daNpcT_cFv",'name':"setAttnPos__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC84C,'size':4,'pad':0,'label':"setCollision__8daNpcT_cFv",'name':"setCollision__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC850,'size':8,'pad':0,'label':"chkXYItems__8daNpcT_cFv",'name':"chkXYItems__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC858,'size':24,'pad':0,'label':"decTmr__8daNpcT_cFv",'name':"decTmr__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AEC870,'size':8,'pad':0,'label':"drawDbgInfo__8daNpcT_cFv",'name':"drawDbgInfo__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC878,'size':4,'pad':0,'label':"drawOtherMdl__8daNpcT_cFv",'name':"drawOtherMdl__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC87C,'size':4,'pad':0,'label':"drawGhost__8daNpcT_cFv",'name':"drawGhost__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC880,'size':8,'pad':0,'label':"afterSetFaceMotionAnm__8daNpcT_cFiifi",'name':"afterSetFaceMotionAnm__8daNpcT_cFiifi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC888,'size':8,'pad':0,'label':"afterSetMotionAnm__8daNpcT_cFiifi",'name':"afterSetMotionAnm__8daNpcT_cFiifi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC890,'size':48,'pad':0,'label':"getFaceMotionAnm__8daNpcT_cF26daNpcT_faceMotionAnmData_c",'name':"getFaceMotionAnm__8daNpcT_cF26daNpcT_faceMotionAnmData_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AEC8C0,'size':48,'pad':0,'label':"getMotionAnm__8daNpcT_cF22daNpcT_motionAnmData_c",'name':"getMotionAnm__8daNpcT_cF22daNpcT_motionAnmData_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AEC8F0,'size':4,'pad':0,'label':"changeAnm__8daNpcT_cFPiPi",'name':"changeAnm__8daNpcT_cFPiPi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC8F4,'size':4,'pad':0,'label':"changeBck__8daNpcT_cFPiPi",'name':"changeBck__8daNpcT_cFPiPi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC8F8,'size':4,'pad':0,'label':"changeBtp__8daNpcT_cFPiPi",'name':"changeBtp__8daNpcT_cFPiPi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC8FC,'size':4,'pad':0,'label':"changeBtk__8daNpcT_cFPiPi",'name':"changeBtk__8daNpcT_cFPiPi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AEC900,'size':8,'pad':0,'label':"func_80AEC900",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AEC908,'size':8,'pad':0,'label':"func_80AEC908",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AEC910,'size':4,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80AEC914,'size':4,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80AEC918,'size':4,'pad':0,'label':"lit_4009",'name':"@4009",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80AEC91C,'size':4,'pad':0,'label':"lit_4010",'name':"@4010",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80AEC920,'size':4,'pad':0,'label':"lit_4011",'name':"@4011",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80AEC924,'size':4,'pad':0,'label':"lit_4012",'name':"@4012",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AEC928,'size':4,'pad':0,'label':"lit_4013",'name':"@4013",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80AEC92C,'size':4,'pad':0,'label':"lit_4014",'name':"@4014",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80AEC930,'size':4,'pad':0,'label':"lit_4238",'name':"@4238",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80AEC934,'size':4,'pad':0,'label':"lit_4239",'name':"@4239",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80AEC938,'size':32,'pad':0,'label':"daNpc_shopMaro_MethodTable",'name':"daNpc_shopMaro_MethodTable",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AEC958,'size':48,'pad':0,'label':"g_profile_NPC_SMARO",'name':"g_profile_NPC_SMARO",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AEC988,'size':12,'pad':0,'label':"__vt__12J3DFrameCtrl",'name':"__vt__12J3DFrameCtrl",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80AEC994,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80AEC9B8,'size':12,'pad':0,'label':"__vt__22daNpcT_MotionSeqMngr_c",'name':"__vt__22daNpcT_MotionSeqMngr_c",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80AEC9C4,'size':12,'pad':0,'label':"__vt__18daNpcT_ActorMngr_c",'name':"__vt__18daNpcT_ActorMngr_c",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80AEC9D0,'size':12,'pad':0,'label':"__vt__15daNpcT_JntAnm_c",'name':"__vt__15daNpcT_JntAnm_c",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80AEC9DC,'size':208,'pad':0,'label':"__vt__16daNpc_shopMaro_c",'name':"__vt__16daNpc_shopMaro_c",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"daNpc_shopMaro_Create__FPv":3,
	"daNpc_shopMaro_Delete__FPv":4,
	"daNpc_shopMaro_Execute__FPv":5,
	"daNpc_shopMaro_Draw__FPv":6,
	"daNpc_shopMaro_IsDelete__FPv":7,
	"create__16daNpc_shopMaro_cFv":8,
	"__ct__16daNpc_shopMaro_cFv":9,
	"__dt__16daNpc_shopMaro_cFv":10,
	"__ct__13dShopSystem_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc":11,
	"__dt__4cXyzFv":12,
	"getResName2__13dShopSystem_cFi":13,
	"beforeStartSeqAction__13dShopSystem_cFP10dMsgFlow_ci":14,
	"beforeSelectSeqAction__13dShopSystem_cFP10dMsgFlow_ci":15,
	"__dt__5csXyzFv":16,
	"__ct__8daNpcT_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc":17,
	"__ct__5csXyzFv":18,
	"__dt__15daNpcT_JntAnm_cFv":19,
	"__ct__4cXyzFv":20,
	"__dt__18daNpcT_ActorMngr_cFv":21,
	"__dt__22daNpcT_MotionSeqMngr_cFv":22,
	"__dt__12dBgS_ObjAcchFv":23,
	"__dt__12J3DFrameCtrlFv":24,
	"ctrlSubFaceMotion__8daNpcT_cFi":25,
	"checkChangeJoint__8daNpcT_cFi":26,
	"checkRemoveJoint__8daNpcT_cFi":27,
	"getBackboneJointNo__8daNpcT_cFv":28,
	"getNeckJointNo__8daNpcT_cFv":29,
	"getHeadJointNo__8daNpcT_cFv":30,
	"getFootLJointNo__8daNpcT_cFv":31,
	"getFootRJointNo__8daNpcT_cFv":32,
	"getEyeballLMaterialNo__8daNpcT_cFv":33,
	"getEyeballRMaterialNo__8daNpcT_cFv":34,
	"getEyeballMaterialNo__8daNpcT_cFv":35,
	"afterJntAnm__8daNpcT_cFi":36,
	"setParam__8daNpcT_cFv":37,
	"checkChangeEvt__8daNpcT_cFv":38,
	"evtTalk__8daNpcT_cFv":39,
	"evtEndProc__8daNpcT_cFv":40,
	"evtCutProc__8daNpcT_cFv":41,
	"setAfterTalkMotion__8daNpcT_cFv":42,
	"action__8daNpcT_cFv":43,
	"beforeMove__8daNpcT_cFv":44,
	"afterMoved__8daNpcT_cFv":45,
	"setAttnPos__8daNpcT_cFv":46,
	"setCollision__8daNpcT_cFv":47,
	"chkXYItems__8daNpcT_cFv":48,
	"decTmr__8daNpcT_cFv":49,
	"drawDbgInfo__8daNpcT_cFv":50,
	"drawOtherMdl__8daNpcT_cFv":51,
	"drawGhost__8daNpcT_cFv":52,
	"afterSetFaceMotionAnm__8daNpcT_cFiifi":53,
	"afterSetMotionAnm__8daNpcT_cFiifi":54,
	"getFaceMotionAnm__8daNpcT_cF26daNpcT_faceMotionAnmData_c":55,
	"getMotionAnm__8daNpcT_cF22daNpcT_motionAnmData_c":56,
	"changeAnm__8daNpcT_cFPiPi":57,
	"changeBck__8daNpcT_cFPiPi":58,
	"changeBtp__8daNpcT_cFPiPi":59,
	"changeBtk__8daNpcT_cFPiPi":60,
	"func_80AEC900":61,
	"func_80AEC908":62,
	"_ctors":63,
	"_dtors":64,
	"lit_4009":65,
	"lit_4010":66,
	"lit_4011":67,
	"lit_4012":68,
	"lit_4013":69,
	"lit_4014":70,
	"lit_4238":71,
	"lit_4239":72,
	"daNpc_shopMaro_MethodTable":73,
	"g_profile_NPC_SMARO":74,
	"__vt__12J3DFrameCtrl":75,
	"__vt__12dBgS_ObjAcch":76,
	"__vt__22daNpcT_MotionSeqMngr_c":77,
	"__vt__18daNpcT_ActorMngr_c":78,
	"__vt__15daNpcT_JntAnm_c":79,
	"__vt__16daNpc_shopMaro_c":80,
}

