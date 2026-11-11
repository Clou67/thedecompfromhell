// game/space.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 28 functions, 0x15da00-0x165588
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "game/space.h"
#include "game/boot.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/initonce.h"
#include "game/lights.h"
#include "game/loaders.h"
#include "game/map.h"
#include "game/memcard.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/pad.h"
#include "game/partproc.h"
#include "game/partupd.h"
#include "game/pause.h"
#include "game/skyfunc.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/camera5.h"
#include "game/update/moby1118.h"
#include "game/update/moby998.h"
#include "game/vendor.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"
#include "idol/idol.h"
#include "idol/idol_draw.h"
#include "idol/mUnk.h"
#include "idol/mathfunc.h"
#include "idol/sound.h"
#include "idol/tiefunc.h"
#include "sdk/libcgc/libcgc_cell_localize.h"
#include "sdk/mUnk4.h"
#include "sdk/sce.h"
#include "sdk/xUnk5.h"

// 0x015da00 (0x14 bytes)
void SECTION_HEADER_SPACE(void)

{
  DAT_00731bc4 = 0x10000;
  return;
}


// 0x015da58 (0x588 bytes)
void UpdateMoby_Spaceship(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  short sVar11;
  int iVar10;
  byte bVar12;
  ulonglong uVar13;
  double dVar14;
  
  pvVar6 = moby->pVar;
  if (moby->state == '*') {
    if (g_gameMode != GAME_MODE_SCENE) {
      if ((g_MiscLevelFlags.SpaceshipRelated1 == 0) && (UnlockableItems.magneboots != '\0')) {
        mode_sceneInit(4);
        g_MiscLevelFlags.SpaceshipRelated1 = 1;
      }
      else if ((g_MiscLevelFlags.SpaceshipRelated2 == 0) && (g_SeenPlanets.Pokitaru != 0)) {
        mode_sceneInit(5);
        g_MiscLevelFlags.SpaceshipRelated2 = 1;
      }
      else if ((g_MiscLevelFlags.SpaceshipRelated3 == 0) && (g_SeenPlanets.Pokitaru != 0)) {
        PlayInfobotMovie(0xb);
        g_MiscLevelFlags.SpaceshipRelated3 = 1;
      }
      else if ((g_MiscLevelFlags.SpaceShipRelated4 == 0) && (g_SeenPlanets.Pokitaru != 0)) {
        mode_sceneInit(6);
        g_MiscLevelFlags.SpaceShipRelated4 = 1;
      }
      else {
        moby->state = '\0';
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
        DAT_00a15c74 = 1;
        DAT_00964598 = 1;
      }
    }
  }
  else {
    if (moby->enabled != '\0') {
      bVar12 = moby->setByGroup + 2;
      moby->setByGroup = bVar12;
      dVar14 = (double)FastIntToDouble((ulonglong)bVar12 - 0x80);
      fVar1 = (float)(dVar14 * 0.02454369328916073 + 1.570796251296997);
      fVar2 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar2 = fVar1;
      }
      fVar3 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
        fVar3 = fVar2;
      }
      fVar1 = fVar3 * fVar3;
      fVar2 = fVar1 * fVar1 * fVar3;
      fVar4 = fVar1 * fVar2;
      uVar13 = (ulonglong)
               (uint)(int)((fVar1 * fVar4 * 2.601887e-06 +
                           fVar4 * -0.0001980741 +
                           fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) * 50.0) +
               0x96;
      uVar8 = (uint)((uVar13 & 0xffffff) << 8);
      uVar7 = (uint)uVar13 | uVar8;
      moby->field60_0x90 =
           uVar7 + ((uint)(ZERO_MASK((0x215 - (uint)moby->oClass))) &
                   ((int)(uint)uVar13 >> 1 | uVar8) - uVar7) | (uint)((uVar13 & 0xffffffff) << 0x10)
      ;
      RegisterPostDraw(&PTR_Space_DrawShipEffects_00707cd8,moby);
      fVar1 = (moby->pos).y - GameCamera.posY;
      fVar2 = (moby->pos).x - GameCamera.posX;
      if (SQRT(fVar2 * fVar2 + fVar1 * fVar1) < 32.0) {
        RegisterFuncForMoby(&PTR_STUB_0015e2c0_00707c68,moby);
      }
    }
    sVar11 = *(short *)((int)pvVar6 + 0xc);
    if (sVar11 == 0) {
      fVar1 = (moby->pos).y;
      fVar2 = (moby->pos).x;
      fVar3 = fVar1 - g_heroPosition.y;
      fVar4 = fVar2 - g_heroPosition.x;
      if (SQRT(fVar4 * fVar4 + fVar3 * fVar3) < 6.0) {
        iVar10 = (int)((longlong)g_SpaceshipVariant << 4);
        fVar3 = *(float *)(&DAT_00731c60 + iVar10);
        fVar4 = *(float *)(iVar10 + 0x731c64);
        fVar5 = *(float *)(iVar10 + 0x731c68);
        fVar9 = ((moby->transform).v1.y * fVar4 +
                (moby->transform).v2.y * fVar5 + (moby->transform).v0.y * fVar3 + fVar1) -
                g_heroPosition.y;
        fVar1 = ((moby->transform).v1.x * fVar4 +
                (moby->transform).v2.x * fVar5 + (moby->transform).v0.x * fVar3 + fVar2) -
                g_heroPosition.x;
        fVar2 = ((moby->transform).v2.z * fVar5 +
                 (moby->transform).v0.z * fVar3 + (moby->transform).v1.z * fVar4 + (moby->pos).z) -
                g_heroPosition.z;
        if (SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar9 * fVar9) < 4.0) {
          sVar11 = 1;
          *(undefined2 *)((int)pvVar6 + 0xc) = 1;
        }
      }
    }
    else {
      iVar10 = (int)((longlong)g_SpaceshipVariant << 4);
      fVar1 = *(float *)(iVar10 + 0x731c64);
      fVar2 = *(float *)(&DAT_00731c60 + iVar10);
      fVar3 = *(float *)(iVar10 + 0x731c68);
      fVar4 = ((moby->transform).v2.y * fVar3 +
               (moby->transform).v0.y * fVar2 + (moby->transform).v1.y * fVar1 + (moby->pos).y) -
              g_heroPosition.y;
      fVar5 = ((moby->transform).v2.x * fVar3 +
               (moby->transform).v0.x * fVar2 + (moby->transform).v1.x * fVar1 + (moby->pos).x) -
              g_heroPosition.x;
      fVar1 = ((moby->transform).v2.z * fVar3 +
               (moby->transform).v0.z * fVar2 + (moby->transform).v1.z * fVar1 + (moby->pos).z) -
              g_heroPosition.z;
      if (4.1 < SQRT(fVar1 * fVar1 + fVar5 * fVar5 + fVar4 * fVar4)) {
        sVar11 = 0;
        *(undefined2 *)((int)pvVar6 + 0xc) = 0;
      }
    }
    if ((moby->modeBits & DISABLED) == NONE) {
      if (((sVar11 != 0) &&
          (iVar10 = MB_ShowPersistentMessage(2,0x53e4),
          (g_Pad.buttonsPressedThisFrame & TRIANGLE) != 0)) && (iVar10 != 0)) {
        if ((Level == Orxon) && (g_heroType == '\x01')) {
          moby->state = '*';
          moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
          mode_sceneInit(9);
        }
        else {
          MB_ClearHelpMessage((MobyInstance *)0x2);
          DAT_00a15c74 = 1;
          DAT_00964598 = 0;
        }
      }
    }
    else {
      *(undefined2 *)((int)pvVar6 + 0xc) = 0;
    }
  }
  return;
}


// 0x015dfe0 (0x2e0 bytes)
// strings: 0096c074: 'None'


char Space_SetCutsceneCamera(void)

{
  char cVar1;
  float *pfVar2;
  void *pvVar4;
  undefined8 uVar3;
  double extraout_f1;
  double extraout_f1_00;
  double extraout_f1_01;
  double extraout_f1_02;
  double extraout_f1_03;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  
  pfVar2 = (float *)((int)g_SpaceSceneCameraFrames + g_cutsceneCameraFrame * 0x20);
  g_ViewContext.xratio = pfVar2[7];
  cVar1 = *(char *)(pfVar2 + 3);
  UpdateViewContext();
  GameCamera.posX = *pfVar2;
  GameCamera.posY = pfVar2[1];
  GameCamera.posZ = pfVar2[2];
  GameCamera.field8_0x14c = *(char (*) [4])(pfVar2 + 3);
  pvVar4 = memcpy(&local_e0,&DAT_00653758,0x40);
  uVar3 = _FSin((double)pfVar2[4],pvVar4,0);
  dVar12 = extraout_f1;
  uVar3 = _FSin((double)pfVar2[4],uVar3,1);
  dVar11 = extraout_f1_00;
  uVar3 = _FSin((double)pfVar2[5],uVar3,0);
  dVar10 = extraout_f1_01;
  uVar3 = _FSin((double)pfVar2[5],uVar3,1);
  dVar9 = extraout_f1_02;
  uVar3 = _FSin((double)pfVar2[6],uVar3,0);
  dVar8 = extraout_f1_03;
  dVar5 = (double)_FSin((double)pfVar2[6],uVar3,1);
  dVar7 = (double)(float)(dVar10 * dVar8);
  dVar6 = (double)(float)(dVar5 * dVar10);
  memcpy(&local_a0,&DAT_00734b00,0x40);
  local_a0 = (float)(dVar9 * dVar5);
  local_9c = (float)(dVar9 * dVar8);
  local_88 = (float)(dVar9 * dVar12);
  local_78 = (float)(dVar11 * dVar9);
  local_90 = (float)(dVar12 * dVar6 - (double)(float)(dVar11 * dVar8));
  local_8c = (float)(dVar12 * dVar7 + (double)(float)(dVar11 * dVar5));
  local_80 = (float)(dVar11 * dVar6 + (double)(float)(dVar12 * dVar8));
  local_7c = (float)(dVar11 * dVar7 - (double)(float)(dVar5 * dVar12));
  local_98 = (float)-dVar10;
  memcpy(&local_e0,&local_a0,0x40);
  GameCamera.orientMtx.right.x = -local_e0;
  GameCamera.orientMtx.right.y = -local_dc;
  GameCamera.orientMtx.right.z = -local_d8;
  GameCamera.orientMtx.up.x = local_d0;
  GameCamera.orientMtx.forward.x = -local_c0;
  GameCamera.orientMtx.up.y = local_cc;
  GameCamera.orientMtx.forward.y = -local_bc;
  GameCamera.orientMtx.forward.z = -local_b8;
  GameCamera.orientMtx.up.z = local_c8;
  if (Cheats[4] != '\0') {
    GameCamera.orientMtx.right.w = 0.0;
    GameCamera.orientMtx.right.x = -(local_bc * local_c8) - -(local_b8 * local_cc);
    GameCamera.orientMtx.right.y = -(local_b8 * local_d0) - -(local_c0 * local_c8);
    GameCamera.orientMtx.right.z = -(local_c0 * local_cc) - -(local_bc * local_d0);
  }
  return cVar1;
}


// 0x015e2c0 (0x4 bytes)
void STUB_0015e2c0(...)

{
  return;
}


// 0x015e2c4 (0x28 bytes)
void Space_DisableShip(void)

{
  MobyModeBit *pMVar1;
  MobyInstance *pMVar2;
  
  pMVar2 = g_SpaceshipPtr;
  if (g_SpaceshipPtr != (MobyInstance *)0x0) {
    pMVar1 = &g_SpaceshipPtr->modeBits;
    g_SpaceshipPtr->collision = (ushort *)0x0;
    pMVar2->modeBits = *pMVar1 | (NO_UPDATE|DISABLED);
  }
  return;
}


// 0x015e2ec (0x114 bytes)
void SetupSpaceShipVars(MobyInstance *moby)

{
  undefined4 *pvars;
  
  DAT_00a561c0 = 1;
  if (g_SpaceshipPtr != (MobyInstance *)0x0) {
    g_SpaceshipPtr->collision = (ushort *)0x0;
    g_SpaceshipPtr->modeBits = g_SpaceshipPtr->modeBits | (NO_UPDATE|DISABLED);
  }
  if (Level == Gemlik) {
    g_heroSpawnPosition.z = 316.72;
    g_heroSpawnRot.z = 2.77;
    g_heroSpawnPosition.x = 464.66;
    g_heroSpawnPosition.y = 580.68;
  }
  g_SpaceshipVariant = moby->oClass - GREEN_SHIP_0213;
  g_SpaceshipPtr = moby;
  moby->pUpdate = &PTR_UpdateMoby_Spaceship_00707c58;
  moby->modeBits =
       moby->modeBits &
       (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
        DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
       NO_POST_UPDATE);
  moby->collision = moby->pClass->collision;
  MB_SetAnimationNoBlend(moby,1,0);
  pvars = (undefined4 *)moby->pVar;
  g_shipSplinePath = *pvars;
  g_shipCameraStartCuboid = pvars[1];
  g_shipCameraEndCuboid = pvars[2];
  return;
}


// 0x015e400 (0x2c bytes)
void Space_EnableShip(void)

{
  u16 *puVar1;
  MobyInstance *pMVar2;
  
  pMVar2 = g_SpaceshipPtr;
  if (g_SpaceshipPtr != (MobyInstance *)0x0) {
    puVar1 = g_SpaceshipPtr->pClass->collision;
    g_SpaceshipPtr->modeBits =
         g_SpaceshipPtr->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
         NO_POST_UPDATE);
    pMVar2->collision = puVar1;
  }
  return;
}


// 0x015e430 (0x3b8 bytes)
void PlaySpaceCutscene(int cutscene)

{
  u8 uVar1;
  MobyInstance *pMVar2;
  MobyInstance *pMVar3;
  int fade;
  int iVar4;
  int iVar5;
  
  g_CutscenePlaying = 1;
  DAT_00964594 = 0xffff;
  DAT_00964578 = 0;
  DAT_00964590 = cutscene;
  FastMemSet(&DAT_0095cd50,0,0x1c0);
  FastMemSet(&DAT_00a1be80,0,0x40);
  FastMemSet(&DAT_00a1bec0,0,0x40);
  VU1_setBufSizeByLevel();
  DAT_00e5aa64 = DAT_00e5aa64 + -0x60000;
  g_SceneLoadBuffer = g_NpcBuffer + 0x200000;
  DAT_0095cda8 = g_NpcBuffer;
  SceneScreenFade = 1.0;
  DAT_0095cf14 = 0;
  g_gameMode = GAME_MODE_SPACE;
  TransitionMovement(100,2);
  g_heroInvisible = 1;
  Hero_MakeInvisible();
  pMVar3 = MobyInstancePermEnd;
  g_SpaceshipPtr->modeBits = g_SpaceshipPtr->modeBits | DISABLED;
  uVar1 = pMVar3->state;
  while (uVar1 != 0xff) {
    if (((pMVar3->state & 0x80) == 0) &&
       ((pMVar3->oClass == MINE_004A || (pMVar3->oClass == DECOY)))) {
      pMVar3->modeBits = pMVar3->modeBits | NO_DRAW;
    }
    pMVar2 = pMVar3 + 1;
    pMVar3 = pMVar3 + 1;
    uVar1 = pMVar2->state;
  }
  if (cutscene == 0) {
    iVar4 = g_SpaceshipVariant + 1;
    iVar5 = g_SpaceshipVariant + 6;
    if ((Level == Orxon && g_SpaceshipVariant == 1) && (UnlockableItems.o2Mask == '\0')) {
      iVar5 = 0xb;
      iVar4 = 0;
    }
    else if ((Level == Oltanis) && (g_SpaceshipVariant == 2)) {
      iVar4 = 8;
      iVar5 = 0xe;
    }
    LoadSpaceScene(iVar4,(int)(animationSpeed * 6.5));
  }
  else {
    iVar4 = g_SpaceshipVariant + 5;
    iVar5 = (int)g_SpaceshipVariant +
            ((uint)(ZERO_MASK((uint)g_spaceArrivalPending.piece<0,2>())) & 3);
    if (((Level == Orxon) && (g_SpaceshipVariant == 1)) && (UnlockableItems.o2Mask == '\0')) {
      iVar4 = 4;
      iVar5 = ((uint)(ZERO_MASK((uint)g_spaceArrivalPending.piece<0,2>())) & 1) + 9;
    }
    else if ((Level == Oltanis) && (g_SpaceshipVariant == 2)) {
      iVar4 = 9;
      iVar5 = ((uint)(ZERO_MASK((uint)g_spaceArrivalPending.piece<0,2>())) & 1) + 0xc;
    }
    fade = 0;
    if (g_spaceArrivalPending.piece<0,2>() == 0) {
      fade = (int)(animationSpeed * 6.5);
    }
    LoadSpaceScene(iVar4,fade);
  }
  g_PendingSpeech = iVar5 + 40000;
  ParseSpaceSceneChunk(0);
  while (g_SpeechPlaying.status != 3) {
    sound_Update();
    STUB_00503078(0);
  }
  music_PlayPreseekedSpeech();
  return;
}


// 0x015e7e8 (0xb0 bytes)
void Space_StartTakeoffCutscene(void)

{
  g_CutscenePlaying = 1;
  g_heroHealth = g_heroHealth + ((uint)((longlong)g_heroHealth + -1 >> 0x3f) & 1U - g_heroHealth);
  music_Pause(0);
  if ((g_SpeechPlaying.status != 6) && (g_SpeechPlaying.status != 7)) {
    g_SpeechPlaying.status = 5;
  }
  sound_Update();
  Help_Kill();
  PlaySpaceCutscene(0);
  g_spaceArrivalPending.piece<0,2>() = 0;
  return;
}


// 0x015e8a0 (0x1e4 bytes)
void StartLeaveLevelCutscene(LevelId param_1)

{
  int iVar1;
  undefined8 in_LR;
  GPiece<16> auVar2;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  
  g_CutscenePlaying = 1;
  g_gameMode = GAME_MODE_SPACE;
  DAT_0095cf14 = 0;
  SceneScreenFade = 1.0;
  DAT_00964590 = 0;
  DAT_00964594 = 0xffff;
  VU1_setBufSizeByLevel();
  DAT_00e5aa64 = DAT_00e5aa64 + -0x60000;
  g_SceneLoadBuffer = g_NpcBuffer + 0x200000;
  DAT_0095cda8 = g_NpcBuffer;
  if (Level == param_1) {
    PlaySpaceCutscene(8);
    auVar2 = loadVectorLeftIndexed((longlong)g_SpaceshipVariant << 2,0x731d80);
    auVar3 = vectorConvertFromSignedFixedPointWord(auVar2,0);
    auVar2 = loadVectorLeftIndexed(in_LR,0x15e898);
    auVar2 = auVar2 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar4 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar3 = vectorAddFloatingPoint
                       (auVar3,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60);
    auVar2 = ZEXT416(0xffffffff);
    auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
    auVar2 = vectorShiftLeftIntegerWord(auVar2,auVar2);
    iVar1 = ((uint)(ZERO_MASK(g_IsPal)) & 0x10) + 0x50;
    auVar2 = vectorMultiplyAddFloatingPoint(auVar4,auVar3,auVar2);
    auVar2 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
    auVar2 = auVar2 >> 0x60 & (GPiece<16>)0xffffffff;
    g_SpaceSceneFrame =
         storeVectorElementWordIndexed
                   (auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,0x34,0x95cd50);
    g_SpaceSceneChunk =
         (int)(animationSpeed *
              ((float)(longlong)*(int *)(&DAT_00731d80 + (int)((longlong)g_SpaceshipVariant << 2)) +
              0.5)) / iVar1;
    ParseSpaceSceneChunk(g_SpaceSceneChunk);
    g_cutsceneCameraFrame = g_SpaceSceneFrame - (g_SpaceSceneFrame / iVar1) * iVar1;
  }
  else {
    memcard_Save(0,param_1);
    DAT_00964590 = 3;
    DAT_00964594 = 0xffff;
    g_newlevelnum = param_1;
  }
  return;
}


// 0x015ea84 (0x20 bytes)
void ChangeLevel(LevelId level)

{
  g_loadingPlanet = 1;
  g_newlevelnum = level;
  g_CutscenePlaying = 1;
  return;
}


// 0x015eaa4 (0x120 bytes)
void Space_StartLevelArrival(void)

{
  g_spaceArrivalPending.piece<0,2>() = 1;
  if (DAT_0096459a != 0) {
    DAT_0096459a = 0;
  }
  if ((Level == Novalis) && (g_SeenPlanets.Kerwan == '\0')) {
    g_gameMode = GAME_MODE_NORMAL;
  }
  else if ((Level == Veldin) ||
          (((Level == Oltanis && (g_MiscLevelFlags.field104_0x68 == 0)) || (0x13 < (int)Level)))) {
    g_gameMode = GAME_MODE_NORMAL;
  }
  else {
    g_gameMode = GAME_MODE_SPACE;
    DAT_00964590 = 0;
    DAT_00964594 = 0xffff;
    SceneScreenFade = 1.0;
    VU1_setBufSizeByLevel();
    DAT_00e5aa64 = DAT_00e5aa64 + -0x60000;
    DAT_0095cda8 = g_NpcBuffer;
    g_SceneLoadBuffer = g_NpcBuffer + 0x200000;
    PlaySpaceCutscene(8);
  }
  return;
}


// 0x015ebd0 (0x3bc bytes)
void Space_DrawShipEngineGlow(float *pos)

