// idol/shrubfunc.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x508c10-0x50b0bc
#include "idol/shrubfunc.h"
#include "game/boot.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/main.h"
#include "game/pause.h"
#include "game/skyfunc.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"
#include "idol/idol_draw.h"
#include "idol/mUnk.h"
#include "idol/mathfunc.h"
#include "idol/tiefunc.h"
#include "sdk/libgcm_cmd/marker.h"

// 0x0508c10 (0x1138 bytes)
// strings: 0065fb68: 'Shrub'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void DrawShrub(int param_1,ulonglong param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  RsxCmd *pRVar8;
  uint uVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  RenderingStep *pRVar12;
  RenderingStep *pRVar13;
  char cVar14;
  undefined8 uVar15;
  longlong lVar16;
  RsxCmd *pRVar17;
  RsxCmd *pRVar19;
  ulonglong uVar18;
  RsxCmd RVar20;
  ulonglong unaff_r14;
  ulonglong unaff_r15;
  int iVar21;
  ulonglong unaff_r16;
  int iVar22;
  ulonglong unaff_r17;
  int iVar23;
  ulonglong unaff_r18;
  uint uVar24;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  RenderingStep *pRVar25;
  ulonglong unaff_r27;
  RenderingStep *pRVar26;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar27;
  ulonglong unaff_r30;
  ulonglong uVar28;
  uint uVar29;
  ulonglong unaff_r31;
  undefined4 *puVar30;
  byte in_cr6;
  ulonglong in_LR;
  longlong lVar31;
  ulonglong uVar32;
  longlong lVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  GPiece<16> auVar49;
  GPiece<16> auVar50;
  
  uVar18 = ZEXT48(&stack0x00000000);
  lVar1 = uVar18 - 0x210;
  puVar7 = (ulonglong *)lVar1;
  *puVar7 = uVar18;
  puVar7[0x44] = in_LR;
  puVar7[0x41] = unaff_r31;
  cVar14 = DAT_0159c361;
  puVar7[0x2d] = param_2;
  puVar7[0x40] = unaff_r30;
  puVar7[0x3f] = unaff_r29;
  puVar7[0x3e] = unaff_r28;
  puVar7[0x3d] = unaff_r27;
  puVar7[0x3c] = unaff_r26;
  puVar7[0x3b] = unaff_r25;
  puVar7[0x3a] = unaff_r24;
  puVar7[0x39] = unaff_r23;
  puVar7[0x38] = unaff_r22;
  puVar7[0x37] = unaff_r21;
  puVar7[0x36] = unaff_r20;
  puVar7[0x35] = unaff_r19;
  puVar7[0x34] = unaff_r18;
  puVar7[0x33] = unaff_r17;
  puVar7[0x32] = unaff_r16;
  puVar7[0x31] = unaff_r15;
  puVar7[0x30] = unaff_r14;
  if ((cVar14 == '\0') && (uVar27 = puVar7[0x2d], *(int *)((int)uVar27 + 8) != 0)) {
    idol_draw::RsxCmd_DebugStr_Marker(M_Pass,"Shrub");
    idol_draw::RsxCmd_DebugStr_Marker(M_Depth,"Shrub");
    idol_draw::RsxCmd_DebugStr_Marker(DL_Pass,"Shrub");
    idol_draw::RsxCmd_DebugStr_Marker(DL_DepthPass,"Shrub");
    pRVar12 = M_Depth;
    puVar7[0x2b] = (ulonglong)g_viewMtxPtr;
    idol_draw::Insert_WaitCmd_Marker(&DAT_01111700,pRVar12,2);
    pRVar12 = M_Pass;
    uVar15 = idol_draw::PackCmd(0,1,0,1,0x80);
    idol_draw::DrawDepth(pRVar12,uVar15);
    pRVar12 = DL_Pass;
    uVar15 = idol_draw::PackCmd(0,1,0,1,0x80);
    idol_draw::DrawDepth(pRVar12,uVar15);
    pRVar12 = M_Depth;
    *M_Depth->command = NV4097_SET_ALPHA_FUNC_x2;
    pRVar12->command[1] = 0x206;
    pRVar12->command[2] = 0xbe;
    pRVar12->command = pRVar12->command + 3;
    pRVar12 = M_Depth;
    *M_Depth->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    pRVar12->command[1] = 1;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = M_Pass;
    *M_Pass->command = NV4097_SET_ALPHA_FUNC_x2;
    pRVar12->command[1] = 0x206;
    pRVar12->command[2] = 1;
    pRVar12->command = pRVar12->command + 3;
    pRVar12 = M_Pass;
    lVar31 = 2;
    *M_Pass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    pRVar12->command[1] = 1;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = DL_DepthPass;
    *DL_DepthPass->command = NV4097_SET_ALPHA_FUNC_x2;
    pRVar12->command[1] = 0x206;
    pRVar12->command[2] = 1;
    pRVar12->command = pRVar12->command + 3;
    pRVar12 = DL_DepthPass;
    *DL_DepthPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    pRVar12->command[1] = 1;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = DL_Pass;
    *DL_Pass->command = NV4097_SET_ALPHA_FUNC_x2;
    pRVar12->command[1] = 0x206;
    pRVar12->command[2] = 1;
    pRVar12->command = pRVar12->command + 3;
    pRVar12 = DL_Pass;
    *DL_Pass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    pRVar12->command[1] = 1;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = M_Pass;
    pRVar17 = (RsxCmd *)(*(int *)(param_1 + 0x18) + 0x10);
    *M_Pass->command = NV4097_SET_TRANSFORM_CONSTANT_LOAD_x5;
    pRVar19 = pRVar12->command;
    puVar7[0x2a] = 4;
    puVar7[0x29] = 2;
    pRVar19[1] = 0x14;
    pRVar19 = pRVar12->command + 2;
    pRVar12->command = pRVar19;
    do {
      *pRVar19 = *pRVar17;
      pRVar19 = pRVar12->command;
      pRVar12->command = pRVar19 + 1;
      pRVar8 = pRVar17 + 1;
      pRVar17 = pRVar17 + 2;
      pRVar19[1] = *pRVar8;
      pRVar19 = pRVar12->command + 1;
      pRVar12->command = pRVar19;
      pRVar13 = DL_Pass;
      lVar31 = lVar31 + -1;
    } while (lVar31 != 0);
    uVar28 = puVar7[0x29];
    pRVar17 = (RsxCmd *)(*(int *)(param_1 + 0x18) + 0x10);
    *DL_Pass->command = NV4097_SET_TRANSFORM_CONSTANT_LOAD_x5;
    pRVar13->command[1] = 0x14;
    pRVar19 = pRVar13->command + 2;
    pRVar13->command = pRVar19;
    uVar32 = uVar28;
    do {
      *pRVar19 = *pRVar17;
      pRVar19 = pRVar13->command;
      pRVar13->command = pRVar19 + 1;
      pRVar8 = pRVar17 + 1;
      pRVar17 = pRVar17 + 2;
      pRVar19[1] = *pRVar8;
      pRVar19 = pRVar13->command + 1;
      pRVar13->command = pRVar19;
      uVar32 = uVar32 - 1;
    } while (uVar32 != 0);
    uVar32 = puVar7[0x2b];
    idol_draw::BindVertexProgram(uVar32,M_Pass,8);
    idol_draw::BindFragmentProgram(uVar32,M_Pass,6);
    idol_draw::BindVertexProgram(uVar32,DL_Pass,8);
    idol_draw::BindFragmentProgram(uVar32,DL_Pass,6);
    puVar7[0x2c] = (ulonglong)*(uint *)((int)uVar27 + 8);
    *(undefined4 *)(puVar7 + 0x28) = 0xffffffff;
    *(undefined4 *)((int)puVar7 + 0x144) = 0xffffffff;
    pRVar12 = M_Pass;
    *M_Pass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar12->command[1] = 0x1832;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = M_Pass;
    *M_Pass->command = 0x41744;
    pRVar12->command[1] = 0x822;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = DL_Pass;
    *DL_Pass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar12->command[1] = 0x1832;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = DL_Pass;
    *DL_Pass->command = 0x41744;
    pRVar12->command[1] = 0x822;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = M_Depth;
    *M_Depth->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar12->command[1] = 0x1832;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = M_Depth;
    *M_Depth->command = 0x41744;
    pRVar12->command[1] = 0x822;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = DL_DepthPass;
    *DL_DepthPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar12->command[1] = 0x1832;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = DL_DepthPass;
    *DL_DepthPass->command = 0x41744;
    pRVar12->command[1] = 0x822;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = M_Pass;
    if (DAT_0159c362 == '\0') {
      *M_Pass->command = 0x4174c;
      pRVar12->command[1] = 0x444;
      pRVar12->command = pRVar12->command + 2;
      pRVar12 = M_Depth;
      *M_Depth->command = 0x4174c;
      pRVar12->command[1] = 0x444;
      pRVar12->command = pRVar12->command + 2;
      pRVar12 = DL_Pass;
      *DL_Pass->command = 0x4174c;
      pRVar12->command[1] = 0x444;
      pRVar12->command = pRVar12->command + 2;
      pRVar12 = DL_DepthPass;
      *DL_DepthPass->command = 0x4174c;
      pRVar12->command[1] = 0x444;
      pRVar12->command = pRVar12->command + 2;
    }
    else {
      *M_Pass->command = 0x4174c;
      RVar20 = (RsxCmd)uVar28;
      pRVar12->command[1] = RVar20;
      pRVar12->command = pRVar12->command + 2;
      pRVar12 = M_Depth;
      *M_Depth->command = 0x4174c;
      pRVar12->command[1] = RVar20;
      pRVar12->command = pRVar12->command + 2;
    }
    uVar27 = 0;
    if ((int)puVar7[0x2c] != 0) {
      iVar22 = 0;
      iVar21 = 0;
      do {
        auVar34 = ZEXT416(0xfffffff8);
        auVar35 = ZEXT416(0xffffffff);
        auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
        uVar24 = ((int *)puVar7[0x2d])[1] + iVar21;
        auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        bVar2 = *(byte *)(uVar24 + 0x3f);
        puVar7[0x2e] = (ulonglong)bVar2;
        pRVar13 = DL_Pass;
        pRVar12 = DL_DepthPass;
        auVar35 = loadVectorLeftIndexed(0x3f,(ulonglong)uVar24);
        auVar34 = vectorShiftRightWord
                            (auVar35,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60);
        lVar31 = 0;
        uVar29 = *(uint *)(*(int *)puVar7[0x2d] + iVar22);
        uVar32 = (ulonglong)uVar29;
        auVar35 = vectorConvertFromUnsignedFixedPointWord(auVar34,0);
        iVar3 = *(int *)(uVar29 + 0x6c);
        auVar34 = loadVectorLeftIndexed(in_LR,0x508b80);
        auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar34 = vectorMultiplyAddFloatingPoint
                            (auVar35,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,
                             auVar36);
        iVar23 = 0xbe;
        pRVar26 = M_Pass;
        pRVar25 = M_Depth;
        if (bVar2 != 0xff) {
          auVar35 = ZEXT416(0xffffffff);
          auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
          auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
          auVar35 = loadVectorLeftIndexed(4,0x508b80);
          auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
          lVar31 = 1;
          auVar34 = vectorMultiplyAddFloatingPoint
                              (auVar34,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60
                               ,auVar36);
          auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
          puVar7[0x2e] = (longlong)(int)((float)(longlong)puVar7[0x2e] * 0.003921569 * 190.0);
          iVar4 = *(int *)((int)puVar7 + 0x174);
          iVar23 = 0xbe;
          pRVar26 = pRVar13;
          pRVar25 = pRVar12;
          if (iVar4 != 0xbe) {
            auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
            *pRVar12->command = NV4097_SET_ALPHA_FUNC_x2;
            lVar31 = 1;
            pRVar12->command[1] = 0x206;
            uVar6 = storeVectorElementWordIndexed
                              (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,8,
                               ZEXT48(pRVar12->command));
            *(undefined4 *)((uint)(pRVar12->command + 2) & 0xfffffffc) = uVar6;
            pRVar12->command = pRVar12->command + 3;
            iVar23 = iVar4;
          }
        }
        uVar9 = (uint)(lVar31 << 2) | (uint)puVar7;
        if (*(int *)(uVar29 + 0x50) != *(int *)(uVar9 + 0x140)) {
          RVar20 = *(RsxCmd *)(iVar3 + 0x10);
          *pRVar26->command = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
          pRVar26->command[1] = RVar20 | 0x80000000;
          pRVar19 = pRVar26->command;
          pRVar26->command = pRVar19 + 2;
          RVar20 = *(RsxCmd *)(iVar3 + 0x14);
          pRVar19[2] = 0x41684;
          pRVar26->command[1] = RVar20 | 0x80000000;
          pRVar19 = pRVar26->command;
          pRVar26->command = pRVar19 + 2;
          RVar20 = *(RsxCmd *)(iVar3 + 0x18);
          pRVar19[2] = NV4097_SET_INDEX_ARRAY_ADDRESS_x2;
          pRVar26->command[1] = RVar20;
          pRVar26->command[2] = 0x11;
          pRVar26->command = pRVar26->command + 3;
          RVar20 = *(RsxCmd *)(iVar3 + 0x10);
          *pRVar25->command = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
          pRVar25->command[1] = RVar20 | 0x80000000;
          pRVar19 = pRVar25->command;
          pRVar25->command = pRVar19 + 2;
          RVar20 = *(RsxCmd *)(iVar3 + 0x14);
          pRVar19[2] = 0x41684;
          pRVar25->command[1] = RVar20 | 0x80000000;
          pRVar19 = pRVar25->command;
          pRVar25->command = pRVar19 + 2;
          RVar20 = *(RsxCmd *)(iVar3 + 0x18);
          pRVar19[2] = NV4097_SET_INDEX_ARRAY_ADDRESS_x2;
          pRVar25->command[1] = RVar20;
          pRVar25->command[2] = 0x11;
          pRVar25->command = pRVar25->command + 3;
          *(undefined4 *)(uVar9 + 0x140) = *(undefined4 *)(uVar29 + 0x50);
        }
        auVar34 = *(undefined1 (*) [16])(uVar29 & 0xfffffff0);
        auVar36 = *(undefined1 (*) [16])(uVar29 + 0x10 & 0xfffffff0);
        auVar35 = *(undefined1 (*) [16])(uVar29 + 0x20 & 0xfffffff0);
        auVar37 = *(undefined1 (*) [16])(uVar29 + 0x30 & 0xfffffff0);
        if ((*(ushort *)(iVar3 + 0x2a) & 6) != 0) {
          *(undefined1 (*) [16])(puVar7 + 0x16) = auVar37;
          *(undefined1 (*) [16])(puVar7 + 0x14) = auVar35;
          *(undefined1 (*) [16])(puVar7 + 0x12) = auVar36;
          *(undefined1 (*) [16])(puVar7 + 0x10) = auVar34;
          FastVecSub(uVar18 - 0x1a0,uVar32 + 0x40,&DAT_0159c340);
          auVar11 = _DAT_00508bf0;
          auVar10 = _DAT_00508be0;
          auVar41 = _DAT_00508bd0;
          auVar34 = ZEXT416(0xffffffff);
          auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
          auVar34 = vectorShiftLeftIntegerWord(auVar34,auVar34);
          auVar35 = loadVectorLeftIndexed(0x74,lVar1);
          auVar36 = loadVectorLeftIndexed(0x70,lVar1);
          auVar34 = vectorMultiplyAddFloatingPoint(auVar35,auVar35,auVar34);
          auVar44 = loadVectorLeftIndexed(0x78,lVar1);
          auVar35 = loadVectorLeftIndexed(0x14,0x902fe0);
          auVar37 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar46 = loadVectorLeftIndexed(0x18,0x902fe0);
          auVar34 = vectorMultiplyAddFloatingPoint(auVar36,auVar36,auVar34);
          auVar42 = loadVectorLeftIndexed(0x10,0x902fe0);
          auVar39 = loadVectorLeftIndexed(puVar7[0x2a],0x902fe0);
          auVar40 = loadVectorLeftIndexed(8,0x902fe0);
          auVar43 = loadVectorLeftIndexed(0x2fe0,0x900000);
          auVar45 = vectorMultiplyAddFloatingPoint(auVar44,auVar44,auVar34);
          auVar34 = *(undefined1 (*) [16])(puVar7 + 0x10);
          auVar47 = loadVectorLeftIndexed(0xc,0x902fe0);
          auVar35 = *(undefined1 (*) [16])(puVar7 + 0x14);
          auVar36 = *(undefined1 (*) [16])(puVar7 + 0x12);
          auVar44 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
          vectorCompareGreaterThanOrEqualToFloatingPoint
                    (auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,
                     auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60);
          auVar37 = *(undefined1 (*) [16])(puVar7 + 0x16);
          if ((bool)(in_cr6 >> 1 & 1)) {
            auVar34 = ZEXT416(0xfffffff8);
            auVar37 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar34 = ZEXT416(0xffffffff);
            auVar35 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar34 = ZEXT416(0xffffffff);
            auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar48 = vectorShiftLeftIntegerWord(auVar35,auVar35);
            auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
            uVar28 = (ulonglong)g_MainLoopFrames + uVar32 * 0x43;
            auVar34 = ZEXT416(0xffffffff);
            auVar49 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar34 = ZEXT416(0xffffffff);
            auVar50 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar34 = loadVectorLeftIndexed(0x902ee0,uVar28 & 0xff);
            auVar36 = loadVectorLeftIndexed(0x902ee0,(uVar28 << 0x20) >> 0x21 & 0xff);
            auVar34 = vectorShiftRightAlgebraicWord(auVar34,auVar37);
            auVar44 = vectorShiftRightAlgebraicWord(auVar36,auVar37);
            auVar36 = vectorConvertFromSignedFixedPointWord(auVar34,0);
            auVar44 = vectorConvertFromSignedFixedPointWord(auVar44,0);
            auVar34 = loadVectorLeftIndexed(8,0x508b80);
            auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar38 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            lVar31 = ((ulonglong)g_MainLoopFrames & 0x7fffffff) * 2 + uVar32 * 0x7b;
            auVar36 = vectorMultiplyAddFloatingPoint(auVar36,auVar38,auVar48);
            auVar35 = vectorMultiplyAddFloatingPoint(auVar44,auVar38,auVar35);
            auVar34 = ZEXT416(0xffffffff);
            auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            lVar31 = lVar31 + (ZERO_MASK((*(ushort *)(iVar3 + 0x2a) & 4)) &
                              ((ulonglong)g_MainLoopFrames + uVar32 * 0x7b) - lVar31);
            auVar44 = vectorShiftLeftIntegerWord(auVar34,auVar34);
            auVar34 = loadVectorLeftIndexed(0xc,0x508b80);
            auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar36 = vectorMultiplyAddFloatingPoint(auVar36,auVar35,auVar44);
            auVar44 = vectorSubtractFloatingPoint(auVar34,auVar42);
            auVar48 = loadVectorLeftIndexed(0x902ee0,lVar31 + 0x40U & 0xff);
            auVar35 = loadVectorLeftIndexed(0x902ee0,(ulonglong)(lVar31 << 0x20) >> 0x21 & 0xff);
            auVar48 = vectorShiftRightAlgebraicWord(auVar48,auVar37);
            auVar46 = vectorNegativeMultiplySubtractFloatingPoint(auVar45,auVar46,auVar34);
            auVar35 = vectorShiftRightAlgebraicWord(auVar35,auVar37);
            auVar34 = ZEXT416(0xffffffff);
            auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar48 = vectorConvertFromSignedFixedPointWord(auVar48,0);
            auVar37 = vectorConvertFromSignedFixedPointWord(auVar35,0);
            auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
            auVar36 = vectorMultiplyAddFloatingPoint(auVar36,auVar42,auVar44);
            auVar34 = ZEXT416(0xffffffff);
            auVar42 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar44 = vectorShiftLeftIntegerWord(auVar49,auVar49);
            auVar49 = vectorShiftLeftIntegerWord(auVar50,auVar50);
            auVar34 = ZEXT416(0xffffffff);
            auVar50 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar45 = vectorShiftLeftIntegerWord(auVar42,auVar42);
            auVar48 = vectorMultiplyAddFloatingPoint(auVar48,auVar38,auVar35);
            auVar34 = ZEXT416(0xffffffff);
            auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar37 = vectorMultiplyAddFloatingPoint(auVar37,auVar38,auVar49);
            auVar42 = vectorShiftLeftIntegerWord(auVar50,auVar50);
            auVar44 = vectorMultiplyAddFloatingPoint(auVar40,auVar36,auVar44);
            auVar35 = vectorMultiplyAddFloatingPoint(auVar47,auVar36,auVar45);
            auVar40 = vectorShiftLeftIntegerWord(auVar34,auVar34);
            auVar34 = ZEXT416(0xffffffff);
            auVar36 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar34 = ZEXT416(0xffffffff);
            auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar45 = vectorShiftLeftIntegerWord(auVar36,auVar36);
            auVar47 = vectorShiftLeftIntegerWord(auVar34,auVar34);
            auVar36 = vectorMultiplyAddFloatingPoint(auVar44,auVar43,auVar42);
            auVar35 = vectorMultiplyAddFloatingPoint(auVar35,auVar43,auVar40);
            auVar34 = ZEXT416(0xffffffff);
            auVar40 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar34 = ZEXT416(0xffffffff);
            auVar42 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar34 = loadVectorLeftIndexed(0x10,0x508b80);
            auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar44 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar36 = vectorMultiplyAddFloatingPoint(auVar48,auVar39,auVar36);
            auVar34 = vectorMultiplyAddFloatingPoint(auVar37,auVar39,auVar35);
            auVar35 = vectorShiftLeftIntegerWord(auVar40,auVar40);
            auVar37 = vectorShiftLeftIntegerWord(auVar42,auVar42);
            auVar36 = vectorMultiplyAddFloatingPoint(auVar36,auVar46,auVar45);
            auVar34 = vectorMultiplyAddFloatingPoint(auVar34,auVar46,auVar47);
            auVar35 = vectorMultiplyAddFloatingPoint(auVar36,auVar44,auVar35);
            auVar34 = vectorMultiplyAddFloatingPoint(auVar34,auVar44,auVar37);
            *(undefined4 *)((int)puVar7 + 0x11c) = 0;
            *(undefined4 *)(puVar7 + 0x23) = 0;
            *(undefined4 *)((int)puVar7 + 0x114) = 0x3f800000;
            *(undefined4 *)(puVar7 + 0x22) = 0;
            *(undefined4 *)((int)puVar7 + 0x13c) = 0x3f800000;
            *(undefined4 *)(puVar7 + 0x27) = 0;
            *(undefined4 *)((int)puVar7 + 0x134) = 0;
            *(undefined4 *)(puVar7 + 0x26) = 0;
            *(undefined4 *)((int)puVar7 + 0x10c) = 0;
            *(undefined4 *)(puVar7 + 0x21) = 0;
            *(undefined4 *)((int)puVar7 + 0x104) = 0;
            *(undefined4 *)(puVar7 + 0x20) = 0x3f800000;
            auVar34 = vectorPermute(auVar35,auVar34,auVar10);
            auVar34 = vectorPermute(auVar34,auVar41,auVar11);
            *(undefined1 (*) [16])(puVar7 + 0x24) = auVar34;
            FUN_0060436c(uVar18 - 0x150,uVar18 - 400,uVar18 - 0x110);
            auVar34 = *(undefined1 (*) [16])(puVar7 + 0x18);
            auVar36 = *(undefined1 (*) [16])(puVar7 + 0x1a);
            auVar35 = *(undefined1 (*) [16])(puVar7 + 0x1c);
            auVar37 = *(undefined1 (*) [16])(puVar7 + 0x1e);
          }
        }
        auVar44 = vectorMergeHighWord(auVar34,auVar35);
        auVar41 = vectorMergeHighWord(auVar36,auVar37);
        auVar34 = vectorMergeLowWord(auVar34,auVar35);
        auVar35 = vectorMergeLowWord(auVar36,auVar37);
        auVar36 = vectorMergeHighWord(auVar44,auVar41);
        auVar37 = vectorMergeLowWord(auVar44,auVar41);
        auVar44 = vectorMergeHighWord(auVar34,auVar35);
        auVar34 = vectorMergeLowWord(auVar34,auVar35);
        *(undefined1 (*) [16])(puVar7 + 0x10) = auVar36;
        lVar33 = 8;
        *(undefined1 (*) [16])(puVar7 + 0x12) = auVar37;
        *(undefined1 (*) [16])(puVar7 + 0x14) = auVar44;
        uVar32 = puVar7[0x2a];
        auVar34 = vectorLogicalAnd(auVar34,_DAT_00508c00);
        lVar16 = uVar18 - 400;
        *(undefined1 (*) [16])(puVar7 + 0x16) = auVar34;
        *pRVar26->command = 0x441efc;
        pRVar26->command[1] = (RsxCmd)uVar32;
        pRVar19 = pRVar26->command + 2;
        pRVar26->command = pRVar19;
        lVar31 = lVar16;
        do {
          pRVar17 = (RsxCmd *)lVar31;
          *pRVar19 = *pRVar17;
          pRVar19 = pRVar26->command;
          pRVar26->command = pRVar19 + 1;
          lVar31 = lVar31 + 8;
          pRVar19[1] = pRVar17[1];
          pRVar17 = pRVar26->command;
          pRVar19 = pRVar17 + 1;
          pRVar26->command = pRVar19;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        if (DAT_0159c362 == '\0') {
          iVar4 = *(int *)(uVar24 + 0x44);
          iVar5 = *(int *)((int)puVar7[0x2b] + 0x4a8);
          pRVar17[1] = 0x4168c;
          pRVar26->command[1] = iVar4 - iVar5 | 0x80000000;
          pRVar19 = pRVar26->command;
        }
        else {
          uVar9 = *(uint *)(uVar29 + 0x60);
          pRVar17[1] = 0x4194c;
          pRVar26->command[1] = uVar9 << 0x18 | uVar9 >> 8;
          pRVar19 = pRVar26->command;
        }
        lVar31 = 8;
        pRVar26->command = pRVar19 + 2;
        uVar32 = puVar7[0x2a];
        *pRVar25->command = 0x441efc;
        pRVar25->command[1] = (RsxCmd)uVar32;
        pRVar19 = pRVar25->command + 2;
        pRVar25->command = pRVar19;
        do {
          pRVar17 = (RsxCmd *)lVar16;
          *pRVar19 = *pRVar17;
          pRVar19 = pRVar25->command;
          pRVar25->command = pRVar19 + 1;
          lVar16 = lVar16 + 8;
          pRVar19[1] = pRVar17[1];
          pRVar17 = pRVar25->command;
          pRVar19 = pRVar17 + 1;
          pRVar25->command = pRVar19;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        if (DAT_0159c362 == '\0') {
          iVar4 = *(int *)(uVar24 + 0x44);
          iVar5 = *(int *)((int)puVar7[0x2b] + 0x4a8);
          pRVar17[1] = 0x4168c;
          pRVar25->command[1] = iVar4 - iVar5 | 0x80000000;
          pRVar19 = pRVar25->command;
        }
        else {
          uVar29 = *(uint *)(uVar29 + 0x60);
          pRVar17[1] = 0x4194c;
          pRVar25->command[1] = uVar29 << 0x18 | uVar29 >> 8;
          pRVar19 = pRVar25->command;
        }
        pRVar19 = pRVar19 + 2;
        uVar29 = 0;
        pRVar25->command = pRVar19;
        puVar30 = *(undefined4 **)(iVar3 + 0x1c);
        if (*(short *)(iVar3 + 0x28) != 0) {
          do {
            FUN_004d676c(pRVar26,0,*puVar30,(ulonglong)*(byte *)(puVar30 + 3) & 3,
                         ((ulonglong)*(byte *)(puVar30 + 3) << 0x20) >> 0x22 & 3);
            *pRVar26->command = 0x400c1714;
            pRVar26->command[1] = 0;
            pRVar26->command[2] = 0;
            pRVar26->command[3] = 0;
            pRVar26->command[4] = NV4097_SET_BEGIN_END_x1;
            pRVar26->command[5] = 5;
            pRVar26->command = pRVar26->command + 6;
            FUN_005e8b5c(pRVar26,puVar30[1],puVar30[2]);
            *pRVar26->command = NV4097_SET_BEGIN_END_x1;
            pRVar26->command[1] = 0;
            pRVar26->command = pRVar26->command + 2;
            FUN_004d676c(pRVar25,0,*puVar30,(ulonglong)*(byte *)(puVar30 + 3) & 3,
                         ((ulonglong)*(byte *)(puVar30 + 3) << 0x20) >> 0x22 & 3);
            *pRVar25->command = 0x400c1714;
            pRVar25->command[1] = 0;
            pRVar25->command[2] = 0;
            pRVar25->command[3] = 0;
            pRVar25->command[4] = NV4097_SET_BEGIN_END_x1;
            pRVar25->command[5] = 5;
            pRVar25->command = pRVar25->command + 6;
            FUN_005e8b5c(pRVar25,puVar30[1],puVar30[2]);
            uVar29 = uVar29 + 1;
            puVar30 = puVar30 + 4;
            *pRVar25->command = NV4097_SET_BEGIN_END_x1;
            pRVar25->command[1] = 0;
            pRVar19 = pRVar25->command + 2;
            pRVar25->command = pRVar19;
          } while (uVar29 < *(ushort *)(iVar3 + 0x28));
        }
        if (pRVar25 == DL_DepthPass && iVar23 != 0xbe) {
          *pRVar19 = NV4097_SET_ALPHA_FUNC_x2;
          pRVar25->command[1] = 0x206;
          pRVar25->command[2] = 0xbe;
          pRVar25->command = pRVar25->command + 3;
        }
        uVar27 = uVar27 + 1;
        iVar22 = iVar22 + 4;
        iVar21 = iVar21 + 0x50;
      } while ((uVar27 & 0xffffffff) < (puVar7[0x2c] & 0xffffffff));
    }
    pRVar12 = M_Pass;
    uVar18 = puVar7[0x29];
    *M_Pass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    RVar20 = (RsxCmd)uVar18;
    pRVar12->command[1] = RVar20;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = M_Pass;
    *M_Pass->command = 0x41744;
    pRVar12->command[1] = RVar20;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = M_Pass;
    *M_Pass->command = 0x4174c;
    pRVar12->command[1] = RVar20;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = M_Depth;
    *M_Depth->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar12->command[1] = RVar20;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = M_Depth;
    *M_Depth->command = 0x41744;
    pRVar12->command[1] = RVar20;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = M_Depth;
    *M_Depth->command = 0x41748;
    pRVar12->command[1] = RVar20;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = M_Depth;
    *M_Depth->command = 0x4174c;
    pRVar12->command[1] = RVar20;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = DL_Pass;
    *DL_Pass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar12->command[1] = RVar20;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = DL_Pass;
    *DL_Pass->command = 0x41744;
    pRVar12->command[1] = RVar20;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = DL_Pass;
    *DL_Pass->command = 0x4174c;
    pRVar12->command[1] = RVar20;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = DL_DepthPass;
    *DL_DepthPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar12->command[1] = RVar20;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = DL_DepthPass;
    *DL_DepthPass->command = 0x41744;
    pRVar12->command[1] = RVar20;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = DL_DepthPass;
    *DL_DepthPass->command = 0x41748;
    pRVar12->command[1] = RVar20;
    pRVar12->command = pRVar12->command + 2;
    pRVar12 = DL_DepthPass;
    *DL_DepthPass->command = 0x4174c;
    pRVar12->command[1] = RVar20;
    pRVar12->command = pRVar12->command + 2;
    idol_draw::RsxCmd_WritePass(M_Pass);
    idol_draw::RsxCmd_WritePass(M_Depth);
    idol_draw::RsxCmd_WritePass(DL_Pass);
    idol_draw::RsxCmd_WritePass(DL_DepthPass);
  }
  return;
}


// 0x0509d60 (0x78c bytes)
// strings: 0065fb70: 'Sky'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00509d60(int param_1)

{
  ushort *puVar1;
  RsxCmd *pRVar2;
  ushort *puVar3;
  RsxCmd RVar4;
  RenderingStep *pRVar5;
  RenderingStep *pRVar6;
  int iVar7;
  ulonglong uVar8;
  RsxCmd RVar9;
  ulonglong uVar10;
  RsxCmd *pRVar11;
  RsxCmd *pRVar14;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  longlong lVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  RsxCmd local_e0 [16];
  RsxCmd local_a0 [16];
  
  idol_draw::RsxCmd_DebugStr_Marker(ForwardPass,"Sky");
  iVar7 = g_viewMtxPtr;
  idol_draw::BindVertexProgram(g_viewMtxPtr,ForwardPass,3);
  idol_draw::BindFragmentProgram(iVar7,ForwardPass,10);
  pRVar5 = ForwardPass;
  *ForwardPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar5->command[1] = 0xf0;
  pRVar11 = pRVar5->command;
  pRVar5->command = pRVar11 + 2;
  pRVar11[2] = NV4097_NO_OPERATION_x1;
  pRVar5->command[1] = 0;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = ForwardPass;
  *ForwardPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar5->command[1] = 0x1832;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = ForwardPass;
  *ForwardPass->command = 0x41744;
  pRVar5->command[1] = 0x1822;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = ForwardPass;
  *ForwardPass->command = 0x41748;
  auVar24 = ZEXT416(0);
  auVar35 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
  pRVar5->command[1] = 0x1844;
  RVar9 = *(RsxCmd *)(param_1 + 0x14);
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = ForwardPass;
  *ForwardPass->command = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
  pRVar5->command[1] = RVar9 | 0x80000000;
  iVar20 = *(int *)(param_1 + 0x14);
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = ForwardPass;
  *ForwardPass->command = 0x41684;
  pRVar5->command[1] = iVar20 + 0xc | 0x80000000;
  iVar20 = *(int *)(param_1 + 0x14);
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = ForwardPass;
  *ForwardPass->command = 0x41688;
  pRVar5->command[1] = iVar20 + 0x14 | 0x80000000;
  RVar9 = *(RsxCmd *)(param_1 + 0x18);
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = ForwardPass;
  *ForwardPass->command = NV4097_SET_INDEX_ARRAY_ADDRESS_x2;
  lVar21 = 8;
  pRVar5->command[1] = RVar9;
  pRVar5->command[2] = 0x11;
  auVar23 = *(undefined1 (*) [16])(iVar7 + 0xa0U & 0xfffffff0);
  auVar25 = *(undefined1 (*) [16])(iVar7 + 0xb0U & 0xfffffff0);
  auVar27 = *(undefined1 (*) [16])(iVar7 + 0xd0U & 0xfffffff0);
  auVar24 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar26 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
  pRVar5->command = pRVar5->command + 3;
  pRVar5 = ForwardPass;
  auVar29 = *(undefined1 (*) [16])(iVar7 + 0xc0U & 0xfffffff0);
  auVar36 = *(undefined1 (*) [16])(iVar7 + 0x60U & 0xfffffff0);
  auVar28 = vectorLogicalAnd(auVar27,_DAT_00509d50);
  auVar27 = auVar23 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar33 = vectorMultiplyAddFloatingPoint
                      (auVar36,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,auVar35
                      );
  auVar37 = *(undefined1 (*) [16])(iVar7 + 0x70U & 0xfffffff0);
  auVar24 = auVar23 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar38 = vectorMultiplyAddFloatingPoint
                      (auVar36,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,auVar35
                      );
  auVar31 = vectorMultiplyAddFloatingPoint
                      (auVar37,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,auVar35
                      );
  auVar26 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar27 = auVar29 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar23 = auVar23 & (GPiece<16>)0xffffffff;
  auVar32 = auVar25 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar30 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar40 = *(undefined1 (*) [16])(iVar7 + 0x80U & 0xfffffff0);
  auVar34 = auVar28 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar41 = *(undefined1 (*) [16])(iVar7 + 0x90U & 0xfffffff0);
  auVar22 = vectorMultiplyAddFloatingPoint
                      (auVar36,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,auVar35
                      );
  auVar27 = vectorMultiplyAddFloatingPoint
                      (auVar37,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,auVar35
                      );
  auVar26 = auVar25 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar39 = vectorMultiplyAddFloatingPoint
                      (auVar37,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,auVar35
                      );
  auVar25 = auVar25 & (GPiece<16>)0xffffffff;
  auVar36 = vectorMultiplyAddFloatingPoint
                      (auVar36,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,auVar35
                      );
  auVar23 = vectorMultiplyAddFloatingPoint
                      (auVar41,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,auVar31
                      );
  auVar32 = vectorMultiplyAddFloatingPoint
                      (auVar37,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,auVar35
                      );
  auVar34 = vectorMultiplyAddFloatingPoint
                      (auVar40,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,auVar33
                      );
  auVar24 = auVar29 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar31 = vectorMultiplyAddFloatingPoint
                      (auVar40,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,auVar38
                      );
  auVar29 = auVar29 & (GPiece<16>)0xffffffff;
  auVar26 = auVar28 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar28 = auVar28 & (GPiece<16>)0xffffffff;
  auVar22 = vectorMultiplyAddFloatingPoint
                      (auVar40,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,auVar22
                      );
  auVar30 = vectorMultiplyAddFloatingPoint
                      (auVar41,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,auVar27
                      );
  auVar27 = vectorMultiplyAddFloatingPoint
                      (auVar41,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,auVar39
                      );
  auVar25 = vectorMultiplyAddFloatingPoint
                      (auVar40,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,auVar36
                      );
  auVar32 = vectorMultiplyAddFloatingPoint
                      (auVar41,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,auVar32
                      );
  auVar24 = vectorAddFloatingPoint(auVar34,auVar23);
  auVar23 = vectorAddFloatingPoint(auVar22,auVar30);
  auVar26 = vectorAddFloatingPoint(auVar31,auVar27);
  auVar27 = vectorAddFloatingPoint(auVar25,auVar32);
  auVar32 = vectorMergeHighWord(auVar24,auVar23);
  auVar24 = vectorMergeLowWord(auVar24,auVar23);
  auVar23 = vectorMergeHighWord(auVar26,auVar27);
  auVar26 = vectorMergeLowWord(auVar26,auVar27);
  vectorMergeHighWord(auVar32,auVar23);
  vectorMergeLowWord(auVar32,auVar23);
  vectorMergeHighWord(auVar24,auVar26);
  vectorMergeLowWord(auVar24,auVar26);
  pRVar11 = local_e0;
  *ForwardPass->command = 0x441efc;
  pRVar5->command[1] = 0;
  pRVar14 = pRVar5->command + 2;
  pRVar5->command = pRVar14;
  do {
    *pRVar14 = *pRVar11;
    pRVar14 = pRVar5->command;
    pRVar5->command = pRVar14 + 1;
    pRVar2 = pRVar11 + 1;
    pRVar11 = pRVar11 + 2;
    pRVar14[1] = *pRVar2;
    pRVar14 = pRVar5->command + 1;
    pRVar5->command = pRVar14;
    lVar21 = lVar21 + -1;
  } while (lVar21 != 0);
  iVar20 = 10;
  if (*(short *)(param_1 + 6) != 0) {
    uVar19 = 0;
    iVar17 = param_1;
    do {
      puVar1 = *(ushort **)(iVar17 + 0x1c);
      if ((*puVar1 & 1) == 0) {
        if (iVar20 != 9) {
          idol_draw::BindFragmentProgram(iVar7,ForwardPass,9);
          iVar20 = 9;
        }
      }
      else if (iVar20 != 10) {
        idol_draw::BindFragmentProgram(iVar7,ForwardPass,10);
        iVar20 = 10;
      }
      if (puVar1[1] != 0) {
        uVar18 = 0;
        puVar3 = puVar1;
        do {
          FUN_004d6bb0(ForwardPass,0,*(undefined4 *)(puVar3 + 8));
          pRVar5 = ForwardPass;
          *ForwardPass->command = 0x400c1714;
          pRVar5->command[1] = 0;
          pRVar5->command[2] = 0;
          pRVar5->command[3] = 0;
          pRVar5->command[4] = NV4097_SET_BEGIN_END_x1;
          pRVar5->command[5] = 5;
          pRVar5->command = pRVar5->command + 6;
          pRVar5 = ForwardPass;
          RVar9 = *(RsxCmd *)(puVar3 + 10);
          uVar8 = (ulonglong)RVar9;
          lVar21 = 0x100 - ((ulonglong)RVar9 & 0xff);
          uVar12 = (ulonglong)*(uint *)(puVar3 + 0xc) - lVar21;
          uVar16 = lVar21 + (uVar12 & (longlong)((int)uVar12 >> 0x1f));
          uVar10 = *(uint *)(puVar3 + 0xc) - uVar16;
          pRVar11 = ForwardPass->command;
          uVar10 = uVar10 & ~(longlong)((int)uVar10 >> 0x1f);
          uVar12 = (uVar10 << 0x20) >> 0x28;
          uVar13 = uVar10 - (uVar10 & 0xffffff00);
          iVar15 = (int)uVar13;
          ForwardPass->command = pRVar11 + 1;
          *pRVar11 = (((uint)uVar10 >> 8) + ((iVar15 != 0)) +
                     (((int)uVar16 != 0))) * 0x40000 | 0x40001824;
          if ((int)uVar16 != 0) {
            pRVar11 = pRVar5->command;
            uVar8 = uVar16 + uVar8;
            pRVar5->command = pRVar11 + 1;
            *pRVar11 = RVar9 | (int)((uVar16 & 0xffffffff) << 0x18) - 0x1000000;
          }
          RVar9 = (RsxCmd)uVar8;
          if ((uint)uVar10 >> 8 != 0) {
            do {
              pRVar11 = pRVar5->command;
              RVar4 = (RsxCmd)uVar8;
              uVar12 = uVar12 - 1;
              uVar8 = uVar8 + 0x100;
              RVar9 = (RsxCmd)uVar8;
              pRVar5->command = pRVar11 + 1;
              *pRVar11 = RVar4 | 0xff000000;
            } while (0 < (int)uVar12);
          }
          if (iVar15 != 0) {
            pRVar11 = pRVar5->command;
            pRVar5->command = pRVar11 + 1;
            *pRVar11 = RVar9 | (int)((uVar13 & 0xffffffff) << 0x18) - 0x1000000;
          }
          pRVar5 = ForwardPass;
          uVar18 = uVar18 + 1;
          *ForwardPass->command = NV4097_SET_BEGIN_END_x1;
          pRVar5->command[1] = 0;
          pRVar5->command = pRVar5->command + 2;
          puVar3 = puVar3 + 8;
        } while (uVar18 < puVar1[1]);
      }
      uVar19 = uVar19 + 1;
      iVar17 = iVar17 + 4;
    } while (uVar19 < *(ushort *)(param_1 + 6));
  }
  pRVar5 = ForwardPass;
  auVar24 = *(undefined1 (*) [16])(iVar7 + 0xe0U & 0xfffffff0);
  auVar26 = *(undefined1 (*) [16])(iVar7 + 0x100U & 0xfffffff0);
  auVar27 = *(undefined1 (*) [16])(iVar7 + 0xf0U & 0xfffffff0);
  auVar23 = vectorMergeHighWord(auVar24,auVar26);
  auVar32 = *(undefined1 (*) [16])(iVar7 + 0x110U & 0xfffffff0);
  auVar24 = vectorMergeLowWord(auVar24,auVar26);
  auVar26 = vectorMergeHighWord(auVar27,auVar32);
  auVar27 = vectorMergeLowWord(auVar27,auVar32);
  pRVar14 = local_a0;
  lVar21 = 8;
  vectorMergeHighWord(auVar23,auVar26);
  vectorMergeLowWord(auVar23,auVar26);
  vectorMergeHighWord(auVar24,auVar27);
  vectorMergeLowWord(auVar24,auVar27);
  *ForwardPass->command = 0x441efc;
  pRVar5->command[1] = 0;
  pRVar11 = pRVar5->command + 2;
  pRVar5->command = pRVar11;
  do {
    *pRVar11 = *pRVar14;
    pRVar11 = pRVar5->command;
    pRVar5->command = pRVar11 + 1;
    pRVar2 = pRVar14 + 1;
    pRVar14 = pRVar14 + 2;
    pRVar11[1] = *pRVar2;
    pRVar11 = pRVar5->command + 1;
    pRVar5->command = pRVar11;
    pRVar6 = ForwardPass;
    lVar21 = lVar21 + -1;
  } while (lVar21 != 0);
  *ForwardPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar6->command[1] = 2;
  pRVar6->command = pRVar6->command + 2;
  pRVar5 = ForwardPass;
  *ForwardPass->command = 0x41744;
  pRVar5->command[1] = 2;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = ForwardPass;
  *ForwardPass->command = 0x41748;
  pRVar5->command[1] = 2;
  pRVar5->command = pRVar5->command + 2;
  idol_draw::RsxCmd_WritePass(ForwardPass);
  return;
}


// 0x050a4ec (0x2c bytes)
void FUN_0050a4ec(int param_1)

{
  if (*(int *)(param_1 + 0x4850) != 0) {
    FUN_00509d60();
  }
  return;
}


// 0x050a538 (0x82c bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void idol_draw::DrawSkyShell
               (SKY *sky,longlong id,undefined8 param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  void *pvVar1;
  ushort *puVar2;
  ushort *puVar3;
  RsxCmd RVar4;
  RenderingStep *pRVar5;
  RenderingStep *pRVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  RsxCmd *pRVar11;
  ulonglong uVar10;
  RsxCmd RVar12;
  ulonglong uVar13;
  RsxCmd *pRVar16;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  
  iVar7 = g_viewMtxPtr;
  uVar8 = ZEXT48(&stack0x00000000);
  auVar23 = ZEXT416(0);
  auVar39 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
  auVar48 = loadVectorLeftIndexed(0x40,uVar8);
  auVar23 = loadVectorLeftIndexed(0x48,uVar8);
  auVar47 = loadVectorLeftIndexed(0x44,uVar8);
  auVar25 = loadVectorLeftIndexed(0x58,uVar8);
  auVar46 = loadVectorLeftIndexed(0x50,uVar8);
  auVar28 = loadVectorLeftIndexed(0x68,uVar8);
  auVar45 = loadVectorLeftIndexed(0x60,uVar8);
  auVar43 = loadVectorLeftIndexed(0x54,uVar8);
  auVar41 = loadVectorLeftIndexed(100,uVar8);
  auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar44 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
  auVar23 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar42 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
  auVar23 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar40 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  uStack00000058 = param_6;
  uStack00000060 = param_7;
  uStack00000068 = param_8;
  BindVertexProgram(g_viewMtxPtr,ForwardPass,3);
  BindFragmentProgram(iVar7,ForwardPass,10);
  pRVar5 = ForwardPass;
  *ForwardPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar5->command[1] = 0x1832;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = ForwardPass;
  *ForwardPass->command = 0x41744;
  pRVar5->command[1] = 0x1822;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = ForwardPass;
  *ForwardPass->command = 0x41748;
  pRVar5->command[1] = 0x1844;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = ForwardPass;
  pvVar1 = sky->vtx_data;
  *ForwardPass->command = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
  pRVar5->command[1] = (uint)pvVar1 | 0x80000000;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = ForwardPass;
  pvVar1 = sky->vtx_data;
  *ForwardPass->command = 0x41684;
  pRVar5->command[1] = (int)pvVar1 + 0xc | 0x80000000;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = ForwardPass;
  pvVar1 = sky->vtx_data;
  *ForwardPass->command = 0x41688;
  pRVar5->command[1] = (int)pvVar1 + 0x14 | 0x80000000;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = ForwardPass;
  pvVar1 = sky->idx_data;
  *ForwardPass->command = NV4097_SET_INDEX_ARRAY_ADDRESS_x2;
  pRVar5->command[1] = (RsxCmd)pvVar1;
  pRVar5->command[2] = 0x11;
  pRVar5->command = pRVar5->command + 3;
  pRVar5 = ForwardPass;
  auVar24 = *(undefined1 (*) [16])(iVar7 + 0xa0U & 0xfffffff0);
  auVar26 = *(undefined1 (*) [16])(iVar7 + 0xb0U & 0xfffffff0);
  auVar23 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar32 = *(undefined1 (*) [16])(iVar7 + 0xc0U & 0xfffffff0);
  auVar25 = auVar24 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar34 = *(undefined1 (*) [16])(iVar7 + 0x60U & 0xfffffff0);
  auVar35 = *(undefined1 (*) [16])(iVar7 + 0x70U & 0xfffffff0);
  auVar29 = vectorMultiplyAddFloatingPoint
                      (auVar34,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,auVar39
                      );
  auVar30 = vectorMultiplyAddFloatingPoint
                      (auVar35,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,auVar39
                      );
  auVar31 = vectorLogicalAnd(*(undefined1 (*) [16])(iVar7 + 0xd0U & 0xfffffff0),_DAT_0050a520);
  auVar23 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar25 = auVar26 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar28 = auVar24 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar24 = auVar24 & (GPiece<16>)0xffffffff;
  auVar33 = vectorMultiplyAddFloatingPoint
                      (auVar34,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,auVar39
                      );
  auVar23 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar36 = vectorMultiplyAddFloatingPoint
                      (auVar35,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,auVar39
                      );
  auVar25 = auVar32 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar21 = *(undefined1 (*) [16])(iVar7 + 0x80U & 0xfffffff0);
  auVar22 = *(undefined1 (*) [16])(iVar7 + 0x90U & 0xfffffff0);
  auVar27 = auVar26 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar26 = auVar26 & (GPiece<16>)0xffffffff;
  auVar29 = vectorMultiplyAddFloatingPoint
                      (auVar21,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,auVar29
                      );
  auVar24 = vectorMultiplyAddFloatingPoint
                      (auVar22,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,auVar30
                      );
  auVar37 = vectorMultiplyAddFloatingPoint
                      (auVar34,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,auVar39
                      );
  auVar23 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar28 = auVar31 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar38 = vectorMultiplyAddFloatingPoint
                      (auVar35,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,auVar39
                      );
  auVar30 = vectorMultiplyAddFloatingPoint
                      (auVar34,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,auVar39
                      );
  auVar35 = vectorMultiplyAddFloatingPoint
                      (auVar35,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,auVar39
                      );
  auVar34 = vectorMultiplyAddFloatingPoint
                      (auVar21,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,auVar33
                      );
  auVar23 = auVar32 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar27 = vectorMultiplyAddFloatingPoint
                      (auVar22,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,auVar36
                      );
  auVar32 = auVar32 & (GPiece<16>)0xffffffff;
  auVar25 = auVar31 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar31 = auVar31 & (GPiece<16>)0xffffffff;
  auVar26 = vectorAddFloatingPoint(auVar29,auVar24);
  auVar29 = vectorMultiplyAddFloatingPoint
                      (auVar21,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,auVar37
                      );
  auVar33 = vectorMultiplyAddFloatingPoint
                      (auVar22,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,auVar38
                      );
  auVar23 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar28 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar21 = vectorMultiplyAddFloatingPoint
                      (auVar21,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,auVar30
                      );
  auVar22 = vectorMultiplyAddFloatingPoint
                      (auVar22,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,auVar35
                      );
  auVar25 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar32 = vectorAddFloatingPoint(auVar34,auVar27);
  auVar24 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar27 = auVar48 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar30 = vectorMultiplyAddFloatingPoint
                      (auVar26,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,auVar39
                      );
  auVar31 = vectorAddFloatingPoint(auVar29,auVar33);
  auVar25 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar29 = vectorMultiplyAddFloatingPoint
                      (auVar26,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,auVar39
                      );
  auVar27 = vectorAddFloatingPoint(auVar21,auVar22);
  auVar24 = vectorMultiplyAddFloatingPoint
                      (auVar32,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,auVar39
                      );
  auVar22 = vectorMultiplyAddFloatingPoint
                      (auVar32,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,auVar39
                      );
  auVar33 = vectorMultiplyAddFloatingPoint
                      (auVar26,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,auVar39
                      );
  auVar21 = vectorMultiplyAddFloatingPoint
                      (auVar32,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,auVar39
                      );
  auVar25 = vectorMultiplyAddFloatingPoint(auVar26,auVar39,auVar39);
  auVar28 = vectorMultiplyAddFloatingPoint(auVar32,auVar39,auVar39);
  auVar23 = loadVectorLeftIndexed(0x10,0x50a520);
  auVar30 = vectorMultiplyAddFloatingPoint(auVar31,auVar42,auVar30);
  auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar32 = vectorMultiplyAddFloatingPoint(auVar31,auVar44,auVar29);
  auVar24 = vectorMultiplyAddFloatingPoint(auVar27,auVar39,auVar24);
  auVar22 = vectorMultiplyAddFloatingPoint(auVar27,auVar39,auVar22);
  auVar29 = vectorMultiplyAddFloatingPoint(auVar31,auVar40,auVar33);
  auVar26 = vectorMultiplyAddFloatingPoint(auVar27,auVar39,auVar21);
  auVar25 = vectorMultiplyAddFloatingPoint(auVar31,auVar39,auVar25);
  auVar23 = vectorMultiplyAddFloatingPoint
                      (auVar27,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,auVar28
                      );
  lVar20 = 8;
  auVar24 = vectorAddFloatingPoint(auVar30,auVar24);
  auVar28 = vectorAddFloatingPoint(auVar32,auVar22);
  auVar27 = vectorAddFloatingPoint(auVar29,auVar26);
  auVar23 = vectorAddFloatingPoint(auVar25,auVar23);
  auVar25 = vectorMergeHighWord(auVar28,auVar27);
  auVar28 = vectorMergeLowWord(auVar28,auVar27);
  auVar27 = vectorMergeHighWord(auVar24,auVar23);
  auVar23 = vectorMergeLowWord(auVar24,auVar23);
  vectorMergeHighWord(auVar25,auVar27);
  vectorMergeLowWord(auVar25,auVar27);
  vectorMergeHighWord(auVar28,auVar23);
  vectorMergeLowWord(auVar28,auVar23);
  lVar9 = uVar8 - 0x160;
  *ForwardPass->command = 0x441efc;
  pRVar5->command[1] = 0;
  pRVar16 = pRVar5->command + 2;
  pRVar5->command = pRVar16;
  do {
    pRVar11 = (RsxCmd *)lVar9;
    *pRVar16 = *pRVar11;
    pRVar16 = pRVar5->command;
    pRVar5->command = pRVar16 + 1;
    lVar9 = lVar9 + 8;
    pRVar16[1] = pRVar11[1];
    pRVar16 = pRVar5->command + 1;
    pRVar5->command = pRVar16;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  puVar2 = *(ushort **)((int)sky->shells + (int)(id << 2));
  if ((*puVar2 & 1) == 0) {
    BindFragmentProgram(iVar7,ForwardPass,9);
  }
  if (puVar2[1] != 0) {
    uVar19 = 0;
    puVar3 = puVar2;
    do {
      FUN_004d6bb0(ForwardPass,0,*(undefined4 *)(puVar3 + 8));
      pRVar5 = ForwardPass;
      *ForwardPass->command = 0x400c1714;
      pRVar5->command[1] = 0;
      pRVar5->command[2] = 0;
      pRVar5->command[3] = 0;
      pRVar5->command[4] = NV4097_SET_BEGIN_END_x1;
      pRVar5->command[5] = 5;
      pRVar5->command = pRVar5->command + 6;
      pRVar5 = ForwardPass;
      RVar12 = *(RsxCmd *)(puVar3 + 10);
      uVar10 = (ulonglong)RVar12;
      lVar9 = 0x100 - ((ulonglong)RVar12 & 0xff);
      uVar14 = (ulonglong)*(uint *)(puVar3 + 0xc) - lVar9;
      uVar18 = lVar9 + (uVar14 & (longlong)((int)uVar14 >> 0x1f));
      uVar13 = *(uint *)(puVar3 + 0xc) - uVar18;
      pRVar16 = ForwardPass->command;
      uVar13 = uVar13 & ~(longlong)((int)uVar13 >> 0x1f);
      uVar15 = uVar13 - (uVar13 & 0xffffff00);
      uVar14 = (uVar13 << 0x20) >> 0x28;
      iVar17 = (int)uVar15;
      ForwardPass->command = pRVar16 + 1;
      *pRVar16 = (((uint)uVar13 >> 8) + ((iVar17 != 0)) +
                 (((int)uVar18 != 0))) * 0x40000 | 0x40001824;
      if ((int)uVar18 != 0) {
        pRVar16 = pRVar5->command;
        uVar10 = uVar18 + uVar10;
        pRVar5->command = pRVar16 + 1;
        *pRVar16 = RVar12 | (int)((uVar18 & 0xffffffff) << 0x18) - 0x1000000;
      }
      RVar12 = (RsxCmd)uVar10;
      if ((uint)uVar13 >> 8 != 0) {
        do {
          pRVar16 = pRVar5->command;
          RVar4 = (RsxCmd)uVar10;
          uVar14 = uVar14 - 1;
          uVar10 = uVar10 + 0x100;
          RVar12 = (RsxCmd)uVar10;
          pRVar5->command = pRVar16 + 1;
          *pRVar16 = RVar4 | 0xff000000;
        } while (0 < (int)uVar14);
      }
      if (iVar17 != 0) {
        pRVar16 = pRVar5->command;
        pRVar5->command = pRVar16 + 1;
        *pRVar16 = RVar12 | (int)((uVar15 & 0xffffffff) << 0x18) - 0x1000000;
      }
      pRVar5 = ForwardPass;
      uVar19 = uVar19 + 1;
      *ForwardPass->command = NV4097_SET_BEGIN_END_x1;
      pRVar5->command[1] = 0;
      pRVar5->command = pRVar5->command + 2;
      puVar3 = puVar3 + 8;
    } while (uVar19 < puVar2[1]);
  }
  pRVar5 = ForwardPass;
  auVar23 = *(undefined1 (*) [16])(iVar7 + 0xe0U & 0xfffffff0);
  auVar25 = *(undefined1 (*) [16])(iVar7 + 0x100U & 0xfffffff0);
  auVar28 = *(undefined1 (*) [16])(iVar7 + 0xf0U & 0xfffffff0);
  auVar24 = vectorMergeHighWord(auVar23,auVar25);
  auVar27 = *(undefined1 (*) [16])(iVar7 + 0x110U & 0xfffffff0);
  auVar23 = vectorMergeLowWord(auVar23,auVar25);
  auVar25 = vectorMergeHighWord(auVar28,auVar27);
  auVar28 = vectorMergeLowWord(auVar28,auVar27);
  lVar9 = uVar8 - 0x120;
  lVar20 = 8;
  vectorMergeHighWord(auVar24,auVar25);
  vectorMergeLowWord(auVar24,auVar25);
  vectorMergeHighWord(auVar23,auVar28);
  vectorMergeLowWord(auVar23,auVar28);
  *ForwardPass->command = 0x441efc;
  pRVar5->command[1] = 0;
  pRVar16 = pRVar5->command + 2;
  pRVar5->command = pRVar16;
  do {
    pRVar11 = (RsxCmd *)lVar9;
    *pRVar16 = *pRVar11;
    pRVar16 = pRVar5->command;
    pRVar5->command = pRVar16 + 1;
    lVar9 = lVar9 + 8;
    pRVar16[1] = pRVar11[1];
    pRVar16 = pRVar5->command + 1;
    pRVar5->command = pRVar16;
    pRVar6 = ForwardPass;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  *ForwardPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar6->command[1] = 2;
  pRVar6->command = pRVar6->command + 2;
  pRVar5 = ForwardPass;
  *ForwardPass->command = 0x41744;
  pRVar5->command[1] = 2;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = ForwardPass;
  *ForwardPass->command = 0x41748;
  pRVar5->command[1] = 2;
  pRVar5->command = pRVar5->command + 2;
  return;
}


// 0x050ad78 (0x314 bytes)
void FUN_0050ad78(undefined4 *param_1,int param_2,int *param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  int *piVar6;
  int *piVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  int *piVar17;
  float *pfVar18;
  float fVar19;
  
  iVar4 = g_viewMtxPtr;
  piVar6 = (int *)idol::AllocateMemAlign
                            (FrameHeap,(ulonglong)*(ushort *)((int)param_1 + 6) << 4,0x10);
  piVar7 = (int *)idol::AllocateMemAlign(FrameHeap,param_2 << 5,0x10);
  cVar5 = DAT_0159c364;
  iVar9 = 0;
  pfVar8 = (float *)*param_1;
  iVar10 = 0;
  uVar1 = *(ushort *)((int)param_1 + 6);
  iVar11 = 0;
  param_3[1] = (int)piVar6;
  *param_3 = 0;
  param_3[3] = (int)piVar7;
  param_3[2] = 0;
  if (cVar5 == '\0') {
    uVar13 = 0;
    uVar12 = 0xffffffff;
    if (uVar1 != 0) {
      do {
        iVar14 = 0;
        pfVar18 = (float *)&DAT_00a245a8;
        do {
          if (pfVar18[1] * pfVar8[1] + pfVar18[2] * pfVar8[2] + *pfVar18 * *pfVar8 + pfVar18[3] +
              ABS(pfVar8[3]) < 0.0) goto LAB_0050b04c;
          iVar14 = iVar14 + 1;
          pfVar18 = pfVar18 + 4;
        } while (iVar14 < 6);
        if ((PTR_DAT_00902e98.piece<0,1>() == '\0') ||
           (uVar15 = ((*(ushort *)((int)pfVar8 + 0x1e) & 0xff &
                                   (uint)*(byte *)(*(int *)(iVar4 + 0x41c) +
                                                  (uint)(*(ushort *)((int)pfVar8 + 0x1e) >> 8))) == 0), uVar3 = (uVar15 == 0),
           uVar3 + ((uint)(ZERO_MASK((uint)DAT_01593350)) & uVar15 - uVar3) == 0))
        {
          uVar2 = *(ushort *)((int)pfVar8 + 0x22);
          if (uVar2 != uVar12) {
            iVar11 = *(int *)(iVar4 + 0x4a8);
            iVar9 = iVar11 + param_1[uVar2 + 6];
            iVar10 = iVar11 + param_1[uVar2 + 2];
            iVar11 = iVar11 + param_1[uVar2 + 0x12];
            uVar12 = (uint)uVar2;
          }
          piVar6[1] = iVar9 + (uint)*(ushort *)(pfVar8 + 6) * 4;
          fVar19 = 0.0;
          *piVar6 = iVar10 + (uint)*(ushort *)(pfVar8 + 6) * 0x20 +
                             (uint)*(ushort *)(pfVar8 + 6) * -4;
          piVar6[2] = iVar11 + (uint)*(ushort *)(pfVar8 + 6) * 4;
          *(undefined2 *)((int)piVar6 + 0xe) = *(undefined2 *)(pfVar8 + 7);
          *(undefined2 *)(piVar6 + 3) = *(undefined2 *)((int)pfVar8 + 0x1a);
          piVar6 = piVar6 + 4;
          *param_3 = *param_3 + 1;
          piVar16 = (int *)pfVar8[4];
          piVar17 = piVar7;
          if (pfVar8[5] != 0.0) {
            do {
              if (piVar16[2] != 0) {
                iVar14 = *piVar16;
                *(char *)(piVar7 + 1) = (char)uVar12;
                *piVar7 = iVar14;
                *(undefined1 *)((int)piVar7 + 5) = *(undefined1 *)(piVar16 + 3);
                piVar7[2] = piVar16[1];
                *(short *)(piVar7 + 3) = (short)piVar16[2];
                if (*(char *)(*piVar16 + 0x20) != -1) {
                  *(char *)(piVar7 + 1) = (char)uVar12;
                }
                piVar7 = piVar17 + 4;
                param_3[2] = param_3[2] + 1;
                piVar17 = piVar7;
              }
              fVar19 = (float)((int)fVar19 + 1);
              piVar16 = piVar16 + 4;
            } while ((uint)fVar19 < (uint)pfVar8[5]);
          }
        }
LAB_0050b04c:
        uVar13 = uVar13 + 1;
        pfVar8 = pfVar8 + 0xc;
      } while (uVar13 < uVar1);
    }
  }
  return;
}


// 0x050b08c (0x30 bytes)
void FUN_0050b08c(int param_1,undefined8 param_2)

{
  FUN_0050ad78(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),param_2);
  return;
}


