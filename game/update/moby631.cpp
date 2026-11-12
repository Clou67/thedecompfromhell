// game/update/moby631.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x3f00b8-0x3f24f0
#include <math.h>
#include "game/update/moby631.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/respawn.h"
#include "game/sound.h"
#include "game/update/moby121.h"
#include "game/update/moby849.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x03f00b8 (0x470 bytes)
// inlined: FastAtan2 @0x3f0268
void M631_003f00b8(MobyInstance *param_1)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  undefined2 uVar8;
  ulonglong *puVar9;
  int iVar10;
  ulonglong uVar11;
  float *pfVar13;
  int iVar14;
  longlong lVar12;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar19;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong in_f31;
  double dVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar12 = uVar11 - 0xd0;
  puVar9 = (ulonglong *)lVar12;
  *puVar9 = uVar11;
  puVar9[0x1c] = in_LR;
  puVar9[0x19] = in_f31;
  puVar9[0x18] = unaff_r31;
  puVar9[0x17] = unaff_r30;
  pvVar7 = param_1->pVar;
  uVar19 = ZEXT48(pvVar7);
  dVar24 = 0.0;
  puVar9[0x16] = unaff_r29;
  *(undefined4 *)((int)puVar9 + 0x74) = 0;
  pfVar13 = (float *)MB_damage(param_1,0x330000,0);
  iVar14 = MB_HandleDamage
                     (param_1,pfVar13,uVar19 + 0x20,0,puVar9 + 0xe,(int)puVar9 + 0x74,0,4);
  if ((*(int *)(puVar9 + 0xe) != 1) && (param_1->state != '\x05')) {
    fVar2 = *(float *)((int)pvVar7 + 0x20) - *(float *)((int)puVar9 + 0x74);
    *(float *)((int)pvVar7 + 0x20) = fVar2;
    if ((iVar14 == 1) || ((double)fVar2 <= dVar24)) {
      param_1->state = '\x05';
    }
    else if (iVar14 != 0xb) {
      *(undefined1 *)((int)pvVar7 + 0x67) = 0xb4;
      MB_UpdateLightsTransition(param_1,uVar19 + 0x60);
      fVar2 = (param_1->rotation).z;
      if ((pfVar13[7] == 5627.925) && (param_1->state != '\x04')) {
        fVar6 = (param_1->pos).x - *pfVar13;
        fVar3 = (param_1->pos).y - pfVar13[1];
        dVar23 = ABS((double)fVar6);
        dVar22 = ABS((double)fVar3);
        *(float *)(puVar9 + 0xf) = fVar6;
        *(float *)((int)puVar9 + 0x7c) = fVar3;
        *(float *)(puVar9 + 0x10) = (float)(dVar23 - dVar22);
        uVar16 = (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1d) & 4;
        dVar21 = ABS((double)*(float *)(puVar9 + 0xf));
        if ((double)*(float *)(puVar9 + 0x10) - dVar24 < 0.0) {
          dVar21 = dVar22;
        }
        fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
        dVar22 = ABS((double)*(float *)((int)puVar9 + 0x7c));
        if ((double)*(float *)(puVar9 + 0x10) - dVar24 < 0.0) {
          dVar22 = dVar23;
        }
        fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
        if (dVar24 < dVar21) {
          lVar18 = uVar11 - 0xc0;
          lVar15 = uVar11 - 0x3c;
          lVar17 = uVar11 - 0x4c;
          lVar20 = 2;
          fVar4 = (float)(dVar22 - dVar21) / (float)(dVar22 + dVar21);
          fVar5 = fVar4 * fVar4;
          *(float *)(puVar9 + 0x12) = fVar4;
          *(float *)(puVar9 + 0x11) = fVar4;
          *(float *)((int)puVar9 + 0x8c) = fVar4;
          *(float *)((int)puVar9 + 0x84) = fVar4;
          fVar4 = fVar5 * fVar5;
          *(float *)(puVar9 + 0x11) = *(float *)(puVar9 + 0x11) * fVar5;
          *(float *)((int)puVar9 + 0x8c) = *(float *)((int)puVar9 + 0x8c) * fVar4;
          *(float *)(puVar9 + 0x12) = *(float *)(puVar9 + 0x12) * fVar4 * fVar5;
          do {
            *(float *)((int)lVar18 + 0x84) = *(float *)((int)lVar18 + 0x74) * fVar4 * fVar4;
            iVar14 = (int)lVar17;
            lVar17 = lVar17 + 8;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar15 + 4) = *(float *)(iVar14 + 4) * fVar4 * fVar4;
            lVar15 = lVar15 + 8;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          lVar18 = uVar11 - 0x4c;
          lVar20 = 4;
          pfVar13 = (float *)&DAT_007358e0;
          lVar15 = lVar18;
          lVar17 = lVar12;
          do {
            fVar4 = *pfVar13;
            fVar5 = pfVar13[1];
            pfVar13 = pfVar13 + 2;
            *(float *)((int)lVar17 + 0x84) = *(float *)((int)lVar17 + 0x84) * fVar4;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar5;
            lVar15 = lVar15 + 8;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          lVar15 = 2;
          do {
            iVar14 = (int)lVar12;
            iVar10 = (int)lVar18;
            lVar12 = lVar12 + 0x10;
            lVar18 = lVar18 + 0x10;
            dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar14 + 0x84)) +
                              *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                             *(float *)(iVar10 + 0xc));
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar6 + fVar3);
        }
        dVar21 = (double)FastDiffRots(dVar24,(double)fVar2);
        fVar2 = (float)(dVar21 + 1.570796251296997);
        dVar24 = (double)(float)(3.141592502593994 - dVar21);
        if (dVar21 - (double)(float)(3.141592502593994 - dVar21) < 0.0) {
          dVar24 = dVar21;
        }
        fVar6 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar6 = fVar2;
        }
        dVar22 = (double)(float)(-3.141592502593994 - dVar21);
        if ((double)(float)(-3.141592502593994 - dVar21) - dVar24 < 0.0) {
          dVar22 = dVar24;
        }
        dVar24 = (double)(float)(dVar22 * dVar22);
        fVar3 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar6 < 0.0) {
          fVar3 = fVar6;
        }
        fVar5 = fVar3 * fVar3;
        dVar21 = (double)(float)(dVar24 * (double)(float)(dVar24 * dVar22));
        dVar23 = (double)(float)(dVar24 * dVar21);
        fVar4 = fVar5 * fVar5 * fVar3;
        fVar6 = fVar5 * fVar4;
        fVar2 = ((float)(dVar24 * dVar23) * 2.601887e-06 +
                (float)(dVar23 * -0.0001980741071747616 +
                       (double)(float)(dVar21 * 0.008333025500178337 +
                                      (double)(float)((double)(float)(dVar24 * dVar22) *
                                                      -0.16666656732559204 + dVar22)))) *
                -0.34906584;
        fVar6 = (fVar5 * fVar6 * 2.601887e-06 +
                fVar6 * -0.0001980741 + fVar4 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3)
                * 0.08726646;
        if (ABS((param_1->rotation).x) < ABS(fVar2)) {
          (param_1->rotation).x = fVar2;
          *(undefined4 *)((int)pvVar7 + 0x218) = 0;
        }
        if (ABS((param_1->rotation).y) < ABS(fVar6)) {
          (param_1->rotation).y = fVar6;
          *(undefined4 *)((int)pvVar7 + 0x21c) = 0;
        }
        auVar25 = ZEXT416(0xffffffff);
        auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
        *(float *)((int)pvVar7 + 0x214) = g_FrameTime * 4.0;
        auVar25 = loadVectorLeftIndexed(0x30,0x3f0080);
        auVar27 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar25 = vectorMultiplyAddFloatingPoint
                            (auVar27,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                             auVar26);
        auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
        auVar25 = vectorSplatHalfWord(auVar25,1);
        uVar8 = storeVectorElementHalfWordIndexed(auVar25,0x206,uVar19);
        *(undefined2 *)((int)pvVar7 + 0x206) = uVar8;
        uVar1 = param_1->state;
        param_1->state = '\x04';
        param_1->setByGroup = uVar1;
        PlayMobySound(1,0,param_1);
      }
    }
  }
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar19 + 0x60);
  return;
}