{
  longlong lVar1;
  bool bVar2;
  float fVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ushort uVar23;
  ulonglong *puVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  short sVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  int iVar31;
  longlong lVar32;
  float *pfVar33;
  undefined4 *puVar34;
  float *pfVar35;
  undefined4 *puVar36;
  longlong lVar37;
  longlong lVar38;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar39;
  ulonglong unaff_r30;
  float *pfVar40;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar41;
  double dVar42;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar43;
  ulonglong in_f29;
  double dVar44;
  ulonglong in_f30;
  double dVar45;
  ulonglong in_f31;
  double dVar46;
  
  uVar29 = ZEXT48(&stack0x00000000);
  lVar1 = uVar29 - 0x1a0;
  puVar24 = (ulonglong *)lVar1;
  *puVar24 = uVar29;
  puVar24[0x36] = in_LR;
  puVar24[0x27] = in_f19;
  puVar24[0x28] = in_f20;
  puVar24[0x29] = in_f21;
  puVar24[0x2a] = in_f22;
  puVar24[0x2b] = in_f23;
  puVar24[0x2c] = in_f24;
  puVar24[0x2d] = in_f25;
  puVar24[0x2e] = in_f26;
  puVar24[0x2f] = in_f27;
  puVar24[0x30] = in_f28;
  puVar24[0x31] = in_f29;
  puVar24[0x32] = in_f30;
  puVar24[0x33] = in_f31;
  puVar24[0x21] = unaff_r26;
  puVar24[0x26] = unaff_r31;
  puVar24[0x22] = unaff_r27;
  puVar24[0x25] = unaff_r30;
  sVar28 = g_SpaceshipVariant;
  pfVar40 = (float *)0x731dc0;
  bVar2 = g_SpaceshipVariant == 1;
  puVar24[0x24] = unaff_r29;
  puVar24[0x23] = unaff_r28;
  puVar24[0x20] = unaff_r25;
  if (bVar2) {
    pfVar40 = (float *)&DAT_00731e40;
  }
  else if (sVar28 == 2) {
    pfVar40 = (float *)0x731e60;
  }
  uVar30 = GetEffectTex(5);
  puVar24[0x1d] = uVar30;
  uVar30 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar24[0x1e] = uVar30;
  uVar30 = FUN_00502f08(0,0,0,0,0,0);
  puVar24[0x1c] = uVar30;
  uVar30 = idol_draw::PackCmd(0,2,0,1,0x80);
  puVar24[0x1f] = uVar30;
  sVar28 = g_SpaceshipVariant;
  dVar45 = (double)*pos;
  dVar44 = (double)pos[1];
  dVar43 = (double)pos[2];
  puVar34 = &DAT_00731d8c;
  puVar36 = &DAT_00731d90;
  lVar37 = uVar29 - 0xe0;
  lVar38 = uVar29 - 0xdc;
  lVar41 = 2;
  lVar32 = lVar1;
  do {
    uVar5 = *puVar36;
    *(undefined4 *)((int)lVar32 + 0xc0) = *puVar34;
    uVar6 = puVar34[2];
    *(undefined4 *)((int)lVar32 + 0xc4) = uVar5;
    uVar5 = puVar36[2];
    puVar34 = puVar34 + 4;
    *(undefined4 *)((int)lVar37 + 8) = uVar6;
    puVar36 = puVar36 + 4;
    *(undefined4 *)((int)lVar38 + 8) = uVar5;
    lVar37 = lVar37 + 0x10;
    lVar38 = lVar38 + 0x10;
    lVar32 = lVar32 + 0x10;
    lVar41 = lVar41 + -1;
  } while (lVar41 != 0);
  dVar46 = 0.0009765625;
  iVar39 = 0;
  if (0 < *(int *)(&DAT_00731dac + (int)((longlong)sVar28 << 2))) {
    do {
      bVar4 = *(byte *)(pos + 0x2f);
      uVar30 = (ulonglong)bVar4;
      if (*(short *)((int)pos + 0xb2) != 0) {
        iVar31 = MB_randInt(*(short *)((int)pos + 0xb2));
        uVar30 = (ulonglong)(int)((uint)bVar4 + iVar31);
      }
      dVar42 = (double)FastIntToDouble(uVar30);
      uVar23 = *(ushort *)((int)pos + 0xa6);
      fVar7 = *pfVar40;
      fVar8 = pfVar40[1];
      fVar9 = pfVar40[2];
      fVar10 = (g_SpaceshipPtr->transform).v0.x;
      fVar11 = (g_SpaceshipPtr->transform).v1.x;
      fVar12 = (g_SpaceshipPtr->transform).v2.x;
      fVar3 = (float)(dVar42 * (double)(pfVar40[3] * 0.025));
      fVar13 = (g_SpaceshipPtr->transform).v0.y;
      fVar14 = (g_SpaceshipPtr->transform).v1.y;
      fVar15 = (g_SpaceshipPtr->transform).v2.y;
      fVar16 = (g_SpaceshipPtr->transform).v0.z;
      fVar17 = (g_SpaceshipPtr->transform).v1.z;
      fVar18 = (g_SpaceshipPtr->transform).v2.z;
      fVar19 = (g_SpaceshipPtr->transform).v0.w;
      pfVar35 = (float *)&DAT_00731e80;
      fVar20 = (g_SpaceshipPtr->transform).v1.w;
      lVar38 = 4;
      fVar21 = (g_SpaceshipPtr->transform).v2.w;
      lVar37 = uVar29 - 0x130;
      lVar32 = lVar1;
      do {
        *(uint *)((int)lVar32 + 0xb0) =
             (uint)((uVar30 & 0xffffffff) << 0x18) |
             ((uint)(ZERO_MASK((0x215 - (uint)uVar23))) & 0x102750) + 0x2058b0;
        fVar22 = *pfVar35;
        lVar32 = lVar32 + 4;
        pfVar33 = (float *)lVar37;
        *pfVar33 = fVar22 * fVar3;
        fVar25 = fVar22 * fVar3 + fVar7;
        fVar26 = pfVar35[1] * fVar3 + fVar8;
        pfVar33[1] = pfVar35[1] * fVar3;
        fVar27 = pfVar35[2] * fVar3 + fVar9;
        pfVar33[2] = pfVar35[2] * fVar3;
        fVar22 = pfVar35[3];
        pfVar35 = pfVar35 + 4;
        *pfVar33 = (float)(dVar45 * dVar46 +
                          (double)(fVar12 * fVar27 + fVar10 * fVar25 + fVar26 * fVar11));
        pfVar33[1] = (float)(dVar44 * dVar46 +
                            (double)(fVar15 * fVar27 + fVar13 * fVar25 + fVar26 * fVar14));
        pfVar33[2] = (float)(dVar43 * dVar46 +
                            (double)(fVar18 * fVar27 + fVar16 * fVar25 + fVar26 * fVar17));
        pfVar33[3] = fVar20 * fVar26 + fVar21 * fVar27 + fVar19 * fVar25 + fVar22;
        lVar37 = lVar37 + 0x10;
        lVar38 = lVar38 + -1;
      } while (lVar38 != 0);
      FastDrawQuad(uVar29 - 0x130,0,0,EffectTexHeaders,9);
      iVar39 = iVar39 + 1;
      pfVar40 = pfVar40 + 4;
    } while (iVar39 < *(int *)(&DAT_00731dac + (int)((longlong)g_SpaceshipVariant << 2)));
  }
  return;
}


// 0x015ef98 (0x6e8 bytes)
void Space_DrawTransitionOverlay(void)

{
  longlong lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint uVar23;
  int iVar24;
  gameMode_t gVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  float *pfVar29;
  undefined4 uVar30;
  undefined4 *puVar31;
  undefined4 *puVar32;
  float *pfVar33;
  longlong lVar34;
  float *pfVar35;
  longlong lVar36;
  uint uVar37;
  ulonglong unaff_r14;
  ulonglong unaff_r15;
  ulonglong unaff_r16;
  int iVar38;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  int iVar39;
  ulonglong unaff_r26;
  int iVar40;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  uint uVar41;
  ulonglong unaff_r29;
  int iVar42;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar43;
  double dVar44;
  double dVar45;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar46;
  ulonglong in_f29;
  double dVar47;
  ulonglong in_f30;
  double dVar48;
  ulonglong in_f31;
  double dVar49;
  
  uVar26 = ZEXT48(&stack0x00000000);
  lVar1 = uVar26 - 0x280;
  puVar8 = (ulonglong *)lVar1;
  *puVar8 = uVar26;
  puVar8[0x52] = in_LR;
  puVar8[0x43] = in_f19;
  puVar8[0x44] = in_f20;
  puVar8[0x45] = in_f21;
  puVar8[0x46] = in_f22;
  puVar8[0x47] = in_f23;
  puVar8[0x48] = in_f24;
  puVar8[0x49] = in_f25;
  puVar8[0x4a] = in_f26;
  puVar8[0x4b] = in_f27;
  puVar8[0x4c] = in_f28;
  puVar8[0x4d] = in_f29;
  puVar8[0x4e] = in_f30;
  puVar8[0x4f] = in_f31;
  gVar25 = g_gameMode;
  puVar8[0x42] = unaff_r31;
  puVar8[0x41] = unaff_r30;
  puVar8[0x40] = unaff_r29;
  puVar8[0x3f] = unaff_r28;
  puVar8[0x3e] = unaff_r27;
  puVar8[0x3d] = unaff_r26;
  puVar8[0x3c] = unaff_r25;
  puVar8[0x3b] = unaff_r24;
  puVar8[0x3a] = unaff_r23;
  puVar8[0x39] = unaff_r22;
  puVar8[0x38] = unaff_r21;
  puVar8[0x37] = unaff_r20;
  puVar8[0x36] = unaff_r19;
  puVar8[0x35] = unaff_r18;
  puVar8[0x34] = unaff_r17;
  puVar8[0x33] = unaff_r16;
  puVar8[0x32] = unaff_r15;
  puVar8[0x31] = unaff_r14;
  uVar7 = EffectTexHeaders;
  if ((gVar25 == GAME_MODE_SPACE) && (DAT_00964590 == 4)) {
    uVar7 = *(undefined4 *)(DAT_00a10920 + 0xc);
    puVar8[0x2d] = (ulonglong)**(uint **)(DAT_00a10920 + 0x1c);
  }
  else {
    uVar27 = GetEffectTex(0x13);
    puVar8[0x2d] = uVar27;
  }
  uVar27 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar8[0x2e] = uVar27;
  uVar27 = FUN_00502f08(0,0,0,0,0,0);
  puVar8[0x2c] = uVar27;
  uVar27 = idol_draw::PackCmd(0,2,0,1,0x80);
  puVar8[0x2f] = uVar27;
  lVar34 = uVar26 - 0x140;
  lVar36 = uVar26 - 0x13c;
  puVar31 = &DAT_00731f20;
  puVar32 = &DAT_00731f24;
  lVar43 = 2;
  lVar28 = lVar1;
  do {
    uVar30 = *puVar32;
    *(undefined4 *)((int)lVar28 + 0x140) = *puVar31;
    uVar3 = puVar31[2];
    *(undefined4 *)((int)lVar28 + 0x144) = uVar30;
    puVar31 = puVar31 + 4;
    uVar30 = puVar32[2];
    lVar28 = lVar28 + 0x10;
    *(undefined4 *)((int)lVar34 + 8) = uVar3;
    puVar32 = puVar32 + 4;
    *(undefined4 *)((int)lVar36 + 8) = uVar30;
    lVar34 = lVar34 + 0x10;
    lVar36 = lVar36 + 0x10;
    lVar43 = lVar43 + -1;
  } while (lVar43 != 0);
  iVar42 = 0;
  if (0 < g_LoadScreenRelated + -1) {
    do {
      iVar40 = 0;
      iVar38 = 0;
      uVar41 = (DAT_009645c0 - iVar42) + 0x1f;
      uVar23 = uVar41 & 0x1f;
      do {
        iVar39 = (uVar41 & 0x1f) * 0x10;
        fVar4 = *(float *)(iVar39 + 0x964630);
        uVar37 = (uVar23 + 1) * 0x10 & 0x1f0;
        fVar6 = *(float *)(&DAT_00964830 + iVar39) - fVar4;
        fVar4 = fVar4 - *(float *)(&DAT_00964830 + iVar39);
        pfVar29 = (float *)(iVar39 + 0x964630 + iVar38);
        *(float *)(puVar8 + 0xe) = fVar6;
        fVar11 = *(float *)(iVar39 + 0x964834) - *(float *)(iVar39 + 0x964634);
        fVar12 = *(float *)(iVar39 + 0x964634) - *(float *)(iVar39 + 0x964834);
        *(float *)((int)puVar8 + 0x74) = fVar11;
        fVar13 = *(float *)(iVar39 + 0x964838) - *(float *)(iVar39 + 0x964638);
        fVar14 = *(float *)(iVar39 + 0x964638) - *(float *)(iVar39 + 0x964838);
        *(float *)(puVar8 + 0xf) = fVar13;
        uVar30 = *(undefined4 *)(iVar39 + 0x96483c);
        *(float *)(puVar8 + 0x10) = fVar4;
        *(undefined4 *)((int)puVar8 + 0x7c) = uVar30;
        *(float *)((int)puVar8 + 0x84) = fVar12;
        *(float *)(puVar8 + 0x11) = fVar14;
        *(undefined4 *)((int)puVar8 + 0x8c) = *(undefined4 *)(iVar39 + 0x96463c);
        fVar5 = *(float *)(uVar37 + 0x964630);
        pfVar33 = (float *)((int)(uVar37 + 0x964630) + iVar38);
        fVar15 = *(float *)(&DAT_00964830 + uVar37) - fVar5;
        fVar5 = fVar5 - *(float *)(&DAT_00964830 + uVar37);
        pfVar35 = (float *)(((uVar23 + 2) * 0x10 & 0x1f0) + 0x964630 + iVar38);
        *(float *)(puVar8 + 0x12) = fVar15;
        fVar16 = *(float *)(uVar37 + 0x964834) - *(float *)(uVar37 + 0x964634);
        fVar17 = *(float *)(uVar37 + 0x964634) - *(float *)(uVar37 + 0x964834);
        *(float *)((int)puVar8 + 0x94) = fVar16;
        fVar18 = *(float *)(uVar37 + 0x964838) - *(float *)(uVar37 + 0x964638);
        fVar19 = *(float *)(uVar37 + 0x964638) - *(float *)(uVar37 + 0x964838);
        *(float *)(puVar8 + 0x13) = fVar18;
        uVar30 = *(undefined4 *)(uVar37 + 0x96483c);
        *(float *)(puVar8 + 0x14) = fVar5;
        *(undefined4 *)((int)puVar8 + 0x9c) = uVar30;
        *(float *)((int)puVar8 + 0xa4) = fVar17;
        *(float *)(puVar8 + 0x15) = fVar19;
        *(undefined4 *)((int)puVar8 + 0xac) = *(undefined4 *)(uVar37 + 0x96463c);
        fVar20 = *pfVar33 - *pfVar29;
        fVar21 = pfVar33[1] - pfVar29[1];
        fVar22 = pfVar33[2] - pfVar29[2];
        fVar2 = *pfVar35 - *pfVar33;
        fVar9 = pfVar35[2] - pfVar33[2];
        fVar10 = pfVar35[1] - pfVar33[1];
        if (iVar42 == 0) {
          fVar2 = fVar20;
          fVar9 = fVar22;
          fVar10 = fVar21;
        }
        lVar43 = uVar26 - 400;
        iVar39 = 0;
        lVar36 = uVar26 - 0x1d0;
        *(float *)(puVar8 + 0x16) = fVar21 * fVar13 - fVar22 * fVar11;
        *(float *)((int)puVar8 + 0xb4) = fVar22 * fVar6 - fVar20 * fVar13;
        *(float *)(puVar8 + 0x17) = fVar20 * fVar11 - fVar21 * fVar6;
        dVar49 = 0.0;
        *(undefined4 *)((int)puVar8 + 0xbc) = 0;
        *(float *)(puVar8 + 0x18) = fVar21 * fVar14 - fVar22 * fVar12;
        *(float *)((int)puVar8 + 0xc4) = fVar22 * fVar4 - fVar20 * fVar14;
        *(float *)(puVar8 + 0x19) = fVar20 * fVar12 - fVar21 * fVar4;
        *(undefined4 *)((int)puVar8 + 0xcc) = 0;
        *(float *)(puVar8 + 0x1a) = fVar10 * fVar18 - fVar9 * fVar16;
        *(float *)((int)puVar8 + 0xd4) = fVar9 * fVar15 - fVar2 * fVar18;
        *(float *)(puVar8 + 0x1b) = fVar2 * fVar16 - fVar10 * fVar15;
        *(undefined4 *)((int)puVar8 + 0xdc) = 0;
        *(undefined4 *)((int)puVar8 + 0xec) = 0;
        *(float *)(puVar8 + 0x1c) = fVar10 * fVar19 - fVar9 * fVar17;
        *(float *)((int)puVar8 + 0xe4) = fVar9 * fVar5 - fVar2 * fVar19;
        *(float *)(puVar8 + 0x1d) = fVar2 * fVar17 - fVar10 * fVar5;
        dVar48 = 0.03125;
        dVar47 = 1.0;
        lVar28 = lVar43;
        lVar34 = lVar1;
        do {
          dVar44 = (double)FastIntToDouble((iVar42 - (iVar39 >> 1)) + 1);
          dVar46 = (double)(float)(dVar44 * dVar48);
          iVar24 = (int)((longlong)g_SpaceshipVariant << 3);
          uVar30 = FastLerpColor
                             (dVar46,*(undefined4 *)((int)&DAT_00731f40 + iVar24),
                              *(undefined4 *)((int)&DAT_00731f44 + iVar24));
          *(undefined4 *)((int)lVar34 + 0x130) = uVar30;
          pfVar29 = (float *)lVar36;
          fVar4 = pfVar29[1];
          fVar5 = *pfVar29;
          fVar6 = pfVar29[2];
          dVar44 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
          if (dVar44 == dVar49) {
            fVar4 = pfVar29[3];
            dVar44 = dVar49;
            dVar46 = dVar49;
            dVar45 = dVar49;
          }
          else {
            fVar2 = (float)((double)(-(float)(dVar46 * dVar46 - dVar47) *
                                    *(float *)(&DAT_00731f58 +
                                              (int)((longlong)g_SpaceshipVariant << 2))) / dVar44);
            dVar46 = (double)(fVar4 * fVar2);
            dVar44 = (double)(fVar5 * fVar2);
            fVar4 = pfVar29[3];
            dVar45 = (double)(fVar6 * fVar2);
          }
          pfVar29 = (float *)(((iVar39 >> 1) + uVar23 & 0x1f) * 0x10 + 0x964630 + iVar38);
          iVar39 = iVar39 + 1;
          lVar36 = lVar36 + 0x10;
          lVar34 = lVar34 + 4;
          pfVar33 = (float *)lVar28;
          *pfVar33 = (float)(dVar44 + (double)*pfVar29);
          pfVar33[1] = (float)(dVar46 + (double)pfVar29[1]);
          fVar5 = pfVar29[2];
          pfVar33[3] = fVar4;
          pfVar33[2] = (float)(dVar45 + (double)fVar5);
          lVar28 = lVar28 + 0x10;
        } while (iVar39 < 4);
        FastDrawQuad(uVar26 - 400,0,0,uVar7,9);
        iVar39 = 0;
        lVar28 = uVar26 - 0x210;
        do {
          dVar44 = (double)FastIntToDouble((iVar42 - (iVar39 >> 1)) + 1);
          pfVar29 = (float *)lVar28;
          fVar4 = pfVar29[1];
          fVar5 = *pfVar29;
          fVar6 = pfVar29[2];
          dVar46 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
          if (dVar46 == dVar49) {
            fVar4 = pfVar29[3];
            dVar44 = dVar49;
            dVar46 = dVar49;
            dVar45 = dVar49;
          }
          else {
            fVar2 = (float)((double)(-(float)((double)(float)(dVar44 * dVar48) *
                                              (double)(float)(dVar44 * dVar48) - dVar47) *
                                    *(float *)(&DAT_00731f58 +
                                              (int)((longlong)g_SpaceshipVariant << 2))) / dVar46);
            dVar46 = (double)(fVar4 * fVar2);
            dVar44 = (double)(fVar5 * fVar2);
            fVar4 = pfVar29[3];
            dVar45 = (double)(fVar6 * fVar2);
          }
          pfVar29 = (float *)(((iVar39 >> 1) + uVar23 & 0x1f) * 0x10 + 0x964630 + iVar38);
          iVar39 = iVar39 + 1;
          lVar28 = lVar28 + 0x10;
          pfVar33 = (float *)lVar43;
          *pfVar33 = (float)(dVar44 + (double)*pfVar29);
          pfVar33[1] = (float)(dVar46 + (double)pfVar29[1]);
          fVar5 = pfVar29[2];
          pfVar33[3] = fVar4;
          pfVar33[2] = (float)(dVar45 + (double)fVar5);
          lVar43 = lVar43 + 0x10;
        } while (iVar39 < 4);
        FastDrawQuad(uVar26 - 400,0,0,uVar7,9);
        iVar40 = iVar40 + 1;
        iVar38 = iVar38 + 0x200;
      } while (iVar40 < 2);
      iVar42 = iVar42 + 1;
    } while (iVar42 < g_LoadScreenRelated + -1);
  }
  return;
}


