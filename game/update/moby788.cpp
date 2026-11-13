// game/update/moby788.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x45ca38-0x45de60
#include "game/update/moby788.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/memcard.h"
#include "game/mission.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/respawn.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby1130.h"
#include "game/update/moby757.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"

// 0x045ca38 (0xf4 bytes)
// strings: 0096c074: 'None'

void M788_0045ca38(int param_1)

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


// 0x045cb60 (0x520 bytes)
// inlined: FastAtan2 @0x45cd70
void M788_0045cb60(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  MobyInstance *pMVar19;
  Cuboid *pCVar20;
  ulonglong uVar21;
  int iVar24;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  float *pfVar28;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar29;
  double dVar30;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar21 = ZEXT48(&stack0x00000000);
  lVar26 = uVar21 - 0x100;
  puVar13 = (ulonglong *)lVar26;
  *puVar13 = uVar21;
  puVar13[0x22] = in_LR;
  puVar13[0x1d] = in_f29;
  puVar13[0x1e] = in_f30;
  puVar13[0x1f] = in_f31;
  puVar13[0x1b] = unaff_r30;
  puVar13[0x1c] = unaff_r31;
  iVar10 = *(int *)(param_1 + 0x78);
  iVar24 = *(int *)(iVar10 + 0x180);
  puVar13[0x1a] = unaff_r29;
  puVar13[0x19] = unaff_r28;
  if (iVar24 == 1) {
    iVar24 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)(iVar10 + 0x148));
    if (iVar24 == 0) {
      *(undefined4 *)(iVar10 + 0x180) = 0;
      Hud_SetEntryValueById(*(int *)(iVar10 + 0x160),0);
      *(undefined4 *)(iVar10 + 0x160) = 0xffffffff;
      Hud_SetEntryValueById(*(int *)(iVar10 + 0x164),0);
      *(undefined4 *)(iVar10 + 0x164) = 0xffffffff;
    }
    else if (((*(int *)(iVar10 + 0x14c) == 0) && (*(int *)(iVar10 + 0x150) == 0)) &&
            (iVar24 = FastDecTimerS16(iVar10 + 0x168), iVar24 != 0)) {
      *(undefined4 *)(iVar10 + 0x180) = 2;
      puVar13[0x17] = (longlong)(int)(animationSpeed * 16.5);
      FadeToBlack(*(undefined4 *)((int)puVar13 + 0xbc));
      Hud_SetEntryValueById(*(int *)(iVar10 + 0x160),0);
      *(undefined4 *)(iVar10 + 0x160) = 0xffffffff;
      Hud_SetEntryValueById(*(int *)(iVar10 + 0x164),0);
      uVar11 = *(uint *)(iVar10 + 0x154);
      *(undefined4 *)(iVar10 + 0x164) = 0xffffffff;
      pCVar20 = Cuboids;
      iVar24 = (int)(((ulonglong)uVar11 & 0x1ffffff) << 7);
      fVar1 = Cuboids[uVar11].pos.x;
      *(float *)(param_1 + 0x10) = fVar1;
      fVar2 = pCVar20[uVar11].pos.y;
      *(float *)(param_1 + 0x14) = fVar2;
      fVar3 = pCVar20[uVar11].pos.z;
      *(float *)(param_1 + 0x18) = fVar3;
      fVar4 = pCVar20[uVar11].pos.w;
      *(float *)(param_1 + 0x1c) = fVar4;
      uVar12 = *(uint *)((int)&(pCVar20->matrix).v0.x + iVar24);
      uVar11 = *(uint *)((int)&(pCVar20->matrix).v0.y + iVar24);
      fVar6 = ABS(*(float *)((int)&(pCVar20->matrix).v0.x + iVar24));
      fVar7 = ABS(*(float *)((int)&(pCVar20->matrix).v0.y + iVar24));
      *(float *)(puVar13 + 0x12) = fVar6 - fVar7;
      fVar5 = 0.0;
      uVar22 = (ulonglong)(uVar12 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x12) >> 0x1e) & 2 | (ulonglong)(uVar11 >> 0x1d) & 4;
      fVar8 = fVar6;
      if (*(float *)(puVar13 + 0x12) - 0.0 < 0.0) {
        fVar8 = fVar7;
      }
      fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
      if (*(float *)(puVar13 + 0x12) - 0.0 < 0.0) {
        fVar7 = fVar6;
      }
      fVar6 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
      if (0.0 < fVar8) {
        lVar27 = uVar21 - 0xf0;
        lVar25 = uVar21 - 0x6c;
        lVar23 = uVar21 - 0x5c;
        lVar29 = 2;
        fVar7 = (fVar7 - fVar8) / (fVar7 + fVar8);
        fVar8 = fVar7 * fVar7;
        *(float *)(puVar13 + 0x14) = fVar7;
        *(float *)(puVar13 + 0x13) = fVar7;
        *(float *)((int)puVar13 + 0x9c) = fVar7;
        *(float *)((int)puVar13 + 0x94) = fVar7;
        fVar7 = fVar8 * fVar8;
        *(float *)(puVar13 + 0x13) = *(float *)(puVar13 + 0x13) * fVar8;
        *(float *)((int)puVar13 + 0x9c) = *(float *)((int)puVar13 + 0x9c) * fVar7;
        *(float *)(puVar13 + 0x14) = *(float *)(puVar13 + 0x14) * fVar7 * fVar8;
        do {
          *(float *)((int)lVar27 + 0x94) = *(float *)((int)lVar27 + 0x84) * fVar7 * fVar7;
          iVar24 = (int)lVar25;
          lVar27 = lVar27 + 8;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)(iVar24 + 4) * fVar7 * fVar7;
          lVar23 = lVar23 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar27 = uVar21 - 0x6c;
        pfVar28 = (float *)&DAT_007358e0;
        lVar29 = 4;
        lVar23 = lVar27;
        lVar25 = lVar26;
        do {
          fVar7 = *pfVar28;
          fVar8 = pfVar28[1];
          pfVar28 = pfVar28 + 2;
          *(float *)((int)lVar25 + 0x94) = *(float *)((int)lVar25 + 0x94) * fVar7;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar8;
          lVar23 = lVar23 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar23 = 2;
        do {
          iVar24 = (int)lVar26;
          lVar26 = lVar26 + 0x10;
          iVar18 = (int)lVar27;
          lVar27 = lVar27 + 0x10;
          fVar5 = fVar5 + *(float *)(iVar24 + 0x94) + *(float *)(iVar18 + 4) +
                  *(float *)(iVar18 + 8) + *(float *)(iVar18 + 0xc);
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        fVar5 = (fVar5 + 0.7853982) * fVar9 + fVar6;
      }
      fVar6 = fVar5 + 1.5707963;
      fVar7 = 3.1415925 - fVar5;
      if (fVar5 - (3.1415925 - fVar5) < 0.0) {
        fVar7 = fVar5;
      }
      fVar8 = 3.1415925 - fVar6;
      if (fVar6 - (3.1415925 - fVar6) < 0.0) {
        fVar8 = fVar6;
      }
      fVar9 = -3.1415925 - fVar5;
      if ((-3.1415925 - fVar5) - fVar7 < 0.0) {
        fVar9 = fVar7;
      }
      fVar7 = -3.1415925 - fVar6;
      if ((-3.1415925 - fVar6) - fVar8 < 0.0) {
        fVar7 = fVar8;
      }
      fVar6 = fVar9 * fVar9;
      fVar8 = fVar7 * fVar7;
      fVar16 = fVar6 * fVar6 * fVar9;
      *(undefined4 *)((int)puVar13 + 0x8c) = 0;
      *(undefined4 *)(puVar13 + 0x11) = 0;
      *(undefined4 *)((int)puVar13 + 0x84) = 0;
      *(undefined4 *)(puVar13 + 0x10) = 0;
      fVar14 = fVar8 * fVar8 * fVar7;
      fVar17 = fVar6 * fVar16;
      fVar15 = fVar8 * fVar14;
      *(float *)((int)puVar13 + 0x74) =
           (fVar6 * fVar17 * 2.601887e-06 +
           fVar17 * -0.0001980741 + fVar16 * 0.0083330255 + fVar6 * fVar9 * -0.16666657 + fVar9) *
           1.5 + fVar2;
      *(float *)((int)puVar13 + 0x7c) = fVar4;
      *(float *)(puVar13 + 0xf) = fVar3;
      *(float *)(param_1 + 0x48) = fVar5;
      *(float *)(puVar13 + 0xe) =
           (fVar8 * fVar15 * 2.601887e-06 +
           fVar15 * -0.0001980741 + fVar14 * 0.0083330255 + fVar8 * fVar7 * -0.16666657 + fVar7) *
           1.5 + fVar1;
      dVar30 = (double)FastWrapRot(fVar5,3.1415927);
      *(float *)(puVar13 + 0x11) = (float)dVar30;
      Hero_Warp((float *)(puVar13 + 0xe),(float *)(puVar13 + 0x10),0,1);
      pMVar19 = g_MobyInstance;
      iVar24 = *(int *)(iVar10 + 0x15c);
      g_MobyInstance[*(int *)(iVar10 + 0x158)].setByGroup = '\x01';
      pMVar19[iVar24].setByGroup = '\x01';
      *(undefined2 *)(iVar10 + 0x36) = 2;
      *(undefined1 *)(iVar10 + 8) = 1;
    }
  }
  else if ((iVar24 == 0) &&
          (iVar24 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)(iVar10 + 0x148)),
          iVar24 != 0)) {
    *(undefined4 *)(iVar10 + 0x180) = 1;
    iVar24 = RegisterHUDCallback
                       (0x15,2000,&PTR_AmmoHud_Init_00705808,&PTR_MobyCounterHud_Init_00705890,
                        &PTR_Draw_MobyCounterHud_00705898,(int *)(iVar10 + 0x14c),100);
    *(int *)(iVar10 + 0x164) = iVar24;
    iVar24 = RegisterHUDCallback
                       (0x17,0x7d1,&PTR_AmmoHud_Init_00705808,&PTR_MobyCounterHud_Init_00705890,
                        &PTR_Draw_MobyCounterHud_00705898,(int *)(iVar10 + 0x150),7);
    *(int *)(iVar10 + 0x160) = iVar24;
  }
  return;
}


