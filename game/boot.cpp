// game/boot.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 31 functions, 0x10200-0x14b7c
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "game/boot.h"
#include "game/bloaders.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/crt0.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/initonce.h"
#include "game/lights.h"
#include "game/loaders.h"
#include "game/mUnk.h"
#include "game/main.h"
#include "game/map.h"
#include "game/memcard.h"
#include "game/mission.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/pad.h"
#include "game/partproc.h"
#include "game/partupd.h"
#include "game/path.h"
#include "game/pause.h"
#include "game/respawn.h"
#include "game/sUnk.h"
#include "game/skyfunc.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/tieproc.h"
#include "game/update.h"
#include "game/update/moby1118.h"
#include "game/vendor.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"
#include "idol/idol.h"
#include "idol/idol_draw.h"
#include "idol/mUnk.h"
#include "idol/mUnk2.h"
#include "idol/mathfunc.h"
#include "idol/shrubfunc.h"
#include "idol/sound.h"
#include "idol/tfragfunc.h"
#include "sdk/fios.h"
#include "sdk/libcgc/libcgc_cell_localize.h"
#include "sdk/libfios/fios_base.h"
#include "sdk/libfios/fios_dearchive.h"
#include "sdk/libfios/fios_internal.h"
#include "sdk/libfios/fios_media_ps3ppu.h"
#include "sdk/libfios/fios_op.h"
#include "sdk/libfios/fios_scheduler.h"
#include "sdk/mUnk.h"
#include "sdk/sce.h"
#include "sdk/xUnk5.h"

// 0x0010200 (0x2c bytes)
void _init(void)

{
  frame_dummy();
  __do_global_ctors_aux();
  return;
}


// 0x0010230 (0x8 bytes)
undefined8 STUB_00010230_RET_0(...)

{
  return 0;
}


// 0x0010238 (0x150 bytes)
// strings: 006510fc: '/rc1/ps3data/movies/logo_movie.bik'

/* [boot] Plays /rc1/ps3data/movies/logo_movie.bik once (g_LogoMovieDone guards). Same code inlined
   in GameStart. */

void PlayLogoMovie(void)

{
  ulonglong uVar1;
  int iVar3;
  undefined8 uVar2;
  ulonglong uVar4;
  char acStack_e0 [64];
  GPiece<136> auStack_a0;
  
  if (g_LogoMovieDone == 0) {
    uVar4 = ZEXT48(g_pBinkPlayer);
    if (g_pBinkPlayer == (void *)0x0) {
      uVar1 = FUN_005e38b0(0x60);
      uVar4 = 0;
      if ((int)uVar1 != 0) {
        FUN_004d5d5c(uVar1);
        uVar4 = uVar1;
      }
      g_pBinkPlayer = (void *)uVar4;
    }
    iVar3 = snprintf(acStack_e0,"/rc1/ps3data/movies/logo_movie.bik");
    uVar2 = FUN_004ef34c(iVar3);
    FUN_004ef4d0(uVar2,acStack_e0,auStack_a0);
    FUN_004d5448(uVar4,auStack_a0,0,0x400);
    uVar1 = 0;
    do {
      if (*(int *)(TrophyMgr + 0x188) != 0) {
        cellSysutilCheckCallback();
      }
      UpdateOcclusion(0);
      iVar3 = FUN_004d5524(uVar4);
      cellSysutilCheckCallback();
      if (1 < iVar3) {
        g_LogoMovieDone = FUN_004d59e8(uVar4);
        uVar1 = (ulonglong)(LZCOUNT(g_LogoMovieDone) << 0x20) >> 0x25 ^ 1;
      }
      Render_DispatchJob();
    } while ((int)uVar1 == 0);
  }
  return;
}


// 0x0010388 (0x20 bytes)
undefined * GetLanguageNameByIdx(void)

{
  return (&PTR_s_english_0071cb3c)[g_Language];
}


// 0x00103b0 (0x1ac bytes)
// strings: 00651120: '/rc1/ps3data/movies/attract[%d].bik'

/* [boot] idx 0..3 -> /rc1/ps3data/movies/attract[%d].bik; switches g_gameMode to MOVIE then back to
   NORMAL. Inlined copy in PrepareFrontbin attract loop. */

void PlayAttractMovie(int idx)

{
  ulonglong uVar1;
  int iVar3;
  undefined8 uVar2;
  ulonglong uVar4;
  char acStack_f0 [64];
  GPiece<144> auStack_b0;
  
  if ((-1 < idx) && (idx < 4)) {
    uVar4 = ZEXT48(g_pBinkPlayer);
    if (g_pBinkPlayer == (void *)0x0) {
      uVar1 = FUN_005e38b0(0x60);
      uVar4 = 0;
      if ((int)uVar1 != 0) {
        FUN_004d5d5c(uVar1);
        uVar4 = uVar1;
      }
      g_pBinkPlayer = (void *)uVar4;
    }
    iVar3 = snprintf(acStack_f0,"/rc1/ps3data/movies/attract[%d].bik",idx);
    uVar2 = FUN_004ef34c(iVar3);
    FUN_004ef4d0(uVar2,acStack_f0,auStack_b0);
    FUN_004d4dd0(uVar4,auStack_b0,0x400);
    g_MoviePlayState = 2;
    DAT_009637cb = DAT_009637cb | 8;
    FlushCache(0);
    sound_StopAllSounds();
    music_Stop();
    FadeToBlack((int)(animationSpeed * 12.5));
    g_gameMode = GAME_MODE_MOVIE;
    FlushCache(0);
    sound_StopAllSounds();
    music_Stop();
    STUB_005066bc_RET_0(0);
    PlayMovieBlocking();
    g_MoviePlayState = 0;
    FadeToBlack(4);
    g_gameMode = GAME_MODE_NORMAL;
    DAT_009637cb = DAT_009637cb | 0x10;
  }
  return;
}


// 0x001055c (0x2c4 bytes)
// strings: 00a0ca34: 'None' | 0071fb2c: '������������'

void ZeroFillKeyGlobals(void)

{
  memset(&VisitedPlanets,0,0x14);
  memset(g_CollectedGoldBolts,0,0x50);
  memset(g_LevelFlags,0,0x140);
  g_boltCount = 0;
  g_ChallengeMode = 0;
  g_boltsMined = 0;
  g_FrameCount = 0;
  g_goodiesMenuActive = 0;
  g_boltMiningTimer = 0;
  g_deathCount = 0;
  DAT_00a0f6dc = 0;
  g_GameFrameCount = 0;
  g_totalBoltsCollected = 0;
  memset(&g_MiscLevelFlags,0,0x80);
  Cheats[0] = '\0';
  Cheats[1] = '\0';
  Cheats[2] = '\0';
  Cheats[3] = '\0';
  Cheats[4] = '\0';
  Cheats[5] = '\0';
  Cheats[6] = '\0';
  Cheats[7] = '\0';
  Cheats[8] = '\0';
  Cheats[9] = '\0';
  Cheats[10] = '\0';
  Cheats[0xb] = '\0';
  memset(g_SkillPoints,0,0x20);
  memset(&currentAmmoArray,0,0x94);
  memset(CHAR_ARRAY_0096c165,0,0x94);
  memset(g_purchasableVendorItems,0xff,0xc);
  UINT_ARRAY_0096c1dc[0] = 0;
  UINT_ARRAY_0096c1dc[1] = 0;
  DAT_0096c1e4 = 0;
  DAT_0096c1e8 = 0;
  DAT_0096c1ec = 0;
  DAT_0096c1f0 = 0;
  DAT_0096c1f4 = 0;
  DAT_0096c1f8 = 0;
  memset(&g_SeenPlanets,0,0x14);
  memset(GalacticMap,0,0x50);
  memset(g_MissionTargets,0,0x790);
  memset(HelpData,0,0x4a0);
  memset(&DAT_00a0f51c,0,0x94);
  memset(&DAT_00a0f5b0,0,0x94);
  memset(&DAT_00a0f644,0,0x94);
  memset(&g_equippedItem,0,0x94);
  memset(&g_goldWeaponsArray,0,0x28);
  memset(&DAT_00a0f6e4,0,0x50);
  DAT_0071fb24 = 1;
  DAT_00969c9c = 0;
  g_memcardRestoredBolts = 0;
  g_memcardRestoredGoldWeapons = 0;
  g_memcardHadBoltTrophy = 0;
  g_memcardHadMidasTrophy = 0;
  return;
}


// 0x0010820 (0x1c4 bytes)
/* [boot] Draws title logo (alpha g_FrontEndLogoAlpha; y=0x30 in Japanese mode) and pulsing 'press
   start' sprite (g_FrontEndPressStartAlpha, per-language effect tex). */

void FrontEnd_DrawLogo(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (g_FrontEndLogoAlpha != 0) {
    if (g_JapaneseMode) {
      Sprite_DrawShape(0xec,0x30,0x100,0x80,0,0,0x100,0x80);
    }
    else {
      Sprite_DrawShape(0xec,0x10,0x100,0x80,0,0,0x100,0x80);
    }
  }
  if (g_FrontEndPressStartAlpha != 0) {
    iVar4 = g_Language + -1;
    if (g_JapaneseMode == false) {
      bVar1 = g_ScreenHeight < 0;
      uVar2 = g_ScreenHeight & 1;
      iVar3 = g_ScreenHeight >> 1;
      GetEffectTex(iVar4 + (iVar4 >> 0x1f & -iVar4) + 4);
      Sprite_DrawShape
                (0xa0,iVar3 + (uint)(bVar1 && uVar2 != 0) + -0x50,0xc0,0x60,0,0,0x100,0x80);
    }
  }
  return;
}


// 0x00109e4 (0x280 bytes)
/* [boot] Sets GameCamera pos + orientMtx from the space-scene camera track
   (g_SpaceSceneCameraFrames[g_cutsceneCameraFrame], 0x20 bytes/frame: pos, rotXYZ at +0x10). */

char FrontEnd_UpdateSceneCamera(void)

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
  cVar1 = *(char *)(pfVar2 + 3);
  g_ViewContext.xratio = 0.63;
  UpdateViewContext();
  GameCamera.posX = *pfVar2;
  GameCamera.posY = pfVar2[1];
  GameCamera.posZ = pfVar2[2];
  GameCamera.field8_0x14c = *(char (*) [4])(pfVar2 + 3);
  pvVar4 = memcpy(&local_e0,&DAT_00651080,0x40);
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
  memcpy(&local_a0,&DAT_0071cc2c,0x40);
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
  GameCamera.orientMtx.up.x = local_d0;
  GameCamera.orientMtx.up.y = local_cc;
  GameCamera.orientMtx.forward.x = -local_c0;
  GameCamera.orientMtx.right.x = -local_e0;
  GameCamera.orientMtx.forward.y = -local_bc;
  GameCamera.orientMtx.right.y = -local_dc;
  GameCamera.orientMtx.forward.z = -local_b8;
  GameCamera.orientMtx.right.z = -local_d8;
  GameCamera.orientMtx.up.z = local_c8;
  return cVar1;
}