// 0x015f6d0 (0x5e0 bytes)
void ____Space_TransitionDrawPass(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  uint uVar7;
  RsxCmd *pRVar8;
  RsxCmd *pRVar9;
  ulonglong *puVar10;
  int iVar11;
  RsxCmd RVar12;
  RenderingStep *pRVar13;
  int iVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  float *pfVar19;
  undefined4 *puVar20;
  longlong lVar18;
  longlong lVar21;
  float *pfVar22;
  RsxCmd *pRVar23;
  undefined4 *puVar24;
  longlong lVar25;
  ulonglong unaff_r28;
  RsxCmd *pRVar26;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar18 = uVar15 - 0x170;
  puVar10 = (ulonglong *)lVar18;
  *puVar10 = uVar15;
  puVar10[0x30] = in_LR;
  puVar10[0x2d] = unaff_r31;
  puVar10[0x2c] = unaff_r30;
  puVar10[0x2b] = unaff_r29;
  puVar10[0x2a] = unaff_r28;
  uVar16 = idol_draw::Blend(1,0,0x80,1,0,0,1,1);
  SetGSReg(0x16,uVar16);
  puVar10[0x25] = DAT_00a561c8;
  uVar17 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar10[0x26] = uVar17;
  uVar17 = FUN_00502f08(0,0,0,0,0,0);
  puVar10[0x24] = uVar17;
  uVar17 = idol_draw::PackCmd(0,1,0,1,0x80);
  puVar10[0x27] = uVar17;
  FastMemCopy(uVar15 - 0x70,&DAT_00731c98,0x20);
  fVar6 = 1.0;
  if ((-1 < (int)Level) && ((int)Level < 0x13)) {
    fVar6 = *(float *)(&DAT_00731fd0 + Level * 4);
  }
  lVar27 = 4;
  lVar21 = uVar15 - 0xc0;
  pfVar19 = (float *)&DAT_00731f80;
  lVar25 = lVar18;
  do {
    fVar1 = *pfVar19;
    pfVar22 = (float *)lVar21;
    *pfVar22 = fVar1 * fVar6;
    fVar2 = pfVar19[1];
    *(undefined4 *)((int)lVar25 + 0xf0) = 0x80808080;
    lVar25 = lVar25 + 4;
    pfVar22[1] = fVar2 * fVar6;
    fVar3 = pfVar19[2];
    pfVar22[2] = fVar3 * fVar6;
    fVar4 = pfVar19[3];
    pfVar22[3] = fVar4;
    pfVar19 = pfVar19 + 4;
    *pfVar22 = fVar1 * fVar6 + DAT_00a561e0;
    pfVar22[1] = fVar2 * fVar6 + DAT_00a561e4;
    fVar1 = DAT_00a561e8;
    pfVar22[3] = fVar4;
    pfVar22[2] = fVar3 * fVar6 + fVar1;
    iVar14 = g_viewMtxPtr;
    lVar21 = lVar21 + 0x10;
    lVar27 = lVar27 + -1;
  } while (lVar27 != 0);
  idol_draw::BindVertexProgram(g_viewMtxPtr,ForwardPass,5);
  idol_draw::BindFragmentProgram(iVar14,ForwardPass,2);
  puVar20 = (undefined4 *)idol::AllocateMemAlign(FrameHeap,0x60,0x10);
  lVar27 = 4;
  lVar25 = lVar18;
  lVar21 = lVar18;
  puVar24 = puVar20;
  do {
    iVar11 = (int)lVar21;
    uVar7 = *(uint *)((int)lVar18 + 0xf0);
    *puVar24 = *(undefined4 *)(iVar11 + 0xb0);
    lVar18 = lVar18 + 4;
    puVar24[1] = *(undefined4 *)(iVar11 + 0xb4);
    puVar24[2] = *(undefined4 *)(iVar11 + 0xb8);
    lVar21 = lVar21 + 0x10;
    puVar24[3] = *(undefined4 *)((int)lVar25 + 0x100);
    uVar5 = *(undefined4 *)((int)lVar25 + 0x104);
    puVar24[5] = uVar7 >> 0x18 | uVar7 >> 8 & 0xff00 | uVar7 << 0x18 | (uVar7 & 0xff00) << 8;
    lVar25 = lVar25 + 8;
    puVar24[4] = uVar5;
    puVar24 = puVar24 + 6;
    lVar27 = lVar27 + -1;
  } while (lVar27 != 0);
  if (puVar10[0x27] != 0) {
    idol_draw::DrawDepth(ForwardPass,puVar10[0x27]);
  }
  FUN_004d6704(puVar10[0x24],uVar15 - 0x30,uVar15 - 0x2c);
  FUN_004d676c(ForwardPass,0,
               (ulonglong)*(uint *)(DAT_00a10920 + 0xc) + puVar10[0x25] * 0x24 & 0xffffffff,
               *(undefined4 *)(puVar10 + 0x28),*(undefined4 *)((int)puVar10 + 0x144));
  idol_draw::ResetPassState(ForwardPass);
  pRVar8 = ForwardPass->command;
  ForwardPass->command = pRVar8 + 2;
  pRVar26 = ForwardPass->command;
  ForwardPass->command = pRVar26 + 2;
  pRVar13 = ForwardPass;
  pRVar23 = ForwardPass->command;
  *pRVar8 = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar13->command = pRVar23 + 2;
  pRVar13 = ForwardPass;
  pRVar8[1] = 0x1832;
  pRVar8 = pRVar13->command;
  *pRVar26 = 0x41744;
  pRVar26[1] = 0x1822;
  pRVar23[1] = 0x1844;
  pRVar13->command = pRVar8 + 2;
  pRVar13 = ForwardPass;
  *pRVar23 = 0x4174c;
  RVar12 = (int)puVar20 - *(int *)(iVar14 + 0x4a8);
  pRVar26 = pRVar13->command;
  pRVar13->command = pRVar26 + 2;
  pRVar13 = ForwardPass;
  *pRVar8 = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
  pRVar8[1] = RVar12 | 0x80000000;
  pRVar8 = pRVar13->command;
  *pRVar26 = 0x41684;
  pRVar26[1] = RVar12 + 0xc | 0x80000000;
  pRVar13->command = pRVar8 + 2;
  *pRVar8 = 0x4168c;
  pRVar8[1] = RVar12 + 0x14 | 0x80000000;
  pRVar13 = ForwardPass;
  *(undefined4 *)((int)puVar10 + 0x7c) = 0;
  *(undefined4 *)(puVar10 + 0xf) = 0;
  *(undefined4 *)((int)puVar10 + 0x74) = 0;
  *(undefined4 *)(puVar10 + 0xe) = 0x3f800000;
  *(undefined4 *)((int)puVar10 + 0x8c) = 0;
  *(undefined4 *)(puVar10 + 0x11) = 0;
  *(undefined4 *)((int)puVar10 + 0x84) = 0x3f800000;
  *(undefined4 *)(puVar10 + 0x10) = 0;
  pRVar8 = pRVar13->command;
  *(undefined4 *)((int)puVar10 + 0x9c) = 0;
  *(undefined4 *)(puVar10 + 0x13) = 0x3f800000;
  *(undefined4 *)((int)puVar10 + 0x94) = 0;
  *(undefined4 *)(puVar10 + 0x12) = 0;
  pRVar26 = pRVar8 + 2;
  *(undefined4 *)((int)puVar10 + 0xac) = 0x3f800000;
  *(undefined4 *)(puVar10 + 0x15) = 0;
  *(undefined4 *)((int)puVar10 + 0xa4) = 0;
  *(undefined4 *)(puVar10 + 0x14) = 0;
  lVar18 = uVar15 - 0x100;
  *pRVar8 = 0x441efc;
  pRVar8[1] = 4;
  lVar25 = 8;
  pRVar13->command = pRVar26;
  do {
    pRVar8 = pRVar13->command;
    pRVar23 = (RsxCmd *)lVar18;
    RVar12 = *pRVar23;
    pRVar13->command = pRVar8 + 1;
    *pRVar26 = RVar12;
    lVar18 = lVar18 + 8;
    pRVar8[1] = pRVar23[1];
    pRVar26 = pRVar13->command + 1;
    pRVar13->command = pRVar26;
    lVar25 = lVar25 + -1;
  } while (lVar25 != 0);
  pRVar8 = ForwardPass->command;
  ForwardPass->command = pRVar8 + 6;
  pRVar13 = ForwardPass;
  pRVar26 = ForwardPass->command;
  ForwardPass->command = pRVar26 + 1;
  *pRVar8 = 0x400c1714;
  pRVar8[1] = 0;
  pRVar8[2] = 0;
  pRVar8[3] = 0;
  pRVar8[5] = 6;
  pRVar8[4] = NV4097_SET_BEGIN_END_x1;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 1;
  pRVar23 = ForwardPass->command;
  ForwardPass->command = pRVar23 + 2;
  pRVar13 = ForwardPass;
  pRVar9 = ForwardPass->command;
  *pRVar26 = 0x40041814;
  *pRVar8 = 0x3000000;
  pRVar13->command = pRVar9 + 2;
  pRVar13 = ForwardPass;
  *pRVar23 = NV4097_SET_BEGIN_END_x1;
  pRVar23[1] = 0;
  pRVar9[1] = 2;
  pRVar8 = pRVar13->command;
  *pRVar9 = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar13->command = pRVar8 + 2;
  pRVar13 = ForwardPass;
  *pRVar8 = 0x41744;
  pRVar8[1] = 2;
  pRVar8 = pRVar13->command;
  *pRVar8 = 0x4174c;
  pRVar8[1] = 2;
  pRVar13->command = pRVar8 + 2;
  uVar16 = FUN_00502f98(1,5,0x60,3,0,0,1,2);
  SetGSReg(0x16,uVar16);
  return;
}


// 0x015fcb0 (0x130 bytes)
void Space_DrawLoadingBanner(void)

{
  undefined8 uVar1;
  
  uVar1 = idol_draw::Blend(1,0,0x80,1,0,0,1,1);
  SetGSReg(0x16,uVar1);
  uVar1 = idol_draw::PackCmd(0,1,0,1,0x80);
  SetGSReg(3,uVar1);
  Sprite_DrawShape(0x20,0x168,0x100,0x20,0,0,0x100,0x20);
  uVar1 = FUN_00502f98(1,5,0x60,3,0,0,1,2);
  SetGSReg(0x16,uVar1);
  return;
}


// 0x015fe00 (0x9a4 bytes)
// strings: 0015fed8: 'H:`y`' (raw)

void ChooseLoadingScreen(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  MobyInstance *pMVar9;
  MobyClass *pMVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  short sVar18;
  int *piVar15;
  float *pfVar16;
  uint *puVar17;
  int *piVar19;
  int iVar20;
  float *pfVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  int iVar25;
  ulonglong uVar24;
  int iVar26;
  undefined8 in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<48> auStack_100;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  GPiece<48> auStack_c0;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  
  ResetGameCounters();
  puVar22 = &DAT_0095cd50;
  g_cutsceneCameraFrame = g_cutsceneCameraFrame + 1;
  g_SpaceSceneFrame = g_SpaceSceneFrame + 1;
  dVar29 = 0.25;
  SceneScreenFade = SceneScreenFade - 0.25;
  if (SceneScreenFade < 0.0) {
    SceneScreenFade = 0.0;
  }
  if (((g_SpaceSceneFrame == 1) && (Level != Veldin)) &&
     ((Level != Novalis || (g_SeenPlanets.Kerwan != '\0')))) {
    STUB_00505f50();
    FUN_005062f4(DAT_0071f404,g_currentLoadingScreen,0x400,0,0,0,0,g_SoundChannels);
    STUB_00505f4c();
    STUB_00505d20();
  }
  if (g_SpaceSceneFrame < g_SpaceSceneNumFrames.piece<0,2>()) {
    if (0x5f < (int)g_cutsceneCameraFrame) {
      g_SpaceSceneChunk = g_SpaceSceneChunk + 1;
      ParseSpaceSceneChunk(g_SpaceSceneChunk);
    }
  }
  else {
    iVar26 = 0;
    iVar25 = 0;
    sVar18 = g_SpaceSceneMobyCnt.piece<0,2>();
    puVar23 = puVar22;
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        pMVar9 = (MobyInstance *)puVar23[0x5e];
        if (pMVar9 != (MobyInstance *)0x0) {
          pMVar9->pClass->seq_cnt = pMVar9->pClass->seq_cnt + 0xff;
          *(undefined4 *)(&pMVar9->pClass->type + (uint)pMVar9->pClass->seq_cnt * 4) = 0;
          DeleteMoby(pMVar9);
          sVar18 = g_SpaceSceneMobyCnt.piece<0,2>();
        }
        iVar26 = iVar26 + 1;
        puVar23 = puVar23 + 1;
      } while (iVar26 < sVar18);
    }
    if ((Level != Veldin) &&
       (((Level != Novalis || (g_SeenPlanets.Kerwan != '\0')) && (g_LoadingStage < 3)))) {
      g_loadingCount = 0;
    }
    if (1 < g_loadingCount) {
      if (DAT_00964562 != 0) {
        DAT_00964562 = 0;
      }
      g_CutscenePlaying = 1;
      return;
    }
    uVar13 = 4;
    if (g_loadingCount == 0) {
      iVar14 = rand();
      iVar26 = (iVar14 >> 0x10) / 3 + (iVar14 >> 0x1f);
      uVar13 = g_currentLoadingScreen + (iVar14 >> 0x10) + (iVar26 - (iVar26 >> 0x1f)) * -3 + 1 & 3;
    }
    g_loadingCount = g_loadingCount + 1;
    DAT_009645c0 = 0;
    g_LoadScreenRelated = 0;
    DAT_00a561e0 = DAT_00731f70;
    DAT_00a561e4 = DAT_00731f74;
    DAT_00a561e8 = DAT_00731f78;
    DAT_00a561ec = DAT_00731f7c;
    g_currentLoadingScreen = uVar13;
    FastMemSet(&DAT_0095cd50,0,0x1c0);
    iVar26 = DAT_00a10920;
    g_SceneLoadBuffer = g_NpcBuffer + 0x200000;
    DAT_0095cda8 = g_NpcBuffer;
    piVar19 = &g_SceneChunkPtrs;
    piVar15 = (int *)(DAT_00a10920 + *(int *)(DAT_00a10920 + g_currentLoadingScreen * 4 + 0x28));
    do {
      if (piVar15[1] == 0) break;
      iVar14 = *piVar15;
      iVar25 = iVar25 + 1;
      piVar15 = piVar15 + 2;
      *piVar19 = iVar26 + iVar14;
      piVar19 = piVar19 + 1;
    } while (iVar25 < 0x46);
    ParseSpaceSceneChunk(0);
  }
  Space_SetCutsceneCamera();
  uVar13 = (int)*(uint *)(&DAT_00732084 + g_currentLoadingScreen * 4) >> 0x1f;
  if ((int)(((uint)((int)g_ViewContext.xratio >> 0x1f) >> 1 ^ (uint)g_ViewContext.xratio) -
           ((int)g_ViewContext.xratio >> 0x1f)) <
      (int)((uVar13 >> 1 ^ *(uint *)(&DAT_00732084 + g_currentLoadingScreen * 4)) - uVar13)) {
    g_ViewContext.xratio = *(float *)(&DAT_00732084 + g_currentLoadingScreen * 4);
  }
  UpdateViewContext();
  dVar30 = 1.0;
  auVar32 = loadVectorLeftIndexed(8,0x15fde0);
  auVar31 = loadVectorLeftIndexed(0x34,0x95cd50);
  auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  if (g_currentLoadingScreen == 4) {
    auVar32 = ZEXT416(0xfffffff0);
    auVar33 = ZEXT416(0xffffffff);
    auVar36 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    auVar33 = ZEXT416(0xffffffff);
    auVar39 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    auVar33 = loadVectorLeftIndexed(0x40,0x95cd50);
    auVar34 = loadVectorLeftIndexed(0xc,0x15fde0);
    auVar33 = vectorShiftRightAlgebraicWord
                        (auVar33,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60);
    auVar32 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar35 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
    auVar36 = vectorShiftLeftIntegerWord(auVar36,auVar36);
    auVar34 = vectorConvertFromSignedFixedPointWord(auVar33,0);
    auVar32 = ZEXT416(0xffffffff);
    auVar37 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
    auVar33 = vectorSubtractUnsignedWordModulo(auVar33,auVar31);
    auVar32 = ZEXT416(0xffffffff);
    auVar40 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
    auVar38 = vectorShiftLeftIntegerWord(auVar37,auVar37);
    auVar32 = vectorConvertFromSignedFixedPointWord(auVar33,0);
    auVar33 = vectorReciprocalEstimateFloatingPoint(auVar34);
    auVar37 = vectorNegativeMultiplySubtractFloatingPoint(auVar33,auVar34,auVar35);
    auVar33 = vectorMultiplyAddFloatingPoint(auVar33,auVar37,auVar36);
    auVar37 = vectorShiftLeftIntegerWord(auVar39,auVar39);
    auVar39 = vectorShiftLeftIntegerWord(auVar40,auVar40);
    auVar41 = loadVectorLeftIndexed(0x1fc0,0x730000);
    auVar36 = vectorNegativeMultiplySubtractFloatingPoint(auVar33,auVar34,auVar35);
    auVar36 = vectorMultiplyAddFloatingPoint(auVar33,auVar36,auVar38);
    auVar38 = loadVectorLeftIndexed(4,0x731fc0);
    auVar40 = loadVectorLeftIndexed(4,0xa561e0);
    auVar42 = loadVectorLeftIndexed(8,0x731fc0);
    auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar36,auVar34,auVar35);
    auVar34 = loadVectorLeftIndexed(0x61e0,0xa50000);
    auVar35 = loadVectorLeftIndexed(8,0xa561e0);
    auVar33 = vectorMultiplyAddFloatingPoint(auVar36,auVar33,auVar37);
    auVar32 = vectorMultiplyAddFloatingPoint(auVar33,auVar32,auVar39);
    auVar33 = vectorMultiplyAddFloatingPoint(auVar41,auVar32,auVar34);
    auVar34 = vectorMultiplyAddFloatingPoint(auVar38,auVar32,auVar40);
    auVar35 = vectorMultiplyAddFloatingPoint(auVar42,auVar32,auVar35);
    auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
    DAT_00a561e0 = storeVectorElementWordIndexed
                             (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x61e0,
                              0xa50000);
    DAT_00a561e4 = storeVectorElementWordIndexed
                             (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,4,
                              0xa561e0);
    DAT_00a561e8 = storeVectorElementWordIndexed
                             (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,8,
                              0xa561e0);
  }
  auVar33 = ZEXT416(0xffffffff);
  auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
  auVar35 = vectorShiftLeftIntegerWord(auVar33,auVar33);
  auVar33 = loadVectorLeftIndexed(0x10,0x15fde0);
  auVar34 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar33 = ZEXT416(0xffffffff);
  auVar37 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
  auVar34 = vectorMultiplyAddFloatingPoint
                      (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,auVar35
                      );
  auVar33 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar32 = ZEXT416(0xffffffff);
  auVar35 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  auVar37 = vectorShiftLeftIntegerWord(auVar37,auVar37);
  auVar36 = loadVectorLeftIndexed(0x14,0x15fde0);
  auVar32 = ZEXT416(0xffffffff);
  auVar38 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  auVar35 = vectorShiftLeftIntegerWord(auVar35,auVar35);
  auVar32 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar24 = (ulonglong)(g_currentLoadingScreen * 0x10 + 0x732020);
  auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
  auVar31 = vectorSubtractUnsignedWordModulo(auVar31,auVar34);
  auVar34 = vectorShiftLeftIntegerWord(auVar38,auVar38);
  auVar36 = loadVectorLeftIndexed(in_LR,uVar24);
  auVar31 = vectorConvertFromSignedFixedPointWord(auVar31,0);
  auVar31 = vectorMultiplyAddFloatingPoint
                      (auVar31,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,auVar35
                      );
  auVar32 = ZEXT416(0xffffffff);
  auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  auVar35 = vectorShiftLeftIntegerWord(auVar32,auVar32);
  auVar31 = vectorMultiplyAddFloatingPoint
                      (auVar31,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,auVar37
                      );
  auVar32 = ZEXT416(0xffffffff);
  auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
  auVar32 = vectorMultiplyAddFloatingPoint(auVar36,auVar31,auVar34);
  auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
  DAT_00a56150 = storeVectorElementWordIndexed
                           (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x6150,
                            0xa50000);
  auVar32 = loadVectorLeftIndexed(4,uVar24);
  auVar32 = vectorMultiplyAddFloatingPoint(auVar32,auVar31,auVar35);
  iVar25 = 0;
  DAT_00a56164 = *(undefined4 *)(&DAT_00732070 + g_currentLoadingScreen * 4);
  auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
  DAT_00a56154 = storeVectorElementWordIndexed
                           (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,4,0xa56150
                           );
  auVar32 = loadVectorLeftIndexed(8,uVar24);
  auVar32 = vectorMultiplyAddFloatingPoint(auVar32,auVar31,auVar33);
  auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
  DAT_00a56158 = storeVectorElementWordIndexed
                           (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,8,0xa56150
                           );
  DAT_00a5615c = *(undefined4 *)(g_currentLoadingScreen * 0x10 + 0x73202c);
  if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
    do {
      iVar26 = 0;
      pMVar9 = (MobyInstance *)puVar22[0x5e];
      uVar24 = ZEXT48(pMVar9);
      do {
        pMVar10 = pMVar9->pClass;
        iVar14 = (int)g_cutsceneCameraFrame >> 1;
        uVar13 = *(uint *)((&pMVar10->mode_bits)[pMVar10->seq_cnt] + iVar14 * 4 + 0x1c);
        uVar11 = *(uint *)((&pMVar10->mode_bits)[pMVar10->seq_cnt] +
                           (int)(((longlong)iVar14 + 1U & 0xffffffff) << 2) + 0x1c);
        dVar28 = (double)FastIntToDouble(g_cutsceneCameraFrame & 1);
        pfVar21 = (float *)((int)pMVar9->pVar + (int)((longlong)iVar14 + 1U) * 0x10);
        pfVar16 = (float *)((int)pMVar9->pVar + iVar14 * 0x10);
        fVar1 = (float)(dVar28 * 0.5 + (double)(float)((double)(longlong)iVar26 * dVar29));
        dVar28 = (double)fVar1;
        fVar2 = (float)(dVar30 - dVar28);
        pMVar9->animationBlend = fVar1;
        fVar1 = *pfVar21;
        fVar3 = pfVar21[1];
        fVar4 = pfVar21[2];
        fVar5 = *pfVar16;
        fVar6 = pfVar16[1];
        fVar7 = pfVar16[2];
        fVar8 = pfVar16[3];
        pMVar9->updateId = '\x02';
        (pMVar9->pos).w = fVar8;
        pMVar9->animationId = '\x02';
        pMVar9->previousAnimationFrame = '\0';
        pMVar9->animationFrame = '\0';
        (pMVar9->pos).x = fVar5 * fVar2 + (float)((double)fVar1 * dVar28);
        (pMVar9->pos).y = fVar6 * fVar2 + (float)((double)fVar3 * dVar28);
        (pMVar9->pos).z = fVar7 * fVar2 + (float)((double)fVar4 * dVar28);
        UpdateMobyFrameData(pMVar9);
        FastMemCopy
                  (ZEXT48(pMVar9->pPreviousAnimationData) + 0x10,(ulonglong)uVar13 + 0x10,0x20);
        FastMemCopy
                  (ZEXT48(pMVar9->pCurrentAnimationData) + 0x10,(ulonglong)uVar11 + 0x10,0x20);
        pMVar9->drawDistance = 0x1ff;
        pMVar9->field45_0x72 = -1;
        pMVar9->field44_0x71 = -1;
        UpdateMobyTransform(pMVar9);
        pMVar9->updateId = pMVar9->pClass->seq_cnt + 0xff;
        pMVar9->animationId = pMVar9->pClass->seq_cnt + 0xff;
        GetBoneTransformations(uVar24,1,auStack_100);
        GetBoneTransformations(uVar24,2,auStack_c0);
        uVar13 = DAT_009645c0 + 1;
        DAT_009645c0 = uVar13 & 0x1f;
        if (g_LoadScreenRelated < 0x20) {
          g_LoadScreenRelated = g_LoadScreenRelated + 1;
        }
        iVar14 = (uVar13 & 0x1f) * 0x10;
        iVar20 = (uVar13 & 0x1f) * 0x10;
        *(undefined4 *)(iVar14 + 0x964630) = local_d0;
        *(undefined4 *)(iVar14 + 0x964634) = local_cc;
        *(undefined4 *)(iVar14 + 0x964638) = local_c8;
        *(undefined4 *)(iVar14 + 0x96463c) = local_c4;
        uVar13 = g_currentLoadingScreen;
        *(undefined4 *)(&DAT_00964830 + iVar20) = local_90;
        *(undefined4 *)(iVar20 + 0x964834) = local_8c;
        *(undefined4 *)(iVar20 + 0x964838) = local_88;
        *(undefined4 *)(iVar20 + 0x96483c) = local_84;
        if (uVar13 == 4) {
          if ((Level == Veldin) || ((Level == Novalis && (g_SeenPlanets.Kerwan == '\0')))) {
            g_LoadScreenRelated = 0;
            pMVar9->modeBits = pMVar9->modeBits | DISABLED;
          }
          auVar32 = ZEXT416(0xfffffff0);
          auVar31 = loadVectorLeftIndexed(0x34,0x95cd50);
          auVar33 = loadVectorLeftIndexed(0x40,0x95cd50);
          auVar32 = vectorShiftRightAlgebraicWord
                              (auVar33,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60
                              );
          if (g_SpaceSceneNumFrames.piece<0,2>() + -0x38 < g_SpaceSceneFrame) {
            auVar31 = vectorSubtractUnsignedWordModulo(auVar32,auVar31);
            auVar32 = ZEXT416(0xffffffff);
            auVar33 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
            auVar32 = ZEXT416(0xffffffff);
            auVar34 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
            auVar31 = vectorConvertFromSignedFixedPointWord(auVar31,0);
            auVar32 = loadVectorLeftIndexed(0x1c,0x15fde0);
            auVar33 = vectorShiftLeftIntegerWord(auVar33,auVar33);
            auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar34 = vectorShiftLeftIntegerWord(auVar34,auVar34);
            auVar35 = loadVectorLeftIndexed(0x24,ZEXT48(pMVar9->pClass));
            auVar32 = vectorMultiplyAddFloatingPoint
                                (auVar31,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 |
                                         auVar32 << 0x60,auVar33);
            iVar14 = 0;
            iVar20 = g_SpaceSceneNumFrames.piece<0,2>() - g_SpaceSceneFrame;
            puVar17 = &DAT_00731f40;
            auVar32 = vectorMultiplyAddFloatingPoint(auVar35,auVar32,auVar34);
            auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar12 = storeVectorElementWordIndexed
                               (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x2c,
                                uVar24);
            *(undefined4 *)((uint)&pMVar9->scale & 0xfffffffc) = uVar12;
            do {
              iVar14 = iVar14 + 1;
              *puVar17 = *puVar17 & 0xffffff | iVar20 * 0x1000000;
              puVar17 = puVar17 + 2;
            } while (iVar14 < 3);
          }
          else {
            puVar17 = &DAT_00731f40;
            lVar27 = 3;
            do {
              *puVar17 = *puVar17 & 0xffffff | 0x38000000;
              puVar17 = puVar17 + 2;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
          }
        }
        iVar26 = iVar26 + 1;
      } while (iVar26 < 2);
      iVar25 = iVar25 + 1;
      puVar22 = puVar22 + 1;
    } while (iVar25 < g_SpaceSceneMobyCnt.piece<0,2>());
  }
  UpdateGameCounters();
  return;
}