// 0x045d0f8 (0xd68 bytes)
// inlined: FastAtan2 @0x45d6b8, FastAtan2 @0x45da64, FastAtan2 @0x45dc18
// strings: 0096c074: 'None' | 00658338: 'Surfer Agent'

/* Moby 788 */

void UpdateMoby_788(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  ulonglong *puVar10;
  float fVar11;
  int iVar12;
  gameMode_t gVar13;
  ulonglong uVar14;
  undefined2 uVar20;
  ulonglong uVar15;
  int iVar18;
  undefined4 uVar19;
  longlong lVar16;
  longlong lVar17;
  short sVar23;
  float *pfVar22;
  longlong lVar21;
  longlong lVar24;
  ulonglong unaff_r26;
  undefined4 *puVar25;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar26;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar31;
  double dVar32;
  ulonglong in_f30;
  double dVar33;
  double dVar34;
  ulonglong in_f31;
  double dVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar17 = uVar14 - 0x160;
  puVar10 = (ulonglong *)lVar17;
  *puVar10 = uVar14;
  puVar10[0x2e] = in_LR;
  puVar10[0x27] = in_f27;
  puVar10[0x28] = in_f28;
  puVar10[0x29] = in_f29;
  puVar10[0x2a] = in_f30;
  puVar10[0x2b] = in_f31;
  puVar10[0x26] = unaff_r31;
  puVar10[0x25] = unaff_r30;
  gVar13 = g_gameMode;
  pvVar9 = moby->pVar;
  uVar26 = ZEXT48(pvVar9);
  puVar10[0x24] = unaff_r29;
  puVar10[0x23] = unaff_r28;
  puVar10[0x22] = unaff_r27;
  puVar10[0x21] = unaff_r26;
  if ((gVar13 == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar18 = 0;
    puVar25 = &DAT_0095cd50;
    sVar23 = g_SpaceSceneMobyCnt.piece<0,2>();
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        if ((((MobyInstance *)puVar25[0x5e])->oClass == moby->oClass) && (DAT_00a1bf81 == '\0')) {
          AttachManipulator((MobyInstance *)puVar25[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40300000;
          DAT_00a1bfa4 = 0x40300000;
          DAT_00a1bfa8 = 0x40300000;
          sVar23 = g_SpaceSceneMobyCnt.piece<0,2>();
        }
        iVar18 = iVar18 + 1;
        puVar25 = puVar25 + 1;
      } while (iVar18 < sVar23);
    }
  }
  M788_0045cb60(moby);
  bVar1 = moby->state;
  if (bVar1 == 0) {
    if (CHAR_ARRAY_0096c165[0x1e] != '\0') {
      DeleteMoby(moby);
      return;
    }
    *(undefined4 *)((int)pvVar9 + 0x180) = 0;
    *(char **)((int)pvVar9 + 0x20) = "Surfer Agent";
    moby->state = '\x01';
    moby->updateDistance = -1;
    FUN_004d3720(moby,uVar26);
    MB_SetZBoundsFromPos(moby);
  }
  else if (bVar1 < 2) {
    if ((*(char *)((int)pvVar9 + 8) == '\x01') &&
       (iVar18 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar9 + 0x16c))
       , iVar18 != 0)) {
      uVar19 = 0x437f0000;
    }
    else {
      uVar19 = 0x40200000;
    }
    *(undefined4 *)((int)pvVar9 + 0xc) = uVar19;
    iVar18 = FUN_004d3870(moby,uVar26);
    if (iVar18 != 0) {
      MB_SetPointAheadOfMoby(0x4004000000000000,moby);
      moby->state = '\x02';
    }
    if (*(short *)((int)pvVar9 + 4) == 2) {
      Help_QueueMessage(STR_YOUVE_JUST_ACQUIRED_A_0x07D0,10);
      MB_UnlockItem(0x1e,1);
      SetLevelFlag(moby->levelFlagIdx);
      SetSpawnPoint((Vec4 *)&g_heroPosition,(Vec4 *)&g_heroRotation);
      memcard_Save(0,-1);
      DeleteMoby(moby);
      return;
    }
    uVar2 = moby->animationId;
    dVar35 = 10.5;
    if (uVar2 == '\0') {
      iVar18 = FastDecTimerS16(uVar26 + 0x16a);
      uVar2 = moby->animationId;
      if (iVar18 != 0) {
        dVar28 = (double)MB_randRangeFloat(1200.0,2400.0);
        uVar20 = FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
        *(undefined2 *)((int)pvVar9 + 0x16a) = uVar20;
        iVar18 = MB_randInt(2);
        lVar16 = (ZERO_MASK(iVar18) & 1U) + 1;
        if ((uint)moby->animationId != (uint)lVar16) {
          puVar10[0x1f] = (longlong)(int)((double)animationSpeed * dVar35);
          MB_SetAnimation(moby,lVar16,0,*(undefined4 *)((int)puVar10 + 0xfc));
        }
        goto LAB_0045d5a0;
      }
    }
    if (uVar2 != '\0' && (moby->field43_0x70 & 2U) != 0) {
      puVar10[0x1f] = (longlong)(int)((double)animationSpeed * dVar35);
      MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar10 + 0xfc));
    }
  }
  else if (bVar1 < 3) {
    if (g_SceneHeroWarpPending == '\0') {
      fVar3 = (moby->transform).v0.y;
      fVar4 = (moby->transform).v0.x;
      fVar6 = (moby->transform).v0.z;
      fVar7 = 0.0;
      fVar5 = SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar3 * fVar3);
      if (fVar5 == 0.0) {
        g_SceneHeroWarpPos.w = (moby->transform).v0.w;
        fVar3 = fVar7;
        fVar6 = fVar7;
      }
      else {
        fVar5 = 2.5 / fVar5;
        fVar3 = fVar3 * fVar5;
        fVar7 = fVar4 * fVar5;
        g_SceneHeroWarpPos.w = (moby->transform).v0.w;
        fVar6 = fVar6 * fVar5;
      }
      g_SceneHeroWarpPos.x = fVar7 + (moby->pos).x;
      g_SceneHeroWarpPos.y = fVar3 + (moby->pos).y;
      g_SceneHeroWarpPos.z = fVar6 + (moby->pos).z + 10.0;
      dVar35 = (double)GetGroundZ(0x3fe0000000000000,&g_SceneHeroWarpPos.x,0);
      g_SceneHeroWarpPos.z = (float)dVar35;
      g_SceneHeroWarpRot.w = 0;
      g_SceneHeroWarpRot.z = 0.0;
      g_SceneHeroWarpRot.y = 0;
      g_SceneHeroWarpRot.x = 0;
      dVar35 = (double)FastWrapRot((moby->rotation).z,3.14159);
      g_SceneHeroWarpRot.z = (float)dVar35;
      g_SceneHeroWarpPending = '\x01';
    }
    if (g_gameMode != GAME_MODE_SCENE) {
      moby->state = '\x01';
    }
  }