// 0x0010c70 (0x368 bytes)
/* [boot] Per-frame draw of the title screen: occlusion reset, scene camera, logo sprites, screen
   fade, freeze/pause overlays, then Render_DispatchJob. */

void FrontEnd_Draw(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  FastMemSet(OcclVisibility,0xffffffffffffffff,0x80);
  FrontEnd_UpdateSceneCamera();
  ComposeCameraMatrix();
  DAT_00a10724 = 0xffffffff;
  UpdateOcclusion(1);
  PTR_DAT_00902e98.piece<0,1>() = 0;
  SetupDefaultDraw();
  if (g_FrontEndLogoAlpha != 0) {
    if (g_JapaneseMode == false) {
      Sprite_DrawShape(0xec,0x10,0x100,0x80,0,0,0x100,0x80);
    }
    else {
      Sprite_DrawShape(0xec,0x30,0x100,0x80,0,0,0x100,0x80);
    }
  }
  if (g_FrontEndPressStartAlpha != 0) {
    iVar4 = g_Language + -1;
    if (g_JapaneseMode == false) {
      bVar1 = g_ScreenHeight < 0;
      uVar2 = g_ScreenHeight & 1;
      iVar3 = g_ScreenHeight >> 1;
      GetEffectTex(iVar4 + (iVar4 >> 0x1f & -iVar4) + 4);
      Sprite_DrawShape
                (0xa0,iVar3 + (uint)(bVar1 && uVar2 != 0) + -0x50,0xc0,0x60,0,0,0x100,0x80);
    }
  }
  if (0 < (int)SceneScreenFade) {
    if (0x3f800000 <
        (int)(FLOAT_ORDER(SceneScreenFade))) {
      SceneScreenFade = 1.0;
    }
    iVar4 = FastDoubleToInt((double)(SceneScreenFade * 128.0));
    DrawScreenOverlay(0,0,0,iVar4);
  }
  if (g_gameMode == GAME_MODE_FREEZE) {
    DrawDialogText();
  }
  if ((g_gameMode == GAME_MODE_PAUSE) && (g_MenuScreen != 0x2d)) {
    FrontEnd_DrawMenu();
  }
  if (g_MobyFuncListCount != 0) {
    ExecuteRegisteredMobyFuncs();
  }
  STUB_001754c8();
  if (0 < (int)SceneScreenFade) {
    if (0x3f800000 <
        (int)(FLOAT_ORDER(SceneScreenFade))) {
      SceneScreenFade = 1.0;
    }
    iVar4 = FastDoubleToInt((double)(SceneScreenFade * 128.0));
    DrawScreenOverlay(0,0,0,iVar4);
  }
  Render_DispatchJob();
  return;
}


// 0x0011020 (0x4a8 bytes)
/* [boot] Per-frame update of the title screen space scene: advances scene frame/chunk
   (ParseSpaceSceneChunk), interpolates scene mobys, fades in logo, START/confirm -> EnterPauseState
   (main menu), handles pause/freeze modes. */

void FrontEnd_Update(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  MobyInstance *pMVar8;
  char cVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  
  ResetGameCounters();
  puVar14 = &DAT_0095cd50;
  g_cutsceneCameraFrame = g_cutsceneCameraFrame + 1;
  g_SpaceSceneFrame = g_SpaceSceneFrame + 1;
  SceneScreenFade = SceneScreenFade - 0.0625;
  if (SceneScreenFade < 0.0) {
    SceneScreenFade = 0.0;
  }
  if (g_SpaceSceneFrame < g_SpaceSceneNumFrames.piece<0,2>()) {
    if (0x5f < (int)g_cutsceneCameraFrame) {
      g_SpaceSceneChunk = g_SpaceSceneChunk + 1;
      ParseSpaceSceneChunk(g_SpaceSceneChunk);
    }
  }
  else {
    g_SpaceSceneFrame = 0;
    g_SpaceSceneChunk = 0;
    ParseSpaceSceneChunk(0);
  }
  FrontEnd_UpdateSceneCamera();
  iVar13 = 0;
  if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
    dVar17 = 0.5;
    dVar18 = 1.0;
    do {
      pMVar8 = (MobyInstance *)puVar14[0x5e];
      cVar9 = (char)((int)g_cutsceneCameraFrame >> 1);
      pMVar8->previousAnimationFrame = cVar9;
      pMVar8->animationFrame = cVar9 + '\x01';
      UpdateMobyFrameData(pMVar8);
      dVar15 = (double)FastIntToDouble(g_cutsceneCameraFrame & 1);
      dVar16 = (double)(float)(dVar15 * dVar17);
      pfVar11 = (float *)((int)pMVar8->pVar + (uint)(byte)pMVar8->animationFrame * 0x10);
      pfVar10 = (float *)((int)pMVar8->pVar + (uint)(byte)pMVar8->previousAnimationFrame * 0x10);
      fVar1 = (float)(dVar18 - dVar16);
      pMVar8->animationBlend = (float)(dVar15 * dVar17);
      fVar2 = *pfVar11;
      fVar3 = pfVar11[1];
      fVar4 = pfVar11[2];
      fVar5 = *pfVar10;
      fVar6 = pfVar10[1];
      fVar7 = pfVar10[2];
      (pMVar8->pos).w = pfVar10[3];
      pMVar8->field44_0x71 = -1;
      (pMVar8->pos).x = fVar5 * fVar1 + (float)((double)fVar2 * dVar16);
      (pMVar8->pos).y = fVar6 * fVar1 + (float)((double)fVar3 * dVar16);
      (pMVar8->pos).z = fVar7 * fVar1 + (float)((double)fVar4 * dVar16);
      UpdateMobyTransform(pMVar8);
      pMVar8->shadow = '\0';
      if (pMVar8->oClass == RATCHET) {
        Hero_UpdateInScene(pMVar8);
      }
      iVar13 = iVar13 + 1;
      puVar14 = puVar14 + 1;
    } while (iVar13 < g_SpaceSceneMobyCnt.piece<0,2>());
  }
  UpdateGameCounters();
  if (g_gameMode == GAME_MODE_NORMAL) {
    g_FrontEndTimer = g_FrontEndTimer + 1;
    if ((int)(animationSpeed * 30.5) < g_FrontEndTimer) {
      iVar13 = g_FrontEndLogoAlpha + 1;
      g_FrontEndLogoAlpha = iVar13 + ((uint)(0x80 - (longlong)iVar13 >> 0x3f) & 0x80U - iVar13);
    }
    if ((int)(animationSpeed * 120.5) < g_FrontEndTimer) {
      fVar1 = (float)(longlong)((g_FrontEndTimer - (int)(animationSpeed * 120.5)) % 0x3c) *
              0.10471976 + -3.1415927 + 1.5707963;
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
      g_FrontEndPressStartAlpha =
           (int)((fVar1 * fVar4 * 2.601887e-06 +
                 fVar4 * -0.0001980741 + fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3)
                * 32.0) + 0x60;
    }
    if ((g_Pad.buttonsPressedThisFrame & (pad_ConfirmButtonMask | START)) != 0) {
      EnterPauseState();
    }
    sound_Update();
  }
  else if (g_gameMode == GAME_MODE_PAUSE) {
    auVar19 = ZEXT416(0xffffffff);
    auVar19 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
    auVar20 = vectorShiftLeftIntegerWord(auVar19,auVar19);
    auVar19 = loadVectorLeftIndexed(0x40,0x10fd8);
    auVar19 = auVar19 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar21 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar19 = vectorMultiplyAddFloatingPoint
                        (auVar21,auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,
                         auVar20);
    iVar13 = g_FrontEndLogoAlpha + -0x10;
    iVar12 = g_FrontEndPressStartAlpha + -0x10;
    auVar19 = vectorConvertToSignedFixedPointWordSaturate(auVar19,0);
    g_FrontEndLogoAlpha = iVar13 + (iVar13 >> 0x1f & -iVar13);
    g_FrontEndPressStartAlpha = iVar12 + (iVar12 >> 0x1f & -iVar12);
    auVar19 = auVar19 >> 0x60 & (GPiece<16>)0xffffffff;
    g_FrontEndTimer =
         storeVectorElementWordIndexed
                   (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,0xffffffffffffd710
                    ,0x910000);
    FrontEnd_UpdateMenu();
    sound_Update();
  }
  else if (g_gameMode == GAME_MODE_FREEZE) {
    UpdateFreeze();
    sound_Update();
  }
  return;
}


// 0x00114c8 (0x64 bytes)
/* [boot] True if sound slot (0x70 bytes each at 0x9637d4) has state 1/2 and plays soundId (+sound
   base). Inlined in PrepareFrontbin ambient-sound loop. */

int IsSoundHandlePlaying(int handle,int soundId)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (((-1 < handle) &&
      (iVar2 = (int)((longlong)handle << 7) - (int)((longlong)handle << 4),
      (int)*(short *)((int)g_SoundChannels + iVar2 + 0xe) == g_CoreSoundCnt + soundId)
      ) && ((cVar1 = *(char *)((int)g_SoundChannels + iVar2 + 4), cVar1 == '\x01' ||
            (cVar1 == '\x02')))) {
    iVar3 = 1;
  }
  return iVar3;
}


// 0x001152c (0x4 bytes)
void STUB_0001152c(...)

{
  return;
}


// 0x0011530 (0x118 bytes)
// strings: 00651144: 'rc1/ps3data/global/locale/%s' | 00651164: 'rc1/ps3data/global/locale/japanese'

/* [boot] Loads rc1/ps3data/global/locale/<language> (or japanese) into locale buffer, sets g_Help.num_message
   count + HelpMsgs and relocates message pointers. Also called from pause menu on language
   change. */

void LoadLanguageHelpMsgs(void)

{
  int iVar1;
  int iVar2;
  char acStack_90 [136];
  
  if (!g_JapaneseMode) {
    snprintf(acStack_90,"rc1/ps3data/global/locale/%s",
                   ZEXT48((&PTR_s_english_0071cb3c)[g_Language]));
  }
  if (g_JapaneseMode != false) {
    snprintf(acStack_90,"rc1/ps3data/global/locale/japanese");
  }
  LoadAssetFromFile(acStack_90,g_pLocaleBuffer,0x40000);
  g_Help.num_message = *g_pLocaleBuffer;
  HelpMsgs = g_pLocaleBuffer;
  FastMemCopy32
            (g_pLocaleBuffer,g_pLocaleBuffer + 2,(g_pLocaleBuffer[1] + 3U & 0xfffffffc) - 8);
  if (0 < g_Help.num_message) {
    iVar2 = 0;
    iVar1 = g_Help.num_message;
    do {
      iVar1 = iVar1 + -1;
      *(int *)((int)HelpMsgs + iVar2) =
           (int)HelpMsgs + *(int *)((int)HelpMsgs + iVar2) + -8;
      iVar2 = iVar2 + 0x10;
    } while (0 < iVar1);
  }
  return;
}


