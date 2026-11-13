// game/update/moby74.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x43cc98-0x440360
#include <math.h>
#include "game/update/moby74.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/mesh.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/pause.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby121.h"
#include "game/update/moby31.h"
#include "game/update/moby639.h"
#include "game/update/moby775.h"
#include "game/update/moby998.h"
#include "game/vendor.h"
#include "game/water.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x043cc98 (0x16c bytes)
MobyInstance * Spawn_Moby74_MineBall(undefined4 param_1,f32 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  MobyInstance *pMVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  pMVar3 = CreateMoby(MINE_004A);
  if (pMVar3 != (MobyInstance *)0x0) {
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = 0x7f;
    pMVar3->enabled = '\x01';
    pMVar3->state = '\0';
    puVar1 = (undefined4 *)pMVar3->pVar;
    pMVar3->scale = pMVar3->scale * 0.5;
    *(undefined2 *)((int)puVar1 + 0x36) = 0;
    puVar1[0xc] = param_1;
    puVar1[0x1e] = 0;
    (pMVar3->pos).x = *param_2;
    (pMVar3->pos).y = param_2[1];
    (pMVar3->pos).z = param_2[2];
    (pMVar3->pos).w = param_2[3];
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    dVar6 = 1.0471975803375244;
    dVar5 = 3.1415927410125732;
    dVar4 = (double)MB_randRangeFloat
                              (g_FrameTime * 1.0471976,g_FrameTime * 3.1415927);
    puVar1[0xe] = (float)dVar4;
    dVar4 = (double)MB_randRangeFloat
                              ((float)((double)g_FrameTime * dVar6),
                               (float)((double)g_FrameTime * dVar5));
    puVar1[0xf] = (float)dVar4;
    puVar1[0x19] = 0;
    puVar1[0x18] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1b] = 0;
    uVar2 = worldUpdateTime;
    puVar1[0x1d] = 0;
    puVar1[0x17] = uVar2;
    puVar1[0x1a] = 0xffffffff;
    pMVar3->collision = (ushort *)0x0;
    UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}


// 0x043ce28 (0x400 bytes)
void FUN_0043ce28(undefined4 *param_1,int param_2,float *param_3)

{
  bool bVar1;
  float fVar2;
  float *pfVar3;
  undefined2 uVar4;
  MobyInstance *pMVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> local_60;
  
  dVar18 = -1.0;
  dVar17 = 1.0;
  dVar19 = 0.0;
  pfVar3 = *(float **)(param_2 + 0x78);
  uVar10 = ZEXT48(pfVar3);
  dVar11 = (double)MB_randRangeFloat(-1.0,1.0);
  dVar12 = (double)MB_randRangeFloat((float)dVar18,(float)dVar17);
  dVar18 = (double)MB_randRangeFloat((float)dVar18,(float)dVar17);
  *(undefined1 *)(param_2 + 0x20) = 1;
  *(float *)(param_2 + 0x2c) = *(float *)(param_2 + 0x2c) * 1.5384616;
  dVar17 = (double)MB_randRangeFloat
                             (g_FrameTime * 0.01,g_FrameTime * 0.1);
  bVar1 = g_standingOnMoby != 0;
  dVar15 = (double)SQRT((float)(dVar18 * dVar18 +
                               (double)(float)(dVar11 * dVar11 + (double)(float)(dVar12 * dVar12))))
  ;
  dVar13 = (double)(float)(dVar17 / dVar15);
  dVar17 = dVar19;
  if (dVar19 - dVar15 < 0.0) {
    dVar17 = (double)(float)(dVar11 * dVar13);
  }
  dVar16 = dVar19;
  if (dVar19 - dVar15 < 0.0) {
    dVar16 = (double)(float)(dVar12 * dVar13);
  }
  dVar14 = dVar19;
  if (dVar19 - dVar15 < 0.0) {
    dVar14 = (double)(float)(dVar18 * dVar13);
  }
  if (dVar15 - dVar19 < 0.0) {
    dVar17 = (double)(float)(dVar11 * dVar13);
  }
  if (dVar15 - dVar19 < 0.0) {
    dVar16 = (double)(float)(dVar12 * dVar13);
  }
  if (dVar15 - dVar19 < 0.0) {
    dVar14 = (double)(float)(dVar18 * dVar13);
  }
  *pfVar3 = (float)(dVar17 + (double)*param_3);
  pfVar3[1] = (float)(dVar16 + (double)param_3[1]);
  fVar2 = param_3[2];
  pfVar3[3] = 0.0;
  pfVar3[2] = (float)(dVar14 + (double)fVar2);
  if ((bVar1) && (iVar6 = MB_GetPlatformParent(), iVar6 != 0)) {
    *pfVar3 = *pfVar3 + DAT_00969de0;
    pfVar3[1] = pfVar3[1] + DAT_00969de4;
    pfVar3[2] = pfVar3[2] + DAT_00969de8;
  }
  iVar6 = MobyUpdateChainStart;
  auVar20 = ZEXT416(0xffffffff);
  auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
  auVar21 = vectorShiftLeftIntegerWord(auVar20,auVar20);
  auVar20 = loadVectorLeftIndexed(0x18,0x43ce04);
  auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  iVar7 = 0;
  auVar20 = vectorMultiplyAddFloatingPoint
                      (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,auVar21
                      );
  iVar9 = 0;
  bVar1 = MobyUpdateChainStart != 0;
  auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
  auVar20 = vectorSplatHalfWord(auVar20,1);
  uVar4 = storeVectorElementHalfWordIndexed(auVar20,0x34,uVar10);
  *(undefined2 *)(pfVar3 + 0xd) = uVar4;
  if (bVar1) {
    iVar8 = 0;
    do {
      if (((*(char *)(iVar6 + 0x20) != -3 && *(char *)(iVar6 + 0x20) != -2) &&
          (*(short *)(iVar6 + 0xa6) == *(short *)(param_2 + 0xa6))) && (iVar6 != param_2)) {
        if ((iVar8 == 0) || (*(int *)(*(int *)(iVar6 + 0x78) + 0x5c) < iVar7)) {
          iVar7 = *(int *)(*(int *)(iVar6 + 0x78) + 0x5c);
          iVar8 = iVar6;
        }
        iVar9 = iVar9 + 1;
      }
      iVar6 = *(int *)(iVar6 + 0x28);
    } while (iVar6 != 0);
    if (7 < iVar9) {
      *(undefined4 *)(*(int *)(iVar8 + 0x78) + 0x5c) = 0xffffffff;
    }
  }
  *(undefined4 *)(param_2 + 0x10) = *param_1;
  pMVar5 = g_heroMobyPtr;
  *(undefined4 *)(param_2 + 0x14) = param_1[1];
  *(undefined4 *)(param_2 + 0x18) = param_1[2];
  *(undefined4 *)(param_2 + 0x1c) = param_1[3];
  iVar6 = CollLine(local_60,param_1,0,pMVar5,0);
  if (iVar6 != 0) {
    dVar11 = (double)g_CollOutput.ip.x;
    *(float *)(param_2 + 0x10) = g_CollOutput.ip.x;
    dVar12 = (double)g_CollOutput.ip.y;
    *(float *)(param_2 + 0x14) = g_CollOutput.ip.y;
    dVar18 = (double)g_CollOutput.ip.z;
    *(float *)(param_2 + 0x18) = g_CollOutput.ip.z;
    *(float *)(param_2 + 0x1c) = g_CollOutput.ip.w;
    dVar13 = (double)SQRT(g_CollOutput.normal.z * g_CollOutput.normal.z +
                          g_CollOutput.normal.x * g_CollOutput.normal.x +
                          g_CollOutput.normal.y * g_CollOutput.normal.y);
    fVar2 = (float)((double)(g_FrameTimeSq * 9.7) / dVar13);
    dVar17 = dVar19;
    if (dVar19 - dVar13 < 0.0) {
      dVar17 = (double)(g_CollOutput.normal.z * fVar2);
    }
    dVar15 = dVar19;
    if (dVar19 - dVar13 < 0.0) {
      dVar15 = (double)(g_CollOutput.normal.y * fVar2);
    }
    dVar16 = dVar19;
    if (dVar19 - dVar13 < 0.0) {
      dVar16 = (double)(g_CollOutput.normal.x * fVar2);
    }
    if (dVar13 - dVar19 < 0.0) {
      dVar17 = (double)(g_CollOutput.normal.z * fVar2);
    }
    if (dVar13 - dVar19 < 0.0) {
      dVar15 = (double)(g_CollOutput.normal.y * fVar2);
    }
    if (dVar13 - dVar19 < 0.0) {
      dVar16 = (double)(g_CollOutput.normal.x * fVar2);
    }
    *(float *)(param_2 + 0x18) = (float)(dVar18 + dVar17);
    *(float *)(param_2 + 0x14) = (float)(dVar12 + dVar15);
    *(float *)(param_2 + 0x10) = (float)(dVar11 + dVar16);
    FastVecReflect(uVar10,uVar10,0xa10980);
    *pfVar3 = *pfVar3 * 0.6;
    pfVar3[1] = pfVar3[1] * 0.6;
    pfVar3[2] = pfVar3[2] * 0.6;
  }
  return;
}


// 0x043d268 (0x878 bytes)
// inlined: FastAtan2 @0x43d3bc, FastAtan2 @0x43d5b4
// strings: 0043d260: '?s33`'

undefined8 M74_0043d268(float *param_1,MobyInstance *param_2,int param_3)

