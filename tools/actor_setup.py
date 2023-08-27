import click
import os
import re
import subprocess
import sys

# NOTES:
# struct FlagJoint_c needs special handling
# fdlibm exception
# Remove legacy extern c block in f_op_actor_mng.h
# Add missing extern in d_a_do.cpp
# Fix manually added struct in d_a_obj_flag2.cpp d_a_bj_flag3.cpp d_a_obj_wchain.cpp d_a_obj_mirror_chain.cpp d_a_obj_fchain.cpp d_a_grass.cpp d_a_mant.cpp
# Add back missing dolphin/types to d_a_title.cpp
# ignoring d_a_obj_catdoor.cpp, d_a_hozelda.cpp for now
# Manually fix d_a_b_bq.cpp extern c replacement - improve symbol finding logic here
# d_a_b_gnd.cpp manual extern c replacement fix for multVecZero__14mDoMtx_stack_cFP3Vec
# d_a_e_po.cpp manual extern c replacement fix for fopAcM_searchPlayerAngleY__FPC10fopAc_ac_c
# d_a_tag_mhint.h remove dapy_py_c manually
# Moved FmtPos_c manually, needs special handling

structs_to_remove = {
    'struct dCcD_Tri',
    'struct cM3dGLin',
    'struct cXyz',
    'struct JGeometry',
    'struct Z2SeMgr',
    'struct dCcD_GStts',
    'struct dCcD_SrcSphstruct dCcD_Cyl',
    'struct J3DAnmTransform',
    'struct _GXColor',
    'struct cM3dGAab',
    'struct mDoMtx_stack_c',
    'struct JAISoundID',
    'struct cM3dGPla',
    'struct Vec',
    'struct cCcD_Stts',
    'struct cM3dGCps',
    'struct J3DModelData',
    'struct dScnKy_env_light_c',
    'struct cM3dGCyl',
    'struct mDoExt_McaMorfCallBack1_c',
    'struct Z2AudioMgr',
    'struct _GXTevRegID',
    # 'struct dCcD_SrcCps',
    # 'struct dCcD_SrcCyl',
    # 'struct dCcD_SrcTri',
    # 'struct cCcD_Obj',
    'struct dKy_tevstr_c',
    'struct mDoExt_McaMorfCallBack2_c',
    'struct Z2Creature',
    'struct dEvent_manager_c',
    'struct dCcD_Stts',
    'struct JMath',
    'struct J3DAnmTextureSRTKey',
    'struct dRes_info_c',
    'struct fopAc_ac_c',
    'struct mDoExt_McaMorfSO',
    'struct dCcD_GObjInf',
    'struct dCcD_GAtTgCoCommonBase',
    'struct J3DModel',
    'struct J3DAnmTexPattern',
    'struct dCcD_Cyl',
    'struct dCcD_SrcSph',
    'struct dCcD_Cps',
    'struct dMsgFlow_c',
    'struct J3DJoint',
    'struct cM3dGTri',
    'struct cM3dGSph',
    'struct cCcD_GStts',
    'struct dRes_control_c',
    'struct mDoExt_bckAnm',
    'struct dCcD_Sph',
    'struct csXyz',
    'struct request_of_phase_process_class',
    'struct cM3dGCir',
    'struct cCcS',
    'struct _GXTexObj',
    'struct mDoExt_btkAnm',
    'struct mDoExt_baseAnm',
    'struct fopAcM_wt_c',
    'struct fopAcM_gc_c',
    'struct Z2SceneMgr',
    'struct JUTNameTab',
    'struct dEvt_info_c',
    'struct J3DSkinDeform',
    'struct LIGHT_INFLUENCE',
    'struct Z2SoundObjSimple',
    'struct Z2SoundObjBase',
    'struct mDoExt_McaMorf',
    'struct J3DAnmTevRegKey',
    'struct mDoExt_brkAnm',
    'struct Z2EnvSeMgr',
    'struct mDoExt_3DlineMat_c',
    'struct mDoExt_3DlineMatSortPacket',
    'struct mDoExt_3DlineMat1_c',
    'struct mDoExt_3DlineMat0_c',
    'struct J3DLightObj',
    'struct J3DLightInfo',
    'struct Z2SeqMgr',
    'struct fopAcM_lc_c',
    'struct J3DShape',
    'struct J3DPacket',
    'struct mDoExt_invisibleModel',
    'struct J3DSys',
    'struct J3DFrameCtrl',
    'struct J3DMaterialTable',
    'struct DALKMIST_INFLUENCE',
    'struct WIND_INFLUENCE',
    'struct mDoExt_btpAnm',
    'struct mDoExt_morf_c',
    'struct fopAcM_rc_c',
    'struct J3DAnmColor',
    'struct mDoExt_bpkAnm',
    'struct J3DDeformData',
    'struct J3DAnmCluster',
    'struct mDoExt_blkAnm',
    'struct J3DTransformInfo',
    'struct J3DAnmBase',
    'struct mDoExt_blkAnm',
    'struct Quaternion',
    'struct mDoExt_MtxCalcOldFrame',
    'struct mDoExt_AnmRatioPack',
    'struct J3DMtxCalcNoAnmBase',
    'struct J3DMtxCalcNoAnm',
    'struct J3DMtxCalcJ3DSysInitMaya',
    'struct J3DMtxCalcCalcTransformMaya',
    'struct J3DMtxCalc',
    'struct DOUBLE_POS',
    'struct Z2StatusMgr',
    'struct fopEn_enemy_c',
    'struct Z2SoundObjArrow',
    'struct Z2SoundObjMgr'
    # 'struct dEvt_control_c',
    # 'struct J3DTexNoAnm',
    # 'struct J3DTexMtxAnm',
    # 'struct J3DTevColorAnm',
    # 'struct J3DMaterialAnm',
    # 'struct J3DMatColorAnm',
    # 'struct J3DTevKColorAnm',
    # 'struct dBgS_PolyPassChk',
    # 'struct dBgS_GndChk',
    # 'struct dBgS',
    # 'struct dBgS_Acch',
    # 'struct dBgS_LinChk',
    # 'struct dBgS_ObjAcch',
    # 'struct dBgS_AcchCir',
    # 'struct cBgS_PolyInfo',
    # 'struct cBgS_GndChk',
}

