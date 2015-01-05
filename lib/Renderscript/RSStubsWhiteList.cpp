/*
 * Copyright 2014, The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "RSStubsWhiteList.h"

std::vector<std::string> stubList = {
"_Z10rsIsObject10rs_element",
"_Z10rsIsObject10rs_sampler",
"_Z10rsIsObject13rs_allocation",
"_Z10rsIsObject16rs_program_store",
"_Z10rsIsObject17rs_program_raster",
"_Z10rsIsObject17rs_program_vertex",
"_Z10rsIsObject19rs_program_fragment",
"_Z10rsIsObject7rs_font",
"_Z10rsIsObject7rs_mesh",
"_Z10rsIsObject7rs_path",
"_Z10rsIsObject7rs_type",
"_Z10rsIsObject9rs_script",
"_Z11rsgBindFont7rs_font",
"_Z11rsgDrawMesh7rs_mesh",
"_Z11rsgDrawMesh7rs_meshj",
"_Z11rsgDrawMesh7rs_meshjjj",
"_Z11rsgDrawPath7rs_path",
"_Z11rsgDrawQuadffffffffffff",
"_Z11rsgDrawRectfffff",
"_Z11rsgDrawText13rs_allocationii",
"_Z11rsgDrawTextPKcii",
"_Z11rsgGetWidthv",
"_Z11rsLocaltimeP5rs_tmPKi",
"_Z11rsLocaltimeP5rs_tmPKl",
"_Z11rsSetObjectP10rs_elementS_",
"_Z11rsSetObjectP10rs_samplerS_",
"_Z11rsSetObjectP13rs_allocationS_",
"_Z11rsSetObjectP16rs_program_storeS_",
"_Z11rsSetObjectP17rs_program_rasterS_",
"_Z11rsSetObjectP17rs_program_vertexS_",
"_Z11rsSetObjectP19rs_program_fragmentS_",
"_Z11rsSetObjectP7rs_fontS_",
"_Z11rsSetObjectP7rs_meshS_",
"_Z11rsSetObjectP7rs_pathS_",
"_Z11rsSetObjectP7rs_typeS_",
"_Z11rsSetObjectP9rs_scriptS_",
"_Z12rsgFontColorffff",
"_Z12rsgGetHeightv",
"_Z13rsClearObjectP10rs_element",
"_Z13rsClearObjectP10rs_sampler",
"_Z13rsClearObjectP13rs_allocation",
"_Z13rsClearObjectP16rs_program_store",
"_Z13rsClearObjectP17rs_program_raster",
"_Z13rsClearObjectP17rs_program_vertex",
"_Z13rsClearObjectP19rs_program_fragment",
"_Z13rsClearObjectP7rs_font",
"_Z13rsClearObjectP7rs_mesh",
"_Z13rsClearObjectP7rs_path",
"_Z13rsClearObjectP7rs_type",
"_Z13rsClearObjectP9rs_script",
"_Z13rsgClearColorffff",
"_Z13rsgClearDepthf",
"_Z13rsMatrixScaleP12rs_matrix4x4fff",
"_Z13rsUptimeNanosv",
"_Z14rsgBindSampler19rs_program_fragmentj10rs_sampler",
"_Z14rsgBindTexture19rs_program_fragmentj13rs_allocation",
"_Z14rsGetElementAt13rs_allocationj",
"_Z14rsGetElementAt13rs_allocationjj",
"_Z14rsGetElementAt13rs_allocationjjj",
"_Z14rsgMeasureText13rs_allocationPiS0_S0_S0_",
"_Z14rsgMeasureTextPKcPiS1_S1_S1_",
"_Z14rsMatrixRotateP12rs_matrix4x4ffff",
"_Z14rsSendToClienti",
"_Z14rsSendToClientiPKvj",
"_Z14rsSetElementAt13rs_allocationPKvj",
"_Z14rsSetElementAt13rs_allocationPKvjj",
"_Z14rsSetElementAt13rs_allocationPKvjjj",
"_Z14rsUptimeMillisv",
"_Z15rsgBindConstant17rs_program_vertexj13rs_allocation",
"_Z15rsgBindConstant19rs_program_fragmentj13rs_allocation",
"_Z15rsGetAllocationPKv",
"_Z15rsMatrixInverseP12rs_matrix4x4",
"_Z17rsMatrixLoadOrthoP12rs_matrix4x4ffffff",
"_Z17rsMatrixLoadScaleP12rs_matrix4x4fff",
"_Z17rsMatrixTranslateP12rs_matrix4x4fff",
"_Z17rsMatrixTransposeP12rs_matrix2x2",
"_Z17rsMatrixTransposeP12rs_matrix3x3",
"_Z17rsMatrixTransposeP12rs_matrix4x4",
"_Z18rsAllocationIoSend13rs_allocation",
"_Z18rsgBindColorTarget13rs_allocationj",
"_Z18rsgBindDepthTarget13rs_allocation",
"_Z18rsGetElementAt_int13rs_allocationPij",
"_Z18rsGetElementAt_int13rs_allocationPijj",
"_Z18rsGetElementAt_int13rs_allocationPijjj",
"_Z18rsMatrixLoadRotateP12rs_matrix4x4ffff",
"_Z18rsSetElementAt_int13rs_allocationPKij",
"_Z18rsSetElementAt_int13rs_allocationPKijj",
"_Z18rsSetElementAt_int13rs_allocationPKijjj",
"_Z19rsgBindProgramStore16rs_program_store",
"_Z19rsgClearColorTargetj",
"_Z19rsgClearDepthTargetv",
"_Z19rsGetElementAt_char13rs_allocationPcj",
"_Z19rsGetElementAt_char13rs_allocationPcjj",
"_Z19rsGetElementAt_char13rs_allocationPcjjj",
"_Z19rsGetElementAt_int213rs_allocationPDv2_ij",
"_Z19rsGetElementAt_int213rs_allocationPDv2_ijj",
"_Z19rsGetElementAt_int213rs_allocationPDv2_ijjj",
"_Z19rsGetElementAt_int313rs_allocationPDv3_ij",
"_Z19rsGetElementAt_int313rs_allocationPDv3_ijj",
"_Z19rsGetElementAt_int313rs_allocationPDv3_ijjj",
"_Z19rsGetElementAt_int413rs_allocationPDv4_ij",
"_Z19rsGetElementAt_int413rs_allocationPDv4_ijj",
"_Z19rsGetElementAt_int413rs_allocationPDv4_ijjj",
"_Z19rsGetElementAt_long13rs_allocationPlj",
"_Z19rsGetElementAt_long13rs_allocationPljj",
"_Z19rsGetElementAt_long13rs_allocationPljjj",
"_Z19rsGetElementAt_uint13rs_allocationPjj",
"_Z19rsGetElementAt_uint13rs_allocationPjjj",
"_Z19rsGetElementAt_uint13rs_allocationPjjjj",
"_Z19rsMatrixLoadFrustumP12rs_matrix4x4ffffff",
"_Z19rsSetElementAt_char13rs_allocationPKcj",
"_Z19rsSetElementAt_char13rs_allocationPKcjj",
"_Z19rsSetElementAt_char13rs_allocationPKcjjj",
"_Z19rsSetElementAt_int213rs_allocationPKDv2_ij",
"_Z19rsSetElementAt_int213rs_allocationPKDv2_ijj",
"_Z19rsSetElementAt_int213rs_allocationPKDv2_ijjj",
"_Z19rsSetElementAt_int313rs_allocationPKDv3_ij",
"_Z19rsSetElementAt_int313rs_allocationPKDv3_ijj",
"_Z19rsSetElementAt_int313rs_allocationPKDv3_ijjj",
"_Z19rsSetElementAt_int413rs_allocationPKDv4_ij",
"_Z19rsSetElementAt_int413rs_allocationPKDv4_ijj",
"_Z19rsSetElementAt_int413rs_allocationPKDv4_ijjj",
"_Z19rsSetElementAt_long13rs_allocationPKlj",
"_Z19rsSetElementAt_long13rs_allocationPKljj",
"_Z19rsSetElementAt_long13rs_allocationPKljjj",
"_Z19rsSetElementAt_long13rs_allocationPKxj",
"_Z19rsSetElementAt_long13rs_allocationPKxjj",
"_Z19rsSetElementAt_long13rs_allocationPKxjjj",
"_Z19rsSetElementAt_uint13rs_allocationPKjj",
"_Z19rsSetElementAt_uint13rs_allocationPKjjj",
"_Z19rsSetElementAt_uint13rs_allocationPKjjjj",
"_Z20rsgAllocationSyncAll13rs_allocation",
"_Z20rsgAllocationSyncAll13rs_allocation24rs_allocation_usage_type",
"_Z20rsgAllocationSyncAll13rs_allocationj",
"_Z20rsgBindProgramRaster17rs_program_raster",
"_Z20rsgBindProgramVertex17rs_program_vertex",
"_Z20rsgDrawQuadTexCoordsffffffffffffffffffff",
"_Z20rsGetElementAt_char213rs_allocationPDv2_cj",
"_Z20rsGetElementAt_char213rs_allocationPDv2_cjj",
"_Z20rsGetElementAt_char213rs_allocationPDv2_cjjj",
"_Z20rsGetElementAt_char313rs_allocationPDv3_cj",
"_Z20rsGetElementAt_char313rs_allocationPDv3_cjj",
"_Z20rsGetElementAt_char313rs_allocationPDv3_cjjj",
"_Z20rsGetElementAt_char413rs_allocationPDv4_cj",
"_Z20rsGetElementAt_char413rs_allocationPDv4_cjj",
"_Z20rsGetElementAt_char413rs_allocationPDv4_cjjj",
"_Z20rsGetElementAt_float13rs_allocationPfj",
"_Z20rsGetElementAt_float13rs_allocationPfjj",
"_Z20rsGetElementAt_float13rs_allocationPfjjj",
"_Z20rsGetElementAt_long213rs_allocationPDv2_lj",
"_Z20rsGetElementAt_long213rs_allocationPDv2_ljj",
"_Z20rsGetElementAt_long213rs_allocationPDv2_ljjj",
"_Z20rsGetElementAt_long313rs_allocationPDv3_lj",
"_Z20rsGetElementAt_long313rs_allocationPDv3_ljj",
"_Z20rsGetElementAt_long313rs_allocationPDv3_ljjj",
"_Z20rsGetElementAt_long413rs_allocationPDv4_lj",
"_Z20rsGetElementAt_long413rs_allocationPDv4_ljj",
"_Z20rsGetElementAt_long413rs_allocationPDv4_ljjj",
"_Z20rsGetElementAt_short13rs_allocationPsj",
"_Z20rsGetElementAt_short13rs_allocationPsjj",
"_Z20rsGetElementAt_short13rs_allocationPsjjj",
"_Z20rsGetElementAt_uchar13rs_allocationPhj",
"_Z20rsGetElementAt_uchar13rs_allocationPhjj",
"_Z20rsGetElementAt_uchar13rs_allocationPhjjj",
"_Z20rsGetElementAt_uint213rs_allocationPDv2_jj",
"_Z20rsGetElementAt_uint213rs_allocationPDv2_jjj",
"_Z20rsGetElementAt_uint213rs_allocationPDv2_jjjj",
"_Z20rsGetElementAt_uint313rs_allocationPDv3_jj",
"_Z20rsGetElementAt_uint313rs_allocationPDv3_jjj",
"_Z20rsGetElementAt_uint313rs_allocationPDv3_jjjj",
"_Z20rsGetElementAt_uint413rs_allocationPDv4_jj",
"_Z20rsGetElementAt_uint413rs_allocationPDv4_jjj",
"_Z20rsGetElementAt_uint413rs_allocationPDv4_jjjj",
"_Z20rsGetElementAt_ulong13rs_allocationPmj",
"_Z20rsGetElementAt_ulong13rs_allocationPmjj",
"_Z20rsGetElementAt_ulong13rs_allocationPmjjj",
"_Z20rsSetElementAt_char213rs_allocationPKDv2_cj",
"_Z20rsSetElementAt_char213rs_allocationPKDv2_cjj",
"_Z20rsSetElementAt_char213rs_allocationPKDv2_cjjj",
"_Z20rsSetElementAt_char313rs_allocationPKDv3_cj",
"_Z20rsSetElementAt_char313rs_allocationPKDv3_cjj",
"_Z20rsSetElementAt_char313rs_allocationPKDv3_cjjj",
"_Z20rsSetElementAt_char413rs_allocationPKDv4_cj",
"_Z20rsSetElementAt_char413rs_allocationPKDv4_cjj",
"_Z20rsSetElementAt_char413rs_allocationPKDv4_cjjj",
"_Z20rsSetElementAt_float13rs_allocationPKfjj",
"_Z20rsSetElementAt_float13rs_allocationPKfjjj",
"_Z20rsSetElementAt_float13rs_allocationPKft",
"_Z20rsSetElementAt_long213rs_allocationPKDv2_lj",
"_Z20rsSetElementAt_long213rs_allocationPKDv2_ljj",
"_Z20rsSetElementAt_long213rs_allocationPKDv2_ljjj",
"_Z20rsSetElementAt_long213rs_allocationPKDv2_xj",
"_Z20rsSetElementAt_long213rs_allocationPKDv2_xjj",
"_Z20rsSetElementAt_long213rs_allocationPKDv2_xjjj",
"_Z20rsSetElementAt_long313rs_allocationPKDv3_lj",
"_Z20rsSetElementAt_long313rs_allocationPKDv3_ljj",
"_Z20rsSetElementAt_long313rs_allocationPKDv3_ljjj",
"_Z20rsSetElementAt_long313rs_allocationPKDv3_xj",
"_Z20rsSetElementAt_long313rs_allocationPKDv3_xjj",
"_Z20rsSetElementAt_long313rs_allocationPKDv3_xjjj",
"_Z20rsSetElementAt_long413rs_allocationPKDv4_lj",
"_Z20rsSetElementAt_long413rs_allocationPKDv4_ljj",
"_Z20rsSetElementAt_long413rs_allocationPKDv4_ljjj",
"_Z20rsSetElementAt_long413rs_allocationPKDv4_xj",
"_Z20rsSetElementAt_long413rs_allocationPKDv4_xjj",
"_Z20rsSetElementAt_long413rs_allocationPKDv4_xjjj",
"_Z20rsSetElementAt_short13rs_allocationPKsj",
"_Z20rsSetElementAt_short13rs_allocationPKsjj",
"_Z20rsSetElementAt_short13rs_allocationPKsjjj",
"_Z20rsSetElementAt_uchar13rs_allocationPKhj",
"_Z20rsSetElementAt_uchar13rs_allocationPKhjj",
"_Z20rsSetElementAt_uchar13rs_allocationPKhjjj",
"_Z20rsSetElementAt_uint213rs_allocationPKDv2_jj",
"_Z20rsSetElementAt_uint213rs_allocationPKDv2_jjj",
"_Z20rsSetElementAt_uint213rs_allocationPKDv2_jjjj",
"_Z20rsSetElementAt_uint313rs_allocationPKDv3_jj",
"_Z20rsSetElementAt_uint313rs_allocationPKDv3_jjj",
"_Z20rsSetElementAt_uint313rs_allocationPKDv3_jjjj",
"_Z20rsSetElementAt_uint413rs_allocationPKDv4_jj",
"_Z20rsSetElementAt_uint413rs_allocationPKDv4_jjj",
"_Z20rsSetElementAt_uint413rs_allocationPKDv4_jjjj",
"_Z20rsSetElementAt_ulong13rs_allocationPKmj",
"_Z20rsSetElementAt_ulong13rs_allocationPKmjj",
"_Z20rsSetElementAt_ulong13rs_allocationPKmjjj",
"_Z20rsSetElementAt_ulong13rs_allocationPKyj",
"_Z20rsSetElementAt_ulong13rs_allocationPKyjj",
"_Z20rsSetElementAt_ulong13rs_allocationPKyjjj",
"_Z21rsAllocationIoReceive13rs_allocation",
"_Z21rsAllocationMarkDirty13rs_allocation",
"_Z21rsGetElementAt_double13rs_allocationPdj",
"_Z21rsGetElementAt_double13rs_allocationPdjj",
"_Z21rsGetElementAt_double13rs_allocationPdjjj",
"_Z21rsGetElementAt_float213rs_allocationPDv2_fj",
"_Z21rsGetElementAt_float213rs_allocationPDv2_fjj",
"_Z21rsGetElementAt_float213rs_allocationPDv2_fjjj",
"_Z21rsGetElementAt_float313rs_allocationPDv3_fj",
"_Z21rsGetElementAt_float313rs_allocationPDv3_fjj",
"_Z21rsGetElementAt_float313rs_allocationPDv3_fjjj",
"_Z21rsGetElementAt_float413rs_allocationPDv4_fj",
"_Z21rsGetElementAt_float413rs_allocationPDv4_fjj",
"_Z21rsGetElementAt_float413rs_allocationPDv4_fjjj",
"_Z21rsGetElementAt_short213rs_allocationPDv2_sj",
"_Z21rsGetElementAt_short213rs_allocationPDv2_sjj",
"_Z21rsGetElementAt_short213rs_allocationPDv2_sjjj",
"_Z21rsGetElementAt_short313rs_allocationPDv3_sj",
"_Z21rsGetElementAt_short313rs_allocationPDv3_sjj",
"_Z21rsGetElementAt_short313rs_allocationPDv3_sjjj",
"_Z21rsGetElementAt_short413rs_allocationPDv4_sj",
"_Z21rsGetElementAt_short413rs_allocationPDv4_sjj",
"_Z21rsGetElementAt_short413rs_allocationPDv4_sjjj",
"_Z21rsGetElementAt_uchar213rs_allocationPDv2_hj",
"_Z21rsGetElementAt_uchar213rs_allocationPDv2_hjj",
"_Z21rsGetElementAt_uchar213rs_allocationPDv2_hjjj",
"_Z21rsGetElementAt_uchar313rs_allocationPDv3_hj",
"_Z21rsGetElementAt_uchar313rs_allocationPDv3_hjj",
"_Z21rsGetElementAt_uchar313rs_allocationPDv3_hjjj",
"_Z21rsGetElementAt_uchar413rs_allocationPDv4_hj",
"_Z21rsGetElementAt_uchar413rs_allocationPDv4_hjj",
"_Z21rsGetElementAt_uchar413rs_allocationPDv4_hjjj",
"_Z21rsGetElementAt_ulong213rs_allocationPDv2_mj",
"_Z21rsGetElementAt_ulong213rs_allocationPDv2_mjj",
"_Z21rsGetElementAt_ulong213rs_allocationPDv2_mjjj",
"_Z21rsGetElementAt_ulong313rs_allocationPDv3_mj",
"_Z21rsGetElementAt_ulong313rs_allocationPDv3_mjj",
"_Z21rsGetElementAt_ulong313rs_allocationPDv3_mjjj",
"_Z21rsGetElementAt_ulong413rs_allocationPDv4_mj",
"_Z21rsGetElementAt_ulong413rs_allocationPDv4_mjj",
"_Z21rsGetElementAt_ulong413rs_allocationPDv4_mjjj",
"_Z21rsGetElementAt_ushort13rs_allocationPtj",
"_Z21rsGetElementAt_ushort13rs_allocationPtjj",
"_Z21rsGetElementAt_ushort13rs_allocationPtjjj",
"_Z21rsMatrixLoadTranslateP12rs_matrix4x4fff",
"_Z21rsSetElementAt_double13rs_allocationPKdjj",
"_Z21rsSetElementAt_double13rs_allocationPKdjjj",
"_Z21rsSetElementAt_double13rs_allocationPKdt",
"_Z21rsSetElementAt_float213rs_allocationPKDv2_fj",
"_Z21rsSetElementAt_float213rs_allocationPKDv2_fjj",
"_Z21rsSetElementAt_float213rs_allocationPKDv2_fjjj",
"_Z21rsSetElementAt_float313rs_allocationPKDv3_fj",
"_Z21rsSetElementAt_float313rs_allocationPKDv3_fjj",
"_Z21rsSetElementAt_float313rs_allocationPKDv3_fjjj",
"_Z21rsSetElementAt_float413rs_allocationPKDv4_fj",
"_Z21rsSetElementAt_float413rs_allocationPKDv4_fjj",
"_Z21rsSetElementAt_float413rs_allocationPKDv4_fjjj",
"_Z21rsSetElementAt_short213rs_allocationPKDv2_sj",
"_Z21rsSetElementAt_short213rs_allocationPKDv2_sjj",
"_Z21rsSetElementAt_short213rs_allocationPKDv2_sjjj",
"_Z21rsSetElementAt_short313rs_allocationPKDv3_sj",
"_Z21rsSetElementAt_short313rs_allocationPKDv3_sjj",
"_Z21rsSetElementAt_short313rs_allocationPKDv3_sjjj",
"_Z21rsSetElementAt_short413rs_allocationPKDv4_sj",
"_Z21rsSetElementAt_short413rs_allocationPKDv4_sjj",
"_Z21rsSetElementAt_short413rs_allocationPKDv4_sjjj",
"_Z21rsSetElementAt_uchar213rs_allocationPKDv2_hj",
"_Z21rsSetElementAt_uchar213rs_allocationPKDv2_hjj",
"_Z21rsSetElementAt_uchar213rs_allocationPKDv2_hjjj",
"_Z21rsSetElementAt_uchar313rs_allocationPKDv3_hj",
"_Z21rsSetElementAt_uchar313rs_allocationPKDv3_hjj",
"_Z21rsSetElementAt_uchar313rs_allocationPKDv3_hjjj",
"_Z21rsSetElementAt_uchar413rs_allocationPKDv4_hj",
"_Z21rsSetElementAt_uchar413rs_allocationPKDv4_hjj",
"_Z21rsSetElementAt_uchar413rs_allocationPKDv4_hjjj",
"_Z21rsSetElementAt_ulong213rs_allocationPKDv2_mj",
"_Z21rsSetElementAt_ulong213rs_allocationPKDv2_mjj",
"_Z21rsSetElementAt_ulong213rs_allocationPKDv2_mjjj",
"_Z21rsSetElementAt_ulong213rs_allocationPKDv2_yj",
"_Z21rsSetElementAt_ulong213rs_allocationPKDv2_yjj",
"_Z21rsSetElementAt_ulong213rs_allocationPKDv2_yjjj",
"_Z21rsSetElementAt_ulong313rs_allocationPKDv3_mj",
"_Z21rsSetElementAt_ulong313rs_allocationPKDv3_mjj",
"_Z21rsSetElementAt_ulong313rs_allocationPKDv3_mjjj",
"_Z21rsSetElementAt_ulong313rs_allocationPKDv3_yj",
"_Z21rsSetElementAt_ulong313rs_allocationPKDv3_yjj",
"_Z21rsSetElementAt_ulong313rs_allocationPKDv3_yjjj",
"_Z21rsSetElementAt_ulong413rs_allocationPKDv4_mj",
"_Z21rsSetElementAt_ulong413rs_allocationPKDv4_mjj",
"_Z21rsSetElementAt_ulong413rs_allocationPKDv4_mjjj",
"_Z21rsSetElementAt_ulong413rs_allocationPKDv4_yj",
"_Z21rsSetElementAt_ulong413rs_allocationPKDv4_yjj",
"_Z21rsSetElementAt_ulong413rs_allocationPKDv4_yjjj",
"_Z21rsSetElementAt_ushort13rs_allocationPKht",
"_Z21rsSetElementAt_ushort13rs_allocationPKtjj",
"_Z21rsSetElementAt_ushort13rs_allocationPKtjjj",
"_Z22rsgBindProgramFragment19rs_program_fragment",
"_Z22rsGetElementAt_double213rs_allocationPDv2_dj",
"_Z22rsGetElementAt_double213rs_allocationPDv2_djj",
"_Z22rsGetElementAt_double213rs_allocationPDv2_djjj",
"_Z22rsGetElementAt_double313rs_allocationPDv3_dj",
"_Z22rsGetElementAt_double313rs_allocationPDv3_djj",
"_Z22rsGetElementAt_double313rs_allocationPDv3_djjj",
"_Z22rsGetElementAt_double413rs_allocationPDv4_dj",
"_Z22rsGetElementAt_double413rs_allocationPDv4_djj",
"_Z22rsGetElementAt_double413rs_allocationPDv4_djjj",
"_Z22rsGetElementAt_ushort213rs_allocationPDv2_tj",
"_Z22rsGetElementAt_ushort213rs_allocationPDv2_tjj",
"_Z22rsGetElementAt_ushort213rs_allocationPDv2_tjjj",
"_Z22rsGetElementAt_ushort313rs_allocationPDv3_tj",
"_Z22rsGetElementAt_ushort313rs_allocationPDv3_tjj",
"_Z22rsGetElementAt_ushort313rs_allocationPDv3_tjjj",
"_Z22rsGetElementAt_ushort413rs_allocationPDv4_tj",
"_Z22rsGetElementAt_ushort413rs_allocationPDv4_tjj",
"_Z22rsGetElementAt_ushort413rs_allocationPDv4_tjjj",
"_Z22rsSendToClientBlockingi",
"_Z22rsSendToClientBlockingiPKvj",
"_Z22rsSetElementAt_double213rs_allocationPKDv2_dj",
"_Z22rsSetElementAt_double213rs_allocationPKDv2_djj",
"_Z22rsSetElementAt_double213rs_allocationPKDv2_djjj",
"_Z22rsSetElementAt_double313rs_allocationPKDv3_dj",
"_Z22rsSetElementAt_double313rs_allocationPKDv3_djj",
"_Z22rsSetElementAt_double313rs_allocationPKDv3_djjj",
"_Z22rsSetElementAt_double413rs_allocationPKDv4_dj",
"_Z22rsSetElementAt_double413rs_allocationPKDv4_djj",
"_Z22rsSetElementAt_double413rs_allocationPKDv4_djjj",
"_Z22rsSetElementAt_ushort213rs_allocationPKDv2_tj",
"_Z22rsSetElementAt_ushort213rs_allocationPKDv2_tjj",
"_Z22rsSetElementAt_ushort213rs_allocationPKDv2_tjjj",
"_Z22rsSetElementAt_ushort313rs_allocationPKDv3_tj",
"_Z22rsSetElementAt_ushort313rs_allocationPKDv3_tjj",
"_Z22rsSetElementAt_ushort313rs_allocationPKDv3_tjjj",
"_Z22rsSetElementAt_ushort413rs_allocationPKDv4_tj",
"_Z22rsSetElementAt_ushort413rs_allocationPKDv4_tjj",
"_Z22rsSetElementAt_ushort413rs_allocationPKDv4_tjjj",
"_Z23rsAllocationCopy1DRange13rs_allocationjjjS_jj",
"_Z23rsAllocationCopy2DRange13rs_allocationjjj26rs_allocation_cubemap_facejjS_jjjS0_",
"_Z23rsMatrixLoadPerspectiveP12rs_matrix4x4ffff",
"_Z24rsgClearAllRenderTargetsv",
"_Z24rsgDrawSpriteScreenspacefffff",
"_Z24rsMatrixInverseTransposeP12rs_matrix4x4",
"_Z25rsgMeshComputeBoundingBox7rs_meshPfS0_S0_S0_S0_S0_",
"_Z31rsgProgramFragmentConstantColor19rs_program_fragmentffff",
"_Z31rsgProgramVertexLoadModelMatrixPK12rs_matrix4x4",
"_Z33rsgProgramVertexLoadTextureMatrixPK12rs_matrix4x4",
"_Z35rsgProgramVertexGetProjectionMatrixP12rs_matrix4x4",
"_Z36rsgProgramVertexLoadProjectionMatrixPK12rs_matrix4x4",
"_Z3cosf",
"_Z3erff",
"_Z3expf",
"_Z3fmafff",
"_Z3logf",
"_Z3nanj",
"_Z3powff",
"_Z3sinf",
"_Z3tanf",
"_Z4acosf",
"_Z4asinf",
"_Z4atanf",
"_Z4cbrtf",
"_Z4ceilf",
"_Z4coshf",
"_Z4erfcf",
"_Z4exp2f",
"_Z4fdimff",
"_Z4fmaxff",
"_Z4fminff",
"_Z4fmodff",
"_Z4logbf",
"_Z4modffPf",
"_Z4rintf",
"_Z4sinhf",
"_Z4sqrtf",
"_Z4tanhf",
"_Z5acoshf",
"_Z5asinhf",
"_Z5atan2ff",
"_Z5atanhf",
"_Z5colorffff",
"_Z5expm1f",
"_Z5floorf",
"_Z5frexpfPi",
"_Z5hypotff",
"_Z5ilogbf",
"_Z5ldexpfi",
"_Z5log10f",
"_Z5log1pf",
"_Z5roundf",
"_Z5truncf",
"_Z6lgammaf",
"_Z6lgammafPi",
"_Z6remquoffPi",
"_Z6rsFracf",
"_Z6rsRandff",
"_Z6rsTimePi",
"_Z6rsTimePl",
"_Z6tgammaf",
"_Z7rsDebugPKcc",
"_Z7rsDebugPKcd",
"_Z7rsDebugPKcDv2_y",
"_Z7rsDebugPKcDv3_y",
"_Z7rsDebugPKcDv4_y",
"_Z7rsDebugPKcf",
"_Z7rsDebugPKcff",
"_Z7rsDebugPKcfff",
"_Z7rsDebugPKcffff",
"_Z7rsDebugPKch",
"_Z7rsDebugPKci",
"_Z7rsDebugPKcj",
"_Z7rsDebugPKcl",
"_Z7rsDebugPKcm",
"_Z7rsDebugPKcPK12rs_matrix2x2",
"_Z7rsDebugPKcPK12rs_matrix3x3",
"_Z7rsDebugPKcPK12rs_matrix4x4",
"_Z7rsDebugPKcPKDv2_c",
"_Z7rsDebugPKcPKDv2_d",
"_Z7rsDebugPKcPKDv2_f",
"_Z7rsDebugPKcPKDv2_h",
"_Z7rsDebugPKcPKDv2_i",
"_Z7rsDebugPKcPKDv2_j",
"_Z7rsDebugPKcPKDv2_l",
"_Z7rsDebugPKcPKDv2_m",
"_Z7rsDebugPKcPKDv2_s",
"_Z7rsDebugPKcPKDv2_t",
"_Z7rsDebugPKcPKDv2_x",
"_Z7rsDebugPKcPKDv2_y",
"_Z7rsDebugPKcPKDv3_c",
"_Z7rsDebugPKcPKDv3_d",
"_Z7rsDebugPKcPKDv3_f",
"_Z7rsDebugPKcPKDv3_h",
"_Z7rsDebugPKcPKDv3_i",
"_Z7rsDebugPKcPKDv3_j",
"_Z7rsDebugPKcPKDv3_l",
"_Z7rsDebugPKcPKDv3_m",
"_Z7rsDebugPKcPKDv3_s",
"_Z7rsDebugPKcPKDv3_t",
"_Z7rsDebugPKcPKDv3_x",
"_Z7rsDebugPKcPKDv3_y",
"_Z7rsDebugPKcPKDv4_c",
"_Z7rsDebugPKcPKDv4_d",
"_Z7rsDebugPKcPKDv4_f",
"_Z7rsDebugPKcPKDv4_h",
"_Z7rsDebugPKcPKDv4_i",
"_Z7rsDebugPKcPKDv4_j",
"_Z7rsDebugPKcPKDv4_l",
"_Z7rsDebugPKcPKDv4_m",
"_Z7rsDebugPKcPKDv4_s",
"_Z7rsDebugPKcPKDv4_t",
"_Z7rsDebugPKcPKDv4_x",
"_Z7rsDebugPKcPKDv4_y",
"_Z7rsDebugPKcPKv",
"_Z7rsDebugPKcs",
"_Z7rsDebugPKct",
"_Z7rsDebugPKcx",
"_Z7rsDebugPKcy",
"_Z7rsGetDtv",
"_Z8copysignff",
"_Z9nextafterff",
"_Z9remainderff",
"_Z9rsForEach9rs_script13rs_allocationS0_",
"_Z9rsForEach9rs_script13rs_allocationS0_PKv",
"_Z9rsForEach9rs_script13rs_allocationS0_PKvj",
"_Z9rsForEach9rs_script13rs_allocationS0_PKvjPK14rs_script_call",
"_Z9rsForEach9rs_script13rs_allocationS0_PKvPK14rs_script_call",
"_Z9rsgFinishv",
};