// 0x01607c0 (0x98c bytes)
// inlined: FastRSqrt @0x160c1c, FastRSqrt @0x160d20
void Space_DrawShipEffects(int param_1)

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
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  short sVar17;
  undefined4 uVar18;
  int iVar19;
  undefined4 uVar20;
  ulonglong *puVar21;
  bool bVar22;
  float fVar23;
  int iVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  float *pfVar28;
  undefined4 *puVar29;
  longlong lVar27;
  float *pfVar30;
  undefined4 *puVar31;
  short *psVar32;
  float *pfVar34;
  undefined4 *puVar35;
  longlong lVar33;
  float *pfVar36;
  undefined4 *puVar37;
  float *pfVar38;
  int iVar39;
  ulonglong unaff_r24;
  int iVar40;
  int iVar41;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  int iVar42;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  short *psVar43;
  ulonglong unaff_r29;
  float *pfVar44;
  ulonglong unaff_r30;
  float *pfVar45;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  ulonglong in_f14;
  ulonglong in_f15;
  ulonglong in_f16;
  ulonglong in_f17;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar54;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar55;
  GPiece<16> auVar56;
  GPiece<16> auVar57;
  GPiece<16> auVar58;
  
  uVar25 = ZEXT48(&stack0x00000000);
  puVar21 = (ulonglong *)(uVar25 - 0x270);
  *puVar21 = uVar25;
  puVar21[0x50] = in_LR;
  puVar21[0x3c] = in_f14;
  puVar21[0x3d] = in_f15;
  puVar21[0x3e] = in_f16;
  puVar21[0x3f] = in_f17;
  puVar21[0x40] = in_f18;
  puVar21[0x41] = in_f19;
  puVar21[0x42] = in_f20;
  puVar21[0x43] = in_f21;
  puVar21[0x44] = in_f22;
  puVar21[0x45] = in_f23;
  puVar21[0x46] = in_f24;
  puVar21[0x47] = in_f25;
  puVar21[0x48] = in_f26;
  puVar21[0x49] = in_f27;
  puVar21[0x4a] = in_f28;
  puVar21[0x4b] = in_f29;
  puVar21[0x4c] = in_f30;
  puVar21[0x4d] = in_f31;
  sVar17 = *(short *)(param_1 + 0xa6);
  puVar21[0x34] = unaff_r24;
  iVar40 = sVar17 + -0x212;
  puVar21[0x3a] = unaff_r30;
  iVar41 = iVar40 * 4;
  puVar21[0x37] = unaff_r27;
  puVar21[0x39] = unaff_r29;
  puVar21[0x36] = unaff_r26;
  puVar21[0x38] = unaff_r28;
  pfVar45 = (float *)(&PTR_DAT_00734a70)[iVar40];
  iVar19 = *(int *)(&DAT_00734a50 + iVar41);
  puVar21[0x3b] = unaff_r31;
  pfVar44 = (float *)(&PTR_DAT_00734a60)[iVar40];
  iVar42 = *(int *)(&DAT_00734a40 + iVar41);
  puVar21[0x35] = unaff_r25;
  uVar18 = EffectTexHeaders;
  iVar39 = DAT_00a10920;
  psVar43 = (short *)(&PTR_DAT_00734a80)[iVar40];
  if ((g_gameMode == GAME_MODE_SPACE) && (DAT_00964590 == 4)) {
    puVar21[0x25] = (ulonglong)*(uint *)(*(int *)(DAT_00a10920 + 0x1c) + 4);
    uVar18 = *(undefined4 *)(iVar39 + 0xc);
  }
  else {
    uVar26 = GetEffectTex(0x15);
    puVar21[0x25] = uVar26;
  }
  uVar26 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar21[0x26] = uVar26;
  uVar26 = FUN_00502f08(0,0,0,0,0,0);
  puVar21[0x24] = uVar26;
  uVar26 = idol_draw::PackCmd(0,1,0,1,0x80);
  puVar21[0x27] = uVar26;
  uVar20 = *(undefined4 *)(&DAT_00734a30 + iVar41);
  *(undefined4 *)((int)puVar21 + 0xfc) = uVar20;
  *(undefined4 *)(puVar21 + 0x1f) = uVar20;
  *(undefined4 *)((int)puVar21 + 0xf4) = uVar20;
  *(undefined4 *)(puVar21 + 0x1e) = uVar20;
  GetBoneTransformations(param_1,0,uVar25 - 0x200);
  bVar22 = false;
  iVar41 = 0;
  if ((g_gameMode != GAME_MODE_NORMAL) ||
     ((ABS(GameCamera.posX - *(float *)(param_1 + 0x10)) < 16.0 &&
      (ABS(GameCamera.posY - *(float *)(param_1 + 0x14)) < 16.0)))) {
    bVar22 = true;
  }
  if ((((g_gameMode != GAME_MODE_SPACE) || (DAT_00964590 != 4)) && (bVar22)) || (DAT_00731c90 == 1))
  {
    DAT_00731c94 = 1;
    FastDecTimerS32(&DAT_00a561c4);
    dVar47 = (double)FastIntToDouble(DAT_00a561c4);
    puVar21[0x31] = (longlong)(int)(animationSpeed * 60.5);
    dVar48 = (double)FastIntToDouble(*(undefined4 *)((int)puVar21 + 0x18c));
    iVar39 = 0;
    *(float *)(puVar21 + 0x28) = (float)(dVar47 / dVar48);
    if (0 < iVar42) {
      dVar54 = 0.0;
      pfVar30 = (float *)&DAT_00a56850;
      pfVar38 = (float *)&DAT_00a561f0;
      fVar5 = *(float *)(puVar21 + 0xe);
      pfVar28 = (float *)&DAT_00a56b80;
      fVar6 = *(float *)(puVar21 + 0x10);
      pfVar36 = (float *)&DAT_00a56854;
      fVar7 = *(float *)(puVar21 + 0x12);
      pfVar34 = (float *)&DAT_00a56b84;
      fVar8 = *(float *)(puVar21 + 0x14);
      puVar21[0x30] = 0x3fb99999a0000000;
      fVar9 = *(float *)((int)puVar21 + 0x74);
      fVar10 = *(float *)((int)puVar21 + 0x84);
      fVar11 = *(float *)((int)puVar21 + 0x94);
      fVar12 = *(float *)((int)puVar21 + 0xa4);
      fVar13 = *(float *)(puVar21 + 0xf);
      fVar14 = *(float *)(puVar21 + 0x11);
      fVar15 = *(float *)(puVar21 + 0x13);
      fVar16 = *(float *)(puVar21 + 0x15);
      dVar49 = (double)GameCamera.posX;
      puVar21[0x2f] = (ulonglong)(double)*(float *)((int)puVar21 + 0x7c);
      dVar47 = (double)GameCamera.posY;
      puVar21[0x2e] = (ulonglong)(double)*(float *)((int)puVar21 + 0x8c);
      dVar48 = (double)GameCamera.posZ;
      puVar21[0x2d] = (ulonglong)(double)*(float *)((int)puVar21 + 0x9c);
      iVar40 = DAT_00731c90;
      puVar21[0x2c] = (ulonglong)(double)*(float *)((int)puVar21 + 0xac);
      puVar21[0x2b] = (ulonglong)dVar49;
      iVar24 = DAT_00a561c4;
      puVar21[0x2a] = (ulonglong)dVar47;
      puVar21[0x29] = (ulonglong)dVar48;
      do {
        dVar48 = (double)pfVar45[1];
        dVar49 = (double)*pfVar45;
        dVar50 = (double)pfVar45[2];
        dVar53 = (double)pfVar45[3];
        dVar51 = (double)puVar21[0x2e];
        dVar52 = (double)puVar21[0x2f];
        dVar47 = (double)puVar21[0x2d];
        dVar55 = (double)puVar21[0x2c];
        fVar1 = (float)((double)fVar8 * dVar53 +
                       (double)(float)((double)fVar7 * dVar50 +
                                      (double)(float)((double)fVar5 * dVar49 +
                                                     (double)(float)(dVar48 * (double)fVar6))));
        fVar2 = (float)((double)fVar12 * dVar53 +
                       (double)(float)((double)fVar11 * dVar50 +
                                      (double)(float)((double)fVar9 * dVar49 +
                                                     (double)(float)(dVar48 * (double)fVar10))));
        fVar3 = (float)((double)fVar16 * dVar53 +
                       (double)(float)((double)fVar15 * dVar50 +
                                      (double)(float)((double)fVar13 * dVar49 +
                                                     (double)(float)(dVar48 * (double)fVar14))));
        *pfVar38 = fVar1;
        pfVar38[1] = fVar2;
        fVar2 = (float)((double)fVar2 - (double)puVar21[0x2a]);
        fVar1 = (float)((double)fVar1 - (double)puVar21[0x2b]);
        fVar4 = (float)((double)fVar3 - (double)puVar21[0x29]);
        pfVar38[2] = fVar3;
        pfVar38[3] = (float)(dVar55 * dVar53 +
                            (double)(float)(dVar47 * dVar50 +
                                           (double)(float)(dVar52 * dVar49 +
                                                          (double)(float)(dVar48 * dVar51))));
        dVar52 = (double)*pfVar44;
        dVar53 = (double)pfVar44[1];
        dVar50 = (double)pfVar44[2];
        dVar51 = (double)pfVar44[3];
        fVar3 = fVar4 * fVar4 + fVar1 * fVar1 + fVar2 * fVar2;
        dVar47 = dVar54;
        dVar48 = dVar54;
        dVar49 = dVar54;
        if (SQRT(fVar3) != 0.0) {
          fVar23 = 1.0 / SQRT(fVar3);
          fVar23 = -(fVar3 * fVar23 * fVar23 - 1.0) * fVar23 * 0.5 + fVar23;
          fVar23 = -(fVar3 * fVar23 * fVar23 - 1.0) * fVar23 * 0.5 + fVar23;
          fVar23 = -(fVar3 * fVar23 * fVar23 - 1.0) * fVar23 * 0.5 + fVar23;
          dVar49 = (double)(fVar1 * fVar23);
          dVar48 = (double)(fVar2 * fVar23);
          dVar47 = (double)(fVar4 * fVar23);
        }
        fVar2 = (float)(dVar51 * (double)fVar12 +
                       (double)(float)(dVar50 * (double)fVar11 +
                                      (double)(float)(dVar52 * (double)fVar9 +
                                                     (double)(float)(dVar53 * (double)fVar10))));
        fVar3 = (float)(dVar51 * (double)fVar8 +
                       (double)(float)(dVar50 * (double)fVar7 +
                                      (double)(float)(dVar52 * (double)fVar5 +
                                                     (double)(float)(dVar53 * (double)fVar6))));
        fVar4 = (float)(dVar51 * (double)fVar16 +
                       (double)(float)(dVar50 * (double)fVar15 +
                                      (double)(float)(dVar52 * (double)fVar13 +
                                                     (double)(float)(dVar53 * (double)fVar14))));
        dVar51 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
        fVar1 = (float)((double)puVar21[0x30] / dVar51);
        dVar50 = dVar54;
        if (0.0 - dVar51 < 0.0) {
          dVar50 = (double)(fVar2 * fVar1);
        }
        dVar52 = dVar54;
        if (0.0 - dVar51 < 0.0) {
          dVar52 = (double)(fVar3 * fVar1);
        }
        dVar53 = dVar54;
        if (0.0 - dVar51 < 0.0) {
          dVar53 = (double)(fVar4 * fVar1);
        }
        if (dVar51 - 0.0 < 0.0) {
          dVar50 = (double)(fVar2 * fVar1);
        }
        if (dVar51 - 0.0 < 0.0) {
          dVar52 = (double)(fVar3 * fVar1);
        }
        if (dVar51 - 0.0 < 0.0) {
          dVar53 = (double)(fVar4 * fVar1);
        }
        dVar51 = (double)((float)(dVar53 * dVar47 +
                                 (double)(float)(dVar52 * dVar49 + (double)(float)(dVar50 * dVar48))
                                 ) * 2.0);
        fVar1 = -(float)(dVar50 * dVar51 - dVar48);
        fVar4 = -(float)(dVar52 * dVar51 - dVar49);
        fVar2 = -(float)(dVar53 * dVar51 - dVar47);
        fVar3 = fVar2 * fVar2 + fVar4 * fVar4 + fVar1 * fVar1;
        dVar47 = dVar54;
        dVar48 = dVar54;
        dVar49 = dVar54;
        if (SQRT(fVar3) != 0.0) {
          fVar23 = 1.0 / SQRT(fVar3);
          fVar23 = -(fVar3 * fVar23 * fVar23 - 1.0) * fVar23 * 0.5 + fVar23;
          fVar23 = -(fVar3 * fVar23 * fVar23 - 1.0) * fVar23 * 0.5 + fVar23;
          fVar23 = -(fVar3 * fVar23 * fVar23 - 1.0) * fVar23 * 0.5 + fVar23;
          dVar48 = (double)(fVar23 * fVar4);
          dVar47 = (double)(fVar23 * fVar1);
          dVar49 = (double)(fVar23 * fVar2);
        }
        dVar49 = (double)(SQRT((float)(dVar49 + 1.0) * 2.0) * 2.0);
        fVar1 = (float)(dVar47 / dVar49) + 0.5;
        fVar2 = (float)(dVar48 / dVar49) + 0.5;
        if ((iVar40 == 1) || (iVar24 == 0)) {
          *pfVar30 = fVar2;
          *pfVar36 = fVar1;
        }
        else {
          fVar3 = *pfVar34;
          fVar4 = *(float *)(puVar21 + 0x28);
          *pfVar30 = (*pfVar28 - fVar2) * fVar4 + fVar2;
          *pfVar36 = (fVar3 - fVar1) * fVar4 + fVar1;
        }
        iVar39 = iVar39 + 1;
        pfVar28 = pfVar28 + 2;
        pfVar30 = pfVar30 + 2;
        pfVar34 = pfVar34 + 2;
        pfVar36 = pfVar36 + 2;
        pfVar44 = pfVar44 + 4;
        pfVar45 = pfVar45 + 4;
        pfVar38 = pfVar38 + 4;
      } while (iVar39 < iVar42);
    }
    if (DAT_00731c90 == 1) {
      DAT_00731c90 = 2;
    }
  }
  else {
    if (DAT_00731c94 == 1) {
      iVar39 = 0;
      DAT_00731c94 = 0;
      if (0 < iVar42) {
        puVar29 = &DAT_00a56850;
        puVar31 = &DAT_00a56b80;
        pfVar44 = (float *)&DAT_00a561f0;
        puVar35 = &DAT_00a56854;
        puVar37 = &DAT_00a56b84;
        do {
          uVar20 = *puVar35;
          *puVar31 = *puVar29;
          *puVar37 = uVar20;
          fVar5 = pfVar45[1];
          fVar6 = *(float *)((int)puVar21 + 0x84);
          fVar7 = *pfVar45;
          fVar8 = *(float *)(puVar21 + 0x11);
          fVar9 = *(float *)((int)puVar21 + 0x74);
          fVar10 = *(float *)((int)puVar21 + 0x8c);
          fVar11 = *(float *)(puVar21 + 0xf);
          fVar12 = pfVar45[2];
          fVar13 = *(float *)((int)puVar21 + 0x7c);
          iVar39 = iVar39 + 1;
          fVar14 = *(float *)((int)puVar21 + 0x94);
          fVar15 = *(float *)(puVar21 + 0x13);
          fVar16 = pfVar45[3];
          puVar29 = puVar29 + 2;
          fVar1 = *(float *)((int)puVar21 + 0x9c);
          puVar31 = puVar31 + 2;
          puVar35 = puVar35 + 2;
          puVar37 = puVar37 + 2;
          fVar2 = *(float *)((int)puVar21 + 0xa4);
          pfVar45 = pfVar45 + 4;
          fVar3 = *(float *)(puVar21 + 0x15);
          fVar4 = *(float *)((int)puVar21 + 0xac);
          *pfVar44 = *(float *)(puVar21 + 0x14) * fVar16 +
                     *(float *)(puVar21 + 0x12) * fVar12 +
                     *(float *)(puVar21 + 0xe) * fVar7 + *(float *)(puVar21 + 0x10) * fVar5;
          pfVar44[1] = fVar2 * fVar16 + fVar14 * fVar12 + fVar9 * fVar7 + fVar6 * fVar5;
          pfVar44[2] = fVar3 * fVar16 + fVar15 * fVar12 + fVar11 * fVar7 + fVar8 * fVar5;
          pfVar44[3] = fVar4 * fVar16 + fVar1 * fVar12 + fVar13 * fVar7 + fVar10 * fVar5;
          pfVar44 = pfVar44 + 4;
        } while (iVar39 < iVar42);
      }
    }
    else if (0 < iVar42) {
      pfVar44 = (float *)&DAT_00a561f0;
      do {
        fVar5 = pfVar45[1];
        fVar6 = *(float *)((int)puVar21 + 0x84);
        fVar7 = *pfVar45;
        fVar8 = *(float *)(puVar21 + 0x11);
        fVar9 = *(float *)((int)puVar21 + 0x74);
        fVar10 = *(float *)((int)puVar21 + 0x8c);
        fVar11 = *(float *)(puVar21 + 0xf);
        fVar12 = pfVar45[2];
        fVar13 = *(float *)((int)puVar21 + 0x7c);
        iVar42 = iVar42 + -1;
        fVar14 = *(float *)((int)puVar21 + 0x94);
        fVar15 = *(float *)(puVar21 + 0x13);
        fVar16 = pfVar45[3];
        fVar1 = *(float *)((int)puVar21 + 0x9c);
        pfVar45 = pfVar45 + 4;
        fVar2 = *(float *)((int)puVar21 + 0xa4);
        fVar3 = *(float *)(puVar21 + 0x15);
        fVar4 = *(float *)((int)puVar21 + 0xac);
        *pfVar44 = *(float *)(puVar21 + 0x14) * fVar16 +
                   *(float *)(puVar21 + 0x12) * fVar12 +
                   *(float *)(puVar21 + 0xe) * fVar7 + *(float *)(puVar21 + 0x10) * fVar5;
        pfVar44[1] = fVar2 * fVar16 + fVar14 * fVar12 + fVar9 * fVar7 + fVar6 * fVar5;
        pfVar44[2] = fVar3 * fVar16 + fVar15 * fVar12 + fVar11 * fVar7 + fVar8 * fVar5;
        pfVar44[3] = fVar4 * fVar16 + fVar1 * fVar12 + fVar13 * fVar7 + fVar10 * fVar5;
        pfVar44 = pfVar44 + 4;
      } while (0 < iVar42);
    }
    auVar56 = ZEXT416(0xffffffff);
    auVar56 = auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60;
    auVar57 = vectorShiftLeftIntegerWord(auVar56,auVar56);
    auVar56 = loadVectorLeftIndexed(4,0x1607a4);
    auVar56 = auVar56 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar58 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar56 = vectorMultiplyAddFloatingPoint
                        (auVar58,auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60,
                         auVar57);
    auVar56 = vectorConvertToSignedFixedPointWordSaturate(auVar56,0);
    auVar56 = auVar56 >> 0x60 & (GPiece<16>)0xffffffff;
    DAT_00a561c4 = storeVectorElementWordIndexed
                             (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60,0x61c4,
                              0xa50000);
  }
  if (0 < iVar19) {
    do {
      lVar33 = uVar25 - 0x1c0;
      lVar46 = 4;
      lVar27 = uVar25 - 0x270;
      psVar32 = psVar43;
      do {
        sVar17 = *psVar32;
        psVar32 = psVar32 + 2;
        iVar39 = (int)((longlong)sVar17 << 4);
        iVar42 = (int)((longlong)sVar17 << 3);
        puVar29 = (undefined4 *)lVar33;
        *puVar29 = *(undefined4 *)((int)&DAT_00a561f0 + iVar39);
        puVar29[1] = *(undefined4 *)((int)&DAT_00a561f4 + iVar39);
        puVar29[2] = *(undefined4 *)((int)&DAT_00a561f8 + iVar39);
        puVar29[3] = *(undefined4 *)((int)&DAT_00a561fc + iVar39);
        uVar20 = *(undefined4 *)((int)&DAT_00a56854 + iVar42);
        lVar33 = lVar33 + 0x10;
        *(undefined4 *)((int)lVar27 + 0x100) = *(undefined4 *)((int)&DAT_00a56850 + iVar42);
        *(undefined4 *)((int)lVar27 + 0x104) = uVar20;
        lVar27 = lVar27 + 8;
        lVar46 = lVar46 + -1;
      } while (lVar46 != 0);
      FastDrawQuad(uVar25 - 0x1c0,0,0,uVar18,9);
      iVar41 = iVar41 + 1;
      psVar43 = psVar43 + 8;
    } while (iVar41 < iVar19);
  }
  return;
}


// 0x016114c (0x328 bytes)
void TransitionDraw_Space(void)