LAB_0045d5a0:
  dVar35 = 0.019999999552965164;
  if (moby->animationId != '\0') goto LAB_0045ddbc;
  fVar3 = (moby->pos).y;
  fVar4 = (moby->pos).x;
  fVar6 = fVar3 - g_heroPosition.y;
  fVar7 = fVar4 - g_heroPosition.x;
  if (8.0 <= SQRT(fVar7 * fVar7 + fVar6 * fVar6)) {
LAB_0045d868:
    if (*(int *)((int)pvVar9 + 0x188) != 0) {
      *(undefined4 *)((int)pvVar9 + 0x188) = 0;
      *(float *)((int)pvVar9 + 0x170) = g_heroCGPos;
      *(float *)((int)pvVar9 + 0x174) = DAT_00969db4;
      *(float *)((int)pvVar9 + 0x178) = DAT_00969db8;
      *(undefined4 *)((int)pvVar9 + 0x17c) = DAT_00969dbc;
    }
  }
  else {
    fVar4 = g_heroCGPos - fVar4;
    fVar3 = DAT_00969db4 - fVar3;
    fVar6 = ABS(fVar4);
    fVar5 = ABS(fVar3);
    *(float *)(puVar10 + 0x11) = fVar4;
    *(float *)((int)puVar10 + 0x8c) = fVar3;
    fVar3 = (moby->rotation).z;
    *(float *)(puVar10 + 0x12) = fVar6 - fVar5;
    fVar4 = 0.0;
    uVar15 = (ulonglong)(*(uint *)(puVar10 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x8c) >> 0x1d) & 4;
    fVar7 = ABS(*(float *)(puVar10 + 0x11));
    if (*(float *)(puVar10 + 0x12) - 0.0 < 0.0) {
      fVar7 = fVar5;
    }
    fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
    fVar5 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    fVar11 = ABS(*(float *)((int)puVar10 + 0x8c));
    if (*(float *)(puVar10 + 0x12) - 0.0 < 0.0) {
      fVar11 = fVar6;
    }
    if (0.0 < fVar7) {
      lVar16 = uVar14 - 0x150;
      lVar24 = uVar14 - 0x7c;
      lVar21 = uVar14 - 0x8c;
      lVar27 = 2;
      fVar6 = (fVar11 - fVar7) / (fVar11 + fVar7);
      fVar7 = fVar6 * fVar6;
      *(float *)(puVar10 + 0x1c) = fVar6;
      *(float *)(puVar10 + 0x1b) = fVar6;
      *(float *)((int)puVar10 + 0xdc) = fVar6;
      *(float *)((int)puVar10 + 0xd4) = fVar6;
      fVar6 = fVar7 * fVar7;
      *(float *)(puVar10 + 0x1b) = *(float *)(puVar10 + 0x1b) * fVar7;
      *(float *)((int)puVar10 + 0xdc) = *(float *)((int)puVar10 + 0xdc) * fVar6;
      *(float *)(puVar10 + 0x1c) = *(float *)(puVar10 + 0x1c) * fVar6 * fVar7;
      do {
        *(float *)((int)lVar16 + 0xd4) = *(float *)((int)lVar16 + 0xc4) * fVar6 * fVar6;
        iVar18 = (int)lVar21;
        lVar21 = lVar21 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar6 * fVar6;
        lVar24 = lVar24 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar24 = uVar14 - 0x8c;
      pfVar22 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar21 = lVar24;
      do {
        fVar6 = *pfVar22;
        fVar7 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar16 + 0xd4) = *(float *)((int)lVar16 + 0xd4) * fVar6;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar7;
        lVar21 = lVar21 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar21 = 2;
      lVar16 = lVar17;
      do {
        iVar18 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        iVar12 = (int)lVar24;
        lVar24 = lVar24 + 0x10;
        fVar4 = fVar4 + *(float *)(iVar18 + 0xd4) + *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8)
                + *(float *)(iVar12 + 0xc);
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      fVar4 = (fVar4 + 0.7853982) * fVar8 + fVar5;
    }
    dVar28 = (double)FastSubRots(fVar3,fVar4);
    if (1.5707963705062866 <= dVar28) goto LAB_0045d868;
    if (SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) <= 0.01) {
      FastDecTimerS32(uVar26 + 0x188);
    }
    else {
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = loadVectorLeftIndexed(0x38,0x45d080);
      auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar37);
      auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar19 = storeVectorElementWordIndexed
                         (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x188,uVar26
                         );
      *(undefined4 *)((int)pvVar9 + 0x188U & 0xfffffffc) = uVar19;
    }
  }
  iVar18 = FastDecTimerS32(uVar26 + 0x18c);
  if (iVar18 != 0) {
    dVar28 = (double)MB_randRangeFloat(180.0,300.0);
    uVar19 = FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar9 + 0x18c) = uVar19;
    dVar33 = (double)(moby->rotation).z;
    dVar28 = (double)MB_randRangeFloat(-90.0,90.0);
    dVar31 = 0.01745329238474369;
    dVar28 = (double)FastWrapRot((float)dVar33,(float)(dVar28 * 0.01745329238474369));
    dVar33 = (double)MB_randRangeFloat(0.0,30.0);
    MB_SphericalToVector
              (6.0,(float)dVar28,(float)(dVar33 * dVar31),(float *)((int)pvVar9 + 0x170));
    *(float *)((int)pvVar9 + 0x170) = *(float *)((int)pvVar9 + 0x170) + (moby->pos).x;
    *(float *)((int)pvVar9 + 0x174) = *(float *)((int)pvVar9 + 0x174) + (moby->pos).y;
    *(float *)((int)pvVar9 + 0x178) = *(float *)((int)pvVar9 + 0x178) + (moby->pos).z;
  }
  if (*(int *)((int)pvVar9 + 0x188) == 0) {
    fVar3 = *(float *)((int)pvVar9 + 0x170);
    fVar4 = *(float *)((int)pvVar9 + 0x174);
    fVar6 = *(float *)((int)pvVar9 + 0x178);
  }
  else {
    dVar35 = 0.03999999910593033;
    fVar3 = g_heroCGPos;
    fVar4 = DAT_00969db4;
    fVar6 = DAT_00969db8;
  }
  fVar3 = fVar3 - (moby->pos).x;
  dVar34 = (double)fVar3;
  fVar4 = fVar4 - (moby->pos).y;
  dVar32 = (double)fVar4;
  *(float *)((int)puVar10 + 0x7c) = fVar3;
  *(float *)(puVar10 + 0x10) = fVar4;
  dVar31 = (double)(fVar6 - ((moby->pos).z + 2.0));
  *(float *)((int)puVar10 + 0x84) = (float)(ABS(dVar34) - ABS(dVar32));
  dVar33 = 0.0;
  uVar15 = (ulonglong)(*(uint *)((int)puVar10 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar10 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar10 + 0x10) >> 0x1d) & 4;
  dVar28 = ABS((double)*(float *)((int)puVar10 + 0x7c));
  if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
    dVar28 = ABS(dVar32);
  }
  fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
  dVar30 = ABS((double)*(float *)(puVar10 + 0x10));
  if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
    dVar30 = ABS(dVar34);
  }
  fVar4 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  dVar29 = dVar33;
  if (0.0 < dVar28) {
    lVar16 = uVar14 - 0x150;
    lVar21 = uVar14 - 0xac;
    lVar24 = uVar14 - 0x9c;
    lVar27 = 2;
    fVar6 = (float)(dVar30 - dVar28) / (float)(dVar30 + dVar28);
    fVar7 = fVar6 * fVar6;
    *(float *)(puVar10 + 0x18) = fVar6;
    *(float *)(puVar10 + 0x17) = fVar6;
    *(float *)((int)puVar10 + 0xbc) = fVar6;
    *(float *)((int)puVar10 + 0xb4) = fVar6;
    fVar6 = fVar7 * fVar7;
    *(float *)(puVar10 + 0x17) = *(float *)(puVar10 + 0x17) * fVar7;
    *(float *)((int)puVar10 + 0xbc) = *(float *)((int)puVar10 + 0xbc) * fVar6;
    *(float *)(puVar10 + 0x18) = *(float *)(puVar10 + 0x18) * fVar6 * fVar7;
    do {
      *(float *)((int)lVar16 + 0xb4) = *(float *)((int)lVar16 + 0xa4) * fVar6 * fVar6;
      iVar18 = (int)lVar21;
      lVar16 = lVar16 + 8;
      lVar21 = lVar21 + 8;
      *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar6 * fVar6;
      lVar24 = lVar24 + 8;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    lVar27 = 4;
    lVar24 = uVar14 - 0xac;
    pfVar22 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar21 = lVar24;
    do {
      fVar6 = *pfVar22;
      fVar7 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar16 + 0xb4) = *(float *)((int)lVar16 + 0xb4) * fVar6;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar7;
      lVar21 = lVar21 + 8;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    lVar21 = 2;
    lVar16 = lVar17;
    dVar28 = dVar33;
    do {
      iVar18 = (int)lVar16;
      lVar16 = lVar16 + 0x10;
      iVar12 = (int)lVar24;
      lVar24 = lVar24 + 0x10;
      dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar18 + 0xb4)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    dVar29 = (double)((float)(dVar28 + 0.7853981852531433) * fVar3 + fVar4);
  }
  dVar30 = (double)FastDiffRots(dVar29,(double)(moby->rotation).z);
  *(float *)((int)puVar10 + 0x74) = (float)dVar31;
  fVar3 = SQRT((float)(dVar34 * dVar34 + (double)(float)(dVar32 * dVar32)));
  dVar32 = ABS((double)fVar3);
  *(float *)(puVar10 + 0xe) = fVar3;
  *(float *)(puVar10 + 0xf) = (float)(dVar32 - ABS(dVar31));
  uVar15 = (ulonglong)(*(uint *)(puVar10 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar10 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar10 + 0x74) >> 0x1d) & 4;
  dVar28 = ABS((double)*(float *)(puVar10 + 0xe));
  if ((double)*(float *)(puVar10 + 0xf) - dVar33 < 0.0) {
    dVar28 = ABS(dVar31);
  }
  fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
  fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  dVar31 = ABS((double)*(float *)((int)puVar10 + 0x74));
  if ((double)*(float *)(puVar10 + 0xf) - dVar33 < 0.0) {
    dVar31 = dVar32;
  }
  if (dVar33 < dVar28) {
    lVar16 = uVar14 - 0x150;
    lVar24 = uVar14 - 0xbc;
    lVar21 = uVar14 - 0xcc;
    lVar27 = 2;
    fVar6 = (float)(dVar31 - dVar28) / (float)(dVar31 + dVar28);
    fVar7 = fVar6 * fVar6;
    *(float *)(puVar10 + 0x14) = fVar6;
    *(float *)(puVar10 + 0x13) = fVar6;
    *(float *)((int)puVar10 + 0x9c) = fVar6;
    *(float *)((int)puVar10 + 0x94) = fVar6;
    fVar6 = fVar7 * fVar7;
    *(float *)(puVar10 + 0x13) = *(float *)(puVar10 + 0x13) * fVar7;
    *(float *)((int)puVar10 + 0x9c) = *(float *)((int)puVar10 + 0x9c) * fVar6;
    *(float *)(puVar10 + 0x14) = *(float *)(puVar10 + 0x14) * fVar6 * fVar7;
    do {
      *(float *)((int)lVar16 + 0x94) = *(float *)((int)lVar16 + 0x84) * fVar6 * fVar6;
      iVar18 = (int)lVar21;
      lVar21 = lVar21 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar6 * fVar6;
      lVar24 = lVar24 + 8;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    lVar27 = 4;
    lVar24 = uVar14 - 0xcc;
    pfVar22 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar21 = lVar24;
    do {
      fVar6 = *pfVar22;
      fVar7 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar16 + 0x94) = *(float *)((int)lVar16 + 0x94) * fVar6;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar7;
      lVar21 = lVar21 + 8;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    lVar16 = 2;
    do {
      iVar18 = (int)lVar17;
      iVar12 = (int)lVar24;
      lVar17 = lVar17 + 0x10;
      lVar24 = lVar24 + 0x10;
      dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar18 + 0x94)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar4 + fVar3);
  }
  dVar33 = -dVar33;
  dVar28 = 1.5707963705062866;
  if ((dVar30 <= 1.5707963705062866) && (dVar28 = dVar30, dVar30 < -1.5707963705062866)) {
    dVar28 = -1.5707963705062866;
  }
  dVar31 = 0.5235987901687622;
  if ((dVar33 <= 0.5235987901687622) && (dVar31 = dVar33, dVar33 < -0.5235987901687622)) {
    dVar31 = -0.5235987901687622;
  }
  *(float *)((int)pvVar9 + 0xa8) = (float)(dVar28 * 0.6000000238418579);
  *(float *)((int)pvVar9 + 0xa4) = (float)dVar31;
  *(float *)((int)pvVar9 + 0x128) = (float)(dVar28 * 0.4000000059604645);
LAB_0045ddbc:
  if (Cheats[0] != '\0') {
    *(undefined4 *)((int)pvVar9 + 0xb0) = 0x40300000;
  }
  dVar28 = 0.30000001192092896;
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar35),
             (double)(float)((double)DAT_0071f40c * 0.30000001192092896),moby,uVar26 + 0x40,0);
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar35),
             (double)(float)((double)DAT_0071f40c * dVar28),moby,uVar26 + 0xc0,1);
  return;
}


