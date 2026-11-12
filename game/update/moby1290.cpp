// game/update/moby1290.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x23dccc-0x23e4b0
#include <stdio.h>
#include "game/update/moby1290.h"
#include "game/debug.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/loaders.h"
#include "game/memcard.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/update.h"
#include "idol/fastfunc.h"

// 0x023dccc (0x14 bytes)
void M1290_0023dccc(void)

{
  DAT_0078de40 = 0x10000;
  return;
}


// 0x023dcf8 (0x308 bytes)
void M1290_0023dcf8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  int iVar6;
  undefined8 uVar5;
  undefined1 uVar7;
  undefined8 in_r9;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<56> local_90;
  
  dVar12 = 0.0;
  iVar8 = 0;
  uVar9 = (ulonglong)*(uint *)(param_1 + 0x78);
  lVar10 = uVar9 + 0x30;
  dVar13 = 255.0;
  auVar18 = loadVectorLeftIndexed(0x10,0x23dce0);
  dVar14 = 255.5;
  auVar18 = auVar18 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
  dVar15 = 0.5;
  do {
    iVar3 = (int)uVar9;
    fVar4 = *(float *)(iVar3 + 0x10) + *(float *)(iVar3 + 0x20);
    dVar11 = (double)fVar4;
    *(float *)(iVar3 + 0x10) = fVar4;
    if (dVar11 < dVar13) {
      if (dVar11 <= dVar12) {
        *(float *)(iVar3 + 0x10) = (float)(dVar11 + dVar13);
      }
    }
    else {
      *(float *)(iVar3 + 0x10) = (float)(dVar11 - dVar13);
    }
    iVar6 = FastDecTimerS32(uVar9 + 0x30);
    iVar1 = *(int *)(iVar3 + 0x30);
    dVar11 = (double)animationSpeed;
    auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    if (iVar6 != 0) {
      auVar17 = ZEXT416(0xffffffff);
      auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      auVar17 = vectorShiftLeftIntegerWord(auVar17,auVar17);
      auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar18,auVar17);
      iVar1 = (int)(dVar11 * dVar14);
      auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar16,0);
      auVar16 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar2 = storeVectorElementWordIndexed
                        (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0,lVar10);
      *(undefined4 *)((uint)lVar10 & 0xfffffffc) = uVar2;
    }
    dVar11 = (double)FastIntToDouble((int)(dVar11 * dVar14) - iVar1);
    uVar5 = FastLerpColor
                      (ABS((double)(float)(dVar15 - (double)(float)(dVar11 / (double)(longlong)
                                                                                     ((double)
                                                  animationSpeed * dVar14)))),0x4040ffff,0x1040ffff)
    ;
    uVar7 = FastDoubleToInt((double)*(float *)(iVar3 + 0x10));
    SpawnPart_59((double)*(float *)(iVar3 + 0x40),local_90,uVar5,uVar7,0x35,1,2,in_r9,0);
    iVar8 = iVar8 + 1;
    lVar10 = lVar10 + 4;
    uVar9 = uVar9 + 4;
  } while (iVar8 < 4);
  return;
}


// 0x023e010 (0x120 bytes)
void M1290_0023e010(int param_1)

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
    *(float *)((int)uVar5 + 0x10) = (float)(longlong)iVar4;
    uVar5 = uVar5 + 4;
  } while (iVar10 < 4);
  iVar10 = 0;
  iVar12 = 0;
  iVar11 = 0;
  iVar4 = 0;
  *(undefined4 *)(uVar1 + 0x20) = 0xbf800000;
  *(undefined4 *)(uVar1 + 0x24) = 0xc0100000;
  *(undefined4 *)(uVar1 + 0x28) = 0x3fa00000;
  *(undefined4 *)(uVar1 + 0x2c) = 0x40200000;
  auVar14 = loadVectorLeftIndexed(in_LR,0x23e000);
  auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  lVar3 = (ulonglong)uVar1 + 0x30;
  auVar8 = loadVectorLeftIndexed(4,0x23e000);
  lVar6 = 4;
  auVar7 = loadVectorLeftIndexed(8,0x23e000);
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
  *(undefined4 *)(uVar1 + 0x40) = 0x40200000;
  *(undefined4 *)(uVar1 + 0x44) = 0x40400000;
  *(undefined4 *)(uVar1 + 0x48) = 0x40400000;
  *(undefined4 *)(uVar1 + 0x4c) = 0x40200000;
  return;
}