// 0x0011648 (0x52c bytes)
// strings: 00651188: '!!!! Too many directional lights !!!! - Lighting will look bogus as a penalty.\n'

MobyInstance * LoadGameplay(int *gameplay,int param_2)

{
  ushort uVar1;
  MobyInstance *pMVar2;
  char *pcVar3;
  uint uVar4;
  int lightsCount;
  ushort *puVar5;
  MobyInstance *pMVar6;
  TieInstance *pTVar7;
  int *piVar8;
  uint uVar9;
  int lights;
  
  FastMemSet(&g_heroMtx,0,0x2310);
  FastMemSet(&GameCamera,0,0x3a0);
  FastMemSet(&g_AnimLayerPool,0,0x180);
  DAT_00a52e60 = (undefined1)Cutscene;
  g_CollOutput.padding[0] = (int)&g_CollMobyJointCache;
  g_CollOutput.padding[1] = (int)&MobyClassRef;
  g_CollOutput.padding[2] = 0;
  g_CollOutput.collCount = 0;
  g_CollOutput.damageNext = 0;
  FastMemSetZero(g_MobyGrid,0x10000);
  FastMemSetZero(&MobyGridAlloc,0x60);
  piVar8 = (int *)((int)gameplay + *gameplay);
  g_ViewContext.occlColor0 = *piVar8;
  g_ViewContext.occlColor1 = piVar8[1];
  g_ViewContext.occlColor2 = piVar8[2];
  levelFog.r = (u8)piVar8[3];
  levelFog.g = (u8)piVar8[4];
  levelFog.b = (u8)piVar8[5];
  LevelFogNearDist = piVar8[6];
  LevelFogFarDist = (float)piVar8[7];
  LevelFogNearIntensity = (float)piVar8[8];
  LevelFogFarIntensity = (float)piVar8[9];
  UpdateFog();
  TfragDrawDist = 512000.0;
  TieDrawDist = 720.0;
  ShrubDrawDist = 500.0;
  DAT_00a390b8 = 500;
  PartClipDist = 0x1f4000;
  STUB_000780f4(g_ViewContext.occlColor0,g_ViewContext.occlColor1,g_ViewContext.occlColor2);
  STUB_00174bd8(&DAT_00a10680);
  FastMemSetZero(PointLights,0x100);
  FastMemSetZero(&PointLightData,0x180);
  FastMemSetZero(DirectionalLights,0x400);
  lights = gameplay[1];
  lightsCount = *(int *)((int)gameplay + lights);
  if (lightsCount < 0xc) {
    if (lightsCount == 0) goto skip_directionalLightCopy;
  }
  else {
    printf("!!!! Too many directional lights !!!! - Lighting will look bogus as a penalty.\n")
    ;
    lightsCount = 0xc;
  }
  FastMemCopy32(DirectionalLights,(int *)((int)gameplay + lights) + 4,lightsCount << 6);
skip_directionalLightCopy:
  TieCnt = TieCntBase;
  g_TieInstance = TieInstanceBase;
  TieInstanceEnd = TieInstanceBase + TieCntBase;
  memcpy(TieInstanceBase,DAT_00a1a7b8,TieCntBase * 0x70);
  uVar4 = DAT_00a15f80;
  lights = 0;
  DAT_00e583f0 = 0;
  if (DAT_00a15f80 != 0) {
    piVar8 = &DAT_00e574f0;
    puVar5 = &DAT_00e576f0;
    lightsCount = DAT_00a15f7c;
    do {
      uVar9 = lights + 1;
      uVar1 = *(ushort *)(lightsCount + 0x30);
      *piVar8 = lightsCount;
      *puVar5 = uVar1;
      lightsCount = lightsCount + 0x40;
      puVar5 = puVar5 + 1;
      piVar8 = piVar8 + 1;
      (&DAT_00e577f0)[uVar1] = (char)lights;
      lights = lights + 1;
      DAT_00e583f0 = lights;
    } while (uVar9 < uVar4);
  }
  ShrubInstanceCnt = ShrubInstanceCnt;
  ShrubInstanceEnd = ShrubInstanceBase + ShrubInstanceCnt;
  g_ShrubInstance = ShrubInstanceBase;
  DAT_00a108fc = gameplay;
  memcpy(ShrubInstanceBase,DAT_00a1a7bc,ShrubInstanceCnt * 0x70);
  pMVar2 = (MobyInstance *)((int)gameplay + param_2 + 0x3f & 0xffffffc0);
  g_MobyInstance = pMVar2;
  FastMemSet(pMVar2,0,0x4000);
  DAT_00a390b0 = pMVar2 + 0x40;
  PartInstances = pMVar2 + 0x60;
  MobyInstancePermEnd = g_MobyInstance;
  g_MobyInstance->state = 0xff;
  MobyInstanceEnd = g_MobyInstance + 0x3f;
  PartIndexNext = 0;
  PartIndexTop = 0xffffffff;
  PartActiveCnt = 0;
  FastMemSetZero(&g_PartUsed,0x200);
  pMVar6 = g_MobyInstance;
  if (g_MobyInstance != MobyInstanceEnd) {
    do {
      pMVar6->occlIndex = 0x7f80;
      pMVar6 = pMVar6 + 1;
    } while (pMVar6 != MobyInstanceEnd);
  }
  pTVar7 = g_TieInstance;
  if (g_TieInstance != TieInstanceEnd) {
    do {
      pTVar7->occlIndex[0] = '\0';
      pTVar7->occlIndex[1] = '\0';
      pTVar7->occlIndex[2] = '\x7f';
      pTVar7->occlIndex[3] = -0x80;
      pTVar7 = pTVar7 + 1;
    } while (pTVar7 != TieInstanceEnd);
  }
  if (0 < TfragsCnt) {
    lightsCount = 0;
    lights = 0;
    do {
      lightsCount = lightsCount + 1;
      pcVar3 = Tfrags->occlIndex;
      (pcVar3 + lights)[0] = '\x7f';
      (pcVar3 + lights)[1] = -0x80;
      lights = lights + 0x30;
    } while (lightsCount < TfragsCnt);
  }
  OcclUpdate = 0;
  ResetDrawGlobals();
  InitPadRing();
  EnableFontColors();
  worldUpdateTime = 0;
  SceneScreenFade = 1.0;
  return pMVar2 + 0x460;
}


// 0x0011b74 (0x4c0 bytes)
// strings: 006511d8: 'g_wad.game.frontend_wad' | 006511f0: 'rc1/ps3data/global/boot/engine.ps3' | 00651218: 'rc1/ps3data/global/boot/vram.ps3' | 00651240: 'rc1/ps3data/japan_font.ps3' | 00651260: 'rc1/ps3data/japan_font.vram' | 00651280: 'rc1/ps3data/global/boot/gameplay_ntsc' | 006512a8: 'rc1/ps3data/global/boot/japanLogo.ps3' | 006512d0: 'rc1/ps3data/global/boot/japanLogo.vram'

void Load_Front_End(void)

{
  MobyClass *pMVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  
  g_FrontEndTimer = 0;
  VU1_setBufSizeByLevel();
  InitMemSlots();
  DAT_00e5aa64 = 0x100000;
  DAT_00966ad4 = 0x2c0000;
  g_GsRamAlloc = 0x2c0000;
  GSmem.base = 0x2c0000;
  FastMemSet(&MobyClassRef,0xffffffff87654321,0x10);
  FastMemSet(&MobyClassLookup,0xffffffffffffffff,0x800);
  FastMemSet(&MobyTexLookup,0xffffffffffffffff,0xe00);
  FastMemSet(&MobyMipDists,0,0xe0);
  InitViewContext();
  UpdateViewContext();
  VU1_initChain();
  idol::PRINT_m_LoadGameFile(0x1400000,"g_wad.game.frontend_wad");
  load_engine_vram_pair
            (&TEX_BASE,"rc1/ps3data/global/boot/engine.ps3","rc1/ps3data/global/boot/vram.ps3");
  LoadAssetFromFile("rc1/ps3data/japan_font.ps3",&g_JapanFontTex,0x24);
  LoadAssetFromFile("rc1/ps3data/japan_font.vram",g_FontVram,0x80000);
  g_JapanFontTex = g_JapanFontTex + (g_FontVram - *(int *)(g_viewMtxPtr + 0x4ac));
  LoadMusic2(1);
  piVar7 = g_EngineData;
  DAT_00a1bfd8 = g_EngineData[0x1d] + (int)g_EngineData;
  IconTableEntry = (IconTableEntries *)((int)g_EngineData + *(int *)(DAT_00a1bfd8 + 4));
  iVar4 = *(int *)((int)g_EngineData + *g_EngineData);
  TexturePointerArray = (int)g_EngineData + *(int *)(DAT_00a1bfd8 + 8);
  piVar5 = (int *)((int)g_EngineData + *g_EngineData) + 1;
  if (0 < iVar4) {
    iVar8 = 0;
    do {
      iVar6 = piVar5[1] + (int)piVar7;
      LoadMobyPClasses
                ((MobyClass *)(iVar6 + ((uint)(ZERO_MASK(piVar5[1])) & -iVar6)),
                 (void *)0x0,(char *)(piVar5 + 4),*piVar5);
      iVar8 = iVar8 + 1;
      piVar5 = piVar5 + 2;
    } while (iVar8 < iVar4);
  }
  DAT_0071c980 = EffectTexHeaders + piVar7[0x1f] * 0x24;
  uVar3 = LoadAssetFromFile("rc1/ps3data/global/boot/gameplay_ntsc",Gameplay,0x200000);
  DAT_00a10908 = LoadGameplay(Gameplay,uVar3);
  DAT_0090d720 = DAT_00a10908 + 0x3fU & 0xffffffc0;
  iVar4 = *(int *)(Gameplay + g_Language * 4 + 0x10);
  if (iVar4 != 0) {
    piVar7 = (int *)(Gameplay + iVar4);
    DAT_0090d71c = Gameplay + 0x10;
    DAT_0090d718 = Gameplay;
    g_Help.num_message = *piVar7;
    HelpMsgs = DAT_0090d720;
    FastMemCopy32(DAT_0090d720,piVar7 + 2,(piVar7[1] + 3U & 0xfffffffc) - 8);
    if (0 < g_Help.num_message) {
      iVar8 = 0;
      iVar4 = g_Help.num_message;
      do {
        iVar4 = iVar4 + -1;
        *(uint *)(HelpMsgs + iVar8) = *(int *)(HelpMsgs + iVar8) + (HelpMsgs - 8);
        iVar8 = iVar8 + 0x10;
      } while (0 < iVar4);
    }
  }
  FastMemSet(&DAT_0095cd50,0,0x1c0);
  FastMemSet(&DAT_00a1be80,0,0x40);
  piVar7 = g_EngineData;
  g_SceneLoadBuffer = g_NpcBuffer + 0x200000;
  DAT_0095cda8 = g_NpcBuffer;
  DAT_00a10908 = DAT_00a10908 + 0x80000;
  iVar4 = 0;
  piVar9 = &g_SceneChunkPtrs;
  piVar5 = (int *)((int)g_EngineData + g_EngineData[0x20]);
  do {
    if (piVar5[1] == 0) break;
    iVar8 = *piVar5;
    iVar4 = iVar4 + 1;
    piVar5 = piVar5 + 2;
    *piVar9 = (int)piVar7 + iVar8;
    piVar9 = piVar9 + 1;
  } while (iVar4 < 0x46);
  ParseSpaceSceneChunk(0);
  LoadLanguageHelpMsgs();
  LoadAssetFromFile("rc1/ps3data/global/boot/japanLogo.ps3",&g_JapanLogoTex,0x24);
  LoadAssetFromFile("rc1/ps3data/global/boot/japanLogo.vram",DAT_00a10924 + 0x200000,0x40000);
  g_JapanLogoTex = (DAT_00a10924 - *(int *)(g_viewMtxPtr + 0x4ac)) + 0x200000;
  uVar2 = (uint)DAT_00a35932;
  pMVar1 = MobyClasses[uVar2];
  if ((pMVar1 != (MobyClass *)0x0) && (pMVar1->SoundDefs != (void *)0x0)) {
    pMVar1->SoundDefs = &DAT_0071ca64;
    MobyClasses[uVar2]->sound_cnt = '\x05';
  }
  return;
}