{
  bool bVar1;
  float fVar2;
  u8 uVar3;
  f32 fVar4;
  f32 fVar5;
  f32 fVar6;
  f32 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  short sVar11;
  undefined4 uVar12;
  ulonglong *puVar13;
  int iVar14;
  uint uVar15;
  float fVar16;
  MobyInstance *pMVar17;
  PlayerState PVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  longlong lVar21;
  int iVar22;
  ulonglong uVar23;
  float *pfVar25;
  longlong lVar24;
  longlong lVar26;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  ulonglong in_f22;
  double dVar32;
  ulonglong in_f23;
  double dVar33;
  ulonglong in_f24;
  double dVar34;
  ulonglong in_f25;
  double dVar35;
  ulonglong in_f26;
  double dVar36;
  ulonglong in_f27;
  double dVar37;
  ulonglong in_f28;
  double dVar38;
  ulonglong in_f29;
  double dVar39;
  ulonglong in_f30;
  double dVar40;
  ulonglong in_f31;
  double dVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  
  uVar19 = ZEXT48(&stack0x00000000);
  lVar28 = uVar19 - 0x170;
  puVar13 = (ulonglong *)lVar28;
  *puVar13 = uVar19;
  puVar13[0x30] = in_LR;
  puVar13[0x24] = in_f22;
  puVar13[0x25] = in_f23;
  puVar13[0x26] = in_f24;
  puVar13[0x27] = in_f25;
  puVar13[0x28] = in_f26;
  puVar13[0x29] = in_f27;
  puVar13[0x2a] = in_f28;
  puVar13[0x2b] = in_f29;
  puVar13[0x2c] = in_f30;
  puVar13[0x2d] = in_f31;
  puVar13[0x1e] = unaff_r26;
  puVar13[0x23] = unaff_r31;
  puVar13[0x1f] = unaff_r27;
  puVar13[0x22] = unaff_r30;
  puVar13[0x21] = unaff_r29;
  PVar18 = g_heroState;
  puVar13[0x20] = unaff_r28;
  if ((PVar18 == MOVEMENT_LOCKED) || (g_gameMode != GAME_MODE_NORMAL)) {
    uVar20 = 0;
  }
  else {
    fVar4 = (param_2->pos).x;
    fVar5 = (param_2->pos).y;
    *(f32 *)(puVar13 + 0x10) = fVar4;
    fVar6 = (param_2->pos).z;
    *(f32 *)((int)puVar13 + 0x84) = fVar5;
    fVar7 = (param_2->pos).w;
    uVar3 = param_2->state;
    *(f32 *)(puVar13 + 0x11) = fVar6;
    *(f32 *)((int)puVar13 + 0x8c) = fVar7;
    fVar2 = DAT_0096a350;
    if (uVar3 == '\0') {
      fVar8 = ABS(DAT_0096a350);
      fVar10 = ABS(DAT_0096a354);
      dVar41 = -0.3619680106639862;
      uVar15 = (uint)DAT_0096a354 >> 0x1d;
      *(float *)(puVar13 + 0x15) = fVar8 - fVar10;
      dVar32 = 0.0;
      dVar33 = 0.7853981852531433;
      uVar23 = (ulonglong)((uint)fVar2 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x15) >> 0x1e) & 2 | (ulonglong)uVar15 & 4;
      fVar2 = fVar8;
      if (*(float *)(puVar13 + 0x15) - 0.0 < 0.0) {
        fVar2 = fVar10;
      }
      fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
      if (*(float *)(puVar13 + 0x15) - 0.0 < 0.0) {
        fVar10 = fVar8;
      }
      fVar8 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
      dVar29 = dVar32;
      if (0.0 < fVar2) {
        lVar21 = uVar19 - 0x160;
        lVar26 = uVar19 - 0x94;
        lVar24 = uVar19 - 0xa4;
        lVar27 = 2;
        fVar2 = (fVar10 - fVar2) / (fVar10 + fVar2);
        fVar10 = fVar2 * fVar2;
        *(float *)(puVar13 + 0x1b) = fVar2;
        *(float *)(puVar13 + 0x1a) = fVar2;
        *(float *)((int)puVar13 + 0xd4) = fVar2;
        *(float *)((int)puVar13 + 0xcc) = fVar2;
        fVar2 = fVar10 * fVar10;
        *(float *)(puVar13 + 0x1a) = *(float *)(puVar13 + 0x1a) * fVar10;
        *(float *)((int)puVar13 + 0xd4) = *(float *)((int)puVar13 + 0xd4) * fVar2;
        *(float *)(puVar13 + 0x1b) = *(float *)(puVar13 + 0x1b) * fVar2 * fVar10;
        do {
          *(float *)((int)lVar21 + 0xcc) = *(float *)((int)lVar21 + 0xbc) * fVar2 * fVar2;
          iVar22 = (int)lVar24;
          lVar24 = lVar24 + 8;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar22 + 4) * fVar2 * fVar2;
          lVar26 = lVar26 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar26 = uVar19 - 0xa4;
        pfVar25 = (float *)&DAT_007358e0;
        lVar21 = lVar28;
        lVar24 = lVar26;
        do {
          fVar2 = *pfVar25;
          fVar10 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar21 + 0xcc) = *(float *)((int)lVar21 + 0xcc) * fVar2;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar10;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar24 = 2;
        lVar21 = lVar28;
        do {
          iVar22 = (int)lVar21;
          iVar14 = (int)lVar26;
          lVar21 = lVar21 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar22 + 0xcc)) +
                            *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                           *(float *)(iVar14 + 0xc));
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar9 + fVar8);
      }
      dVar29 = (double)FastWrapRot(-0.361968,(float)dVar29);
      fVar8 = DAT_0096a350;
      dVar40 = 3.141592502593994;
      fVar2 = (float)(dVar29 + 1.570796251296997);
      dVar39 = -3.141592502593994;
      dVar31 = ABS((double)DAT_0096a350);
      dVar38 = -0.16666656732559204;
      dVar29 = ABS((double)DAT_0096a354);
      dVar37 = 0.008333025500178337;
      dVar36 = -0.0001980741071747616;
      dVar35 = 2.601886990305502e-06;
      dVar34 = 0.8590390086174011;
      uVar15 = (uint)DAT_0096a354 >> 0x1d;
      fVar10 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar10 = fVar2;
      }
      *(float *)((int)puVar13 + 0xa4) = (float)(dVar31 - dVar29);
      fVar9 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar10 < 0.0) {
        fVar9 = fVar10;
      }
      fVar16 = fVar9 * fVar9;
      uVar23 = (ulonglong)((uint)fVar8 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar13 + 0xa4) >> 0x1e) & 2 | (ulonglong)uVar15 & 4;
      fVar2 = fVar16 * fVar16 * fVar9;
      fVar10 = fVar16 * fVar2;
      dVar30 = dVar31;
      if ((double)*(float *)((int)puVar13 + 0xa4) - dVar32 < 0.0) {
        dVar30 = dVar29;
      }
      if ((double)*(float *)((int)puVar13 + 0xa4) - dVar32 < 0.0) {
        dVar29 = dVar31;
      }
      *(float *)(puVar13 + 0xe) =
           (fVar16 * fVar10 * 2.601887e-06 +
           fVar10 * -0.0001980741 + fVar2 * 0.0083330255 + fVar16 * fVar9 * -0.16666657 + fVar9) *
           0.859039;
      fVar10 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
      fVar2 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
      if (dVar32 < dVar30) {
        lVar21 = uVar19 - 0x160;
        lVar26 = uVar19 - 0xb4;
        lVar24 = uVar19 - 0xc4;
        lVar27 = 2;
        fVar8 = (float)(dVar29 - dVar30) / (float)(dVar29 + dVar30);
        fVar9 = fVar8 * fVar8;
        *(float *)(puVar13 + 0x17) = fVar8;
        *(float *)(puVar13 + 0x16) = fVar8;
        *(float *)((int)puVar13 + 0xb4) = fVar8;
        *(float *)((int)puVar13 + 0xac) = fVar8;
        fVar8 = fVar9 * fVar9;
        *(float *)(puVar13 + 0x16) = *(float *)(puVar13 + 0x16) * fVar9;
        *(float *)((int)puVar13 + 0xb4) = *(float *)((int)puVar13 + 0xb4) * fVar8;
        *(float *)(puVar13 + 0x17) = *(float *)(puVar13 + 0x17) * fVar8 * fVar9;
        do {
          *(float *)((int)lVar21 + 0xac) = *(float *)((int)lVar21 + 0x9c) * fVar8 * fVar8;
          iVar22 = (int)lVar24;
          lVar24 = lVar24 + 8;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar22 + 4) * fVar8 * fVar8;
          lVar26 = lVar26 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar26 = uVar19 - 0xc4;
        pfVar25 = (float *)&DAT_007358e0;
        lVar21 = lVar28;
        lVar24 = lVar26;
        do {
          fVar8 = *pfVar25;
          fVar9 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar21 + 0xac) = *(float *)((int)lVar21 + 0xac) * fVar8;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar9;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar24 = 2;
        lVar21 = lVar28;
        do {
          iVar22 = (int)lVar21;
          iVar14 = (int)lVar26;
          lVar21 = lVar21 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar22 + 0xac)) +
                            *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                           *(float *)(iVar14 + 0xc));
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        dVar32 = (double)((float)(dVar32 + dVar33) * fVar10 + fVar2);
      }
      dVar33 = (double)FastWrapRot((float)dVar41,(float)dVar32);
      fVar2 = g_heroPosition.y;
      dVar32 = (double)(float)(dVar40 - dVar33);
      if (dVar33 - (double)(float)(dVar40 - dVar33) < 0.0) {
        dVar32 = dVar33;
      }
      dVar29 = (double)(float)(dVar39 - dVar33);
      if ((double)(float)(dVar39 - dVar33) - dVar32 < 0.0) {
        dVar29 = dVar32;
      }
      fVar10 = *(float *)(puVar13 + 0xe) + g_heroPosition.x;
      *(undefined4 *)(puVar13 + 0xf) = 0;
      dVar31 = (double)(float)(dVar29 * dVar29);
      *(float *)(puVar13 + 0xe) = fVar10;
      fVar8 = g_heroPosition.z;
      dVar32 = (double)*param_1;
      dVar41 = (double)param_1[1];
      dVar33 = (double)param_1[2];
      dVar40 = (double)(float)(dVar31 * (double)(float)(dVar31 * dVar29));
      dVar39 = (double)(float)(dVar31 * dVar40);
      bVar1 = g_standingOnMoby != 0;
      fVar10 = (float)((double)(float)((double)(float)(dVar31 * dVar39) * dVar35 +
                                      (double)(float)(dVar39 * dVar36 +
                                                     (double)(float)(dVar40 * dVar37 +
                                                                    (double)(float)((double)(float)(
                                                  dVar31 * dVar29) * dVar38 + dVar29)))) * dVar34);
      *(float *)((int)puVar13 + 0x74) = fVar10;
      *(float *)((int)puVar13 + 0x74) = fVar10 + fVar2;
      *(float *)(puVar13 + 0xf) = fVar8 + 0.49082;
      if (((bVar1) && (iVar22 = MB_GetPlatformParent(), iVar22 != 0)) && (param_3 != 0)) {
        dVar32 = (double)(float)(dVar32 + (double)DAT_00969de0);
        dVar41 = (double)(float)(dVar41 + (double)DAT_00969de4);
        dVar33 = (double)(float)(dVar33 + (double)DAT_00969de8);
      }
      auVar42 = ZEXT416(0xffffffff);
      auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
      auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
      auVar42 = loadVectorLeftIndexed(0x30,0x43d228);
      auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar42 = vectorMultiplyAddFloatingPoint
                          (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
                           auVar43);
      auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
      auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar12 = storeVectorElementWordIndexed
                         (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0xa0,lVar28)
      ;
      *(undefined4 *)(puVar13 + 0x14) = uVar12;
    }
    else {
      sVar11 = *(short *)(param_1 + 0xd);
      dVar32 = (double)*param_1;
      iVar22 = *(int *)((int)param_1[0xc] + 0x78);
      *(f32 *)(puVar13 + 0xe) = fVar4;
      *(f32 *)((int)puVar13 + 0x74) = fVar5;
      *(f32 *)(puVar13 + 0xf) = fVar6;
      *(f32 *)((int)puVar13 + 0x7c) = fVar7;
      dVar41 = (double)param_1[1];
      dVar33 = (double)param_1[2];
      *(int *)(puVar13 + 0x14) = (int)sVar11;
      if (*(int *)(iVar22 + 0x50) != 0) {
        *(undefined2 *)((int)param_1 + 0x36) = 1;
      }
    }
    pMVar17 = g_heroMobyPtr;
    *(f32 *)(puVar13 + 0x12) = (g_heroMobyPtr->pos).x;
    *(f32 *)((int)puVar13 + 0x94) = (pMVar17->pos).y;
    *(f32 *)(puVar13 + 0x13) = (pMVar17->pos).z;
    fVar4 = (pMVar17->pos).w;
    *(undefined4 *)(puVar13 + 0x13) = *(undefined4 *)(puVar13 + 0xf);
    *(f32 *)((int)puVar13 + 0x9c) = fVar4;
    iVar22 = CollLine(uVar19 - 0xe0,uVar19 - 0x100,0x10,pMVar17,0);
    if (((iVar22 != 0) && (iVar22 = CollHotspot(), iVar22 != 0)) && (0 < g_CollOutput.poly))
    {
      param_1[4] = g_CollOutput.ip.x;
      param_1[5] = g_CollOutput.ip.y;
      param_1[6] = g_CollOutput.ip.z;
      param_1[7] = g_CollOutput.ip.w;
    }
    do {
      iVar22 = FastDecTimerS32(uVar19 - 0xd0);
      if (iVar22 != 0) goto LAB_0043d96c;
      fVar2 = *(float *)(puVar13 + 0xe);
      fVar10 = *(float *)((int)puVar13 + 0x74);
      fVar8 = *(float *)(puVar13 + 0xf);
      lVar28 = 10;
      *(undefined4 *)((int)puVar13 + 0x8c) = *(undefined4 *)((int)puVar13 + 0x7c);
      *(float *)(puVar13 + 0x10) = fVar2;
      *(float *)((int)puVar13 + 0x84) = fVar10;
      *(float *)(puVar13 + 0x11) = fVar8;
      do {
        fVar2 = (float)((double)fVar2 + dVar32);
        fVar10 = (float)((double)fVar10 + dVar41);
        fVar8 = (float)((double)fVar8 + dVar33);
        dVar33 = -(double)(float)((double)g_FrameTimeSq * 9.800000190734863 - dVar33);
        *(float *)(puVar13 + 0xe) = fVar2;
        *(float *)((int)puVar13 + 0x74) = fVar10;
        *(float *)(puVar13 + 0xf) = fVar8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      iVar22 = CollLine(uVar19 - 0xf0,uVar19 - 0x100,0x12,param_2,0);
    } while (((iVar22 == 0) || ((iVar22 = CollHotspot(), iVar22 == 0 && (0.0 < dVar33))))
            || (g_CollOutput.poly < 1));
    param_1[4] = g_CollOutput.ip.x;
    param_1[5] = g_CollOutput.ip.y;
    param_1[6] = g_CollOutput.ip.z;
    param_1[7] = g_CollOutput.ip.w;
LAB_0043d96c:
    if ((*(int *)(puVar13 + 0x14) == 0) ||
       ((param_3 == 0 &&
        ((g_CollOutput.pMoby == (MobyInstance *)0x0 ||
         (iVar22 = MB_GetPlatformParent(), iVar22 == 0)))))) {
      uVar20 = 0;
    }
    else {
      if (((param_3 != 2) || (g_CollOutput.pMoby == (MobyInstance *)0x0)) ||
         (iVar22 = MB_GetPlatformParent(), iVar22 == 0)) {
        RegisterFuncForMoby(&PTR_M739_0043c668_0070e5b0,param_2);
      }
      param_1[8] = g_CollOutput.normal.x;
      param_1[9] = g_CollOutput.normal.y;
      param_1[10] = g_CollOutput.normal.z;
      param_1[0xb] = g_CollOutput.normal.w;
      fVar9 = GameCamera.posX;
      fVar2 = param_1[4] - GameCamera.posX;
      fVar10 = param_1[5] - GameCamera.posY;
      uVar20 = 1;
      *(float *)((int)puVar13 + 0x8c) = param_1[7];
      fVar8 = param_1[6] - GameCamera.posZ;
      *(float *)(puVar13 + 0x10) = fVar2;
      *(float *)((int)puVar13 + 0x84) = fVar10;
      fVar2 = fVar2 * (float)0x3f733333;
      fVar10 = fVar10 * (float)0x3f733333;
      fVar8 = fVar8 * (float)0x3f733333;
      *(float *)(puVar13 + 0x10) = fVar2;
      *(float *)((int)puVar13 + 0x84) = fVar10;
      *(float *)(puVar13 + 0x11) = fVar8;
      param_1[4] = fVar2 + fVar9;
      param_1[5] = fVar10 + GameCamera.posY;
      param_1[6] = fVar8 + GameCamera.posZ;
    }
  }
  return uVar20;
}