dbgw_remove = {
    'struct dBgW',
    'struct dBgW_Base',
    'struct cBgS_PolyInfo',
    'struct cBgW_BgId',
    'struct cBgD_t',
    'struct cBgW'
}

d_bg_s_sph_chk_remove = {
    'struct dBgS_SphChk',
    'struct dBgS_PolyPassChk',
    'struct dBgS_ObjGndChk_Spl',
    'struct dBgS_GndChk',
    'struct dBgS',
    'struct dBgS_Acch',
    'struct cBgS_PolyInfo',
    'struct cBgS_GndChk',
    'struct cBgS',
    'struct cBgD_Vtx_t'
}

dModel_remove = {
    'struct dMdl_mng_c',
    'struct dMdl_c',
    'struct dMdl_obj_c'
}

dPath_remove = {
    'struct dPath',
}

dDemo_remove = {
    'struct dDemo_actor_c',
    'struct dDemo_object_c',
    'struct dDemo_c'
}

funcs_to_remove = {
    "void PSMTXCopy",
    "void PSMTXTrans",
    "void PSVECSquareMag",
    "void PSMTXMultVec",
    "void PSVECAdd",
    "void PSVECSquareDistance",
    "void GXSetIndTexMtx",
    "void GXSetTevAlphaIn",
    "void abs()",
    "void sqrt()",
    "void pow()",
    "void PSVECSquareDistance",
    "void GXSetIndTexMtx",
    "void GXSetTevAlphaIn",
    "void PSVECDotProduct",
    "void C_MTXLightPerspective",
    "void PSMTXConcat",
    "void GXSetVtxDesc",
    "void GXSetVtxAttrFmt",
    "void GXSetArray",
    "void GXSetTexCoordGen2",
    "void GXSetNumTexGens",
    "void GXSetCullMode",
    "void GXSetNumChans",
    "void GXSetChanCtrl",
    "void GXInitTexObj",
    "void GXInitTexObjLOD",
    "void GXLoadTexObj",
    "void GXSetNumIndStages",
    "void GXSetTevColorIn",
    "void GXSetTevColorOp",
    "void GXSetTevAlphaOp",
    "void GXClearVtxDesc",
    "void GXSetTevColor",
    "void GXSetTevKColor",
    "void GXSetTevKColorSel",
    "void GXSetTevKAlphaSel",
    "void GXSetTevSwapMode",
    "void GXSetAlphaCompare",
    "void GXSetTevOrder",
    "void GXSetNumTevStages",
    "void GXSetZMode",
    "void GXSetZCompLoc",
    "void GXCallDisplayList",
    "void GXLoadPosMtxImm",
    "void GXLoadNrmMtxImm",
    "void GXSetClipMode",
    "void GXLoadLightObjImm",
    "void GXSetChanAmbColor",
    "void GXSetChanMatColor",
    "void GXSetScissor",
    "void GXGetScissor",
    "void GXInitTlutObj",
    "void GXLoadTlut",
    "void tan",
    "void PSMTXScale",
    "void C_MTXLightOrtho",
    "void PSVECScale",
    "void GXBegin",
    "void PSVECSubtract",
    "void PSVECSubtract",
    "void PSMTXQuat",
    "void C_VECReflect",
    "void PSMTXIdentity", # dmodel
    "void PSMTXRotAxisRad", # dmodel
    "void* g_fopAc_Method[8]",
    "void* g_fpcLf_Method",
    "void PSMTXInverse",
    "u8 g_mEnvSeMgr",
    "u8 g_env_light",
    "u8 j3dSys",
    "u8 const j3dDefaultLightInfo",
    "u32 __float_nan",
    "u32 __float_max",
    "u32 __float_max",
    "const j3dDefaultMtx",
    "u8 g_mDoMtx_identity"
    # "f32 G_CM3D_F_ABS_MIN" # custom header?
    # "void strcmp",
    # "u8 g_dComIfG_gameInfo[122384]"
}

