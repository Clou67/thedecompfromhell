// game/update.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 22 functions, 0x166e08-0x16a0d8
#include <math.h>
#include <stdio.h>
#include <string.h>
#include "game/update.h"
#include "game/boot.h"
#include "game/camera.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/initspace.h"
#include "game/lights.h"
#include "game/loaders.h"
#include "game/main.h"
#include "game/map.h"
#include "game/memcard.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/pad.h"
#include "game/partproc.h"
#include "game/pause.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update/moby1118.h"
#include "game/vendor.h"
#include "game/vuchain.h"
#include "game/water.h"
#include "idol/fastfunc.h"
#include "idol/idol.h"
#include "idol/mUnk.h"
#include "idol/sound.h"
#include "sdk/libcgc/libcgc_cell_localize.h"
#include "sdk/sce.h"

// 0x0166e08 (0x14 bytes)
/* [update] Probably the static initializer for update.cpp (_GLOBAL_$I$update.cpp): sets
   DAT_0073875c=0x10000 */

void SECTION_HEADER_UPDATE(void)

{
  DAT_0073875c = 0x10000;
  return;
}


// 0x0166e1c (0x4 bytes)
void STUB_00166e1c(...)

{
  return;
}


// 0x0166e20 (0x8 bytes)
undefined8 STUB_00166e20_RET_0(...)

{
  return 0;
}


// 0x0166e28 (0x4 bytes)
void STUB_00166e28(...)

{
  return;
}


// 0x0166e30 (0x4c bytes)
void ResetGameCounters(void)

{
  g_MobyFuncListCount = 0;
  g_PostDrawCount = 0;
  g_NumLameShadows = 0;
  g_PreDrawCount = 0;
  DAT_0095cae0 = 0;
  g_PostPreDrawCount = 0;
  DAT_0095ccf0 = 0;
  DAT_00a1bfe4 = 0;
  return;
}


// 0x0166e88 (0x118 bytes)
void UpdateGameCounters(void)

{
  if ((((g_Pad.downButtons == 0) && (g_Pad.sticks.z == 0.0)) && (g_Pad.sticks.w == 0.0)) &&
     ((g_Pad.sticks.x == 0.0 && (g_Pad.sticks.y == 0.0)))) {
    g_IdleFrames = g_IdleFrames + 1;
  }
  else {
    g_IdleFrames = 0;
  }
  if (g_boltMiningActive != 0) {
    if (g_IdleFrames < (int)((float)(longlong)(int)(animationSpeed * 15.5) * 60.0)) {
      g_boltMiningTimer = g_boltMiningTimer + 1;
    }
  }
  g_GameFrameCount = g_GameFrameCount + 1;
  worldUpdateTime = worldUpdateTime + 1;
  return;
}


// 0x0166fb0 (0xa70 bytes)
// strings: 00a0feec: 'None' | 00653cb0: 'moby update' | 00653cc0: 'hero update' | 00653cd0: 'part update' | 00653ce0: 'camera update' | 00653cf0: 'sound update'


