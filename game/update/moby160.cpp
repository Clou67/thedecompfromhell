// game/update/moby160.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x2a1a48-0x2a3d68
#include <math.h>
#include "game/update/moby160.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/mesh.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update/moby121.h"
#include "game/update/moby639.h"
#include "game/update/moby775.h"
#include "game/update/moby998.h"
#include "game/vendor.h"
#include "game/water.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x02a1a48 (0x92c bytes)
// inlined: FastAtan2 @0x2a2014, FastAtan2 @0x2a21b8
undefined8 M160_002a1a48(float *param_1,MobyInstance *param_2,int param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  u8 uVar4;
  f32 fVar5;
  f32 fVar6;
  f32 fVar7;
  f32 fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  short sVar15;
  undefined4 uVar16;
  ulonglong *puVar17;
  float fVar18;
  int iVar19;
  MobyInstance *pMVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  int iVar26;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  float *pfVar28;
  longlong lVar27;
  longlong lVar29;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  ulonglong in_f24;
  double dVar36;
  ulonglong in_f25;
  double dVar37;
  ulonglong in_f26;
  double dVar38;
  ulonglong in_f27;
  double dVar39;
  ulonglong in_f28;
  double dVar40;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar41;
  ulonglong in_f31;
  double dVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  
  uVar21 = ZEXT48(&stack0x00000000);
  lVar25 = uVar21 - 0x160;
  puVar17 = (ulonglong *)lVar25;
  *puVar17 = uVar21;
  puVar17[0x2e] = in_LR;
  puVar17[0x24] = in_f24;
  puVar17[0x25] = in_f25;
  puVar17[0x26] = in_f26;
  puVar17[0x27] = in_f27;
  puVar17[0x28] = in_f28;
  puVar17[0x29] = in_f29;
  puVar17[0x2a] = in_f30;
  puVar17[0x2b] = in_f31;
  puVar17[0x1f] = unaff_r27;
  puVar17[0x23] = unaff_r31;
  puVar17[0x20] = unaff_r28;
  puVar17[0x22] = unaff_r30;
  puVar17[0x21] = unaff_r29;
  if ((g_heroState == MOVEMENT_LOCKED) || (g_gameMode != GAME_MODE_NORMAL)) {
    uVar22 = 0;
  }
  else {
    fVar5 = (param_2->pos).x;
    fVar6 = (param_2->pos).y;
    *(f32 *)(puVar17 + 0x10) = fVar5;
    fVar7 = (param_2->pos).z;
    *(f32 *)((int)puVar17 + 0x84) = fVar6;
    fVar8 = (param_2->pos).w;
    uVar4 = param_2->state;
    *(f32 *)(puVar17 + 0x11) = fVar7;
    *(f32 *)((int)puVar17 + 0x8c) = fVar8;
    if (uVar4 == '\0') {
      dVar42 = -0.3619680106639862;
      dVar31 = (double)FastWrapRot(-0.361968,g_heroRotation.z);
      fVar9 = g_heroRotation.z;
      dVar41 = 3.141592502593994;
      fVar2 = (float)(dVar31 + 1.570796251296997);
      dVar31 = -3.141592502593994;
      dVar40 = -0.16666656732559204;
      dVar39 = 0.008333025500178337;
      dVar38 = -0.0001980741071747616;
      dVar37 = 2.601886990305502e-06;
      dVar36 = 0.8590390086174011;
      fVar3 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar3 = fVar2;
      }
      fVar10 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
        fVar10 = fVar3;
      }
      fVar13 = fVar10 * fVar10;
      fVar2 = fVar13 * fVar13 * fVar10;
      fVar3 = fVar13 * fVar2;
      *(float *)(puVar17 + 0xe) =
           (fVar13 * fVar3 * 2.601887e-06 +
           fVar3 * -0.0001980741 + fVar2 * 0.0083330255 + fVar13 * fVar10 * -0.16666657 + fVar10) *
           0.859039;
      dVar32 = (double)FastWrapRot((float)dVar42,fVar9);
      fVar2 = g_heroPosition.y;
      dVar42 = (double)(float)(dVar41 - dVar32);
      if (dVar32 - (double)(float)(dVar41 - dVar32) < 0.0) {
        dVar42 = dVar32;
      }
      dVar33 = (double)(float)(dVar31 - dVar32);
      if ((double)(float)(dVar31 - dVar32) - dVar42 < 0.0) {
        dVar33 = dVar42;
      }
      fVar3 = *(float *)(puVar17 + 0xe) + g_heroPosition.x;
      *(undefined4 *)(puVar17 + 0xf) = 0;
      dVar32 = (double)(float)(dVar33 * dVar33);
      *(float *)(puVar17 + 0xe) = fVar3;
      fVar9 = g_heroPosition.z;
      dVar31 = (double)*param_1;
      dVar42 = (double)param_1[1];
      dVar41 = (double)param_1[2];
      bVar1 = g_standingOnMoby != 0;
      dVar34 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar33));
      dVar35 = (double)(float)(dVar32 * dVar34);
      fVar3 = (float)((double)(float)((double)(float)(dVar32 * dVar35) * dVar37 +
                                     (double)(float)(dVar35 * dVar38 +
                                                    (double)(float)(dVar34 * dVar39 +
                                                                   (double)(float)((double)(float)(
                                                  dVar32 * dVar33) * dVar40 + dVar33)))) * dVar36);
      *(float *)((int)puVar17 + 0x74) = fVar3;
      *(float *)((int)puVar17 + 0x74) = fVar3 + fVar2;
      *(float *)(puVar17 + 0xf) = fVar9 + 0.49082;
      if (((bVar1) && (iVar26 = MB_GetPlatformParent(), iVar26 != 0)) && (param_3 != 0)) {
        dVar31 = (double)(float)(dVar31 + (double)DAT_00969de0);
        dVar42 = (double)(float)(dVar42 + (double)DAT_00969de4);
        dVar41 = (double)(float)(dVar41 + (double)DAT_00969de8);
      }
      auVar43 = ZEXT416(0xffffffff);
      auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
      auVar44 = vectorShiftLeftIntegerWord(auVar43,auVar43);
      auVar43 = loadVectorLeftIndexed(0x28,0x2a1a08);
      auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar45 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar43 = vectorMultiplyAddFloatingPoint
                          (auVar45,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,
                           auVar44);
      auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
      auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar16 = storeVectorElementWordIndexed
                         (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0xa0,lVar25)
      ;
      *(undefined4 *)(puVar17 + 0x14) = uVar16;
    }
    else {
      sVar15 = *(short *)(param_1 + 0xd);
      dVar31 = (double)*param_1;
      iVar26 = *(int *)((int)param_1[0xc] + 0x78);
      *(f32 *)(puVar17 + 0xe) = fVar5;
      *(f32 *)((int)puVar17 + 0x74) = fVar6;
      *(f32 *)(puVar17 + 0xf) = fVar7;
      *(f32 *)((int)puVar17 + 0x7c) = fVar8;
      dVar42 = (double)param_1[1];
      dVar41 = (double)param_1[2];
      *(int *)(puVar17 + 0x14) = (int)sVar15;
      if (*(int *)(iVar26 + 0x50) != 0) {
        *(undefined2 *)((int)param_1 + 0x36) = 1;
      }
    }
    pMVar20 = g_heroMobyPtr;
    *(f32 *)(puVar17 + 0x12) = (g_heroMobyPtr->pos).x;
    *(f32 *)((int)puVar17 + 0x94) = (pMVar20->pos).y;
    *(f32 *)(puVar17 + 0x13) = (pMVar20->pos).z;
    fVar5 = (pMVar20->pos).w;
    *(undefined4 *)(puVar17 + 0x13) = *(undefined4 *)(puVar17 + 0xf);
    *(f32 *)((int)puVar17 + 0x9c) = fVar5;
    iVar26 = CollLine(uVar21 - 0xd0,uVar21 - 0xf0,0x10,pMVar20,0);
    if (((iVar26 != 0) && (iVar26 = CollHotspot(), iVar26 != 0)) && (0 < g_CollOutput.poly))
    {
      param_1[4] = g_CollOutput.ip.x;
      param_1[5] = g_CollOutput.ip.y;
      param_1[6] = g_CollOutput.ip.z;
      param_1[7] = g_CollOutput.ip.w;
    }
    do {
      iVar26 = FastDecTimerS32(uVar21 - 0xc0);
      if (iVar26 != 0) goto LAB_002a1e24;
      *(float *)(puVar17 + 0x10) = *(float *)(puVar17 + 0xe);
      *(float *)((int)puVar17 + 0x84) = *(float *)((int)puVar17 + 0x74);
      *(float *)(puVar17 + 0x11) = *(float *)(puVar17 + 0xf);
      *(undefined4 *)((int)puVar17 + 0x8c) = *(undefined4 *)((int)puVar17 + 0x7c);
      dVar36 = (double)g_FrameTimeSq;
      *(float *)(puVar17 + 0xe) = (float)((double)*(float *)(puVar17 + 0xe) + dVar31);
      *(float *)((int)puVar17 + 0x74) = (float)((double)*(float *)((int)puVar17 + 0x74) + dVar42);
      *(float *)(puVar17 + 0xf) = (float)((double)*(float *)(puVar17 + 0xf) + dVar41);
      dVar41 = -(double)(float)(dVar36 * 9.800000190734863 - dVar41);
      iVar26 = CollLine(uVar21 - 0xe0,uVar21 - 0xf0,0x12,param_2,0);
    } while (((iVar26 == 0) || ((iVar26 = CollHotspot(), iVar26 == 0 && (0.0 < dVar41))))
            || (g_CollOutput.poly < 1));
    param_1[4] = g_CollOutput.ip.x;
    param_1[5] = g_CollOutput.ip.y;
    param_1[6] = g_CollOutput.ip.z;
    param_1[7] = g_CollOutput.ip.w;
