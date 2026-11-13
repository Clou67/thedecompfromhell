// game/update/moby1455.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x284b14-0x286128
#include "game/update/moby1455.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/memcard.h"
#include "game/mission.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby1111.h"
#include "game/update/moby1130.h"
#include "game/update/moby1399.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"

// 0x0284b14 (0x14 bytes)
void M1455_00284b14(void)

{
  DAT_007aac90 = 0x10000;
  return;
}


// 0x0284b28 (0xf4 bytes)
// strings: 0096c074: 'None'

void M1455_00284b28(int param_1)

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


// 0x0284c20 (0xd8 bytes)
void M1455_00284c20(MobyInstance *param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvars;
  int iVar3;
  
  iVar1 = 0;
  pvars = param_1->pVar;
  iVar3 = 0;
  pvVar2 = pvars;
  do {
    if (*(int *)((int)pvVar2 + 0x60) != -1) {
      MB_SetGroupActive(*(int *)((int)pvVar2 + 0x60),0,0,0);
    }
    iVar1 = iVar1 + 1;
    pvVar2 = (void *)((int)pvVar2 + 4);
  } while (iVar1 < 0x10);
  do {
    if (*(int *)((int)pvars + 0xa0) != -1) {
      MB_SetGroupActive(*(int *)((int)pvars + 0xa0),1,1,0);
    }
    iVar3 = iVar3 + 1;
    pvars = (void *)((int)pvars + 4);
  } while (iVar3 < 8);
  FUN_001d0f24(0x4059000000000000);
  music_SetTransition(0,8);
  return;
}


