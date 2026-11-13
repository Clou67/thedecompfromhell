// game/update/moby1101.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x1be048-0x1be4c0
// shared update function UpdateMoby_{1101_1102_1531_1532}; registered for oClasses 1101, 1102, 1531, 1532
#include "game/update/moby1101.h"
#include "game/collproc.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby1130.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"

// 0x01be048 (0x14 bytes)
void M1532_001be048(void)

{
  DAT_00763dec = 0x10000;
  return;
}


// 0x01be070 (0x5c bytes)
undefined8 M1532_001be070(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0xa6);
  if (sVar1 < 0x5fb) {
    if (sVar1 == 0x44d) {
      return 0x3ff4ccccc0000000;
    }
  }
  else {
    if (sVar1 < 0x5fc) {
      return 0xc004666660000000;
    }
    if (sVar1 < 0x5fd) {
      return 0x3ff4ccccc0000000;
    }
  }
  return 0xc000666660000000;
}


// shared update function, registered for oClasses 1101, 1102, 1531, 1532
// 0x01be0e0 (0x2d4 bytes)
/* Moby 1101
   Moby 1102
   Moby 1531
   Moby 1532 */

void UpdateMoby_1101(MobyInstance *moby)

{
  byte bVar1;
  ushort uVar2;
  MOBY_OCLASSES MVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  undefined8 in_LR;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  
  bVar1 = moby->state;
  puVar4 = (uint *)moby->pVar;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      puVar4[1] = (uint)(moby->pos).z;
      moby->state = '\x01';
      return;
    }
    uVar2 = moby->uid;
    if (((&g_Checkpoint.objState[0])[(short)uVar2] == '\0') &&
       ((*(uint *)(&g_LevelObjBits + Level * 0x100 + (int)((longlong)((int)(short)uVar2 >> 5) << 2)) &
        1 << (uVar2 & 0x1f)) == 0)) {
      uVar5 = *puVar4;
      iVar9 = (int)(((ulonglong)uVar5 & 0xffffff) << 8);
      if ((uVar5 == 0xffffffff) ||
         ((*(short *)((int)&g_MobyInstance->oClass + iVar9) != 0x267 ||
          ((&g_MobyInstance->state)[iVar9] != '\x04')))) {
        if (uVar5 == 0xffffffff) {
          return;
        }
        if (*(short *)((int)&g_MobyInstance->oClass + iVar9) != 0x4a6) {
          return;
        }
        if ((&g_MobyInstance->state)[iVar9] != '\x02') {
          return;
        }
      }
    }
    if ((moby->oClass == UPPER_DOOR_044D) || (moby->oClass == UPPER_DOOR_05FC)) {
      sound_MobyPlay_oClass(0,0,moby,0x44d);
    }
    auVar10 = ZEXT416(0xffffffff);
    auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    moby->state = '\x02';
    auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
    auVar10 = loadVectorLeftIndexed(in_LR,0x1be0cc);
    auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar10 = vectorMultiplyAddFloatingPoint
                        (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                         auVar11);
    auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
    auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar6 = storeVectorElementWordIndexed
                      (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,8,
                       ZEXT48(puVar4));
    *(undefined4 *)((uint)(puVar4 + 2) & 0xfffffffc) = uVar6;
    return;
  }
  if (2 < bVar1) {
    return;
  }
  MVar3 = moby->oClass;
  if ((short)MVar3 < 0x5fb) {
    if (MVar3 == UPPER_DOOR_044D) {
      fVar7 = 1.3;
      goto LAB_001be2e0;
    }
  }
  else {
    if ((short)MVar3 < 0x5fc) {
      fVar7 = -2.55;
      goto LAB_001be2e0;
    }
    if ((short)MVar3 < 0x5fd) {
      fVar7 = 1.3;
      goto LAB_001be2e0;
    }
  }
  fVar7 = -2.05;
LAB_001be2e0:
  (moby->pos).z = fVar7 * g_FrameTime + (moby->pos).z;
  iVar9 = FastDecTimerS32(ZEXT48(puVar4) + 8);
  if (iVar9 != 0) {
    uVar2 = moby->uid;
    iVar8 = (int)((longlong)((int)(short)uVar2 >> 5) << 2);
    iVar9 = (int)((longlong)((int)(short)uVar2 >> 5) << 2);
    MVar3 = moby->oClass;
    uVar5 = *(uint *)(&g_CheckpointBits + iVar9);
    *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar8) =
         *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar8) | 1 << (uVar2 & 0x1f);
    *(uint *)(&g_CheckpointBits + iVar9) = uVar5 | 1 << (uVar2 & 0x1f);
    if (MVar3 == UPPER_DOOR_044D) {
      PlayMobySound(1,0,moby);
    }
    moby->state = '\x03';
  }
  return;
}


// 0x01be3b4 (0x14 bytes)
void M1532_001be3b4(void)

{
  DAT_00763e5c = 0x10000;
  return;
}


// 0x01be3c8 (0xf8 bytes)
// strings: 0096c074: 'None'

void M1532_001be3c8(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((g_gameMode == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar2 = 0;
    puVar3 = &DAT_0095cd50;
    sVar1 = g_SpaceSceneMobyCnt.piece<0,2>();
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        if ((((MobyInstance *)puVar3[0x5e])->oClass == *(MOBY_OCLASSES *)(param_1 + 0xa6)) &&
           (DAT_00a1bf81 == '\0')) {
          AttachManipulator((MobyInstance *)puVar3[0x5e],1,&DAT_00a1bf80);
          DAT_00a1bfa0 = DAT_00763e80;
          DAT_00a1bfa4 = DAT_00763e80;
          DAT_00a1bfa8 = DAT_00763e80;
          sVar1 = g_SpaceSceneMobyCnt.piece<0,2>();
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar2 < sVar1);
    }
  }
  return;
}