LAB_002a1e24:
    if ((*(int *)(puVar17 + 0x14) == 0) ||
       ((param_3 == 0 &&
        ((g_CollOutput.pMoby == (MobyInstance *)0x0 ||
         (iVar26 = MB_GetPlatformParent(), iVar26 == 0)))))) {
      uVar22 = 0;
    }
    else {
      if (((param_3 != 2) || (g_CollOutput.pMoby == (MobyInstance *)0x0)) ||
         (iVar26 = MB_GetPlatformParent(), iVar26 == 0)) {
        RegisterFuncForMoby(&PTR_M169_002a1370_0070ab78,param_2);
      }
      fVar10 = g_CollOutput.normal.z;
      fVar2 = param_1[10];
      fVar3 = fVar2 + 1.5707963;
      fVar9 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar9 = fVar2;
      }
      fVar13 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar13 = fVar3;
      }
      fVar14 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar9 < 0.0) {
        fVar14 = fVar9;
      }
      fVar2 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar13 < 0.0) {
        fVar2 = fVar13;
      }
      fVar3 = fVar14 * fVar14;
      dVar31 = (double)g_CollOutput.normal.z;
      fVar9 = fVar2 * fVar2;
      fVar12 = fVar3 * fVar3 * fVar14;
      fVar13 = fVar9 * fVar9 * fVar2;
      fVar18 = fVar3 * fVar12;
      fVar11 = fVar9 * fVar13;
      fVar3 = fVar3 * fVar18 * 2.601887e-06 +
              fVar18 * -0.0001980741 + fVar12 * 0.0083330255 + fVar3 * fVar14 * -0.16666657 + fVar14
      ;
      fVar2 = fVar9 * fVar11 * 2.601887e-06 +
              fVar11 * -0.0001980741 + fVar13 * 0.0083330255 + fVar9 * fVar2 * -0.16666657 + fVar2;
      dVar36 = (double)(g_CollOutput.normal.x * fVar2 + g_CollOutput.normal.y * fVar3);
      fVar2 = g_CollOutput.normal.y * fVar2 - g_CollOutput.normal.x * fVar3;
      fVar3 = ABS(fVar2);
      *(float *)(puVar17 + 0x16) = fVar2;
      fVar2 = SQRT((float)(dVar36 * dVar36 + (double)(float)(dVar31 * dVar31)));
      fVar9 = ABS(fVar2);
      *(float *)((int)puVar17 + 0xac) = fVar2;
      *(float *)((int)puVar17 + 0xb4) = fVar9 - fVar3;
      dVar41 = 0.0;
      dVar42 = 0.7853981852531433;
      uVar23 = (ulonglong)(*(uint *)((int)puVar17 + 0xac) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar17 + 0xb4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar17 + 0x16) >> 0x1d) & 4;
      fVar2 = ABS(*(float *)((int)puVar17 + 0xac));
      if (*(float *)((int)puVar17 + 0xb4) - 0.0 < 0.0) {
        fVar2 = fVar3;
      }
      fVar13 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
      fVar3 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
      fVar14 = ABS(*(float *)(puVar17 + 0x16));
      if (*(float *)((int)puVar17 + 0xb4) - 0.0 < 0.0) {
        fVar14 = fVar9;
      }
      dVar37 = dVar41;
      if (0.0 < fVar2) {
        lVar24 = uVar21 - 0x150;
        lVar27 = uVar21 - 0x88;
        lVar29 = uVar21 - 0x78;
        lVar30 = 2;
        fVar2 = (fVar14 - fVar2) / (fVar14 + fVar2);
        fVar9 = fVar2 * fVar2;
        *(float *)((int)puVar17 + 0xe4) = fVar2;
        *(float *)((int)puVar17 + 0xdc) = fVar2;
        *(float *)(puVar17 + 0x1c) = fVar2;
        *(float *)(puVar17 + 0x1b) = fVar2;
        fVar2 = fVar9 * fVar9;
        *(float *)((int)puVar17 + 0xdc) = *(float *)((int)puVar17 + 0xdc) * fVar9;
        *(float *)(puVar17 + 0x1c) = *(float *)(puVar17 + 0x1c) * fVar2;
        *(float *)((int)puVar17 + 0xe4) = *(float *)((int)puVar17 + 0xe4) * fVar2 * fVar9;
        do {
          *(float *)((int)lVar24 + 0xd8) = *(float *)((int)lVar24 + 200) * fVar2 * fVar2;
          iVar26 = (int)lVar27;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)(iVar26 + 4) * fVar2 * fVar2;
          lVar29 = lVar29 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar30 = 4;
        lVar29 = uVar21 - 0x88;
        pfVar28 = (float *)&DAT_007358e0;
        lVar24 = lVar25;
        lVar27 = lVar29;
        do {
          fVar2 = *pfVar28;
          fVar9 = pfVar28[1];
          pfVar28 = pfVar28 + 2;
          *(float *)((int)lVar24 + 0xd8) = *(float *)((int)lVar24 + 0xd8) * fVar2;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar9;
          lVar27 = lVar27 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar27 = 2;
        lVar24 = lVar25;
        do {
          iVar26 = (int)lVar24;
          lVar24 = lVar24 + 0x10;
          iVar19 = (int)lVar29;
          lVar29 = lVar29 + 0x10;
          dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar26 + 0xd8)) +
                            *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) +
                           *(float *)(iVar19 + 0xc));
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        dVar37 = (double)((float)(dVar37 + 0.7853981852531433) * fVar13 + fVar3);
      }
      dVar37 = (double)FastWrapRot((float)-dVar37,1.5707964);
      dVar31 = ABS(dVar31);
      *(float *)((int)puVar17 + 0xa4) = (float)dVar36;
      param_1[8] = (float)dVar37;
      fVar2 = param_1[4];
      *(float *)(puVar17 + 0x15) = (float)(dVar31 - ABS(dVar36));
      fVar3 = param_1[5];
      fVar9 = param_1[6];
      fVar13 = param_1[7];
      uVar23 = (ulonglong)((uint)fVar10 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar17 + 0x15) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar17 + 0xa4) >> 0x1d) & 4;
      dVar37 = dVar31;
      if ((double)*(float *)(puVar17 + 0x15) - dVar41 < 0.0) {
        dVar37 = ABS(dVar36);
      }
      fVar14 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
      fVar10 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
      dVar36 = ABS((double)*(float *)((int)puVar17 + 0xa4));
      if ((double)*(float *)(puVar17 + 0x15) - dVar41 < 0.0) {
        dVar36 = dVar31;
      }
      if (dVar41 < dVar37) {
        lVar24 = uVar21 - 0x150;
        lVar29 = uVar21 - 0x98;
        lVar27 = uVar21 - 0xa8;
        lVar30 = 2;
        fVar11 = (float)(dVar36 - dVar37) / (float)(dVar36 + dVar37);
        fVar12 = fVar11 * fVar11;
        *(float *)((int)puVar17 + 0xc4) = fVar11;
        *(float *)((int)puVar17 + 0xbc) = fVar11;
        *(float *)(puVar17 + 0x18) = fVar11;
        *(float *)(puVar17 + 0x17) = fVar11;
        fVar11 = fVar12 * fVar12;
        *(float *)((int)puVar17 + 0xbc) = *(float *)((int)puVar17 + 0xbc) * fVar12;
        *(float *)(puVar17 + 0x18) = *(float *)(puVar17 + 0x18) * fVar11;
        *(float *)((int)puVar17 + 0xc4) = *(float *)((int)puVar17 + 0xc4) * fVar11 * fVar12;
        do {
          *(float *)((int)lVar24 + 0xb8) = *(float *)((int)lVar24 + 0xa8) * fVar11 * fVar11;
          iVar26 = (int)lVar27;
          lVar27 = lVar27 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)(iVar26 + 4) * fVar11 * fVar11;
          lVar29 = lVar29 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar30 = 4;
        lVar29 = uVar21 - 0xa8;
        pfVar28 = (float *)&DAT_007358e0;
        lVar24 = lVar25;
        lVar27 = lVar29;
        do {
          fVar11 = *pfVar28;
          fVar12 = pfVar28[1];
          pfVar28 = pfVar28 + 2;
          *(float *)((int)lVar24 + 0xb8) = *(float *)((int)lVar24 + 0xb8) * fVar11;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar12;
          lVar27 = lVar27 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar24 = 2;
        do {
          iVar26 = (int)lVar25;
          iVar19 = (int)lVar29;
          lVar25 = lVar25 + 0x10;
          lVar29 = lVar29 + 0x10;
          dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar26 + 0xb8)) +
                            *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) +
                           *(float *)(iVar19 + 0xc));
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        dVar41 = (double)((float)(dVar41 + dVar42) * fVar14 + fVar10);
      }
      param_1[9] = (float)dVar41;
      param_1[10] = 0.0;
      fVar10 = GameCamera.posX;
      fVar2 = fVar2 - GameCamera.posX;
      fVar3 = fVar3 - GameCamera.posY;
      *(float *)((int)puVar17 + 0x8c) = fVar13;
      uVar22 = 1;
      fVar9 = fVar9 - GameCamera.posZ;
      *(float *)(puVar17 + 0x10) = fVar2;
      *(float *)((int)puVar17 + 0x84) = fVar3;
      fVar2 = fVar2 * 0.95;
      fVar3 = fVar3 * 0.95;
      fVar9 = fVar9 * 0.95;
      *(float *)(puVar17 + 0x10) = fVar2;
      *(float *)((int)puVar17 + 0x84) = fVar3;
      *(float *)(puVar17 + 0x11) = fVar9;
      param_1[4] = fVar2 + fVar10;
      param_1[5] = fVar3 + GameCamera.posY;
      param_1[6] = fVar9 + GameCamera.posZ;
    }
  }
  return uVar22;
}


