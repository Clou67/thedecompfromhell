// idol/tiefunc.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 24 functions, 0x50c5e0-0x50e7f8
#include "idol/tiefunc.h"
#include "game/draw.h"
#include "idol/mUnk.h"
#include "idol/mathfunc.h"
#include "sdk/libgcm_cmd/marker.h"

// 0x050c5e0 (0xc24 bytes)
// strings: 0065fb7c: 'Tie'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void DrawTie(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  RsxCmd *pRVar3;
  RsxCmd RVar4;
  bool bVar5;
  RenderingStep *pRVar6;
  RenderingStep *pRVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  RsxCmd RVar11;
  RsxCmd *pRVar13;
  uint uVar14;
  RsxCmd *pRVar15;
  ulonglong uVar12;
  ulonglong uVar16;
  RsxCmd *pRVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int *piVar22;
  ulonglong uVar23;
  int iVar24;
  undefined8 in_LR;
  longlong lVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  RsxCmd local_f0 [24];
  
  if ((param_2[2] != 0) && (DAT_0159c369 == '\0')) {
    idol_draw::RsxCmd_DebugStr_Marker(ForwardPass,"Tie");
    idol_draw::RsxCmd_DebugStr_Marker(DepthPass,"Tie");
    idol_draw::Insert_WaitCmd_Marker(&DAT_01111700,DepthPass,1);
    uVar8 = g_pIdolDraw;
    pRVar7 = ForwardPass;
    pRVar15 = (RsxCmd *)(*(int *)(param_1 + 0x18) + 0x10);
    lVar25 = 2;
    *ForwardPass->command = NV4097_SET_TRANSFORM_CONSTANT_LOAD_x5;
    pRVar7->command[1] = 0x14;
    pRVar13 = pRVar7->command + 2;
    pRVar7->command = pRVar13;
    do {
      *pRVar13 = *pRVar15;
      pRVar13 = pRVar7->command;
      pRVar7->command = pRVar13 + 1;
      pRVar17 = pRVar15 + 1;
      pRVar15 = pRVar15 + 2;
      pRVar13[1] = *pRVar17;
      pRVar13 = pRVar7->command + 1;
      pRVar7->command = pRVar13;
      pRVar6 = DepthPass;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    *DepthPass->command = NV4097_SET_ALPHA_FUNC_x2;
    pRVar6->command[1] = 0x206;
    pRVar6->command[2] = 0xff;
    pRVar6->command = pRVar6->command + 3;
    pRVar7 = DepthPass;
    *DepthPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    pRVar7->command[1] = 1;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = ForwardPass;
    *ForwardPass->command = NV4097_SET_ALPHA_FUNC_x2;
    pRVar7->command[1] = 0x206;
    pRVar7->command[2] = 1;
    pRVar7->command = pRVar7->command + 3;
    pRVar7 = ForwardPass;
    *ForwardPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    pRVar7->command[1] = 1;
    pRVar7->command = pRVar7->command + 2;
    idol_draw::BindVertexProgram(uVar8,ForwardPass,5);
    idol_draw::BindFragmentProgram(uVar8,ForwardPass,6);
    pRVar7 = ForwardPass;
    *ForwardPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar7->command[1] = 0x1832;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = ForwardPass;
    uVar19 = 0;
    iVar18 = -1;
    *ForwardPass->command = 0x41744;
    pRVar7->command[1] = 0x822;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = ForwardPass;
    *ForwardPass->command = 0x4174c;
    pRVar7->command[1] = 0x444;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = DepthPass;
    *DepthPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar7->command[1] = 0x1832;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = DepthPass;
    *DepthPass->command = 0x41744;
    pRVar7->command[1] = 0x822;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = DepthPass;
    *DepthPass->command = 0x4174c;
    pRVar7->command[1] = 0x444;
    pRVar7->command = pRVar7->command + 2;
    uVar1 = param_2[2];
    if (uVar1 != 0) {
      iVar21 = 0;
      iVar20 = 0;
      do {
        pRVar7 = ForwardPass;
        uVar14 = param_2[1] + iVar20;
        iVar24 = *(int *)(*param_2 + iVar21);
        iVar2 = *(int *)(iVar24 + 0x6c);
        if (*(int *)(iVar24 + 0x50) != iVar18) {
          RVar11 = *(RsxCmd *)(iVar2 + 0x10);
          *ForwardPass->command = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
          pRVar7->command[1] = RVar11 | 0x80000000;
          pRVar7->command = pRVar7->command + 2;
          pRVar7 = ForwardPass;
          RVar11 = *(RsxCmd *)(iVar2 + 0x14);
          *ForwardPass->command = 0x41684;
          pRVar7->command[1] = RVar11 | 0x80000000;
          pRVar7->command = pRVar7->command + 2;
          pRVar7 = ForwardPass;
          RVar11 = *(RsxCmd *)(iVar2 + 0x18);
          *ForwardPass->command = NV4097_SET_INDEX_ARRAY_ADDRESS_x2;
          pRVar7->command[1] = RVar11;
          pRVar7->command[2] = 0x11;
          pRVar7->command = pRVar7->command + 3;
          pRVar7 = DepthPass;
          RVar11 = *(RsxCmd *)(iVar2 + 0x10);
          *DepthPass->command = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
          pRVar7->command[1] = RVar11 | 0x80000000;
          pRVar7->command = pRVar7->command + 2;
          pRVar7 = DepthPass;
          RVar11 = *(RsxCmd *)(iVar2 + 0x14);
          *DepthPass->command = 0x41684;
          pRVar7->command[1] = RVar11 | 0x80000000;
          pRVar7->command = pRVar7->command + 2;
          pRVar7 = DepthPass;
          RVar11 = *(RsxCmd *)(iVar2 + 0x18);
          *DepthPass->command = NV4097_SET_INDEX_ARRAY_ADDRESS_x2;
          pRVar7->command[1] = RVar11;
          pRVar7->command[2] = 0x11;
          pRVar7->command = pRVar7->command + 3;
          iVar18 = *(int *)(iVar24 + 0x50);
        }
        pRVar7 = ForwardPass;
        auVar26 = *(undefined1 (*) [16])(uVar14 + 0x10 & 0xfffffff0);
        auVar27 = loadVectorLeftIndexed(in_LR,0x50c5b0);
        auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar29 = *(undefined1 (*) [16])(uVar14 + 0x20 & 0xfffffff0);
        auVar30 = vectorMergeHighWord(*(undefined1 (*) [16])(uVar14 & 0xfffffff0),auVar29);
        auVar28 = vectorPermute(*(undefined1 (*) [16])(uVar14 + 0x30 & 0xfffffff0),
                                auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,
                                _DAT_0050c5c0);
        auVar27 = vectorMergeLowWord(*(undefined1 (*) [16])(uVar14 & 0xfffffff0),auVar29);
        auVar29 = vectorMergeHighWord(auVar26,auVar28);
        auVar26 = vectorMergeLowWord(auVar26,auVar28);
        lVar25 = 8;
        vectorMergeHighWord(auVar30,auVar29);
        vectorMergeLowWord(auVar30,auVar29);
        vectorMergeHighWord(auVar27,auVar26);
        auVar27 = vectorMergeLowWord(auVar27,auVar26);
        vectorLogicalAnd(auVar27,_DAT_0050c5d0);
        pRVar13 = local_f0;
        *ForwardPass->command = 0x441efc;
        pRVar7->command[1] = 4;
        pRVar17 = pRVar7->command + 2;
        pRVar7->command = pRVar17;
        pRVar15 = pRVar13;
        do {
          *pRVar17 = *pRVar15;
          pRVar17 = pRVar7->command;
          pRVar7->command = pRVar17 + 1;
          pRVar3 = pRVar15 + 1;
          pRVar15 = pRVar15 + 2;
          pRVar17[1] = *pRVar3;
          pRVar17 = pRVar7->command + 1;
          pRVar7->command = pRVar17;
          pRVar6 = DepthPass;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 8;
        *DepthPass->command = 0x441efc;
        pRVar6->command[1] = 4;
        pRVar15 = pRVar6->command + 2;
        pRVar6->command = pRVar15;
        do {
          *pRVar15 = *pRVar13;
          pRVar15 = pRVar6->command;
          pRVar6->command = pRVar15 + 1;
          pRVar17 = pRVar13 + 1;
          pRVar13 = pRVar13 + 2;
          pRVar15[1] = *pRVar17;
          pRVar15 = pRVar6->command + 1;
          pRVar6->command = pRVar15;
          pRVar7 = ForwardPass;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        if (DAT_0159c36a == '\0') {
          RVar11 = *(RsxCmd *)(iVar24 + 100);
          *ForwardPass->command = 0x4168c;
          pRVar7->command[1] = RVar11 | 0x80000000;
          pRVar7->command = pRVar7->command + 2;
          pRVar7 = DepthPass;
          RVar11 = *(RsxCmd *)(iVar24 + 100);
          *DepthPass->command = 0x4168c;
          pRVar7->command[1] = RVar11 | 0x80000000;
          pRVar7->command = pRVar7->command + 2;
        }
        else {
          RVar11 = *(RsxCmd *)(iVar24 + 0x60);
          *ForwardPass->command = 0x4168c;
          pRVar7->command[1] = RVar11 | 0x80000000;
          pRVar7->command = pRVar7->command + 2;
          pRVar7 = DepthPass;
          RVar11 = *(RsxCmd *)(iVar24 + 0x60);
          *DepthPass->command = 0x4168c;
          pRVar7->command[1] = RVar11 | 0x80000000;
          pRVar7->command = pRVar7->command + 2;
        }
        pRVar7 = ForwardPass;
        uVar14 = 0;
        bVar5 = false;
        *ForwardPass->command = NV4097_SET_DEPTH_MASK_x1;
        pRVar7->command[1] = 0;
        pRVar7->command = pRVar7->command + 2;
        piVar22 = *(int **)(iVar2 + 0x1c);
        if (*(short *)(iVar2 + 0x28) != 0) {
          do {
            pRVar7 = ForwardPass;
            iVar24 = *piVar22;
            if (*(char *)(iVar24 + 0x20) == -1) {
              if (!bVar5) {
                *ForwardPass->command = NV4097_SET_DEPTH_MASK_x1;
                pRVar7->command[1] = 1;
                pRVar7->command = pRVar7->command + 2;
              }
              bVar5 = true;
            }
            else {
              if (bVar5) {
                *ForwardPass->command = NV4097_SET_DEPTH_MASK_x1;
                pRVar7->command[1] = 0;
                pRVar7->command = pRVar7->command + 2;
                iVar24 = *piVar22;
              }
              FUN_004d676c(DepthPass,0,iVar24,(ulonglong)*(byte *)((int)piVar22 + 0x17) & 3,
                           ((ulonglong)*(byte *)((int)piVar22 + 0x17) << 0x20) >> 0x22 & 3);
              pRVar7 = DepthPass;
              *DepthPass->command = 0x400c1714;
              pRVar7->command[1] = 0;
              pRVar7->command[2] = 0;
              pRVar7->command[3] = 0;
              pRVar7->command[4] = NV4097_SET_BEGIN_END_x1;
              pRVar7->command[5] = 5;
              pRVar7->command = pRVar7->command + 6;
              pRVar7 = DepthPass;
              RVar11 = piVar22[2];
              uVar10 = (ulonglong)RVar11;
              lVar25 = 0x100 - ((ulonglong)RVar11 & 0xff);
              uVar12 = (ulonglong)(uint)piVar22[3] - lVar25;
              pRVar15 = DepthPass->command;
              uVar16 = lVar25 + (uVar12 & (longlong)((int)uVar12 >> 0x1f));
              uVar9 = (uint)piVar22[3] - uVar16;
              uVar9 = uVar9 & ~(longlong)((int)uVar9 >> 0x1f);
              uVar23 = uVar9 - (uVar9 & 0xffffff00);
              uVar12 = (uVar9 << 0x20) >> 0x28;
              iVar24 = (int)uVar23;
              DepthPass->command = pRVar15 + 1;
              *pRVar15 = (((uint)uVar9 >> 8) + ((iVar24 != 0)) +
                         (((int)uVar16 != 0))) * 0x40000 | 0x40001824;
              if ((int)uVar16 != 0) {
                pRVar15 = pRVar7->command;
                uVar10 = uVar16 + uVar10;
                pRVar7->command = pRVar15 + 1;
                *pRVar15 = RVar11 | (int)((uVar16 & 0xffffffff) << 0x18) - 0x1000000;
              }
              RVar11 = (RsxCmd)uVar10;
              if ((uint)uVar9 >> 8 != 0) {
                do {
                  pRVar15 = pRVar7->command;
                  RVar4 = (RsxCmd)uVar10;
                  uVar12 = uVar12 - 1;
                  uVar10 = uVar10 + 0x100;
                  RVar11 = (RsxCmd)uVar10;
                  pRVar7->command = pRVar15 + 1;
                  *pRVar15 = RVar4 | 0xff000000;
                } while (0 < (int)uVar12);
              }
              if (iVar24 != 0) {
                pRVar15 = pRVar7->command;
                pRVar7->command = pRVar15 + 1;
                *pRVar15 = RVar11 | (int)((uVar23 & 0xffffffff) << 0x18) - 0x1000000;
              }
              pRVar7 = DepthPass;
              bVar5 = false;
              *DepthPass->command = NV4097_SET_BEGIN_END_x1;
              pRVar7->command[1] = 0;
              pRVar7->command = pRVar7->command + 2;
            }
            FUN_004d676c(ForwardPass,0,*piVar22,(ulonglong)*(byte *)((int)piVar22 + 0x17) & 3,
                         ((ulonglong)*(byte *)((int)piVar22 + 0x17) << 0x20) >> 0x22 & 3);
            pRVar7 = ForwardPass;
            *ForwardPass->command = 0x400c1714;
            pRVar7->command[1] = 0;
            pRVar7->command[2] = 0;
            pRVar7->command[3] = 0;
            pRVar7->command[4] = NV4097_SET_BEGIN_END_x1;
            pRVar7->command[5] = 5;
            pRVar7->command = pRVar7->command + 6;
            pRVar7 = ForwardPass;
            RVar11 = piVar22[2];
            uVar10 = (ulonglong)RVar11;
            lVar25 = 0x100 - ((ulonglong)RVar11 & 0xff);
            uVar12 = (ulonglong)(uint)piVar22[3] - lVar25;
            pRVar15 = ForwardPass->command;
            uVar16 = lVar25 + (uVar12 & (longlong)((int)uVar12 >> 0x1f));
            uVar9 = (uint)piVar22[3] - uVar16;
            uVar9 = uVar9 & ~(longlong)((int)uVar9 >> 0x1f);
            uVar23 = uVar9 - (uVar9 & 0xffffff00);
            uVar12 = (uVar9 << 0x20) >> 0x28;
            iVar24 = (int)uVar23;
            ForwardPass->command = pRVar15 + 1;
            *pRVar15 = (((uint)uVar9 >> 8) + ((iVar24 != 0)) +
                       (((int)uVar16 != 0))) * 0x40000 | 0x40001824;
            if ((int)uVar16 != 0) {
              pRVar15 = pRVar7->command;
              uVar10 = uVar16 + uVar10;
              pRVar7->command = pRVar15 + 1;
              *pRVar15 = RVar11 | (int)((uVar16 & 0xffffffff) << 0x18) - 0x1000000;
            }
            RVar11 = (RsxCmd)uVar10;
            if ((uint)uVar9 >> 8 != 0) {
              do {
                pRVar15 = pRVar7->command;
                RVar4 = (RsxCmd)uVar10;
                uVar12 = uVar12 - 1;
                uVar10 = uVar10 + 0x100;
                RVar11 = (RsxCmd)uVar10;
                pRVar7->command = pRVar15 + 1;
                *pRVar15 = RVar4 | 0xff000000;
              } while (0 < (int)uVar12);
            }
            if (iVar24 != 0) {
              pRVar15 = pRVar7->command;
              pRVar7->command = pRVar15 + 1;
              *pRVar15 = RVar11 | (int)((uVar23 & 0xffffffff) << 0x18) - 0x1000000;
            }
            pRVar7 = ForwardPass;
            uVar14 = uVar14 + 1;
            piVar22 = piVar22 + 6;
            *ForwardPass->command = NV4097_SET_BEGIN_END_x1;
            pRVar7->command[1] = 0;
            pRVar7->command = pRVar7->command + 2;
          } while (uVar14 < *(ushort *)(iVar2 + 0x28));
        }
        uVar19 = uVar19 + 1;
        iVar21 = iVar21 + 4;
        iVar20 = iVar20 + 0x50;
      } while (uVar19 < uVar1);
    }
    pRVar7 = ForwardPass;
    *ForwardPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar7->command[1] = 2;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = ForwardPass;
    *ForwardPass->command = 0x41744;
    pRVar7->command[1] = 2;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = ForwardPass;
    *ForwardPass->command = 0x4174c;
    pRVar7->command[1] = 2;
    pRVar7->command = pRVar7->command + 2;
    idol_draw::RsxCmd_WritePass(ForwardPass);
    pRVar7 = DepthPass;
    *DepthPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar7->command[1] = 2;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = DepthPass;
    *DepthPass->command = 0x41744;
    pRVar7->command[1] = 2;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = DepthPass;
    *DepthPass->command = 0x41748;
    pRVar7->command[1] = 2;
    pRVar7->command = pRVar7->command + 2;
    idol_draw::RsxCmd_WritePass(DepthPass);
    pRVar7 = ForwardPass;
    *ForwardPass->command = NV4097_SET_DEPTH_MASK_x1;
    pRVar7->command[1] = 0;
    pRVar7->command = pRVar7->command + 2;
  }
  return;
}


// 0x050d240 (0x114c bytes)
// strings: 0065fb7c: 'Tie'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050d240(int param_1,int *param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  RsxCmd *pRVar5;
  RsxCmd RVar6;
  RenderingStep *pRVar7;
  RenderingStep *pRVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  RsxCmd RVar12;
  ulonglong uVar11;
  int iVar13;
  RsxCmd *pRVar14;
  RsxCmd *pRVar15;
  RsxCmd *pRVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  byte bVar20;
  RsxCmd RVar21;
  byte bVar22;
  uint uVar23;
  ulonglong uVar24;
  int iVar25;
  undefined4 *puVar26;
  undefined8 in_LR;
  longlong lVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  RsxCmd local_120 [32];
  uint local_a0;
  int local_98;
  
  if ((param_2[2] != 0) && (DAT_0159c369 == '\0')) {
    idol_draw::RsxCmd_DebugStr_Marker(ForwardPass,"Tie");
    idol_draw::RsxCmd_DebugStr_Marker(DepthPass,"Tie");
    uVar9 = g_pIdolDraw;
    idol_draw::Insert_WaitCmd_Marker(&DAT_01111700,DepthPass,1);
    pRVar7 = DepthPass;
    lVar27 = 2;
    *DepthPass->command = NV4097_SET_ALPHA_FUNC_x2;
    pRVar7->command[1] = 0x206;
    pRVar7->command[2] = 0xff;
    pRVar7->command = pRVar7->command + 3;
    pRVar7 = DepthPass;
    *DepthPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    pRVar7->command[1] = 1;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = ForwardPass;
    pRVar16 = (RsxCmd *)(*(int *)(param_1 + 0x18) + 0x10);
    *ForwardPass->command = NV4097_SET_TRANSFORM_CONSTANT_LOAD_x5;
    pRVar7->command[1] = 0x14;
    pRVar14 = pRVar7->command + 2;
    pRVar7->command = pRVar14;
    do {
      *pRVar14 = *pRVar16;
      pRVar14 = pRVar7->command;
      pRVar7->command = pRVar14 + 1;
      pRVar15 = pRVar16 + 1;
      pRVar16 = pRVar16 + 2;
      pRVar14[1] = *pRVar15;
      pRVar14 = pRVar7->command + 1;
      pRVar7->command = pRVar14;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    idol_draw::BindVertexProgram(uVar9,ForwardPass,6);
    idol_draw::BindFragmentProgram(uVar9,ForwardPass,6);
    pRVar7 = ForwardPass;
    *ForwardPass->command = NV4097_SET_TRANSFORM_BRANCH_BITS_x1;
    pRVar7->command[1] = 0;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = ForwardPass;
    bVar20 = 0;
    *ForwardPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    bVar22 = 0;
    pRVar7->command[1] = 0x1832;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = ForwardPass;
    RVar21 = 0;
    *ForwardPass->command = 0x41744;
    pRVar7->command[1] = 0x822;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = ForwardPass;
    *ForwardPass->command = 0x4174c;
    pRVar7->command[1] = 0x444;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = DepthPass;
    *DepthPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar7->command[1] = 0x1832;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = DepthPass;
    *DepthPass->command = 0x41744;
    pRVar7->command[1] = 0x822;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = DepthPass;
    *DepthPass->command = 0x4174c;
    bVar2 = 0;
    pRVar7->command[1] = 0x444;
    pRVar7->command = pRVar7->command + 2;
    uVar3 = param_2[2];
    FUN_0060444c(param_3);
    local_a0 = 0;
    local_98 = -1;
    if (uVar3 != 0) {
      iVar17 = 0;
      iVar13 = 0;
      do {
        pRVar7 = ForwardPass;
        uVar23 = param_2[1] + iVar13;
        iVar25 = *(int *)(*param_2 + iVar17);
        iVar4 = *(int *)(iVar25 + 0x6c);
        if (*(int *)(iVar25 + 0x50) != local_98) {
          RVar12 = *(RsxCmd *)(iVar4 + 0x10);
          *ForwardPass->command = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
          pRVar7->command[1] = RVar12 | 0x80000000;
          pRVar7->command = pRVar7->command + 2;
          pRVar7 = ForwardPass;
          RVar12 = *(RsxCmd *)(iVar4 + 0x14);
          *ForwardPass->command = 0x41684;
          pRVar7->command[1] = RVar12 | 0x80000000;
          pRVar7->command = pRVar7->command + 2;
          pRVar7 = ForwardPass;
          RVar12 = *(RsxCmd *)(iVar4 + 0x18);
          *ForwardPass->command = NV4097_SET_INDEX_ARRAY_ADDRESS_x2;
          pRVar7->command[1] = RVar12;
          pRVar7->command[2] = 0x11;
          pRVar7->command = pRVar7->command + 3;
          pRVar7 = DepthPass;
          RVar12 = *(RsxCmd *)(iVar4 + 0x10);
          *DepthPass->command = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
          pRVar7->command[1] = RVar12 | 0x80000000;
          pRVar7->command = pRVar7->command + 2;
          pRVar7 = DepthPass;
          RVar12 = *(RsxCmd *)(iVar4 + 0x14);
          *DepthPass->command = 0x41684;
          pRVar7->command[1] = RVar12 | 0x80000000;
          pRVar7->command = pRVar7->command + 2;
          pRVar7 = DepthPass;
          RVar12 = *(RsxCmd *)(iVar4 + 0x18);
          *DepthPass->command = NV4097_SET_INDEX_ARRAY_ADDRESS_x2;
          pRVar7->command[1] = RVar12;
          pRVar7->command[2] = 0x11;
          pRVar7->command = pRVar7->command + 3;
          pRVar7 = ForwardPass;
          bVar1 = *(byte *)(iVar4 + 0x34);
          local_98 = *(int *)(iVar25 + 0x50);
          if (bVar1 != bVar2) {
            *ForwardPass->command = 0x41744;
            RVar12 = (RsxCmd)(((ZERO_MASK((uint)bVar1) & 0xfffffffffffffff8U) +
                               0x10 & 0xffffffff) << 8) | 0x22;
            pRVar7->command[1] = RVar12;
            pRVar7->command = pRVar7->command + 2;
            pRVar7 = DepthPass;
            *DepthPass->command = 0x41744;
            pRVar7->command[1] = RVar12;
            pRVar7->command = pRVar7->command + 2;
            bVar2 = *(byte *)(iVar4 + 0x34);
          }
        }
        pRVar7 = ForwardPass;
        auVar28 = *(undefined1 (*) [16])(uVar23 + 0x10 & 0xfffffff0);
        auVar29 = loadVectorLeftIndexed(in_LR,0x50d210);
        auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar31 = *(undefined1 (*) [16])(uVar23 + 0x20 & 0xfffffff0);
        auVar32 = vectorMergeHighWord(*(undefined1 (*) [16])(uVar23 & 0xfffffff0),auVar31);
        auVar30 = vectorPermute(*(undefined1 (*) [16])(uVar23 + 0x30 & 0xfffffff0),
                                auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,
                                _DAT_0050d220);
        auVar29 = vectorMergeLowWord(*(undefined1 (*) [16])(uVar23 & 0xfffffff0),auVar31);
        auVar31 = vectorMergeHighWord(auVar28,auVar30);
        auVar28 = vectorMergeLowWord(auVar28,auVar30);
        lVar27 = 8;
        vectorMergeHighWord(auVar32,auVar31);
        vectorMergeLowWord(auVar32,auVar31);
        vectorMergeHighWord(auVar29,auVar28);
        auVar29 = vectorMergeLowWord(auVar29,auVar28);
        pRVar14 = local_120;
        vectorLogicalAnd(auVar29,_DAT_0050d230);
        *ForwardPass->command = 0x441efc;
        pRVar7->command[1] = 4;
        pRVar15 = pRVar7->command + 2;
        pRVar7->command = pRVar15;
        pRVar16 = pRVar14;
        do {
          *pRVar15 = *pRVar16;
          pRVar15 = pRVar7->command;
          pRVar7->command = pRVar15 + 1;
          pRVar5 = pRVar16 + 1;
          pRVar16 = pRVar16 + 2;
          pRVar15[1] = *pRVar5;
          pRVar15 = pRVar7->command + 1;
          pRVar7->command = pRVar15;
          pRVar8 = DepthPass;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 8;
        *DepthPass->command = 0x441efc;
        pRVar8->command[1] = 4;
        pRVar16 = pRVar8->command + 2;
        pRVar8->command = pRVar16;
        do {
          *pRVar16 = *pRVar14;
          pRVar16 = pRVar8->command;
          pRVar8->command = pRVar16 + 1;
          pRVar15 = pRVar14 + 1;
          pRVar14 = pRVar14 + 2;
          pRVar16[1] = *pRVar15;
          pRVar16 = pRVar8->command + 1;
          pRVar8->command = pRVar16;
          pRVar7 = ForwardPass;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        if (DAT_0159c36a == '\0') {
          RVar12 = *(RsxCmd *)(iVar25 + 100);
          *ForwardPass->command = 0x4168c;
          pRVar7->command[1] = RVar12 | 0x80000000;
          pRVar7->command = pRVar7->command + 2;
          pRVar7 = DepthPass;
          RVar12 = *(RsxCmd *)(iVar25 + 100);
          *DepthPass->command = 0x4168c;
          pRVar7->command[1] = RVar12 | 0x80000000;
          pRVar7->command = pRVar7->command + 2;
        }
        else {
          RVar12 = *(RsxCmd *)(iVar25 + 0x60);
          *ForwardPass->command = 0x4168c;
          pRVar7->command[1] = RVar12 | 0x80000000;
          pRVar7->command = pRVar7->command + 2;
          pRVar7 = DepthPass;
          RVar12 = *(RsxCmd *)(iVar25 + 0x60);
          *DepthPass->command = 0x4168c;
          pRVar7->command[1] = RVar12 | 0x80000000;
          pRVar7->command = pRVar7->command + 2;
        }
        puVar26 = *(undefined4 **)(iVar4 + 0x1c);
        uVar23 = 0;
        if (*(short *)(iVar4 + 0x28) != 0) {
          do {
            if (*(byte *)(puVar26 + 5) != bVar20) {
              FUN_0060444c((ulonglong)*(byte *)(puVar26 + 5) * 0x40 + param_3 & 0xffffffff);
              bVar20 = *(byte *)(puVar26 + 5);
            }
            if (*(byte *)((int)puVar26 + 0x16) != bVar22) {
              idol_draw::BindFragmentProgram
                        (uVar9,ForwardPass,
                         *(undefined4 *)(&DAT_00903004 + (uint)*(byte *)((int)puVar26 + 0x16) * 8));
              pRVar7 = ForwardPass;
              iVar25 = *(int *)(&DAT_00903008 + (uint)*(byte *)((int)puVar26 + 0x16) * 8);
              if (iVar25 < 1) {
                if (-1 < iVar25) {
                  *ForwardPass->command = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
                  pRVar7->command[1] = 0x3020302;
                  pRVar7->command[2] = 0x3030303;
                  pRVar7->command = pRVar7->command + 3;
                }
              }
              else if (iVar25 < 2) {
                *ForwardPass->command = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
                pRVar7->command[1] = 0x10001;
                pRVar7->command[2] = 0;
                pRVar7->command = pRVar7->command + 3;
              }
              else if (iVar25 < 3) {
                *ForwardPass->command = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
                pRVar7->command[1] = 0x3020302;
                pRVar7->command[2] = 0x10001;
                pRVar7->command = pRVar7->command + 3;
              }
              bVar22 = *(byte *)((int)puVar26 + 0x16);
            }
            pRVar7 = ForwardPass;
            bVar1 = *(byte *)((int)puVar26 + 0x15);
            if (bVar1 != RVar21) {
              *ForwardPass->command = NV4097_SET_TRANSFORM_BRANCH_BITS_x1;
              pRVar7->command[1] = (uint)bVar1;
              pRVar7->command = pRVar7->command + 2;
              RVar21 = (RsxCmd)*(byte *)((int)puVar26 + 0x15);
            }
            if (puVar26[1] == -1) {
              FUN_004d676c(ForwardPass,0,*puVar26,(ulonglong)*(byte *)((int)puVar26 + 0x17) & 3,
                           ((ulonglong)*(byte *)((int)puVar26 + 0x17) << 0x20) >> 0x22 & 3);
              pRVar7 = ForwardPass;
              *ForwardPass->command = 0x400c1714;
              pRVar7->command[1] = 0;
              pRVar7->command[2] = 0;
              pRVar7->command[3] = 0;
              pRVar7->command[4] = NV4097_SET_BEGIN_END_x1;
              pRVar7->command[5] = 5;
              pRVar7->command = pRVar7->command + 6;
              pRVar7 = ForwardPass;
              RVar12 = puVar26[2];
              uVar11 = (ulonglong)RVar12;
              lVar27 = 0x100 - ((ulonglong)RVar12 & 0xff);
              uVar18 = (ulonglong)(uint)puVar26[3] - lVar27;
              uVar10 = lVar27 + (uVar18 & (longlong)((int)uVar18 >> 0x1f));
              uVar19 = (uint)puVar26[3] - uVar10;
              uVar19 = uVar19 & ~(longlong)((int)uVar19 >> 0x1f);
              pRVar16 = ForwardPass->command;
              uVar18 = (uVar19 << 0x20) >> 0x28;
              uVar24 = uVar19 - (uVar19 & 0xffffff00);
              iVar25 = (int)uVar24;
              ForwardPass->command = pRVar16 + 1;
              *pRVar16 = (((uint)uVar19 >> 8) + ((iVar25 != 0)) +
                         (((int)uVar10 != 0))) * 0x40000 | 0x40001824;
              if ((int)uVar10 != 0) {
                pRVar16 = pRVar7->command;
                uVar11 = uVar10 + uVar11;
                pRVar7->command = pRVar16 + 1;
                *pRVar16 = RVar12 | (int)((uVar10 & 0xffffffff) << 0x18) - 0x1000000;
              }
              RVar12 = (RsxCmd)uVar11;
              if ((uint)uVar19 >> 8 != 0) {
                do {
                  pRVar16 = pRVar7->command;
                  RVar6 = (RsxCmd)uVar11;
                  uVar18 = uVar18 - 1;
                  uVar11 = uVar11 + 0x100;
                  RVar12 = (RsxCmd)uVar11;
                  pRVar7->command = pRVar16 + 1;
                  *pRVar16 = RVar6 | 0xff000000;
                } while (0 < (int)uVar18);
              }
              if (iVar25 != 0) {
                pRVar16 = pRVar7->command;
                pRVar7->command = pRVar16 + 1;
                *pRVar16 = RVar12 | (int)((uVar24 & 0xffffffff) << 0x18) - 0x1000000;
              }
              pRVar7 = ForwardPass;
              *ForwardPass->command = NV4097_SET_BEGIN_END_x1;
              pRVar7->command[1] = 0;
              pRVar7->command = pRVar7->command + 2;
              FUN_004d676c(DepthPass,0,*puVar26,(ulonglong)*(byte *)((int)puVar26 + 0x17) & 3,
                           ((ulonglong)*(byte *)((int)puVar26 + 0x17) << 0x20) >> 0x22 & 3);
              pRVar7 = DepthPass;
              *DepthPass->command = 0x400c1714;
              pRVar7->command[1] = 0;
              pRVar7->command[2] = 0;
              pRVar7->command[3] = 0;
              pRVar7->command[4] = NV4097_SET_BEGIN_END_x1;
              pRVar7->command[5] = 5;
              pRVar7->command = pRVar7->command + 6;
              pRVar7 = DepthPass;
              RVar12 = puVar26[2];
              uVar11 = (ulonglong)RVar12;
              lVar27 = 0x100 - ((ulonglong)RVar12 & 0xff);
              uVar18 = (ulonglong)(uint)puVar26[3] - lVar27;
              uVar10 = lVar27 + (uVar18 & (longlong)((int)uVar18 >> 0x1f));
              uVar19 = (uint)puVar26[3] - uVar10;
              pRVar16 = DepthPass->command;
              uVar19 = uVar19 & ~(longlong)((int)uVar19 >> 0x1f);
              uVar24 = uVar19 - (uVar19 & 0xffffff00);
              uVar18 = (uVar19 << 0x20) >> 0x28;
              iVar25 = (int)uVar24;
              DepthPass->command = pRVar16 + 1;
              *pRVar16 = (((uint)uVar19 >> 8) + ((iVar25 != 0)) +
                         (((int)uVar10 != 0))) * 0x40000 | 0x40001824;
              if ((int)uVar10 != 0) {
                pRVar16 = pRVar7->command;
                uVar11 = uVar10 + uVar11;
                pRVar7->command = pRVar16 + 1;
                *pRVar16 = RVar12 | (int)((uVar10 & 0xffffffff) << 0x18) - 0x1000000;
              }
              RVar12 = (RsxCmd)uVar11;
              if ((uint)uVar19 >> 8 != 0) {
                do {
                  pRVar16 = pRVar7->command;
                  RVar6 = (RsxCmd)uVar11;
                  uVar18 = uVar18 - 1;
                  uVar11 = uVar11 + 0x100;
                  RVar12 = (RsxCmd)uVar11;
                  pRVar7->command = pRVar16 + 1;
                  *pRVar16 = RVar6 | 0xff000000;
                } while (0 < (int)uVar18);
              }
              if (iVar25 != 0) {
                pRVar16 = pRVar7->command;
                pRVar7->command = pRVar16 + 1;
                *pRVar16 = RVar12 | (int)((uVar24 & 0xffffffff) << 0x18) - 0x1000000;
              }
              pRVar7 = DepthPass;
              *DepthPass->command = NV4097_SET_BEGIN_END_x1;
              pRVar7->command[1] = 0;
              pRVar7->command = pRVar7->command + 2;
            }
            else {
              FUN_004d676c(ForwardPass,0,*puVar26,(ulonglong)*(byte *)((int)puVar26 + 0x17) & 3,
                           ((ulonglong)*(byte *)((int)puVar26 + 0x17) << 0x20) >> 0x22 & 3);
              FUN_004d676c(ForwardPass,1,puVar26[1],
                           ((ulonglong)*(byte *)((int)puVar26 + 0x17) << 0x20) >> 0x24 & 3,
                           ((ulonglong)*(byte *)((int)puVar26 + 0x17) << 0x20) >> 0x26);
              pRVar7 = ForwardPass;
              *ForwardPass->command = 0x400c1714;
              pRVar7->command[1] = 0;
              pRVar7->command[2] = 0;
              pRVar7->command[3] = 0;
              pRVar7->command[4] = NV4097_SET_BEGIN_END_x1;
              pRVar7->command[5] = 5;
              pRVar7->command = pRVar7->command + 6;
              pRVar7 = ForwardPass;
              RVar12 = puVar26[2];
              uVar11 = (ulonglong)RVar12;
              lVar27 = 0x100 - ((ulonglong)RVar12 & 0xff);
              uVar18 = (ulonglong)(uint)puVar26[3] - lVar27;
              uVar10 = lVar27 + (uVar18 & (longlong)((int)uVar18 >> 0x1f));
              uVar19 = (uint)puVar26[3] - uVar10;
              pRVar16 = ForwardPass->command;
              uVar19 = uVar19 & ~(longlong)((int)uVar19 >> 0x1f);
              uVar24 = uVar19 - (uVar19 & 0xffffff00);
              uVar18 = (uVar19 << 0x20) >> 0x28;
              iVar25 = (int)uVar24;
              ForwardPass->command = pRVar16 + 1;
              *pRVar16 = (((uint)uVar19 >> 8) + ((iVar25 != 0)) +
                         (((int)uVar10 != 0))) * 0x40000 | 0x40001824;
              if ((int)uVar10 != 0) {
                pRVar16 = pRVar7->command;
                uVar11 = uVar10 + uVar11;
                pRVar7->command = pRVar16 + 1;
                *pRVar16 = RVar12 | (int)((uVar10 & 0xffffffff) << 0x18) - 0x1000000;
              }
              RVar12 = (RsxCmd)uVar11;
              if ((uint)uVar19 >> 8 != 0) {
                do {
                  pRVar16 = pRVar7->command;
                  RVar6 = (RsxCmd)uVar11;
                  uVar18 = uVar18 - 1;
                  uVar11 = uVar11 + 0x100;
                  RVar12 = (RsxCmd)uVar11;
                  pRVar7->command = pRVar16 + 1;
                  *pRVar16 = RVar6 | 0xff000000;
                } while (0 < (int)uVar18);
              }
              if (iVar25 != 0) {
                pRVar16 = pRVar7->command;
                pRVar7->command = pRVar16 + 1;
                *pRVar16 = RVar12 | (int)((uVar24 & 0xffffffff) << 0x18) - 0x1000000;
              }
              pRVar7 = ForwardPass;
              *ForwardPass->command = NV4097_SET_BEGIN_END_x1;
              pRVar7->command[1] = 0;
              pRVar7->command = pRVar7->command + 2;
              FUN_004d676c(DepthPass,0,*puVar26,(ulonglong)*(byte *)((int)puVar26 + 0x17) & 3,
                           ((ulonglong)*(byte *)((int)puVar26 + 0x17) << 0x20) >> 0x22 & 3);
              FUN_004d676c(DepthPass,1,puVar26[1],
                           ((ulonglong)*(byte *)((int)puVar26 + 0x17) << 0x20) >> 0x24 & 3,
                           ((ulonglong)*(byte *)((int)puVar26 + 0x17) << 0x20) >> 0x26);
              pRVar7 = DepthPass;
              *DepthPass->command = 0x400c1714;
              pRVar7->command[1] = 0;
              pRVar7->command[2] = 0;
              pRVar7->command[3] = 0;
              pRVar7->command[4] = NV4097_SET_BEGIN_END_x1;
              pRVar7->command[5] = 5;
              pRVar7->command = pRVar7->command + 6;
              pRVar7 = DepthPass;
              RVar12 = puVar26[2];
              uVar11 = (ulonglong)RVar12;
              lVar27 = 0x100 - ((ulonglong)RVar12 & 0xff);
              uVar18 = (ulonglong)(uint)puVar26[3] - lVar27;
              uVar10 = lVar27 + (uVar18 & (longlong)((int)uVar18 >> 0x1f));
              uVar19 = (uint)puVar26[3] - uVar10;
              uVar19 = uVar19 & ~(longlong)((int)uVar19 >> 0x1f);
              pRVar16 = DepthPass->command;
              uVar18 = (uVar19 << 0x20) >> 0x28;
              uVar24 = uVar19 - (uVar19 & 0xffffff00);
              iVar25 = (int)uVar24;
              DepthPass->command = pRVar16 + 1;
              *pRVar16 = (((uint)uVar19 >> 8) + ((iVar25 != 0)) +
                         (((int)uVar10 != 0))) * 0x40000 | 0x40001824;
              if ((int)uVar10 != 0) {
                pRVar16 = pRVar7->command;
                uVar11 = uVar10 + uVar11;
                pRVar7->command = pRVar16 + 1;
                *pRVar16 = RVar12 | (int)((uVar10 & 0xffffffff) << 0x18) - 0x1000000;
              }
              RVar12 = (RsxCmd)uVar11;
              if ((uint)uVar19 >> 8 != 0) {
                do {
                  pRVar16 = pRVar7->command;
                  RVar6 = (RsxCmd)uVar11;
                  uVar18 = uVar18 - 1;
                  uVar11 = uVar11 + 0x100;
                  RVar12 = (RsxCmd)uVar11;
                  pRVar7->command = pRVar16 + 1;
                  *pRVar16 = RVar6 | 0xff000000;
                } while (0 < (int)uVar18);
              }
              if (iVar25 != 0) {
                pRVar16 = pRVar7->command;
                pRVar7->command = pRVar16 + 1;
                *pRVar16 = RVar12 | (int)((uVar24 & 0xffffffff) << 0x18) - 0x1000000;
              }
              pRVar7 = DepthPass;
              *DepthPass->command = NV4097_SET_BEGIN_END_x1;
              pRVar7->command[1] = 0;
              pRVar7->command = pRVar7->command + 2;
            }
            uVar23 = uVar23 + 1;
            puVar26 = puVar26 + 6;
          } while (uVar23 < *(ushort *)(iVar4 + 0x28));
        }
        local_a0 = local_a0 + 1;
        iVar13 = iVar13 + 0x50;
        iVar17 = iVar17 + 4;
      } while (local_a0 < uVar3);
    }
    pRVar7 = ForwardPass;
    *ForwardPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar7->command[1] = 2;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = ForwardPass;
    *ForwardPass->command = 0x41744;
    pRVar7->command[1] = 2;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = ForwardPass;
    *ForwardPass->command = 0x4174c;
    pRVar7->command[1] = 2;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = DepthPass;
    *DepthPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar7->command[1] = 2;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = DepthPass;
    *DepthPass->command = 0x41744;
    pRVar7->command[1] = 2;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = ForwardPass;
    *ForwardPass->command = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
    pRVar7->command[1] = 0x3020302;
    pRVar7->command[2] = 0x3030303;
    pRVar7->command = pRVar7->command + 3;
    idol_draw::RsxCmd_WritePass(ForwardPass);
    idol_draw::RsxCmd_WritePass(DepthPass);
  }
  return;
}


// 0x050e390 (0x3c bytes)
void FUN_0050e390(undefined1 *param_1)

{
  *param_1 = 0x49;
  param_1[1] = 0x44;
  param_1[2] = 0x4d;
  param_1[3] = 1;
  *(undefined4 *)(param_1 + 8) = 0x10;
  *(undefined2 *)(param_1 + 4) = 1;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  return;
}


// 0x050e3cc (0x3c bytes)
void FUN_0050e3cc(undefined1 *param_1)

{
  *param_1 = 0x49;
  param_1[1] = 0x44;
  param_1[2] = 0x4d;
  param_1[3] = 1;
  *(undefined4 *)(param_1 + 8) = 0x10;
  *(undefined2 *)(param_1 + 4) = 1;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  return;
}


// 0x050e408 (0x3c bytes)
void FUN_0050e408(undefined1 *param_1)

{
  *param_1 = 0x49;
  param_1[1] = 0x44;
  param_1[2] = 0x4d;
  param_1[3] = 1;
  *(undefined4 *)(param_1 + 8) = 0x10;
  *(undefined2 *)(param_1 + 4) = 1;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  return;
}


// 0x050e444 (0x40 bytes)
void FUN_0050e444(undefined1 *param_1,undefined2 param_2,undefined4 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  *(undefined2 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  param_1[0xc] = param_4;
  param_1[0xd] = param_5;
  *param_1 = 0x49;
  param_1[1] = 0x44;
  param_1[2] = 0x4d;
  param_1[3] = 1;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  return;
}


// 0x050e484 (0x40 bytes)
void FUN_0050e484(undefined1 *param_1,undefined2 param_2,undefined4 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  *(undefined2 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  param_1[0xc] = param_4;
  param_1[0xd] = param_5;
  *param_1 = 0x49;
  param_1[1] = 0x44;
  param_1[2] = 0x4d;
  param_1[3] = 1;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  return;
}


// 0x050e4c4 (0x18 bytes)
int FUN_0050e4c4(int param_1)

{
  return param_1 + *(short *)(param_1 + 6) + 0x10;
}


// 0x050e4dc (0x1c bytes)
int FUN_0050e4dc(int param_1)

{
  return (*(int *)(param_1 + 8) - (int)*(short *)(param_1 + 6)) + -0x10;
}


// 0x050e4f8 (0x34 bytes)
undefined8 FUN_0050e4f8(char *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (((*param_1 == 'I') && (param_1[1] == 'D')) && (param_1[2] == 'M')) {
    uVar1 = 1;
  }
  return uVar1;
}


// 0x050e52c (0xc bytes)
undefined2 FUN_0050e52c(int param_1)

{
  return *(undefined2 *)(param_1 + 4);
}


// 0x050e538 (0x30 bytes)
ulonglong FUN_0050e538(int param_1,int param_2)

{
  return ZERO_MASK((param_2 - *(short *)(param_1 + 4))) & 1;
}


// 0x050e568 (0xc bytes)
undefined4 FUN_0050e568(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


// 0x050e574 (0xc bytes)
void FUN_0050e574(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}


// 0x050e580 (0xc bytes)
void FUN_0050e580(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}


// 0x050e58c (0x8 bytes)
undefined4 FUN_0050e58c(undefined4 *param_1)

{
  return *param_1;
}


// 0x050e594 (0x60 bytes)
undefined8 FUN_0050e594(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0050e538(param_2,0);
  if (iVar1 == 0) {
    *param_1 = (int)param_2;
  }
  else {
    param_2 = 0;
    *param_1 = 0;
  }
  return param_2;
}


// 0x050e5f4 (0x70 bytes)
int FUN_0050e5f4(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = FUN_0050e568(iVar2);
  iVar2 = iVar2 + iVar1;
  *param_1 = iVar2;
  iVar1 = FUN_0050e538(iVar2,0);
  iVar2 = *param_1;
  if (iVar1 != 0) {
    iVar2 = 0;
    *param_1 = 0;
  }
  return iVar2;
}


// 0x050e664 (0x74 bytes)
int FUN_0050e664(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = param_1[1];
  if (param_1[1] != *param_1) {
    do {
      iVar3 = iVar1;
      iVar2 = FUN_0050e568();
      iVar1 = iVar3 + iVar2;
    } while (iVar3 + iVar2 != *param_1);
    if (iVar3 != 0) {
      *param_1 = iVar3;
    }
  }
  return iVar3;
}


// 0x050e6d8 (0xbc bytes)
undefined4 FUN_0050e6d8(undefined4 *param_1,ulonglong param_2)

{
  int iVar2;
  longlong lVar1;
  undefined4 uVar3;
  
  iVar2 = FUN_0050e538(param_2,0);
  if (iVar2 == 0) {
    iVar2 = (int)param_2;
    param_1[1] = iVar2;
    while (iVar2 != 0) {
      *param_1 = (int)param_2;
      lVar1 = FUN_0050e568(param_2);
      param_2 = param_2 + lVar1 & 0xffffffff;
      iVar2 = FUN_0050e538(param_2,0);
      param_2 = ZERO_MASK(iVar2) & param_2;
      iVar2 = (int)param_2;
    }
    uVar3 = *param_1;
  }
  else {
    uVar3 = 0;
    *param_1 = 0;
  }
  return uVar3;
}


// 0x050e794 (0x10 bytes)
undefined4 FUN_0050e794(void)

{
  return *(undefined4 *)(*(int *)PTR_DAT_0071a904 + 8);
}


// 0x050e7a4 (0xc bytes)
void FUN_0050e7a4(undefined4 param_1)

{
  *(undefined4 *)(PTR_DAT_0071a908 + 0xc) = param_1;
  return;
}


// 0x050e7b0 (0x28 bytes)
void FUN_0050e7b0(int param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_0071a908;
  puVar1 = PTR_DAT_0071a904;
  *(int *)PTR_DAT_0071a908 = param_1;
  *(undefined **)puVar1 = puVar2;
  *(uint *)(puVar2 + 4) = (param_2 & 0xfffffffc) + param_1 + -4;
  *(int *)(puVar2 + 8) = param_1;
  return;
}


// 0x050e7d8 (0x20 bytes)
void FUN_0050e7d8(int *param_1,int param_2,uint param_3,int param_4)

{
  param_1[3] = param_4;
  *param_1 = param_2;
  param_1[2] = param_2;
  param_1[1] = (param_3 & 0xfffffffc) + param_2 + -4;
  return;
}


