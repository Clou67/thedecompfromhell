// idol/tfragfunc.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x50b0bc-0x50c5b0
#include "idol/tfragfunc.h"
#include "game/boot.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/main.h"
#include "game/mission.h"
#include "idol/fastfunc.h"
#include "idol/idol_draw.h"
#include "idol/mUnk.h"
#include "idol/mathfunc.h"
#include "idol/tiefunc.h"
#include "sdk/libc/qsort.h"
#include "sdk/libgcm_cmd/marker.h"

// 0x050b0bc (0xe7c bytes)
// strings: 0065fb74: 'TFrag'

void DrawTfrag(int param_1,RsxCmd *param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  RsxCmd RVar7;
  uint uVar8;
  uint uVar9;
  RsxCmd *pRVar10;
  RsxCmd *pRVar11;
  RsxCmd *pRVar12;
  int iVar13;
  bool bVar14;
  RsxCmd RVar15;
  RenderingStep *pRVar16;
  int iVar17;
  char cVar18;
  RsxCmd *pRVar20;
  RsxCmd *pRVar21;
  RsxCmd RVar22;
  ulonglong uVar19;
  RsxCmd RVar23;
  uint uVar25;
  ulonglong uVar24;
  uint uVar27;
  ulonglong uVar26;
  uint uVar28;
  uint uVar29;
  int *piVar30;
  longlong lVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  RsxCmd local_d0 [18];
  
  iVar17 = g_pIdolDraw;
  if (DAT_0159c365 == '\0') {
    idol_draw::RsxCmd_DebugStr_Marker(DepthPass,"TFrag");
    idol_draw::RsxCmd_DebugStr_Marker(ForwardPass,"TFrag");
    pRVar16 = DepthPass;
    auVar32 = *(undefined1 (*) [16])(iVar17 + 0xa0U & 0xfffffff0);
    auVar33 = *(undefined1 (*) [16])(iVar17 + 0xd0U & 0xfffffff0);
    auVar34 = *(undefined1 (*) [16])(iVar17 + 0xc0U & 0xfffffff0);
    auVar35 = *(undefined1 (*) [16])(iVar17 + 0xb0U & 0xfffffff0);
    auVar36 = vectorMergeHighWord(auVar32,auVar34);
    auVar37 = vectorMergeHighWord(auVar35,auVar33);
    auVar32 = vectorMergeLowWord(auVar32,auVar34);
    auVar33 = vectorMergeLowWord(auVar35,auVar33);
    vectorMergeHighWord(auVar36,auVar37);
    vectorMergeLowWord(auVar36,auVar37);
    vectorMergeHighWord(auVar32,auVar33);
    vectorMergeLowWord(auVar32,auVar33);
    pRVar21 = local_d0;
    lVar31 = 8;
    *DepthPass->command = 0x441efc;
    pRVar16->command[1] = 0xc;
    pRVar20 = pRVar16->command + 2;
    pRVar16->command = pRVar20;
    do {
      *pRVar20 = *pRVar21;
      pRVar20 = pRVar16->command;
      pRVar16->command = pRVar20 + 1;
      pRVar10 = pRVar21 + 1;
      pRVar21 = pRVar21 + 2;
      pRVar20[1] = *pRVar10;
      pRVar20 = pRVar16->command + 1;
      pRVar16->command = pRVar20;
      lVar31 = lVar31 + -1;
    } while (lVar31 != 0);
    if (*param_3 != 0) {
      idol_draw::Insert_WaitCmd_Marker(&DAT_01111700,DepthPass,0);
    }
    pRVar16 = ForwardPass;
    *ForwardPass->command = 0x41a4c;
    pRVar16->command[1] = 0x80000000;
    pRVar16->command = pRVar16->command + 2;
    pRVar16 = ForwardPass;
    *ForwardPass->command = 0x41a48;
    pRVar16->command[1] = 0x40030404;
    pRVar16->command = pRVar16->command + 2;
    pRVar16 = ForwardPass;
    *ForwardPass->command = 0x41a54;
    pRVar16->command[1] = (RsxCmd)&DAT_01012000;
    pRVar16->command = pRVar16->command + 2;
    pRVar16 = ForwardPass;
    bVar1 = *(byte *)(iVar17 + 0x21ba);
    RVar22 = *(RsxCmd *)(iVar17 + 0x21c0);
    bVar2 = *(byte *)(iVar17 + 0x21ad);
    bVar3 = *(byte *)(iVar17 + 0x21ac);
    bVar4 = *(byte *)(iVar17 + 0x21af);
    bVar5 = *(byte *)(iVar17 + 0x21ae);
    RVar15 = *(RsxCmd *)(iVar17 + 0x21b4);
    RVar23 = *(RsxCmd *)(iVar17 + 0x21b0);
    RVar7 = *(RsxCmd *)(iVar17 + 0x21bc);
    uVar6 = *(ushort *)(iVar17 + 0x21b8);
    *ForwardPass->command = 0x81a40;
    pRVar16->command[1] = RVar22;
    pRVar16->command[2] =
         (uint)bVar2 << 0x10 | bVar1 + 1 | 8 | (uint)bVar3 << 8 |
         (uint)bVar4 << 2 | (uint)bVar5 << 4;
    pRVar21 = pRVar16->command;
    pRVar16->command = pRVar21 + 3;
    pRVar21[3] = 0x41a58;
    pRVar16->command[1] = RVar15;
    pRVar21 = pRVar16->command;
    pRVar16->command = pRVar21 + 2;
    pRVar21[2] = (RsxCmd)&DAT_00041848;
    pRVar16->command[1] = RVar7 | (uint)uVar6 << 0x14;
    pRVar21 = pRVar16->command;
    pRVar16->command = pRVar21 + 2;
    pRVar21[2] = 0x41a50;
    pRVar16->command[1] = RVar23;
    pRVar16->command = pRVar16->command + 2;
    pRVar16 = ForwardPass;
    *ForwardPass->command = 0x41a5c;
    pRVar16->command[1] = 0;
    pRVar16->command = pRVar16->command + 2;
    pRVar16 = DepthPass;
    *DepthPass->command = NV4097_SET_ALPHA_FUNC_x2;
    pRVar16->command[1] = 0x206;
    pRVar16->command[2] = 0xff;
    pRVar16->command = pRVar16->command + 3;
    pRVar16 = DepthPass;
    *DepthPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    pRVar16->command[1] = 1;
    pRVar16->command = pRVar16->command + 2;
    pRVar16 = ForwardPass;
    *ForwardPass->command = NV4097_SET_ALPHA_FUNC_x2;
    pRVar16->command[1] = 0x206;
    pRVar16->command[2] = 1;
    pRVar16->command = pRVar16->command + 3;
    pRVar16 = ForwardPass;
    *ForwardPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    pRVar16->command[1] = 1;
    pRVar16->command = pRVar16->command + 2;
    pRVar16 = ForwardPass;
    lVar31 = 2;
    *ForwardPass->command = NV4097_SET_TRANSFORM_CONSTANT_LOAD_x5;
    pRVar16->command[1] = 0x14;
    pRVar21 = pRVar16->command + 2;
    pRVar16->command = pRVar21;
    do {
      *pRVar21 = *param_2;
      pRVar21 = pRVar16->command;
      pRVar16->command = pRVar21 + 1;
      pRVar20 = param_2 + 1;
      param_2 = param_2 + 2;
      pRVar21[1] = *pRVar20;
      pRVar21 = pRVar16->command + 1;
      pRVar16->command = pRVar21;
      lVar31 = lVar31 + -1;
    } while (lVar31 != 0);
    idol_draw::BindVertexProgram(iVar17,ForwardPass,4);
    idol_draw::BindFragmentProgram(iVar17,ForwardPass,6);
    pRVar16 = ForwardPass;
    uVar8 = param_3[2];
    piVar30 = (int *)param_3[3];
    *ForwardPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar16->command[1] = 0x1c32;
    pRVar16->command = pRVar16->command + 2;
    pRVar16 = ForwardPass;
    *ForwardPass->command = 0x41744;
    pRVar16->command[1] = 0x822;
    pRVar16->command = pRVar16->command + 2;
    pRVar16 = ForwardPass;
    uVar29 = 0xffffffff;
    *ForwardPass->command = 0x4174c;
    pRVar16->command[1] = 0x444;
    pRVar16->command = pRVar16->command + 2;
    pRVar16 = DepthPass;
    *DepthPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar16->command[1] = 0x1c32;
    pRVar16->command = pRVar16->command + 2;
    pRVar16 = DepthPass;
    iVar17 = 0;
    cVar18 = '\0';
    pRVar21 = (RsxCmd *)0x0;
    pRVar20 = (RsxCmd *)0x0;
    *DepthPass->command = 0x41744;
    bVar14 = false;
    uVar28 = 0;
    pRVar16->command[1] = 0x822;
    pRVar16->command = pRVar16->command + 2;
    pRVar16 = DepthPass;
    *DepthPass->command = 0x4174c;
    pRVar16->command[1] = 0x444;
    pRVar16->command = pRVar16->command + 2;
    pRVar16 = ForwardPass;
    *ForwardPass->command = NV4097_SET_DEPTH_MASK_x1;
    pRVar16->command[1] = 0;
    pRVar16->command = pRVar16->command + 2;
    if (uVar8 != 0) {
      do {
        pRVar16 = ForwardPass;
        if (*(byte *)(piVar30 + 1) != uVar29) {
          if (pRVar20 != (RsxCmd *)0x0) {
            *ForwardPass->command = NV4097_SET_BEGIN_END_x1;
            pRVar16->command[1] = 0;
            pRVar16->command = pRVar16->command + 2;
            pRVar16 = DepthPass;
            if (!bVar14) {
              *DepthPass->command = NV4097_SET_BEGIN_END_x1;
              pRVar16->command[1] = 0;
              pRVar16->command = pRVar16->command + 2;
            }
            pRVar21 = (RsxCmd *)0x0;
            pRVar20 = (RsxCmd *)0x0;
          }
          pRVar16 = ForwardPass;
          uVar29 = (uint)*(byte *)(piVar30 + 1);
          iVar13 = (int)(((ulonglong)CONCAT14(*(byte *)(piVar30 + 1),uVar29) & 0x3fffffff) << 2);
          pRVar10 = (RsxCmd *)(iVar13 + param_1 + 8);
          pRVar11 = (RsxCmd *)(iVar13 + param_1 + 0x28);
          RVar22 = *pRVar10;
          *ForwardPass->command = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
          pRVar12 = (RsxCmd *)(iVar13 + param_1 + 0x38);
          pRVar16->command[1] = RVar22 | 0x80000000;
          pRVar16->command = pRVar16->command + 2;
          pRVar16 = ForwardPass;
          RVar22 = *pRVar11;
          *ForwardPass->command = 0x41684;
          pRVar16->command[1] = RVar22 | 0x80000000;
          pRVar16->command = pRVar16->command + 2;
          pRVar16 = ForwardPass;
          RVar22 = *pRVar12;
          *ForwardPass->command = NV4097_SET_INDEX_ARRAY_ADDRESS_x2;
          pRVar16->command[1] = RVar22;
          pRVar16->command[2] = 0x11;
          pRVar16->command = pRVar16->command + 3;
          pRVar16 = DepthPass;
          RVar22 = *pRVar10;
          *DepthPass->command = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
          pRVar16->command[1] = RVar22 | 0x80000000;
          pRVar16->command = pRVar16->command + 2;
          pRVar16 = DepthPass;
          RVar22 = *pRVar11;
          *DepthPass->command = 0x41684;
          pRVar16->command[1] = RVar22 | 0x80000000;
          pRVar16->command = pRVar16->command + 2;
          pRVar16 = DepthPass;
          RVar22 = *pRVar12;
          *DepthPass->command = NV4097_SET_INDEX_ARRAY_ADDRESS_x2;
          pRVar16->command[1] = RVar22;
          pRVar16->command[2] = 0x11;
          pRVar16->command = pRVar16->command + 3;
          pRVar16 = DepthPass;
          if (DAT_0159c366 == '\0') {
            pRVar10 = (RsxCmd *)(iVar13 + param_1 + 0x48);
            RVar22 = *pRVar10;
            *DepthPass->command = 0x4168c;
            pRVar16->command[1] = RVar22 | 0x80000000;
            pRVar16->command = pRVar16->command + 2;
            pRVar16 = ForwardPass;
            RVar22 = *pRVar10;
            *ForwardPass->command = 0x4168c;
            pRVar16->command[1] = RVar22 | 0x80000000;
            pRVar16->command = pRVar16->command + 2;
          }
          else {
            pRVar10 = (RsxCmd *)(iVar13 + param_1 + 0x18);
            RVar22 = *pRVar10;
            *DepthPass->command = 0x4168c;
            pRVar16->command[1] = RVar22 | 0x80000000;
            pRVar16->command = pRVar16->command + 2;
            pRVar16 = ForwardPass;
            RVar22 = *pRVar10;
            *ForwardPass->command = 0x4168c;
            pRVar16->command[1] = RVar22 | 0x80000000;
            pRVar16->command = pRVar16->command + 2;
          }
        }
        pRVar16 = ForwardPass;
        if ((*piVar30 != iVar17) || (*(char *)((int)piVar30 + 5) != cVar18)) {
          if (pRVar20 != (RsxCmd *)0x0) {
            *ForwardPass->command = NV4097_SET_BEGIN_END_x1;
            pRVar16->command[1] = 0;
            pRVar16->command = pRVar16->command + 2;
            pRVar16 = DepthPass;
            if (!bVar14) {
              *DepthPass->command = NV4097_SET_BEGIN_END_x1;
              pRVar16->command[1] = 0;
              pRVar16->command = pRVar16->command + 2;
            }
            pRVar21 = (RsxCmd *)0x0;
            pRVar20 = (RsxCmd *)0x0;
          }
          pRVar16 = ForwardPass;
          if (*(char *)(*piVar30 + 0x20) == -1) {
            if (!bVar14) {
              *ForwardPass->command = NV4097_SET_DEPTH_MASK_x1;
              pRVar16->command[1] = 1;
              pRVar16->command = pRVar16->command + 2;
            }
            bVar14 = true;
          }
          else {
            if (bVar14) {
              *ForwardPass->command = NV4097_SET_DEPTH_MASK_x1;
              pRVar16->command[1] = 0;
              pRVar16->command = pRVar16->command + 2;
            }
            bVar14 = false;
          }
          FUN_004d676c(ForwardPass,0,*piVar30,(ulonglong)*(byte *)((int)piVar30 + 5) & 3,
                       ((ulonglong)*(byte *)((int)piVar30 + 5) << 0x20) >> 0x22 & 3);
          if (!bVar14) {
            FUN_004d676c(DepthPass,0,*piVar30,(ulonglong)*(byte *)((int)piVar30 + 5) & 3,
                         ((ulonglong)*(byte *)((int)piVar30 + 5) << 0x20) >> 0x22 & 3);
          }
          iVar17 = *piVar30;
          cVar18 = *(char *)((int)piVar30 + 5);
        }
        pRVar16 = ForwardPass;
        if (pRVar20 == (RsxCmd *)0x0) {
          RVar22 = piVar30[2];
          uVar6 = *(ushort *)(piVar30 + 3);
          uVar25 = (uint)uVar6;
          uVar27 = 0;
          *ForwardPass->command = 0x400c1714;
          uVar9 = uVar25 + 0xff >> 8;
          pRVar16->command[1] = 0;
          pRVar16->command[2] = 0;
          pRVar16->command[3] = 0;
          pRVar16->command[4] = NV4097_SET_BEGIN_END_x1;
          pRVar16->command[5] = 5;
          pRVar10 = pRVar16->command;
          pRVar20 = pRVar10 + 6;
          pRVar16->command = pRVar10 + 7;
          pRVar10[6] = (uVar25 + 0xff) * 0x400 & 0xfffc0000 | 0x40001824;
          if (uVar9 != 0) {
            do {
              if (uVar25 < 0x101) {
                pRVar10 = pRVar16->command;
                RVar23 = RVar22 | (uint)uVar6 * 0x1000000 - 0x1000000;
                RVar22 = uVar25 + RVar22;
                pRVar16->command = pRVar10 + 1;
                *pRVar10 = RVar23;
              }
              else {
                pRVar10 = pRVar16->command;
                RVar23 = RVar22 | 0xff000000;
                RVar22 = RVar22 + 0x100;
                uVar25 = uVar25 - 0x100;
                pRVar16->command = pRVar10 + 1;
                *pRVar10 = RVar23;
              }
              uVar27 = uVar27 + 1;
            } while (uVar27 < uVar9);
          }
          pRVar16 = DepthPass;
          if (!bVar14) {
            RVar22 = piVar30[2];
            uVar6 = *(ushort *)(piVar30 + 3);
            uVar25 = (uint)uVar6;
            uVar27 = 0;
            *DepthPass->command = 0x400c1714;
            uVar9 = uVar25 + 0xff >> 8;
            pRVar16->command[1] = 0;
            pRVar16->command[2] = 0;
            pRVar16->command[3] = 0;
            pRVar16->command[4] = NV4097_SET_BEGIN_END_x1;
            pRVar16->command[5] = 5;
            pRVar10 = pRVar16->command;
            pRVar21 = pRVar10 + 6;
            pRVar16->command = pRVar10 + 7;
            pRVar10[6] = (uVar25 + 0xff) * 0x400 & 0xfffc0000 | 0x40001824;
            if (uVar9 != 0) {
              do {
                if (uVar25 < 0x101) {
                  pRVar10 = pRVar16->command;
                  RVar23 = RVar22 | (uint)uVar6 * 0x1000000 - 0x1000000;
                  RVar22 = uVar25 + RVar22;
                  pRVar16->command = pRVar10 + 1;
                  *pRVar10 = RVar23;
                }
                else {
                  pRVar10 = pRVar16->command;
                  RVar23 = RVar22 | 0xff000000;
                  RVar22 = RVar22 + 0x100;
                  uVar25 = uVar25 - 0x100;
                  pRVar16->command = pRVar10 + 1;
                  *pRVar10 = RVar23;
                }
                uVar27 = uVar27 + 1;
              } while (uVar27 < uVar9);
            }
          }
        }
        else {
          uVar6 = *(ushort *)(piVar30 + 3);
          uVar24 = (ulonglong)uVar6;
          uVar26 = 0;
          lVar31 = uVar24 + 0xff;
          uVar19 = (ulonglong)(uint)piVar30[2];
          uVar9 = (uint)lVar31;
          *pRVar20 = *pRVar20 & 0xe003ffff | ((uVar9 >> 8) + (*pRVar20 >> 0x12 & 0x7ff)) * 0x40000;
          if (uVar9 >> 8 != 0) {
            do {
              RVar22 = (RsxCmd)uVar19;
              if ((uVar24 & 0xffffffff) < 0x101) {
                pRVar10 = pRVar16->command;
                uVar19 = uVar24 + uVar19;
                pRVar16->command = pRVar10 + 1;
                *pRVar10 = RVar22 | (uint)uVar6 * 0x1000000 - 0x1000000;
              }
              else {
                pRVar10 = pRVar16->command;
                uVar19 = uVar19 + 0x100;
                uVar24 = uVar24 - 0x100;
                pRVar16->command = pRVar10 + 1;
                *pRVar10 = RVar22 | 0xff000000;
              }
              uVar26 = uVar26 + 1;
            } while ((uVar26 & 0xffffffff) < (ulonglong)(lVar31 << 0x20) >> 0x28);
          }
          pRVar16 = DepthPass;
          if (!bVar14) {
            uVar6 = *(ushort *)(piVar30 + 3);
            uVar24 = (ulonglong)uVar6;
            uVar26 = 0;
            lVar31 = uVar24 + 0xff;
            uVar9 = (uint)lVar31;
            uVar19 = (ulonglong)(uint)piVar30[2];
            *pRVar21 = *pRVar21 & 0xe003ffff | ((uVar9 >> 8) + (*pRVar21 >> 0x12 & 0x7ff)) * 0x40000
            ;
            if (uVar9 >> 8 != 0) {
              do {
                RVar22 = (RsxCmd)uVar19;
                if ((uVar24 & 0xffffffff) < 0x101) {
                  pRVar10 = pRVar16->command;
                  uVar19 = uVar24 + uVar19;
                  pRVar16->command = pRVar10 + 1;
                  *pRVar10 = RVar22 | (uint)uVar6 * 0x1000000 - 0x1000000;
                }
                else {
                  pRVar10 = pRVar16->command;
                  uVar19 = uVar19 + 0x100;
                  uVar24 = uVar24 - 0x100;
                  pRVar16->command = pRVar10 + 1;
                  *pRVar10 = RVar22 | 0xff000000;
                }
                uVar26 = uVar26 + 1;
              } while ((uVar26 & 0xffffffff) < (ulonglong)(lVar31 << 0x20) >> 0x28);
            }
          }
        }
        pRVar16 = ForwardPass;
        uVar28 = uVar28 + 1;
        piVar30 = piVar30 + 4;
      } while (uVar28 < uVar8);
      if (pRVar20 != (RsxCmd *)0x0) {
        *ForwardPass->command = NV4097_SET_BEGIN_END_x1;
        pRVar16->command[1] = 0;
        pRVar16->command = pRVar16->command + 2;
        pRVar16 = DepthPass;
        *DepthPass->command = NV4097_SET_BEGIN_END_x1;
        pRVar16->command[1] = 0;
        pRVar16->command = pRVar16->command + 2;
      }
    }
    pRVar16 = ForwardPass;
    *ForwardPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar16->command[1] = 2;
    pRVar16->command = pRVar16->command + 2;
    pRVar16 = ForwardPass;
    *ForwardPass->command = 0x41744;
    pRVar16->command[1] = 2;
    pRVar16->command = pRVar16->command + 2;
    pRVar16 = ForwardPass;
    *ForwardPass->command = 0x4174c;
    pRVar16->command[1] = 2;
    pRVar16->command = pRVar16->command + 2;
    idol_draw::RsxCmd_WritePass(ForwardPass);
    pRVar16 = DepthPass;
    *DepthPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar16->command[1] = 2;
    pRVar16->command = pRVar16->command + 2;
    pRVar16 = DepthPass;
    *DepthPass->command = 0x41744;
    pRVar16->command[1] = 2;
    pRVar16->command = pRVar16->command + 2;
    pRVar16 = DepthPass;
    *DepthPass->command = 0x41748;
    pRVar16->command[1] = 2;
    pRVar16->command = pRVar16->command + 2;
    pRVar16 = DepthPass;
    *DepthPass->command = 0x4174c;
    pRVar16->command[1] = 2;
    pRVar16->command = pRVar16->command + 2;
    idol_draw::RsxCmd_WritePass(DepthPass);
    pRVar16 = ForwardPass;
    *ForwardPass->command = NV4097_SET_DEPTH_MASK_x1;
    pRVar16->command[1] = 0;
    pRVar16->command = pRVar16->command + 2;
  }
  return;
}