{
  undefined8 uVar1;
  double dVar2;
  
  STUB_00078100();
  ComposeCameraMatrix();
  CleanAnimationCache();
  STUB_0006849c();
  DAT_00a10724 = 0xffffffff;
  dVar2 = (double)g_ViewContext.xratio;
  if ((int)(((uint)((int)g_ViewContext.xratio >> 0x1f) >> 1 ^ (uint)g_ViewContext.xratio) -
           ((int)g_ViewContext.xratio >> 0x1f)) < 0x3f2147ae) {
    g_ViewContext.xratio = 0.63;
  }
  UpdateViewContext();
  ComposeCameraMatrix();
  Space_DrawSkyShell();
  g_ViewContext.xratio = (float)dVar2;
  UpdateViewContext();
  ComposeCameraMatrix();
  if (g_currentLoadingScreen == 4) {
    STUB_0006d704(1);
    ____Space_TransitionDrawPass();
    STUB_0006d708();
  }
  DrawMobys();
  STUB_00175554(0x2080000);
  STUB_0006d704(1);
  if ((Level != Veldin) && ((Level != Novalis || (g_SeenPlanets.Kerwan != '\0')))) {
    Space_DrawTransitionOverlay(DAT_0095cec8);
  }
  if ((g_currentLoadingScreen == 4) && (0x3c < g_SpaceSceneFrame)) {
    uVar1 = idol_draw::Blend(1,0,0x80,1,0,0,1,1);
    SetGSReg(0x16,uVar1);
    uVar1 = idol_draw::PackCmd(0,1,0,1,0x80);
    SetGSReg(3,uVar1);
    Sprite_DrawShape(0x20,0x168,0x100,0x20,0,0,0x100,0x20);
    uVar1 = FUN_00502f98(1,5,0x60,3,0,0,1,2);
    SetGSReg(0x16,uVar1);
  }
  if ((Level != Veldin) && ((Level != Novalis || (g_SeenPlanets.Kerwan != '\0')))) {
    Space_DrawShipEffects(DAT_0095cec8);
  }
  STUB_0006d708();
  if ((0 < (int)SceneScreenFade) &&
     (0x3f800000 <
      (int)(FLOAT_ORDER(SceneScreenFade)))) {
    SceneScreenFade = 1.0;
  }
  STUB_00174cf4(0x10);
  STUB_000f1448();
  return;
}


// 0x0161480 (0x244 bytes)
void Space_SpawnShipParticles(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  GPiece<16> local_90;
  GPiece<16> local_80;
  GPiece<32> local_70;
  
  iVar3 = 0;
  dVar4 = -0.25;
  dVar5 = 0.25;
  dVar6 = 4.5;
  do {
    MB_randRangeFloat(-g_FrameTime,g_FrameTime);
    MB_randRangeFloat(-g_FrameTime,g_FrameTime);
    MB_randRangeFloat
              ((float)((double)g_FrameTime * dVar4),
               (float)((double)g_FrameTime * dVar5));
    iVar1 = (int)((double)animationSpeed * dVar6);
    iVar2 = MB_randInt(iVar1);
    SpawnPart_2(local_70,local_90,local_80,0x24c0c0c0,0x14c0c0c0,iVar1,iVar1,iVar1 + iVar2)
    ;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  return;
}


// 0x0161788 (0x2220 bytes)
// strings: 0096c074: 'None'

void UpdateSpace(void)

{
  bool bVar1;
  float fVar2;
  u8 uVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  f32 fVar11;
  MobyInstance *pMVar12;
  Spline *pSVar13;
  char cVar14;
  undefined4 uVar15;
  uint uVar16;
  vec4 *pvVar17;
  longlong lVar18;
  undefined4 *puVar19;
  float *pfVar20;
  MobyInstance *pMVar21;
  int iVar22;
  short sVar25;
  float *pfVar23;
  Spline *pSVar24;
  Mtx4 *pMVar26;
  ulonglong uVar27;
  int iVar28;
  MOBY_OCLASSES MVar29;
  ulonglong uVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  byte bVar34;
  double dVar35;
  double dVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  GPiece<16> auVar57;
  GPiece<16> auVar58;
  GPiece<16> auVar59;
  GPiece<16> auVar60;
  GPiece<16> auVar61;
  GPiece<16> auVar62;
  GPiece<16> auVar63;
  GPiece<16> auVar64;
  GPiece<16> auVar65;
  GPiece<16> auVar66;
  GPiece<16> auVar67;
  GPiece<16> auVar68;
  GPiece<16> auVar69;
  GPiece<16> auVar70;
  GPiece<16> auVar71;
  GPiece<16> auVar72;
  GPiece<16> auVar73;
  GPiece<16> auVar74;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar75;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  float local_258;
  undefined4 local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_240;
  float local_23c;
  float local_238;
  float local_230;
  float local_22c;
  float local_228;
  GPiece<16> auStack_210;
  GPiece<16> auStack_200;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  longlong local_1d0;
  
  uVar30 = ZEXT48(&stack0x00000000);
  lVar18 = uVar30 - 0x110;
  puVar19 = (undefined4 *)lVar18;
  puVar19[3] = in_vr31_32_3;
  puVar19[2] = in_vr31_32_2;
  puVar19[1] = in_vr31_32_1;
  *puVar19 = in_vr31_32_0;
  DAT_00964594 = DAT_00964594 + 1;
  bVar34 = (DAT_00964590 == -1) << 1;
  if (DAT_00964590 < 4) {
    if (0 < DAT_00964590) {
      if (DAT_00964590 < 2) {
        return;
      }
      if (DAT_00964590 < 3) {
        return;
      }
      ResetGameCounters();
      UpdateMobys();
      sound_UpdateAmbient();
      HeroUpdate();
      UpdateParts();
      if (DAT_00964594 == 0) {
        music_Pause(0);
        LoadMusic2(0);
        g_PendingSpeech = g_SpaceshipVariant + 0x9c4f;
        local_1d0 = (longlong)(int)(animationSpeed * 12.5);
        FadeToBlack((int)(animationSpeed * 12.5));
        while (g_SpeechPlaying.status != 3) {
          sound_Update();
          STUB_00503078(0);
        }
        music_PlayPreseekedSpeech();
        pMVar12 = g_SpaceshipPtr;
        g_SpaceshipPtr->updateId = '\x01';
        pMVar12->animationId = '\x02';
        dVar41 = 0.0;
        pMVar12->animationBlend = 0.0;
        UpdateMobyFrameData(pMVar12);
        pMVar12 = g_SpaceshipPtr;
        g_SpaceshipPtr->field45_0x72 = -1;
        iVar31 = g_shipSplinePath;
        pMVar12->collision = (ushort *)0x0;
        if (-1 < iVar31) {
          pMVar21 = CreateMoby(RATCHET);
          DAT_00964580 = pMVar21;
          pMVar21->field45_0x72 = -1;
          pMVar21->collision = (ushort *)0x0;
          pMVar12 = g_heroMobyPtr;
          pMVar21->drawDistance = 0x1ff;
          pMVar21->modeBits = pMVar21->modeBits | (NO_POST_UPDATE|NO_UPDATE);
          uVar33 = pMVar12->light;
          pMVar21->color = pMVar12->color;
          pMVar21->light = uVar33;
          pMVar21 = CreateMoby(CLANK_000A);
          DAT_00964584 = pMVar21;
          pMVar21->field45_0x72 = -1;
          pMVar21->collision = (ushort *)0x0;
          pMVar12 = g_heroMobyPtr;
          pMVar21->drawDistance = 0x1ff;
          uVar33 = pMVar12->color;
          uVar16 = pMVar12->light;
          pMVar21->modeBits = pMVar21->modeBits | (NO_POST_UPDATE|NO_UPDATE);
          pMVar21->color = uVar33;
          pMVar21->light = uVar16;
        }
        SetCameraPosition(0x951500,0x951510,1,0,0);
        DAT_009645b8 = 0.0;
        DAT_009645bc = 0;
        if (-1 < g_shipSplinePath) {
          pSVar13 = Splines[g_shipSplinePath];
          iVar31 = pSVar13->cnt;
          pSVar13->points[0].w = 0.0;
          if (1 < iVar31 + -1) {
            iVar32 = 1;
            pSVar24 = pSVar13;
            do {
              uVar37 = FUN_005e8338((double)(pSVar24->points[1].x - pSVar24->points[0].x),
                                    (double)(pSVar24->points[1].y - pSVar24->points[0].y));
              uVar38 = FUN_005e8338((double)(pSVar24->points[2].x - pSVar24->points[1].x),
                                    (double)(pSVar24->points[2].y - pSVar24->points[1].y));
              dVar42 = (double)FastDiffRots(uVar38,uVar37);
              iVar32 = iVar32 + 1;
              iVar31 = pSVar13->cnt;
              pSVar24->points[1].w = (float)dVar42;
              if (dVar41 - ABS(dVar42) < 0.0) {
                dVar41 = ABS(dVar42);
              }
              pSVar24 = (Spline *)pSVar24->points;
            } while (iVar32 < iVar31 + -1);
          }
          uVar37 = FUN_005e8338((double)(pSVar13->points[iVar31 + -1].x -
                                        pSVar13->points[iVar31 + -2].x),
                                (double)(pSVar13->points[iVar31 + -1].y -
                                        pSVar13->points[iVar31 + -2].y));
          iVar31 = (int)(((ulonglong)(uint)pSVar13->cnt & 0xfffffff) << 4);
          uVar38 = FUN_005e8338((double)(pSVar13->points[0].x -
                                        *(float *)((int)&((Spline *)(pSVar13->points + -1))->cnt +
                                                  iVar31)),
                                (double)(pSVar13->points[0].y -
                                        *(float *)((int)pSVar13->points + iVar31 + -0xc)));
          dVar42 = (double)FastDiffRots(uVar38,uVar37);
          iVar31 = pSVar13->cnt;
          pSVar13->points[iVar31 + -1].w = (float)dVar42;
          if (0 < iVar31) {
            iVar31 = 0;
            pSVar24 = pSVar13;
            do {
              iVar31 = iVar31 + 1;
              iVar32 = pSVar13->cnt;
              pSVar24->points[0].w = pSVar24->points[0].w * (float)(0.3490658402442932 / dVar41);
              pSVar24 = (Spline *)pSVar24->points;
            } while (iVar31 < iVar32);
          }
          DAT_00964604 = pSVar13->points[0].y;
          fVar2 = pSVar13->points[1].y;
          DAT_00964600 = pSVar13->points[0].x;
          fVar6 = DAT_00964604 - fVar2;
          fVar5 = pSVar13->points[1].x;
          DAT_00964608 = pSVar13->points[0].z;
          fVar7 = DAT_00964600 - fVar5;
          fVar8 = DAT_00964608 - pSVar13->points[1].z;
          fVar2 = fVar2 - DAT_00964604;
          DAT_009645ac = 0.0;
          DAT_009645b0 = 0.0;
          fVar5 = fVar5 - DAT_00964600;
          DAT_009645c0 = 0;
          g_LoadScreenRelated = 0;
          DAT_009645b4 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
          DAT_009645f0 = (g_SpaceshipPtr->pos).x;
          DAT_009645f4 = (g_SpaceshipPtr->pos).y;
          DAT_009645f8 = (g_SpaceshipPtr->pos).z;
          DAT_009645fc = (g_SpaceshipPtr->pos).w;
          DAT_0096460c = pSVar13->points[0].w;
          DAT_00964610 = (g_SpaceshipPtr->rotation).x;
          DAT_00964614 = (g_SpaceshipPtr->rotation).y;
          DAT_00964618 = (g_SpaceshipPtr->rotation).z;
          DAT_0096461c = (g_SpaceshipPtr->rotation).w;
          dVar41 = (double)FUN_005e8338((double)SQRT(fVar5 * fVar5 + fVar2 * fVar2));
          DAT_00964624 = (float)dVar41;
          dVar41 = (double)FUN_005e8338((double)(pSVar13->points[1].x - pSVar13->points[0].x),
                                        (double)(pSVar13->points[1].y - pSVar13->points[0].y));
          DAT_00964628 = (float)dVar41;
        }
      }
      if (-1 < (int)(g_shipCameraStartCuboid | g_shipCameraEndCuboid)) {
        OrganicDelt
                  (1.0,DAT_0071f418 * 0.666,DAT_0071f418 * 0.666,g_FrameTime * 0.5,
                   &DAT_009645b8,0x720000,(float *)&DAT_009645bc);
        local_270 = Cuboids[g_shipCameraStartCuboid].pos.x;
        local_264 = Cuboids[g_shipCameraEndCuboid].pos.w;
        local_270 = DAT_009645b8 * (Cuboids[g_shipCameraEndCuboid].pos.x - local_270) + local_270;
        local_26c = DAT_009645b8 *
                    (Cuboids[g_shipCameraEndCuboid].pos.y - Cuboids[g_shipCameraStartCuboid].pos.y)
                    + Cuboids[g_shipCameraStartCuboid].pos.y;
        local_268 = DAT_009645b8 *
                    (Cuboids[g_shipCameraEndCuboid].pos.z - Cuboids[g_shipCameraStartCuboid].pos.z)
                    + Cuboids[g_shipCameraStartCuboid].pos.z;
        local_254 = 0;
        local_258 = 0.0;
        local_25c = 0.0;
        local_260 = 0.0;
        dVar41 = (double)FastDiffRots
                                   ((double)Cuboids[g_shipCameraEndCuboid].rot.y,
                                    (double)Cuboids[g_shipCameraStartCuboid].rot.y);
        local_25c = (float)(dVar41 * (double)DAT_009645b8);
        dVar41 = (double)FastWrapRot(Cuboids[g_shipCameraStartCuboid].rot.y,local_25c);
        local_25c = (float)dVar41;
        dVar41 = (double)FastDiffRots
                                   ((double)Cuboids[g_shipCameraEndCuboid].rot.z,
                                    (double)Cuboids[g_shipCameraStartCuboid].rot.z);
        local_258 = (float)(dVar41 * (double)DAT_009645b8);
        dVar41 = (double)FastWrapRot(Cuboids[g_shipCameraStartCuboid].rot.z,local_258);
        local_258 = (float)dVar41;
        Camera_SetMobyDrivenTargetPos(&local_270);
        Camera_SetMobyDrivenTargetRot(&local_260);
      }
      pMVar12 = g_SpaceshipPtr;
      if (g_shipSplinePath < 0) goto LAB_0016388c;
      local_1d0 = (longlong)(int)(animationSpeed * 150.5);
      if ((int)DAT_00964594 < (int)(animationSpeed * 150.5)) {
        dVar41 = (double)FastIntToDouble();
        dVar52 = 120.5;
        local_1d0 = (longlong)(int)(animationSpeed * 120.5);
        dVar42 = (double)FastIntToDouble((int)(animationSpeed * 120.5));
        fVar6 = DAT_0096460c;
        pMVar12 = g_SpaceshipPtr;
        dVar43 = (double)DAT_00964600;
        dVar51 = 1.0;
        dVar44 = (double)DAT_009645f0;
        dVar45 = (double)DAT_00964604;
        dVar46 = (double)DAT_009645f4;
        dVar47 = (double)DAT_00964608;
        dVar48 = (double)DAT_009645f8;
        local_1d0 = (longlong)(int)((double)animationSpeed * dVar52);
        dVar49 = (double)DAT_00964624;
        dVar50 = (double)DAT_00964614;
        fVar2 = (float)(dVar41 * (double)(float)(3.1415927410125732 / dVar42) + 1.570796251296997);
        fVar5 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar5 = fVar2;
        }
        fVar7 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
          fVar7 = fVar5;
        }
        fVar2 = fVar7 * fVar7;
        fVar5 = fVar2 * fVar2 * fVar7;
        fVar8 = fVar2 * fVar5;
        dVar41 = (double)((1.0 - (fVar2 * fVar8 * 2.601887e-06 +
                                 fVar8 * -0.0001980741 +
                                 fVar5 * 0.0083330255 + fVar2 * fVar7 * -0.16666657 + fVar7)) * 0.5)
        ;
        if ((int)((double)animationSpeed * dVar52) <= (int)DAT_00964594) {
          dVar41 = dVar51;
        }
        g_SpaceshipPtr->animationBlend = (float)dVar41;
        (pMVar12->pos).w = fVar6;
        (pMVar12->pos).x = (float)(dVar41 * (double)(float)(dVar43 - dVar44) + dVar44);
        (pMVar12->pos).y = (float)(dVar41 * (double)(float)(dVar45 - dVar46) + dVar46);
        (pMVar12->pos).z = (float)(dVar41 * (double)(float)(dVar47 - dVar48) + dVar48);
        dVar44 = 0.0;
        (pMVar12->rotation).x = 0.0;
        dVar42 = (double)FastDiffRots(dVar49,dVar50);
        dVar42 = (double)FastWrapRot((float)dVar50,(float)(dVar42 * dVar41));
        (g_SpaceshipPtr->rotation).y = (float)dVar42;
        dVar43 = (double)DAT_00964618;
        dVar42 = (double)FastDiffRots((double)DAT_00964628,dVar43);
        dVar42 = (double)FastWrapRot((float)dVar43,(float)(dVar42 * dVar41));
        (g_SpaceshipPtr->rotation).z = (float)dVar42;
        if ((0 < (int)SceneScreenFade) &&
           (SceneScreenFade = SceneScreenFade - 0.125,
           (double)SceneScreenFade < dVar44)) {
          SceneScreenFade = 0.0;
        }
        if (dVar41 < dVar51) {
          Space_SpawnShipParticles();
        }
      }
      else {
        auVar57 = loadVectorLeftIndexed(0xb4,0x1616c4);
        auVar58 = loadVectorLeftIndexed(0x40,0x964570);
        auVar57 = auVar57 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar30 = ZEXT48(Splines[g_shipSplinePath]);
        auVar58 = vectorAddFloatingPoint
                            (auVar58,auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60);
        fVar2 = DAT_009645b0 + 0.8;
        auVar57 = auVar58 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar60 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
        DAT_009645b0 = (float)storeVectorElementWordIndexed(auVar60,0x40,0x964570);
        auVar57 = loadVectorLeftIndexed(0xb8,0x1616c4);
        auVar57 = auVar57 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar57 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
        vectorCompareGreaterThanFloatingPoint(auVar60,auVar57);
        if (!(bool)(bVar34 >> 1 & 1)) {
          DAT_009645b0 = 100.0;
          auVar58 = auVar57;
          fVar2 = 100.0;
        }
        auVar57 = auVar58 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar57 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
        if (((g_Pad.buttonsPressedThisFrame & (CROSS|CIRCLE|TRIANGLE)) != 0) &&
           ((int)(FLOAT_ORDER(SceneScreenFade)) < 0x3d800000)) {
          SceneScreenFade = 0.0625;
        }
        auVar58 = ZEXT416(6);
        auVar60 = loadVectorLeftIndexed(lVar18,uVar30);
        auVar60 = vectorSubtractUnsignedWordModulo
                            (auVar60,auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60);
        auVar66 = loadVectorLeftIndexed(0x3c,0x964570);
        auVar58 = auVar66 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar60 = vectorConvertFromSignedFixedPointWord(auVar60,0);
        auVar60 = auVar60 >> 0x60 & (GPiece<16>)0xffffffff;
        vectorCompareGreaterThanFloatingPoint
                  (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60,
                   auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60);
        if ((!(bool)(bVar34 >> 1 & 1)) &&
           ((int)(FLOAT_ORDER(SceneScreenFade)) < 0x3d800000)) {
          SceneScreenFade = 0.0625;
        }
        if (g_SpaceshipVariant < 2) {
          g_SpaceshipPtr->setByGroup = '2';
          pMVar12->uid = 10;
          RegisterFuncForMoby(&PTR_Space_DrawShipEngineGlow_00707cb0,pMVar12);
          auVar66 = loadVectorLeftIndexed(0x3c,0x964570);
          auVar57 = loadVectorLeftIndexed(0x40,0x964570);
          fVar2 = DAT_009645b0;
        }
        auVar58 = ZEXT416(0xffffffff);
        auVar60 = auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60;
        auVar58 = ZEXT416(0xffffffff);
        auVar71 = auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60;
        auVar70 = vectorShiftLeftIntegerWord(auVar60,auVar60);
        auVar67 = loadVectorLeftIndexed(0x44,0x964570);
        auVar68 = vectorReciprocalEstimateFloatingPoint(auVar67);
        auVar58 = loadVectorLeftIndexed(0xbc,0x1616c4);
        auVar58 = auVar58 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar69 = auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60;
        auVar72 = vectorShiftLeftIntegerWord(auVar71,auVar71);
        auVar58 = ZEXT416(0xffffffff);
        auVar60 = auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60;
        auVar58 = ZEXT416(0xffffffff);
        auVar71 = auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60;
        auVar58 = auVar57 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar73 = vectorShiftLeftIntegerWord(auVar60,auVar60);
        auVar74 = vectorShiftLeftIntegerWord(auVar71,auVar71);
        auVar71 = vectorNegativeMultiplySubtractFloatingPoint(auVar68,auVar67,auVar69);
        auVar57 = ZEXT416(1);
        auVar60 = auVar66 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar66 = vectorMultiplyAddFloatingPoint(auVar68,auVar71,auVar70);
        auVar68 = loadVectorLeftIndexed(0xfffffffffffff414,0x720000);
        auVar58 = vectorMultiplyAddFloatingPoint
                            (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60,auVar68,
                             auVar73);
        auVar68 = loadVectorLeftIndexed(lVar18,uVar30);
        auVar57 = vectorSubtractUnsignedWordModulo
                            (auVar68,auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60);
        auVar57 = vectorConvertFromSignedFixedPointWord(auVar57,0);
        auVar68 = vectorNegativeMultiplySubtractFloatingPoint(auVar66,auVar67,auVar69);
        auVar57 = auVar57 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar68 = vectorMultiplyAddFloatingPoint(auVar66,auVar68,auVar72);
        auVar66 = vectorNegativeMultiplySubtractFloatingPoint(auVar68,auVar67,auVar69);
        auVar66 = vectorMultiplyAddFloatingPoint(auVar68,auVar66,auVar74);
        fVar2 = DAT_009645ac + (fVar2 * g_FrameTime) / DAT_009645b4;
        auVar58 = vectorMultiplyAddFloatingPoint
                            (auVar66,auVar58,
                             auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60);
        auVar58 = auVar58 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar58 = auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60;
        vectorCompareGreaterThanFloatingPoint
                  (auVar58,auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60);
        DAT_009645ac = (float)storeVectorElementWordIndexed(auVar58,0x3c,0x964570);
        if ((bool)(bVar34 >> 1 & 1)) {
          dVar41 = 1.0;
          uVar33 = (uint)((int)SceneScreenFade >> 0x1f) >> 1;
          if ((int)((uVar33 ^ (uint)SceneScreenFade) - ((int)SceneScreenFade >> 0x1f)) <
              0x3f800000) {
            MB_PathEvalSpline
                      ((double)fVar2,uVar30,uVar33,1,&g_SpaceshipPtr->pos,&g_SpaceshipPtr->rotation,
                       0);
            iVar31 = g_LoadScreenRelated;
            sVar25 = g_SpaceshipVariant;
            pMVar12 = g_SpaceshipPtr;
            uVar33 = DAT_009645c0 + 1;
            bVar1 = g_LoadScreenRelated < 0x20;
            DAT_009645c0 = uVar33 & 0x1f;
            (g_SpaceshipPtr->rotation).x = (g_SpaceshipPtr->rotation).w;
            if (bVar1) {
              g_LoadScreenRelated = iVar31 + 1;
            }
            FUN_005e7d64((uVar33 & 0x1f) * 0x10 + 0x964630,sVar25 * 0x20 + 0x731ec0,
                         &pMVar12->transform);
            pMVar12 = g_SpaceshipPtr;
            iVar32 = DAT_009645c0 * 0x10;
            iVar31 = DAT_009645c0 * 0x10;
            iVar22 = DAT_009645c0 * 0x10;
            iVar28 = (int)g_SpaceshipVariant;
            pMVar26 = &g_SpaceshipPtr->transform;
            *(float *)(iVar32 + 0x964630) = *(float *)(iVar32 + 0x964630) + (g_SpaceshipPtr->pos).x;
            *(float *)(iVar32 + 0x964634) = *(float *)(iVar32 + 0x964634) + (pMVar12->pos).y;
            *(float *)(iVar32 + 0x964638) = *(float *)(iVar32 + 0x964638) + (pMVar12->pos).z;
            *(undefined4 *)(iVar31 + 0x96463c) = 0x3f800000;
            FUN_005e7d64(&DAT_00964830 + iVar22,&DAT_00731ed0 + iVar28 * 0x20,pMVar26);
            pMVar12 = g_SpaceshipPtr;
            iVar32 = DAT_009645c0 * 0x10;
            iVar31 = DAT_009645c0 * 0x10;
            fVar2 = *(float *)(iVar32 + 0x964834);
            fVar5 = *(float *)(iVar32 + 0x964838);
            *(float *)(&DAT_00964830 + iVar32) =
                 *(float *)(&DAT_00964830 + iVar32) + (g_SpaceshipPtr->pos).x;
            *(float *)(iVar32 + 0x964834) = fVar2 + (pMVar12->pos).y;
            *(float *)(iVar32 + 0x964838) = fVar5 + (pMVar12->pos).z;
            *(undefined4 *)(iVar31 + 0x96483c) = 0x3f800000;
            RegisterFuncForMoby(&PTR_Space_DrawTransitionOverlay_00707cb8,pMVar12);
            if ((0 < (int)SceneScreenFade) &&
               (SceneScreenFade = SceneScreenFade + 0.0625,
               dVar41 < (double)SceneScreenFade)) {
              SceneScreenFade = 1.0;
            }
            goto LAB_0016375c;
          }
        }
        g_loadingPlanet = 1;
        g_CutscenePlaying = 1;
      }
LAB_0016375c:
      pMVar21 = DAT_00964580;
      pMVar12 = g_SpaceshipPtr;
      pMVar26 = &g_SpaceshipPtr->transform;
      iVar31 = (int)g_SpaceshipVariant;
      (DAT_00964580->rotation).x = (g_SpaceshipPtr->rotation).x;
      (pMVar21->rotation).y = (pMVar12->rotation).y;
      (pMVar21->rotation).z = (pMVar12->rotation).z;
      (pMVar21->rotation).w = (pMVar12->rotation).w;
      FUN_005e7d64(&pMVar21->pos,iVar31 * 0x10 + 0x7321c0,pMVar26);
      pMVar21 = DAT_00964580;
      pMVar12 = g_SpaceshipPtr;
      pvVar17 = &DAT_00964580->pos;
      fVar2 = (DAT_00964580->pos).z;
      (DAT_00964580->pos).x = (DAT_00964580->pos).x + (g_SpaceshipPtr->pos).x;
      (pMVar21->pos).y = pvVar17->y + (pMVar12->pos).y;
      (pMVar21->pos).z = fVar2 + (pMVar12->pos).z;
      UpdateMobyTransform(pMVar21);
      pMVar21 = DAT_00964584;
      pMVar12 = g_SpaceshipPtr;
      iVar31 = (int)g_SpaceshipVariant;
      (DAT_00964584->rotation).x = (g_SpaceshipPtr->rotation).x;
      (pMVar21->rotation).y = (pMVar12->rotation).y;
      (pMVar21->rotation).z = (pMVar12->rotation).z;
      (pMVar21->rotation).w = (pMVar12->rotation).w;
      FUN_005e7d64(&pMVar21->pos,iVar31 * 0x10 + 0x7321f0,&pMVar12->transform);
      pMVar21 = DAT_00964584;
      pMVar12 = g_SpaceshipPtr;
      pvVar17 = &DAT_00964584->pos;
      fVar2 = (DAT_00964584->pos).z;
      (DAT_00964584->pos).x = (DAT_00964584->pos).x + (g_SpaceshipPtr->pos).x;
      (pMVar21->pos).y = pvVar17->y + (pMVar12->pos).y;
      (pMVar21->pos).z = fVar2 + (pMVar12->pos).z;
      UpdateMobyTransform(pMVar21);
LAB_0016388c:
      UpdateCamera();
      sound_Update();
      UpdatePointLights();
      UpdateHeroLightAngle();
      UpdateGameCounters();
      return;
    }
    if (DAT_00964590 < 0) {
      return;
    }
  }
  else {
    if (DAT_00964590 < 7) {
      if (4 < DAT_00964590) {
        return;
      }
      ChooseLoadingScreen();
      return;
    }
    if (DAT_00964590 < 8) {
      return;
    }
    if (8 < DAT_00964590) {
      return;
    }
  }
  ResetGameCounters();
  UpdateMobys();
  sound_UpdateAmbient();
  HeroUpdate();
  UpdateParts();
  puVar19 = &DAT_0095cd50;
  g_cutsceneCameraFrame = g_cutsceneCameraFrame + 1;
  g_SpaceSceneFrame = g_SpaceSceneFrame + 1;
  SceneScreenFade = SceneScreenFade - 0.125;
  if (SceneScreenFade < 0.0) {
    SceneScreenFade = 0.0;
  }
  iVar31 = ((uint)(ZERO_MASK(g_IsPal)) & 0x10) + 0x50;
  sVar25 = DAT_00964598;
  if ((g_Pad.buttonsPressedThisFrame & (CROSS|CIRCLE|TRIANGLE)) == 0) {
LAB_00161a78:
    local_1d8 = 0.0;
    if (sVar25 == 0) goto LAB_00161ba8;
  }
  else {
    iVar32 = (int)(animationSpeed * 30.5);
    local_1d0 = (longlong)iVar32;
    if (SceneScreenFade != 0.0 || g_SpaceSceneFrame <= iVar32) goto LAB_00161a78;
    if ((DAT_00964590 == 0) &&
       (iVar22 = (int)(animationSpeed *
                      ((float)(longlong)
                              (*(int *)(&DAT_00732220 + (int)((longlong)g_SpaceshipVariant << 2)) +
                              -0x1e) + 0.5)), local_1d0 = (longlong)iVar22,
       g_SpaceSceneFrame < iVar22)) {
      sVar25 = 1;
    }
    if ((DAT_00964590 != 8) ||
       (g_SpaceSceneNumFrames.piece<0,2>() - iVar32 <= g_SpaceSceneFrame)) goto LAB_00161a78;
  }
  local_1d8 = 0.0;
  if (g_SpeechPlaying.status != 7 && g_SpeechPlaying.status != 6) {
    g_SpeechPlaying.status = 5;
  }
  if (DAT_00964590 == 0) {
    auVar57 = loadVectorLeftIndexed((longlong)g_SpaceshipVariant << 2,0x732220);
    auVar58 = vectorConvertFromSignedFixedPointWord(auVar57,0);
    auVar57 = loadVectorLeftIndexed(0xc,0x1616c4);
    auVar57 = auVar57 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar58 = vectorAddFloatingPoint
                        (auVar58,auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60);
    auVar57 = ZEXT416(0xffffffff);
    auVar57 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
    auVar60 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar57 = vectorShiftLeftIntegerWord(auVar57,auVar57);
    auVar57 = vectorMultiplyAddFloatingPoint(auVar60,auVar58,auVar57);
    auVar57 = vectorConvertToSignedFixedPointWordSaturate(auVar57,0);
    iVar32 = (int)(animationSpeed *
                  ((float)(longlong)
                          *(int *)(&DAT_00732220 + (int)((longlong)g_SpaceshipVariant << 2)) + 0.5))
    ;
    local_1d0 = (longlong)iVar32;
    auVar57 = auVar57 >> 0x60 & (GPiece<16>)0xffffffff;
    g_SpaceSceneFrame =
         storeVectorElementWordIndexed
                   (auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60,0x34,0x95cd50);
    g_SpaceSceneChunk = iVar32 / iVar31;
    ParseSpaceSceneChunk(g_SpaceSceneChunk);
    g_cutsceneCameraFrame = g_SpaceSceneFrame - (g_SpaceSceneFrame / iVar31) * iVar31;
    if (DAT_00964598 == 0) {
      FadeToBlack(4);
    }
    else {
      DAT_00964598 = 0;
    }
    SceneScreenFade = 1.0;
  }
  else {
    g_SpaceSceneFrame = (int)g_SpaceSceneNumFrames.piece<0,2>();
  }