// 0x0012048 (0x788 bytes)
// strings: 006512f8: 'Before load Front_End\n' | 00651310: 'After load Front_End\n' | 00651328: 'After Hud Init\n' | 00651338: 'rc1/ps3data/edat/rcuno.edat' | 00651358: '1014312138ED1201' | 00651120: '/rc1/ps3data/movies/attract[%d].bik'

void PrepareFrontbin(void)

{
  int *piVar1;
  dword dVar2;
  undefined4 uVar3;
  int32_t iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar4;
  undefined8 uVar5;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  double dVar16;
  char acStack_140 [64];
  GPiece<152> auStack_100;
  
                    /* CORRESPONDING PS2 FUNCTION IN FRONTBIN ELF 0x1eb798 */
  piVar11 = DAT_009271f8;
  Level = Veldin;
  *g_pDebugCounterMode = 0x83;
  *piVar11 = 0;
  dVar2 = g_GameSettings.Stereo;
  memcard_ResetGame();
  g_GameSettings.Stereo = dVar2;
  iVar6 = printf("Before load Front_End\n");
  Load_Front_End(iVar6);
  iVar6 = printf("After load Front_End\n");
  HudScratch_Reset(iVar6);
  STUB_001655a0();
  InitIndexedBuffers();
  Hud_InitBanks();
  iVar6 = printf("After Hud Init\n");
  STUB_000e0e10(iVar6);
  dVar16 = 180.5;
  iVar7 = *DAT_009271f8 / 0x109;
  while( true ) {
    if ((int)((double)animationSpeed * dVar16) <= iVar7) break;
    STUB_00503078(0);
    iVar7 = iVar7 + 1;
  }
  STUB_00505f4c();
  do {
    iVar7 = STUB_00505d20();
  } while (iVar7 != 0);
  STUB_00505f50();
  idol::GameAuthenticate(g_pGame,"rc1/ps3data/edat/rcuno.edat","1014312138ED1201");
  while (*(int *)(TrophyMgr + 400) != 0) {
    UpdateOcclusion(0);
    cellSysutilCheckCallback();
    Render_DispatchJob();
  }
  lVar15 = 1;
  if (g_loadingPlanet == 0) {
    iVar7 = 0;
    do {
      cellSysutilCheckCallback();
      (*(code *)**(undefined4 **)(*g_pMsgDialog + 8))(0x3f90624de0000000);
      STUB_00174cf0();
      VU1_swapChain();
      STUB_00078104();
      STUB_00078134();
      STUB_000780fc();
      memcard_Update();
      FlowState_Update();
      UpdatePad();
      piVar11 = &DAT_0071cb5c;
      g_CutscenePlaying = 0;
      if (DAT_0071cb5c != -1) {
        piVar12 = &DAT_0071cb60;
        piVar9 = &DAT_0071cb68;
        piVar10 = &DAT_0071cb64;
        iVar13 = 0;
        do {
          if (*piVar12 == -1) {
            if ((g_SpaceSceneFrame < *piVar11) || (*piVar9 != -1)) {
              if (g_SpaceSceneFrame < *piVar11) {
                *piVar9 = -1;
              }
            }
            else {
              iVar8 = sound_LevelPlay(*piVar10,0,(MobyInstance *)0x0);
              *piVar9 = iVar8;
            }
          }
          else if (*piVar12 < g_SpaceSceneFrame || g_SpaceSceneFrame < *piVar11) {
            iVar8 = *piVar9;
            if (((-1 < iVar8) &&
                ((int)g_SoundChannels[iVar8].sound_index == g_CoreSoundCnt + *piVar10)
                ) && ((g_SoundChannels[iVar8].state == '\x01' ||
                      (g_SoundChannels[iVar8].state == '\x02')))) {
              sound_Kill(iVar8);
            }
            *piVar9 = -1;
          }
          else {
            iVar8 = *piVar9;
            if (((iVar8 < 0) ||
                ((int)g_SoundChannels[iVar8].sound_index != g_CoreSoundCnt + *piVar10)
                ) || ((g_SoundChannels[iVar8].state != '\x01' &&
                      (g_SoundChannels[iVar8].state != '\x02')))) {
              iVar8 = sound_LevelPlay(*piVar10,0,(MobyInstance *)0x0);
              *piVar9 = iVar8;
            }
          }
          piVar12 = piVar12 + 4;
          piVar11 = piVar11 + 4;
          piVar10 = piVar10 + 4;
          piVar9 = piVar9 + 4;
          piVar1 = (int *)((int)&DAT_0071cb6c + iVar13);
          iVar13 = iVar13 + 0x10;
        } while (*piVar1 != -1);
      }
      FrontEnd_Update();
      FrontEnd_Draw();
      if (g_gameMode == GAME_MODE_NORMAL) {
        iVar7 = iVar7 + 1;
        if (iVar7 < (int)(animationSpeed * 1500.5)) goto LAB_0001267c;
        if ((-1 < (int)lVar15) && ((int)lVar15 < 4)) {
          uVar14 = ZEXT48(g_pBinkPlayer);
          if (g_pBinkPlayer == (void *)0x0) {
            uVar4 = FUN_005e38b0(0x60);
            uVar14 = 0;
            if ((int)uVar4 != 0) {
              FUN_004d5d5c(uVar4);
              uVar14 = uVar4;
            }
            g_pBinkPlayer = (void *)uVar14;
          }
          iVar7 = snprintf(acStack_140,"/rc1/ps3data/movies/attract[%d].bik",lVar15);
          uVar5 = FUN_004ef34c(iVar7);
          FUN_004ef4d0(uVar5,acStack_140,auStack_100);
          FUN_004d4dd0(uVar14,auStack_100,0x400);
          g_MoviePlayState = 2;
          DAT_009637cb = DAT_009637cb | 8;
          FlushCache(0);
          sound_StopAllSounds();
          music_Stop();
          FadeToBlack((int)(animationSpeed * 12.5));
          g_gameMode = GAME_MODE_MOVIE;
          FlushCache(0);
          sound_StopAllSounds();
          music_Stop();
          STUB_005066bc_RET_0(0);
          PlayMovieBlocking();
          g_MoviePlayState = 0;
          FadeToBlack(4);
          g_gameMode = GAME_MODE_NORMAL;
          DAT_009637cb = DAT_009637cb | 0x10;
        }
        iVar7 = (int)(lVar15 + 1U);
        iVar7 = iVar7 + ((iVar7 >> 2) + (uint)(iVar7 < 0 && (lVar15 + 1U & 3) != 0)) * -4;
        g_SpaceSceneFrame = 0;
        g_SpaceSceneChunk = 0;
        SceneScreenFade = 1.0;
        lVar15 = (longlong)iVar7 +
                 (ZERO_MASK(iVar7) & (longlong)(iVar7 + 1) - (longlong)iVar7);
        ParseSpaceSceneChunk(0);
        g_FrontEndLogoAlpha = 0;
        g_FrontEndPressStartAlpha = 0;
        g_FrontEndTimer = 0;
        VU1_initChain();
        iVar7 = 0;
      }
      else {
        iVar7 = 0;
LAB_0001267c:
        if (DAT_00a52e60 != Cutscene) {
          Cutscene = (Cutscene == 0);
          FadeToBlack(4);
          STUB_00503080();
          STUB_0050307c(0,0xb,(ZERO_MASK(Cutscene)) + 0xd,9);
          uVar3 = DAT_00966ad4;
          SceneScreenFade = 1.0;
          ResetFrameBufferInfo();
          DAT_00966ad4 = uVar3;
        }
        STUB_00174cf4(1);
        STUB_00503078(0);
        g_MainLoopFrames = g_MainLoopFrames + 1;
      }
    } while (g_loadingPlanet == 0);
  }
  if (Cutscene == 0) {
    GSmem.base = (int)&DAT_00280000;
  }
  DAT_00966ad4 = GSmem.base;
  g_GsRamAlloc = GSmem.base;
  return;
}


// 0x00127e0 (0x32c bytes)
/* [boot] Emits a full-screen textured quad for a splash texture into HUD_Pass (RSX commands). */

void DrawSplashScreen(void *tex)