void UpdateGameplay(void)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  double dVar5;
  
  if (((DebugUpdate & ENABLE_STEPPING) != NONE) && ((g_Pad.buttonsPressedThisFrame & R3) != 0)) {
    g_Pad.buttonsPressedThisFrame = g_Pad.downButtons & ~DAT_0095c660;
    DAT_0095c6ac = 6;
    g_Pad.unk0a8 = DAT_0095c660 & ~g_Pad.downButtons;
    DebugUpdate = UPDATE_CAMERA|UPDATE_PARTICLES|UPDATE_MOBYS|UPDATE_HERO;
    DAT_0095c660 = g_Pad.downButtons & ~L3;
  }
  if ((DAT_0095c6ac != 0) && (DAT_0095c6ac = DAT_0095c6ac + -1, DAT_0095c6ac == 0)) {
    DebugUpdate = ENABLE_STEPPING;
  }
  if (((DebugUpdate & ENABLE_STEPPING) != NONE) && ((g_Pad.buttonsPressedThisFrame & L3) != 0)) {
    g_Pad.buttonsPressedThisFrame = g_Pad.downButtons & ~DAT_0095c660;
    g_Pad.unk0a8 = DAT_0095c660 & ~g_Pad.downButtons;
    DAT_0095c660 = g_Pad.downButtons & ~L3;
  }
  if ((((g_gameMode == GAME_MODE_NORMAL) && ((g_CardStateFlags & 0x401) != 0)) &&
      (7 < g_FramesSinceStateChange)) && (g_heroState != VISIBOMB_CONTROL)) {
    DisplayPrompt(3,0,0);
  }
  else {
    bVar1 = g_Pad.connected != 0;
    if ((resumePage == 0) || (g_gameMode != GAME_MODE_NORMAL)) {
      if ((((Level != Quartu) || ((g_FramesSinceStateChange < 8 || (g_heroType != '\x02')))) ||
          (((g_Pad.buttonsPressedThisFrame & START) == 0 && (bVar1)))) ||
         (g_heroState == MOVEMENT_LOCKED)) {
        bVar2 = false;
        if ((((g_heroStateType == 9) && (g_heroState == TURRET_PLANE_UI)) &&
            (DAT_0096b2d0 != 0)) &&
           (((*(short *)(DAT_0096b2d0 + 0xa6) == 0x45 || (*(short *)(DAT_0096b2d0 + 0xa6) == 0x563))
            || (*(short *)(DAT_0096b2d0 + 0xa6) == 0x4da)))) {
          bVar2 = true;
        }
        if (((!bVar2) || (g_FramesSinceStateChange < 8)) ||
           ((((g_Pad.buttonsPressedThisFrame & START) == 0 && (bVar1)) ||
            ((g_heroState == MOVEMENT_LOCKED ||
             (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0x13)))))) {
          if ((g_gameMode != GAME_MODE_NORMAL) ||
             ((((Level != Batalia && (Level != Hoven)) ||
               (((g_Pad.buttonsPressedThisFrame & START) == 0 && (bVar1)))) ||
              (g_heroState != TURRET_PLANE_UI)))) {
            if (((((g_Pad.buttonsPressedThisFrame & START) == 0) && (bVar1)) ||
                (g_FramesSinceStateChange < 8)) ||
               ((g_heroState == MOVEMENT_LOCKED || (g_heroStateType != 0x16)))) {
              if ((((g_Pad.buttonsPressedThisFrame & START) != 0) || (!bVar1)) &&
                 ((((7 < g_FramesSinceStateChange && (g_heroState != MOVEMENT_LOCKED)) &&
                   (DAT_0096ad8c != '\x02')) &&
                  ((((g_heroState != TURRET_PLANE_UI && (g_heroState != VISIBOMB_CONTROL)) &&
                    (g_HeroIsOutOfBounds == '\0')) &&
                   ((g_heroHealth != 0 && (g_gameMode == GAME_MODE_NORMAL)))))))) {
                BeginMenu(0);
                return;
              }
              if ((((((DebugUpdate & ENABLE_STEPPING) == NONE) && (7 < g_FramesSinceStateChange)) &&
                   (((g_Pad.buttonsPressedThisFrame & (R3|SELECT)) != 0 &&
                    (((g_heroStateType != 0x16 && (g_heroState != MOVEMENT_LOCKED)) &&
                     (g_heroState != TURRET_PLANE_UI)))))) &&
                  ((g_heroState != VISIBOMB_CONTROL && (g_HeroIsOutOfBounds == '\0')))) &&
                 ((g_heroHealth != 0 &&
                  ((g_gameMode == GAME_MODE_NORMAL && !bVar2 && (DAT_0095c6ac == 0)))))) {
                BeginMenu(10);
                return;
              }
              if ((((g_memcardGameSaved != 0) && (g_MiscLevelFlags.field16_0x10 == 0)) &&
                  (7 < g_FramesSinceStateChange)) &&
                 (((g_ChallengeMode == 0 && (g_HeroIsOutOfBounds == '\0')) &&
                  ((g_heroHealth != 0 &&
                   (((int)(animationSpeed * 30.5) < worldUpdateTime && (Level != Veldin)))))))) {
                DisplayPrompt(5,0,0);
                g_MiscLevelFlags.field16_0x10 = 1;
                return;
              }
              if ((g_heroState != VISIBOMB_CONTROL) && (g_heroState != TURRET_PLANE_UI)) {
                MB_HandleGameplayHud();
              }
              if ((((g_Pad.buttonsPressedThisFrame & L3) != 0) && (g_heroState != VISIBOMB_CONTROL)) &&
                 (g_heroState != TURRET_PLANE_UI)) {
                iVar4 = RegisterHeroHealthHUDCallbacks();
                dVar5 = 180.5;
                Hud_ShowEntryById(iVar4,(int)(animationSpeed * 180.5));
                iVar4 = RegisterHUDCallback
                                  (2,0x754e,&PTR_BoltHud_Init_00705810,&PTR_BoltHud_Update_00705818,
                                   &PTR_Draw_BoltCountUI_00705820,&g_boltCount,9999999);
                Hud_ShowEntryById(iVar4,(int)((double)animationSpeed * dVar5));
              }
              if (g_MapAvailable != 0) {
                if (CHAR_ARRAY_00a0feec.piece<72,2>() != -1) {
                  CHAR_ARRAY_00a0feec.piece<72,2>() = CHAR_ARRAY_00a0feec.piece<72,2>() + 1;
                }
                if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec.piece<74,2>() <
                    (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5)) / 600) {
                  iVar4 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
                  sVar3 = (short)(iVar4 >> 0x1f);
                  CHAR_ARRAY_00a0feec.piece<74,2>() =
                       ((short)(iVar4 / 600) + sVar3) -
                       ((short)((short)(iVar4 / 0x2580000) + sVar3) >> 0xf);
                }
                CHAR_ARRAY_00a0feec.piece<76,4>() =
                     CHAR_ARRAY_00a0feec.piece<76,4>() | 1 << (Level & 0x3f) | 0x80000000;
              }
              if ((DAT_00a15c74 == 0) || (DAT_00a15c74 = 0, g_heroHealth == 0)) {
                if (((DebugUpdate & UPDATE_MOBYS) != NONE) ||
                   (((DebugUpdate & ENABLE_STEPPING) != NONE &&
                    ((g_Pad.buttonsPressedThisFrame & L3) != 0)))) {
                  g_MobyFuncListCount = 0;
                  g_PreDrawCount = 0;
                  g_NumLameShadows = 0;
                  g_PostPreDrawCount = 0;
                  DAT_0095cae0 = 0;
                  g_PostDrawCount = 0;
                  DAT_0095ccf0 = 0;
                  DAT_00a1bfe4 = 0;
                }
                if (((DebugUpdate & UPDATE_MOBYS) != NONE) ||
                   (((DebugUpdate & ENABLE_STEPPING) != NONE &&
                    ((g_Pad.buttonsPressedThisFrame & L3) != 0)))) {
                  UpdateNumSpawnableMobys();
                  UpdateMobys();
                  sound_UpdateAmbient();
                  WaterDrift_Update();
                }
                STUB_0006562c("moby update",3);
                if (((DebugUpdate & UPDATE_HERO) != NONE) ||
                   (((DebugUpdate & ENABLE_STEPPING) != NONE &&
                    ((g_Pad.buttonsPressedThisFrame & L3) != 0)))) {
                  HeroUpdate();
                }
                STUB_0006562c("hero update",7);
                if (((DebugUpdate & UPDATE_PARTICLES) != NONE) ||
                   (((DebugUpdate & ENABLE_STEPPING) != NONE &&
                    ((g_Pad.buttonsPressedThisFrame & L3) != 0)))) {
                  UpdateParts();
                  ImpactSprite_Update();
                }
                STUB_0006562c("part update",5);
                if (((DebugUpdate & UPDATE_CAMERA) == NONE) &&
                   (((DebugUpdate & ENABLE_STEPPING) == NONE ||
                    ((g_Pad.buttonsPressedThisFrame & L3) == 0)))) {
                  if ((ControlMode != 0) && (DebugCamera(), ControlMode == 2)) {
                    UpdateDebugCamera();
                  }
                }
                else {
                  UpdateCamera();
                }
                STUB_0006562c("camera update",8);
                sound_Update();
                STUB_0006562c("sound update",6);
                UpdatePointLights();
                UpdateHeroLightAngle();
                UpdateAllGameplayHUD(1);
                Help_Update();
                if (((DebugUpdate & UPDATE_MOBYS) != NONE) ||
                   (((DebugUpdate & ENABLE_STEPPING) != NONE &&
                    ((g_Pad.buttonsPressedThisFrame & L3) != 0)))) {
                  UpdateGameCounters();
                }
                if (Profile == 2) {
                  STUB_00065438();
                }
                if (Profile == 3) {
                  STUB_00065440();
                }
                if (Profile == 4) {
                  STUB_00065448();
                }
                if (Profile == 5) {
                  STUB_00065450();
                }
                if (Profile == 6) {
                  STUB_00065458();
                }
              }
              else {
                Space_StartTakeoffCutscene();
              }
            }
            else {
              DisplayPrompt(0,0,0);
            }
          }
          else {
            DisplayPrompt(1,0,0);
          }
        }
        else {
          DisplayPrompt(1,0,0);
        }
      }
      else if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) != 0x13) {
        DisplayPrompt(4,0,0);
      }
    }
    else {
      BeginMenu(0);
    }
  }
  return;
}


// 0x0167a30 (0x428 bytes)
// strings: 00653d00: '\nwrote %d frames\n'


void mode_sceneUnInit(void)