// 0x0284d00 (0xe4 bytes)
void M1455_00284d00(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  iVar3 = *(int *)(param_1 + 0x78);
  iVar4 = 0;
  iVar2 = iVar3;
  do {
    if (*(int *)(iVar2 + 0x60) != -1) {
      MB_SetGroupActive(*(int *)(iVar2 + 0x60),1,1,1);
    }
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar1 < 0x10);
  do {
    if (*(int *)(iVar3 + 0xa0) != -1) {
      MB_SetGroupActive(*(int *)(iVar3 + 0xa0),0,0,0);
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar4 < 8);
  HeroDeathHeight = 0x42940000;
  FUN_001d0f24(0x4053000000000000);
  music_SetTransition(2,6);
  return;
}


// 0x0284e60 (0x12c8 bytes)
// inlined: FastAtan2 @0x28597c, FastAtan2 @0x285d28, FastAtan2 @0x285edc
// strings: 0096c074: 'None'

/* Moby 1455 */

void UpdateMoby_1455(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  ulonglong *puVar9;
  uint uVar10;
  float fVar11;
  uint uVar12;
  undefined2 uVar13;
  ulonglong uVar14;
  char cVar20;
  ulonglong uVar15;
  int iVar18;
  undefined4 uVar19;
  longlong lVar16;
  longlong lVar17;
  short sVar23;
  float *pfVar22;
  longlong lVar21;
  longlong lVar24;
  ulonglong unaff_r25;
  undefined4 *puVar25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  void *pvVar26;
  ulonglong unaff_r28;
  void *pvVar27;
  ulonglong unaff_r29;
  ulonglong uVar28;
  ulonglong unaff_r30;
  int iVar29;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar35;
  double dVar36;
  ulonglong in_f30;
  double dVar37;
  double dVar38;
  ulonglong in_f31;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar17 = uVar14 - 0x170;
  puVar9 = (ulonglong *)lVar17;
  *puVar9 = uVar14;
  puVar9[0x30] = in_LR;
  puVar9[0x29] = in_f27;
  puVar9[0x2a] = in_f28;
  puVar9[0x2b] = in_f29;
  puVar9[0x2c] = in_f30;
  puVar9[0x2d] = in_f31;
  puVar9[0x28] = unaff_r31;
  puVar9[0x26] = unaff_r29;
  pvVar8 = moby->pVar;
  uVar28 = ZEXT48(pvVar8);
  puVar9[0x25] = unaff_r28;
  cVar20 = moby->enabled;
  puVar9[0x27] = unaff_r30;
  puVar9[0x24] = unaff_r27;
  puVar9[0x23] = unaff_r26;
  puVar9[0x22] = unaff_r25;
  if ((cVar20 != '\0') &&
     (fVar2 = (moby->pos).y - GameCamera.posY, fVar3 = (moby->pos).x - GameCamera.posX,
     fVar5 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2) < 28.0)) {
    MB_SetZBoundsFromGround(moby);
    moby->shadow = '\x16';
  }
  if ((g_gameMode == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
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
  uVar1 = moby->state;
  if (uVar1 == '\x04') {
    if (g_gameMode == GAME_MODE_NORMAL) {
      moby->state = '\x01';
      MB_UnlockItem(0x1f,1);
      memcard_Save(0,-1);
    }
  }
  else if (uVar1 == '\x02') {
    if ((g_gameMode != GAME_MODE_SCENE) &&
       (moby->state = '\x01', *(short *)((int)pvVar8 + 0x24) == 4)) {
      PlayHelpMovie(0);
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\x01') {
    HeroDeathHeight = 0x42c80000;
    if (g_heroStateType != 0xf) {
      HeroDeathHeight = 0x42e60000;
    }
    if ((g_heroState != VISIBOMB_CONTROL) &&
       (iVar18 = FUN_004d3870(moby,uVar28 + 0x20), iVar18 != 0)) {
      (moby->rotation).z = *(f32 *)((int)pvVar8 + 0xc4);
      MB_SetPointAheadOfMoby(0x400c000000000000,moby);
      moby->state = '\x02';
    }
    if ((UnlockableItems.hoverboard == '\0') &&
       (fVar2 = g_heroPosition.y - (moby->pos).y, fVar3 = g_heroPosition.x - (moby->pos).x,
       SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 3.5)) {
      puVar9[0x1f] = (longlong)g_GameFrameCount;
      fVar2 = animationSpeed;
      puVar9[0x1f] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar9[0x1f] + 0.5));
      uVar13 = HelpData.piece<1082,2>();
      uVar12 = (uint)(ushort)HelpData.piece<1082,2>();
      iVar18 = *(int *)((int)puVar9 + 0xfc);
      uVar10 = (uint)(ushort)HelpData.piece<1082,2>();
      puVar9[0x1f] = (longlong)(int)((float)(longlong)(fVar2 * 18.5) * 60.0);
      if ((*(int *)((int)puVar9 + 0xfc) < (int)(iVar18 + uVar10 * -600)) || (uVar12 * 600 == 0)) {
        Help_QueueMessage(STR_IF_YOU_WANT_TO_0x3E83,0x87);
      }
      else if ((int)(uint)(ushort)uVar13 < iVar18 / 600) {
        sVar23 = (short)(iVar18 >> 0x1f);
        HelpData.piece<1082,2>() =
             ((short)(iVar18 / 600) + sVar23) -
             ((short)((short)(iVar18 / 0x2580000) + sVar23) >> 0xf);
      }
    }
    if (*(short *)((int)pvVar8 + 0x56) == 3) {
      *(undefined2 *)((int)pvVar8 + 0x24) = 3;
      uVar19 = worldUpdateTime;
      iVar18 = 0;
      *(undefined2 *)((int)pvVar8 + 0x56) = 2;
      *(undefined4 *)((int)pvVar8 + 0x58) = uVar19;
      moby->setByGroup = '\0';
      Hero_Warp((float *)&DAT_007aacc0,(float *)&DAT_007aacd0,0,1);
      DAT_0096b9e0 = DAT_007aace0;
      DAT_0096b9e4 = DAT_007aace4;
      DAT_0096b9e8 = DAT_007aace8;
      DAT_0096b9ec = DAT_007aacec;
      DAT_0096b9f0 = DAT_007aacf0;
      DAT_0096b9f4 = DAT_007aacf4;
      DAT_0096b9f8 = DAT_007aacf8;
      DAT_0096bd8c = 1;
      DAT_0096b9fc = DAT_007aacfc;
      pvVar27 = moby->pVar;
      moby->state = '\x03';
      pvVar26 = pvVar27;
      do {
        if (*(int *)((int)pvVar26 + 0x60) != -1) {
          MB_SetGroupActive(*(int *)((int)pvVar26 + 0x60),1,1,1);
        }
        iVar18 = iVar18 + 1;
        pvVar26 = (void *)((int)pvVar26 + 4);
      } while (iVar18 < 0x10);
      iVar18 = 0;
      do {
        if (*(int *)((int)pvVar27 + 0xa0) != -1) {
          MB_SetGroupActive(*(int *)((int)pvVar27 + 0xa0),0,0,0);
        }
        iVar18 = iVar18 + 1;
        pvVar27 = (void *)((int)pvVar27 + 4);
      } while (iVar18 < 8);
      HeroDeathHeight = 0x42940000;
      FUN_001d0f24(0x4053000000000000);
      music_SetTransition(2,6);
    }
    if (g_heroStateType == 0x16) {
      iVar29 = 0;
      pvVar27 = moby->pVar;
      iVar18 = 0;
      moby->state = '\x03';
      pvVar26 = pvVar27;
      do {
        if (*(int *)((int)pvVar26 + 0x60) != -1) {
          MB_SetGroupActive(*(int *)((int)pvVar26 + 0x60),1,1,1);
        }
        iVar29 = iVar29 + 1;
        pvVar26 = (void *)((int)pvVar26 + 4);
      } while (iVar29 < 0x10);
      do {
        if (*(int *)((int)pvVar27 + 0xa0) != -1) {
          MB_SetGroupActive(*(int *)((int)pvVar27 + 0xa0),0,0,0);
        }
        iVar18 = iVar18 + 1;
        pvVar27 = (void *)((int)pvVar27 + 4);
      } while (iVar18 < 8);
      HeroDeathHeight = 0x42940000;
      FUN_001d0f24(0x4053000000000000);
      music_SetTransition(2,6);
    }
  }
  else if (uVar1 == '\0') {
    moby->updateDistance = -1;
    moby->state = '\x01';
    FUN_004d3720(moby,uVar28 + 0x20);
    *(undefined4 *)((int)pvVar8 + 0x2c) = 0x406ccccd;
    uVar19 = g_MissionTargets[102].state;
    *(f32 *)((int)pvVar8 + 0xc4) = (moby->rotation).z;
    if (uVar19 == 0) {
      dVar31 = (double)FastWrapRot((moby->rotation).z,3.1415927);
      (moby->rotation).z = (float)dVar31;
    }
    iVar29 = 0;
    pvVar27 = moby->pVar;
    iVar18 = 0;
    pvVar26 = pvVar27;
    do {
      if (*(int *)((int)pvVar26 + 0x60) != -1) {
        MB_SetGroupActive(*(int *)((int)pvVar26 + 0x60),0,0,0);
      }
      iVar29 = iVar29 + 1;
      pvVar26 = (void *)((int)pvVar26 + 4);
    } while (iVar29 < 0x10);
    do {
      if (*(int *)((int)pvVar27 + 0xa0) != -1) {
        MB_SetGroupActive(*(int *)((int)pvVar27 + 0xa0),1,1,0);
      }
      iVar18 = iVar18 + 1;
      pvVar27 = (void *)((int)pvVar27 + 4);
    } while (iVar18 < 8);
    FUN_001d0f24(0x4059000000000000);
    music_SetTransition(0,8);
  }
  else {
    if ((0x1193 < g_RaceScore) && (MB_UnlockSkillPoint(0x1a), DAT_00a0cd14 < 0x1194)) {
      DAT_00a0cd14 = g_RaceScore;
    }
    if (g_heroStateType == 0) {
      pvVar27 = moby->pVar;
      iVar29 = 0;
      iVar18 = 0;
      moby->state = '\x01';
      pvVar26 = pvVar27;
      do {
        if (*(int *)((int)pvVar26 + 0x60) != -1) {
          MB_SetGroupActive(*(int *)((int)pvVar26 + 0x60),0,0,0);
        }
        iVar29 = iVar29 + 1;
        pvVar26 = (void *)((int)pvVar26 + 4);
      } while (iVar29 < 0x10);
      do {
        if (*(int *)((int)pvVar27 + 0xa0) != -1) {
          MB_SetGroupActive(*(int *)((int)pvVar27 + 0xa0),1,1,0);
        }
        iVar18 = iVar18 + 1;
        pvVar27 = (void *)((int)pvVar27 + 4);
      } while (iVar18 < 8);
      FUN_001d0f24(0x4059000000000000);
      music_SetTransition(0,8);
    }
    cVar20 = moby->setByGroup;
    if (cVar20 == '\x01') {
      moby->state = '\x01';
      Hero_Warp((float *)&DAT_007aace0,(float *)&DAT_007aacf0,0,1);
      moby->setByGroup = '\0';
      uVar19 = worldUpdateTime;
      if (CHAR_ARRAY_0096c165[0x1f] == '\0') {
        *(undefined2 *)((int)pvVar8 + 0x24) = *(undefined2 *)((int)pvVar8 + 0x56);
        *(undefined2 *)((int)pvVar8 + 0x56) = 4;
        *(undefined4 *)((int)pvVar8 + 0x58) = uVar19;
        *(undefined1 *)((int)pvVar8 + 0x28) = 1;
      }
      pvVar27 = moby->pVar;
      iVar18 = 0;
      pvVar26 = pvVar27;
      do {
        if (*(int *)((int)pvVar26 + 0x60) != -1) {
          MB_SetGroupActive(*(int *)((int)pvVar26 + 0x60),0,0,0);
        }
        iVar18 = iVar18 + 1;
        pvVar26 = (void *)((int)pvVar26 + 4);
      } while (iVar18 < 0x10);
      iVar18 = 0;
      do {
        if (*(int *)((int)pvVar27 + 0xa0) != -1) {
          MB_SetGroupActive(*(int *)((int)pvVar27 + 0xa0),1,1,0);
        }
        iVar18 = iVar18 + 1;
        pvVar27 = (void *)((int)pvVar27 + 4);
      } while (iVar18 < 8);
      FUN_001d0f24(0x4059000000000000);
      music_SetTransition(0,8);
      cVar20 = moby->setByGroup;
    }
    if (cVar20 == '\x02') {
      moby->state = '\x01';
      Hero_Warp((float *)&DAT_007aace0,(float *)&DAT_007aacf0,0,1);
      iVar18 = 0;
      pvVar27 = moby->pVar;
      moby->setByGroup = '\0';
      pvVar26 = pvVar27;
      do {
        if (*(int *)((int)pvVar26 + 0x60) != -1) {
          MB_SetGroupActive(*(int *)((int)pvVar26 + 0x60),0,0,0);
        }
        iVar18 = iVar18 + 1;
        pvVar26 = (void *)((int)pvVar26 + 4);
      } while (iVar18 < 0x10);
      iVar18 = 0;
      do {
        if (*(int *)((int)pvVar27 + 0xa0) != -1) {
          MB_SetGroupActive(*(int *)((int)pvVar27 + 0xa0),1,1,0);
        }
        iVar18 = iVar18 + 1;
        pvVar27 = (void *)((int)pvVar27 + 4);
      } while (iVar18 < 8);
      FUN_001d0f24(0x4059000000000000);
      music_SetTransition(0,8);
      cVar20 = moby->setByGroup;
    }
    if (cVar20 == '\x03') {
      moby->setByGroup = '\0';
      Hero_Warp((float *)&DAT_007aacc0,(float *)&DAT_007aacd0,0,1);
      DAT_0096b9e0 = DAT_007aace0;
      DAT_0096b9e4 = DAT_007aace4;
      DAT_0096b9e8 = DAT_007aace8;
      DAT_0096b9ec = DAT_007aacec;
      DAT_0096b9f0 = DAT_007aacf0;
      DAT_0096b9f4 = DAT_007aacf4;
      DAT_0096b9f8 = DAT_007aacf8;
      DAT_0096b9fc = DAT_007aacfc;
    }
  }
  dVar31 = 0.019999999552965164;
  if (moby->animationId != '\0') goto LAB_00286080;
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).x;
  fVar5 = fVar2 - g_heroPosition.y;
  fVar6 = fVar3 - g_heroPosition.x;
  if (8.0 <= SQRT(fVar6 * fVar6 + fVar5 * fVar5)) {
LAB_00285b2c:
    if (*(int *)((int)pvVar8 + 200) != 0) {
      *(undefined4 *)((int)pvVar8 + 200) = 0;
      *(float *)((int)pvVar8 + 0xd0) = g_heroCGPos;
      *(float *)((int)pvVar8 + 0xd4) = DAT_00969db4;
      *(float *)((int)pvVar8 + 0xd8) = DAT_00969db8;
      *(undefined4 *)((int)pvVar8 + 0xdc) = DAT_00969dbc;
    }
  }
  else {
    fVar3 = g_heroCGPos - fVar3;
    fVar2 = DAT_00969db4 - fVar2;
    fVar5 = ABS(fVar3);
    fVar4 = ABS(fVar2);
    *(float *)(puVar9 + 0x11) = fVar3;
    *(float *)((int)puVar9 + 0x8c) = fVar2;
    fVar2 = (moby->rotation).z;
    *(float *)(puVar9 + 0x12) = fVar5 - fVar4;
    fVar3 = 0.0;
    uVar15 = (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)(puVar9 + 0x11));
    if (*(float *)(puVar9 + 0x12) - 0.0 < 0.0) {
      fVar6 = fVar4;
    }
    fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
    fVar4 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    fVar11 = ABS(*(float *)((int)puVar9 + 0x8c));
    if (*(float *)(puVar9 + 0x12) - 0.0 < 0.0) {
      fVar11 = fVar5;
    }
    if (0.0 < fVar6) {
      lVar16 = uVar14 - 0x160;
      lVar21 = uVar14 - 0x9c;
      lVar24 = uVar14 - 0x8c;
      lVar30 = 2;
      fVar5 = (fVar11 - fVar6) / (fVar11 + fVar6);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar9 + 0x1c) = fVar5;
      *(float *)(puVar9 + 0x1b) = fVar5;
      *(float *)((int)puVar9 + 0xdc) = fVar5;
      *(float *)((int)puVar9 + 0xd4) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar9 + 0x1b) = *(float *)(puVar9 + 0x1b) * fVar6;
      *(float *)((int)puVar9 + 0xdc) = *(float *)((int)puVar9 + 0xdc) * fVar5;
      *(float *)(puVar9 + 0x1c) = *(float *)(puVar9 + 0x1c) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar16 + 0xd4) = *(float *)((int)lVar16 + 0xc4) * fVar5 * fVar5;
        iVar18 = (int)lVar21;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
        lVar24 = lVar24 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar30 = 4;
      lVar24 = uVar14 - 0x9c;
      pfVar22 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar21 = lVar24;
      do {
        fVar5 = *pfVar22;
        fVar6 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar16 + 0xd4) = *(float *)((int)lVar16 + 0xd4) * fVar5;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
        lVar21 = lVar21 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar21 = 2;
      lVar16 = lVar17;
      do {
        iVar18 = (int)lVar16;
        iVar29 = (int)lVar24;
        lVar16 = lVar16 + 0x10;
        lVar24 = lVar24 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar18 + 0xd4) + *(float *)(iVar29 + 4) + *(float *)(iVar29 + 8)
                + *(float *)(iVar29 + 0xc);
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar7 + fVar4;
    }
    dVar32 = (double)FastSubRots(fVar2,fVar3);
    if (1.5707963705062866 <= dVar32) goto LAB_00285b2c;
    if (SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) <= 0.01) {
      FastDecTimerS32(uVar28 + 200);
    }
    else {
      auVar39 = ZEXT416(0xffffffff);
      auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
      auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
      auVar39 = loadVectorLeftIndexed(0x3c,0x284de4);
      auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar39 = vectorMultiplyAddFloatingPoint
                          (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                           auVar40);
      auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
      auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar19 = storeVectorElementWordIndexed
                         (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,200,uVar28);
      *(undefined4 *)((int)pvVar8 + 200U & 0xfffffffc) = uVar19;
    }
  }
  iVar18 = FastDecTimerS32(uVar28 + 0xcc);
  if (iVar18 != 0) {
    dVar32 = (double)MB_randRangeFloat(180.0,300.0);
    uVar19 = FastDoubleToInt((double)(float)(dVar32 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar8 + 0xcc) = uVar19;
    dVar37 = (double)(moby->rotation).z;
    dVar32 = (double)MB_randRangeFloat(-90.0,90.0);
    dVar35 = 0.01745329238474369;
    dVar32 = (double)FastWrapRot((float)dVar37,(float)(dVar32 * 0.01745329238474369));
    dVar37 = (double)MB_randRangeFloat(0.0,30.0);
    MB_SphericalToVector
              (6.0,(float)dVar32,(float)(dVar37 * dVar35),(float *)((int)pvVar8 + 0xd0));
    *(float *)((int)pvVar8 + 0xd0) = *(float *)((int)pvVar8 + 0xd0) + (moby->pos).x;
    *(float *)((int)pvVar8 + 0xd4) = *(float *)((int)pvVar8 + 0xd4) + (moby->pos).y;
    *(float *)((int)pvVar8 + 0xd8) = *(float *)((int)pvVar8 + 0xd8) + (moby->pos).z;
  }
  if (*(int *)((int)pvVar8 + 200) == 0) {
    fVar2 = *(float *)((int)pvVar8 + 0xd0);
    fVar3 = *(float *)((int)pvVar8 + 0xd4);
    fVar5 = *(float *)((int)pvVar8 + 0xd8);
  }
  else {
    dVar31 = 0.03999999910593033;
    fVar2 = g_heroCGPos;
    fVar3 = DAT_00969db4;
    fVar5 = DAT_00969db8;
  }
  fVar2 = fVar2 - (moby->pos).x;
  dVar38 = (double)fVar2;
  fVar3 = fVar3 - (moby->pos).y;
  dVar36 = (double)fVar3;
  *(float *)((int)puVar9 + 0x7c) = fVar2;
  *(float *)(puVar9 + 0x10) = fVar3;
  dVar35 = (double)(fVar5 - ((moby->pos).z + 1.0));
  *(float *)((int)puVar9 + 0x84) = (float)(ABS(dVar38) - ABS(dVar36));
  dVar37 = 0.0;
  uVar15 = (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1d) & 4;
  dVar32 = ABS((double)*(float *)((int)puVar9 + 0x7c));
  if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
    dVar32 = ABS(dVar36);
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
  dVar34 = ABS((double)*(float *)(puVar9 + 0x10));
  if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
    dVar34 = ABS(dVar38);
  }
  fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  dVar33 = dVar37;
  if (0.0 < dVar32) {
    lVar16 = uVar14 - 0x160;
    lVar24 = uVar14 - 0xac;
    lVar21 = uVar14 - 0xbc;
    lVar30 = 2;
    fVar5 = (float)(dVar34 - dVar32) / (float)(dVar34 + dVar32);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar9 + 0x18) = fVar5;
    *(float *)(puVar9 + 0x17) = fVar5;
    *(float *)((int)puVar9 + 0xbc) = fVar5;
    *(float *)((int)puVar9 + 0xb4) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar9 + 0x17) = *(float *)(puVar9 + 0x17) * fVar6;
    *(float *)((int)puVar9 + 0xbc) = *(float *)((int)puVar9 + 0xbc) * fVar5;
    *(float *)(puVar9 + 0x18) = *(float *)(puVar9 + 0x18) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar16 + 0xb4) = *(float *)((int)lVar16 + 0xa4) * fVar5 * fVar5;
      iVar18 = (int)lVar21;
      lVar21 = lVar21 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
      lVar24 = lVar24 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar30 = 4;
    lVar24 = uVar14 - 0xbc;
    pfVar22 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar21 = lVar24;
    do {
      fVar5 = *pfVar22;
      fVar6 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar16 + 0xb4) = *(float *)((int)lVar16 + 0xb4) * fVar5;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
      lVar21 = lVar21 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar21 = 2;
    lVar16 = lVar17;
    dVar32 = dVar37;
    do {
      iVar18 = (int)lVar16;
      iVar29 = (int)lVar24;
      lVar16 = lVar16 + 0x10;
      lVar24 = lVar24 + 0x10;
      dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar18 + 0xb4)) + *(float *)(iVar29 + 4)
                        + *(float *)(iVar29 + 8) + *(float *)(iVar29 + 0xc));
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    dVar33 = (double)((float)(dVar32 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar34 = (double)FastDiffRots(dVar33,(double)(moby->rotation).z);
  *(float *)((int)puVar9 + 0x74) = (float)dVar35;
  fVar2 = SQRT((float)(dVar38 * dVar38 + (double)(float)(dVar36 * dVar36)));
  dVar36 = ABS((double)fVar2);
  *(float *)(puVar9 + 0xe) = fVar2;
  *(float *)(puVar9 + 0xf) = (float)(dVar36 - ABS(dVar35));
  uVar15 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
  dVar32 = ABS((double)*(float *)(puVar9 + 0xe));
  if ((double)*(float *)(puVar9 + 0xf) - dVar37 < 0.0) {
    dVar32 = ABS(dVar35);
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
  dVar35 = ABS((double)*(float *)((int)puVar9 + 0x74));
  if ((double)*(float *)(puVar9 + 0xf) - dVar37 < 0.0) {
    dVar35 = dVar36;
  }
  fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  if (dVar37 < dVar32) {
    lVar16 = uVar14 - 0x160;
    lVar21 = uVar14 - 0xdc;
    lVar24 = uVar14 - 0xcc;
    lVar30 = 2;
    fVar5 = (float)(dVar35 - dVar32) / (float)(dVar35 + dVar32);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar9 + 0x14) = fVar5;
    *(float *)(puVar9 + 0x13) = fVar5;
    *(float *)((int)puVar9 + 0x9c) = fVar5;
    *(float *)((int)puVar9 + 0x94) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar9 + 0x13) = *(float *)(puVar9 + 0x13) * fVar6;
    *(float *)((int)puVar9 + 0x9c) = *(float *)((int)puVar9 + 0x9c) * fVar5;
    *(float *)(puVar9 + 0x14) = *(float *)(puVar9 + 0x14) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar16 + 0x94) = *(float *)((int)lVar16 + 0x84) * fVar5 * fVar5;
      iVar18 = (int)lVar21;
      lVar16 = lVar16 + 8;
      lVar21 = lVar21 + 8;
      *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
      lVar24 = lVar24 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar30 = 4;
    lVar24 = uVar14 - 0xdc;
    pfVar22 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar21 = lVar24;
    do {
      fVar5 = *pfVar22;
      fVar6 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar16 + 0x94) = *(float *)((int)lVar16 + 0x94) * fVar5;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
      lVar21 = lVar21 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar16 = 2;
    do {
      iVar18 = (int)lVar17;
      iVar29 = (int)lVar24;
      lVar17 = lVar17 + 0x10;
      lVar24 = lVar24 + 0x10;
      dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar18 + 0x94)) + *(float *)(iVar29 + 4)
                        + *(float *)(iVar29 + 8) + *(float *)(iVar29 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar37 = (double)((float)(dVar37 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar37 = -dVar37;
  dVar32 = 1.5707963705062866;
  if ((dVar34 <= 1.5707963705062866) && (dVar32 = dVar34, dVar34 < -1.5707963705062866)) {
    dVar32 = -1.5707963705062866;
  }
  dVar35 = 0.5235987901687622;
  if ((dVar37 <= 0.5235987901687622) && (dVar35 = dVar37, dVar37 < -0.5235987901687622)) {
    dVar35 = -0.5235987901687622;
  }
  *(float *)((int)pvVar8 + 0x148) = (float)(dVar32 * 0.699999988079071);
  *(float *)((int)pvVar8 + 0x144) = (float)dVar35;
  *(float *)((int)pvVar8 + 0x1c8) = (float)(dVar32 * 0.30000001192092896);
LAB_00286080:
  if (Cheats[0] != '\0') {
    *(undefined4 *)((int)pvVar8 + 0x150) = 0x40300000;
  }
  dVar32 = 0.30000001192092896;
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar31),
             (double)(float)((double)DAT_0071f40c * 0.30000001192092896),moby,uVar28 + 0xe0,0);
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar31),
             (double)(float)((double)DAT_0071f40c * dVar32),moby,uVar28 + 0x160,1);
  return;
}


