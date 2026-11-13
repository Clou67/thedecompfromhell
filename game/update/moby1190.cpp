// game/update/moby1190.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x1f1a2c-0x1f1f58
#include "game/update/moby1190.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/memcard.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby1130.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"

// 0x01f1a2c (0x14 bytes)
void M1190_001f1a2c(void)

{
  DAT_00766038 = 0x10000;
  return;
}


// 0x01f1a40 (0xf4 bytes)
// strings: 0096c074: 'None'

void M1190_001f1a40(int param_1)

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
          AttachManipulator((MobyInstance *)puVar3[0x5e],0,&DAT_00a1bf80);
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


// 0x01f1b50 (0x408 bytes)
// strings: 0096c074: 'None'

/* Moby 1190 */

void UpdateMoby_1190(MobyInstance *moby)

{
  byte bVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  float fVar8;
  short sVar10;
  int iVar9;
  undefined4 *puVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  pvVar7 = moby->pVar;
  if ((moby->enabled != '\0') &&
     (fVar3 = (moby->pos).y - GameCamera.posY, fVar4 = (moby->pos).x - GameCamera.posX,
     fVar5 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) < 30.0)) {
    MB_SetZBoundsFromGround(moby);
    moby->shadow = '\x18';
  }
  if ((g_gameMode == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar9 = 0;
    puVar11 = &DAT_0095cd50;
    sVar10 = g_SpaceSceneMobyCnt.piece<0,2>();
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        if ((((MobyInstance *)puVar11[0x5e])->oClass == moby->oClass) && (DAT_00a1bf81 == '\0')) {
          AttachManipulator((MobyInstance *)puVar11[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40300000;
          DAT_00a1bfa4 = 0x40300000;
          DAT_00a1bfa8 = 0x40300000;
          sVar10 = g_SpaceSceneMobyCnt.piece<0,2>();
        }
        iVar9 = iVar9 + 1;
        puVar11 = puVar11 + 1;
      } while (iVar9 < sVar10);
    }
  }
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
        moby->collision = (ushort *)0x0;
        moby->state = '\x03';
        moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
      }
      else {
        moby->state = '\x01';
        FUN_004d3720(moby,pvVar7);
      }
    }
    else {
      iVar9 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar7 + 0x140));
      uVar2 = 0x3f800000;
      if (iVar9 != 0) {
        uVar2 = 0x437f0000;
      }
      *(undefined4 *)((int)pvVar7 + 0xc) = uVar2;
      iVar9 = FUN_004d3870(moby,pvVar7);
      if (iVar9 != 0) {
        moby->state = '\x02';
      }
    }
  }
  else if (bVar1 < 3) {
    if (*(short *)((int)pvVar7 + 4) == 2) {
      MB_UnlockLevel(Blarg);
      SetLevelFlag(moby->levelFlagIdx);
      fVar3 = (moby->transform).v0.y;
      fVar4 = (moby->transform).v0.x;
      fVar5 = (moby->transform).v0.z;
      fVar6 = 0.0;
      dVar17 = (double)(moby->rotation).x;
      dVar18 = (double)(moby->rotation).y;
      dVar19 = (double)(moby->rotation).w;
      fVar8 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      if (fVar8 == 0.0) {
        fVar5 = (moby->transform).v0.w;
        fVar4 = fVar6;
        fVar3 = fVar6;
      }
      else {
        fVar8 = 2.0 / fVar8;
        fVar6 = fVar5 * fVar8;
        fVar5 = (moby->transform).v0.w;
        fVar4 = fVar4 * fVar8;
        fVar3 = fVar3 * fVar8;
      }
      dVar16 = (double)fVar5;
      dVar15 = (double)(fVar4 + (moby->pos).x);
      dVar14 = (double)(fVar3 + (moby->pos).y);
      dVar13 = (double)(fVar6 + (moby->pos).z);
      dVar12 = (double)FastWrapRot((moby->rotation).z,3.14159);
      g_SceneHeroWarpPos.x = (float)dVar15;
      g_SceneHeroWarpPos.y = (float)dVar14;
      g_SceneHeroWarpPos.z = (float)dVar13;
      g_SceneHeroWarpPos.w = (float)dVar16;
      g_SceneHeroWarpRot.x = (float)dVar17;
      g_SceneHeroWarpRot.y = (float)dVar18;
      g_SceneHeroWarpRot.z = (float)dVar12;
      g_SceneHeroWarpRot.w = (float)dVar19;
      g_SceneHeroWarpPending = 1;
      memcard_Save(0,-1);
      moby->collision = (ushort *)0x0;
      moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
      moby->state = '\x03';
    }
    else if (g_gameMode != GAME_MODE_SCENE) {
      FUN_004d3870(moby,pvVar7);
    }
  }
  else if (bVar1 < 4) {
    moby->collision = (ushort *)0x0;
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
  }
  return;
}