extern_c_replacements = {
    "asm csXyz::~csXyz()",
    "csXyz::csXyz()",
    "cXyz::cXyz()",
    "asm cXyz::~cXyz()",
    "asm cM3dGPla::~cM3dGPla()",
    "asm cM3dGCyl::~cM3dGCyl()",
    "asm cM3dGSph::~cM3dGSph()",
    "asm cM3dGAab::~cM3dGAab()",
    "asm dCcD_Sph::~dCcD_Sph()",
    "asm dCcD_Sph::dCcD_Sph()",
    "asm dCcD_GStts::~dCcD_GStts()",
    "asm cCcD_GStts::~cCcD_GStts()",
    "asm cXyz::cXyz(cXyz const& param_0)",
    "asm cXyz::cXyz(f32 param_0, f32 param_1, f32 param_2)",
    "asm void cXyz::set(f32 param_0, f32 param_1, f32 param_2)",
    "asm void cXyz::set(Vec const& param_0)",
    "asm void cXyz::operator=(cXyz const& param_0)",
    "asm void cXyz::operator+=(Vec const& param_0)",
    "JAISoundID::JAISoundID(u32 param_0)", # special case, needs manual replacement
    "asm dCcD_Cyl::~dCcD_Cyl()",
    "asm cM3dGLin::~cM3dGLin()",
    "asm dCcD_Cyl::dCcD_Cyl()",
    "asm dCcD_Stts::~dCcD_Stts()",
    "asm dCcD_Stts::dCcD_Stts()",
    "asm dCcD_Tri::~dCcD_Tri()",
    "asm dCcD_Tri::dCcD_Tri()",
    "asm cM3dGTri::~cM3dGTri()",
    "asm void cCcD_ObjHitInf::OnCoSetBit()",
    "asm void cXyz::abs()",
    "asm dCcD_Cps::~dCcD_Cps()",
    "asm dCcD_Cps::dCcD_Cps()",
    "asm J3DTevKColorAnm::~J3DTevKColorAnm()",
    "asm J3DFrameCtrl::~J3DFrameCtrl()",
    "asm J3DLightObj::J3DLightObj()",
    "asm daNpcF_ActorMngr_c::~daNpcF_ActorMngr_c()",
    "asm daNpcF_ActorMngr_c::daNpcF_ActorMngr_c()",
    "asm dMdl_obj_c::dMdl_obj_c()",
    "asm mDoExt_bckAnm::~mDoExt_bckAnm()",
    "asm mDoExt_bckAnm::mDoExt_bckAnm()",
    "asm void mDoExt_morf_c::isStop()",
    "asm void cXyz::abs(Vec const& param_0) const",
    "asm void mDoMtx_stack_c::multVecZero(Vec* param_0)",
    "static asm void fopAcM_GetParam(void const* param_0)",
    "asm void dEvt_info_c::checkCommandDemoAccrpt()",
    "static asm void dComIfGp_getPlayer(int param_0)",
    "asm void J3DModel::getAnmMtx(int param_0)",
    "static asm void mDoAud_seStart(u32 param_0, Vec const* param_1, u32 param_2, s8 param_3)",
    "asm void cXyz::zero()",
    "asm void dCcD_Sph::operator=(dCcD_Sph const& param_0)",
    "asm void dCcD_GObjInf::operator=(dCcD_GObjInf const& param_0)",
    "asm void fopEn_enemy_c::setDownPos(cXyz const* param_0)",
    "asm void csXyz::operator=(csXyz const& param_0)",
    "asm mDoExt_3DlineMat1_c::mDoExt_3DlineMat1_c()",
    "asm void mDoExt_morf_c::setFrame(f32 param_0)",
    "asm void dCcD_Cyl::operator=(dCcD_Cyl const& param_0)",
    "static asm void fopAcM_searchPlayerAngleY(fopAc_ac_c const* param_0)",
    "static asm void fopAcM_GetID(void const* param_0)",
    "asm void mDoExt_morf_c::getFrame()",
    "asm dBgS_ObjAcch::~dBgS_ObjAcch()",
    "asm dBgS_AcchCir::~dBgS_AcchCir()",
    "asm dKy_tevstr_c::~dKy_tevstr_c()",
    "asm dKy_tevstr_c::dKy_tevstr_c()",
    "static asm void fpcM_GetParam(void const* param_0)",
    "static asm void fopAcM_OnCondition(fopAc_ac_c* param_0, u32 param_1)",
    "static asm void fopAcM_CheckCondition(fopAc_ac_c* param_0, u32 param_1)"
}

