// game/update/moby121.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x200c38-0x204ab4
#include <math.h>
#include "game/update/moby121.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/mesh.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby122.h"
#include "game/update/moby192.h"
#include "game/update/moby639.h"
#include "game/update/moby775.h"
#include "game/water.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x0200c38 (0x340 bytes)
// inlined: FastAtan2 @0x200da0
MobyInstance * FUN_00200c38(undefined4 param_1,f32 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  ulonglong *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  MobyInstance *pMVar13;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong in_f27;
  double dVar24;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar25;
  ulonglong in_f31;
  double dVar26;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0xe0;
  puVar6 = (ulonglong *)lVar12;
  *puVar6 = uVar10;
  puVar6[0x1e] = in_LR;
  puVar6[0x17] = in_f27;
  puVar6[0x18] = in_f28;
  puVar6[0x19] = in_f29;
  puVar6[0x1a] = in_f30;
  puVar6[0x1b] = in_f31;
  puVar6[0x15] = unaff_r30;
  puVar6[0x16] = unaff_r31;
  puVar6[0x14] = unaff_r29;
  puVar6[0x13] = unaff_r28;
  pMVar13 = CreateMoby(0x79);
  if (pMVar13 != (MobyInstance *)0x0) {
    puVar5 = (undefined4 *)pMVar13->pVar;
    dVar24 = -3.1415927410125732;
    dVar26 = 3.1415927410125732;
    dVar25 = 0.0;
    dVar19 = (double)MB_randRangeFloat(-3.1415927,3.1415927);
    dVar20 = (double)MB_randRangeFloat((float)dVar24,(float)dVar26);
    dVar21 = (double)MB_randRangeFloat((float)dVar24,(float)dVar26);
    pMVar13->updateDistance = -1;
    pMVar13->drawDistance = 0xff;
    pMVar13->enabled = '\x01';
    pMVar13->state = '\0';
    puVar5[0x14] = param_1;
    *(undefined2 *)((int)puVar5 + 0x56) = 0;
    *(undefined2 *)((int)puVar5 + 0x6a) = 0;
    puVar5[0x18] = 0;
    fVar4 = DAT_0096a350;
    dVar22 = ABS((double)DAT_0096a350);
    dVar23 = ABS((double)DAT_0096a354);
    uVar9 = (uint)DAT_0096a354 >> 0x1d;
    *(float *)(puVar6 + 0xe) = (float)(dVar22 - dVar23);
    uVar11 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1e) & 2 | (ulonglong)uVar9 & 4;
    dVar24 = dVar22;
    if ((double)*(float *)(puVar6 + 0xe) - dVar25 < 0.0) {
      dVar24 = dVar23;
    }
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar11 << 2));
    if ((double)*(float *)(puVar6 + 0xe) - dVar25 < 0.0) {
      dVar23 = dVar22;
    }
    fVar1 = *(float *)(((uint)(uVar11 << 2) | 0x735900) + 4);
    if (dVar25 < dVar24) {
      lVar16 = uVar10 - 0xd0;
      lVar15 = uVar10 - 0x6c;
      lVar14 = uVar10 - 0x5c;
      lVar18 = 2;
      fVar2 = (float)(dVar23 - dVar24) / (float)(dVar23 + dVar24);
      fVar3 = fVar2 * fVar2;
      *(float *)(puVar6 + 0x10) = fVar2;
      *(float *)(puVar6 + 0xf) = fVar2;
      *(float *)((int)puVar6 + 0x7c) = fVar2;
      *(float *)((int)puVar6 + 0x74) = fVar2;
      fVar2 = fVar3 * fVar3;
      *(float *)(puVar6 + 0xf) = *(float *)(puVar6 + 0xf) * fVar3;
      *(float *)((int)puVar6 + 0x7c) = *(float *)((int)puVar6 + 0x7c) * fVar2;
      *(float *)(puVar6 + 0x10) = *(float *)(puVar6 + 0x10) * fVar2 * fVar3;
      do {
        *(float *)((int)lVar16 + 0x74) = *(float *)((int)lVar16 + 100) * fVar2 * fVar2;
        iVar7 = (int)lVar15;
        lVar16 = lVar16 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)(iVar7 + 4) * fVar2 * fVar2;
        lVar14 = lVar14 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar16 = uVar10 - 0x6c;
      pfVar17 = (float *)&DAT_007358e0;
      lVar18 = 4;
      lVar14 = lVar16;
      lVar15 = lVar12;
      do {
        fVar2 = *pfVar17;
        fVar3 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar15 + 0x74) = *(float *)((int)lVar15 + 0x74) * fVar2;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar3;
        lVar14 = lVar14 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar14 = 2;
      do {
        iVar7 = (int)lVar12;
        iVar8 = (int)lVar16;
        lVar12 = lVar12 + 0x10;
        lVar16 = lVar16 + 0x10;
        dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar7 + 0x74)) + *(float *)(iVar8 + 4)
                          + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar4 + fVar1);
    }
    puVar5[0x1b] = (float)dVar25;
    puVar5[0x19] = 0;
    (pMVar13->pos).x = *param_2;
    (pMVar13->pos).y = param_2[1];
    (pMVar13->pos).z = param_2[2];
    (pMVar13->pos).w = param_2[3];
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
    (pMVar13->rotation).x = (float)dVar19;
    (pMVar13->rotation).y = (float)dVar20;
    (pMVar13->rotation).z = (float)dVar21;
    (pMVar13->rotation).w = 0.0;
    dVar23 = 1.0471975803375244;
    dVar24 = (double)MB_randRangeFloat
                               ((float)((double)g_FrameTime * 1.0471975803375244),
                                (float)((double)g_FrameTime * dVar26));
    puVar5[0x16] = (float)dVar24;
    dVar24 = (double)MB_randRangeFloat
                               ((float)((double)g_FrameTime * dVar23),
                                (float)((double)g_FrameTime * dVar26));
    puVar5[0x17] = (float)dVar24;
    UpdateMobyTransform(pMVar13);
  }
  return pMVar13;
}


