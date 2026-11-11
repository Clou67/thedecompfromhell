// game/update/moby200.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x425508-0x427f64
// shared update function UpdateMoby_a_lot_1; registered for oClasses 200, 201, 205, 206, 207, 210, 696, 697, 698, 1806, 1807
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "game/update/moby200.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x0425508 (0x14 bytes)
void M1807_00425508(void)

{
  DAT_00857a30 = 0x10000;
  return;
}


// 0x0425540 (0x26c bytes)
MobyInstance *
FUN_00425540(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8,MOBY_OCLASSES param_9,
            undefined8 param_10,undefined4 param_11)

{
  float fVar1;
  undefined4 *puVar2;
  MobyInstance *pMVar3;
  uint uVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  f32 fStack00000030;
  f32 fStack00000034;
  f32 fStack00000038;
  f32 fStack0000003c;
  undefined4 uStack00000040;
  undefined4 uStack00000044;
  undefined4 uStack00000048;
  undefined4 uStack0000004c;
  undefined4 in_stack_00000084;
  
  pMVar3 = CreateMoby(param_9);
  if (pMVar3 != (MobyInstance *)0x0) {
    puVar2 = (undefined4 *)pMVar3->pVar;
    MB_CopyHeroLights(pMVar3);
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = 0xff;
    pMVar3->enabled = '\x01';
    pMVar3->scale = (float)((double)pMVar3->scale * param_1);
    dVar8 = -3.1415927410125732;
    dVar7 = 3.1415927410125732;
    dVar6 = (double)MB_randRangeFloat(-3.1415927,3.1415927);
    (pMVar3->rotation).x = (float)dVar6;
    dVar6 = (double)MB_randRangeFloat((float)dVar8,(float)dVar7);
    (pMVar3->rotation).y = (float)dVar6;
    dVar6 = (double)MB_randRangeFloat((float)dVar8,(float)dVar7);
    (pMVar3->rotation).z = (float)dVar6;
    fStack00000034 = (f32)param_5;
    fStack0000003c = (f32)param_6;
    (pMVar3->pos).y = fStack00000034;
    (pMVar3->pos).w = fStack0000003c;
    uStack00000044 = (undefined4)param_7;
    uStack0000004c = (undefined4)param_8;
    fStack00000030 = (f32)((ulonglong)param_5 >> 0x20);
    fStack00000038 = (f32)((ulonglong)param_6 >> 0x20);
    (pMVar3->pos).x = fStack00000030;
    (pMVar3->pos).z = fStack00000038;
    uStack00000040 = (undefined4)((ulonglong)param_7 >> 0x20);
    uStack00000048 = (undefined4)((ulonglong)param_8 >> 0x20);
    *puVar2 = uStack00000040;
    puVar2[1] = uStack00000044;
    puVar2[2] = uStack00000048;
    puVar2[3] = uStack0000004c;
    dVar6 = (double)MB_randRangeFloat
                              (g_FrameTime * 1.5707964,g_FrameTime * 6.2831855);
    uVar4 = rand();
    fVar1 = 1.0;
    if ((uVar4 & 1) != 0) {
      fVar1 = -1.0;
    }
    puVar2[4] = param_11;
    puVar2[10] = param_11;
    puVar2[5] = (float)param_1;
    puVar2[6] = (float)((double)(float)(dVar6 * (double)fVar1) * param_3);
    uVar5 = FastDoubleToInt((double)(animationSpeed * (float)(param_4 * 60.0)));
    puVar2[7] = uVar5;
    fVar1 = DAT_0071f418;
    puVar2[8] = in_stack_00000084;
    puVar2[9] = (float)(param_2 * 9.800000190734863) * fVar1;
    UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}


// shared update function, registered for oClasses 200, 201, 205, 206, 207, 210, 696, 697, 698, 1806, 1807
// 0x0425808 (0x970 bytes)
// inlined: FastAtan2 @0x425a68
/* Moby 200
   Moby 201
   Moby 205
   Moby 206
   Moby 207
   Moby 210
   Moby 696
   Moby 697
   Moby 698
   Moby 1806
   Moby 1807 */

void UpdateMoby_200(MobyInstance *moby)

{
  f32 fVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float fVar9;
  uint uVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  int iVar14;
  longlong lVar13;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  longlong lVar20;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined8 uVar25;
  double dVar26;
  ulonglong in_f20;
  double dVar27;
  ulonglong in_f21;
  double dVar28;
  ulonglong in_f22;
  ulonglong in_f23;
  double dVar29;
  ulonglong in_f24;
  double dVar30;
  ulonglong in_f25;
  double dVar31;
  ulonglong in_f26;
  double dVar32;
  ulonglong in_f27;
  double dVar33;
  ulonglong in_f28;
  double dVar34;
  ulonglong in_f29;
  double dVar35;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar13 = uVar12 - 0x160;
  puVar11 = (ulonglong *)lVar13;
  *puVar11 = uVar12;
  puVar11[0x2e] = in_LR;
  puVar11[0x20] = in_f20;
  puVar11[0x21] = in_f21;
  puVar11[0x22] = in_f22;
  puVar11[0x23] = in_f23;
  puVar11[0x24] = in_f24;
  puVar11[0x25] = in_f25;
  puVar11[0x26] = in_f26;
  puVar11[0x27] = in_f27;
  puVar11[0x28] = in_f28;
  puVar11[0x29] = in_f29;
  puVar11[0x2a] = in_f30;
  puVar11[0x2b] = in_f31;
  puVar11[0x1f] = unaff_r31;
  puVar11[0x1e] = unaff_r30;
  pfVar8 = (float *)moby->pVar;
  fVar1 = (moby->pos).y;
  *(f32 *)(puVar11 + 0xe) = (moby->pos).x;
  fVar2 = (moby->pos).z;
  *(f32 *)((int)puVar11 + 0x74) = fVar1;
  fVar1 = (moby->pos).w;
  *(f32 *)(puVar11 + 0xf) = fVar2;
  *(f32 *)((int)puVar11 + 0x7c) = fVar1;
  pfVar8[2] = pfVar8[2] - pfVar8[9];
  fVar3 = (moby->rotation).z;
  (moby->pos).x = (moby->pos).x + *pfVar8;
  (moby->pos).y = (moby->pos).y + pfVar8[1];
  (moby->pos).z = (moby->pos).z + pfVar8[2];
  puVar11[0x1d] = unaff_r29;
  puVar11[0x1c] = unaff_r28;
  dVar22 = (double)FastWrapRot(fVar3,pfVar8[6]);
  fVar1 = (moby->pos).x;
  (moby->rotation).z = (float)dVar22;
  uVar10 = (int)fVar1 >> 0x1f;
  iVar14 = (uVar10 >> 1 ^ (uint)fVar1) - uVar10;
  if ((((iVar14 < 0x40000000) || (0x447f4000 < iVar14)) ||
      (fVar1 = (moby->pos).y, uVar10 = (int)fVar1 >> 0x1f,
      iVar14 = (uVar10 >> 1 ^ (uint)fVar1) - uVar10, 0x447f4000 < iVar14 || iVar14 < 0x40000000)) ||
     ((fVar1 = (moby->pos).z, uVar10 = (int)fVar1 >> 0x1f,
      iVar14 = (uVar10 >> 1 ^ (uint)fVar1) - uVar10, iVar14 < 0x40000000 || (0x447f4000 < iVar14))))
  {
    DeleteMoby(moby);
  }
  else {
    iVar14 = FastDecTimerS32(pfVar8 + 7);
    if (iVar14 != 0) {
      lVar20 = (longlong)(int)moby + 0x10;
      iVar14 = CollLine(uVar12 - 0xf0,lVar20,0,(longlong)(int)moby,0);
      if ((iVar14 != 0) || (iVar14 = CollSphere((double)pfVar8[5],lVar20), iVar14 != 0)) {
        fVar3 = *pfVar8;
        fVar9 = pfVar8[1];
        fVar5 = ABS(*pfVar8);
        fVar4 = ABS(pfVar8[1]);
        *(float *)(puVar11 + 0x14) = fVar5 - fVar4;
        dVar22 = 0.0;
        uVar16 = (ulonglong)((uint)fVar3 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar11 + 0x14) >> 0x1e) & 2 |
                 (ulonglong)((uint)fVar9 >> 0x1d) & 4;
        fVar3 = fVar5;
        if (*(float *)(puVar11 + 0x14) - 0.0 < 0.0) {
          fVar3 = fVar4;
        }
        fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
        fVar9 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
        if (*(float *)(puVar11 + 0x14) - 0.0 < 0.0) {
          fVar4 = fVar5;
        }
        dVar26 = dVar22;
        if (0.0 < fVar3) {
          lVar18 = uVar12 - 0x150;
          lVar17 = uVar12 - 0xbc;
          lVar20 = uVar12 - 0xac;
          lVar21 = 2;
          fVar3 = (fVar4 - fVar3) / (fVar4 + fVar3);
          fVar4 = fVar3 * fVar3;
          *(float *)(puVar11 + 0x16) = fVar3;
          *(float *)(puVar11 + 0x15) = fVar3;
          *(float *)((int)puVar11 + 0xac) = fVar3;
          *(float *)((int)puVar11 + 0xa4) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)(puVar11 + 0x15) = *(float *)(puVar11 + 0x15) * fVar4;
          *(float *)((int)puVar11 + 0xac) = *(float *)((int)puVar11 + 0xac) * fVar3;
          *(float *)(puVar11 + 0x16) = *(float *)(puVar11 + 0x16) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar18 + 0xa4) = *(float *)((int)lVar18 + 0x94) * fVar3 * fVar3;
            iVar14 = (int)lVar17;
            lVar18 = lVar18 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)(iVar14 + 4) * fVar3 * fVar3;
            lVar20 = lVar20 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar18 = uVar12 - 0xbc;
          lVar21 = 4;
          pfVar19 = (float *)&DAT_007358e0;
          lVar20 = lVar18;
          lVar17 = lVar13;
          do {
            fVar3 = *pfVar19;
            fVar4 = pfVar19[1];
            pfVar19 = pfVar19 + 2;
            *(float *)((int)lVar17 + 0xa4) = *(float *)((int)lVar17 + 0xa4) * fVar3;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar4;
            lVar20 = lVar20 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar20 = 2;
          do {
            iVar14 = (int)lVar13;
            iVar15 = (int)lVar18;
            lVar13 = lVar13 + 0x10;
            lVar18 = lVar18 + 0x10;
            dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar14 + 0xa4)) +
                              *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                             *(float *)(iVar15 + 0xc));
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar7 + fVar9);
        }
        dVar35 = -3.1415927410125732;
        dVar34 = 3.1415927410125732;
        dVar23 = (double)MB_randRangeFloat(-3.1415927,3.1415927);
        dVar23 = (double)FastWrapRot((float)dVar26,(float)dVar23);
        dVar33 = 3.141592502593994;
        fVar3 = (float)(dVar23 + 1.570796251296997);
        dVar32 = -3.141592502593994;
        dVar31 = -0.16666656732559204;
        dVar30 = 0.008333025500178337;
        dVar29 = -0.0001980741071747616;
        dVar23 = 2.601886990305502e-06;
        fVar9 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar9 = fVar3;
        }
        fVar4 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar9 < 0.0) {
          fVar4 = fVar9;
        }
        dVar28 = 0.3499999940395355;
        fVar5 = fVar4 * fVar4;
        fVar3 = fVar5 * fVar5 * fVar4;
        fVar9 = fVar5 * fVar3;
        dVar27 = (double)(fVar5 * fVar9 * 2.601887e-06 +
                         fVar9 * -0.0001980741 +
                         fVar3 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4);
        dVar24 = (double)MB_randRangeFloat((float)dVar22,pfVar8[2] * 0.35);
        dVar27 = (double)(float)(dVar27 * dVar24);
        dVar24 = (double)MB_randRangeFloat((float)dVar35,(float)dVar34);
        dVar24 = (double)FastWrapRot((float)dVar26,(float)dVar24);
        dVar26 = (double)(float)(dVar33 - dVar24);
        if (dVar24 - (double)(float)(dVar33 - dVar24) < 0.0) {
          dVar26 = dVar24;
        }
        dVar33 = (double)(float)(dVar32 - dVar24);
        if ((double)(float)(dVar32 - dVar24) - dVar26 < 0.0) {
          dVar33 = dVar26;
        }
        dVar32 = (double)(float)(dVar33 * dVar33);
        dVar24 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar33));
        dVar26 = (double)(float)(dVar32 * dVar24);
        dVar23 = (double)(float)((double)(float)(dVar32 * dVar26) * dVar23 +
                                (double)(float)(dVar26 * dVar29 +
                                               (double)(float)(dVar24 * dVar30 +
                                                              (double)(float)((double)(float)(dVar32
                                                                                             * 
                                                  dVar33) * dVar31 + dVar33))));
        dVar26 = (double)MB_randRangeFloat
                                   ((float)dVar22,(float)((double)pfVar8[2] * dVar28));
        dVar23 = (double)(float)(dVar23 * dVar26);
        dVar26 = (double)MB_randRangeFloat((float)dVar35,(float)dVar34);
        (moby->rotation).x = (float)dVar26;
        dVar26 = (double)MB_randRangeFloat((float)dVar35,(float)dVar34);
        (moby->rotation).y = (float)dVar26;
        dVar26 = (double)MB_randRangeFloat((float)dVar35,(float)dVar34);
        (moby->rotation).z = (float)dVar26;
        FastVecNormalize(pfVar8,pfVar8,0xa10980);
        dVar26 = (double)MB_randRangeFloat(0.07,0.13);
        *pfVar8 = (float)((double)*pfVar8 * dVar26 + dVar27);
        pfVar8[2] = (float)((double)pfVar8[2] * dVar26);
        pfVar8[1] = (float)((double)pfVar8[1] * dVar26 + dVar23);
        dVar29 = (double)g_CollOutput.ip.x;
        dVar30 = (double)g_CollOutput.ip.y;
        dVar31 = (double)g_CollOutput.ip.z;
        dVar23 = (double)SQRT(g_CollOutput.normal.z * g_CollOutput.normal.z +
                              g_CollOutput.normal.x * g_CollOutput.normal.x +
                              g_CollOutput.normal.y * g_CollOutput.normal.y);
        fVar3 = (float)(0.10000000149011612 / dVar23);
        dVar26 = dVar22;
        if (dVar22 - dVar23 < 0.0) {
          dVar26 = (double)(g_CollOutput.normal.x * fVar3);
        }
        dVar32 = dVar22;
        if (dVar22 - dVar23 < 0.0) {
          dVar32 = (double)(g_CollOutput.normal.y * fVar3);
        }
        dVar33 = dVar22;
        if (dVar22 - dVar23 < 0.0) {
          dVar33 = (double)(g_CollOutput.normal.z * fVar3);
        }
        if (dVar23 - dVar22 < 0.0) {
          dVar26 = (double)(g_CollOutput.normal.x * fVar3);
        }
        if (dVar23 - dVar22 < 0.0) {
          dVar32 = (double)(g_CollOutput.normal.y * fVar3);
        }
        if (dVar23 - dVar22 < 0.0) {
          dVar33 = (double)(g_CollOutput.normal.z * fVar3);
        }
        g_CollOutput.normal.x = (float)dVar26;
        g_CollOutput.normal.y = (float)dVar32;
        g_CollOutput.normal.z = (float)dVar33;
        (moby->pos).w = g_CollOutput.normal.w;
        (moby->pos).x = (float)(dVar26 + dVar29);
        (moby->pos).y = (float)(dVar32 + dVar30);
        (moby->pos).z = (float)(dVar33 + dVar31);
        dVar26 = (double)MB_randRangeFloat
                                   (g_FrameTime * 1.5707964,
                                    g_FrameTime * 6.2831855);
        fVar3 = 1.0;
        if (dVar22 - (double)pfVar8[6] < 0.0) {
          fVar3 = -1.0;
        }
        pfVar8[6] = (float)(dVar26 * (double)fVar3);
      }
    }
    if (pfVar8[8] == 0.0) {
      iVar14 = FastDecTimerS32(pfVar8 + 4);
      if ((iVar14 != 0) ||
         ((SQRT(pfVar8[2] * pfVar8[2] + *pfVar8 * *pfVar8 + pfVar8[1] * pfVar8[1]) <
           g_FrameTime * 0.5 && (pfVar8[7] == 0.0)))) {
        iVar14 = 0;
        dVar22 = 0.0;
        dVar26 = -1.0;
        dVar23 = 1.0;
        dVar29 = 0.5;
        dVar30 = 70000.0;
        dVar31 = 140000.0;
        do {
          *(undefined4 *)(puVar11 + 0x10) = 0;
          *(undefined4 *)((int)puVar11 + 0x84) = 0;
          *(undefined4 *)(puVar11 + 0x11) = 0;
          *(undefined4 *)((int)puVar11 + 0x8c) = 0;
          dVar32 = (double)MB_randRangeFloat((float)dVar26,(float)dVar23);
          *(float *)(puVar11 + 0x10) = (float)dVar32;
          dVar32 = (double)MB_randRangeFloat((float)dVar26,(float)dVar23);
          *(float *)((int)puVar11 + 0x84) = (float)dVar32;
          dVar32 = (double)MB_randRangeFloat((float)dVar26,(float)dVar23);
          *(float *)(puVar11 + 0x11) = (float)dVar32;
          *(undefined4 *)(puVar11 + 0x12) = 0;
          *(undefined4 *)((int)puVar11 + 0x94) = 0;
          *(undefined4 *)(puVar11 + 0x13) = 0;
          *(undefined4 *)((int)puVar11 + 0x9c) = 0;
          dVar32 = (double)MB_randRangeFloat((float)dVar26,(float)dVar23);
          *(float *)(puVar11 + 0x12) = (float)dVar32;
          dVar32 = (double)MB_randRangeFloat((float)dVar26,(float)dVar23);
          *(float *)((int)puVar11 + 0x94) = (float)dVar32;
          dVar32 = (double)MB_randRangeFloat((float)dVar26,(float)dVar23);
          *(float *)(puVar11 + 0x13) = (float)dVar32;
          dVar32 = (double)MB_randRangeFloat((float)dVar22,(float)dVar29);
          fVar9 = *(float *)((int)puVar11 + 0x94);
          fVar4 = *(float *)(puVar11 + 0x12);
          fVar5 = *(float *)(puVar11 + 0x13);
          fVar7 = (moby->pos).x;
          fVar6 = (moby->pos).y;
          dVar33 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar9 * fVar9);
          fVar3 = (float)(dVar32 / dVar33);
          dVar32 = dVar22;
          if (dVar22 - dVar33 < 0.0) {
            dVar32 = (double)(fVar5 * fVar3);
          }
          dVar34 = dVar22;
          if (dVar22 - dVar33 < 0.0) {
            dVar34 = (double)(fVar9 * fVar3);
          }
          dVar35 = dVar22;
          if (dVar22 - dVar33 < 0.0) {
            dVar35 = (double)(fVar4 * fVar3);
          }
          if (dVar33 - dVar22 < 0.0) {
            dVar32 = (double)(fVar5 * fVar3);
          }
          if (dVar33 - dVar22 < 0.0) {
            dVar34 = (double)(fVar9 * fVar3);
          }
          if (dVar33 - dVar22 < 0.0) {
            dVar35 = (double)(fVar4 * fVar3);
          }
          *(float *)(puVar11 + 0x13) = (float)(dVar32 + (double)(moby->pos).z);
          *(float *)((int)puVar11 + 0x94) = (float)(dVar34 + (double)fVar6);
          *(float *)(puVar11 + 0x12) = (float)(dVar35 + (double)fVar7);
          dVar32 = (double)MB_randRangeFloat((float)dVar22,(float)dVar29);
          fVar9 = *(float *)((int)puVar11 + 0x84);
          fVar4 = *(float *)(puVar11 + 0x10);
          fVar5 = *(float *)(puVar11 + 0x11);
          dVar33 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar9 * fVar9);
          fVar3 = (float)((double)(float)(dVar32 * (double)g_FrameTime) / dVar33);
          dVar32 = dVar22;
          if (dVar22 - dVar33 < 0.0) {
            dVar32 = (double)(fVar4 * fVar3);
          }
          dVar34 = dVar22;
          if (dVar22 - dVar33 < 0.0) {
            dVar34 = (double)(fVar9 * fVar3);
          }
          dVar35 = dVar22;
          if (dVar22 - dVar33 < 0.0) {
            dVar35 = (double)(fVar5 * fVar3);
          }
          if (dVar33 - dVar22 < 0.0) {
            dVar32 = (double)(fVar4 * fVar3);
          }
          if (dVar33 - dVar22 < 0.0) {
            dVar34 = (double)(fVar9 * fVar3);
          }
          if (dVar33 - dVar22 < 0.0) {
            dVar35 = (double)(fVar5 * fVar3);
          }
          *(float *)(puVar11 + 0x10) = (float)dVar32;
          *(float *)((int)puVar11 + 0x84) = (float)dVar34;
          *(float *)(puVar11 + 0x11) = (float)dVar35;
          *(float *)(puVar11 + 0x10) = (float)(dVar32 + (double)*pfVar8);
          *(float *)((int)puVar11 + 0x84) = (float)(dVar34 + (double)pfVar8[1]);
          *(float *)(puVar11 + 0x11) = (float)(dVar35 + (double)pfVar8[2]);
          uVar25 = MB_randRangeFloat((float)dVar30,(float)dVar31);
          iVar15 = MB_randRange(0x14,0x3c);
          puVar11[0x19] = (longlong)iVar15;
          puVar11[0x19] =
               (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar11[0x19] + dVar29));
          SpawnPart_22(uVar25,uVar12 - 0xd0,uVar12 - 0xe0,0x1f0c1820,&DAT_00081020);
          iVar14 = iVar14 + 1;
        } while (iVar14 < 0x28);
        DeleteMoby(moby);
      }
    }
    else {
      iVar14 = FastDecTimerS32(pfVar8 + 4);
      if (iVar14 == 0) {
        moby->alpha = (s8)(((int)pfVar8[4] * 0x7f) / (int)pfVar8[10]);
      }
      else {
        DeleteMoby(moby);
      }
    }
  }
  return;
}