// 0x043dc00 (0x2760 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 74 */

void UpdateMoby_74(MobyInstance *moby)

{
  byte bVar1;
  char cVar2;
  MOBY_OCLASSES MVar3;
  undefined4 *puVar4;
  MobyInstance *moby_00;
  uint uVar5;
  undefined2 uVar6;
  MobyModeBit MVar16;
  int iVar9;
  Vec4 *pos;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar17;
  int iVar12;
  undefined8 uVar7;
  int iVar13;
  int iVar14;
  longlong lVar8;
  int iVar15;
  ulonglong uVar18;
  vec4 *pvVar19;
  longlong lVar20;
  MobyInstance *pMVar21;
  ulonglong uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  double dVar30;
  double in_f5;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  float fVar49;
  GPiece<16> local_4b0;
  GPiece<16> auStack_4a0;
  GPiece<16> local_490;
  GPiece<16> local_480;
  float afStack_470 [4];
  Vec4 local_460;
  float local_450;
  float local_44c;
  float local_448;
  GPiece<16> auStack_440;
  float local_430;
  float local_42c;
  float local_428;
  GPiece<16> auStack_420;
  GPiece<16> auStack_410;
  f32 local_400;
  f32 local_3fc;
  float local_3f8;
  f32 local_3f4;
  GPiece<16> auStack_3f0;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 local_394;
  f32 local_390;
  f32 local_38c;
  float local_388;
  f32 local_384;
  float local_380;
  float local_37c;
  float local_378;
  undefined4 local_374;
  float local_370;
  float local_36c;
  float local_368;
  undefined4 local_364;
  float local_360;
  float local_35c;
  float local_358;
  f32 local_350;
  f32 local_34c;
  float local_348;
  f32 local_344;
  float local_340;
  float local_33c;
  float local_338;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  float local_320;
  float local_31c;
  float local_318;
  undefined4 local_314;
  float local_310;
  float local_30c;
  float local_308;
  GPiece<8> auStack_300;
  undefined4 local_2f8;
  undefined4 local_2f4;
  MobyInstance *local_2f0;
  undefined *local_2ec;
  undefined1 local_2e8;
  undefined1 local_2e7;
  MOBY_OCLASSES local_2e6;
  undefined4 local_2e4;
  undefined4 local_2e0;
  GPiece<48> auStack_2d0;
  Vec4 aVStack_2a0 [4];
  GPiece<64> auStack_260;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  float local_180 [4];
  double local_170;
  double local_168;
  double local_160;
  float local_158;
  double local_150;
  float local_148;
  float local_144;
  longlong local_140;
  float local_130;
  float local_12c;
  
  lVar8 = (longlong)(int)moby;
  uStack_214 = uRam0085a50c;
  uStack_218 = uRam0085a508;
  uStack_21c = uRam0085a504;
  uStack_220 = _DAT_0085a500;
  uStack_204 = uRam0085a51c;
  uStack_208 = uRam0085a518;
  uStack_20c = uRam0085a514;
  uStack_210 = _DAT_0085a510;
  uStack_1f4 = uRam0085a52c;
  uStack_1f8 = uRam0085a528;
  uStack_1fc = uRam0085a524;
  uStack_200 = _DAT_0085a520;
  uStack_1e4 = uRam0085a53c;
  uStack_1e8 = uRam0085a538;
  uStack_1ec = uRam0085a534;
  uStack_1f0 = _DAT_0085a530;
  uStack_1d4 = uRam0085a54c;
  uStack_1d8 = uRam0085a548;
  uStack_1dc = uRam0085a544;
  uStack_1e0 = _DAT_0085a540;
  uStack_1c4 = uRam0085a55c;
  uStack_1c8 = uRam0085a558;
  uStack_1cc = uRam0085a554;
  uStack_1d0 = _DAT_0085a550;
  uStack_1b4 = uRam0085a56c;
  uStack_1b8 = uRam0085a568;
  uStack_1bc = uRam0085a564;
  uStack_1c0 = _DAT_0085a560;
  uStack_1a4 = uRam0085a57c;
  uStack_1a8 = uRam0085a578;
  uStack_1ac = uRam0085a574;
  uStack_1b0 = _DAT_0085a570;
  uStack_194 = uRam0085a58c;
  uStack_198 = uRam0085a588;
  uStack_19c = uRam0085a584;
  uStack_1a0 = _DAT_0085a580;
  uStack_184 = uRam0085a59c;
  uStack_188 = uRam0085a598;
  uStack_18c = uRam0085a594;
  uStack_190 = _DAT_0085a590;
  dVar43 = 2.0;
  puVar4 = (undefined4 *)moby->pVar;
  uVar22 = ZEXT48(puVar4);
  bVar17 = moby->state != '\0';
  local_150 = 0.0;
  dVar31 = 1.0;
  if (((g_heroInvisible == '\0') && (DAT_0096bd8f == '\0')) || (bVar17)) {
    MVar16 = moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
  }
  else {
    MVar16 = moby->modeBits | (UNK_40|DISABLED);
  }
  moby->modeBits = MVar16;
  if (((g_currentWeaponMoby == (MobyInstance *)0x0) || (g_currentWeaponMoby->oClass != MINE_GLOVE))
     && (!bVar17)) {
    DeleteMoby(moby);
    return;
  }
  if ((g_heroType != '\0') && (!bVar17)) {
    DeleteMoby(moby);
    return;
  }
  iVar9 = puVar4[0xc];
  if ((((iVar9 != 0) && (*(char *)(iVar9 + 0x20) != -3 && *(char *)(iVar9 + 0x20) != -2)) &&
      (*(short *)(iVar9 + 0xa6) == 0xbe)) &&
     ((*(short *)((int)puVar4 + 0x36) == 0 &&
      (dVar23 = (double)FUN_005e8030(uVar22), local_150 < dVar23)))) {
    if ((g_standingOnMoby == 0) || (iVar9 = MB_GetPlatformParent(), iVar9 == 0)) {
      M74_0043d268(uVar22,lVar8,1);
    }
    else {
      iVar9 = M74_0043d268(uVar22,lVar8,0);
      if (iVar9 == 0) {
        M74_0043d268(uVar22,lVar8,2);
      }
    }
  }
  if (moby->state == '\0') {
    if ((g_currentWeaponMoby != (MobyInstance *)0x0) && (g_currentWeaponMoby->oClass == MINE_GLOVE))
    {
      FastEulerToMtx1(aVStack_2a0,local_480);
      GetBoneTransformations(puVar4[0xc],0,auStack_260);
      FastVecMtx4Mul(aVStack_2a0,auStack_260,aVStack_2a0);
      FastApplyTransform(&(moby->transform).v0,aVStack_2a0);
      moby->collision = (ushort *)0x0;
      moby->modeBits = moby->modeBits | LOCK_ROTATION;
      return;
    }
    DeleteMoby(moby);
    return;
  }
  lVar20 = lVar8 + 0x10;
  moby->modeBits =
       moby->modeBits &
       (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
        DRAW_TRANSPARENT_WEIRD|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
        NO_UPDATE|DISABLED);
  FUN_005e7e98(auStack_4a0,lVar20);
  pos = (Vec4 *)lVar20;
  if ((moby->state & 4) == 0) {
    FUN_005e7f54(lVar20,lVar20,uVar22);
    if (*(short *)(puVar4 + 0x14) == 0) {
      puVar4[2] = -(g_FrameTimeSq * 9.8 - (float)puVar4[2]);
    }
    else {
      dVar23 = 0.10000000149011612;
      puVar4[2] = -(g_FrameTimeSq * 9.8 * 0.1 - (float)puVar4[2]);
      local_140 = (longlong)(int)(animationSpeed * 6.5);
      iVar9 = MB_randInt((int)(animationSpeed * 6.5) + -1);
      if (iVar9 == 0) {
        fVar49 = CollWaterHeight(&pos->x,afStack_470);
        dVar34 = (double)fVar49;
        FUN_005e822c(0x3fd0000000000000,afStack_470,uVar22);
        dVar23 = (double)MB_randRangeFloat(0.05,(float)dVar23);
        SpawnPart_34((double)(float)(dVar23 * 210000.0),dVar34,pos,afStack_470);
      }
    }
  }
  local_2ec = &DAT_00830000;
  dVar42 = 3.0;
  local_2e4 = 0x40400000;
  local_2e0 = 1;
  local_2f0 = moby;
  FUN_005e7e98(auStack_300,uVar22);
  FUN_005e84c0(dVar31,auStack_300,auStack_300);
  local_2e6 = moby->oClass;
  local_2e8 = 2;
  local_2f8 = 0x3f800000;
  local_2f4 = 0x45afdf66;
  local_2e7 = 1;
  dVar34 = 0.4000000059604645;
  iVar9 = worldUpdateTime - puVar4[0x1d];
  (moby->pos).z = (moby->pos).z - 0.4;
  dVar23 = (double)FastIntToDouble(iVar9);
  dVar40 = (double)(moby->pos).z;
  dVar37 = (double)(float)(dVar23 / (double)(DAT_0085a480 * animationSpeed));
  dVar23 = dVar31;
  if ((dVar37 <= dVar31) && (dVar23 = dVar37, dVar37 < local_150)) {
    dVar23 = local_150;
  }
  dVar37 = (double)FUN_005e8128((double)(float)puVar4[0x1c]);
  bVar1 = moby->state;
  (moby->pos).z = -(float)((double)(float)((double)(float)puVar4[0x1b] * dVar37) * dVar23 - dVar40);
  if ((bVar1 & 4) == 0) {
    iVar9 = CollLine(auStack_4a0,lVar20,0x10,lVar8,auStack_300);
    bVar1 = moby->state;
    if (iVar9 != 0) {
      if (((*(short *)(puVar4 + 0x14) == 0) && (iVar9 = CollHotspot(), iVar9 == 0)) &&
         ((int)puVar4[2] < 0)) {
        WaterTile_PutDrop
                  ((moby->pos).x,(moby->pos).y,0.5,-0.35,WaterTiles,WaterTileCnt,(float)in_f5);
        *(undefined2 *)(puVar4 + 0x14) = 1;
        FUN_005e7e70(uVar22);
        puVar4[2] = g_FrameTime * -1.5;
        local_460.x = (moby->pos).x;
        local_460.y = (moby->pos).y;
        local_460.z = g_CollOutput.ip.z;
        iVar9 = FUN_00456478(dVar43,&local_460);
        if (iVar9 != 0) {
          *(undefined1 *)(iVar9 + 0x23) = 0x70;
        }
        iVar9 = 0;
        dVar23 = 6.5;
        do {
          dVar37 = (double)MB_randRot();
          dVar40 = (double)MB_randRangeFloat
                                     ((float)local_150,
                                      (float)((double)g_FrameTime * dVar42));
          dVar24 = (double)cosf((float)dVar37);
          local_450 = (float)(dVar24 * dVar40);
          dVar37 = (double)FUN_005e8128(dVar37);
          local_44c = (float)(dVar37 * dVar40);
          dVar37 = (double)MB_randRangeFloat
                                     ((float)((double)g_FrameTime * dVar42),
                                      (float)((double)g_FrameTime * dVar23));
          local_448 = (float)dVar37;
          uVar10 = MB_randRange(0x5a,0x78);
          uVar11 = MB_randInt(2);
          SpawnPart_35(&local_460,&local_450,uVar11,uVar10);
          iVar9 = iVar9 + 1;
        } while (iVar9 < 0x10);
        goto LAB_0043f0a4;
      }
      if ((*(short *)(puVar4 + 0x14) == 0) && (iVar9 = CollHotspot(), iVar9 == 0))
      goto LAB_0043f0a4;
      if (g_CollOutput.pMoby != (MobyInstance *)0x0) {
        bVar17 = MB_isCrate(g_CollOutput.pMoby);
        if ((((bVar17) ||
             (((g_CollOutput.pMoby)->modeBits & (CAN_BE_DAMAGED|CAN_BE_AUTO_TARGETED)) != NONE)) &&
            (g_CollOutput.pMoby != g_heroMobyPtr && (g_CollOutput.pMoby)->oClass != moby->oClass)) &&
           (g_CollOutput.pMoby != (MobyInstance *)puVar4[0xc])) {
          moby->setByGroup = '\x01';
          if (moby->state != '\x01') {
            FUN_005e7e98(lVar20,0xa10960);
            dVar23 = (double)GetGroundZ(0x3fe0000000000000,lVar20,0);
            (moby->pos).z = (float)dVar23;
          }
          goto LAB_0043f0a4;
        }
      }
      if (g_CollOutput.pMoby == (MobyInstance *)0x0) {
LAB_0043e670:
        if (g_CollOutput.poly < 1) goto LAB_0043f0a4;
      }
      else {
        if ((g_CollOutput.pMoby)->oClass == moby->oClass) {
          FUN_005e81f0(0xa10980,lVar20,&(g_CollOutput.pMoby)->pos);
          if (g_FrameTime * -9.8 <= (float)puVar4[2]) {
            FUN_005e7e98(lVar20,0xa10960);
            FUN_005e7f98((double)(g_FrameTimeSq * 9.7),auStack_440,0xa10980);
            FUN_005e7f54(lVar20,lVar20,auStack_440);
            FastVecReflect(uVar22,uVar22,0xa10980);
            FUN_005e822c(dVar34,uVar22,uVar22);
            FUN_005e7f98(dVar31,auStack_440,0xa10980);
            FUN_005e81c0(auStack_440,local_490);
            FUN_005e7e98(&local_430,0xa10980);
            dVar23 = (double)cosf((moby->rotation).z);
            dVar40 = (double)local_430;
            dVar37 = (double)FUN_005e8128((double)(moby->rotation).z);
            dVar36 = (double)(float)(dVar40 * dVar23 + (double)(float)((double)local_42c * dVar37));
            dVar23 = (double)cosf((moby->rotation).z);
            dVar35 = (double)local_42c;
            dVar37 = (double)FUN_005e8128((double)(moby->rotation).z);
            dVar24 = (double)local_428;
            dVar40 = (double)(moby->rotation).x;
            dVar23 = (double)FUN_005e8338((double)SQRT((float)(dVar36 * dVar36 +
                                                              (double)(float)(dVar24 * dVar24))),
                                          (double)(float)(dVar35 * dVar23 -
                                                         (double)(float)((double)local_430 * dVar37)
                                                         ));
            uVar29 = 0x3faaceea00000000;
            dVar23 = (double)FUN_004d04e0(dVar40,-dVar23,0x3faaceea00000000);
            (moby->rotation).x = (float)dVar23;
            dVar23 = (double)(moby->rotation).y;
            uVar28 = FUN_005e8338(dVar24,dVar36);
            dVar23 = (double)FUN_004d04e0(dVar23,uVar28,uVar29);
            (moby->rotation).y = (float)dVar23;
          }
          else {
            moby->setByGroup = '\x01';
            FUN_005e7e98(lVar20,0xa10960);
            FastVecReflect(local_4b0,uVar22,0xa10980);
            FUN_005e7f98((double)(float)((double)g_FrameTime * dVar43),local_4b0,local_4b0
                        );
            FUN_005e7f98(dVar31,local_490,0xa10980);
          }
          goto LAB_0043f0a4;
        }
        if ((g_CollOutput.pMoby == g_heroMobyPtr) || (g_CollOutput.pMoby == (MobyInstance *)puVar4[0xc])
           ) goto LAB_0043e670;
      }
      if (((*(short *)(puVar4 + 0x14) != 0) || (iVar9 = CollHotspot(), iVar9 == 0)) ||
         ((float)puVar4[2] < g_FrameTime * -9.8)) {
        moby->setByGroup = '\x01';
        FUN_005e7e98(lVar20,0xa10960);
        FastVecReflect(local_4b0,uVar22,0xa10980);
        FUN_005e7f98((double)(float)((double)g_FrameTime * dVar43),local_4b0,local_4b0);
        FUN_005e7f98(dVar31,local_490,0xa10980);
      }
      else {
        iVar9 = 0;
        if (g_CollOutput.pMoby != (MobyInstance *)0x0) {
          iVar9 = MB_GetPlatformParent();
        }
        (moby->pos).x = g_CollOutput.ip.x;
        (moby->pos).y = g_CollOutput.ip.y;
        (moby->pos).z = g_CollOutput.ip.z;
        (moby->pos).w = g_CollOutput.ip.w;
        FUN_005e7f98((double)(g_FrameTimeSq * 9.7),auStack_420,0xa10980);
        FUN_005e7f54(lVar20,lVar20,auStack_420);
        iVar12 = puVar4[2];
        dVar37 = (double)(float)puVar4[2];
        FastVecReflect(uVar22,uVar22,0xa10980);
        FUN_005e822c(0x3fe3333340000000,uVar22,uVar22);
        iVar14 = worldUpdateTime;
        dVar23 = 0.5;
        puVar4[2] = (float)puVar4[2] * 0.5;
        if (puVar4[0x1b] == 0) {
          puVar4[0x1b] = (float)(ABS(dVar37) * dVar43);
          puVar4[0x1d] = iVar14;
          uVar10 = 0xc016cbe4;
          if (local_150 - dVar37 < 0.0) {
            uVar10 = 0x3f490fdb;
          }
          puVar4[0x1c] = uVar10;
        }
        FUN_005e7f98(dVar31,auStack_420,0xa10980);
        dVar37 = (double)FUN_005e81c0(auStack_420,local_490);
        if ((0.7070000171661377 < dVar37) && (iVar12 < 0)) {
          dVar37 = (double)GetGroundZ(dVar23,lVar20,0);
          if ((double)(moby->pos).z < dVar37) {
            (moby->pos).z = (float)dVar37;
          }
          puVar4[2] = -(float)puVar4[2];
          dVar37 = (double)FUN_005e8030(uVar22);
          if ((dVar37 < (double)(float)((double)g_FrameTime * dVar23)) || (iVar9 != 0)) {
            puVar4[3] = 0;
            puVar4[2] = 0;
            puVar4[1] = 0;
            *puVar4 = 0;
            moby->state = moby->state | 4;
            moby->collision = moby->pClass->collision;
            if (iVar9 != 0 && g_CollOutput.pMoby != (MobyInstance *)0x0) {
              puVar4[0x13] = g_CollOutput.pMoby;
            }
          }
        }
        dVar36 = (double)g_CollOutput.normal.x;
        dVar35 = (double)g_CollOutput.normal.y;
        dVar24 = (double)g_CollOutput.normal.z;
        dVar23 = (double)cosf((moby->rotation).z);
        dVar37 = (double)FUN_005e8128((double)(moby->rotation).z);
        dVar40 = (double)(float)(dVar36 * dVar23 + (double)(float)(dVar35 * dVar37));
        dVar23 = (double)cosf((moby->rotation).z);
        dVar37 = (double)FUN_005e8128((double)(moby->rotation).z);
        dVar38 = (double)(moby->rotation).x;
        dVar23 = (double)FUN_005e8338((double)SQRT((float)(dVar40 * dVar40 +
                                                          (double)(float)(dVar24 * dVar24))),
                                      (double)(float)(dVar35 * dVar23 -
                                                     (double)(float)(dVar36 * dVar37)));
        uVar29 = 0x3faaceea00000000;
        dVar23 = (double)FUN_004d04e0(dVar38,-dVar23,0x3faaceea00000000);
        (moby->rotation).x = (float)dVar23;
        dVar23 = (double)(moby->rotation).y;
        uVar28 = FUN_005e8338(dVar24,dVar40);
        dVar23 = (double)FUN_004d04e0(dVar23,uVar28,uVar29);
        (moby->rotation).y = (float)dVar23;
      }
      goto LAB_0043f0a4;
    }
  }
  if ((bVar1 & 4) == 0) goto LAB_0043f0a4;
  dVar23 = (double)GetGroundZ(0x3fe0000000000000,lVar20,0);
  if (puVar4[0x13] == 0) {
    if ((moby->state & 0x10) == 0) {
      if (g_FrameTimeSq * 40.0 <= (float)((double)(moby->pos).z - dVar23)) {
        moby->state = '\x01';
        iVar9 = puVar4[0x1a];
        if (((iVar9 != -1) && (g_SoundChannels[iVar9].pMoby == moby)) &&
           (g_SoundChannels[iVar9].state != '\0')) {
          sound_Kill(iVar9);
        }
        auVar45 = ZEXT416(0xffffffff);
        auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
        auVar47 = vectorShiftLeftIntegerWord(auVar45,auVar45);
        puVar4[0x1a] = 0xffffffff;
        puVar4[2] = 0;
        auVar45 = loadVectorLeftIndexed(0x54,0x43dae0);
        auVar45 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar48 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar45 = vectorMultiplyAddFloatingPoint
                            (auVar48,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,
                             auVar47);
        auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
        auVar45 = vectorSplatHalfWord(auVar45,1);
        uVar6 = storeVectorElementHalfWordIndexed(auVar45,0x34,uVar22);
        *(undefined2 *)(puVar4 + 0xd) = uVar6;
      }
      else {
        (moby->pos).z = (float)dVar23;
        *(undefined2 *)(puVar4 + 0xd) = 0;
        if ((g_CollOutput.pMoby != (MobyInstance *)0x0) &&
           (iVar9 = MB_GetPlatformParent(), iVar9 != 0)) {
          puVar4[0x13] = g_CollOutput.pMoby;
        }
      }
    }
  }
  else {
    cVar2 = *(char *)(puVar4[0x13] + 0x20);
    if ((cVar2 == -2) || (cVar2 == -3)) {
      moby->setByGroup = '\x01';
      puVar4[0x13] = 0;
    }
    else if ((g_CollOutput.pMoby != (MobyInstance *)0x0) &&
            (iVar9 = MB_GetPlatformParent(g_CollOutput.pMoby), iVar9 != 0)) {
      MB_PlatformLocalToWorld(lVar8,puVar4[0x13],lVar20,lVar8 + 0x40,lVar20,lVar8 + 0x40);
      goto LAB_0043ec14;
    }
    moby->state = '\x01';
    iVar9 = puVar4[0x1a];
    if (((iVar9 != -1) && (g_SoundChannels[iVar9].pMoby == moby)) &&
       (g_SoundChannels[iVar9].state != '\0')) {
      sound_Kill(iVar9);
    }
    auVar45 = ZEXT416(0xffffffff);
    auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
    auVar47 = vectorShiftLeftIntegerWord(auVar45,auVar45);
    puVar4[0x1a] = 0xffffffff;
    puVar4[2] = 0;
    auVar45 = loadVectorLeftIndexed(0x54,0x43dae0);
    auVar45 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar48 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar45 = vectorMultiplyAddFloatingPoint
                        (auVar48,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,
                         auVar47);
    auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
    auVar45 = vectorSplatHalfWord(auVar45,1);
    uVar6 = storeVectorElementHalfWordIndexed(auVar45,0x34,uVar22);
    *(undefined2 *)(puVar4 + 0xd) = uVar6;
    puVar4[0x13] = 0;
  }
LAB_0043ec14:
  iVar9 = puVar4[0x15];
  if ((((iVar9 == 0) || (*(char *)(iVar9 + 0x20) == -3 || *(char *)(iVar9 + 0x20) == -2)) ||
      ((*(ushort *)(iVar9 + 0x34) & 0x1000) == 0)) && ((moby->state & 0x10) != 0)) {
    moby->state = '\x01';
    iVar9 = puVar4[0x1a];
    if (((iVar9 != -1) && (g_SoundChannels[iVar9].pMoby == moby)) &&
       (g_SoundChannels[iVar9].state != '\0')) {
      sound_Kill(iVar9);
    }
    auVar45 = ZEXT416(0xffffffff);
    auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
    puVar4[0x1a] = 0xffffffff;
    puVar4[2] = 0;
    puVar4[0x15] = 0;
    auVar47 = vectorShiftLeftIntegerWord(auVar45,auVar45);
    auVar45 = loadVectorLeftIndexed(0x54,0x43dae0);
    auVar48 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar45 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar45 = vectorMultiplyAddFloatingPoint
                        (auVar48,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,
                         auVar47);
    auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
    auVar45 = vectorSplatHalfWord(auVar45,1);
    uVar6 = storeVectorElementHalfWordIndexed(auVar45,0x34,uVar22);
    *(undefined2 *)(puVar4 + 0xd) = uVar6;
    if (moby->animationId != '\0') {
      MB_SetAnimation(lVar8,0,0,10);
      iVar9 = puVar4[0x15];
      goto LAB_0043ed14;
    }
  }
  else {
LAB_0043ed14:
    if ((iVar9 != 0) && ((moby->state & 0x10) != 0)) {
      if (((moby->field43_0x70 & 2U) != 0) &&
         ((moby->updateId == '\x01' && (moby->animationId != '\x02')))) {
        MB_SetAnimation(lVar8,2,0,10);
      }
      iVar9 = IsMobyPlayingSound(moby,puVar4[0x1a]);
      if (iVar9 == 0) {
        iVar9 = PlayMobySound(1,4,moby);
        puVar4[0x1a] = iVar9;
      }
      fVar49 = g_FrameTimeSq * 15.0 + (float)puVar4[0x10];
      puVar4[0x10] = fVar49;
      if (g_FrameTime * 4.0 < fVar49) {
        puVar4[0x10] = g_FrameTime * 4.0;
      }
      if (*(short *)((int)puVar4 + 0x52) == 1) {
        (moby->pos).z = DAT_0071f408 * 0.05 + (moby->pos).z;
        iVar9 = FastDecTimerS32(uVar22 + 0x48);
        if (iVar9 != 0) {
          auVar45 = ZEXT416(0xffffffff);
          auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
          auVar47 = vectorShiftLeftIntegerWord(auVar45,auVar45);
          auVar48 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar45 = loadVectorLeftIndexed(100,0x43dae0);
          auVar45 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar45 = vectorMultiplyAddFloatingPoint
                              (auVar48,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60
                               ,auVar47);
          auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
          auVar45 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar10 = storeVectorElementWordIndexed
                             (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0x48,
                              uVar22);
          *(undefined4 *)((uint)(puVar4 + 0x12) & 0xfffffffc) = uVar10;
          *(undefined2 *)((int)puVar4 + 0x52) = 2;
        }
      }
      else if (*(short *)((int)puVar4 + 0x52) == 2) {
        (moby->pos).z = -(DAT_0071f408 * 0.05 - (moby->pos).z);
        iVar9 = FastDecTimerS32(uVar22 + 0x48);
        if (iVar9 != 0) {
          *(undefined2 *)((int)puVar4 + 0x52) = 0;
        }
      }
      FUN_005e81f0(auStack_410,(ulonglong)(uint)puVar4[0x15] + 0x10,lVar20);
      FUN_005e7f98((double)(float)puVar4[0x10],auStack_410,auStack_410);
      FUN_005e7f54(lVar20,lVar20,auStack_410);
      SetCollDamIn(dVar31,auStack_2d0,lVar8,0x10000);
      local_400 = (moby->pos).x;
      local_3fc = (moby->pos).y;
      local_3f4 = (moby->pos).w;
      local_3f8 = (moby->pos).z + 0.35;
      iVar9 = CollMobySphere(&local_400);
      local_400 = (moby->pos).x;
      local_3fc = (moby->pos).y;
      local_3f8 = (moby->pos).z;
      local_3f4 = (moby->pos).w;
      if (((((iVar9 != 0) && (g_CollOutput.pMoby != (MobyInstance *)0x0)) &&
           (MVar3 = (g_CollOutput.pMoby)->oClass, MVar3 != MINE_004A && MVar3 != 0x363)) &&
          ((MVar3 != MINE_0458 && (MVar3 != 0x365)))) &&
         (MVar3 != BOLTCRATE_POSSIBLY_FOR_METAL_DETECTOR)) {
        moby->setByGroup = '\x01';
      }
      local_3f8 = local_3f8 + 0.25;
      iVar9 = CollSphere(&local_400);
      if (iVar9 != 0) {
        FUN_005e81f0(auStack_3f0,0xa10970,&local_400);
        FUN_005e7f54(lVar20,lVar20,auStack_3f0);
      }
      iVar9 = FastDecTimerS32(uVar22 + 0x58);
      if (iVar9 != 0) {
        moby->setByGroup = '\x01';
      }
    }
  }
  MB_SwingMotion
            (0x3fe0c15240000000,(double)(g_FrameTime * 0.5235988),
             (double)(g_FrameTime * 0.29670596),lVar8,uVar22 + 0x60,uVar22 + 100);
  if ((moby->state & 4) != 0) {
    FastVecSub(&local_3e0,lVar20,auStack_4a0);
    *puVar4 = local_3e0;
    puVar4[1] = local_3dc;
    puVar4[2] = local_3d8;
    puVar4[3] = local_3d4;
  }
LAB_0043f0a4:
  if (((moby->state & 2) == 0) && (iVar9 = FastDecTimerS16(uVar22 + 0x34), iVar9 != 0)) {
    moby->state = moby->state | 2;
    puVar4[0x15] = 0;
  }
  iVar9 = MB_damage(lVar8,&DAT_00830000,0);
  uVar18 = ZEXT48(g_heroMobyPtr);
  if (((iVar9 != 0) && (*(int *)(iVar9 + 0x20) != 0)) &&
     (*(MOBY_OCLASSES *)(*(int *)(iVar9 + 0x20) + 0xa6) != moby->oClass)) {
    moby->setByGroup = '\x01';
  }
  moby->damage = -1;
  if ((moby->state & 2) != 0) {
    if ((moby->state & 4) == 0) {
      moby->setByGroup = '\x01';
    }
    else {
      dVar23 = (double)FUN_005e8588(uVar18 + 0x10,lVar20);
      dVar37 = 0.75;
      if (((0.75 <= dVar23) || (0.25 <= ABS((moby->pos).z - g_heroPosition.z))) ||
         ((moby->state & 0x10) == 0)) {
        dVar23 = (double)FUN_005e8548(ZEXT48(g_heroMobyPtr) + 0x10,lVar20);
        if (dVar37 <= dVar23) {
          dVar37 = (double)FastIntToDouble(g_goldWeaponsArray.mineGlove);
          dVar23 = dVar31;
          if (puVar4[0x1e] != 0) {
            dVar23 = dVar42;
          }
          pMVar21 = (MobyInstance *)0x0;
          if (DAT_00a49344 != (MobyInstance *)0x0) {
            dVar36 = 30.0;
            dVar35 = 1.5;
            dVar24 = 0.125;
            dVar40 = 3.5;
            auVar45 = loadVectorLeftIndexed(0x88,0x43dae0);
            auVar47 = loadVectorLeftIndexed(100,0x43dae0);
            auVar45 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar48 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
            auVar45 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
            dVar23 = (double)(float)((double)((float)(dVar37 + dVar31) * 4.0) * dVar23);
            iVar9 = 0;
            moby_00 = DAT_00a49344;
            do {
              pvVar19 = &moby_00->pos;
              dVar38 = (double)FUN_005e8548(lVar20,pvVar19);
              dVar37 = dVar23;
              if (dVar38 <= dVar36) {
                dVar37 = (double)FUN_005e8548(lVar20,pvVar19);
                if (dVar37 < dVar35) {
                  moby->setByGroup = '\x01';
                  break;
                }
                bVar17 = MB_isCrate(moby_00);
                dVar37 = dVar23;
                if (!bVar17) {
                  iVar12 = MB_GetPvarsIfMobyHasThem(moby_00);
                  if (iVar12 != 0) {
                    dVar38 = (double)FastIntToDouble(*(undefined1 *)(iVar12 + 10));
                    dVar23 = (double)(float)(dVar38 * dVar24 + dVar23);
                  }
                  dVar38 = (double)FUN_005e8588(lVar20,pvVar19);
                  if (((dVar38 < dVar23) &&
                      (ABS((double)((moby_00->pos).z - (moby->pos).z)) < dVar43)) &&
                     ((puVar4[0x15] == 0 ||
                      ((cVar2 = *(char *)(puVar4[0x15] + 0x20), cVar2 == -2 || (cVar2 == -3)))))) {
                    if (pMVar21 != (MobyInstance *)0x0) {
                      dVar23 = (double)FUN_005e8588(lVar20,pvVar19);
                      dVar38 = (double)FUN_005e8588(lVar20,&pMVar21->pos);
                      if (dVar38 <= dVar23) goto LAB_0043f4c8;
                    }
                    moby->state = moby->state | 0x10;
                    local_140 = (longlong)(int)((double)animationSpeed * dVar40);
                    MB_SetAnimation(lVar8,1,0,(int)((double)animationSpeed * dVar40));
                    PlayMobySound(0,0,moby);
                    auVar47 = ZEXT416(0xffffffff);
                    auVar44 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
                    auVar47 = ZEXT416(0xffffffff);
                    auVar46 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
                    puVar4[0x10] = 0;
                    auVar47 = vectorShiftLeftIntegerWord(auVar44,auVar44);
                    auVar44 = vectorShiftLeftIntegerWord(auVar46,auVar46);
                    auVar46 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                    auVar47 = vectorMultiplyAddFloatingPoint(auVar46,auVar48,auVar47);
                    auVar44 = vectorMultiplyAddFloatingPoint(auVar46,auVar45,auVar44);
                    auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
                    auVar44 = vectorConvertToSignedFixedPointWordSaturate(auVar44,0);
                    auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
                    auVar44 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
                    uVar10 = storeVectorElementWordIndexed
                                       (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 |
                                        auVar47 << 0x60,0x58,uVar22);
                    *(undefined4 *)((uint)(puVar4 + 0x16) & 0xfffffffc) = uVar10;
                    *(undefined2 *)((int)puVar4 + 0x52) = 1;
                    uVar10 = storeVectorElementWordIndexed
                                       (auVar44 | auVar44 << 0x20 | auVar44 << 0x40 |
                                        auVar44 << 0x60,0x48,uVar22);
                    *(undefined4 *)((uint)(puVar4 + 0x12) & 0xfffffffc) = uVar10;
                    pMVar21 = moby_00;
                  }
                }
              }
LAB_0043f4c8:
              moby_00 = *(MobyInstance **)((int)&DAT_00a49348 + iVar9);
              dVar23 = dVar37;
              iVar9 = iVar9 + 4;
            } while (moby_00 != (MobyInstance *)0x0);
            if (pMVar21 != (MobyInstance *)0x0) {
              puVar4[0x15] = pMVar21;
            }
          }
        }
        else {
          FastVecSub(&local_3b0,lVar20,ZEXT48(g_heroMobyPtr) + 0x10);
          local_3d0 = local_3b0;
          local_3cc = local_3ac;
          local_3c8 = local_3a8;
          local_3c4 = local_3a4;
          FUN_005e7f98(dVar37,&local_3d0,&local_3d0);
          FastVecAdd(&local_3a0,ZEXT48(g_heroMobyPtr) + 0x10,&local_3d0);
          local_3c0 = local_3a0;
          local_3bc = local_39c;
          local_3b8 = local_398;
          local_3b4 = local_394;
          CollMovingSphere
                    (dVar34,0x3fd0000000000000,0x3fd0000000000000,0x3fe0c15240000000,lVar8,lVar20,
                     &local_3c0);
        }
      }
      else {
        moby->setByGroup = '\x01';
      }
    }
  }
  puVar4[0x1e] = 0;
  if (((int)puVar4[0x17] < 0) || (DAT_010ccd20 != 0)) {
    MB_SpawnExplosionSparks
              (0x3fd51eb860000000,0x402a000000000000,lVar8,lVar20,&DAT_0043dae0,0xffffffffffffffff);
    MB_DeleteMobyFromDynamicGroup(moby,&DAT_00a51ee8);
    DeleteMoby(moby);
  }
  uVar5 = (int)puVar4[0x1b] >> 0x1f;
  dVar23 = 0.05000000074505806;
  if ((0x3d4ccccd < (int)((uVar5 >> 1 ^ puVar4[0x1b]) - uVar5)) &&
     (fVar49 = (float)puVar4[0x1b] * (float)((double)DAT_0071f408 * -0.012000024318695068 + dVar31),
     puVar4[0x1b] = fVar49, fVar49 < 0.05)) {
    puVar4[0x1b] = 0x3d4ccccd;
  }
  dVar37 = (double)FastIntToDouble(worldUpdateTime - puVar4[0x1d]);
  dVar40 = (double)(float)(dVar37 / (double)(DAT_0085a480 * animationSpeed));
  dVar37 = dVar31;
  if ((dVar40 <= dVar31) && (dVar37 = dVar40, dVar40 < local_150)) {
    dVar37 = local_150;
  }
  local_144 = (float)dVar34;
  dVar40 = (double)FastWrapRot((float)puVar4[0x1c],g_FrameTime * 6.2831855);
  puVar4[0x1c] = (float)dVar40;
  dVar24 = (double)(moby->pos).z;
  dVar40 = (double)FUN_005e8128();
  cVar2 = moby->setByGroup;
  (moby->pos).z =
       (float)((double)(float)((double)(float)((double)(float)puVar4[0x1b] * dVar40) * dVar37 +
                              dVar24) + dVar34);
  if (cVar2 == '\0') {
    MB_RegisterLameShadow(0.25,moby);
  }
  else {
    dVar34 = (double)FUN_005e8588(lVar20,0x951500);
    if (*(short *)(puVar4 + 0x14) == 0) {
      dVar37 = (double)FastIntToDouble(g_goldWeaponsArray.mineGlove);
      uVar7 = CollMobySphere
                        ((double)(float)((double)(float)(dVar37 * 0.5 + dVar31) * dVar43),lVar20);
      uVar28.piece<0,4>() = (moby->pos).x;
      uVar28.piece<4,4>() = (moby->pos).y;
      uVar29.piece<0,4>() = (moby->pos).z;
      uVar29.piece<4,4>() = (moby->pos).w;
      MB_DamageMobyList
                (dVar42,0x3fd0000000000000,0x3ff8000000000000,lVar8,4,uVar28,uVar29,&g_CollMobyHits,
                 uVar7,0,&DAT_00810000);
    }
    dVar37 = (double)GetGroundZNoWater(lVar20);
    if (*(short *)(puVar4 + 0x14) == 0) {
      if ((moby->pos).z <= (float)(dVar37 + dVar43)) {
        dVar43 = (double)FastIntToDouble(g_goldWeaponsArray.mineGlove);
        iVar9 = 0x96;
        dVar23 = 0.5;
        dVar43 = (double)(float)(dVar43 * 0.5 + dVar31);
        local_148 = (float)dVar34;
        if (dVar34 < 10.0 != 0xffffffce) {
          local_148 = (float)dVar34;
          iVar9 = FastDoubleToInt((double)(float)(dVar34 * 15.0));
        }
        local_158 = (float)dVar31;
        iVar12 = 0;
        if (0 < iVar9) {
          dVar41 = -0.5;
          dVar31 = 4.0;
          dVar34 = 0.785398006439209;
          dVar37 = 8.0;
          dVar25 = 180.5;
          dVar24 = (double)(float)(dVar43 * 150000.0);
          dVar32 = 200000.0;
          dVar26 = 300000.0;
          local_160 = 14.0;
          local_168 = 22.0;
          local_170 = 12.0;
          dVar27 = 240.5;
          dVar40 = 50000.0;
          dVar42 = 100000.0;
          dVar35 = 30.5;
          dVar36 = 45.5;
          dVar39 = 0.25;
          dVar38 = 300.5;
          do {
            lVar8 = MB_randInt(4);
            dVar30 = (double)g_FrameTime;
            local_180[0] = (float)(dVar30 * local_160);
            local_180[3] = 0.0;
            local_180[1] = (float)(dVar30 * local_168);
            local_320 = 0.0;
            local_180[2] = (float)(dVar30 * local_170);
            local_31c = 0.0;
            local_318 = 0.0;
            local_314 = 0;
            dVar30 = (double)MB_randRangeFloat
                                       ((float)(dVar30 * dVar41),(float)(dVar30 * dVar23));
            local_320 = (float)(dVar30 * dVar43);
            dVar30 = (double)MB_randRangeFloat
                                       ((float)((double)g_FrameTime * dVar41),
                                        (float)((double)g_FrameTime * dVar23));
            local_31c = (float)(dVar30 * dVar43);
            dVar30 = (double)MB_randRangeFloat
                                       ((float)((double)g_FrameTime * dVar31),
                                        *(float *)((int)local_180 + (int)(lVar8 << 2)));
            local_318 = (float)(dVar30 * dVar43);
            iVar14 = (int)lVar8;
            dVar30 = dVar39;
            if (iVar14 == 1) {
              dVar30 = dVar23;
            }
            local_130 = (float)dVar38;
            dVar38 = (double)MB_randRangeFloat((float)local_150,(float)dVar30);
            dVar33 = (double)(float)(dVar38 * dVar43);
            dVar38 = (double)MB_randRot();
            dVar30 = (double)cosf((float)dVar38);
            local_310 = (float)(dVar30 * dVar33);
            local_12c = (float)dVar38;
            dVar38 = (double)FUN_005e8128(dVar38);
            local_30c = (float)(dVar38 * dVar33);
            local_308 = 0.0;
            FUN_005e7f54(&local_310,&local_310,lVar20);
            dVar30 = (double)local_308;
            dVar38 = (double)cosf((float)dVar34);
            local_308 = -(float)(dVar33 * dVar38 - dVar30);
            local_318 = -(float)((double)(float)((double)g_FrameTime * dVar33) * dVar37 -
                                (double)local_318);
            dVar38 = (double)local_130;
            dVar30 = (double)local_12c;
            if (iVar14 < 2) {
              if (-1 < iVar14) {
                if (iVar14 < 1) {
                  iVar13 = ReorderRGB(0x1f101820,(uint)g_goldWeaponsArray.mineGlove);
                  dVar30 = (double)MB_randRangeFloat((float)dVar32,(float)dVar26);
                  dVar30 = (double)(float)(dVar30 * dVar43);
                  iVar14 = (int)((double)animationSpeed * dVar27);
                  local_140 = (longlong)iVar14;
                  MB_randRange((int)((double)animationSpeed * dVar25),iVar14);
                  SpawnPart_16(dVar30,&local_310,&local_320,iVar13,&DAT_00101010);
                }
                else {
                  iVar14 = ReorderRGB(0x3f081020,(uint)g_goldWeaponsArray.mineGlove);
                  iVar13 = ReorderRGB(0xf081020,(uint)g_goldWeaponsArray.mineGlove);
                  dVar30 = (double)MB_randRangeFloat((float)dVar40,(float)dVar42);
                  local_140 = (longlong)(int)((double)animationSpeed * dVar25);
                  SpawnPart_16
                            ((double)(float)(dVar30 * dVar43),&local_310,&local_320,iVar14,iVar13);
                }
              }
            }
            else if (iVar14 < 3) {
              lVar8 = MB_randInt(100);
              iVar13 = ReorderRGB
                                 (((uint)(lVar8 + -0x28 >> 0x3f) & 0x30b09880) + 0x2f486078,
                                  (uint)g_goldWeaponsArray.mineGlove);
              iVar15 = ReorderRGB(0xf000020,(uint)g_goldWeaponsArray.mineGlove);
              iVar14 = (int)((double)animationSpeed * dVar36);
              local_140 = (longlong)iVar14;
              MB_randRange((int)((double)animationSpeed * dVar35),iVar14);
              SpawnPart_16(dVar24,&local_310,&local_320,iVar13,iVar15);
            }
            else if (iVar14 < 4) {
              local_130 = (float)dVar39;
              dVar33 = (double)local_158;
              dVar39 = (double)MB_randRangeFloat((float)dVar39,local_158);
              iVar14 = 0x7f000000;
              TweenColor((float)dVar39,0x7f000000,0x7f182030);
              dVar39 = (double)MB_randRangeFloat((float)dVar23,(float)dVar33);
              iVar13 = 0;
              TweenColor((float)dVar39,0,0x5f5f5f);
              iVar15 = ReorderRGB(iVar14,(uint)g_goldWeaponsArray.mineGlove);
              iVar13 = ReorderRGB(iVar13,(uint)g_goldWeaponsArray.mineGlove);
              dVar39 = (double)MB_randRangeFloat((float)local_150,(float)dVar33);
              dVar33 = (double)(float)(dVar39 * (double)g_FrameTime);
              dVar39 = (double)MB_randRot();
              MB_SphericalToVector((float)dVar33,(float)dVar30,(float)dVar39,&local_320);
              dVar39 = (double)MB_randRangeFloat((float)dVar32,(float)dVar26);
              dVar39 = (double)(float)(dVar39 * dVar43);
              iVar14 = (int)((double)animationSpeed * dVar38);
              local_140 = (longlong)iVar14;
              MB_randRange((int)((double)animationSpeed * dVar27),iVar14);
              SpawnPart_16(dVar39,&local_310,&local_320,iVar15,iVar13);
              dVar39 = (double)local_130;
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < iVar9);
        }
      }
      else {
        local_324 = 0;
        local_328 = 0;
        local_32c = 0;
        local_330 = 0;
        local_148 = (float)dVar34;
        MB_genericExplosion
                  (local_150,local_150,dVar43,dVar31,0x4010000000000000,dVar31,0x401c000000000000,
                   lVar8,&local_330,0,g_goldWeaponsArray.mineGlove,&DAT_0043dae0,3,3,5);
      }
    }
    else {
      local_390 = (moby->pos).x;
      local_38c = (moby->pos).y;
      local_384 = (moby->pos).w;
      local_158 = (float)dVar31;
      local_388 = (moby->pos).z + 3.5;
      dVar41 = 0.5;
      dVar31 = (double)GetGroundZ(0x3fe0000000000000,&local_390,0);
      dVar35 = -1.0;
      iVar9 = 0;
      dVar24 = -0.5;
      dVar40 = -2.0;
      dVar38 = 4.0;
      dVar36 = 8.0;
      dVar37 = 0.10000000149011612;
      dVar43 = 210000.0;
      do {
        local_380 = 0.0;
        local_37c = 0.0;
        local_378 = 0.0;
        local_374 = 0;
        dVar32 = (double)local_158;
        dVar25 = (double)MB_randRangeFloat((float)dVar35,local_158);
        local_380 = (float)dVar25;
        dVar25 = (double)MB_randRangeFloat((float)dVar35,(float)dVar32);
        local_37c = (float)dVar25;
        dVar25 = (double)MB_randRangeFloat((float)dVar24,(float)dVar40);
        local_378 = (float)dVar25;
        MB_randRangeFloat
                  ((float)((double)g_FrameTime * dVar38),
                   (float)((double)g_FrameTime * dVar36));
        FUN_005e7f98(&local_380,&local_380);
        dVar25 = (double)MB_randRangeFloat((float)dVar23,(float)dVar37);
        SpawnPart_34((double)(float)(dVar25 * dVar43),dVar31,pos,&local_380);
        iVar9 = iVar9 + 1;
      } while (iVar9 < 0x96);
      dVar37 = (double)(float)(dVar41 + dVar31);
      iVar9 = 0;
      dVar25 = -0.75;
      dVar35 = 0.75;
      dVar24 = 16.0;
      dVar40 = 0.3499999940395355;
      dVar23 = 1.25;
      dVar43 = 20.0;
      do {
        local_370 = 0.0;
        local_36c = 0.0;
        local_368 = 0.0;
        local_364 = 0;
        dVar32 = (double)MB_randRangeFloat
                                   ((float)((double)g_FrameTime * dVar25),
                                    (float)((double)g_FrameTime * dVar35));
        local_370 = (float)dVar32;
        dVar32 = (double)MB_randRangeFloat
                                   ((float)((double)g_FrameTime * dVar25),
                                    (float)((double)g_FrameTime * dVar35));
        local_36c = (float)dVar32;
        dVar32 = (double)MB_randRangeFloat
                                   ((float)((double)g_FrameTime * dVar38),
                                    (float)((double)g_FrameTime * dVar24));
        local_368 = (float)dVar32;
        dVar32 = (double)MB_randRangeFloat((float)local_150,(float)dVar40);
        dVar26 = (double)MB_randRot();
        dVar27 = (double)cosf((float)dVar26);
        local_360 = (float)(dVar27 * dVar32);
        dVar26 = (double)FUN_005e8128(dVar26);
        local_35c = (float)(dVar26 * dVar32);
        local_358 = 0.0;
        FUN_005e7f54(&local_360,&local_360,lVar20);
        local_358 = (float)dVar37;
        local_368 = -(float)((double)(float)((double)g_FrameTime * dVar32) * dVar36 -
                            (double)local_368);
        uVar28 = MB_randRangeFloat((float)dVar40,(float)dVar23);
        SpawnPart_64
                  (uVar28,dVar31,(double)(float)((double)g_FrameTimeSq * dVar43),&local_360,
                   &local_370,0);
        iVar9 = iVar9 + 1;
      } while (iVar9 < 0x96);
      iVar9 = 0;
      dVar26 = 0.25;
      dVar32 = -3.0;
      dVar25 = 14.0;
      dVar36 = 1.5;
      dVar35 = 6.0;
      dVar24 = 31500.001953125;
      dVar40 = 52500.0;
      dVar37 = 90.5;
      dVar23 = 150.5;
      dVar43 = (double)local_158;
      do {
        local_148 = (float)dVar34;
        dVar27 = (double)MB_randRangeFloat((float)dVar26,(float)dVar43);
        iVar12 = 0x7f000000;
        TweenColor((float)dVar27,0x7f000000,0x7f7f6060);
        dVar27 = (double)MB_randRangeFloat((float)dVar41,(float)dVar43);
        iVar14 = 0;
        TweenColor((float)dVar27,0,0x3f3030);
        dVar27 = (double)MB_randRangeFloat((float)dVar32,(float)dVar42);
        local_340 = (float)dVar27;
        dVar27 = (double)MB_randRangeFloat((float)dVar32,(float)dVar42);
        local_33c = (float)dVar27;
        dVar27 = (double)MB_randRangeFloat
                                   ((float)((double)g_FrameTime * dVar38),
                                    (float)((double)g_FrameTime * dVar25));
        local_338 = (float)dVar27;
        dVar27 = (double)MB_randRangeFloat((float)dVar36,(float)dVar42);
        FUN_005e7f98((double)(float)(dVar27 * (double)g_FrameTime),&local_340,&local_340);
        dVar27 = (double)MB_randRangeFloat((float)dVar42,(float)dVar35);
        local_338 = (float)(dVar27 * (double)g_FrameTime);
        local_350 = (moby->pos).x;
        local_34c = (moby->pos).y;
        local_344 = (moby->pos).w;
        local_348 = (float)dVar31;
        iVar13 = ReorderRGB(iVar12,(uint)g_goldWeaponsArray.mineGlove);
        iVar14 = ReorderRGB(iVar14,(uint)g_goldWeaponsArray.mineGlove);
        uVar29 = MB_randRangeFloat((float)dVar24,(float)dVar40);
        iVar12 = (int)((double)animationSpeed * dVar23);
        local_140 = (longlong)iVar12;
        uVar28 = MB_randRange((int)((double)animationSpeed * dVar37),iVar12);
        SpawnPart_15
                  (uVar29,&local_350,&local_340,iVar13,iVar14,0xffffffffffffffff,uVar28,1,
                   *DAT_00a52830);
        iVar9 = iVar9 + 1;
      } while (iVar9 < 0x14);
    }
    moby->setByGroup = '\0';
    if (g_goldWeaponsArray.mineGlove == '\0') {
      PlayMobySound(2,0,moby);
    }
    else {
      PlayMobySound(3,0,moby);
    }
    auVar45 = ZEXT416(0xffffffff);
    auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
    auVar47 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar45 = vectorShiftLeftIntegerWord(auVar45,auVar45);
    fVar49 = 0.35;
    if (local_148 - 20.0 < 0.0) {
      fVar49 = local_148 * 0.0175;
    }
    GameCamera.offset0.amp = local_144 - fVar49;
    auVar48 = loadVectorLeftIndexed(0x118,0x43dae0);
    auVar48 = auVar48 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar45 = vectorMultiplyAddFloatingPoint
                        (auVar47,auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60,
                         auVar45);
    auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
    auVar45 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
    GameCamera.offset0.total =
         storeVectorElementWordIndexed
                   (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0x168,0x9513c0);
    FUN_005e8548(lVar20,&g_heroPosition);
    if (g_goldWeaponsArray.mineGlove == '\0') {
      FUN_003fda38(&uStack_220,lVar20,0,0);
    }
    else {
      FUN_003fda38(&uStack_1d0,lVar20,0,0);
    }
    MB_DeleteMobyFromDynamicGroup(moby,&DAT_00a51ee8);
    DeleteMoby(moby);
  }
  return;
}