{
  u8 uVar1;
  MobyInstance *pMVar2;
  ushort *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  
  if ((g_SpeechPlaying.status != 6) && (g_SpeechPlaying.status != 7)) {
    g_SpeechPlaying.status = 5;
  }
  g_CutscenePlaying = 1;
  VU1_setBufSizeByLevel();
  FadeToBlack(0xc);
  g_MobyFuncListCount = 0;
  g_PostDrawCount = 0;
  g_NumLameShadows = 0;
  g_PreDrawCount = 0;
  DAT_0095cae0 = 0;
  g_PostPreDrawCount = 0;
  DAT_0095ccf0 = 0;
  puVar5 = &DAT_0095cd50;
  DAT_00a1bfe4 = 0;
  g_gameMode = GAME_MODE_NORMAL;
  SceneScreenFade = 0.0;
  GameCamera.camUnderWater = (u32)(byte)g_SceneSavedCamUnderWater;
  GameCamera.posX = DAT_0095cd50;
  GameCamera.posY = DAT_0095cd54;
  GameCamera.posZ = DAT_0095cd58;
  GameCamera.field8_0x14c[0] = DAT_0095cd5c[0];
  GameCamera.field8_0x14c[1] = DAT_0095cd5c[1];
  GameCamera.field8_0x14c[2] = DAT_0095cd5c[2];
  GameCamera.field8_0x14c[3] = DAT_0095cd5c[3];
  if (DAT_0095cda0 != 0) {
    printf("\nwrote %d frames\n",DAT_0095cda2);
  }
  g_ViewContext.xratio = 0.63;
  UpdateViewContext();
  iVar6 = 0;
  if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
    do {
      pMVar2 = (MobyInstance *)puVar5[0x5e];
      if (pMVar2 != (MobyInstance *)0x0) {
        pMVar2->pClass->seq_cnt = pMVar2->pClass->seq_cnt + 0xff;
        *(undefined4 *)(&pMVar2->pClass->type + (uint)pMVar2->pClass->seq_cnt * 4) = 0;
        DeleteMoby(pMVar2);
      }
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar6 < g_SpaceSceneMobyCnt.piece<0,2>());
  }
  if (Scene == g_SceneId) {
    uVar1 = g_MobyInstance->state;
    pMVar2 = g_MobyInstance;
    while (uVar1 != 0xff) {
      if ((pMVar2->state & 0x80) == 0) {
        pMVar2->modeBits =
             pMVar2->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE|DISABLED);
      }
      uVar1 = pMVar2[1].state;
      pMVar2 = pMVar2 + 1;
    }
  }
  uVar1 = MobyInstancePermEnd->state;
  pMVar2 = MobyInstancePermEnd;
  while (uVar1 != 0xff) {
    if (((pMVar2->state & 0x80) == 0) &&
       ((pMVar2->oClass == MINE_004A || (pMVar2->oClass == DECOY)))) {
      pMVar2->modeBits =
           pMVar2->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE|DISABLED);
    }
    uVar1 = pMVar2[1].state;
    pMVar2 = pMVar2 + 1;
  }
  TransitionMovement(0,1);
  uVar9 = 0x3fe0000000000000;
  dVar7 = (double)GetGroundZ(0x3fe0000000000000,&g_heroPosition,0);
  dVar8 = 2.0;
  if ((2.0 < dVar7) && (ABS((float)((double)g_heroPosition.z - dVar7)) < 4.5)) {
    g_heroPosition.z = (float)dVar7;
  }
  g_heroInvisible = 0;
  Hero_MakeVisible();
  if (DAT_0095cd9a != '\0') {
    dVar7 = (double)GetGroundZ(uVar9,&DAT_0095cd60,0);
    if ((dVar8 < dVar7) && (ABS((double)(float)((double)DAT_0095cd68 - dVar7)) < dVar8)) {
      DAT_0095cd68 = (float)dVar7;
    }
    Hero_Warp((float *)&DAT_0095cd60,(float *)&DAT_0095cd70,0,1);
  }
  if (DAT_00a15c0c != 0) {
    *(ushort *)(DAT_00a15c0c + 0x34) = *(ushort *)(DAT_00a15c0c + 0x34) & 0xfffe;
  }
  iVar6 = DAT_00a52c98;
  if (DAT_00a52c98 != 0) {
    puVar3 = (ushort *)(DAT_00a52c98 + 0x34);
    DAT_00a52c98 = 0;
    *(ushort *)(iVar6 + 0x34) = *puVar3 & 0xfffe;
  }
  uVar4 = DAT_00a15c10;
  iVar6 = DAT_00a15c0c;
  if (DAT_00a15c0c != 0) {
    DAT_00a15c0c = 0;
    DAT_00a15c10 = 0;
    FUN_004d31b0(iVar6,uVar4,1);
  }
  Scene = 0xffffffff;
  music_UnpauseDelay((int)(animationSpeed * 30.5));
  return;
}


// 0x0167e60 (0x538 bytes)
/* WARNING: Removing unreachable block (ram,0x0016835c) */

void mode_sceneInit(int absolute_scene_id)