{
  undefined4 uVar1;
  RenderingStep *pRVar2;
  longlong lVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar12;
  
  lVar3 = ZEXT48(&stack0x00000000) - 0x40;
  puVar4 = (undefined4 *)lVar3;
  puVar4[3] = in_vr31_32_3;
  puVar4[2] = in_vr31_32_2;
  puVar4[1] = in_vr31_32_1;
  *puVar4 = in_vr31_32_0;
  uVar5 = (ulonglong)g_viewMtxPtr;
  FUN_004d86b0(uVar5);
  auVar6 = loadVectorLeftIndexed(lVar3,0x127d0);
  auVar8 = ZEXT416(0xffffffff);
  auVar9 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  auVar8 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar12 = loadVectorLeftIndexed(0x18,(longlong)(int)tex);
  auVar6 = loadVectorLeftIndexed(4,0x127d0);
  auVar7 = vectorShiftRightWord(auVar12,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60);
  auVar8 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar6 = vectorShiftLeftIntegerWord(auVar9,auVar9);
  auVar9 = vectorConvertFromUnsignedFixedPointWord(auVar7,0);
  auVar10 = loadVectorLeftIndexed(0xc,uVar5);
  auVar9 = vectorMultiplyAddFloatingPoint
                     (auVar9,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar6);
  auVar8 = ZEXT416(1);
  auVar6 = ZEXT416(0);
  auVar10 = vectorCompareEqualToUnsignedWord
                      (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60);
  auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
  auVar9 = vectorSubtractUnsignedWordModulo(auVar8,auVar7);
  auVar11 = vectorConditionalSelect(auVar7,auVar8,auVar10);
  auVar8 = vectorSubtractUnsignedWordModulo
                     (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar9);
  auVar7 = vectorLogicalAnd(auVar8,auVar10);
  idol_draw::BindTexture(HUD_Pass,0,(longlong)(int)tex,TexSamplerFlags);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x41948;
  pRVar2->command[1] = 0x80808080;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar2->command[1] = 0;
  pRVar2->command[2] = 0;
  pRVar2->command[3] = 0;
  pRVar2->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar2->command[5] = 8;
  pRVar2->command = pRVar2->command + 6;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  auVar8 = loadVectorLeftIndexed(8,0x127d0);
  auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar6 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  auVar7 = vectorLogicalAnd(auVar7,auVar6);
  auVar8 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar6 = vectorLogicalAnd(auVar11,auVar6);
  uVar1 = storeVectorElementWordIndexed
                    (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,4,
                     ZEXT48(pRVar2->command));
  *(undefined4 *)((uint)(pRVar2->command + 1) & 0xfffffffc) = uVar1;
  auVar8 = ZEXT416(0xfffffff0);
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = HUD_Pass;
  auVar9 = vectorRotateLeftIntegerWord
                     (auVar12,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60);
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar2->command[1] = 0;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  auVar8 = loadVectorLeftIndexed(0xc,0x127d0);
  auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar10 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  auVar8 = vectorConditionalSelect(auVar7,auVar9,auVar10);
  auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar1 = storeVectorElementWordIndexed
                    (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,4,
                     ZEXT48(pRVar2->command));
  *(undefined4 *)((uint)(pRVar2->command + 1) & 0xfffffffc) = uVar1;
  auVar8 = vectorConditionalSelect(auVar6,auVar9,auVar10);
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = HUD_Pass;
  auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar6 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar2->command[1] = 0x1a00000;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  uVar1 = storeVectorElementWordIndexed
                    (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,4,
                     ZEXT48(pRVar2->command));
  *(undefined4 *)((uint)(pRVar2->command + 1) & 0xfffffffc) = uVar1;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar2->command[1] = 0x1a00200;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  uVar1 = storeVectorElementWordIndexed
                    (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,4,
                     ZEXT48(pRVar2->command));
  *(undefined4 *)((uint)(pRVar2->command + 1) & 0xfffffffc) = uVar1;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar2->command[1] = 0x200;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar2->command[1] = 0;
  pRVar2->command = pRVar2->command + 2;
  return;
}


// 0x0012b0c (0x1c0 bytes)
/* [boot] Fade in / hold / fade out / black frames for an already loaded splash texture. */

void ShowSplash(void *tex,int holdFrames,int fadeInFrames,int fadeOutFrames,int blackFrames)

{
  int iVar1;
  int iVar2;
  
  if (fadeInFrames != 0) {
    iVar1 = 0;
    do {
      UpdateOcclusion(0);
      cellSysutilCheckCallback();
      TexSamplerFlags = 5;
      DrawSplashScreen(tex);
      Render_DispatchJob();
      cellSysutilCheckCallback();
      iVar1 = iVar1 + 0x80 / fadeInFrames;
    } while (iVar1 < 0x81);
  }
  iVar1 = 0;
  iVar2 = 0;
  if (0 < holdFrames) {
    do {
      UpdateOcclusion(0);
      cellSysutilCheckCallback();
      TexSamplerFlags = 5;
      DrawSplashScreen(tex);
      Render_DispatchJob();
      cellSysutilCheckCallback();
      iVar1 = iVar1 + 1;
    } while (iVar1 < holdFrames);
  }
  if (fadeOutFrames != 0) {
    iVar1 = 0x80;
    do {
      UpdateOcclusion(0);
      cellSysutilCheckCallback();
      TexSamplerFlags = 5;
      DrawSplashScreen(tex);
      Render_DispatchJob();
      cellSysutilCheckCallback();
      iVar1 = iVar1 - 0x80 / fadeOutFrames;
    } while (-1 < iVar1);
  }
  if (0 < blackFrames) {
    do {
      UpdateOcclusion(0);
      cellSysutilCheckCallback();
      DrawScreenOverlayTex(0,0,0,0,tex);
      Render_DispatchJob();
      cellSysutilCheckCallback();
      iVar2 = iVar2 + 1;
    } while (iVar2 < blackFrames);
  }
  TexSamplerFlags = 0;
  return;
}


// 0x0012ccc (0x1f8 bytes)
/* [boot] Loads splash .ps3 texture into scratch buffer then shows it (used for epilepsy/health
   warnings and 'Presents' screens; GameStart passes 360,64,30,0). */

void LoadAndShowSplash
               (char *path,int holdFrames,int fadeInFrames,int fadeOutFrames,int blackFrames)

{
  int *tex;
  int iVar1;
  int iVar2;
  
  LoadAssetFromFile(path,g_NpcBuffer,0xffffffffffffffff);
  tex = g_NpcBuffer;
  *g_NpcBuffer = (int)g_NpcBuffer + (0x80 - *(int *)(DAT_00902e9c + 0x4a8));
  if (fadeInFrames != 0) {
    iVar1 = 0;
    do {
      UpdateOcclusion(0);
      cellSysutilCheckCallback();
      TexSamplerFlags = 5;
      DrawSplashScreen(tex);
      Render_DispatchJob();
      cellSysutilCheckCallback();
      iVar1 = iVar1 + 0x80 / fadeInFrames;
    } while (iVar1 < 0x81);
  }
  iVar1 = 0;
  iVar2 = 0;
  if (0 < holdFrames) {
    do {
      UpdateOcclusion(0);
      cellSysutilCheckCallback();
      TexSamplerFlags = 5;
      DrawSplashScreen(tex);
      Render_DispatchJob();
      cellSysutilCheckCallback();
      iVar1 = iVar1 + 1;
    } while (iVar1 < holdFrames);
  }
  if (fadeOutFrames != 0) {
    iVar1 = 0x80;
    do {
      UpdateOcclusion(0);
      cellSysutilCheckCallback();
      TexSamplerFlags = 5;
      DrawSplashScreen(tex);
      Render_DispatchJob();
      cellSysutilCheckCallback();
      iVar1 = iVar1 - 0x80 / fadeOutFrames;
    } while (-1 < iVar1);
  }
  if (0 < blackFrames) {
    do {
      UpdateOcclusion(0);
      cellSysutilCheckCallback();
      DrawScreenOverlayTex(0,0,0,0,tex);
      Render_DispatchJob();
      cellSysutilCheckCallback();
      iVar2 = iVar2 + 1;
    } while (iVar2 < blackFrames);
  }
  TexSamplerFlags = 0;
  return;
}


// 0x0012ec8 (0x898 bytes)
// strings: 0065136c: 'Common/Textures/Epilepsy_Warning_Fre_4x3.ps3' | 0065139c: 'Common/Textures/Epilepsy_Warning_Spa_4x3.ps3' | 006513cc: 'Common/Textures/Epilepsy_Warning_Eng_4x3.ps3' | 006513fc: 'Common/Textures/Health_Warning_Fre_SCEE_4x3.ps3' | 0065142c: 'Common/Textures/Health_Warning_Spa_SCEE_4x3.ps3' | 0065145c: 'Common/Textures/Health_Warning_Ger_SCEE_4x3.ps3' | 0065148c: 'Common/Textures/Health_Warning_Ita_SCEE_4x3.ps3' | 006514bc: 'Common/Textures/Health_Warning_Eng_SCEE_4x3.ps3' | 006514ec: 'Common/Textures/Rat1_Presents_SCEA.ps3' | 00651514: 'Common/Textures/Rat1_Presents_SCEE.ps3' | 006510fc: '/rc1/ps3data/movies/logo_movie.bik' | 0065153c: 'loading sound bank...\n' | 00651554: 'rc1/ps3data/global/boot/sound.bnk' | 0065157c: 'done\n'

void GameStart(void)