regex_ignore = {
    "request_of_phase_process_class",
    "create_tag_class",
    "scene_class",
    "leafdraw_class",
    "daB_BQ_HIO_c"
    # "daNpcF_c",
    # "daNpcF_MatAnm_c",
    # "daNpcF_Lookat_c",
    # "daNpcF_ActorMngr_c"
}

pattern1 = re.compile(r'struct\s+da.*_c\s*{')
pattern2 = re.compile(r'struct\s+.*_class\s*{')

def remove_structs_and_funcs(file_name, check):
    with open(file_name, 'r') as f:
        lines = f.readlines()

    i = len(lines) - 1

    while i >= 0:
        line = lines[i]

        if any(struct in line for struct in structs_to_remove) or pattern1.match(line) or pattern2.match(line) or (check == 2 and any(struct in line for struct in dbgw_remove)) or (check == 3 and any(struct in line for struct in dModel_remove)) or (check == 4 and any(struct in line for struct in dPath_remove)) or (check == 5 and any(struct in line for struct in dDemo_remove)) or (check == 6 and any(struct in line for struct in d_bg_s_sph_chk_remove)):
            print(f"Removing struct at line {i}: {line}")

            # Find the end of the struct data
            end_index = None
            brace_count = 0
            for j in range(i, len(lines)):
                brace_count += lines[j].count('{')
                brace_count -= lines[j].count('}')
                if brace_count == 0:
                    end_index = j
                    break

            # Remove the struct data
            if end_index is not None:
                del lines[i:end_index+2]  # rm struct and trailing newline
                i = end_index + 1  # Adjust i to skip over deleted lines

        elif any(function in line for function in funcs_to_remove):
            print(f"Removing function at line {i}: {line}")
            del lines[i]

        elif any(function in line for function in extern_c_replacements) and not line.startswith("//"):
            print(f"Replacing function at line {i}: {line}")

            # Grab the mangled name from 4 lines above
            if "asm" in line:
                symbol_line = lines[i-4]
            else:
                symbol_line = lines[i-1]

            match = re.search(r'(\S+)\s+\*/$', symbol_line)
            if match:
                symbol = match.group(1)
                print("SYMBOL:", symbol)
            else:
                print("Symbol not found")

            # comment out original line
            lines[i] = f"// {lines[i]}"

            # Add new line after with extern "C" asm void
            lines.insert(i+1, f'extern "C" asm void {symbol}() {{\n')

        i -= 1

    # Write the modified lines back to the file
    with open(file_name, 'w') as f:
        f.writelines(lines)