{
  u8 uVar1;
  int *piVar2;
  MobyInstance *pMVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  char acStack_130 [224];
  longlong local_50;
  
  if ((-1 < absolute_scene_id) && (g_gameMode != GAME_MODE_SCENE)) {
    if (g_heroHealth == 0) {
      HandleHeroDeath();
    }
    else {
      music_Pause(0);
      LoadMusic2(0);
      puVar7 = &DAT_0095cd50;
      g_CutscenePlaying = 1;
      FastMemSet(&DAT_0095cd50,0,0x1c0);
      FastMemSet(&DAT_00a1bf80,0,0x40);
      FastMemSet(&DAT_00a1be80,0,0x40);
      FastMemSet(&DAT_00a1bec0,0,0x40);
      FastMemSet(&DAT_00a1bf40,0,0x40);
      FastMemSet(&DAT_00a1bf00,0,0x40);
      DAT_0071fbd8 = 0x3f800000;
      DAT_00e5aa64 = DAT_00e5aa64 + -0x3c000;
      DAT_00a15f30 = 0;
      g_SpaceSceneFrame = 0;
      g_SpaceSceneChunk = 0;
      g_SceneLoadBuffer = g_NpcBuffer + 0x3c000;
      DAT_0095cda8 = g_NpcBuffer;
      g_SceneId = absolute_scene_id;
      Help_Kill();
      SceneScreenFade = 1.0;
      DAT_0095cf14 = 0;
      g_gameMode = GAME_MODE_SCENE;
      g_SceneSavedCamUnderWater = (char)GameCamera.camUnderWater;
      GameCamera.camUnderWater = 0;
      DAT_0095cd50 = GameCamera.posX;
      DAT_0095cd54 = GameCamera.posY;
      DAT_0095cd58 = GameCamera.posZ;
      DAT_0095cd5c[0] = GameCamera.field8_0x14c[0];
      DAT_0095cd5c[1] = GameCamera.field8_0x14c[1];
      DAT_0095cd5c[2] = GameCamera.field8_0x14c[2];
      DAT_0095cd5c[3] = GameCamera.field8_0x14c[3];
      iVar4 = TransitionMovement(100,2);
      g_heroInvisible = 1;
      Hero_MakeInvisible(iVar4);
      if (DAT_00a15c0c != 0) {
        *(ushort *)(DAT_00a15c0c + 0x34) = *(ushort *)(DAT_00a15c0c + 0x34) | 1;
      }
      if (DAT_00a52c98 != 0) {
        *(ushort *)(DAT_00a52c98 + 0x34) = *(ushort *)(DAT_00a52c98 + 0x34) | 1;
      }
      if (((g_Pad.buttonsPressedThisFrame & CROSS) == 0) || (Scene == g_SceneId)) {
        FadeToBlack(6);
        LoadNpcSubtitles();
        PreLoadNpcChunk(0);
        local_50 = (longlong)(int)(animationSpeed * 6.5);
        FadeToBlack((int)(animationSpeed * 6.5));
        LoadMusic2(1);
        g_SceneLoadBuffer = g_NpcBuffer + 0x80000;
        ParseNpcChunk();
        if (Scene == g_SceneId) {
          FastMemSet(acStack_130,0,0xe0);
          iVar4 = 0;
          puVar5 = puVar7;
          if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
            do {
              iVar4 = iVar4 + 1;
              iVar6 = (int)g_SpaceSceneMobyCnt.piece<0,2>();
              acStack_130[*(byte *)(puVar5[0x5e] + 0x22)] = '\x01';
              puVar5 = puVar5 + 1;
            } while (iVar4 < iVar6);
          }
          uVar1 = g_MobyInstance->state;
          pMVar3 = g_MobyInstance;
          while (uVar1 != 0xff) {
            if (((pMVar3->state & 0x80) == 0) && (acStack_130[pMVar3->mClass] != '\0')) {
              pMVar3->modeBits = pMVar3->modeBits | NO_DRAW;
            }
            uVar1 = pMVar3[1].state;
            pMVar3 = pMVar3 + 1;
          }
          iVar4 = 0;
          if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
            do {
              piVar2 = puVar7 + 0x5e;
              iVar4 = iVar4 + 1;
              puVar7 = puVar7 + 1;
              *(ushort *)(*piVar2 + 0x34) = *(ushort *)(*piVar2 + 0x34) & 0xff7f;
            } while (iVar4 < g_SpaceSceneMobyCnt.piece<0,2>());
          }
        }
        uVar1 = MobyInstancePermEnd->state;
        pMVar3 = MobyInstancePermEnd;
        while (g_PendingSpeech = g_SceneId, uVar1 != 0xff) {
          if (((pMVar3->state & 0x80) == 0) &&
             ((pMVar3->oClass == MINE_004A || (pMVar3->oClass == DECOY)))) {
            pMVar3->modeBits = pMVar3->modeBits | NO_DRAW;
          }
          uVar1 = pMVar3[1].state;
          pMVar3 = pMVar3 + 1;
        }
        while (g_SpeechPlaying.status != 3) {
          sound_Update();
          STUB_00503078(0);
        }
        g_SpaceSceneMobyCnt.piece<2,2>() = -3;
        music_PlayPreseekedSpeech();
        PreLoadNpcChunk(1);
        iVar4 = 0;
        if (g_SpaceSceneMobyCnt.piece<2,2>() < 0) {
          do {
            STUB_00503078(0);
            iVar4 = iVar4 + -1;
          } while (g_SpaceSceneMobyCnt.piece<2,2>() < iVar4);
        }
      }
      else {
        mode_sceneUnInit();
      }
    }
  }
  return;
}


// 0x01683a0 (0x3b0 bytes)
// strings: 0096c074: 'None'


void UpdateSceneCamera(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float *pfVar6;
  double extraout_f1;
  double extraout_f1_00;
  double extraout_f1_01;
  double extraout_f1_02;
  double extraout_f1_03;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  
  pfVar6 = (float *)((int)g_SpaceSceneCameraFrames + g_cutsceneCameraFrame * 0x20);
  g_ViewContext.xratio = pfVar6[7];
  if (Cheats[0] != '\0') {
    g_ViewContext.xratio = g_ViewContext.xratio * DAT_0071fbd8;
  }
  uVar5 = UpdateViewContext();
  GameCamera.posX = *pfVar6;
  GameCamera.posY = pfVar6[1];
  GameCamera.posZ = pfVar6[2];
  GameCamera.field8_0x14c = *(char (*) [4])(pfVar6 + 3);
  uVar5 = _FSin((double)pfVar6[4],uVar5,0);
  dVar14 = extraout_f1;
  uVar5 = _FSin((double)pfVar6[4],uVar5,1);
  dVar13 = extraout_f1_00;
  uVar5 = _FSin((double)pfVar6[5],uVar5,0);
  dVar12 = extraout_f1_01;
  uVar5 = _FSin((double)pfVar6[5],uVar5,1);
  dVar11 = extraout_f1_02;
  uVar5 = _FSin((double)pfVar6[6],uVar5,0);
  dVar10 = extraout_f1_03;
  dVar7 = (double)_FSin((double)pfVar6[6],uVar5,1);
  dVar9 = (double)(float)(dVar12 * dVar10);
  dVar8 = (double)(float)(dVar7 * dVar12);
  memcpy(&local_b0,&DAT_007387f0,0x40);
  local_b0 = (float)(dVar11 * dVar7);
  local_ac = (float)(dVar11 * dVar10);
  local_a0 = (float)(dVar14 * dVar8) - (float)(dVar13 * dVar10);
  local_98 = (float)(dVar11 * dVar14);
  local_9c = (float)(dVar14 * dVar9) + (float)(dVar13 * dVar7);
  local_88 = (float)(dVar13 * dVar11);
  local_90 = (float)(dVar13 * dVar8) + (float)(dVar14 * dVar10);
  local_8c = (float)(dVar13 * dVar9) - (float)(dVar7 * dVar14);
  local_a8 = (float)-dVar12;
  memcpy(&local_f0,&local_b0,0x40);
  GameCamera.orientMtx.forward.x = -local_d0;
  GameCamera.orientMtx.right.x = -local_f0;
  GameCamera.orientMtx.forward.y = -local_cc;
  GameCamera.orientMtx.right.y = -local_ec;
  GameCamera.orientMtx.forward.z = -local_c8;
  GameCamera.orientMtx.right.z = -local_e8;
  GameCamera.orientMtx.up.x = local_e0;
  GameCamera.orientMtx.up.y = local_dc;
  GameCamera.orientMtx.up.z = local_d8;
  if (Cheats[4] != '\0') {
    GameCamera.orientMtx.right.x =
         GameCamera.orientMtx.forward.y * local_d8 - GameCamera.orientMtx.forward.z * local_dc;
    GameCamera.orientMtx.right.y =
         GameCamera.orientMtx.forward.z * local_e0 - GameCamera.orientMtx.forward.x * local_d8;
    GameCamera.orientMtx.right.z =
         GameCamera.orientMtx.forward.x * local_dc - GameCamera.orientMtx.forward.y * local_e0;
    GameCamera.orientMtx.right.w = 0.0;
  }
  if ((Cheats[0] != '\0') && (fVar1 = 0.0, DAT_00a15f30 != 0.0)) {
    fVar4 = SQRT(GameCamera.orientMtx.forward.x * GameCamera.orientMtx.forward.x +
                 GameCamera.orientMtx.forward.y * GameCamera.orientMtx.forward.y +
                 GameCamera.orientMtx.forward.z * GameCamera.orientMtx.forward.z);
    fVar2 = fVar1;
    fVar3 = fVar1;
    if (fVar4 != 0.0) {
      fVar4 = DAT_00a15f30 / fVar4;
      fVar1 = GameCamera.orientMtx.forward.z * fVar4;
      fVar2 = GameCamera.orientMtx.forward.y * fVar4;
      fVar3 = GameCamera.orientMtx.forward.x * fVar4;
    }
    GameCamera.posX = GameCamera.posX - fVar3;
    GameCamera.posY = GameCamera.posY - fVar2;
    GameCamera.posZ = GameCamera.posZ - fVar1;
  }
  return;
}