LAB_00161ba8:
  if (g_SpaceSceneFrame < g_SpaceSceneNumFrames.piece<0,2>()) {
    if ((int)(((uint)(ZERO_MASK(g_IsPal)) & 0x10) + 0x50) <=
        (int)g_cutsceneCameraFrame) {
      g_SpaceSceneChunk = g_SpaceSceneChunk + 1;
      ParseSpaceSceneChunk(g_SpaceSceneChunk);
    }
    pfVar20 = (float *)((int)g_SpaceSceneCameraFrames + g_cutsceneCameraFrame * 0x20);
    g_ViewContext.xratio = pfVar20[7];
    cVar4 = *(char *)(pfVar20 + 3);
    UpdateViewContext();
    GameCamera.posX = *pfVar20;
    GameCamera.posY = pfVar20[1];
    GameCamera.posZ = pfVar20[2];
    GameCamera.field8_0x14c = *(char (*) [4])(pfVar20 + 3);
    FUN_005e7d64(0x951500,0x951500,&g_SpaceshipPtr->transform);
    GameCamera.posX = GameCamera.posX + (g_SpaceshipPtr->pos).x;
    GameCamera.posY = GameCamera.posY + (g_SpaceshipPtr->pos).y;
    GameCamera.posZ = GameCamera.posZ + (g_SpaceshipPtr->pos).z;
    FastWrapRot(pfVar20[6],(g_SpaceshipPtr->rotation).z);
    memcpy((void *)(uVar30 - 0x250),&DAT_00653758,0x40);
    FUN_005e8c64(uVar30 - 0x250,uVar30 - 0x280);
    GameCamera.orientMtx.forward.x = -local_230;
    GameCamera.orientMtx.right.x = -local_250;
    GameCamera.orientMtx.forward.y = -local_22c;
    GameCamera.orientMtx.right.y = -local_24c;
    GameCamera.orientMtx.forward.z = -local_228;
    GameCamera.orientMtx.up.x = local_240;
    GameCamera.orientMtx.right.z = -local_248;
    GameCamera.orientMtx.up.y = local_23c;
    GameCamera.orientMtx.up.z = local_238;
    if (Cheats[4] != '\0') {
      GameCamera.orientMtx.right.w = 0.0;
      GameCamera.orientMtx.right.x = -(local_22c * local_238) - -(local_228 * local_23c);
      GameCamera.orientMtx.right.y = -(local_228 * local_240) - -(local_230 * local_238);
      GameCamera.orientMtx.right.z = -(local_230 * local_23c) - -(local_22c * local_240);
    }
    iVar31 = 0;
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      dVar46 = 1.0;
      auVar57 = loadVectorLeftIndexed(0x1c,0x1616c4);
      auVar68 = loadVectorLeftIndexed(0x14,0x1616c4);
      auVar57 = auVar57 >> 0x60 & (GPiece<16>)0xffffffff;
      auStack_210 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
      dVar47 = 360.5;
      auVar57 = loadVectorLeftIndexed(0x20,0x1616c4);
      local_1dc = 0.5;
      auVar57 = auVar57 >> 0x60 & (GPiece<16>)0xffffffff;
      auStack_200 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
      local_1e0 = 62.5;
      local_1e4 = 350.5;
      dVar48 = 0.09817477315664291;
      local_1e8 = 524.5;
      dVar49 = 1.570796251296997;
      dVar50 = 3.141592502593994;
      dVar51 = -3.141592502593994;
      dVar52 = -0.16666656732559204;
      dVar53 = 0.008333025500178337;
      dVar54 = -0.0001980741071747616;
      dVar55 = 2.601886990305502e-06;
      dVar56 = 80.0;
      auVar69 = loadVectorLeftIndexed(0x4c,0x1616c4);
      auVar70 = loadVectorLeftIndexed(0x50,0x1616c4);
      auVar58 = loadVectorLeftIndexed(0x58,0x1616c4);
      local_1ec = 504.5;
      auVar60 = loadVectorLeftIndexed(0x5c,0x1616c4);
      dVar41 = 464.5;
      local_1f0 = 420.5;
      dVar45 = 0.02500000037252903;
      dVar42 = 240.5;
      dVar43 = 200.5;
      dVar44 = 300.5;
      auVar66 = loadVectorLeftIndexed(0x7c,0x1616c4);
      auVar67 = loadVectorLeftIndexed(0x80,0x1616c4);
      auVar75 = loadVectorLeftIndexed(0x84,0x1616c4);
      auVar71 = loadVectorLeftIndexed(0x88,0x1616c4);
      auVar72 = loadVectorLeftIndexed(0x8c,0x1616c4);
      auVar73 = loadVectorLeftIndexed(0x90,0x1616c4);
      auVar74 = loadVectorLeftIndexed(0x94,0x1616c4);
      auVar57 = auVar68 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar68 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
      auVar57 = auVar69 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar69 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
      auVar57 = auVar70 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar70 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
      auVar57 = auVar58 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar58 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
      auVar57 = auVar60 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar60 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
      auVar57 = auVar66 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar66 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
      auVar57 = auVar67 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar67 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
      auVar57 = auVar75 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar75 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
      auVar57 = auVar71 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar71 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
      auVar57 = auVar72 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar72 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
      auVar57 = auVar73 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar73 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
      auVar57 = auVar74 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar57 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
      do {
        pMVar12 = (MobyInstance *)puVar19[0x5e];
        uVar30 = ZEXT48(pMVar12);
        cVar14 = (char)((int)g_cutsceneCameraFrame >> 1);
        pMVar12->previousAnimationFrame = cVar14;
        pMVar12->animationFrame = cVar14 + '\x01';
        UpdateMobyFrameData(pMVar12);
        dVar35 = (double)FastIntToDouble(g_cutsceneCameraFrame & 1);
        dVar40 = (double)(float)(dVar35 * (double)local_1dc);
        pMVar12->animationBlend = (float)(dVar35 * (double)local_1dc);
        if ((cVar4 != '\0') && ((g_cutsceneCameraFrame & 1) != 0)) {
          pMVar12->animationBlend = 1.0;
          dVar40 = dVar46;
        }
        pMVar21 = g_SpaceshipPtr;
        fVar2 = (float)(dVar46 - dVar40);
        pfVar20 = (float *)((int)pMVar12->pVar + (uint)(byte)pMVar12->animationFrame * 0x10);
        pfVar23 = (float *)((int)pMVar12->pVar + (uint)(byte)pMVar12->previousAnimationFrame * 0x10)
        ;
        fVar5 = *pfVar20;
        fVar6 = pfVar20[1];
        fVar7 = pfVar20[2];
        fVar8 = *pfVar23;
        fVar9 = pfVar23[1];
        fVar10 = pfVar23[2];
        (pMVar12->pos).w = pfVar23[3];
        (pMVar12->pos).x = fVar8 * fVar2 + (float)((double)fVar5 * dVar40);
        (pMVar12->pos).y = fVar9 * fVar2 + (float)((double)fVar6 * dVar40);
        (pMVar12->pos).z = fVar10 * fVar2 + (float)((double)fVar7 * dVar40);
        FUN_005e7d64(uVar30 + 0x10,uVar30 + 0x10,&pMVar21->transform);
        pMVar21 = g_SpaceshipPtr;
        (pMVar12->pos).x = (pMVar12->pos).x + (g_SpaceshipPtr->pos).x;
        (pMVar12->pos).y = (pMVar12->pos).y + (pMVar21->pos).y;
        (pMVar12->pos).z = (pMVar12->pos).z + (pMVar21->pos).z;
        fVar11 = (pMVar21->rotation).z;
        pMVar12->field44_0x71 = -1;
        (pMVar12->rotation).z = fVar11;
        UpdateMobyTransform(pMVar12);
        MVar29 = pMVar12->oClass;
        auVar74 = loadVectorLeftIndexed(0x34,0x95cd50);
        auVar59 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        dVar40 = (double)animationSpeed;
        if (MVar29 == RATCHET) {
          if (DAT_00964590 == 0) {
            if ((Level == Orxon) && (UnlockableItems.o2Mask == '\0')) {
              uVar27 = 0;
              auVar74 = ZEXT416(0);
              auVar74 = auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60;
            }
            else {
              auVar61 = ZEXT416(0xffffffff);
              auVar61 = auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60;
              auVar61 = vectorShiftLeftIntegerWord(auVar61,auVar61);
              auVar59 = vectorMultiplyAddFloatingPoint(auVar59,auVar68,auVar61);
              local_1d0 = (longlong)(int)(dVar40 * (double)local_1e0);
              auVar59 = vectorConvertToSignedFixedPointWordSaturate(auVar59,0);
              auVar74 = vectorCompareGreaterThanSignedWord(auVar74,auVar59);
              auVar74 = vectorLogicalAndWithComplement(auVar75,auVar74);
              uVar27 = ((longlong)(int)(dVar40 * (double)local_1e0) -
                        (longlong)g_SpaceSceneFrame >> 0x3f & 0xffffffffffffffe8U) + 0x18;
            }
            auVar74 = auVar74 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar74 = auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60;
          }
          else {
            uVar27 = 0x18;
            local_1d0 = (longlong)(int)(dVar40 * dVar47);
            if ((g_SpaceSceneFrame <= (int)(dVar40 * dVar47)) ||
               ((auVar74 = auVar75, Level == Orxon && (UnlockableItems.o2Mask == '\0')))) {
              uVar27 = 0;
              auVar74 = ZEXT416(0);
              auVar74 = auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60;
            }
          }
          auVar74 = auVar74 >> 0x60 & (GPiece<16>)0xff;
          cVar14 = storeVectorElementByteIndexed
                             (auVar74 | auVar74 << 8 | auVar74 << 0x10 | auVar74 << 0x18 |
                              auVar74 << 0x20 | auVar74 << 0x28 | auVar74 << 0x30 | auVar74 << 0x38
                              | auVar74 << 0x40 | auVar74 << 0x48 | auVar74 << 0x50 |
                              auVar74 << 0x58 | auVar74 << 0x60 | auVar74 << 0x68 | auVar74 << 0x70
                              | auVar74 << 0x78,0x7f,uVar30);
          pMVar12->shadow = cVar14;
        }
        else {
          uVar27 = (ulonglong)(byte)pMVar12->shadow;
          if (MVar29 == CLANK_000A) {
            auVar61 = ZEXT416(0xffffffff);
            auVar63 = auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60;
            auVar61 = ZEXT416(0xffffffff);
            auVar62 = auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60;
            lVar18 = (longlong)g_SpaceSceneFrame;
            auVar61 = vectorShiftLeftIntegerWord(auVar63,auVar63);
            auVar63 = vectorShiftLeftIntegerWord(auVar62,auVar62);
            auVar61 = vectorMultiplyAddFloatingPoint(auVar59,auStack_210,auVar61);
            auVar59 = vectorMultiplyAddFloatingPoint(auVar59,auStack_200,auVar63);
            auVar62 = loadVectorLeftIndexed(0x20,0x964570);
            auVar63 = vectorConvertToSignedFixedPointWordSaturate(auVar61,0);
            local_1d0 = (longlong)(int)(dVar40 * (double)local_1e8);
            auVar59 = vectorConvertToSignedFixedPointWordSaturate(auVar59,0);
            auVar61 = vectorCompareGreaterThanSignedWord(auVar74,auVar59);
            auVar59 = vectorCompareGreaterThanSignedWord(auVar74,auVar63);
            auVar61 = vectorLogicalAnd(auVar75,auVar61);
            auVar74 = ZEXT416(0);
            auVar59 = vectorLogicalAndWithComplement(auVar75,auVar59);
            auVar74 = vectorCompareEqualToUnsignedWord
                                (auVar62,auVar74 | auVar74 << 0x20 | auVar74 << 0x40 |
                                         auVar74 << 0x60);
            iVar32 = -DAT_00964590;
            auVar74 = vectorConditionalSelect(auVar61,auVar59,auVar74);
            uVar27 = (int)(dVar40 * (double)local_1e8) - lVar18 >> 0x3f & 0x18;
            auVar74 = auVar74 >> 0x60 & (GPiece<16>)0xff;
            cVar14 = storeVectorElementByteIndexed
                               (auVar74 | auVar74 << 8 | auVar74 << 0x10 | auVar74 << 0x18 |
                                auVar74 << 0x20 | auVar74 << 0x28 | auVar74 << 0x30 |
                                auVar74 << 0x38 | auVar74 << 0x40 | auVar74 << 0x48 |
                                auVar74 << 0x50 | auVar74 << 0x58 | auVar74 << 0x60 |
                                auVar74 << 0x68 | auVar74 << 0x70 | auVar74 << 0x78,0x7f,uVar30);
            pMVar12->shadow = cVar14;
            uVar27 = uVar27 + (ZERO_MASK(iVar32) &
                              (((int)(dVar40 * (double)local_1e4) - lVar18 >> 0x3f &
                               0xffffffffffffffe8U) + 0x18) - uVar27);
          }
        }
        if ((uVar27 & 0xff) != 0) {
          MB_SetZBoundsFromFloorCeil(pMVar12);
          MVar29 = pMVar12->oClass;
        }
        if (MVar29 == CLANK_000A) {
          ____Hero_AddPulsingMobyGlow(uVar30);
          MVar29 = pMVar12->oClass;
        }
        if ((MVar29 == RATCHET) &&
           (((Hero_UpdateInScene(uVar30), Level == Orxon && (UnlockableItems.o2Mask != '\0'))
            || (Level == Gemlik)))) {
          uVar27 = ZEXT48(DAT_00964578);
          if (DAT_00964578 == (MobyInstance *)0x0) {
            pMVar21 = CreateMoby(O2_MASK);
            uVar27 = (ulonglong)(int)pMVar21;
            DAT_00964578 = pMVar21;
            pMVar21->drawDistance = 0x40;
            uVar33 = pMVar12->color;
            uVar16 = pMVar12->light;
            pMVar21->modeBits = pMVar21->modeBits | (DISABLE_Z_WRITE|NO_POST_UPDATE|NO_UPDATE);
            pMVar21->color = uVar33;
            pMVar21->light = uVar16;
          }
          ____Hero_SnapMobyToBonePose(uVar30,uVar27);
        }
        if ((short)pMVar12->oClass < 0x216 && 0x212 < (short)pMVar12->oClass) {
          RegisterPostDraw(&PTR_Space_DrawShipEffects_00707cd8,pMVar12);
          RegisterFuncForMoby(&PTR_STUB_0015e2c0_00707c68,pMVar12);
          pMVar21 = g_SpaceshipPtr;
          if (DAT_00964590 == 0) {
            dVar40 = (double)animationSpeed;
            auVar74 = loadVectorLeftIndexed(0x34,0x95cd50);
            auVar59 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            local_1d0 = (longlong)(int)(dVar40 * dVar47);
            if (g_SpaceSceneFrame < (int)(dVar40 * dVar47)) {
              dVar40 = (double)FastIntToDouble
                                         (((ulonglong)(uint)g_SpaceSceneFrame & 0x3f) - 0x20);
              dVar35 = (double)(float)(dVar40 * dVar48 + dVar49);
              dVar40 = (double)(float)(dVar50 - dVar35);
              if (dVar35 - (double)(float)(dVar50 - dVar35) < 0.0) {
                dVar40 = dVar35;
              }
              dVar36 = (double)(float)(dVar51 - dVar35);
              if ((double)(float)(dVar51 - dVar35) - dVar40 < 0.0) {
                dVar36 = dVar40;
              }
              dVar40 = (double)(float)(dVar36 * dVar36);
              dVar39 = (double)(float)(dVar40 * (double)(float)(dVar40 * dVar36));
              dVar35 = (double)(float)(dVar40 * dVar39);
              uVar33 = (uint)((double)(float)((double)(float)(dVar40 * dVar35) * dVar55 +
                                             (double)(float)(dVar35 * dVar54 +
                                                            (double)(float)(dVar39 * dVar53 +
                                                                           (double)(float)((double)(
                                                  float)(dVar40 * dVar36) * dVar52 + dVar36)))) *
                             dVar56);
              local_1d0 = (longlong)(int)uVar33;
              uVar30 = (ulonglong)uVar33 + 0x78;
              uVar16 = (uint)((uVar30 & 0xffffff) << 8);
              uVar33 = (uint)uVar30 | uVar16;
              pMVar12->field60_0x90 =
                   uVar33 + ((uint)(ZERO_MASK((0x215 - (uint)pMVar12->oClass))) &
                            ((int)(uint)uVar30 >> 1 | uVar16) - uVar33) |
                   (uint)((uVar30 & 0xffffffff) << 0x10);
            }
            else {
              local_1d0 = (longlong)(int)(dVar40 * (double)local_1ec);
              if (g_SpaceSceneFrame < (int)(dVar40 * (double)local_1ec)) {
                auVar62 = vectorConvertFromSignedFixedPointWord(auVar74,0);
                auVar74 = ZEXT416(0xffffffff);
                auVar61 = auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60;
                auVar74 = ZEXT416(0xffffffff);
                auVar63 = auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60;
                auVar74 = ZEXT416(0xfffffff0);
                auVar61 = vectorShiftLeftIntegerWord(auVar61,auVar61);
                auVar64 = vectorShiftLeftIntegerWord(auVar63,auVar63);
                auVar63 = loadVectorLeftIndexed(0xfffffffffffff408,0x720000);
                auVar61 = vectorMultiplyAddFloatingPoint(auVar63,auVar69,auVar61);
                auVar62 = vectorNegativeMultiplySubtractFloatingPoint(auVar59,auVar70,auVar62);
                auVar65 = loadVectorLeftIndexed(0xa6,uVar30);
                auVar62 = vectorMultiplyAddFloatingPoint(auVar61,auVar62,auVar64);
                auVar64 = loadVectorRightIndexed(0xb6,uVar30);
                auVar61 = ZEXT416(8);
                auVar74 = vectorShiftRightWord
                                    (auVar65 | auVar64,
                                     auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60);
                auVar64 = vectorCompareEqualToUnsignedWord(auVar74,auVar73);
                auVar74 = vectorConvertToSignedFixedPointWordSaturate(auVar62,0);
                local_1d0 = (longlong)(int)(dVar40 * (double)local_1f0);
                auVar62 = vectorCompareGreaterThanSignedWord(auVar74,auVar71);
                auVar74 = vectorConditionalSelect(auVar74,auVar71,auVar62);
                auVar61 = vectorShiftLeftIntegerWord
                                    (auVar74,auVar61 | auVar61 << 0x20 | auVar61 << 0x40 |
                                             auVar61 << 0x60);
                auVar62 = vectorShiftLeftIntegerWord(auVar74,auVar72);
                auVar74 = vectorConditionalSelect(auVar74 | auVar61,auVar61,auVar64);
                auVar74 = (auVar74 | auVar62) >> 0x60 & (GPiece<16>)0xffffffff;
                uVar15 = storeVectorElementWordIndexed
                                   (auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60,
                                    0x90,uVar30);
                *(undefined4 *)((uint)&pMVar12->field60_0x90 & 0xfffffffc) = uVar15;
                pMVar12 = g_SpaceshipPtr;
                auVar74 = loadVectorLeftIndexed(0x34,0x95cd50);
                if ((int)(dVar40 * (double)local_1f0) < g_SpaceSceneFrame) {
                  auVar61 = vectorConvertFromSignedFixedPointWord(auVar74,0);
                  auVar74 = ZEXT416(0xffffffff);
                  auVar62 = auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60;
                  auVar74 = ZEXT416(0xffffffff);
                  auVar64 = auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60;
                  auVar74 = vectorShiftLeftIntegerWord(auVar62,auVar62);
                  auVar62 = vectorShiftLeftIntegerWord(auVar64,auVar64);
                  auVar74 = vectorMultiplyAddFloatingPoint(auVar63,auVar58,auVar74);
                  auVar59 = vectorNegativeMultiplySubtractFloatingPoint(auVar59,auVar60,auVar61);
                  auVar74 = vectorMultiplyAddFloatingPoint(auVar74,auVar59,auVar62);
                  auVar74 = vectorConvertToSignedFixedPointWordSaturate(auVar74,0);
                  auVar74 = auVar74 >> 0x60 & (GPiece<16>)0xff;
                  cVar14 = storeVectorElementByteIndexed
                                     (auVar74 | auVar74 << 8 | auVar74 << 0x10 | auVar74 << 0x18 |
                                      auVar74 << 0x20 | auVar74 << 0x28 | auVar74 << 0x30 |
                                      auVar74 << 0x38 | auVar74 << 0x40 | auVar74 << 0x48 |
                                      auVar74 << 0x50 | auVar74 << 0x58 | auVar74 << 0x60 |
                                      auVar74 << 0x68 | auVar74 << 0x70 | auVar74 << 0x78,0xbc,
                                      ZEXT48(g_SpaceshipPtr));
                  g_SpaceshipPtr->setByGroup = cVar14;
                  pMVar12->uid = 0;
                  RegisterFuncForMoby(&PTR_Space_DrawShipEngineGlow_00707cb0,pMVar12);
                  dVar40 = (double)animationSpeed;
                }
                local_1d0 = (longlong)(int)(dVar40 * dVar41);
                if (((int)(dVar40 * dVar41) < g_SpaceSceneFrame) &&
                   (DAT_0095cf14 = (float)((double)DAT_0095cf14 + dVar45),
                   dVar46 < (double)DAT_0095cf14)) {
                  DAT_0095cf14 = 1.0;
                }
              }
              else {
                DAT_0095cf14 = (float)((double)DAT_0095cf14 - dVar45);
                pMVar12->field60_0x90 = (uint)&DAT_00a0a0a0;
                if (DAT_0095cf14 < local_1d8) {
                  DAT_0095cf14 = 0.0;
                }
              }
            }
          }
          else {
            dVar40 = (double)animationSpeed;
            auVar74 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar59 = loadVectorLeftIndexed(0x34,0x95cd50);
            if (g_SpaceSceneFrame < (int)(dVar40 * dVar42)) {
              local_1d0 = (longlong)(int)(dVar40 * dVar43);
              if (g_SpaceSceneFrame < (int)(dVar40 * dVar43)) {
                Space_SpawnShipParticles();
                Space_SpawnShipParticles();
              }
              dVar40 = (double)FastIntToDouble
                                         (((ulonglong)(uint)g_SpaceSceneFrame & 0x3f) - 0x20);
              dVar35 = (double)(float)(dVar40 * dVar48 + dVar49);
              dVar40 = (double)(float)(dVar50 - dVar35);
              if (dVar35 - (double)(float)(dVar50 - dVar35) < 0.0) {
                dVar40 = dVar35;
              }
              dVar36 = (double)(float)(dVar51 - dVar35);
              if ((double)(float)(dVar51 - dVar35) - dVar40 < 0.0) {
                dVar36 = dVar40;
              }
              dVar40 = (double)(float)(dVar36 * dVar36);
              dVar39 = (double)(float)(dVar40 * (double)(float)(dVar40 * dVar36));
              dVar35 = (double)(float)(dVar40 * dVar39);
              uVar33 = (uint)((double)(float)((double)(float)(dVar40 * dVar35) * dVar55 +
                                             (double)(float)(dVar35 * dVar54 +
                                                            (double)(float)(dVar39 * dVar53 +
                                                                           (double)(float)((double)(
                                                  float)(dVar40 * dVar36) * dVar52 + dVar36)))) *
                             dVar56);
              local_1d0 = (longlong)(int)uVar33;
              pMVar12->setByGroup = '2';
              uVar30 = (ulonglong)uVar33 + 0x78;
              pMVar12->uid = 10;
              uVar16 = (uint)((uVar30 & 0xffffff) << 8);
              uVar33 = (uint)uVar30 | uVar16;
              pMVar12->field60_0x90 =
                   uVar33 + ((uint)(ZERO_MASK((0x215 - (uint)pMVar12->oClass))) &
                            ((int)(uint)uVar30 >> 1 | uVar16) - uVar33) |
                   (uint)((uVar30 & 0xffffffff) << 0x10);
              RegisterFuncForMoby(&PTR_Space_DrawShipEngineGlow_00707cb0,pMVar12);
            }
            else {
              local_1d0 = (longlong)(int)(dVar40 * dVar47);
              if ((int)(dVar40 * dVar47) < g_SpaceSceneFrame) {
                dVar40 = (double)FastIntToDouble
                                           (((ulonglong)(uint)g_SpaceSceneFrame & 0x3f) - 0x20
                                           );
                dVar35 = (double)(float)(dVar40 * dVar48 + dVar49);
                dVar40 = (double)(float)(dVar50 - dVar35);
                if (dVar35 - (double)(float)(dVar50 - dVar35) < 0.0) {
                  dVar40 = dVar35;
                }
                dVar36 = (double)(float)(dVar51 - dVar35);
                if ((double)(float)(dVar51 - dVar35) - dVar40 < 0.0) {
                  dVar36 = dVar40;
                }
                dVar40 = (double)(float)(dVar36 * dVar36);
                dVar39 = (double)(float)(dVar40 * (double)(float)(dVar40 * dVar36));
                dVar35 = (double)(float)(dVar40 * dVar39);
                uVar33 = (uint)((double)(float)((double)(float)(dVar40 * dVar35) * dVar55 +
                                               (double)(float)(dVar35 * dVar54 +
                                                              (double)(float)(dVar39 * dVar53 +
                                                                             (double)(float)((double
                                                  )(float)(dVar40 * dVar36) * dVar52 + dVar36)))) *
                               dVar56);
                local_1d0 = (longlong)(int)uVar33;
                uVar30 = (ulonglong)uVar33 + 0x78;
                uVar16 = (uint)((uVar30 & 0xffffff) << 8);
                uVar33 = (uint)uVar30 | uVar16;
                pMVar12->field60_0x90 =
                     uVar33 + ((uint)(ZERO_MASK((0x215 - (uint)pMVar12->oClass))) &
                              ((int)(uint)uVar30 >> 1 | uVar16) - uVar33) |
                     (uint)((uVar30 & 0xffffffff) << 0x10);
              }
              else {
                local_1d0 = (longlong)(int)(dVar40 * dVar44);
                if (g_SpaceSceneFrame < (int)(dVar40 * dVar44)) {
                  auVar61 = vectorConvertFromSignedFixedPointWord(auVar59,0);
                  auVar59 = ZEXT416(0xffffffff);
                  auVar63 = auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60;
                  auVar59 = ZEXT416(0xffffffff);
                  auVar62 = auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60;
                  auVar59 = vectorShiftLeftIntegerWord(auVar63,auVar63);
                  auVar63 = vectorShiftLeftIntegerWord(auVar62,auVar62);
                  auVar62 = loadVectorLeftIndexed(0xfffffffffffff408,0x720000);
                  auVar59 = vectorMultiplyAddFloatingPoint(auVar62,auVar66,auVar59);
                  auVar74 = vectorNegativeMultiplySubtractFloatingPoint(auVar74,auVar67,auVar61);
                  auVar74 = vectorMultiplyAddFloatingPoint(auVar59,auVar74 ^ auVar57,auVar63);
                  auVar74 = vectorConvertToSignedFixedPointWordSaturate(auVar74,0);
                  auVar74 = auVar74 >> 0x60 & (GPiece<16>)0xff;
                  cVar14 = storeVectorElementByteIndexed
                                     (auVar74 | auVar74 << 8 | auVar74 << 0x10 | auVar74 << 0x18 |
                                      auVar74 << 0x20 | auVar74 << 0x28 | auVar74 << 0x30 |
                                      auVar74 << 0x38 | auVar74 << 0x40 | auVar74 << 0x48 |
                                      auVar74 << 0x50 | auVar74 << 0x58 | auVar74 << 0x60 |
                                      auVar74 << 0x68 | auVar74 << 0x70 | auVar74 << 0x78,0xbc,
                                      ZEXT48(g_SpaceshipPtr));
                  g_SpaceshipPtr->setByGroup = cVar14;
                  pMVar21->uid = 0;
                  RegisterFuncForMoby(&PTR_Space_DrawShipEngineGlow_00707cb0,pMVar21);
                  auVar74 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                  auVar59 = loadVectorLeftIndexed(0x34,0x95cd50);
                }
                auVar59 = auVar59 >> 0x60 & (GPiece<16>)0xffffffff;
                auVar61 = auVar74 >> 0x60 & (GPiece<16>)0xffffffff;
                auVar74 = ZEXT416(0xffffffff);
                auVar74 = auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60;
                auVar59 = vectorConvertFromSignedFixedPointWord
                                    (auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60,0
                                    );
                auVar74 = vectorShiftLeftIntegerWord(auVar74,auVar74);
                auVar63 = loadVectorLeftIndexed(0xfffffffffffff408,0x720000);
                auVar63 = vectorMultiplyAddFloatingPoint(auVar63,auVar69,auVar74);
                auVar74 = ZEXT416(0xffffffff);
                auVar74 = auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60;
                auVar62 = loadVectorLeftIndexed(0xa6,uVar30);
                auVar59 = vectorNegativeMultiplySubtractFloatingPoint
                                    (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60,
                                     auVar70,auVar59);
                auVar61 = vectorShiftLeftIntegerWord(auVar74,auVar74);
                auVar74 = ZEXT416(0xfffffff0);
                auVar61 = vectorMultiplyAddFloatingPoint(auVar63,auVar59 ^ auVar57,auVar61);
                auVar63 = loadVectorRightIndexed(0xb6,uVar30);
                auVar59 = ZEXT416(8);
                auVar74 = vectorShiftRightWord
                                    (auVar62 | auVar63,
                                     auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60);
                auVar63 = vectorCompareEqualToUnsignedWord(auVar74,auVar73);
                auVar74 = vectorConvertToSignedFixedPointWordSaturate(auVar61,0);
                auVar59 = vectorShiftLeftIntegerWord
                                    (auVar74,auVar59 | auVar59 << 0x20 | auVar59 << 0x40 |
                                             auVar59 << 0x60);
                auVar61 = vectorShiftLeftIntegerWord(auVar74,auVar72);
                auVar74 = vectorConditionalSelect(auVar74 | auVar59,auVar59,auVar63);
                auVar74 = (auVar74 | auVar61) >> 0x60 & (GPiece<16>)0xffffffff;
                uVar15 = storeVectorElementWordIndexed
                                   (auVar74 | auVar74 << 0x20 | auVar74 << 0x40 | auVar74 << 0x60,
                                    0x90,uVar30);
                *(undefined4 *)((uint)&pMVar12->field60_0x90 & 0xfffffffc) = uVar15;
              }
            }
          }
        }
        iVar31 = iVar31 + 1;
        puVar19 = puVar19 + 1;
      } while (iVar31 < g_SpaceSceneMobyCnt.piece<0,2>());
    }
    sound_Update();
    UpdatePointLights();
    UpdateHeroLightAngle();
    UpdateGameCounters();
  }
  else {
    if (g_SpeechPlaying.status != 7 && g_SpeechPlaying.status != 6) {
      g_SpeechPlaying.status = 5;
    }
    VU1_setBufSizeByLevel();
    g_ViewContext.xratio = 0.63;
    UpdateViewContext();
    iVar31 = 0;
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        pMVar12 = (MobyInstance *)puVar19[0x5e];
        if (pMVar12 != (MobyInstance *)0x0) {
          pMVar12->pClass->seq_cnt = pMVar12->pClass->seq_cnt + 0xff;
          *(undefined4 *)(&pMVar12->pClass->type + (uint)pMVar12->pClass->seq_cnt * 4) = 0;
          DeleteMoby(pMVar12);
        }
        if (DAT_00964578 != (MobyInstance *)0x0) {
          DeleteMoby(DAT_00964578);
        }
        iVar31 = iVar31 + 1;
        puVar19 = puVar19 + 1;
      } while (iVar31 < g_SpaceSceneMobyCnt.piece<0,2>());
    }
    pMVar12 = MobyInstancePermEnd;
    g_SpaceshipPtr->modeBits =
         g_SpaceshipPtr->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
    uVar3 = pMVar12->state;
    while (uVar3 != 0xff) {
      if (((pMVar12->state & 0x80) == 0) &&
         ((pMVar12->oClass == MINE_004A || (pMVar12->oClass == DECOY)))) {
        pMVar12->modeBits =
             pMVar12->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE|DISABLED);
      }
      uVar3 = pMVar12[1].state;
      pMVar12 = pMVar12 + 1;
    }
    if (DAT_00964590 == 0) {
      BeginMenu(0);
      g_MenuScreen = 0xe;
      g_CutscenePlaying = 1;
    }
    else {
      g_gameMode = GAME_MODE_NORMAL;
      music_Unpause();
      g_CutscenePlaying = 1;
      g_heroInvisible = 0;
      Hero_MakeVisible();
      if (g_spaceArrivalPending.piece<0,2>() == 0) {
        Hero_Warp(&g_heroSpawnPosition.x,&g_heroSpawnRot.x,0,1);
      }
      else {
        SetPositionAfterMovie();
      }
    }
  }
  return;
}