// 0x0200fd0 (0xd84 bytes)
// inlined: FastRSqrt @0x2011d8, FastAtan2 @0x2013c0, FastAtan2 @0x20155c, FastAtan2 @0x201710, FastAtan2 @0x201934
void FUN_00200fd0(float *param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  f32 fVar10;
  float fVar11;
  float *pfVar12;
  undefined2 uVar13;
  ulonglong *puVar14;
  int iVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  MobyInstance *pMVar20;
  PlayerState PVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  ulonglong uVar26;
  float *pfVar28;
  longlong lVar27;
  longlong lVar29;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong uVar30;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar36;
  undefined8 uVar37;
  ulonglong in_f31;
  double dVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  
  uVar22 = ZEXT48(&stack0x00000000);
  lVar24 = uVar22 - 0x1f0;
  puVar14 = (ulonglong *)lVar24;
  *puVar14 = uVar22;
  puVar14[0x40] = in_LR;
  puVar14[0x37] = in_f25;
  puVar14[0x38] = in_f26;
  puVar14[0x39] = in_f27;
  puVar14[0x3a] = in_f28;
  puVar14[0x3b] = in_f29;
  puVar14[0x3c] = in_f30;
  puVar14[0x3d] = in_f31;
  auVar39 = ZEXT416(0xffffffff);
  auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
  puVar14[0x32] = unaff_r27;
  auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
  auVar39 = loadVectorLeftIndexed(in_LR,0x200f78);
  auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
  puVar14[0x33] = unaff_r28;
  pfVar12 = *(float **)(param_2 + 0x78);
  uVar30 = ZEXT48(pfVar12);
  puVar14[0x36] = unaff_r31;
  auVar39 = vectorMultiplyAddFloatingPoint
                      (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,auVar40
                      );
  puVar14[0x35] = unaff_r30;
  puVar14[0x34] = unaff_r29;
  auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
  auVar39 = vectorSplatHalfWord(auVar39,1);
  uVar13 = storeVectorElementHalfWordIndexed(auVar39,0x6a,uVar30);
  *(undefined2 *)((int)pfVar12 + 0x6a) = uVar13;
  *(undefined1 *)(param_2 + 0x20) = 1;
  fVar1 = *param_3;
  *pfVar12 = fVar1;
  fVar2 = param_3[1];
  pfVar12[1] = fVar2;
  iVar25 = g_heroStateType;
  fVar3 = param_3[2];
  pfVar12[2] = fVar3;
  fVar4 = param_3[3];
  puVar14[0x31] = unaff_r26;
  pfVar12[3] = fVar4;
  if (iVar25 == 0xf) {
    *pfVar12 = fVar1 + DAT_00969de0;
    pfVar12[1] = fVar2 + DAT_00969de4;
    pfVar12[2] = fVar3 + DAT_00969de8;
  }
  else if ((g_standingOnMoby == 0) || (iVar25 = MB_GetPlatformParent(), iVar25 == 0)) {
    fVar1 = pfVar12[0x18];
    if (fVar1 != 0.0) {
      if ((*(short *)((int)fVar1 + 0xa6) == 0x56e) || (*(short *)((int)fVar1 + 0xa6) == 0x58e)) {
        *pfVar12 = *pfVar12 + pfVar12[0x10];
        pfVar12[1] = pfVar12[1] + pfVar12[0x11];
        pfVar12[2] = pfVar12[2] + pfVar12[0x12];
      }
      else if (pfVar12[0x19] != 0.0) {
        fVar2 = g_heroPosition.y - *(float *)((int)fVar1 + 0x14);
        fVar3 = g_heroPosition.x - *(float *)((int)fVar1 + 0x10);
        fVar7 = g_heroPosition.z - *(float *)((int)fVar1 + 0x18);
        dVar36 = 0.0;
        fVar4 = fVar7 * fVar7 + fVar3 * fVar3 + fVar2 * fVar2;
        dVar32 = dVar36;
        dVar33 = dVar36;
        dVar38 = dVar36;
        if (SQRT(fVar4) != 0.0) {
          fVar11 = 1.0 / SQRT(fVar4);
          fVar11 = -(fVar4 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
          fVar11 = -(fVar4 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
          fVar11 = -(fVar4 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
          dVar38 = (double)(fVar11 * fVar3);
          dVar32 = (double)(fVar11 * fVar2);
          dVar33 = (double)(fVar11 * fVar7);
        }
        fVar2 = param_1[1] - *(float *)((int)fVar1 + 0x14);
        fVar1 = *param_1 - *(float *)((int)fVar1 + 0x10);
        dVar34 = (double)(float)(dVar33 * (double)pfVar12[0x12] +
                                (double)(float)(dVar38 * (double)pfVar12[0x10] +
                                               (double)(float)(dVar32 * (double)pfVar12[0x11])));
        dVar35 = (double)(SQRT(fVar1 * fVar1 + fVar2 * fVar2) /
                         (float)(dVar34 + (double)SQRT(*param_3 * *param_3 + param_3[1] * param_3[1]
                                                      )));
        if (dVar34 <= 0.0) {
          fVar1 = pfVar12[0x18];
          *(float *)(puVar14 + 0x10) = (float)((double)pfVar12[0x10] * dVar35);
          *(float *)((int)puVar14 + 0x84) = (float)((double)pfVar12[0x11] * dVar35);
          *(float *)(puVar14 + 0x11) = (float)((double)pfVar12[0x12] * dVar35);
          *(float *)((int)puVar14 + 0x8c) = pfVar12[0x13];
          FastVecAdd(uVar22 - 0x140,uVar22 - 0x170,(ulonglong)(uint)fVar1 + 0x10);
          fVar1 = *(float *)(puVar14 + 0x16);
          fVar2 = *(float *)((int)puVar14 + 0xb4);
          uVar5 = *(undefined4 *)(puVar14 + 0x17);
          uVar6 = *(undefined4 *)((int)puVar14 + 0xbc);
        }
        else {
          dVar34 = (double)(float)(dVar35 * dVar34);
          fVar1 = pfVar12[0x18];
          *(float *)((int)puVar14 + 0x8c) = g_heroPosition.w;
          *(float *)(puVar14 + 0x10) = (float)(dVar34 * dVar38);
          *(float *)((int)puVar14 + 0x84) = (float)(dVar34 * dVar32);
          *(float *)(puVar14 + 0x11) = (float)(dVar34 * dVar33);
          FastVecAdd(uVar22 - 0x150,uVar22 - 0x170,(ulonglong)(uint)fVar1 + 0x10);
          fVar1 = *(float *)(puVar14 + 0x14);
          fVar2 = *(float *)((int)puVar14 + 0xa4);
          uVar5 = *(undefined4 *)(puVar14 + 0x15);
          uVar6 = *(undefined4 *)((int)puVar14 + 0xac);
        }
        fVar11 = DAT_0096a354;
        fVar7 = DAT_0096a350;
        dVar32 = (double)DAT_0096a354;
        dVar38 = ABS((double)DAT_0096a350);
        *(float *)(puVar14 + 0x10) = fVar1;
        dVar32 = ABS(dVar32);
        *(float *)((int)puVar14 + 0x84) = fVar2;
        *(undefined4 *)(puVar14 + 0x11) = uVar5;
        *(float *)((int)puVar14 + 0x104) = (float)(dVar38 - dVar32);
        *(undefined4 *)((int)puVar14 + 0x8c) = uVar6;
        fVar4 = g_heroPosition.y;
        fVar3 = g_heroPosition.x;
        dVar34 = 0.7853981852531433;
        uVar26 = (ulonglong)((uint)fVar7 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0x104) >> 0x1e) & 2 |
                 (ulonglong)((uint)fVar11 >> 0x1d) & 4;
        dVar33 = dVar38;
        if ((double)*(float *)((int)puVar14 + 0x104) - dVar36 < 0.0) {
          dVar33 = dVar32;
        }
        fVar11 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
        fVar7 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
        if ((double)*(float *)((int)puVar14 + 0x104) - dVar36 < 0.0) {
          dVar32 = dVar38;
        }
        dVar38 = dVar36;
        if (dVar36 < dVar33) {
          lVar23 = uVar22 - 0x1e0;
          lVar27 = uVar22 - 0x88;
          lVar29 = uVar22 - 0x78;
          lVar31 = 2;
          fVar8 = (float)(dVar32 - dVar33) / (float)(dVar32 + dVar33);
          fVar9 = fVar8 * fVar8;
          *(float *)((int)puVar14 + 0x174) = fVar8;
          *(float *)((int)puVar14 + 0x16c) = fVar8;
          *(float *)(puVar14 + 0x2e) = fVar8;
          *(float *)(puVar14 + 0x2d) = fVar8;
          fVar8 = fVar9 * fVar9;
          *(float *)((int)puVar14 + 0x16c) = *(float *)((int)puVar14 + 0x16c) * fVar9;
          *(float *)(puVar14 + 0x2e) = *(float *)(puVar14 + 0x2e) * fVar8;
          *(float *)((int)puVar14 + 0x174) = *(float *)((int)puVar14 + 0x174) * fVar8 * fVar9;
          do {
            *(float *)((int)lVar23 + 0x168) = *(float *)((int)lVar23 + 0x158) * fVar8 * fVar8;
            iVar25 = (int)lVar27;
            lVar23 = lVar23 + 8;
            lVar27 = lVar27 + 8;
            *(float *)((int)lVar29 + 4) = *(float *)(iVar25 + 4) * fVar8 * fVar8;
            lVar29 = lVar29 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar31 = 4;
          lVar29 = uVar22 - 0x88;
          pfVar28 = (float *)&DAT_007358e0;
          lVar23 = lVar24;
          lVar27 = lVar29;
          do {
            fVar8 = *pfVar28;
            fVar9 = pfVar28[1];
            pfVar28 = pfVar28 + 2;
            *(float *)((int)lVar23 + 0x168) = *(float *)((int)lVar23 + 0x168) * fVar8;
            lVar23 = lVar23 + 8;
            *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar9;
            lVar27 = lVar27 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar27 = 2;
          lVar23 = lVar24;
          dVar32 = dVar36;
          do {
            iVar25 = (int)lVar23;
            lVar23 = lVar23 + 0x10;
            iVar15 = (int)lVar29;
            lVar29 = lVar29 + 0x10;
            dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar25 + 0x168)) +
                              *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                             *(float *)(iVar15 + 0xc));
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          dVar38 = (double)((float)(dVar32 + 0.7853981852531433) * fVar11 + fVar7);
        }
        dVar33 = ABS((double)(fVar1 - fVar3));
        dVar35 = ABS((double)(fVar2 - fVar4));
        *(float *)(puVar14 + 0x1f) = fVar1 - fVar3;
        *(float *)((int)puVar14 + 0xfc) = fVar2 - fVar4;
        *(float *)(puVar14 + 0x20) = (float)(dVar33 - dVar35);
        uVar26 = (ulonglong)(*(uint *)(puVar14 + 0x1f) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar14 + 0x20) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0xfc) >> 0x1d) & 4;
        dVar32 = ABS((double)*(float *)(puVar14 + 0x1f));
        if ((double)*(float *)(puVar14 + 0x20) - dVar36 < 0.0) {
          dVar32 = dVar35;
        }
        fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
        dVar35 = ABS((double)*(float *)((int)puVar14 + 0xfc));
        if ((double)*(float *)(puVar14 + 0x20) - dVar36 < 0.0) {
          dVar35 = dVar33;
        }
        fVar2 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
        dVar33 = dVar36;
        if (dVar36 < dVar32) {
          lVar23 = uVar22 - 0x1e0;
          lVar29 = uVar22 - 0x98;
          lVar27 = uVar22 - 0xa8;
          lVar31 = 2;
          fVar3 = (float)(dVar35 - dVar32) / (float)(dVar35 + dVar32);
          fVar4 = fVar3 * fVar3;
          *(float *)((int)puVar14 + 0x154) = fVar3;
          *(float *)((int)puVar14 + 0x14c) = fVar3;
          *(float *)(puVar14 + 0x2a) = fVar3;
          *(float *)(puVar14 + 0x29) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)((int)puVar14 + 0x14c) = *(float *)((int)puVar14 + 0x14c) * fVar4;
          *(float *)(puVar14 + 0x2a) = *(float *)(puVar14 + 0x2a) * fVar3;
          *(float *)((int)puVar14 + 0x154) = *(float *)((int)puVar14 + 0x154) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar23 + 0x148) = *(float *)((int)lVar23 + 0x138) * fVar3 * fVar3;
            iVar25 = (int)lVar27;
            lVar27 = lVar27 + 8;
            lVar23 = lVar23 + 8;
            *(float *)((int)lVar29 + 4) = *(float *)(iVar25 + 4) * fVar3 * fVar3;
            lVar29 = lVar29 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar31 = 4;
          lVar29 = uVar22 - 0xa8;
          pfVar28 = (float *)&DAT_007358e0;
          lVar23 = lVar24;
          lVar27 = lVar29;
          do {
            fVar3 = *pfVar28;
            fVar4 = pfVar28[1];
            pfVar28 = pfVar28 + 2;
            *(float *)((int)lVar23 + 0x148) = *(float *)((int)lVar23 + 0x148) * fVar3;
            lVar23 = lVar23 + 8;
            *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar4;
            lVar27 = lVar27 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar27 = 2;
          lVar23 = lVar24;
          dVar32 = dVar36;
          do {
            iVar25 = (int)lVar23;
            iVar15 = (int)lVar29;
            lVar23 = lVar23 + 0x10;
            lVar29 = lVar29 + 0x10;
            dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar25 + 0x148)) +
                              *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                             *(float *)(iVar15 + 0xc));
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          dVar33 = (double)((float)(dVar32 + 0.7853981852531433) * fVar1 + fVar2);
        }
        dVar32 = (double)FastSubRots((float)dVar38,(float)dVar33);
        fVar7 = DAT_0096a350;
        fVar4 = g_heroPosition.y;
        fVar3 = g_heroPosition.x;
        fVar1 = *(float *)(puVar14 + 0x10);
        fVar2 = *(float *)((int)puVar14 + 0x84);
        if (1.5707963705062866 < dVar32) {
          dVar38 = ABS((double)DAT_0096a350);
          dVar32 = ABS((double)DAT_0096a354);
          uVar16 = (uint)DAT_0096a354 >> 0x1d;
          *(float *)((int)puVar14 + 0xf4) = (float)(dVar38 - dVar32);
          uVar26 = (ulonglong)((uint)fVar7 >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar14 + 0xf4) >> 0x1e) & 2 | (ulonglong)uVar16 & 4;
          dVar33 = dVar38;
          if ((double)*(float *)((int)puVar14 + 0xf4) - dVar36 < 0.0) {
            dVar33 = dVar32;
          }
          fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
          if ((double)*(float *)((int)puVar14 + 0xf4) - dVar36 < 0.0) {
            dVar32 = dVar38;
          }
          fVar11 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
          dVar38 = dVar36;
          if (dVar36 < dVar33) {
            lVar23 = uVar22 - 0x1e0;
            lVar27 = uVar22 - 200;
            lVar29 = uVar22 - 0xb8;
            lVar31 = 2;
            fVar8 = (float)(dVar32 - dVar33) / (float)(dVar32 + dVar33);
            fVar9 = fVar8 * fVar8;
            *(float *)((int)puVar14 + 0x134) = fVar8;
            *(float *)((int)puVar14 + 300) = fVar8;
            *(float *)(puVar14 + 0x26) = fVar8;
            *(float *)(puVar14 + 0x25) = fVar8;
            fVar8 = fVar9 * fVar9;
            *(float *)((int)puVar14 + 300) = *(float *)((int)puVar14 + 300) * fVar9;
            *(float *)(puVar14 + 0x26) = *(float *)(puVar14 + 0x26) * fVar8;
            *(float *)((int)puVar14 + 0x134) = *(float *)((int)puVar14 + 0x134) * fVar8 * fVar9;
            do {
              *(float *)((int)lVar23 + 0x128) = *(float *)((int)lVar23 + 0x118) * fVar8 * fVar8;
              iVar25 = (int)lVar27;
              lVar23 = lVar23 + 8;
              lVar27 = lVar27 + 8;
              *(float *)((int)lVar29 + 4) = *(float *)(iVar25 + 4) * fVar8 * fVar8;
              lVar29 = lVar29 + 8;
              lVar31 = lVar31 + -1;
            } while (lVar31 != 0);
            lVar31 = 4;
            lVar29 = uVar22 - 200;
            pfVar28 = (float *)&DAT_007358e0;
            lVar23 = lVar24;
            lVar27 = lVar29;
            do {
              fVar8 = *pfVar28;
              fVar9 = pfVar28[1];
              pfVar28 = pfVar28 + 2;
              *(float *)((int)lVar23 + 0x128) = *(float *)((int)lVar23 + 0x128) * fVar8;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar9;
              lVar27 = lVar27 + 8;
              lVar31 = lVar31 + -1;
            } while (lVar31 != 0);
            lVar27 = 2;
            lVar23 = lVar24;
            dVar32 = dVar36;
            do {
              iVar25 = (int)lVar23;
              lVar23 = lVar23 + 0x10;
              iVar15 = (int)lVar29;
              lVar29 = lVar29 + 0x10;
              dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar25 + 0x128)) +
                                *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                               *(float *)(iVar15 + 0xc));
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            dVar38 = (double)((float)(dVar32 + dVar34) * fVar7 + fVar11);
          }
          fVar19 = DAT_0096a350;
          fVar8 = g_heroPosition.y;
          fVar11 = g_heroPosition.x;
          fVar3 = fVar3 - fVar1;
          fVar7 = (float)(dVar38 + 1.570796251296997);
          fVar4 = fVar4 - fVar2;
          fVar9 = 3.1415925 - fVar7;
          if (fVar7 - (3.1415925 - fVar7) < 0.0) {
            fVar9 = fVar7;
          }
          dVar33 = ABS((double)DAT_0096a350);
          dVar32 = ABS((double)DAT_0096a354);
          uVar16 = (uint)DAT_0096a354 >> 0x1d;
          fVar17 = -3.1415925 - fVar7;
          if ((-3.1415925 - fVar7) - fVar9 < 0.0) {
            fVar17 = fVar9;
          }
          fVar18 = fVar17 * fVar17;
          *(float *)(puVar14 + 0x1e) = (float)(dVar33 - dVar32);
          fVar7 = fVar18 * fVar18 * fVar17;
          fVar9 = fVar18 * fVar7;
          uVar26 = (ulonglong)((uint)fVar19 >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar14 + 0x1e) >> 0x1e) & 2 | (ulonglong)uVar16 & 4;
          dVar38 = dVar33;
          if ((double)*(float *)(puVar14 + 0x1e) - dVar36 < 0.0) {
            dVar38 = dVar32;
          }
          if ((double)*(float *)(puVar14 + 0x1e) - dVar36 < 0.0) {
            dVar32 = dVar33;
          }
          *(float *)(puVar14 + 0x18) =
               (fVar18 * fVar9 * 2.601887e-06 +
               fVar9 * -0.0001980741 + fVar7 * 0.0083330255 + fVar18 * fVar17 * -0.16666657 + fVar17
               ) * SQRT(fVar3 * fVar3 + fVar4 * fVar4) * 0.5;
          fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
          fVar3 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
          dVar33 = dVar36;
          if (dVar36 < dVar38) {
            lVar23 = uVar22 - 0x1e0;
            lVar29 = uVar22 - 0xd8;
            lVar27 = uVar22 - 0xe8;
            lVar31 = 2;
            fVar7 = (float)(dVar32 - dVar38) / (float)(dVar32 + dVar38);
            fVar9 = fVar7 * fVar7;
            *(float *)((int)puVar14 + 0x114) = fVar7;
            *(float *)((int)puVar14 + 0x10c) = fVar7;
            *(float *)(puVar14 + 0x22) = fVar7;
            *(float *)(puVar14 + 0x21) = fVar7;
            fVar7 = fVar9 * fVar9;
            *(float *)((int)puVar14 + 0x10c) = *(float *)((int)puVar14 + 0x10c) * fVar9;
            *(float *)(puVar14 + 0x22) = *(float *)(puVar14 + 0x22) * fVar7;
            *(float *)((int)puVar14 + 0x114) = *(float *)((int)puVar14 + 0x114) * fVar7 * fVar9;
            do {
              *(float *)((int)lVar23 + 0x108) = *(float *)((int)lVar23 + 0xf8) * fVar7 * fVar7;
              iVar25 = (int)lVar27;
              lVar27 = lVar27 + 8;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar29 + 4) = *(float *)(iVar25 + 4) * fVar7 * fVar7;
              lVar29 = lVar29 + 8;
              lVar31 = lVar31 + -1;
            } while (lVar31 != 0);
            lVar31 = 4;
            lVar29 = uVar22 - 0xe8;
            pfVar28 = (float *)&DAT_007358e0;
            lVar23 = lVar24;
            lVar27 = lVar29;
            do {
              fVar7 = *pfVar28;
              fVar9 = pfVar28[1];
              pfVar28 = pfVar28 + 2;
              *(float *)((int)lVar23 + 0x108) = *(float *)((int)lVar23 + 0x108) * fVar7;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar9;
              lVar27 = lVar27 + 8;
              lVar31 = lVar31 + -1;
            } while (lVar31 != 0);
            lVar23 = 2;
            dVar32 = dVar36;
            do {
              iVar25 = (int)lVar24;
              iVar15 = (int)lVar29;
              lVar24 = lVar24 + 0x10;
              lVar29 = lVar29 + 0x10;
              dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar25 + 0x108)) +
                                *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                               *(float *)(iVar15 + 0xc));
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            dVar33 = (double)((float)(dVar32 + dVar34) * fVar4 + fVar3);
          }
          fVar8 = fVar8 - fVar2;
          fVar11 = fVar11 - fVar1;
          *(undefined4 *)(puVar14 + 0x19) = 0;
          dVar32 = (double)(float)(3.141592502593994 - dVar33);
          if (dVar33 - (double)(float)(3.141592502593994 - dVar33) < 0.0) {
            dVar32 = dVar33;
          }
          dVar38 = (double)(float)(-3.141592502593994 - dVar33);
          if ((double)(float)(-3.141592502593994 - dVar33) - dVar32 < 0.0) {
            dVar38 = dVar32;
          }
          dVar32 = (double)(float)(dVar38 * dVar38);
          dVar34 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar38));
          dVar33 = (double)(float)(dVar32 * dVar34);
          *(float *)((int)puVar14 + 0xc4) =
               ((float)(dVar32 * dVar33) * 2.601887e-06 +
               (float)(dVar33 * -0.0001980741071747616 +
                      (double)(float)(dVar34 * 0.008333025500178337 +
                                     (double)(float)((double)(float)(dVar32 * dVar38) *
                                                     -0.16666656732559204 + dVar38)))) *
               SQRT(fVar11 * fVar11 + fVar8 * fVar8) * 0.5;
          FastVecAdd(uVar22 - 0x120,uVar22 - 0x130,&g_heroPosition);
          *(undefined4 *)(puVar14 + 0x10) = *(undefined4 *)(puVar14 + 0x1a);
          *(undefined4 *)((int)puVar14 + 0x84) = *(undefined4 *)((int)puVar14 + 0xd4);
          *(undefined4 *)(puVar14 + 0x11) = *(undefined4 *)(puVar14 + 0x1b);
          *(undefined4 *)((int)puVar14 + 0x8c) = *(undefined4 *)((int)puVar14 + 0xdc);
        }
        uVar37 = 0x3ee4f8b580000000;
        dVar32 = (double)(DAT_0071f418 * 11.0);
        if ((g_Pad.downButtons & (L1|L2)) != 0) {
          dVar33 = (double)FastIntToDouble(g_goldWeaponsArray.bombGlove);
          dVar36 = (double)(float)(dVar33 * 2.5);
        }
        M192_002daa30
                  (dVar32,uVar37,(double)(float)(dVar36 + 8.5),param_1,uVar22 - 0x170,uVar22 - 0x160
                  );
        *(float *)(puVar14 + 0x12) = *(float *)(puVar14 + 0x12) * 0.65;
        *(float *)((int)puVar14 + 0x94) = *(float *)((int)puVar14 + 0x94) * 0.65;
        *(float *)(puVar14 + 0x13) = *(float *)(puVar14 + 0x13) * 0.65;
        *pfVar12 = *pfVar12 * 0.35;
        pfVar12[1] = pfVar12[1] * 0.35;
        pfVar12[2] = pfVar12[2] * 0.35;
        FastVecAdd(uVar22 - 0x110,uVar30,uVar22 - 0x160);
        *pfVar12 = *(float *)(puVar14 + 0x1c);
        pfVar12[1] = *(float *)((int)puVar14 + 0xe4);
        pfVar12[2] = *(float *)(puVar14 + 0x1d);
        pfVar12[3] = *(float *)((int)puVar14 + 0xec);
      }
    }
  }
  else {
    *pfVar12 = *pfVar12 + DAT_00969de0;
    pfVar12[1] = pfVar12[1] + DAT_00969de4;
    pfVar12[2] = pfVar12[2] + DAT_00969de8;
  }
  pMVar20 = g_heroMobyPtr;
  auVar39 = ZEXT416(0xffffffff);
  auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
  auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
  auVar39 = loadVectorLeftIndexed(0x4c,0x200f78);
  auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar39 = vectorMultiplyAddFloatingPoint
                      (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,auVar40
                      );
  auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
  auVar39 = vectorSplatHalfWord(auVar39,1);
  uVar13 = storeVectorElementHalfWordIndexed(auVar39,0x54,uVar30);
  *(undefined2 *)(pfVar12 + 0x15) = uVar13;
  *(float *)(param_2 + 0x10) = *param_1;
  *(float *)(param_2 + 0x14) = param_1[1];
  *(float *)(param_2 + 0x18) = param_1[2];
  *(float *)(param_2 + 0x1c) = param_1[3];
  *(f32 *)(puVar14 + 0xe) = (pMVar20->pos).x;
  *(f32 *)((int)puVar14 + 0x74) = (pMVar20->pos).y;
  fVar1 = param_1[2];
  *(f32 *)(puVar14 + 0xf) = (pMVar20->pos).z;
  fVar10 = (pMVar20->pos).w;
  *(float *)(puVar14 + 0xf) = fVar1;
  *(f32 *)((int)puVar14 + 0x7c) = fVar10;
  iVar25 = CollLine(uVar22 - 0x180,param_1,0,pMVar20,0);
  PVar21 = g_heroState;
  if (iVar25 != 0) {
    *(undefined1 *)(param_2 + 0xbc) = 1;
    *(float *)(param_2 + 0x10) = g_CollOutput.ip.x;
    *(float *)(param_2 + 0x14) = g_CollOutput.ip.y;
    *(float *)(param_2 + 0x18) = g_CollOutput.ip.z;
    *(float *)(param_2 + 0x1c) = g_CollOutput.ip.w;
  }
  if ((g_goldWeaponsArray.bombGlove != '\0') && (PVar21 == FIRST_PERSON_VIEW)) {
    *pfVar12 = *pfVar12 * 1.5;
    pfVar12[1] = pfVar12[1] * 1.5;
    pfVar12[2] = pfVar12[2] * 0.6666667;
  }
  return;
}