// 0x0168768 (0x5cc bytes)
// strings: 00653cb0: 'moby update' | 00653cc0: 'hero update' | 00653cd0: 'part update' | 00653ce0: 'camera update' | 00653cf0: 'sound update'


void UpdateScene(void)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  MOBY_OCLASSES MVar9;
  MobyInstance *pMVar10;
  char cVar11;
  float fVar12;
  int iVar13;
  float *pfVar14;
  float *pfVar15;
  undefined4 *puVar16;
  int iVar17;
  double dVar18;
  
  if ((g_Pad.buttonsPressedThisFrame & START) == 0) {
    if (((DebugUpdate & UPDATE_MOBYS) != NONE) ||
       (((DebugUpdate & ENABLE_STEPPING) != NONE && ((g_Pad.buttonsPressedThisFrame & L3) != 0)))) {
      g_MobyFuncListCount = 0;
      g_PreDrawCount = 0;
      g_NumLameShadows = 0;
      g_PostPreDrawCount = 0;
      g_PostDrawCount = 0;
      DAT_0095cae0 = 0;
      DAT_0095ccf0 = 0;
      DAT_00a1bfe4 = 0;
    }
    if (((DebugUpdate & ENABLE_STEPPING) == NONE) ||
       ((g_Pad.buttonsPressedThisFrame & (L3|CIRCLE)) != 0)) {
      UpdateSpaceSceneEffects();
    }
    if (((DebugUpdate & UPDATE_MOBYS) != NONE) ||
       (((DebugUpdate & ENABLE_STEPPING) != NONE && ((g_Pad.buttonsPressedThisFrame & L3) != 0)))) {
      UpdateMobys();
      sound_UpdateAmbient();
    }
    STUB_0006562c("moby update",3);
    if (((DebugUpdate & UPDATE_HERO) != NONE) ||
       (((DebugUpdate & ENABLE_STEPPING) != NONE && ((g_Pad.buttonsPressedThisFrame & L3) != 0)))) {
      HeroUpdate();
    }
    STUB_0006562c("hero update",7);
    if (((DebugUpdate & UPDATE_PARTICLES) != NONE) ||
       (((DebugUpdate & ENABLE_STEPPING) != NONE && ((g_Pad.buttonsPressedThisFrame & L3) != 0)))) {
      UpdateParts();
    }
    STUB_0006562c("part update",5);
    if (((DebugUpdate & ENABLE_STEPPING) == NONE) ||
       ((g_Pad.buttonsPressedThisFrame & (L3|CIRCLE)) != 0)) {
      puVar16 = &DAT_0095cd50;
      g_cutsceneCameraFrame = g_cutsceneCameraFrame + 1;
      g_SpaceSceneFrame = g_SpaceSceneFrame + 1;
      SceneScreenFade = SceneScreenFade - 0.34;
      dVar18 = 0.0;
      if (SceneScreenFade < 0.0) {
        SceneScreenFade = 0.0;
      }
      if (g_SpaceSceneMobyCnt.piece<2,2>() <= g_SpaceSceneFrame) {
        music_PlayPreseekedSpeech();
      }
      iVar17 = 0;
      bVar1 = g_SpaceSceneNumFrames.piece<0,2>() <= g_SpaceSceneFrame;
      if (((int)(animationSpeed * 18.5) <= g_SpaceSceneFrame) &&
         ((double)SceneScreenFade == dVar18)) {
        if ((((g_ChallengeMode == 0 && g_goodiesMenuActive == 0) && g_MoviePlayState == 0) &&
            (0 < (int)Level)) || ((g_Pad.buttonsPressedThisFrame & START) == 0)) {
          if (((g_Pad.downButtons & (R1|L1|R2|L2)) == (R1|L1|R2|L2)) &&
             ((g_Pad.buttonsPressedThisFrame & START) != 0)) {
            bVar1 = true;
          }
        }
        else {
          bVar1 = true;
        }
      }
      if (bVar1) {
        mode_sceneUnInit();
      }
      else {
        iVar13 = 0x60;
        if (g_IsPal != 0) {
          iVar13 = 0x50;
        }
        if (iVar13 <= (int)g_cutsceneCameraFrame) {
          LoadMusic2(1);
          g_SpaceSceneChunk = g_SpaceSceneChunk + 1;
          g_SceneLoadBuffer = g_NpcBuffer + 0x80000;
          ParseNpcChunk();
          iVar13 = PreLoadNpcChunk(g_SpaceSceneChunk + 1);
        }
        UpdateSceneCamera();
        if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
          do {
            pMVar10 = (MobyInstance *)puVar16[0x5e];
            cVar11 = (char)((int)g_cutsceneCameraFrame >> 1);
            pMVar10->previousAnimationFrame = cVar11;
            pMVar10->animationFrame = cVar11 + '\x01';
            UpdateMobyFrameData(pMVar10);
            dVar18 = (double)FastIntToDouble(g_cutsceneCameraFrame & 1);
            pMVar10->animationBlend = (float)(dVar18 * 0.5);
            if ((iVar13 != 0) && ((g_cutsceneCameraFrame & 1) != 0)) {
              pMVar10->animationBlend = 1.0;
            }
            fVar2 = pMVar10->animationBlend;
            fVar12 = 1.0 - fVar2;
            pfVar14 = (float *)((int)pMVar10->pVar +
                               (uint)(byte)pMVar10->previousAnimationFrame * 0x10);
            pfVar15 = (float *)((int)pMVar10->pVar + (uint)(byte)pMVar10->animationFrame * 0x10);
            fVar3 = *pfVar14;
            fVar4 = pfVar14[1];
            fVar5 = pfVar14[2];
            fVar6 = *pfVar15;
            fVar7 = pfVar15[1];
            fVar8 = pfVar15[2];
            (pMVar10->pos).w = pfVar14[3];
            pMVar10->field44_0x71 = -1;
            (pMVar10->pos).x = fVar3 * fVar12 + fVar6 * fVar2;
            (pMVar10->pos).y = fVar4 * fVar12 + fVar7 * fVar2;
            (pMVar10->pos).z = fVar5 * fVar12 + fVar8 * fVar2;
            UpdateMobyTransform(pMVar10);
            if (pMVar10->shadow != '\0') {
              MB_SetZBoundsFromFloorCeil(pMVar10);
            }
            if (pMVar10->oClass == RATCHET) {
              Hero_UpdateInScene(pMVar10);
            }
            MVar9 = pMVar10->oClass;
            if (((MVar9 == CLANK_000A) || (MVar9 == GIANT_CLANK)) || (MVar9 == CLANK_0555)) {
              ____Hero_AddPulsingMobyGlow(pMVar10);
            }
            iVar17 = iVar17 + 1;
            puVar16 = puVar16 + 1;
          } while (iVar17 < g_SpaceSceneMobyCnt.piece<0,2>());
        }
      }
    }
    STUB_0006562c("camera update",8);
    sound_Update();
    STUB_0006562c("sound update",6);
    UpdatePointLights();
    UpdateHeroLightAngle();
    if (((DebugUpdate & UPDATE_MOBYS) != NONE) ||
       (((DebugUpdate & ENABLE_STEPPING) != NONE && ((g_Pad.buttonsPressedThisFrame & L3) != 0)))) {
      UpdateGameCounters();
    }
  }
  else {
    mode_sceneUnInit();
  }
  return;
}