// 0x02a2438 (0x1930 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 160 */

void UpdateMoby_160(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  undefined2 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  MobyInstance *pMVar9;
  MobyModeBit MVar15;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar16;
  undefined8 uVar10;
  longlong lVar11;
  ushort uVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  double dVar30;
  double in_f5;
  undefined8 uVar31;
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
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  float fVar46;
  GPiece<16> local_300;
  GPiece<16> local_2f0;
  GPiece<16> local_2e0;
  GPiece<16> local_2d0;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b4;
  Vec4 local_2b0;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_290;
  float local_28c;
  float local_288;
  float local_280;
  float local_27c;
  float local_278;
  float afStack_270 [4];
  float local_260;
  float local_25c;
  float local_258;
  undefined4 local_254;
  float local_250;
  float local_24c;
  float local_248;
  undefined4 local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  MobyInstance *local_220;
  undefined *local_21c;
  undefined1 local_218;
  undefined1 local_217;
  MOBY_OCLASSES local_216;
  undefined4 local_214;
  undefined4 local_210;
  Vec4 aVStack_200 [4];
  GPiece<64> auStack_1c0;
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
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  float local_130 [4];
  double local_120;
  double local_118;
  double local_110;
  float local_108;
  float local_104;
  longlong local_100;
  float local_f0;
  float local_ec;
  
  lVar11 = (longlong)(int)moby;
  uStack_174 = uRam007ac8cc;
  uStack_178 = uRam007ac8c8;
  uStack_17c = uRam007ac8c4;
  uStack_180 = _DAT_007ac8c0;
  uStack_164 = uRam007ac8dc;
  uStack_168 = uRam007ac8d8;
  uStack_16c = uRam007ac8d4;
  uStack_170 = _DAT_007ac8d0;
  uStack_154 = uRam007ac8ec;
  uStack_158 = uRam007ac8e8;
  uStack_15c = uRam007ac8e4;
  uStack_160 = _DAT_007ac8e0;
  uStack_144 = uRam007ac8fc;
  uStack_148 = uRam007ac8f8;
  uStack_14c = uRam007ac8f4;
  uStack_150 = _DAT_007ac8f0;
  uStack_134 = uRam007ac90c;
  uStack_138 = uRam007ac908;
  uStack_13c = uRam007ac904;
  uStack_140 = _DAT_007ac900;
  dVar42 = 2.0;
  pfVar3 = (float *)moby->pVar;
  uVar21 = ZEXT48(pfVar3);
  local_110 = 1.0;
  if ((g_heroInvisible == '\0') || (moby->state != '\0')) {
    MVar15 = moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
  }
  else {
    MVar15 = moby->modeBits | (UNK_40|DISABLED);
  }
  moby->modeBits = MVar15;
  fVar46 = pfVar3[0xc];
  local_108 = 0.0;
  if ((((fVar46 != 0.0) &&
       (local_108 = 0.0, *(char *)((int)fVar46 + 0x20) != -3 && *(char *)((int)fVar46 + 0x20) != -2)
       ) && (local_108 = 0.0, *(short *)((int)fVar46 + 0xa6) == 0xbe)) &&
     ((local_108 = 0.0, *(short *)((int)pfVar3 + 0x36) == 0 &&
      (local_108 = 0.0,
      0.0 < SQRT(pfVar3[2] * pfVar3[2] + *pfVar3 * *pfVar3 + pfVar3[1] * pfVar3[1]))))) {
    if ((g_standingOnMoby == 0) || (iVar12 = MB_GetPlatformParent(), iVar12 == 0)) {
      M160_002a1a48(uVar21,lVar11,1);
    }
    else {
      iVar12 = M160_002a1a48(uVar21,lVar11,0);
      if (iVar12 == 0) {
        M160_002a1a48(uVar21,lVar11,2);
      }
    }
  }
  if (moby->state == 0) {
    if ((g_currentWeaponMoby != (MobyInstance *)0x0) && (g_currentWeaponMoby->oClass == MINE_GLOVE))
    {
      FastEulerToMtx1(aVStack_200,local_2d0);
      GetBoneTransformations(pfVar3[0xc],0,auStack_1c0);
      FastVecMtx4Mul(aVStack_200,auStack_1c0,aVStack_200);
      FastApplyTransform(&(moby->transform).v0,aVStack_200);
      moby->modeBits = moby->modeBits | LOCK_ROTATION;
      return;
    }
    DeleteMoby(moby);
    return;
  }
  fVar46 = (moby->pos).x;
  moby->collisionMesh = (float *)0x0;
  fVar2 = (moby->pos).y;
  moby->modeBits =
       moby->modeBits &
       (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
        DRAW_TRANSPARENT_WEIRD|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
        NO_UPDATE|DISABLED);
  if ((moby->state & 4) == 0) {
    fVar4 = pfVar3[0x19];
    (moby->pos).x = fVar46 + *pfVar3;
    (moby->pos).y = fVar2 + pfVar3[1];
    (moby->pos).z = (moby->pos).z + pfVar3[2];
    if (fVar4 == 0.0) {
      pfVar3[2] = -(g_FrameTimeSq * 9.8 - pfVar3[2]);
    }
    else {
      dVar40 = 0.10000000149011612;
      pfVar3[2] = -(g_FrameTimeSq * 9.8 * 0.1 - pfVar3[2]);
      local_100 = (longlong)(int)(animationSpeed * 6.5);
      iVar12 = MB_randInt((int)(animationSpeed * 6.5) + -1);
      if (iVar12 == 0) {
        fVar46 = CollWaterHeight(&(moby->pos).x,&local_2c0);
        dVar34 = (double)fVar46;
        local_2c0 = *pfVar3 * 0.25;
        local_2bc = pfVar3[1] * 0.25;
        local_2b8 = pfVar3[2] * 0.25;
        local_2b4 = pfVar3[3];
        dVar40 = (double)MB_randRangeFloat(0.05,(float)dVar40);
        SpawnPart_34
                  ((double)(float)(dVar40 * 210000.0),dVar34,(Vec4 *)&moby->pos,&local_2c0);
      }
    }
  }
  local_21c = &DAT_00830000;
  dVar40 = 3.0;
  local_214 = 0x40400000;
  local_230 = *pfVar3;
  local_22c = pfVar3[1];
  local_210 = 1;
  local_228 = pfVar3[2];
  local_224 = pfVar3[3];
  local_220 = moby;
  FUN_005e84c0(local_110,&local_230,&local_230);
  bVar1 = moby->state;
  local_216 = moby->oClass;
  local_217 = 1;
  local_218 = 2;
  local_228 = 1.0;
  local_224 = 5627.925;
  if ((bVar1 & 4) == 0) {
    lVar19 = lVar11 + 0x10;
    iVar12 = CollLine(local_2f0,lVar19,0x10,lVar11,&local_230);
    bVar1 = moby->state;
    if (iVar12 == 0) goto LAB_002a31a4;
    if (((pfVar3[0x19] == 0.0) && (iVar12 = CollHotspot(), iVar12 == 0)) &&
       ((int)pfVar3[2] < 0)) {
      WaterTile_PutDrop
                ((moby->pos).x,(moby->pos).y,0.5,-0.35,WaterTiles,WaterTileCnt,(float)in_f5);
      pfVar3[3] = 0.0;
      pfVar3[1] = 0.0;
      *pfVar3 = 0.0;
      pfVar3[0x19] = 1.4013e-45;
      pfVar3[2] = g_FrameTime * -1.5;
      local_2b0.x = (moby->pos).x;
      local_2b0.y = (moby->pos).y;
      local_2b0.z = g_CollOutput.ip.z;
      iVar12 = FUN_00456478(dVar42,&local_2b0);
      if (iVar12 != 0) {
        *(undefined1 *)(iVar12 + 0x23) = 0x70;
      }
      dVar34 = (double)local_108;
      iVar12 = 0;
      dVar37 = 6.5;
      do {
        dVar22 = (double)MB_randRot();
        dVar23 = (double)MB_randRangeFloat
                                   ((float)dVar34,(float)((double)g_FrameTime * dVar40));
        dVar24 = (double)cosf((float)dVar22);
        local_2a0 = (float)(dVar24 * dVar23);
        dVar22 = (double)FUN_005e8128(dVar22);
        local_29c = (float)(dVar22 * dVar23);
        dVar22 = (double)MB_randRangeFloat
                                   ((float)((double)g_FrameTime * dVar40),
                                    (float)((double)g_FrameTime * dVar37));
        local_298 = (float)dVar22;
        uVar13 = MB_randRange(0x5a,0x78);
        uVar14 = MB_randInt(2);
        SpawnPart_35(&local_2b0,&local_2a0,uVar14,uVar13);
        iVar12 = iVar12 + 1;
      } while (iVar12 < 0x10);
    }
    else if ((pfVar3[0x19] != 0.0) || (iVar12 = CollHotspot(), iVar12 != 0)) {
      if (g_CollOutput.pMoby != (MobyInstance *)0x0) {
        bVar16 = MB_isCrate(g_CollOutput.pMoby);
        fVar7 = g_CollOutput.ip.w;
        fVar4 = g_CollOutput.ip.z;
        fVar2 = g_CollOutput.ip.y;
        fVar46 = g_CollOutput.ip.x;
        if (((bVar16) || (((g_CollOutput.pMoby)->modeBits & CAN_BE_AUTO_TARGETED) != NONE)) &&
           ((g_CollOutput.pMoby != g_heroMobyPtr && (g_CollOutput.pMoby)->oClass != moby->oClass &&
            (g_CollOutput.pMoby != (MobyInstance *)pfVar3[0xc])))) {
          moby->setByGroup = '\x01';
          if (moby->state != '\x01') {
            (moby->pos).x = fVar46;
            (moby->pos).y = fVar2;
            (moby->pos).z = fVar4;
            (moby->pos).w = fVar7;
            dVar34 = (double)GetGroundZ(0x3fe0000000000000,lVar19,0);
            (moby->pos).z = (float)dVar34;
          }
          goto LAB_002a3378;
        }
      }
      if (g_CollOutput.pMoby == (MobyInstance *)0x0) {
LAB_002a2e4c:
        if (0 < g_CollOutput.poly) {
LAB_002a2e58:
          if (((pfVar3[0x19] != 0.0) || (iVar12 = CollHotspot(), iVar12 == 0)) ||
             (pfVar3[2] < g_FrameTime * -9.8)) {
            moby->setByGroup = '\x01';
            (moby->pos).x = g_CollOutput.ip.x;
            (moby->pos).y = g_CollOutput.ip.y;
            (moby->pos).z = g_CollOutput.ip.z;
            (moby->pos).w = g_CollOutput.ip.w;
            FastVecReflect(local_300,uVar21,0xa10980);
            FUN_005e7f98((double)(float)((double)g_FrameTime * dVar42),local_300,local_300
                        );
            FUN_005e7f98(local_110,local_2e0,0xa10980);
          }
          else {
            iVar12 = 0;
            if (g_CollOutput.pMoby != (MobyInstance *)0x0) {
              iVar12 = MB_GetPlatformParent();
            }
            (moby->pos).x = g_CollOutput.ip.x;
            (moby->pos).y = g_CollOutput.ip.y;
            (moby->pos).z = g_CollOutput.ip.z;
            (moby->pos).w = g_CollOutput.ip.w;
            FUN_005e7f98((double)(g_FrameTimeSq * 9.7),&local_280,0xa10980);
            (moby->pos).x = (moby->pos).x + local_280;
            (moby->pos).y = (moby->pos).y + local_27c;
            (moby->pos).z = (moby->pos).z + local_278;
            FastVecReflect(uVar21,uVar21,0xa10980);
            *pfVar3 = *pfVar3 * 0.6;
            pfVar3[1] = pfVar3[1] * 0.6;
            pfVar3[2] = pfVar3[2] * 0.6;
            FUN_005e7f98(local_110,&local_280,0xa10980);
            if (0.707 < local_278 * 1.0 + local_280 * 0.0 + local_27c * 0.0) {
              dVar34 = (double)GetGroundZ(0x3fe0000000000000,lVar19,0);
              if ((double)(moby->pos).z < dVar34) {
                (moby->pos).z = (float)dVar34;
              }
              pfVar3[2] = 0.0;
              if ((SQRT(*pfVar3 * *pfVar3 + pfVar3[1] * pfVar3[1]) < g_FrameTime) ||
                 (iVar12 != 0)) {
                pfVar3[3] = 0.0;
                pfVar3[2] = 0.0;
                pfVar3[1] = 0.0;
                *pfVar3 = 0.0;
                moby->state = moby->state | 4;
                pMVar9 = g_CollOutput.pMoby;
                if (iVar12 != 0 && g_CollOutput.pMoby != (MobyInstance *)0x0) {
                  pfVar3[0x18] = (float)g_CollOutput.pMoby;
                  MB_PlatformWorldToLocal
                            (lVar11,pMVar9,lVar19,lVar11 + 0x40,uVar21 + 0x40,uVar21 + 0x50);
                }
              }
            }
            dVar32 = (double)g_CollOutput.normal.x;
            dVar24 = (double)g_CollOutput.normal.y;
            dVar23 = (double)g_CollOutput.normal.z;
            dVar34 = (double)cosf((moby->rotation).z);
            dVar37 = (double)FUN_005e8128((double)(moby->rotation).z);
            dVar22 = (double)(float)(dVar32 * dVar34 + (double)(float)(dVar24 * dVar37));
            dVar34 = (double)cosf((moby->rotation).z);
            dVar37 = (double)FUN_005e8128((double)(moby->rotation).z);
            dVar35 = (double)(moby->rotation).x;
            dVar34 = (double)FUN_005e8338((double)SQRT((float)(dVar22 * dVar22 +
                                                              (double)(float)(dVar23 * dVar23))),
                                          (double)(float)(dVar24 * dVar34 -
                                                         (double)(float)(dVar32 * dVar37)));
            uVar28 = 0x3faaceea00000000;
            dVar34 = (double)FUN_004d04e0(dVar35,-dVar34,0x3faaceea00000000);
            (moby->rotation).x = (float)dVar34;
            dVar34 = (double)(moby->rotation).y;
            uVar31 = FUN_005e8338(dVar23,dVar22);
            dVar34 = (double)FUN_004d04e0(dVar34,uVar31,uVar28);
            (moby->rotation).y = (float)dVar34;
          }
        }
      }
      else {
        if ((g_CollOutput.pMoby)->oClass != moby->oClass) {
          if ((g_CollOutput.pMoby == g_heroMobyPtr) ||
             (g_CollOutput.pMoby == (MobyInstance *)pfVar3[0xc])) goto LAB_002a2e4c;
          goto LAB_002a2e58;
        }
        g_CollOutput.normal.x = (moby->pos).x - ((g_CollOutput.pMoby)->pos).x;
        g_CollOutput.normal.y = (moby->pos).y - ((g_CollOutput.pMoby)->pos).y;
        g_CollOutput.normal.z = (moby->pos).z - ((g_CollOutput.pMoby)->pos).z;
        g_CollOutput.normal.w = (moby->pos).w;
        if (g_FrameTime * -9.8 <= pfVar3[2]) {
          (moby->pos).x = g_CollOutput.ip.x;
          (moby->pos).y = g_CollOutput.ip.y;
          (moby->pos).z = g_CollOutput.ip.z;
          (moby->pos).w = g_CollOutput.ip.w;
          FUN_005e7f98((double)(g_FrameTimeSq * 9.7),&local_290,0xa10980);
          (moby->pos).x = (moby->pos).x + local_290;
          (moby->pos).y = (moby->pos).y + local_28c;
          (moby->pos).z = (moby->pos).z + local_288;
          FastVecReflect(uVar21,uVar21,0xa10980);
          *pfVar3 = *pfVar3 * 0.4;
          pfVar3[1] = pfVar3[1] * 0.4;
          pfVar3[2] = pfVar3[2] * 0.4;
          FUN_005e7f98(local_110,&local_290,0xa10980);
          dVar32 = (double)g_CollOutput.normal.x;
          dVar24 = (double)g_CollOutput.normal.y;
          dVar23 = (double)g_CollOutput.normal.z;
          dVar34 = (double)cosf((moby->rotation).z);
          dVar37 = (double)FUN_005e8128((double)(moby->rotation).z);
          dVar22 = (double)(float)(dVar32 * dVar34 + (double)(float)(dVar24 * dVar37));
          dVar34 = (double)cosf((moby->rotation).z);
          dVar37 = (double)FUN_005e8128((double)(moby->rotation).z);
          dVar35 = (double)(moby->rotation).x;
          dVar34 = (double)FUN_005e8338((double)SQRT((float)(dVar22 * dVar22 +
                                                            (double)(float)(dVar23 * dVar23))),
                                        (double)(float)(dVar24 * dVar34 -
                                                       (double)(float)(dVar32 * dVar37)));
          uVar28 = 0x3faaceea00000000;
          dVar34 = (double)FUN_004d04e0(dVar35,-dVar34,0x3faaceea00000000);
          (moby->rotation).x = (float)dVar34;
          dVar34 = (double)(moby->rotation).y;
          uVar31 = FUN_005e8338(dVar23,dVar22);
          dVar34 = (double)FUN_004d04e0(dVar34,uVar31,uVar28);
          (moby->rotation).y = (float)dVar34;
        }
        else {
          moby->setByGroup = '\x01';
          (moby->pos).x = g_CollOutput.ip.x;
          (moby->pos).y = g_CollOutput.ip.y;
          (moby->pos).z = g_CollOutput.ip.z;
          (moby->pos).w = g_CollOutput.ip.w;
          FastVecReflect(local_300,uVar21,0xa10980);
          FUN_005e7f98((double)(float)((double)g_FrameTime * dVar42),local_300,local_300);
          FUN_005e7f98(local_110,local_2e0,0xa10980);
        }
      }
    }
  }
  else {
LAB_002a31a4:
    if ((bVar1 & 4) != 0) {
      dVar34 = (double)GetGroundZ(0x3fe0000000000000,lVar11 + 0x10,0);
      fVar46 = pfVar3[0x18];
      if (fVar46 == 0.0) {
        if (g_FrameTimeSq * 40.0 <= (float)((double)(moby->pos).z - dVar34)) {
          auVar43 = ZEXT416(0xffffffff);
          auVar44 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
          moby->state = '\x01';
          pfVar3[3] = 0.0;
          pfVar3[2] = 0.0;
          pfVar3[1] = 0.0;
          *pfVar3 = 0.0;
          auVar43 = loadVectorLeftIndexed(0x50,0x2a2374);
          auVar44 = vectorShiftLeftIntegerWord(auVar44,auVar44);
          auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar45 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar43 = vectorMultiplyAddFloatingPoint
                              (auVar45,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60
                               ,auVar44);
          auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
          auVar43 = vectorSplatHalfWord(auVar43,1);
          uVar5 = storeVectorElementHalfWordIndexed(auVar43,0x34,uVar21);
          *(undefined2 *)(pfVar3 + 0xd) = uVar5;
        }
        else {
          (moby->pos).z = (float)dVar34;
        }
      }
      else if ((*(char *)((int)fVar46 + 0x20) == -2) || (*(char *)((int)fVar46 + 0x20) == -3)) {
        moby->setByGroup = '\x01';
        pfVar3[0x18] = 0.0;
      }
      else {
        MB_PlatformGetDelta
                  (lVar11,fVar46,uVar21 + 0x40,uVar21 + 0x50,lVar11 + 0x10,lVar11 + 0x40);
      }
      dVar32 = (double)g_CollOutput.normal.x;
      dVar24 = (double)g_CollOutput.normal.y;
      dVar23 = (double)g_CollOutput.normal.z;
      dVar34 = (double)cosf((moby->rotation).z);
      dVar37 = (double)FUN_005e8128((double)(moby->rotation).z);
      dVar22 = (double)(float)(dVar32 * dVar34 + (double)(float)(dVar24 * dVar37));
      dVar34 = (double)cosf((moby->rotation).z);
      dVar37 = (double)FUN_005e8128((double)(moby->rotation).z);
      dVar35 = (double)(moby->rotation).x;
      dVar34 = (double)FUN_005e8338((double)SQRT((float)(dVar22 * dVar22 +
                                                        (double)(float)(dVar23 * dVar23))),
                                    (double)(float)(dVar24 * dVar34 -
                                                   (double)(float)(dVar32 * dVar37)));
      uVar28 = 0x3f91df46a0000000;
      dVar34 = (double)FUN_004d04e0(dVar35,-dVar34,0x3f91df46a0000000);
      (moby->rotation).x = (float)dVar34;
      dVar34 = (double)(moby->rotation).y;
      uVar31 = FUN_005e8338(dVar23,dVar22);
      dVar34 = (double)FUN_004d04e0(dVar34,uVar31,uVar28);
      (moby->rotation).y = (float)dVar34;
    }
  }
LAB_002a3378:
  iVar12 = FastDecTimerS16(uVar21 + 0x34);
  if ((iVar12 != 0) && (moby->state = moby->state | 2, moby->animationId != '\x01')) {
    local_100 = (longlong)(int)(animationSpeed * 10.5);
    MB_SetAnimation(lVar11,1,0,(int)(animationSpeed * 10.5));
  }
  iVar12 = MB_damage(lVar11,&DAT_00830000,0);
  pMVar9 = g_heroMobyPtr;
  fVar7 = g_heroPosition.z;
  bVar1 = moby->state;
  uVar17 = (ushort)bVar1;
  fVar46 = (moby->pos).x;
  fVar2 = (moby->pos).y;
  fVar4 = (moby->pos).z;
  if (((iVar12 != 0) && (*(int *)(iVar12 + 0x20) != 0)) &&
     (*(MOBY_OCLASSES *)(*(int *)(iVar12 + 0x20) + 0xa6) != moby->oClass)) {
    moby->setByGroup = '\x01';
  }
  moby->damage = -1;
  if ((bVar1 & 2) != 0) {
    if ((bVar1 & 4) == 0) {
      moby->setByGroup = '\x01';
    }
    else {
      fVar8 = (pMVar9->pos).y - fVar2;
      fVar6 = (pMVar9->pos).x - fVar46;
      iVar12 = MobyUpdateChainStart;
      if ((0.5 <= SQRT(fVar6 * fVar6 + fVar8 * fVar8)) || (0.25 <= ABS(fVar4 - fVar7))) {
        for (; iVar12 != 0; iVar12 = *(int *)(iVar12 + 0x28)) {
          uVar17 = (ushort)*(byte *)(iVar12 + 0x20);
          if (((*(byte *)(iVar12 + 0x20) < 0x80) &&
              (uVar17 = *(ushort *)(iVar12 + 0x34) & 0x1000, uVar17 != 0)) &&
             ((fVar6 = fVar2 - *(float *)(iVar12 + 0x14), fVar7 = fVar46 - *(float *)(iVar12 + 0x10)
              , (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6) < dVar42 &&
              (ABS((double)(*(float *)(iVar12 + 0x18) - fVar4)) < dVar42)))) {
            moby->setByGroup = '\x01';
            break;
          }
        }
      }
      else {
        moby->setByGroup = '\x01';
      }
    }
  }
  if (moby->setByGroup == '\0') {
    return;
  }
  dVar34 = (double)SQRT((fVar46 - GameCamera.posX) * (fVar46 - GameCamera.posX) +
                        (fVar2 - GameCamera.posY) * (fVar2 - GameCamera.posY));
  if (pfVar3[0x19] == 0.0) {
    uVar10 = CollMobySphere(dVar42,lVar11 + 0x10,uVar17,0x10,lVar11,0);
    uVar31.piece<0,4>() = (moby->pos).x;
    uVar31.piece<4,4>() = (moby->pos).y;
    uVar28.piece<0,4>() = (moby->pos).z;
    uVar28.piece<4,4>() = (moby->pos).w;
    MB_DamageMobyList
              (dVar40,0x3fd0000000000000,0x3ff8000000000000,lVar11,1,uVar31,uVar28,&g_CollMobyHits,
               uVar10,0,&DAT_00810001);
  }
  lVar19 = lVar11 + 0x10;
  dVar40 = (double)GetGroundZNoWater(lVar19);
  if (pfVar3[0x19] == 0.0) {
    if ((moby->pos).z <= (float)(dVar40 + dVar42)) {
      iVar12 = 0x96;
      local_104 = (float)dVar34;
      if (dVar34 < 10.0 != 0xffffffce) {
        local_104 = (float)dVar34;
        iVar12 = FastDoubleToInt((double)(float)(dVar34 * 15.0));
        if (iVar12 < 1) goto LAB_002a3c30;
      }
      iVar20 = 0;
      dVar42 = 12.0;
      dVar38 = -0.5;
      dVar41 = 0.5;
      dVar40 = 4.0;
      dVar34 = 0.785398006439209;
      dVar37 = 8.0;
      dVar26 = 180.5;
      dVar25 = 200000.0;
      dVar33 = 300000.0;
      local_118 = 14.0;
      local_120 = 22.0;
      dVar36 = 240.5;
      dVar22 = 50000.0;
      dVar23 = 100000.0;
      uVar31 = 0x41024f8000000000;
      dVar24 = 30.5;
      dVar32 = 45.5;
      dVar39 = 0.25;
      dVar35 = 300.5;
      do {
        lVar11 = MB_randInt(4);
        dVar30 = (double)g_FrameTime;
        local_130[3] = 0.0;
        local_130[0] = (float)(dVar30 * local_118);
        local_130[1] = (float)(dVar30 * local_120);
        local_250 = 0.0;
        local_130[2] = (float)(dVar30 * dVar42);
        local_24c = 0.0;
        local_248 = 0.0;
        local_244 = 0;
        dVar30 = (double)MB_randRangeFloat
                                   ((float)(dVar30 * dVar38),(float)(dVar30 * dVar41));
        local_250 = (float)dVar30;
        dVar30 = (double)MB_randRangeFloat
                                   ((float)((double)g_FrameTime * dVar38),
                                    (float)((double)g_FrameTime * dVar41));
        local_24c = (float)dVar30;
        dVar30 = (double)MB_randRangeFloat
                                   ((float)((double)g_FrameTime * dVar40),
                                    *(float *)((int)local_130 + (int)(lVar11 << 2)));
        iVar18 = (int)lVar11;
        local_248 = (float)dVar30;
        dVar30 = dVar39;
        if (iVar18 == 1) {
          dVar30 = dVar41;
        }
        local_f0 = (float)dVar35;
        dVar35 = (double)MB_randRangeFloat(local_108,(float)dVar30);
        dVar30 = (double)MB_randRot();
        dVar27 = (double)cosf((float)dVar30);
        local_240 = (float)(dVar27 * dVar35);
        local_ec = (float)dVar30;
        dVar30 = (double)FUN_005e8128(dVar30);
        local_240 = local_240 + (moby->pos).x;
        local_23c = (float)(dVar30 * dVar35 + (double)(moby->pos).y);
        local_238 = (moby->pos).z;
        dVar27 = (double)local_238;
        dVar30 = (double)cosf((float)dVar34);
        local_238 = -(float)(dVar35 * dVar30 - dVar27);
        local_248 = -(float)((double)(float)((double)g_FrameTime * dVar35) * dVar37 -
                            (double)local_248);
        dVar35 = (double)local_f0;
        dVar30 = (double)local_ec;
        if (iVar18 < 2) {
          if (-1 < iVar18) {
            if (iVar18 < 1) {
              uVar28 = MB_randRangeFloat((float)dVar25,(float)dVar33);
              iVar18 = (int)((double)animationSpeed * dVar36);
              local_100 = (longlong)iVar18;
              MB_randRange((int)((double)animationSpeed * dVar26),iVar18);
              SpawnPart_16(uVar28,&local_240,&local_250,0x1f101820,&DAT_00101010);
            }
            else {
              MB_randRangeFloat((float)dVar22,(float)dVar23);
              local_100 = (longlong)(int)((double)animationSpeed * dVar26);
              SpawnPart_16(&local_240,&local_250,0x3f081020,0xf081020);
            }
          }
        }
        else if (iVar18 < 3) {
          lVar11 = MB_randInt(100);
          iVar18 = (int)((double)animationSpeed * dVar32);
          local_100 = (longlong)iVar18;
          MB_randRange((int)((double)animationSpeed * dVar24),iVar18);
          SpawnPart_16
                    (uVar31,&local_240,&local_250,
                     (lVar11 + -0x28 >> 0x3f & 0x30b09880U) + 0x2f486078,0xf000020);
        }
        else if (iVar18 < 4) {
          local_f0 = (float)dVar39;
          dVar27 = local_110;
          dVar39 = (double)MB_randRangeFloat((float)dVar39,(float)local_110);
          uVar28 = 0x7f000000;
          TweenColor((float)dVar39,0x7f000000,0x7f182030);
          dVar39 = (double)MB_randRangeFloat((float)dVar41,(float)dVar27);
          uVar10 = 0;
          TweenColor((float)dVar39,0,0x5f5f5f);
          dVar39 = (double)MB_randRangeFloat(local_108,(float)dVar27);
          dVar27 = (double)(float)(dVar39 * (double)g_FrameTime);
          dVar39 = (double)MB_randRot();
          MB_SphericalToVector((float)dVar27,(float)dVar30,(float)dVar39,&local_250);
          uVar29 = MB_randRangeFloat((float)dVar25,(float)dVar33);
          iVar18 = (int)((double)animationSpeed * dVar35);
          local_100 = (longlong)iVar18;
          MB_randRange((int)((double)animationSpeed * dVar36),iVar18);
          SpawnPart_16(uVar29,&local_240,&local_250,uVar28,uVar10);
          dVar39 = (double)local_f0;
        }
        iVar20 = iVar20 + 1;
      } while (iVar20 < iVar12);
    }
    else {
      local_104 = (float)dVar34;
      MB_SpawnExplosionSparks
                (local_110,0x402a000000000000,lVar11,lVar19,&DAT_002a2374,0xffffffffffffffff);
    }
  }
  else {
    (moby->pos).z = (float)((double)(moby->pos).z + local_110);
    dVar40 = local_110;
    fVar46 = CollWaterHeight(&((Vec4 *)lVar19)->x,afStack_270);
    dVar37 = (double)fVar46;
    iVar12 = 0;
    (moby->pos).z = (float)((double)(moby->pos).z - dVar40);
    dVar38 = -1.0;
    dVar35 = -0.5;
    dVar32 = 4.0;
    dVar24 = 8.0;
    dVar23 = 0.05000000074505806;
    dVar22 = 0.10000000149011612;
    dVar40 = 210000.0;
    do {
      local_104 = (float)dVar34;
      local_260 = 0.0;
      local_25c = 0.0;
      local_258 = 0.0;
      local_254 = 0;
      dVar26 = local_110;
      dVar25 = (double)MB_randRangeFloat((float)dVar38,(float)local_110);
      local_260 = (float)dVar25;
      dVar26 = (double)MB_randRangeFloat((float)dVar38,(float)dVar26);
      local_25c = (float)dVar26;
      dVar26 = (double)MB_randRangeFloat((float)dVar35,(float)dVar42);
      local_258 = (float)dVar26;
      MB_randRangeFloat
                ((float)((double)g_FrameTime * dVar32),
                 (float)((double)g_FrameTime * dVar24));
      FUN_005e7f98(&local_260,&local_260);
      dVar26 = (double)MB_randRangeFloat((float)dVar23,(float)dVar22);
      SpawnPart_34((double)(float)(dVar26 * dVar40),dVar37,(Vec4 *)lVar19,&local_260);
      iVar12 = iVar12 + 1;
    } while (iVar12 < 0x96);
  }
LAB_002a3c30:
  dVar42 = (double)local_104;
  moby->setByGroup = '\0';
  PlayMobySound(0,0,moby);
  auVar43 = ZEXT416(0xffffffff);
  auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
  auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar43 = vectorShiftLeftIntegerWord(auVar43,auVar43);
  fVar46 = 0.35;
  if (dVar42 - 20.0 < 0.0) {
    fVar46 = (float)(dVar42 * 0.017500000074505806);
  }
  GameCamera.shake.strength = 0.4 - fVar46;
  auVar45 = loadVectorLeftIndexed(0xc0,0x2a2374);
  auVar45 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar43 = vectorMultiplyAddFloatingPoint
                      (auVar44,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,auVar43
                      );
  auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
  auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
  GameCamera.shake.time =
       storeVectorElementWordIndexed
                 (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x168,0x9513c0);
  FUN_003fda38(&uStack_180,lVar19,0,0);
  MB_DeleteMobyFromDynamicGroup(moby,&DAT_00a51ee8);
  DeleteMoby(moby);
  return;
}


