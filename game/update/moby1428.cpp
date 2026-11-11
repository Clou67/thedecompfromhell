// game/update/moby1428.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x27b170-0x27b904
#include "game/update/moby1428.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/map.h"
#include "game/memcard.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update.h"
#include "game/update/moby1118.h"
#include "idol/fastfunc.h"

// 0x027b170 (0xfc bytes)
MobyInstance *
FUN_0027b170(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  MobyInstance *pMVar1;
  f32 fStack00000030;
  f32 fStack00000034;
  f32 fStack00000038;
  f32 fStack0000003c;
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  
  pMVar1 = CreateMoby(CODEBOT);
  if (pMVar1 != (MobyInstance *)0x0) {
    MB_CopyHeroLights(pMVar1);
    pMVar1->updateDistance = -1;
    pMVar1->drawDistance = 0xff;
    pMVar1->enabled = '\x01';
    fStack00000034 = (f32)param_1;
    fStack0000003c = (f32)param_2;
    (pMVar1->pos).y = fStack00000034;
    (pMVar1->pos).w = fStack0000003c;
    fStack00000044 = (f32)param_3;
    fStack0000004c = (f32)param_4;
    (pMVar1->rotation).y = fStack00000044;
    (pMVar1->rotation).w = fStack0000004c;
    fStack00000030 = (f32)((ulonglong)param_1 >> 0x20);
    fStack00000038 = (f32)((ulonglong)param_2 >> 0x20);
    (pMVar1->pos).x = fStack00000030;
    (pMVar1->pos).z = fStack00000038;
    fStack00000040 = (f32)((ulonglong)param_3 >> 0x20);
    fStack00000048 = (f32)((ulonglong)param_4 >> 0x20);
    (pMVar1->rotation).x = fStack00000040;
    (pMVar1->rotation).z = fStack00000048;
    UpdateMobyTransform(pMVar1);
  }
  return pMVar1;
}


// 0x027b278 (0x120 bytes)
void M1428_0027b278(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar4;
  longlong lVar3;
  ulonglong uVar5;
  undefined8 in_LR;
  longlong lVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> in_vs39;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  
  uVar1 = *(uint *)(param_1 + 0x78);
  iVar10 = 0;
  uVar5 = (ulonglong)uVar1;
  do {
    iVar4 = MB_randInt(0xff);
    iVar10 = iVar10 + 1;
    *(float *)uVar5 = (float)(longlong)iVar4;
    uVar5 = uVar5 + 4;
  } while (iVar10 < 4);
  iVar10 = 0;
  iVar12 = 0;
  iVar11 = 0;
  iVar4 = 0;
  *(undefined4 *)(uVar1 + 0x10) = 0xbf800000;
  *(undefined4 *)(uVar1 + 0x14) = 0xc0100000;
  *(undefined4 *)(uVar1 + 0x18) = 0x3fa00000;
  *(undefined4 *)(uVar1 + 0x1c) = 0x40200000;
  auVar14 = loadVectorLeftIndexed(in_LR,0x27b26c);
  auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  lVar3 = (ulonglong)uVar1 + 0x20;
  auVar8 = loadVectorLeftIndexed(4,0x27b26c);
  lVar6 = 4;
  auVar7 = loadVectorLeftIndexed(8,0x27b26c);
  auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar9 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  auVar8 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  do {
    auVar7.piece<0,4>() = iVar4 + auVar9.piece<0,4>();
    auVar7.piece<8,8>() = in_vs39.piece<8,8>();
    auVar7.piece<4,4>() = iVar10 + auVar9.piece<4,4>();
    auVar16.piece<0,8>() = auVar7.piece<0,8>();
    auVar16.piece<8,4>() = iVar11 + auVar9.piece<8,4>();
    auVar16.piece<12,4>() = iVar12 + auVar9.piece<12,4>();
    auVar7 = ZEXT416(0xffffffff);
    auVar15 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    iVar4 = iVar4 + auVar8.piece<0,4>();
    iVar10 = iVar10 + auVar8.piece<4,4>();
    iVar11 = iVar11 + auVar8.piece<8,4>();
    iVar12 = iVar12 + auVar8.piece<12,4>();
    auVar7 = vectorConvertFromSignedFixedPointWord(auVar16,0);
    auVar16 = vectorShiftLeftIntegerWord(auVar15,auVar15);
    auVar7 = vectorAddFloatingPoint
                       (auVar7,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60);
    auVar7 = vectorMultiplyAddFloatingPoint(auVar7,auVar13,auVar16);
    auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
    auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
    in_vs39 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    uVar2 = storeVectorElementWordIndexed(in_vs39,0,lVar3);
    *(undefined4 *)((uint)lVar3 & 0xfffffffc) = uVar2;
    lVar3 = lVar3 + 4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *(undefined4 *)(uVar1 + 0x30) = 0x40200000;
  *(undefined4 *)(uVar1 + 0x34) = 0x40400000;
  *(undefined4 *)(uVar1 + 0x38) = 0x40400000;
  *(undefined4 *)(uVar1 + 0x3c) = 0x40200000;
  return;
}


// 0x027b3b0 (0x314 bytes)
void M1428_0027b3b0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar4;
  undefined8 uVar3;
  undefined1 uVar5;
  undefined8 in_r9;
  int iVar6;
  ulonglong uVar7;
  float *pfVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<56> local_90;
  
  dVar11 = 0.5;
  dVar12 = 0.0;
  iVar6 = 0;
  uVar7 = (ulonglong)*(uint *)(param_1 + 0x78);
  *(float *)(param_1 + 0x18) = (*(float *)(param_1 + 0x18) + 0.5) - 0.5;
  lVar9 = uVar7 + 0x20;
  dVar13 = 255.0;
  auVar17 = loadVectorLeftIndexed(0x14,0x27b398);
  dVar14 = 255.5;
  auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
  do {
    pfVar8 = (float *)uVar7;
    dVar10 = (double)(*pfVar8 + pfVar8[4]);
    *pfVar8 = *pfVar8 + pfVar8[4];
    if (dVar10 < dVar13) {
      if (dVar10 <= dVar12) {
        *pfVar8 = (float)(dVar10 + dVar13);
      }
    }
    else {
      *pfVar8 = (float)(dVar10 - dVar13);
    }
    iVar4 = FastDecTimerS32(uVar7 + 0x20);
    fVar1 = pfVar8[8];
    dVar10 = (double)animationSpeed;
    auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    if (iVar4 != 0) {
      auVar16 = ZEXT416(0xffffffff);
      auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
      auVar16 = vectorShiftLeftIntegerWord(auVar16,auVar16);
      auVar15 = vectorMultiplyAddFloatingPoint(auVar15,auVar17,auVar16);
      fVar1 = (float)(int)(dVar10 * dVar14);
      auVar15 = vectorConvertToSignedFixedPointWordSaturate(auVar15,0);
      auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar2 = storeVectorElementWordIndexed
                        (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,0,lVar9);
      *(undefined4 *)((uint)lVar9 & 0xfffffffc) = uVar2;
    }
    dVar10 = (double)FastIntToDouble((int)(dVar10 * dVar14) - (int)fVar1);
    uVar3 = FastLerpColor
                      (ABS((double)(float)(dVar11 - (double)(float)(dVar10 / (double)(longlong)
                                                                                     ((double)
                                                  animationSpeed * dVar14)))),0x4040ffff,0x1040ffff)
    ;
    uVar5 = FastDoubleToInt((double)*pfVar8);
    SpawnPart_59((double)pfVar8[0xc],local_90,uVar3,uVar5,0x35,1,2,in_r9,0);
    iVar6 = iVar6 + 1;
    lVar9 = lVar9 + 4;
    uVar7 = uVar7 + 4;
  } while (iVar6 < 4);
  return;
}


