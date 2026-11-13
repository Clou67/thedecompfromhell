// game/update/moby1354.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x255f04-0x25672c
#include "game/update/moby1354.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/memcard.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update.h"
#include "idol/fastfunc.h"

// 0x0255f04 (0x14 bytes)
void M1354_00255f04(void)

{
  DAT_0079bc34 = 0x10000;
  return;
}


// 0x0255f30 (0x338 bytes)
void M1354_00255f30(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  int iVar7;
  undefined8 uVar6;
  undefined1 uVar8;
  undefined8 in_r9;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<56> local_90;
  
  uVar1 = *(uint *)(param_1 + 0x78);
  uVar10 = (ulonglong)uVar1;
  *(float *)(uVar1 + 8) = *(float *)(uVar1 + 8) + 0.1;
  dVar13 = 0.0;
  iVar9 = 0;
  lVar11 = uVar10 + 0x40;
  *(float *)(uVar1 + 8) = *(float *)(uVar1 + 8) - 0.1;
  dVar14 = 255.0;
  auVar19 = loadVectorLeftIndexed(0x10,0x255f18);
  dVar15 = 255.5;
  auVar19 = auVar19 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar19 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
  dVar16 = 0.5;
  do {
    iVar4 = (int)uVar10;
    fVar5 = *(float *)(iVar4 + 0x20) + *(float *)(iVar4 + 0x30);
    dVar12 = (double)fVar5;
    *(float *)(iVar4 + 0x20) = fVar5;
    if (dVar12 < dVar14) {
      if (dVar12 <= dVar13) {
        *(float *)(iVar4 + 0x20) = (float)(dVar12 + dVar14);
      }
    }
    else {
      *(float *)(iVar4 + 0x20) = (float)(dVar12 - dVar14);
    }
    iVar7 = FastDecTimerS32(uVar10 + 0x40);
    iVar2 = *(int *)(iVar4 + 0x40);
    dVar12 = (double)animationSpeed;
    auVar17 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    if (iVar7 != 0) {
      auVar18 = ZEXT416(0xffffffff);
      auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
      auVar18 = vectorShiftLeftIntegerWord(auVar18,auVar18);
      auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar19,auVar18);
      iVar2 = (int)(dVar12 * dVar15);
      auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
      auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar3 = storeVectorElementWordIndexed
                        (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0,lVar11);
      *(undefined4 *)((uint)lVar11 & 0xfffffffc) = uVar3;
    }
    dVar12 = (double)FastIntToDouble((int)(dVar12 * dVar15) - iVar2);
    uVar6 = FastLerpColor
                      (ABS((double)(float)(dVar16 - (double)(float)(dVar12 / (double)(longlong)
                                                                                     ((double)
                                                  animationSpeed * dVar15)))),0x4040ffff,0x1040ffff)
    ;
    uVar8 = FastDoubleToInt((double)*(float *)(iVar4 + 0x20));
    SpawnPart_59((double)*(float *)(iVar4 + 0x50),local_90,uVar6,uVar8,0x35,1,2,in_r9,0);
    iVar9 = iVar9 + 1;
    lVar11 = lVar11 + 4;
    uVar10 = uVar10 + 4;
  } while (iVar9 < 4);
  return;
}