// 0x0426178 (0x4d4 bytes)
// strings: 00657310: 'width:%f \n' | 00657320: 'height:%f \n' | 00657330: 'width_div:%d \n' | 00657340: 'height_div:%d \n' | 00657350: 'r:%d \n' | 00657358: 'g:%d \n' | 00657360: 'b:%d \n' | 00657368: 'alpha:%d \n' | 00657378: 'top_rate:%f \n' | 00657388: 'bottom_rate:%f \n' | 006573a0: 'top_h_amp:%f \n' | 006573b0: 'top_v_amp:%f \n' | 006573c0: 'bottom_h_amp:%f \n' | 006573d8: 'bottom_v_amp:%f \n' | 006573f0: 'xh_ang_variance:%f \n' | 00657408: 'yv_ang_variance:%f \n' | 00657420: 'yh_ang_variance:%f \n' | 00657438: 'xv_ang_variance:%f \n' | 00657450: 'blend_a:%d \n' | 00657460: 'blend_b:%d \n' | 00657470: 'blend_c:%d \n' | 00657480: 'blend_d:%d \n' | 00657490: 's_scroll_speed:%f \n' | 006574a8: 's_scroll_sinamp:%f \n' | 006574c0: 's_scroll_sinrate:%f \n' | 006574d8: 't_scroll_speed:%f \n' | 006574f0: 't_scroll_sinamp:%f \n' | 00657508: 't_scroll_sinrate:%f \n' | 00657520: 'rate_variance_amp:%f \n' | 00657538: 'rate_variance_rate:%f \n'