// 0x03f0610 (0x1ee0 bytes)
// strings: 003f0da0: 'Tc 63a' (raw)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 631 */

void UpdateMoby_631(MobyInstance *moby)

{
  bool bVar1;
  u8 uVar2;
  float fVar3;
  f32 fVar4;
  short sVar5;
  void *pvVar6;
  Spline *pSVar7;
  ulonglong *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined2 uVar14;
  int iVar12;
  undefined4 uVar13;
  uint uVar15;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  int *piVar16;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  longlong lVar17;
  Spline *pSVar20;
  longlong lVar18;
  longlong lVar19;
  ulonglong unaff_r28;
  int iVar21;
  ulonglong unaff_r29;
  MobyInstance *pMVar22;
  ulonglong unaff_r30;
  ulonglong uVar23;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar24;
  double dVar25;
  undefined8 uVar26;
  ulonglong in_f26;
  double dVar27;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar28;
  ulonglong in_f29;
  double dVar29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  
  lVar11 = (longlong)(int)moby;
  uVar10 = ZEXT48(&stack0x00000000);
  puVar8 = (ulonglong *)(uVar10 - 0x330);
  *puVar8 = uVar10;
  puVar8[0x68] = in_LR;
  puVar8[0x60] = in_f26;
  puVar8[0x61] = in_f27;
  puVar8[0x62] = in_f28;
  puVar8[99] = in_f29;
  puVar8[100] = in_f30;
  puVar8[0x65] = in_f31;
  puVar8[0x5e] = unaff_r30;
  puVar8[0x5f] = unaff_r31;
  pvVar6 = moby->pVar;
  uVar23 = ZEXT48(pvVar6);
  dVar24 = 2.0;
  iVar12 = *(int *)((int)pvVar6 + 0x254);
  puVar8[0x5d] = unaff_r29;
  puVar8[0x5c] = unaff_r28;
  puVar8[0x5b] = unaff_r27;
  puVar8[0x5a] = unaff_r26;
  puVar8[0x59] = unaff_r25;
  puVar8[0x58] = unaff_r24;
  puVar8[0x57] = unaff_r23;
  puVar8[0x56] = unaff_r22;
  puVar8[0x55] = unaff_r21;
  dVar25 = dVar24;
  if (iVar12 != 0) {
    dVar25 = 4.0;
  }
  dVar29 = 20.0;
  MB_getTarget((double)(float)(dVar25 * 20.0),lVar11,&DAT_003f0530,uVar10 - 0x100);
  if ((*(uint *)(&g_CheckpointBits + (int)((longlong)((int)(short)moby->uid >> 5) << 2)) &
      1 << (moby->uid & 0x1f)) != 0) {
    if (*(int *)((int)pvVar6 + 0x238) != -1) {
      DeleteMoby(g_MobyInstance + *(int *)((int)pvVar6 + 0x238));
    }
    DeleteMoby(moby);
    return;
  }
  if (*(int *)((int)pvVar6 + 0x134) == -1) {
    if (*(int *)((int)pvVar6 + 0x238) != -1) {
      DeleteMoby(g_MobyInstance + *(int *)((int)pvVar6 + 0x238));
    }
    DeleteMoby(moby);
    return;
  }
  if ((moby->state != '\0') && (*(char *)((int)pvVar6 + 0x2e) != '\x01')) {
    if (*(int *)((int)pvVar6 + 0x238) != -1) {
      DeleteMoby(g_MobyInstance + *(int *)((int)pvVar6 + 0x238));
    }
    DeleteMoby(moby);
    return;
  }
  if (*(int *)((int)pvVar6 + 0x38) != 0) {
    auVar31 = ZEXT416(0xffffffff);
    auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
    *(undefined4 *)((int)pvVar6 + 0x38) = 0;
    auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
    auVar31 = loadVectorLeftIndexed(0xc,0x3f0530);
    auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar31 = vectorMultiplyAddFloatingPoint
                        (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                         auVar32);
    auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
    auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar13 = storeVectorElementWordIndexed
                       (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x254,uVar23);
    *(undefined4 *)((int)pvVar6 + 0x254U & 0xfffffffc) = uVar13;
  }
  FastDecTimerS32(uVar23 + 0x254);
  if (((*(int *)((int)pvVar6 + 0x238) != -1) &&
      (pMVar22 = g_MobyInstance + *(int *)((int)pvVar6 + 0x238),
      pMVar22->oClass == BLARG_COMMANDER_023E)) && (pMVar22->state < 0x80)) {
    lVar17 = ZEXT48(pMVar22->pVar) + 0x150;
    MB_SetScaleCheat(0x4004000000000000,lVar17);
    MB_UpdateManipulatorRot
              ((double)(DAT_0071f40c * 0.03),(double)(DAT_0071f40c * 0.3),pMVar22,lVar17,2);
  }
  M631_003f00b8(lVar11);
  uVar2 = moby->state;
  dVar25 = (double)(moby->rotation).z;
  if (uVar2 == '\x05') {
    uVar26 = 0;
    *(undefined4 *)(puVar8 + 0x30) = 0;
    *(undefined4 *)((int)puVar8 + 0x184) = 0;
    *(undefined4 *)(puVar8 + 0x31) = 0;
    *(undefined4 *)((int)puVar8 + 0x18c) = 0;
    dVar25 = (double)MB_randRot();
    GetBonePosition(lVar11,4,uVar10 - 0x1a0);
    dVar30 = 1.5;
    dVar29 = 1.5707963705062866;
    iVar12 = 0;
    do {
      dVar27 = (double)cosf((float)dVar25);
      *(float *)(puVar8 + 0x34) = (float)(dVar27 * dVar30);
      dVar27 = (double)FUN_005e8128(dVar25);
      *(undefined4 *)(puVar8 + 0x35) = 0;
      *(float *)((int)puVar8 + 0x1a4) = (float)(dVar27 * dVar30);
      dVar25 = (double)FastWrapRot((float)dVar25,(float)dVar29);
      FastVecAddSelf(uVar10 - 0x180,uVar10 - 400,uVar10 - 0x1a0);
      iVar12 = iVar12 + 1;
    } while (iVar12 < 4);
    GetBonePosition(lVar11,5,uVar10 - 400);
    if (*(int *)((int)pvVar6 + 0x238) != -1) {
      lVar17 = uVar10 - 0x170;
      pMVar22 = g_MobyInstance + *(int *)((int)pvVar6 + 0x238);
      *(undefined1 *)((int)pMVar22->pVar + 0x262) = 2;
      pMVar22->updateDistance = -1;
      pMVar22->modeBits =
           pMVar22->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
            TRANSPARENT|DISABLED);
      *(MobyInstance **)(puVar8 + 0x3a) = moby;
      *(undefined **)((int)puVar8 + 0x1d4) = &DAT_00830000;
      *(undefined4 *)((int)puVar8 + 0x1dc) = 0x41a00000;
      *(undefined4 *)(puVar8 + 0x3c) = 1;
      FUN_005e81f0(lVar17,&pMVar22->pos,lVar11 + 0x10);
      FUN_005e84c0(0x3ff0000000000000,lVar17,lVar17);
      auVar31 = ZEXT416(0xfffffff0);
      auVar32 = loadVectorLeftIndexed(0xa6,lVar11);
      auVar32 = vectorShiftRightWord
                          (auVar32,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60);
      *(undefined4 *)(puVar8 + 0x39) = 0x3f800000;
      *(undefined4 *)((int)puVar8 + 0x1cc) = 0x45afdf66;
      auVar31 = vectorSplatHalfWord(auVar32,1);
      *(undefined1 *)(puVar8 + 0x3b) = 3;
      *(undefined1 *)((int)puVar8 + 0x1d9) = 3;
      uVar14 = storeVectorElementHalfWordIndexed(auVar31,0x1da,uVar10 - 0x330);
      *(undefined2 *)((int)puVar8 + 0x1da) = uVar14;
      auVar31 = loadVectorLeftIndexed(0xa0,0x3f0530);
      auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar33 = vectorPermute(_DAT_003f05b0,*(undefined1 (*) [16])(puVar8 + 0x38),_DAT_003f05c0);
      auVar31 = vectorPermute(auVar32,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                              _DAT_003f05e0);
      auVar31 = vectorPermute(auVar31,*(undefined1 (*) [16])(puVar8 + 0x3a),_DAT_003f05f0);
      *(undefined1 (*) [16])(puVar8 + 8) = auVar33;
      *(undefined4 *)((int)puVar8 + 0x6c) = *(undefined4 *)((int)puVar8 + 0x1ec);
      *(undefined4 *)(puVar8 + 0xd) = *(undefined4 *)(puVar8 + 0x3d);
      *(undefined4 *)((int)puVar8 + 100) = *(undefined4 *)((int)puVar8 + 0x1e4);
      *(undefined4 *)(puVar8 + 0xc) = *(undefined4 *)(puVar8 + 0x3c);
      *(undefined1 (*) [16])(puVar8 + 10) = auVar31;
      CollDamageMobyDirect
                (pMVar22,puVar8[9],puVar8[8],puVar8[9],puVar8[10],puVar8[0xb],puVar8[0xc],
                 puVar8[0xd]);
    }
    lVar18 = lVar11 + 0x10;
    puVar8[0x12] = 2;
    puVar8[0x14] = 1;
    puVar8[0x15] = 1;
    puVar8[0x16] = 0xffffffffffffffff;
    puVar8[0x17] = 0;
    MB_genericExplosion
              (uVar26,uVar26,0x4010000000000000,dVar24,0x40f86a0000000000,0x4008000000000000,
               0x402e000000000000,lVar11,uVar10 - 0x1b0,lVar18,2,0xffffffffffffffff,0x14,3,4);
    MB_SpawnBoltsFromCrate(lVar11,0,0xffffffffffffffff);
    lVar17 = lVar11 + 0x40;
    puVar8[0xe] = ZEXT48(&DAT_00a15d30);
    puVar8[0xf] = ZEXT48(&DAT_00a15d30);
    MB_SpawnDebrisMoby(uVar26,lVar11,0x637,lVar18,lVar17,0,0);
    puVar8[0xe] = ZEXT48(&DAT_00a15d30);
    puVar8[0xf] = ZEXT48(&DAT_00a15d30);
    MB_SpawnDebrisMoby(uVar26,lVar11,0x638,lVar18,lVar17,0,0);
    puVar8[0xe] = ZEXT48(&DAT_00a15d30);
    puVar8[0xf] = ZEXT48(&DAT_00a15d30);
    MB_SpawnDebrisMoby(uVar26,lVar11,0x639,lVar18,lVar17,0,0);
    DetachManipulator(moby,(int)pvVar6 + 0x180);
    DetachManipulator(moby,(int)pvVar6 + 0x1c0);
    iVar12 = *(int *)((int)pvVar6 + 0x250);
    if (((iVar12 != -1) && (g_SoundChannels[iVar12].pMoby == moby)) &&
       (g_SoundChannels[iVar12].state != '\0')) {
      sound_Kill(iVar12);
    }
    *(undefined4 *)((int)pvVar6 + 0x250) = 0xffffffff;
    DeleteMoby(moby);
    return;
  }
  if (uVar2 == '\x04') {
    iVar12 = FastDecTimerS16(uVar23 + 0x206);
    if (iVar12 == 0) {
      fVar3 = -(g_FrameTimeSq * 4.0 - *(float *)((int)pvVar6 + 0x214));
      *(float *)((int)pvVar6 + 0x214) = fVar3;
      if (fVar3 < 0.0) {
        *(undefined4 *)((int)pvVar6 + 0x214) = 0;
      }
      dVar25 = (double)cosf((moby->rotation).z);
      fVar3 = (moby->rotation).z;
      *(float *)(puVar8 + 0x2e) = -(float)(dVar25 * (double)*(float *)((int)pvVar6 + 0x214));
      dVar25 = (double)FUN_005e8128((double)fVar3);
      fVar3 = *(float *)((int)pvVar6 + 0x214);
      *(undefined4 *)(puVar8 + 0x2f) = 0;
      *(float *)((int)puVar8 + 0x174) = -(float)(dVar25 * (double)fVar3);
      FUN_005e7f54(lVar11 + 0x10,lVar11 + 0x10,uVar10 - 0x1c0);
      uVar26 = FUN_005e8338((double)*(float *)(puVar8 + 0x2e),
                            (double)*(float *)((int)puVar8 + 0x174));
      dVar25 = (double)FastDiffRots(uVar26,(double)(moby->rotation).z);
      dVar24 = (double)cosf((float)dVar25);
      dVar29 = 10.0;
      dVar24 = (double)(float)((double)(*(float *)((int)pvVar6 + 0x214) * 0.34906584) * dVar24);
      dVar30 = (double)(float)(dVar24 / (double)(g_FrameTime * 10.0));
      dVar25 = (double)FUN_005e8128(dVar25,dVar24,(double)(g_FrameTime * 10.0));
      dVar24 = 1.0471975803375244;
      dVar29 = (double)((float)((double)(*(float *)((int)pvVar6 + 0x214) * -0.34906584) * dVar25) /
                       (float)((double)g_FrameTime * dVar29));
      dVar25 = (double)MB_DeltAngSpeed
                                 ((double)(moby->rotation).y,dVar30,
                                  (double)(g_FrameTimeSq * 0.5235988),
                                  (double)(g_FrameTimeSq * 1.0471976),
                                  (double)(float)((double)g_FrameTime * 0.7853981852531433
                                                 ));
      (moby->rotation).y = (float)dVar25;
      dVar25 = (double)MB_DeltAngSpeed
                                 ((double)(moby->rotation).x,dVar29,
                                  (double)(float)((double)g_FrameTimeSq * dVar24),
                                  (double)(float)((double)g_FrameTimeSq * 2.094395160675049),
                                  (double)(g_FrameTime * 1.5707964));
      (moby->rotation).x = (float)dVar25;
    }
    else {
      moby->state = moby->setByGroup;
    }
    goto LAB_003f235c;
  }
  if (uVar2 == '\x03') {
    iVar12 = *(int *)((int)pvVar6 + 0x230);
    if (iVar12 == -1) {
      Delt(200.0,g_FrameTime * 8.0,&(moby->pos).z);
      uVar26 = 0;
      dVar30 = 0.5235987901687622;
      dVar29 = 1.0471975803375244;
      dVar24 = 0.7853981852531433;
      dVar25 = (double)MB_DeltAngSpeed
                                 ((double)(moby->rotation).y,0,(double)(g_FrameTimeSq * 0.5235988),
                                  (double)(g_FrameTimeSq * 1.0471976),
                                  (double)(g_FrameTime * 0.7853982));
      (moby->rotation).y = (float)dVar25;
      dVar25 = (double)MB_DeltAngSpeed
                                 ((double)(moby->rotation).x,uVar26,
                                  (double)(float)((double)g_FrameTimeSq * dVar30),
                                  (double)(float)((double)g_FrameTimeSq * dVar29),
                                  (double)(float)((double)g_FrameTime * dVar24));
      (moby->rotation).x = (float)dVar25;
    }
    else {
      if (*(int *)((int)pvVar6 + 0x23c) != 0) {
        iVar12 = *(int *)((int)pvVar6 + 0x234);
      }
      lVar17 = lVar11 + 0x10;
      pSVar7 = Splines[iVar12];
      MB_PathFollowToPos
                (0x408f380000000000,0x4014000000000000,0,pSVar7,lVar17,uVar10 - 0x1d0,uVar10 - 0xa4,
                 uVar10 - 0xa8);
      dVar25 = (double)FastIntToDouble(*(undefined4 *)((int)puVar8 + 0x28c));
      dVar30 = (double)(float)((double)(float)(dVar25 * (double)pSVar7->points[0].w +
                                              (double)*(float *)(puVar8 + 0x51)) + dVar24);
      dVar25 = (double)FUN_005e8548(lVar17,pSVar7->points + pSVar7->cnt + -1);
      if ((double)((*(float *)((int)pvVar6 + 0x214) * *(float *)((int)pvVar6 + 0x214)) /
                  (float)((double)(g_FrameTimeSq * 10.0) * dVar24)) < dVar25) {
        fVar3 = g_FrameTimeSq * 10.0 + *(float *)((int)pvVar6 + 0x214);
        *(float *)((int)pvVar6 + 0x214) = fVar3;
        if ((float)((double)g_FrameTime * dVar29) < fVar3) {
          *(float *)((int)pvVar6 + 0x214) = (float)((double)g_FrameTime * dVar29);
        }
      }
      else {
        fVar3 = -(g_FrameTimeSq * 10.0 - *(float *)((int)pvVar6 + 0x214));
        *(float *)((int)pvVar6 + 0x214) = fVar3;
        if (fVar3 < DAT_0085433c * g_FrameTime) {
          *(float *)((int)pvVar6 + 0x214) = DAT_0085433c * g_FrameTime;
        }
      }
      uVar13 = FastDoubleToInt((double)(float)(dVar30 / (double)pSVar7->points[0].w));
      *(undefined4 *)((int)puVar8 + 0x28c) = uVar13;
      dVar25 = (double)FastIntToDouble();
      dVar24 = (double)pSVar7->points[0].w;
      iVar12 = *(int *)((int)puVar8 + 0x28c);
      *(float *)(puVar8 + 0x51) = (float)(-(double)(float)(dVar25 * dVar24 - dVar30) / dVar24);
      if (pSVar7->cnt + -1 <= iVar12) {
        if (((*(int *)((int)pvVar6 + 0x234) != -1) && (*(int *)((int)pvVar6 + 0x164) != -1)) &&
           (*(float *)((int)pvVar6 + 0x214) <= DAT_0085433c * g_FrameTime)) {
          uVar15 = *(uint *)((int)pvVar6 + 0x23c) ^ 1;
          *(uint *)((int)pvVar6 + 0x23c) = uVar15;
          auVar31 = ZEXT416(0xffffffff);
          auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
          auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
          puVar9 = (undefined4 *)
                   ((int)pvVar6 + 0x150U +
                   ((uint)(ZERO_MASK(uVar15)) &
                   (int)pvVar6 + (0x120 - ((int)pvVar6 + 0x150U))));
          iVar12 = puVar9[4];
          (moby->pos).x = *(f32 *)(iVar12 + 0x10);
          (moby->pos).y = *(f32 *)(iVar12 + 0x14);
          (moby->pos).z = *(f32 *)(iVar12 + 0x18);
          (moby->pos).w = *(f32 *)(iVar12 + 0x1c);
          *puVar9 = 1;
          moby->setByGroup = '\x02';
          moby->state = '\x04';
          auVar31 = loadVectorLeftIndexed(0x30,0x3f0530);
          auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar31 = vectorMultiplyAddFloatingPoint
                              (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60
                               ,auVar32);
          auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
          auVar31 = vectorSplatHalfWord(auVar31,1);
          uVar14 = storeVectorElementHalfWordIndexed(auVar31,0x206,uVar23);
          *(undefined2 *)((int)pvVar6 + 0x206) = uVar14;
          goto LAB_003f235c;
        }
        if (*(float *)((int)pvVar6 + 0x214) <= DAT_0085433c * g_FrameTime) {
          trapWord(0x1f,in_LR,in_LR);
          return;
        }
        iVar12 = pSVar7->cnt + -2;
        *(int *)((int)puVar8 + 0x28c) = iVar12;
        *(undefined4 *)(puVar8 + 0x51) = 0x3f800000;
      }
      lVar19 = uVar10 - 0x1d0;
      FUN_005e81f0(lVar19,pSVar7->points + iVar12 + 1,pSVar7->points + iVar12);
      fVar3 = *(float *)(puVar8 + 0x51);
      *(float *)(puVar8 + 0x2c) = *(float *)(puVar8 + 0x2c) * fVar3;
      *(float *)((int)puVar8 + 0x164) = *(float *)((int)puVar8 + 0x164) * fVar3;
      *(float *)(puVar8 + 0x2d) = *(float *)(puVar8 + 0x2d) * fVar3;
      FUN_005e7f54(lVar19,lVar19,pSVar7->points + *(int *)((int)puVar8 + 0x28c));
      dVar25 = (double)(moby->rotation).z;
      uVar26 = FUN_005e8338((double)(*(float *)(puVar8 + 0x46) - (moby->pos).x),
                            (double)(*(float *)((int)puVar8 + 0x234) - (moby->pos).y));
      dVar25 = (double)MB_DeltAngSpeed
                                 (dVar25,uVar26,0x3f847ae140000000,0x3fd3333340000000,
                                  0x3fb99999a0000000);
      lVar18 = uVar10 - 0x1e0;
      (moby->rotation).z = (float)dVar25;
      FUN_005e81f0(lVar18,lVar19,lVar17);
      dVar25 = (double)FUN_005e8030(lVar18);
      if ((double)*(float *)((int)pvVar6 + 0x214) - dVar25 < 0.0) {
        dVar25 = (double)*(float *)((int)pvVar6 + 0x214);
      }
      FUN_005e7f98(dVar25,lVar18,lVar18);
      FUN_005e7f54(lVar17,lVar17,lVar18);
      uVar26 = FUN_005e8338((double)*(float *)(puVar8 + 0x2a),
                            (double)*(float *)((int)puVar8 + 0x154));
      dVar25 = (double)FastDiffRots(uVar26,(double)(moby->rotation).z);
      dVar24 = (double)cosf((float)dVar25);
      dVar24 = (double)(float)((double)(float)((double)*(float *)((int)pvVar6 + 0x214) *
                                              0.3490658402442932) * dVar24);
      dVar30 = (double)(float)(dVar24 / (double)(float)((double)g_FrameTime * dVar29));
      dVar25 = (double)FUN_005e8128(dVar25,dVar24,(double)*(float *)((int)pvVar6 + 0x214),
                                    (double)(float)((double)g_FrameTime * dVar29));
      dVar24 = 1.0471975803375244;
      dVar29 = (double)((float)((double)(*(float *)((int)pvVar6 + 0x214) * -0.34906584) * dVar25) /
                       (float)((double)g_FrameTime * dVar29));
      dVar25 = (double)MB_DeltAngSpeed
                                 ((double)(moby->rotation).y,dVar30,
                                  (double)(g_FrameTimeSq * 0.5235988),
                                  (double)(g_FrameTimeSq * 1.0471976),
                                  (double)(float)((double)g_FrameTime * 0.7853981852531433
                                                 ));
      (moby->rotation).y = (float)dVar25;
      dVar25 = (double)MB_DeltAngSpeed
                                 ((double)(moby->rotation).x,dVar29,
                                  (double)(float)((double)g_FrameTimeSq * dVar24),
                                  (double)(float)((double)g_FrameTimeSq * 2.094395160675049),
                                  (double)(g_FrameTime * 1.5707964));
      (moby->rotation).x = (float)dVar25;
    }
    goto LAB_003f235c;
  }
  if (uVar2 != '\x02') {
    if (uVar2 == '\x01') {
      pSVar7 = Splines[*(int *)((int)pvVar6 + 0x24c)];
      if ((*(int *)((int)pvVar6 + 0x248) == -1) ||
         (iVar12 = MB_IsPntInCuboid
                             (&g_heroPosition,(longlong)*(int *)((int)pvVar6 + 0x248)), iVar12 != 0)
         ) {
        lVar17 = lVar11 + 0x10;
        *(undefined4 *)((int)pvVar6 + 0x248) = 0xffffffff;
        MB_PathFollowToPos
                  (0x408f380000000000,0x4014000000000000,0,pSVar7,lVar17,uVar10 - 0x260,
                   uVar10 - 0xac,uVar10 - 0xb0);
        dVar25 = (double)FastIntToDouble(*(undefined4 *)((int)puVar8 + 0x284));
        dVar30 = (double)(float)((double)(float)(dVar25 * (double)pSVar7->points[0].w +
                                                (double)*(float *)(puVar8 + 0x50)) + dVar24);
        dVar25 = (double)FUN_005e8548(lVar17,pSVar7->points + pSVar7->cnt + -1);
        if ((double)((*(float *)((int)pvVar6 + 0x214) * *(float *)((int)pvVar6 + 0x214)) /
                    (float)((double)(g_FrameTimeSq * 10.0) * dVar24)) < dVar25) {
          fVar3 = g_FrameTimeSq * 10.0 + *(float *)((int)pvVar6 + 0x214);
          *(float *)((int)pvVar6 + 0x214) = fVar3;
          if ((float)((double)g_FrameTime * dVar29) < fVar3) {
            *(float *)((int)pvVar6 + 0x214) = (float)((double)g_FrameTime * dVar29);
          }
        }
        else {
          fVar3 = -(g_FrameTimeSq * 10.0 - *(float *)((int)pvVar6 + 0x214));
          *(float *)((int)pvVar6 + 0x214) = fVar3;
          if (fVar3 < DAT_0085433c * g_FrameTime) {
            *(float *)((int)pvVar6 + 0x214) = DAT_0085433c * g_FrameTime;
          }
        }
        uVar13 = FastDoubleToInt((double)(float)(dVar30 / (double)pSVar7->points[0].w));
        *(undefined4 *)((int)puVar8 + 0x284) = uVar13;
        dVar25 = (double)FastIntToDouble();
        dVar24 = (double)pSVar7->points[0].w;
        iVar12 = *(int *)((int)puVar8 + 0x284);
        *(float *)(puVar8 + 0x50) = (float)(-(double)(float)(dVar25 * dVar24 - dVar30) / dVar24);
        if (pSVar7->cnt + -1 <= iVar12) {
          if ((*(int *)((int)pvVar6 + 0x134) != -1) &&
             (*(float *)((int)pvVar6 + 0x214) <= DAT_0085433c * g_FrameTime)) {
            iVar12 = *(int *)((int)pvVar6 + 0x130);
            auVar31 = ZEXT416(0xffffffff);
            auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
            *(undefined4 *)((int)pvVar6 + 0x23c) = 0;
            auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
            (moby->pos).x = *(f32 *)(iVar12 + 0x10);
            (moby->pos).y = *(f32 *)(iVar12 + 0x14);
            (moby->pos).z = *(f32 *)(iVar12 + 0x18);
            (moby->pos).w = *(f32 *)(iVar12 + 0x1c);
            *(undefined4 *)((int)pvVar6 + 0x120) = 1;
            moby->setByGroup = '\x02';
            moby->state = '\x04';
            auVar31 = loadVectorLeftIndexed(0x30,0x3f0530);
            auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar31 = vectorMultiplyAddFloatingPoint
                                (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 |
                                         auVar31 << 0x60,auVar32);
            auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
            auVar31 = vectorSplatHalfWord(auVar31,1);
            uVar14 = storeVectorElementHalfWordIndexed(auVar31,0x206,uVar23);
            *(undefined2 *)((int)pvVar6 + 0x206) = uVar14;
            goto LAB_003f235c;
          }
          if (*(float *)((int)pvVar6 + 0x214) <= DAT_0085433c * g_FrameTime) {
            trapWord(0x1f,in_LR,in_LR);
            return;
          }
          iVar12 = pSVar7->cnt + -2;
          *(int *)((int)puVar8 + 0x284) = iVar12;
          *(undefined4 *)(puVar8 + 0x50) = 0x3f800000;
        }
        lVar18 = uVar10 - 0x260;
        FUN_005e81f0(lVar18,pSVar7->points + iVar12 + 1,pSVar7->points + iVar12);
        fVar3 = *(float *)(puVar8 + 0x50);
        *(float *)(puVar8 + 0x1a) = *(float *)(puVar8 + 0x1a) * fVar3;
        *(float *)((int)puVar8 + 0xd4) = *(float *)((int)puVar8 + 0xd4) * fVar3;
        *(float *)(puVar8 + 0x1b) = *(float *)(puVar8 + 0x1b) * fVar3;
        FUN_005e7f54(lVar18,lVar18,pSVar7->points + *(int *)((int)puVar8 + 0x284));
        uVar23 = (ulonglong)*(uint *)((int)puVar8 + 0x284) + 1;
        if ((int)uVar23 < pSVar7->cnt + -8) {
          iVar12 = (int)((uVar23 & 0xffffffff) << 4);
          dVar25 = (double)(moby->rotation).z;
          uVar26 = FUN_005e8338((double)(*(float *)((int)&pSVar7->points[0].x + iVar12) -
                                        (moby->pos).x),
                                (double)(*(float *)((int)&pSVar7->points[0].y + iVar12) -
                                        (moby->pos).y));
          dVar25 = (double)MB_DeltAngSpeed
                                     (dVar25,uVar26,0x3f847ae140000000,0x3fd3333340000000,
                                      0x3fb99999a0000000);
        }
        else {
          dVar25 = (double)(moby->rotation).z;
          uVar26 = FUN_005e8338((double)(*(float *)(puVar8 + 0x46) - (moby->pos).x),
                                (double)(*(float *)((int)puVar8 + 0x234) - (moby->pos).y));
          dVar25 = (double)MB_DeltAngSpeed
                                     (dVar25,uVar26,0x3f847ae140000000,0x3fd3333340000000,
                                      0x3fb99999a0000000);
        }
        lVar18 = uVar10 - 0x270;
        (moby->rotation).z = (float)dVar25;
        FUN_005e81f0(lVar18,uVar10 - 0x260,lVar17);
        dVar25 = (double)FUN_005e8030(lVar18);
        if ((double)*(float *)((int)pvVar6 + 0x214) - dVar25 < 0.0) {
          dVar25 = (double)*(float *)((int)pvVar6 + 0x214);
        }
        FUN_005e7f98(dVar25,lVar18,lVar18);
        FUN_005e7f54(lVar17,lVar17,lVar18);
        uVar26 = FUN_005e8338((double)*(float *)(puVar8 + 0x18),
                              (double)*(float *)((int)puVar8 + 0xc4));
        dVar25 = (double)FastDiffRots(uVar26,(double)(moby->rotation).z);
        dVar24 = (double)cosf((float)dVar25);
        dVar24 = (double)(float)((double)(*(float *)((int)pvVar6 + 0x214) * 0.34906584) * dVar24);
        dVar30 = (double)(float)(dVar24 / (double)(float)((double)g_FrameTime * dVar29));
        dVar25 = (double)FUN_005e8128(dVar25,dVar24,0x3fd6571840000000,
                                      (double)(float)((double)g_FrameTime * dVar29));
        dVar24 = 1.0471975803375244;
        dVar29 = (double)((float)((double)(*(float *)((int)pvVar6 + 0x214) * -0.34906584) * dVar25)
                         / (float)((double)g_FrameTime * dVar29));
        dVar25 = (double)MB_DeltAngSpeed
                                   ((double)(moby->rotation).y,dVar30,
                                    (double)(g_FrameTimeSq * 0.5235988),
                                    (double)(g_FrameTimeSq * 1.0471976),
                                    (double)(float)((double)g_FrameTime *
                                                   0.7853981852531433));
        (moby->rotation).y = (float)dVar25;
        dVar25 = (double)MB_DeltAngSpeed
                                   ((double)(moby->rotation).x,dVar29,
                                    (double)(float)((double)g_FrameTimeSq * dVar24),
                                    (double)(float)((double)g_FrameTimeSq * 2.094395160675049),
                                    (double)(g_FrameTime * 1.5707964));
        (moby->rotation).x = (float)dVar25;
      }
    }
    else if (uVar2 == '\0') {
      moby->shadow = ' ';
      *(undefined4 *)((int)pvVar6 + 0x20) = 0x40400000;
      uVar14 = FastDoubleToInt(0x4008000000000000);
      *(undefined1 *)((int)pvVar6 + 0x28) = 2;
      *(undefined1 *)((int)pvVar6 + 0x2e) = 1;
      *(undefined2 *)((int)pvVar6 + 0x24) = uVar14;
      *(undefined1 *)((int)pvVar6 + 0x58) = 0x19;
      *(undefined1 *)((int)pvVar6 + 0x59) = 1;
      *(undefined1 *)((int)pvVar6 + 0x5a) = 6;
      *(undefined1 *)((int)pvVar6 + 0x29) = 0;
      pSVar7 = Splines[*(int *)((int)pvVar6 + 0x134)];
      *(Spline **)((int)pvVar6 + 0x130) = pSVar7;
      if (*(int *)((int)pvVar6 + 0x164) != -1) {
        *(Spline **)((int)pvVar6 + 0x160) = Splines[*(int *)((int)pvVar6 + 0x164)];
      }
      (moby->pos).x = pSVar7->points[0].x;
      (moby->pos).y = pSVar7->points[0].y;
      (moby->pos).z = pSVar7->points[0].z;
      fVar3 = pSVar7->points[0].w;
      *(undefined4 *)((int)pvVar6 + 0x120) = 1;
      (moby->pos).w = fVar3;
      *(undefined4 *)((int)pvVar6 + 0x214) = 0;
      *(undefined4 *)((int)pvVar6 + 0x218) = 0;
      *(undefined4 *)((int)pvVar6 + 0x21c) = 0;
      *(undefined4 *)((int)pvVar6 + 0x23c) = 0;
      AttachManipulator(moby,0,(int)pvVar6 + 0x180);
      AttachManipulator(moby,1,(int)pvVar6 + 0x1c0);
      fVar4 = (moby->rotation).z;
      *(undefined4 *)((int)pvVar6 + 0x224) = 0;
      *(f32 *)((int)pvVar6 + 0x220) = fVar4;
      fVar4 = (moby->rotation).y;
      *(undefined4 *)((int)pvVar6 + 0x22c) = 0;
      *(undefined4 *)((int)pvVar6 + 0x250) = 0xffffffff;
      sVar5 = moby->drawDistance;
      *(undefined4 *)((int)pvVar6 + 0x240) = 0;
      *(f32 *)((int)pvVar6 + 0x228) = fVar4;
      if (sVar5 < 0x80) {
        moby->drawDistance = 0x80;
      }
      if (*(int *)((int)pvVar6 + 0x238) != -1) {
        pMVar22 = g_MobyInstance + *(int *)((int)pvVar6 + 0x238);
        MB_SetAnimation(pMVar22,8,0,0);
        pMVar22->updateDistance = '\0';
        pMVar22->collision = (ushort *)0x0;
        pMVar22->modeBits =
             pMVar22->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
      }
      if (((g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) ||
          (*(int *)((int)pvVar6 + 0x24c) == -1)) || (*(int *)((int)pvVar6 + 0x248) == -1)) {
        moby->state = '\x02';
      }
      else {
        pSVar7 = Splines[*(int *)((int)pvVar6 + 0x24c)];
        if (0 < pSVar7->cnt + -2) {
          iVar12 = 0;
          pSVar20 = pSVar7;
          do {
            dVar25 = (double)FUN_005e8548(pSVar20->points,pSVar20->points + 1);
            pSVar20->points[0].w = (float)dVar25;
            iVar12 = iVar12 + 1;
            pSVar20 = (Spline *)pSVar20->points;
          } while (iVar12 < pSVar7->cnt + -2);
        }
        (moby->pos).x = pSVar7->points[0].x;
        (moby->pos).y = pSVar7->points[0].y;
        (moby->pos).z = pSVar7->points[0].z;
        fVar3 = pSVar7->points[0].w;
        moby->state = '\x01';
        (moby->pos).w = fVar3;
      }
    }
    goto LAB_003f235c;
  }
  piVar16 = (int *)((int)pvVar6 + 0x150U +
                   ((uint)(ZERO_MASK(*(int *)((int)pvVar6 + 0x23c))) &
                   (int)pvVar6 + (0x120 - ((int)pvVar6 + 0x150U))));
  iVar12 = *piVar16;
  uVar26 = FUN_005e8338((double)(*(float *)(puVar8 + 0x46) - (moby->pos).x),
                        (double)(*(float *)((int)puVar8 + 0x234) - (moby->pos).y));
  dVar25 = (double)MB_DeltAngSpeed
                             (dVar25,uVar26,0x3f847ae140000000,0x3fd3333340000000,0x3fb99999a0000000
                             );
  (moby->rotation).z = (float)dVar25;
  iVar21 = *(int *)((int)pvVar6 + 0x240);
  dVar25 = 3.1415927410125732;
  dVar30 = 12.566370964050293;
  if ((((iVar21 == 0) || (*(short *)(iVar21 + 0xa6) != 0x350)) || (*(char *)(iVar21 + 0x20) == -2))
     || (*(char *)(iVar21 + 0x20) == -3)) {
    GetBonePosition(lVar11,0,uVar10 - 0x250);
    FastVecSub(uVar10 - 0x220,uVar10 - 0x100,uVar10 - 0x250);
    *(undefined4 *)(puVar8 + 0x1e) = *(undefined4 *)(puVar8 + 0x22);
    *(undefined4 *)((int)puVar8 + 0xf4) = *(undefined4 *)((int)puVar8 + 0x114);
    *(undefined4 *)(puVar8 + 0x1f) = *(undefined4 *)(puVar8 + 0x23);
    *(undefined4 *)((int)puVar8 + 0xfc) = *(undefined4 *)((int)puVar8 + 0x11c);
    FastNormalizeRMtx4(uVar10 - 0x140,lVar11 + 0xc0);
    FUN_005e825c(uVar10 - 0x240,uVar10 - 0x240,uVar10 - 0x140);
    dVar28 = (double)*(float *)((int)pvVar6 + 0x220);
    uVar26 = FUN_005e8338((double)*(float *)(puVar8 + 0x1e),(double)*(float *)((int)puVar8 + 0xf4));
    dVar27 = 6.2831854820251465;
    dVar30 = (double)MB_DeltAngSpeed
                               (dVar28,uVar26,
                                (double)(float)((double)g_FrameTimeSq * 6.2831854820251465),
                                (double)(float)((double)g_FrameTimeSq * dVar30),
                                (double)(g_FrameTime * 6.2831855));
    *(float *)((int)pvVar6 + 0x220) = (float)dVar30;
    dVar28 = (double)*(float *)((int)pvVar6 + 0x228);
    dVar30 = (double)FUN_005e8338((double)SQRT(*(float *)(puVar8 + 0x1e) * *(float *)(puVar8 + 0x1e)
                                               + *(float *)((int)puVar8 + 0xf4) *
                                                 *(float *)((int)puVar8 + 0xf4)),
                                  (double)*(float *)(puVar8 + 0x1f));
    dVar25 = (double)MB_DeltAngSpeed
                               (dVar28,-dVar30,(double)(float)((double)g_FrameTimeSq * dVar25),
                                (double)(float)((double)g_FrameTimeSq * dVar27),
                                (double)(g_FrameTime * 1.5707964));
    *(float *)((int)pvVar6 + 0x228) = (float)dVar25;
    FastQuaternionToEuler((double)*(float *)((int)pvVar6 + 0x220),uVar23 + 400,2);
    FastQuaternionToEuler((double)*(float *)((int)pvVar6 + 0x228),uVar23 + 0x1d0,2);
    *(undefined4 *)((int)pvVar6 + 0x240) = 0;
  }
  else {
    GetBonePosition(lVar11,0,uVar10 - 0x250);
    FastVecSub
              (uVar10 - 0x210,(ulonglong)*(uint *)((int)pvVar6 + 0x240) + 0x10,uVar10 - 0x250);
    *(undefined4 *)(puVar8 + 0x1e) = *(undefined4 *)(puVar8 + 0x24);
    *(undefined4 *)((int)puVar8 + 0xf4) = *(undefined4 *)((int)puVar8 + 0x124);
    *(undefined4 *)(puVar8 + 0x1f) = *(undefined4 *)(puVar8 + 0x25);
    *(undefined4 *)((int)puVar8 + 0xfc) = *(undefined4 *)((int)puVar8 + 300);
    FastNormalizeRMtx4(uVar10 - 0x140,lVar11 + 0xc0);
    FUN_005e825c(uVar10 - 0x240,uVar10 - 0x240,uVar10 - 0x140);
    dVar28 = (double)*(float *)((int)pvVar6 + 0x220);
    uVar26 = FUN_005e8338((double)*(float *)(puVar8 + 0x1e),(double)*(float *)((int)puVar8 + 0xf4));
    dVar27 = 6.2831854820251465;
    dVar30 = (double)MB_DeltAngSpeed
                               (dVar28,uVar26,
                                (double)(float)((double)g_FrameTimeSq * 6.2831854820251465),
                                (double)(float)((double)g_FrameTimeSq * dVar30),
                                (double)(g_FrameTime * 6.2831855));
    *(float *)((int)pvVar6 + 0x220) = (float)dVar30;
    dVar28 = (double)*(float *)((int)pvVar6 + 0x228);
    dVar30 = (double)FUN_005e8338((double)SQRT(*(float *)(puVar8 + 0x1e) * *(float *)(puVar8 + 0x1e)
                                               + *(float *)((int)puVar8 + 0xf4) *
                                                 *(float *)((int)puVar8 + 0xf4)),
                                  (double)*(float *)(puVar8 + 0x1f));
    dVar25 = (double)MB_DeltAngSpeed
                               (dVar28,-dVar30,(double)(float)((double)g_FrameTimeSq * dVar25),
                                (double)(float)((double)g_FrameTimeSq * dVar27),
                                (double)(g_FrameTime * 1.5707964));
    *(float *)((int)pvVar6 + 0x228) = (float)dVar25;
    FastQuaternionToEuler((double)*(float *)((int)pvVar6 + 0x220),uVar23 + 400,2);
    FastQuaternionToEuler((double)*(float *)((int)pvVar6 + 0x228),uVar23 + 0x1d0,2);
  }
  if ((0 < iVar12) && (iVar12 < *(int *)piVar16[4] + -1)) {
    dVar25 = (double)FUN_005e8588((int *)piVar16[4] + iVar12 * 4 + 4,uVar10 - 0x100);
    if (((dVar25 < dVar29) &&
        ((ABS(*(float *)(puVar8 + 0x47) - (moby->pos).z) < 10.0 &&
         (dVar29 = (double)FUN_005e8548(piVar16[4] + iVar12 * 0x10 + 0x20,uVar10 - 0x100),
         dVar25 < dVar29)))) && (iVar12 < *(int *)piVar16[4] + -2)) {
      *piVar16 = *piVar16 + 1;
    }
  }
  iVar12 = iVar12 * 0x10;
  lVar17 = lVar11 + 0x10;
  FUN_005e81f0(uVar10 - 0x230,piVar16[4] + iVar12 + 0x10,lVar17);
  dVar25 = (double)FUN_005e8030(uVar10 - 0x230);
  dVar29 = (double)g_FrameTimeSq;
  dVar30 = (double)*(float *)((int)pvVar6 + 0x214);
  dVar27 = 4.0;
  if (dVar25 < (double)((float)(dVar30 * dVar30) / (float)((double)(float)(dVar29 * 4.0) * dVar24)))
  {
LAB_003f14d8:
    fVar3 = -(float)(dVar29 * dVar27 - dVar30);
    *(float *)((int)pvVar6 + 0x214) = fVar3;
    if (fVar3 < 0.0) {
      *(undefined4 *)((int)pvVar6 + 0x214) = 0;
    }
  }
  else {
    dVar25 = (double)FUN_005e8548(piVar16[4] + iVar12 + 0x10,uVar10 - 0x100);
    dVar24 = (double)FUN_005e8548(lVar17,uVar10 - 0x100);
    if (dVar25 < dVar24) {
      dVar29 = (double)g_FrameTimeSq;
      dVar30 = (double)*(float *)((int)pvVar6 + 0x214);
      goto LAB_003f14d8;
    }
    fVar3 = (float)((double)g_FrameTimeSq * dVar27 + (double)*(float *)((int)pvVar6 + 0x214));
    *(float *)((int)pvVar6 + 0x214) = fVar3;
    if (g_FrameTime * 10.0 < fVar3) {
      *(float *)((int)pvVar6 + 0x214) = g_FrameTime * 10.0;
    }
  }
  dVar25 = (double)FUN_005e8548(piVar16[4] + iVar12 + 0x10,uVar10 - 0x100);
  dVar24 = (double)FUN_005e8548(lVar17,uVar10 - 0x100);
  if (dVar24 <= dVar25) {
    FUN_005e7f98((double)*(float *)((int)pvVar6 + 0x214),uVar10 - 0x230,uVar10 - 0x230);
  }
  else {
    FUN_005e7f98(-(double)*(float *)((int)pvVar6 + 0x214),uVar10 - 0x230,uVar10 - 0x230);
  }
  FUN_005e7f54(lVar17,lVar17,uVar10 - 0x230);
  uVar26 = FUN_005e8338((double)*(float *)(puVar8 + 0x20),(double)*(float *)((int)puVar8 + 0x104));
  dVar25 = (double)FastDiffRots(uVar26,(double)(moby->rotation).z);
  dVar24 = (double)cosf((float)dVar25);
  dVar29 = 10.0;
  dVar24 = (double)(float)((double)(*(float *)((int)pvVar6 + 0x214) * 0.34906584) * dVar24);
  dVar30 = (double)(float)(dVar24 / (double)(g_FrameTime * 10.0));
  dVar25 = (double)FUN_005e8128(dVar25,dVar24,(double)(g_FrameTime * 10.0));
  dVar24 = 1.0471975803375244;
  dVar29 = (double)((float)((double)(*(float *)((int)pvVar6 + 0x214) * -0.34906584) * dVar25) /
                   (float)((double)g_FrameTime * dVar29));
  dVar25 = (double)MB_DeltAngSpeed
                             ((double)(moby->rotation).y,dVar30,(double)(g_FrameTimeSq * 0.5235988),
                              (double)(g_FrameTimeSq * 1.0471976),
                              (double)(float)((double)g_FrameTime * 0.7853981852531433));
  (moby->rotation).y = (float)dVar25;
  dVar25 = (double)MB_DeltAngSpeed
                             ((double)(moby->rotation).x,dVar29,
                              (double)(float)((double)g_FrameTimeSq * dVar24),
                              (double)(float)((double)g_FrameTimeSq * 2.094395160675049),
                              (double)(g_FrameTime * 1.5707964));
  iVar12 = *(int *)((int)pvVar6 + 0x23c);
  (moby->rotation).x = (float)dVar25;
  if (iVar12 == 0) {
    iVar12 = *(int *)((int)pvVar6 + 0x20c);
  }
  else {
    iVar12 = *(int *)((int)pvVar6 + 0x244);
  }
  iVar12 = MB_IsPntInCuboid((Vec4 *)(puVar8 + 0x46),(longlong)iVar12);
  if (iVar12 == 0) {
    iVar12 = MB_IsPntInCuboid
                       ((Vec4 *)(puVar8 + 0x46),(longlong)*(int *)((int)pvVar6 + 0x208));
    if ((iVar12 != 0) &&
       ((iVar12 = FastDecTimerS16(uVar23 + 0x204), iVar12 != 0 ||
        ((*(int *)((int)pvVar6 + 0x240) == 0 && (*(int *)((int)pvVar6 + 0x254) != 0)))))) {
      auVar31 = ZEXT416(0xffffffff);
      auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
      auVar31 = loadVectorLeftIndexed(100,0x3f0530);
      auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
      lVar17 = uVar10 - 0x200;
      auVar31 = vectorMultiplyAddFloatingPoint
                          (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                           auVar32);
      auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
      auVar31 = vectorSplatHalfWord(auVar31,1);
      uVar14 = storeVectorElementHalfWordIndexed(auVar31,0x204,uVar23);
      *(undefined2 *)((int)pvVar6 + 0x204) = uVar14;
      *(undefined4 *)(puVar8 + 0x28) = *(undefined4 *)(puVar8 + 0x46);
      *(undefined4 *)((int)puVar8 + 0x144) = *(undefined4 *)((int)puVar8 + 0x234);
      *(undefined4 *)(puVar8 + 0x29) = *(undefined4 *)(puVar8 + 0x47);
      *(undefined4 *)((int)puVar8 + 0x14c) = *(undefined4 *)((int)puVar8 + 0x23c);
      FUN_005e81f0(lVar17,uVar10 - 0x1f0,uVar10 - 0x250);
      FUN_005e84c0((double)(g_FrameTime * 6.0),lVar17,lVar17);
      fVar3 = animationSpeed;
      *(undefined4 *)(puVar8 + 0x27) = 0;
      puVar8[0x52] = (longlong)(int)(fVar3 * 240.5);
      uVar13 = FUN_00486008((double)*(float *)(puVar8 + 0x47),lVar17,uVar10 - 0x250,lVar11,
                            *(undefined4 *)((int)puVar8 + 0x294));
      *(undefined4 *)((int)pvVar6 + 0x240) = uVar13;
    }
  }
  else {
    bVar1 = *(int *)((int)pvVar6 + 0x23c) == 0;
    if (bVar1) {
      iVar12 = *(int *)((int)pvVar6 + 0x230);
    }
    else {
      iVar12 = *(int *)((int)pvVar6 + 0x234);
    }
    if (iVar12 != -1) {
      if (bVar1) {
        iVar12 = *(int *)((int)pvVar6 + 0x230);
      }
      else {
        iVar12 = *(int *)((int)pvVar6 + 0x234);
      }
      iVar21 = 0;
      pSVar7 = Splines[iVar12];
      pSVar20 = pSVar7;
      if (0 < pSVar7->cnt + -2) {
        do {
          dVar25 = (double)FUN_005e8548(pSVar20->points,pSVar20->points + 1);
          pSVar20->points[0].w = (float)dVar25;
          iVar21 = iVar21 + 1;
          pSVar20 = (Spline *)pSVar20->points;
        } while (iVar21 < pSVar7->cnt + -2);
      }
    }
    auVar31 = ZEXT416(0xffffffff);
    auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
    moby->setByGroup = '\x03';
    moby->state = '\x04';
    auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
    auVar31 = loadVectorLeftIndexed(0x30,0x3f0530);
    auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar31 = vectorMultiplyAddFloatingPoint
                        (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                         auVar32);
    auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
    auVar31 = vectorSplatHalfWord(auVar31,1);
    uVar14 = storeVectorElementHalfWordIndexed(auVar31,0x206,uVar23);
    *(undefined2 *)((int)pvVar6 + 0x206) = uVar14;
  }