// 0x0168d34 (0xb8 bytes)
void StartMovie(int arg0,int arg1,int language)

{
  DAT_009637cb = DAT_009637cb | 8;
  FlushCache(0);
  sound_StopAllSounds();
  music_Stop();
  g_CutscenePlaying = 1;
  g_MovieParam0 = arg0;
  DAT_00e5a634 = arg1;
  g_MovieLanguage = language;
  FadeToBlack(4);
  Help_Kill();
  g_gameMode = GAME_MODE_MOVIE;
  return;
}


// 0x0168dec (0x190 bytes)
// strings: 00653d14: '/rc1/ps3data/movies/infobots[%d].bik'


void PlayInfobotMovie(int movieIdx)

{
  void *pvVar1;
  undefined8 uVar2;
  int iVar3;
  char acStack_e0 [64];
  GPiece<128> auStack_a0;
  
  if (movieIdx < 0x13 && 0 < movieIdx) {
    pvVar1 = g_pBinkPlayer;
    if (g_pBinkPlayer == (void *)0x0) {
      uVar2 = FUN_005e38b0(0x60);
      pvVar1 = (void *)0x0;
      if ((void *)uVar2 != (void *)0x0) {
        FUN_004d5d5c(uVar2);
        pvVar1 = (void *)uVar2;
      }
    }
    g_pBinkPlayer = pvVar1;
    pvVar1 = g_pBinkPlayer;
    iVar3 = snprintf(acStack_e0,"/rc1/ps3data/movies/infobots[%d].bik",movieIdx);
    uVar2 = FUN_004ef34c(iVar3);
    FUN_004ef4d0(uVar2,acStack_e0,auStack_a0);
    FUN_004d5448(pvVar1,auStack_a0,g_Language,0x400);
    iVar3 = g_Language;
    if (g_heroHealth == 0) {
      HandleHeroDeath();
    }
    else if (g_HeroIsOutOfBounds == '\0') {
      DAT_009637cb = DAT_009637cb | 8;
      FlushCache(0);
      sound_StopAllSounds();
      music_Stop();
      g_MovieParam0 = &g_heroMtx;
      DAT_00e5a634 = &g_heroMtx;
      g_MovieLanguage = iVar3;
      g_CutscenePlaying = 1;
      FadeToBlack(4);
      Help_Kill();
      g_gameMode = GAME_MODE_MOVIE;
    }
  }
  return;
}


// 0x0168f7c (0x190 bytes)
// strings: 00653d3c: '/rc1/ps3data/movies/help[%d].bik'


void PlayHelpMovie(int movieIdx)

{
  void *pvVar1;
  undefined8 uVar2;
  int iVar3;
  char acStack_e0 [64];
  GPiece<128> auStack_a0;
  
  if ((uint)movieIdx < 3) {
    pvVar1 = g_pBinkPlayer;
    if (g_pBinkPlayer == (void *)0x0) {
      uVar2 = FUN_005e38b0(0x60);
      pvVar1 = (void *)0x0;
      if ((void *)uVar2 != (void *)0x0) {
        FUN_004d5d5c(uVar2);
        pvVar1 = (void *)uVar2;
      }
    }
    g_pBinkPlayer = pvVar1;
    pvVar1 = g_pBinkPlayer;
    iVar3 = snprintf(acStack_e0,"/rc1/ps3data/movies/help[%d].bik",movieIdx);
    uVar2 = FUN_004ef34c(iVar3);
    FUN_004ef4d0(uVar2,acStack_e0,auStack_a0);
    FUN_004d5448(pvVar1,auStack_a0,g_Language,0x400);
    iVar3 = g_Language;
    if (g_heroHealth == 0) {
      HandleHeroDeath();
    }
    else if (g_HeroIsOutOfBounds == '\0') {
      DAT_009637cb = DAT_009637cb | 8;
      FlushCache(0);
      sound_StopAllSounds();
      music_Stop();
      g_MovieParam0 = &g_heroMtx;
      DAT_00e5a634 = &g_heroMtx;
      g_MovieLanguage = iVar3;
      g_CutscenePlaying = 1;
      FadeToBlack(4);
      Help_Kill();
      g_gameMode = GAME_MODE_MOVIE;
    }
  }
  return;
}


// 0x016910c (0x15c bytes)
// strings: 00653d60: '/rc1/ps3data/movies/special[%d].bik'


void PlaySpecialMovie(int movieIdx)

{
  void *pvVar1;
  int iVar3;
  undefined8 uVar2;
  undefined8 unaff_r29;
  char acStack_e0 [64];
  GPiece<128> auStack_a0;
  
  if ((uint)movieIdx < 4) {
    pvVar1 = g_pBinkPlayer;
    if (g_pBinkPlayer == (void *)0x0) {
      unaff_r29 = FUN_005e38b0(0x60);
      pvVar1 = (void *)0x0;
      if ((void *)unaff_r29 != (void *)0x0) {
        FUN_004d5d5c(unaff_r29);
        pvVar1 = (void *)unaff_r29;
      }
    }
    g_pBinkPlayer = pvVar1;
    pvVar1 = g_pBinkPlayer;
    iVar3 = snprintf(acStack_e0,"/rc1/ps3data/movies/special[%d].bik",movieIdx);
    uVar2 = FUN_004ef34c(iVar3);
    FUN_004ef4d0(uVar2,acStack_e0,auStack_a0);
    FUN_004d5448(pvVar1,auStack_a0,0,0x400);
    DAT_009637cb = DAT_009637cb | 8;
    FlushCache(0);
    sound_StopAllSounds();
    music_Stop();
    g_MovieParam0 = (undefined4)unaff_r29;
    g_MovieLanguage = 0;
    g_CutscenePlaying = 1;
    DAT_00e5a634 = g_MovieParam0;
    FadeToBlack(4);
    Help_Kill();
    g_gameMode = GAME_MODE_MOVIE;
  }
  return;
}


// 0x0169268 (0x160 bytes)
// strings: 00653d84: '/rc1/ps3data/movies/story[%d].bik'


void PlayStoryMovie(int movieIdx)

