// game/update/moby153.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x292d88-0x295968
#include <math.h>
#include "game/update/moby153.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/lights.h"
#include "game/main.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/pause.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby1034.h"
#include "game/update/moby112.h"
#include "game/update/moby121.h"
#include "game/update/moby122.h"
#include "game/update/moby1262.h"
#include "game/update/moby639.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"
#include "sdk/xUnk5.h"

// 0x0292d88 (0x424 bytes)
MobyInstance *
FUN_00292d88(double param_1,double param_2,double param_3,double param_4,double param_5,f32 param_6,
            f32 *param_7,undefined8 param_8,undefined8 param_9,MobyInstance *param_10)

{
  float fVar1;
  f32 fVar2;
  f32 *pfVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  float fVar6;
  MobyInstance *pMoby;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  byte in_cr6;
  undefined8 in_LR;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> local_60;
  
  pMoby = CreateMoby(GOLD_DEVASTATOR_MISSILE);
  if (pMoby != (MobyInstance *)0x0) {
    pfVar3 = (f32 *)pMoby->pVar;
    uVar9 = ZEXT48(pfVar3);
    pMoby->updateDistance = -1;
    pMoby->drawDistance = 0xff;
    pMoby->enabled = '\x01';
    pMoby->state = '\0';
    (pMoby->rotation).z = (float)param_4;
    (pMoby->rotation).y = (float)param_5;
    pfVar3[4] = param_6;
    (pMoby->pos).x = *param_7;
    (pMoby->pos).y = param_7[1];
    (pMoby->pos).z = param_7[2];
    (pMoby->pos).w = param_7[3];
    pfVar3[9] = 0.0;
    pfVar3[10] = 0.0;
    fVar6 = g_FrameTime;
    fVar1 = g_FrameTime * 20.0;
    pfVar3[6] = (f32)param_10;
    pfVar3[0xe] = 1.4013e-45;
    pfVar3[0x12] = 70.0;
    pfVar3[0xd] = fVar1;
    pfVar3[8] = fVar1 * 0.33333334;
    if (param_10 != (MobyInstance *)0x0) {
      uVar7 = MB_GetPvarsIfMobyHasThem(param_10);
      iVar8 = (int)uVar7;
      fVar6 = g_FrameTime;
      if (iVar8 != 0) {
        *(ushort *)(iVar8 + 0x1e) = *(ushort *)(iVar8 + 0x1e) | 0x80;
        fVar6 = g_FrameTime;
        auVar12 = loadVectorLeftIndexed(0xfffffffffffff414,0x720000);
        auVar10 = loadVectorLeftIndexed(0x34,uVar9);
        auVar11 = loadVectorRightIndexed(0x44,uVar9);
        auVar10 = auVar10 | auVar11;
        if (*(char *)(iVar8 + 0xb) != '\0') {
          pfVar3[0xe] = 0.0;
        }
        auVar11 = ZEXT416(0xfffffff8);
        auVar13 = loadVectorLeftIndexed(0xc,uVar7);
        auVar11 = vectorShiftRightWord
                            (auVar13,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
        if (*(char *)(iVar8 + 0xc) != '\0') {
          auVar11 = vectorConvertFromUnsignedFixedPointWord(auVar11,0);
          auVar10 = ZEXT416(0xffffffff);
          auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
          auVar10 = vectorShiftLeftIntegerWord(auVar10,auVar10);
          auVar10 = vectorMultiplyAddFloatingPoint(auVar11,auVar12,auVar10);
          auVar11 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar5 = storeVectorElementWordIndexed
                            (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,0x34,
                             uVar9);
          *(undefined4 *)((uint)(pfVar3 + 0xd) & 0xfffffffc) = uVar5;
        }
        auVar11 = ZEXT416(0xffffffff);
        auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
        auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar13 = vectorShiftLeftIntegerWord(auVar11,auVar11);
        auVar11 = loadVectorLeftIndexed(in_LR,0x292d68);
        auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar11 = vectorMultiplyAddFloatingPoint
                            (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                             auVar13);
        auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
        vectorCompareGreaterThanFloatingPoint
                  (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                   auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
        if (!(bool)(in_cr6 >> 1 & 1)) {
          pfVar3[0x12] = 140.0;
        }
      }
    }
    pfVar3[0xb] = (float)param_1;
    auVar10 = ZEXT416(0xffffffff);
    auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    pfVar3[0xc] = (float)param_2;
    auVar12 = vectorShiftLeftIntegerWord(auVar10,auVar10);
    auVar10 = loadVectorLeftIndexed(8,0x292d68);
    auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar10 = vectorMultiplyAddFloatingPoint
                        (auVar11,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                         auVar12);
    auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
    auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar5 = storeVectorElementWordIndexed
                      (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0x14,uVar9);
    *(undefined4 *)((uint)(pfVar3 + 5) & 0xfffffffc) = uVar5;
    if (param_10 != (MobyInstance *)0x0) {
      *pfVar3 = (param_10->pos).x;
      pfVar3[1] = (param_10->pos).y;
      fVar1 = (param_10->pos).z;
      pfVar3[2] = fVar1;
      fVar2 = (param_10->pos).w;
      pfVar3[7] = (float)param_3;
      pfVar3[3] = fVar2;
      pfVar3[2] = (float)((double)fVar1 + param_3);
    }
    if (SQRT(DAT_00969e28 * DAT_00969e28 + DAT_00969e20 * DAT_00969e20 + DAT_00969e24 * DAT_00969e24
            ) <= fVar6 * 0.1) {
      auVar10 = ZEXT416(0xffffffff);
      auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      auVar12 = vectorShiftLeftIntegerWord(auVar10,auVar10);
      auVar10 = loadVectorLeftIndexed(0x14,0x292d68);
      auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar10 = vectorMultiplyAddFloatingPoint
                          (auVar11,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                           auVar12);
      auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
      auVar11 = vectorSplatHalfWord(auVar10,1);
      uVar4 = storeVectorElementHalfWordIndexed(auVar11,0x3e,uVar9);
      *(undefined2 *)((int)pfVar3 + 0x3e) = uVar4;
    }
    else {
      auVar10 = ZEXT416(0xffffffff);
      auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      auVar12 = vectorShiftLeftIntegerWord(auVar10,auVar10);
      auVar10 = loadVectorLeftIndexed(0x10,0x292d68);
      auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar10 = vectorMultiplyAddFloatingPoint
                          (auVar11,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                           auVar12);
      auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
      auVar11 = vectorSplatHalfWord(auVar10,1);
      uVar4 = storeVectorElementHalfWordIndexed(auVar11,0x3e,uVar9);
      *(undefined2 *)((int)pfVar3 + 0x3e) = uVar4;
    }
    auVar10 = vectorSplatHalfWord(auVar10,1);
    uVar4 = storeVectorElementHalfWordIndexed(auVar10,0x3c,uVar9);
    *(undefined2 *)(pfVar3 + 0xf) = uVar4;
    iVar8 = CollLine(local_60,param_7,0,g_heroMobyPtr,0);
    if (iVar8 != 0) {
      pMoby->setByGroup = '\x01';
      (pMoby->pos).x = g_CollOutput.ip.x;
      (pMoby->pos).y = g_CollOutput.ip.y;
      (pMoby->pos).z = g_CollOutput.ip.z;
      (pMoby->pos).w = g_CollOutput.ip.w;
    }
    UpdateMobyTransform(pMoby);
    MB_AddMobyToDynamicGroup(pMoby,&g_mobyIdListCount,0x1f);
    pMoby->scale = pMoby->scale * 2.0;
  }
  return pMoby;
}


// 0x02931b8 (0x5c bytes)
double FUN_002931b8(int param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = 0.0;
  if (0 < param_1) {
    dVar2 = dVar1;
    do {
      param_1 = param_1 + -1;
      dVar2 = (double)(float)((double)(float)((double)g_FrameTime * 20.0 - dVar2) *
                              (double)(DAT_0071f40c * 0.1) + dVar2);
      dVar1 = (double)(float)(dVar1 + dVar2);
    } while (0 < param_1);
  }
  return dVar1;
}


// 0x0293248 (0x940 bytes)
// inlined: FastAtan2 @0x29347c, FastAtan2 @0x29362c, FastAtan2 @0x29380c
void M153_00293248(int param_1,f32 *param_2,MobyInstance *param_3)

{
  longlong lVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  f32 fVar11;
  float fVar12;
  MobyInstance *moby;
  ulonglong *puVar13;
  int iVar14;
  float fVar15;
  ulonglong uVar16;
  int iVar18;
  longlong lVar17;
  int iVar19;
  longlong lVar20;
  float *pfVar22;
  longlong lVar21;
  ulonglong uVar23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  int iVar24;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f22;
  double dVar30;
  ulonglong in_f23;
  ulonglong in_f24;
  double dVar31;
  ulonglong in_f25;
  double dVar32;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar33;
  double dVar34;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar35;
  ulonglong in_f30;
  double dVar36;
  ulonglong in_f31;
  double dVar37;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar1 = uVar16 - 0x1b0;
  puVar13 = (ulonglong *)lVar1;
  *puVar13 = uVar16;
  puVar13[0x38] = in_LR;
  puVar13[0x2c] = in_f22;
  puVar13[0x2d] = in_f23;
  puVar13[0x2e] = in_f24;
  puVar13[0x2f] = in_f25;
  puVar13[0x30] = in_f26;
  puVar13[0x31] = in_f27;
  puVar13[0x32] = in_f28;
  puVar13[0x33] = in_f29;
  puVar13[0x34] = in_f30;
  puVar13[0x35] = in_f31;
  puVar13[0x26] = unaff_r26;
  dVar36 = (double)*(float *)(param_1 + 0x48);
  puVar13[0x2b] = unaff_r31;
  puVar13[0x2a] = unaff_r30;
  puVar13[0x27] = unaff_r27;
  puVar13[0x29] = unaff_r29;
  moby = DAT_00a49344;
  dVar37 = 10000.0;
  bVar2 = DAT_00a49344 != (MobyInstance *)0x0;
  puVar13[0x28] = unaff_r28;
  puVar13[0x25] = unaff_r25;
  puVar13[0x24] = unaff_r24;
  dVar35 = (double)*(float *)(param_1 + 0x44);
  if (bVar2) {
    iVar24 = 0;
    do {
      if ((moby->state < 0x80) && (moby != param_3)) {
        fVar3 = (moby->pos).x;
        *(float *)(puVar13 + 0xe) = fVar3;
        fVar4 = (moby->pos).y;
        fVar5 = fVar4 - *(float *)(param_1 + 0x14);
        fVar3 = fVar3 - *(float *)(param_1 + 0x10);
        *(float *)((int)puVar13 + 0x74) = fVar4;
        fVar4 = (moby->pos).z;
        fVar6 = fVar4 - *(float *)(param_1 + 0x18);
        *(float *)(puVar13 + 0xf) = fVar4;
        *(f32 *)((int)puVar13 + 0x7c) = (moby->pos).w;
        if (SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar5 * fVar5) <= 40.0) {
          iVar18 = MB_GetPvarsIfMobyHasThem(moby);
          if (((iVar18 == 0) || (iVar18 < 0x100001)) || (0x3fffff < iVar18)) {
            iVar18 = 0;
            fVar3 = 0.5;
          }
          else {
            fVar3 = *(float *)(iVar18 + 0x10);
          }
          fVar3 = *(float *)(puVar13 + 0xf) + fVar3;
          *(float *)(puVar13 + 0xf) = fVar3;
          if ((moby->pClass != (MobyClass *)0x0) && ((short)moby->pClass->mode_bits == 5)) {
            fVar4 = *(float *)(puVar13 + 0xe);
            fVar5 = *(float *)(param_1 + 0x10);
            fVar6 = *(float *)((int)puVar13 + 0x74);
            fVar7 = *(float *)(param_1 + 0x14);
            fVar10 = fVar4 - fVar5;
            fVar8 = fVar6 - fVar7;
            fVar9 = ABS(fVar10);
            fVar12 = ABS(fVar8);
            *(float *)(puVar13 + 0x15) = fVar10;
            *(float *)((int)puVar13 + 0xac) = fVar8;
            *(float *)(puVar13 + 0x16) = fVar9 - fVar12;
            dVar31 = 0.0;
            uVar23 = (ulonglong)(*(uint *)(puVar13 + 0x15) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)(puVar13 + 0x16) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)((int)puVar13 + 0xac) >> 0x1d) & 4;
            fVar10 = ABS(*(float *)(puVar13 + 0x15));
            if (*(float *)(puVar13 + 0x16) - 0.0 < 0.0) {
              fVar10 = fVar12;
            }
            fVar12 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
            fVar8 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
            fVar15 = ABS(*(float *)((int)puVar13 + 0xac));
            if (*(float *)(puVar13 + 0x16) - 0.0 < 0.0) {
              fVar15 = fVar9;
            }
            dVar33 = 0.7853981852531433;
            dVar29 = dVar31;
            if (0.0 < fVar10) {
              lVar17 = uVar16 - 0x1a0;
              lVar20 = uVar16 - 0xbc;
              lVar21 = uVar16 - 0xac;
              lVar25 = 2;
              fVar10 = (fVar15 - fVar10) / (fVar15 + fVar10);
              fVar9 = fVar10 * fVar10;
              *(float *)(puVar13 + 0x20) = fVar10;
              *(float *)(puVar13 + 0x1f) = fVar10;
              *(float *)((int)puVar13 + 0xfc) = fVar10;
              *(float *)((int)puVar13 + 0xf4) = fVar10;
              fVar10 = fVar9 * fVar9;
              *(float *)(puVar13 + 0x1f) = *(float *)(puVar13 + 0x1f) * fVar9;
              *(float *)((int)puVar13 + 0xfc) = *(float *)((int)puVar13 + 0xfc) * fVar10;
              *(float *)(puVar13 + 0x20) = *(float *)(puVar13 + 0x20) * fVar10 * fVar9;
              do {
                *(float *)((int)lVar17 + 0xf4) = *(float *)((int)lVar17 + 0xe4) * fVar10 * fVar10;
                iVar19 = (int)lVar20;
                lVar17 = lVar17 + 8;
                lVar20 = lVar20 + 8;
                *(float *)((int)lVar21 + 4) = *(float *)(iVar19 + 4) * fVar10 * fVar10;
                lVar21 = lVar21 + 8;
                lVar25 = lVar25 + -1;
              } while (lVar25 != 0);
              lVar25 = 4;
              lVar21 = uVar16 - 0xbc;
              pfVar22 = (float *)&DAT_007358e0;
              lVar17 = lVar1;
              lVar20 = lVar21;
              do {
                fVar10 = *pfVar22;
                fVar9 = pfVar22[1];
                pfVar22 = pfVar22 + 2;
                *(float *)((int)lVar17 + 0xf4) = *(float *)((int)lVar17 + 0xf4) * fVar10;
                lVar17 = lVar17 + 8;
                *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar9;
                lVar20 = lVar20 + 8;
                lVar25 = lVar25 + -1;
              } while (lVar25 != 0);
              lVar20 = 2;
              lVar17 = lVar1;
              do {
                iVar19 = (int)lVar17;
                lVar17 = lVar17 + 0x10;
                iVar14 = (int)lVar21;
                lVar21 = lVar21 + 0x10;
                dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar19 + 0xf4)) +
                                  *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                                 *(float *)(iVar14 + 0xc));
                lVar20 = lVar20 + -1;
              } while (lVar20 != 0);
              dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar12 + fVar8);
            }
            fVar7 = fVar7 - fVar6;
            fVar5 = fVar5 - fVar4;
            fVar5 = fVar5 * fVar5 + fVar7 * fVar7;
            fVar4 = *(float *)(param_1 + 0x18);
            fVar7 = fVar3 - fVar4;
            fVar6 = SQRT(fVar5);
            *(float *)(puVar13 + 0x14) = fVar7;
            fVar7 = ABS(fVar7);
            fVar10 = ABS(fVar6);
            *(float *)((int)puVar13 + 0x9c) = fVar6;
            *(float *)((int)puVar13 + 0xa4) = fVar10 - fVar7;
            uVar23 = (ulonglong)(*(uint *)((int)puVar13 + 0x9c) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar13 + 0xa4) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar13 + 0x14) >> 0x1d) & 4;
            fVar6 = ABS(*(float *)((int)puVar13 + 0x9c));
            if (*(float *)((int)puVar13 + 0xa4) - 0.0 < 0.0) {
              fVar6 = fVar7;
            }
            fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
            fVar8 = ABS(*(float *)(puVar13 + 0x14));
            if (*(float *)((int)puVar13 + 0xa4) - 0.0 < 0.0) {
              fVar8 = fVar10;
            }
            fVar10 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
            dVar28 = dVar31;
            if (0.0 < fVar6) {
              lVar17 = uVar16 - 0x1a0;
              lVar20 = uVar16 - 0xdc;
              lVar21 = uVar16 - 0xcc;
              lVar25 = 2;
              fVar6 = (fVar8 - fVar6) / (fVar8 + fVar6);
              fVar8 = fVar6 * fVar6;
              *(float *)(puVar13 + 0x1c) = fVar6;
              *(float *)(puVar13 + 0x1b) = fVar6;
              *(float *)((int)puVar13 + 0xdc) = fVar6;
              *(float *)((int)puVar13 + 0xd4) = fVar6;
              fVar6 = fVar8 * fVar8;
              *(float *)(puVar13 + 0x1b) = *(float *)(puVar13 + 0x1b) * fVar8;
              *(float *)((int)puVar13 + 0xdc) = *(float *)((int)puVar13 + 0xdc) * fVar6;
              *(float *)(puVar13 + 0x1c) = *(float *)(puVar13 + 0x1c) * fVar6 * fVar8;
              do {
                *(float *)((int)lVar17 + 0xd4) = *(float *)((int)lVar17 + 0xc4) * fVar6 * fVar6;
                iVar19 = (int)lVar20;
                lVar17 = lVar17 + 8;
                lVar20 = lVar20 + 8;
                *(float *)((int)lVar21 + 4) = *(float *)(iVar19 + 4) * fVar6 * fVar6;
                lVar21 = lVar21 + 8;
                lVar25 = lVar25 + -1;
              } while (lVar25 != 0);
              lVar25 = 4;
              lVar21 = uVar16 - 0xdc;
              pfVar22 = (float *)&DAT_007358e0;
              lVar17 = lVar1;
              lVar20 = lVar21;
              do {
                fVar6 = *pfVar22;
                fVar8 = pfVar22[1];
                pfVar22 = pfVar22 + 2;
                *(float *)((int)lVar17 + 0xd4) = *(float *)((int)lVar17 + 0xd4) * fVar6;
                lVar17 = lVar17 + 8;
                *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar8;
                lVar20 = lVar20 + 8;
                lVar25 = lVar25 + -1;
              } while (lVar25 != 0);
              lVar20 = 2;
              lVar17 = lVar1;
              do {
                iVar19 = (int)lVar17;
                lVar17 = lVar17 + 0x10;
                iVar14 = (int)lVar21;
                lVar21 = lVar21 + 0x10;
                dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar19 + 0xd4)) +
                                  *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                                 *(float *)(iVar14 + 0xc));
                lVar20 = lVar20 + -1;
              } while (lVar20 != 0);
              dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar7 + fVar10);
            }
            fVar4 = fVar4 - fVar3;
            dVar32 = (double)SQRT(fVar4 * fVar4 + fVar5);
            if (dVar32 < 2.5) {
              fVar4 = (moby->pos).x - g_heroPosition.x;
              fVar5 = (moby->pos).y - g_heroPosition.y;
              fVar3 = (g_heroMobyPtr->rotation).z;
              fVar7 = ABS(fVar4);
              fVar6 = ABS(fVar5);
              *(float *)(puVar13 + 0x12) = fVar4;
              *(float *)((int)puVar13 + 0x94) = fVar5;
              *(float *)(puVar13 + 0x13) = fVar7 - fVar6;
              uVar23 = (ulonglong)(*(uint *)(puVar13 + 0x12) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)(puVar13 + 0x13) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)((int)puVar13 + 0x94) >> 0x1d) & 4;
              fVar4 = ABS(*(float *)(puVar13 + 0x12));
              if (*(float *)(puVar13 + 0x13) - 0.0 < 0.0) {
                fVar4 = fVar6;
              }
              fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
              fVar6 = ABS(*(float *)((int)puVar13 + 0x94));
              if (*(float *)(puVar13 + 0x13) - 0.0 < 0.0) {
                fVar6 = fVar7;
              }
              fVar7 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
              dVar26 = dVar31;
              if (0.0 < fVar4) {
                lVar17 = uVar16 - 0x1a0;
                lVar20 = uVar16 - 0xfc;
                lVar21 = uVar16 - 0xec;
                lVar25 = 2;
                fVar4 = (fVar6 - fVar4) / (fVar6 + fVar4);
                fVar6 = fVar4 * fVar4;
                *(float *)(puVar13 + 0x18) = fVar4;
                *(float *)(puVar13 + 0x17) = fVar4;
                *(float *)((int)puVar13 + 0xbc) = fVar4;
                *(float *)((int)puVar13 + 0xb4) = fVar4;
                fVar4 = fVar6 * fVar6;
                *(float *)(puVar13 + 0x17) = *(float *)(puVar13 + 0x17) * fVar6;
                *(float *)((int)puVar13 + 0xbc) = *(float *)((int)puVar13 + 0xbc) * fVar4;
                *(float *)(puVar13 + 0x18) = *(float *)(puVar13 + 0x18) * fVar4 * fVar6;
                do {
                  *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xa4) * fVar4 * fVar4;
                  iVar19 = (int)lVar20;
                  lVar17 = lVar17 + 8;
                  lVar20 = lVar20 + 8;
                  *(float *)((int)lVar21 + 4) = *(float *)(iVar19 + 4) * fVar4 * fVar4;
                  lVar21 = lVar21 + 8;
                  lVar25 = lVar25 + -1;
                } while (lVar25 != 0);
                lVar25 = 4;
                lVar21 = uVar16 - 0xfc;
                pfVar22 = (float *)&DAT_007358e0;
                lVar17 = lVar1;
                lVar20 = lVar21;
                do {
                  fVar4 = *pfVar22;
                  fVar6 = pfVar22[1];
                  pfVar22 = pfVar22 + 2;
                  *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xb4) * fVar4;
                  lVar17 = lVar17 + 8;
                  *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
                  lVar20 = lVar20 + 8;
                  lVar25 = lVar25 + -1;
                } while (lVar25 != 0);
                lVar20 = 2;
                lVar17 = lVar1;
                do {
                  iVar19 = (int)lVar17;
                  lVar17 = lVar17 + 0x10;
                  iVar14 = (int)lVar21;
                  lVar21 = lVar21 + 0x10;
                  dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar19 + 0xb4)) +
                                    *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                                   *(float *)(iVar14 + 0xc));
                  lVar20 = lVar20 + -1;
                } while (lVar20 != 0);
                dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar5 + fVar7);
              }
              dVar26 = (double)FastSubRots(fVar3,(float)dVar26);
              if ((dVar26 < 1.0471975803375244) && (ABS(dVar28) < dVar33)) {
                return;
              }
            }
            if (dVar32 <= dVar37) {
              dVar26 = (double)FastIntToDouble(g_goldWeaponsArray.devastator);
              dVar34 = 0.5;
              dVar30 = 0.6981316804885864;
              MB_SphericalToVector
                        ((float)dVar32,(float)dVar36,(float)((double)DAT_00969fc4 * 0.5 + dVar35),
                         (float *)(puVar13 + 0x10));
              fVar3 = *(float *)((int)puVar13 + 0x84) + *(float *)(param_1 + 0x14);
              fVar4 = *(float *)(puVar13 + 0x10) + *(float *)(param_1 + 0x10);
              fVar7 = *(float *)(puVar13 + 0x11) + *(float *)(param_1 + 0x18);
              fVar5 = fVar3 - *(float *)((int)puVar13 + 0x74);
              fVar6 = fVar4 - *(float *)(puVar13 + 0xe);
              *(float *)(puVar13 + 0x10) = fVar4;
              *(float *)((int)puVar13 + 0x84) = fVar3;
              fVar3 = fVar7 - *(float *)(puVar13 + 0xf);
              *(float *)(puVar13 + 0x11) = fVar7;
              dVar27 = (double)(SQRT(fVar3 * fVar3 + fVar6 * fVar6 + fVar5 * fVar5) /
                               (float)(dVar32 * 2.0));
              dVar33 = dVar27;
              if (dVar27 - dVar31 < 0.0) {
                dVar33 = ABS(dVar27);
              }
              fVar3 = 1.0;
              if (dVar27 - dVar31 < 0.0) {
                fVar3 = -1.0;
              }
              dVar27 = (double)(float)(1.0 - dVar33);
              if ((double)(float)(1.0 - dVar33) - dVar31 < 0.0) {
                dVar27 = dVar31;
              }
              if (((float)(dVar26 * dVar30 + 1.5707963705062866) <
                   -(((float)((double)(float)(dVar33 * dVar33) * dVar33) * DAT_007358cc +
                     (float)((double)(float)(dVar33 * dVar33) * (double)DAT_007358c8 +
                            (double)(float)(dVar33 * (double)DAT_007358c4 + (double)DAT_007358c0)))
                     * (float)SQRT(dVar27) - 1.5707964) * fVar3 * 2.0) && (iVar18 != 0)) {
                FastIntToDouble((ulonglong)*(byte *)(iVar18 + 10) << 3);
              }
              iVar19 = CollLine(0x951500,uVar16 - 0x140,6,param_1,0);
              if (iVar19 == 0) {
                dVar35 = -dVar28;
                iVar19 = MB_FindMobyByVarId(moby);
                dVar36 = dVar29;
                dVar37 = dVar32;
                if (iVar19 == 0) {
                  param_2[6] = (f32)moby;
                  if (iVar18 != 0) {
                    dVar34 = (double)*(float *)(iVar18 + 0x10);
                  }
                  param_2[0xb] = (float)dVar29;
                  param_2[0xc] = (float)dVar35;
                  param_2[9] = 0.0;
                  param_2[10] = 0.0;
                  param_2[8] = 0.0;
                  param_2[0xe] = 1.4013e-45;
                  *param_2 = (moby->pos).x;
                  param_2[1] = (moby->pos).y;
                  param_2[2] = (moby->pos).z;
                  fVar11 = (moby->pos).w;
                  param_2[7] = (float)dVar34;
                  param_2[3] = fVar11;
                }
              }
            }
          }
        }
      }
      moby = *(MobyInstance **)((int)&DAT_00a49348 + iVar24);
      iVar24 = iVar24 + 4;
    } while (moby != (MobyInstance *)0x0);
  }
  return;
}