{
  undefined4 uVar1;
  int iVar4;
  int iVar5;
  undefined8 uVar2;
  ulonglong uVar3;
  int32_t iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  char acStack_1a0 [64];
  GPiece<128> auStack_160;
  char acStack_e0 [152];
  
  g_FrontEnd = 1;
  iVar4 = idol::GetSaveData();
  *(undefined4 *)(iVar4 + 0x460) = 1;
  idol::GetSaveData();
  g_memcardSaveSysState = 5;
  g_memcardFatalShown = 0;
  g_memcardFatalError = 0;
  ZeroFillKeyGlobals();
  ReturnTrue_GameStart();
  if (g_HasInited != 0) {
    InitOnce();
  }
  GsTex_Init();
  iVar4 = 0;
  do {
    iVar7 = iVar4 + 1;
    (&startLevel)[iVar4] = 0;
    iVar4 = iVar7;
  } while (iVar7 < 1);
  VU1_initChain();
  STUB_001754dc();
  ResetDebugEnables();
  g_MainLoopFrames = 0;
  STUB_00503078(0);
  g_gameMode = GAME_MODE_NORMAL;
  STUB_0006849c();
  STUB_000684a0();
  STUB_000780f8();
  STUB_000780f4(0,0,0);
  VU1_initChain();
  iVar8 = 0;
  iVar7 = 0;
  iVar4 = 0;
  while ((iVar5 = STUB_000e6c78(), iVar5 != 0 &&
         ((iVar7 < 0xb || (g_Pad.buttonsPressedThisFrame == 0))))) {
    if (iVar5 != iVar4) {
      FlushCache(0);
      FlushCache(0);
    }
    STUB_000780f4(0,0,0);
    STUB_000780fc();
    STUB_00078100();
    STUB_0007116c(&DAT_00cd4000 + DAT_00cd4070);
    if (iVar7 < 8) {
      uVar2 = idol_draw::PackCmd(0,1,0,1,0x80);
      SetGSReg(3,uVar2);
      DrawScreenOverlay(0,0,0,0x80 - iVar8);
    }
    STUB_00078104();
    STUB_00078134();
    STUB_00174cf0();
    VU1_swapChain();
    STUB_00174cf4(1);
    STUB_00503078(0);
    UpdatePad();
    iVar8 = iVar8 + 0x10;
    iVar7 = iVar7 + 1;
    iVar4 = iVar5;
  }
  if (iVar4 != 0) {
    FadeToBlack(8);
  }
  FlushCache(0);
  VU1_initChain();
  STUB_000780f4(0,0,0);
  STUB_000780fc();
  STUB_00078100();
  STUB_000d88f8(&DAT_00cd4000 + DAT_00cd4070);
  iVar4 = FUN_00504d90(g_pHWSystem);
  if (iVar4 == 0) {
    if (*(int *)((int)g_pHWSystem + 0xc0) == 0) {
      if (g_Language < 3) {
        if (1 < g_Language) {
          LoadAndShowSplash("Common/Textures/Epilepsy_Warning_Fre_4x3.ps3",0x168,0x40,0x1e,0);
          goto LAB_00013344;
        }
      }
      else if (g_Language == 4) {
        LoadAndShowSplash("Common/Textures/Epilepsy_Warning_Spa_4x3.ps3",0x168,0x40,0x1e,0);
        goto LAB_00013344;
      }
      LoadAndShowSplash("Common/Textures/Epilepsy_Warning_Eng_4x3.ps3",0x168,0x40,0x1e,0);
    }
    else if (*(int *)((int)g_pHWSystem + 0xc0) == 1) {
      if (g_Language < 4) {
        if (1 < g_Language) {
          if (g_Language < 3) {
            LoadAndShowSplash("Common/Textures/Health_Warning_Fre_SCEE_4x3.ps3",0x168,0x40,0x1e,0);
          }
          else {
            LoadAndShowSplash("Common/Textures/Health_Warning_Ger_SCEE_4x3.ps3",0x168,0x40,0x1e,0);
          }
          goto LAB_00013344;
        }
      }
      else {
        if (g_Language < 5) {
          LoadAndShowSplash("Common/Textures/Health_Warning_Spa_SCEE_4x3.ps3",0x168,0x40,0x1e,0);
          goto LAB_00013344;
        }
        if (g_Language < 6) {
          LoadAndShowSplash("Common/Textures/Health_Warning_Ita_SCEE_4x3.ps3",0x168,0x40,0x1e,0);
          goto LAB_00013344;
        }
      }
      LoadAndShowSplash("Common/Textures/Health_Warning_Eng_SCEE_4x3.ps3",0x168,0x40,0x1e,0);
    }
  }
LAB_00013344:
  iVar4 = FUN_00504d90(g_pHWSystem);
  if (iVar4 == 0) {
    if (*(int *)((int)g_pHWSystem + 0xc0) == 0) {
      LoadAndShowSplash("Common/Textures/Rat1_Presents_SCEA.ps3",0x168,0x40,0x1e,0);
    }
    else if (*(int *)((int)g_pHWSystem + 0xc0) == 1) {
      LoadAndShowSplash("Common/Textures/Rat1_Presents_SCEE.ps3",0x168,0x40,0x1e,0);
    }
  }
  STUB_00078104();
  STUB_00078134();
  STUB_00174cf0();
  VU1_swapChain();
  STUB_00174cf4(1);
  STUB_00503078(0);
  g_MoviePlayState = -1;
  g_MainLoopFrames = g_MainLoopFrames + 1;
  DAT_0090d714 = &DAT_00cd4000 + DAT_00cd4070;
  if (g_LogoMovieDone == 0) {
    uVar9 = ZEXT48(g_pBinkPlayer);
    if (g_pBinkPlayer == (void *)0x0) {
      uVar3 = FUN_005e38b0(0x60);
      uVar9 = 0;
      if ((int)uVar3 != 0) {
        FUN_004d5d5c(uVar3);
        uVar9 = uVar3;
      }
      g_pBinkPlayer = (void *)uVar9;
    }
    iVar4 = snprintf(acStack_1a0,"/rc1/ps3data/movies/logo_movie.bik");
    uVar2 = FUN_004ef34c(iVar4);
    FUN_004ef4d0(uVar2,acStack_1a0,auStack_160);
    FUN_004d5448(uVar9,auStack_160,0,0x400);
    uVar3 = 0;
    do {
      if (*(int *)(TrophyMgr + 0x188) != 0) {
        cellSysutilCheckCallback();
      }
      UpdateOcclusion(0);
      iVar4 = FUN_004d5524(uVar9);
      cellSysutilCheckCallback();
      if (1 < iVar4) {
        g_LogoMovieDone = FUN_004d59e8(uVar9);
        uVar3 = (ulonglong)(LZCOUNT(g_LogoMovieDone) << 0x20) >> 0x25 ^ 1;
      }
      Render_DispatchJob();
    } while ((int)uVar3 == 0);
  }
  g_MoviePlayState = 0;
  FadeToBlack((int)(animationSpeed * 12.5));
  FlushCache(0);
  printf("loading sound bank...\n");
  snprintf(acStack_e0,"rc1/ps3data/global/boot/sound.bnk");
  iVar4 = DAT_00a10920 + 0x200000;
  LoadAssetFromFile(acStack_e0,iVar4,0x100000);
  DAT_0071f404 = 0xffffffff;
  FUN_00505b30(iVar4,&PTR_sound_BasicCB_00707c38,&DAT_0071f404);
  uVar1 = DAT_0071f404;
  iVar6 = printf("done\n");
  STUB_00505f48(iVar6);
  g_pSoundDefs = &DAT_0071c984;
  DAT_0071c9a0 = uVar1;
  DAT_0071c9c0 = uVar1;
  DAT_0071c9e0 = uVar1;
  DAT_0071ca00 = uVar1;
  DAT_0071ca20 = uVar1;
  DAT_0071ca40 = uVar1;
  DAT_0071ca60 = uVar1;
  g_TotalSoundDefCnt = 7;
  DAT_0071ca80 = uVar1;
  DAT_0071caa0 = uVar1;
  DAT_0071cac0 = uVar1;
  DAT_0071cae0 = uVar1;
  DAT_0071cb00 = uVar1;
  ResetFrameBufferInfo();
  PrepareFrontbin();
  PTR_DAT_00902e98.piece<0,1>() = 1;
  if (Cutscene != DAT_00a52e60) {
    Cutscene = (uint)DAT_00a52e60;
    STUB_00503080();
    STUB_0050307c(0,0xb,(ZERO_MASK(Cutscene)) + 0xd,9);
    ResetFrameBufferInfo();
    STUB_000780f8();
  }
  g_newlevelnum = Level;
  Level = ~Veldin;
  DAT_0096459a = 1;
  DoSpaceTransition();
  g_FrontEnd = 0;
  return;
}


// 0x0013760 (0x210 bytes)
/* [boot] Variant loading a .ps3 header + .vram texture pair before showing the splash. */

void LoadAndShowSplashVram
               (char *texPath,char *vramPath,int holdFrames,int fadeInFrames,int fadeOutFrames,
               int blackFrames)

{
  int *tex;
  int iVar1;
  int iVar2;
  
  LoadAssetFromFile(texPath,DAT_00a10920,0xffffffffffffffff);
  LoadAssetFromFile(vramPath,DAT_00a10924,0xffffffffffffffff);
  tex = DAT_00a10920;
  *DAT_00a10920 = DAT_00a10924 - *(int *)(DAT_00902e9c + 0x4ac);
  if (fadeInFrames != 0) {
    iVar1 = 0;
    do {
      UpdateOcclusion(0);
      cellSysutilCheckCallback();
      TexSamplerFlags = 5;
      DrawSplashScreen(tex);
      Render_DispatchJob();
      cellSysutilCheckCallback();
      iVar1 = iVar1 + 0x80 / fadeInFrames;
    } while (iVar1 < 0x81);
  }
  iVar1 = 0;
  iVar2 = 0;
  if (0 < holdFrames) {
    do {
      UpdateOcclusion(0);
      cellSysutilCheckCallback();
      TexSamplerFlags = 5;
      DrawSplashScreen(tex);
      Render_DispatchJob();
      cellSysutilCheckCallback();
      iVar1 = iVar1 + 1;
    } while (iVar1 < holdFrames);
  }
  if (fadeOutFrames != 0) {
    iVar1 = 0x80;
    do {
      UpdateOcclusion(0);
      cellSysutilCheckCallback();
      TexSamplerFlags = 5;
      DrawSplashScreen(tex);
      Render_DispatchJob();
      cellSysutilCheckCallback();
      iVar1 = iVar1 - 0x80 / fadeOutFrames;
    } while (-1 < iVar1);
  }
  if (0 < blackFrames) {
    do {
      UpdateOcclusion(0);
      cellSysutilCheckCallback();
      DrawScreenOverlayTex(0,0,0,0,tex);
      Render_DispatchJob();
      cellSysutilCheckCallback();
      iVar2 = iVar2 + 1;
    } while (iVar2 < blackFrames);
  }
  TexSamplerFlags = 0;
  return;
}


// 0x0013970 (0x9c bytes)
void Transition_DrawSky(void)

{
  undefined8 uVar1;
  
  SetupGifPaging();
  SkyLevelGeneric();
  DoSkyGifPaging();
  uVar1 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  SetGSReg(0x16,uVar1);
  uVar1 = VU1_addGSregister(GSmem.zbuf >> 0xd,1,0);
  SetGSReg(0x21,uVar1);
  return;
}


// 0x0013a0c (0x14 bytes)
void ____SectionHeader_Boot_13a0c(void)

{
  DAT_0071cc08 = 0x10000;
  return;
}


// 0x0013a20 (0x248 bytes)
// strings: 0065158c: '!!! GameShutDown() called !!!\n' | 006515ac: '!!! Shutdown Graphics !!!\n' | 006515cc: '!!! Shutdown HWSystem !!!\n' | 006515ec: '!!! Shutdown NP Trophy !!!\n' | 00013bd8: 'HM8-`' (raw) | 0065160c: '!!! Shutdown Bink !!!\n' | 00651624: 'Waiting for save game to finish...\n' | 0065164c: '!!! Shutdown GameSave !!!\n' | 0065166c: '!!! Shutdown Scream !!!\n' | 0065168c: '!!! Calling exit() !!!\n'

