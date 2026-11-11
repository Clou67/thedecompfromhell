// game/update/moby914.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x4af35c-0x4afbec
#include "game/update/moby914.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/loaders.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/respawn.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby1118.h"
#include "game/update/moby1130.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"

// 0x04af35c (0x14 bytes)
void M914_004af35c(void)

{
  DAT_008f4200 = 0x10000;
  return;
}


// 0x04af370 (0xf4 bytes)
// strings: 0096c074: 'None'

void M914_004af370(int param_1)

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
          AttachManipulator((MobyInstance *)puVar3[0x5e],2,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40300000;
          DAT_00a1bfa4 = 0x40300000;
          DAT_00a1bfa8 = 0x40300000;
          sVar1 = g_SpaceSceneMobyCnt.piece<0,2>();
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar2 < sVar1);
    }
  }
  return;
}


// 0x04af4b0 (0x73c bytes)
/* Moby 914 */

void UpdateMoby_914(MobyInstance *moby)

{
  byte bVar1;
  ushort uVar2;
  void *pvVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  GPiece<16> local_e0;
  GPiece<16> local_d0;
  GPiece<16> local_c0;
  GPiece<16> local_b0;
  GPiece<40> auStack_a0;
  
  lVar10 = (longlong)(int)moby;
  pvVar3 = moby->pVar;
  if ((moby->enabled != '\0') &&
     (fVar5 = (moby->pos).y - GameCamera.posY, fVar6 = (moby->pos).x - GameCamera.posX,
     fVar7 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5) < 26.0)) {
    MB_SetZBoundsFromGround(lVar10);
    moby->shadow = '\x15';
  }
  uVar2 = moby->uid;
  if ((((&DAT_00a545c4)[(short)uVar2] != '\0') ||
      ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar2 >> 5) << 2)) &
       1 << (uVar2 & 0x1f)) != 0)) && (moby->state != '\x03')) {
    moby->state = '\x03';
    MB_SetAnimationNoBlend(lVar10,1,0);
  }
  iVar11 = MB_damage(lVar10,0xffffffffffffffff,0);
  if (((iVar11 != 0) && (*(int *)(iVar11 + 0x20) != 0)) &&
     ((*(char *)(iVar11 + 0x28) == '\x03' &&
      ((uVar2 = moby->uid, (&DAT_00a545c4)[(short)uVar2] == '\0' &&
       ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar2 >> 5) << 2)) &
        1 << (uVar2 & 0x1f)) == 0)))))) {
    MB_UnlockSkillPoint(5);
    MB_genericExplosion
              (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,0x3ff0000000000000,
               0x402e000000000000,lVar10,local_e0,local_d0,0,&DAT_004af464,10,3,0x10);
    moby->state = '\x03';
    MB_SetAnimationNoBlend(lVar10,1,0);
    uVar2 = moby->uid;
    iVar8 = (int)((longlong)((int)(short)uVar2 >> 5) << 2);
    iVar11 = (int)((longlong)((int)(short)uVar2 >> 5) << 2);
    uVar4 = *(uint *)(&DAT_00a54dd0 + iVar11);
    *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar8) =
         *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar8) | 1 << (uVar2 & 0x1f);
    *(uint *)(&DAT_00a54dd0 + iVar11) = uVar4 | 1 << (uVar2 & 0x1f);
  }
  moby->damage = -1;
  if ((UnlockableItems.swingshot == '\0') || (moby->state == '\x03')) {
    bVar1 = moby->state;
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        uVar4 = g_heroMobyPtr->color;
        uVar9 = g_heroMobyPtr->light;
        moby->state = '\x01';
        moby->color = uVar4;
        moby->light = uVar9;
        FUN_004d3720(lVar10,pvVar3);
        if (g_MiscLevelFlags.field25_0x19 != 0) {
          *(undefined2 *)((int)pvVar3 + 0x36) = 2;
          *(undefined2 *)((int)pvVar3 + 4) = 1;
        }
      }
      else {
        iVar11 = FUN_004d3870(lVar10,pvVar3);
        if (iVar11 != 0) {
          g_MiscLevelFlags.field25_0x19 = 1;
          MB_SetPointAheadOfMoby(0x40059999a0000000,lVar10);
          moby->state = '\x02';
        }
      }
    }
    else if (bVar1 < 3) {
      if (((g_gameMode != GAME_MODE_SCENE) &&
          (moby->state = '\x01', *(short *)((int)pvVar3 + 4) == 2)) &&
         (iVar11 = *(int *)((int)pvVar3 + 0x4c), iVar11 != -1)) {
        SetSpawnPoint((Vec4 *)&Cuboids[iVar11].pos,(Vec4 *)&Cuboids[iVar11].rot);
      }
    }
    else if (bVar1 < 4) {
      MB_randRot();
      dVar14 = 0.0;
      dVar13 = 0.25;
      MB_randRangeFloat(0.0,0.25);
      MB_randRot();
      MB_randRangeFloat((float)dVar14,(float)dVar13);
      dVar13 = 1.0;
      MB_randRangeFloat((float)dVar14,1.0);
      MB_randRot();
      dVar15 = 0.5;
      MB_randRangeFloat((float)dVar14,0.5);
      MB_randRangeFloat((float)dVar14,(float)dVar13);
      MB_randRot();
      MB_randRangeFloat((float)dVar14,(float)dVar15);
      FastVecAddSelf(auStack_a0,local_b0,lVar10 + 0x10);
      iVar11 = MB_randInt(3);
      if (iVar11 == 0) {
        uVar12 = 0x410339e000000000;
        MB_randRange(0x410339e000000000,0x3c,0x78);
        SpawnPart_22(uVar12,local_b0,local_c0,0x20202020,&DAT_007f7f7f);
      }
    }
  }
  return;
}