// 0x0256278 (0x120 bytes)
void M1354_00256278(int param_1)

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
    *(float *)((int)uVar5 + 0x20) = (float)(longlong)iVar4;
    uVar5 = uVar5 + 4;
  } while (iVar10 < 4);
  iVar10 = 0;
  iVar12 = 0;
  iVar11 = 0;
  iVar4 = 0;
  *(undefined4 *)(uVar1 + 0x30) = 0xbf800000;
  *(undefined4 *)(uVar1 + 0x34) = 0xc0100000;
  *(undefined4 *)(uVar1 + 0x38) = 0x3fa00000;
  *(undefined4 *)(uVar1 + 0x3c) = 0x40200000;
  auVar14 = loadVectorLeftIndexed(in_LR,0x256268);
  auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  lVar3 = (ulonglong)uVar1 + 0x40;
  auVar8 = loadVectorLeftIndexed(4,0x256268);
  lVar6 = 4;
  auVar7 = loadVectorLeftIndexed(8,0x256268);
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
  *(undefined4 *)(uVar1 + 0x50) = 0x40000000;
  *(undefined4 *)(uVar1 + 0x54) = 0x40200000;
  *(undefined4 *)(uVar1 + 0x58) = 0x40200000;
  *(undefined4 *)(uVar1 + 0x5c) = 0x40000000;
  return;
}


// 0x02563b0 (0x37c bytes)
/* Moby 1354 */

void UpdateMoby_1354(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float fVar8;
  longlong lVar9;
  double dVar10;
  
  lVar9 = (longlong)(int)moby;
  bVar1 = moby->state;
  pfVar7 = (float *)moby->pVar;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
        DeleteMoby(moby);
      }
      else {
        M1354_00256278(lVar9);
        GetGroundZ(0x3fe0000000000000,lVar9 + 0x10,0);
        (moby->rotation).x = 0.0;
        (moby->rotation).y = -1.5707964;
        (moby->pos).z = g_CollOutput.ip.z + DAT_0079bc58;
        *pfVar7 = (moby->pos).x;
        pfVar7[1] = (moby->pos).y;
        pfVar7[2] = (moby->pos).z;
        pfVar7[3] = (moby->pos).w;
        moby->state = '\x01';
      }
    }
    else {
      dVar10 = (double)FastWrapRot((moby->rotation).z,DAT_0079bc5c);
      (moby->rotation).z = (float)dVar10;
      fVar2 = *pfVar7;
      (moby->pos).x = fVar2;
      fVar3 = pfVar7[1];
      (moby->pos).y = fVar3;
      fVar4 = pfVar7[2];
      fVar5 = (moby->transform).v1.x;
      (moby->pos).z = fVar4;
      fVar6 = (moby->transform).v1.y;
      (moby->pos).w = pfVar7[3];
      fVar6 = fVar6 * DAT_0079bc60;
      fVar8 = (moby->transform).v1.z * DAT_0079bc60;
      (moby->pos).x = fVar5 * DAT_0079bc60 + fVar2;
      (moby->pos).y = fVar6 + fVar3;
      (moby->pos).z = fVar8 + fVar4;
      M1354_00255f30(lVar9);
      if (((worldUpdateTime == (worldUpdateTime / 10) * 10) &&
          (fVar2 = (moby->pos).y - g_heroPosition.y, fVar3 = (moby->pos).x - g_heroPosition.x,
          SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 1.0)) &&
         (ABS((moby->pos).z - g_heroPosition.z) < 2.0)) {
        pfVar7[6] = (float)(((uint)UnlockableItems.morphORay != 0));
        MB_UnlockItem(0x15,1);
        mode_sceneInit(6);
        moby->state = '\x02';
      }
    }
  }
  else if (bVar1 < 3) {
    if (g_gameMode == GAME_MODE_SCENE) {
      moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    }
    else {
      if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1) {
        SetLevelFlag();
        memcard_Save(0,-1);
      }
      if (pfVar7[6] == 0.0) {
        MB_ToastMessage(0x36b2,0xffffffffffffffff);
      }
      else {
        MB_ToastMessage(0x53e0,0xffffffffffffffff);
      }
      Help_QueueMessage(STR_CONGRATULATIONS_YOU_JUST_FOUND_0x36B0,0x7a);
      DeleteMoby(moby);
    }
  }
  else if ((bVar1 < 4) &&
          (Delt(0.0,moby->pClass->gScale * 0.02,&moby->scale), moby->scale == 0.0)) {
    DeleteMoby(moby);
  }
  return;
}