// 0x0201da8 (0xd08 bytes)
// inlined: FastAtan2 @0x201f14, FastAtan2 @0x202114
undefined8 M121_00201da8(float *param_1,MobyInstance *param_2,int param_3)

{
  bool bVar1;
  u8 uVar2;
  f32 fVar3;
  f32 fVar4;
  f32 fVar5;
  f32 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  short sVar13;
  MobyInstance *pMVar14;
  undefined4 uVar15;
  ulonglong *puVar16;
  int iVar17;
  uint uVar18;
  bool bVar19;
  bool bVar20;
  PlayerState PVar21;
  ulonglong uVar22;
  longlong lVar23;
  int iVar25;
  undefined8 uVar24;
  float *pfVar27;
  longlong lVar26;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  MobyInstance *pMVar30;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar31;
  longlong lVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  ulonglong in_f22;
  double dVar36;
  ulonglong in_f23;
  double dVar37;
  ulonglong in_f24;
  double dVar38;
  ulonglong in_f25;
  double dVar39;
  ulonglong in_f26;
  double dVar40;
  ulonglong in_f27;
  double dVar41;
  ulonglong in_f28;
  double dVar42;
  ulonglong in_f29;
  double dVar43;
  ulonglong in_f30;
  double dVar44;
  ulonglong in_f31;
  double dVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  
  uVar22 = ZEXT48(&stack0x00000000);
  lVar32 = uVar22 - 0x1e0;
  puVar16 = (ulonglong *)lVar32;
  *puVar16 = uVar22;
  puVar16[0x3e] = in_LR;
  puVar16[0x32] = in_f22;
  puVar16[0x33] = in_f23;
  puVar16[0x34] = in_f24;
  puVar16[0x35] = in_f25;
  puVar16[0x36] = in_f26;
  puVar16[0x37] = in_f27;
  puVar16[0x38] = in_f28;
  puVar16[0x39] = in_f29;
  puVar16[0x3a] = in_f30;
  puVar16[0x3b] = in_f31;
  puVar16[0x2c] = unaff_r26;
  puVar16[0x2e] = unaff_r28;
  bVar20 = false;
  puVar16[0x31] = unaff_r31;
  puVar16[0x2b] = unaff_r25;
  puVar16[0x30] = unaff_r30;
  puVar16[0x2d] = unaff_r27;
  bVar19 = false;
  puVar16[0x2f] = unaff_r29;
  PVar21 = g_heroState;
  puVar16[0x2a] = unaff_r24;
  puVar16[0x29] = unaff_r23;
  if ((PVar21 == MOVEMENT_LOCKED) || (g_gameMode != GAME_MODE_NORMAL)) {
    return 0;
  }
  fVar3 = (param_2->pos).x;
  fVar4 = (param_2->pos).y;
  *(f32 *)(puVar16 + 0x10) = fVar3;
  fVar5 = (param_2->pos).z;
  *(f32 *)((int)puVar16 + 0x84) = fVar4;
  fVar6 = (param_2->pos).w;
  uVar2 = param_2->state;
  *(f32 *)(puVar16 + 0x11) = fVar5;
  *(f32 *)((int)puVar16 + 0x8c) = fVar6;
  fVar11 = DAT_0096a350;
  if (uVar2 == '\0') {
    fVar10 = ABS(DAT_0096a350);
    fVar9 = ABS(DAT_0096a354);
    uVar18 = (uint)DAT_0096a354 >> 0x1d;
    dVar45 = -0.3619680106639862;
    *(float *)(puVar16 + 0x1d) = fVar10 - fVar9;
    dVar36 = 0.0;
    dVar37 = 0.7853981852531433;
    uVar28 = (ulonglong)((uint)fVar11 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar16 + 0x1d) >> 0x1e) & 2 | (ulonglong)uVar18 & 4;
    fVar11 = *(float *)(&g_atanQuadrantTable + (int)(uVar28 << 2));
    fVar12 = fVar10;
    if (*(float *)(puVar16 + 0x1d) - 0.0 < 0.0) {
      fVar12 = fVar9;
    }
    fVar7 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
    if (*(float *)(puVar16 + 0x1d) - 0.0 < 0.0) {
      fVar9 = fVar10;
    }
    dVar33 = dVar36;
    if (0.0 < fVar12) {
      lVar23 = uVar22 - 0x1d0;
      lVar26 = uVar22 - 0xd4;
      lVar29 = uVar22 - 0xc4;
      lVar31 = 2;
      fVar12 = (fVar9 - fVar12) / (fVar9 + fVar12);
      fVar9 = fVar12 * fVar12;
      *(float *)(puVar16 + 0x23) = fVar12;
      *(float *)(puVar16 + 0x22) = fVar12;
      *(float *)((int)puVar16 + 0x114) = fVar12;
      *(float *)((int)puVar16 + 0x10c) = fVar12;
      fVar12 = fVar9 * fVar9;
      *(float *)(puVar16 + 0x22) = *(float *)(puVar16 + 0x22) * fVar9;
      *(float *)((int)puVar16 + 0x114) = *(float *)((int)puVar16 + 0x114) * fVar12;
      *(float *)(puVar16 + 0x23) = *(float *)(puVar16 + 0x23) * fVar12 * fVar9;
      do {
        *(float *)((int)lVar23 + 0x10c) = *(float *)((int)lVar23 + 0xfc) * fVar12 * fVar12;
        iVar25 = (int)lVar26;
        lVar23 = lVar23 + 8;
        lVar26 = lVar26 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar25 + 4) * fVar12 * fVar12;
        lVar29 = lVar29 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar29 = uVar22 - 0xd4;
      pfVar27 = (float *)&DAT_007358e0;
      lVar23 = lVar32;
      lVar26 = lVar29;
      do {
        fVar12 = *pfVar27;
        fVar9 = pfVar27[1];
        pfVar27 = pfVar27 + 2;
        *(float *)((int)lVar23 + 0x10c) = *(float *)((int)lVar23 + 0x10c) * fVar12;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar9;
        lVar26 = lVar26 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar26 = 2;
      lVar23 = lVar32;
      do {
        iVar25 = (int)lVar23;
        lVar23 = lVar23 + 0x10;
        iVar17 = (int)lVar29;
        lVar29 = lVar29 + 0x10;
        dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar25 + 0x10c)) +
                          *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc)
                         );
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar11 + fVar7);
    }
    dVar33 = (double)FastWrapRot(-0.361968,(float)dVar33);
    fVar9 = DAT_0096a350;
    dVar44 = 3.141592502593994;
    fVar11 = (float)(dVar33 + 1.570796251296997);
    dVar43 = -3.141592502593994;
    dVar35 = ABS((double)DAT_0096a350);
    dVar42 = -0.16666656732559204;
    dVar33 = ABS((double)DAT_0096a354);
    dVar41 = 0.008333025500178337;
    dVar40 = -0.0001980741071747616;
    dVar39 = 2.601886990305502e-06;
    dVar38 = 0.8590390086174011;
    uVar18 = (uint)DAT_0096a354 >> 0x1d;
    fVar12 = 3.1415925 - fVar11;
    if (fVar11 - (3.1415925 - fVar11) < 0.0) {
      fVar12 = fVar11;
    }
    *(float *)((int)puVar16 + 0xe4) = (float)(dVar35 - dVar33);
    fVar10 = -3.1415925 - fVar11;
    if ((-3.1415925 - fVar11) - fVar12 < 0.0) {
      fVar10 = fVar12;
    }
    fVar7 = fVar10 * fVar10;
    uVar28 = (ulonglong)((uint)fVar9 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar16 + 0xe4) >> 0x1e) & 2 | (ulonglong)uVar18 & 4;
    fVar11 = fVar7 * fVar7 * fVar10;
    fVar12 = fVar7 * fVar11;
    dVar34 = dVar35;
    if ((double)*(float *)((int)puVar16 + 0xe4) - dVar36 < 0.0) {
      dVar34 = dVar33;
    }
    if ((double)*(float *)((int)puVar16 + 0xe4) - dVar36 < 0.0) {
      dVar33 = dVar35;
    }
    *(float *)(puVar16 + 0xe) =
         (fVar7 * fVar12 * 2.601887e-06 +
         fVar12 * -0.0001980741 + fVar11 * 0.0083330255 + fVar7 * fVar10 * -0.16666657 + fVar10) *
         0.859039;
    fVar12 = *(float *)(&g_atanQuadrantTable + (int)(uVar28 << 2));
    fVar11 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
    if (dVar36 < dVar34) {
      lVar23 = uVar22 - 0x1d0;
      lVar26 = uVar22 - 0xf4;
      lVar29 = uVar22 - 0xe4;
      lVar31 = 2;
      fVar9 = (float)(dVar33 - dVar34) / (float)(dVar33 + dVar34);
      fVar10 = fVar9 * fVar9;
      *(float *)(puVar16 + 0x1f) = fVar9;
      *(float *)(puVar16 + 0x1e) = fVar9;
      *(float *)((int)puVar16 + 0xf4) = fVar9;
      *(float *)((int)puVar16 + 0xec) = fVar9;
      fVar9 = fVar10 * fVar10;
      *(float *)(puVar16 + 0x1e) = *(float *)(puVar16 + 0x1e) * fVar10;
      *(float *)((int)puVar16 + 0xf4) = *(float *)((int)puVar16 + 0xf4) * fVar9;
      *(float *)(puVar16 + 0x1f) = *(float *)(puVar16 + 0x1f) * fVar9 * fVar10;
      do {
        *(float *)((int)lVar23 + 0xec) = *(float *)((int)lVar23 + 0xdc) * fVar9 * fVar9;
        iVar25 = (int)lVar26;
        lVar23 = lVar23 + 8;
        lVar26 = lVar26 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar25 + 4) * fVar9 * fVar9;
        lVar29 = lVar29 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar29 = uVar22 - 0xf4;
      pfVar27 = (float *)&DAT_007358e0;
      lVar23 = lVar32;
      lVar26 = lVar29;
      do {
        fVar9 = *pfVar27;
        fVar10 = pfVar27[1];
        pfVar27 = pfVar27 + 2;
        *(float *)((int)lVar23 + 0xec) = *(float *)((int)lVar23 + 0xec) * fVar9;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar10;
        lVar26 = lVar26 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar26 = 2;
      lVar23 = lVar32;
      do {
        iVar25 = (int)lVar23;
        iVar17 = (int)lVar29;
        lVar23 = lVar23 + 0x10;
        lVar29 = lVar29 + 0x10;
        dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar25 + 0xec)) +
                          *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc)
                         );
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      dVar36 = (double)((float)(dVar36 + dVar37) * fVar12 + fVar11);
    }
    dVar37 = (double)FastWrapRot((float)dVar45,(float)dVar36);
    fVar11 = g_heroPosition.y;
    dVar36 = (double)(float)(dVar44 - dVar37);
    if (dVar37 - (double)(float)(dVar44 - dVar37) < 0.0) {
      dVar36 = dVar37;
    }
    dVar33 = (double)(float)(dVar43 - dVar37);
    if ((double)(float)(dVar43 - dVar37) - dVar36 < 0.0) {
      dVar33 = dVar36;
    }
    fVar12 = *(float *)(puVar16 + 0xe) + g_heroPosition.x;
    *(undefined4 *)(puVar16 + 0xf) = 0;
    dVar35 = (double)(float)(dVar33 * dVar33);
    *(float *)(puVar16 + 0xe) = fVar12;
    fVar9 = g_heroPosition.z;
    dVar36 = (double)*param_1;
    dVar45 = (double)param_1[1];
    dVar37 = (double)param_1[2];
    bVar1 = g_heroStateType == 0xf;
    dVar43 = (double)(float)(dVar35 * (double)(float)(dVar35 * dVar33));
    dVar44 = (double)(float)(dVar35 * dVar43);
    fVar12 = (float)((double)(float)((double)(float)(dVar35 * dVar44) * dVar39 +
                                    (double)(float)(dVar44 * dVar40 +
                                                   (double)(float)(dVar43 * dVar41 +
                                                                  (double)(float)((double)(float)(
                                                  dVar35 * dVar33) * dVar42 + dVar33)))) * dVar38);
    *(float *)((int)puVar16 + 0x74) = fVar12;
    iVar25 = g_standingOnMoby;
    *(float *)((int)puVar16 + 0x74) = fVar12 + fVar11;
    *(float *)(puVar16 + 0xf) = fVar9 + 0.49082;
    if (bVar1) {
      dVar36 = (double)(float)(dVar36 + (double)DAT_00969de0);
      dVar45 = (double)(float)(dVar45 + (double)DAT_00969de4);
      dVar37 = (double)(float)(dVar37 + (double)DAT_00969de8);
    }
    if (((iVar25 != 0) && (iVar25 = MB_GetPlatformParent(), iVar25 != 0)) &&
       (param_3 != 0)) {
      dVar36 = (double)(float)(dVar36 + (double)DAT_00969de0);
      dVar45 = (double)(float)(dVar45 + (double)DAT_00969de4);
      dVar37 = (double)(float)(dVar37 + (double)DAT_00969de8);
    }
    auVar46 = ZEXT416(0xffffffff);
    auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
    auVar47 = vectorShiftLeftIntegerWord(auVar46,auVar46);
    auVar46 = loadVectorLeftIndexed(0x30,0x201d54);
    auVar46 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar48 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar46 = vectorMultiplyAddFloatingPoint
                        (auVar48,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,
                         auVar47);
    auVar46 = vectorConvertToSignedFixedPointWordSaturate(auVar46,0);
    auVar46 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar15 = storeVectorElementWordIndexed
                       (auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,0xe0,lVar32);
    *(undefined4 *)(puVar16 + 0x1c) = uVar15;
  }
  else {
    sVar13 = *(short *)(param_1 + 0x15);
    dVar36 = (double)*param_1;
    dVar45 = (double)param_1[1];
    iVar25 = *(int *)((int)param_1[0x14] + 0x78);
    *(f32 *)(puVar16 + 0xe) = fVar3;
    *(f32 *)((int)puVar16 + 0x74) = fVar4;
    *(f32 *)(puVar16 + 0xf) = fVar5;
    *(f32 *)((int)puVar16 + 0x7c) = fVar6;
    dVar37 = (double)param_1[2];
    *(int *)(puVar16 + 0x1c) = (int)sVar13;
    if (*(int *)(iVar25 + 0x50) != 0) {
      *(undefined2 *)((int)param_1 + 0x56) = 1;
    }
  }
  pMVar14 = g_heroMobyPtr;
  *(f32 *)(puVar16 + 0x12) = (g_heroMobyPtr->pos).x;
  *(f32 *)((int)puVar16 + 0x94) = (pMVar14->pos).y;
  *(f32 *)(puVar16 + 0x13) = (pMVar14->pos).z;
  fVar3 = (pMVar14->pos).w;
  *(undefined4 *)(puVar16 + 0x13) = *(undefined4 *)(puVar16 + 0xf);
  *(f32 *)((int)puVar16 + 0x9c) = fVar3;
  iVar25 = CollLine(uVar22 - 0x150,uVar22 - 0x170,0x10,pMVar14,0);
  if (iVar25 != 0) {
    iVar25 = CollHotspot();
    fVar11 = animationSpeed;
    if ((iVar25 != 0) || (0.0 < dVar37)) {
      if ((g_CollOutput.pMoby == (MobyInstance *)0x0) || (0 < g_CollOutput.poly)) {
        if (0 < g_CollOutput.poly) {
          bVar19 = true;
          param_1[4] = g_CollOutput.ip.x;
          param_1[5] = g_CollOutput.ip.y;
          param_1[6] = g_CollOutput.ip.z;
          param_1[7] = g_CollOutput.ip.w;
        }
      }
      else {
        if ((g_CollOutput.pMoby == g_heroMobyPtr) ||
           (g_CollOutput.pMoby == (MobyInstance *)param_1[0x14])) {
          puVar16[0x26] = (longlong)(int)(animationSpeed * 300.5);
          puVar16[0x26] = (longlong)(int)(fVar11 * 10.5);
          if (*(int *)((int)puVar16 + 0x134) - *(int *)((int)puVar16 + 0x134) <=
              *(int *)(puVar16 + 0x1c)) goto LAB_002025e8;
        }
        fVar11 = 0.0;
        *(undefined4 *)(puVar16 + 0x14) = 0;
        *(undefined4 *)((int)puVar16 + 0xa4) = 0;
        pMVar30 = g_CollOutput.pMoby;
        dVar35 = 0.5;
        pMVar14 = (MobyInstance *)param_1[0x18];
        *(undefined4 *)(puVar16 + 0x15) = 0x3f000000;
        *(undefined4 *)((int)puVar16 + 0xac) = 0;
        dVar33 = dVar35;
        if (pMVar14 == pMVar30) {
          param_1[0x19] = (float)((int)param_1[0x19] + 1);
          FastVecSub(uVar22 - 0x130,&pMVar30->pos,param_1 + 0xc);
          param_1[0x10] = *(float *)(puVar16 + 0x16);
          param_1[0x11] = *(float *)((int)puVar16 + 0xb4);
          param_1[0x12] = *(float *)(puVar16 + 0x17);
          param_1[0x13] = *(float *)((int)puVar16 + 0xbc);
          fVar10 = *(float *)(puVar16 + 0x14);
          fVar11 = *(float *)((int)puVar16 + 0xa4);
          dVar35 = (double)*(float *)(puVar16 + 0x15);
          fVar7 = ((g_CollOutput.pMoby)->pos).x;
          fVar8 = ((g_CollOutput.pMoby)->pos).y;
          fVar12 = ((g_CollOutput.pMoby)->pos).z;
          fVar9 = ((g_CollOutput.pMoby)->pos).w;
          pMVar30 = g_CollOutput.pMoby;
        }
        else {
          param_1[0x19] = 0.0;
          param_1[0x18] = (float)pMVar30;
          fVar7 = (pMVar30->pos).x;
          fVar8 = (pMVar30->pos).y;
          fVar12 = (pMVar30->pos).z;
          fVar9 = (pMVar30->pos).w;
          fVar10 = fVar11;
        }
        param_1[0xc] = fVar7;
        bVar20 = true;
        param_1[0xd] = fVar8;
        param_1[0xe] = fVar12;
        param_1[0xf] = fVar9;
        fVar12 = (pMVar30->pos).x;
        param_1[4] = fVar12;
        fVar9 = (pMVar30->pos).y;
        param_1[5] = fVar9;
        fVar7 = (pMVar30->pos).z;
        param_1[6] = fVar7;
        param_1[7] = (pMVar30->pos).w;
        *(float *)(puVar16 + 0x14) = fVar10 + fVar12;
        *(float *)((int)puVar16 + 0xa4) = fVar11 + fVar9;
        *(float *)(puVar16 + 0x15) = (float)(dVar35 + (double)fVar7);
        GetGroundZ(dVar33,uVar22 - 0x140,0);
        bVar19 = true;
      }
    }
  }