int32_t M1807_00426178(float *param_1)

{
  int32_t iVar1;
  
  printf("width:%f \n",(double)*param_1);
  printf("height:%f \n",(double)param_1[1]);
  printf("width_div:%d \n",(ulonglong)*(byte *)(param_1 + 2));
  printf("height_div:%d \n",(ulonglong)*(byte *)((int)param_1 + 9));
  printf("r:%d \n",(ulonglong)*(byte *)(param_1 + 4));
  printf("g:%d \n",(ulonglong)*(byte *)((int)param_1 + 0x11));
  printf("b:%d \n",(ulonglong)*(byte *)((int)param_1 + 0x12));
  printf("alpha:%d \n",(ulonglong)*(byte *)((int)param_1 + 0x13));
  printf("top_rate:%f \n",(double)param_1[5]);
  printf("bottom_rate:%f \n",(double)param_1[6]);
  printf("top_h_amp:%f \n",(double)param_1[7]);
  printf("top_v_amp:%f \n",(double)param_1[8]);
  printf("bottom_h_amp:%f \n",(double)param_1[8]);
  printf("bottom_v_amp:%f \n",(double)param_1[8]);
  printf("xh_ang_variance:%f \n",(double)param_1[0xb]);
  printf("yv_ang_variance:%f \n",(double)param_1[0xc]);
  printf("yh_ang_variance:%f \n",(double)param_1[0xd]);
  printf("xv_ang_variance:%f \n",(double)param_1[0xe]);
  printf("blend_a:%d \n",(ulonglong)*(byte *)(param_1 + 0xf));
  printf("blend_b:%d \n",(ulonglong)*(byte *)((int)param_1 + 0x3d));
  printf("blend_c:%d \n",(ulonglong)*(byte *)((int)param_1 + 0x3e));
  printf("blend_d:%d \n",(ulonglong)*(byte *)((int)param_1 + 0x3f));
  printf("s_scroll_speed:%f \n",(double)param_1[0x10]);
  printf("s_scroll_sinamp:%f \n",(double)param_1[0x11]);
  printf("s_scroll_sinrate:%f \n",(double)param_1[0x12]);
  printf("t_scroll_speed:%f \n",(double)param_1[0x13]);
  printf("t_scroll_sinamp:%f \n",(double)param_1[0x14]);
  printf("t_scroll_sinrate:%f \n",(double)param_1[0x15]);
  printf("rate_variance_amp:%f \n",(double)param_1[0x16]);
  printf("rate_variance_rate:%f \n",(double)param_1[0x17]);
  printf("top_ang_h_offset:%f \n",(double)param_1[0x18]);
  printf("top_ang_v_offset:%f \n",(double)param_1[0x19]);
  printf("bot_ang_h_offset:%f \n",(double)param_1[0x1a]);
  printf("bot_ang_v_offset:%f \n",(double)param_1[0x1b]);
  printf("texture_w_count:%f \n",(double)param_1[0x1c]);
  printf("texture_h_count:%f \n",(double)param_1[0x1d]);
  printf("x_ang_to_depth:%f \n",(double)param_1[0x1e]);
  printf("y_ang_to_depth:%f \n",(double)param_1[0x1f]);
  printf("left_height:%f \n",(double)param_1[0x20]);
  printf("right_height:%f \n",(double)param_1[0x21]);
  printf("rand_frac:%f \n",(double)param_1[0x22]);
  printf("rand_rate:%f \n",(double)param_1[0x23]);
  printf("rand_xtime_factor:%f \n",(double)param_1[0x34]);
  printf("rand_ytime_factor:%f \n",(double)param_1[0x35]);
  printf("rand_0time_factor:%f \n",(double)param_1[0x36]);
  iVar1 = printf("\n");
  return iVar1;
}