def move_structs_to_header(file_name):    
    # Open the file and read its contents
    with open(file_name, 'r') as f:
        contents = f.readlines()

    # Find the first line that has an #include statement
    include_line = None
    for i, line in enumerate(contents):
        if line.startswith('#include'):
            include_line = i
            break

    # If no #include statement was found, raise an error
    if include_line is None:
        raise ValueError(f'No #include statement found in {file_name}')

    lines_to_move = []
    matched_struct = False
    add_bgw_header = False
    add_ccd_header = False
    add_dmodel_header = False
    add_dpath_header = False
    add_ddemo_header = False
    add_dbgs_sph_chk_header = False
    # add_npc_header = False
    

    for i, line in enumerate(contents):
        if pattern1.match(line) or pattern2.match(line):
            if any(ignore in line for ignore in regex_ignore):
                continue

            matched_struct = True
            
            # Find the end of the struct data
            end_index = None
            brace_count = 0

            for j in range(i, len(contents)):
                brace_count += contents[j].count('{')
                brace_count -= contents[j].count('}')
                if brace_count == 0:
                    end_index = j
                    break

            # Add the lines to the list to move
            if end_index is not None:
                struct = contents[i:end_index+1]
                struct[0] = struct[0].replace('struct', 'class')
                if "HIO" not in struct[0] or "obj_ystone_class" not in struct[0]:
                    if "rel/d/a/b" in file_name or "rel/d/a/e" in file_name:
                        struct[0] = struct[0].replace(' {', ' : public fopEn_enemy_c {')
                    # elif "rel/d/a/npc" in file_name:
                    #     if "param_c" not in struct[0].lower():
                    #         struct[0] = struct[0].replace(' {', ' : public daNpcF_c {')
                    #     add_npc_header = True
                    else:
                        struct[0] = struct[0].replace(' {', ' : public fopAc_ac_c {')

                    for i, method in enumerate(struct):
                        if "dBgW" in method:
                            add_bgw_header = True
                        if "dCcD" in method or "cCcD_Obj" in method:
                            add_ccd_header = True
                        if "dMdl_obj_c" in method or "dMdl_c" in method:
                            add_dmodel_header = True
                        if "dPath" in method:
                            add_dpath_header = True
                        if "dDemo_actor_c" in method:
                            add_ddemo_header = True
                        if "dBgS_SphChk" in method:
                            add_dbgs_sph_chk_header = True

                lines_to_move += ['\n'] + struct

    if matched_struct:
        # Insert the lines into the header file
        header_file = file_name.replace('.cpp', '.h')

        # add include path to the beginning of file_name
        header_file = header_file.replace('rel/', 'include/rel/')

        with open(header_file, 'r') as f:
            header_contents = f.readlines()

        # Find the last line that has an #include statement
        include_line = None
        add_actor_header = True

        for i, line in enumerate(header_contents):
            if "f_op_actor_mng.h" in line or "d_a_npc" in line:
                add_actor_header = False

            if line.startswith('#include'):
                include_line = i

        # If no #include statement was found, raise an error
        if include_line is None:
            raise ValueError(f'No #include statement found in {file_name}')
        
        header_includes = []
        if add_actor_header:
            header_includes.append("#include \"f_op/f_op_actor_mng.h\"\n")
            # if add_npc_header:
            #     actor_header = ["#include \"d/a/d_a_npc.h\"\n"]
            # else:
                

        if add_bgw_header:
            header_includes.append("#include \"d/bg/d_bg_w.h\"\n")

        if add_ccd_header:
            header_includes.append("#include \"d/cc/d_cc_d.h\"\n")

        if add_dmodel_header:
            header_includes.append("#include \"d/d_model.h\"\n")

        if add_dpath_header:
            header_includes.append("#include \"d/d_path.h\"\n")

        if add_ddemo_header:
            header_includes.append("#include \"d/d_demo.h\"\n")

        if add_dbgs_sph_chk_header:
            header_includes.append("#include \"d/bg/d_bg_s_sph_chk.h\"\n")
        
        # Insert the lines into the header file
        header_contents = header_contents[:include_line+1] + header_includes + lines_to_move + header_contents[include_line+1:]

        # Write the new contents to the header file
        with open(header_file, 'w') as f:
            f.writelines(header_contents)

        # Write the new contents to the original file
        with open(file_name, 'w') as f:
            f.writelines(contents)

        if add_bgw_header:
            return 2
        
        if add_dmodel_header:
            return 3
        
        if add_dpath_header:
            return 4
        
        if add_ddemo_header:
            return 5
        
        if add_dbgs_sph_chk_header:
            return 6
        
        return 1
    else:
        return None

def run_make_command():
    command = "make all rels -j$(nproc) WINE=~/git/c/wibo/build/wibo"
    result = subprocess.run(command, shell=True)
    if result.returncode != 0:
        print("Failed to run make command")
        sys.exit(1)

ignore_files = {
    "executor",
    "global_destructor_chain",
    "unknown_translation_unit_bss",
    "d_a_obj_catdoor",
    "d_a_hozelda",
    "d_a_b_zant",
    "d_a_mg_rod",
    "d_a_horse"
}

@click.command()
@click.option('--file', default=None, help='Name of file to modify')
def main(file):
    if file is not None:
        if "d_a_npc" in file:
            return
        check = move_structs_to_header(file)
        if check is not None:
            remove_structs_and_funcs(file, check)
            run_make_command()
    else:
        for root, _, files in os.walk('rel/'):
            for file in files:
                if "d_a_npc" in file:
                    continue
                if file.endswith('.cpp'):
                    if any(ignore in file for ignore in ignore_files):
                        continue
                    file_path = os.path.join(root, file)
                    check = move_structs_to_header(file_path)
                    if check is not None:
                        remove_structs_and_funcs(file_path, check)
                        run_make_command()

if __name__ == '__main__':
    main()