LAB_002025e8:
  if ((g_goldWeaponsArray.bombGlove != '\0') && (g_heroState == FIRST_PERSON_VIEW)) {
    dVar36 = (double)(float)(dVar36 * 1.5);
    dVar45 = (double)(float)(dVar45 * 1.5);
    dVar37 = (double)(float)(dVar37 * 0.6666666865348816);
  }
  *(undefined4 *)(puVar16 + 0x12) = *(undefined4 *)(puVar16 + 0xe);
  *(undefined4 *)((int)puVar16 + 0x94) = *(undefined4 *)((int)puVar16 + 0x74);
  *(undefined4 *)(puVar16 + 0x13) = *(undefined4 *)(puVar16 + 0xf);
  *(undefined4 *)((int)puVar16 + 0x9c) = *(undefined4 *)((int)puVar16 + 0x7c);
  dVar40 = 11.0;
  dVar33 = 0.0;
  dVar39 = 2.0;
  dVar38 = 300.5;
  dVar35 = 10.5;
  do {
    while( true ) {
      do {
        do {
          iVar25 = FastDecTimerS32(uVar22 - 0x100);
          if (iVar25 != 0 || bVar19) goto LAB_002028d4;
          fVar11 = *(float *)(puVar16 + 0xe);
          fVar12 = *(float *)((int)puVar16 + 0x74);
          fVar9 = *(float *)(puVar16 + 0xf);
          lVar32 = 10;
          *(undefined4 *)((int)puVar16 + 0x8c) = *(undefined4 *)((int)puVar16 + 0x7c);
          *(float *)(puVar16 + 0x10) = fVar11;
          *(float *)((int)puVar16 + 0x84) = fVar12;
          *(float *)(puVar16 + 0x11) = fVar9;
          do {
            fVar11 = (float)((double)fVar11 + dVar36);
            fVar12 = (float)((double)fVar12 + dVar45);
            fVar9 = (float)((double)fVar9 + dVar37);
            dVar37 = -(double)(float)((double)DAT_0071f418 * dVar40 - dVar37);
            *(float *)(puVar16 + 0xe) = fVar11;
            *(float *)((int)puVar16 + 0x74) = fVar12;
            *(float *)(puVar16 + 0xf) = fVar9;
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
          iVar25 = CollLine(uVar22 - 0x160,uVar22 - 0x170,0x10,param_2,0);
        } while (iVar25 == 0);
        iVar25 = CollHotspot();
        dVar41 = (double)animationSpeed;
      } while ((iVar25 == 0) && (dVar33 < dVar37));
      if ((g_CollOutput.pMoby != (MobyInstance *)0x0) &&
         ((g_CollOutput.poly < 1 &&
          ((double)(*(float *)(puVar16 + 0xf) - *(float *)(puVar16 + 0x13)) < dVar39)))) break;
      if (0 < g_CollOutput.poly) {
        param_1[4] = g_CollOutput.ip.x;
        param_1[5] = g_CollOutput.ip.y;
        param_1[6] = g_CollOutput.ip.z;
        param_1[7] = g_CollOutput.ip.w;
        goto LAB_002028d4;
      }
    }
    if ((g_CollOutput.pMoby != g_heroMobyPtr) && (g_CollOutput.pMoby != (MobyInstance *)param_1[0x14]))
    break;
    puVar16[0x26] = (longlong)(int)(dVar41 * dVar38);
    puVar16[0x26] = (longlong)(int)(dVar41 * dVar35);
  } while (*(int *)((int)puVar16 + 0x134) - *(int *)((int)puVar16 + 0x134) <=
           *(int *)(puVar16 + 0x1c));
  *(undefined4 *)(puVar16 + 0x18) = 0;
  *(undefined4 *)((int)puVar16 + 0xc4) = 0;
  dVar37 = 0.5;
  *(undefined4 *)(puVar16 + 0x19) = 0x3f000000;
  pMVar30 = g_CollOutput.pMoby;
  pMVar14 = (MobyInstance *)param_1[0x18];
  *(undefined4 *)((int)puVar16 + 0xcc) = 0;
  dVar36 = dVar37;
  if (pMVar14 == pMVar30) {
    param_1[0x19] = (float)((int)param_1[0x19] + 1);
    FastVecSub(uVar22 - 0x110,&pMVar30->pos,param_1 + 0xc);
    param_1[0x10] = *(float *)(puVar16 + 0x1a);
    param_1[0x11] = *(float *)((int)puVar16 + 0xd4);
    param_1[0x12] = *(float *)(puVar16 + 0x1b);
    param_1[0x13] = *(float *)((int)puVar16 + 0xdc);
    dVar33 = (double)*(float *)(puVar16 + 0x18);
    dVar45 = (double)*(float *)((int)puVar16 + 0xc4);
    dVar37 = (double)*(float *)(puVar16 + 0x19);
    fVar10 = ((g_CollOutput.pMoby)->pos).x;
    fVar9 = ((g_CollOutput.pMoby)->pos).y;
    fVar11 = ((g_CollOutput.pMoby)->pos).z;
    fVar12 = ((g_CollOutput.pMoby)->pos).w;
    pMVar30 = g_CollOutput.pMoby;
  }
  else {
    param_1[0x18] = (float)pMVar30;
    param_1[0x19] = 0.0;
    fVar10 = (pMVar30->pos).x;
    fVar9 = (pMVar30->pos).y;
    fVar11 = (pMVar30->pos).z;
    fVar12 = (pMVar30->pos).w;
    dVar45 = dVar33;
  }
  param_1[0xc] = fVar10;
  bVar20 = true;
  param_1[0xd] = fVar9;
  param_1[0xe] = fVar11;
  param_1[0xf] = fVar12;
  fVar11 = (pMVar30->pos).x;
  param_1[4] = fVar11;
  fVar12 = (pMVar30->pos).y;
  param_1[5] = fVar12;
  fVar9 = (pMVar30->pos).z;
  param_1[6] = fVar9;
  param_1[7] = (pMVar30->pos).w;
  *(float *)(puVar16 + 0x18) = (float)(dVar33 + (double)fVar11);
  *(float *)((int)puVar16 + 0xc4) = (float)(dVar45 + (double)fVar12);
  *(float *)(puVar16 + 0x19) = (float)(dVar37 + (double)fVar9);
  GetGroundZ(dVar36,uVar22 - 0x120,0);
LAB_002028d4:
  if ((*(int *)(puVar16 + 0x1c) == 0) ||
     ((param_3 == 0 &&
      ((g_CollOutput.pMoby == (MobyInstance *)0x0 ||
       (iVar25 = MB_GetPlatformParent(), iVar25 == 0)))))) {
    uVar24 = 0;
  }
  else {
    if (((param_3 != 2) || (g_CollOutput.pMoby == (MobyInstance *)0x0)) ||
       (iVar25 = MB_GetPlatformParent(), iVar25 == 0)) {
      RegisterFuncForMoby(&PTR_M1209_00200608_007093a8,param_2);
    }
    if (((!bVar20) && (fVar11 = param_1[0x18], fVar11 != 0.0)) &&
       ((*(char *)((int)fVar11 + 0x20) == -3 || *(char *)((int)fVar11 + 0x20) == -2 ||
        (((*(ushort *)((int)fVar11 + 0x34) & 0x1000) == 0 ||
         (fVar11 = param_1[0x19], puVar16[0x26] = (longlong)(int)(animationSpeed * 30.5),
         *(int *)((int)puVar16 + 0x134) < (int)fVar11)))))) {
      param_1[0x19] = 0.0;
      param_1[0x18] = 0.0;
    }
    param_1[8] = g_CollOutput.normal.x;
    param_1[9] = g_CollOutput.normal.y;
    param_1[10] = g_CollOutput.normal.z;
    param_1[0xb] = g_CollOutput.normal.w;
    fVar10 = GameCamera.posX;
    fVar11 = param_1[4] - GameCamera.posX;
    fVar12 = param_1[5] - GameCamera.posY;
    *(float *)((int)puVar16 + 0x8c) = param_1[7];
    fVar9 = param_1[6] - GameCamera.posZ;
    *(float *)(puVar16 + 0x10) = fVar11;
    *(float *)((int)puVar16 + 0x84) = fVar12;
    fVar11 = fVar11 * 0.95;
    fVar12 = fVar12 * 0.95;
    fVar9 = fVar9 * 0.95;
    uVar24 = 1;
    *(float *)(puVar16 + 0x10) = fVar11;
    *(float *)((int)puVar16 + 0x84) = fVar12;
    *(float *)(puVar16 + 0x11) = fVar9;
    param_1[4] = fVar11 + fVar10;
    param_1[5] = fVar12 + GameCamera.posY;
    param_1[6] = fVar9 + GameCamera.posZ;
  }
  return uVar24;
}