// 0x042664c (0xc5c bytes)
// strings: 006576ac: 'host:c:/data/M671_%04d.txt' | 006576cc: "Can't create M671 parameter file %s\n" | 006576f4: 'M671 Fire Parameters\r\n' | 0065770c: 'width:%f \r\r\n' | 0065771c: 'height:%f \r\n' | 0065772c: 'width_div:%d \r\n' | 0065773c: 'height_div:%d \r\n' | 00657754: 'r:%d \r\n' | 0065775c: 'g:%d \r\n' | 00657764: 'b:%d \r\n' | 0065776c: 'alpha:%d \r\n' | 0065777c: 'top_rate:%f \r\n' | 0065778c: 'bottom_rate:%f \r\n' | 006577a4: 'top_h_amp:%f \r\n' | 006577b4: 'top_v_amp:%f \r\n' | 006577c4: 'bottom_h_amp:%f \r\n' | 006577dc: 'bottom_v_amp:%f \r\n' | 006577f4: 'xh_ang_variance:%f \r\n' | 0065780c: 'yv_ang_variance:%f \r\n' | 00657824: 'yh_ang_variance:%f \r\n' | 0065783c: 'xv_ang_variance:%f \r\n' | 00657854: 'blend_a:%d \r\n' | 00657864: 'blend_b:%d \r\n' | 00657874: 'blend_c:%d \r\n' | 00657884: 'blend_d:%d \r\n' | 00657894: 's_scroll_speed:%f \r\n' | 006578ac: 's_scroll_sinamp:%f \r\n' | 006578c4: 's_scroll_sinrate:%f \r\n' | 006578dc: 't_scroll_speed:%f \r\n' | 006578f4: 't_scroll_sinamp:%f \r\n'