// 0x0293c48 (0x1d20 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 153 */

void UpdateMoby_153(MobyInstance *moby)

{
  undefined1 uVar1;
  float *pfVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar11;
  undefined8 uVar10;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined8 uVar28;
  double dVar29;
  double dVar30;
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
  undefined8 uVar41;
  double dVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  GPiece<16> local_4f0;
  GPiece<16> local_4e0;
  float local_4d0;
  float local_4cc;
  float local_4c8;
  float local_4c0;
  float local_4bc;
  float local_4b8;
  GPiece<16> local_4b0;
  float local_4a0;
  float local_49c;
  float local_498;
  GPiece<16> local_490;
  GPiece<16> local_480;
  GPiece<16> local_470;
  float local_460;
  float local_45c;
  float local_458;
  GPiece<16> auStack_450;
  GPiece<16> local_440;
  float local_430 [4];
  GPiece<16> auStack_420;
  GPiece<16> local_410;
  float local_400;
  float local_3fc;
  float local_3f8;
  float local_3f0;
  float local_3ec;
  float local_3e8;
  undefined4 local_3e4;
  float local_3e0;
  float local_3dc;
  float local_3d8;
  float local_3d0;
  float local_3cc;
  float local_3c8;
  GPiece<8> local_3c0;
  undefined4 local_3b8;
  undefined4 local_3b4;
  MobyInstance *local_3b0;
  undefined *local_3ac;
  undefined1 local_3a8;
  undefined1 local_3a7;
  MOBY_OCLASSES local_3a6;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined4 local_390;
  float local_38c;
  float local_388;
  undefined4 local_384;
  float local_380;
  undefined4 local_37c;
  float local_378;
  undefined4 local_374;
  float local_370;
  float local_36c;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_354;
  GPiece<64> auStack_350;
  GPiece<64> auStack_310;
  GPiece<64> auStack_2d0;
  float afStack_290 [16];
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
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
  int local_1b0 [24];
  longlong local_150;
  float local_140;
  longlong local_138;
  longlong local_130;
  ulonglong local_128;
  
  lVar8 = (longlong)(int)moby;
  uStack_244 = uRam007ab5ac;
  uStack_248 = uRam007ab5a8;
  uStack_24c = uRam007ab5a4;
  uStack_250 = _DAT_007ab5a0;
  uStack_234 = uRam007ab5bc;
  uStack_238 = uRam007ab5b8;
  uStack_23c = uRam007ab5b4;
  uStack_240 = _DAT_007ab5b0;
  uStack_224 = uRam007ab5cc;
  uStack_228 = uRam007ab5c8;
  uStack_22c = uRam007ab5c4;
  uStack_230 = _DAT_007ab5c0;
  uStack_214 = uRam007ab5dc;
  uStack_218 = uRam007ab5d8;
  uStack_21c = uRam007ab5d4;
  uStack_220 = _DAT_007ab5d0;
  uStack_204 = uRam007ab5ec;
  uStack_208 = uRam007ab5e8;
  uStack_20c = uRam007ab5e4;
  uStack_210 = _DAT_007ab5e0;
  uStack_1f4 = uRam007ab5fc;
  uStack_1f8 = uRam007ab5f8;
  uStack_1fc = uRam007ab5f4;
  uStack_200 = _DAT_007ab5f0;
  uStack_1e4 = uRam007ab60c;
  uStack_1e8 = uRam007ab608;
  uStack_1ec = uRam007ab604;
  uStack_1f0 = _DAT_007ab600;
  uStack_1d4 = uRam007ab61c;
  uStack_1d8 = uRam007ab618;
  uStack_1dc = uRam007ab614;
  uStack_1e0 = _DAT_007ab610;
  uStack_1c4 = uRam007ab62c;
  uStack_1c8 = uRam007ab628;
  uStack_1cc = uRam007ab624;
  uStack_1d0 = _DAT_007ab620;
  uStack_1b4 = uRam007ab63c;
  uStack_1b8 = uRam007ab638;
  uStack_1bc = uRam007ab634;
  uStack_1c0 = _DAT_007ab630;
  dVar39 = 0.0;
  local_4d0 = 0.0;
  iVar16 = 0;
  local_4cc = 0.0;
  dVar38 = 8.0;
  local_4c0 = 0.0;
  local_4c8 = g_FrameTime * 8.0;
  local_4bc = 0.0;
  pfVar2 = (float *)moby->pVar;
  uVar20 = ZEXT48(pfVar2);
  fVar3 = pfVar2[6];
  dVar37 = 1.0;
  local_4b8 = 1.0;
  if ((0x3f666666 <
       (int)(FLOAT_ORDER(g_FrameLoad)))
     || (0x3f666666 <
         (int)(FLOAT_ORDER(g_PerfLoad)
              ))) {
    iVar16 = 1;
  }
  dVar27 = 0.10000000149011612;
  pfVar2[8] = (pfVar2[0xd] - pfVar2[8]) * 0.1 * DAT_0071f40c + pfVar2[8];
  FastDecTimerS16(uVar20 + 0x3c);
  FastIntToDouble(*(undefined2 *)(pfVar2 + 0xf));
  FastIntToDouble(*(undefined2 *)((int)pfVar2 + 0x3e));
  FastVecAdd(local_470,&DAT_00969e20,&DAT_00969de0);
  dVar21 = (double)FastIntToDouble(g_goldWeaponsArray.devastator);
  dVar32 = (double)(moby->rotation).z;
  dVar42 = (double)(float)(dVar21 + dVar37);
  dVar21 = (double)(moby->rotation).y;
  if (fVar3 != 0.0) {
    dVar29 = 300.5;
    local_150 = (longlong)(int)(animationSpeed * 5.5);
    if (((int)pfVar2[5] < (int)(animationSpeed * 300.5) - (int)(animationSpeed * 5.5)) &&
       (*(byte *)((int)fVar3 + 0x20) < 0x80)) {
      dVar40 = (double)*(float *)((int)fVar3 + 0x10);
      dVar34 = (double)(*(float *)((int)fVar3 + 0x18) + pfVar2[7]);
      dVar36 = (double)*(float *)((int)fVar3 + 0x14);
      dVar35 = (double)*(float *)((int)fVar3 + 0x1c);
      dVar32 = (double)local_460;
      dVar24 = (double)local_45c;
      dVar33 = (double)(float)(dVar40 - (double)(moby->pos).x);
      dVar25 = (double)local_458;
      dVar31 = (double)(float)(dVar36 - (double)(moby->pos).y);
      dVar30 = (double)(float)(dVar34 - (double)(moby->pos).z);
      dVar21 = dVar39;
      if (pfVar2[0xe] != 0.0) {
        dVar21 = dVar40 - (double)*pfVar2;
        dVar32 = dVar36 - (double)pfVar2[1];
        dVar25 = dVar34 - (double)pfVar2[2];
        FastVecSubSelf(auStack_450,&local_460,local_480);
        *pfVar2 = (float)dVar40;
        pfVar2[1] = (float)dVar36;
        pfVar2[2] = (float)dVar34;
        pfVar2[3] = (float)dVar35;
        dVar24 = (double)(float)dVar32;
        dVar32 = (double)(float)dVar21;
        dVar25 = (double)(float)dVar25;
        fVar5 = pfVar2[8] * pfVar2[8] -
                (float)(dVar25 * dVar25 +
                       (double)(float)(dVar32 * dVar32 + (double)(float)(dVar24 * dVar24)));
        fVar7 = (float)(dVar25 * dVar30 +
                       (double)(float)(dVar32 * dVar33 + (double)(float)(dVar24 * dVar31))) * -2.0;
        fVar6 = fVar5 * 2.0;
        fVar5 = SQRT(fVar7 * fVar7 -
                     -((float)(dVar30 * dVar30 +
                              (double)(float)(dVar33 * dVar33 + (double)(float)(dVar31 * dVar31))) *
                      fVar5 * 4.0));
        dVar35 = (double)((fVar5 - fVar7) / fVar6);
        dVar34 = (double)((-fVar7 - fVar5) / fVar6);
        if ((dVar35 <= dVar39) || (dVar34 <= dVar39)) {
          dVar21 = -1.0;
          if (dVar39 - dVar34 < 0.0) {
            dVar21 = dVar34;
          }
          if (dVar39 - dVar35 < 0.0) {
            dVar21 = dVar35;
          }
        }
        else {
          dVar21 = dVar34;
          if (dVar34 - dVar35 < 0.0) {
            dVar21 = dVar35;
          }
        }
      }
      if ((dVar21 <= dVar39) || ((double)(longlong)((double)animationSpeed * dVar29) <= dVar21)) {
        dVar32 = (double)FUN_005e8338(dVar33,dVar31);
        dVar21 = (double)FUN_005e8338((double)SQRT((float)(dVar33 * dVar33 +
                                                          (double)(float)(dVar31 * dVar31))),dVar30)
        ;
        dVar21 = -dVar21;
      }
      else {
        dVar33 = (double)(float)(dVar32 * dVar21 + dVar33);
        dVar29 = (double)(float)(dVar24 * dVar21 + dVar31);
        dVar21 = (double)(float)(dVar25 * dVar21 + dVar30);
        dVar32 = (double)FUN_005e8338(dVar33,dVar29);
        dVar21 = (double)FUN_005e8338((double)SQRT((float)(dVar33 * dVar33 +
                                                          (double)(float)(dVar29 * dVar29))),dVar21)
        ;
        dVar21 = -dVar21;
      }
      goto LAB_002941a8;
    }
  }
  local_150 = (longlong)(int)(animationSpeed * 5.5);
  if ((int)pfVar2[5] < (int)(animationSpeed * 300.5) - (int)(animationSpeed * 5.5)) {
    dVar32 = (double)pfVar2[0xb];
    dVar21 = (double)pfVar2[0xc];
  }
LAB_002941a8:
  lVar9 = uVar20 + 0x24;
  dVar24 = 6.2831854820251465;
  dVar29 = 3.1415927410125732;
  if (fVar3 == 0.0) {
    dVar25 = 4.71238899230957;
    dVar32 = (double)MB_DeltAngSpeed
                               ((double)(moby->rotation).z,dVar32,(double)(g_FrameTimeSq * 6.2831855)
                                ,(double)(g_FrameTimeSq * 3.1415927),
                                (double)(g_FrameTime * 4.712389),lVar9,&DAT_00293b88,lVar9
                               );
    (moby->rotation).z = (float)dVar32;
    dVar21 = (double)MB_DeltAngSpeed
                               ((double)(moby->rotation).y,dVar21,
                                (double)(float)((double)g_FrameTimeSq * dVar24),
                                (double)(float)((double)g_FrameTimeSq * dVar29),
                                (double)(float)((double)g_FrameTime * dVar25));
  }
  else {
    dVar32 = (double)MB_DeltAngSpeed
                               ((double)(moby->rotation).z,dVar32,(double)(g_FrameTimeSq * 6.2831855)
                                ,(double)(g_FrameTimeSq * 3.1415927),
                                (double)(g_FrameTime * 6.2831855),lVar9,fVar3,lVar9);
    (moby->rotation).z = (float)dVar32;
    dVar21 = (double)MB_DeltAngSpeed
                               ((double)(moby->rotation).y,dVar21,
                                (double)(float)((double)g_FrameTimeSq * dVar24),
                                (double)(float)((double)g_FrameTimeSq * dVar29),
                                (double)(float)((double)g_FrameTime * dVar24));
  }
  (moby->rotation).y = (float)dVar21;
  MB_SphericalToVector(pfVar2[8],(moby->rotation).z,(float)-dVar21,&local_4a0);
  FUN_005e7f98(dVar37,0xa10980,&local_4a0);
  g_CollOutput.normal.x = -g_CollOutput.normal.x;
  g_CollOutput.normal.y = -g_CollOutput.normal.y;
  g_CollOutput.normal.z = -g_CollOutput.normal.z;
  if ((iVar16 == 0) || ((worldUpdateTime & 1) == 0)) {
    dVar21 = -1.0;
    MB_randRangeFloat(-1.0,(float)dVar37);
    MB_randRangeFloat((float)dVar21,(float)dVar37);
    MB_randRangeFloat((float)dVar21,(float)dVar37);
    dVar21 = (double)MB_randRangeFloat((float)dVar27,0.2);
    FUN_005e7f98((double)(float)(dVar21 * (double)g_FrameTime),local_440,local_440);
    dVar21 = (double)MB_randRangeFloat
                               ((float)((double)g_FrameTime * dVar27),
                                g_FrameTime);
    FUN_005e7f98(-dVar21,local_4b0,&local_4a0);
    dVar21 = (double)MB_randRangeFloat((float)dVar39,(float)dVar37);
    FUN_005e7f98((double)(float)(dVar21 * (double)pfVar2[8]),local_4b0,&local_4a0);
    local_150 = (longlong)(int)(animationSpeed * 40.5);
    uVar28 = 0x40e3880000000000;
    uVar41 = 0x408f400000000000;
    iVar11 = SpawnPart_44
                       (0x40e3880000000000,0x408f400000000000,dVar37,0xbf2a36e2e0000000,dVar39,
                        local_4b0,local_440,(int)(animationSpeed * 40.5),0x32,0x505050,3);
    if (iVar11 != 0) {
      uVar1 = *DAT_00a52860;
      *(undefined1 *)(iVar11 + 3) = 0x44;
      *(undefined1 *)(iVar11 + 2) = uVar1;
    }
    local_150 = (longlong)(int)(animationSpeed * 7.5);
    SpawnPart_44
              (uVar28,uVar41,dVar37,0xbf3a36e2e0000000,dVar39,lVar8 + 0x10,local_440,
               (int)(animationSpeed * 7.5),0x7f,&DAT_00b0b0b0,3);
    FUN_005e7d64(local_430,local_430,lVar8 + 0xc0);
    dVar21 = (double)MB_randRot();
    MB_RotateQuatAxisAngle((float)dVar21,local_430,local_430);
    iVar11 = ReorderRGB(0x4f007fff,(uint)g_goldWeaponsArray.devastator);
    local_150 = (longlong)(int)(animationSpeed * 15.5);
    SpawnPart_21(0x40d86a0000000000,local_4b0,local_430,iVar11,0x1fffffff);
  }
  FastVecAddSelf(auStack_420,&local_4a0,local_480);
  fVar3 = (moby->pos).x + local_4a0;
  fVar5 = (moby->pos).y + local_49c;
  fVar6 = (moby->pos).z + local_498;
  (moby->pos).x = fVar3;
  (moby->pos).y = fVar5;
  (moby->pos).z = fVar6;
  if ((((double)fVar3 < dVar39) || ((double)fVar5 < dVar39)) || ((double)fVar6 < dVar39)) {
    MB_DeleteMobyFromDynamicGroup(moby,&g_mobyIdListCount);
    DeleteMoby(moby);
  }
  else {
    local_3ac = &DAT_00830000;
    dVar21 = 3.0;
    local_3a4 = 0x40400000;
    local_3a0 = 1;
    local_3b0 = moby;
    FUN_005e84c0(dVar37,local_3c0,local_3c0);
    local_3a6 = moby->oClass;
    lVar9 = lVar8 + 0x10;
    local_3a8 = 3;
    local_3b8 = 0x3f800000;
    local_3b4 = 0x45afdf66;
    local_3a7 = 1;
    iVar11 = CollLine(local_4e0,lVar9,0,g_heroMobyPtr,local_3c0);
    if (iVar11 == 0) {
      iVar11 = FastDecTimerS32(uVar20 + 0x14);
      if ((iVar11 != 0) ||
         (fVar3 = (moby->pos).y - g_heroPosition.y, fVar5 = (moby->pos).x - g_heroPosition.x,
         lVar17 = 0, pfVar2[0x12] < SQRT(fVar5 * fVar5 + fVar3 * fVar3))) {
        local_4c0 = DAT_007350c0;
        local_4bc = DAT_007350c4;
        local_4b8 = DAT_007350c8;
        FUN_005e7d64(local_490,local_490,lVar8 + 0xc0);
        FUN_005e7d64(&local_4c0,&local_4c0,lVar8 + 0xc0);
        if (g_goldWeaponsArray.devastator == '\0') {
          MB_DeleteMobyFromDynamicGroup(moby,&g_mobyIdListCount);
          DeleteMoby(moby);
          return;
        }
        lVar17 = 0;
        local_4d0 = local_4a0 + 0.0;
        local_4cc = local_49c + 0.0;
        moby->setByGroup = '\x01';
        local_4c8 = local_4c8 + local_498;
      }
    }
    else if (g_CollOutput.pMoby == (MobyInstance *)0x0) {
      lVar17 = 0;
      if (0 < g_CollOutput.poly) {
        moby->setByGroup = '\x01';
        (moby->pos).x = g_CollOutput.ip.x;
        (moby->pos).y = g_CollOutput.ip.y;
        (moby->pos).z = g_CollOutput.ip.z;
        (moby->pos).w = g_CollOutput.ip.w;
        FUN_005e7f98(dVar37,local_490,local_490);
        FastVecReflect(&local_4d0,&local_4a0,0xa10980);
        FUN_005e7f98((double)(g_FrameTime * 2.0),&local_4d0,&local_4d0);
        FUN_005e7f98(dVar37,&local_4c0,0xa10980);
        lVar17 = 0;
      }
    }
    else {
      lVar17 = 0;
      if ((g_CollOutput.pMoby != g_heroMobyPtr) &&
         (lVar17 = 0, g_CollOutput.pMoby != (MobyInstance *)pfVar2[4])) {
        moby->setByGroup = '\x02';
        (moby->pos).x = g_CollOutput.ip.x;
        (moby->pos).y = g_CollOutput.ip.y;
        (moby->pos).z = g_CollOutput.ip.z;
        (moby->pos).w = g_CollOutput.ip.w;
        FUN_005e7f98(dVar37,local_490,local_490);
        FastVecReflect(&local_4d0,&local_4a0,0xa10980);
        FUN_005e7f98((double)(g_FrameTime * 2.0),&local_4d0,&local_4d0);
        FUN_005e7f98(dVar37,&local_4c0,0xa10980);
        lVar17 = lVar8;
      }
    }
    if (moby->setByGroup != '\0') {
      dVar32 = 2.0;
      dVar27 = (double)(float)(dVar42 * 2.0);
      uVar10 = CollMobySphere(dVar27,lVar9);
      uVar28.piece<0,4>() = (moby->pos).x;
      uVar28.piece<4,4>() = (moby->pos).y;
      uVar41.piece<0,4>() = (moby->pos).z;
      uVar41.piece<4,4>() = (moby->pos).w;
      MB_DamageMobyList
                (dVar21,dVar37,dVar37,lVar8,3,uVar28,uVar41,&g_CollMobyHits,uVar10,lVar17,
                 &DAT_00830000);
      local_380 = -local_4b8;
      local_388 = -local_4bc;
      local_390 = 0;
      local_36c = -local_4c0;
      local_370 = local_4bc;
      local_360 = 0;
      local_38c = local_4b8;
      local_37c = 0;
      local_35c = 0;
      local_378 = local_4c0;
      local_368 = 0;
      local_358 = 0;
      local_384 = 0;
      local_374 = 0;
      local_364 = 0;
      local_354 = 0;
      FastVecMtx4Mul(auStack_350,&local_390,&local_390);
      lVar18 = (ZERO_MASK(iVar16)) + 1;
      iVar11 = 0;
      lVar17 = (ZERO_MASK(iVar16) & 7U) + 3;
      if ((int)lVar17 != 0) {
        dVar33 = 8.5;
        dVar31 = 16.5;
        dVar25 = (double)(float)(dVar42 * 40000.0);
        dVar30 = 5.0;
        dVar24 = 60.5;
        dVar29 = 120.5;
        do {
          if (moby->setByGroup == '\x01') {
            dVar34 = (double)MB_randRot();
            dVar35 = (double)cosf((float)dVar34);
            FastMtxScale((double)(float)(dVar37 - dVar35),afStack_290,auStack_350);
            FUN_005e8128(dVar34);
            FastMtxScale(auStack_2d0,&local_390);
            FastVecAdd(auStack_2d0,auStack_2d0,afStack_290);
            FastMtx4Identity(afStack_290);
            FastVecAdd(auStack_310,auStack_2d0,afStack_290);
            FUN_005e825c(&local_400,local_490,auStack_310);
            dVar34 = (double)MB_randRangeFloat((float)dVar33,(float)dVar31);
            FUN_005e7f98((double)(float)((double)(float)(dVar34 * (double)g_FrameTime) *
                                        dVar42),&local_400,&local_400);
          }
          else {
            dVar34 = (double)MB_randRangeFloat((float)dVar33,(float)dVar31);
            dVar36 = (double)(float)((double)(float)(dVar34 * (double)g_FrameTime) *
                                    dVar42);
            dVar34 = (double)MB_randRot();
            dVar35 = (double)MB_randRot();
            MB_SphericalToVector((float)dVar36,(float)dVar34,(float)dVar35,&local_400);
          }
          local_400 = local_400 + local_4d0;
          local_3fc = local_3fc + local_4cc;
          local_3f8 = (float)((double)g_FrameTime * dVar30 + (double)local_3f8) +
                      local_4c8;
          iVar12 = ReorderRGB(0x4f007fff,(uint)g_goldWeaponsArray.devastator);
          iVar13 = ReorderRGB(0x1f00007f,(uint)g_goldWeaponsArray.devastator);
          if (dVar37 < (double)SQRT(local_3f8 * local_3f8 +
                                    local_400 * local_400 + local_3fc * local_3fc)) {
            FUN_005e7f98((double)(float)((double)g_FrameTime * dVar38),&local_400,
                         &local_400);
          }
          iVar14 = (int)((double)animationSpeed * dVar29);
          local_150 = (longlong)iVar14;
          iVar14 = MB_randRange((int)((double)animationSpeed * dVar24),iVar14);
          SpawnPart_15
                    (dVar25,lVar9,&local_400,iVar12,iVar13,0xffffffffffffffff,
                     iVar14 + (int)lVar18 * -0x23,1,0xffffffffffffffff);
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)lVar17);
      }
      dVar24 = -1.0;
      MB_randRangeFloat(-1.0,(float)dVar37);
      MB_randRangeFloat((float)dVar24,(float)dVar37);
      MB_randRangeFloat((float)dVar24,(float)dVar37);
      fVar3 = GameCamera.posY - (moby->pos).y;
      fVar5 = GameCamera.posX - (moby->pos).x;
      fVar6 = GameCamera.posZ - (moby->pos).z;
      dVar29 = 0.5;
      dVar25 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar3 * fVar3);
      FUN_005e7f98((double)(float)((double)((float)(dVar25 * 0.20000000298023224) *
                                           g_FrameTime) * dVar42),local_410,local_410);
      FUN_005e7f98((double)((float)(dVar25 * dVar32) * g_FrameTime),local_4f0,local_4f0);
      dVar32 = 10.0;
      FUN_005e8e80((double)(g_FrameTime * 10.0),local_410,local_410);
      local_150 = (longlong)(int)(animationSpeed * 90.5);
      uVar28 = MB_randRange((int)(animationSpeed * 60.5),(int)(animationSpeed * 90.5));
      FUN_0020bb70(lVar9,local_410,uVar28,0,0);
      uVar15 = 3;
      if (dVar25 < 6.0) {
        uVar15 = FastDoubleToInt(dVar25);
        uVar15 = ((int)uVar15 >> 1) + (uint)((int)uVar15 < 0 && (uVar15 & 1) != 0);
      }
      dVar30 = dVar39;
      if (dVar25 - 7.0 < 0.0) {
        dVar30 = (double)(float)(7.0 - dVar25);
      }
      if (iVar16 != 0) {
        uVar15 = ((int)uVar15 >> 1) + (uint)((int)uVar15 < 0 && (uVar15 & 1) != 0);
      }
      iVar11 = 0;
      uVar19 = ZEXT48(&g_CollOutput);
      if (0 < (int)uVar15) {
        uVar28 = 0x41186a0000000000;
        dVar40 = 15.5;
        dVar36 = 20.5;
        dVar35 = 25.5;
        dVar34 = 30.5;
        dVar33 = 5.5;
        dVar31 = 10.5;
        local_138 = lVar17;
        local_130 = lVar18;
        local_128 = ZEXT48(&g_CollOutput);
        do {
          dVar22 = (double)MB_randRangeFloat((float)dVar38,(float)dVar32);
          dVar23 = (double)g_FrameTime;
          local_140 = (float)dVar30;
          local_1b0[0] = 0x4f008fff;
          local_1b0[1] = 0x4f008fff;
          local_1b0[2] = 0x4f007fff;
          local_1b0[3] = 0x4f006fff;
          local_1b0[4] = 0x2fffffff;
          local_1b0[5] = 0x2fffffff;
          local_1b0[6] = 0x2f005f7f;
          dVar26 = (double)(float)((double)(float)(dVar22 * dVar42) * dVar23 -
                                  (double)(float)(dVar23 * dVar30));
          local_1b0[7] = 0x2f004f7f;
          local_1b0[8] = 0x2f003f7f;
          local_1b0[9] = 0x2f00004f;
          local_1b0[10] = 0x2f000000;
          local_1b0[0xb] = 0x3f000000;
          lVar17 = MB_randInt
                             ((double)(float)(dVar22 * dVar42),dVar23,
                              (double)(float)(dVar23 * dVar30),6);
          iVar13 = ReorderRGB
                             (*(int *)((int)local_1b0 + (int)(lVar17 << 2)),
                              (uint)g_goldWeaponsArray.devastator);
          lVar17 = MB_randInt(6);
          iVar14 = ReorderRGB
                             (*(int *)((int)local_1b0 + (int)(lVar17 << 2) + 0x18),
                              (uint)g_goldWeaponsArray.devastator);
          iVar12 = (int)((double)animationSpeed * dVar36);
          local_150 = (longlong)iVar12;
          MB_randRange((int)((double)animationSpeed * dVar40),iVar12);
          iVar12 = (int)((double)animationSpeed * dVar34);
          local_150 = (longlong)iVar12;
          MB_randRange((int)((double)animationSpeed * dVar35),iVar12);
          SpawnPart_11(uVar28,dVar26,lVar9,&local_4d0,iVar13,iVar14);
          iVar12 = (int)((double)animationSpeed * dVar31);
          local_150 = (longlong)iVar12;
          MB_randRange((int)((double)animationSpeed * dVar33),iVar12);
          iVar12 = (int)((double)animationSpeed * dVar36);
          local_150 = (longlong)iVar12;
          MB_randRange((int)((double)animationSpeed * dVar40),iVar12);
          SpawnPart_11
                    (uVar28,(double)(float)(dVar26 * dVar29),lVar9,&local_4d0,0x7fffffff,0xffffff);
          iVar11 = iVar11 + 1;
          dVar30 = (double)local_140;
          lVar17 = local_138;
          uVar19 = local_128;
        } while (iVar11 < (int)uVar15);
      }
      iVar11 = 0;
      if (0 < (int)lVar17) {
        dVar32 = 20.5;
        dVar38 = 35.5;
        dVar29 = (double)(float)(dVar42 * 200000.0);
        do {
          local_1b0[0xc] = 0x4f008fff;
          local_1b0[0xd] = 0x4f008fff;
          local_1b0[0xe] = 0x4f007fff;
          local_1b0[0xf] = 0x4f006fff;
          local_1b0[0x10] = 0x2fffffff;
          local_1b0[0x11] = 0x2fffffff;
          local_1b0[0x12] = 0x2f005f7f;
          local_1b0[0x13] = 0x2f004f7f;
          local_1b0[0x14] = 0x2f003f7f;
          local_1b0[0x15] = 0x2f00004f;
          local_1b0[0x16] = 0x2f000000;
          local_1b0[0x17] = 0x3f000000;
          local_3f0 = 0.0;
          local_3ec = 0.0;
          local_3e8 = 0.0;
          local_3e4 = 0;
          dVar30 = (double)MB_randRangeFloat((float)dVar24,(float)dVar37);
          local_3f0 = (float)dVar30;
          dVar30 = (double)MB_randRangeFloat((float)dVar24,(float)dVar37);
          local_3ec = (float)dVar30;
          dVar30 = (double)MB_randRangeFloat((float)dVar24,(float)dVar37);
          local_3e8 = (float)dVar30;
          dVar30 = (double)MB_randRangeFloat((float)dVar39,(float)dVar21);
          FUN_005e7f98((double)(float)((double)(float)(dVar30 * (double)g_FrameTime) *
                                      dVar42),&local_3f0,&local_3f0);
          lVar18 = MB_randInt(6);
          iVar13 = ReorderRGB
                             (*(int *)((int)local_1b0 + (int)(lVar18 << 2) + 0x30),
                              (uint)g_goldWeaponsArray.devastator);
          lVar18 = MB_randInt(6);
          iVar14 = ReorderRGB
                             (*(int *)((int)local_1b0 + (int)(lVar18 << 2) + 0x48),
                              (uint)g_goldWeaponsArray.devastator);
          iVar12 = (int)((double)animationSpeed * dVar38);
          local_150 = (longlong)iVar12;
          MB_randRange((int)((double)animationSpeed * dVar32),iVar12);
          SpawnPart_8(dVar29,lVar9,&local_3f0,iVar13,iVar14);
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)lVar17);
      }
      uVar15 = (uint)((int)g_FrameLoad >> 0x1f) >> 1;
      if (((int)((uVar15 ^ g_FrameLoad) - ((int)g_FrameLoad >> 0x1f)) < 0x3f733333) &&
         (9.0 < dVar25)) {
        dVar38 = (double)(float)(dVar42 * 4.0);
        local_150 = (longlong)(int)(animationSpeed * 15.5);
        lVar17 = (ZERO_MASK((uint)g_goldWeaponsArray.devastator) & 0x43U) + 0x3c;
        FUN_001d4d88(dVar38,lVar8,lVar9,&local_4d0,uVar15,(int)(animationSpeed * 15.5),lVar17,0x7f,
                     lVar17);
        local_150 = (longlong)(int)(animationSpeed * 24.5);
        FUN_001d4d88(dVar38,lVar8,lVar9,&local_4d0);
      }
      local_150 = (longlong)(int)(animationSpeed * 20.5);
      FUN_001d4d88((double)(float)(dVar42 * 4.0),lVar8,lVar9,&local_4d0,0x30,
                   (int)(animationSpeed * 20.5),
                   (ZERO_MASK((uint)g_goldWeaponsArray.devastator) & 0x5fU) + 0x20,
                   0x7f,0);
      if (iVar16 == 0) {
        local_150 = (longlong)(int)(animationSpeed * 19.5);
        FUN_001d4d88(dVar27,lVar8,lVar9,&local_4d0,0x20,(int)(animationSpeed * 19.5),0xff,0xff,0xff)
        ;
      }
      moby->setByGroup = '\0';
      auVar43 = ZEXT416(0xffffffff);
      auVar44 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
      auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar44 = vectorShiftLeftIntegerWord(auVar44,auVar44);
      fVar3 = 0.35;
      if (dVar25 - 20.0 < 0.0) {
        fVar3 = (float)(dVar25 * 0.017500000074505806);
      }
      GameCamera.offset0.amp = 0.4 - fVar3;
      auVar45 = loadVectorLeftIndexed(0x8c,0x293b88);
      auVar45 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar43 = vectorMultiplyAddFloatingPoint
                          (auVar43,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,
                           auVar44);
      auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
      auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
      GameCamera.offset0.total =
           storeVectorElementWordIndexed
                     (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x168,0x9513c0);
      PlayMobySound(0,0,moby);
      if (iVar16 == 0) {
        if (g_goldWeaponsArray.devastator == '\0') {
          FUN_003fda38(&uStack_250,lVar9,0,0);
        }
        else {
          FUN_003fda38(&uStack_200,lVar9,0,0);
        }
      }
      fVar3 = pfVar2[0x10];
      pfVar2[0x10] = (float)((int)fVar3 + 1);
      if ((g_goldWeaponsArray.devastator == '\0') || ((float)((int)fVar3 + 1) == 4.2039e-45)) {
        MB_DeleteMobyFromDynamicGroup(moby,&g_mobyIdListCount);
        DeleteMoby(moby);
        return;
      }
      pfVar2[6] = 0.0;
      moby->setByGroup = '\0';
      FUN_005e7f98(dVar37,0xa10980,0xa10980);
      FastVecReflect(&local_3e0,&local_4a0,0xa10980);
      dVar37 = (double)FUN_005e8338((double)local_3e0,(double)local_3dc);
      (moby->rotation).z = (float)dVar37;
      dVar37 = (double)FUN_005e8338((double)SQRT(local_3e0 * local_3e0 + local_3dc * local_3dc),
                                    (double)local_3d8);
      (moby->rotation).y = (float)-dVar37;
      pfVar2[9] = 0.0;
      pfVar2[10] = 0.0;
      FUN_005e7f98(0x3fa99999a0000000,&local_3d0,0xa10980);
      fVar3 = *(float *)((int)uVar19 + 0x18);
      (moby->pos).x = (moby->pos).x + local_3d0;
      (moby->pos).y = (moby->pos).y + local_3cc;
      (moby->pos).z = (moby->pos).z + local_3c8;
      auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      if (fVar3 != 0.0) {
        pfVar2[4] = fVar3;
      }
      if (pfVar2[0x11] == 0.0) {
        auVar44 = ZEXT416(0xffffffff);
        auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
        auVar45 = vectorShiftLeftIntegerWord(auVar44,auVar44);
        auVar44 = loadVectorLeftIndexed(0x78,0x293b88);
        auVar44 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar43 = vectorMultiplyAddFloatingPoint
                            (auVar43,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,
                             auVar45);
        auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
        auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x44,uVar20
                          );
        *(undefined4 *)((uint)(pfVar2 + 0x11) & 0xfffffffc) = uVar4;
      }
      M153_00293248(lVar8,uVar20,*(undefined4 *)((int)uVar19 + 0x18));
      PlayMobySound(1,0,moby);
    }
    iVar16 = FastDecTimerS32(uVar20 + 0x44);
    if (iVar16 != 0) {
      pfVar2[0x10] = 0.0;
    }
  }
  return;
}