// 0x01639a8 (0xf0 bytes)
void DisplayLoadingScreen(void)

{
  if (g_CutscenePlaying != 0) {
    return;
  }
  if (DAT_00964590 < 4) {
    if (0 < DAT_00964590) {
      if (DAT_00964590 < 2) {
        return;
      }
      if (DAT_00964590 < 3) {
        return;
      }
LAB_00163a44:
      g_RenderFlags = 0x7f;
      UpdateOcclusion(1);
      DefaultDraw();
      Render_DispatchJob();
      return;
    }
    if (DAT_00964590 < 0) {
      return;
    }
  }
  else {
    if (DAT_00964590 < 7) {
      if (4 < DAT_00964590) {
        return;
      }
      UpdateOcclusion(0);
      TransitionDraw_Space();
      Render_DispatchJob();
      return;
    }
    if (DAT_00964590 < 8) goto LAB_00163a44;
    if (8 < DAT_00964590) {
      return;
    }
  }
  UpdateOcclusion(1);
  SetupDefaultDrawMovie();
  Render_DispatchJob();
  return;
}


// 0x0163aa0 (0x940 bytes)
// strings: 006537a0: 'space_wad' | 006537b0: 'rc1/ps3data/global/space_wad.ps3' | 006537d8: 'rc1/ps3data/global/space_wad.vram' | 00653800: 'rc1/ps3data/global/space_wad/planet%d.ps3' | 00653830: 'rc1/ps3data/global/space_wad/language%d_%d.ps3' | 00653860: 'rc1/ps3data/global/space_wad/planet%d.vram' | 00653890: 'rc1/ps3data/global/space_wad/language%d_%d.vram' | 006538c0: 'rc1/ps3data/global/space_wad.bnk'

void SpaceTransition_LoadWad(void)