// 0x050bf38 (0x30 bytes)
void DrawTfrag(int param_1,undefined8 param_2)

{
  DrawTfrag(*(undefined4 *)(param_1 + 0x28),(ulonglong)*(uint *)(param_1 + 0x18) + 0x10,param_2);
  return;
}


// 0x050bf68 (0x6c bytes)
int FUN_0050bf68(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  if (*(char *)(*param_1 + 0x20) == -1) {
    uVar1 = *param_2;
    if (*(char *)(uVar1 + 0x20) != -1) {
      return -1;
    }
  }
  else {
    uVar1 = *param_2;
    if (*(char *)(uVar1 + 0x20) == -1) {
      return 1;
    }
  }
  return (*param_1 & 0xffffff) - (uVar1 & 0xffffff);
}


// 0x050bfd4 (0x3c bytes)
void FUN_0050bfd4(int param_1)

{
  FUN_005c8308(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 8),0x10,&PTR_FUN_00712268);
  return;
}


// 0x050c020 (0x590 bytes)
void FUN_0050c020(int param_1,undefined4 *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ulonglong *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  char cVar10;
  ulonglong uVar11;
  uint uVar13;
  uint *puVar14;
  float *pfVar15;
  uint uVar16;
  longlong lVar12;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong uVar20;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  uint uVar21;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  longlong lVar22;
  ulonglong unaff_r30;
  longlong lVar23;
  ulonglong unaff_r31;
  byte in_cr6;
  ulonglong in_LR;
  GPiece<16> auVar24;
  undefined4 uVar25;
  undefined4 uVar27;
  undefined4 uVar28;
  GPiece<16> auVar26;
  undefined4 uVar29;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  undefined4 uVar35;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  GPiece<16> auVar36;
  undefined4 uVar40;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  GPiece<16> auVar49;
  GPiece<16> auVar50;
  GPiece<16> auVar51;
  GPiece<16> auVar52;
  GPiece<16> auVar53;
  GPiece<16> auVar54;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar1 = uVar11 - 0x180;
  puVar4 = (ulonglong *)lVar1;
  *puVar4 = uVar11;
  puVar4[0x32] = in_LR;
  puVar4[0x26] = unaff_r22;
  puVar4[0x2e] = unaff_r30;
  puVar4[0x27] = unaff_r23;
  uVar2 = *(uint *)(param_1 + 0x243c);
  puVar4[0x2f] = unaff_r31;
  uVar20 = (ulonglong)*(uint *)(param_1 + 0x2438);
  puVar4[0x28] = unaff_r24;
  iVar9 = g_pIdolDraw;
  uVar25 = FrameHeap;
  puVar4[0x2d] = unaff_r29;
  puVar4[0x2c] = unaff_r28;
  puVar4[0x2b] = unaff_r27;
  puVar4[0x2a] = unaff_r26;
  puVar4[0x29] = unaff_r25;
  puVar4[0x25] = unaff_r21;
  puVar4[0x24] = unaff_r20;
  uVar13 = idol::AllocateMemAlign(uVar25,uVar2 * 0x50,0x10);
  puVar14 = (uint *)idol::AllocateMemAlign(FrameHeap,uVar2 << 2,0x10);
  param_2[1] = uVar13;
  cVar10 = DAT_0159c368;
  *param_2 = puVar14;
  param_2[2] = 0;
  if ((cVar10 == '\0') && (uVar2 != 0)) {
    lVar22 = uVar20 * 0x43;
    lVar23 = uVar20 * 0x7b;
    uVar21 = 0;
    do {
      uVar5 = (uint)uVar20;
      iVar3 = *(int *)(uVar5 + 0x6c);
      if (((*(byte *)(uVar5 + 0x5e) & 4) == 0) && ((*(ushort *)(iVar3 + 0x2a) & 1) == 0)) {
        iVar18 = 0;
        pfVar15 = (float *)&g_FrustumPlanes[0].x;
        do {
          if (pfVar15[1] * *(float *)(uVar5 + 0x44) +
              pfVar15[2] * *(float *)(uVar5 + 0x48) +
              *pfVar15 * *(float *)(uVar5 + 0x40) + pfVar15[3] + ABS(*(float *)(uVar5 + 0x4c)) < 0.0
             ) goto LAB_0050c548;
          iVar18 = iVar18 + 1;
          pfVar15 = pfVar15 + 4;
        } while (iVar18 < 6);
        if ((PTR_DAT_00902e98.piece<0,1>() == '\0') ||
           (uVar16 = ((*(uint *)(uVar5 + 0x58) & 0xff &
                                   (uint)*(byte *)(*(int *)(iVar9 + 0x41c) +
                                                  (*(uint *)(uVar5 + 0x58) >> 8 & 0xff))) == 0),
           uVar6 = (uVar16 == 0),
           uVar6 + ((uint)(ZERO_MASK((uint)DAT_01593350)) & uVar16 - uVar6) == 0))
        {
          puVar7 = (undefined4 *)(uVar5 & 0xfffffff0);
          uVar28 = puVar7[2];
          uVar27 = puVar7[1];
          uVar25 = *puVar7;
          puVar8 = (undefined4 *)(uVar5 + 0x10 & 0xfffffff0);
          uVar34 = puVar8[3];
          uVar33 = puVar8[2];
          uVar32 = puVar8[1];
          uVar29 = *puVar8;
          puVar8 = (undefined4 *)(uVar5 + 0x20 & 0xfffffff0);
          uVar39 = puVar8[3];
          uVar38 = puVar8[2];
          uVar37 = puVar8[1];
          uVar35 = *puVar8;
          puVar8 = (undefined4 *)(uVar5 + 0x30 & 0xfffffff0);
          uVar45 = puVar8[3];
          uVar44 = puVar8[2];
          uVar43 = puVar8[1];
          uVar40 = *puVar8;
          *(undefined4 *)((int)puVar4 + 0x8c) = puVar7[3];
          *(undefined4 *)(puVar4 + 0x11) = uVar28;
          *(undefined4 *)((int)puVar4 + 0x84) = uVar27;
          *(undefined4 *)(puVar4 + 0x10) = uVar25;
          *(undefined4 *)((int)puVar4 + 0x9c) = uVar34;
          *(undefined4 *)(puVar4 + 0x13) = uVar33;
          *(undefined4 *)((int)puVar4 + 0x94) = uVar32;
          *(undefined4 *)(puVar4 + 0x12) = uVar29;
          *(undefined4 *)((int)puVar4 + 0xac) = uVar39;
          *(undefined4 *)(puVar4 + 0x15) = uVar38;
          *(undefined4 *)((int)puVar4 + 0xa4) = uVar37;
          *(undefined4 *)(puVar4 + 0x14) = uVar35;
          *(undefined4 *)((int)puVar4 + 0xbc) = uVar45;
          *(undefined4 *)(puVar4 + 0x17) = uVar44;
          *(undefined4 *)((int)puVar4 + 0xb4) = uVar43;
          *(undefined4 *)(puVar4 + 0x16) = uVar40;
          if ((*(ushort *)(iVar3 + 0x2a) & 6) != 0) {
            FastVecSub(uVar11 - 0x110,uVar20 + 0x40,&g_ViewCamPos.x);
            auVar26 = ZEXT416(0xffffffff);
            auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
            auVar26 = vectorShiftLeftIntegerWord(auVar26,auVar26);
            auVar30 = loadVectorLeftIndexed(0x74,lVar1);
            auVar36 = loadVectorLeftIndexed(0x70,lVar1);
            auVar26 = vectorMultiplyAddFloatingPoint(auVar30,auVar30,auVar26);
            auVar41 = loadVectorLeftIndexed(0x78,lVar1);
            auVar30 = vectorMultiplyAddFloatingPoint(auVar36,auVar36,auVar26);
            auVar26 = loadVectorLeftIndexed(0x14,0x902fe0);
            auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar31 = loadVectorLeftIndexed(0x18,0x902fe0);
            auVar46 = loadVectorLeftIndexed(0x10,0x902fe0);
            auVar48 = loadVectorLeftIndexed(4,0x902fe0);
            auVar47 = loadVectorLeftIndexed(8,0x902fe0);
            auVar41 = vectorMultiplyAddFloatingPoint(auVar41,auVar41,auVar30);
            auVar42 = loadVectorLeftIndexed(0x2fe0,0x900000);
            auVar36 = loadVectorLeftIndexed(0xc,0x902fe0);
            auVar30 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
            vectorCompareGreaterThanOrEqualToFloatingPoint
                      (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,
                       auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60);
            if ((bool)(in_cr6 >> 1 & 1)) {
              auVar26 = ZEXT416(0xfffffff8);
              auVar49 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
              auVar26 = ZEXT416(0xffffffff);
              auVar30 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
              auVar26 = ZEXT416(0xffffffff);
              auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
              uVar19 = (ulonglong)g_MainLoopFrames + lVar22;
              auVar53 = vectorShiftLeftIntegerWord(auVar30,auVar30);
              auVar30 = vectorShiftLeftIntegerWord(auVar26,auVar26);
              auVar26 = ZEXT416(0xffffffff);
              auVar24 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
              auVar26 = loadVectorLeftIndexed(0x902ee0,uVar19 & 0xff);
              auVar50 = loadVectorLeftIndexed(0x902ee0,(uVar19 << 0x20) >> 0x21 & 0xff);
              auVar26 = vectorShiftRightAlgebraicWord(auVar26,auVar49);
              auVar51 = vectorShiftRightAlgebraicWord(auVar50,auVar49);
              auVar50 = vectorConvertFromSignedFixedPointWord(auVar26,0);
              auVar51 = vectorConvertFromSignedFixedPointWord(auVar51,0);
              auVar26 = loadVectorLeftIndexed(4,0x50c010);
              auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar52 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
              lVar12 = ((ulonglong)g_MainLoopFrames & 0x7fffffff) * 2 + lVar23;
              auVar24 = vectorShiftLeftIntegerWord(auVar24,auVar24);
              auVar50 = vectorMultiplyAddFloatingPoint(auVar50,auVar52,auVar53);
              auVar30 = vectorMultiplyAddFloatingPoint(auVar51,auVar52,auVar30);
              auVar26 = ZEXT416(0xffffffff);
              auVar51 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
              lVar12 = lVar12 + (ZERO_MASK((*(ushort *)(iVar3 + 0x2a) & 0xe)) &
                                ((ulonglong)g_MainLoopFrames + lVar23) - lVar12);
              auVar26 = loadVectorLeftIndexed(8,0x50c010);
              auVar51 = vectorShiftLeftIntegerWord(auVar51,auVar51);
              auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
              auVar54 = vectorSubtractFloatingPoint(auVar26,auVar46);
              auVar31 = vectorNegativeMultiplySubtractFloatingPoint(auVar41,auVar31,auVar26);
              auVar26 = loadVectorLeftIndexed(0x902ee0,lVar12 + 0x40U & 0xff);
              auVar30 = vectorMultiplyAddFloatingPoint(auVar50,auVar30,auVar51);
              auVar50 = vectorShiftRightAlgebraicWord(auVar26,auVar49);
              auVar41 = loadVectorLeftIndexed(0x902ee0,(ulonglong)(lVar12 << 0x20) >> 0x21 & 0xff);
              auVar26 = ZEXT416(0xffffffff);
              auVar51 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
              auVar41 = vectorShiftRightAlgebraicWord(auVar41,auVar49);
              auVar49 = vectorConvertFromSignedFixedPointWord(auVar50,0);
              auVar26 = ZEXT416(0xffffffff);
              auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
              auVar50 = vectorConvertFromSignedFixedPointWord(auVar41,0);
              auVar53 = vectorShiftLeftIntegerWord(auVar26,auVar26);
              auVar46 = vectorMultiplyAddFloatingPoint(auVar30,auVar46,auVar54);
              auVar26 = ZEXT416(0xffffffff);
              auVar30 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
              auVar41 = vectorShiftLeftIntegerWord(auVar51,auVar51);
              auVar26 = ZEXT416(0xffffffff);
              auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
              auVar49 = vectorMultiplyAddFloatingPoint(auVar49,auVar52,auVar24);
              auVar30 = vectorShiftLeftIntegerWord(auVar30,auVar30);
              auVar54 = vectorShiftLeftIntegerWord(auVar26,auVar26);
              auVar24 = vectorMultiplyAddFloatingPoint(auVar50,auVar52,auVar41);
              auVar26 = ZEXT416(0xffffffff);
              auVar50 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
              auVar26 = ZEXT416(0xffffffff);
              auVar51 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
              auVar41 = vectorMultiplyAddFloatingPoint(auVar47,auVar46,auVar53);
              auVar30 = vectorMultiplyAddFloatingPoint(auVar36,auVar46,auVar30);
              auVar46 = vectorShiftLeftIntegerWord(auVar50,auVar50);
              auVar26 = ZEXT416(0xffffffff);
              auVar36 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
              auVar26 = ZEXT416(0xffffffff);
              auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
              auVar47 = vectorShiftLeftIntegerWord(auVar36,auVar36);
              auVar36 = vectorMultiplyAddFloatingPoint(auVar41,auVar42,auVar54);
              auVar30 = vectorMultiplyAddFloatingPoint(auVar30,auVar42,auVar46);
              auVar41 = vectorShiftLeftIntegerWord(auVar26,auVar26);
              auVar26 = ZEXT416(0xffffffff);
              auVar46 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
              auVar26 = loadVectorLeftIndexed(0xc,0x50c010);
              auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar42 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
              auVar36 = vectorMultiplyAddFloatingPoint(auVar49,auVar48,auVar36);
              auVar26 = vectorMultiplyAddFloatingPoint(auVar24,auVar48,auVar30);
              auVar46 = vectorShiftLeftIntegerWord(auVar46,auVar46);
              auVar48 = vectorShiftLeftIntegerWord(auVar51,auVar51);
              auVar30 = vectorMultiplyAddFloatingPoint(auVar36,auVar31,auVar47);
              auVar26 = vectorMultiplyAddFloatingPoint(auVar26,auVar31,auVar41);
              auVar36 = vectorMultiplyAddFloatingPoint(auVar30,auVar42,auVar46);
              auVar30 = vectorMultiplyAddFloatingPoint(auVar26,auVar42,auVar48);
              FastMtxScaleIdentity(0x3ff0000000000000,uVar11 - 0xc0);
              auVar26 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
              uVar25 = storeVectorElementWordIndexed
                                 (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0xe0
                                  ,lVar1);
              *(undefined4 *)(puVar4 + 0x1c) = uVar25;
              uVar25 = storeVectorElementWordIndexed
                                 (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0xe4
                                  ,lVar1);
              *(undefined4 *)((int)puVar4 + 0xe4) = uVar25;
              *(undefined4 *)(puVar4 + 0x1d) = 0x3f800000;
              FastVecMtx4Mul(uVar11 - 0x100,uVar20,uVar11 - 0xc0);
            }
          }
          uVar28 = *(undefined4 *)(puVar4 + 0x11);
          uVar27 = *(undefined4 *)((int)puVar4 + 0x84);
          uVar25 = *(undefined4 *)(puVar4 + 0x10);
          uVar34 = *(undefined4 *)((int)puVar4 + 0x9c);
          uVar33 = *(undefined4 *)(puVar4 + 0x13);
          uVar32 = *(undefined4 *)((int)puVar4 + 0x94);
          uVar29 = *(undefined4 *)(puVar4 + 0x12);
          uVar39 = *(undefined4 *)((int)puVar4 + 0xac);
          uVar38 = *(undefined4 *)(puVar4 + 0x15);
          uVar37 = *(undefined4 *)((int)puVar4 + 0xa4);
          uVar35 = *(undefined4 *)(puVar4 + 0x14);
          uVar45 = *(undefined4 *)((int)puVar4 + 0xbc);
          uVar44 = *(undefined4 *)(puVar4 + 0x17);
          uVar43 = *(undefined4 *)((int)puVar4 + 0xb4);
          uVar40 = *(undefined4 *)(puVar4 + 0x16);
          puVar7 = (undefined4 *)(uVar13 & 0xfffffff0);
          puVar7[3] = *(undefined4 *)((int)puVar4 + 0x8c);
          puVar7[2] = uVar28;
          puVar7[1] = uVar27;
          *puVar7 = uVar25;
          puVar7 = (undefined4 *)(uVar13 + 0x10 & 0xfffffff0);
          puVar7[3] = uVar34;
          puVar7[2] = uVar33;
          puVar7[1] = uVar32;
          *puVar7 = uVar29;
          puVar7 = (undefined4 *)(uVar13 + 0x20 & 0xfffffff0);
          puVar7[3] = uVar39;
          puVar7[2] = uVar38;
          puVar7[1] = uVar37;
          *puVar7 = uVar35;
          puVar7 = (undefined4 *)(uVar13 + 0x30 & 0xfffffff0);
          puVar7[3] = uVar45;
          puVar7[2] = uVar44;
          puVar7[1] = uVar43;
          *puVar7 = uVar40;
          *(undefined2 *)(uVar13 + 0x4e) = *(undefined2 *)(uVar5 + 0x68);
          *(undefined2 *)(uVar13 + 0x4c) = *(undefined2 *)(uVar5 + 0x6a);
          *(uint *)(uVar13 + 0x3c) = (uint)*(ushort *)(iVar3 + 0x26);
          iVar17 = idol::AllocateMemAlign(FrameHeap,(ulonglong)*(ushort *)(iVar3 + 0x26) << 2,0x10);
          *(int *)(uVar13 + 0x48) = iVar17;
          iVar18 = *(int *)(iVar9 + 0x4a8);
          *(int *)(uVar5 + 100) = iVar17 - iVar18;
          *(int *)(uVar13 + 0x44) = iVar18 + *(int *)(uVar5 + 0x60);
          *(int *)(uVar13 + 0x40) = *(int *)(iVar9 + 0x4a8) + *(int *)(iVar3 + 0x10);
          *puVar14 = uVar5;
          uVar13 = uVar13 + 0x50;
          puVar14 = puVar14 + 1;
          param_2[2] = param_2[2] + 1;
        }
      }
LAB_0050c548:
      uVar21 = uVar21 + 1;
      lVar22 = lVar22 + 0x1d50;
      lVar23 = lVar23 + 0x35d0;
      uVar20 = uVar20 + 0x70;
    } while (uVar21 < uVar2);
  }
  return;
}