// 0x027b6d8 (0x22c bytes)
/* Moby 1428 */

undefined4 * UpdateMoby_1428(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  MobyClass *pMVar3;
  float fVar4;
  float fVar5;
  undefined4 *puVar6;
  double dVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  
  puVar6 = (undefined4 *)Level;
  if (Level != Quartu) {
    dVar7 = (double)FastWrapRot((moby->rotation).z,g_FrameTime * 1.5707964);
    pMVar3 = moby->pClass;
    (moby->rotation).z = (float)dVar7;
    bVar1 = moby->state;
    puVar6 = (undefined4 *)(uint)bVar1;
    moby->scale = pMVar3->gScale * DAT_007aa640;
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        M1428_0027b278(moby);
        if (g_MiscLevelFlags.Codebot == false) {
          fVar2 = (moby->pos).z;
          puVar6 = (undefined4 *)0x1;
          moby->state = '\x01';
          (moby->pos).z = fVar2 + 1.0;
        }
        else {
          puVar6 = (undefined4 *)DeleteMoby(moby);
        }
      }
      else {
        M1428_0027b3b0(moby);
        puVar6 = &g_heroMtx;
        fVar2 = (moby->pos).y - g_heroPosition.y;
        fVar4 = (moby->pos).x - g_heroPosition.x;
        fVar5 = (moby->pos).z - g_heroPosition.z;
        if ((SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar2 * fVar2) < 3.0) &&
           (puVar6 = (undefined4 *)g_heroState, g_heroState != TURRET_PLANE_UI)) {
          moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
          mode_sceneInit(1);
          puVar6 = (undefined4 *)0x2;
          moby->state = '\x02';
        }
      }
    }
    else if (bVar1 < 3) {
      puVar6 = (undefined4 *)g_gameMode;
      if (g_gameMode != GAME_MODE_SCENE) {
        MB_ToastMessage(0x426a,0xffffffffffffffff);
        auVar8 = ZEXT416(0xffffffff);
        auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
        auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
        auVar8 = loadVectorLeftIndexed(0xc,0x27b6c4);
        auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar8 = vectorMultiplyAddFloatingPoint
                           (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9
                           );
        auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
        auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
        g_toastMsgTimer =
             storeVectorElementWordIndexed
                       (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0x5c80,0xa10000);
        g_MiscLevelFlags.Codebot = true;
        g_MiscLevelFlags.field120_0x78 = 1;
        moby->state = '\x03';
        puVar6 = (undefined4 *)memcard_Save(0,-1);
      }
    }
    else if (bVar1 < 4) {
      puVar6 = (undefined4 *)DeleteMoby(moby);
    }
  }
  return puVar6;
}