void GameShutDown(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar3;
  int32_t iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  printf("!!! GameShutDown() called !!!\n");
  syscall_sys_timer_usleep(16000);
  syscall_sys_timer_usleep(16000);
  pad_Shutdown();
  FUN_005057a0();
  if (g_viewMtxPtr != (int *)0x0) {
    printf("!!! Shutdown Graphics !!!\n");
    (*(code *)**(undefined4 **)(*g_viewMtxPtr + 0x1c))();
  }
  if (g_pHWSystem != (void *)0x0) {
    printf("!!! Shutdown HWSystem !!!\n");
                    /* WARNING: Load size is inaccurate */
    (*(code *)**(undefined4 **)(*g_pHWSystem + 0x20))();
  }
  if (TrophyMgr != 0) {
    printf("!!! Shutdown NP Trophy !!!\n");
    sceNpTrophyDestroyHandle(TrophyMgr);
  }
  if (g_pBinkPlayer == (void *)0x0) {
    uVar1 = FUN_005e38b0(0x60);
    uVar5 = 0;
    if ((int)uVar1 != 0) {
      FUN_004d5d5c(uVar1);
      uVar5 = uVar1;
    }
    g_pBinkPlayer = (void *)uVar5;
  }
  if (g_pBinkPlayer != (void *)0x0) {
    printf("!!! Shutdown Bink !!!\n");
    uVar6 = ZEXT48(g_pBinkPlayer);
    if (g_pBinkPlayer == (void *)0x0) {
      uVar2 = FUN_005e38b0(0x60);
      uVar6 = 0;
      if ((int)uVar2 != 0) {
        FUN_004d5d5c(uVar2);
        uVar6 = uVar2;
      }
      g_pBinkPlayer = (void *)uVar6;
    }
    FUN_004d5d0c(uVar6);
  }
  iVar3 = idol::GetSaveData();
  if (iVar3 != 0) {
    while (iVar3 = memcard_IsSaveSystemIdle(), iVar3 == 0) {
      printf("Waiting for save game to finish...\n");
    }
    iVar4 = printf("!!! Shutdown GameSave !!!\n");
    idol::GetSaveData(iVar4);
    FUN_004e7710();
  }
  iVar4 = printf("!!! Shutdown Scream !!!\n");
  FUN_005066e0(iVar4);
  printf("!!! Calling exit() !!!\n");
  exit(0);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


// 0x0013c68 (0x68 bytes)
// strings: 006516a4: 'sysutil_gameexit_callback received CELL_SYSUTIL_REQUEST_EXITGAME \n' | 006516ec: 'In sysutil_gameexit_callback, status = 0x%08x\n'

void sysutil_gameexit_callback(longlong arg)

{
  if (arg < 0x121) {
    if (arg == 0x101) {
      print_tty2("sysutil_gameexit_callback received CELL_SYSUTIL_REQUEST_EXITGAME \n");
      GameShutDown();
      return;
    }
  }
  else if (arg < 0x123) {
    return;
  }
  print_tty2("In sysutil_gameexit_callback, status = 0x%08x\n",(int)arg);
  return;
}


// 0x0013cd0 (0xdc bytes)
uint CopyInitDataRecords(void)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  undefined8 *puVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  undefined8 uVar9;
  
  uVar7 = 0;
  puVar6 = (uint *)(*DAT_00964564 + (int)DAT_00964564);
  do {
    puVar4 = puVar6 + 4;
    puVar2 = (uint *)*puVar6;
    if (uVar7 == 0) {
      uVar7 = puVar6[3];
    }
    else if (uVar7 != puVar6[3]) {
      return uVar7;
    }
    uVar1 = puVar6[1];
    if ((((uVar1 & 7) == 0) && (((uint)puVar4 & 7) == 0)) && (((uint)puVar2 & 7) == 0)) {
      puVar5 = (undefined8 *)((int)puVar2 + uVar1);
      puVar8 = puVar4;
      for (; puVar2 != (uint *)puVar5; puVar2 = (uint *)((int)puVar2 + 8)) {
        uVar9 = *(undefined8 *)puVar8;
        puVar8 = puVar8 + 2;
        *(undefined8 *)puVar2 = uVar9;
      }
    }
    else {
      puVar3 = (uint *)((int)puVar2 + uVar1);
      puVar8 = puVar4;
      for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
        uVar1 = *puVar8;
        puVar8 = puVar8 + 1;
        *puVar2 = uVar1;
      }
    }
    puVar6 = (uint *)((int)puVar4 + puVar6[1]);
  } while( true );
}


// 0x0013dac (0x270 bytes)
/* [boot] Called by boot() main loop before every level/main function: clears g_loadingPlanet, HUD
   entries, help, checkpoints, toast timer, occlusion grid, per-level flags (Blarg/Aridia special
   case). */

void ResetLevelGlobals(void)

{
  HudElement *pHVar1;
  longlong lVar2;
  
  if (g_newlevelnum < 0) {
    g_FrontEnd = 1;
  }
  g_loadingPlanet = 0;
  HudBankMain = (astruct *)0x0;
  DAT_00a49344 = 0;
  g_newlevelnum = 0;
  oClass_to_mClass_lookup = 0;
  memset(0xa34f80,0,0x380);
  DAT_00a1bffc = 0;
  DAT_00a1bfd0 = 0;
  DAT_00731f40 = 0x3880a0c0;
  DAT_00731f44 = 0x2058b0;
  DAT_00731f48 = 0x3880a0c0;
  DAT_00731f4c = 0x2058b0;
  DAT_00731f50 = 0x3880c080;
  DAT_00731f54 = 0x308030;
  g_Help.state = 0;
  g_Help.counter = 0;
  pHVar1 = HudEntries;
  g_Help.boxHalfW = 0;
  lVar2 = 0xd;
  g_Help.boxHalfH = 0;
  g_Help.boxX = 0;
  g_Help.boxY = 0;
  g_Help.curHalfW = 0;
  g_Help.curHalfH = 0;
  g_Help.message_flg = 0;
  g_Help.num_message = 0;
  g_Help.ready = 0;
  g_Help.ready_timer = 0;
  g_Help.suspend = 0;
  g_Help.suspend_timer = 0;
  g_Help.message_index = -1;
  g_Help.message_id = -1;
  do {
    pHVar1->value = 0;
    pHVar1->iconId = 0xffff;
    pHVar1->maxValue = 0;
    pHVar1->pValue = (int *)0x0;
    pHVar1->initCb = (void *)0x0;
    pHVar1->updateCb = (void *)0x0;
    pHVar1->drawCb = (void *)0x0;
    pHVar1 = pHVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  g_toastMsgTimer = 0;
  DAT_00a15c84 = 0;
  FastMemSet(&g_CheckpointLive,0,0xc60);
  FastMemSet(&g_Checkpoint.set,0,0xc60);
  FastMemSet(&g_CheckpointBits,0,0x100);
  if ((Level == Oltanis) || ((Level != Blarg && (Level != Aridia)))) {
    DAT_00a1a858 = 0;
  }
  else {
    DAT_00a1a858 = 3;
  }
  if (g_MapRevealMask != 0) {
    memset(g_MapRevealMask,0,0x8000);
  }
  OcclPreviousGrid = 0;
  DAT_00a561c0 = 0;
  DAT_00927130 = 0;
  DAT_009271d4 = 0;
  DAT_00927118 = 0;
  DAT_009271d0 = 0;
  DAT_00927134 = 0;
  DAT_0092711c = 0;
  DAT_00a15c74 = 0;
  return;
}


// 0x001401c (0x838 bytes)
// strings: 0096c074: 'None' | 0065171c: "Error, __sys_process_param.size of 0. I don't know how this could happen, but it will cause some problems\n" | 0065178c: '\n\nargv[0] %s\n' | 0065179c: 'RC1.ppu.self' | 006517ac: 'NPUA' (raw) | 006517b4: 'NPUA80643' | 006517c4: 'UP9000-NPUA80643_00' | 006517dc: 'NPEA' (raw) | 006517e4: 'NPEA00385' | 006517f4: 'EP9000-NPEA00385_00' | 0065180c: 'BCUS' (raw) | 00651814: 'BCUS98212' | 00651824: 'UP9000-BCUS98212_00' | 0065183c: 'BCES' (raw) | 00651844: 'BCES01503' | 00651854: 'EP9000-BCES01503_00' | 0065186c: 'ERROR: (boot.cpp) Error Registering Exit callback function\n' | 006518ac: '(boot.cpp) After InitGameSystem' | 006518cc: 'Setting ps3medius with %d\n' | 006518ec: '/app_home' | 006518fc: '.psarc' | 00651904: 'rc1/ps3data/PS3arc.psarc' | 00651924: 'Before InitGameGraphics' | 0065193c: 'After InitGameGraphics' | 00651954: 'Checking for saves' | 00651974: 'DONE!\n'

int boot(int param_1,char **param_2,char **param_3)

{
  byte bVar1;
  void *pvVar2;
  int iVar6;
  undefined4 *puVar7;
  undefined8 uVar3;
  int32_t iVar8;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  GPiece<4> local_90;
  GPiece<4> local_8c;
  GPiece<4> auStack_88;
  GPiece<8> auStack_84;
  undefined4 *local_7c;
  
  DAT_008fabd0 = Cheats + 4;
  uVar11 = ZEXT48(&PTR_GameStart_007035d8);
  Level = ~Veldin;
  if (sys_process_param_t.size == 0) {
    print_tty(
             "Error, __sys_process_param.size of 0. I don\'t know how this could happen, but it will cause some problems\n"
             );
    return 0xffffffffffffffff;
  }
  printf("\n\nargv[0] %s\n",(ulonglong)*param_2);
  iVar6 = FUN_005c8700(*param_2,"RC1.ppu.self");
  FUN_00502cd0();
  MapVTables();
  pvVar2 = g_pHWSystem;
  idol::CheckLicense((int *)g_pHWSystem,&DAT_006517ac,"NPUA80643","UP9000-NPUA80643_00",false,
                     0xffffffff);
  idol::CheckLicense((int *)pvVar2,&DAT_006517dc,"NPEA00385","EP9000-NPEA00385_00",false,0xffffffff)
  ;
  idol::CheckLicense((int *)pvVar2,&DAT_0065180c,"BCUS98212","UP9000-BCUS98212_00",true,0xffffffff);
  idol::CheckLicense((int *)pvVar2,&DAT_0065183c,"BCES01503","EP9000-BCES01503_00",true,0xffffffff);
  FUN_00504988(pvVar2,*(undefined4 *)
                       ((int)param_2 +
                       (int)(((ZERO_MASK(iVar6)) + 1U & 0xffffffff) << 2)),0);
  FUN_004e68bc(pvVar2,0xb,8,0x10);
  DAT_008fa630 = &DAT_0071cce4;
  bVar1 = *(byte *)((int)pvVar2 + 0x10);
  iVar6 = cellSysutilRegisterCallback(0,&PTR_sysutil_gameexit_callback_00703618,0);
  if (iVar6 < 0) {
    printf("ERROR: (boot.cpp) Error Registering Exit callback function\n");
  }
  FUN_004ee594(&DAT_009260d8,(ZERO_MASK((uint)bVar1)) + 1,0,0);
  cellSysutilCheckCallback();
  pvVar9 = g_pGame;
                    /* WARNING: Load size is inaccurate */
  (*(code *)**(undefined4 **)(*g_pGame + 8))(g_pGame);
                    /* WARNING: Load size is inaccurate */
  (*(code *)**(undefined4 **)(*pvVar2 + 0x24))(pvVar2,"(boot.cpp) After InitGameSystem");
  cellSysutilCheckCallback();
  memcpy(auStack_84,&DAT_0071ccf4,0x44);
  puVar7 = (undefined4 *)FUN_005e38b0(4);
  local_7c = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = &PTR_PTR_00661820;
    local_7c = puVar7;
  }
  FUN_005194f0(auStack_84);
  cellSysutilCheckCallback();
  if (*(char *)((int)pvVar2 + 0x10) == '\0') {
    uVar3 = FUN_0051080c(0x430,0x10000100,3);
    uVar5 = 0;
    if ((int)uVar3 != 0) {
      FUN_00528c7c(uVar3,"/app_home");
      uVar5 = uVar3;
    }
    iVar8 = printf("Setting ps3medius with %d\n","/app_home");
  }
  else {
    uVar3 = FUN_0051080c(0x430,0x10000100,3);
    uVar5 = 0;
    if ((int)uVar3 != 0) {
      FUN_00528c7c(uVar3,&DAT_00926181);
      uVar5 = uVar3;
    }
    iVar8 = printf("Setting ps3medius with %d\n",&DAT_00926181);
  }
  cellSysutilCheckCallback(iVar8);
  uVar3 = FUN_005e39dc(0x2f00,0x80);
  if ((int)uVar3 != 0) {
    FUN_005e6af0(uVar3,PTR_DAT_008fa62c);
  }
  uVar4 = FUN_0051080c(0xad0,0x10000100,3);
  uVar3 = 0;
  if ((int)uVar4 != 0) {
    FUN_00511a80(uVar4,uVar5,1,local_8c,1,0,1,local_90);
    uVar3 = uVar4;
  }
  uVar5 = FUN_0051ef8c(uVar3,0);
  FUN_0051ced4();
  uVar5 = _ZN4cell4fios9scheduler8openFileEPKNS0_8opattr_tEPKcjPPNS0_10filehandleE(uVar5,0,"rc1/ps3data/PS3arc.psarc",1,auStack_88);
  uVar5 = _ZN4cell4fios2op8syncWaitEPx(uVar5,0);
  if ((int)uVar5 == 0) {
    cellSysutilCheckCallback();
    uVar5 = FUN_0050436c(pvVar9);
    FUN_004fe778(uVar5,"Before InitGameGraphics");
    idol::InitGameGraphics(pvVar9);
    FUN_004fe778(uVar5,"After InitGameGraphics");
    cellSysutilCheckCallback();
    FUN_005043b0(pvVar9);
    FUN_00504468(pvVar9);
    cellSysutilCheckCallback();
    (*(code *)**(undefined4 **)(*DAT_009030e4 + 8))(DAT_009030e4,uVar5,0,(int)g_pGame + 4);
    uVar3 = idol::GetSaveData();
    FUN_004e7f9c(uVar3,0);
    pvVar2 = g_pBinkPlayer;
    if (g_pBinkPlayer == (void *)0x0) {
      pvVar9 = (void *)FUN_005e38b0(0x60);
      pvVar2 = (void *)0x0;
      if (pvVar9 != (void *)0x0) {
        FUN_004d5d5c(pvVar9);
        pvVar2 = pvVar9;
      }
    }
    g_pBinkPlayer = pvVar2;
    *(undefined4 *)((int)g_pBinkPlayer + 0x5c) = 0;
    pvVar2 = g_pBinkPlayer;
    if (g_pBinkPlayer == (void *)0x0) {
      pvVar9 = (void *)FUN_005e38b0(0x60);
      pvVar2 = (void *)0x0;
      if (pvVar9 != (void *)0x0) {
        FUN_004d5d5c(pvVar9);
        pvVar2 = pvVar9;
      }
    }
    g_pBinkPlayer = pvVar2;
    FUN_005eae04(&PTR_Global_QuickMovieMalloc_00704d30,&PTR_____ClearFlag_a1073c_00704d38);
    FUN_0050565c(uVar5);
    pvVar2 = g_pBinkPlayer;
    if (g_pBinkPlayer == (void *)0x0) {
      pvVar9 = (void *)FUN_005e38b0(0x60);
      pvVar2 = (void *)0x0;
      if (pvVar9 != (void *)0x0) {
        FUN_004d5d5c(pvVar9);
        pvVar2 = pvVar9;
      }
    }
    g_pBinkPlayer = pvVar2;
    uVar10 = FUN_005057c4();
    FUN_005ec620(&PTR_FUN_007108d0,uVar10);
    FUN_0050565c(uVar5);
    FUN_004ec568(&DAT_01111700,8);
    cellSysutilCheckCallback();
    idol::GetSaveData();
    idol::registerSavesystemCallback();
    printf("Checking for saves");
    iVar6 = 0;
    while (g_memcardSaveBusy != 0) {
      cellSysutilCheckCallback();
      iVar6 = iVar6 + 1;
      if (iVar6 % 1000000 == 0) {
        print_tty2(".");
      }
    }
    print_tty2("DONE!\n");
    idol::RegisterTrophyCtxHandle(TrophyMgr);
    cellSysutilCheckCallback();
    SetNtscPalTiming();
    do {
      ResetLevelGlobals();
      (*(code *)*(undefined4 *)uVar11)();
      uVar11 = ZEXT48(g_pNextMainFunc);
      if (g_pNextMainFunc == (void *)0x0) {
        uVar11 = ZEXT48(&PTR_startLevel_00705b58) +
                 ((longlong)(int)Level >> 0x3f & 0xffffffffffffda80U);
      }
      else {
        g_pNextMainFunc = (void *)0x0;
      }
      FlushCache(0);
      FlushCache(2);
    } while( true );
  }
  do {
    cellSysutilCheckCallback(uVar5);
    uVar5 = 100;
    syscall();
  } while( true );
}