// 0x0202b98 (0x1f1c bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 121 */

void UpdateMoby_121(MobyInstance *moby)

{
  bool bVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  MobyModeBit MVar21;
  int iVar15;
  uint uVar16;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar17;
  undefined4 uVar18;
  longlong lVar14;
  int iVar19;
  int iVar20;
  int *r;
  short sVar22;
  byte bVar23;
  int *g;
  int *b;
  int iVar24;
  longlong lVar25;
  int iVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double in_f5;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  float fVar48;
  GPiece<16> local_320;
  GPiece<16> local_310;
  float local_300;
  float local_2fc;
  float local_2f8;
  GPiece<16> local_2f0;
  float local_2e0;
  float local_2dc;
  float local_2d8;
  GPiece<16> local_2d0;
  GPiece<16> local_2c0;
  GPiece<16> local_2b0;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  Vec4 local_290;
  float local_280;
  float local_27c;
  float local_278;
  float local_270;
  float local_26c;
  float local_268;
  undefined4 local_264;
  float local_260;
  float local_25c;
  float local_258;
  undefined4 local_254;
  float local_250;
  float local_24c;
  float local_248;
  undefined4 local_244;
  float afStack_240 [4];
  float local_230;
  float local_22c;
  float local_228;
  undefined4 local_224;
  f32 local_220;
  f32 local_21c;
  float local_218;
  f32 local_214;
  float local_210;
  float local_20c;
  float local_208;
  undefined4 local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  f32 local_1f0;
  f32 local_1ec;
  float local_1e8;
  f32 local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  MobyInstance *local_1c0;
  undefined *local_1bc;
  undefined1 local_1b8;
  undefined1 local_1b7;
  MOBY_OCLASSES local_1b6;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  int local_150 [18];
  longlong local_108;
  
  lVar6 = (longlong)(int)moby;
  uStack_194 = uRam007666fc;
  uStack_198 = uRam007666f8;
  uStack_19c = uRam007666f4;
  uStack_1a0 = _DAT_007666f0;
  uStack_184 = uRam0076670c;
  uStack_188 = uRam00766708;
  uStack_18c = uRam00766704;
  uStack_190 = _DAT_00766700;
  uStack_174 = uRam0076671c;
  uStack_178 = uRam00766718;
  uStack_17c = uRam00766714;
  uStack_180 = _DAT_00766710;
  uStack_164 = uRam0076672c;
  uStack_168 = uRam00766728;
  uStack_16c = uRam00766724;
  uStack_170 = _DAT_00766720;
  iVar24 = 0;
  uStack_154 = uRam0076673c;
  uStack_158 = uRam00766738;
  uStack_15c = uRam00766734;
  uStack_160 = _DAT_00766730;
  dVar38 = 0.0;
  local_300 = 0.0;
  local_2fc = 0.0;
  dVar43 = 2.0;
  local_2f8 = g_FrameTime * 2.0;
  pfVar3 = (float *)moby->pVar;
  bVar1 = moby->state != '\0';
  dVar42 = 1.0;
  if (((g_currentWeaponMoby != (MobyInstance *)0x0) && (g_currentWeaponMoby->oClass == BOMB_GLOVE))
     || (bVar1)) {
    if ((g_heroType == '\0') || (bVar1)) {
      if (((g_heroInvisible == '\0') && (DAT_0096bd8f == '\0')) || (bVar1)) {
        MVar21 = moby->modeBits &
                 (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                  DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW
                  |TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
      }
      else {
        MVar21 = moby->modeBits | (UNK_40|DISABLED);
      }
      fVar48 = pfVar3[0x14];
      moby->modeBits = MVar21;
      if (((*(short *)((int)fVar48 + 0xa6) == 0xc0) && (*(short *)((int)pfVar3 + 0x56) == 0)) &&
         (0.0 < SQRT(pfVar3[2] * pfVar3[2] + *pfVar3 * *pfVar3 + pfVar3[1] * pfVar3[1]))) {
        if ((g_standingOnMoby == 0) || (iVar15 = MB_GetPlatformParent(), iVar15 == 0)) {
          M121_00201da8(pfVar3,lVar6,1);
        }
        else {
          iVar15 = M121_00201da8(pfVar3,lVar6,0);
          if (iVar15 == 0) {
            M121_00201da8(pfVar3,lVar6,2);
          }
        }
      }
      if (moby->state == '\x01') {
        FastDecTimerS16((int)pfVar3 + 0x6a);
        dVar27 = (double)FastIntToDouble(*(undefined2 *)((int)pfVar3 + 0x6a));
        dVar41 = 30.5;
        local_108 = (longlong)(int)(animationSpeed * 30.5);
        dVar28 = (double)FastIntToDouble((int)(animationSpeed * 30.5));
        dVar27 = (double)(float)(dVar27 / dVar28);
        uVar16 = FastDoubleToInt((double)(float)(dVar27 * -127.0 + 255.0));
        dVar27 = (double)(float)(dVar27 * 64.0 + 64.0);
        uVar7 = FastDoubleToInt(dVar27);
        uVar8 = FastDoubleToInt(dVar27);
        sVar22 = *(short *)(pfVar3 + 0x1a);
        moby->glowRgba =
             (uint)((uVar7 & 0xffffffff) << 8) | uVar16 | (uint)((uVar8 & 0xffffffff) << 0x10) |
             0xff000000;
        if (((sVar22 == 0) &&
            (worldUpdateTime ==
             (((int)worldUpdateTime >> 3) +
             (uint)((int)worldUpdateTime < 0 && (worldUpdateTime & 7) != 0)) * 8)) &&
           (0 < DAT_0076666c)) {
          iVar15 = 0;
          do {
            in_f5 = (double)DAT_00766638;
            MB_randSphere
                      (dVar38,(double)(float)(in_f5 * (double)g_FrameTime),local_2b0);
            MB_randRangeFloat(DAT_0076664c,DAT_00766650);
            MB_randRangeFloat(DAT_00766654,DAT_00766658);
            uVar18 = DAT_00766660;
            uVar17 = DAT_0076665c;
            MB_randRangeFloat((float)dVar38,(float)dVar42);
            uVar9 = FastLerpColor(uVar17,uVar18);
            uVar18 = DAT_00766668;
            uVar17 = DAT_00766664;
            MB_randRangeFloat((float)dVar38,(float)dVar42);
            uVar10 = FastLerpColor(uVar17,uVar18);
            dVar27 = (double)MB_randRangeFloat((float)dVar38,(float)dVar42);
            local_108 = (longlong)DAT_0076663c;
            uVar11 = FastDoubleToInt
                               ((double)(animationSpeed *
                                        (float)((double)local_108 * dVar27 + dVar42)));
            local_108 = (longlong)DAT_00766640;
            dVar28 = (double)local_108;
            dVar27 = (double)MB_randRangeFloat(-DAT_00766648,DAT_00766648);
            uVar12 = FastDoubleToInt
                               ((double)(animationSpeed *
                                        (float)(dVar28 * (double)(float)(dVar27 + dVar42))));
            local_108 = (longlong)DAT_00766644;
            dVar28 = (double)local_108;
            dVar27 = (double)MB_randRangeFloat(-DAT_00766648,DAT_00766648);
            uVar13 = FastDoubleToInt
                               ((double)(animationSpeed *
                                        (float)(dVar28 * (double)(float)(dVar27 + dVar42))));
            local_108 = (longlong)(int)uVar12;
            SpawnPart_2(lVar6 + 0x10,local_2d0,local_2c0,uVar9,uVar10,uVar11,uVar12,uVar13)
            ;
            iVar15 = iVar15 + 1;
          } while (iVar15 < DAT_0076666c);
        }
        dVar27 = (double)FastWrapRot((moby->rotation).x,g_FrameTime * 2.0943952)
        ;
        (moby->rotation).x = (float)dVar27;
        dVar27 = (double)FastWrapRot((moby->rotation).y,g_FrameTime * 7.8539815)
        ;
        fVar48 = (moby->pos).x;
        (moby->rotation).y = (float)dVar27;
        sVar22 = *(short *)(pfVar3 + 0x1a);
        (moby->pos).x = fVar48 + *pfVar3;
        (moby->pos).y = (moby->pos).y + pfVar3[1];
        (moby->pos).z = (moby->pos).z + pfVar3[2];
        if (sVar22 == 0) {
          pfVar3[2] = -(DAT_0071f418 * 11.0 - pfVar3[2]);
        }
        else {
          dVar27 = 0.10000000149011612;
          pfVar3[2] = -(DAT_0071f418 * 11.0 * 0.1 - pfVar3[2]);
          local_108 = (longlong)(int)(animationSpeed * 6.5);
          iVar15 = MB_randInt((int)(animationSpeed * 6.5) + -1);
          if (iVar15 == 0) {
            fVar48 = CollWaterHeight(&(moby->pos).x,&local_2a0);
            dVar28 = (double)fVar48;
            local_2a0 = *pfVar3 * 0.25;
            local_29c = pfVar3[1] * 0.25;
            local_298 = pfVar3[2] * 0.25;
            local_294 = pfVar3[3];
            dVar27 = (double)MB_randRangeFloat(0.05,(float)dVar27);
            SpawnPart_34
                      ((double)(float)(dVar27 * 210000.0),dVar28,(Vec4 *)&moby->pos,&local_2a0);
          }
        }
        local_1bc = &DAT_00830000;
        dVar28 = 300.5;
        dVar27 = 10.5;
        local_108 = (longlong)(int)(animationSpeed * 10.5);
        if ((int)*(short *)(pfVar3 + 0x15) <
            (int)(animationSpeed * 300.5) - (int)(animationSpeed * 10.5)) {
          local_1bc = &DAT_00830001;
        }
        local_1b4 = 0x40000000;
        local_1d0 = *pfVar3;
        local_1b0 = 1;
        local_1cc = pfVar3[1];
        local_1c8 = pfVar3[2];
        local_1c4 = pfVar3[3];
        local_1c0 = moby;
        FUN_005e84c0(dVar42,&local_1d0,&local_1d0);
        local_1b6 = moby->oClass;
        local_1b7 = 1;
        local_1b8 = 2;
        local_1c8 = 1.0;
        local_1c4 = 5627.925;
        if (*(short *)(pfVar3 + 0x1a) != 0) {
          *(short *)(pfVar3 + 0x1a) = *(short *)(pfVar3 + 0x1a) + 1;
        }
        lVar25 = lVar6 + 0x10;
        iVar15 = CollLine(local_310,lVar25,0x10,lVar6,&local_1d0);
        if (iVar15 == 0) {
          iVar15 = FastDecTimerS16(pfVar3 + 0x15);
          if (iVar15 != 0) {
            moby->setByGroup = '\x01';
            local_300 = *pfVar3 + 0.0;
            local_2fc = pfVar3[1] + 0.0;
            local_2f8 = local_2f8 + pfVar3[2];
          }
        }
        else if (((*(short *)(pfVar3 + 0x1a) == 0) &&
                 (iVar15 = CollHotspot(), iVar15 == 0)) && ((int)pfVar3[2] < 0)) {
          WaterTile_PutDrop
                    ((moby->pos).x,(moby->pos).y,0.5,-0.35,WaterTiles,WaterTileCnt,(float)in_f5);
          pfVar3[3] = 0.0;
          pfVar3[1] = 0.0;
          *pfVar3 = 0.0;
          *(undefined2 *)(pfVar3 + 0x1a) = 1;
          pfVar3[2] = g_FrameTime * -1.5;
          local_290.x = (moby->pos).x;
          local_290.y = (moby->pos).y;
          local_290.z = g_CollOutput.ip.z;
          iVar15 = FUN_00456478(dVar43,&local_290);
          if (iVar15 != 0) {
            *(undefined1 *)(iVar15 + 0x23) = 0x70;
          }
          iVar15 = 0;
          dVar28 = 3.0;
          dVar27 = 6.5;
          do {
            dVar29 = (double)MB_randRot();
            dVar30 = (double)MB_randRangeFloat
                                       ((float)dVar38,
                                        (float)((double)g_FrameTime * dVar28));
            dVar31 = (double)cosf((float)dVar29);
            local_280 = (float)(dVar31 * dVar30);
            dVar29 = (double)FUN_005e8128(dVar29);
            local_27c = (float)(dVar29 * dVar30);
            dVar29 = (double)MB_randRangeFloat
                                       ((float)((double)g_FrameTime * dVar28),
                                        (float)((double)g_FrameTime * dVar27));
            local_278 = (float)dVar29;
            uVar17 = MB_randRange(0x5a,0x78);
            uVar18 = MB_randInt(2);
            SpawnPart_35(&local_290,&local_280,uVar18,uVar17);
            iVar15 = iVar15 + 1;
          } while (iVar15 < 0x10);
        }
        else if ((*(short *)(pfVar3 + 0x1a) != 0) || (iVar15 = CollHotspot(), iVar15 != 0)
                ) {
          if (g_CollOutput.pMoby == (MobyInstance *)0x0) {
            if (0 < g_CollOutput.poly) {
              moby->setByGroup = '\x01';
              (moby->pos).x = g_CollOutput.ip.x;
              (moby->pos).y = g_CollOutput.ip.y;
              (moby->pos).z = g_CollOutput.ip.z;
              (moby->pos).w = g_CollOutput.ip.w;
              FastVecReflect(&local_300,pfVar3,0xa10980);
              FUN_005e7f98((double)(float)((double)g_FrameTime * dVar43),&local_300,
                           &local_300);
              FUN_005e7f98(dVar42,local_2f0,0xa10980);
            }
          }
          else if ((((g_CollOutput.pMoby != g_heroMobyPtr) &&
                    (g_CollOutput.pMoby != (MobyInstance *)pfVar3[0x14])) ||
                   (iVar15 = (int)((double)animationSpeed * dVar27), local_108 = (longlong)iVar15,
                   (int)*(short *)(pfVar3 + 0x15) < (int)((double)animationSpeed * dVar28) - iVar15)
                   ) && (((g_CollOutput.pMoby)->pUpdate != DAT_00735d00 ||
                         ((g_CollOutput.pMoby)->oClass == TRAIN_LOCOMOTIVE)))) {
            moby->setByGroup = '\x01';
            (moby->pos).x = g_CollOutput.ip.x;
            (moby->pos).y = g_CollOutput.ip.y;
            (moby->pos).z = g_CollOutput.ip.z;
            (moby->pos).w = g_CollOutput.ip.w;
            FastVecReflect(&local_300,pfVar3,0xa10980);
            FUN_005e7f98((double)(float)((double)g_FrameTime * dVar43),&local_300,
                         &local_300);
            FUN_005e7f98(dVar42,local_2f0,0xa10980);
          }
        }
        if (moby->setByGroup != '\0') {
          dVar27 = (double)FastIntToDouble(g_goldWeaponsArray.bombGlove);
          dVar31 = (double)(float)(dVar27 + dVar42);
          dVar27 = (double)local_300 * dVar31;
          fVar4 = GameCamera.posY - (moby->pos).y;
          dVar28 = (double)local_2fc * dVar31;
          dVar29 = (double)local_2f8 * dVar31;
          fVar48 = GameCamera.posX - (moby->pos).x;
          fVar5 = GameCamera.posZ - (moby->pos).z;
          dVar30 = 20.5;
          local_108 = (longlong)(int)(animationSpeed * 20.5);
          dVar44 = (double)SQRT(fVar5 * fVar5 + fVar48 * fVar48 + fVar4 * fVar4);
          if ((int)*(short *)(pfVar3 + 0x1a) < (int)(animationSpeed * 20.5)) {
            uVar11 = CollMobySphere
                               ((double)(float)(dVar31 * 0.5),lVar25,&DAT_00202ab4,0x10,lVar6,0);
            uVar9.piece<0,4>() = (moby->pos).x;
            uVar9.piece<4,4>() = (moby->pos).y;
            uVar10.piece<0,4>() = (moby->pos).z;
            uVar10.piece<4,4>() = (moby->pos).w;
            MB_DamageMobyList
                      (dVar43,dVar42,dVar42,lVar6,1,uVar9,uVar10,&DAT_00a14a00,uVar11,0,
                       &DAT_00830000);
            moby->state = '\x02';
          }
          if (0x32 < numSpawnableMobys) {
            iVar15 = 0;
            dVar40 = -1.0;
            dVar39 = 3.5;
            dVar37 = 6.5;
            dVar36 = 60.5;
            dVar35 = 120.5;
            do {
              local_270 = 0.0;
              local_26c = 0.0;
              local_268 = 0.0;
              local_264 = 0;
              dVar32 = (double)MB_randRangeFloat((float)dVar40,(float)dVar42);
              local_270 = (float)dVar32;
              dVar32 = (double)MB_randRangeFloat((float)dVar40,(float)dVar42);
              local_26c = (float)dVar32;
              FUN_005e7f98((double)(local_268 * 1.0 + local_270 * 0.0 + (float)(dVar32 * 0.0)),
                           &local_2e0,local_2f0);
              local_270 = local_270 - local_2e0;
              local_26c = local_26c - local_2dc;
              local_268 = local_268 - local_2d8;
              MB_randRangeFloat((float)dVar38,(float)dVar42);
              FUN_005e7f98(&local_2e0,local_2f0);
              local_270 = local_270 + local_2e0;
              local_26c = local_26c + local_2dc;
              local_268 = local_268 + local_2d8;
              dVar32 = (double)MB_randRangeFloat((float)dVar39,(float)dVar37);
              FUN_005e7f98((double)((float)(dVar32 * dVar31) * g_FrameTime),&local_270,
                           &local_270);
              local_270 = local_270 + (float)dVar27;
              local_26c = local_26c + (float)dVar28;
              local_268 = local_268 + (float)dVar29;
              iVar26 = (int)((double)animationSpeed * dVar35);
              local_108 = (longlong)iVar26;
              uVar9 = MB_randRange((int)((double)animationSpeed * dVar36),iVar26);
              FUN_0020bb70(lVar25,&local_270,uVar9,0,g_goldWeaponsArray.bombGlove);
              iVar15 = iVar15 + 1;
            } while (iVar15 < 10);
          }
          dVar35 = (double)animationSpeed;
          sVar22 = *(short *)(pfVar3 + 0x1a);
          local_108 = (longlong)(int)(dVar35 * dVar30);
          if ((int)sVar22 < (int)(dVar35 * dVar30)) {
            if (0x14 < numSpawnableMobys) {
              iVar15 = 0;
              dVar40 = -1.0;
              dVar39 = 6.5;
              dVar37 = 10.0;
              dVar36 = 60.5;
              dVar35 = 90.5;
              do {
                local_250 = 0.0;
                local_24c = 0.0;
                local_248 = 0.0;
                local_244 = 0;
                dVar32 = (double)MB_randRangeFloat((float)dVar40,(float)dVar42);
                local_250 = (float)dVar32;
                dVar32 = (double)MB_randRangeFloat((float)dVar40,(float)dVar42);
                local_24c = (float)dVar32;
                FUN_005e7f98((double)(local_248 * 1.0 + local_250 * 0.0 + (float)(dVar32 * 0.0)),
                             &local_2e0,local_2f0);
                local_250 = local_250 - local_2e0;
                local_24c = local_24c - local_2dc;
                local_248 = local_248 - local_2d8;
                MB_randRangeFloat((float)dVar38,(float)dVar42);
                FUN_005e7f98(&local_2e0,local_2f0);
                local_250 = local_250 + local_2e0;
                local_24c = local_24c + local_2dc;
                local_248 = local_248 + local_2d8;
                dVar32 = (double)MB_randRangeFloat((float)dVar39,(float)dVar37);
                FUN_005e7f98((double)((float)(dVar32 * dVar31) * g_FrameTime),&local_250,
                             &local_250);
                local_250 = local_250 + (float)dVar27;
                local_24c = local_24c + (float)dVar28;
                local_248 = local_248 + (float)dVar29;
                iVar26 = (int)((double)animationSpeed * dVar35);
                local_108 = (longlong)iVar26;
                uVar9 = MB_randRange((int)((double)animationSpeed * dVar36),iVar26);
                FUN_0020bb70(lVar25,&local_250,uVar9,1,g_goldWeaponsArray.bombGlove);
                iVar15 = iVar15 + 1;
              } while (iVar15 < 4);
            }
            local_260 = 0.0;
            local_25c = 0.0;
            local_258 = 0.0;
            local_254 = 0;
            dVar28 = -1.0;
            dVar27 = (double)MB_randRangeFloat(-1.0,(float)dVar42);
            local_260 = (float)dVar27;
            dVar27 = (double)MB_randRangeFloat((float)dVar28,(float)dVar42);
            local_25c = (float)dVar27;
            dVar27 = (double)MB_randRangeFloat((float)dVar28,(float)dVar42);
            local_258 = (float)dVar27;
            dVar27 = dVar44 * 0.5;
            FUN_005e7f98((double)((float)(dVar44 * 0.20000000298023224) * g_FrameTime),
                         &local_260,&local_260);
            FUN_005e7f98((double)((float)(dVar44 * dVar43) * g_FrameTime),local_320,
                         local_320);
            local_260 = local_260 + fVar48;
            local_25c = local_25c + fVar4;
            local_258 = local_258 + (float)(dVar27 + (double)fVar5);
            dVar27 = 10.0;
            FUN_005e8e80((double)(g_FrameTime * 10.0),&local_260,&local_260);
            local_108 = (longlong)(int)(animationSpeed * 90.5);
            uVar9 = MB_randRange
                              ((int)(animationSpeed * 60.5),(int)(animationSpeed * 90.5));
            FUN_0020bb70(lVar25,&local_260,uVar9,1,g_goldWeaponsArray.bombGlove);
            iVar15 = 4;
            if (dVar44 < 6.0) {
              iVar15 = FastDoubleToInt(dVar44);
              iVar15 = iVar15 + 1;
            }
            dVar28 = dVar38;
            if (dVar44 - 7.0 < 0.0) {
              dVar28 = (double)(float)(7.0 - dVar44);
            }
            if (0 < iVar15) {
              iVar26 = 0;
              dVar37 = 8.0;
              dVar35 = 15.5;
              dVar36 = (double)(float)(dVar31 * 400000.0);
              dVar29 = 25.5;
              do {
                dVar39 = (double)MB_randRangeFloat((float)dVar37,(float)dVar27);
                dVar40 = (double)g_FrameTime;
                local_150[6] = 0x4f008fff;
                local_150[7] = 0x4f008fff;
                local_150[8] = 0x4f007fff;
                local_150[9] = 0x4f006fff;
                local_150[10] = 0x2fffffff;
                local_150[0xb] = 0x2fffffff;
                local_150[0xc] = 0x2f005f7f;
                local_150[0xd] = 0x2f004f7f;
                local_150[0xe] = 0x2f003f7f;
                local_150[0xf] = 0x2f00004f;
                dVar32 = (double)(float)((double)(float)(dVar39 * dVar31) * dVar40 -
                                        (double)(float)(dVar40 * dVar28));
                local_150[0x10] = 0x2f000000;
                local_150[0x11] = 0x3f000000;
                lVar14 = MB_randInt
                                   ((double)(float)(dVar39 * dVar31),dVar40,
                                    (double)(float)(dVar40 * dVar28),6);
                iVar19 = ReorderRGB
                                   (*(int *)((int)local_150 + (int)(lVar14 << 2) + 0x18),
                                    (uint)g_goldWeaponsArray.bombGlove);
                lVar14 = MB_randInt(6);
                iVar20 = ReorderRGB
                                   (*(int *)((int)local_150 + (int)(lVar14 << 2) + 0x30),
                                    (uint)g_goldWeaponsArray.bombGlove);
                iVar2 = (int)((double)animationSpeed * dVar30);
                local_108 = (longlong)iVar2;
                MB_randRange((int)((double)animationSpeed * dVar35),iVar2);
                iVar2 = (int)((double)animationSpeed * dVar41);
                local_108 = (longlong)iVar2;
                MB_randRange((int)((double)animationSpeed * dVar29),iVar2);
                SpawnPart_11(dVar36,dVar32,lVar25,&local_300,iVar19,iVar20);
                iVar26 = iVar26 + 1;
              } while (iVar26 < iVar15);
            }
            if (9.0 < dVar44) {
              dVar27 = (double)(float)(dVar31 * 4.0);
              local_108 = (longlong)(int)(animationSpeed * 15.5);
              FUN_004d4138(dVar27,lVar6,lVar25,&local_300);
              local_150[1] = 0x20;
              local_150[2] = 0;
              local_150[0] = 0x7f;
              ReorderRGB
                        (local_150,local_150 + 1,local_150 + 2,(uint)g_goldWeaponsArray.bombGlove);
              local_108 = (longlong)(int)(animationSpeed * 24.5);
              FUN_004d4138(dVar27,lVar6,lVar25,&local_300);
            }
            r = local_150 + 3;
            g = local_150 + 4;
            local_150[3] = 0x7f;
            b = local_150 + 5;
            local_150[4] = 0x3f;
            local_150[5] = 0;
            ReorderRGB(r,g,b,(uint)g_goldWeaponsArray.bombGlove);
            local_108 = (longlong)(int)((double)animationSpeed * dVar30);
            FUN_004d4138((double)(float)(dVar31 * 4.0),lVar6,lVar25,&local_300,0x30,
                         (int)((double)animationSpeed * dVar30),local_150[3] & 0xff,
                         local_150[4] & 0xff,local_150[5] & 0xff);
            local_150[5] = 0;
            local_150[3] = 0x60;
            local_150[4] = 0x10;
            ReorderRGB(r,g,b,(uint)g_goldWeaponsArray.bombGlove);
            local_108 = (longlong)(int)(animationSpeed * 27.5);
            FUN_004d4138((double)(float)(dVar31 * 3.5),lVar6,lVar25,&local_300,0x40,
                         (int)(animationSpeed * 27.5),local_150[3] & 0xff,local_150[4] & 0xff,
                         local_150[5] & 0xff);
            local_150[4] = 0;
            local_150[5] = 0;
            local_150[3] = 0x20;
            ReorderRGB(r,g,b,(uint)g_goldWeaponsArray.bombGlove);
            local_108 = (longlong)(int)(animationSpeed * 29.5);
            FUN_004d4138((double)(float)(dVar31 * 3.0),lVar6,lVar25,&local_300);
            sVar22 = *(short *)(pfVar3 + 0x1a);
            dVar35 = (double)animationSpeed;
          }
          local_108 = (longlong)(int)(dVar35 * dVar30);
          if ((int)(dVar35 * dVar30) <= (int)sVar22) {
            (moby->pos).z = (float)((double)(moby->pos).z + dVar42);
            fVar48 = CollWaterHeight(&((Vec4 *)lVar25)->x,afStack_240);
            dVar27 = (double)fVar48;
            iVar15 = 0;
            (moby->pos).z = (float)((double)(moby->pos).z - dVar42);
            dVar39 = -1.0;
            dVar37 = -0.5;
            dVar36 = 4.0;
            dVar35 = 8.0;
            dVar29 = 0.05000000074505806;
            dVar41 = 0.10000000149011612;
            dVar28 = 210000.0;
            do {
              local_230 = 0.0;
              local_22c = 0.0;
              local_228 = 0.0;
              local_224 = 0;
              dVar40 = (double)MB_randRangeFloat((float)dVar39,(float)dVar42);
              local_230 = (float)dVar40;
              dVar40 = (double)MB_randRangeFloat((float)dVar39,(float)dVar42);
              local_22c = (float)dVar40;
              dVar40 = (double)MB_randRangeFloat((float)dVar37,(float)dVar43);
              local_228 = (float)dVar40;
              dVar40 = (double)MB_randRangeFloat
                                         ((float)((double)g_FrameTime * dVar36),
                                          (float)((double)g_FrameTime * dVar35));
              FUN_005e7f98((double)(float)(dVar40 * dVar31),&local_230,&local_230);
              dVar40 = (double)MB_randRangeFloat((float)dVar29,(float)dVar41);
              SpawnPart_34
                        ((double)(float)(dVar40 * dVar28),dVar27,(Vec4 *)lVar25,&local_230);
              iVar15 = iVar15 + 1;
            } while (iVar15 < 0x96);
          }
          *pfVar3 = 0.0;
          moby->setByGroup = '\0';
          local_108 = (longlong)(int)((double)animationSpeed * dVar30);
          if ((int)*(short *)(pfVar3 + 0x1a) < (int)((double)animationSpeed * dVar30)) {
            if (g_goldWeaponsArray.bombGlove == '\0') {
              PlayMobySound(0,0,moby);
            }
            else {
              PlayMobySound(1,0,moby);
            }
          }
          else {
            sound_MobyPlay_oClass(0x16,0,moby,0);
          }
          if (*(short *)(pfVar3 + 0x1a) != 0) {
            local_220 = (moby->pos).x;
            local_21c = (moby->pos).y;
            local_214 = (moby->pos).w;
            local_218 = (moby->pos).z + 3.5;
            dVar41 = 0.5;
            dVar27 = (double)GetGroundZ(0x3fe0000000000000,&local_220,0);
            dVar28 = (double)GetGroundZNoWater(&local_220);
            if ((dVar28 != dVar27) && ((float)(dVar27 - dVar28) < 1.2)) {
              iVar15 = 0;
              dVar30 = (double)(float)(dVar41 + dVar27);
              dVar36 = -0.75;
              dVar35 = 0.75;
              dVar40 = 4.0;
              dVar39 = 14.0;
              dVar31 = 0.3499999940395355;
              dVar29 = 8.0;
              dVar37 = 0.25;
              dVar28 = 20.0;
              do {
                local_210 = 0.0;
                local_20c = 0.0;
                local_208 = 0.0;
                local_204 = 0;
                dVar32 = (double)MB_randRangeFloat
                                           ((float)((double)g_FrameTime * dVar36),
                                            (float)((double)g_FrameTime * dVar35));
                local_210 = (float)dVar32;
                dVar32 = (double)MB_randRangeFloat
                                           ((float)((double)g_FrameTime * dVar36),
                                            (float)((double)g_FrameTime * dVar35));
                local_20c = (float)dVar32;
                dVar32 = (double)MB_randRangeFloat
                                           ((float)((double)g_FrameTime * dVar40),
                                            (float)((double)g_FrameTime * dVar39));
                local_208 = (float)dVar32;
                dVar32 = (double)MB_randRangeFloat((float)dVar38,(float)dVar31);
                dVar33 = (double)MB_randRot();
                dVar34 = (double)cosf((float)dVar33);
                local_200 = (float)(dVar34 * dVar32);
                dVar33 = (double)FUN_005e8128(dVar33);
                local_200 = local_200 + (moby->pos).x;
                local_1fc = (float)(dVar33 * dVar32 + (double)(moby->pos).y);
                local_1f8 = (float)dVar30;
                local_208 = -(float)((double)(float)((double)g_FrameTime * dVar32) *
                                     dVar29 - (double)local_208);
                uVar9 = MB_randRangeFloat((float)dVar37,(float)dVar42);
                SpawnPart_64
                          (uVar9,dVar27,(double)(float)((double)DAT_0071f418 * dVar28),&local_200,
                           &local_210,0);
                iVar15 = iVar15 + 1;
              } while (iVar15 < 100);
              dVar32 = -3.0;
              dVar36 = 3.0;
              dVar35 = 1.5;
              dVar31 = 6.0;
              dVar30 = 31500.001953125;
              dVar29 = 52500.0;
              dVar28 = 90.5;
              dVar38 = 150.5;
              do {
                dVar33 = (double)MB_randRangeFloat((float)dVar37,(float)dVar42);
                uVar9 = 0x7f000000;
                TweenColor((float)dVar33,0x7f000000,0x7f7f6060);
                dVar33 = (double)MB_randRangeFloat((float)dVar41,(float)dVar42);
                uVar10 = 0;
                TweenColor((float)dVar33,0,0x3f3030);
                dVar33 = (double)MB_randRangeFloat((float)dVar32,(float)dVar36);
                local_1e0 = (float)dVar33;
                dVar33 = (double)MB_randRangeFloat((float)dVar32,(float)dVar36);
                local_1dc = (float)dVar33;
                dVar33 = (double)MB_randRangeFloat
                                           ((float)((double)g_FrameTime * dVar40),
                                            (float)((double)g_FrameTime * dVar39));
                local_1d8 = (float)dVar33;
                dVar33 = (double)MB_randRangeFloat((float)dVar35,(float)dVar36);
                FUN_005e7f98((double)(float)(dVar33 * (double)g_FrameTime),&local_1e0,
                             &local_1e0);
                dVar33 = (double)MB_randRangeFloat((float)dVar36,(float)dVar31);
                local_1d8 = (float)(dVar33 * (double)g_FrameTime);
                local_1f0 = (moby->pos).x;
                local_1ec = (moby->pos).y;
                local_1e4 = (moby->pos).w;
                local_1e8 = (float)dVar27;
                uVar12 = MB_randRangeFloat((float)dVar30,(float)dVar29);
                iVar15 = (int)((double)animationSpeed * dVar38);
                local_108 = (longlong)iVar15;
                uVar11 = MB_randRange((int)((double)animationSpeed * dVar28),iVar15);
                SpawnPart_15
                          (uVar12,&local_1f0,&local_1e0,uVar9,uVar10,0xffffffffffffffff,uVar11,1,
                           *DAT_00a52830);
                iVar24 = iVar24 + 1;
              } while (iVar24 < 0x14);
            }
          }
          auVar45 = ZEXT416(0xffffffff);
          auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
          auVar46 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar45 = vectorShiftLeftIntegerWord(auVar45,auVar45);
          fVar48 = 0.35;
          if (dVar44 - 20.0 < 0.0) {
            fVar48 = (float)(dVar44 * 0.017500000074505806);
          }
          GameCamera.offset0.amp = 0.4 - fVar48;
          auVar47 = loadVectorLeftIndexed(0x88,0x202ab4);
          auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar45 = vectorMultiplyAddFloatingPoint
                              (auVar46,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60
                               ,auVar45);
          auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
          auVar45 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
          GameCamera.offset0.total =
               storeVectorElementWordIndexed
                         (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0x168,
                          0x9513c0);
          FUN_003fda38(&uStack_1a0,lVar25,0,0);
          if (moby->state != '\x02') {
            DeleteMoby(moby);
            return;
          }
        }
      }
      else if (moby->state != '\x02') {
        sVar22 = *(short *)((int)pfVar3 + 0x6a) + 1;
        *(short *)((int)pfVar3 + 0x6a) = sVar22;
        local_108 = (longlong)(int)sVar22;
        fVar48 = MB_WrapRot((float)local_108 * 0.068);
        dVar38 = (double)FUN_005e8128((double)fVar48);
        uVar7 = FastDoubleToInt((double)(float)(dVar38 * 96.0));
        moby->glowRgba =
             (int)((uVar7 & 0xffffffff) << 8) + 0x9f00U | (int)uVar7 + 0x9fU |
             (int)((uVar7 & 0xffffffff) << 0x10) + 0x9f0000U | 0xff000000;
      }
      if (moby->state == '\x02') {
        moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
        dVar38 = (double)FastIntToDouble(g_goldWeaponsArray.bombGlove);
        dVar27 = 0.5;
        dVar41 = (double)((float)(dVar38 + dVar42) * 3.0 - 0.5);
        dVar38 = (double)FastIntToDouble(moby->setByGroup);
        dVar28 = 15.5;
        fVar48 = Lerp((float)dVar27,(float)dVar41,
                                (float)(dVar38 / (double)(longlong)(animationSpeed * 15.5)));
        uVar9 = CollMobySphere((double)fVar48,lVar6 + 0x10);
        uVar11.piece<0,4>() = (moby->pos).x;
        uVar11.piece<4,4>() = (moby->pos).y;
        uVar12.piece<0,4>() = (moby->pos).z;
        uVar12.piece<4,4>() = (moby->pos).w;
        MB_DamageMobyList
                  (dVar43,dVar42,dVar42,lVar6,2,uVar11,uVar12,&DAT_00a14a00,uVar9,0,&DAT_00830000);
        bVar23 = moby->setByGroup + 1;
        moby->setByGroup = bVar23;
        local_108 = (longlong)(int)((double)animationSpeed * dVar28);
        if ((int)((double)animationSpeed * dVar28) < (int)(uint)bVar23) {
          DeleteMoby(moby);
        }
      }
    }
    else {
      DeleteMoby(moby);
    }
  }
  else {
    DeleteMoby(moby);
  }
  return;
}