{
  void *pvVar1;
  int iVar3;
  undefined8 uVar2;
  undefined8 unaff_r29;
  char acStack_e0 [64];
  GPiece<128> auStack_a0;
  
  if ((uint)movieIdx < 0xc) {
    pvVar1 = g_pBinkPlayer;
    if (g_pBinkPlayer == (void *)0x0) {
      unaff_r29 = FUN_005e38b0(0x60);
      pvVar1 = (void *)0x0;
      if ((void *)unaff_r29 != (void *)0x0) {
        FUN_004d5d5c(unaff_r29);
        pvVar1 = (void *)unaff_r29;
      }
    }
    g_pBinkPlayer = pvVar1;
    pvVar1 = g_pBinkPlayer;
    iVar3 = snprintf(acStack_e0,"/rc1/ps3data/movies/story[%d].bik",movieIdx);
    uVar2 = FUN_004ef34c(iVar3);
    FUN_004ef4d0(uVar2,acStack_e0,auStack_a0);
    FUN_004d5448(pvVar1,auStack_a0,g_Language,0x400);
    iVar3 = g_Language;
    DAT_009637cb = DAT_009637cb | 8;
    FlushCache(0);
    sound_StopAllSounds();
    music_Stop();
    g_MovieParam0 = (undefined4)unaff_r29;
    g_MovieLanguage = iVar3;
    g_CutscenePlaying = 1;
    DAT_00e5a634 = g_MovieParam0;
    FadeToBlack(4);
    Help_Kill();
    g_gameMode = GAME_MODE_MOVIE;
  }
  return;
}


// 0x01693c8 (0x274 bytes)
void mode_movieUnInit(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 uStack_50;
  GPiece<15> auStack_4f;
  
  g_CutscenePlaying = 1;
  STUB_00503078(0);
  sceGsSyncPath(0,0);
  STUB_00503208(&PTR_____Unused_Respawn_IncCounter_a53504_00707950);
  iVar2 = 0xd;
  uVar5 = (ulonglong)DAT_00e5a640;
  if (Cutscene != 0) {
    iVar2 = 0xe;
  }
  iVar6 = 0x11;
  if (Cutscene != 0) {
    iVar6 = 0xe;
  }
  iVar3 = 0;
  iVar4 = GSmem.zbuf;
  if (iVar2 != 0) {
    do {
      FUN_00502dfc(&uStack_50,iVar4 >> 8,2,0x2a,0,0,0x80,0x80);
      FlushCache(0);
      FUN_00502df8(&uStack_50,uVar5);
      sceGsSyncPath(0,0);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10000;
      uVar5 = uVar5 + 0xc000;
    } while (iVar3 < iVar2);
  }
  iVar4 = 0;
  iVar2 = DAT_00966ad4;
  if (iVar6 != 0) {
    do {
      FUN_00502dfc(auStack_4f,iVar2 >> 8,1,0x12,0,0,0x40,0x40);
      FlushCache(0);
      FUN_00502df8(auStack_4f,uVar5 & 0xffffffff);
      sceGsSyncPath(0,0);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x4000;
      uVar5 = uVar5 + 0x4000;
    } while (iVar4 < iVar6);
  }
  if (g_MoviePlayState == 2) {
    g_MoviePlayState = 0;
  }
  FadeToBlack(4);
  music_StartTrack((int)g_MusicPlaying.track,1,0x400);
  uVar1 = DAT_00a15c10;
  iVar2 = DAT_00a15c0c;
  g_gameMode = GAME_MODE_NORMAL;
  if (DAT_00a15c0c != 0) {
    DAT_00a15c0c = 0;
    DAT_00a15c10 = 0;
    FUN_004d31b0(iVar2,uVar1,1);
  }
  DAT_009637cb = DAT_009637cb | 0x10;
  return;
}


// 0x016963c (0x110 bytes)
void PlayMovieBlocking(void)

{
  bool bVar1;
  void *pvVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  pvVar2 = g_pBinkPlayer;
  if (g_pBinkPlayer == (void *)0x0) {
    uVar3 = FUN_005e38b0(0x60);
    pvVar2 = (void *)0x0;
    if ((void *)uVar3 != (void *)0x0) {
      FUN_004d5d5c(uVar3);
      pvVar2 = (void *)uVar3;
    }
  }
  g_pBinkPlayer = pvVar2;
  pvVar2 = g_pBinkPlayer;
  bVar1 = false;
  iVar5 = 0;
  do {
    UpdatePad();
    if ((g_Pad.downButtons & START) != 0) {
      bVar1 = true;
      break;
    }
    UpdateOcclusion(0);
    iVar4 = FUN_004d5524(pvVar2);
    cellSysutilCheckCallback();
    if (1 < iVar4) {
      iVar5 = FUN_004d59e8(pvVar2);
    }
    Render_DispatchJob();
  } while (iVar5 == 0);
  if (bVar1) {
    FUN_004d4c88(pvVar2);
  }
  return;
}


// 0x016974c (0x154 bytes)
void UpdateCinematic(void)

{
  bool bVar1;
  void *pvVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  FlushCache(0);
  sound_StopAllSounds();
  music_Stop();
  STUB_005066bc_RET_0(0);
  pvVar2 = g_pBinkPlayer;
  if (g_pBinkPlayer == (void *)0x0) {
    uVar3 = FUN_005e38b0(0x60);
    pvVar2 = (void *)0x0;
    if ((void *)uVar3 != (void *)0x0) {
      FUN_004d5d5c(uVar3);
      pvVar2 = (void *)uVar3;
    }
  }
  g_pBinkPlayer = pvVar2;
  pvVar2 = g_pBinkPlayer;
  bVar1 = false;
  iVar5 = 0;
  do {
    UpdatePad();
    if ((g_Pad.downButtons & START) != 0) {
      bVar1 = true;
      break;
    }
    UpdateOcclusion(0);
    iVar4 = FUN_004d5524(pvVar2);
    cellSysutilCheckCallback();
    if (1 < iVar4) {
      iVar5 = FUN_004d59e8(pvVar2);
    }
    Render_DispatchJob();
  } while (iVar5 == 0);
  if (bVar1) {
    FUN_004d4c88(pvVar2);
  }
  FUN_00503128_RET_0(0);
  mode_movieUnInit();
  return;
}


// 0x01698a0 (0x274 bytes)
// strings: 00653da8: 'rc1/ps3data/global/credits/credits[0].ps3' | 00653dd8: 'rc1/ps3data/global/credits/credits[1].ps3' | 00653e08: 'rc1/ps3data/global/credits/credits[0].vram' | 00653e38: 'credits_images_ntsc' | 00653e50: '/rc1/ps3data/global/credits/credits[1].vram'