{
  uint uVar1;
  uint *puVar2;
  MobyInstance *pMVar3;
  uint *puVar4;
  int iVar6;
  longlong lVar5;
  MobyClass *pClass;
  int *piVar7;
  int random;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar17;
  ulonglong uVar16;
  int iVar18;
  char acStack_170 [272];
  
  DAT_00964590 = 4;
  DAT_00964594 = 0xffff;
  iVar15 = 0;
  SceneScreenFade = 1.0;
  g_heroMobyPtr = (MobyInstance *)0x0;
  DAT_0095cf14 = 0;
  g_CutscenePlaying = 0;
  DAT_00e5aa64 = 0x100000;
  InitMemSlots();
  g_GsRamAlloc = GSmem.base;
  DAT_00966ad4 = GSmem.base;
  FastMemSet(&MobyClassRef,0xffffffff87654321,0x10);
  FastMemSet(&MobyClassLookup,0xffffffffffffffff,0x800);
  FastMemSet(&MobyTexLookup,0xffffffffffffffff,0xe00);
  FastMemSet(&MobyMipDists,0,0xe0);
  InitViewContext();
  UpdateViewContext();
  VU1_initChain();
  idol::m_LoadGameFileS(DAT_00a108ec,"space_wad");
  iVar6 = LoadAssetFromFile
                    ("rc1/ps3data/global/space_wad.ps3",DAT_00a10920,0xffffffffffffffff);
  random = LoadAssetFromFile
                     ("rc1/ps3data/global/space_wad.vram",DAT_00a10924,0xffffffffffffffff);
  puVar2 = DAT_00a10920;
  uVar17 = DAT_00a10924 + random + 0x3fU & 0xffffffc0;
  uVar10 = (int)DAT_00a10920 + DAT_00a10920[7];
  DAT_00a10920[5] = uVar17;
  puVar2[7] = uVar10;
  puVar2[6] = uVar17 + 0x20000;
  FadeToBlack((int)(animationSpeed * 12.5));
  FUN_00503128_RET_0(0);
  puVar4 = DAT_00a10920;
  uVar14 = ZEXT48(DAT_00a10920);
  lVar5 = (longlong)g_Language;
  puVar2 = DAT_00a10920 + 4;
  iVar11 = g_Language + -1;
  random = -g_Language;
  uVar16 = uVar14 + DAT_00a10920[3] & 0xffffffff;
  iVar18 = DAT_00a10924 - *(int *)(g_viewMtxPtr + 0x4ac);
  uVar17 = (uint)(uVar14 + DAT_00a10920[3]);
  DAT_00a10920[3] = uVar17;
  DAT_00a561c8 = (ulonglong)*puVar2 + 1 & 0xffffffff;
  DAT_00a561d0 = (ulonglong)*puVar2 + 2 & 0xffffffff;
  lVar5 = (longlong)iVar11 + (ZERO_MASK(random) & lVar5 - iVar11);
  snprintf(acStack_170,"rc1/ps3data/global/space_wad/planet%d.ps3",Level);
  LoadAssetFromFile(acStack_170,uVar16 + DAT_00a561c8 * 0x24 & 0xffffffff,0x24);
  *(uint *)(uVar17 + (int)(DAT_00a561c8 << 5) + (int)(DAT_00a561c8 << 2)) =
       (puVar4[5] - DAT_00a10924) + iVar18;
  snprintf(acStack_170,"rc1/ps3data/global/space_wad/language%d_%d.ps3",lVar5,Level);
  LoadAssetFromFile(acStack_170,uVar16 + DAT_00a561d0 * 0x24 & 0xffffffff,0x24);
  *(uint *)(uVar17 + (int)(DAT_00a561d0 << 5) + (int)(DAT_00a561d0 << 2)) =
       (puVar4[6] - DAT_00a10924) + iVar18;
  snprintf(acStack_170,"rc1/ps3data/global/space_wad/planet%d.vram",Level);
  LoadAssetFromFile(acStack_170,puVar4[5],0x20000);
  snprintf(acStack_170,"rc1/ps3data/global/space_wad/language%d_%d.vram",lVar5,Level);
  LoadAssetFromFile(acStack_170,puVar4[6],0xffffffffffffffff);
  if (puVar4[4] != 0) {
    uVar17 = 0;
    do {
      uVar17 = uVar17 + 1;
      *(int *)uVar16 = *(int *)uVar16 + iVar18;
      uVar16 = uVar16 + 0x24;
    } while (uVar17 < puVar4[4]);
  }
  uVar16 = uVar14 + puVar4[2] & 0xffffffff;
  uVar17 = (uint)(uVar14 + puVar4[2]);
  puVar4[2] = uVar17;
  cellGcmAddressToOffset(*(uint *)(uVar17 + 0x14) + uVar14 & 0xffffffff,uVar16 + 0x14);
  cellGcmAddressToOffset(*(uint *)(uVar17 + 0x18) + uVar14 & 0xffffffff,uVar16 + 0x18);
  if (*(short *)(uVar17 + 6) != 0) {
    uVar10 = 0;
    lVar5 = uVar16 + 0x1c;
    do {
      uVar8 = *(uint *)((int)uVar16 + 0x1c) + uVar14;
      uVar9 = uVar8 & 0xffffffff;
      random = (int)uVar8;
      *(int *)((int)uVar16 + 0x1c) = random;
      if (*(short *)(random + 2) != 0) {
        uVar1 = puVar4[3];
        uVar12 = 0;
        random = *(int *)lVar5;
        do {
          uVar9 = uVar9 + 0x10;
          uVar12 = uVar12 + 1;
          *(int *)uVar9 = *(int *)uVar9 * 0x24 + uVar1;
        } while (uVar12 < *(ushort *)(random + 2));
      }
      uVar10 = uVar10 + 1;
      lVar5 = lVar5 + 4;
      uVar16 = uVar16 + 4;
    } while (uVar10 < *(ushort *)(uVar17 + 6));
  }
  oClass_to_mClass_lookup = 0;
  uVar16 = uVar14 + *puVar4 & 0xffffffff;
  if (puVar4[1] != 0) {
    uVar17 = 0;
    do {
      random = *(int *)uVar16;
      iVar11 = random + (int)puVar4;
      pClass = (MobyClass *)(iVar11 + ((uint)(ZERO_MASK(random)) & -iVar11));
      LoadMobyPClasses(pClass,(void *)0x0,(char *)0x0,((int *)uVar16)[1]);
      iVar11 = EffectTexHeaders;
      piVar7 = (int *)pClass->packets;
      piVar13 = (int *)piVar7[2];
      random = *piVar7;
      if (random != 0) {
        uVar10 = puVar4[3];
        do {
          random = random + -1;
          *piVar13 = ((*piVar13 - iVar11) / 0x24) * 0x24 + uVar10;
          piVar13 = piVar13 + 4;
        } while (0 < random);
      }
      random = piVar7[1];
      piVar7 = (int *)piVar7[3];
      if (random != 0) {
        do {
          random = random + -1;
          *piVar7 = puVar4[3] + ((*piVar7 - iVar11) / 0x24) * 0x24;
          piVar7 = piVar7 + 4;
        } while (0 < random);
      }
      uVar17 = uVar17 + 1;
      uVar16 = uVar16 + 0x20;
    } while (uVar17 < puVar4[1]);
  }
  ____Loaders_RelocSpaceWadPtrs(uVar14 + puVar4[8] & 0xffffffff,0,0,0);
  pMVar3 = (MobyInstance *)((int)DAT_00a10920 + iVar6 + 0x3f & 0xffffffc0);
  Gameplay = pMVar3;
  FastMemSetZero(PointLights,0x100);
  FastMemSetZero(&PointLightData,0x180);
  FastMemSetZero(DirectionalLights,0x400);
  FastMemCopy(DirectionalLights,&DAT_00731c00,0x40);
  g_MobyInstance = pMVar3;
  FastMemSet(pMVar3,0,0x4000);
  DAT_00a390b0 = pMVar3 + 0x40;
  MobyInstancePermEnd = g_MobyInstance;
  g_MobyInstance->state = 0xff;
  PartInstances = pMVar3 + 0x60;
  MobyInstanceEnd = g_MobyInstance + 0x3f;
  PartIndexNext = 0;
  PartIndexTop = 0xffffffff;
  PartActiveCnt = 0;
  FastMemSetZero(&DAT_00a52000,0x200);
  ResetDrawGlobals();
  DAT_00a390b8 = 500;
  PartClipDist = 0x1f4000;
  random = rand();
  g_currentLoadingScreen = random >> 0x10 & 3;
  g_loadingCount = 0;
  DAT_009645c0 = 0;
  g_LoadScreenRelated = 0;
  DAT_00a561e0 = DAT_00731f70;
  DAT_00a561e4 = DAT_00731f74;
  DAT_00a561e8 = DAT_00731f78;
  DAT_00a561ec = DAT_00731f7c;
  if ((Level == Veldin) || ((Level == Novalis && (g_SeenPlanets.Kerwan == '\0')))) {
    g_currentLoadingScreen = 4;
    g_loadingCount = 2;
  }
  FastMemSet(&DAT_0095cd50,0,0x1c0);
  FastMemSet(&DAT_00a1be80,0,0x40);
  FastMemSet(&DAT_00a1bec0,0,0x40);
  g_SceneLoadBuffer = g_NpcBuffer + 0x60000;
  DAT_0095cda8 = g_NpcBuffer;
  piVar7 = &g_SceneChunkPtrs;
  uVar16 = uVar14 + puVar4[g_currentLoadingScreen + 10] & 0xffffffff;
  do {
    piVar13 = (int *)uVar16;
    if (piVar13[1] == 0) break;
    iVar15 = iVar15 + 1;
    uVar16 = uVar16 + 8;
    *piVar7 = (int)puVar4 + *piVar13;
    piVar7 = piVar7 + 1;
  } while (iVar15 < 0x46);
  ParseSpaceSceneChunk(0);
  DAT_0071f404 = -1;
  LoadAssetFromFile("rc1/ps3data/global/space_wad.bnk",pMVar3 + 0x460,0xffffffffffffffff);
  FUN_00505b30(pMVar3 + 0x460,&PTR_sound_BasicCB_00707c38,&DAT_0071f404);
  do {
    FlushCache(0);
    STUB_00503078(0);
    STUB_00505d20();
  } while (DAT_0071f404 == -1);
  STUB_00505f48();
  return;
}


// 0x01643e0 (0x1e8 bytes)
// strings: 006538e4: '/rc1/ps3data/movies/story[%d].bik'

void PlaySpaceMovie(undefined8 param_1)

{
  ulonglong uVar1;
  int iVar3;
  undefined8 uVar2;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  char acStack_f0 [64];
  GPiece<128> auStack_b0;
  
  uVar6 = ZEXT48(g_pBinkPlayer);
  DAT_009637cb = DAT_009637cb | 8;
  if (g_pBinkPlayer == (void *)0x0) {
    uVar1 = FUN_005e38b0(0x60);
    uVar6 = 0;
    if ((int)uVar1 != 0) {
      FUN_004d5d5c(uVar1);
      uVar6 = uVar1;
    }
    g_pBinkPlayer = (void *)uVar6;
  }
  iVar3 = snprintf(acStack_f0,"/rc1/ps3data/movies/story[%d].bik",param_1);
  uVar2 = FUN_004ef34c(iVar3);
  FUN_004ef4d0(uVar2,acStack_f0,auStack_b0);
  FUN_004d5448(uVar6,auStack_b0,g_Language,0x400);
  iVar3 = 0;
  lVar5 = 0;
  while( true ) {
    UpdatePad();
    lVar5 = (ZERO_MASK((g_Pad.buttonsPressedThisFrame & START)) & lVar5 - 1U) + 1;
    UpdateOcclusion(0);
    iVar4 = FUN_004d5524(uVar6);
    cellSysutilCheckCallback();
    if (1 < iVar4) {
      iVar3 = FUN_004d59e8(uVar6);
    }
    Render_DispatchJob();
    if ((int)lVar5 != 0) break;
    if (iVar3 != 0) {
LAB_0016455c:
      STUB_00503078(0);
      sceGsSyncPath(0,0);
      STUB_00503208(&PTR_____Unused_Respawn_IncCounter_a53504_00707950);
      FadeToBlack(4);
      DAT_009637cb = DAT_009637cb | 0x10;
      return;
    }
  }
  FUN_004d4c88(uVar6);
  goto LAB_0016455c;
}


// 0x01645c8 (0x4 bytes)
void STUB_001645c8(...)

{
  return;
}


// 0x01645cc (0x18c bytes)
// strings: 00653908: 'space_plates' | 00653918: '/rc1/ps3data/global/space_plates/plate%d.ps3' | 00653948: '/rc1/ps3data/global/space_plates/plate%d.vram'

void LoadSpacePlate
               (undefined8 param_1,longlong param_2,longlong param_3,undefined4 *param_4,
               int *param_5,int *param_6)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int *piVar4;
  char acStack_c0 [128];
  
  idol::m_LoadGameFileS(DAT_00a108ec + 0x100000,"space_plates");
  snprintf(acStack_c0,"/rc1/ps3data/global/space_plates/plate%d.ps3",param_1);
  lVar3 = LoadAssetFromFile(acStack_c0,DAT_00a10920,0xffffffffffffffff);
  snprintf(acStack_c0,"/rc1/ps3data/global/space_plates/plate%d.vram",param_1);
  LoadAssetFromFile(acStack_c0,DAT_00a10924,0xffffffffffffffff);
  piVar2 = DAT_00a10920;
  lVar3 = lVar3 / 0x24;
  if (0 < (int)lVar3) {
    iVar1 = DAT_00a10924 - *(int *)(DAT_00902e9c + 0x4ac);
    piVar4 = DAT_00a10920;
    do {
      lVar3 = lVar3 + -1;
      *piVar4 = *piVar4 + iVar1;
      piVar4 = piVar4 + 9;
    } while (0 < (int)lVar3);
  }
  *param_4 = piVar2;
  *param_5 = (int)piVar2 + (int)(param_2 << 5) + (int)(param_2 << 2);
  *param_6 = (int)piVar2 + (int)(param_3 << 5) + (int)(param_3 << 2);
  FUN_00503128_RET_0(0);
  return;
}


// 0x0164760 (0x4e8 bytes)
void PlaySpacePlate(undefined8 param_1,int param_2,int param_3,longlong param_4,int param_5)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  GPiece<4> local_90;
  GPiece<4> local_8c;
  GPiece<24> local_88;
  
  LoadSpacePlate(param_1,param_2 + 1,param_3 + 1,local_90,local_8c,local_88);
  if (param_5 != 0) {
    STUB_004d04d0(Level);
    g_LoadingStage = 0;
    DAT_00964562 = 0;
  }
  STUB_00503078(0);
  VU1_initChain();
  lVar3 = 0;
  if (0 < (int)param_4) {
    dVar5 = 0.0016666667070239782;
    dVar6 = 0.4000000059604645;
    do {
      UpdateOcclusion(0);
      uVar1 = FUN_00502f74_RET_0(0,0,0,0x80,0);
      SetGSReg(0x15,uVar1);
      uVar1 = FUN_00502f08(0,0,0,0,0,0);
      SetGSReg(6,uVar1);
      dVar4 = (double)FastIntToDouble((int)lVar3 % 600);
      dVar4 = dVar4 * dVar5;
      if (param_2 + 1 == param_3 + 1) {
        Sprite_DrawShape
                  (0,(g_ScreenHalfHeight >> 1) +
                     (uint)(g_ScreenHalfHeight < 0 && (g_ScreenHalfHeight & 1U) != 0) +
                     -0x20,0x200,0x40,0,4,(int)dVar4,(int)((double)(float)dVar4 + dVar6));
        Sprite_DrawShape
                  (0,(g_ScreenHalfHeight >> 1) +
                     (uint)(g_ScreenHalfHeight < 0 && (g_ScreenHalfHeight & 1U) != 0) +
                     -0x20,0x200,0x40,0,0,0x200,0x40);
      }
      else {
        iVar2 = (int)((double)(float)dVar4 + dVar6);
        Sprite_DrawShape
                  (0,(g_ScreenHalfHeight >> 1) +
                     (uint)(g_ScreenHalfHeight < 0 && (g_ScreenHalfHeight & 1U) != 0) +
                     -0x2e,0x200,0x40,0,4,(int)dVar4,iVar2);
        Sprite_DrawShape
                  (0,(g_ScreenHalfHeight >> 1) +
                     (uint)(g_ScreenHalfHeight < 0 && (g_ScreenHalfHeight & 1U) != 0) +
                     -0x2e,0x200,0x40,0,0,0x200,0x40);
        if (0x40 < (int)lVar3) {
          Sprite_DrawShape
                    (0,(g_ScreenHalfHeight >> 1) +
                       (uint)(g_ScreenHalfHeight < 0 && (g_ScreenHalfHeight & 1U) != 0),
                     0x200,0x40,0,4,(int)dVar4,iVar2);
          Sprite_DrawShape
                    (0,(g_ScreenHalfHeight >> 1) +
                       (uint)(g_ScreenHalfHeight < 0 && (g_ScreenHalfHeight & 1U) != 0),
                     0x200,0x40,0,0,0x200,0x40);
        }
      }
      memcard_Update();
      FlowState_Update();
      STUB_00174cf4(1);
      STUB_00503078(0);
      STUB_000684a0();
      STUB_00174cf0();
      VU1_swapChain();
      if (param_5 != 0) {
        iVar2 = LoadLevelFiles();
        if (iVar2 == 0) {
          param_4 = param_4 + ((longlong)(int)param_4 - (longlong)(int)(lVar3 + 0x14) >> 0x3f &
                              (lVar3 + 0x14) - param_4);
        }
        else {
          param_5 = 0;
        }
      }
      Render_DispatchJob();
      lVar3 = lVar3 + 1;
    } while ((int)lVar3 < (int)param_4);
  }
  FadeToBlack(2);
  return;
}


// 0x0164c58 (0x930 bytes)
// strings: 0065397f: '9unloaded sound bank %#010x\n'

void DoSpaceTransition(void)

{
  bool bVar1;
  LevelId LVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  lVar4 = 5;
  if (!g_JapaneseMode) {
    lVar4 = (longlong)(g_Language + -1);
    lVar4 = lVar4 + (lVar4 >> 0x3f & -lVar4);
  }
  g_gameMode = GAME_MODE_SPACE;
  g_CollOutput.collCount = g_CollOutput.collCount | 0x80000000;
  g_SpaceshipVariant = 0;
  if ((g_SeenPlanets.Batalia != 0) || (7 < (int)g_newlevelnum)) {
    g_SpaceshipVariant = 1;
  }
  if ((g_SeenPlanets.Oltanis != 0) || (0xd < (int)g_newlevelnum)) {
    g_SpaceshipVariant = 2;
  }
  FlushCache(0);
  STUB_00506074(0,5,0,0,0);
  STUB_00505f4c();
  STUB_00505d20();
  sound_StopAllSounds();
  music_Stop();
  g_FinishedLoading = 1;
  if (g_pSoundDefs != 0) {
    snd_UnloadBank(*(undefined4 *)(g_pSoundDefs + 0x1c),1);
    STUB_00505f48();
    printf("unloaded sound bank %#010x\n",*(undefined4 *)(g_pSoundDefs + 0x1c));
  }
  DAT_0071f404 = 0;
  FUN_00506664(0);
  STUB_005066bc_RET_0(0);
  g_ViewContext.fogR = 0;
  g_ViewContext.fogG = 0;
  g_ViewContext.fogB = 0x10;
  g_ViewContext.fogNearDist = 0.0;
  g_ViewContext.fogFarDist = 524288.0;
  g_ViewContext.fogNearIntensity = 255.0;
  g_ViewContext.fogFarIntensity = 128.0;
  STUB_000780f4(0,0,0);
  dVar5 = (double)animationSpeed;
  if ((int)g_newlevelnum < 0) {
    while (iVar3 = memcard_IsSaveSystemIdle(), iVar3 == 0) {
      memcard_Update();
      FlowState_Update();
    }
    FadeToBlack((int)(animationSpeed * 6.5));
    Level = g_newlevelnum;
    STUB_000def38_RET_1();
    FUN_00503128_RET_0(0);
    g_FinishedLoading = 0;
    STUB_001754e0();
    return;
  }
  dVar7 = 240.5;
  if ((g_newlevelnum == Veldin) && (VisitedPlanets.Veldin == '\0')) {
    FadeToBlack((int)(dVar5 * 6.5));
    PlaySpacePlate(lVar4,0,1,(int)((double)animationSpeed * dVar7),0);
    PlaySpaceMovie(0);
    PlaySpacePlate(lVar4,2,2,(int)(animationSpeed * 180.5),0);
    PlaySpaceMovie(1);
    Level = g_newlevelnum;
    PlaySpacePlate(lVar4,3,4,(int)((double)animationSpeed * dVar7),1);
    PlaySpaceMovie(2);
  }
  else if ((Level == Veldin) && ((g_newlevelnum == Novalis && (VisitedPlanets.Novalis == '\0')))) {
    FadeToBlack((int)(dVar5 * 6.5));
    PlaySpacePlate(lVar4,5,6,(int)((double)animationSpeed * dVar7),0);
    PlaySpaceMovie(3);
    PlaySpaceMovie(4);
    PlaySpacePlate(lVar4,7,7,(int)(animationSpeed * 180.5),0);
    PlaySpaceMovie(5);
    LVar2 = Level;
    dVar5 = (double)animationSpeed;
    Level = g_newlevelnum;
    (&VisitedPlanets.Veldin)[LVar2] = '\x02';
    PlaySpacePlate(lVar4,8,8,(int)(dVar5 * dVar7),1);
  }
  else {
    dVar6 = 12.5;
    if ((g_newlevelnum == Eudora) && (VisitedPlanets.Eudora == '\0')) {
      FadeToBlack((int)(dVar5 * 12.5));
      PlaySpacePlate(lVar4,9,10,(int)((double)animationSpeed * dVar7),0);
      PlaySpaceMovie(6);
      dVar5 = (double)animationSpeed;
    }
    if (((Level == Umbris) && (VisitedPlanets.Umbris != 2)) && (g_SeenPlanets.Batalia != 0)) {
      FadeToBlack((int)(dVar5 * dVar6));
      PlaySpacePlate(lVar4,0xb,0xb,(int)((double)animationSpeed * dVar7),0);
      PlaySpaceMovie(7);
      dVar5 = (double)animationSpeed;
    }
    if ((g_newlevelnum == Gemlik) && (VisitedPlanets.Gemlik == 0)) {
      FadeToBlack((int)(dVar5 * dVar6));
      PlaySpacePlate(lVar4,0xc,0xd,(int)((double)animationSpeed * dVar7),0);
      PlaySpaceMovie(8);
      dVar5 = (double)animationSpeed;
    }
    if (((Level == Oltanis) && (VisitedPlanets.Oltanis != 2)) && (g_SeenPlanets.Quartu != 0)) {
      FadeToBlack((int)(dVar5 * dVar6));
      PlaySpacePlate(lVar4,0xe,0xe,(int)((double)animationSpeed * dVar7),0);
      PlaySpaceMovie(9);
      dVar5 = (double)animationSpeed;
    }
    if ((g_newlevelnum == Kalebo) && (VisitedPlanets.Kalebo == 0)) {
      FadeToBlack((int)(dVar5 * dVar6));
      PlaySpacePlate(lVar4,0xf,0x10,(int)((double)animationSpeed * dVar7),0);
      PlaySpaceMovie(10);
    }
    LVar2 = g_newlevelnum;
    if (Level < (Veldin2|Novalis)) {
      bVar1 = true;
      if ((Level == Umbris) && (bVar1 = true, g_SeenPlanets.Batalia == 0)) {
        bVar1 = false;
      }
      if (((Level != Oltanis) || (g_SeenPlanets.Quartu != 0)) && (bVar1)) {
        (&VisitedPlanets.Veldin)[Level] = '\x02';
      }
    }
    g_LoadingStage = 0;
    DAT_00964562 = 1;
    Level = LVar2;
    SpaceTransition_LoadWad();
    STUB_004d04d0(Level);
    if (g_CutscenePlaying == 0) {
      iVar3 = 0;
      do {
        STUB_00174cf0();
        VU1_swapChain();
        STUB_00078104();
        STUB_00078134();
        STUB_000780fc();
        UpdatePad();
        UpdateSpace();
        DisplayLoadingScreen();
        memcard_Update();
        FlowState_Update();
        STUB_00174cf4(1);
        STUB_00503078(0);
        DAT_0159c330 = DAT_0159c330 + 1;
        SetFrameCount();
        if (iVar3 == 0) {
          iVar3 = LoadLevelFiles();
        }
      } while (g_CutscenePlaying == 0);
      if (iVar3 != 0) goto LAB_00165540;
    }
    do {
      FlushCache(0);
      STUB_00503078(0);
      memcard_Update();
      FlowState_Update();
      SetFrameCount();
      iVar3 = LoadLevelFiles();
    } while (iVar3 == 0);
  }
LAB_00165540:
  FUN_00503128_RET_0(0);
  g_FinishedLoading = 0;
  STUB_001754e0();
  return;
}