int32_t M1807_0042664c(float *param_1)

{
  undefined8 uVar1;
  int32_t iVar2;
  size_t sVar3;
  int iVar4;
  char acStack_c0 [64];
  char acStack_80 [88];
  
  iVar4 = 0;
  do {
    snprintf(acStack_c0,"host:c:/data/M671_%04d.txt",iVar4);
    uVar1 = FUN_00502dcc(acStack_c0,0);
    if ((int)uVar1 < 0) break;
    STUB_00502ddc(uVar1);
    iVar4 = iVar4 + 1;
  } while (-1 < (int)uVar1);
  uVar1 = FUN_00502dcc(acStack_c0,1);
  if (((int)uVar1 < 0) && (uVar1 = FUN_00502dcc(acStack_c0,3), (int)uVar1 < 0)) {
    iVar2 = printf("Can\'t create M671 parameter file %s\n",acStack_c0);
  }
  else {
    snprintf(acStack_80,"M671 Fire Parameters\r\n");
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"width:%f \r\r\n",(double)*param_1);
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"height:%f \r\n",(double)param_1[1]);
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"width_div:%d \r\n",(ulonglong)*(byte *)(param_1 + 2));
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"height_div:%d \r\n",(ulonglong)*(byte *)((int)param_1 + 9));
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"r:%d \r\n",(ulonglong)*(byte *)(param_1 + 4));
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"g:%d \r\n",(ulonglong)*(byte *)((int)param_1 + 0x11));
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"b:%d \r\n",(ulonglong)*(byte *)((int)param_1 + 0x12));
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"alpha:%d \r\n",(ulonglong)*(byte *)((int)param_1 + 0x13));
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"top_rate:%f \r\n",(double)param_1[5]);
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"bottom_rate:%f \r\n",(double)param_1[6]);
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"top_h_amp:%f \r\n",(double)param_1[7]);
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"top_v_amp:%f \r\n",(double)param_1[8]);
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"bottom_h_amp:%f \r\n",(double)param_1[9]);
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"bottom_v_amp:%f \r\n",(double)param_1[10]);
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"xh_ang_variance:%f \r\n",(double)param_1[0xb]);
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"yv_ang_variance:%f \r\n",(double)param_1[0xc]);
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"yh_ang_variance:%f \r\n",(double)param_1[0xd]);
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"xv_ang_variance:%f \r\n",(double)param_1[0xe]);
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"blend_a:%d \r\n",(ulonglong)*(byte *)(param_1 + 0xf));
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"blend_b:%d \r\n",(ulonglong)*(byte *)((int)param_1 + 0x3d));
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"blend_c:%d \r\n",(ulonglong)*(byte *)((int)param_1 + 0x3e));
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"blend_d:%d \r\n",(ulonglong)*(byte *)((int)param_1 + 0x3f));
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"s_scroll_speed:%f \r\n",(double)param_1[0x10]);
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"s_scroll_sinamp:%f \r\n",(double)param_1[0x11]);
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"s_scroll_sinrate:%f \r\n",(double)param_1[0x12]);
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"t_scroll_speed:%f \r\n",(double)param_1[0x13]);
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"t_scroll_sinamp:%f \r\n",(double)param_1[0x14]);
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"t_scroll_sinrate:%f \r\n",(double)param_1[0x15]);
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"rate_variance_amp:%f \r\n",(double)param_1[0x16]);
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"rate_variance_rate:%f \r\n",(double)param_1[0x17]);
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"top_ang_h_offset:%f \r\n",(double)param_1[0x18]);
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"top_ang_v_offset:%f \r\n",(double)param_1[0x19]);
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"bot_ang_h_offset:%f \r\n",(double)param_1[0x1a]);
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"bot_ang_v_offset:%f \r\n",(double)param_1[0x1b]);
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"texture_w_count:%f \r\n",(double)param_1[0x1c]);
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"texture_h_count:%f \r\n",(double)param_1[0x1d]);
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"x_ang_to_depth:%f \r\n",(double)param_1[0x1e]);
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"y_ang_to_depth:%f \r\n",(double)param_1[0x1f]);
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"left_height:%f \r\n",(double)param_1[0x20]);
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"right_height:%f \r\n",(double)param_1[0x21]);
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"rand_frac:%f \r\n",(double)param_1[0x22]);
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"rand_rate:%f \r\n",(double)param_1[0x23]);
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"rand_xtime_factor:%f \r\n",(double)param_1[0x34]);
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"rand_ytime_factor:%f \r\n",(double)param_1[0x35]);
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"rand_0time_factor:%f \r\n",(double)param_1[0x36]);
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    snprintf(acStack_80,"\r\n");
    sVar3 = strlen(acStack_80);
    STUB_00502de8(uVar1,acStack_80,sVar3);
    iVar2 = STUB_00502ddc(uVar1);
  }
  return iVar2;
}