void mode_creditsInit(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = DAT_00902e9c;
  LoadMusic2(0);
  FadeToBlack(8);
  SceneScreenFade = 1.0;
  g_CutscenePlaying = 1;
  g_gameMode = GAME_MODE_PUZZLE;
  FastMemSet(&DAT_00a15c1c,0,0x58);
  piVar2 = g_NpcBuffer;
  DAT_00a15c24 = DAT_00a10924;
  DAT_00a15c28 = DAT_00a10924 + 0xd0000;
  LoadAssetFromFile("rc1/ps3data/global/credits/credits[0].ps3",g_NpcBuffer,0x24);
  DAT_00a15c2c = *piVar2;
  DAT_00a15c30 = piVar2[1];
  DAT_00a15c34 = piVar2[2];
  DAT_00a15c38 = piVar2[3];
  DAT_00a15c3c = piVar2[4];
  DAT_00a15c40 = piVar2[5];
  DAT_00a15c44 = piVar2[6];
  DAT_00a15c48 = piVar2[7];
  DAT_00a15c4c = piVar2[8];
  LoadAssetFromFile("rc1/ps3data/global/credits/credits[1].ps3",piVar2,0x24);
  DAT_00a15c50 = *piVar2;
  DAT_00a15c54 = piVar2[1];
  DAT_00a15c58 = piVar2[2];
  DAT_00a15c5c = piVar2[3];
  DAT_00a15c60 = piVar2[4];
  DAT_00a15c64 = piVar2[5];
  DAT_00a15c68 = piVar2[6];
  DAT_00a15c6c = piVar2[7];
  DAT_00a15c70 = piVar2[8];
  LoadAssetFromFile("rc1/ps3data/global/credits/credits[0].vram",DAT_00a15c24,0xd0000);
  DAT_00a15c2c = DAT_00a15c2c + (DAT_00a15c24 - *(int *)(iVar1 + 0x4ac));
  LoadMusic2(1);
  idol::PRINT_m_LoadGameFile(DAT_00a15c28,"credits_images_ntsc");
  LoadAssetFromFile("/rc1/ps3data/global/credits/credits[1].vram",DAT_00a15c28,0xd0000);
  DAT_00a15c50 = DAT_00a15c50 + (DAT_00a15c28 - *(int *)(iVar1 + 0x4ac));
  return;
}


// 0x0169b14 (0x6c bytes)
void mode_creditsUnInit(void)

{
  STUB_00174cf4(1);
  FadeToBlack(0xc);
  music_StopLoad();
  g_CutscenePlaying = 1;
  g_gameMode = GAME_MODE_NORMAL;
  SceneScreenFade = 0.0;
  VU1_setBufSizeByLevel();
  return;
}


// 0x0169b88 (0x550 bytes)
// strings: 00653e7c: 'g_wad.game.credits_images_ntsc[image_id]' | 00653eac: 'rc1/ps3data/global/credits/credits[%d].ps3' | 00653edc: 'rc1/ps3data/global/credits/credits[%d].vram'


void UpdateCredits(void)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  double dVar5;
  char acStack_110 [128];
  
  LoadMusic2(0);
  bVar3 = g_JapaneseMode;
  SceneScreenFade = SceneScreenFade - 0.05;
  dVar5 = 0.0;
  if (SceneScreenFade < 0.0) {
    SceneScreenFade = 0.0;
  }
  if (DAT_00a15c1c == 0) {
    if (*(int *)(&DAT_0072075c + (int)((longlong)DAT_00a15c1e << 2)) + -0x24 <= (int)DAT_00a15c22) {
      if (Music != 0) {
        LoadMusic2(1);
      }
      if (g_JapaneseMode == false) {
        if ((bVar3 != false) && (DAT_00a15c1e == 0x29)) {
          STUB_00174cf4(1);
          FadeToBlack(0xc);
          music_StopLoad();
          SceneScreenFade = (float)dVar5;
          g_CutscenePlaying = 1;
          g_gameMode = GAME_MODE_NORMAL;
          VU1_setBufSizeByLevel();
          return;
        }
        if (0x2c < DAT_00a15c1e) {
          STUB_00174cf4(1);
          FadeToBlack(0xc);
          music_StopLoad();
          SceneScreenFade = (float)dVar5;
          g_CutscenePlaying = 1;
          g_gameMode = GAME_MODE_NORMAL;
          VU1_setBufSizeByLevel();
          return;
        }
        DAT_00a15c20 = -1;
        DAT_00a15c1c = 1;
      }
      else {
        if (0x24 < DAT_00a15c1e) {
          STUB_00174cf4(1);
          FadeToBlack(0xc);
          music_StopLoad();
          SceneScreenFade = (float)dVar5;
          g_CutscenePlaying = 1;
          g_gameMode = GAME_MODE_NORMAL;
          VU1_setBufSizeByLevel();
          return;
        }
        DAT_00a15c20 = -1;
        DAT_00a15c1c = 1;
      }
    }
  }
  else if ((DAT_00a15c1c == 1) &&
          (STUB_00174cf4(1), iVar1 = DAT_00902e9c, 0x23 < DAT_00a15c20)) {
    if (g_JapaneseMode == false) {
      if ((bVar3 == false) && (DAT_00a15c1e == 0x11)) {
        DAT_00a15c1e = 0x1b;
        DAT_00a15c22 = 0x2238;
      }
      if ((bVar3 != false) && (DAT_00a15c1e == 8)) {
        DAT_00a15c1e = 0x11;
        DAT_00a15c22 = 0x1590;
      }
      if ((bVar3 == false) && (DAT_00a15c1e == 0x27)) {
        DAT_00a15c1e = 0x29;
        DAT_00a15c22 = 0x350c;
      }
    }
    DAT_00a15c1c = 0;
    DAT_00a15c20 = -1;
    iVar4 = (int)DAT_00a15c1e + ((int)DAT_00a15c1e / 0x14) * -0x14;
    DAT_00a15c1e = DAT_00a15c1e + 1;
    idol::PRINT_m_LoadGameFile(DAT_00a15c28,"g_wad.game.credits_images_ntsc[image_id]");
    piVar2 = DAT_00a10920;
    DAT_00a15c2c = DAT_00a15c50;
    DAT_00a15c30 = DAT_00a15c54;
    DAT_00a15c34 = DAT_00a15c58;
    DAT_00a15c38 = DAT_00a15c5c;
    DAT_00a15c3c = DAT_00a15c60;
    DAT_00a15c40 = DAT_00a15c64;
    DAT_00a15c44 = DAT_00a15c68;
    DAT_00a15c48 = DAT_00a15c6c;
    DAT_00a15c4c = DAT_00a15c70;
    snprintf(acStack_110,"rc1/ps3data/global/credits/credits[%d].ps3",iVar4);
    LoadAssetFromFile(acStack_110,piVar2,0x24);
    DAT_00a15c50 = *piVar2;
    DAT_00a15c54 = piVar2[1];
    DAT_00a15c58 = piVar2[2];
    DAT_00a15c5c = piVar2[3];
    DAT_00a15c60 = piVar2[4];
    DAT_00a15c64 = piVar2[5];
    DAT_00a15c68 = piVar2[6];
    DAT_00a15c6c = piVar2[7];
    DAT_00a15c70 = piVar2[8];
    snprintf(acStack_110,"rc1/ps3data/global/credits/credits[%d].vram",iVar4);
    LoadAssetFromFile(acStack_110,DAT_00a15c28,0xd0000);
    DAT_00a15c50 = DAT_00a15c50 + (DAT_00a15c28 - *(int *)(iVar1 + 0x4ac));
  }
  DAT_00a15c20 = DAT_00a15c20 + 1;
  DAT_00a15c22 = DAT_00a15c22 + 1;
  if ((g_Pad.buttonsPressedThisFrame & START) != 0) {
    STUB_00174cf4(1);
    FadeToBlack(0xc);
    music_StopLoad();
    SceneScreenFade = (float)dVar5;
    g_CutscenePlaying = 1;
    g_gameMode = GAME_MODE_NORMAL;
    VU1_setBufSizeByLevel();
  }
  sound_Update();
  return;
}