LAB_003f235c:
  if ((moby->enabled != '\0') &&
     (dVar25 = (double)FUN_005e8548(lVar11 + 0x10,0x951500), dVar25 < 40.0)) {
    MB_SetZBoundsFromGround(lVar11);
  }
  dVar24 = (double)(moby->pos).z;
  dVar25 = (double)cosf(*(float *)((int)pvVar6 + 0x210));
  (moby->pos).z = -(float)((double)DAT_00854338 * dVar25 - dVar24);
  dVar25 = (double)FastWrapRot
                             (*(float *)((int)pvVar6 + 0x210),
                              6.2831855 / (animationSpeed * DAT_00854334 * 60.0));
  *(float *)((int)pvVar6 + 0x210) = (float)dVar25;
  dVar24 = (double)(moby->pos).z;
  dVar25 = (double)cosf((float)dVar25);
  (moby->pos).z = (float)((double)DAT_00854338 * dVar25 + dVar24);
  if (*(int *)((int)pvVar6 + 0x238) != -1) {
    pMVar22 = g_MobyInstance + *(int *)((int)pvVar6 + 0x238);
    (pMVar22->pos).x = (moby->pos).x;
    (pMVar22->pos).y = (moby->pos).y;
    (pMVar22->pos).z = (moby->pos).z;
    (pMVar22->pos).w = (moby->pos).w;
    (pMVar22->rotation).x = (moby->rotation).x;
    (pMVar22->rotation).y = (moby->rotation).y;
    (pMVar22->rotation).z = (moby->rotation).z;
    (pMVar22->rotation).w = (moby->rotation).w;
    UpdateMobyAnimFrame(pMVar22);
    UpdateMobyTransform(pMVar22);
    pMVar22->modeBits = pMVar22->modeBits | (NO_POST_UPDATE|NO_UPDATE);
  }
                    /* WARNING: Read-only address (ram,0x003f05b0) is written */
                    /* WARNING: Read-only address (ram,0x003f05c0) is written */
                    /* WARNING: Read-only address (ram,0x003f05e0) is written */
                    /* WARNING: Read-only address (ram,0x003f05f0) is written */
  return;
}