// 0x04272d8 (0xc8c bytes)
// strings: 00657ab8: 'width:%f ->' | 00657ad0: 'height:%f ->' | 00657ae0: 'width_div:%d ->' | 00657af8: 'height_div:%d ->' | 00657b10: 'alpha:%d ->' | 00657b20: 'top_rate:%f ->' | 00657b48: 'top_h_amp:%f ->' | 00657b58: 'top_v_amp:%f ->' | 00657b68: 'bottom_h_amp:%f ->' | 00657b80: 'bottom_v_amp:%f ->' | 00657b98: 'xh_ang_variance:%f ->' | 00657bb0: 'yv_ang_variance:%f ->' | 00657bc8: 'yh_ang_variance:%f ->' | 00657be0: 'xv_ang_variance:%f ->' | 00657bf8: 'rate_variance_amp:%f ->' | 00657c10: 'rate_variance_rate:%f ->' | 00657c30: 'top_ang_h_offset:%f ->' | 00657c48: 'top_ang_v_offset:%f ->' | 00657c60: 'bot_ang_h_offset:%f ->' | 00657c78: 'bot_ang_v_offset:%f ->' | 00657c90: 'x_ang_to_depth:%f ->' | 00657ca8: 'y_ang_to_depth:%f ->' | 00657cc0: 'left_height:%f ->' | 00657cf0: 'rand_frac:%f ->' | 004272d0: '?fff`' | 00657d00: 'rand_rate:%f ->' | 00657d10: 'rand_xtime_factor:%f ->' | 00657d28: 'rand_ytime_factor:%f ->' | 00657d40: 'rand_0time_factor:%f ->'

ulonglong M1807_004272d8(double param_1,float *param_2,ulonglong param_3)