// 0x023e140 (0x370 bytes)
// strings: 00655310: 'Moby 1290 %d needs a cut scene!\n' | 00655338: 'Already got pilot helmet... deleting.\n' | 00655360: 'Get Pilot Hat!\n' | 00a1000c: 'None' | 00655370: 'Moby 1290 %d has no segment switch!\n'

/* Moby 1290 */

void UpdateMoby_1290(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  MobyInstance *pMVar6;
  double dVar7;
  
  piVar3 = (int *)moby->pVar;
  dVar7 = (double)FastWrapRot((moby->rotation).z,g_FrameTime * 1.5707964);
  bVar1 = moby->state;
  (moby->rotation).z = (float)dVar7;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      M1290_0023e010(moby);
      if (*piVar3 == -1) {
        printf("Moby 1290 %d needs a cut scene!\n",moby->uid);
      }
      if (UnlockableItems.pilotsHelmet == '\0') {
        fVar2 = (moby->pos).z;
        moby->state = '\x01';
        (moby->pos).z = fVar2 + 1.0;
      }
      else {
        printf("Already got pilot helmet... deleting.\n");
        DeleteMoby(moby);
      }
    }
    else {
      M1290_0023dcf8(moby);
      fVar2 = (moby->pos).y - g_heroPosition.y;
      fVar5 = (moby->pos).x - g_heroPosition.x;
      if (((SQRT(fVar5 * fVar5 + fVar2 * fVar2) < 3.0) &&
          (ABS((moby->pos).z - g_heroPosition.z) < 2.0)) && (g_heroHealth != 0)) {
        iVar4 = *piVar3;
        moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
        if (iVar4 == -1) {
          printf("Moby 1290 %d needs a cut scene!\n",moby->uid);
        }
        else {
          mode_sceneInit(iVar4);
        }
        moby->state = '\x02';
      }
    }
  }
  else if (bVar1 < 3) {
    if (g_gameMode != GAME_MODE_SCENE) {
      printf("Get Pilot Hat!\n");
      MB_ToastMessage(0x232a,0xffffffffffffffff);
      g_toastMsgTimer = 0xb4;
      MB_UnlockItem(7,1);
      if (g_HelpFlags.piece<416,2>() == 0) {
        Help_QueueMessage(STR_YOU_HAVE_ACQUIRED_A_0x2328,0x34);
      }
      pMVar6 = g_MobyInstance;
      iVar4 = piVar3[1];
      if (iVar4 == -1) {
        printf("Moby 1290 %d has no segment switch!\n",moby->uid);
      }
      else {
        (&g_CheckpointLive.objState[0])[(short)g_MobyInstance[iVar4].uid] = g_MobyInstance[iVar4].levelFlagIdx + '\x02';
        bVar1 = pMVar6[piVar3[1]].levelFlagIdx;
        if ((bVar1 == 0xff) ||
           (((&DAT_00a202c0)[bVar1] != -1 && (g_LevelFlags[Level][bVar1] == -1)))) {
          (&g_Checkpoint.objState[0])[(short)pMVar6[piVar3[1]].uid] = bVar1 + 2;
        }
      }
      if (moby->levelFlagIdx != -1) {
        SetLevelFlag();
      }
      DAT_0096bda0 = 7;
      moby->state = '\x03';
    }
  }
  else if (bVar1 < 4) {
    memcard_Save(0,-1);
    DeleteMoby(moby);
  }
  return;
}


