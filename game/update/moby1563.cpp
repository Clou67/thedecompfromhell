// game/update/moby1563.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x29a288-0x29bdcc
#include "game/update/moby1563.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/initspace.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby1564.h"
#include "game/update/moby185.h"
#include "game/update/moby804.h"
#include "idol/fastfunc.h"

// 0x029a288 (0x290 bytes)
// strings: 0029a270: '?fffAx'

void M1563_0029a288(undefined8 param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> local_80;
  GPiece<32> local_70;
  
  iVar5 = 0;
  iVar7 = 0;
  uVar9 = 0;
  uVar10 = 0x3ff0000000000000;
  uVar8 = 0x3fecccccc0000000;
  auVar14 = loadVectorLeftIndexed(0xc,0x29a268);
  uVar11 = 0x4010000000000000;
  auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
  do {
    MB_randInt(0x10);
    MB_randInt(2);
    uVar2 = SpawnPart_23(uVar9,uVar10,uVar8,param_1,local_80);
    iVar6 = (int)uVar2;
    if (iVar6 != 0) {
      auVar12 = ZEXT416(0xffffffff);
      auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
      auVar12 = vectorShiftLeftIntegerWord(auVar12,auVar12);
      auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar12 = vectorMultiplyAddFloatingPoint(auVar13,auVar14,auVar12);
      auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar12,0);
      auVar12 = vectorSplatHalfWord(auVar12,1);
      uVar1 = storeVectorElementHalfWordIndexed(auVar12,10,uVar2);
      *(undefined2 *)(iVar6 + 10) = uVar1;
      cVar3 = FastDoubleToInt(uVar11);
      *(char *)(iVar6 + 9) = cVar3 + '@';
      *(undefined4 *)(iVar6 + 0x24) = 2;
      *(undefined1 *)(iVar6 + 0x2a) = 0x7f;
      *(char *)(iVar6 + 0x2b) = (char)*(undefined2 *)(iVar6 + 10);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  uVar8 = 0x3fef0a3d80000000;
  auVar14 = loadVectorLeftIndexed(0x18,0x29a268);
  auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
  do {
    uVar2 = SpawnPart_23(uVar9,uVar10,uVar8,param_2,local_70);
    iVar5 = (int)uVar2;
    if (iVar5 != 0) {
      cVar3 = FastDoubleToInt(uVar11);
      auVar12 = ZEXT416(0xffffffff);
      auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
      auVar12 = vectorShiftLeftIntegerWord(auVar12,auVar12);
      *(char *)(iVar5 + 9) = cVar3 + '@';
      auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar12 = vectorMultiplyAddFloatingPoint(auVar13,auVar14,auVar12);
      auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar12,0);
      auVar12 = vectorSplatHalfWord(auVar12,1);
      uVar1 = storeVectorElementHalfWordIndexed(auVar12,10,uVar2);
      *(undefined2 *)(iVar5 + 10) = uVar1;
      uVar4 = MB_randInt(0xff);
      *(undefined1 *)(iVar5 + 8) = uVar4;
      *(undefined4 *)(iVar5 + 0x24) = 2;
      *(undefined1 *)(iVar5 + 0x2a) = 0x7f;
      *(char *)(iVar5 + 0x2b) = (char)*(undefined2 *)(iVar5 + 10);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 3);
  return;
}


// 0x029a5a8 (0x1824 bytes)
// inlined: FastRSqrt @0x29b680, FastAtan2 @0x29b788, FastAtan2 @0x29b928
/* Moby 1563 */

void UpdateMoby_1563(MobyInstance *moby)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  MobyInstance *pMVar6;
  float *pfVar7;
  float fVar8;
  undefined2 uVar9;
  ulonglong *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  undefined4 uVar17;
  MobyInstance *pMVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined8 uVar21;
  char cVar22;
  longlong lVar23;
  ulonglong uVar24;
  float *pfVar26;
  longlong lVar25;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  undefined4 *puVar27;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  longlong lVar28;
  ulonglong unaff_r29;
  int iVar29;
  ulonglong unaff_r30;
  int iVar30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar34;
  ulonglong in_f29;
  double dVar35;
  undefined8 uVar36;
  ulonglong in_f30;
  double dVar37;
  undefined8 uVar38;
  ulonglong in_f31;
  double dVar39;
  undefined8 uVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  float local_110 [68];
  
  uVar19 = ZEXT48(&stack0x00000000);
  lVar20 = uVar19 - 0x300;
  puVar10 = (ulonglong *)lVar20;
  *puVar10 = uVar19;
  puVar10[0x62] = in_LR;
  puVar10[0x5b] = in_f27;
  puVar10[0x5c] = in_f28;
  puVar10[0x5d] = in_f29;
  puVar10[0x5e] = in_f30;
  puVar10[0x5f] = in_f31;
  puVar10[0x5a] = unaff_r31;
  puVar10[0x55] = unaff_r26;
  bVar2 = moby->state;
  puVar10[0x59] = unaff_r30;
  puVar10[0x58] = unaff_r29;
  puVar10[0x57] = unaff_r28;
  puVar10[0x56] = unaff_r27;
  puVar10[0x54] = unaff_r25;
  puVar10[0x53] = unaff_r24;
  puVar10[0x52] = unaff_r23;
  puVar10[0x51] = unaff_r22;
  iVar30 = g_SpaceSceneFrame;
  fVar1 = animationSpeed;
  if (bVar2 == 0) {
    DAT_007ab918 = 0x163;
    DAT_007ab91c = 0x16d;
    DAT_007ab940 = 200;
    DAT_007ab93c = 0x3c;
    DAT_007ab944 = 0xbe;
    DAT_007ab948 = 0x16d;
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if ((bVar2 < 2) && (g_gameMode == GAME_MODE_SCENE)) {
    if (g_SceneId == 4) {
      pMVar6 = DAT_00fadb88;
      pMVar18 = MobyUpdateChainStart;
      if (g_SpaceSceneFrame == 1) {
        for (; (pMVar6 = DAT_00fadb88, pMVar18 != (MobyInstance *)0x0 &&
               (pMVar6 = pMVar18, pMVar18->oClass != 0x59b));
            pMVar18 = (MobyInstance *)pMVar18->pChain) {
        }
      }
      DAT_00fadb88 = pMVar6;
      puVar10[0x4c] = (longlong)(int)(animationSpeed * 500.5);
      if ((*(int *)((int)puVar10 + 0x264) <= iVar30) &&
         (puVar10[0x4c] = (longlong)(int)(fVar1 * 860.5), iVar30 <= *(int *)((int)puVar10 + 0x264)))
      {
        *(undefined4 *)((int)puVar10 + 0x20c) = 0x49927c00;
        *(undefined4 *)(puVar10 + 0x43) = 0x48c35000;
        *(undefined4 *)((int)puVar10 + 0x21c) = 0x48435000;
        *(undefined4 *)(puVar10 + 0x42) = 0x48f42400;
        iVar30 = 3;
        *(undefined4 *)((int)puVar10 + 0x214) = 0x49435000;
        lVar28 = uVar19 - 0x2f4;
        dVar39 = 645.5;
        puVar27 = &g_SceneSavedCamFlags;
        dVar37 = 736.5;
        dVar35 = 730.5;
        dVar34 = 0.4000000059604645;
        do {
          if (puVar27[0x5e] != 0) {
            GetBonePosition(puVar27[0x5e],0,uVar19 - 0x240);
            iVar29 = g_SpaceSceneFrame;
            dVar32 = (double)*(float *)((int)lVar28 + 0x200);
            dVar33 = (double)animationSpeed;
            if (((iVar30 != 3) ||
                (puVar10[0x4c] = (longlong)(int)(dVar33 * dVar39),
                iVar29 < *(int *)((int)puVar10 + 0x264))) ||
               (puVar10[0x4c] = (longlong)(int)(dVar33 * dVar37),
               *(int *)((int)puVar10 + 0x264) < iVar29)) {
              if (((iVar30 == 5) &&
                  (puVar10[0x4c] = (longlong)(int)(dVar33 * dVar39),
                  *(int *)((int)puVar10 + 0x264) <= iVar29)) &&
                 (puVar10[0x4c] = (longlong)(int)(dVar33 * dVar35),
                 iVar29 <= *(int *)((int)puVar10 + 0x264))) {
                dVar32 = 300000.0;
              }
              MB_SpawnSparksPair
                        (dVar32,(double)(float)(dVar32 * dVar34),uVar19 - 0x240,uVar19 - 0x240,
                         &DAT_00a15d30);
            }
          }
          iVar30 = iVar30 + 1;
          puVar27 = puVar27 + 1;
          lVar28 = lVar28 + 4;
        } while (iVar30 < 8);
      }
      iVar30 = g_SpaceSceneFrame;
      fVar1 = animationSpeed;
      puVar10[0x4c] = (longlong)(int)(animationSpeed * 706.5);
      iVar29 = g_SpaceSceneMobys[7];
      uVar40 = 0x4020000000000000;
      uVar36 = 0x403e000000000000;
      uVar38 = 0x4022000000000000;
      if ((iVar30 == *(int *)((int)puVar10 + 0x264)) && (g_SpaceSceneMobys[7] != 0)) {
        GetBonePosition(g_SpaceSceneMobys[7],0,uVar19 - 0x230);
        *(undefined4 *)((int)puVar10 + 0xec) = 0;
        *(undefined4 *)((int)puVar10 + 0xe4) = 0;
        *(undefined4 *)(puVar10 + 0x1c) = 0;
        *(undefined4 *)(puVar10 + 0x1d) = 0x3f800000;
        puVar10[0x12] = 0xffffffffffffffff;
        puVar10[0x14] = 0;
        puVar10[0x15] = 0xf;
        puVar10[0x16] = 0xffffffffffffffff;
        puVar10[0x17] = 0;
        MB_genericExplosion
                  (0,0,uVar40,0x4010000000000000,uVar38,0x3ff0000000000000,uVar36,iVar29,
                   uVar19 - 0x220,uVar19 - 0x230,0,0xffffffffffffffff,0x32,0x19,0x19);
        fVar1 = animationSpeed;
        iVar30 = g_SpaceSceneFrame;
      }
      puVar10[0x4c] = (longlong)(int)(fVar1 * 710.5);
      iVar29 = g_SpaceSceneMobys[4];
      if ((iVar30 == *(int *)((int)puVar10 + 0x264)) && (g_SpaceSceneMobys[4] != 0)) {
        GetBonePosition(g_SpaceSceneMobys[4],0,uVar19 - 0x210);
        *(undefined4 *)((int)puVar10 + 0x10c) = 0;
        *(undefined4 *)((int)puVar10 + 0x104) = 0;
        *(undefined4 *)(puVar10 + 0x20) = 0;
        *(undefined4 *)(puVar10 + 0x21) = 0x3f800000;
        puVar10[0x12] = 0xffffffffffffffff;
        puVar10[0x14] = 0;
        puVar10[0x15] = 0xf;
        puVar10[0x16] = 0xffffffffffffffff;
        puVar10[0x17] = 0;
        MB_genericExplosion
                  (0,0,uVar40,0x4010000000000000,uVar38,0x3ff0000000000000,uVar36,iVar29,
                   uVar19 - 0x200,uVar19 - 0x210,0,0xffffffffffffffff,0x32,0x19,0x19);
        fVar1 = animationSpeed;
        iVar30 = g_SpaceSceneFrame;
      }
      puVar10[0x4c] = (longlong)(int)(fVar1 * 720.5);
      iVar29 = g_SpaceSceneMobys[6];
      if ((iVar30 == *(int *)((int)puVar10 + 0x264)) && (g_SpaceSceneMobys[6] != 0)) {
        GetBonePosition(g_SpaceSceneMobys[6],0,uVar19 - 0x1f0);
        *(undefined4 *)((int)puVar10 + 300) = 0;
        *(undefined4 *)((int)puVar10 + 0x124) = 0;
        *(undefined4 *)(puVar10 + 0x24) = 0;
        *(undefined4 *)(puVar10 + 0x25) = 0x3f800000;
        puVar10[0x12] = 0xffffffffffffffff;
        puVar10[0x14] = 0;
        puVar10[0x15] = 0xf;
        puVar10[0x16] = 0xffffffffffffffff;
        puVar10[0x17] = 0;
        MB_genericExplosion
                  (0,0,uVar40,0x4010000000000000,uVar38,0x3ff0000000000000,uVar36,iVar29,
                   uVar19 - 0x1e0,uVar19 - 0x1f0,0,0xffffffffffffffff,0x32,0x19,0x19);
        fVar1 = animationSpeed;
        iVar30 = g_SpaceSceneFrame;
      }
      puVar10[0x4c] = (longlong)(int)(fVar1 * 730.5);
      iVar29 = g_SpaceSceneMobys[5];
      if ((iVar30 == *(int *)((int)puVar10 + 0x264)) && (g_SpaceSceneMobys[5] != 0)) {
        GetBonePosition(g_SpaceSceneMobys[5],0,uVar19 - 0x1d0);
        *(undefined4 *)((int)puVar10 + 0x14c) = 0;
        *(undefined4 *)((int)puVar10 + 0x144) = 0;
        *(undefined4 *)(puVar10 + 0x28) = 0;
        *(undefined4 *)(puVar10 + 0x29) = 0x3f800000;
        puVar10[0x12] = 0xffffffffffffffff;
        puVar10[0x14] = 0;
        puVar10[0x15] = 0xf;
        puVar10[0x16] = 0xffffffffffffffff;
        puVar10[0x17] = 0;
        MB_genericExplosion
                  (0,0,uVar40,0x4010000000000000,uVar38,0x3ff0000000000000,uVar36,iVar29,
                   uVar19 - 0x1c0,uVar19 - 0x1d0,0,0xffffffffffffffff,0x32,0x19,0x19);
        fVar1 = animationSpeed;
        iVar30 = g_SpaceSceneFrame;
      }
      puVar10[0x4c] = (longlong)(int)(fVar1 * 748.5);
      if (iVar30 == *(int *)((int)puVar10 + 0x264)) {
        *(undefined4 *)(puVar10 + 0x2a) = 0x441ea396;
        *(undefined4 *)((int)puVar10 + 0x154) = 0x43e314dd;
        *(undefined4 *)(puVar10 + 0x2b) = 0x42cdff7d;
        *(undefined4 *)((int)puVar10 + 0x15c) = 0x3f800000;
        *(undefined4 *)((int)puVar10 + 0x16c) = 0;
        *(undefined4 *)((int)puVar10 + 0x164) = 0;
        *(undefined4 *)(puVar10 + 0x2c) = 0;
        *(undefined4 *)(puVar10 + 0x2d) = 0x3f800000;
        puVar10[0x12] = 0xffffffffffffffff;
        puVar10[0x14] = 0;
        puVar10[0x15] = 0x3c;
        puVar10[0x16] = 0xffffffffffffffff;
        puVar10[0x17] = 0;
        MB_genericExplosion
                  (0,0,0x4028000000000000,0x4018000000000000,uVar38,0x3ff0000000000000,
                   0x404e000000000000,moby,uVar19 - 0x1a0,uVar19 - 0x1b0,0x3c,0,300,200,200);
        fVar1 = animationSpeed;
        iVar30 = g_SpaceSceneFrame;
      }
      puVar10[0x4c] = (longlong)DAT_007ab93c;
      dVar34 = 0.5;
      puVar10[0x4c] = (longlong)(int)(fVar1 * (float)((double)(longlong)puVar10[0x4c] + 0.5));
      if (*(int *)((int)puVar10 + 0x264) <= iVar30) {
        puVar10[0x4c] = (longlong)DAT_007ab940;
        puVar10[0x4c] = (longlong)(int)(fVar1 * (float)((double)(longlong)puVar10[0x4c] + 0.5));
        if (iVar30 < *(int *)((int)puVar10 + 0x264)) {
          dVar35 = (double)FastIntToDouble(iVar30 - *(int *)((int)puVar10 + 0x264));
          puVar10[0x4c] = (longlong)(DAT_007ab940 - DAT_007ab93c);
          puVar10[0x4c] =
               (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar10[0x4c] + dVar34));
          dVar37 = (double)FastIntToDouble(*(undefined4 *)((int)puVar10 + 0x264));
          DAT_00fadb84 = FastDoubleToInt((double)((float)(dVar35 / dVar37) * 255.0));
          RegisterFuncForMoby(&PTR_M1564_0029c6c8_0070aab0,DAT_00fadb88);
          fVar1 = animationSpeed;
          iVar30 = g_SpaceSceneFrame;
        }
      }
      puVar10[0x4c] = (longlong)DAT_007ab944;
      puVar10[0x4c] = (longlong)(int)(fVar1 * (float)((double)(longlong)puVar10[0x4c] + dVar34));
      if (*(int *)((int)puVar10 + 0x264) <= iVar30) {
        puVar10[0x4c] = (longlong)DAT_007ab948;
        puVar10[0x4c] = (longlong)(int)(fVar1 * (float)((double)(longlong)puVar10[0x4c] + dVar34));
        if (iVar30 < *(int *)((int)puVar10 + 0x264)) {
          dVar35 = (double)FastIntToDouble(iVar30 - *(int *)((int)puVar10 + 0x264));
          puVar10[0x4c] = (longlong)(DAT_007ab948 - DAT_007ab944);
          puVar10[0x4c] =
               (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar10[0x4c] + dVar34));
          dVar37 = (double)FastIntToDouble(*(undefined4 *)((int)puVar10 + 0x264));
          DAT_00fadb8c = (float)(dVar35 / dVar37) * 200.0 + 0.25;
          RegisterFuncForMoby(&PTR_M1564_0029cc78_0070aab8,DAT_00fadb88);
          fVar1 = animationSpeed;
          iVar30 = g_SpaceSceneFrame;
        }
      }
      puVar10[0x4c] = (longlong)DAT_007ab918;
      puVar10[0x4c] = (longlong)(int)(fVar1 * (float)((double)(longlong)puVar10[0x4c] + dVar34));
      if (*(int *)((int)puVar10 + 0x264) <= iVar30) {
        puVar10[0x4c] = (longlong)DAT_007ab920;
        puVar10[0x4c] = (longlong)(int)(fVar1 * (float)((double)(longlong)puVar10[0x4c] + dVar34));
        if (iVar30 < *(int *)((int)puVar10 + 0x264)) {
          RegisterFuncForMoby(&PTR_M1564_0029bde8_0070aaa0,g_SpaceSceneMobys[0]);
          puVar10[0x4c] = (longlong)DAT_007ab91c;
          iVar30 = g_SpaceSceneFrame;
          fVar1 = animationSpeed;
          puVar10[0x4c] =
               (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar10[0x4c] + dVar34));
          if (iVar30 < *(int *)((int)puVar10 + 0x264)) {
            puVar10[0x4c] = (longlong)DAT_007ab918;
            puVar10[0x4c] =
                 (longlong)(int)(fVar1 * (float)((double)(longlong)puVar10[0x4c] + dVar34));
            dVar35 = (double)FastIntToDouble(iVar30 - *(int *)((int)puVar10 + 0x264));
            puVar10[0x4c] = (longlong)(DAT_007ab91c - DAT_007ab918);
            puVar10[0x4c] =
                 (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar10[0x4c] + dVar34))
            ;
            dVar34 = (double)FastIntToDouble(*(undefined4 *)((int)puVar10 + 0x264));
            DAT_00fadb80 = (DAT_007ab914 - DAT_007ab910) * (float)(dVar35 / dVar34) + DAT_007ab910;
          }
          else {
            DAT_00fadb80 = 10.0;
          }
        }
      }
    }
    iVar30 = g_SpaceSceneFrame;
    if (g_SceneId == 7) {
      pMVar18 = DAT_00fadb88;
      if (g_SpaceSceneFrame == 1) {
        DAT_007ab93c = DAT_007ab924;
        DAT_007ab940 = DAT_007ab928;
        DAT_007ab944 = DAT_007ab92c;
        DAT_007ab948 = DAT_007ab930;
        DAT_007ab918 = DAT_007ab934;
        DAT_007ab91c = DAT_007ab938;
        for (pMVar6 = MobyUpdateChainStart;
            (pMVar18 = DAT_00fadb88, pMVar6 != (MobyInstance *)0x0 &&
            (pMVar18 = pMVar6, pMVar6->oClass != 0x59b)); pMVar6 = (MobyInstance *)pMVar6->pChain) {
        }
      }
      DAT_00fadb88 = pMVar18;
      iVar29 = DAT_007ab93c;
      puVar10[0x4c] = (longlong)DAT_007ab93c;
      fVar1 = animationSpeed;
      dVar34 = 0.5;
      puVar10[0x4c] =
           (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar10[0x4c] + 0.5));
      if (*(int *)((int)puVar10 + 0x264) <= iVar30) {
        puVar10[0x4c] = (longlong)DAT_007ab940;
        puVar10[0x4c] = (longlong)(int)(fVar1 * (float)((double)(longlong)puVar10[0x4c] + 0.5));
        if (iVar30 < *(int *)((int)puVar10 + 0x264)) {
          dVar35 = (double)FastIntToDouble(iVar30 - iVar29);
          dVar37 = (double)FastIntToDouble(DAT_007ab940 - DAT_007ab93c);
          DAT_00fadb84 = FastDoubleToInt((double)((float)(dVar35 / dVar37) * 255.0));
          RegisterFuncForMoby(&PTR_M1564_0029c6c8_0070aab0,DAT_00fadb88);
          iVar30 = g_SpaceSceneFrame;
          fVar1 = animationSpeed;
        }
      }
      iVar29 = DAT_007ab944;
      puVar10[0x4c] = (longlong)DAT_007ab944;
      puVar10[0x4c] = (longlong)(int)(fVar1 * (float)((double)(longlong)puVar10[0x4c] + dVar34));
      if (*(int *)((int)puVar10 + 0x264) <= iVar30) {
        puVar10[0x4c] = (longlong)DAT_007ab948;
        puVar10[0x4c] = (longlong)(int)(fVar1 * (float)((double)(longlong)puVar10[0x4c] + dVar34));
        if (iVar30 < *(int *)((int)puVar10 + 0x264)) {
          dVar35 = (double)FastIntToDouble(iVar30 - iVar29);
          dVar37 = (double)FastIntToDouble(DAT_007ab948 - DAT_007ab944);
          DAT_00fadb8c = (float)(dVar35 / dVar37) * 200.0 + 0.25;
          RegisterFuncForMoby(&PTR_M1564_0029cc78_0070aab8,DAT_00fadb88);
          iVar30 = g_SpaceSceneFrame;
          fVar1 = animationSpeed;
        }
      }
      puVar10[0x4c] = (longlong)DAT_007ab918;
      puVar10[0x4c] = (longlong)(int)(fVar1 * (float)((double)(longlong)puVar10[0x4c] + dVar34));
      if (*(int *)((int)puVar10 + 0x264) <= iVar30) {
        puVar10[0x4c] = (longlong)DAT_007ab920;
        puVar10[0x4c] = (longlong)(int)(fVar1 * (float)((double)(longlong)puVar10[0x4c] + dVar34));
        if (iVar30 < *(int *)((int)puVar10 + 0x264)) {
          RegisterFuncForMoby(&PTR_M1564_0029bde8_0070aaa0,g_SpaceSceneMobys[0]);
          if (g_SpaceSceneFrame < DAT_007ab91c) {
            dVar34 = (double)FastIntToDouble(g_SpaceSceneFrame - DAT_007ab918);
            dVar35 = (double)FastIntToDouble(DAT_007ab91c - DAT_007ab918);
            DAT_00fadb80 = (DAT_007ab914 - DAT_007ab910) * (float)(dVar34 / dVar35) + DAT_007ab910;
          }
          else {
            DAT_00fadb80 = 10.0;
          }
        }
      }
    }
    if ((g_SceneId == 1) && (g_SpaceSceneMobys[3] != (MobyInstance *)0x0)) {
      RegisterFuncForMoby(&PTR_M1564_0029c460_0070aaa8,g_SpaceSceneMobys[3]);
    }
    iVar30 = g_SpaceSceneFrame;
    fVar1 = animationSpeed;
    if ((((g_SceneId == 5) &&
         (puVar10[0x4c] = (longlong)(int)(animationSpeed * 138.5),
         *(int *)((int)puVar10 + 0x264) <= iVar30)) &&
        (puVar10[0x4c] = (longlong)(int)(fVar1 * 264.5), pMVar18 = g_SpaceSceneMobys[2],
        iVar30 <= *(int *)((int)puVar10 + 0x264))) && (g_SpaceSceneMobys[2] != (MobyInstance *)0x0)) {
      puVar10[0x4c] = (longlong)(int)(fVar1 * 140.5);
      if (*(int *)((int)puVar10 + 0x264) < iVar30) {
        GetBonePosition(pMVar18,0,uVar19 - 400);
        GetBonePosition(pMVar18,2,uVar19 - 0x180);
        dVar35 = 0.0833333358168602;
        iVar30 = 0;
        dVar34 = 0.4000000059604645;
        do {
          dVar37 = (double)FastIntToDouble(iVar30);
          uVar17 = DAT_00fadbac;
          fVar1 = (float)(dVar37 * dVar35);
          fVar3 = DAT_00fadb90 - *(float *)(puVar10 + 0x2e);
          fVar12 = DAT_00fadb94 - *(float *)((int)puVar10 + 0x174);
          fVar11 = DAT_00fadb98 - *(float *)(puVar10 + 0x2f);
          fVar5 = DAT_00fadba0 - *(float *)(puVar10 + 0x30);
          fVar4 = DAT_00fadba4 - *(float *)((int)puVar10 + 0x184);
          fVar8 = DAT_00fadba8 - *(float *)(puVar10 + 0x31);
          *(undefined4 *)((int)puVar10 + 0x19c) = DAT_00fadb9c;
          *(float *)(puVar10 + 0x32) = fVar1 * fVar3 + *(float *)(puVar10 + 0x2e);
          *(float *)((int)puVar10 + 0x194) = fVar1 * fVar12 + *(float *)((int)puVar10 + 0x174);
          *(float *)(puVar10 + 0x33) = fVar1 * fVar11 + *(float *)(puVar10 + 0x2f);
          dVar37 = (double)DAT_007ab950;
          *(undefined4 *)((int)puVar10 + 0x1ac) = uVar17;
          *(float *)(puVar10 + 0x34) = fVar1 * fVar5 + *(float *)(puVar10 + 0x30);
          *(float *)((int)puVar10 + 0x1a4) = fVar1 * fVar4 + *(float *)((int)puVar10 + 0x184);
          *(float *)(puVar10 + 0x35) = fVar1 * fVar8 + *(float *)(puVar10 + 0x31);
          M1563_0029a288
                    (dVar37,(double)(float)(dVar37 * dVar34),uVar19 - 0x170,uVar19 - 0x170,
                     &DAT_00a15d30);
          M1563_0029a288
                    ((double)DAT_007ab950,(double)(float)((double)DAT_007ab950 * dVar34),
                     uVar19 - 0x160,uVar19 - 0x160,&DAT_00a15d30);
          iVar30 = iVar30 + 1;
        } while (iVar30 < 0xc);
        DAT_00fadb90 = *(float *)(puVar10 + 0x2e);
        DAT_00fadb94 = *(float *)((int)puVar10 + 0x174);
        DAT_00fadb98 = *(float *)(puVar10 + 0x2f);
        DAT_00fadb9c = *(undefined4 *)((int)puVar10 + 0x17c);
        DAT_00fadba0 = *(float *)(puVar10 + 0x30);
        DAT_00fadba4 = *(float *)((int)puVar10 + 0x184);
        DAT_00fadba8 = *(float *)(puVar10 + 0x31);
        DAT_00fadbac = *(undefined4 *)((int)puVar10 + 0x18c);
      }
      else {
        GetBonePosition(pMVar18,0,&DAT_00fadb90);
        GetBonePosition(pMVar18,2,&DAT_00fadba0);
      }
    }
    iVar29 = g_SpaceSceneFrame;
    iVar30 = g_SceneId;
    fVar1 = animationSpeed;
    if (((g_SceneId == 1) &&
        (puVar10[0x4c] = (longlong)(int)(animationSpeed * 446.5),
        *(int *)((int)puVar10 + 0x264) <= iVar29)) &&
       ((puVar10[0x4c] = (longlong)(int)(fVar1 * 502.5), iVar16 = g_SpaceSceneMobys[4],
        iVar29 < *(int *)((int)puVar10 + 0x264) && (g_SpaceSceneMobys[4] != 0)))) {
      pfVar7 = (float *)moby->pVar;
      pfVar7[4] = 0.0;
      GetBonePosition(iVar16,3,uVar19 - 0x150);
      GetBonePosition(iVar16,10,uVar19 - 0x140);
      fVar1 = *(float *)(puVar10 + 0x38);
      fVar8 = *(float *)((int)puVar10 + 0x1c4) - *(float *)((int)puVar10 + 0x1b4);
      fVar4 = fVar1 - *(float *)(puVar10 + 0x36);
      fVar5 = *(float *)(puVar10 + 0x39) - *(float *)(puVar10 + 0x37);
      fVar15 = 0.0;
      fVar3 = *(float *)((int)puVar10 + 0x1cc);
      fVar14 = fVar5 * fVar5 + fVar4 * fVar4 + fVar8 * fVar8;
      fVar13 = fVar15;
      fVar11 = fVar15;
      fVar12 = fVar15;
      if (SQRT(fVar14) != 0.0) {
        fVar13 = 1.0 / SQRT(fVar14);
        fVar13 = -(fVar14 * fVar13 * fVar13 - 1.0) * fVar13 * 0.5 + fVar13;
        fVar13 = -(fVar14 * fVar13 * fVar13 - 1.0) * fVar13 * 0.5 + fVar13;
        fVar13 = -(fVar14 * fVar13 * fVar13 - 1.0) * fVar13 * 0.5 + fVar13;
        fVar12 = fVar13 * fVar4;
        fVar11 = fVar13 * fVar8;
        fVar13 = fVar13 * fVar5;
      }
      (moby->transform).v1.x = fVar12;
      (moby->transform).v1.y = fVar11;
      (moby->transform).v1.z = fVar13;
      (moby->transform).v1.w = fVar3;
      *pfVar7 = fVar1;
      pfVar7[1] = *(float *)((int)puVar10 + 0x1c4);
      pfVar7[2] = *(float *)(puVar10 + 0x39);
      pfVar7[3] = *(float *)((int)puVar10 + 0x1cc);
      fVar1 = (moby->transform).v1.x;
      fVar3 = (moby->transform).v1.y;
      fVar4 = ABS((moby->transform).v1.x);
      fVar8 = ABS((moby->transform).v1.y);
      *(float *)(puVar10 + 0x41) = fVar4 - fVar8;
      uVar24 = (ulonglong)((uint)fVar1 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar10 + 0x41) >> 0x1e) & 2 |
               (ulonglong)((uint)fVar3 >> 0x1d) & 4;
      fVar1 = fVar4;
      if (*(float *)(puVar10 + 0x41) - 0.0 < 0.0) {
        fVar1 = fVar8;
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
      fVar3 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
      if (*(float *)(puVar10 + 0x41) - 0.0 < 0.0) {
        fVar8 = fVar4;
      }
      fVar4 = fVar15;
      if (0.0 < fVar1) {
        lVar28 = uVar19 - 0x2f0;
        lVar23 = uVar19 - 0xc0;
        lVar25 = uVar19 - 0xb0;
        lVar31 = 2;
        fVar1 = (fVar8 - fVar1) / (fVar8 + fVar1);
        fVar8 = fVar1 * fVar1;
        *(float *)((int)puVar10 + 0x24c) = fVar1;
        *(float *)((int)puVar10 + 0x244) = fVar1;
        *(float *)(puVar10 + 0x49) = fVar1;
        *(float *)(puVar10 + 0x48) = fVar1;
        fVar1 = fVar8 * fVar8;
        *(float *)((int)puVar10 + 0x244) = *(float *)((int)puVar10 + 0x244) * fVar8;
        *(float *)(puVar10 + 0x49) = *(float *)(puVar10 + 0x49) * fVar1;
        *(float *)((int)puVar10 + 0x24c) = *(float *)((int)puVar10 + 0x24c) * fVar1 * fVar8;
        do {
          *(float *)((int)lVar28 + 0x240) = *(float *)((int)lVar28 + 0x230) * fVar1 * fVar1;
          iVar30 = (int)lVar23;
          lVar28 = lVar28 + 8;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)(iVar30 + 4) * fVar1 * fVar1;
          lVar25 = lVar25 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar25 = uVar19 - 0xc0;
        pfVar26 = (float *)&DAT_007358e0;
        lVar28 = lVar20;
        lVar23 = lVar25;
        do {
          fVar1 = *pfVar26;
          fVar8 = pfVar26[1];
          pfVar26 = pfVar26 + 2;
          *(float *)((int)lVar28 + 0x240) = *(float *)((int)lVar28 + 0x240) * fVar1;
          lVar28 = lVar28 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar8;
          lVar23 = lVar23 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar23 = 2;
        lVar28 = lVar20;
        fVar1 = fVar15;
        do {
          iVar30 = (int)lVar28;
          lVar28 = lVar28 + 0x10;
          iVar29 = (int)lVar25;
          lVar25 = lVar25 + 0x10;
          fVar1 = fVar1 + *(float *)(iVar30 + 0x240) + *(float *)(iVar29 + 4) +
                  *(float *)(iVar29 + 8) + *(float *)(iVar29 + 0xc);
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        fVar4 = (fVar1 + 0.7853982) * fVar5 + fVar3;
      }
      pfVar7[0x12] = fVar4;
      fVar1 = (moby->transform).v1.y;
      fVar3 = (moby->transform).v1.x;
      fVar8 = (moby->transform).v1.z;
      fVar4 = ABS((moby->transform).v1.z);
      fVar1 = SQRT(fVar3 * fVar3 + fVar1 * fVar1);
      fVar5 = ABS(fVar1);
      *(float *)(puVar10 + 0x40) = fVar1;
      *(float *)((int)puVar10 + 0x204) = fVar5 - fVar4;
      uVar24 = (ulonglong)(*(uint *)(puVar10 + 0x40) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar10 + 0x204) >> 0x1e) & 2 |
               (ulonglong)((uint)fVar8 >> 0x1d) & 4;
      fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
      fVar3 = ABS(*(float *)(puVar10 + 0x40));
      if (*(float *)((int)puVar10 + 0x204) - 0.0 < 0.0) {
        fVar3 = fVar4;
      }
      fVar8 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
      if (*(float *)((int)puVar10 + 0x204) - 0.0 < 0.0) {
        fVar4 = fVar5;
      }
      if (0.0 < fVar3) {
        lVar28 = uVar19 - 0x2f0;
        lVar23 = uVar19 - 0xe0;
        lVar25 = uVar19 - 0xd0;
        lVar31 = 2;
        fVar3 = (fVar4 - fVar3) / (fVar4 + fVar3);
        fVar4 = fVar3 * fVar3;
        *(float *)((int)puVar10 + 0x22c) = fVar3;
        *(float *)((int)puVar10 + 0x224) = fVar3;
        *(float *)(puVar10 + 0x45) = fVar3;
        *(float *)(puVar10 + 0x44) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)((int)puVar10 + 0x224) = *(float *)((int)puVar10 + 0x224) * fVar4;
        *(float *)(puVar10 + 0x45) = *(float *)(puVar10 + 0x45) * fVar3;
        *(float *)((int)puVar10 + 0x22c) = *(float *)((int)puVar10 + 0x22c) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar28 + 0x220) = *(float *)((int)lVar28 + 0x210) * fVar3 * fVar3;
          iVar30 = (int)lVar23;
          lVar28 = lVar28 + 8;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)(iVar30 + 4) * fVar3 * fVar3;
          lVar25 = lVar25 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar25 = uVar19 - 0xe0;
        pfVar26 = (float *)&DAT_007358e0;
        lVar28 = lVar20;
        lVar23 = lVar25;
        do {
          fVar3 = *pfVar26;
          fVar4 = pfVar26[1];
          pfVar26 = pfVar26 + 2;
          *(float *)((int)lVar28 + 0x220) = *(float *)((int)lVar28 + 0x220) * fVar3;
          lVar28 = lVar28 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar4;
          lVar23 = lVar23 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar28 = 2;
        do {
          iVar30 = (int)lVar20;
          iVar29 = (int)lVar25;
          lVar20 = lVar20 + 0x10;
          lVar25 = lVar25 + 0x10;
          fVar15 = fVar15 + *(float *)(iVar30 + 0x220) + *(float *)(iVar29 + 4) +
                   *(float *)(iVar29 + 8) + *(float *)(iVar29 + 0xc);
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        fVar15 = (fVar15 + 0.7853982) * fVar1 + fVar8;
      }
      pfVar7[0x13] = fVar15;
      dVar34 = (double)DAT_007bd344;
      DAT_007bd344 = 24.0;
      M185_002c5f88(moby);
      DAT_007bd344 = (float)dVar34;
      PTR_DAT_007bd3d4 = (undefined *)0x207f7f;
      DAT_007bd3d8 = &DAT_007f7f20;
      iVar30 = g_SceneId;
    }
    iVar29 = g_SpaceSceneFrame;
    if ((((iVar30 == 2) || (iVar30 == 0)) ||
        ((iVar30 == 3 &&
         (puVar10[0x4c] = (longlong)(int)(animationSpeed * 586.5),
         iVar29 < *(int *)((int)puVar10 + 0x264))))) && (g_SpaceSceneMobys[2] != (MobyInstance *)0x0)) {
      RegisterFuncForMoby(&PTR_M1564_0029c460_0070aaa8,g_SpaceSceneMobys[2]);
      iVar30 = g_SceneId;
    }
    iVar29 = g_SpaceSceneFrame;
    if ((iVar30 == 3) &&
       (puVar10[0x4c] = (longlong)(int)(animationSpeed * 586.5),
       iVar29 == *(int *)((int)puVar10 + 0x264))) {
      iVar30 = 0;
      fVar8 = GameCamera.orientMtx.up.x * DAT_007ab968 +
              GameCamera.orientMtx.forward.x * DAT_007ab960 +
              GameCamera.orientMtx.right.x * DAT_007ab964;
      fVar3 = GameCamera.orientMtx.up.y * DAT_007ab968 +
              GameCamera.orientMtx.forward.y * DAT_007ab960 +
              GameCamera.orientMtx.right.y * DAT_007ab964;
      fVar1 = GameCamera.orientMtx.up.z * DAT_007ab968 +
              GameCamera.orientMtx.forward.z * DAT_007ab960 +
              GameCamera.orientMtx.right.z * DAT_007ab964;
      fVar4 = GameCamera.orientMtx.up.w * DAT_007ab968 +
              GameCamera.orientMtx.forward.w * DAT_007ab960 +
              GameCamera.orientMtx.right.w * DAT_007ab964 + DAT_007ab96c;
      *(float *)(puVar10 + 0x3a) = fVar8;
      *(float *)((int)puVar10 + 0x1d4) = fVar3;
      *(float *)(puVar10 + 0x3b) = fVar1;
      *(float *)((int)puVar10 + 0x1dc) = fVar4;
      fVar4 = GameCamera.orientMtx.right.y;
      fVar8 = fVar8 + GameCamera.posX;
      fVar3 = fVar3 + GameCamera.posY;
      fVar1 = fVar1 + GameCamera.posZ;
      *(float *)(puVar10 + 0x3c) = GameCamera.orientMtx.right.x;
      fVar5 = GameCamera.orientMtx.right.z;
      *(float *)((int)puVar10 + 0x1e4) = fVar4;
      fVar4 = GameCamera.orientMtx.right.w;
      *(float *)(puVar10 + 0x3d) = fVar5;
      *(float *)((int)puVar10 + 0x1ec) = fVar4;
      *(float *)(puVar10 + 0x3a) = fVar8;
      *(float *)((int)puVar10 + 0x1d4) = fVar3;
      *(float *)(puVar10 + 0x3b) = fVar1;
      dVar35 = 0.19634954631328583;
      dVar34 = 0.0;
      uVar40 = 0x3ff0000000000000;
      uVar38 = 0x3ff028f5c0000000;
      uVar36 = 0x4010000000000000;
      auVar43 = loadVectorLeftIndexed(0x88,0x29a518);
      auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
      do {
        dVar37 = (double)FastIntToDouble(iVar30);
        MB_RotateQuatAxisAngle
                  ((float)(dVar37 * dVar35),local_110,(float *)(puVar10 + 0x3c));
        fVar3 = *(float *)((int)puVar10 + 500);
        fVar8 = *(float *)(puVar10 + 0x3e);
        fVar4 = *(float *)(puVar10 + 0x3f);
        dVar39 = (double)SQRT(fVar4 * fVar4 + fVar8 * fVar8 + fVar3 * fVar3);
        fVar1 = (float)((double)(DAT_0071f408 * DAT_007ab970) / dVar39);
        dVar37 = dVar34;
        if (dVar34 - dVar39 < 0.0) {
          dVar37 = (double)(fVar8 * fVar1);
        }
        dVar32 = dVar34;
        if (dVar34 - dVar39 < 0.0) {
          dVar32 = (double)(fVar3 * fVar1);
        }
        dVar33 = dVar34;
        if (dVar34 - dVar39 < 0.0) {
          dVar33 = (double)(fVar4 * fVar1);
        }
        if (dVar39 - dVar34 < 0.0) {
          dVar37 = (double)(fVar8 * fVar1);
        }
        if (dVar39 - dVar34 < 0.0) {
          dVar32 = (double)(fVar3 * fVar1);
        }
        if (dVar39 - dVar34 < 0.0) {
          dVar33 = (double)(fVar4 * fVar1);
        }
        *(float *)(puVar10 + 0x3e) = (float)dVar37;
        *(float *)((int)puVar10 + 500) = (float)dVar32;
        *(float *)(puVar10 + 0x3f) = (float)dVar33;
        MB_randInt(0x10);
        MB_randInt(2);
        uVar21 = SpawnPart_23(dVar34,uVar40,uVar38,(double)DAT_007ab974,uVar19 - 0x130);
        iVar29 = (int)uVar21;
        if (iVar29 != 0) {
          auVar41 = ZEXT416(0xffffffff);
          auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
          auVar41 = vectorShiftLeftIntegerWord(auVar41,auVar41);
          auVar42 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar41 = vectorMultiplyAddFloatingPoint(auVar42,auVar43,auVar41);
          auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
          auVar41 = vectorSplatHalfWord(auVar41,1);
          uVar9 = storeVectorElementHalfWordIndexed(auVar41,10,uVar21);
          *(undefined2 *)(iVar29 + 10) = uVar9;
          cVar22 = FastDoubleToInt(uVar36);
          *(char *)(iVar29 + 9) = cVar22 + '@';
          *(undefined4 *)(iVar29 + 0x24) = 2;
          *(undefined1 *)(iVar29 + 0x2a) = 0x7f;
          *(char *)(iVar29 + 0x2b) = (char)*(undefined2 *)(iVar29 + 10);
        }
        iVar30 = iVar30 + 1;
      } while (iVar30 < 0x20);
    }
  }
  return;
}