{
  float fVar1;
  int iVar2;
  int32_t iVar3;
  char cVar4;
  byte bVar5;
  double dVar6;
  double dVar7;
  
  iVar2 = (int)param_3;
  if (iVar2 < 0xe) {
    if (iVar2 < 6) {
      if (iVar2 == 5) {
        printf("top_rate:%f ->",(double)param_2[5]);
        dVar7 = (double)FastWrapRot(param_2[5],(float)(param_1 * 3.1415927410125732));
        param_2[5] = (float)dVar7;
        iVar3 = printf("%f\n",dVar7);
        param_3 = (ulonglong)iVar3;
      }
      else if (iVar2 == 4) {
        printf("alpha:%d ->",(ulonglong)*(byte *)((int)param_2 + 0x13));
        cVar4 = FastDoubleToInt((double)(float)(param_1 * 128.0));
        bVar5 = *(char *)((int)param_2 + 0x13) + cVar4;
        *(byte *)((int)param_2 + 0x13) = bVar5;
        iVar3 = printf("%d\n",(ulonglong)bVar5);
        param_3 = (ulonglong)iVar3;
      }
      else if (iVar2 == 3) {
        printf("height_div:%d ->",(ulonglong)*(byte *)((int)param_2 + 9));
        cVar4 = FastDoubleToInt((double)(float)(param_1 * 5.0));
        bVar5 = *(char *)((int)param_2 + 9) + cVar4;
        *(byte *)((int)param_2 + 9) = bVar5;
        if (bVar5 == 0) {
          bVar5 = 2;
          *(undefined1 *)((int)param_2 + 9) = 2;
        }
        if (0x28 < bVar5) {
          bVar5 = 0x19;
          *(undefined1 *)((int)param_2 + 9) = 0x19;
        }
        iVar3 = printf("%d\n",(ulonglong)bVar5);
        param_3 = (ulonglong)iVar3;
      }
      else if (iVar2 == 2) {
        printf("width_div:%d ->",(ulonglong)*(byte *)(param_2 + 2));
        cVar4 = FastDoubleToInt((double)(float)(param_1 * 5.0));
        bVar5 = *(char *)(param_2 + 2) + cVar4;
        *(byte *)(param_2 + 2) = bVar5;
        if (bVar5 == 0) {
          bVar5 = 2;
          *(undefined1 *)(param_2 + 2) = 2;
        }
        if (0x28 < bVar5) {
          bVar5 = 0x19;
          *(undefined1 *)(param_2 + 2) = 0x19;
        }
        iVar3 = printf("%d\n",(ulonglong)bVar5);
        param_3 = (ulonglong)iVar3;
      }
      else if (iVar2 == 1) {
        printf("height:%f ->",(double)param_2[1]);
        dVar6 = (double)param_2[1];
        iVar2 = FastDoubleToInt((double)(float)(param_1 * 10.0));
        dVar7 = (double)(float)(dVar6 + (double)(longlong)iVar2);
        param_2[1] = (float)(dVar6 + (double)(longlong)iVar2);
        if (dVar7 < 0.10000000149011612) {
          param_2[1] = 0.1;
          dVar7 = 0.10000000149011612;
        }
        iVar3 = printf("%f\n",dVar7);
        param_3 = (ulonglong)iVar3;
      }
      else if (iVar2 == 0) {
        printf("width:%f ->",(double)*param_2);
        dVar6 = (double)*param_2;
        iVar2 = FastDoubleToInt((double)(float)(param_1 * 10.0));
        dVar7 = (double)(float)(dVar6 + (double)(longlong)iVar2);
        *param_2 = (float)(dVar6 + (double)(longlong)iVar2);
        if (dVar7 < 0.10000000149011612) {
          *param_2 = 0.1;
          dVar7 = 0.10000000149011612;
        }
        iVar3 = printf("%f\n",dVar7);
        param_3 = (ulonglong)iVar3;
      }
    }
    else if (iVar2 == 0xd) {
      printf("xv_ang_variance:%f ->",(double)param_2[0xe]);
      fVar1 = (float)(param_1 * 10.0 + (double)param_2[0xe]);
      param_2[0xe] = fVar1;
      iVar3 = printf("%f\n",(double)fVar1);
      param_3 = (ulonglong)iVar3;
    }
    else if (iVar2 == 0xc) {
      printf("yh_ang_variance:%f ->",(double)param_2[0xd]);
      fVar1 = (float)(param_1 * 10.0 + (double)param_2[0xd]);
      param_2[0xd] = fVar1;
      iVar3 = printf("%f\n",(double)fVar1);
      param_3 = (ulonglong)iVar3;
    }
    else if (iVar2 == 0xb) {
      printf("yv_ang_variance:%f ->",(double)param_2[0xc]);
      fVar1 = (float)(param_1 * 10.0 + (double)param_2[0xc]);
      param_2[0xc] = fVar1;
      iVar3 = printf("%f\n",(double)fVar1);
      param_3 = (ulonglong)iVar3;
    }
    else if (iVar2 == 10) {
      printf("xh_ang_variance:%f ->",(double)param_2[0xb]);
      fVar1 = (float)(param_1 * 10.0 + (double)param_2[0xb]);
      param_2[0xb] = fVar1;
      iVar3 = printf("%f\n",(double)fVar1);
      param_3 = (ulonglong)iVar3;
    }
    else if (iVar2 == 9) {
      printf("bottom_v_amp:%f ->",(double)param_2[10]);
      fVar1 = (float)((double)param_2[1] * param_1 + (double)param_2[10]);
      param_2[10] = fVar1;
      iVar3 = printf("%f\n",(double)fVar1);
      param_3 = (ulonglong)iVar3;
    }
    else if (iVar2 == 8) {
      printf("bottom_h_amp:%f ->",(double)param_2[9]);
      fVar1 = (float)((double)*param_2 * param_1) * 0.5 + param_2[9];
      param_2[9] = fVar1;
      iVar3 = printf("%f\n",(double)fVar1);
      param_3 = (ulonglong)iVar3;
    }
    else if (iVar2 == 7) {
      printf("top_v_amp:%f ->",(double)param_2[8]);
      fVar1 = (float)((double)param_2[1] * param_1 + (double)param_2[8]);
      param_2[8] = fVar1;
      iVar3 = printf("%f\n",(double)fVar1);
      param_3 = (ulonglong)iVar3;
    }
    else if (iVar2 == 6) {
      printf("top_h_amp:%f ->",(double)param_2[7]);
      fVar1 = (float)((double)*param_2 * param_1) * 0.5 + param_2[7];
      param_2[7] = fVar1;
      iVar3 = printf("%f\n",(double)fVar1);
      param_3 = (ulonglong)iVar3;
    }
  }
  else if (iVar2 < 0x15) {
    if (iVar2 == 0x14) {
      printf("x_ang_to_depth:%f ->",(double)param_2[0x1e]);
      dVar7 = 0.5;
      fVar1 = (float)(param_1 * 0.5 + (double)param_2[0x1e]);
      param_2[0x1e] = fVar1;
      printf("%f\n",(double)fVar1);
      param_3 = (ulonglong)(uint)param_2[0x1e] & 0x7fffffff;
      if (0x40400000 < (uint)param_3) {
        param_2[0x1e] = (float)((double)param_2[0x1e] * dVar7);
      }
    }
    else if (iVar2 == 0x13) {
      printf("bot_ang_v_offset:%f ->",(double)param_2[0x1b]);
      param_2[0x19] = (float)(param_1 * 30.0 + (double)param_2[0x19]);
      iVar3 = printf("%f\n",(double)param_2[0x1b]);
      param_3 = (ulonglong)iVar3;
    }
    else if (iVar2 == 0x12) {
      printf("bot_ang_h_offset:%f ->",(double)param_2[0x1a]);
      fVar1 = (float)(param_1 * 30.0 + (double)param_2[0x1a]);
      param_2[0x1a] = fVar1;
      iVar3 = printf("%f\n",(double)fVar1);
      param_3 = (ulonglong)iVar3;
    }
    else if (iVar2 == 0x11) {
      printf("top_ang_v_offset:%f ->",(double)param_2[0x19]);
      fVar1 = (float)(param_1 * 30.0 + (double)param_2[0x19]);
      param_2[0x19] = fVar1;
      iVar3 = printf("%f\n",(double)fVar1);
      param_3 = (ulonglong)iVar3;
    }
    else if (iVar2 == 0x10) {
      printf("top_ang_h_offset:%f ->",(double)param_2[0x18]);
      fVar1 = (float)(param_1 * 30.0 + (double)param_2[0x18]);
      param_2[0x18] = fVar1;
      iVar3 = printf("%f\n",(double)fVar1);
      param_3 = (ulonglong)iVar3;
    }
    else if (iVar2 == 0xf) {
      printf("rate_variance_rate:%f ->",(double)param_2[0x17]);
      fVar1 = (float)(param_1 * 3.1415927410125732) * 0.5 + param_2[0x17];
      param_2[0x17] = fVar1;
      iVar3 = printf("%f\n",(double)fVar1);
      param_3 = (ulonglong)iVar3;
    }
    else if (iVar2 == 0xe) {
      printf("rate_variance_amp:%f ->",(double)param_2[0x16]);
      dVar7 = (double)param_2[6];
      if ((double)param_2[5] - (double)param_2[6] < 0.0) {
        dVar7 = (double)param_2[5];
      }
      fVar1 = (float)(param_1 * dVar7 + (double)param_2[0x16]);
      param_2[0x16] = fVar1;
      iVar3 = printf("%f\n",(double)fVar1);
      param_3 = (ulonglong)iVar3;
    }
  }
  else if (iVar2 == 0x1b) {
    printf("rand_0time_factor:%f ->",(double)param_2[0x36]);
    fVar1 = (float)(param_1 * 5.0 + (double)param_2[0x36]);
    param_2[0x36] = fVar1;
    iVar3 = printf("%f\n",(double)fVar1);
    param_3 = (ulonglong)iVar3;
  }
  else if (iVar2 == 0x1a) {
    printf("rand_ytime_factor:%f ->",(double)param_2[0x35]);
    fVar1 = (float)(param_1 * 5.0 + (double)param_2[0x35]);
    param_2[0x35] = fVar1;
    iVar3 = printf("%f\n",(double)fVar1);
    param_3 = (ulonglong)iVar3;
  }
  else if (iVar2 == 0x19) {
    printf("rand_xtime_factor:%f ->",(double)param_2[0x34]);
    fVar1 = (float)(param_1 * 5.0 + (double)param_2[0x34]);
    param_2[0x34] = fVar1;
    iVar3 = printf("%f\n",(double)fVar1);
    param_3 = (ulonglong)iVar3;
  }
  else if (iVar2 == 0x18) {
    printf("rand_rate:%f ->",(double)param_2[0x23]);
    fVar1 = (float)(param_1 * 0.5 + (double)param_2[0x23]);
    dVar7 = (double)fVar1;
    param_2[0x23] = fVar1;
    if (1.0 < dVar7) {
      dVar7 = 0.8999999761581421;
      param_2[0x23] = 0.9;
    }
    if (dVar7 < 0.009999999776482582) {
      dVar7 = 0.10000000149011612;
      param_2[0x23] = 0.1;
    }
    iVar3 = printf("%f\n",dVar7);
    param_3 = (ulonglong)iVar3;
  }
  else if (iVar2 == 0x17) {
    printf("rand_frac:%f ->",(double)param_2[0x22]);
    fVar1 = (float)(param_1 * 0.5 + (double)param_2[0x22]);
    dVar7 = (double)fVar1;
    param_2[0x22] = fVar1;
    if (1.0 < dVar7) {
      dVar7 = 0.8999999761581421;
      param_2[0x22] = 0.9;
    }
    if (dVar7 < 0.009999999776482582) {
      dVar7 = 0.10000000149011612;
      param_2[0x22] = 0.1;
    }
    iVar3 = printf("%f\n",dVar7);
    param_3 = (ulonglong)iVar3;
  }
  else if (iVar2 == 0x16) {
    printf("left_height:%f ->",(double)param_2[0x20]);
    dVar6 = (double)param_2[1];
    fVar1 = (float)(dVar6 * param_1 + (double)param_2[0x20]);
    dVar7 = (double)fVar1;
    param_2[0x20] = fVar1;
    if (dVar7 < 0.009999999776482582) {
      dVar7 = 0.029999999329447746;
      param_2[0x20] = 0.03;
    }
    if (dVar6 < dVar7) {
      param_2[0x20] = param_2[1];
      dVar7 = dVar6;
    }
    iVar3 = printf("%f\n",dVar7);
    param_3 = (ulonglong)iVar3;
  }
  else if (iVar2 == 0x15) {
    printf("y_ang_to_depth:%f ->",(double)param_2[0x1f]);
    dVar7 = 0.5;
    fVar1 = (float)(param_1 * 0.5 + (double)param_2[0x1f]);
    param_2[0x1f] = fVar1;
    printf("%f\n",(double)fVar1);
    param_3 = (ulonglong)(uint)param_2[0x1f] & 0x7fffffff;
    if (0x40400000 < (uint)param_3) {
      param_2[0x1f] = (float)((double)param_2[0x1f] * dVar7);
    }
  }
  return param_3;
}