// 0x0014854 (0xa4 bytes)
/* [boot] Static destructors for boot.cpp global singletons (Bink player, save data, trophy mgr, HW
   system, game objects): restores base vtables. */

void StaticDestroy_BootGlobals(void)

{
  FUN_004d5da4(&DAT_00927078,2);
  FUN_004e7738(&DAT_00926c00,2);
  DAT_009265a0 = &PTR_PTR_00661790;
  DAT_009260d0 = &PTR_PTR_00661760;
  DAT_0090dad0 = &PTR_PTR_00661710;
  DAT_0090d98c = &PTR_PTR_0066177c;
  DAT_0090d840 = &PTR_PTR_00666410;
  DAT_0090d770 = &PTR_PTR_00661748;
  return;
}


// 0x00148f8 (0x260 bytes)
/* [boot] Static constructors for the PS3 port singletons: g_pGame (0x90d770), g_pHWSystem
   (0x90d840), 0x90d98c, 0x90dad0, 0x9260d0, TrophyMgr (0x9265a0), save data (0x926c00), Bink
   (0x927078). */

void StaticInit_BootGlobals(void)

{
  DAT_0071ccc0 = 0x10000;
  DAT_0090d774 = 0;
  DAT_0090d7c8 = 0;
  DAT_0090d7cc = 0;
  DAT_0090d7d0 = 0;
  DAT_0090d7d4 = 0;
  DAT_0090d7d8 = 0;
  DAT_0090d7d9 = 0;
  DAT_0090d7dc = 0;
  DAT_0090d7e0 = &DAT_0066173c;
  DAT_0090d7e4 = 0;
  DAT_0090d7e8 = 0;
  DAT_0090d7ec = 0;
  DAT_0090d7f0 = 0;
  DAT_0090d7f4 = 0;
  DAT_0090d7f8 = 0;
  DAT_0090d7fc = 0;
  DAT_0090d7fd = 0;
  DAT_0090d800 = 0;
  DAT_0090d804 = &DAT_0066173c;
  DAT_0090d808 = 0;
  DAT_0090d80c = 0;
  DAT_0090d810 = 0;
  DAT_0090d814 = 0;
  DAT_0090d818 = 0;
  DAT_0090d81c = 0;
  DAT_0090d820 = 0;
  DAT_0090d821 = 0;
  DAT_0090d824 = 0;
  DAT_0090d828 = &DAT_0066173c;
  DAT_0090d82c = 0;
  DAT_0090d830 = 0;
  DAT_0090d834 = 0;
  DAT_0090d838 = 0;
  DAT_0090d83c = 0xffffffff;
  g_pGame = &DAT_0090d770;
  DAT_0090d770 = &PTR_PTR_00661878;
  DAT_0090d840 = &PTR_PTR_00666410;
  DAT_0090d844 = 0;
  DAT_0090d848 = 0;
  DAT_0090d84c = 0;
  DAT_0090d850 = 0;
  DAT_0090d851 = 0;
  DAT_0090d854 = 1;
  DAT_0090d8f8 = 0;
  DAT_0090d8fc = 0;
  g_pHWSystem = &DAT_0090d840;
  memset(&DAT_0090d858,0,0xa0);
  DAT_0090d840 = &PTR_PTR_00661898;
  DAT_0159b388 = 1;
  DAT_0090d98c = &PTR_PTR_00661960;
  DAT_009030e4 = &DAT_0090d98c;
  FUN_004d7088(&DAT_0090dad0);
  g_pPadDriver = &DAT_009260d0;
  DAT_009260d0 = &PTR_PTR_00661940;
  FUN_004ee1e0(&DAT_009260d8);
  DAT_009265a0 = &PTR_PTR_00661790;
  FUN_004f0c98(&DAT_00926734);
  DAT_0092674c = 0;
  DAT_00926750 = 0;
  memset(&DAT_00926754,0,0x498);
  DAT_00926bec = 0;
  DAT_00926bf0 = 0;
  DAT_00926bf4 = 0;
  DAT_00926bf8 = 0;
  DAT_00926bfc = 0;
  DAT_00926730 = 0xffffffff;
  DAT_009265a4 = 0;
  DAT_00926728 = 0xffffffff;
  DAT_0092672c = 1;
  TrophyMgr = &DAT_009265a0;
  FUN_004f0df4(&DAT_00926734);
  FUN_004e7388(&DAT_00926c00);
  FUN_004d5d5c(&DAT_00927078);
  return;
}


// 0x0014b58 (0x24 bytes)
undefined4 _start(void)

{
  undefined *TOC;
  
  TOC = PTR_TOC_BASE_0070379c;
  entry();
  return **(undefined4 **)(TOC + -0x8000);
}


