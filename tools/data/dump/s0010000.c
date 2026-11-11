//==== 00010200  ns=crt0  size=0x2c
// sig: void _init(void)
// callers(1): 00014c7c boot::entry
// callees(2): 00014eec crt0::frame_dummy; 00014f5c crt0::__do_global_ctors_aux

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void crt0::_init(void)

{
  frame_dummy();
  __do_global_ctors_aux();
  return;
}



//==== 00010230  ns=stub  size=0x8
// sig: undefined STUB_00010230_RET_0(void)
// callers(0): 
// callees(0): 

undefined8 stub::STUB_00010230_RET_0(void)

{
  return 0;
}



//==== 00010238  ns=boot  size=0x150
// sig: void PlayLogoMovie(void)
// callers(0): 
// callees(11): 000684a4 draw::UpdateOcclusion; 00068560 draw::Render_DispatchJob; 004d5448 FUN_004d5448; 004d5524 FUN_004d5524; 004d59e8 FUN_004d59e8; 004d5d5c FUN_004d5d5c; 004ef34c FUN_004ef34c; 004ef4d0 FUN_004ef4d0; 005cd2a8 libc::snprintf; 005e38b0 FUN_005e38b0; 0064f504 cell::cellSysutilCheckCallback
// strings: 006510fc: '/rc1/ps3data/movies/logo_movie.bik'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [boot] Plays /rc1/ps3data/movies/logo_movie.bik once (g_LogoMovieDone guards). Same code inlined
   in GameStart. */

void boot::PlayLogoMovie(void)

{
  ulonglong uVar1;
  int iVar3;
  undefined8 uVar2;
  ulonglong uVar4;
  char acStack_e0 [64];
  undefined1 auStack_a0 [136];
  
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
    iVar3 = libc::snprintf(acStack_e0,"/rc1/ps3data/movies/logo_movie.bik");
    uVar2 = FUN_004ef34c(iVar3);
    FUN_004ef4d0(uVar2,acStack_e0,auStack_a0);
    FUN_004d5448(uVar4,auStack_a0,0,0x400);
    uVar1 = 0;
    do {
      if (*(int *)(TrophyMgr + 0x188) != 0) {
        cell::cellSysutilCheckCallback();
      }
      draw::UpdateOcclusion(0);
      iVar3 = FUN_004d5524(uVar4);
      cell::cellSysutilCheckCallback();
      if (1 < iVar3) {
        g_LogoMovieDone = FUN_004d59e8(uVar4);
        uVar1 = (ulonglong)(LZCOUNT(g_LogoMovieDone) << 0x20) >> 0x25 ^ 1;
      }
      draw::Render_DispatchJob();
    } while ((int)uVar1 == 0);
  }
  return;
}



//==== 00010388  ns=boot  size=0x20
// sig: undefined GetLanguageNameByIdx(void)
// callers(2): 000dce40 loaders::LoadHelp; 000dcf58 loaders::NAVG_LoadFile
// callees(0): 

undefined * boot::GetLanguageNameByIdx(void)

{
  return (&PTR_s_english_0071cb3c)[g_Language];
}



//==== 000103b0  ns=boot  size=0x1ac
// sig: void PlayAttractMovie(int idx)
// callers(0): 
// callees(12): 0006dad0 draw::FadeToBlack; 0011cd1c music::music_Stop; 0015d8b4 sound::sound_StopAllSounds; 0016963c update::PlayMovieBlocking; 004d4dd0 FUN_004d4dd0; 004d5d5c FUN_004d5d5c; 004ef34c FUN_004ef34c; 004ef4d0 FUN_004ef4d0; 00503244 stub::FlushCache; 005066bc stub::STUB_005066bc_RET_0; 005cd2a8 libc::snprintf; 005e38b0 FUN_005e38b0
// strings: 00651120: '/rc1/ps3data/movies/attract[%d].bik'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [boot] idx 0..3 -> /rc1/ps3data/movies/attract[%d].bik; switches g_gameMode to MOVIE then back to
   NORMAL. Inlined copy in PrepareFrontbin attract loop. */

void boot::PlayAttractMovie(int idx)

{
  ulonglong uVar1;
  int iVar3;
  undefined8 uVar2;
  ulonglong uVar4;
  char acStack_f0 [64];
  undefined1 auStack_b0 [144];
  
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
    iVar3 = libc::snprintf(acStack_f0,"/rc1/ps3data/movies/attract[%d].bik",idx);
    uVar2 = FUN_004ef34c(iVar3);
    FUN_004ef4d0(uVar2,acStack_f0,auStack_b0);
    FUN_004d4dd0(uVar4,auStack_b0,0x400);
    g_MoviePlayState = 2;
    DAT_009637cb = DAT_009637cb | 8;
    stub::FlushCache(0);
    sound::sound_StopAllSounds();
    music::music_Stop();
    draw::FadeToBlack((int)(animationSpeed * 12.5));
    g_gameMode = GAME_MODE_MOVIE;
    stub::FlushCache(0);
    sound::sound_StopAllSounds();
    music::music_Stop();
    stub::STUB_005066bc_RET_0(0);
    update::PlayMovieBlocking();
    g_MoviePlayState = 0;
    draw::FadeToBlack(4);
    g_gameMode = GAME_MODE_NORMAL;
    DAT_009637cb = DAT_009637cb | 0x10;
  }
  return;
}



//==== 0001055c  ns=boot  size=0x2c4
// sig: undefined ZeroFillKeyGlobals(void)
// callers(1): 00012ec8 boot::GameStart
// callees(1): 005d0140 libc::memset
// strings: 00a0ca34: 'None' | 0071fb2c: '������������'

void boot::ZeroFillKeyGlobals(void)

{
  libc::memset(&VisitedPlanets,0,0x14);
  libc::memset(g_CollectedGoldBolts,0,0x50);
  libc::memset(g_LevelFlags,0,0x140);
  g_boltCount = 0;
  g_ChallengeMode = 0;
  g_boltsMined = 0;
  g_FrameCount = 0;
  g_goodiesMenuActive = 0;
  g_boltMiningTimer = 0;
  g_deathCount = 0;
  DAT_00a0f6dc = 0;
  update::g_GameFrameCount = 0;
  g_totalBoltsCollected = 0;
  libc::memset(&MiscLevelFlags,0,0x80);
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
  libc::memset(g_SkillPoints,0,0x20);
  libc::memset(&currentAmmoArray,0,0x94);
  libc::memset(CHAR_ARRAY_0096c165,0,0x94);
  libc::memset(g_purchasableVendorItems,0xff,0xc);
  UINT_ARRAY_0096c1dc[0] = 0;
  UINT_ARRAY_0096c1dc[1] = 0;
  DAT_0096c1e4 = 0;
  DAT_0096c1e8 = 0;
  DAT_0096c1ec = 0;
  DAT_0096c1f0 = 0;
  DAT_0096c1f4 = 0;
  DAT_0096c1f8 = 0;
  libc::memset(&g_SeenPlanets,0,0x14);
  libc::memset(GalacticMap,0,0x50);
  libc::memset(g_KeyLevelFlags,0,0x790);
  libc::memset(CHAR_ARRAY_00a1000c,0,0x4a0);
  libc::memset(&DAT_00a0f51c,0,0x94);
  libc::memset(&DAT_00a0f5b0,0,0x94);
  libc::memset(&DAT_00a0f644,0,0x94);
  libc::memset(&g_equippedItem,0,0x94);
  libc::memset(&g_goldWeaponsArray,0,0x28);
  libc::memset(&DAT_00a0f6e4,0,0x50);
  DAT_0071fb24 = 1;
  DAT_00969c9c = 0;
  memcard::g_memcardRestoredBolts = 0;
  DAT_00a23094 = 0;
  DAT_00a2308d = 0;
  DAT_00a2308e = 0;
  return;
}



//==== 00010820  ns=boot  size=0x1c4
// sig: void FrontEnd_DrawLogo(void)
// callers(0): 
// callees(2): 000685c4 draw::GetEffectTex; 0006889c draw::Sprite_DrawShape

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [boot] Draws title logo (alpha g_FrontEndLogoAlpha; y=0x30 in Japanese mode) and pulsing 'press
   start' sprite (g_FrontEndPressStartAlpha, per-language effect tex). */

void boot::FrontEnd_DrawLogo(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (g_FrontEndLogoAlpha != 0) {
    if (g_JapaneseMode) {
      draw::Sprite_DrawShape(0xec,0x30,0x100,0x80,0,0,0x100,0x80);
    }
    else {
      draw::Sprite_DrawShape(0xec,0x10,0x100,0x80,0,0,0x100,0x80);
    }
  }
  if (g_FrontEndPressStartAlpha != 0) {
    iVar4 = g_Language + -1;
    if (g_JapaneseMode == false) {
      bVar1 = draw::g_ScreenHeight < 0;
      uVar2 = draw::g_ScreenHeight & 1;
      iVar3 = draw::g_ScreenHeight >> 1;
      draw::GetEffectTex(iVar4 + (iVar4 >> 0x1f & -iVar4) + 4);
      draw::Sprite_DrawShape
                (0xa0,iVar3 + (uint)(bVar1 && uVar2 != 0) + -0x50,0xc0,0x60,0,0,0x100,0x80);
    }
  }
  return;
}



//==== 000109e4  ns=boot  size=0x280
// sig: char FrontEnd_UpdateSceneCamera(void)
// callers(2): 00010c70 boot::FrontEnd_Draw; 00011020 boot::FrontEnd_Update
// callees(3): 000668d0 draw::UpdateViewContext; 005c5ad0 libc::memcpy; 005dd914 mathfunc::SinCos

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [boot] Sets GameCamera pos + orientMtx from the space-scene camera track
   (g_SpaceSceneCameraFrames[g_cutsceneCameraFrame], 0x20 bytes/frame: pos, rotXYZ at +0x10). */

char boot::FrontEnd_UpdateSceneCamera(void)

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
  ViewContext.xratio = 0.63;
  draw::UpdateViewContext();
  GameCamera.posX = *pfVar2;
  GameCamera.posY = pfVar2[1];
  GameCamera.posZ = pfVar2[2];
  GameCamera.field8_0x14c = *(char (*) [4])(pfVar2 + 3);
  pvVar4 = libc::memcpy(&local_e0,&DAT_00651080,0x40);
  uVar3 = mathfunc::SinCos((double)pfVar2[4],pvVar4,0);
  dVar12 = extraout_f1;
  uVar3 = mathfunc::SinCos((double)pfVar2[4],uVar3,1);
  dVar11 = extraout_f1_00;
  uVar3 = mathfunc::SinCos((double)pfVar2[5],uVar3,0);
  dVar10 = extraout_f1_01;
  uVar3 = mathfunc::SinCos((double)pfVar2[5],uVar3,1);
  dVar9 = extraout_f1_02;
  uVar3 = mathfunc::SinCos((double)pfVar2[6],uVar3,0);
  dVar8 = extraout_f1_03;
  dVar5 = (double)mathfunc::SinCos((double)pfVar2[6],uVar3,1);
  dVar7 = (double)(float)(dVar10 * dVar8);
  dVar6 = (double)(float)(dVar5 * dVar10);
  libc::memcpy(&local_a0,&DAT_0071cc2c,0x40);
  local_a0 = (float)(dVar9 * dVar5);
  local_9c = (float)(dVar9 * dVar8);
  local_88 = (float)(dVar9 * dVar12);
  local_78 = (float)(dVar11 * dVar9);
  local_90 = (float)(dVar12 * dVar6 - (double)(float)(dVar11 * dVar8));
  local_8c = (float)(dVar12 * dVar7 + (double)(float)(dVar11 * dVar5));
  local_80 = (float)(dVar11 * dVar6 + (double)(float)(dVar12 * dVar8));
  local_7c = (float)(dVar11 * dVar7 - (double)(float)(dVar5 * dVar12));
  local_98 = (float)-dVar10;
  libc::memcpy(&local_e0,&local_a0,0x40);
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



//==== 00010c70  ns=boot  size=0x368
// sig: void FrontEnd_Draw(void)
// callers(1): 00012048 boot::PrepareFrontbin
// callees(14): 000109e4 boot::FrontEnd_UpdateSceneCamera; 00066088 draw::ComposeCameraMatrix; 000684a4 draw::UpdateOcclusion; 00068560 draw::Render_DispatchJob; 000685c4 draw::GetEffectTex; 0006889c draw::Sprite_DrawShape; 0006b5dc draw::DrawScreenOverlay; 0006b714 draw::ExecuteRegisteredMobyFuncs; 0006c424 draw::SetupDefaultDraw; 000784e8 freeze::DrawDialogText; 0013de20 pause::FrontEnd_DrawMenu; 001754c8 stub::STUB_001754c8; 005001fc fastfunc::FastMemSet; 00502758 fastfunc::FastDoubleToInt

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [boot] Per-frame draw of the title screen: occlusion reset, scene camera, logo sprites, screen
   fade, freeze/pause overlays, then Render_DispatchJob. */

void boot::FrontEnd_Draw(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  fastfunc::FastMemSet(OcclVisibility,0xffffffffffffffff,0x80);
  FrontEnd_UpdateSceneCamera();
  draw::ComposeCameraMatrix();
  DAT_00a10724 = 0xffffffff;
  draw::UpdateOcclusion(1);
  PTR_DAT_00902e98._0_1_ = 0;
  draw::SetupDefaultDraw();
  if (g_FrontEndLogoAlpha != 0) {
    if (g_JapaneseMode == false) {
      draw::Sprite_DrawShape(0xec,0x10,0x100,0x80,0,0,0x100,0x80);
    }
    else {
      draw::Sprite_DrawShape(0xec,0x30,0x100,0x80,0,0,0x100,0x80);
    }
  }
  if (g_FrontEndPressStartAlpha != 0) {
    iVar4 = g_Language + -1;
    if (g_JapaneseMode == false) {
      bVar1 = draw::g_ScreenHeight < 0;
      uVar2 = draw::g_ScreenHeight & 1;
      iVar3 = draw::g_ScreenHeight >> 1;
      draw::GetEffectTex(iVar4 + (iVar4 >> 0x1f & -iVar4) + 4);
      draw::Sprite_DrawShape
                (0xa0,iVar3 + (uint)(bVar1 && uVar2 != 0) + -0x50,0xc0,0x60,0,0,0x100,0x80);
    }
  }
  if (0 < (int)SceneScreenFade) {
    if (0x3f800000 <
        (int)(((uint)((int)SceneScreenFade >> 0x1f) >> 1 ^ (uint)SceneScreenFade) -
             ((int)SceneScreenFade >> 0x1f))) {
      SceneScreenFade = 1.0;
    }
    iVar4 = fastfunc::FastDoubleToInt((double)(SceneScreenFade * 128.0));
    draw::DrawScreenOverlay(0,0,0,iVar4);
  }
  if (g_gameMode == GAME_MODE_FREEZE) {
    freeze::DrawDialogText();
  }
  if ((g_gameMode == GAME_MODE_PAUSE) && (g_MenuScreen != 0x2d)) {
    pause::FrontEnd_DrawMenu();
  }
  if (draw::g_MobyFuncListCount != 0) {
    draw::ExecuteRegisteredMobyFuncs();
  }
  stub::STUB_001754c8();
  if (0 < (int)SceneScreenFade) {
    if (0x3f800000 <
        (int)(((uint)((int)SceneScreenFade >> 0x1f) >> 1 ^ (uint)SceneScreenFade) -
             ((int)SceneScreenFade >> 0x1f))) {
      SceneScreenFade = 1.0;
    }
    iVar4 = fastfunc::FastDoubleToInt((double)(SceneScreenFade * 128.0));
    draw::DrawScreenOverlay(0,0,0,iVar4);
  }
  draw::Render_DispatchJob();
  return;
}



//==== 00011020  ns=boot  size=0x4a8
// sig: void FrontEnd_Update(void)
// callers(1): 00012048 boot::PrepareFrontbin
// callees(12): 000109e4 boot::FrontEnd_UpdateSceneCamera; 00079b18 freeze::UpdateFreeze; 000aa5e0 hero::Hero_UpdateInScene; 000e07f8 loaders::ParseSpaceSceneChunk; 000ef74c mobyfunc::UpdateMobyFrameData; 000f31a8 mobyfunc::UpdateMobyTransform; 0013d3e0 pause::EnterPauseState; 0013d8a0 pause::FrontEnd_UpdateMenu; 0015be68 sound::sound_Update; 00166e30 update::ResetGameCounters; 00166e88 update::UpdateGameCounters; 00502730 fastfunc::FastIntToDouble

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [boot] Per-frame update of the title screen space scene: advances scene frame/chunk
   (ParseSpaceSceneChunk), interpolates scene mobys, fades in logo, START/confirm -> EnterPauseState
   (main menu), handles pause/freeze modes. */

void boot::FrontEnd_Update(void)

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
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  update::ResetGameCounters();
  puVar14 = &DAT_0095cd50;
  g_cutsceneCameraFrame = g_cutsceneCameraFrame + 1;
  g_SpaceSceneFrame = g_SpaceSceneFrame + 1;
  SceneScreenFade = SceneScreenFade - 0.0625;
  if (SceneScreenFade < 0.0) {
    SceneScreenFade = 0.0;
  }
  if (g_SpaceSceneFrame < g_SpaceSceneNumFrames._0_2_) {
    if (0x5f < (int)g_cutsceneCameraFrame) {
      g_SpaceSceneChunk = g_SpaceSceneChunk + 1;
      loaders::ParseSpaceSceneChunk(g_SpaceSceneChunk);
    }
  }
  else {
    g_SpaceSceneFrame = 0;
    g_SpaceSceneChunk = 0;
    loaders::ParseSpaceSceneChunk(0);
  }
  FrontEnd_UpdateSceneCamera();
  iVar13 = 0;
  if (0 < g_SpaceSceneMobyCnt._0_2_) {
    dVar17 = 0.5;
    dVar18 = 1.0;
    do {
      pMVar8 = (MobyInstance *)puVar14[0x5e];
      cVar9 = (char)((int)g_cutsceneCameraFrame >> 1);
      pMVar8->previousAnimationFrame = cVar9;
      pMVar8->animationFrame = cVar9 + '\x01';
      mobyfunc::UpdateMobyFrameData(pMVar8);
      dVar15 = (double)fastfunc::FastIntToDouble(g_cutsceneCameraFrame & 1);
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
      mobyfunc::UpdateMobyTransform(pMVar8);
      pMVar8->shadow = '\0';
      if (pMVar8->oClass == RATCHET) {
        hero::Hero_UpdateInScene(pMVar8);
      }
      iVar13 = iVar13 + 1;
      puVar14 = puVar14 + 1;
    } while (iVar13 < g_SpaceSceneMobyCnt._0_2_);
  }
  update::UpdateGameCounters();
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
    if ((g_buttonsPressedThisFrame & (pad_ConfirmButtonMask | START)) != 0) {
      pause::EnterPauseState();
    }
    sound::sound_Update();
  }
  else if (g_gameMode == GAME_MODE_PAUSE) {
    auVar19 = ZEXT416(0xffffffff);
    auVar19 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
    auVar20 = vectorShiftLeftIntegerWord(auVar19,auVar19);
    auVar19 = loadVectorLeftIndexed(0x40,0x10fd8);
    auVar19 = auVar19 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar21 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar19 = vectorMultiplyAddFloatingPoint
                        (auVar21,auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,
                         auVar20);
    iVar13 = g_FrontEndLogoAlpha + -0x10;
    iVar12 = g_FrontEndPressStartAlpha + -0x10;
    auVar19 = vectorConvertToSignedFixedPointWordSaturate(auVar19,0);
    g_FrontEndLogoAlpha = iVar13 + (iVar13 >> 0x1f & -iVar13);
    g_FrontEndPressStartAlpha = iVar12 + (iVar12 >> 0x1f & -iVar12);
    auVar19 = auVar19 >> 0x60 & (undefined1  [16])0xffffffff;
    g_FrontEndTimer =
         storeVectorElementWordIndexed
                   (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,0xffffffffffffd710
                    ,0x910000);
    pause::FrontEnd_UpdateMenu();
    sound::sound_Update();
  }
  else if (g_gameMode == GAME_MODE_FREEZE) {
    freeze::UpdateFreeze();
    sound::sound_Update();
  }
  return;
}



//==== 000114c8  ns=boot  size=0x64
// sig: int IsSoundHandlePlaying(int handle, int soundId)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [boot] True if sound slot (0x70 bytes each at 0x9637d4) has state 1/2 and plays soundId (+sound
   base). Inlined in PrepareFrontbin ambient-sound loop. */

int boot::IsSoundHandlePlaying(int handle,int soundId)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (((-1 < handle) &&
      (iVar2 = (int)((longlong)handle << 7) - (int)((longlong)handle << 4),
      (int)*(short *)((int)sound::g_SoundChannels + iVar2 + 0xe) == sound::g_CoreSoundCnt + soundId)
      ) && ((cVar1 = *(char *)((int)sound::g_SoundChannels + iVar2 + 4), cVar1 == '\x01' ||
            (cVar1 == '\x02')))) {
    iVar3 = 1;
  }
  return iVar3;
}



//==== 0001152c  ns=stub  size=0x4
// sig: undefined STUB_0001152c(void)
// callers(0): 
// callees(0): 

void stub::STUB_0001152c(void)

{
  return;
}



//==== 00011530  ns=boot  size=0x118
// sig: void LoadLanguageHelpMsgs(void)
// callers(2): 00011b74 boot::Load_Front_End; 00141408 pause::UpdatePauseMenu
// callees(3): 0050027c fastfunc::FastMemCopy32; 00503e00 fios::LoadAssetFromFile; 005cd2a8 libc::snprintf
// strings: 00651144: 'rc1/ps3data/global/locale/%s' | 00651164: 'rc1/ps3data/global/locale/japanese'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [boot] Loads rc1/ps3data/global/locale/<language> (or japanese) into locale buffer, sets Help
   count + help::HelpMsgs and relocates message pointers. Also called from pause menu on language
   change. */

void boot::LoadLanguageHelpMsgs(void)

{
  int iVar1;
  int iVar2;
  char acStack_90 [136];
  
  if (!g_JapaneseMode) {
    libc::snprintf(acStack_90,"rc1/ps3data/global/locale/%s",
                   ZEXT48((&PTR_s_english_0071cb3c)[g_Language]));
  }
  if (g_JapaneseMode != false) {
    libc::snprintf(acStack_90,"rc1/ps3data/global/locale/japanese");
  }
  fios::LoadAssetFromFile(acStack_90,g_pLocaleBuffer,0x40000);
  Help = *g_pLocaleBuffer;
  help::HelpMsgs = g_pLocaleBuffer;
  fastfunc::FastMemCopy32
            (g_pLocaleBuffer,g_pLocaleBuffer + 2,(g_pLocaleBuffer[1] + 3U & 0xfffffffc) - 8);
  if (0 < Help) {
    iVar2 = 0;
    iVar1 = Help;
    do {
      iVar1 = iVar1 + -1;
      *(int *)((int)help::HelpMsgs + iVar2) =
           (int)help::HelpMsgs + *(int *)((int)help::HelpMsgs + iVar2) + -8;
      iVar2 = iVar2 + 0x10;
    } while (0 < iVar1);
  }
  return;
}



//==== 00011648  ns=boot  size=0x52c
// sig: undefined LoadGameplay(undefined4 gameplay, undefined4 param_2)
// callers(1): 00011b74 boot::Load_Front_End
// callees(11): 000678d8 draw::UpdateFog; 0006840c draw::ResetDrawGlobals; 0006c5dc draw::EnableFontColors; 000780f4 stub::STUB_000780f4; 0011dfc8 pad::InitPadRing; 00174bd8 stub::STUB_00174bd8; 005001fc fastfunc::FastMemSet; 00500250 fastfunc::FastMemSetZero; 0050027c fastfunc::FastMemCopy32; 005c5ad0 libc::memcpy; 005cd098 libc::printf
// strings: 00651188: '!!!! Too many directional lights !!!! - Lighting will look bogus as a penalty.\n'

MobyInstance * boot::LoadGameplay(int *gameplay,int param_2)

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
  
  fastfunc::FastMemSet(&hero::g_heroMtx,0,0x2310);
  fastfunc::FastMemSet(&GameCamera,0,0x3a0);
  fastfunc::FastMemSet(&mobyfunc::g_AnimLayerPool,0,0x180);
  DAT_00a52e60 = (undefined1)Cutscene;
  CollOutput.padding[0] = (int)&collproc::g_CollMobyJointCache;
  CollOutput.padding[1] = (int)&MobyClassRef;
  CollOutput.padding[2] = 0;
  CollOutput.collCount = 0;
  CollOutput.damageNext = 0;
  fastfunc::FastMemSetZero(collproc::g_MobyGrid,0x10000);
  fastfunc::FastMemSetZero(&MobyGridAlloc,0x60);
  piVar8 = (int *)((int)gameplay + *gameplay);
  ViewContext.occlColor0 = *piVar8;
  ViewContext.occlColor1 = piVar8[1];
  ViewContext.occlColor2 = piVar8[2];
  levelFog.r = (u8)piVar8[3];
  levelFog.g = (u8)piVar8[4];
  levelFog.b = (u8)piVar8[5];
  LevelFogNearDist = piVar8[6];
  LevelFogFarDist = (float)piVar8[7];
  LevelFogNearIntensity = (float)piVar8[8];
  LevelFogFarIntensity = (float)piVar8[9];
  draw::UpdateFog();
  TfragDrawDist = 512000.0;
  TieDrawDist = 720.0;
  ShrubDrawDist = 500.0;
  DAT_00a390b8 = 500;
  PartClipDist = 0x1f4000;
  stub::STUB_000780f4(ViewContext.occlColor0,ViewContext.occlColor1,ViewContext.occlColor2);
  stub::STUB_00174bd8(&DAT_00a10680);
  fastfunc::FastMemSetZero(PointLights,0x100);
  fastfunc::FastMemSetZero(&PointLightData,0x180);
  fastfunc::FastMemSetZero(DirectionalLights,0x400);
  lights = gameplay[1];
  lightsCount = *(int *)((int)gameplay + lights);
  if (lightsCount < 0xc) {
    if (lightsCount == 0) goto skip_directionalLightCopy;
  }
  else {
    libc::printf("!!!! Too many directional lights !!!! - Lighting will look bogus as a penalty.\n")
    ;
    lightsCount = 0xc;
  }
  fastfunc::FastMemCopy32(DirectionalLights,(int *)((int)gameplay + lights) + 4,lightsCount << 6);
skip_directionalLightCopy:
  TieCnt = TieCntBase;
  TieInstance = TieInstanceBase;
  TieInstanceEnd = TieInstanceBase + TieCntBase;
  libc::memcpy(TieInstanceBase,DAT_00a1a7b8,TieCntBase * 0x70);
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
  ShrubInstance = ShrubInstanceBase;
  DAT_00a108fc = gameplay;
  libc::memcpy(ShrubInstanceBase,DAT_00a1a7bc,ShrubInstanceCnt * 0x70);
  pMVar2 = (MobyInstance *)((int)gameplay + param_2 + 0x3f & 0xffffffc0);
  MobyInstance = pMVar2;
  fastfunc::FastMemSet(pMVar2,0,0x4000);
  DAT_00a390b0 = pMVar2 + 0x40;
  PartInstances = pMVar2 + 0x60;
  MobyInstancePermEnd = MobyInstance;
  MobyInstance->state = 0xff;
  MobyInstanceEnd = MobyInstance + 0x3f;
  PartIndexNext = 0;
  PartIndexTop = 0xffffffff;
  PartActiveCnt = 0;
  fastfunc::FastMemSetZero(&DAT_00a52000,0x200);
  pMVar6 = MobyInstance;
  if (MobyInstance != MobyInstanceEnd) {
    do {
      pMVar6->occlIndex = 0x7f80;
      pMVar6 = pMVar6 + 1;
    } while (pMVar6 != MobyInstanceEnd);
  }
  pTVar7 = TieInstance;
  if (TieInstance != TieInstanceEnd) {
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
  draw::ResetDrawGlobals();
  pad::InitPadRing();
  draw::EnableFontColors();
  worldUpdateTime = 0;
  SceneScreenFade = 1.0;
  return pMVar2 + 0x460;
}



//==== 00011b74  ns=boot  size=0x4c0
// sig: undefined Load_Front_End(void)
// callers(1): 00012048 boot::PrepareFrontbin
// callees(15): 00011530 boot::LoadLanguageHelpMsgs; 00011648 boot::LoadGameplay; 000668d0 draw::UpdateViewContext; 00068160 draw::InitViewContext; 000d89d0 initonce::InitMemSlots; 000dc0ec loaders::LoadMobyPClasses; 000e07f8 loaders::ParseSpaceSceneChunk; 0011dbcc music::LoadMusic2; 00174bdc vuchain::VU1_setBufSizeByLevel; 00174c24 vuchain::VU1_initChain; 005001fc fastfunc::FastMemSet; 0050027c fastfunc::FastMemCopy32; 005034c4 idol::PRINT_m_LoadGameFile; 00503e00 fios::LoadAssetFromFile; 00508198 fios::load_engine_vram_pair
// strings: 006511d8: 'g_wad.game.frontend_wad' | 006511f0: 'rc1/ps3data/global/boot/engine.ps3' | 00651218: 'rc1/ps3data/global/boot/vram.ps3' | 00651240: 'rc1/ps3data/japan_font.ps3' | 00651260: 'rc1/ps3data/japan_font.vram' | 00651280: 'rc1/ps3data/global/boot/gameplay_ntsc' | 006512a8: 'rc1/ps3data/global/boot/japanLogo.ps3' | 006512d0: 'rc1/ps3data/global/boot/japanLogo.vram'

void boot::Load_Front_End(void)

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
  vuchain::VU1_setBufSizeByLevel();
  initonce::InitMemSlots();
  DAT_00e5aa64 = 0x100000;
  DAT_00966ad4 = 0x2c0000;
  loaders::g_GsRamAlloc = 0x2c0000;
  GSmem.base = 0x2c0000;
  fastfunc::FastMemSet(&MobyClassRef,0xffffffff87654321,0x10);
  fastfunc::FastMemSet(&MobyClassLookup,0xffffffffffffffff,0x800);
  fastfunc::FastMemSet(&MobyTexLookup,0xffffffffffffffff,0xe00);
  fastfunc::FastMemSet(&MobyMipDists,0,0xe0);
  draw::InitViewContext();
  draw::UpdateViewContext();
  vuchain::VU1_initChain();
  idol::PRINT_m_LoadGameFile(0x1400000,"g_wad.game.frontend_wad");
  fios::load_engine_vram_pair
            (&TEX_BASE,"rc1/ps3data/global/boot/engine.ps3","rc1/ps3data/global/boot/vram.ps3");
  fios::LoadAssetFromFile("rc1/ps3data/japan_font.ps3",&g_JapanFontTex,0x24);
  fios::LoadAssetFromFile("rc1/ps3data/japan_font.vram",DAT_00a10930,0x80000);
  g_JapanFontTex = g_JapanFontTex + (DAT_00a10930 - *(int *)(g_viewMtxPtr + 0x4ac));
  music::LoadMusic2(1);
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
      loaders::LoadMobyPClasses
                ((MobyClass *)(iVar6 + ((uint)((LZCOUNT(-piVar5[1]) << 0x3a) >> 0x3f) & -iVar6)),
                 (void *)0x0,(char *)(piVar5 + 4),*piVar5);
      iVar8 = iVar8 + 1;
      piVar5 = piVar5 + 2;
    } while (iVar8 < iVar4);
  }
  DAT_0071c980 = EffectTexHeaders + piVar7[0x1f] * 0x24;
  uVar3 = fios::LoadAssetFromFile("rc1/ps3data/global/boot/gameplay_ntsc",Gameplay,0x200000);
  DAT_00a10908 = LoadGameplay(Gameplay,uVar3);
  DAT_0090d720 = DAT_00a10908 + 0x3fU & 0xffffffc0;
  iVar4 = *(int *)(Gameplay + g_Language * 4 + 0x10);
  if (iVar4 != 0) {
    piVar7 = (int *)(Gameplay + iVar4);
    DAT_0090d71c = Gameplay + 0x10;
    DAT_0090d718 = Gameplay;
    Help = *piVar7;
    help::HelpMsgs = DAT_0090d720;
    fastfunc::FastMemCopy32(DAT_0090d720,piVar7 + 2,(piVar7[1] + 3U & 0xfffffffc) - 8);
    if (0 < Help) {
      iVar8 = 0;
      iVar4 = Help;
      do {
        iVar4 = iVar4 + -1;
        *(uint *)(help::HelpMsgs + iVar8) = *(int *)(help::HelpMsgs + iVar8) + (help::HelpMsgs - 8);
        iVar8 = iVar8 + 0x10;
      } while (0 < iVar4);
    }
  }
  fastfunc::FastMemSet(&DAT_0095cd50,0,0x1c0);
  fastfunc::FastMemSet(&DAT_00a1be80,0,0x40);
  piVar7 = g_EngineData;
  loaders::g_SceneLoadBuffer = loaders::g_NpcBuffer + 0x200000;
  DAT_0095cda8 = loaders::g_NpcBuffer;
  DAT_00a10908 = DAT_00a10908 + 0x80000;
  iVar4 = 0;
  piVar9 = &loaders::g_SceneChunkPtrs;
  piVar5 = (int *)((int)g_EngineData + g_EngineData[0x20]);
  do {
    if (piVar5[1] == 0) break;
    iVar8 = *piVar5;
    iVar4 = iVar4 + 1;
    piVar5 = piVar5 + 2;
    *piVar9 = (int)piVar7 + iVar8;
    piVar9 = piVar9 + 1;
  } while (iVar4 < 0x46);
  loaders::ParseSpaceSceneChunk(0);
  LoadLanguageHelpMsgs();
  fios::LoadAssetFromFile("rc1/ps3data/global/boot/japanLogo.ps3",&g_JapanLogoTex,0x24);
  fios::LoadAssetFromFile("rc1/ps3data/global/boot/japanLogo.vram",DAT_00a10924 + 0x200000,0x40000);
  g_JapanLogoTex = (DAT_00a10924 - *(int *)(g_viewMtxPtr + 0x4ac)) + 0x200000;
  uVar2 = (uint)DAT_00a35932;
  pMVar1 = MobyClasses[uVar2];
  if ((pMVar1 != (MobyClass *)0x0) && (pMVar1->SoundDefs != (void *)0x0)) {
    pMVar1->SoundDefs = &DAT_0071ca64;
    MobyClasses[uVar2]->sound_cnt = '\x05';
  }
  return;
}



//==== 00012048  ns=boot  size=0x788
// sig: undefined PrepareFrontbin(void)
// callers(1): 00012ec8 boot::GameStart
// callees(46): 00010c70 boot::FrontEnd_Draw; 00011020 boot::FrontEnd_Update; 00011b74 boot::Load_Front_End; 00065670 draw::ResetFrameBufferInfo; 000684a4 draw::UpdateOcclusion; 00068560 draw::Render_DispatchJob; 0006dad0 draw::FadeToBlack; 000780fc stub::STUB_000780fc; 00078104 stub::STUB_00078104; 00078134 stub::STUB_00078134; 000c85c4 hud::HudScratch_Reset; 000c8658 hud::Hud_InitBanks; 000e07f8 loaders::ParseSpaceSceneChunk; 000e0e10 stub::STUB_000e0e10; 000e6598 map::FlowState_Update; 000e7638 memcard::memcard_ResetGame; 000e76cc memcard::memcard_Update; 0011cd1c music::music_Stop; 0011e2d4 pad::UpdatePad; 0015cdb0 sound::sound_Kill; 0015d380 sound::sound_LevelPlay; 0015d8b4 sound::sound_StopAllSounds; 001655a0 stub::STUB_001655a0; 001655a4 map::InitIndexedBuffers; 0016963c update::PlayMovieBlocking; 00174c24 vuchain::VU1_initChain; 00174c88 vuchain::VU1_swapChain; 00174cf0 stub::STUB_00174cf0; 00174cf4 stub::STUB_00174cf4; 004d4dd0 FUN_004d4dd0; 004d5d5c FUN_004d5d5c; 004ef34c FUN_004ef34c; 004ef4d0 FUN_004ef4d0; 00503078 stub::STUB_00503078; 0050307c stub::STUB_0050307c; 00503080 stub::STUB_00503080; 00503244 stub::FlushCache; 005046b0 idol::GameAuthenticate; 00505d20 stub::STUB_00505d20; 00505f4c stub::STUB_00505f4c
// strings: 006512f8: 'Before load Front_End\n' | 00651310: 'After load Front_End\n' | 00651328: 'After Hud Init\n' | 00651338: 'rc1/ps3data/edat/rcuno.edat' | 00651358: '1014312138ED1201' | 00651120: '/rc1/ps3data/movies/attract[%d].bik'

void boot::PrepareFrontbin(void)

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
  undefined1 auStack_100 [152];
  
                    /* CORRESPONDING PS2 FUNCTION IN FRONTBIN ELF 0x1eb798 */
  piVar11 = DAT_009271f8;
  Level = Veldin;
  *DAT_009271fc = 0x83;
  *piVar11 = 0;
  dVar2 = g_GameSettings.Stereo;
  memcard::memcard_ResetGame();
  g_GameSettings.Stereo = dVar2;
  iVar6 = libc::printf("Before load Front_End\n");
  Load_Front_End(iVar6);
  iVar6 = libc::printf("After load Front_End\n");
  hud::HudScratch_Reset(iVar6);
  stub::STUB_001655a0();
  map::InitIndexedBuffers();
  hud::Hud_InitBanks();
  iVar6 = libc::printf("After Hud Init\n");
  stub::STUB_000e0e10(iVar6);
  dVar16 = 180.5;
  iVar7 = *DAT_009271f8 / 0x109;
  while( true ) {
    if ((int)((double)animationSpeed * dVar16) <= iVar7) break;
    stub::STUB_00503078(0);
    iVar7 = iVar7 + 1;
  }
  stub::STUB_00505f4c();
  do {
    iVar7 = stub::STUB_00505d20();
  } while (iVar7 != 0);
  stub::STUB_00505f50();
  idol::GameAuthenticate(g_pGame,"rc1/ps3data/edat/rcuno.edat","1014312138ED1201");
  while (*(int *)(TrophyMgr + 400) != 0) {
    draw::UpdateOcclusion(0);
    cell::cellSysutilCheckCallback();
    draw::Render_DispatchJob();
  }
  lVar15 = 1;
  if (g_loadingPlanet == 0) {
    iVar7 = 0;
    do {
      cell::cellSysutilCheckCallback();
      (*(code *)**(undefined4 **)(*DAT_01111640 + 8))(0x3f90624de0000000);
      stub::STUB_00174cf0();
      vuchain::VU1_swapChain();
      stub::STUB_00078104();
      stub::STUB_00078134();
      stub::STUB_000780fc();
      memcard::memcard_Update();
      map::FlowState_Update();
      pad::UpdatePad();
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
              iVar8 = sound::sound_LevelPlay(*piVar10,0,(MobyInstance *)0x0);
              *piVar9 = iVar8;
            }
          }
          else if (*piVar12 < g_SpaceSceneFrame || g_SpaceSceneFrame < *piVar11) {
            iVar8 = *piVar9;
            if (((-1 < iVar8) &&
                ((int)sound::g_SoundChannels[iVar8].sound_index == sound::g_CoreSoundCnt + *piVar10)
                ) && ((sound::g_SoundChannels[iVar8].state == '\x01' ||
                      (sound::g_SoundChannels[iVar8].state == '\x02')))) {
              sound::sound_Kill(iVar8);
            }
            *piVar9 = -1;
          }
          else {
            iVar8 = *piVar9;
            if (((iVar8 < 0) ||
                ((int)sound::g_SoundChannels[iVar8].sound_index != sound::g_CoreSoundCnt + *piVar10)
                ) || ((sound::g_SoundChannels[iVar8].state != '\x01' &&
                      (sound::g_SoundChannels[iVar8].state != '\x02')))) {
              iVar8 = sound::sound_LevelPlay(*piVar10,0,(MobyInstance *)0x0);
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
          iVar7 = libc::snprintf(acStack_140,"/rc1/ps3data/movies/attract[%d].bik",lVar15);
          uVar5 = FUN_004ef34c(iVar7);
          FUN_004ef4d0(uVar5,acStack_140,auStack_100);
          FUN_004d4dd0(uVar14,auStack_100,0x400);
          g_MoviePlayState = 2;
          DAT_009637cb = DAT_009637cb | 8;
          stub::FlushCache(0);
          sound::sound_StopAllSounds();
          music::music_Stop();
          draw::FadeToBlack((int)(animationSpeed * 12.5));
          g_gameMode = GAME_MODE_MOVIE;
          stub::FlushCache(0);
          sound::sound_StopAllSounds();
          music::music_Stop();
          stub::STUB_005066bc_RET_0(0);
          update::PlayMovieBlocking();
          g_MoviePlayState = 0;
          draw::FadeToBlack(4);
          g_gameMode = GAME_MODE_NORMAL;
          DAT_009637cb = DAT_009637cb | 0x10;
        }
        iVar7 = (int)(lVar15 + 1U);
        iVar7 = iVar7 + ((iVar7 >> 2) + (uint)(iVar7 < 0 && (lVar15 + 1U & 3) != 0)) * -4;
        g_SpaceSceneFrame = 0;
        g_SpaceSceneChunk = 0;
        SceneScreenFade = 1.0;
        lVar15 = (longlong)iVar7 +
                 ((LZCOUNT(-iVar7) << 0x3a) >> 0x3f & (longlong)(iVar7 + 1) - (longlong)iVar7);
        loaders::ParseSpaceSceneChunk(0);
        g_FrontEndLogoAlpha = 0;
        g_FrontEndPressStartAlpha = 0;
        g_FrontEndTimer = 0;
        vuchain::VU1_initChain();
        iVar7 = 0;
      }
      else {
        iVar7 = 0;
LAB_0001267c:
        if (DAT_00a52e60 != Cutscene) {
          Cutscene = (uint)LZCOUNT(Cutscene) >> 5;
          draw::FadeToBlack(4);
          stub::STUB_00503080();
          stub::STUB_0050307c(0,0xb,((LZCOUNT(-Cutscene) << 0x3a) >> 0x3f) + 0xd,9);
          uVar3 = DAT_00966ad4;
          SceneScreenFade = 1.0;
          draw::ResetFrameBufferInfo();
          DAT_00966ad4 = uVar3;
        }
        stub::STUB_00174cf4(1);
        stub::STUB_00503078(0);
        DAT_0159c330 = DAT_0159c330 + 1;
      }
    } while (g_loadingPlanet == 0);
  }
  if (Cutscene == 0) {
    GSmem.base = (int)&DAT_00280000;
  }
  DAT_00966ad4 = GSmem.base;
  loaders::g_GsRamAlloc = GSmem.base;
  return;
}



//==== 000127e0  ns=boot  size=0x32c
// sig: void DrawSplashScreen(void * tex)
// callers(3): 00012b0c boot::ShowSplash; 00012ccc boot::LoadAndShowSplash; 00013760 boot::LoadAndShowSplashVram
// callees(3): 004d6948 idol_draw::ResetPassState; 004d6e60 idol_draw::BindTexture; 004d86b0 FUN_004d86b0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [boot] Emits a full-screen textured quad for a splash texture into HUD_Pass (RSX commands). */

void boot::DrawSplashScreen(void *tex)

{
  undefined4 uVar1;
  RenderingStep *pRVar2;
  longlong lVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar12 [16];
  
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
  auVar8 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar12 = loadVectorLeftIndexed(0x18,(longlong)(int)tex);
  auVar6 = loadVectorLeftIndexed(4,0x127d0);
  auVar7 = vectorShiftRightWord(auVar12,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60);
  auVar8 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
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
  auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar6 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  auVar7 = vectorLogicalAnd(auVar7,auVar6);
  auVar8 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
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
  auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar10 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  auVar8 = vectorConditionalSelect(auVar7,auVar9,auVar10);
  auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar1 = storeVectorElementWordIndexed
                    (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,4,
                     ZEXT48(pRVar2->command));
  *(undefined4 *)((uint)(pRVar2->command + 1) & 0xfffffffc) = uVar1;
  auVar8 = vectorConditionalSelect(auVar6,auVar9,auVar10);
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = HUD_Pass;
  auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
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



//==== 00012b0c  ns=boot  size=0x1c0
// sig: void ShowSplash(void * tex, int holdFrames, int fadeInFrames, int fadeOutFrames, int blackFrames)
// callers(0): 
// callees(5): 000127e0 boot::DrawSplashScreen; 000684a4 draw::UpdateOcclusion; 00068560 draw::Render_DispatchJob; 0006b5a4 draw::DrawScreenOverlayTex; 0064f504 cell::cellSysutilCheckCallback

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [boot] Fade in / hold / fade out / black frames for an already loaded splash texture. */

void boot::ShowSplash(void *tex,int holdFrames,int fadeInFrames,int fadeOutFrames,int blackFrames)

{
  int iVar1;
  int iVar2;
  
  if (fadeInFrames != 0) {
    iVar1 = 0;
    do {
      draw::UpdateOcclusion(0);
      cell::cellSysutilCheckCallback();
      TexSamplerFlags = 5;
      DrawSplashScreen(tex);
      draw::Render_DispatchJob();
      cell::cellSysutilCheckCallback();
      iVar1 = iVar1 + 0x80 / fadeInFrames;
    } while (iVar1 < 0x81);
  }
  iVar1 = 0;
  iVar2 = 0;
  if (0 < holdFrames) {
    do {
      draw::UpdateOcclusion(0);
      cell::cellSysutilCheckCallback();
      TexSamplerFlags = 5;
      DrawSplashScreen(tex);
      draw::Render_DispatchJob();
      cell::cellSysutilCheckCallback();
      iVar1 = iVar1 + 1;
    } while (iVar1 < holdFrames);
  }
  if (fadeOutFrames != 0) {
    iVar1 = 0x80;
    do {
      draw::UpdateOcclusion(0);
      cell::cellSysutilCheckCallback();
      TexSamplerFlags = 5;
      DrawSplashScreen(tex);
      draw::Render_DispatchJob();
      cell::cellSysutilCheckCallback();
      iVar1 = iVar1 - 0x80 / fadeOutFrames;
    } while (-1 < iVar1);
  }
  if (0 < blackFrames) {
    do {
      draw::UpdateOcclusion(0);
      cell::cellSysutilCheckCallback();
      draw::DrawScreenOverlayTex(0,0,0,0,tex);
      draw::Render_DispatchJob();
      cell::cellSysutilCheckCallback();
      iVar2 = iVar2 + 1;
    } while (iVar2 < blackFrames);
  }
  TexSamplerFlags = 0;
  return;
}



//==== 00012ccc  ns=boot  size=0x1f8
// sig: void LoadAndShowSplash(char * path, int holdFrames, int fadeInFrames, int fadeOutFrames, int blackFrames)
// callers(1): 00012ec8 boot::GameStart
// callees(6): 000127e0 boot::DrawSplashScreen; 000684a4 draw::UpdateOcclusion; 00068560 draw::Render_DispatchJob; 0006b5a4 draw::DrawScreenOverlayTex; 00503e00 fios::LoadAssetFromFile; 0064f504 cell::cellSysutilCheckCallback

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [boot] Loads splash .ps3 texture into scratch buffer then shows it (used for epilepsy/health
   warnings and 'Presents' screens; GameStart passes 360,64,30,0). */

void boot::LoadAndShowSplash
               (char *path,int holdFrames,int fadeInFrames,int fadeOutFrames,int blackFrames)

{
  int *tex;
  int iVar1;
  int iVar2;
  
  fios::LoadAssetFromFile(path,loaders::g_NpcBuffer,0xffffffffffffffff);
  tex = loaders::g_NpcBuffer;
  *loaders::g_NpcBuffer = (int)loaders::g_NpcBuffer + (0x80 - *(int *)(DAT_00902e9c + 0x4a8));
  if (fadeInFrames != 0) {
    iVar1 = 0;
    do {
      draw::UpdateOcclusion(0);
      cell::cellSysutilCheckCallback();
      TexSamplerFlags = 5;
      DrawSplashScreen(tex);
      draw::Render_DispatchJob();
      cell::cellSysutilCheckCallback();
      iVar1 = iVar1 + 0x80 / fadeInFrames;
    } while (iVar1 < 0x81);
  }
  iVar1 = 0;
  iVar2 = 0;
  if (0 < holdFrames) {
    do {
      draw::UpdateOcclusion(0);
      cell::cellSysutilCheckCallback();
      TexSamplerFlags = 5;
      DrawSplashScreen(tex);
      draw::Render_DispatchJob();
      cell::cellSysutilCheckCallback();
      iVar1 = iVar1 + 1;
    } while (iVar1 < holdFrames);
  }
  if (fadeOutFrames != 0) {
    iVar1 = 0x80;
    do {
      draw::UpdateOcclusion(0);
      cell::cellSysutilCheckCallback();
      TexSamplerFlags = 5;
      DrawSplashScreen(tex);
      draw::Render_DispatchJob();
      cell::cellSysutilCheckCallback();
      iVar1 = iVar1 - 0x80 / fadeOutFrames;
    } while (-1 < iVar1);
  }
  if (0 < blackFrames) {
    do {
      draw::UpdateOcclusion(0);
      cell::cellSysutilCheckCallback();
      draw::DrawScreenOverlayTex(0,0,0,0,tex);
      draw::Render_DispatchJob();
      cell::cellSysutilCheckCallback();
      iVar2 = iVar2 + 1;
    } while (iVar2 < blackFrames);
  }
  TexSamplerFlags = 0;
  return;
}



//==== 00012ec8  ns=boot  size=0x898
// sig: undefined GameStart(void)
// callers(1): 0001401c boot::boot
// callees(51): 0001055c boot::ZeroFillKeyGlobals; 00012048 boot::PrepareFrontbin; 00012ccc boot::LoadAndShowSplash; 0004eff8 loaders::GsTex_Init; 0004fb48 boot::???_ReturnTrue_GameStart; 00060a90 debug::ResetDebugEnables; 00065670 draw::ResetFrameBufferInfo; 0006849c stub::STUB_0006849c; 000684a0 stub::STUB_000684a0; 000684a4 draw::UpdateOcclusion; 00068560 draw::Render_DispatchJob; 0006b5dc draw::DrawScreenOverlay; 0006dad0 draw::FadeToBlack; 0007116c stub::STUB_0007116c; 000780f4 stub::STUB_000780f4; 000780f8 stub::STUB_000780f8; 000780fc stub::STUB_000780fc; 00078100 stub::STUB_00078100; 00078104 stub::STUB_00078104; 00078134 stub::STUB_00078134; 000d88f8 stub::STUB_000d88f8; 000d8be8 initonce::InitOnce; 000e6c78 stub::STUB_000e6c78; 0011e2d4 pad::UpdatePad; 00164c58 space::DoSpaceTransition; 00174c24 vuchain::VU1_initChain; 00174c88 vuchain::VU1_swapChain; 00174cf0 stub::STUB_00174cf0; 00174cf4 stub::STUB_00174cf4; 00174f80 vuchain::SetGSReg; 001754dc stub::STUB_001754dc; 004d5448 FUN_004d5448; 004d5524 FUN_004d5524; 004d59e8 FUN_004d59e8; 004d5d5c FUN_004d5d5c; 004e7404 idol::GetSaveData; 004ef34c FUN_004ef34c; 004ef4d0 FUN_004ef4d0; 00502ea8 idol_draw::PackCmd; 00503078 stub::STUB_00503078
// strings: 0065136c: 'Common/Textures/Epilepsy_Warning_Fre_4x3.ps3' | 0065139c: 'Common/Textures/Epilepsy_Warning_Spa_4x3.ps3' | 006513cc: 'Common/Textures/Epilepsy_Warning_Eng_4x3.ps3' | 006513fc: 'Common/Textures/Health_Warning_Fre_SCEE_4x3.ps3' | 0065142c: 'Common/Textures/Health_Warning_Spa_SCEE_4x3.ps3' | 0065145c: 'Common/Textures/Health_Warning_Ger_SCEE_4x3.ps3' | 0065148c: 'Common/Textures/Health_Warning_Ita_SCEE_4x3.ps3' | 006514bc: 'Common/Textures/Health_Warning_Eng_SCEE_4x3.ps3' | 006514ec: 'Common/Textures/Rat1_Presents_SCEA.ps3' | 00651514: 'Common/Textures/Rat1_Presents_SCEE.ps3' | 006510fc: '/rc1/ps3data/movies/logo_movie.bik' | 0065153c: 'loading sound bank...\n' | 00651554: 'rc1/ps3data/global/boot/sound.bnk' | 0065157c: 'done\n'

void boot::GameStart(void)

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
  undefined1 auStack_160 [128];
  char acStack_e0 [152];
  
  g_FrontEnd = 1;
  iVar4 = idol::GetSaveData();
  *(undefined4 *)(iVar4 + 0x460) = 1;
  idol::GetSaveData();
  memcard::g_memcardSaveSysState = 5;
  DAT_00a23098 = 0;
  DAT_00a23099 = 0;
  ZeroFillKeyGlobals();
  ____ReturnTrue_GameStart();
  if (g_HasInited != 0) {
    initonce::InitOnce();
  }
  loaders::GsTex_Init();
  iVar4 = 0;
  do {
    iVar7 = iVar4 + 1;
    (&startLevel)[iVar4] = 0;
    iVar4 = iVar7;
  } while (iVar7 < 1);
  vuchain::VU1_initChain();
  stub::STUB_001754dc();
  debug::ResetDebugEnables();
  DAT_0159c330 = 0;
  stub::STUB_00503078(0);
  g_gameMode = GAME_MODE_NORMAL;
  stub::STUB_0006849c();
  stub::STUB_000684a0();
  stub::STUB_000780f8();
  stub::STUB_000780f4(0,0,0);
  vuchain::VU1_initChain();
  iVar8 = 0;
  iVar7 = 0;
  iVar4 = 0;
  while ((iVar5 = stub::STUB_000e6c78(), iVar5 != 0 &&
         ((iVar7 < 0xb || (g_buttonsPressedThisFrame == 0))))) {
    if (iVar5 != iVar4) {
      stub::FlushCache(0);
      stub::FlushCache(0);
    }
    stub::STUB_000780f4(0,0,0);
    stub::STUB_000780fc();
    stub::STUB_00078100();
    stub::STUB_0007116c(&DAT_00cd4000 + DAT_00cd4070);
    if (iVar7 < 8) {
      uVar2 = idol_draw::PackCmd(0,1,0,1,0x80);
      vuchain::SetGSReg(3,uVar2);
      draw::DrawScreenOverlay(0,0,0,0x80 - iVar8);
    }
    stub::STUB_00078104();
    stub::STUB_00078134();
    stub::STUB_00174cf0();
    vuchain::VU1_swapChain();
    stub::STUB_00174cf4(1);
    stub::STUB_00503078(0);
    pad::UpdatePad();
    iVar8 = iVar8 + 0x10;
    iVar7 = iVar7 + 1;
    iVar4 = iVar5;
  }
  if (iVar4 != 0) {
    draw::FadeToBlack(8);
  }
  stub::FlushCache(0);
  vuchain::VU1_initChain();
  stub::STUB_000780f4(0,0,0);
  stub::STUB_000780fc();
  stub::STUB_00078100();
  stub::STUB_000d88f8(&DAT_00cd4000 + DAT_00cd4070);
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
  stub::STUB_00078104();
  stub::STUB_00078134();
  stub::STUB_00174cf0();
  vuchain::VU1_swapChain();
  stub::STUB_00174cf4(1);
  stub::STUB_00503078(0);
  g_MoviePlayState = -1;
  DAT_0159c330 = DAT_0159c330 + 1;
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
    iVar4 = libc::snprintf(acStack_1a0,"/rc1/ps3data/movies/logo_movie.bik");
    uVar2 = FUN_004ef34c(iVar4);
    FUN_004ef4d0(uVar2,acStack_1a0,auStack_160);
    FUN_004d5448(uVar9,auStack_160,0,0x400);
    uVar3 = 0;
    do {
      if (*(int *)(TrophyMgr + 0x188) != 0) {
        cell::cellSysutilCheckCallback();
      }
      draw::UpdateOcclusion(0);
      iVar4 = FUN_004d5524(uVar9);
      cell::cellSysutilCheckCallback();
      if (1 < iVar4) {
        g_LogoMovieDone = FUN_004d59e8(uVar9);
        uVar3 = (ulonglong)(LZCOUNT(g_LogoMovieDone) << 0x20) >> 0x25 ^ 1;
      }
      draw::Render_DispatchJob();
    } while ((int)uVar3 == 0);
  }
  g_MoviePlayState = 0;
  draw::FadeToBlack((int)(animationSpeed * 12.5));
  stub::FlushCache(0);
  libc::printf("loading sound bank...\n");
  libc::snprintf(acStack_e0,"rc1/ps3data/global/boot/sound.bnk");
  iVar4 = DAT_00a10920 + 0x200000;
  fios::LoadAssetFromFile(acStack_e0,iVar4,0x100000);
  DAT_0071f404 = 0xffffffff;
  FUN_00505b30(iVar4,&PTR_sound_BasicCB_00707c38,&DAT_0071f404);
  uVar1 = DAT_0071f404;
  iVar6 = libc::printf("done\n");
  stub::STUB_00505f48(iVar6);
  sound::g_pSoundDefs = &DAT_0071c984;
  DAT_0071c9a0 = uVar1;
  DAT_0071c9c0 = uVar1;
  DAT_0071c9e0 = uVar1;
  DAT_0071ca00 = uVar1;
  DAT_0071ca20 = uVar1;
  DAT_0071ca40 = uVar1;
  DAT_0071ca60 = uVar1;
  sound::g_TotalSoundDefCnt = 7;
  DAT_0071ca80 = uVar1;
  DAT_0071caa0 = uVar1;
  DAT_0071cac0 = uVar1;
  DAT_0071cae0 = uVar1;
  DAT_0071cb00 = uVar1;
  draw::ResetFrameBufferInfo();
  PrepareFrontbin();
  PTR_DAT_00902e98._0_1_ = 1;
  if (Cutscene != DAT_00a52e60) {
    Cutscene = (uint)DAT_00a52e60;
    stub::STUB_00503080();
    stub::STUB_0050307c(0,0xb,((LZCOUNT(-Cutscene) << 0x3a) >> 0x3f) + 0xd,9);
    draw::ResetFrameBufferInfo();
    stub::STUB_000780f8();
  }
  g_newlevelnum = Level;
  Level = ~Veldin;
  DAT_0096459a = 1;
  space::DoSpaceTransition();
  g_FrontEnd = 0;
  return;
}



//==== 00013760  ns=boot  size=0x210
// sig: void LoadAndShowSplashVram(char * texPath, char * vramPath, int holdFrames, int fadeInFrames, int fadeOutFrames, int blackFrames)
// callers(0): 
// callees(6): 000127e0 boot::DrawSplashScreen; 000684a4 draw::UpdateOcclusion; 00068560 draw::Render_DispatchJob; 0006b5a4 draw::DrawScreenOverlayTex; 00503e00 fios::LoadAssetFromFile; 0064f504 cell::cellSysutilCheckCallback

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [boot] Variant loading a .ps3 header + .vram texture pair before showing the splash. */

void boot::LoadAndShowSplashVram
               (char *texPath,char *vramPath,int holdFrames,int fadeInFrames,int fadeOutFrames,
               int blackFrames)

{
  int *tex;
  int iVar1;
  int iVar2;
  
  fios::LoadAssetFromFile(texPath,DAT_00a10920,0xffffffffffffffff);
  fios::LoadAssetFromFile(vramPath,DAT_00a10924,0xffffffffffffffff);
  tex = DAT_00a10920;
  *DAT_00a10920 = DAT_00a10924 - *(int *)(DAT_00902e9c + 0x4ac);
  if (fadeInFrames != 0) {
    iVar1 = 0;
    do {
      draw::UpdateOcclusion(0);
      cell::cellSysutilCheckCallback();
      TexSamplerFlags = 5;
      DrawSplashScreen(tex);
      draw::Render_DispatchJob();
      cell::cellSysutilCheckCallback();
      iVar1 = iVar1 + 0x80 / fadeInFrames;
    } while (iVar1 < 0x81);
  }
  iVar1 = 0;
  iVar2 = 0;
  if (0 < holdFrames) {
    do {
      draw::UpdateOcclusion(0);
      cell::cellSysutilCheckCallback();
      TexSamplerFlags = 5;
      DrawSplashScreen(tex);
      draw::Render_DispatchJob();
      cell::cellSysutilCheckCallback();
      iVar1 = iVar1 + 1;
    } while (iVar1 < holdFrames);
  }
  if (fadeOutFrames != 0) {
    iVar1 = 0x80;
    do {
      draw::UpdateOcclusion(0);
      cell::cellSysutilCheckCallback();
      TexSamplerFlags = 5;
      DrawSplashScreen(tex);
      draw::Render_DispatchJob();
      cell::cellSysutilCheckCallback();
      iVar1 = iVar1 - 0x80 / fadeOutFrames;
    } while (-1 < iVar1);
  }
  if (0 < blackFrames) {
    do {
      draw::UpdateOcclusion(0);
      cell::cellSysutilCheckCallback();
      draw::DrawScreenOverlayTex(0,0,0,0,tex);
      draw::Render_DispatchJob();
      cell::cellSysutilCheckCallback();
      iVar2 = iVar2 + 1;
    } while (iVar2 < blackFrames);
  }
  TexSamplerFlags = 0;
  return;
}



//==== 00013970  ns=stub  size=0x9c
// sig: undefined Transition_DrawSky(void)
// callers(0): 
// callees(6): 001595d0 skyfunc::SkyLevelGeneric; 00159e54 stub::DoSkyGifPaging; 00159e58 stub::SetupGifPaging; 00174f80 vuchain::SetGSReg; 00502f7c idol_draw::Blend; 00502ffc stub::VU1_addGSregister

void stub::Transition_DrawSky(void)

{
  undefined8 uVar1;
  
  SetupGifPaging();
  skyfunc::SkyLevelGeneric();
  DoSkyGifPaging();
  uVar1 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar1);
  uVar1 = VU1_addGSregister(GSmem.zbuf >> 0xd,1,0);
  vuchain::SetGSReg(0x21,uVar1);
  return;
}



//==== 00013a0c  ns=boot  size=0x14
// sig: undefined ???_SectionHeader_Boot_13a0c(void)
// callers(0): 
// callees(0): 

void boot::____SectionHeader_Boot_13a0c(void)

{
  DAT_0071cc08 = 0x10000;
  return;
}



//==== 00013a20  ns=boot  size=0x248
// sig: undefined GameShutDown(void)
// callers(2): 00013c68 sys::sysutil_gameexit_callback; 004efdc8 FUN_004efdc8
// callees(13): 000e886c memcard::memcard_IsSaveSystemIdle; 0011e404 pad::pad_Shutdown; 004d5d0c FUN_004d5d0c; 004d5d5c FUN_004d5d5c; 004e7404 idol::GetSaveData; 004e7710 FUN_004e7710; 004efdf4 sce::sceNpTrophyDestroyHandle; 005057a0 FUN_005057a0; 005066e0 FUN_005066e0; 005c4ec8 idol::exit; 005cd098 libc::printf; 005e38b0 FUN_005e38b0; 0800008d syscall::syscall_sys_timer_usleep
// strings: 0065158c: '!!! GameShutDown() called !!!\n' | 006515ac: '!!! Shutdown Graphics !!!\n' | 006515cc: '!!! Shutdown HWSystem !!!\n' | 006515ec: '!!! Shutdown NP Trophy !!!\n' | 00013bd8: 'HM8-`' (raw) | 0065160c: '!!! Shutdown Bink !!!\n' | 00651624: 'Waiting for save game to finish...\n' | 0065164c: '!!! Shutdown GameSave !!!\n' | 0065166c: '!!! Shutdown Scream !!!\n' | 0065168c: '!!! Calling exit() !!!\n'

void boot::GameShutDown(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar3;
  int32_t iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  libc::printf("!!! GameShutDown() called !!!\n");
  syscall::syscall_sys_timer_usleep(16000);
  syscall::syscall_sys_timer_usleep(16000);
  pad::pad_Shutdown();
  FUN_005057a0();
  if (g_viewMtxPtr != (int *)0x0) {
    libc::printf("!!! Shutdown Graphics !!!\n");
    (*(code *)**(undefined4 **)(*g_viewMtxPtr + 0x1c))();
  }
  if (g_pHWSystem != (void *)0x0) {
    libc::printf("!!! Shutdown HWSystem !!!\n");
                    /* WARNING: Load size is inaccurate */
    (*(code *)**(undefined4 **)(*g_pHWSystem + 0x20))();
  }
  if (TrophyMgr != 0) {
    libc::printf("!!! Shutdown NP Trophy !!!\n");
    sce::sceNpTrophyDestroyHandle(TrophyMgr);
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
    libc::printf("!!! Shutdown Bink !!!\n");
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
    while (iVar3 = memcard::memcard_IsSaveSystemIdle(), iVar3 == 0) {
      libc::printf("Waiting for save game to finish...\n");
    }
    iVar4 = libc::printf("!!! Shutdown GameSave !!!\n");
    idol::GetSaveData(iVar4);
    FUN_004e7710();
  }
  iVar4 = libc::printf("!!! Shutdown Scream !!!\n");
  FUN_005066e0(iVar4);
  libc::printf("!!! Calling exit() !!!\n");
  idol::exit(0);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== 00013c68  ns=sys  size=0x68
// sig: undefined sysutil_gameexit_callback(undefined8 arg)
// callers(0): 
// callees(2): 00013a20 boot::GameShutDown; 004ffc9c print_tty2
// strings: 006516a4: 'sysutil_gameexit_callback received CELL_SYSUTIL_REQUEST_EXITGAME \n' | 006516ec: 'In sysutil_gameexit_callback, status = 0x%08x\n'

void sys::sysutil_gameexit_callback(longlong arg)

{
  if (arg < 0x121) {
    if (arg == 0x101) {
      print_tty2("sysutil_gameexit_callback received CELL_SYSUTIL_REQUEST_EXITGAME \n");
      boot::GameShutDown();
      return;
    }
  }
  else if (arg < 0x123) {
    return;
  }
  print_tty2("In sysutil_gameexit_callback, status = 0x%08x\n",(int)arg);
  return;
}



//==== 00013cd0  ns=Global  size=0xdc
// sig: undefined CopyInitDataRecords(void)
// callers(0): 
// callees(0): 

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



//==== 00013dac  ns=boot  size=0x270
// sig: void ResetLevelGlobals(void)
// callers(1): 0001401c boot::boot
// callees(2): 005001fc fastfunc::FastMemSet; 005d0140 libc::memset

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [boot] Called by boot() main loop before every level/main function: clears g_loadingPlanet, HUD
   entries, help, checkpoints, toast timer, occlusion grid, per-level flags (Blarg/Aridia special
   case). */

void boot::ResetLevelGlobals(void)

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
  libc::memset(0xa34f80,0,0x380);
  DAT_00a1bffc = 0;
  DAT_00a1bfd0 = 0;
  DAT_00731f40 = 0x3880a0c0;
  DAT_00731f44 = 0x2058b0;
  DAT_00731f48 = 0x3880a0c0;
  DAT_00731f4c = 0x2058b0;
  DAT_00731f50 = 0x3880c080;
  DAT_00731f54 = 0x308030;
  help::g_HelpState = 0;
  help::g_HelpStateTimer = 0;
  pHVar1 = HudEntries;
  DAT_0072088c = 0;
  lVar2 = 0xd;
  DAT_00720890 = 0;
  DAT_00720894 = 0;
  DAT_00720898 = 0;
  DAT_0072089c = 0;
  DAT_007208a0 = 0;
  help::g_HelpCurFlag = 0;
  Help = 0;
  DAT_007208b4 = 0;
  DAT_007208b8 = 0;
  help::g_HelpSuspended = 0;
  DAT_007208c0 = 0;
  help::g_HelpCurIndex = -1;
  help::g_HelpCurId = -1;
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
  fastfunc::FastMemSet(&DAT_00a53510,0,0xc60);
  fastfunc::FastMemSet(&g_CheckpointSet,0,0xc60);
  fastfunc::FastMemSet(&DAT_00a54dd0,0,0x100);
  if ((Level == Oltanis) || ((Level != Blarg && (Level != Aridia)))) {
    DAT_00a1a858 = 0;
  }
  else {
    DAT_00a1a858 = 3;
  }
  if (map::g_MapRevealMask != 0) {
    libc::memset(map::g_MapRevealMask,0,0x8000);
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



//==== 0001401c  ns=boot  size=0x838
// sig: undefined boot(void)
// callers(1): 00014c7c boot::entry
// callees(43): 00012ec8 boot::GameStart; 00013dac boot::ResetLevelGlobals; 000213b8 MapVTables; 001131a8 mobyutil::SetNtscPalTiming; 004d5d5c FUN_004d5d5c; 004e68bc FUN_004e68bc; 004e7404 idol::GetSaveData; 004e7c9c idol::registerSavesystemCallback; 004e7f9c FUN_004e7f9c; 004ec568 FUN_004ec568; 004ee594 FUN_004ee594; 004eff54 idol::RegisterTrophyCtxHandle; 004fe778 FUN_004fe778; 004ff6d0 print_tty; 004ffc9c print_tty2; 00502cd0 FUN_00502cd0; 00503244 stub::FlushCache; 0050436c FUN_0050436c; 005043b0 FUN_005043b0; 00504424 idol::InitGameGraphics; 00504468 FUN_00504468; 00504988 FUN_00504988; 00504c00 idol::CheckLicense; 0050565c FUN_0050565c; 005057c4 FUN_005057c4; 0051080c FUN_0051080c; 00511a80 FUN_00511a80; 005194f0 FUN_005194f0; 0051c030 fios::op_wait_result; 0051ced4 FUN_0051ced4; 0051ef8c FUN_0051ef8c; 005207a0 fios::stat_setup; 00528c7c FUN_00528c7c; 005c5ad0 libc::memcpy; 005c8700 FUN_005c8700; 005cd098 libc::printf; 005e38b0 FUN_005e38b0; 005e39dc FUN_005e39dc; 005e6af0 FUN_005e6af0; 005eae04 FUN_005eae04
// strings: 0096c074: 'None' | 0065171c: "Error, __sys_process_param.size of 0. I don't know how this could happen, but it will cause some problems\n" | 0065178c: '\n\nargv[0] %s\n' | 0065179c: 'RC1.ppu.self' | 006517ac: 'NPUA' (raw) | 006517b4: 'NPUA80643' | 006517c4: 'UP9000-NPUA80643_00' | 006517dc: 'NPEA' (raw) | 006517e4: 'NPEA00385' | 006517f4: 'EP9000-NPEA00385_00' | 0065180c: 'BCUS' (raw) | 00651814: 'BCUS98212' | 00651824: 'UP9000-BCUS98212_00' | 0065183c: 'BCES' (raw) | 00651844: 'BCES01503' | 00651854: 'EP9000-BCES01503_00' | 0065186c: 'ERROR: (boot.cpp) Error Registering Exit callback function\n' | 006518ac: '(boot.cpp) After InitGameSystem' | 006518cc: 'Setting ps3medius with %d\n' | 006518ec: '/app_home' | 006518fc: '.psarc' | 00651904: 'rc1/ps3data/PS3arc.psarc' | 00651924: 'Before InitGameGraphics' | 0065193c: 'After InitGameGraphics' | 00651954: 'Checking for saves' | 00651974: 'DONE!\n'

undefined8 boot::boot(undefined8 param_1,uint *param_2)

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
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  undefined1 auStack_88 [4];
  undefined1 auStack_84 [8];
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
  libc::printf("\n\nargv[0] %s\n",(ulonglong)*param_2);
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
                       (int)((((LZCOUNT(-iVar6) << 0x3a) >> 0x3f) + 1U & 0xffffffff) << 2)),0);
  FUN_004e68bc(pvVar2,0xb,8,0x10);
  DAT_008fa630 = &DAT_0071cce4;
  bVar1 = *(byte *)((int)pvVar2 + 0x10);
  iVar6 = cell::cellSysutilRegisterCallback(0,&PTR_sysutil_gameexit_callback_00703618,0);
  if (iVar6 < 0) {
    libc::printf("ERROR: (boot.cpp) Error Registering Exit callback function\n");
  }
  FUN_004ee594(&DAT_009260d8,((LZCOUNT(-(uint)bVar1) << 0x3a) >> 0x3f) + 1,0,0);
  cell::cellSysutilCheckCallback();
  pvVar9 = g_pGame;
                    /* WARNING: Load size is inaccurate */
  (*(code *)**(undefined4 **)(*g_pGame + 8))(g_pGame);
                    /* WARNING: Load size is inaccurate */
  (*(code *)**(undefined4 **)(*pvVar2 + 0x24))(pvVar2,"(boot.cpp) After InitGameSystem");
  cell::cellSysutilCheckCallback();
  libc::memcpy(auStack_84,&DAT_0071ccf4,0x44);
  puVar7 = (undefined4 *)FUN_005e38b0(4);
  local_7c = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = &PTR_PTR_00661820;
    local_7c = puVar7;
  }
  FUN_005194f0(auStack_84);
  cell::cellSysutilCheckCallback();
  if (*(char *)((int)pvVar2 + 0x10) == '\0') {
    uVar3 = FUN_0051080c(0x430,0x10000100,3);
    uVar5 = 0;
    if ((int)uVar3 != 0) {
      FUN_00528c7c(uVar3,"/app_home");
      uVar5 = uVar3;
    }
    iVar8 = libc::printf("Setting ps3medius with %d\n","/app_home");
  }
  else {
    uVar3 = FUN_0051080c(0x430,0x10000100,3);
    uVar5 = 0;
    if ((int)uVar3 != 0) {
      FUN_00528c7c(uVar3,&DAT_00926181);
      uVar5 = uVar3;
    }
    iVar8 = libc::printf("Setting ps3medius with %d\n",&DAT_00926181);
  }
  cell::cellSysutilCheckCallback(iVar8);
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
  uVar5 = fios::stat_setup(uVar5,0,"rc1/ps3data/PS3arc.psarc",1,auStack_88);
  uVar5 = fios::op_wait_result(uVar5,0);
  if ((int)uVar5 == 0) {
    cell::cellSysutilCheckCallback();
    uVar5 = FUN_0050436c(pvVar9);
    FUN_004fe778(uVar5,"Before InitGameGraphics");
    idol::InitGameGraphics(pvVar9);
    FUN_004fe778(uVar5,"After InitGameGraphics");
    cell::cellSysutilCheckCallback();
    FUN_005043b0(pvVar9);
    FUN_00504468(pvVar9);
    cell::cellSysutilCheckCallback();
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
    cell::cellSysutilCheckCallback();
    idol::GetSaveData();
    idol::registerSavesystemCallback();
    libc::printf("Checking for saves");
    iVar6 = 0;
    while (memcard::g_memcardSaveBusy != 0) {
      cell::cellSysutilCheckCallback();
      iVar6 = iVar6 + 1;
      if (iVar6 % 1000000 == 0) {
        print_tty2(".");
      }
    }
    print_tty2("DONE!\n");
    idol::RegisterTrophyCtxHandle(TrophyMgr);
    cell::cellSysutilCheckCallback();
    mobyutil::SetNtscPalTiming();
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
      stub::FlushCache(0);
      stub::FlushCache(2);
    } while( true );
  }
  do {
    cell::cellSysutilCheckCallback(uVar5);
    uVar5 = 100;
    syscall();
  } while( true );
}



//==== 00014854  ns=boot  size=0xa4
// sig: void StaticDestroy_BootGlobals(void)
// callers(1): 00014e50 crt0::__do_global_dtors_aux
// callees(2): 004d5da4 FUN_004d5da4; 004e7738 FUN_004e7738

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [boot] Static destructors for boot.cpp global singletons (Bink player, save data, trophy mgr, HW
   system, game objects): restores base vtables. */

void boot::StaticDestroy_BootGlobals(void)

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



//==== 000148f8  ns=boot  size=0x260
// sig: void StaticInit_BootGlobals(void)
// callers(0): 
// callees(7): 004d5d5c FUN_004d5d5c; 004d7088 FUN_004d7088; 004e7388 FUN_004e7388; 004ee1e0 FUN_004ee1e0; 004f0c98 FUN_004f0c98; 004f0df4 FUN_004f0df4; 005d0140 libc::memset

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [boot] Static constructors for the PS3 port singletons: g_pGame (0x90d770), g_pHWSystem
   (0x90d840), 0x90d98c, 0x90dad0, 0x9260d0, TrophyMgr (0x9265a0), save data (0x926c00), Bink
   (0x927078). */

void boot::StaticInit_BootGlobals(void)

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
  libc::memset(&DAT_0090d858,0,0xa0);
  DAT_0090d840 = &PTR_PTR_00661898;
  DAT_0159b388 = 1;
  DAT_0090d98c = &PTR_PTR_00661960;
  DAT_009030e4 = &DAT_0090d98c;
  FUN_004d7088(&DAT_0090dad0);
  pad::g_pPadDriver = &DAT_009260d0;
  DAT_009260d0 = &PTR_PTR_00661940;
  FUN_004ee1e0(&DAT_009260d8);
  DAT_009265a0 = &PTR_PTR_00661790;
  FUN_004f0c98(&DAT_00926734);
  DAT_0092674c = 0;
  DAT_00926750 = 0;
  libc::memset(&DAT_00926754,0,0x498);
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



//==== 00014b58  ns=boot  size=0x24
// sig: undefined _start(void)
// callers(0): 
// callees(1): 00014c7c boot::entry

undefined4 boot::_start(void)

{
  undefined *TOC;
  
  TOC = PTR_TOC_BASE_0070379c;
  entry();
  return **(undefined4 **)(TOC + -0x8000);
}



//==== 00014b7c  ns=crt0  size=0x10
// sig: undefined GetArgc(void)
// callers(0): 
// callees(0): 

undefined4 crt0::GetArgc(void)

{
  return *(undefined4 *)PTR_DAT_0071a328;
}



//==== 00014b8c  ns=crt0  size=0xc
// sig: undefined GetArgv(void)
// callers(0): 
// callees(0): 

undefined4 crt0::GetArgv(void)

{
  return *(undefined4 *)(PTR_DAT_0071a328 + 4);
}



//==== 00014b98  ns=idol  size=0x28
// sig: void ExitToSystem(void)
// callers(2): 00014c0c crt0::exit; 005c4ec8 idol::exit
// callees(1): 006506c4 sys::sys_prx_exitspawn_with_level

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void idol::ExitToSystem(void)

{
  sys::sys_prx_exitspawn_with_level(0);
  return;
}



//==== 00014bc0  ns=crt0  size=0x4c
// sig: void _libc_cleanup(void)
// callers(2): 00014c0c crt0::exit; 00014c44 crt0::_exit
// callees(5): 005c505c FUN_005c505c; 005cbd60 FUN_005cbd60; 005d000c FUN_005d000c; 005d0488 FUN_005d0488; 005d5868 FUN_005d5868

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void crt0::_libc_cleanup(void)

{
  FUN_005c505c();
  FUN_005d000c();
  FUN_005cbd60();
  FUN_005d0488();
  FUN_005d5868();
  return;
}



//==== 00014c0c  ns=crt0  size=0x38
// sig: undefined exit(void)
// callers(0): 
// callees(4): 00014b98 idol::ExitToSystem; 00014bc0 crt0::_libc_cleanup; 005c49c8 FUN_005c49c8; 0064ed80 FUN_0064ed80

void crt0::exit(void)

{
  idol::ExitToSystem();
  FUN_005c49c8();
  FUN_0064ed80();
  _libc_cleanup();
  return;
}



//==== 00014c44  ns=crt0  size=0x38
// sig: void _exit(int status)
// callers(1): 005c8b94 FUN_005c8b94
// callees(2): 00014bc0 crt0::_libc_cleanup; 006507e4 sys::sys_process_exit

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void crt0::_exit(int status)

{
  _libc_cleanup();
  sys::sys_process_exit(status);
  return;
}



//==== 00014c7c  ns=boot  size=0x1d4
// sig: undefined entry(void)
// callers(1): 00014b58 boot::_start
// callees(12): 00010200 crt0::_init; 0001401c boot::boot; 005c4ec8 idol::exit; 005cbc68 FUN_005cbc68; 005cffa8 FUN_005cffa8; 005d05b8 FUN_005d05b8; 005d588c FUN_005d588c; 00650584 sys::_sys_process_atexitspawn; 00650604 sys::sys_prx_register_library; 00650664 sys::sys_initialize_tls; 00650684 sys::sys_time_get_system_time; 006506a4 sys::_sys_process_at_Exitspawn

void boot::entry(ulonglong param_1,undefined4 *param_2,undefined4 *param_3,ulonglong param_4,
                undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined8 uVar1;
  int __status;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined4 in_r12;
  undefined4 *puVar4;
  int iStack_74;
  
  *DAT_0071a32c = in_r12;
  sys::sys_initialize_tls(param_5,param_6,param_7,param_8);
  uVar2 = 0;
  puVar3 = param_2 + 1;
  puVar4 = param_2;
  do {
    uVar2 = uVar2 + 1;
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 2;
    puVar4 = puVar4 + 1;
  } while (uVar2 <= param_1);
  puVar3 = *(undefined4 **)(iStack_74 + -0x8000);
  uVar2 = 0;
  *puVar3 = (int)param_1;
  puVar3[1] = param_2;
  puVar3 = param_3 + 1;
  puVar4 = param_3;
  do {
    uVar2 = uVar2 + 1;
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 2;
    puVar4 = puVar4 + 1;
  } while (uVar2 <= param_4);
  FUN_005d588c();
  FUN_005d05b8(*(undefined4 *)(iStack_74 + -0x7ff8),*(undefined4 *)(iStack_74 + -0x7ff4));
  FUN_005cbc68();
  FUN_005cffa8();
  uVar1 = sys::sys_time_get_system_time
                    (*(undefined4 *)(iStack_74 + -0x7ff0),*(undefined4 *)(iStack_74 + -0x7fec));
  **(undefined8 **)(iStack_74 + -0x7fe8) = uVar1;
  crt0::_init();
  if (**(int **)(iStack_74 + -0x7fe4) != 0) {
    sys::sys_prx_register_library();
  }
  if (**(int **)(iStack_74 + -0x7fe0) != 0) {
    sys::sys_prx_register_library();
  }
  if (**(int **)(iStack_74 + -0x7fdc) != 0) {
    sys::sys_prx_register_library();
  }
  sys::_sys_process_atexitspawn(*(undefined4 *)(iStack_74 + -0x7fd8));
  sys::_sys_process_at_Exitspawn(*(undefined4 *)(iStack_74 + -0x7fd4));
  __status = boot((int)param_1,param_2,param_3);
  idol::exit(__status);
  return;
}



//==== 00014e50  ns=crt0  size=0x9c
// sig: void __do_global_dtors_aux(void)
// callers(1): 0064ed80 FUN_0064ed80
// callees(2): 00014854 boot::StaticDestroy_BootGlobals; 005e21b8 FUN_005e21b8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void crt0::__do_global_dtors_aux(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_0071a35c;
  puVar3 = PTR_DAT_0071a358;
  if (*PTR_DAT_0071a358 == '\0') {
    while( true ) {
      puVar1 = *(undefined4 **)puVar4;
      puVar2 = (undefined4 *)*puVar1;
      if (puVar2 == (undefined4 *)0x0) break;
      *(undefined4 **)puVar4 = puVar1 + 1;
      (*(code *)*puVar2)();
    }
    if (PTR_PTR_0071a360 != (undefined *)0x0) {
      FUN_005e21b8(DAT_0071a364);
    }
    *puVar3 = 1;
  }
  return;
}



//==== 00014eec  ns=crt0  size=0x70
// sig: void frame_dummy(void)
// callers(1): 00010200 crt0::_init
// callees(1): 005e1fc0 FUN_005e1fc0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void crt0::frame_dummy(void)

{
  if (PTR_PTR_0071a368 != (undefined *)0x0) {
    FUN_005e1fc0(DAT_0071a364,PTR_DAT_0071a36c);
  }
  if (*(int *)PTR_DAT_0071a370 != 0) {
    if (DAT_0071a374 != (undefined4 *)0x0) {
      (*(code *)*DAT_0071a374)();
    }
  }
  return;
}



//==== 00014f5c  ns=crt0  size=0x6c
// sig: void __do_global_ctors_aux(void)
// callers(1): 00010200 crt0::_init
// callees(2): 005e61ec FUN_005e61ec; 00649b34 FUN_00649b34

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void crt0::__do_global_ctors_aux(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(PTR_DAT_0071a378 + -4);
  puVar1 = (undefined4 *)*puVar2;
  while (puVar1 != (undefined4 *)0xffffffff) {
    puVar2 = puVar2 + -1;
    (*(code *)*puVar1)();
    puVar1 = (undefined4 *)*puVar2;
  }
  return;
}



//==== 00014fd0  ns=mobyupdate_unsorted  size=0x130
// sig: void Moby1267_UpdateCamera(MobyInstance * moby)
// callers(1): 000156a8 mobyupdate_unsorted::UpdateMoby_1267
// callees(4): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00048420 camera::camera5::DeactivateMobyDrivenCamAccel; 00502578 fastfunc::FastWrapRot

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [boot] Places the camera behind the turret using its yaw (rot.z + pi/2). */

void mobyupdate_unsorted::Moby1267_UpdateCamera(MobyInstance *moby)

{
  void *pvVar1;
  double dVar2;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  
  pvVar1 = moby->pVar;
  camera::camera5::DeactivateMobyDrivenCamAccel();
  local_34 = (moby->transform).v2.w * DAT_0071ceb8 +
             (moby->transform).v0.w * DAT_0071ceb0 + (moby->transform).v1.w * DAT_0071ceb4 +
             DAT_0071cebc;
  local_40 = (moby->transform).v2.x * DAT_0071ceb8 +
             (moby->transform).v0.x * DAT_0071ceb0 + (moby->transform).v1.x * DAT_0071ceb4 +
             (moby->pos).x;
  local_3c = (moby->transform).v2.y * DAT_0071ceb8 +
             (moby->transform).v0.y * DAT_0071ceb0 + (moby->transform).v1.y * DAT_0071ceb4 +
             (moby->pos).y;
  local_38 = (moby->transform).v2.z * DAT_0071ceb8 +
             (moby->transform).v0.z * DAT_0071ceb0 + (moby->transform).v1.z * DAT_0071ceb4 +
             (moby->pos).z;
  camera::camera5::Camera_SetMobyDrivenTargetPos(&local_40);
  local_30 = 0.0;
  local_2c = -*(float *)((int)pvVar1 + 0x74);
  dVar2 = (double)fastfunc::FastWrapRot(1.5707964,(moby->rotation).z);
  local_28 = (float)dVar2;
  camera::camera5::Camera_SetMobyDrivenTargetRot(&local_30);
  return;
}



//==== 00015120  ns=mobyupdate_unsorted  size=0x50c
// sig: void Moby1267_UpdateTargetLock(MobyInstance * moby)
// callers(1): 000156a8 mobyupdate_unsorted::UpdateMoby_1267
// callees(2): 004fff60 fastfunc::FastDecTimerS32; 005026a0 fastfunc::FastSubRots
// strings: 0001510c: '=VwP' (raw)

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [boot] Checks the 10 target mobys in pVars->targetIdx against the camera yaw/pitch cone (Blarg
   helicopter / PlanetBuster part get wider offsets); increments pVars->lockTimer when on target
   else decrements. */

void mobyupdate_unsorted::Moby1267_UpdateTargetLock(MobyInstance *moby)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  void *pvVar11;
  int iVar12;
  undefined4 uVar13;
  ulonglong *puVar14;
  int iVar15;
  bool bVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  float *pfVar22;
  longlong lVar21;
  ulonglong unaff_r26;
  ulonglong uVar23;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar24;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong uVar25;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  double dVar28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  uVar17 = ZEXT48(&stack0x00000000);
  lVar1 = uVar17 - 0x120;
  puVar14 = (ulonglong *)lVar1;
  *puVar14 = uVar17;
  puVar14[0x26] = in_LR;
  puVar14[0x21] = in_f29;
  puVar14[0x22] = in_f30;
  puVar14[0x23] = in_f31;
  puVar14[0x1c] = unaff_r27;
  puVar14[0x1e] = unaff_r29;
  puVar14[0x20] = unaff_r31;
  iVar24 = 0;
  pvVar11 = moby->pVar;
  uVar25 = ZEXT48(pvVar11);
  puVar14[0x1f] = unaff_r30;
  puVar14[0x1d] = unaff_r28;
  puVar14[0x1b] = unaff_r26;
  bVar16 = false;
  uVar23 = uVar25;
  do {
    fVar8 = GameCamera.posY;
    fVar9 = GameCamera.posX;
    iVar12 = *(int *)((int)uVar23 + 0x40);
    if (iVar12 != -1) {
      dVar29 = 0.12217304855585098;
      fVar2 = MobyInstance[iVar12].pos.z;
      fVar3 = MobyInstance[iVar12].pos.x;
      fVar4 = MobyInstance[iVar12].pos.y;
      if (MobyInstance[iVar12].oClass == BLARG_HELICOPTER_0146) {
        fVar2 = fVar2 + 1.5;
      }
      dVar30 = dVar29;
      if (MobyInstance[iVar12].oClass == PLANETBUSTER_MAXIMUS_PART_04FE) {
        dVar30 = 0.03490658476948738;
        dVar29 = 0.05235987901687622;
        fVar2 = fVar2 + 1.5;
      }
      fVar6 = fVar3 - GameCamera.posX;
      fVar10 = fVar4 - GameCamera.posY;
      fVar5 = ABS(fVar6);
      fVar7 = ABS(fVar10);
      *(float *)((int)puVar14 + 0x7c) = fVar6;
      *(float *)(puVar14 + 0x10) = fVar10;
      *(float *)((int)puVar14 + 0x84) = fVar5 - fVar7;
      dVar27 = 0.0;
      uVar20 = (ulonglong)(*(uint *)((int)puVar14 + 0x7c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar14 + 0x84) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar14 + 0x10) >> 0x1d) & 4;
      fVar6 = ABS(*(float *)((int)puVar14 + 0x7c));
      if (*(float *)((int)puVar14 + 0x84) - 0.0 < 0.0) {
        fVar6 = fVar7;
      }
      fVar10 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
      fVar7 = ABS(*(float *)(puVar14 + 0x10));
      if (*(float *)((int)puVar14 + 0x84) - 0.0 < 0.0) {
        fVar7 = fVar5;
      }
      fVar5 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
      dVar28 = dVar27;
      if (0.0 < fVar6) {
        lVar18 = uVar17 - 0x110;
        lVar19 = uVar17 - 0x78;
        lVar21 = uVar17 - 0x68;
        lVar26 = 2;
        fVar6 = (fVar7 - fVar6) / (fVar7 + fVar6);
        fVar7 = fVar6 * fVar6;
        *(float *)((int)puVar14 + 0xb4) = fVar6;
        *(float *)((int)puVar14 + 0xac) = fVar6;
        *(float *)(puVar14 + 0x16) = fVar6;
        *(float *)(puVar14 + 0x15) = fVar6;
        fVar6 = fVar7 * fVar7;
        *(float *)((int)puVar14 + 0xac) = *(float *)((int)puVar14 + 0xac) * fVar7;
        *(float *)(puVar14 + 0x16) = *(float *)(puVar14 + 0x16) * fVar6;
        *(float *)((int)puVar14 + 0xb4) = *(float *)((int)puVar14 + 0xb4) * fVar6 * fVar7;
        do {
          *(float *)((int)lVar18 + 0xa8) = *(float *)((int)lVar18 + 0x98) * fVar6 * fVar6;
          iVar12 = (int)lVar19;
          lVar18 = lVar18 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar12 + 4) * fVar6 * fVar6;
          lVar21 = lVar21 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar26 = 4;
        lVar21 = uVar17 - 0x78;
        pfVar22 = (float *)&DAT_007358e0;
        lVar18 = lVar1;
        lVar19 = lVar21;
        do {
          fVar6 = *pfVar22;
          fVar7 = pfVar22[1];
          pfVar22 = pfVar22 + 2;
          *(float *)((int)lVar18 + 0xa8) = *(float *)((int)lVar18 + 0xa8) * fVar6;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar7;
          lVar19 = lVar19 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar19 = 2;
        lVar18 = lVar1;
        do {
          iVar12 = (int)lVar18;
          lVar18 = lVar18 + 0x10;
          iVar15 = (int)lVar21;
          lVar21 = lVar21 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar12 + 0xa8)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar10 + fVar5);
      }
      fVar8 = fVar8 - fVar4;
      fVar9 = fVar9 - fVar3;
      fVar2 = fVar2 - GameCamera.posZ;
      fVar9 = SQRT(fVar9 * fVar9 + fVar8 * fVar8);
      *(float *)((int)puVar14 + 0x74) = fVar2;
      fVar2 = ABS(fVar2);
      fVar8 = ABS(fVar9);
      *(float *)(puVar14 + 0xe) = fVar9;
      *(float *)(puVar14 + 0xf) = fVar8 - fVar2;
      uVar20 = (ulonglong)(*(uint *)(puVar14 + 0xe) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar14 + 0xf) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar14 + 0x74) >> 0x1d) & 4;
      fVar9 = ABS(*(float *)(puVar14 + 0xe));
      if (*(float *)(puVar14 + 0xf) - 0.0 < 0.0) {
        fVar9 = fVar2;
      }
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
      fVar3 = ABS(*(float *)((int)puVar14 + 0x74));
      if (*(float *)(puVar14 + 0xf) - 0.0 < 0.0) {
        fVar3 = fVar8;
      }
      fVar8 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
      if (0.0 < fVar9) {
        lVar18 = uVar17 - 0x110;
        lVar19 = uVar17 - 0x98;
        lVar21 = uVar17 - 0x88;
        lVar26 = 2;
        fVar9 = (fVar3 - fVar9) / (fVar3 + fVar9);
        fVar3 = fVar9 * fVar9;
        *(float *)((int)puVar14 + 0x94) = fVar9;
        *(float *)((int)puVar14 + 0x8c) = fVar9;
        *(float *)(puVar14 + 0x12) = fVar9;
        *(float *)(puVar14 + 0x11) = fVar9;
        fVar9 = fVar3 * fVar3;
        *(float *)((int)puVar14 + 0x8c) = *(float *)((int)puVar14 + 0x8c) * fVar3;
        *(float *)(puVar14 + 0x12) = *(float *)(puVar14 + 0x12) * fVar9;
        *(float *)((int)puVar14 + 0x94) = *(float *)((int)puVar14 + 0x94) * fVar9 * fVar3;
        do {
          *(float *)((int)lVar18 + 0x88) = *(float *)((int)lVar18 + 0x78) * fVar9 * fVar9;
          iVar12 = (int)lVar19;
          lVar18 = lVar18 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar12 + 4) * fVar9 * fVar9;
          lVar21 = lVar21 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar26 = 4;
        lVar21 = uVar17 - 0x98;
        pfVar22 = (float *)&DAT_007358e0;
        lVar18 = lVar1;
        lVar19 = lVar21;
        do {
          fVar9 = *pfVar22;
          fVar3 = pfVar22[1];
          pfVar22 = pfVar22 + 2;
          *(float *)((int)lVar18 + 0x88) = *(float *)((int)lVar18 + 0x88) * fVar9;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar3;
          lVar19 = lVar19 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar19 = 2;
        lVar18 = lVar1;
        do {
          iVar12 = (int)lVar18;
          iVar15 = (int)lVar21;
          lVar18 = lVar18 + 0x10;
          lVar21 = lVar21 + 0x10;
          dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar12 + 0x88)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar2 + fVar8);
      }
      dVar28 = (double)fastfunc::FastSubRots((float)dVar28,GameCamera.rot.radius);
      if ((dVar28 < dVar30) &&
         (dVar30 = (double)fastfunc::FastSubRots((float)dVar27,-GameCamera.rot.elevation),
         dVar30 < dVar29)) {
        bVar16 = true;
      }
    }
    iVar24 = iVar24 + 1;
    uVar23 = uVar23 + 4;
  } while (iVar24 < 10);
  if (bVar16) {
    auVar31 = ZEXT416(0xffffffff);
    auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
    iVar24 = *(int *)((int)pvVar11 + 0x88) + 2;
    auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
    *(int *)((int)pvVar11 + 0x88) = iVar24;
    auVar31 = loadVectorLeftIndexed(0x18,0x15100);
    auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar31 = vectorMultiplyAddFloatingPoint
                        (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                         auVar32);
    auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
    puVar14[0x19] = (longlong)(int)(animationSpeed * 30.5);
    if (*(int *)((int)puVar14 + 0xcc) < iVar24) {
      auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar13 = storeVectorElementWordIndexed
                         (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x88,uVar25)
      ;
      *(undefined4 *)((int)pvVar11 + 0x88U & 0xfffffffc) = uVar13;
    }
  }
  else {
    fastfunc::FastDecTimerS32(uVar25 + 0x88);
  }
  return;
}



//==== 000156a8  ns=mobyupdate_unsorted  size=0x1240
// sig: undefined UpdateMoby_1267(MobyInstance * moby)
// callers(0): 
// callees(33): 00014fd0 mobyupdate_unsorted::Moby1267_UpdateCamera; 00015120 mobyupdate_unsorted::Moby1267_UpdateTargetLock; 000200b0 mobyupdate_helpers::M458_SpawnRocket; 00047f74 camera::SetCameraPosition; 0006d7e0 draw::RegisterPostDraw; 00083950 hero::HandleHeroDeath; 000a0c38 hero::Hero_Warp; 000b72b0 hero::TransitionMovement; 000e8aa4 memcard::memcard_Save; 000f0ea8 mobyfunc::AttachManipulator; 000f0f1c mobyfunc::DetachManipulator; 000f1114 mobyfunc::GetBonePosition; 000f1e50 mobyfunc::SetLevelFlag; 000fcbe8 mobyutil::MB_randRangeFloat; 000fdcf0 mobyutil::MB_SetAnimationNoBlend; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 000fe4f0 mobyutil::MB_randRangeSigned; 000fe610 mobyutil::MB_SphericalToVector; 0010675c mobyutil::MB_damage; 00109af0 mobyutil::Delt; 0010e030 mobyutil::MB_genericExplosion; 00112c20 mobyutil::MB_UnlockLevel; 00117238 mobyutil::MB_AddVectorSphere; 00128248 partupd::SpawnPart_27; 0015d12c sound::PlayMobySound; 00167e60 update::mode_sceneInit; 00168dec update::PlayInfobotMovie; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 00501980 fastfunc::FastQuaternionToEuler; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots
// strings: 000156a0: '?333`'

/* Moby 1267 */

void mobyupdate_unsorted::UpdateMoby_1267(MobyInstance *moby)

{
  bool bVar1;
  u8 uVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *pManipulator;
  uint uVar9;
  uint uVar10;
  undefined2 uVar11;
  undefined4 uVar12;
  ulonglong *puVar13;
  float fVar14;
  int iVar15;
  float fVar16;
  char acVar17 [4];
  longlong lVar18;
  undefined4 *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar24;
  undefined8 uVar23;
  float *pfVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar28;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  undefined8 uVar45;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar46;
  ulonglong in_f28;
  double dVar47;
  ulonglong in_f29;
  double dVar48;
  double dVar49;
  ulonglong in_f30;
  double dVar50;
  double dVar51;
  ulonglong in_f31;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  
  lVar21 = (longlong)(int)moby;
  uVar20 = ZEXT48(&stack0x00000000);
  lVar22 = uVar20 - 0x210;
  puVar13 = (ulonglong *)lVar22;
  *puVar13 = uVar20;
  puVar13[0x44] = in_LR;
  puVar13[0x36] = in_f20;
  puVar13[0x37] = in_f21;
  puVar13[0x38] = in_f22;
  puVar13[0x39] = in_f23;
  puVar13[0x3a] = in_f24;
  puVar13[0x3b] = in_f25;
  puVar13[0x3c] = in_f26;
  puVar13[0x3d] = in_f27;
  puVar13[0x3e] = in_f28;
  puVar13[0x3f] = in_f29;
  puVar13[0x40] = in_f30;
  puVar13[0x41] = in_f31;
  puVar13[0x33] = unaff_r29;
  lVar18 = uVar20 - 0xa0;
  puVar19 = (undefined4 *)lVar18;
  puVar19[3] = in_vr31_32_3;
  puVar19[2] = in_vr31_32_2;
  puVar19[1] = in_vr31_32_1;
  *puVar19 = in_vr31_32_0;
  puVar13[0x35] = unaff_r31;
  puVar13[0x34] = unaff_r30;
  pManipulator = moby->pVar;
  uVar28 = ZEXT48(pManipulator);
  uVar2 = moby->state;
  DAT_009637cc = moby;
  puVar13[0x32] = unaff_r28;
  puVar13[0x31] = unaff_r27;
  puVar13[0x30] = unaff_r26;
  if (uVar2 == '\b') {
    if (g_gameMode != GAME_MODE_SCENE) {
      memcard::memcard_Save(0,-1);
      moby->state = '\x06';
    }
  }
  else if (uVar2 == '\a') {
    draw::RegisterPostDraw(&PTR_Moby1267_DrawDeathFade_00703810,moby);
    iVar24 = fastfunc::FastDecTimerS16(uVar28 + 0xae);
    if (iVar24 != 0) {
      mobyutil::MB_randRangeFloat(DAT_0071cd88,DAT_0071cd8c);
      uVar23 = 0;
      uVar45 = 0x3fe0c15240000000;
      dVar30 = (double)GameCamera.rot.radius;
      dVar34 = (double)mobyutil::MB_randRangeSigned(0,0x3fe0c15240000000);
      fastfunc::FastWrapRot((float)dVar30,(float)dVar34);
      dVar30 = (double)GameCamera.rot.elevation;
      dVar34 = (double)mobyutil::MB_randRangeSigned(uVar23,uVar45);
      fastfunc::FastWrapRot((float)dVar30,(float)dVar34);
      fVar4 = GameCamera.posY;
      *(float *)(puVar13 + 0x24) = GameCamera.posX;
      fVar5 = GameCamera.posZ;
      *(float *)((int)puVar13 + 0x124) = fVar4;
      acVar17 = GameCamera.field8_0x14c;
      *(float *)(puVar13 + 0x25) = fVar5;
      *(char (*) [4])((int)puVar13 + 300) = acVar17;
      pfVar25 = (float *)(uVar20 - 0xf0);
      mobyutil::MB_AddVectorSphere(pfVar25,pfVar25);
      dVar30 = 0.5;
      dVar34 = (double)mobyutil::MB_randRangeFloat(0.5,1.3);
      puVar13[0x12] = 3;
      puVar13[0x14] = 0;
      puVar13[0x15] = 0;
      puVar13[0x16] = 0xffffffffffffffff;
      puVar13[0x17] = 0;
      mobyutil::MB_genericExplosion
                (uVar23,uVar23,dVar34,(double)(float)(dVar34 * 0.5699999928474426),
                 0x4024000000000000,0x3fe6666660000000,uVar23,lVar21,&DAT_00a15d30,uVar20 - 0xf0,3,0
                 ,7,0xf,0x19);
      iVar24 = mobyutil::MB_randRange(5,0xd);
      puVar13[0x2c] = (longlong)iVar24;
      puVar13[0x2c] =
           (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar13[0x2c] + dVar30));
      *(short *)((int)pManipulator + 0xae) = (short)*(undefined4 *)((int)puVar13 + 0x164);
    }
    iVar24 = fastfunc::FastDecTimerS16(uVar28 + 0xac);
    if (iVar24 != 0) {
      hero::HandleHeroDeath();
    }
  }
  else if (uVar2 == '\x06') {
    if (moby->animationId != '\0') {
      mobyutil::MB_SetAnimationNoBlend(lVar21,0,0);
    }
  }
  else if (uVar2 == '\x05') {
    if (g_gameMode != GAME_MODE_SCENE) {
      update::mode_sceneInit(1);
      moby->state = '\b';
    }
  }
  else if (uVar2 == '\x04') {
    auVar52 = ZEXT416(0xffffffff);
    auVar52 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
    auVar53 = vectorShiftLeftIntegerWord(auVar52,auVar52);
    DAT_00927118 = 1;
    hero::g_heroInvisible = 1;
    auVar52 = loadVectorLeftIndexed(0x2c,0x1562c);
    auVar52 = auVar52 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar55 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
    auVar52 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar52 = vectorMultiplyAddFloatingPoint(auVar52,auVar55,auVar53);
    auVar52 = vectorConvertToSignedFixedPointWordSaturate(auVar52,0);
    auVar52 = auVar52 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar52 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
    g_heroGhostFrames = storeVectorElementWordIndexed(auVar52,0x1cc,0x969ce0);
    DAT_00969ea0 = storeVectorElementWordIndexed(auVar52,0x1c0,0x969ce0);
    if ((g_gameMode != GAME_MODE_SCENE) && (DAT_009271d0 == 0)) {
      draw::RegisterPostDraw(&PTR_Moby1267_DrawHud_00703808,moby);
    }
    Moby1267_UpdateTargetLock(moby);
    iVar24 = fastfunc::FastDecTimerS32(uVar28 + 0x90);
    if (iVar24 != 0) {
      iVar24 = mobyutil::MB_damage(lVar21,0x10000,0);
      if (iVar24 != 0) {
        auVar52 = ZEXT416(0xffffffff);
        auVar52 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
        auVar53 = vectorShiftLeftIntegerWord(auVar52,auVar52);
        auVar54 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar52 = loadVectorLeftIndexed(0x30,0x1562c);
        auVar52 = auVar52 >> 0x60 & (undefined1  [16])0xffffffff;
        fVar4 = *(float *)((int)pManipulator + 0x8c);
        auVar52 = vectorMultiplyAddFloatingPoint
                            (auVar54,auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,
                             auVar53);
        auVar52 = vectorConvertToSignedFixedPointWordSaturate(auVar52,0);
        auVar52 = auVar52 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar12 = storeVectorElementWordIndexed
                           (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,0x90,
                            uVar28);
        *(undefined4 *)((int)pManipulator + 0x90U & 0xfffffffc) = uVar12;
        *(float *)((int)pManipulator + 0x8c) = fVar4 - *(float *)(iVar24 + 0x2c);
      }
      moby->damage = -1;
    }
    if (DAT_00927134 == 0) {
      if ((DAT_0096b2ef & 1) != 0) {
        uVar10 = (int)*(uint *)((int)pManipulator + 0x8c) >> 0x1f;
        if (0x42c80000 < (int)((uVar10 >> 1 ^ *(uint *)((int)pManipulator + 0x8c)) - uVar10)) {
          DAT_00927130 = DAT_00927130 + -1;
        }
        DAT_0096b2ef = 0;
        hero::HandleHeroDeath();
      }
      if (*(int *)((int)pManipulator + 0x8c) < 1) {
        auVar52 = ZEXT416(0xffffffff);
        auVar52 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
        auVar52 = vectorShiftLeftIntegerWord(auVar52,auVar52);
        auVar53 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar52 = vectorMultiplyAddFloatingPoint(auVar53,auVar55,auVar52);
        DAT_0092711c = 1;
        auVar52 = vectorConvertToSignedFixedPointWordSaturate(auVar52,0);
        auVar52 = vectorSplatHalfWord(auVar52,1);
        uVar11 = storeVectorElementHalfWordIndexed(auVar52,0xac,uVar28);
        *(undefined2 *)((int)pManipulator + 0xac) = uVar11;
        moby->state = '\a';
        return;
      }
    }
    if ((*(int *)((int)pManipulator + 0x94) != -1) &&
       (0x7f < MobyInstance[*(int *)((int)pManipulator + 0x94)].state)) {
      if (g_gameMode != GAME_MODE_SCENE) {
        mobyfunc::SetLevelFlag(moby->levelFlagIdx);
        update::PlayInfobotMovie(0xd);
        mobyutil::MB_UnlockLevel(Gemlik);
        *(undefined4 *)(puVar13 + 0x1a) = 0x43a43333;
        *(undefined4 *)((int)puVar13 + 0xdc) = 0;
        *(undefined4 *)((int)puVar13 + 0xd4) = 0x43a9599a;
        *(undefined4 *)(puVar13 + 0x1c) = 0;
        *(undefined4 *)(puVar13 + 0x1b) = 0x4273eb85;
        *(undefined4 *)((int)puVar13 + 0xe4) = 0;
        *(undefined4 *)(puVar13 + 0x1d) = 0xbfd9999a;
        *(undefined4 *)((int)puVar13 + 0xec) = 0;
        DAT_00927118 = 0;
        hero::Hero_Warp((float *)(puVar13 + 0x1a),(float *)(puVar13 + 0x1c),0,1);
        moby->state = '\x05';
        return;
      }
      if (*(char *)((int)pManipulator + 1) != '\0') {
        mobyfunc::DetachManipulator(moby,pManipulator);
      }
      if (moby->animationId != '\0') {
        mobyutil::MB_SetAnimationNoBlend(lVar21,0,0);
      }
      fVar3 = *(f32 *)((int)pManipulator + 0xa0);
      (moby->rotation).z = 3.1415927;
      (moby->pos).z = fVar3;
    }
    if (DAT_009271d0 == 0) {
      dVar30 = -1.0;
      dVar34 = dVar30;
      if (g_GameSettings.CameraUpDown != 0) {
        dVar34 = 1.0;
      }
      dVar50 = (double)(float)((double)DAT_0096ba04 * dVar34);
      dVar48 = 0.01745329238474369;
      dVar34 = 0.0;
      fVar4 = -(DAT_0071ce90 * 0.017453292 * mobyutil::g_FrameTime * hero::g_heroPadStick);
      if (((-1 < *(int *)((int)pManipulator + 0x7c)) &&
          (*(float *)((int)pManipulator + 0x7c) < fVar4)) ||
         ((*(int *)((int)pManipulator + 0x7c) < 1 && (fVar4 < *(float *)((int)pManipulator + 0x7c)))
         )) {
        mobyutil::Delt(fVar4,DAT_0071ce98 * 0.017453292 * DAT_0071f418,
                       (float *)((int)pManipulator + 0x7c));
      }
      else {
        mobyutil::Delt(fVar4,DAT_0071cea0 * 0.017453292 * DAT_0071f418,
                       (float *)((int)pManipulator + 0x7c));
      }
      dVar31 = (double)fastfunc::FastWrapRot
                                 ((moby->rotation).z,*(float *)((int)pManipulator + 0x7c));
      (moby->rotation).z = (float)dVar31;
      fVar4 = (float)((double)((float)((double)DAT_0071ce94 * dVar48) * mobyutil::g_FrameTime) *
                     dVar50);
      if (((-1 < *(int *)((int)pManipulator + 0x78)) &&
          (*(float *)((int)pManipulator + 0x78) < fVar4)) ||
         ((*(int *)((int)pManipulator + 0x78) < 1 && (fVar4 < *(float *)((int)pManipulator + 0x78)))
         )) {
        mobyutil::Delt(fVar4,(float)((double)DAT_0071ce9c * dVar48) * DAT_0071f418,
                       (float *)((int)pManipulator + 0x78));
      }
      else {
        mobyutil::Delt(fVar4,(float)((double)DAT_0071cea4 * dVar48) * DAT_0071f418,
                       (float *)((int)pManipulator + 0x78));
      }
      dVar48 = (double)fastfunc::FastWrapRot
                                 (*(float *)((int)pManipulator + 0x74),
                                  *(float *)((int)pManipulator + 0x78));
      *(float *)((int)pManipulator + 0x74) = (float)dVar48;
      dVar50 = (double)DAT_0071ce4c;
      if (dVar50 < dVar48) {
        *(float *)((int)pManipulator + 0x74) = DAT_0071ce4c;
        dVar48 = dVar50;
      }
      dVar50 = (double)DAT_0071ce48;
      if (dVar48 < dVar50) {
        *(float *)((int)pManipulator + 0x74) = DAT_0071ce48;
        dVar48 = dVar50;
      }
      fastfunc::FastQuaternionToEuler(-dVar48,uVar28 + 0x10,1);
      if ((moby->field43_0x70 & 2U) != 0) {
        mobyutil::MB_SetAnimation(lVar21,5,0,1);
      }
      fastfunc::FastDecTimerS16(uVar28 + 0x70);
      if (((g_downButtons & (SQUARE|CIRCLE)) != 0) && (*(short *)((int)pManipulator + 0x70) == 0)) {
        mobyutil::MB_SetAnimation
                  (lVar21,((LZCOUNT(1 - *(int *)((int)pManipulator + 0x80)) << 0x3a) >> 0x3f & 1U) +
                          3,0,1);
        dVar48 = (double)fastfunc::FastWrapRot((moby->rotation).z,1.5707964);
        mobyutil::MB_SphericalToVector
                  (DAT_0071cea8 * mobyutil::g_FrameTime,(float)dVar48,
                   *(float *)((int)pManipulator + 0x74),(float *)(puVar13 + 0x1e));
        lVar22 = uVar20 - 0x110;
        if (*(int *)((int)pManipulator + 0x80) == 1) {
          *(undefined4 *)((int)pManipulator + 0x80) = 0;
          mobyfunc::GetBonePosition(lVar21,2,lVar22);
        }
        else {
          mobyfunc::GetBonePosition(lVar21,1,lVar22);
          *(undefined4 *)((int)pManipulator + 0x80) = 1;
        }
        fVar4 = *(float *)(puVar13 + 0x1e);
        fVar5 = *(float *)(puVar13 + 0x1f);
        fVar6 = *(float *)((int)puVar13 + 0xf4);
        *(float *)(puVar13 + 10) = fVar4;
        *(float *)(puVar13 + 0xb) = fVar5;
        fVar4 = *(float *)(puVar13 + 0x20) + fVar4 + fVar4 + fVar4;
        fVar5 = *(float *)(puVar13 + 0x21) + fVar5 + fVar5 + fVar5;
        fVar7 = *(float *)((int)puVar13 + 0x104) + fVar6 + fVar6 + fVar6;
        *(undefined4 *)((int)puVar13 + 0x4c) = *(undefined4 *)((int)puVar13 + 0x10c);
        *(float *)(puVar13 + 8) = fVar4;
        *(float *)(puVar13 + 9) = fVar5;
        *(float *)(puVar13 + 0x20) = fVar4;
        *(float *)(puVar13 + 0x21) = fVar5;
        *(float *)((int)puVar13 + 0x44) = fVar7;
        *(float *)((int)puVar13 + 0x104) = fVar7;
        *(float *)((int)puVar13 + 0x54) = fVar6;
        *(undefined4 *)((int)puVar13 + 0x5c) = *(undefined4 *)((int)puVar13 + 0xfc);
        mobyupdate_helpers::M458_SpawnRocket(lVar21);
        sound::PlayMobySound(0,0,moby);
        auVar52 = ZEXT416(0xffffffff);
        auVar52 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
        auVar53 = vectorShiftLeftIntegerWord(auVar52,auVar52);
        GameCamera.offset0.amp = 0.03;
        auVar52 = loadVectorLeftIndexed(0x40,0x1562c);
        auVar54 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar52 = auVar52 >> 0x60 & (undefined1  [16])0xffffffff;
        dVar51 = 10.5;
        auVar53 = vectorMultiplyAddFloatingPoint
                            (auVar54,auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,
                             auVar53);
        auVar52 = ZEXT416(0xffffffff);
        auVar55 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
        auVar52 = ZEXT416(0xffffffff);
        auVar56 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
        auVar55 = vectorShiftLeftIntegerWord(auVar55,auVar55);
        auVar52 = vectorConvertToSignedFixedPointWordSaturate(auVar53,0);
        auVar52 = auVar52 >> 0x60 & (undefined1  [16])0xffffffff;
        GameCamera.offset0.total =
             storeVectorElementWordIndexed
                       (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,0x168,0x9513c0
                       );
        GameCamera.offset1.amp = 0.03;
        auVar52 = loadVectorLeftIndexed(0x44,0x1562c);
        auVar52 = auVar52 >> 0x60 & (undefined1  [16])0xffffffff;
        dVar49 = 7.5;
        auVar52 = vectorMultiplyAddFloatingPoint
                            (auVar54,auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,
                             auVar55);
        auVar53 = vectorShiftLeftIntegerWord(auVar56,auVar56);
        auVar52 = vectorConvertToSignedFixedPointWordSaturate(auVar52,0);
        auVar52 = auVar52 >> 0x60 & (undefined1  [16])0xffffffff;
        GameCamera.offset1.total =
             storeVectorElementWordIndexed
                       (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,0x178,0x9513c0
                       );
        auVar52 = loadVectorLeftIndexed(0x48,0x1562c);
        auVar52 = auVar52 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar52 = vectorMultiplyAddFloatingPoint
                            (auVar54,auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,
                             auVar53);
        auVar52 = vectorConvertToSignedFixedPointWordSaturate(auVar52,0);
        auVar52 = vectorSplatHalfWord(auVar52,1);
        uVar11 = storeVectorElementHalfWordIndexed(auVar52,0x70,uVar28);
        *(undefined2 *)((int)pManipulator + 0x70) = uVar11;
        dVar47 = 1.0;
        dVar46 = -0.3500000238418579;
        iVar24 = 0;
        dVar31 = 3.0;
        dVar50 = 6.0;
        dVar48 = 5.5;
        uVar45 = 0x40e86a0000000000;
        do {
          *(undefined4 *)(puVar13 + 0x22) = 0;
          *(undefined4 *)((int)puVar13 + 0x114) = 0;
          *(undefined4 *)(puVar13 + 0x23) = 0;
          *(undefined4 *)((int)puVar13 + 0x11c) = 0;
          dVar32 = (double)mobyutil::MB_randRangeFloat((float)dVar30,(float)dVar47);
          *(float *)(puVar13 + 0x22) = (float)dVar32;
          dVar32 = (double)mobyutil::MB_randRangeFloat((float)dVar30,(float)dVar47);
          *(float *)((int)puVar13 + 0x114) = (float)dVar32;
          dVar33 = (double)mobyutil::MB_randRangeFloat((float)dVar30,(float)dVar47);
          dVar35 = (double)*(float *)((int)puVar13 + 0xf4);
          dVar36 = (double)*(float *)(puVar13 + 0x1e);
          dVar37 = (double)*(float *)((int)puVar13 + 0x114);
          dVar39 = (double)*(float *)(puVar13 + 0x1f);
          dVar42 = (double)*(float *)(puVar13 + 0x22);
          dVar32 = (double)DAT_0071f408;
          *(float *)(puVar13 + 0x23) = (float)dVar33;
          dVar44 = (double)mobyutil::g_FrameTime;
          *(undefined4 *)((int)puVar13 + 0x11c) = *(undefined4 *)((int)puVar13 + 0xfc);
          dVar40 = (double)SQRT((float)(dVar33 * dVar33 +
                                       (double)(float)(dVar42 * dVar42 +
                                                      (double)(float)(dVar37 * dVar37))));
          dVar43 = (double)(float)((double)(SQRT((float)(dVar39 * dVar39 +
                                                        (double)(float)(dVar36 * dVar36 +
                                                                       (double)(float)(dVar35 * 
                                                  dVar35)))) * (float)(dVar32 * dVar46 + dVar47)) /
                                  dVar40);
          dVar32 = dVar34;
          if (dVar34 - dVar40 < 0.0) {
            dVar32 = (double)(float)(dVar33 * dVar43);
          }
          dVar38 = dVar34;
          if (dVar34 - dVar40 < 0.0) {
            dVar38 = (double)(float)(dVar37 * dVar43);
          }
          dVar41 = dVar34;
          if (dVar34 - dVar40 < 0.0) {
            dVar41 = (double)(float)(dVar42 * dVar43);
          }
          if (dVar40 - dVar34 < 0.0) {
            dVar32 = (double)(float)(dVar33 * dVar43);
          }
          if (dVar40 - dVar34 < 0.0) {
            dVar38 = (double)(float)(dVar37 * dVar43);
          }
          if (dVar40 - dVar34 < 0.0) {
            dVar41 = (double)(float)(dVar42 * dVar43);
          }
          *(float *)(puVar13 + 0x23) = (float)(dVar39 + dVar32);
          *(float *)((int)puVar13 + 0x114) = (float)(dVar35 + dVar38);
          *(float *)(puVar13 + 0x22) = (float)(dVar36 + dVar41);
          dVar32 = (double)mobyutil::MB_randRangeFloat
                                     ((float)(dVar44 * dVar31),(float)(dVar44 * dVar50));
          fVar5 = *(float *)((int)puVar13 + 0x114);
          fVar6 = *(float *)(puVar13 + 0x22);
          fVar7 = *(float *)(puVar13 + 0x23);
          dVar35 = (double)animationSpeed;
          dVar33 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
          puVar13[0x2c] = (longlong)(int)(dVar35 * dVar48);
          puVar13[0x2c] = (longlong)(int)(dVar35 * dVar51);
          fVar4 = (float)(dVar32 / dVar33);
          dVar32 = dVar34;
          if (dVar34 - dVar33 < 0.0) {
            dVar32 = (double)(fVar6 * fVar4);
          }
          dVar35 = dVar34;
          if (dVar34 - dVar33 < 0.0) {
            dVar35 = (double)(fVar5 * fVar4);
          }
          dVar36 = dVar34;
          if (dVar34 - dVar33 < 0.0) {
            dVar36 = (double)(fVar7 * fVar4);
          }
          if (dVar33 - dVar34 < 0.0) {
            dVar32 = (double)(fVar6 * fVar4);
          }
          if (dVar33 - dVar34 < 0.0) {
            dVar35 = (double)(fVar5 * fVar4);
          }
          if (dVar33 - dVar34 < 0.0) {
            dVar36 = (double)(fVar7 * fVar4);
          }
          *(float *)(puVar13 + 0x22) = (float)dVar32;
          *(float *)((int)puVar13 + 0x114) = (float)dVar35;
          *(float *)(puVar13 + 0x23) = (float)dVar36;
          uVar23 = mobyutil::MB_randRange
                             (*(undefined4 *)((int)puVar13 + 0x164),
                              *(undefined4 *)((int)puVar13 + 0x164));
          partupd::SpawnPart_27(uVar45,lVar22,uVar20 - 0x100,0x5f2f4f6f,uVar23);
          iVar24 = iVar24 + 1;
        } while (iVar24 < 5);
        fVar5 = *(float *)((int)puVar13 + 0xf4);
        fVar6 = *(float *)(puVar13 + 0x1e);
        fVar7 = *(float *)(puVar13 + 0x1f);
        dVar50 = (double)animationSpeed;
        dVar48 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
        fVar4 = (float)((double)(mobyutil::g_FrameTime * 0.5) / dVar48);
        dVar30 = dVar34;
        if (dVar34 - dVar48 < 0.0) {
          dVar30 = (double)(fVar6 * fVar4);
        }
        dVar31 = dVar34;
        if (dVar34 - dVar48 < 0.0) {
          dVar31 = (double)(fVar5 * fVar4);
        }
        dVar46 = dVar34;
        if (dVar34 - dVar48 < 0.0) {
          dVar46 = (double)(fVar7 * fVar4);
        }
        if (dVar48 - dVar34 < 0.0) {
          dVar30 = (double)(fVar6 * fVar4);
        }
        if (dVar48 - dVar34 < 0.0) {
          dVar31 = (double)(fVar5 * fVar4);
        }
        if (dVar48 - dVar34 < 0.0) {
          dVar46 = (double)(fVar7 * fVar4);
        }
        *(float *)(puVar13 + 0x1e) = (float)dVar30;
        *(float *)((int)puVar13 + 0xf4) = (float)dVar31;
        *(float *)(puVar13 + 0x1f) = (float)dVar46;
        puVar13[0x2c] = (longlong)(int)(dVar50 * 4.5);
        puVar13[0x2c] = (longlong)(int)(dVar50 * dVar49);
        uVar45 = mobyutil::MB_randRange
                           (*(undefined4 *)((int)puVar13 + 0x164),
                            *(undefined4 *)((int)puVar13 + 0x164));
        partupd::SpawnPart_27(0x411e848000000000,lVar22,uVar20 - 0x120,0x2f4f7f7f,uVar45);
      }
      if (DAT_009271d0 == 0) {
        Moby1267_UpdateCamera(moby);
      }
    }
  }
  else if (uVar2 == '\x03') {
    mobyfunc::GetBonePosition(lVar21,3,uVar20 - 0x150);
    fVar4 = (moby->pos).y;
    fVar5 = (moby->pos).x;
    fVar8 = fVar4 - g_heroPosition.y;
    fVar14 = fVar5 - g_heroPosition.x;
    fVar6 = (moby->rotation).z;
    fVar3 = (moby->pos).z;
    uVar10 = (int)fVar3 >> 0x1f;
    fVar7 = (moby->pos).z;
    if ((SQRT(fVar14 * fVar14 + fVar8 * fVar8) < 7.0) || (g_standingOnMoby == moby)) {
      fVar5 = g_heroPosition.x - fVar5;
      fVar4 = g_heroPosition.y - fVar4;
      fVar8 = *(float *)((int)pManipulator + 0xa0);
      fVar16 = ABS(fVar5);
      fVar14 = ABS(fVar4);
      *(float *)(puVar13 + 0x26) = fVar5;
      *(float *)((int)puVar13 + 0x134) = fVar4;
      *(float *)(puVar13 + 0x27) = fVar16 - fVar14;
      uVar10 = *(uint *)(puVar13 + 0x26);
      fVar4 = *(float *)(puVar13 + 0x26);
      uVar9 = *(uint *)((int)puVar13 + 0x134);
      (moby->pos).z = ((fVar8 - 1.2) - fVar7) * 0.11 + fVar7;
      dVar34 = 0.0;
      uVar28 = (ulonglong)(uVar10 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x27) >> 0x1e) & 2 | (ulonglong)(uVar9 >> 0x1d) & 4;
      fVar4 = ABS(fVar4);
      if (*(float *)(puVar13 + 0x27) - 0.0 < 0.0) {
        fVar4 = fVar14;
      }
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar28 << 2));
      fVar5 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
      fVar8 = ABS(*(float *)((int)puVar13 + 0x134));
      if (*(float *)(puVar13 + 0x27) - 0.0 < 0.0) {
        fVar8 = fVar16;
      }
      if (0.0 < fVar4) {
        lVar18 = uVar20 - 0x200;
        lVar27 = uVar20 - 0xc4;
        lVar26 = uVar20 - 0xd4;
        lVar29 = 2;
        fVar4 = (fVar8 - fVar4) / (fVar8 + fVar4);
        fVar8 = fVar4 * fVar4;
        *(float *)(puVar13 + 0x29) = fVar4;
        *(float *)(puVar13 + 0x28) = fVar4;
        *(float *)((int)puVar13 + 0x144) = fVar4;
        *(float *)((int)puVar13 + 0x13c) = fVar4;
        fVar4 = fVar8 * fVar8;
        *(float *)(puVar13 + 0x28) = *(float *)(puVar13 + 0x28) * fVar8;
        *(float *)((int)puVar13 + 0x144) = *(float *)((int)puVar13 + 0x144) * fVar4;
        *(float *)(puVar13 + 0x29) = *(float *)(puVar13 + 0x29) * fVar4 * fVar8;
        do {
          *(float *)((int)lVar18 + 0x13c) = *(float *)((int)lVar18 + 300) * fVar4 * fVar4;
          iVar24 = (int)lVar26;
          lVar26 = lVar26 + 8;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar24 + 4) * fVar4 * fVar4;
          lVar27 = lVar27 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar29 = 4;
        lVar27 = uVar20 - 0xd4;
        pfVar25 = (float *)&DAT_007358e0;
        lVar18 = lVar22;
        lVar26 = lVar27;
        do {
          fVar4 = *pfVar25;
          fVar8 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar18 + 0x13c) = *(float *)((int)lVar18 + 0x13c) * fVar4;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar8;
          lVar26 = lVar26 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar18 = 2;
        do {
          iVar24 = (int)lVar22;
          lVar22 = lVar22 + 0x10;
          iVar15 = (int)lVar27;
          lVar27 = lVar27 + 0x10;
          dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar24 + 0x13c)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar7 + fVar5);
      }
      dVar34 = (double)fastfunc::FastDiffRots(dVar34,(double)fVar6);
      dVar34 = (double)fastfunc::FastWrapRot((float)dVar34,1.5707964);
      dVar34 = (double)fastfunc::FastWrapRot
                                 (*(float *)((int)pManipulator + 0xa4),
                                  (float)(dVar34 * 0.009999999776482582));
      *(float *)((int)pManipulator + 0xa4) = (float)(dVar34 * 0.8999999761581421);
      dVar34 = (double)fastfunc::FastWrapRot
                                 ((moby->rotation).z,(float)(dVar34 * 0.8999999761581421));
      (moby->rotation).z = (float)dVar34;
    }
    else {
      fVar4 = *(float *)((int)pManipulator + 0xa0);
      uVar9 = (int)*(uint *)((int)pManipulator + 0xa0) >> 0x1f;
      if ((int)((uVar10 >> 1 ^ (uint)fVar3) - uVar10) <
          (int)((uVar9 >> 1 ^ *(uint *)((int)pManipulator + 0xa0)) - uVar9)) {
        fVar4 = fVar7 + mobyutil::g_FrameTime;
      }
      bVar1 = g_standingOnMoby != moby;
      (moby->pos).z = fVar4;
      if ((bVar1) && (*(int *)((int)pManipulator + 0x98) != -1)) {
        sound::PlayMobySound(2,0,moby);
      }
    }
    iVar24 = g_framesGroundedCnt;
    fVar4 = (moby->pos).y - (g_heroMobyPtr->pos).y;
    fVar5 = (moby->pos).x - (g_heroMobyPtr->pos).x;
    if ((SQRT(fVar5 * fVar5 + fVar4 * fVar4) < 1.3) &&
       (puVar13[0x2c] = (longlong)(int)(animationSpeed * 15.5),
       *(int *)((int)puVar13 + 0x164) < iVar24)) {
      camera::SetCameraPosition(lVar21 + 0x10,lVar21 + 0x40,1,0,0);
      if (moby->animationId != '\x05') {
        mobyutil::MB_SetAnimationNoBlend(lVar21,5,0);
      }
      hero::TransitionMovement(0x32,1);
      Moby1267_UpdateCamera(moby);
      *(undefined4 *)((int)pManipulator + 0x8c) = 0x43480000;
      moby->damage = -1;
      DAT_00927130 = DAT_00927130 + 1;
      moby->state = '\x04';
    }
  }
  else if (uVar2 == '\0') {
    DAT_00927118 = 0;
    DAT_0092711c = 0;
    if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
      moby->state = '\x06';
    }
    else {
      mobyfunc::AttachManipulator(moby,0,pManipulator);
      auVar52 = ZEXT416(0xffffffff);
      auVar52 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
      moby->state = '\x03';
      auVar53 = vectorShiftLeftIntegerWord(auVar52,auVar52);
      *(undefined4 *)((int)pManipulator + 0x84) = 200;
      (moby->rotation).y = 0.0;
      auVar52 = loadVectorLeftIndexed(lVar18,0x1562c);
      auVar52 = auVar52 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar55 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar52 = vectorMultiplyAddFloatingPoint
                          (auVar55,auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,
                           auVar53);
      auVar52 = vectorConvertToSignedFixedPointWordSaturate(auVar52,0);
      auVar52 = vectorSplatHalfWord(auVar52,1);
      uVar11 = storeVectorElementHalfWordIndexed(auVar52,0x70,uVar28);
      *(undefined2 *)((int)pManipulator + 0x70) = uVar11;
      *(undefined4 *)((int)pManipulator + 0x78) = 0;
      *(undefined4 *)((int)pManipulator + 0x7c) = 0;
      fVar3 = (moby->pos).z;
      *(undefined2 *)((int)pManipulator + 0x72) = 0;
      *(f32 *)((int)pManipulator + 0xa0) = fVar3;
      *(undefined4 *)((int)pManipulator + 0x98) = 0xffffffff;
      (moby->rotation).z = 3.1415927;
      DAT_009637cc = moby;
    }
  }
  return;
}



//==== 00016940  ns=mobyupdate_unsorted  size=0x117c
// sig: void Moby1267_DrawHud(MobyInstance * moby)
// callers(0): 
// callees(9): 000685c4 draw::GetEffectTex; 0006ecf8 draw::DrawTexturedQuadHud; 00174f80 vuchain::SetGSReg; 00502578 fastfunc::FastWrapRot; 00502648 fastfunc::FastAddRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor; 00502ea8 idol_draw::PackCmd

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [boot] Draw callback (PTR at 0x703808) drawing the turret reticle, health ring (pVars->health
   0..200 red->yellow->green) and lock-on indicator. */

void mobyupdate_unsorted::Moby1267_DrawHud(MobyInstance *moby)

{
  void *pvVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 local_150 [32];
  undefined1 local_130 [16];
  undefined1 local_120 [40];
  
  pvVar1 = moby->pVar;
  uVar3 = idol_draw::PackCmd(0,1,0,1,0x80);
  vuchain::SetGSReg(3,uVar3);
  uVar3 = draw::GetEffectTex(DAT_0071cd84 + 0x28);
  lVar9 = 0;
  dVar26 = 16.0;
  do {
    dVar24 = (double)(longlong)
                     (int)(((uint)((LZCOUNT(-((uint)lVar9 & 1)) << 0x3a) >> 0x3f) & 2) - 1);
    dVar22 = (double)(longlong)(int)(((uint)(1 - lVar9 >> 0x3f) & 0xfffffffe) + 1);
    fastfunc::FastDoubleToInt
              ((double)(float)((double)(float)((double)DAT_0071cd50 * dVar22 + (double)DAT_0071cd48)
                              * dVar26));
    fastfunc::FastDoubleToInt((double)(float)((double)DAT_0071cd4c * dVar24 + (double)DAT_0071cd44))
    ;
    fastfunc::FastDoubleToInt((double)(float)((double)DAT_0071cd48 * dVar26));
    fastfunc::FastDoubleToInt((double)(float)((double)DAT_0071cd4c * dVar24 + (double)DAT_0071cd44))
    ;
    fastfunc::FastDoubleToInt
              ((double)(float)((double)(float)((double)DAT_0071cd50 * dVar22 + (double)DAT_0071cd48)
                              * dVar26));
    fastfunc::FastDoubleToInt((double)DAT_0071cd44);
    fastfunc::FastDoubleToInt((double)(float)((double)DAT_0071cd48 * dVar26));
    fastfunc::FastDoubleToInt((double)DAT_0071cd44);
    draw::DrawTexturedQuadHud(local_150,local_130,local_120,uVar3,1);
    lVar9 = lVar9 + 1;
  } while ((int)lVar9 < 4);
  uVar3 = draw::GetEffectTex(6);
  uVar2 = (int)*(uint *)((int)pvVar1 + 0x8c) >> 0x1f;
  if ((int)((uVar2 >> 1 ^ *(uint *)((int)pvVar1 + 0x8c)) - uVar2) < 0x42c80001) {
    fastfunc::FastLerpColor((double)(*(float *)((int)pvVar1 + 0x8c) * 0.01),0x600000ff,0x6000ffff);
  }
  else {
    fastfunc::FastLerpColor
              ((double)((*(float *)((int)pvVar1 + 0x8c) - 100.0) * 0.01),0x6000ffff,0x6000ff00);
  }
  fastfunc::FastDoubleToInt((double)(-(*(float *)((int)pvVar1 + 0x8c) * 0.005 - 1.0) * 32.0));
  dVar22 = 0.19634954631328583;
  iVar8 = 0;
  dVar24 = 3.141592502593994;
  dVar18 = -3.141592502593994;
  dVar19 = -0.16666656732559204;
  dVar20 = 0.008333025500178337;
  dVar21 = -0.0001980741071747616;
  dVar23 = 2.601886990305502e-06;
  dVar25 = 1.570796251296997;
  do {
    dVar10 = (double)fastfunc::FastAddRots((float)((double)(longlong)iVar8 * dVar22));
    dVar11 = (double)fastfunc::FastWrapRot((float)dVar10,(float)dVar22);
    dVar12 = (double)(float)(dVar24 - dVar10);
    if (dVar10 - (double)(float)(dVar24 - dVar10) < 0.0) {
      dVar12 = dVar10;
    }
    dVar15 = (double)(float)(dVar18 - dVar10);
    if ((double)(float)(dVar18 - dVar10) - dVar12 < 0.0) {
      dVar15 = dVar12;
    }
    dVar12 = (double)(float)(dVar15 * dVar15);
    dVar14 = (double)(float)(dVar12 * (double)(float)(dVar12 * dVar15));
    dVar13 = (double)(float)(dVar12 * dVar14);
    iVar4 = fastfunc::FastDoubleToInt
                      ((double)(DAT_0071cd54 *
                               (float)((double)(float)(dVar12 * dVar13) * dVar23 +
                                      (double)(float)(dVar13 * dVar21 +
                                                     (double)(float)(dVar14 * dVar20 +
                                                                    (double)(float)((double)(float)(
                                                  dVar12 * dVar15) * dVar19 + dVar15))))));
    dVar10 = (double)(float)(dVar10 + dVar25);
    dVar12 = (double)(float)(dVar24 - dVar10);
    if (dVar10 - (double)(float)(dVar24 - dVar10) < 0.0) {
      dVar12 = dVar10;
    }
    dVar15 = (double)(float)(dVar18 - dVar10);
    if ((double)(float)(dVar18 - dVar10) - dVar12 < 0.0) {
      dVar15 = dVar12;
    }
    dVar12 = (double)(float)(dVar15 * dVar15);
    dVar13 = (double)(float)(dVar12 * (double)(float)(dVar12 * dVar15));
    dVar10 = (double)(float)(dVar12 * dVar13);
    iVar5 = fastfunc::FastDoubleToInt
                      (-(double)(DAT_0071cd58 *
                                (float)((double)(float)(dVar12 * dVar10) * dVar23 +
                                       (double)(float)(dVar10 * dVar21 +
                                                      (double)(float)(dVar13 * dVar20 +
                                                                     (double)(float)((double)(float)
                                                  (dVar12 * dVar15) * dVar19 + dVar15))))));
    dVar12 = (double)(float)(dVar24 - dVar11);
    if (dVar11 - (double)(float)(dVar24 - dVar11) < 0.0) {
      dVar12 = dVar11;
    }
    dVar10 = (double)(float)(dVar18 - dVar11);
    if ((double)(float)(dVar18 - dVar11) - dVar12 < 0.0) {
      dVar10 = dVar12;
    }
    dVar12 = (double)(float)(dVar10 * dVar10);
    dVar13 = (double)(float)(dVar12 * (double)(float)(dVar12 * dVar10));
    dVar15 = (double)(float)(dVar12 * dVar13);
    iVar6 = fastfunc::FastDoubleToInt
                      ((double)(DAT_0071cd54 *
                               (float)((double)(float)(dVar12 * dVar15) * dVar23 +
                                      (double)(float)(dVar15 * dVar21 +
                                                     (double)(float)(dVar13 * dVar20 +
                                                                    (double)(float)((double)(float)(
                                                  dVar12 * dVar10) * dVar19 + dVar10))))));
    dVar10 = (double)(float)(dVar11 + dVar25);
    dVar12 = (double)(float)(dVar24 - dVar10);
    if (dVar10 - (double)(float)(dVar24 - dVar10) < 0.0) {
      dVar12 = dVar10;
    }
    dVar11 = (double)(float)(dVar18 - dVar10);
    if ((double)(float)(dVar18 - dVar10) - dVar12 < 0.0) {
      dVar11 = dVar12;
    }
    dVar12 = (double)(float)(dVar11 * dVar11);
    dVar15 = (double)(float)(dVar12 * (double)(float)(dVar12 * dVar11));
    dVar10 = (double)(float)(dVar12 * dVar15);
    iVar7 = fastfunc::FastDoubleToInt
                      (-(double)(DAT_0071cd58 *
                                (float)((double)(float)(dVar12 * dVar10) * dVar23 +
                                       (double)(float)(dVar10 * dVar21 +
                                                      (double)(float)(dVar15 * dVar20 +
                                                                     (double)(float)((double)(float)
                                                  (dVar12 * dVar11) * dVar19 + dVar11))))));
    fastfunc::FastDoubleToInt
              ((double)(float)((double)(DAT_0071cd48 + (float)(longlong)iVar7) * dVar26));
    fastfunc::FastDoubleToInt((double)(DAT_0071cd44 + (float)(longlong)iVar6));
    fastfunc::FastDoubleToInt((double)(float)((double)DAT_0071cd48 * dVar26));
    fastfunc::FastDoubleToInt((double)DAT_0071cd44);
    fastfunc::FastDoubleToInt
              ((double)(float)((double)(DAT_0071cd48 + (float)(longlong)iVar5) * dVar26));
    fastfunc::FastDoubleToInt((double)(DAT_0071cd44 + (float)(longlong)iVar4));
    fastfunc::FastDoubleToInt((double)(float)((double)DAT_0071cd48 * dVar26));
    fastfunc::FastDoubleToInt((double)DAT_0071cd44);
    draw::DrawTexturedQuadHud(local_150,local_130,local_120,uVar3,1);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x20);
  dVar22 = 15.5;
  iVar8 = *(int *)((int)pvVar1 + 0x88);
  if ((int)(animationSpeed * 15.5) < iVar8) {
    dVar12 = (double)fastfunc::FastIntToDouble(iVar8 - (int)(animationSpeed * 15.5));
    fastfunc::FastLerpColor
              ((double)(float)(dVar12 / (double)(longlong)((double)animationSpeed * dVar22)),
               0x5000ffff,0x500000ff);
  }
  else {
    dVar12 = (double)fastfunc::FastIntToDouble(iVar8);
    fastfunc::FastLerpColor
              ((double)(float)(dVar12 / (double)(longlong)((double)animationSpeed * dVar22)),
               0x5000ff00,0x5000ffff);
  }
  dVar11 = 4.0;
  dVar10 = 0.0;
  dVar22 = (double)fastfunc::FastWrapRot((moby->rotation).z * 4.0,0.0);
  dVar12 = (double)fastfunc::FastAddRots((float)dVar22);
  dVar22 = (double)(float)(dVar24 - dVar12);
  if (dVar12 - (double)(float)(dVar24 - dVar12) < 0.0) {
    dVar22 = dVar12;
  }
  dVar15 = (double)(float)(dVar18 - dVar12);
  if ((double)(float)(dVar18 - dVar12) - dVar22 < 0.0) {
    dVar15 = dVar22;
  }
  dVar22 = (double)(float)(dVar15 * dVar15);
  dVar14 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar15));
  dVar13 = (double)(float)(dVar22 * dVar14);
  fastfunc::FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar22 * dVar13) * dVar23 +
                                             (double)(float)(dVar13 * dVar21 +
                                                            (double)(float)(dVar14 * dVar20 +
                                                                           (double)(float)((double)(
                                                  float)(dVar22 * dVar15) * dVar19 + dVar15)))) *
                                     DAT_0071cd74) * dVar26));
  dVar12 = (double)(float)(dVar12 + dVar25);
  dVar22 = (double)(float)(dVar24 - dVar12);
  if (dVar12 - (double)(float)(dVar24 - dVar12) < 0.0) {
    dVar22 = dVar12;
  }
  dVar15 = (double)(float)(dVar18 - dVar12);
  if ((double)(float)(dVar18 - dVar12) - dVar22 < 0.0) {
    dVar15 = dVar22;
  }
  dVar22 = (double)(float)(dVar15 * dVar15);
  dVar13 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar15));
  dVar12 = (double)(float)(dVar22 * dVar13);
  fastfunc::FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar22 * dVar12) * dVar23 +
                                             (double)(float)(dVar12 * dVar21 +
                                                            (double)(float)(dVar13 * dVar20 +
                                                                           (double)(float)((double)(
                                                  float)(dVar22 * dVar15) * dVar19 + dVar15)))) *
                                     DAT_0071cd70) * dVar26));
  dVar15 = 1.5707963705062866;
  dVar22 = (double)fastfunc::FastWrapRot((float)((double)(moby->rotation).z * dVar11),1.5707964);
  dVar12 = (double)fastfunc::FastAddRots((float)dVar22);
  dVar22 = (double)(float)(dVar24 - dVar12);
  if (dVar12 - (double)(float)(dVar24 - dVar12) < 0.0) {
    dVar22 = dVar12;
  }
  dVar13 = (double)(float)(dVar18 - dVar12);
  if ((double)(float)(dVar18 - dVar12) - dVar22 < 0.0) {
    dVar13 = dVar22;
  }
  dVar22 = (double)(float)(dVar13 * dVar13);
  dVar16 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar13));
  dVar14 = (double)(float)(dVar22 * dVar16);
  fastfunc::FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar22 * dVar14) * dVar23 +
                                             (double)(float)(dVar14 * dVar21 +
                                                            (double)(float)(dVar16 * dVar20 +
                                                                           (double)(float)((double)(
                                                  float)(dVar22 * dVar13) * dVar19 + dVar13)))) *
                                     DAT_0071cd74) * dVar26));
  dVar12 = (double)(float)(dVar12 + dVar25);
  dVar22 = (double)(float)(dVar24 - dVar12);
  if (dVar12 - (double)(float)(dVar24 - dVar12) < 0.0) {
    dVar22 = dVar12;
  }
  dVar13 = (double)(float)(dVar18 - dVar12);
  if ((double)(float)(dVar18 - dVar12) - dVar22 < 0.0) {
    dVar13 = dVar22;
  }
  dVar22 = (double)(float)(dVar13 * dVar13);
  dVar14 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar13));
  dVar12 = (double)(float)(dVar22 * dVar14);
  fastfunc::FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar22 * dVar12) * dVar23 +
                                             (double)(float)(dVar12 * dVar21 +
                                                            (double)(float)(dVar14 * dVar20 +
                                                                           (double)(float)((double)(
                                                  float)(dVar22 * dVar13) * dVar19 + dVar13)))) *
                                     DAT_0071cd70) * dVar26));
  dVar13 = -1.5707963705062866;
  dVar22 = (double)fastfunc::FastWrapRot((float)((double)(moby->rotation).z * dVar11),-1.5707964);
  dVar12 = (double)fastfunc::FastAddRots((float)dVar22);
  dVar22 = (double)(float)(dVar24 - dVar12);
  if (dVar12 - (double)(float)(dVar24 - dVar12) < 0.0) {
    dVar22 = dVar12;
  }
  dVar14 = (double)(float)(dVar18 - dVar12);
  if ((double)(float)(dVar18 - dVar12) - dVar22 < 0.0) {
    dVar14 = dVar22;
  }
  dVar22 = (double)(float)(dVar14 * dVar14);
  dVar17 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar14));
  dVar16 = (double)(float)(dVar22 * dVar17);
  fastfunc::FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar22 * dVar16) * dVar23 +
                                             (double)(float)(dVar16 * dVar21 +
                                                            (double)(float)(dVar17 * dVar20 +
                                                                           (double)(float)((double)(
                                                  float)(dVar22 * dVar14) * dVar19 + dVar14)))) *
                                     DAT_0071cd74) * dVar26));
  dVar12 = (double)(float)(dVar12 + dVar25);
  dVar22 = (double)(float)(dVar24 - dVar12);
  if (dVar12 - (double)(float)(dVar24 - dVar12) < 0.0) {
    dVar22 = dVar12;
  }
  dVar14 = (double)(float)(dVar18 - dVar12);
  if ((double)(float)(dVar18 - dVar12) - dVar22 < 0.0) {
    dVar14 = dVar22;
  }
  dVar22 = (double)(float)(dVar14 * dVar14);
  dVar16 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar14));
  dVar12 = (double)(float)(dVar22 * dVar16);
  fastfunc::FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar22 * dVar12) * dVar23 +
                                             (double)(float)(dVar12 * dVar21 +
                                                            (double)(float)(dVar16 * dVar20 +
                                                                           (double)(float)((double)(
                                                  float)(dVar22 * dVar14) * dVar19 + dVar14)))) *
                                     DAT_0071cd70) * dVar26));
  dVar14 = 3.1415927410125732;
  dVar22 = (double)fastfunc::FastWrapRot((float)((double)(moby->rotation).z * dVar11),3.1415927);
  dVar12 = (double)fastfunc::FastAddRots((float)dVar22);
  dVar22 = (double)(float)(dVar24 - dVar12);
  if (dVar12 - (double)(float)(dVar24 - dVar12) < 0.0) {
    dVar22 = dVar12;
  }
  dVar11 = (double)(float)(dVar18 - dVar12);
  if ((double)(float)(dVar18 - dVar12) - dVar22 < 0.0) {
    dVar11 = dVar22;
  }
  dVar22 = (double)(float)(dVar11 * dVar11);
  dVar17 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar11));
  dVar16 = (double)(float)(dVar22 * dVar17);
  fastfunc::FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar22 * dVar16) * dVar23 +
                                             (double)(float)(dVar16 * dVar21 +
                                                            (double)(float)(dVar17 * dVar20 +
                                                                           (double)(float)((double)(
                                                  float)(dVar22 * dVar11) * dVar19 + dVar11)))) *
                                     DAT_0071cd74) * dVar26));
  dVar12 = (double)(float)(dVar12 + dVar25);
  dVar22 = (double)(float)(dVar24 - dVar12);
  if (dVar12 - (double)(float)(dVar24 - dVar12) < 0.0) {
    dVar22 = dVar12;
  }
  dVar11 = (double)(float)(dVar18 - dVar12);
  if ((double)(float)(dVar18 - dVar12) - dVar22 < 0.0) {
    dVar11 = dVar22;
  }
  dVar22 = (double)(float)(dVar11 * dVar11);
  dVar16 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar11));
  dVar12 = (double)(float)(dVar22 * dVar16);
  fastfunc::FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar22 * dVar12) * dVar23 +
                                             (double)(float)(dVar12 * dVar21 +
                                                            (double)(float)(dVar16 * dVar20 +
                                                                           (double)(float)((double)(
                                                  float)(dVar22 * dVar11) * dVar19 + dVar11)))) *
                                     DAT_0071cd70) * dVar26));
  uVar3 = draw::GetEffectTex(DAT_0071cd68);
  draw::DrawTexturedQuadHud(local_150,local_130,local_120,uVar3,1);
  dVar11 = 8.0;
  dVar22 = (double)fastfunc::FastWrapRot(*(float *)((int)pvVar1 + 0x74) * 8.0,(float)dVar10);
  dVar12 = (double)fastfunc::FastAddRots((float)dVar22);
  dVar22 = (double)(float)(dVar24 - dVar12);
  if (dVar12 - (double)(float)(dVar24 - dVar12) < 0.0) {
    dVar22 = dVar12;
  }
  dVar10 = (double)(float)(dVar18 - dVar12);
  if ((double)(float)(dVar18 - dVar12) - dVar22 < 0.0) {
    dVar10 = dVar22;
  }
  dVar22 = (double)(float)(dVar10 * dVar10);
  dVar17 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar10));
  dVar16 = (double)(float)(dVar22 * dVar17);
  fastfunc::FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar22 * dVar16) * dVar23 +
                                             (double)(float)(dVar16 * dVar21 +
                                                            (double)(float)(dVar17 * dVar20 +
                                                                           (double)(float)((double)(
                                                  float)(dVar22 * dVar10) * dVar19 + dVar10)))) *
                                     DAT_0071cd74) * dVar26));
  dVar12 = (double)(float)(dVar12 + dVar25);
  dVar22 = (double)(float)(dVar24 - dVar12);
  if (dVar12 - (double)(float)(dVar24 - dVar12) < 0.0) {
    dVar22 = dVar12;
  }
  dVar10 = (double)(float)(dVar18 - dVar12);
  if ((double)(float)(dVar18 - dVar12) - dVar22 < 0.0) {
    dVar10 = dVar22;
  }
  dVar22 = (double)(float)(dVar10 * dVar10);
  dVar16 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar10));
  dVar12 = (double)(float)(dVar22 * dVar16);
  fastfunc::FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar22 * dVar12) * dVar23 +
                                             (double)(float)(dVar12 * dVar21 +
                                                            (double)(float)(dVar16 * dVar20 +
                                                                           (double)(float)((double)(
                                                  float)(dVar22 * dVar10) * dVar19 + dVar10)))) *
                                     DAT_0071cd70) * dVar26));
  dVar22 = (double)fastfunc::FastWrapRot
                             ((float)((double)*(float *)((int)pvVar1 + 0x74) * dVar11),(float)dVar15
                             );
  dVar12 = (double)fastfunc::FastAddRots((float)dVar22);
  dVar22 = (double)(float)(dVar24 - dVar12);
  if (dVar12 - (double)(float)(dVar24 - dVar12) < 0.0) {
    dVar22 = dVar12;
  }
  dVar10 = (double)(float)(dVar18 - dVar12);
  if ((double)(float)(dVar18 - dVar12) - dVar22 < 0.0) {
    dVar10 = dVar22;
  }
  dVar22 = (double)(float)(dVar10 * dVar10);
  dVar16 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar10));
  dVar15 = (double)(float)(dVar22 * dVar16);
  fastfunc::FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar22 * dVar15) * dVar23 +
                                             (double)(float)(dVar15 * dVar21 +
                                                            (double)(float)(dVar16 * dVar20 +
                                                                           (double)(float)((double)(
                                                  float)(dVar22 * dVar10) * dVar19 + dVar10)))) *
                                     DAT_0071cd74) * dVar26));
  dVar12 = (double)(float)(dVar12 + dVar25);
  dVar22 = (double)(float)(dVar24 - dVar12);
  if (dVar12 - (double)(float)(dVar24 - dVar12) < 0.0) {
    dVar22 = dVar12;
  }
  dVar10 = (double)(float)(dVar18 - dVar12);
  if ((double)(float)(dVar18 - dVar12) - dVar22 < 0.0) {
    dVar10 = dVar22;
  }
  dVar22 = (double)(float)(dVar10 * dVar10);
  dVar15 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar10));
  dVar12 = (double)(float)(dVar22 * dVar15);
  fastfunc::FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar22 * dVar12) * dVar23 +
                                             (double)(float)(dVar12 * dVar21 +
                                                            (double)(float)(dVar15 * dVar20 +
                                                                           (double)(float)((double)(
                                                  float)(dVar22 * dVar10) * dVar19 + dVar10)))) *
                                     DAT_0071cd70) * dVar26));
  dVar22 = (double)fastfunc::FastWrapRot
                             ((float)((double)*(float *)((int)pvVar1 + 0x74) * dVar11),(float)dVar13
                             );
  dVar12 = (double)fastfunc::FastAddRots((float)dVar22);
  dVar22 = (double)(float)(dVar24 - dVar12);
  if (dVar12 - (double)(float)(dVar24 - dVar12) < 0.0) {
    dVar22 = dVar12;
  }
  dVar10 = (double)(float)(dVar18 - dVar12);
  if ((double)(float)(dVar18 - dVar12) - dVar22 < 0.0) {
    dVar10 = dVar22;
  }
  dVar22 = (double)(float)(dVar10 * dVar10);
  dVar13 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar10));
  dVar15 = (double)(float)(dVar22 * dVar13);
  fastfunc::FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar22 * dVar15) * dVar23 +
                                             (double)(float)(dVar15 * dVar21 +
                                                            (double)(float)(dVar13 * dVar20 +
                                                                           (double)(float)((double)(
                                                  float)(dVar22 * dVar10) * dVar19 + dVar10)))) *
                                     DAT_0071cd74) * dVar26));
  dVar12 = (double)(float)(dVar12 + dVar25);
  dVar22 = (double)(float)(dVar24 - dVar12);
  if (dVar12 - (double)(float)(dVar24 - dVar12) < 0.0) {
    dVar22 = dVar12;
  }
  dVar10 = (double)(float)(dVar18 - dVar12);
  if ((double)(float)(dVar18 - dVar12) - dVar22 < 0.0) {
    dVar10 = dVar22;
  }
  dVar22 = (double)(float)(dVar10 * dVar10);
  dVar15 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar10));
  dVar12 = (double)(float)(dVar22 * dVar15);
  fastfunc::FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar22 * dVar12) * dVar23 +
                                             (double)(float)(dVar12 * dVar21 +
                                                            (double)(float)(dVar15 * dVar20 +
                                                                           (double)(float)((double)(
                                                  float)(dVar22 * dVar10) * dVar19 + dVar10)))) *
                                     DAT_0071cd70) * dVar26));
  dVar22 = (double)fastfunc::FastWrapRot
                             ((float)((double)*(float *)((int)pvVar1 + 0x74) * dVar11),(float)dVar14
                             );
  dVar12 = (double)fastfunc::FastAddRots((float)dVar22);
  dVar22 = (double)(float)(dVar24 - dVar12);
  if (dVar12 - (double)(float)(dVar24 - dVar12) < 0.0) {
    dVar22 = dVar12;
  }
  dVar10 = (double)(float)(dVar18 - dVar12);
  if ((double)(float)(dVar18 - dVar12) - dVar22 < 0.0) {
    dVar10 = dVar22;
  }
  dVar22 = (double)(float)(dVar10 * dVar10);
  dVar15 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar10));
  dVar11 = (double)(float)(dVar22 * dVar15);
  fastfunc::FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar22 * dVar11) * dVar23 +
                                             (double)(float)(dVar11 * dVar21 +
                                                            (double)(float)(dVar15 * dVar20 +
                                                                           (double)(float)((double)(
                                                  float)(dVar22 * dVar10) * dVar19 + dVar10)))) *
                                     DAT_0071cd74) * dVar26));
  dVar25 = (double)(float)(dVar12 + dVar25);
  dVar22 = (double)(float)(dVar24 - dVar25);
  if (dVar25 - (double)(float)(dVar24 - dVar25) < 0.0) {
    dVar22 = dVar25;
  }
  dVar24 = (double)(float)(dVar18 - dVar25);
  if ((double)(float)(dVar18 - dVar25) - dVar22 < 0.0) {
    dVar24 = dVar22;
  }
  dVar22 = (double)(float)(dVar24 * dVar24);
  dVar25 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar24));
  dVar18 = (double)(float)(dVar22 * dVar25);
  fastfunc::FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar22 * dVar18) * dVar23 +
                                             (double)(float)(dVar18 * dVar21 +
                                                            (double)(float)(dVar25 * dVar20 +
                                                                           (double)(float)((double)(
                                                  float)(dVar22 * dVar24) * dVar19 + dVar24)))) *
                                     DAT_0071cd70) * dVar26));
  uVar3 = draw::GetEffectTex(DAT_0071cd6c);
  draw::DrawTexturedQuadHud(local_150,local_130,local_120,uVar3,1);
  return;
}



//==== 00017ac0  ns=mobyupdate_unsorted  size=0x80
// sig: void Moby1267_DrawDeathFade(MobyInstance * moby)
// callers(0): 
// callees(1): 0006b5dc draw::DrawScreenOverlay

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [boot] Draw callback (PTR at 0x703810): red screen tint fading with pVars->deathTimer. */

void mobyupdate_unsorted::Moby1267_DrawDeathFade(MobyInstance *moby)

{
  int iVar1;
  short sVar2;
  
  sVar2 = *(short *)((int)moby->pVar + 0xac);
  iVar1 = (int)(animationSpeed * 80.5);
  if (sVar2 < iVar1) {
    draw::DrawScreenOverlay(0xaa,0,0,((iVar1 - sVar2) * 0x50) / iVar1);
  }
  return;
}



//==== 00017b40  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_MOBY1274(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_MOBY1274(void)

{
  DAT_0071cf18 = 0x10000;
  return;
}



//==== 00017b78  ns=mobyupdate_helpers  size=0x424
// sig: undefined M1274_00017b78(void)
// callers(2): 00018238 mobyupdate_helpers::M1274_00018238; 00019cb8 mobyupdate_unsorted::UpdateMoby_1274
// callees(4): 000efb38 mobyfunc::DeleteMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 0010a050 mobyutil::AccelDeltAng; 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M1274_00017b78(MobyInstance *param_1)

{
  float fVar1;
  MOBY_OCLASSES MVar2;
  int iVar3;
  f32 fVar4;
  uint uVar5;
  int iVar6;
  MobyInstance *moby;
  int *piVar7;
  void *pvVar8;
  void *pvVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  
  pvVar8 = param_1->pVar;
  dVar11 = 0.3490658402442932;
  uVar12 = 0x3ff921fb60000000;
  iVar6 = 0;
  uVar13 = 0x3f60624de0000000;
  uVar14 = 0x3fd3333340000000;
  piVar7 = &DAT_0092713c;
  uVar15 = 0;
  uVar16 = 0xbff921fb60000000;
  dVar17 = -4.0;
  dVar18 = -0.8726646304130554;
  pvVar9 = pvVar8;
  do {
    iVar3 = *piVar7;
    if (iVar3 != 0) {
      moby = param_1;
      if (iVar6 != 0x11) {
        if (iVar3 == -1) goto LAB_00017f28;
        moby = MobyInstance + iVar3;
      }
      if (iVar6 == 0x11) {
        if (DAT_00927190 == -1.0) {
          DAT_00927190 = (moby->pos).x;
          DAT_00927194 = (moby->pos).y;
          DAT_00927198 = (moby->pos).z;
          DAT_0092719c = (moby->pos).w;
          DAT_009271a0 = (moby->rotation).x;
          DAT_009271a4 = (moby->rotation).y;
          DAT_009271a8 = (moby->rotation).z;
          DAT_009271ac = (moby->rotation).w;
        }
        DAT_009271b0 = (moby->pos).x;
        DAT_009271b4 = (moby->pos).y;
        DAT_009271b8 = (moby->pos).z;
        DAT_009271bc = (moby->pos).w;
        DAT_009271c0 = (moby->rotation).x;
        DAT_009271c4 = (moby->rotation).y;
        DAT_009271c8 = (moby->rotation).z;
        DAT_009271cc = (moby->rotation).w;
        (moby->pos).x = DAT_00927190;
        (moby->pos).y = DAT_00927194;
        (moby->pos).z = DAT_00927198;
        (moby->pos).w = DAT_0092719c;
        (moby->rotation).x = DAT_009271a0;
        (moby->rotation).y = DAT_009271a4;
        (moby->rotation).z = DAT_009271a8;
        (moby->rotation).w = DAT_009271ac;
      }
      fVar4 = (moby->pos).z;
      uVar5 = (int)fVar4 >> 0x1f;
      if ((int)((uVar5 >> 1 ^ (uint)fVar4) - uVar5) < 0x41a00000) {
        if (iVar6 == 0x11) {
          return;
        }
        mobyfunc::DeleteMoby(moby);
        *piVar7 = -1;
      }
      fVar1 = *(float *)((int)pvVar9 + 0x338) - *(float *)((int)pvVar8 + 0x570);
      *(float *)((int)pvVar9 + 0x338) = fVar1;
      MVar2 = moby->oClass;
      (moby->pos).z = (moby->pos).z + fVar1;
      if (MVar2 == PLANETBUSTER_MAXIMUS_PART_0500) {
        dVar10 = (double)fastfunc::FastWrapRot
                                   ((moby->rotation).x,
                                    (float)((double)mobyutil::g_FrameTime * dVar11));
        (moby->rotation).x = (float)dVar10;
        mobyutil::AccelDeltAng(uVar12,uVar13,uVar14,uVar15,&(moby->rotation).y);
      }
      else if (MVar2 == PLANETBUSTER_MAXIMUS_PART_04FD) {
        dVar10 = (double)fastfunc::FastWrapRot((moby->rotation).x,*(float *)((int)pvVar9 + 0x450));
        (moby->rotation).x = (float)dVar10;
        mobyutil::AccelDeltAng
                  (uVar16,(double)*(float *)((int)pvVar9 + 0x45c),uVar14,uVar15,&(moby->rotation).y)
        ;
      }
      else if (MVar2 == PLANETBUSTER_MAXIMUS_PART_04FA) {
        dVar10 = (double)fastfunc::FastWrapRot
                                   ((moby->rotation).x,
                                    (float)((double)mobyutil::g_FrameTime * dVar18));
        (moby->rotation).x = (float)dVar10;
        dVar10 = (double)fastfunc::FastWrapRot((moby->rotation).y,*(float *)((int)pvVar9 + 0x454));
        (moby->rotation).y = (float)dVar10;
        (moby->pos).y = (float)((double)mobyutil::g_FrameTime * dVar17 + (double)(moby->pos).y);
      }
      else {
        fVar1 = (moby->rotation).x;
        (moby->pos).y = (float)((double)mobyutil::g_FrameTime * dVar17 + (double)(moby->pos).y);
        dVar10 = (double)fastfunc::FastWrapRot(fVar1,*(float *)((int)pvVar9 + 0x450));
        (moby->rotation).x = (float)dVar10;
        dVar10 = (double)fastfunc::FastWrapRot((moby->rotation).y,*(float *)((int)pvVar9 + 0x454));
        (moby->rotation).y = (float)dVar10;
      }
      if (iVar6 == 0x11) {
        DAT_00927190 = (moby->pos).x;
        DAT_00927194 = (moby->pos).y;
        DAT_00927198 = (moby->pos).z;
        DAT_0092719c = (moby->pos).w;
        DAT_009271a0 = (moby->rotation).x;
        DAT_009271a4 = (moby->rotation).y;
        DAT_009271a8 = (moby->rotation).z;
        DAT_009271ac = (moby->rotation).w;
      }
      mobyfunc::UpdateMobyTransform(moby);
    }
LAB_00017f28:
    iVar6 = iVar6 + 1;
    piVar7 = piVar7 + 1;
    pvVar8 = (void *)((int)pvVar8 + 4);
    pvVar9 = (void *)((int)pvVar9 + 0x10);
    if (0x11 < iVar6) {
      return;
    }
  } while( true );
}



//==== 00017fc8  ns=mobyupdate_helpers  size=0x18c
// sig: undefined M1274_00017fc8(void)
// callers(2): 00018238 mobyupdate_helpers::M1274_00018238; 00019cb8 mobyupdate_unsorted::UpdateMoby_1274
// callees(2): 000fcbe8 mobyutil::MB_randRangeFloat; 000fe4f0 mobyutil::MB_randRangeSigned

void mobyupdate_helpers::M1274_00017fc8(MobyInstance *param_1,longlong param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  
  pvVar1 = param_1->pVar;
  if ((int)param_2 != 0x11) {
    param_1 = MobyInstance + *(int *)((int)&DAT_0092713c + (int)(param_2 << 2));
  }
  dVar4 = (double)mobyutil::MB_randRangeFloat(DAT_0071f418 * 3.7,DAT_0071f418 * 5.0);
  iVar3 = (int)(param_2 << 2);
  *(float *)((int)pvVar1 + iVar3 + 0x570) = (float)dVar4;
  dVar5 = 0.05235987901687622;
  dVar4 = (double)mobyutil::MB_randRangeSigned
                            ((double)(mobyutil::g_FrameTime * 0.05235988),
                             (double)(mobyutil::g_FrameTime * 0.13962634));
  iVar2 = (int)(param_2 << 4);
  *(float *)((int)pvVar1 + iVar2 + 0x450) = (float)dVar4;
  dVar4 = (double)mobyutil::MB_randRangeSigned
                            ((double)(float)((double)mobyutil::g_FrameTime * dVar5),
                             (double)(float)((double)mobyutil::g_FrameTime * 0.1745329201221466));
  *(float *)((int)pvVar1 + iVar2 + 0x454) = (float)dVar4;
  if (param_1->oClass == PLANETBUSTER_MAXIMUS_PART_04FD) {
    dVar4 = (double)mobyutil::MB_randRangeFloat(0.001,0.0045);
    *(float *)((int)pvVar1 + iVar2 + 0x45c) = (float)dVar4;
    dVar4 = (double)mobyutil::MB_randRangeFloat(DAT_0071f418 * 5.5,DAT_0071f418 * 9.0);
    *(float *)((int)pvVar1 + iVar3 + 0x570) = (float)dVar4;
  }
  else if (param_1->oClass == PLANETBUSTER_MAXIMUS_PART_0500) {
    *(float *)((int)pvVar1 + iVar3 + 0x570) = DAT_0071f418 * 13.0;
  }
  return;
}



//==== 00018238  ns=mobyupdate_helpers  size=0x1788
// sig: undefined M1274_00018238(void)
// callers(1): 00019cb8 mobyupdate_unsorted::UpdateMoby_1274
// callees(24): 00017b78 mobyupdate_helpers::M1274_00017b78; 00017fc8 mobyupdate_helpers::M1274_00017fc8; 0001b100 mobyupdate_helpers::M184_0001b100; 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 000fe4f0 mobyutil::MB_randRangeSigned; 000fe610 mobyutil::MB_SphericalToVector; 0010675c mobyutil::MB_damage; 00109ec0 mobyutil::DeltAng; 0010a050 mobyutil::AccelDeltAng; 001167c8 mobyutil::MB_UpdateManipulatorRot; 00121740 partupd::SpawnPart_4; 00126dd8 partupd::SpawnPart_22; 0015d12c sound::PlayMobySound; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 005000b4 fastfunc::FastDecTimerU8; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M1274_00018238(MobyInstance *param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  ulonglong *puVar10;
  bool bVar11;
  float fVar12;
  ulonglong uVar13;
  int iVar15;
  longlong lVar14;
  uint uVar16;
  int iVar17;
  short sVar19;
  int *piVar18;
  ulonglong uVar20;
  float *pfVar22;
  longlong lVar21;
  longlong lVar23;
  undefined4 *puVar24;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  void *pvVar25;
  ulonglong unaff_r20;
  int iVar26;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  MobyInstance *pMVar27;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong uVar28;
  int iVar29;
  ulonglong unaff_r28;
  MobyInstance *pMoby;
  ulonglong unaff_r29;
  uint uVar30;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar31;
  undefined8 uVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  ulonglong in_f14;
  ulonglong in_f15;
  ulonglong in_f16;
  ulonglong in_f17;
  ulonglong in_f18;
  ulonglong in_f19;
  double dVar45;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  double dVar46;
  double dVar47;
  ulonglong in_f25;
  double dVar48;
  double dVar49;
  ulonglong in_f26;
  double dVar50;
  double dVar51;
  ulonglong in_f27;
  double dVar52;
  double dVar53;
  ulonglong in_f28;
  double dVar54;
  ulonglong in_f29;
  double dVar55;
  double dVar56;
  ulonglong in_f30;
  double dVar57;
  ulonglong in_f31;
  double dVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar64;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar1 = uVar13 - 0x2b0;
  puVar10 = (ulonglong *)lVar1;
  *puVar10 = uVar13;
  puVar10[0x58] = in_LR;
  puVar10[0x44] = in_f14;
  puVar10[0x45] = in_f15;
  puVar10[0x46] = in_f16;
  puVar10[0x47] = in_f17;
  puVar10[0x48] = in_f18;
  puVar10[0x49] = in_f19;
  puVar10[0x4a] = in_f20;
  puVar10[0x4b] = in_f21;
  puVar10[0x4c] = in_f22;
  puVar10[0x4d] = in_f23;
  puVar10[0x4e] = in_f24;
  puVar10[0x4f] = in_f25;
  puVar10[0x50] = in_f26;
  puVar10[0x51] = in_f27;
  puVar10[0x52] = in_f28;
  puVar10[0x53] = in_f29;
  puVar10[0x54] = in_f30;
  puVar10[0x55] = in_f31;
  puVar10[0x41] = unaff_r29;
  puVar10[0x42] = unaff_r30;
  uVar30 = 0;
  puVar10[0x43] = unaff_r31;
  pvVar5 = param_1->pVar;
  puVar10[0x37] = unaff_r19;
  puVar10[0x34] = unaff_r16;
  puVar10[0x40] = unaff_r28;
  puVar10[0x3f] = unaff_r27;
  puVar10[0x3e] = unaff_r26;
  puVar10[0x3d] = unaff_r25;
  puVar10[0x3c] = unaff_r24;
  puVar10[0x3b] = unaff_r23;
  puVar10[0x3a] = unaff_r22;
  puVar10[0x39] = unaff_r21;
  puVar10[0x38] = unaff_r20;
  puVar10[0x36] = unaff_r18;
  puVar10[0x35] = unaff_r17;
  iVar26 = 0;
  pvVar25 = pvVar5;
  do {
    if (*(int *)((int)pvVar25 + 0x5d0) != -1) {
      iVar15 = *(int *)((int)pvVar25 + 0x5d0) * 0x30;
      pMoby = MobyInstance + *(int *)((int)pvVar5 + iVar15 + 0x20);
      fVar64 = (pMoby->pos).y - GameCamera.posY;
      fVar3 = (pMoby->pos).x - GameCamera.posX;
      dVar58 = 0.699999988079071;
      dVar57 = 1.5;
      pvVar6 = pMoby->pVar;
      uVar28 = ZEXT48(pvVar6);
      fVar3 = SQRT(fVar3 * fVar3 + fVar64 * fVar64);
      fVar64 = (GameCamera.posZ - 0.7) - ((pMoby->pos).z + 1.5);
      fVar2 = ABS(fVar64);
      *(float *)((int)puVar10 + 0x11c) = fVar64;
      fVar4 = ABS(fVar3);
      *(float *)(puVar10 + 0x23) = fVar3;
      *(float *)(puVar10 + 0x24) = fVar4 - fVar2;
      dVar48 = 0.0;
      dVar55 = 0.7853981852531433;
      uVar20 = (ulonglong)(*(uint *)(puVar10 + 0x23) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar10 + 0x24) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar10 + 0x11c) >> 0x1d) & 4;
      fVar64 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
      fVar3 = ABS(*(float *)(puVar10 + 0x23));
      if (*(float *)(puVar10 + 0x24) - 0.0 < 0.0) {
        fVar3 = fVar2;
      }
      fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
      fVar12 = ABS(*(float *)((int)puVar10 + 0x11c));
      if (*(float *)(puVar10 + 0x24) - 0.0 < 0.0) {
        fVar12 = fVar4;
      }
      dVar33 = dVar48;
      if (0.0 < fVar3) {
        lVar14 = uVar13 - 0x2a0;
        lVar21 = uVar13 - 0x14c;
        lVar23 = uVar13 - 0x13c;
        lVar31 = 2;
        fVar3 = (fVar12 - fVar3) / (fVar12 + fVar3);
        fVar4 = fVar3 * fVar3;
        *(float *)(puVar10 + 0x2e) = fVar3;
        *(float *)(puVar10 + 0x2d) = fVar3;
        *(float *)((int)puVar10 + 0x16c) = fVar3;
        *(float *)((int)puVar10 + 0x164) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)(puVar10 + 0x2d) = *(float *)(puVar10 + 0x2d) * fVar4;
        *(float *)((int)puVar10 + 0x16c) = *(float *)((int)puVar10 + 0x16c) * fVar3;
        *(float *)(puVar10 + 0x2e) = *(float *)(puVar10 + 0x2e) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar14 + 0x164) = *(float *)((int)lVar14 + 0x154) * fVar3 * fVar3;
          iVar17 = (int)lVar21;
          lVar14 = lVar14 + 8;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
          lVar23 = lVar23 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar23 = uVar13 - 0x14c;
        pfVar22 = (float *)&DAT_007358e0;
        lVar14 = lVar1;
        lVar21 = lVar23;
        do {
          fVar3 = *pfVar22;
          fVar4 = pfVar22[1];
          pfVar22 = pfVar22 + 2;
          *(float *)((int)lVar14 + 0x164) = *(float *)((int)lVar14 + 0x164) * fVar3;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar4;
          lVar21 = lVar21 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar21 = 2;
        lVar14 = lVar1;
        do {
          iVar17 = (int)lVar14;
          lVar14 = lVar14 + 0x10;
          iVar29 = (int)lVar23;
          lVar23 = lVar23 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar17 + 0x164)) +
                            *(float *)(iVar29 + 4) + *(float *)(iVar29 + 8) +
                           *(float *)(iVar29 + 0xc));
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar64 + fVar2);
      }
      *(float *)((int)pvVar6 + 0x60) = (float)dVar33;
      dVar46 = 0.30000001192092896;
      mobyutil::MB_UpdateManipulatorRot
                ((double)(DAT_0071f40c * 0.008),(double)(DAT_0071f40c * 0.3),pMoby,uVar28,0);
      fVar64 = g_heroPosition.x - (pMoby->pos).x;
      fVar3 = g_heroPosition.y - (pMoby->pos).y;
      dVar37 = ABS((double)fVar64);
      dVar38 = ABS((double)fVar3);
      *(float *)((int)puVar10 + 0x10c) = fVar64;
      *(float *)(puVar10 + 0x22) = fVar3;
      *(float *)((int)puVar10 + 0x114) = (float)(dVar37 - dVar38);
      uVar16 = *(uint *)((int)puVar10 + 0x114);
      uVar20 = (ulonglong)(*(uint *)((int)puVar10 + 0x10c) >> 0x1c) & 8 |
               (ulonglong)(uVar16 >> 0x1e) & 2 | (ulonglong)(*(uint *)(puVar10 + 0x22) >> 0x1d) & 4;
      dVar33 = ABS((double)*(float *)((int)puVar10 + 0x10c));
      if ((double)*(float *)((int)puVar10 + 0x114) - dVar48 < 0.0) {
        dVar33 = dVar38;
      }
      fVar64 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
      dVar38 = ABS((double)*(float *)(puVar10 + 0x22));
      if ((double)*(float *)((int)puVar10 + 0x114) - dVar48 < 0.0) {
        dVar38 = dVar37;
      }
      fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
      dVar37 = dVar48;
      if (dVar48 < dVar33) {
        lVar14 = uVar13 - 0x2a0;
        lVar23 = uVar13 - 0x15c;
        lVar21 = uVar13 - 0x16c;
        lVar31 = 2;
        fVar2 = (float)(dVar38 - dVar33) / (float)(dVar38 + dVar33);
        fVar4 = fVar2 * fVar2;
        *(float *)(puVar10 + 0x2a) = fVar2;
        *(float *)(puVar10 + 0x29) = fVar2;
        *(float *)((int)puVar10 + 0x14c) = fVar2;
        *(float *)((int)puVar10 + 0x144) = fVar2;
        fVar2 = fVar4 * fVar4;
        *(float *)(puVar10 + 0x29) = *(float *)(puVar10 + 0x29) * fVar4;
        *(float *)((int)puVar10 + 0x14c) = *(float *)((int)puVar10 + 0x14c) * fVar2;
        *(float *)(puVar10 + 0x2a) = *(float *)(puVar10 + 0x2a) * fVar2 * fVar4;
        do {
          *(float *)((int)lVar14 + 0x144) = *(float *)((int)lVar14 + 0x134) * fVar2 * fVar2;
          iVar17 = (int)lVar21;
          lVar21 = lVar21 + 8;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)(iVar17 + 4) * fVar2 * fVar2;
          lVar23 = lVar23 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar23 = uVar13 - 0x16c;
        pfVar22 = (float *)&DAT_007358e0;
        lVar14 = lVar1;
        lVar21 = lVar23;
        do {
          fVar2 = *pfVar22;
          fVar4 = pfVar22[1];
          pfVar22 = pfVar22 + 2;
          *(float *)((int)lVar14 + 0x144) = *(float *)((int)lVar14 + 0x144) * fVar2;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar4;
          lVar21 = lVar21 + 8;
          uVar16 = (uint)lVar21;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar21 = 2;
        lVar14 = lVar1;
        dVar33 = dVar48;
        do {
          iVar17 = (int)lVar14;
          iVar29 = (int)lVar23;
          lVar14 = lVar14 + 0x10;
          lVar23 = lVar23 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar17 + 0x144)) +
                            *(float *)(iVar29 + 4) + *(float *)(iVar29 + 8) +
                           *(float *)(iVar29 + 0xc));
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        dVar37 = (double)((float)(dVar33 + dVar55) * fVar64 + fVar3);
      }
      uVar32 = fastfunc::FastWrapRot((float)dVar37,-1.5707964);
      dVar33 = (double)fastfunc::FastDiffRots(uVar32,(double)(param_1->rotation).z);
      if (*(short *)((int)pvVar6 + 0x90) == 0) {
        puVar10[0x31] = (longlong)(int)uVar30;
        fVar64 = mobyutil::DeltAng((float)dVar33,
                                   mobyutil::g_FrameTime * 0.5235988 +
                                   mobyutil::g_FrameTime * 0.17453292 *
                                   (float)(longlong)puVar10[0x31],
                                   (float *)((int)pvVar5 + iVar15 + 0x18),0x20000,uVar16,0);
        if (fVar64 < 0.08726646) {
          *(undefined2 *)((int)pvVar6 + 0x90) = 1;
          *(undefined4 *)((int)pvVar6 + 0x8c) = 0x3f800000;
          if (uVar30 != (((int)uVar30 >> 1) + (uint)((int)uVar30 < 0 && (uVar30 & 1) != 0)) * 2) {
            *(undefined4 *)((int)pvVar6 + 0x8c) = 0xbf800000;
          }
        }
      }
      else {
        uVar32 = fastfunc::FastWrapRot((float)dVar33,*(float *)((int)pvVar6 + 0x8c) * 0.55850536);
        puVar10[0x31] = (longlong)(int)uVar30;
        iVar17 = (int)pvVar5 + iVar15 + 0x18;
        dVar37 = (double)mobyutil::AccelDeltAng
                                   (uVar32,(double)(float)((double)DAT_0071f40c *
                                                          0.02199999988079071),
                                    (double)(float)((double)DAT_0071f40c * dVar46),
                                    (double)(mobyutil::g_FrameTime * 0.2617994 +
                                            mobyutil::g_FrameTime * 0.05235988 *
                                            (float)(longlong)puVar10[0x31]),iVar17,iVar17,
                                    uVar28 + 0x94);
        if (ABS(dVar37) < 0.01745329238474369) {
          *(float *)((int)pvVar6 + 0x8c) = -*(float *)((int)pvVar6 + 0x8c);
        }
      }
      iVar17 = DAT_00927138;
      fVar64 = (param_1->pos).y - g_heroPosition.y;
      bVar11 = false;
      fVar3 = (param_1->pos).x - g_heroPosition.x;
      fVar2 = ABS(g_heroPosition.z - (param_1->pos).z);
      fVar64 = SQRT(fVar3 * fVar3 + fVar64 * fVar64);
      puVar10[0x31] = (longlong)(int)(animationSpeed * 1200.5);
      if (((*(int *)((int)puVar10 + 0x18c) < iVar17) && (fVar64 < 80.0)) && (fVar2 < 4.0)) {
        bVar11 = true;
      }
      if ((90.0 < fVar64) || (7.0 < fVar2)) {
        DAT_00927138 = 0;
      }
      if ((DAT_00927118 != 0 || bVar11) && (0 < *(int *)((int)pvVar6 + 0x80))) {
        fastfunc::FastDecTimerS16(uVar28 + 0x98);
        fastfunc::FastDecTimerS16(uVar28 + 0x9c);
        if (*(short *)((int)pvVar6 + 0x98) == 0) {
          dVar33 = (double)fastfunc::FastSubRots
                                     (*(float *)((int)pvVar5 + iVar15 + 0x18),(float)dVar33);
          if (dVar33 < 0.06981316953897476) {
            auVar59 = ZEXT416(0xffffffff);
            auVar59 = auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60;
            auVar60 = vectorShiftLeftIntegerWord(auVar59,auVar59);
            auVar59 = loadVectorLeftIndexed(0x54,0x18154);
            auVar61 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar59 = auVar59 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar59 = vectorMultiplyAddFloatingPoint
                                (auVar61,auVar59 | auVar59 << 0x20 | auVar59 << 0x40 |
                                         auVar59 << 0x60,auVar60);
            auVar59 = vectorConvertToSignedFixedPointWordSaturate(auVar59,0);
            auVar59 = vectorSplatHalfWord(auVar59,1);
            uVar9 = storeVectorElementHalfWordIndexed(auVar59,0x9e,uVar28);
            *(undefined2 *)((int)pvVar6 + 0x9e) = uVar9;
          }
          iVar15 = fastfunc::FastDecTimerS16(uVar28 + 0x9e);
          if (iVar15 == 0) {
            iVar15 = fastfunc::FastDecTimerU8(uVar28 + 0x92);
            if ((iVar15 == 0) && (iVar15 = fastfunc::FastDecTimerU8(uVar28 + 0x93), iVar15 != 0)) {
              sound::PlayMobySound(0,0,pMoby);
              auVar59 = ZEXT416(0xffffffff);
              auVar59 = auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60;
              auVar60 = vectorShiftLeftIntegerWord(auVar59,auVar59);
              auVar59 = loadVectorLeftIndexed(0x58,0x18154);
              auVar61 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar59 = auVar59 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar59 = vectorMultiplyAddFloatingPoint
                                  (auVar61,auVar59 | auVar59 << 0x20 | auVar59 << 0x40 |
                                           auVar59 << 0x60,auVar60);
              auVar59 = vectorConvertToSignedFixedPointWordSaturate(auVar59,0);
              auVar59 = auVar59 >> 0x60 & (undefined1  [16])0xff;
              uVar8 = storeVectorElementByteIndexed
                                (auVar59 | auVar59 << 8 | auVar59 << 0x10 | auVar59 << 0x18 |
                                 auVar59 << 0x20 | auVar59 << 0x28 | auVar59 << 0x30 |
                                 auVar59 << 0x38 | auVar59 << 0x40 | auVar59 << 0x48 |
                                 auVar59 << 0x50 | auVar59 << 0x58 | auVar59 << 0x60 |
                                 auVar59 << 0x68 | auVar59 << 0x70 | auVar59 << 0x78,0x93,uVar28);
              *(undefined1 *)((int)pvVar6 + 0x93) = uVar8;
            }
            iVar15 = fastfunc::FastDecTimerS16(uVar28 + 0x9c);
            if (iVar15 != 0) {
              mobyfunc::GetBonePosition
                        (pMoby,(longlong)*(short *)((int)pvVar6 + 0x9a) + 1,uVar13 - 0x240);
              *(short *)((int)pvVar6 + 0x9a) =
                   (short)((ulonglong)(LZCOUNT((uint)*(ushort *)((int)pvVar6 + 0x9a)) << 0x20) >>
                          0x25);
              dVar33 = (double)fastfunc::FastWrapRot((pMoby->rotation).z,1.5707964);
              if (DAT_00927118 == 0) {
                dVar52 = (double)hero::g_heroCGPos;
                dVar50 = (double)DAT_00969db4;
                dVar38 = (double)DAT_00969db8;
                dVar37 = (double)mobyutil::MB_randRangeSigned(dVar48,0x3fe0000000000000);
              }
              else {
                dVar52 = (double)GameCamera.posX;
                dVar50 = (double)GameCamera.posY;
                dVar38 = (double)GameCamera.posZ;
                dVar37 = (double)mobyutil::MB_randRangeFloat(-1.5,(float)dVar46);
              }
              dVar38 = (double)(float)(dVar38 + dVar37);
              iVar15 = DAT_00927130 + -3;
              puVar10[0x31] = (longlong)(int)(animationSpeed * 5.5);
              iVar15 = iVar15 + ((uint)((longlong)*(int *)((int)puVar10 + 0x18c) - (longlong)iVar15
                                       >> 0x3f) & *(int *)((int)puVar10 + 0x18c) - iVar15);
              puVar10[0x31] = (longlong)(iVar15 + (iVar15 >> 0x1f & -iVar15));
              dVar37 = (double)mobyutil::MB_randRangeFloat
                                         ((float)((double)(longlong)puVar10[0x31] *
                                                 -0.30000001192092896),
                                          (float)((double)(longlong)puVar10[0x31] * dVar46));
              fVar64 = (float)((double)*(float *)((int)puVar10 + 0x74) - dVar50);
              fVar3 = (float)(dVar38 + dVar37) - *(float *)(puVar10 + 0xf);
              fVar64 = SQRT((float)((double)*(float *)(puVar10 + 0xe) - dVar52) *
                            (float)((double)*(float *)(puVar10 + 0xe) - dVar52) + fVar64 * fVar64);
              *(float *)((int)puVar10 + 0x104) = fVar3;
              dVar38 = ABS((double)fVar3);
              dVar46 = ABS((double)fVar64);
              *(float *)(puVar10 + 0x20) = fVar64;
              *(float *)(puVar10 + 0x21) = (float)(dVar46 - dVar38);
              uVar20 = (ulonglong)(*(uint *)(puVar10 + 0x20) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)(puVar10 + 0x21) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)((int)puVar10 + 0x104) >> 0x1d) & 4;
              dVar37 = ABS((double)*(float *)(puVar10 + 0x20));
              if ((double)*(float *)(puVar10 + 0x21) - dVar48 < 0.0) {
                dVar37 = dVar38;
              }
              fVar64 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
              dVar38 = ABS((double)*(float *)((int)puVar10 + 0x104));
              if ((double)*(float *)(puVar10 + 0x21) - dVar48 < 0.0) {
                dVar38 = dVar46;
              }
              fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
              dVar46 = dVar48;
              if (dVar48 < dVar37) {
                lVar14 = uVar13 - 0x2a0;
                lVar23 = uVar13 - 0x17c;
                lVar21 = uVar13 - 0x18c;
                lVar31 = 2;
                fVar2 = (float)(dVar38 - dVar37) / (float)(dVar38 + dVar37);
                fVar4 = fVar2 * fVar2;
                *(float *)(puVar10 + 0x26) = fVar2;
                *(float *)(puVar10 + 0x25) = fVar2;
                *(float *)((int)puVar10 + 300) = fVar2;
                *(float *)((int)puVar10 + 0x124) = fVar2;
                fVar2 = fVar4 * fVar4;
                *(float *)(puVar10 + 0x25) = *(float *)(puVar10 + 0x25) * fVar4;
                *(float *)((int)puVar10 + 300) = *(float *)((int)puVar10 + 300) * fVar2;
                *(float *)(puVar10 + 0x26) = *(float *)(puVar10 + 0x26) * fVar2 * fVar4;
                do {
                  *(float *)((int)lVar14 + 0x124) = *(float *)((int)lVar14 + 0x114) * fVar2 * fVar2;
                  iVar15 = (int)lVar21;
                  lVar21 = lVar21 + 8;
                  lVar14 = lVar14 + 8;
                  *(float *)((int)lVar23 + 4) = *(float *)(iVar15 + 4) * fVar2 * fVar2;
                  lVar23 = lVar23 + 8;
                  lVar31 = lVar31 + -1;
                } while (lVar31 != 0);
                lVar31 = 4;
                lVar23 = uVar13 - 0x18c;
                pfVar22 = (float *)&DAT_007358e0;
                lVar14 = lVar1;
                lVar21 = lVar23;
                do {
                  fVar2 = *pfVar22;
                  fVar4 = pfVar22[1];
                  pfVar22 = pfVar22 + 2;
                  *(float *)((int)lVar14 + 0x124) = *(float *)((int)lVar14 + 0x124) * fVar2;
                  lVar14 = lVar14 + 8;
                  *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar4;
                  lVar21 = lVar21 + 8;
                  lVar31 = lVar31 + -1;
                } while (lVar31 != 0);
                lVar21 = 2;
                lVar14 = lVar1;
                dVar37 = dVar48;
                do {
                  iVar15 = (int)lVar14;
                  iVar17 = (int)lVar23;
                  lVar14 = lVar14 + 0x10;
                  lVar23 = lVar23 + 0x10;
                  dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar15 + 0x124)) +
                                    *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                                   *(float *)(iVar17 + 0xc));
                  lVar21 = lVar21 + -1;
                } while (lVar21 != 0);
                dVar46 = (double)((float)(dVar37 + dVar55) * fVar64 + fVar3);
              }
              mobyutil::MB_SphericalToVector
                        (mobyutil::g_FrameTime * 80.0,(float)dVar33,(float)dVar46,
                         (float *)(puVar10 + 0x10));
              fVar64 = animationSpeed * 150.5;
              *(undefined4 *)(puVar10 + 8) = *(undefined4 *)(puVar10 + 0xe);
              *(undefined4 *)(puVar10 + 9) = *(undefined4 *)(puVar10 + 0xf);
              *(undefined4 *)(puVar10 + 10) = *(undefined4 *)(puVar10 + 0x10);
              *(undefined4 *)(puVar10 + 0xb) = *(undefined4 *)(puVar10 + 0x11);
              *(undefined4 *)((int)puVar10 + 0x44) = *(undefined4 *)((int)puVar10 + 0x74);
              *(undefined4 *)((int)puVar10 + 0x4c) = *(undefined4 *)((int)puVar10 + 0x7c);
              *(undefined4 *)((int)puVar10 + 0x54) = *(undefined4 *)((int)puVar10 + 0x84);
              *(undefined4 *)((int)puVar10 + 0x5c) = *(undefined4 *)((int)puVar10 + 0x8c);
              puVar10[0x31] = (longlong)(int)fVar64;
              iVar15 = M184_0001b100(pMoby);
              if (iVar15 != 0) {
                auVar59 = ZEXT416(0xffffffff);
                auVar59 = auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60;
                auVar60 = vectorShiftLeftIntegerWord(auVar59,auVar59);
                auVar61 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                iVar15 = 0;
                auVar59 = loadVectorLeftIndexed(0x54,0x18154);
                auVar59 = auVar59 >> 0x60 & (undefined1  [16])0xffffffff;
                auVar59 = vectorMultiplyAddFloatingPoint
                                    (auVar61,auVar59 | auVar59 << 0x20 | auVar59 << 0x40 |
                                             auVar59 << 0x60,auVar60);
                auVar59 = vectorConvertToSignedFixedPointWordSaturate(auVar59,0);
                auVar59 = auVar59 >> 0x60 & (undefined1  [16])0xff;
                uVar8 = storeVectorElementByteIndexed
                                  (auVar59 | auVar59 << 8 | auVar59 << 0x10 | auVar59 << 0x18 |
                                   auVar59 << 0x20 | auVar59 << 0x28 | auVar59 << 0x30 |
                                   auVar59 << 0x38 | auVar59 << 0x40 | auVar59 << 0x48 |
                                   auVar59 << 0x50 | auVar59 << 0x58 | auVar59 << 0x60 |
                                   auVar59 << 0x68 | auVar59 << 0x70 | auVar59 << 0x78,0x92,uVar28);
                *(undefined1 *)((int)pvVar6 + 0x92) = uVar8;
                dVar33 = 1.7000000476837158;
                dVar55 = 0.5;
                do {
                  dVar37 = (double)mobyutil::MB_randRangeSigned
                                             (dVar48,(double)(float)((double)mobyutil::g_FrameTime *
                                                                    dVar33));
                  dVar38 = (double)mobyutil::g_FrameTime;
                  *(float *)(puVar10 + 0x12) = (float)dVar37;
                  dVar37 = (double)mobyutil::MB_randRangeSigned
                                             (dVar48,(double)(float)(dVar38 * dVar33));
                  dVar38 = (double)mobyutil::g_FrameTime;
                  *(float *)((int)puVar10 + 0x94) = (float)dVar37;
                  dVar37 = (double)mobyutil::MB_randRangeSigned
                                             (dVar48,(double)(float)(dVar38 * dVar33));
                  *(float *)(puVar10 + 0x13) = (float)dVar37;
                  uVar16 = mobyutil::MB_randRange(0xaa,0xf0);
                  uVar20 = mobyutil::MB_randRange(0x6e,200);
                  iVar17 = mobyutil::MB_randRange(0xf,0x1e);
                  puVar10[0x31] = (longlong)iVar17;
                  puVar10[0x31] =
                       (longlong)
                       (int)(animationSpeed * (float)((double)(longlong)puVar10[0x31] + dVar55));
                  uVar7 = *(undefined4 *)((int)puVar10 + 0x18c);
                  uVar32 = mobyutil::MB_randRange(0xb4,0x10e);
                  partupd::SpawnPart_4
                            (uVar13 - 0x240,uVar13 - 0x220,
                             (uint)((uVar20 & 0xffffffff) << 8) | 0x7f000000 | uVar16,0xff,uVar7,
                             0x37,uVar32,1);
                  iVar15 = iVar15 + 1;
                } while (iVar15 < 9);
              }
              auVar59 = ZEXT416(0xffffffff);
              auVar60 = auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60;
              auVar59 = ZEXT416(0xffffffff);
              auVar63 = auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60;
              auVar61 = vectorShiftLeftIntegerWord(auVar60,auVar60);
              auVar59 = loadVectorLeftIndexed(0x78,0x18154);
              auVar62 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar60 = loadVectorLeftIndexed(0x7c,0x18154);
              auVar59 = auVar59 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar60 = auVar60 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar60 = vectorMultiplyAddFloatingPoint
                                  (auVar62,auVar60 | auVar60 << 0x20 | auVar60 << 0x40 |
                                           auVar60 << 0x60,auVar61);
              auVar61 = vectorShiftLeftIntegerWord(auVar63,auVar63);
              auVar61 = vectorMultiplyAddFloatingPoint
                                  (auVar62,auVar59 | auVar59 << 0x20 | auVar59 << 0x40 |
                                           auVar59 << 0x60,auVar61);
              auVar63 = loadVectorLeftIndexed(0x7130,0x920000);
              auVar59 = ZEXT416(0);
              auVar60 = vectorConvertToSignedFixedPointWordSaturate(auVar60,0);
              auVar62 = vectorConvertToSignedFixedPointWordSaturate(auVar61,0);
              auVar61 = vectorCompareGreaterThanSignedWord(auVar63,auVar60);
              auVar60 = vectorConditionalSelect(auVar63,auVar60,auVar61);
              auVar59 = vectorCompareGreaterThanSignedWord
                                  (auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60,
                                   auVar60);
              auVar59 = vectorLogicalAndWithComplement(auVar60,auVar59);
              auVar60._0_4_ = auVar62._0_4_ + auVar59._0_4_;
              auVar60._8_8_ = auVar59._8_8_;
              auVar60._4_4_ = auVar62._4_4_ + auVar59._4_4_;
              auVar61._0_8_ = auVar60._0_8_;
              auVar61._12_4_ = auVar59._12_4_;
              auVar61._8_4_ = auVar62._8_4_ + auVar59._8_4_;
              auVar59._0_12_ = auVar61._0_12_;
              auVar59._12_4_ = auVar62._12_4_ + auVar61._12_4_;
              auVar59 = vectorSplatHalfWord(auVar59,1);
              uVar9 = storeVectorElementHalfWordIndexed(auVar59,0x9c,uVar28);
              *(undefined2 *)((int)pvVar6 + 0x9c) = uVar9;
            }
          }
        }
      }
      if (((DAT_0092711c == 0) && (0 < *(int *)((int)pvVar6 + 0x80))) &&
         (iVar15 = fastfunc::FastDecTimerS32(uVar28 + 0x84), iVar15 != 0)) {
        iVar15 = mobyutil::MB_damage(pMoby,camera::Camera_AddPostUpdFunc,0);
        dVar55 = 1.0;
        if (iVar15 == 0) {
          pMVar27 = param_1;
          if (*(int *)((int)&DAT_0071cf4c + iVar26) != 0x11) {
            iVar17 = *(int *)((int)pvVar5 + *(int *)((int)&DAT_0071cf4c + iVar26) * 0x30 + 0x20);
            if (iVar17 == -1) goto LAB_000190d4;
            pMVar27 = MobyInstance + iVar17;
          }
          if (pMVar27 != (MobyInstance *)0x0) {
            dVar55 = 0.20000000298023224;
            iVar15 = mobyutil::MB_damage(pMVar27,camera::Camera_AddPostUpdFunc,0);
            pMVar27->damage = -1;
          }
        }
LAB_000190d4:
        if (iVar15 != 0) {
          if (DAT_00927118 == 0) {
            auVar59 = ZEXT416(0xffffffff);
            auVar59 = auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60;
            auVar60 = vectorShiftLeftIntegerWord(auVar59,auVar59);
            auVar59 = loadVectorLeftIndexed(0x88,0x18154);
            auVar61 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar59 = auVar59 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar59 = vectorMultiplyAddFloatingPoint
                                (auVar61,auVar59 | auVar59 << 0x20 | auVar59 << 0x40 |
                                         auVar59 << 0x60,auVar60);
            auVar59 = vectorConvertToSignedFixedPointWordSaturate(auVar59,0);
            auVar59 = auVar59 >> 0x60 & (undefined1  [16])0xffffffff;
            DAT_00927138 = storeVectorElementWordIndexed
                                     (auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60,
                                      0x7138,0x920000);
          }
          else {
            auVar59 = ZEXT416(0xffffffff);
            auVar59 = auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60;
            auVar60 = vectorShiftLeftIntegerWord(auVar59,auVar59);
            auVar59 = loadVectorLeftIndexed(0x54,0x18154);
            auVar61 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar59 = auVar59 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar59 = vectorMultiplyAddFloatingPoint
                                (auVar61,auVar59 | auVar59 << 0x20 | auVar59 << 0x40 |
                                         auVar59 << 0x60,auVar60);
            auVar59 = vectorConvertToSignedFixedPointWordSaturate(auVar59,0);
            auVar59 = auVar59 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar7 = storeVectorElementWordIndexed
                              (auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60,0x84,
                               uVar28);
            *(undefined4 *)((int)pvVar6 + 0x84U & 0xfffffffc) = uVar7;
            fVar64 = (float)((double)*(float *)((int)pvVar6 + 0x80) - dVar55);
            *(float *)((int)pvVar6 + 0x80) = fVar64;
            if ((double)fVar64 <= dVar48) {
              sVar19 = *(short *)((int)pvVar5 + 0x5fc) + -0x14;
              *(short *)((int)pvVar5 + 0x5fc) = sVar19;
              if (sVar19 < 0) {
                *(undefined2 *)((int)pvVar5 + 0x5fc) = 0;
              }
              sound::PlayMobySound(1,0,pMoby);
              if (0 < *(short *)((int)pvVar5 + 0x5fc)) {
                iVar15 = *(int *)((int)&DAT_0071cf4c + iVar26);
                if (iVar15 == 0x11) {
                  DAT_00927180 = 1;
                }
                else {
                  puVar24 = (undefined4 *)((int)pvVar5 + (int)((longlong)iVar15 << 4) * 3 + 0x20);
                  (&DAT_0092713c)[iVar15] = *puVar24;
                  *puVar24 = 0xffffffff;
                }
                M1274_00017fc8(param_1,(longlong)iVar15);
                if (uVar30 == 4) {
                  uVar20 = 0;
                  do {
                    piVar18 = (int *)((int)pvVar5 + (int)(uVar20 << 4) * 3 + 0x20);
                    iVar15 = *piVar18;
                    if ((iVar15 != -1) &&
                       (MobyInstance[iVar15].oClass == PLANETBUSTER_MAXIMUS_PART_04FD)) {
                      *(int *)((int)&DAT_0092713c + (int)((uVar20 & 0xffffffff) << 2)) = iVar15;
                      *piVar18 = -1;
                      M1274_00017fc8(param_1,uVar20);
                    }
                    iVar15 = (int)uVar20 + 1;
                    uVar20 = (ulonglong)iVar15;
                  } while (iVar15 < 0x11);
                }
              }
              iVar15 = 0;
              dVar54 = 0.10000000149011612;
              dVar53 = 0.5;
              dVar51 = 0.800000011920929;
              dVar49 = 1.570796251296997;
              dVar47 = 3.141592502593994;
              dVar52 = -3.141592502593994;
              dVar50 = -0.16666656732559204;
              dVar46 = 0.008333025500178337;
              dVar38 = -0.0001980741071747616;
              dVar37 = 2.601886990305502e-06;
              dVar33 = 90.5;
              dVar55 = 180.5;
              dVar48 = 5.5;
              uVar32 = 0x4119a28000000000;
              do {
                *(f32 *)(puVar10 + 0x14) = (pMoby->pos).x;
                *(f32 *)((int)puVar10 + 0xa4) = (pMoby->pos).y;
                *(f32 *)(puVar10 + 0x15) = (pMoby->pos).z;
                *(f32 *)((int)puVar10 + 0xac) = (pMoby->pos).w;
                dVar56 = (double)mobyutil::MB_randRangeFloat((float)dVar54,(float)dVar53);
                *(float *)(puVar10 + 0x15) = (float)((double)*(float *)(puVar10 + 0x15) + dVar56);
                dVar34 = (double)mobyutil::MB_randRot();
                dVar35 = (double)mobyutil::MB_randRangeFloat((float)dVar54,(float)dVar51);
                dVar36 = (double)(float)(dVar34 + dVar49);
                dVar56 = (double)(float)(dVar47 - dVar34);
                if (dVar34 - (double)(float)(dVar47 - dVar34) < 0.0) {
                  dVar56 = dVar34;
                }
                dVar45 = (double)(float)(dVar47 - dVar36);
                if (dVar36 - (double)(float)(dVar47 - dVar36) < 0.0) {
                  dVar45 = dVar36;
                }
                dVar39 = (double)(float)(dVar52 - dVar34);
                if ((double)(float)(dVar52 - dVar34) - dVar56 < 0.0) {
                  dVar39 = dVar56;
                }
                dVar34 = (double)animationSpeed;
                dVar56 = (double)(float)(dVar52 - dVar36);
                if ((double)(float)(dVar52 - dVar36) - dVar45 < 0.0) {
                  dVar56 = dVar45;
                }
                dVar36 = (double)(float)(dVar39 * dVar39);
                dVar45 = (double)(float)(dVar56 * dVar56);
                dVar40 = (double)(float)(dVar36 * (double)(float)(dVar36 * dVar39));
                dVar42 = (double)(float)(dVar45 * (double)(float)(dVar45 * dVar56));
                dVar44 = (double)(float)(dVar36 * dVar40);
                dVar41 = (double)(float)(dVar45 * dVar42);
                puVar10[0x31] = (longlong)(int)(dVar34 * dVar33);
                dVar39 = (double)(float)((double)(float)(dVar36 * dVar44) * dVar37 +
                                        (double)(float)(dVar44 * dVar38 +
                                                       (double)(float)(dVar40 * dVar46 +
                                                                      (double)(float)((double)(float
                                                  )(dVar36 * dVar39) * dVar50 + dVar39))));
                dVar36 = (double)(float)((double)(float)(dVar45 * dVar41) * dVar37 +
                                        (double)(float)(dVar41 * dVar38 +
                                                       (double)(float)(dVar42 * dVar46 +
                                                                      (double)(float)((double)(float
                                                  )(dVar45 * dVar56) * dVar50 + dVar56))));
                puVar10[0x31] = (longlong)(int)(dVar34 * dVar55);
                *(float *)((int)puVar10 + 0xa4) =
                     (float)(dVar39 * dVar35 + (double)*(float *)((int)puVar10 + 0xa4));
                *(float *)(puVar10 + 0x14) =
                     (float)(dVar36 * dVar35 + (double)*(float *)(puVar10 + 0x14));
                mobyutil::MB_randRange
                          (*(undefined4 *)((int)puVar10 + 0x18c),
                           *(undefined4 *)((int)puVar10 + 0x18c));
                dVar56 = (double)mobyutil::MB_randRangeFloat
                                           ((float)((double)mobyutil::g_FrameTime * dVar58),
                                            (float)((double)mobyutil::g_FrameTime * dVar57));
                fVar64 = mobyutil::g_FrameTime;
                dVar34 = (double)mobyutil::g_FrameTime;
                *(undefined4 *)(puVar10 + 0x17) = 0;
                *(float *)(puVar10 + 0x16) = (float)(dVar36 * dVar56);
                *(float *)((int)puVar10 + 0xb4) = (float)(dVar39 * dVar56);
                dVar56 = (double)mobyutil::MB_randRangeFloat(fVar64,(float)(dVar34 * dVar48));
                *(float *)(puVar10 + 0x17) = (float)dVar56;
                partupd::SpawnPart_22(uVar32,uVar13 - 0x210,uVar13 - 0x200,0x500a1414,0xa0a0a);
                iVar15 = iVar15 + 1;
              } while (iVar15 < 0x82);
              pMoby->collision = (ushort *)0x0;
              pMoby->modeBits = pMoby->modeBits | (UNK_40|DISABLED);
            }
          }
        }
      }
      pMoby->damage = -1;
      uVar16 = *(uint *)((int)pvVar6 + 0x80);
      if ((0 < (int)uVar16) &&
         ((int)(((uint)((int)uVar16 >> 0x1f) >> 1 ^ uVar16) - ((int)uVar16 >> 0x1f)) < 0x41200000))
      {
        iVar15 = fastfunc::FastDoubleToInt((double)*(float *)((int)pvVar6 + 0x80));
        uVar16 = 9 - iVar15;
        iVar15 = 0;
        iVar29 = ((int)uVar16 >> 1) + (uint)((int)uVar16 < 0 && (uVar16 & 1) != 0);
        iVar17 = iVar29 + 3;
        if (0 < iVar17) {
          dVar56 = 0.10000000149011612;
          dVar54 = 0.4000000059604645;
          dVar53 = 1.570796251296997;
          dVar51 = 3.141592502593994;
          dVar49 = -3.141592502593994;
          dVar47 = -0.16666656732559204;
          dVar52 = 0.008333025500178337;
          dVar50 = -0.0001980741071747616;
          dVar46 = 2.601886990305502e-06;
          dVar38 = 25.5;
          fVar64 = 55.5;
          dVar37 = 0.5;
          dVar33 = 3.0;
          dVar55 = 7.0;
          dVar48 = 17.0;
          uVar32 = 0x4119a28000000000;
          do {
            dVar45 = (double)fVar64;
            *(f32 *)(puVar10 + 0x18) = (pMoby->pos).x;
            *(f32 *)((int)puVar10 + 0xc4) = (pMoby->pos).y;
            fVar64 = (pMoby->pos).z;
            *(float *)(puVar10 + 0x33) = (float)dVar58;
            *(float *)(puVar10 + 0x19) = fVar64;
            *(f32 *)((int)puVar10 + 0xcc) = (pMoby->pos).w;
            *(float *)(puVar10 + 0x19) = (float)((double)fVar64 + dVar58);
            dVar34 = (double)mobyutil::MB_randRot();
            dVar35 = (double)mobyutil::MB_randRangeFloat((float)dVar56,(float)dVar54);
            dVar36 = (double)(float)(dVar34 + dVar53);
            dVar58 = (double)(float)(dVar51 - dVar34);
            if (dVar34 - (double)(float)(dVar51 - dVar34) < 0.0) {
              dVar58 = dVar34;
            }
            dVar39 = (double)(float)(dVar51 - dVar36);
            if (dVar36 - (double)(float)(dVar51 - dVar36) < 0.0) {
              dVar39 = dVar36;
            }
            dVar44 = (double)(float)(dVar49 - dVar34);
            if ((double)(float)(dVar49 - dVar34) - dVar58 < 0.0) {
              dVar44 = dVar58;
            }
            dVar34 = (double)animationSpeed;
            *(float *)((int)puVar10 + 0x19c) = (float)dVar45;
            dVar58 = (double)(float)(dVar49 - dVar36);
            if ((double)(float)(dVar49 - dVar36) - dVar39 < 0.0) {
              dVar58 = dVar39;
            }
            dVar36 = (double)(float)(dVar44 * dVar44);
            dVar39 = (double)(float)(dVar58 * dVar58);
            dVar42 = (double)(float)(dVar36 * (double)(float)(dVar36 * dVar44));
            dVar40 = (double)(float)(dVar39 * (double)(float)(dVar39 * dVar58));
            dVar43 = (double)(float)(dVar36 * dVar42);
            dVar41 = (double)(float)(dVar39 * dVar40);
            puVar10[0x31] = (longlong)(int)(dVar34 * dVar38);
            puVar10[0x31] = (longlong)(int)(dVar34 * dVar45);
            dVar36 = (double)(float)((double)(float)(dVar36 * dVar43) * dVar46 +
                                    (double)(float)(dVar43 * dVar50 +
                                                   (double)(float)(dVar42 * dVar52 +
                                                                  (double)(float)((double)(float)(
                                                  dVar36 * dVar44) * dVar47 + dVar44))));
            dVar34 = (double)(float)((double)(float)(dVar39 * dVar41) * dVar46 +
                                    (double)(float)(dVar41 * dVar50 +
                                                   (double)(float)(dVar40 * dVar52 +
                                                                  (double)(float)((double)(float)(
                                                  dVar39 * dVar58) * dVar47 + dVar58))));
            *(float *)((int)puVar10 + 0xc4) =
                 (float)(dVar36 * dVar35 + (double)*(float *)((int)puVar10 + 0xc4));
            *(float *)(puVar10 + 0x18) =
                 (float)(dVar34 * dVar35 + (double)*(float *)(puVar10 + 0x18));
            mobyutil::MB_randRange
                      (*(undefined4 *)((int)puVar10 + 0x18c),*(undefined4 *)((int)puVar10 + 0x18c));
            dVar58 = (double)mobyutil::MB_randRangeFloat
                                       ((float)((double)mobyutil::g_FrameTime * dVar37),
                                        (float)((double)mobyutil::g_FrameTime * dVar33));
            *(undefined4 *)(puVar10 + 0x1b) = 0;
            *(float *)(puVar10 + 0x1a) = (float)(dVar34 * dVar58);
            *(float *)((int)puVar10 + 0xd4) = (float)(dVar36 * dVar58);
            dVar58 = (double)fastfunc::FastIntToDouble(5);
            dVar34 = (double)mobyutil::MB_randRangeFloat
                                       ((float)((double)mobyutil::g_FrameTime * dVar55),
                                        (float)((double)mobyutil::g_FrameTime * dVar48));
            dVar35 = (double)fastfunc::FastIntToDouble(iVar29);
            *(float *)(puVar10 + 0x1b) =
                 (float)((double)(float)((double)(float)(dVar34 * dVar35) * dVar57) / dVar58);
            uVar20 = mobyutil::MB_randRange(0x46,0xcd);
            partupd::SpawnPart_22
                      (uVar32,uVar13 - 0x1f0,uVar13 - 0x1e0,
                       (uint)((uVar20 & 0xffffffff) << 8) | 0x460a00aa,0xa0a46);
            iVar15 = iVar15 + 1;
            dVar58 = (double)*(float *)(puVar10 + 0x33);
            fVar64 = *(float *)((int)puVar10 + 0x19c);
          } while (iVar15 < iVar17);
        }
        iVar15 = 0;
        dVar53 = 0.10000000149011612;
        dVar51 = 0.800000011920929;
        dVar49 = 1.570796251296997;
        dVar47 = 3.141592502593994;
        dVar52 = -3.141592502593994;
        dVar50 = -0.16666656732559204;
        dVar46 = 0.008333025500178337;
        dVar38 = -0.0001980741071747616;
        dVar37 = 2.601886990305502e-06;
        dVar33 = 40.5;
        dVar58 = 70.5;
        dVar57 = 0.4000000059604645;
        dVar55 = 2.4000000953674316;
        dVar48 = 5.5;
        uVar32 = 0x411ec30020000000;
        do {
          *(f32 *)(puVar10 + 0x1c) = (pMoby->pos).x;
          *(f32 *)((int)puVar10 + 0xe4) = (pMoby->pos).y;
          *(f32 *)(puVar10 + 0x1d) = (pMoby->pos).z;
          *(f32 *)((int)puVar10 + 0xec) = (pMoby->pos).w;
          dVar56 = (double)mobyutil::MB_randRot();
          dVar34 = (double)mobyutil::MB_randRangeFloat((float)dVar53,(float)dVar51);
          dVar35 = (double)(float)(dVar56 + dVar49);
          dVar54 = (double)(float)(dVar47 - dVar56);
          if (dVar56 - (double)(float)(dVar47 - dVar56) < 0.0) {
            dVar54 = dVar56;
          }
          dVar36 = (double)(float)(dVar47 - dVar35);
          if (dVar35 - (double)(float)(dVar47 - dVar35) < 0.0) {
            dVar36 = dVar35;
          }
          dVar45 = (double)(float)(dVar52 - dVar56);
          if ((double)(float)(dVar52 - dVar56) - dVar54 < 0.0) {
            dVar45 = dVar54;
          }
          dVar56 = (double)animationSpeed;
          dVar54 = (double)(float)(dVar52 - dVar35);
          if ((double)(float)(dVar52 - dVar35) - dVar36 < 0.0) {
            dVar54 = dVar36;
          }
          dVar35 = (double)(float)(dVar45 * dVar45);
          dVar36 = (double)(float)(dVar54 * dVar54);
          dVar44 = (double)(float)(dVar35 * (double)(float)(dVar35 * dVar45));
          dVar41 = (double)(float)(dVar36 * (double)(float)(dVar36 * dVar54));
          dVar39 = (double)(float)(dVar35 * dVar44);
          dVar40 = (double)(float)(dVar36 * dVar41);
          puVar10[0x31] = (longlong)(int)(dVar56 * dVar33);
          dVar45 = (double)(float)((double)(float)(dVar35 * dVar39) * dVar37 +
                                  (double)(float)(dVar39 * dVar38 +
                                                 (double)(float)(dVar44 * dVar46 +
                                                                (double)(float)((double)(float)(
                                                  dVar35 * dVar45) * dVar50 + dVar45))));
          dVar35 = (double)(float)((double)(float)(dVar36 * dVar40) * dVar37 +
                                  (double)(float)(dVar40 * dVar38 +
                                                 (double)(float)(dVar41 * dVar46 +
                                                                (double)(float)((double)(float)(
                                                  dVar36 * dVar54) * dVar50 + dVar54))));
          puVar10[0x31] = (longlong)(int)(dVar56 * dVar58);
          *(float *)((int)puVar10 + 0xe4) =
               (float)(dVar45 * dVar34 + (double)*(float *)((int)puVar10 + 0xe4));
          *(float *)(puVar10 + 0x1c) = (float)(dVar35 * dVar34 + (double)*(float *)(puVar10 + 0x1c))
          ;
          mobyutil::MB_randRange
                    (*(undefined4 *)((int)puVar10 + 0x18c),*(undefined4 *)((int)puVar10 + 0x18c));
          dVar54 = (double)mobyutil::MB_randRangeFloat
                                     ((float)((double)mobyutil::g_FrameTime * dVar53),
                                      (float)((double)mobyutil::g_FrameTime * dVar57));
          dVar56 = (double)mobyutil::g_FrameTime;
          *(undefined4 *)(puVar10 + 0x1f) = 0;
          *(float *)(puVar10 + 0x1e) = (float)(dVar35 * dVar54);
          *(float *)((int)puVar10 + 0xf4) = (float)(dVar45 * dVar54);
          dVar54 = (double)mobyutil::MB_randRangeFloat
                                     ((float)(dVar56 * dVar55),(float)(dVar56 * dVar48));
          *(float *)(puVar10 + 0x1f) = (float)dVar54;
          partupd::SpawnPart_22(uVar32,uVar13 - 0x1d0,uVar13 - 0x1c0,0x460a1414,0xa0a0a);
          iVar15 = iVar15 + 1;
        } while (iVar15 < 3);
      }
    }
    uVar30 = uVar30 + 1;
    iVar26 = iVar26 + 4;
    pvVar25 = (void *)((int)pvVar25 + 4);
    if (4 < (int)uVar30) {
      M1274_00017b78(param_1);
      if ((*(short *)((int)pvVar5 + 0x5fc) < 1) && (DAT_0092711c == 0)) {
        DAT_00927134 = 1;
        param_1->state = '\x04';
        param_1->setByGroup = '\0';
      }
      return;
    }
  } while( true );
}



//==== 000199f0  ns=mobyupdate_helpers  size=0x26c
// sig: undefined M1274_000199f0(void)
// callers(1): 00019cb8 mobyupdate_unsorted::UpdateMoby_1274
// callees(2): 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M1274_000199f0(MobyInstance *param_1)

{
  int iVar2;
  longlong lVar1;
  int iVar3;
  int iVar4;
  MobyInstance *pMVar5;
  void *pvVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  pvVar6 = param_1->pVar;
  iVar4 = 0;
  dVar11 = 170.5;
  dVar12 = -3.1415927410125732;
  dVar13 = 3.141592502593994;
  dVar14 = -3.141592502593994;
  dVar15 = -0.16666656732559204;
  dVar16 = 0.008333025500178337;
  dVar17 = -0.0001980741071747616;
  dVar18 = 2.601886990305502e-06;
  dVar19 = 70.0;
  dVar20 = 10.0;
  dVar21 = 6.2831854820251465;
  do {
    pMVar5 = param_1;
    if (iVar4 != 0x11) {
      pMVar5 = MobyInstance + *(int *)((int)pvVar6 + 0x20);
    }
    if (pMVar5->oClass != PLANETBUSTER_MAXIMUS_PART_04FE) {
      iVar2 = (int)((double)animationSpeed * dVar11);
      dVar7 = (double)fastfunc::FastIntToDouble(iVar2);
      dVar8 = (double)(float)((double)(float)((double)(longlong)
                                                      (worldUpdateTime -
                                                      (worldUpdateTime / iVar2) * iVar2) / dVar7) *
                              dVar21 + dVar12);
      dVar7 = (double)(float)(dVar13 - dVar8);
      if (dVar8 - (double)(float)(dVar13 - dVar8) < 0.0) {
        dVar7 = dVar8;
      }
      dVar9 = (double)(float)(dVar14 - dVar8);
      if ((double)(float)(dVar14 - dVar8) - dVar7 < 0.0) {
        dVar9 = dVar7;
      }
      dVar7 = (double)(float)(dVar9 * dVar9);
      dVar10 = (double)(float)(dVar7 * (double)(float)(dVar7 * dVar9));
      dVar8 = (double)(float)(dVar7 * dVar10);
      dVar8 = (double)(float)((double)(float)(dVar7 * dVar8) * dVar18 +
                             (double)(float)(dVar8 * dVar17 +
                                            (double)(float)(dVar10 * dVar16 +
                                                           (double)(float)((double)(float)(dVar7 * 
                                                  dVar9) * dVar15 + dVar9))));
      dVar7 = (double)(float)(dVar8 * dVar19);
      iVar2 = fastfunc::FastDoubleToInt(dVar7);
      lVar1 = fastfunc::FastDoubleToInt(dVar7);
      iVar3 = fastfunc::FastDoubleToInt((double)(float)(dVar8 * dVar20));
      iVar2 = iVar2 + 0xb4;
      lVar1 = lVar1 + 0xb4;
      pMVar5->modeBits = pMVar5->modeBits | HAS_GLOW;
      pMVar5->field60_0x90 =
           (uint)((lVar1 + (0xff - (longlong)(int)lVar1 >> 0x3f & 0xffU - lVar1) & 0xffffffff) << 8)
           | iVar2 + ((uint)(0xff - (longlong)iVar2 >> 0x3f) & 0xffU - iVar2) |
           (iVar3 + 0x46) * 0x10000 | 0x80000000;
    }
    iVar4 = iVar4 + 1;
    pvVar6 = (void *)((int)pvVar6 + 0x30);
  } while (iVar4 < 0x12);
  return;
}



//==== 00019cb8  ns=mobyupdate_unsorted  size=0x1410
// sig: undefined UpdateMoby_1274(MobyInstance * moby)
// callers(0): 
// callees(25): 00017b78 mobyupdate_helpers::M1274_00017b78; 00017fc8 mobyupdate_helpers::M1274_00017fc8; 00018238 mobyupdate_helpers::M1274_00018238; 000199f0 mobyupdate_helpers::M1274_000199f0; 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 000efb38 mobyfunc::DeleteMoby; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00109af0 mobyutil::Delt; 00109b40 mobyutil::AccelDelt; 00109c30 mobyutil::OrganicDelt; 0010a050 mobyutil::AccelDeltAng; 00110b70 mobyutil::MB_IsPntInCuboid; 00116a68 mobyutil::MB_BobMotion; 00116b70 mobyutil::MB_SwingMotion; 00116d1c mobyutil::MB_StoreChildOffsets; 00116eb8 mobyutil::MB_UpdateChildMobys; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 00167e60 update::mode_sceneInit; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots

/* Moby 1274 */

void mobyupdate_unsorted::UpdateMoby_1274(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  void *pvVar10;
  Spline *pSVar11;
  uint uVar12;
  undefined4 uVar13;
  ulonglong *puVar14;
  Cuboid *pCVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined4 *puVar19;
  short sVar21;
  int iVar20;
  longlong lVar22;
  float *pfVar23;
  longlong lVar24;
  int iVar25;
  ulonglong uVar26;
  ulonglong unaff_r27;
  int *piVar27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar28;
  ulonglong unaff_r30;
  ulonglong uVar29;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  longlong lVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  
  lVar16 = (longlong)(int)moby;
  uVar26 = ZEXT48(&stack0x00000000);
  lVar31 = uVar26 - 0x150;
  puVar14 = (ulonglong *)lVar31;
  *puVar14 = uVar26;
  puVar14[0x2c] = in_LR;
  puVar14[0x28] = in_f30;
  puVar14[0x29] = in_f31;
  puVar14[0x27] = unaff_r31;
  puVar14[0x26] = unaff_r30;
  uVar1 = moby->state;
  pvVar10 = moby->pVar;
  uVar29 = ZEXT48(pvVar10);
  puVar14[0x25] = unaff_r29;
  puVar14[0x24] = unaff_r28;
  puVar14[0x23] = unaff_r27;
  if ((uVar1 != '\0') && (DAT_00927180 != 0)) {
    (moby->pos).x = DAT_009271b0;
    (moby->pos).y = DAT_009271b4;
    (moby->pos).z = DAT_009271b8;
    (moby->pos).w = DAT_009271bc;
    (moby->rotation).x = DAT_009271c0;
    (moby->rotation).y = DAT_009271c4;
    (moby->rotation).z = DAT_009271c8;
    (moby->rotation).w = DAT_009271cc;
  }
  if (uVar1 == '\x04') {
    if ((*(int *)((int)pvVar10 + 0x608) != -1) && (*(int *)((int)pvVar10 + 0x60c) != -1)) {
      bVar2 = moby->setByGroup;
      if (bVar2 == 0) {
        moby->setByGroup = '\x01';
        camera::camera5::Camera_SetMobyDrivenTargetPos
                  (&Cuboids[*(int *)((int)pvVar10 + 0x608)].pos.x);
        camera::camera5::Camera_SetMobyDrivenTargetRot
                  (&Cuboids[*(int *)((int)pvVar10 + 0x608)].rot.x);
        draw::LetterBoxOn = 1;
        DAT_009271d0 = 1;
      }
      else if (bVar2 < 2) {
        uVar12 = (int)*(uint *)((int)pvVar10 + 0x610) >> 0x1f;
        if ((int)((uVar12 >> 1 ^ *(uint *)((int)pvVar10 + 0x610)) - uVar12) < 0x3f800000) {
          mobyutil::OrganicDelt
                    (1.0,DAT_0071f418 * 0.666,DAT_0071f418 * 0.666,mobyutil::g_FrameTime * 0.4,
                     (float *)((int)pvVar10 + 0x610),0x720000,(float *)((int)pvVar10 + 0x614));
          pCVar15 = Cuboids;
          iVar20 = *(int *)((int)pvVar10 + 0x608);
          iVar28 = *(int *)((int)pvVar10 + 0x60c);
          fVar3 = *(float *)((int)pvVar10 + 0x610);
          fVar4 = Cuboids[iVar20].pos.x;
          fVar6 = Cuboids[iVar28].pos.y;
          fVar7 = Cuboids[iVar20].pos.y;
          fVar5 = Cuboids[iVar28].pos.z;
          fVar9 = Cuboids[iVar20].pos.z;
          fVar8 = Cuboids[iVar28].pos.w;
          *(float *)(puVar14 + 0xe) = fVar3 * (Cuboids[iVar28].pos.x - fVar4) + fVar4;
          *(float *)((int)puVar14 + 0x74) = fVar3 * (fVar6 - fVar7) + pCVar15[iVar20].pos.y;
          fVar4 = pCVar15[iVar20].pos.z;
          *(float *)((int)puVar14 + 0x7c) = fVar8;
          *(undefined4 *)((int)puVar14 + 0x8c) = 0;
          *(undefined4 *)(puVar14 + 0x11) = 0;
          *(undefined4 *)((int)puVar14 + 0x84) = 0;
          *(undefined4 *)(puVar14 + 0x10) = 0;
          *(float *)(puVar14 + 0xf) = fVar3 * (fVar5 - fVar9) + fVar4;
          dVar34 = (double)fastfunc::FastDiffRots
                                     ((double)pCVar15[iVar28].rot.x,(double)pCVar15[iVar20].rot.x);
          pCVar15 = Cuboids;
          iVar20 = *(int *)((int)pvVar10 + 0x608);
          *(float *)(puVar14 + 0x10) = (float)(dVar34 * (double)*(float *)((int)pvVar10 + 0x610));
          dVar34 = (double)fastfunc::FastWrapRot
                                     (pCVar15[iVar20].rot.x,*(float *)((int)puVar14 + 0x84));
          pCVar15 = Cuboids;
          iVar20 = *(int *)((int)pvVar10 + 0x60c);
          iVar28 = *(int *)((int)pvVar10 + 0x608);
          *(float *)(puVar14 + 0x10) = (float)dVar34;
          dVar34 = (double)fastfunc::FastDiffRots
                                     ((double)pCVar15[iVar20].rot.y,(double)pCVar15[iVar28].rot.y);
          pCVar15 = Cuboids;
          iVar20 = *(int *)((int)pvVar10 + 0x608);
          fVar3 = (float)(dVar34 * (double)*(float *)((int)pvVar10 + 0x610));
          *(float *)((int)puVar14 + 0x84) = fVar3;
          dVar34 = (double)fastfunc::FastWrapRot(pCVar15[iVar20].rot.y,fVar3);
          pCVar15 = Cuboids;
          iVar20 = *(int *)((int)pvVar10 + 0x60c);
          iVar28 = *(int *)((int)pvVar10 + 0x608);
          *(float *)((int)puVar14 + 0x84) = (float)dVar34;
          dVar34 = (double)fastfunc::FastDiffRots
                                     ((double)pCVar15[iVar20].rot.z,(double)pCVar15[iVar28].rot.z);
          pCVar15 = Cuboids;
          iVar20 = *(int *)((int)pvVar10 + 0x608);
          fVar3 = (float)(dVar34 * (double)*(float *)((int)pvVar10 + 0x610));
          *(float *)(puVar14 + 0x11) = fVar3;
          dVar34 = (double)fastfunc::FastWrapRot(pCVar15[iVar20].rot.z,fVar3);
          *(float *)(puVar14 + 0x11) = (float)dVar34;
          camera::camera5::Camera_SetMobyDrivenTargetPos((float *)(puVar14 + 0xe));
          camera::camera5::Camera_SetMobyDrivenTargetRot((float *)(puVar14 + 0x10));
        }
        else {
          moby->setByGroup = '\x02';
          draw::LetterBoxOn = 0;
          camera::camera5::Camera_DeactivateMobyDrivenCam(3);
        }
      }
      else if (bVar2 < 3) {
        iVar20 = 0;
        piVar27 = &DAT_0092713c;
        do {
          iVar28 = *(int *)((int)uVar29 + 0x20);
          if (iVar28 == -1) {
            if ((0 < *piVar27) && (MobyInstance[*piVar27].state < 0x80)) {
              mobyfunc::DeleteMoby(MobyInstance + *piVar27);
            }
          }
          else {
            if (MobyInstance[iVar28].state < 0x80) {
              mobyfunc::DeleteMoby(MobyInstance + iVar28);
            }
            *(undefined4 *)((int)uVar29 + 0x20) = 0xffffffff;
          }
          iVar20 = iVar20 + 1;
          piVar27 = piVar27 + 1;
          uVar29 = uVar29 + 0x30;
        } while (iVar20 < 0x11);
        DAT_009271d4 = 0;
        update::mode_sceneInit(7);
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
    sVar21 = *(short *)((int)pvVar10 + 0x5fa);
    if (sVar21 == 0) {
      iVar20 = 0;
      piVar27 = &DAT_0092713c;
      iVar28 = 0;
      do {
        if (*piVar27 == 0) {
          *piVar27 = *(int *)((int)uVar29 + 0x20);
        }
        iVar20 = iVar20 + 1;
        *(undefined4 *)((int)uVar29 + 0x20) = 0xffffffff;
        piVar27 = piVar27 + 1;
        uVar29 = uVar29 + 0x30;
      } while (iVar20 < 0x11);
      DAT_00927180 = 1;
      do {
        mobyupdate_helpers::M1274_00017fc8(lVar16,iVar28);
        iVar28 = iVar28 + 1;
      } while (iVar28 < 0x12);
      sVar21 = *(short *)((int)pvVar10 + 0x5fa);
    }
    *(short *)((int)pvVar10 + 0x5fa) = sVar21 + 1;
    mobyupdate_helpers::M1274_00017b78(lVar16);
    goto LAB_0001aff8;
  }
  if (uVar1 == '\x03') {
    uVar26 = (ulonglong)DAT_00927138;
    DAT_00927138 = (uint)(uVar26 + 1);
    mobyutil::AccelDeltAng
              (0x40086f4280000000,(double)(DAT_0071f40c * 0.0015),(double)(DAT_0071f40c * 0.3),
               (double)(mobyutil::g_FrameTime * 0.17453292),lVar16 + 0x48,uVar26 + 1,uVar29 + 0x5f4)
    ;
    mobyutil::MB_BobMotion
              (0.7,mobyutil::g_FrameTime * 1.2217305,moby,(float *)((int)pvVar10 + 0x5cc),
               (float *)((int)pvVar10 + 0x5c8));
    mobyutil::MB_SwingMotion
              ((double)DAT_0071cf48,(double)(DAT_0071cf40 * 0.017453292 * mobyutil::g_FrameTime),
               (double)(DAT_0071cf44 * 0.017453292 * mobyutil::g_FrameTime),lVar16,uVar29 + 0x5e4,
               uVar29 + 0x5e8);
    mobyutil::MB_UpdateChildMobys(lVar16,uVar29,0x11);
    mobyupdate_helpers::M1274_00018238(lVar16);
    goto LAB_0001aff8;
  }
  if (uVar1 != '\x02') {
    if (uVar1 == '\x01') {
      iVar20 = mobyutil::MB_IsPntInCuboid
                         ((Vec4 *)&GameCamera.posX,(longlong)*(int *)((int)pvVar10 + 0x624));
      if (iVar20 == 0) {
        iVar20 = 0;
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
        uVar26 = uVar29;
        do {
          iVar28 = *(int *)((int)uVar26 + 0x20);
          if (iVar28 != -1) {
            MobyInstance[iVar28].modeBits =
                 MobyInstance[iVar28].modeBits &
                 (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                  DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW
                  |TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
          }
          iVar20 = iVar20 + 1;
          uVar26 = uVar26 + 0x30;
        } while (iVar20 < 0x11);
      }
      else {
        iVar20 = 0;
        moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
        uVar26 = uVar29;
        do {
          iVar28 = *(int *)((int)uVar26 + 0x20);
          if (iVar28 != -1) {
            MobyInstance[iVar28].modeBits = MobyInstance[iVar28].modeBits | (UNK_40|DISABLED);
          }
          iVar20 = iVar20 + 1;
          uVar26 = uVar26 + 0x30;
        } while (iVar20 < 0x11);
      }
      iVar20 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar10 + 0x628));
      if (((int)(((uint)((int)g_heroPosition.z >> 0x1f) >> 1 ^ (uint)g_heroPosition.z) -
                ((int)g_heroPosition.z >> 0x1f)) < 0x42500001) || (iVar20 != 0)) {
        fVar3 = 3.0;
        if (iVar20 != 0) {
          fVar3 = 10.0;
        }
        dVar34 = (double)fVar3;
        iVar20 = mobyutil::MB_IsPntInCuboid
                           (&g_heroPosition,(longlong)*(int *)((int)pvVar10 + 0x61c));
        if (iVar20 != 0) {
          auVar36 = ZEXT416(0xffffffff);
          auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
          auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
          auVar36 = loadVectorLeftIndexed(0x14,0x19c5c);
          auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar36 = vectorMultiplyAddFloatingPoint
                              (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60
                               ,auVar37);
          auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
          auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar13 = storeVectorElementWordIndexed
                             (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x620,
                              uVar29);
          *(undefined4 *)((int)pvVar10 + 0x620U & 0xfffffffc) = uVar13;
        }
        iVar20 = fastfunc::FastDecTimerS32(uVar29 + 0x620);
        if (iVar20 == 0) {
          dVar34 = 19.0;
        }
        mobyutil::AccelDelt((float)((double)*(float *)((int)pvVar10 + 0x618) + dVar34),
                            DAT_0071f40c * 0.03,DAT_0071f40c * 0.3,mobyutil::g_FrameTime * 2.7,
                            &(moby->pos).z,0x19c5c,(float *)((int)pvVar10 + 0x62c));
      }
      else {
        mobyutil::Delt(*(float *)((int)pvVar10 + 0x618),mobyutil::g_FrameTime * 2.0,&(moby->pos).z);
      }
      mobyutil::MB_BobMotion
                (0.7,mobyutil::g_FrameTime * 1.2217305,moby,(float *)((int)pvVar10 + 0x5cc),
                 (float *)((int)pvVar10 + 0x5c8));
      mobyutil::MB_SwingMotion
                ((double)DAT_0071cf48,(double)(DAT_0071cf40 * 0.017453292 * mobyutil::g_FrameTime),
                 (double)(DAT_0071cf44 * 0.017453292 * mobyutil::g_FrameTime),lVar16,uVar29 + 0x5e4,
                 uVar29 + 0x5e8);
      mobyutil::MB_UpdateChildMobys(lVar16,uVar29,0x11);
      iVar20 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar10 + 0x5ec));
      if (iVar20 != 0 || DAT_00927118 != 0) {
        DAT_009271d4 = 1;
        lVar31 = 5;
        do {
          iVar20 = (int)uVar29;
          uVar29 = uVar29 + 4;
          MobyInstance[*(int *)((int)pvVar10 + *(int *)(iVar20 + 0x5d0) * 0x30 + 0x20)].damage = -1;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        moby->state = '\x02';
      }
    }
    else if (uVar1 == '\0') {
      DAT_009271d4 = 0;
      if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
        iVar20 = 0;
        do {
          iVar28 = *(int *)((int)uVar29 + 0x20);
          if (iVar28 != -1) {
            mobyfunc::DeleteMoby(MobyInstance + iVar28);
          }
          iVar20 = iVar20 + 1;
          uVar29 = uVar29 + 0x30;
        } while (iVar20 < 0x11);
        mobyfunc::DeleteMoby(moby);
        return;
      }
      DAT_00927134 = 0;
      mobyutil::MB_StoreChildOffsets(lVar16,uVar29,0x11);
      pSVar11 = Splines[*(int *)((int)pvVar10 + 0x5c0)];
      (moby->pos).x = pSVar11->points[0].x;
      (moby->pos).y = pSVar11->points[0].y;
      fVar3 = pSVar11->points[0].z;
      (moby->pos).z = fVar3;
      (moby->pos).w = pSVar11->points[0].w;
      *(float *)((int)pvVar10 + 0x618) = fVar3;
      fVar3 = pSVar11->points[1].x - pSVar11->points[0].x;
      fVar4 = pSVar11->points[1].y - pSVar11->points[0].y;
      fVar6 = ABS(fVar3);
      fVar5 = ABS(fVar4);
      *(float *)(puVar14 + 0x15) = fVar3;
      *(float *)((int)puVar14 + 0xac) = fVar4;
      *(float *)(puVar14 + 0x16) = fVar6 - fVar5;
      fVar3 = 0.0;
      fVar4 = (moby->pos).z;
      uVar17 = (ulonglong)(*(uint *)(puVar14 + 0x15) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar14 + 0x16) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar14 + 0xac) >> 0x1d) & 4;
      fVar7 = ABS(*(float *)(puVar14 + 0x15));
      if (*(float *)(puVar14 + 0x16) - 0.0 < 0.0) {
        fVar7 = fVar5;
      }
      fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar5 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      fVar8 = ABS(*(float *)((int)puVar14 + 0xac));
      if (*(float *)(puVar14 + 0x16) - 0.0 < 0.0) {
        fVar8 = fVar6;
      }
      if (0.0 < fVar7) {
        lVar18 = uVar26 - 0x140;
        lVar22 = uVar26 - 0x5c;
        lVar24 = uVar26 - 0x4c;
        lVar30 = 2;
        fVar6 = (fVar8 - fVar7) / (fVar8 + fVar7);
        fVar7 = fVar6 * fVar6;
        *(float *)(puVar14 + 0x20) = fVar6;
        *(float *)(puVar14 + 0x1f) = fVar6;
        *(float *)((int)puVar14 + 0xfc) = fVar6;
        *(float *)((int)puVar14 + 0xf4) = fVar6;
        fVar6 = fVar7 * fVar7;
        *(float *)(puVar14 + 0x1f) = *(float *)(puVar14 + 0x1f) * fVar7;
        *(float *)((int)puVar14 + 0xfc) = *(float *)((int)puVar14 + 0xfc) * fVar6;
        *(float *)(puVar14 + 0x20) = *(float *)(puVar14 + 0x20) * fVar6 * fVar7;
        do {
          *(float *)((int)lVar18 + 0xf4) = *(float *)((int)lVar18 + 0xe4) * fVar6 * fVar6;
          iVar20 = (int)lVar22;
          lVar18 = lVar18 + 8;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)(iVar20 + 4) * fVar6 * fVar6;
          lVar24 = lVar24 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar30 = 4;
        lVar24 = uVar26 - 0x5c;
        pfVar23 = (float *)&DAT_007358e0;
        lVar18 = lVar31;
        lVar22 = lVar24;
        do {
          fVar6 = *pfVar23;
          fVar7 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar18 + 0xf4) = *(float *)((int)lVar18 + 0xf4) * fVar6;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar7;
          lVar22 = lVar22 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar18 = 2;
        do {
          iVar20 = (int)lVar31;
          iVar28 = (int)lVar24;
          lVar31 = lVar31 + 0x10;
          lVar24 = lVar24 + 0x10;
          fVar3 = fVar3 + *(float *)(iVar20 + 0xf4) + *(float *)(iVar28 + 4) +
                  *(float *)(iVar28 + 8) + *(float *)(iVar28 + 0xc);
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        fVar3 = (fVar3 + 0.7853982) * fVar9 + fVar5;
      }
      (moby->rotation).z = fVar3;
      if ((int)(((uint)((int)g_heroPosition.z >> 0x1f) >> 1 ^ (uint)g_heroPosition.z) -
               ((int)g_heroPosition.z >> 0x1f)) < 0x42500000) {
        (moby->pos).z = fVar4 + 3.0;
      }
      lVar31 = 5;
      do {
        iVar20 = (int)uVar29;
        uVar29 = uVar29 + 4;
        *(undefined4 *)
         ((int)MobyInstance[*(int *)((int)pvVar10 + *(int *)(iVar20 + 0x5d0) * 0x30 + 0x20)].pVar +
         0x80) = 0x41200000;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      puVar19 = &DAT_0092713c;
      DAT_00927190 = 0xbf800000;
      lVar31 = 3;
      do {
        *puVar19 = 0;
        puVar19[1] = 0;
        puVar19[2] = 0;
        puVar19[3] = 0;
        puVar19[4] = 0;
        puVar19[5] = 0;
        puVar19 = puVar19 + 6;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      *(undefined4 *)((int)pvVar10 + 0x604) = 0xffffffff;
      *(undefined2 *)((int)pvVar10 + 0x5fc) = 100;
      moby->state = '\x01';
    }
    goto LAB_0001aff8;
  }
  mobyutil::MB_BobMotion
            (0.7,mobyutil::g_FrameTime * 1.2217305,moby,(float *)((int)pvVar10 + 0x5cc),
             (float *)((int)pvVar10 + 0x5c8));
  mobyutil::MB_SwingMotion
            ((double)DAT_0071cf48,(double)(DAT_0071cf40 * 0.017453292 * mobyutil::g_FrameTime),
             (double)(DAT_0071cf44 * 0.017453292 * mobyutil::g_FrameTime),lVar16,uVar29 + 0x5e4,
             uVar29 + 0x5e8);
  pSVar11 = Splines[*(int *)((int)pvVar10 + 0x5c0)];
  if ((int)*(short *)((int)pvVar10 + 0x5f8) < pSVar11->cnt + -0xb) {
    mobyutil::Delt(mobyutil::g_FrameTime * 8.0,DAT_0071f418 * 10.0,(float *)((int)pvVar10 + 0x5f0));
    fVar3 = *(float *)((int)pvVar10 + 0x5f0);
  }
  else {
    mobyutil::Delt(0.0,DAT_0071f418 * 8.0,(float *)((int)pvVar10 + 0x5f0));
    fVar3 = *(float *)((int)pvVar10 + 0x5f0);
    if (*(int *)((int)pvVar10 + 0x5f0) == 0) {
      moby->state = '\x03';
      goto LAB_0001aff8;
    }
  }
  iVar20 = pSVar11->cnt;
  iVar25 = *(short *)((int)pvVar10 + 0x5f8) + 1;
  iVar28 = (int)((longlong)*(short *)((int)pvVar10 + 0x5f8) << 4);
  iVar25 = iVar25 - (iVar25 / iVar20) * iVar20;
  fVar4 = *(float *)((int)pSVar11 + (iVar25 * 4 + 5) * 4);
  fVar6 = *(float *)((int)pSVar11 + (iVar25 * 4 + 4) * 4);
  fVar7 = fVar4 - *(float *)((int)&pSVar11->points[0].y + iVar28);
  fVar5 = fVar6 - *(float *)((int)&pSVar11->points[0].x + iVar28);
  fVar9 = *(float *)((int)pSVar11 + (iVar25 * 4 + 6) * 4) -
          *(float *)((int)&pSVar11->points[0].z + iVar28);
  dVar35 = 0.0;
  fVar8 = SQRT(fVar9 * fVar9 + fVar5 * fVar5 + fVar7 * fVar7);
  fVar3 = fVar3 / fVar8;
  dVar34 = dVar35;
  if (0.0 - fVar8 < 0.0) {
    dVar34 = (double)(fVar3 * fVar9);
  }
  dVar32 = dVar35;
  if (0.0 - fVar8 < 0.0) {
    dVar32 = (double)(fVar3 * fVar7);
  }
  dVar33 = dVar35;
  if (0.0 - fVar8 < 0.0) {
    dVar33 = (double)(fVar3 * fVar5);
  }
  if (fVar8 - 0.0 < 0.0) {
    dVar34 = (double)(fVar3 * fVar9);
  }
  if (fVar8 - 0.0 < 0.0) {
    dVar32 = (double)(fVar3 * fVar7);
  }
  if (fVar8 - 0.0 < 0.0) {
    dVar33 = (double)(fVar3 * fVar5);
  }
  (moby->pos).z = (float)((double)(moby->pos).z + dVar34);
  sVar21 = *(short *)((int)pvVar10 + 0x5f8);
  (moby->pos).x = (float)((double)(moby->pos).x + dVar33);
  (moby->pos).y = (float)((double)(moby->pos).y + dVar32);
  iVar28 = (int)((longlong)sVar21 << 4);
  fVar6 = fVar6 - *(float *)((int)&pSVar11->points[0].x + iVar28);
  fVar4 = fVar4 - *(float *)((int)&pSVar11->points[0].y + iVar28);
  fVar5 = ABS(fVar6);
  fVar7 = ABS(fVar4);
  *(float *)((int)puVar14 + 0x9c) = fVar6;
  *(float *)(puVar14 + 0x14) = fVar4;
  fVar4 = mobyutil::g_FrameTime;
  *(float *)((int)puVar14 + 0xa4) = fVar5 - fVar7;
  uVar17 = (ulonglong)(*(uint *)((int)puVar14 + 0x9c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar14 + 0xa4) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar14 + 0x14) >> 0x1d) & 4;
  fVar3 = ABS(*(float *)((int)puVar14 + 0x9c));
  if (*(float *)((int)puVar14 + 0xa4) - 0.0 < 0.0) {
    fVar3 = fVar7;
  }
  fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
  fVar7 = ABS(*(float *)(puVar14 + 0x14));
  if (*(float *)((int)puVar14 + 0xa4) - 0.0 < 0.0) {
    fVar7 = fVar5;
  }
  fVar5 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
  dVar34 = dVar35;
  if (0.0 < fVar3) {
    lVar18 = uVar26 - 0x140;
    lVar24 = uVar26 - 0x6c;
    lVar22 = uVar26 - 0x7c;
    lVar30 = 2;
    fVar3 = (fVar7 - fVar3) / (fVar7 + fVar3);
    fVar7 = fVar3 * fVar3;
    *(float *)(puVar14 + 0x1c) = fVar3;
    *(float *)(puVar14 + 0x1b) = fVar3;
    *(float *)((int)puVar14 + 0xdc) = fVar3;
    *(float *)((int)puVar14 + 0xd4) = fVar3;
    fVar3 = fVar7 * fVar7;
    *(float *)(puVar14 + 0x1b) = *(float *)(puVar14 + 0x1b) * fVar7;
    *(float *)((int)puVar14 + 0xdc) = *(float *)((int)puVar14 + 0xdc) * fVar3;
    *(float *)(puVar14 + 0x1c) = *(float *)(puVar14 + 0x1c) * fVar3 * fVar7;
    do {
      *(float *)((int)lVar18 + 0xd4) = *(float *)((int)lVar18 + 0xc4) * fVar3 * fVar3;
      iVar28 = (int)lVar22;
      lVar22 = lVar22 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar24 + 4) = *(float *)(iVar28 + 4) * fVar3 * fVar3;
      lVar24 = lVar24 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar30 = 4;
    lVar24 = uVar26 - 0x7c;
    pfVar23 = (float *)&DAT_007358e0;
    lVar18 = lVar31;
    lVar22 = lVar24;
    do {
      fVar3 = *pfVar23;
      fVar7 = pfVar23[1];
      pfVar23 = pfVar23 + 2;
      *(float *)((int)lVar18 + 0xd4) = *(float *)((int)lVar18 + 0xd4) * fVar3;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar7;
      lVar22 = lVar22 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar22 = 2;
    lVar18 = lVar31;
    do {
      iVar28 = (int)lVar18;
      iVar25 = (int)lVar24;
      lVar18 = lVar18 + 0x10;
      lVar24 = lVar24 + 0x10;
      dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar28 + 0xd4)) + *(float *)(iVar25 + 4)
                        + *(float *)(iVar25 + 8) + *(float *)(iVar25 + 0xc));
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar6 + fVar5);
  }
  if (iVar20 + -0x14 < (int)sVar21) {
    dVar34 = 3.054326057434082;
  }
  mobyutil::OrganicDeltAngSpeed
            (dVar34,(double)(DAT_0071f40c * 0.0015),(double)(DAT_0071f40c * 0.3),
             (double)(fVar4 * 0.17453292),lVar16,(longlong)sVar21,uVar29 + 0x5f4);
  sVar21 = *(short *)((int)pvVar10 + 0x5f8);
  fVar3 = (moby->pos).y;
  fVar4 = (moby->pos).x;
  iVar20 = (int)((longlong)sVar21 << 4);
  fVar6 = *(float *)((int)&pSVar11->points[0].y + iVar20);
  fVar7 = *(float *)((int)&pSVar11->points[0].x + iVar20);
  fVar5 = fVar3 - fVar6;
  fVar9 = fVar4 - fVar7;
  if (SQRT(fVar9 * fVar9 + fVar5 * fVar5) < 5.0) {
LAB_0001aa8c:
    *(short *)((int)pvVar10 + 0x5f8) =
         (short)(sVar21 + 1) - (short)((sVar21 + 1) / pSVar11->cnt) * (short)pSVar11->cnt;
  }
  else {
    fVar6 = fVar6 - fVar3;
    fVar7 = fVar7 - fVar4;
    dVar33 = ABS((double)fVar6);
    dVar32 = ABS((double)fVar7);
    *(float *)(puVar14 + 0x12) = fVar7;
    *(float *)((int)puVar14 + 0x94) = fVar6;
    fVar3 = (moby->rotation).z;
    *(float *)(puVar14 + 0x13) = (float)(dVar32 - dVar33);
    uVar17 = (ulonglong)(*(uint *)(puVar14 + 0x12) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar14 + 0x13) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar14 + 0x94) >> 0x1d) & 4;
    dVar34 = ABS((double)*(float *)(puVar14 + 0x12));
    if ((double)*(float *)(puVar14 + 0x13) - dVar35 < 0.0) {
      dVar34 = dVar33;
    }
    fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
    fVar4 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    dVar33 = ABS((double)*(float *)((int)puVar14 + 0x94));
    if ((double)*(float *)(puVar14 + 0x13) - dVar35 < 0.0) {
      dVar33 = dVar32;
    }
    if (dVar35 < dVar34) {
      lVar18 = uVar26 - 0x140;
      lVar24 = uVar26 - 0x8c;
      lVar22 = uVar26 - 0x9c;
      lVar30 = 2;
      fVar7 = (float)(dVar33 - dVar34) / (float)(dVar33 + dVar34);
      fVar5 = fVar7 * fVar7;
      *(float *)(puVar14 + 0x18) = fVar7;
      *(float *)(puVar14 + 0x17) = fVar7;
      *(float *)((int)puVar14 + 0xbc) = fVar7;
      *(float *)((int)puVar14 + 0xb4) = fVar7;
      fVar7 = fVar5 * fVar5;
      *(float *)(puVar14 + 0x17) = *(float *)(puVar14 + 0x17) * fVar5;
      *(float *)((int)puVar14 + 0xbc) = *(float *)((int)puVar14 + 0xbc) * fVar7;
      *(float *)(puVar14 + 0x18) = *(float *)(puVar14 + 0x18) * fVar7 * fVar5;
      do {
        *(float *)((int)lVar18 + 0xb4) = *(float *)((int)lVar18 + 0xa4) * fVar7 * fVar7;
        iVar20 = (int)lVar22;
        lVar22 = lVar22 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar20 + 4) * fVar7 * fVar7;
        lVar24 = lVar24 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar30 = 4;
      lVar24 = uVar26 - 0x9c;
      pfVar23 = (float *)&DAT_007358e0;
      lVar18 = lVar31;
      lVar22 = lVar24;
      do {
        fVar7 = *pfVar23;
        fVar5 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar18 + 0xb4) = *(float *)((int)lVar18 + 0xb4) * fVar7;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar5;
        lVar22 = lVar22 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar18 = 2;
      do {
        iVar20 = (int)lVar31;
        iVar28 = (int)lVar24;
        lVar31 = lVar31 + 0x10;
        lVar24 = lVar24 + 0x10;
        dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar20 + 0xb4)) +
                          *(float *)(iVar28 + 4) + *(float *)(iVar28 + 8) + *(float *)(iVar28 + 0xc)
                         );
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      dVar35 = (double)((float)(dVar35 + 0.7853981852531433) * fVar6 + fVar4);
    }
    dVar34 = (double)fastfunc::FastSubRots(fVar3,(float)dVar35);
    if (1.5707963705062866 < dVar34) {
      sVar21 = *(short *)((int)pvVar10 + 0x5f8);
      goto LAB_0001aa8c;
    }
  }
  mobyutil::MB_UpdateChildMobys(lVar16,uVar29,0x11);
  mobyupdate_helpers::M1274_00018238(lVar16);
LAB_0001aff8:
  mobyupdate_helpers::M1274_000199f0(lVar16);
  uVar1 = moby->state;
  if (((uVar1 == '\x02') || (uVar1 == '\x01')) || (uVar1 == '\x03')) {
    if (*(int *)((int)pvVar10 + 0x604) == -1) {
      iVar20 = sound::PlayMobySound(0,4,moby);
      *(int *)((int)pvVar10 + 0x604) = iVar20;
    }
  }
  else {
    iVar20 = *(int *)((int)pvVar10 + 0x604);
    if (((iVar20 != -1) && (sound::g_SoundChannels[iVar20].pMoby == moby)) &&
       (sound::g_SoundChannels[iVar20].state != '\0')) {
      sound::sound_Kill(iVar20);
    }
    *(undefined4 *)((int)pvVar10 + 0x604) = 0xffffffff;
  }
  return;
}



//==== 0001b0c8  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_MOBY184(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_MOBY184(void)

{
  DAT_0071cfac = 0x10000;
  return;
}



//==== 0001b100  ns=mobyupdate_helpers  size=0x40c
// sig: undefined M184_0001b100(void)
// callers(3): 00018238 mobyupdate_helpers::M1274_00018238; 00332c38 mobyupdate_unsorted::UpdateMoby_294; 0036e680 mobyupdate_unsorted::UpdateMoby_427
// callees(4): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 00127ea8 partupd::SpawnPart_26

MobyInstance *
mobyupdate_helpers::M184_0001b100
          (float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulonglong param_5,
          undefined8 param_6,longlong param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  float *pfVar7;
  ulonglong *puVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  MobyInstance *pMVar15;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  uint uVar20;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  undefined8 uVar23;
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  float fStack00000050;
  float fStack00000054;
  float fStack00000058;
  float fStack0000005c;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0xe0;
  puVar8 = (ulonglong *)lVar14;
  *puVar8 = uVar12;
  puVar8[0x1e] = in_LR;
  puVar8[0x19] = in_f29;
  puVar8[0x1a] = in_f30;
  puVar8[0x1b] = in_f31;
  puVar8[0x16] = unaff_r29;
  puVar8[0x17] = unaff_r30;
  puVar8[0x14] = unaff_r27;
  puVar8[0x18] = unaff_r31;
  puVar8[0x15] = unaff_r28;
  _fStack00000040 = param_3;
  _fStack00000048 = param_4;
  _fStack00000050 = param_5;
  _fStack00000058 = param_6;
  pMVar15 = mobyfunc::CreateMoby(PYROCITOR|BLARG_HEAVY_INTERCEPTOR_0008);
  if (pMVar15 != (MobyInstance *)0x0) {
    pfVar7 = (float *)pMVar15->pVar;
    pfVar7[6] = param_1;
    sVar6 = *(short *)((int)param_1 + 0xa6);
    pMVar15->updateDistance = -1;
    pMVar15->drawDistance = 0xff;
    pMVar15->enabled = '\x01';
    if (sVar6 != 0xff) {
      pMVar15->scale = pMVar15->scale * 0.5;
    }
    fVar3 = ABS(fStack00000050);
    fVar4 = ABS(fStack00000054);
    fVar1 = 0.0;
    (pMVar15->rotation).x = 0.0;
    (pMVar15->rotation).y = 0.0;
    *(float *)(puVar8 + 0xe) = fVar3 - fVar4;
    uVar13 = param_5 >> 0x3c & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1e) & 2 | (param_5 << 0x20) >> 0x3d & 4;
    fVar9 = fVar3;
    if (*(float *)(puVar8 + 0xe) - 0.0 < 0.0) {
      fVar9 = fVar4;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar13 << 2));
    fVar2 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
    if (*(float *)(puVar8 + 0xe) - 0.0 < 0.0) {
      fVar4 = fVar3;
    }
    if (0.0 < fVar9) {
      lVar18 = uVar12 - 0xd0;
      lVar16 = uVar12 - 0x5c;
      lVar17 = uVar12 - 0x6c;
      lVar21 = 2;
      fVar3 = (fVar4 - fVar9) / (fVar4 + fVar9);
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar8 + 0x10) = fVar3;
      *(float *)(puVar8 + 0xf) = fVar3;
      *(float *)((int)puVar8 + 0x7c) = fVar3;
      *(float *)((int)puVar8 + 0x74) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar8 + 0xf) = *(float *)(puVar8 + 0xf) * fVar4;
      *(float *)((int)puVar8 + 0x7c) = *(float *)((int)puVar8 + 0x7c) * fVar3;
      *(float *)(puVar8 + 0x10) = *(float *)(puVar8 + 0x10) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar18 + 0x74) = *(float *)((int)lVar18 + 100) * fVar3 * fVar3;
        iVar10 = (int)lVar17;
        lVar17 = lVar17 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar10 + 4) * fVar3 * fVar3;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar18 = uVar12 - 0x6c;
      lVar21 = 4;
      pfVar19 = (float *)&DAT_007358e0;
      lVar16 = lVar18;
      lVar17 = lVar14;
      do {
        fVar3 = *pfVar19;
        fVar4 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar17 + 0x74) = *(float *)((int)lVar17 + 0x74) * fVar3;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar16 = 2;
      do {
        iVar10 = (int)lVar14;
        iVar11 = (int)lVar18;
        lVar14 = lVar14 + 0x10;
        lVar18 = lVar18 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar10 + 0x74) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar2;
    }
    (pMVar15->rotation).z = fVar1;
    (pMVar15->pos).x = fStack00000040;
    (pMVar15->pos).y = fStack00000044;
    (pMVar15->pos).z = fStack00000048;
    (pMVar15->pos).w = fStack0000004c;
    *pfVar7 = fStack00000050;
    pfVar7[1] = fStack00000054;
    pfVar7[2] = fStack00000058;
    pfVar7[3] = fStack0000005c;
    dVar22 = (double)mobyutil::MB_randRangeFloat
                               (mobyutil::g_FrameTime * -1.5707964,mobyutil::g_FrameTime * 1.5707964
                               );
    pfVar7[4] = (float)dVar22;
    *(short *)(pfVar7 + 7) = (short)param_7;
    pfVar7[5] = 0.0;
    *(short *)((int)pfVar7 + 0x1e) = (short)param_7;
    fVar1 = (pMVar15->pos).y - g_heroPosition.y;
    fVar3 = (pMVar15->pos).x - g_heroPosition.x;
    fVar4 = (pMVar15->pos).z - g_heroPosition.z;
    pfVar7[9] = 0.0;
    pfVar7[10] = 0.0;
    pfVar7[8] = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar1 * fVar1);
    uVar23 = 0x40e3880000000000;
    uVar20 = (int)param_7 + (int)(param_7 << 2);
    if (*(short *)((int)param_1 + 0xa6) == 0xff) {
      partupd::SpawnPart_26
                (0x40f86a0000000000,pMVar15,0xff,0x2f7f4f4f,
                 ((int)uVar20 >> 2) + (uint)((int)uVar20 < 0 && (uVar20 & 3) != 0),
                 0xffffffffffffffff);
      partupd::SpawnPart_26(uVar23,pMVar15);
    }
    else {
      partupd::SpawnPart_26
                (0x40f86a0000000000,pMVar15,*(short *)((int)param_1 + 0xa6),0x2f4f7f7f,
                 ((int)uVar20 >> 2) + (uint)((int)uVar20 < 0 && (uVar20 & 3) != 0),
                 0xffffffffffffffff);
      partupd::SpawnPart_26(uVar23,pMVar15);
    }
    mobyfunc::UpdateMobyTransform(pMVar15);
  }
  return pMVar15;
}



//==== 0001b540  ns=mobyupdate_unsorted  size=0x644
// sig: undefined UpdateMoby_184(MobyInstance * moby)
// callers(0): 
// callees(8): 00057820 collproc::CollLine; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 00128248 partupd::SpawnPart_27; 0015d12c sound::PlayMobySound; 004fffb4 fastfunc::FastDecTimerS16; 00500608 fastfunc::FastVecNormalize

/* Moby 184 */

void mobyupdate_unsorted::UpdateMoby_184(MobyInstance *moby)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar12;
  undefined8 uVar11;
  undefined1 *puVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined4 local_d0 [4];
  undefined1 local_c0 [64];
  
  pfVar7 = (float *)moby->pVar;
  fVar2 = (moby->pos).x;
  fVar3 = (moby->pos).y;
  fVar4 = 64.0;
  fVar5 = (moby->pos).z;
  if (*(short *)((int)pfVar7[6] + 0xa6) == 0xff) {
    fVar4 = 128.0;
  }
  if (Level == Hoven) {
    fVar4 = 100.0;
  }
  dVar18 = (double)fVar4;
  fVar8 = fVar2 - g_heroPosition.x;
  fVar9 = fVar3 - g_heroPosition.y;
  fVar4 = pfVar7[10];
  fVar10 = fVar5 - g_heroPosition.z;
  (moby->pos).x = fVar2 + *pfVar7;
  (moby->pos).y = fVar3 + pfVar7[1];
  dVar20 = (double)SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9);
  (moby->pos).z = fVar5 + pfVar7[2];
  if ((((fVar4 == 0.0) && (pfVar7[9] != 0.0)) && ((double)pfVar7[8] < dVar20)) && (dVar20 < 3.0)) {
    sound::PlayMobySound(0,0,moby);
    pfVar7[10] = 1.4013e-45;
  }
  if (dVar20 < (double)pfVar7[8]) {
    pfVar7[9] = 1.4013e-45;
  }
  pfVar7[8] = (float)dVar20;
  if ((((int)(moby->pos).x < 0) || ((int)(moby->pos).y < 0)) ||
     (((int)(moby->pos).z < 0 ||
      (fVar3 = (moby->pos).y - GameCamera.posY, fVar2 = (moby->pos).x - GameCamera.posX,
      dVar18 < (double)SQRT(fVar2 * fVar2 + fVar3 * fVar3))))) {
    mobyfunc::DeleteMoby(moby);
  }
  else {
    puVar13 = (undefined1 *)0x0;
    if (moby->setByGroup == '\0') {
      puVar13 = local_c0;
    }
    iVar12 = fastfunc::FastDecTimerS16(pfVar7 + 7);
    if ((iVar12 == 0) || (moby->setByGroup != '\0')) {
      if ((*(short *)(pfVar7 + 7) < 1) && (moby->setByGroup != '\0')) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
    else {
      moby->setByGroup = '\x01';
      uVar6 = *(ushort *)((int)pfVar7 + 0x1e);
      *(ushort *)(pfVar7 + 7) = ((short)uVar6 >> 2) + (ushort)((short)uVar6 < 0 && (uVar6 & 3) != 0)
      ;
    }
    iVar12 = collproc::CollLine(local_f0,(longlong)(int)moby + 0x10,0,pfVar7[6],puVar13);
    if (iVar12 != 0) {
      (moby->pos).x = CollOutput.ip.x;
      cVar1 = moby->setByGroup;
      (moby->pos).y = CollOutput.ip.y;
      (moby->pos).z = CollOutput.ip.z;
      (moby->pos).w = CollOutput.ip.w;
      if (cVar1 == '\0') {
        iVar12 = 0;
        dVar19 = -1.0;
        dVar17 = 1.0;
        dVar16 = 3.0;
        dVar15 = 6.0;
        dVar20 = 10.5;
        dVar18 = 15.5;
        uVar14 = 0x40dd4c0000000000;
        do {
          mobyutil::MB_randRangeFloat((float)dVar19,(float)dVar17);
          mobyutil::MB_randRangeFloat((float)dVar19,(float)dVar17);
          mobyutil::MB_randRangeFloat((float)dVar19,(float)dVar17);
          fastfunc::FastVecNormalize(local_d0,pfVar7,0xa10980);
          mobyutil::MB_randRangeFloat
                    ((float)((double)mobyutil::g_FrameTime * dVar16),
                     (float)((double)mobyutil::g_FrameTime * dVar15));
          uVar11 = mobyutil::MB_randRange
                             ((int)((double)animationSpeed * dVar20),
                              (int)((double)animationSpeed * dVar18));
          partupd::SpawnPart_27(uVar14,(longlong)(int)moby + 0x10,local_e0,0x7f2f4f6f,uVar11);
          iVar12 = iVar12 + 1;
        } while (iVar12 < 5);
      }
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 0001bb84  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_MOBY326(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_MOBY326(void)

{
  DAT_0071d01c = 0x10000;
  return;
}



//==== 0001bbd8  ns=mobyupdate_helpers  size=0x350
// sig: undefined M326_0001bbd8(void)
// callers(2): 0001bf50 mobyupdate_helpers::M326_0001bf50; 0001cb80 mobyupdate_unsorted::UpdateMoby_326
// callees(2): 000ff190 mobyutil::MB_DeltAngSpeed; 005025e0 fastfunc::FastDiffRots

void mobyupdate_helpers::M326_0001bbd8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar23;
  double dVar24;
  ulonglong in_f31;
  double dVar25;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar14 = uVar13 - 0xe0;
  puVar9 = (ulonglong *)lVar14;
  *puVar9 = uVar13;
  puVar9[0x1e] = in_LR;
  puVar9[0x19] = in_f29;
  puVar9[0x1a] = in_f30;
  puVar9[0x1b] = in_f31;
  puVar9[0x17] = unaff_r30;
  iVar6 = *(int *)(param_1 + 0x78);
  puVar9[0x18] = unaff_r31;
  uVar7 = *(uint *)(iVar6 + 0x70);
  uVar8 = *(uint *)(iVar6 + 0x74);
  fVar12 = ABS(*(float *)(iVar6 + 0x70));
  fVar4 = ABS(*(float *)(iVar6 + 0x74));
  *(float *)(puVar9 + 0xe) = fVar12 - fVar4;
  dVar22 = 0.0;
  fVar1 = *(float *)(param_1 + 0x48);
  dVar25 = 0.7853981852531433;
  uVar17 = (ulonglong)(uVar7 >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1e) & 2 | (ulonglong)(uVar8 >> 0x1d) & 4;
  fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
  fVar3 = fVar12;
  if (*(float *)(puVar9 + 0xe) - 0.0 < 0.0) {
    fVar3 = fVar4;
  }
  fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
  if (*(float *)(puVar9 + 0xe) - 0.0 < 0.0) {
    fVar4 = fVar12;
  }
  puVar9[0x16] = unaff_r29;
  puVar9[0x15] = unaff_r28;
  puVar9[0x14] = unaff_r27;
  if (0.0 < fVar3) {
    lVar18 = uVar13 - 0xd0;
    lVar16 = uVar13 - 0x6c;
    lVar15 = uVar13 - 0x5c;
    lVar20 = 2;
    fVar3 = (fVar4 - fVar3) / (fVar4 + fVar3);
    fVar4 = fVar3 * fVar3;
    *(float *)(puVar9 + 0x10) = fVar3;
    *(float *)(puVar9 + 0xf) = fVar3;
    *(float *)((int)puVar9 + 0x7c) = fVar3;
    *(float *)((int)puVar9 + 0x74) = fVar3;
    fVar3 = fVar4 * fVar4;
    *(float *)(puVar9 + 0xf) = *(float *)(puVar9 + 0xf) * fVar4;
    *(float *)((int)puVar9 + 0x7c) = *(float *)((int)puVar9 + 0x7c) * fVar3;
    *(float *)(puVar9 + 0x10) = *(float *)(puVar9 + 0x10) * fVar3 * fVar4;
    do {
      *(float *)((int)lVar18 + 0x74) = *(float *)((int)lVar18 + 100) * fVar3 * fVar3;
      iVar10 = (int)lVar16;
      lVar18 = lVar18 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)(iVar10 + 4) * fVar3 * fVar3;
      lVar15 = lVar15 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar18 = uVar13 - 0x6c;
    pfVar19 = (float *)&DAT_007358e0;
    lVar20 = 4;
    lVar15 = lVar18;
    lVar16 = lVar14;
    do {
      fVar3 = *pfVar19;
      fVar4 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar16 + 0x74) = *(float *)((int)lVar16 + 0x74) * fVar3;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar4;
      lVar15 = lVar15 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar15 = 2;
    do {
      iVar10 = (int)lVar14;
      lVar14 = lVar14 + 0x10;
      iVar11 = (int)lVar18;
      lVar18 = lVar18 + 0x10;
      dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar10 + 0x74)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar5 + fVar2);
  }
  dVar21 = (double)fastfunc::FastDiffRots(dVar22,(double)fVar1);
  fVar1 = (float)(dVar21 + 1.570796251296997);
  dVar22 = (double)(float)(3.141592502593994 - dVar21);
  if (dVar21 - (double)(float)(3.141592502593994 - dVar21) < 0.0) {
    dVar22 = dVar21;
  }
  fVar5 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar5 = fVar1;
  }
  dVar24 = (double)(float)(-3.141592502593994 - dVar21);
  if ((double)(float)(-3.141592502593994 - dVar21) - dVar22 < 0.0) {
    dVar24 = dVar22;
  }
  dVar22 = (double)(float)(dVar24 * dVar24);
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
    fVar3 = fVar5;
  }
  fVar1 = (float)((double)mobyutil::g_FrameTime * 10.0);
  fVar12 = fVar3 * fVar3;
  dVar21 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar24));
  dVar23 = (double)(float)(dVar22 * dVar21);
  fVar4 = fVar12 * fVar12 * fVar3;
  fVar5 = fVar12 * fVar4;
  dVar24 = (double)((*(float *)(iVar6 + 0x94) * -0.2268928 *
                    ((float)(dVar22 * dVar23) * 2.601887e-06 +
                    (float)(dVar23 * -0.0001980741071747616 +
                           (double)(float)(dVar21 * 0.008333025500178337 +
                                          (double)(float)((double)(float)(dVar22 * dVar24) *
                                                          -0.16666656732559204 + dVar24))))) / fVar1
                   );
  dVar21 = 1.0471975803375244;
  dVar22 = (double)mobyutil::MB_DeltAngSpeed
                             ((double)*(float *)(param_1 + 0x44),
                              (double)((*(float *)(iVar6 + 0x94) * 0.2268928 *
                                       (fVar12 * fVar5 * 2.601887e-06 +
                                       fVar5 * -0.0001980741 +
                                       fVar4 * 0.0083330255 + fVar12 * fVar3 * -0.16666657 + fVar3))
                                      / fVar1),(double)(DAT_0071f418 * 0.5235988),
                              (double)(DAT_0071f418 * 1.0471976),
                              (double)(float)((double)mobyutil::g_FrameTime * dVar25));
  *(float *)(param_1 + 0x44) = (float)dVar22;
  dVar22 = (double)mobyutil::MB_DeltAngSpeed
                             ((double)*(float *)(param_1 + 0x40),dVar24,
                              (double)(float)((double)DAT_0071f418 * dVar21),
                              (double)(float)((double)DAT_0071f418 * 2.094395160675049),
                              (double)(mobyutil::g_FrameTime * 1.2217305));
  *(float *)(param_1 + 0x40) = (float)dVar22;
  return;
}



//==== 0001bf50  ns=mobyupdate_helpers  size=0x68c
// sig: undefined M326_0001bf50(void)
// callers(1): 0001cb80 mobyupdate_unsorted::UpdateMoby_326
// callees(4): 0001bbd8 mobyupdate_helpers::M326_0001bbd8; 000ff190 mobyutil::MB_DeltAngSpeed; 00109af0 mobyutil::Delt; 001118d8 mobyutil::MB_getTarget

undefined8 mobyupdate_helpers::M326_0001bf50(int param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int *piVar15;
  ulonglong uVar13;
  longlong lVar14;
  float *pfVar16;
  int iVar19;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar25;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar11 = uVar9 - 0x150;
  puVar8 = (ulonglong *)lVar11;
  *puVar8 = uVar9;
  puVar8[0x2c] = in_LR;
  puVar8[0x28] = in_f30;
  puVar8[0x29] = in_f31;
  puVar8[0x27] = unaff_r31;
  puVar8[0x25] = unaff_r29;
  puVar8[0x26] = unaff_r30;
  dVar21 = 0.0;
  iVar6 = *(int *)(param_1 + 0x78);
  piVar7 = *(int **)((int)Splines + (int)(param_2 << 2));
  iVar12 = *(int *)(iVar6 + 0xb4);
  iVar19 = *piVar7;
  puVar8[0x24] = unaff_r28;
  puVar8[0x23] = unaff_r27;
  dVar22 = dVar21;
  if (iVar12 < iVar19 + -1) {
    iVar19 = (iVar19 + -1) - iVar12;
    piVar15 = piVar7 + iVar12 * 4;
    do {
      iVar19 = iVar19 + -1;
      pfVar16 = (float *)(piVar15 + 7);
      piVar15 = piVar15 + 4;
      dVar22 = (double)(float)(dVar22 + (double)*pfVar16);
    } while (0 < iVar19);
  }
  dVar25 = 0.7853981852531433;
  if (dVar22 <= 5.0) {
    mobyutil::MB_getTarget(0x4048000000000000,param_1,&DAT_0001bf28,uVar9 - 0xe0);
    fVar1 = *(float *)(puVar8 + 0xe) - *(float *)(param_1 + 0x10);
    fVar3 = *(float *)((int)puVar8 + 0x74) - *(float *)(param_1 + 0x14);
    dVar23 = ABS((double)fVar1);
    dVar24 = ABS((double)fVar3);
    *(float *)(puVar8 + 0x18) = fVar1;
    *(float *)((int)puVar8 + 0xc4) = fVar3;
    fVar1 = *(float *)(param_1 + 0x48);
    *(float *)(puVar8 + 0x19) = (float)(dVar23 - dVar24);
    uVar13 = (ulonglong)(*(uint *)(puVar8 + 0x18) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0x19) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar8 + 0xc4) >> 0x1d) & 4;
    dVar22 = ABS((double)*(float *)(puVar8 + 0x18));
    if ((double)*(float *)(puVar8 + 0x19) - dVar21 < 0.0) {
      dVar22 = dVar24;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar13 << 2));
    fVar3 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
    dVar24 = ABS((double)*(float *)((int)puVar8 + 0xc4));
    if ((double)*(float *)(puVar8 + 0x19) - dVar21 < 0.0) {
      dVar24 = dVar23;
    }
    dVar23 = dVar21;
    if (dVar21 < dVar22) {
      lVar10 = uVar9 - 0x140;
      lVar14 = uVar9 - 0x78;
      lVar18 = uVar9 - 0x68;
      lVar20 = 2;
      fVar2 = (float)(dVar24 - dVar22) / (float)(dVar24 + dVar22);
      fVar4 = fVar2 * fVar2;
      *(float *)((int)puVar8 + 0xe4) = fVar2;
      *(float *)((int)puVar8 + 0xdc) = fVar2;
      *(float *)(puVar8 + 0x1c) = fVar2;
      *(float *)(puVar8 + 0x1b) = fVar2;
      fVar2 = fVar4 * fVar4;
      *(float *)((int)puVar8 + 0xdc) = *(float *)((int)puVar8 + 0xdc) * fVar4;
      *(float *)(puVar8 + 0x1c) = *(float *)(puVar8 + 0x1c) * fVar2;
      *(float *)((int)puVar8 + 0xe4) = *(float *)((int)puVar8 + 0xe4) * fVar2 * fVar4;
      do {
        *(float *)((int)lVar10 + 0xd8) = *(float *)((int)lVar10 + 200) * fVar2 * fVar2;
        iVar12 = (int)lVar14;
        lVar10 = lVar10 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar12 + 4) * fVar2 * fVar2;
        lVar18 = lVar18 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar20 = 4;
      lVar18 = uVar9 - 0x78;
      pfVar16 = (float *)&DAT_007358e0;
      lVar10 = lVar11;
      lVar14 = lVar18;
      do {
        fVar2 = *pfVar16;
        fVar4 = pfVar16[1];
        pfVar16 = pfVar16 + 2;
        *(float *)((int)lVar10 + 0xd8) = *(float *)((int)lVar10 + 0xd8) * fVar2;
        lVar10 = lVar10 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar4;
        lVar14 = lVar14 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar10 = 2;
      dVar22 = dVar21;
      do {
        iVar12 = (int)lVar11;
        lVar11 = lVar11 + 0x10;
        iVar19 = (int)lVar18;
        lVar18 = lVar18 + 0x10;
        dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar12 + 0xd8)) +
                          *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) + *(float *)(iVar19 + 0xc)
                         );
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      dVar23 = (double)((float)(dVar22 + dVar25) * fVar5 + fVar3);
    }
    dVar22 = (double)mobyutil::MB_DeltAngSpeed
                               ((double)fVar1,dVar23,0x3f70624de0000000,0x3fd3333340000000,
                                (double)(float)((double)mobyutil::g_FrameTime * dVar25),0x20000,
                                &DAT_00720000,iVar6 + 0x88);
    *(float *)(param_1 + 0x48) = (float)dVar22;
    mobyutil::Delt((float)dVar21,DAT_0071f418 * 9.0,(float *)(iVar6 + 0x94));
    fVar1 = *(float *)(iVar6 + 0x94);
    if (*(int *)(iVar6 + 0x94) == 0) {
      return 1;
    }
  }
  else {
    fVar1 = (float)piVar7[iVar12 * 4 + 4] - *(float *)(param_1 + 0x10);
    fVar3 = (float)piVar7[iVar12 * 4 + 5] - *(float *)(param_1 + 0x14);
    fVar2 = ABS(fVar1);
    fVar5 = ABS(fVar3);
    *(float *)((int)puVar8 + 0xcc) = fVar1;
    *(float *)(puVar8 + 0x1a) = fVar3;
    fVar1 = *(float *)(param_1 + 0x48);
    *(float *)((int)puVar8 + 0xd4) = fVar2 - fVar5;
    uVar17 = (ulonglong)(*(uint *)((int)puVar8 + 0xcc) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar8 + 0xd4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar8 + 0x1a) >> 0x1d) & 4;
    uVar13 = uVar17 << 2 | 0x735900;
    fVar3 = ABS(*(float *)((int)puVar8 + 0xcc));
    if (*(float *)((int)puVar8 + 0xd4) - 0.0 < 0.0) {
      fVar3 = fVar5;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
    fVar4 = ABS(*(float *)(puVar8 + 0x1a));
    if (*(float *)((int)puVar8 + 0xd4) - 0.0 < 0.0) {
      fVar4 = fVar2;
    }
    fVar2 = *(float *)((int)uVar13 + 4);
    dVar22 = dVar21;
    if (0.0 < fVar3) {
      lVar10 = uVar9 - 0x140;
      lVar18 = uVar9 - 0x48;
      lVar14 = uVar9 - 0x58;
      lVar20 = 2;
      fVar3 = (fVar4 - fVar3) / (fVar4 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar8 + 0x104) = fVar3;
      *(float *)((int)puVar8 + 0xfc) = fVar3;
      *(float *)(puVar8 + 0x20) = fVar3;
      *(float *)(puVar8 + 0x1f) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar8 + 0xfc) = *(float *)((int)puVar8 + 0xfc) * fVar4;
      *(float *)(puVar8 + 0x20) = *(float *)(puVar8 + 0x20) * fVar3;
      *(float *)((int)puVar8 + 0x104) = *(float *)((int)puVar8 + 0x104) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar10 + 0xf8) = *(float *)((int)lVar10 + 0xe8) * fVar3 * fVar3;
        iVar12 = (int)lVar14;
        lVar14 = lVar14 + 8;
        lVar10 = lVar10 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar12 + 4) * fVar3 * fVar3;
        lVar18 = lVar18 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar20 = 4;
      lVar18 = uVar9 - 0x58;
      uVar13 = ZEXT48(&DAT_007358e0);
      lVar10 = lVar11;
      lVar14 = lVar18;
      do {
        pfVar16 = (float *)uVar13;
        fVar3 = pfVar16[1];
        uVar13 = uVar13 + 8;
        *(float *)((int)lVar10 + 0xf8) = *(float *)((int)lVar10 + 0xf8) * *pfVar16;
        lVar10 = lVar10 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar3;
        lVar14 = lVar14 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar10 = 2;
      do {
        iVar12 = (int)lVar11;
        iVar19 = (int)lVar18;
        lVar11 = lVar11 + 0x10;
        lVar18 = lVar18 + 0x10;
        dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar12 + 0xf8)) +
                          *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) + *(float *)(iVar19 + 0xc)
                         );
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar5 + fVar2);
    }
    dVar22 = (double)mobyutil::MB_DeltAngSpeed
                               ((double)fVar1,dVar22,0x3f70624de0000000,0x3fd3333340000000,
                                (double)(mobyutil::g_FrameTime * 0.7853982),0x20000,uVar13,
                                iVar6 + 0x88);
    *(float *)(param_1 + 0x48) = (float)dVar22;
    mobyutil::Delt(mobyutil::g_FrameTime * 10.0,DAT_0071f418 * 7.0,(float *)(iVar6 + 0x94));
    fVar1 = *(float *)(iVar6 + 0x94);
  }
  iVar12 = *(int *)(iVar6 + 0xb4);
  fVar3 = (float)piVar7[iVar12 * 4 + 5] - *(float *)(param_1 + 0x14);
  fVar5 = (float)piVar7[iVar12 * 4 + 4] - *(float *)(param_1 + 0x10);
  fVar2 = (float)piVar7[iVar12 * 4 + 6] - *(float *)(param_1 + 0x18);
  *(int *)(iVar6 + 0x7c) = piVar7[iVar12 * 4 + 7];
  iVar12 = *(int *)(iVar6 + 0xb4);
  dVar25 = (double)SQRT(fVar2 * fVar2 + fVar5 * fVar5 + fVar3 * fVar3);
  fVar1 = (float)((double)fVar1 / dVar25);
  dVar22 = dVar21;
  if (dVar21 - dVar25 < 0.0) {
    dVar22 = (double)(fVar1 * fVar3);
  }
  dVar23 = dVar21;
  if (dVar21 - dVar25 < 0.0) {
    dVar23 = (double)(fVar1 * fVar5);
  }
  dVar24 = dVar21;
  if (dVar21 - dVar25 < 0.0) {
    dVar24 = (double)(fVar1 * fVar2);
  }
  if (dVar25 - dVar21 < 0.0) {
    dVar22 = (double)(fVar1 * fVar3);
  }
  if (dVar25 - dVar21 < 0.0) {
    dVar23 = (double)(fVar1 * fVar5);
  }
  if (dVar25 - dVar21 < 0.0) {
    dVar24 = (double)(fVar1 * fVar2);
  }
  *(float *)(iVar6 + 0x74) = (float)dVar22;
  *(float *)(iVar6 + 0x70) = (float)dVar23;
  *(float *)(iVar6 + 0x78) = (float)dVar24;
  fVar1 = (float)((double)*(float *)(param_1 + 0x10) + dVar23);
  *(float *)(param_1 + 0x10) = fVar1;
  fVar3 = *(float *)(param_1 + 0x14) + *(float *)(iVar6 + 0x74);
  *(float *)(param_1 + 0x14) = fVar3;
  fVar5 = *(float *)(param_1 + 0x18) + *(float *)(iVar6 + 0x78);
  *(float *)(param_1 + 0x18) = fVar5;
  fVar3 = fVar3 - (float)piVar7[iVar12 * 4 + 5];
  fVar1 = fVar1 - (float)piVar7[iVar12 * 4 + 4];
  fVar5 = fVar5 - (float)piVar7[iVar12 * 4 + 6];
  if (SQRT(fVar5 * fVar5 + fVar1 * fVar1 + fVar3 * fVar3) < 2.0) {
    iVar12 = iVar12 + 1;
    *(int *)(iVar6 + 0xb4) = iVar12;
    *(uint *)(iVar6 + 0xb4) =
         iVar12 + ((uint)((longlong)(*piVar7 + -1) - (longlong)iVar12 >> 0x3f) &
                  (*piVar7 + -1) - iVar12);
  }
  M326_0001bbd8(param_1);
  return 0;
}



//==== 0001c618  ns=mobyupdate_helpers  size=0x4b8
// sig: undefined M326_0001c618(void)
// callers(1): 0001cb80 mobyupdate_unsorted::UpdateMoby_326
// callees(6): 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0015d12c sound::PlayMobySound; 005025e0 fastfunc::FastDiffRots

void mobyupdate_helpers::M326_0001c618(MobyInstance *param_1)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  void *pvVar8;
  undefined2 uVar9;
  ulonglong *puVar10;
  int iVar11;
  ulonglong uVar12;
  float *pfVar14;
  int iVar15;
  longlong lVar13;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar20;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f31;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar13 = uVar12 - 0xd0;
  puVar10 = (ulonglong *)lVar13;
  *puVar10 = uVar12;
  puVar10[0x1c] = in_LR;
  puVar10[0x19] = in_f31;
  puVar10[0x18] = unaff_r31;
  puVar10[0x17] = unaff_r30;
  pvVar8 = param_1->pVar;
  uVar20 = ZEXT48(pvVar8);
  dVar25 = 0.0;
  puVar10[0x16] = unaff_r29;
  *(undefined4 *)((int)puVar10 + 0x74) = 0;
  pfVar14 = (float *)mobyutil::MB_damage(param_1,0x330000,0);
  iVar15 = mobyutil::MB_HandleDamage
                     (param_1,pfVar14,uVar20 + 0x20,0,puVar10 + 0xe,(int)puVar10 + 0x74,0,4);
  if (((*(int *)(puVar10 + 0xe) != 1) && (param_1->state != '\x06')) &&
     (sVar7 = *(short *)((int)pfVar14[8] + 0xa6), sVar7 != 0x199 && sVar7 != 0xb8)) {
    fVar2 = *(float *)((int)puVar10 + 0x74);
    if (sVar7 == 0x1ca) {
      fVar2 = 10.0;
      *(undefined4 *)((int)puVar10 + 0x74) = 0x41200000;
    }
    fVar2 = *(float *)((int)pvVar8 + 0x20) - fVar2;
    *(float *)((int)pvVar8 + 0x20) = fVar2;
    if ((iVar15 == 1) || ((double)fVar2 <= dVar25)) {
      sound::PlayMobySound(2,0,param_1);
      param_1->state = '\x06';
    }
    else if (iVar15 != 0xb) {
      *(undefined1 *)((int)pvVar8 + 0x67) = 0xb4;
      mobyutil::MB_UpdateLightsTransition(param_1,uVar20 + 0x60);
      fVar2 = (param_1->rotation).z;
      if ((pfVar14[7] == 5627.925) && (param_1->state != '\x05')) {
        fVar6 = (param_1->pos).x - *pfVar14;
        fVar3 = (param_1->pos).y - pfVar14[1];
        dVar24 = ABS((double)fVar6);
        dVar23 = ABS((double)fVar3);
        *(float *)(puVar10 + 0xf) = fVar6;
        *(float *)((int)puVar10 + 0x7c) = fVar3;
        *(float *)(puVar10 + 0x10) = (float)(dVar24 - dVar23);
        uVar17 = (ulonglong)(*(uint *)(puVar10 + 0xf) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar10 + 0x10) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar10 + 0x7c) >> 0x1d) & 4;
        dVar22 = ABS((double)*(float *)(puVar10 + 0xf));
        if ((double)*(float *)(puVar10 + 0x10) - dVar25 < 0.0) {
          dVar22 = dVar23;
        }
        fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
        dVar23 = ABS((double)*(float *)((int)puVar10 + 0x7c));
        if ((double)*(float *)(puVar10 + 0x10) - dVar25 < 0.0) {
          dVar23 = dVar24;
        }
        fVar3 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
        if (dVar25 < dVar22) {
          lVar19 = uVar12 - 0xc0;
          lVar16 = uVar12 - 0x3c;
          lVar18 = uVar12 - 0x4c;
          lVar21 = 2;
          fVar4 = (float)(dVar23 - dVar22) / (float)(dVar23 + dVar22);
          fVar5 = fVar4 * fVar4;
          *(float *)(puVar10 + 0x12) = fVar4;
          *(float *)(puVar10 + 0x11) = fVar4;
          *(float *)((int)puVar10 + 0x8c) = fVar4;
          *(float *)((int)puVar10 + 0x84) = fVar4;
          fVar4 = fVar5 * fVar5;
          *(float *)(puVar10 + 0x11) = *(float *)(puVar10 + 0x11) * fVar5;
          *(float *)((int)puVar10 + 0x8c) = *(float *)((int)puVar10 + 0x8c) * fVar4;
          *(float *)(puVar10 + 0x12) = *(float *)(puVar10 + 0x12) * fVar4 * fVar5;
          do {
            *(float *)((int)lVar19 + 0x84) = *(float *)((int)lVar19 + 0x74) * fVar4 * fVar4;
            iVar15 = (int)lVar18;
            lVar18 = lVar18 + 8;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar16 + 4) = *(float *)(iVar15 + 4) * fVar4 * fVar4;
            lVar16 = lVar16 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar19 = uVar12 - 0x4c;
          lVar21 = 4;
          pfVar14 = (float *)&DAT_007358e0;
          lVar16 = lVar19;
          lVar18 = lVar13;
          do {
            fVar4 = *pfVar14;
            fVar5 = pfVar14[1];
            pfVar14 = pfVar14 + 2;
            *(float *)((int)lVar18 + 0x84) = *(float *)((int)lVar18 + 0x84) * fVar4;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
            lVar16 = lVar16 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar16 = 2;
          do {
            iVar15 = (int)lVar13;
            iVar11 = (int)lVar19;
            lVar13 = lVar13 + 0x10;
            lVar19 = lVar19 + 0x10;
            dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar15 + 0x84)) +
                              *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                             *(float *)(iVar11 + 0xc));
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar6 + fVar3);
        }
        dVar22 = (double)fastfunc::FastDiffRots(dVar25,(double)fVar2);
        fVar2 = (float)(dVar22 + 1.570796251296997);
        dVar25 = (double)(float)(3.141592502593994 - dVar22);
        if (dVar22 - (double)(float)(3.141592502593994 - dVar22) < 0.0) {
          dVar25 = dVar22;
        }
        fVar6 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar6 = fVar2;
        }
        dVar23 = (double)(float)(-3.141592502593994 - dVar22);
        if ((double)(float)(-3.141592502593994 - dVar22) - dVar25 < 0.0) {
          dVar23 = dVar25;
        }
        dVar25 = (double)(float)(dVar23 * dVar23);
        fVar3 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar6 < 0.0) {
          fVar3 = fVar6;
        }
        fVar5 = fVar3 * fVar3;
        dVar22 = (double)(float)(dVar25 * (double)(float)(dVar25 * dVar23));
        dVar24 = (double)(float)(dVar25 * dVar22);
        fVar4 = fVar5 * fVar5 * fVar3;
        fVar6 = fVar5 * fVar4;
        fVar2 = ((float)(dVar25 * dVar24) * 2.601887e-06 +
                (float)(dVar24 * -0.0001980741071747616 +
                       (double)(float)(dVar22 * 0.008333025500178337 +
                                      (double)(float)((double)(float)(dVar25 * dVar23) *
                                                      -0.16666656732559204 + dVar23)))) *
                -0.34906584;
        fVar6 = (fVar5 * fVar6 * 2.601887e-06 +
                fVar6 * -0.0001980741 + fVar4 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3)
                * 0.08726646;
        if (ABS((param_1->rotation).x) < ABS(fVar2)) {
          (param_1->rotation).x = fVar2;
          *(undefined4 *)((int)pvVar8 + 0x98) = 0;
        }
        if (ABS((param_1->rotation).y) < ABS(fVar6)) {
          (param_1->rotation).y = fVar6;
          *(undefined4 *)((int)pvVar8 + 0x9c) = 0;
        }
        auVar26 = ZEXT416(0xffffffff);
        auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
        auVar27 = vectorShiftLeftIntegerWord(auVar26,auVar26);
        *(float *)((int)pvVar8 + 0x94) = mobyutil::g_FrameTime * 4.0;
        auVar26 = loadVectorLeftIndexed(0x34,0x1c5dc);
        auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar26 = vectorMultiplyAddFloatingPoint
                            (auVar28,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,
                             auVar27);
        auVar26 = vectorConvertToSignedFixedPointWordSaturate(auVar26,0);
        auVar26 = vectorSplatHalfWord(auVar26,1);
        uVar9 = storeVectorElementHalfWordIndexed(auVar26,0x8e,uVar20);
        *(undefined2 *)((int)pvVar8 + 0x8e) = uVar9;
        uVar1 = param_1->state;
        param_1->state = '\x05';
        param_1->setByGroup = uVar1;
        sound::PlayMobySound(1,0,param_1);
      }
    }
  }
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar20 + 0x60);
  return;
}



//==== 0001cb80  ns=mobyupdate_unsorted  size=0x1b48
// sig: undefined UpdateMoby_326(MobyInstance * moby)
// callers(0): 
// callees(29): 0001bbd8 mobyupdate_helpers::M326_0001bbd8; 0001bf50 mobyupdate_helpers::M326_0001bf50; 0001c618 mobyupdate_helpers::M326_0001c618; 0001f240 mobyupdate_helpers::M409_0001f240; 0007b310 help::Help_QueueMessage; 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000f31a8 mobyfunc::UpdateMobyTransform; 000f98d8 mobyfunc::UpdateMobyAnimFrame; 000fcbe8 mobyutil::MB_randRangeFloat; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fe484 mobyutil::MB_randRange; 000fe4f0 mobyutil::MB_randRangeSigned; 000ff190 mobyutil::MB_DeltAngSpeed; 00106360 mobyutil::MB_SetZBoundsFromGround; 00109af0 mobyutil::Delt; 0010e030 mobyutil::MB_genericExplosion; 00110b70 mobyutil::MB_IsPntInCuboid; 001118d8 mobyutil::MB_getTarget; 00118020 mobyutil::Spline_ComputeSegmentLengths; 00119a18 mobyfunc::DoManipulator; 00121740 partupd::SpawnPart_4; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 0025cd18 FUN_0025cd18; 0025ce40 FUN_0025ce40; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot
// strings: 00a1000c: 'None'

/* Moby 326 */

void mobyupdate_unsorted::UpdateMoby_326(MobyInstance *moby)

{
  float fVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  short sVar9;
  void *pvVar10;
  MobyInstance *pMoby;
  u16 *puVar11;
  Spline *pSVar12;
  undefined2 uVar13;
  ulonglong *puVar14;
  float fVar15;
  float fVar16;
  bool bVar17;
  gameMode_t gVar18;
  ulonglong uVar19;
  longlong lVar20;
  int iVar24;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar25;
  Vec4 *pVVar26;
  undefined4 uVar27;
  int iVar30;
  MobyModeBit MVar32;
  ulonglong uVar28;
  float *pfVar31;
  longlong lVar29;
  longlong lVar33;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  longlong lVar34;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar35;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar36;
  double dVar37;
  double dVar38;
  ulonglong in_f24;
  double dVar39;
  ulonglong in_f25;
  double dVar40;
  ulonglong in_f26;
  double dVar41;
  ulonglong in_f27;
  double dVar42;
  ulonglong in_f28;
  double dVar43;
  ulonglong in_f29;
  double dVar44;
  ulonglong in_f30;
  undefined8 uVar45;
  double dVar46;
  ulonglong in_f31;
  undefined8 uVar47;
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  
  lVar20 = (longlong)(int)moby;
  uVar19 = ZEXT48(&stack0x00000000);
  lVar23 = uVar19 - 0x280;
  puVar14 = (ulonglong *)lVar23;
  *puVar14 = uVar19;
  puVar14[0x52] = in_LR;
  puVar14[0x48] = in_f24;
  puVar14[0x49] = in_f25;
  puVar14[0x4a] = in_f26;
  puVar14[0x4b] = in_f27;
  puVar14[0x4c] = in_f28;
  puVar14[0x4d] = in_f29;
  puVar14[0x4e] = in_f30;
  puVar14[0x4f] = in_f31;
  puVar14[0x47] = unaff_r31;
  puVar14[0x46] = unaff_r30;
  gVar18 = g_gameMode;
  pvVar10 = moby->pVar;
  uVar35 = ZEXT48(pvVar10);
  puVar14[0x45] = unaff_r29;
  puVar14[0x44] = unaff_r28;
  puVar14[0x43] = unaff_r27;
  puVar14[0x42] = unaff_r26;
  puVar14[0x41] = unaff_r25;
  puVar14[0x40] = unaff_r24;
  if (gVar18 == GAME_MODE_SCENE) {
    return;
  }
  mobyutil::MB_getTarget(0x4051800000000000,lVar20,&DAT_0001cad0,uVar19 - 400);
  pMoby = *(MobyInstance **)((int)pvVar10 + 0xac);
  if ((pMoby != (MobyInstance *)0x0) && (pMoby->state < 0x80)) {
    mobyfunc::DoManipulator(0x40059999a0000000,pMoby,0,(Manipulator *)((int)pvVar10 + 0xd0));
  }
  mobyupdate_helpers::M326_0001c618(lVar20);
  if (g_heroType == '\x02') {
    iVar24 = *(int *)((int)pvVar10 + 0xac);
    moby->scale = moby->pClass->gScale * 0.5;
    if (iVar24 != 0) {
      *(float *)(iVar24 + 0x2c) = *(float *)(*(int *)(iVar24 + 0x24) + 0x24) * 0.5;
    }
  }
  else {
    iVar24 = *(int *)((int)pvVar10 + 0xac);
    moby->scale = moby->pClass->gScale;
    if (iVar24 != 0) {
      *(undefined4 *)(iVar24 + 0x2c) = *(undefined4 *)(*(int *)(iVar24 + 0x24) + 0x24);
    }
  }
  uVar2 = moby->state;
  if (((uVar2 == '\x03' || uVar2 == '\x02') || (uVar2 == '\x04')) || (uVar2 == '\x05')) {
    if (*(int *)((int)pvVar10 + 0xb0) == -1) {
      iVar24 = sound::PlayMobySound(3,4,moby);
      *(int *)((int)pvVar10 + 0xb0) = iVar24;
    }
  }
  else {
    iVar24 = *(int *)((int)pvVar10 + 0xb0);
    if (((iVar24 != -1) && (sound::g_SoundChannels[iVar24].pMoby == moby)) &&
       (sound::g_SoundChannels[iVar24].state != '\0')) {
      sound::sound_Kill(iVar24);
    }
    *(undefined4 *)((int)pvVar10 + 0xb0) = 0xffffffff;
  }
  if (((Level == Hoven) && (DAT_00927118 != 0)) && (*(int *)((int)pvVar10 + 0xc0) == 0)) {
    if ((MobyInstance *)GameCamera.field19_0x25c._0_4_ == moby) {
      GameCamera.field19_0x25c[0] = '\0';
      GameCamera.field19_0x25c[1] = '\0';
      GameCamera.field19_0x25c[2] = '\0';
      GameCamera.field19_0x25c[3] = '\0';
    }
    if (moby->enabled == '\0') {
      if (*(MobyInstance **)((int)pvVar10 + 0xac) != (MobyInstance *)0x0) {
        mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar10 + 0xac));
        *(undefined4 *)((int)pvVar10 + 0xac) = 0;
      }
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  iVar24 = *(int *)((int)pvVar10 + 0xc0);
  if (iVar24 != 0) {
    if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
      if (*(MobyInstance **)((int)pvVar10 + 0xac) != (MobyInstance *)0x0) {
        mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar10 + 0xac));
        *(undefined4 *)((int)pvVar10 + 0xac) = 0;
      }
      mobyfunc::DeleteMoby(moby);
      return;
    }
    if (DAT_009271d0 != 0) {
      if (*(int *)((int)pvVar10 + 0xac) != 0) {
        FUN_0025ce40(lVar20,*(int *)((int)pvVar10 + 0xac));
        *(undefined4 *)((int)pvVar10 + 0xac) = 0;
      }
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  uVar2 = moby->state;
  if (uVar2 == '\x06') {
    if ((MobyInstance *)GameCamera.field19_0x25c._0_4_ == moby) {
      GameCamera.field19_0x25c[0] = '\0';
      GameCamera.field19_0x25c[1] = '\0';
      GameCamera.field19_0x25c[2] = '\0';
      GameCamera.field19_0x25c[3] = '\0';
    }
    if (*(int *)((int)pvVar10 + 0xac) != 0) {
      FUN_0025ce40(lVar20,*(int *)((int)pvVar10 + 0xac));
      *(undefined4 *)((int)pvVar10 + 0xac) = 0;
    }
    puVar14[0x12] = 2;
    puVar14[0x14] = 1;
    puVar14[0x15] = 1;
    puVar14[0x16] = 0xffffffffffffffff;
    puVar14[0x17] = 0;
    mobyutil::MB_genericExplosion
              (0,0,0x4010000000000000,0x4000000000000000,0x40f86a0000000000,0x4008000000000000,
               0x402e000000000000,lVar20,&DAT_00a15d30,lVar20 + 0x10,0,2,0x14,3,4);
    if (*(int *)((int)pvVar10 + 0xc0) == 0) {
      mobyutil::MB_SpawnBoltsFromCrate(lVar20,0,0xffffffffffffffff);
    }
    iVar24 = *(int *)((int)pvVar10 + 0xb0);
    if (((iVar24 != -1) && (sound::g_SoundChannels[iVar24].pMoby == moby)) &&
       (sound::g_SoundChannels[iVar24].state != '\0')) {
      sound::sound_Kill(iVar24);
    }
    *(undefined4 *)((int)pvVar10 + 0xb0) = 0xffffffff;
    fVar1 = animationSpeed;
    if (*(int *)((int)pvVar10 + 0xc0) == 0) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
    puVar14[0x3e] = (longlong)(int)(animationSpeed * 240.5);
    puVar14[0x3e] = (longlong)(int)(fVar1 * 400.5);
    uVar27 = mobyutil::MB_randRange
                       (*(undefined4 *)((int)puVar14 + 500),*(undefined4 *)((int)puVar14 + 500));
    *(undefined4 *)((int)pvVar10 + 0xc4) = uVar27;
    moby->collision = (ushort *)0x0;
    moby->state = '\0';
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
          LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
          NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
  }
  else if (uVar2 == '\x05') {
    iVar24 = fastfunc::FastDecTimerS16(uVar35 + 0x8e);
    if (iVar24 == 0) {
      fVar1 = -(DAT_0071f418 * 4.0 - *(float *)((int)pvVar10 + 0x94));
      *(float *)((int)pvVar10 + 0x94) = fVar1;
      if (fVar1 < 0.0) {
        *(undefined4 *)((int)pvVar10 + 0x94) = 0;
        fVar1 = 0.0;
      }
      fVar7 = (moby->rotation).z;
      fVar8 = fVar7 + 1.5707963;
      fVar3 = 3.1415925 - fVar7;
      if (fVar7 - (3.1415925 - fVar7) < 0.0) {
        fVar3 = fVar7;
      }
      fVar4 = 3.1415925 - fVar8;
      if (fVar8 - (3.1415925 - fVar8) < 0.0) {
        fVar4 = fVar8;
      }
      fVar5 = -3.1415925 - fVar7;
      if ((-3.1415925 - fVar7) - fVar3 < 0.0) {
        fVar5 = fVar3;
      }
      fVar7 = -3.1415925 - fVar8;
      if ((-3.1415925 - fVar8) - fVar4 < 0.0) {
        fVar7 = fVar4;
      }
      fVar8 = fVar5 * fVar5;
      fVar3 = fVar7 * fVar7;
      fVar15 = fVar8 * fVar8 * fVar5;
      fVar4 = fVar3 * fVar3 * fVar7;
      fVar16 = fVar8 * fVar15;
      fVar6 = fVar3 * fVar4;
      (moby->pos).y =
           (moby->pos).y +
           -((fVar8 * fVar16 * 2.601887e-06 +
             fVar16 * -0.0001980741 + fVar15 * 0.0083330255 + fVar8 * fVar5 * -0.16666657 + fVar5) *
            fVar1);
      (moby->pos).x =
           (moby->pos).x +
           -((fVar3 * fVar6 * 2.601887e-06 +
             fVar6 * -0.0001980741 + fVar4 * 0.0083330255 + fVar3 * fVar7 * -0.16666657 + fVar7) *
            fVar1);
    }
    else {
      moby->state = moby->setByGroup;
    }
  }
  else if (uVar2 == '\x04') {
    fVar1 = *(float *)(puVar14 + 0x1e) - (moby->pos).x;
    fVar7 = *(float *)((int)puVar14 + 0xf4) - (moby->pos).y;
    pfVar31 = (float *)&mobyutil::g_atanQuadrantTable;
    fVar3 = ABS(fVar1);
    fVar8 = ABS(fVar7);
    *(float *)(puVar14 + 0x28) = fVar1;
    *(float *)((int)puVar14 + 0x144) = fVar7;
    fVar1 = (moby->rotation).z;
    *(float *)(puVar14 + 0x29) = fVar3 - fVar8;
    dVar41 = 0.0;
    uVar21 = (ulonglong)(*(uint *)(puVar14 + 0x28) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar14 + 0x29) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar14 + 0x144) >> 0x1d) & 4;
    fVar7 = ABS(*(float *)(puVar14 + 0x28));
    if (*(float *)(puVar14 + 0x29) - 0.0 < 0.0) {
      fVar7 = fVar8;
    }
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
    fVar8 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
    fVar5 = ABS(*(float *)((int)puVar14 + 0x144));
    if (*(float *)(puVar14 + 0x29) - 0.0 < 0.0) {
      fVar5 = fVar3;
    }
    dVar42 = dVar41;
    if (0.0 < fVar7) {
      lVar34 = uVar19 - 0x270;
      lVar22 = uVar19 - 0x110;
      lVar29 = uVar19 - 0x100;
      lVar33 = 2;
      fVar7 = (fVar5 - fVar7) / (fVar5 + fVar7);
      fVar3 = fVar7 * fVar7;
      *(float *)((int)puVar14 + 0x17c) = fVar7;
      *(float *)((int)puVar14 + 0x174) = fVar7;
      *(float *)(puVar14 + 0x2f) = fVar7;
      *(float *)(puVar14 + 0x2e) = fVar7;
      fVar7 = fVar3 * fVar3;
      *(float *)((int)puVar14 + 0x174) = *(float *)((int)puVar14 + 0x174) * fVar3;
      *(float *)(puVar14 + 0x2f) = *(float *)(puVar14 + 0x2f) * fVar7;
      *(float *)((int)puVar14 + 0x17c) = *(float *)((int)puVar14 + 0x17c) * fVar7 * fVar3;
      do {
        *(float *)((int)lVar34 + 0x170) = *(float *)((int)lVar34 + 0x160) * fVar7 * fVar7;
        iVar24 = (int)lVar22;
        lVar34 = lVar34 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar7 * fVar7;
        lVar29 = lVar29 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar33 = 4;
      lVar29 = uVar19 - 0x110;
      pfVar31 = (float *)&DAT_007358e0;
      lVar34 = lVar23;
      lVar22 = lVar29;
      do {
        fVar7 = *pfVar31;
        fVar3 = pfVar31[1];
        pfVar31 = pfVar31 + 2;
        *(float *)((int)lVar34 + 0x170) = *(float *)((int)lVar34 + 0x170) * fVar7;
        lVar34 = lVar34 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar3;
        lVar22 = lVar22 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar34 = 2;
      do {
        iVar24 = (int)lVar23;
        lVar23 = lVar23 + 0x10;
        iVar30 = (int)lVar29;
        lVar29 = lVar29 + 0x10;
        dVar42 = (double)((float)(dVar42 + (double)*(float *)(iVar24 + 0x170)) +
                          *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) + *(float *)(iVar30 + 0xc)
                         );
        lVar34 = lVar34 + -1;
      } while (lVar34 != 0);
      dVar42 = (double)((float)(dVar42 + 0.7853981852531433) * fVar4 + fVar8);
    }
    dVar42 = (double)mobyutil::MB_DeltAngSpeed
                               ((double)fVar1,dVar42,0x3f70624de0000000,0x3fd3333340000000,
                                (double)(mobyutil::g_FrameTime * 0.7853982),&DAT_0001cad0,pfVar31,
                                uVar35 + 0x88);
    iVar24 = *(int *)((int)pvVar10 + 0xa4);
    (moby->rotation).z = (float)dVar42;
    pSVar12 = Splines[iVar24];
    if (*(short *)((int)pvVar10 + 0xbe) == 0) {
      fVar7 = (moby->pos).x;
      fVar3 = (moby->pos).y;
      fVar5 = (moby->pos).z;
      pVVar26 = pSVar12->points + pSVar12->cnt + -1;
      fVar1 = pVVar26->x;
      fVar8 = pVVar26->y;
      fVar4 = pVVar26->z;
      fVar6 = pVVar26->w;
    }
    else {
      fVar1 = pSVar12->points[0].x;
      fVar7 = (moby->pos).x;
      fVar8 = pSVar12->points[0].y;
      fVar3 = (moby->pos).y;
      fVar4 = pSVar12->points[0].z;
      fVar5 = (moby->pos).z;
      fVar6 = pSVar12->points[0].w;
    }
    dVar48 = (double)fVar6;
    dVar43 = (double)(fVar8 - fVar3);
    dVar44 = (double)(fVar4 - fVar5);
    dVar42 = (double)(fVar1 - fVar7);
    dVar46 = (double)SQRT((float)(dVar44 * dVar44 +
                                 (double)(float)(dVar42 * dVar42 + (double)(float)(dVar43 * dVar43))
                                 ));
    if (dVar46 <= 5.5) {
      mobyutil::Delt((float)dVar41,DAT_0071f418 * 9.0,(float *)((int)pvVar10 + 0x94));
      fVar1 = *(float *)((int)pvVar10 + 0x94);
      if (*(int *)((int)pvVar10 + 0x94) == 0) {
        auVar51 = ZEXT416(0xffffffff);
        auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
        auVar50 = vectorShiftLeftIntegerWord(auVar51,auVar51);
        auVar51 = loadVectorLeftIndexed(0x6c,0x1cad0);
        auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar51 = vectorMultiplyAddFloatingPoint
                            (auVar49,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,
                             auVar50);
        auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
        auVar51 = vectorSplatHalfWord(auVar51,1);
        uVar13 = storeVectorElementHalfWordIndexed(auVar51,0x8c,uVar35);
        *(undefined2 *)((int)pvVar10 + 0x8c) = uVar13;
        *(short *)((int)pvVar10 + 0xbe) =
             (short)((ulonglong)(LZCOUNT((uint)*(ushort *)((int)pvVar10 + 0xbe)) << 0x20) >> 0x25);
        moby->state = '\x03';
        goto LAB_0001e478;
      }
    }
    else {
      mobyutil::Delt(mobyutil::g_FrameTime * 10.0,DAT_0071f418 * 7.0,(float *)((int)pvVar10 + 0x94))
      ;
      fVar1 = *(float *)((int)pvVar10 + 0x94);
    }
    dVar37 = (double)(float)((double)fVar1 / dVar46);
    *(float *)((int)pvVar10 + 0x7c) = (float)dVar48;
    dVar48 = dVar41;
    if (dVar41 - dVar46 < 0.0) {
      dVar48 = (double)(float)(dVar37 * dVar43);
    }
    dVar38 = dVar41;
    if (dVar41 - dVar46 < 0.0) {
      dVar38 = (double)(float)(dVar37 * dVar42);
    }
    dVar39 = dVar41;
    if (dVar41 - dVar46 < 0.0) {
      dVar39 = (double)(float)(dVar37 * dVar44);
    }
    if (dVar46 - dVar41 < 0.0) {
      dVar48 = (double)(float)(dVar37 * dVar43);
    }
    if (dVar46 - dVar41 < 0.0) {
      dVar38 = (double)(float)(dVar37 * dVar42);
    }
    if (dVar46 - dVar41 < 0.0) {
      dVar39 = (double)(float)(dVar37 * dVar44);
    }
    *(float *)((int)pvVar10 + 0x74) = (float)dVar48;
    *(float *)((int)pvVar10 + 0x70) = (float)dVar38;
    *(float *)((int)pvVar10 + 0x78) = (float)dVar39;
    (moby->pos).x = (float)((double)(moby->pos).x + dVar38);
    (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar10 + 0x74);
    (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar10 + 0x78);
    mobyupdate_helpers::M326_0001bbd8(lVar20);
  }
  else if (uVar2 == '\x03') {
    if (((Level == Hoven) && (UnlockableItems.devastator == '\0')) &&
       (CHAR_ARRAY_00a1000c._744_2_ == 0)) {
      help::Help_QueueMessage(STR_YOU_NEED_A_DEVASTATOR_0x2EE2,0x5d);
      iVar24 = *(int *)((int)pvVar10 + 0xc0);
    }
    fVar1 = (moby->pos).y;
    fVar7 = (moby->pos).x;
    if (iVar24 == 0) {
      if ((21.0 <= SQRT((fVar7 - g_heroPosition.x) * (fVar7 - g_heroPosition.x) +
                        (fVar1 - g_heroPosition.y) * (fVar1 - g_heroPosition.y))) ||
         ((moby->pos).z - g_heroPosition.z <= 1.0)) {
        if ((MobyInstance *)GameCamera.field19_0x25c._0_4_ == moby) {
          GameCamera.field19_0x25c[0] = '\0';
          GameCamera.field19_0x25c[1] = '\0';
          GameCamera.field19_0x25c[2] = '\0';
          GameCamera.field19_0x25c[3] = '\0';
        }
      }
      else if (GameCamera.field19_0x25c._0_4_ == 0) {
        GameCamera.field19_0x25c[4] = '\0';
        GameCamera.field19_0x25c[5] = '\0';
        GameCamera.field19_0x25c[6] = '\0';
        GameCamera.field19_0x25c[7] = '\0';
        GameCamera.field19_0x25c._0_4_ = moby;
      }
    }
    fVar8 = fVar1 - *(float *)((int)puVar14 + 0xf4);
    fVar3 = fVar7 - *(float *)(puVar14 + 0x1e);
    if (((SQRT(fVar3 * fVar3 + fVar8 * fVar8) < 40.0) &&
        (-2.0 < (moby->pos).z - *(float *)(puVar14 + 0x1f))) || (*(int *)((int)pvVar10 + 0xc0) != 0)
       ) {
      fVar7 = *(float *)(puVar14 + 0x1e) - fVar7;
      fVar1 = *(float *)((int)puVar14 + 0xf4) - fVar1;
      fVar3 = ABS(fVar7);
      fVar8 = ABS(fVar1);
      *(float *)((int)puVar14 + 0x164) = fVar7;
      *(float *)(puVar14 + 0x2d) = fVar1;
      *(float *)((int)puVar14 + 0x16c) = fVar3 - fVar8;
      dVar41 = 0.0;
      fVar1 = (moby->rotation).z;
      uVar21 = (ulonglong)(*(uint *)((int)puVar14 + 0x164) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar14 + 0x16c) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar14 + 0x2d) >> 0x1d) & 4;
      uVar28 = uVar21 << 2 | 0x735900;
      fVar7 = ABS(*(float *)((int)puVar14 + 0x164));
      if (*(float *)((int)puVar14 + 0x16c) - 0.0 < 0.0) {
        fVar7 = fVar8;
      }
      fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
      fVar4 = ABS(*(float *)(puVar14 + 0x2d));
      if (*(float *)((int)puVar14 + 0x16c) - 0.0 < 0.0) {
        fVar4 = fVar3;
      }
      fVar3 = *(float *)((int)uVar28 + 4);
      dVar42 = dVar41;
      if (0.0 < fVar7) {
        lVar34 = uVar19 - 0x270;
        lVar29 = uVar19 - 0xa0;
        lVar22 = uVar19 - 0xb0;
        lVar33 = 2;
        fVar7 = (fVar4 - fVar7) / (fVar4 + fVar7);
        fVar4 = fVar7 * fVar7;
        *(float *)((int)puVar14 + 0x1dc) = fVar7;
        *(float *)((int)puVar14 + 0x1d4) = fVar7;
        *(float *)(puVar14 + 0x3b) = fVar7;
        *(float *)(puVar14 + 0x3a) = fVar7;
        fVar7 = fVar4 * fVar4;
        *(float *)((int)puVar14 + 0x1d4) = *(float *)((int)puVar14 + 0x1d4) * fVar4;
        *(float *)(puVar14 + 0x3b) = *(float *)(puVar14 + 0x3b) * fVar7;
        *(float *)((int)puVar14 + 0x1dc) = *(float *)((int)puVar14 + 0x1dc) * fVar7 * fVar4;
        do {
          *(float *)((int)lVar34 + 0x1d0) = *(float *)((int)lVar34 + 0x1c0) * fVar7 * fVar7;
          iVar24 = (int)lVar22;
          lVar22 = lVar22 + 8;
          lVar34 = lVar34 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar7 * fVar7;
          lVar29 = lVar29 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar33 = 4;
        lVar29 = uVar19 - 0xb0;
        uVar28 = ZEXT48(&DAT_007358e0);
        lVar34 = lVar23;
        lVar22 = lVar29;
        do {
          pfVar31 = (float *)uVar28;
          fVar7 = pfVar31[1];
          uVar28 = uVar28 + 8;
          *(float *)((int)lVar34 + 0x1d0) = *(float *)((int)lVar34 + 0x1d0) * *pfVar31;
          lVar34 = lVar34 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar7;
          lVar22 = lVar22 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar22 = 2;
        lVar34 = lVar23;
        do {
          iVar24 = (int)lVar34;
          iVar30 = (int)lVar29;
          lVar34 = lVar34 + 0x10;
          lVar29 = lVar29 + 0x10;
          dVar42 = (double)((float)(dVar42 + (double)*(float *)(iVar24 + 0x1d0)) +
                            *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) +
                           *(float *)(iVar30 + 0xc));
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        dVar42 = (double)((float)(dVar42 + 0.7853981852531433) * fVar8 + fVar3);
      }
      uVar47 = 0x3f70624de0000000;
      uVar45 = 0x3fd3333340000000;
      dVar48 = 0.7853981852531433;
      dVar42 = (double)mobyutil::MB_DeltAngSpeed
                                 ((double)fVar1,dVar42,0x3f70624de0000000,0x3fd3333340000000,
                                  (double)(mobyutil::g_FrameTime * 0.7853982),&DAT_0001cad0,uVar28,
                                  uVar35 + 0x88);
      fVar8 = *(float *)((int)puVar14 + 0xf4) - (moby->pos).y;
      fVar3 = *(float *)(puVar14 + 0x1e) - (moby->pos).x;
      fVar1 = *(float *)(puVar14 + 0x1f);
      (moby->rotation).z = (float)dVar42;
      fVar1 = (moby->pos).z - fVar1;
      fVar7 = (moby->rotation).y;
      dVar43 = (double)mobyutil::g_FrameTime;
      fVar8 = SQRT(fVar3 * fVar3 + fVar8 * fVar8);
      *(float *)((int)puVar14 + 0x15c) = fVar1;
      dVar46 = ABS((double)fVar1);
      dVar44 = ABS((double)fVar8);
      *(float *)(puVar14 + 0x2b) = fVar8;
      *(float *)(puVar14 + 0x2c) = (float)(dVar44 - dVar46);
      uVar21 = (ulonglong)(*(uint *)(puVar14 + 0x2b) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar14 + 0x2c) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar14 + 0x15c) >> 0x1d) & 4;
      uVar28 = uVar21 << 2 | 0x735900;
      lVar34 = uVar21 << 2;
      dVar42 = ABS((double)*(float *)(puVar14 + 0x2b));
      if ((double)*(float *)(puVar14 + 0x2c) - dVar41 < 0.0) {
        dVar42 = dVar46;
      }
      fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)lVar34);
      dVar46 = ABS((double)*(float *)((int)puVar14 + 0x15c));
      if ((double)*(float *)(puVar14 + 0x2c) - dVar41 < 0.0) {
        dVar46 = dVar44;
      }
      fVar8 = *(float *)((int)uVar28 + 4);
      dVar44 = dVar41;
      if (dVar41 < dVar42) {
        lVar34 = uVar19 - 0x270;
        lVar22 = uVar19 - 0xd0;
        lVar29 = uVar19 - 0xc0;
        lVar33 = 2;
        fVar3 = (float)(dVar46 - dVar42) / (float)(dVar46 + dVar42);
        fVar4 = fVar3 * fVar3;
        *(float *)((int)puVar14 + 0x1bc) = fVar3;
        *(float *)((int)puVar14 + 0x1b4) = fVar3;
        *(float *)(puVar14 + 0x37) = fVar3;
        *(float *)(puVar14 + 0x36) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)((int)puVar14 + 0x1b4) = *(float *)((int)puVar14 + 0x1b4) * fVar4;
        *(float *)(puVar14 + 0x37) = *(float *)(puVar14 + 0x37) * fVar3;
        *(float *)((int)puVar14 + 0x1bc) = *(float *)((int)puVar14 + 0x1bc) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar34 + 0x1b0) = *(float *)((int)lVar34 + 0x1a0) * fVar3 * fVar3;
          iVar24 = (int)lVar22;
          lVar34 = lVar34 + 8;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar3 * fVar3;
          lVar29 = lVar29 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar33 = 4;
        lVar29 = uVar19 - 0xd0;
        uVar28 = ZEXT48(&DAT_007358e0);
        lVar34 = lVar23;
        lVar22 = lVar29;
        do {
          pfVar31 = (float *)uVar28;
          fVar3 = pfVar31[1];
          uVar28 = uVar28 + 8;
          *(float *)((int)lVar34 + 0x1b0) = *(float *)((int)lVar34 + 0x1b0) * *pfVar31;
          lVar34 = lVar34 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar3;
          lVar22 = lVar22 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar22 = 2;
        lVar34 = lVar23;
        dVar42 = dVar41;
        do {
          iVar24 = (int)lVar34;
          lVar34 = lVar34 + 0x10;
          iVar30 = (int)lVar29;
          lVar29 = lVar29 + 0x10;
          dVar42 = (double)((float)(dVar42 + (double)*(float *)(iVar24 + 0x1b0)) +
                            *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) +
                           *(float *)(iVar30 + 0xc));
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        dVar44 = (double)((float)(dVar42 + dVar48) * fVar1 + fVar8);
      }
      dVar42 = (double)mobyutil::MB_DeltAngSpeed
                                 ((double)fVar7,dVar44,uVar47,uVar45,
                                  (double)(float)(dVar43 * dVar48),lVar34,uVar28,uVar35 + 0x9c);
      (moby->rotation).y = (float)dVar42;
      *(undefined4 *)((int)pvVar10 + 0x7c) = 0;
      *(undefined4 *)((int)pvVar10 + 0x78) = 0;
      *(undefined4 *)((int)pvVar10 + 0x74) = 0;
      *(undefined4 *)((int)pvVar10 + 0x70) = 0;
      mobyupdate_helpers::M326_0001bbd8(lVar20);
      iVar24 = fastfunc::FastDecTimerS16(uVar35 + 0x8c);
      if (iVar24 != 0) {
        lVar34 = uVar19 - 0x1c0;
        *(short *)((int)pvVar10 + 0xbc) = *(short *)((int)pvVar10 + 0xbc) + 1;
        mobyfunc::GetBonePosition(lVar20,*(undefined4 *)((int)pvVar10 + 0xb8),lVar34);
        fVar1 = *(float *)(puVar14 + 0x22);
        dVar44 = (double)*(float *)((int)puVar14 + 0x114);
        dVar43 = (double)*(float *)(puVar14 + 0x23);
        *(uint *)((int)pvVar10 + 0xb8) = (uint)LZCOUNT(*(undefined4 *)((int)pvVar10 + 0xb8)) >> 5;
        dVar42 = (double)*(float *)((int)puVar14 + 0x11c);
        if (*(int *)((int)pvVar10 + 0xc0) != 0) {
          dVar44 = (double)GameCamera.posY;
          dVar37 = (double)GameCamera.posX;
          dVar42 = (double)(float)GameCamera.field8_0x14c;
          dVar46 = (double)GameCamera.posZ;
          dVar43 = (double)mobyutil::MB_randRangeFloat(-0.5,0.1);
          dVar43 = (double)(float)(dVar46 + dVar43);
          dVar46 = (double)mobyutil::MB_randRangeSigned(dVar41,0x3fd99999a0000000);
          fVar1 = (float)(dVar37 + dVar46);
        }
        fVar7 = (float)(dVar44 - (double)*(float *)((int)puVar14 + 0xc4));
        fVar1 = fVar1 - *(float *)(puVar14 + 0x18);
        *(float *)((int)puVar14 + 0xdc) = (float)dVar42;
        fVar8 = (float)(dVar43 - (double)*(float *)(puVar14 + 0x19));
        iVar24 = *(int *)((int)pvVar10 + 0xc0);
        *(float *)((int)puVar14 + 0xd4) = fVar7;
        *(float *)(puVar14 + 0x1a) = fVar1;
        *(float *)(puVar14 + 0x1b) = fVar8;
        dVar42 = (double)SQRT(fVar8 * fVar8 + fVar1 * fVar1 + fVar7 * fVar7);
        if (iVar24 == 0) {
          fVar3 = 15.0;
        }
        else {
          fVar3 = 22.0;
        }
        fVar3 = (float)((double)(mobyutil::g_FrameTime * fVar3) / dVar42);
        dVar43 = dVar41;
        if (dVar41 - dVar42 < 0.0) {
          dVar43 = (double)(fVar1 * fVar3);
        }
        dVar44 = dVar41;
        if (dVar41 - dVar42 < 0.0) {
          dVar44 = (double)(fVar7 * fVar3);
        }
        if (dVar42 - dVar41 < 0.0) {
          dVar43 = (double)(fVar1 * fVar3);
        }
        if (dVar42 - dVar41 < 0.0) {
          dVar44 = (double)(fVar7 * fVar3);
        }
        dVar46 = dVar41;
        if (dVar41 - dVar42 < 0.0) {
          dVar46 = (double)(fVar8 * fVar3);
        }
        if (dVar42 - dVar41 < 0.0) {
          dVar46 = (double)(fVar8 * fVar3);
        }
        *(float *)((int)puVar14 + 0x14c) = (float)dVar43;
        *(float *)(puVar14 + 0x2a) = (float)dVar44;
        *(float *)(puVar14 + 0x1a) = (float)dVar43;
        *(float *)((int)puVar14 + 0xd4) = (float)dVar44;
        *(float *)((int)puVar14 + 0x154) = (float)(ABS(dVar43) - ABS(dVar44));
        *(float *)(puVar14 + 0x1b) = (float)dVar46;
        fVar1 = mobyutil::g_FrameTime;
        uVar21 = (ulonglong)(*(uint *)((int)puVar14 + 0x14c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0x154) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar14 + 0x2a) >> 0x1d) & 4;
        dVar42 = ABS((double)*(float *)((int)puVar14 + 0x14c));
        if ((double)*(float *)((int)puVar14 + 0x154) - dVar41 < 0.0) {
          dVar42 = ABS(dVar44);
        }
        fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
        dVar44 = ABS((double)*(float *)(puVar14 + 0x2a));
        if ((double)*(float *)((int)puVar14 + 0x154) - dVar41 < 0.0) {
          dVar44 = ABS(dVar43);
        }
        fVar8 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
        dVar43 = dVar41;
        if (dVar41 < dVar42) {
          lVar22 = uVar19 - 0x270;
          lVar33 = uVar19 - 0xe0;
          lVar29 = uVar19 - 0xf0;
          lVar36 = 2;
          fVar3 = (float)(dVar44 - dVar42) / (float)(dVar44 + dVar42);
          fVar4 = fVar3 * fVar3;
          *(float *)((int)puVar14 + 0x19c) = fVar3;
          *(float *)((int)puVar14 + 0x194) = fVar3;
          *(float *)(puVar14 + 0x33) = fVar3;
          *(float *)(puVar14 + 0x32) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)((int)puVar14 + 0x194) = *(float *)((int)puVar14 + 0x194) * fVar4;
          *(float *)(puVar14 + 0x33) = *(float *)(puVar14 + 0x33) * fVar3;
          *(float *)((int)puVar14 + 0x19c) = *(float *)((int)puVar14 + 0x19c) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar22 + 400) = *(float *)((int)lVar22 + 0x180) * fVar3 * fVar3;
            iVar24 = (int)lVar29;
            lVar29 = lVar29 + 8;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar33 + 4) = *(float *)(iVar24 + 4) * fVar3 * fVar3;
            lVar33 = lVar33 + 8;
            lVar36 = lVar36 + -1;
          } while (lVar36 != 0);
          lVar36 = 4;
          lVar33 = uVar19 - 0xf0;
          pfVar31 = (float *)&DAT_007358e0;
          lVar22 = lVar23;
          lVar29 = lVar33;
          do {
            fVar3 = *pfVar31;
            fVar4 = pfVar31[1];
            pfVar31 = pfVar31 + 2;
            *(float *)((int)lVar22 + 400) = *(float *)((int)lVar22 + 400) * fVar3;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar4;
            lVar29 = lVar29 + 8;
            lVar36 = lVar36 + -1;
          } while (lVar36 != 0);
          lVar22 = 2;
          dVar42 = dVar41;
          do {
            iVar24 = (int)lVar23;
            iVar30 = (int)lVar33;
            lVar23 = lVar23 + 0x10;
            lVar33 = lVar33 + 0x10;
            dVar42 = (double)((float)(dVar42 + (double)*(float *)(iVar24 + 400)) +
                              *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) +
                             *(float *)(iVar30 + 0xc));
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          dVar43 = (double)((float)(dVar42 + dVar48) * fVar7 + fVar8);
        }
        puVar14[0x3e] = (longlong)(int)(animationSpeed * 130.5);
        mobyupdate_helpers::M409_0001f240
                  (dVar43,(double)(fVar1 * 15.0),dVar41,uVar19 - 0x1b0,lVar34,lVar20,
                   *(undefined4 *)((int)puVar14 + 500));
        iVar24 = sound::PlayMobySound(0,0,moby);
        fVar7 = *(float *)((int)puVar14 + 0xd4);
        fVar8 = *(float *)(puVar14 + 0x1a);
        fVar3 = *(float *)(puVar14 + 0x1b);
        dVar44 = 0.5;
        iVar30 = 0;
        dVar43 = (double)SQRT(fVar3 * fVar3 + fVar8 * fVar8 + fVar7 * fVar7);
        fVar1 = (float)(0.5 / dVar43);
        dVar42 = dVar41;
        if (dVar41 - dVar43 < 0.0) {
          dVar42 = (double)(fVar8 * fVar1);
        }
        dVar46 = dVar41;
        if (dVar41 - dVar43 < 0.0) {
          dVar46 = (double)(fVar7 * fVar1);
        }
        dVar48 = dVar41;
        if (dVar41 - dVar43 < 0.0) {
          dVar48 = (double)(fVar3 * fVar1);
        }
        if (dVar43 - dVar41 < 0.0) {
          dVar42 = (double)(fVar8 * fVar1);
        }
        if (dVar43 - dVar41 < 0.0) {
          dVar46 = (double)(fVar7 * fVar1);
        }
        if (dVar43 - dVar41 < 0.0) {
          dVar48 = (double)(fVar3 * fVar1);
        }
        *(float *)(puVar14 + 0x1a) = (float)dVar42;
        *(float *)((int)puVar14 + 0xd4) = (float)dVar46;
        *(float *)(puVar14 + 0x1b) = (float)dVar48;
        *(float *)(puVar14 + 0x18) = (float)((double)*(float *)(puVar14 + 0x18) + dVar42);
        *(float *)((int)puVar14 + 0xc4) = (float)((double)*(float *)((int)puVar14 + 0xc4) + dVar46);
        *(float *)(puVar14 + 0x19) = (float)((double)*(float *)(puVar14 + 0x19) + dVar48);
        dVar42 = 1.2999999523162842;
        do {
          dVar43 = (double)mobyutil::MB_randRangeSigned
                                     (dVar41,(double)(float)((double)mobyutil::g_FrameTime * dVar42)
                                      ,iVar24);
          dVar46 = (double)mobyutil::g_FrameTime;
          *(float *)(puVar14 + 0x1c) = (float)dVar43;
          dVar43 = (double)mobyutil::MB_randRangeSigned(dVar41,(double)(float)(dVar46 * dVar42));
          dVar46 = (double)mobyutil::g_FrameTime;
          *(float *)((int)puVar14 + 0xe4) = (float)dVar43;
          dVar43 = (double)mobyutil::MB_randRangeSigned(dVar41,(double)(float)(dVar46 * dVar42));
          *(float *)(puVar14 + 0x1d) = (float)dVar43;
          uVar25 = mobyutil::MB_randRange(0xaa,0xf0);
          uVar21 = mobyutil::MB_randRange(0x6e,0xb4);
          iVar24 = mobyutil::MB_randRange(0x1e,0x46);
          puVar14[0x3e] = (longlong)iVar24;
          puVar14[0x3e] =
               (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar14[0x3e] + dVar44));
          uVar27 = *(undefined4 *)((int)puVar14 + 500);
          uVar45 = mobyutil::MB_randRange(0x78,0xaa);
          iVar24 = partupd::SpawnPart_4
                             (lVar34,uVar19 - 0x1a0,
                              (uint)((uVar21 & 0xffffffff) << 8) | 0x7f000000 | uVar25,0xff,uVar27,
                              0x1e,uVar45,1);
          iVar30 = iVar30 + 1;
        } while (iVar30 < 0x19);
        iVar24 = 4;
        if ((*(int *)((int)pvVar10 + 0xc0) != 0) &&
           (iVar24 = ((uint)((longlong)DAT_00927130 + -0xb >> 0x3f) & 2) + 2, 6 < DAT_00927130)) {
          iVar24 = 3;
        }
        if ((*(short *)((int)pvVar10 + 0xbc) < iVar24) || (*(int *)((int)pvVar10 + 0xa4) == -1)) {
          auVar51 = ZEXT416(0xffffffff);
          auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
          auVar50 = vectorShiftLeftIntegerWord(auVar51,auVar51);
          auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar51 = loadVectorLeftIndexed(0x58,0x1cad0);
          auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar51 = vectorMultiplyAddFloatingPoint
                              (auVar49,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60
                               ,auVar50);
          auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
          auVar51 = vectorSplatHalfWord(auVar51,1);
          uVar13 = storeVectorElementHalfWordIndexed(auVar51,0x8c,uVar35);
          *(undefined2 *)((int)pvVar10 + 0x8c) = uVar13;
        }
        else {
          *(undefined2 *)((int)pvVar10 + 0xbc) = 0;
          moby->state = '\x04';
        }
      }
    }
  }
  else if (uVar2 == '\x02') {
    if ((iVar24 == 0) && (GameCamera.field19_0x25c._0_4_ == 0)) {
      GameCamera.field19_0x25c[4] = '\0';
      GameCamera.field19_0x25c[5] = '\0';
      GameCamera.field19_0x25c[6] = '\0';
      GameCamera.field19_0x25c[7] = '\0';
      iVar24 = *(int *)((int)pvVar10 + 0xc0);
      GameCamera.field19_0x25c._0_4_ = moby;
    }
    if (iVar24 != 0) {
      auVar51 = ZEXT416(3);
      auVar50 = ZEXT416(0xffffffff);
      auVar49 = auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60;
      auVar50 = ZEXT416(5);
      auVar52 = auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60;
      auVar50 = vectorShiftLeftIntegerWord(auVar49,auVar49);
      auVar49 = loadVectorLeftIndexed(0x7130,0x920000);
      iVar24 = DAT_00927130 + -3;
      auVar49 = vectorSubtractUnsignedWordModulo
                          (auVar49,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60);
      auVar51 = loadVectorLeftIndexed(0x18,0x1cad0);
      auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar54 = vectorCompareGreaterThanSignedWord(auVar49,auVar52);
      auVar53 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar50 = vectorMultiplyAddFloatingPoint
                          (auVar53,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,
                           auVar50);
      auVar49 = vectorConditionalSelect(auVar49,auVar52,auVar54);
      iVar24 = iVar24 + ((uint)(5 - (longlong)iVar24 >> 0x3f) & 5U - iVar24);
      auVar51 = ZEXT416(0);
      auVar52 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
      auVar51 = vectorCompareGreaterThanSignedWord(auVar52,auVar49);
      auVar49 = vectorLogicalAndWithComplement(auVar49,auVar51);
      auVar50 = vectorConvertToSignedFixedPointWordSaturate(auVar50,0);
      auVar51 = ZEXT416(0xfffffff0);
      auVar53 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
      sVar9 = *(short *)((int)pvVar10 + 0x8c);
      puVar14[0x3e] = (longlong)(int)(animationSpeed * 15.5);
      auVar54 = vectorRotateLeftIntegerWord(auVar50,auVar53);
      auVar51 = vectorMultiplyOddUnsignedHalfWord(auVar49,auVar50);
      auVar50 = vectorMultiplySumSignedHalfWordModulo(auVar49,auVar54,auVar52);
      auVar52 = vectorShiftLeftIntegerWord(auVar50,auVar53);
      auVar50._0_4_ = auVar52._0_4_ + auVar51._0_4_;
      auVar50._8_8_ = auVar51._8_8_;
      auVar50._4_4_ = auVar52._4_4_ + auVar51._4_4_;
      auVar49._0_8_ = auVar50._0_8_;
      auVar49._12_4_ = auVar51._12_4_;
      auVar49._8_4_ = auVar52._8_4_ + auVar51._8_4_;
      auVar51._0_12_ = auVar49._0_12_;
      auVar51._12_4_ = auVar52._12_4_ + auVar49._12_4_;
      if ((int)sVar9 < (iVar24 + (iVar24 >> 0x1f & -iVar24)) * *(int *)((int)puVar14 + 500)) {
        auVar51 = vectorSplatHalfWord(auVar51,1);
        uVar13 = storeVectorElementHalfWordIndexed(auVar51,0x8c,uVar35);
        *(undefined2 *)((int)pvVar10 + 0x8c) = uVar13;
      }
    }
    iVar24 = mobyupdate_helpers::M326_0001bf50(lVar20,*(undefined4 *)((int)pvVar10 + 0xa0));
    if (iVar24 != 0) {
      moby->state = '\x03';
    }
  }
  else if (uVar2 == '\x01') {
    bVar17 = false;
    if (((iVar24 != 0) && (DAT_00927118 != 0)) &&
       (iVar24 = fastfunc::FastDecTimerS32(uVar35 + 0xc4), iVar24 != 0)) {
      bVar17 = true;
    }
    if (((*(int *)((int)pvVar10 + 0x80) != -1) &&
        (iVar24 = mobyutil::MB_IsPntInCuboid
                            (&g_heroPosition,(longlong)*(int *)((int)pvVar10 + 0x80)), iVar24 != 0))
       || (bVar17)) {
      *(undefined1 *)((int)pvVar10 + 0x58) = 0x16;
      *(undefined1 *)((int)pvVar10 + 0x59) = 1;
      *(undefined1 *)((int)pvVar10 + 0x5a) = 7;
      moby->damage = -1;
      MVar32 = moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
      iVar24 = *(int *)((int)pvVar10 + 0xac);
      moby->modeBits = MVar32;
      if (iVar24 != 0) {
        *(ushort *)(iVar24 + 0x34) = *(ushort *)(iVar24 + 0x34) & 0xffbe;
        MVar32 = moby->modeBits;
      }
      moby->modeBits = MVar32 | CAN_BE_AUTO_TARGETED;
      puVar11 = moby->pClass->collision;
      moby->state = '\x02';
      moby->collision = puVar11;
    }
  }
  else if (uVar2 == '\0') {
    *(undefined2 *)((int)pvVar10 + 0x24) = 6;
    *(undefined1 *)((int)pvVar10 + 0x28) = 2;
    *(undefined1 *)((int)pvVar10 + 0x29) = 0;
    *(undefined4 *)((int)pvVar10 + 0x94) = 0;
    *(undefined4 *)((int)pvVar10 + 0x9c) = 0;
    MVar32 = moby->modeBits;
    *(undefined4 *)((int)pvVar10 + 0x20) = 0x40c00000;
    *(undefined4 *)((int)pvVar10 + 0x98) = 0;
    uVar27 = *(undefined4 *)((int)pvVar10 + 0xa0);
    moby->collision = (ushort *)0x0;
    moby->modeBits =
         MVar32 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                   DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                   TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
    mobyutil::Spline_ComputeSegmentLengths(uVar27);
    mobyutil::Spline_ComputeSegmentLengths(*(undefined4 *)((int)pvVar10 + 0xa0));
    mobyutil::Spline_ComputeSegmentLengths(*(undefined4 *)((int)pvVar10 + 0xa4));
    if (moby->drawDistance < 0x80) {
      moby->drawDistance = 0x80;
    }
    if (*(int *)((int)pvVar10 + 0xac) == 0) {
      iVar24 = FUN_0025cd18(lVar20);
      *(int *)((int)pvVar10 + 0xac) = iVar24;
      *(undefined1 *)(iVar24 + 0x30) = 0;
      *(ushort *)(*(int *)((int)pvVar10 + 0xac) + 0x34) =
           *(ushort *)(*(int *)((int)pvVar10 + 0xac) + 0x34) | 0x41;
    }
    iVar24 = *(int *)((int)pvVar10 + 0xc0);
    pSVar12 = Splines[*(int *)((int)pvVar10 + 0xa0)];
    (moby->pos).x = pSVar12->points[0].x;
    (moby->pos).y = pSVar12->points[0].y;
    (moby->pos).z = pSVar12->points[0].z;
    (moby->pos).w = pSVar12->points[0].w;
    fVar1 = animationSpeed;
    if ((iVar24 != 0) && (*(int *)((int)pvVar10 + 0xc4) == 0)) {
      puVar14[0x3e] = (longlong)(int)(animationSpeed * 240.5);
      puVar14[0x3e] = (longlong)(int)(fVar1 * 400.5);
      iVar24 = mobyutil::MB_randRange
                         (*(undefined4 *)((int)puVar14 + 500),*(undefined4 *)((int)puVar14 + 500));
      iVar30 = DAT_00927130 + -1;
      iVar30 = iVar30 + ((uint)(10 - (longlong)iVar30 >> 0x3f) & 10U - iVar30);
      puVar14[0x3e] = (longlong)(int)(animationSpeed * 35.5);
      *(int *)((int)pvVar10 + 0xc4) =
           iVar24 + (iVar30 + (iVar30 >> 0x1f & -iVar30)) * *(int *)((int)puVar14 + 500);
    }
    *(undefined4 *)((int)pvVar10 + 0xb4) = 0;
    moby->state = '\x01';
  }
LAB_0001e478:
  dVar48 = 1.570796251296997;
  dVar46 = 3.141592502593994;
  fVar1 = *(float *)((int)pvVar10 + 0x90) + 1.5707963;
  dVar44 = -3.141592502593994;
  dVar43 = -0.16666656732559204;
  dVar42 = 0.008333025500178337;
  dVar41 = -0.0001980741071747616;
  fVar7 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar7 = fVar1;
  }
  fVar8 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar7 < 0.0) {
    fVar8 = fVar7;
  }
  dVar40 = 2.601886990305502e-06;
  dVar39 = 0.17000000178813934;
  fVar3 = fVar8 * fVar8;
  fVar1 = fVar3 * fVar3 * fVar8;
  fVar7 = fVar3 * fVar1;
  (moby->pos).z =
       -((fVar3 * fVar7 * 2.601887e-06 +
         fVar7 * -0.0001980741 + fVar1 * 0.0083330255 + fVar3 * fVar8 * -0.16666657 + fVar8) * 0.17
        - (moby->pos).z);
  dVar37 = (double)fastfunc::FastWrapRot
                             (*(float *)((int)pvVar10 + 0x90),
                              6.2831855 / (float)(longlong)(animationSpeed * 120.5));
  dVar38 = (double)(float)(dVar37 + dVar48);
  *(float *)((int)pvVar10 + 0x90) = (float)dVar37;
  dVar48 = (double)(float)(dVar46 - dVar38);
  if (dVar38 - (double)(float)(dVar46 - dVar38) < 0.0) {
    dVar48 = dVar38;
  }
  dVar46 = (double)(float)(dVar44 - dVar38);
  if ((double)(float)(dVar44 - dVar38) - dVar48 < 0.0) {
    dVar46 = dVar48;
  }
  fVar7 = (moby->pos).x;
  iVar24 = *(int *)((int)pvVar10 + 0xac);
  dVar44 = (double)(float)(dVar46 * dVar46);
  dVar37 = (double)(float)(dVar44 * (double)(float)(dVar44 * dVar46));
  dVar48 = (double)(float)(dVar44 * dVar37);
  fVar1 = (float)((double)(float)((double)(float)(dVar44 * dVar48) * dVar40 +
                                 (double)(float)(dVar48 * dVar41 +
                                                (double)(float)(dVar37 * dVar42 +
                                                               (double)(float)((double)(float)(
                                                  dVar44 * dVar46) * dVar43 + dVar46)))) * dVar39 +
                 (double)(moby->pos).z);
  (moby->pos).z = fVar1;
  if (iVar24 != 0) {
    *(float *)(iVar24 + 0x10) = fVar7;
    *(f32 *)(iVar24 + 0x14) = (moby->pos).y;
    *(f32 *)(iVar24 + 0x18) = (moby->pos).z;
    *(f32 *)(iVar24 + 0x1c) = (moby->pos).w;
    iVar24 = *(int *)((int)pvVar10 + 0xac);
    *(f32 *)(iVar24 + 0x40) = (moby->rotation).x;
    *(f32 *)(iVar24 + 0x44) = (moby->rotation).y;
    *(f32 *)(iVar24 + 0x48) = (moby->rotation).z;
    *(f32 *)(iVar24 + 0x4c) = (moby->rotation).w;
    mobyfunc::UpdateMobyAnimFrame(*(undefined4 *)((int)pvVar10 + 0xac));
    mobyfunc::UpdateMobyTransform(*(MobyInstance **)((int)pvVar10 + 0xac));
    *(ushort *)(*(int *)((int)pvVar10 + 0xac) + 0x34) =
         *(ushort *)(*(int *)((int)pvVar10 + 0xac) + 0x34) | 6;
    fVar1 = (moby->pos).z;
    fVar7 = (moby->pos).x;
  }
  if ((((*(int *)((int)pvVar10 + 0xc0) == 0) && (1 < moby->state)) && (moby->enabled != '\0')) &&
     (fVar8 = (moby->pos).y - GameCamera.posY,
     SQRT((fVar1 - GameCamera.posZ) * (fVar1 - GameCamera.posZ) +
          (fVar7 - GameCamera.posX) * (fVar7 - GameCamera.posX) + fVar8 * fVar8) < 30.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar20);
    moby->shadow = '\x18';
  }
  return;
}



//==== 0001e6c8  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_MOBY336(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_MOBY336(void)

{
  DAT_0071d08c = 0x10000;
  return;
}



//==== 0001e700  ns=mobyupdate_helpers  size=0x24c
// sig: undefined M336_0001e700(void)
// callers(1): 0001e958 mobyupdate_unsorted::UpdateMoby_{336_415}
// callees(5): 000fcd60 mobyutil::MB_DistributeBolts; 0010675c mobyutil::MB_damage; 0010e030 mobyutil::MB_genericExplosion; 0011b728 mobyutil::MB_UnlockSkillPoint; 004fff60 fastfunc::FastDecTimerS32

void mobyupdate_helpers::M336_0001e700(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  uVar1 = *(uint *)(param_1 + 0x78);
  iVar3 = mobyutil::MB_damage(param_1,0xa30000,0);
  if (iVar3 != 0) {
    if (g_heroState != TURRET_PLANE_UI) {
      ShipsKilledCounts.Hoven = ShipsKilledCounts.Hoven + 1;
      if (4 < ShipsKilledCounts.Hoven) {
        mobyutil::MB_UnlockSkillPoint(0x15);
      }
    }
    uVar4 = 0;
    mobyutil::MB_DistributeBolts(0,param_1,0x1f,0x4a,2,0xffffffffffffffff);
    auVar5 = ZEXT416(0xffffffff);
    auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
    auVar6 = vectorShiftLeftIntegerWord(auVar5,auVar5);
    auVar5 = loadVectorLeftIndexed(4,0x1e6e0);
    auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar7 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar5 = vectorMultiplyAddFloatingPoint
                       (auVar7,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar6);
    auVar5 = vectorConvertToSignedFixedPointWordSaturate(auVar5,0);
    auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0xa4,
                       (ulonglong)uVar1);
    *(undefined4 *)(uVar1 + 0xa4 & 0xfffffffc) = uVar2;
    mobyutil::MB_genericExplosion
              (uVar4,uVar4,0x4010000000000000,0x4000000000000000,0x40f86a0000000000,
               0x4008000000000000,0x402e000000000000,param_1,local_40,local_50,0xa4,1,0x14,3,4);
  }
  *(undefined1 *)(param_1 + 0xa4) = 0xff;
  if ((DAT_009271d4 != 0) && (param_2 != 0)) {
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xefff | 0x41;
  }
  if ((*(int *)(uVar1 + 0xa4) != 0) || ((*(ushort *)(param_1 + 0x34) & 1) != 0)) {
    iVar3 = fastfunc::FastDecTimerS32((ulonglong)uVar1 + 0xa4);
    if ((iVar3 == 0) || ((param_2 == 0 || (DAT_009271d4 != 0)))) {
      *(undefined4 *)(param_1 + 0x94) = 0;
      *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xefff | 0x41;
    }
    else {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x10);
      *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xffbe | 0x1000;
      *(undefined4 *)(param_1 + 0x94) = uVar2;
    }
  }
  return;
}



//==== 0001e958  ns=mobyupdate_unsorted  size=0x8b8
// sig: undefined UpdateMoby_{336_415}(MobyInstance * moby)
// callers(0): 
// callees(6): 0001e700 mobyupdate_helpers::M336_0001e700; 001129d0 mobyutil::MB_ScaledVecWrapper; 00136724 path::InitFollower; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble
// strings: 0001eea0: 'HN7A`' (raw)

/* Moby 336
   Moby 415 */

void mobyupdate_unsorted::UpdateMoby__336_415_(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  MobyModeBit MVar7;
  void *pvVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  Spline *pSVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  int iVar17;
  longlong lVar15;
  longlong lVar16;
  int iVar19;
  float *pfVar20;
  longlong lVar18;
  ulonglong uVar21;
  longlong lVar22;
  int iVar23;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar24;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f24;
  double dVar28;
  ulonglong in_f25;
  double dVar29;
  ulonglong in_f26;
  double dVar30;
  ulonglong in_f27;
  double dVar31;
  ulonglong in_f28;
  double dVar32;
  double dVar33;
  ulonglong in_f29;
  double dVar34;
  ulonglong in_f30;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar16 = uVar14 - 0x160;
  puVar13 = (ulonglong *)lVar16;
  *puVar13 = uVar14;
  puVar13[0x2e] = in_LR;
  puVar13[0x24] = in_f24;
  puVar13[0x25] = in_f25;
  puVar13[0x26] = in_f26;
  puVar13[0x27] = in_f27;
  puVar13[0x28] = in_f28;
  puVar13[0x29] = in_f29;
  puVar13[0x2a] = in_f30;
  puVar13[0x2b] = in_f31;
  puVar13[0x22] = unaff_r30;
  puVar13[0x23] = unaff_r31;
  pvVar8 = moby->pVar;
  puVar13[0x21] = unaff_r29;
  puVar13[0x20] = unaff_r28;
  if (pvVar8 != (void *)0x0) {
    fastfunc::FastIntToDouble(moby->drawDistance);
    iVar17 = mobyutil::MB_ScaledVecWrapper(moby);
    mobyupdate_helpers::M336_0001e700(moby,(ulonglong)(LZCOUNT(iVar17 + 1) << 0x20) >> 0x25);
    if (moby->state == 0) {
      if (*(int *)((int)pvVar8 + 0x74) != -1) {
        path::InitFollower((PathFollower *)((int)pvVar8 + 0x60));
        iVar17 = *(int *)((int)pvVar8 + 0xa0);
        pSVar12 = Splines[*(int *)((int)pvVar8 + 0x74)];
        *(Spline **)((int)pvVar8 + 0x70) = pSVar12;
        iVar19 = pSVar12->cnt + -1;
        iVar17 = iVar17 + ((uint)((longlong)iVar19 - (longlong)iVar17 >> 0x3f) & iVar19 - iVar17);
        (moby->pos).x = pSVar12->points[iVar17].x;
        (moby->pos).y = pSVar12->points[iVar17].y;
        (moby->pos).z = pSVar12->points[iVar17].z;
        (moby->pos).w = pSVar12->points[iVar17].w;
        *(undefined1 *)((int)pvVar8 + 0x28) = 2;
        *(undefined1 *)((int)pvVar8 + 0x2c) = 0x2c;
        *(undefined1 *)((int)pvVar8 + 0x2b) = 1;
        *(int *)((int)pvVar8 + 0x60) = iVar17;
        *(undefined1 *)((int)pvVar8 + 0x2a) = 0x10;
        MVar7 = moby->modeBits;
        *(undefined4 *)((int)pvVar8 + 0x30) = 0x3fb33333;
        moby->drawDistance = 0xaa;
        moby->state = '\x01';
        moby->modeBits = MVar7 | CAN_BE_AUTO_TARGETED;
      }
    }
    else if (moby->state < 2) {
      piVar9 = *(int **)((int)pvVar8 + 0x70);
      iVar17 = *(int *)((int)pvVar8 + 0x60);
      iVar19 = *piVar9;
      iVar23 = (iVar17 + iVar19) - (int)*(char *)((int)pvVar8 + 100);
      iVar24 = iVar17 + iVar19 + (int)*(char *)((int)pvVar8 + 100);
      iVar23 = iVar23 - (iVar23 / iVar19) * iVar19;
      iVar24 = iVar24 - (iVar24 / iVar19) * iVar19;
      fVar4 = (float)piVar9[iVar17 * 4 + 4];
      fVar5 = (float)piVar9[iVar17 * 4 + 5];
      fVar1 = (float)((double)fVar4 - (double)(float)piVar9[iVar23 * 4 + 4]);
      dVar32 = (double)fVar1;
      fVar2 = (float)((double)fVar5 - (double)(float)piVar9[iVar23 * 4 + 5]);
      dVar31 = (double)fVar2;
      dVar30 = (double)((float)piVar9[iVar17 * 4 + 6] - (float)piVar9[iVar23 * 4 + 6]);
      dVar36 = (double)(float)piVar9[iVar24 * 4 + 4];
      dVar35 = (double)(float)piVar9[iVar24 * 4 + 5];
      dVar34 = (double)(float)piVar9[iVar24 * 4 + 6];
      *(float *)(puVar13 + 0x11) = fVar1;
      *(float *)((int)puVar13 + 0x8c) = fVar2;
      fVar1 = (float)(dVar36 - (double)fVar4);
      fVar2 = (float)(dVar35 - (double)fVar5);
      *(float *)(puVar13 + 0x12) = (float)(ABS(dVar32) - ABS(dVar31));
      dVar28 = 0.0;
      uVar21 = (ulonglong)(*(uint *)(puVar13 + 0x11) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x12) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar13 + 0x8c) >> 0x1d) & 4;
      dVar27 = ABS((double)*(float *)(puVar13 + 0x11));
      if (*(float *)(puVar13 + 0x12) - 0.0 < 0.0) {
        dVar27 = ABS(dVar31);
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
      fVar4 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
      dVar33 = ABS((double)*(float *)((int)puVar13 + 0x8c));
      if (*(float *)(puVar13 + 0x12) - 0.0 < 0.0) {
        dVar33 = ABS(dVar32);
      }
      dVar29 = 0.7853981852531433;
      dVar26 = dVar28;
      if (0.0 < dVar27) {
        lVar15 = uVar14 - 0x150;
        lVar18 = uVar14 - 0x8c;
        lVar22 = uVar14 - 0x7c;
        lVar25 = 2;
        fVar3 = (float)(dVar33 - dVar27) / (float)(dVar33 + dVar27);
        fVar6 = fVar3 * fVar3;
        *(float *)(puVar13 + 0x1c) = fVar3;
        *(float *)(puVar13 + 0x1b) = fVar3;
        *(float *)((int)puVar13 + 0xdc) = fVar3;
        *(float *)((int)puVar13 + 0xd4) = fVar3;
        fVar3 = fVar6 * fVar6;
        *(float *)(puVar13 + 0x1b) = *(float *)(puVar13 + 0x1b) * fVar6;
        *(float *)((int)puVar13 + 0xdc) = *(float *)((int)puVar13 + 0xdc) * fVar3;
        *(float *)(puVar13 + 0x1c) = *(float *)(puVar13 + 0x1c) * fVar3 * fVar6;
        do {
          *(float *)((int)lVar15 + 0xd4) = *(float *)((int)lVar15 + 0xc4) * fVar3 * fVar3;
          iVar17 = (int)lVar18;
          lVar15 = lVar15 + 8;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
          lVar22 = lVar22 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar22 = uVar14 - 0x8c;
        pfVar20 = (float *)&DAT_007358e0;
        lVar15 = lVar16;
        lVar18 = lVar22;
        do {
          fVar3 = *pfVar20;
          fVar6 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar15 + 0xd4) = *(float *)((int)lVar15 + 0xd4) * fVar3;
          lVar15 = lVar15 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar6;
          lVar18 = lVar18 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar18 = 2;
        lVar15 = lVar16;
        dVar27 = dVar28;
        do {
          iVar17 = (int)lVar15;
          lVar15 = lVar15 + 0x10;
          iVar19 = (int)lVar22;
          lVar22 = lVar22 + 0x10;
          dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar17 + 0xd4)) +
                            *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) +
                           *(float *)(iVar19 + 0xc));
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        dVar26 = (double)((float)(dVar27 + 0.7853981852531433) * fVar5 + fVar4);
      }
      fVar5 = ABS(fVar1);
      *(float *)((int)puVar13 + 0x7c) = fVar1;
      fVar4 = ABS(fVar2);
      *(float *)(puVar13 + 0x10) = fVar2;
      *(float *)((int)puVar13 + 0x84) = fVar5 - fVar4;
      uVar21 = (ulonglong)(*(uint *)((int)puVar13 + 0x7c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar13 + 0x84) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar13 + 0x10) >> 0x1d) & 4;
      fVar1 = ABS(*(float *)((int)puVar13 + 0x7c));
      if (*(float *)((int)puVar13 + 0x84) - 0.0 < 0.0) {
        fVar1 = fVar4;
      }
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
      fVar4 = ABS(*(float *)(puVar13 + 0x10));
      if (*(float *)((int)puVar13 + 0x84) - 0.0 < 0.0) {
        fVar4 = fVar5;
      }
      fVar5 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
      dVar27 = dVar28;
      if (0.0 < fVar1) {
        lVar15 = uVar14 - 0x150;
        lVar22 = uVar14 - 0x9c;
        lVar18 = uVar14 - 0xac;
        lVar25 = 2;
        fVar1 = (fVar4 - fVar1) / (fVar4 + fVar1);
        fVar4 = fVar1 * fVar1;
        *(float *)(puVar13 + 0x18) = fVar1;
        *(float *)(puVar13 + 0x17) = fVar1;
        *(float *)((int)puVar13 + 0xbc) = fVar1;
        *(float *)((int)puVar13 + 0xb4) = fVar1;
        fVar1 = fVar4 * fVar4;
        *(float *)(puVar13 + 0x17) = *(float *)(puVar13 + 0x17) * fVar4;
        *(float *)((int)puVar13 + 0xbc) = *(float *)((int)puVar13 + 0xbc) * fVar1;
        *(float *)(puVar13 + 0x18) = *(float *)(puVar13 + 0x18) * fVar1 * fVar4;
        do {
          *(float *)((int)lVar15 + 0xb4) = *(float *)((int)lVar15 + 0xa4) * fVar1 * fVar1;
          iVar17 = (int)lVar18;
          lVar18 = lVar18 + 8;
          lVar15 = lVar15 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar17 + 4) * fVar1 * fVar1;
          lVar22 = lVar22 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar22 = uVar14 - 0xac;
        pfVar20 = (float *)&DAT_007358e0;
        lVar15 = lVar16;
        lVar18 = lVar22;
        do {
          fVar1 = *pfVar20;
          fVar4 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar15 + 0xb4) = *(float *)((int)lVar15 + 0xb4) * fVar1;
          lVar15 = lVar15 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
          lVar18 = lVar18 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar18 = 2;
        lVar15 = lVar16;
        do {
          iVar17 = (int)lVar15;
          iVar19 = (int)lVar22;
          lVar15 = lVar15 + 0x10;
          lVar22 = lVar22 + 0x10;
          dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar17 + 0xb4)) +
                            *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) +
                           *(float *)(iVar19 + 0xc));
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar2 + fVar5);
      }
      dVar27 = (double)fastfunc::FastDiffRots(dVar26,dVar27);
      dVar33 = (double)(moby->rotation).x;
      dVar27 = (double)fastfunc::FastDiffRots
                                 ((double)((float)(dVar27 / (double)SQRT((float)(dVar30 * dVar30 +
                                                                                (double)(float)(
                                                  dVar32 * dVar32 + (double)(float)(dVar31 * dVar31)
                                                  )))) * DAT_0071d0b4),dVar33);
      dVar27 = (double)fastfunc::FastWrapRot((float)dVar33,(float)(dVar27 / (double)DAT_0071d0b8));
      dVar31 = (double)(moby->pos).y;
      dVar30 = (double)(moby->pos).x;
      dVar32 = (double)(moby->pos).z;
      (moby->rotation).x = (float)dVar27;
      fVar2 = mobyutil::g_FrameTime;
      fVar1 = DAT_0071d0b0;
      if (SQRT((float)(dVar32 - dVar34) * (float)(dVar32 - dVar34) +
               (float)(dVar30 - dVar36) * (float)(dVar30 - dVar36) +
               (float)(dVar31 - dVar35) * (float)(dVar31 - dVar35)) <
          DAT_0071d0b0 * mobyutil::g_FrameTime) {
        *(int *)((int)pvVar8 + 0x60) = iVar24;
        piVar9 = *(int **)((int)pvVar8 + 0x70);
        dVar30 = (double)(moby->pos).x;
        dVar31 = (double)(moby->pos).y;
        dVar32 = (double)(moby->pos).z;
        if (iVar24 == *piVar9 + -1) {
          dVar30 = (double)(float)piVar9[4];
          (moby->pos).x = (f32)piVar9[4];
          dVar31 = (double)(float)piVar9[5];
          (moby->pos).y = (f32)piVar9[5];
          dVar32 = (double)(float)piVar9[6];
          (moby->pos).z = (f32)piVar9[6];
          (moby->pos).w = (f32)piVar9[7];
          fVar1 = DAT_0071d0b0;
          fVar2 = mobyutil::g_FrameTime;
        }
      }
      fVar4 = (float)(dVar35 - dVar31);
      fVar5 = (float)(dVar36 - dVar30);
      fVar3 = (float)(dVar34 - dVar32);
      dVar35 = (double)(moby->rotation).z;
      dVar34 = (double)SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4);
      fVar1 = (float)((double)(fVar1 * fVar2) / dVar34);
      dVar27 = dVar28;
      if (dVar28 - dVar34 < 0.0) {
        dVar27 = (double)(fVar4 * fVar1);
      }
      dVar36 = dVar28;
      if (dVar28 - dVar34 < 0.0) {
        dVar36 = (double)(fVar5 * fVar1);
      }
      dVar33 = dVar28;
      if (dVar28 - dVar34 < 0.0) {
        dVar33 = (double)(fVar3 * fVar1);
      }
      if (dVar34 - dVar28 < 0.0) {
        dVar27 = (double)(fVar4 * fVar1);
      }
      if (dVar34 - dVar28 < 0.0) {
        dVar36 = (double)(fVar5 * fVar1);
      }
      if (dVar34 - dVar28 < 0.0) {
        dVar33 = (double)(fVar3 * fVar1);
      }
      *(float *)(puVar13 + 0xe) = (float)dVar36;
      *(float *)((int)puVar13 + 0x74) = (float)dVar27;
      *(float *)(puVar13 + 0xf) = (float)(ABS(dVar36) - ABS(dVar27));
      uVar10 = *(uint *)(puVar13 + 0xe);
      fVar1 = *(float *)(puVar13 + 0xe);
      uVar11 = *(uint *)((int)puVar13 + 0x74);
      (moby->pos).x = (float)(dVar30 + dVar36);
      (moby->pos).y = (float)(dVar31 + dVar27);
      (moby->pos).z = (float)(dVar32 + dVar33);
      uVar21 = (ulonglong)(uVar10 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0xf) >> 0x1e) & 2 | (ulonglong)(uVar11 >> 0x1d) & 4;
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
      dVar30 = ABS((double)fVar1);
      if ((double)*(float *)(puVar13 + 0xf) - dVar28 < 0.0) {
        dVar30 = ABS(dVar27);
      }
      fVar1 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
      dVar27 = ABS((double)*(float *)((int)puVar13 + 0x74));
      if ((double)*(float *)(puVar13 + 0xf) - dVar28 < 0.0) {
        dVar27 = ABS(dVar36);
      }
      if (dVar28 < dVar30) {
        lVar15 = uVar14 - 0x150;
        lVar18 = uVar14 - 0xcc;
        lVar22 = uVar14 - 0xbc;
        lVar25 = 2;
        fVar4 = (float)(dVar27 - dVar30) / (float)(dVar27 + dVar30);
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar13 + 0x14) = fVar4;
        *(float *)(puVar13 + 0x13) = fVar4;
        *(float *)((int)puVar13 + 0x9c) = fVar4;
        *(float *)((int)puVar13 + 0x94) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar13 + 0x13) = *(float *)(puVar13 + 0x13) * fVar5;
        *(float *)((int)puVar13 + 0x9c) = *(float *)((int)puVar13 + 0x9c) * fVar4;
        *(float *)(puVar13 + 0x14) = *(float *)(puVar13 + 0x14) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar15 + 0x94) = *(float *)((int)lVar15 + 0x84) * fVar4 * fVar4;
          iVar17 = (int)lVar18;
          lVar15 = lVar15 + 8;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar17 + 4) * fVar4 * fVar4;
          lVar22 = lVar22 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar22 = uVar14 - 0xcc;
        pfVar20 = (float *)&DAT_007358e0;
        lVar15 = lVar16;
        lVar18 = lVar22;
        do {
          fVar4 = *pfVar20;
          fVar5 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar15 + 0x94) = *(float *)((int)lVar15 + 0x94) * fVar4;
          lVar15 = lVar15 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar5;
          lVar18 = lVar18 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar15 = 2;
        do {
          iVar17 = (int)lVar16;
          iVar19 = (int)lVar22;
          lVar16 = lVar16 + 0x10;
          lVar22 = lVar22 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar17 + 0x94)) +
                            *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) +
                           *(float *)(iVar19 + 0xc));
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        dVar28 = (double)((float)(dVar28 + dVar29) * fVar2 + fVar1);
      }
      dVar27 = (double)fastfunc::FastDiffRots(dVar28,dVar35);
      dVar27 = (double)fastfunc::FastWrapRot((float)dVar35,(float)(dVar27 / (double)DAT_0071d0b8));
      (moby->rotation).z = (float)dVar27;
      (moby->rotation).y = 0.5235988;
    }
  }
  return;
}



//==== 0001f210  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_MOBY409(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_MOBY409(void)

{
  DAT_0071d108 = 0x10000;
  return;
}



//==== 0001f240  ns=mobyupdate_helpers  size=0x4b4
// sig: undefined M409_0001f240(void)
// callers(1): 0001cb80 mobyupdate_unsorted::UpdateMoby_326
// callees(2): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance *
mobyupdate_helpers::M409_0001f240
          (double param_1,double param_2,double param_3,float *param_4,f32 *param_5,float param_6,
          undefined4 param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  MobyInstance *pMVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  float *pfVar18;
  longlong lVar17;
  longlong lVar19;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar15 = uVar12 - 0x120;
  puVar9 = (ulonglong *)lVar15;
  *puVar9 = uVar12;
  puVar9[0x26] = in_LR;
  puVar9[0x21] = in_f29;
  puVar9[0x22] = in_f30;
  puVar9[0x23] = in_f31;
  puVar9[0x20] = unaff_r31;
  *(undefined4 *)(puVar9 + 0x18) = param_7;
  *(undefined4 *)((int)puVar9 + 0xc4) = param_7;
  puVar9[0x1e] = unaff_r29;
  *(undefined4 *)(puVar9 + 0x19) = param_7;
  *(undefined4 *)((int)puVar9 + 0xcc) = param_7;
  puVar9[0x1f] = unaff_r30;
  puVar9[0x1d] = unaff_r28;
  auVar24 = *(undefined1 (*) [16])(puVar9 + 0x18);
  pMVar13 = mobyfunc::CreateMoby(ROCKET_0199);
  if (pMVar13 != (MobyInstance *)0x0) {
    pMVar13->updateDistance = -1;
    pMVar13->drawDistance = 0x7e;
    pMVar13->enabled = '\x01';
    pMVar13->state = '\x01';
    pfVar5 = (float *)pMVar13->pVar;
    (pMVar13->pos).x = *param_5;
    (pMVar13->pos).y = param_5[1];
    (pMVar13->pos).z = param_5[2];
    (pMVar13->pos).w = param_5[3];
    fVar6 = *param_4;
    fVar1 = *param_4;
    *pfVar5 = fVar1;
    fVar7 = param_4[1];
    fVar1 = ABS(fVar1);
    fVar3 = ABS(param_4[1]);
    pfVar5[1] = param_4[1];
    pfVar5[2] = param_4[2];
    pfVar5[3] = param_4[3];
    *(float *)(puVar9 + 0xf) = fVar1 - fVar3;
    fVar2 = 0.0;
    uVar16 = (ulonglong)((uint)fVar6 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 | (ulonglong)((uint)fVar7 >> 0x1d) & 4
    ;
    fVar6 = fVar1;
    if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
      fVar6 = fVar3;
    }
    fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
    if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
      fVar3 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    fVar4 = fVar2;
    if (0.0 < fVar6) {
      lVar14 = uVar12 - 0x110;
      lVar17 = uVar12 - 0x84;
      lVar19 = uVar12 - 0x74;
      lVar20 = 2;
      fVar6 = (fVar3 - fVar6) / (fVar3 + fVar6);
      fVar3 = fVar6 * fVar6;
      *(float *)(puVar9 + 0x15) = fVar6;
      *(float *)(puVar9 + 0x14) = fVar6;
      *(float *)((int)puVar9 + 0xa4) = fVar6;
      *(float *)((int)puVar9 + 0x9c) = fVar6;
      fVar6 = fVar3 * fVar3;
      *(float *)(puVar9 + 0x14) = *(float *)(puVar9 + 0x14) * fVar3;
      *(float *)((int)puVar9 + 0xa4) = *(float *)((int)puVar9 + 0xa4) * fVar6;
      *(float *)(puVar9 + 0x15) = *(float *)(puVar9 + 0x15) * fVar6 * fVar3;
      do {
        *(float *)((int)lVar14 + 0x9c) = *(float *)((int)lVar14 + 0x8c) * fVar6 * fVar6;
        iVar10 = (int)lVar17;
        lVar14 = lVar14 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar10 + 4) * fVar6 * fVar6;
        lVar19 = lVar19 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar19 = uVar12 - 0x84;
      pfVar18 = (float *)&DAT_007358e0;
      lVar20 = 4;
      lVar14 = lVar15;
      lVar17 = lVar19;
      do {
        fVar6 = *pfVar18;
        fVar3 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar14 + 0x9c) = *(float *)((int)lVar14 + 0x9c) * fVar6;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
        lVar17 = lVar17 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar17 = 2;
      lVar14 = lVar15;
      fVar6 = fVar2;
      do {
        iVar10 = (int)lVar14;
        lVar14 = lVar14 + 0x10;
        iVar11 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        fVar6 = fVar6 + *(float *)(iVar10 + 0x9c) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      fVar4 = (fVar6 + 0.7853982) * fVar7 + fVar1;
    }
    (pMVar13->rotation).z = fVar4;
    fVar1 = pfVar5[2];
    fVar7 = ABS(pfVar5[2]);
    fVar6 = SQRT(*pfVar5 * *pfVar5 + pfVar5[1] * pfVar5[1]);
    fVar3 = ABS(fVar6);
    *(float *)(puVar9 + 0xe) = fVar6;
    *(float *)((int)puVar9 + 0x74) = fVar3 - fVar7;
    uVar16 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar1 >> 0x1d) & 4;
    fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
    fVar6 = ABS(*(float *)(puVar9 + 0xe));
    if (*(float *)((int)puVar9 + 0x74) - 0.0 < 0.0) {
      fVar6 = fVar7;
    }
    fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    if (*(float *)((int)puVar9 + 0x74) - 0.0 < 0.0) {
      fVar7 = fVar3;
    }
    if (0.0 < fVar6) {
      lVar14 = uVar12 - 0x110;
      lVar17 = uVar12 - 0xa4;
      lVar19 = uVar12 - 0x94;
      lVar20 = 2;
      fVar6 = (fVar7 - fVar6) / (fVar7 + fVar6);
      fVar7 = fVar6 * fVar6;
      *(float *)(puVar9 + 0x11) = fVar6;
      *(float *)(puVar9 + 0x10) = fVar6;
      *(float *)((int)puVar9 + 0x84) = fVar6;
      *(float *)((int)puVar9 + 0x7c) = fVar6;
      fVar6 = fVar7 * fVar7;
      *(float *)(puVar9 + 0x10) = *(float *)(puVar9 + 0x10) * fVar7;
      *(float *)((int)puVar9 + 0x84) = *(float *)((int)puVar9 + 0x84) * fVar6;
      *(float *)(puVar9 + 0x11) = *(float *)(puVar9 + 0x11) * fVar6 * fVar7;
      do {
        *(float *)((int)lVar14 + 0x7c) = *(float *)((int)lVar14 + 0x6c) * fVar6 * fVar6;
        iVar10 = (int)lVar17;
        lVar14 = lVar14 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar10 + 4) * fVar6 * fVar6;
        lVar19 = lVar19 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar19 = uVar12 - 0xa4;
      pfVar18 = (float *)&DAT_007358e0;
      lVar20 = 4;
      lVar14 = lVar15;
      lVar17 = lVar19;
      do {
        fVar6 = *pfVar18;
        fVar7 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar14 + 0x7c) = *(float *)((int)lVar14 + 0x7c) * fVar6;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar7;
        lVar17 = lVar17 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar14 = 2;
      do {
        iVar10 = (int)lVar15;
        iVar11 = (int)lVar19;
        lVar15 = lVar15 + 0x10;
        lVar19 = lVar19 + 0x10;
        fVar2 = fVar2 + *(float *)(iVar10 + 0x7c) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      fVar2 = (fVar2 + 0.7853982) * fVar1 + fVar4;
    }
    auVar21 = vectorConvertFromSignedFixedPointWord(auVar24,0);
    auVar24 = ZEXT416(0xffffffff);
    auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    auVar22 = vectorShiftLeftIntegerWord(auVar24,auVar24);
    (pMVar13->rotation).y = -fVar2;
    auVar24 = loadVectorLeftIndexed(8,0x1f230);
    auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar24 = vectorAddFloatingPoint
                        (auVar21,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60);
    auVar24 = vectorMultiplyAddFloatingPoint(auVar23,auVar24,auVar22);
    auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
    auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar8 = storeVectorElementWordIndexed
                      (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x14,
                       ZEXT48(pfVar5));
    *(undefined4 *)((uint)(pfVar5 + 5) & 0xfffffffc) = uVar8;
    pfVar5[4] = param_6;
    pfVar5[6] = (float)param_3;
    pfVar5[7] = (float)param_1;
    pfVar5[9] = (float)param_2;
    pfVar5[10] = 0.0;
    mobyfunc::UpdateMobyTransform(pMVar13);
  }
  return pMVar13;
}



//==== 0001f7a8  ns=mobyupdate_unsorted  size=0x8a8
// sig: undefined UpdateMoby_409(MobyInstance * moby)
// callers(0): 
// callees(13): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere; 000efb38 mobyfunc::DeleteMoby; 000fe484 mobyutil::MB_randRange; 0010581c mobyutil::SetCollDamIn; 00105ab4 mobyutil::CollDamageMobyDirect; 0010675c mobyutil::MB_damage; 0010e030 mobyutil::MB_genericExplosion; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00121740 partupd::SpawnPart_4; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 00502b08 fastfunc::FastVecAddSelf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 409 */

void mobyupdate_unsorted::UpdateMoby_409(MobyInstance *moby)

{
  longlong lVar1;
  bool bVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  f32 fVar7;
  float fVar8;
  float *pfVar9;
  float fVar10;
  undefined4 uVar11;
  undefined2 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  ulonglong *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  MobyInstance *pMVar22;
  ulonglong uVar23;
  longlong lVar24;
  int iVar26;
  undefined8 uVar25;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  longlong lVar27;
  ulonglong unaff_r29;
  longlong lVar28;
  ulonglong unaff_r30;
  ulonglong uVar29;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar30;
  ulonglong in_f31;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  
  lVar24 = (longlong)(int)moby;
  uVar23 = ZEXT48(&stack0x00000000);
  lVar1 = uVar23 - 0x1a0;
  puVar15 = (ulonglong *)lVar1;
  *puVar15 = uVar23;
  puVar15[0x36] = in_LR;
  puVar15[0x33] = in_f31;
  puVar15[0x32] = unaff_r31;
  bVar3 = moby->state;
  puVar15[0x31] = unaff_r30;
  pfVar9 = (float *)moby->pVar;
  uVar29 = ZEXT48(pfVar9);
  puVar15[0x30] = unaff_r29;
  puVar15[0x2f] = unaff_r28;
  puVar15[0x2e] = unaff_r27;
  puVar15[0x2d] = unaff_r26;
  puVar15[0x2c] = unaff_r25;
  puVar15[0x2b] = unaff_r24;
  puVar15[0x2a] = unaff_r23;
  puVar15[0x29] = unaff_r22;
  if (bVar3 < 2) {
    if (bVar3 != 0) {
      iVar26 = mobyutil::MB_damage(lVar24,0x230000,0);
      fVar4 = (moby->pos).x;
      fVar5 = (moby->pos).y;
      fVar6 = (moby->pos).z;
      fVar7 = (moby->pos).w;
      fVar8 = (moby->rotation).x;
      if ((iVar26 == 0) || (*(float *)(iVar26 + 0x20) == pfVar9[4])) {
        if ((Level == Hoven) &&
           ((g_heroState == TURRET_PLANE_UI && (fVar10 = pfVar9[4], fVar10 != 0.0)))) {
          if (0x7f < *(byte *)((int)fVar10 + 0x20)) {
            mobyfunc::DeleteMoby(moby);
            return;
          }
          if (*(byte *)((int)fVar10 + 0x20) < 2) {
            moby->state = '\x02';
            return;
          }
        }
        *(float *)(puVar15 + 0x18) = fVar4;
        *(float *)((int)puVar15 + 0xc4) = fVar5;
        *(float *)(puVar15 + 0x19) = fVar6;
        *(f32 *)((int)puVar15 + 0xcc) = fVar7;
        (moby->pos).x = fVar4 + *pfVar9;
        (moby->pos).y = fVar5 + pfVar9[1];
        (moby->pos).z = fVar6 + pfVar9[2];
        (moby->rotation).z = pfVar9[7];
        dVar30 = (double)fastfunc::FastWrapRot(fVar8,mobyutil::g_FrameTime * 6.2831855);
        (moby->rotation).x = (float)dVar30;
        fVar4 = *pfVar9;
        fVar5 = SQRT(pfVar9[2] * pfVar9[2] + fVar4 * fVar4 + pfVar9[1] * pfVar9[1]);
        if (fVar5 == 0.0) {
          *(float *)(puVar15 + 0x1a) = fVar4;
          *(float *)((int)puVar15 + 0xd4) = pfVar9[1];
          *(float *)(puVar15 + 0x1b) = pfVar9[2];
          fVar4 = pfVar9[3];
          *(undefined4 *)(puVar15 + 0x1b) = 0;
          *(undefined4 *)((int)puVar15 + 0xd4) = 0;
          *(undefined4 *)(puVar15 + 0x1a) = 0;
        }
        else {
          fVar5 = 0.2 / fVar5;
          *(float *)(puVar15 + 0x1a) = fVar4 * fVar5;
          *(float *)((int)puVar15 + 0xd4) = pfVar9[1] * fVar5;
          *(float *)(puVar15 + 0x1b) = pfVar9[2] * fVar5;
          fVar4 = pfVar9[3];
        }
        *(float *)((int)puVar15 + 0xdc) = fVar4;
        fVar4 = *pfVar9;
        fVar5 = SQRT(pfVar9[2] * pfVar9[2] + fVar4 * fVar4 + pfVar9[1] * pfVar9[1]);
        if (fVar5 == 0.0) {
          *(float *)(puVar15 + 0x1c) = fVar4;
          *(float *)((int)puVar15 + 0xe4) = pfVar9[1];
          *(float *)(puVar15 + 0x1d) = pfVar9[2];
          fVar4 = pfVar9[3];
          *(undefined4 *)(puVar15 + 0x1d) = 0;
          *(undefined4 *)((int)puVar15 + 0xe4) = 0;
          *(undefined4 *)(puVar15 + 0x1c) = 0;
        }
        else {
          fVar5 = -0.2 / fVar5;
          *(float *)(puVar15 + 0x1c) = fVar4 * fVar5;
          *(float *)((int)puVar15 + 0xe4) = pfVar9[1] * fVar5;
          *(float *)(puVar15 + 0x1d) = pfVar9[2] * fVar5;
          fVar4 = pfVar9[3];
        }
        lVar27 = uVar23 - 0xc0;
        lVar28 = lVar24 + 0x10;
        *(float *)((int)puVar15 + 0xec) = fVar4;
        fastfunc::FastVecAddSelf(uVar23 - 0xb0,lVar27,lVar28);
        iVar26 = mobyutil::MB_randRange(0xf,0x16);
        puVar15[0x26] = (longlong)iVar26;
        dVar30 = 0.5;
        puVar15[0x26] =
             (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar15[0x26] + 0.5));
        uVar11 = *(undefined4 *)((int)puVar15 + 0x134);
        uVar25 = mobyutil::MB_randRange(0x14,0x23);
        partupd::SpawnPart_4(lVar27,uVar23 - 0xd0,0x6f00afff,0xff,uVar11,0x28,uVar25,1);
        iVar26 = mobyutil::MB_randRange(0x1e,0x3c);
        puVar15[0x26] = (longlong)iVar26;
        puVar15[0x26] =
             (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar15[0x26] + dVar30));
        uVar11 = *(undefined4 *)((int)puVar15 + 0x134);
        uVar25 = mobyutil::MB_randRange(0x32,0x4b);
        partupd::SpawnPart_4(lVar27,uVar23 - 0xd0,0x1fffffff,0x4f4f4f,uVar11,0x28,uVar25,0);
        iVar26 = collproc::CollLine(lVar28,uVar23 - 0xe0,0,lVar24,0);
        if ((iVar26 != 0) ||
           (iVar26 = collproc::CollSphere(0x3fc99999a0000000,lVar28,&DAT_0001f700,0,lVar24),
           iVar26 != 0)) {
          if ((CollOutput.pMoby != (MobyInstance *)0x0) &&
             (CollOutput.pMoby != (MobyInstance *)pfVar9[4])) {
            iVar26 = 1;
            if (((Level == Hoven) && (g_heroState == TURRET_PLANE_UI)) &&
               (iVar26 = 3, 0xf < DAT_00927130)) {
              iVar26 = 2;
            }
            puVar15[0x26] = (longlong)iVar26;
            mobyutil::SetCollDamIn((double)(longlong)puVar15[0x26],uVar23 - 0xa0,lVar24,0x10003);
            fVar4 = pfVar9[7] + 1.5707963;
            auVar35 = ZEXT416(0xffffffff);
            auVar34 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
            auVar35 = ZEXT416(0xffffffff);
            auVar38 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
            auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
            fVar5 = 3.1415925 - fVar4;
            if (fVar4 - (3.1415925 - fVar4) < 0.0) {
              fVar5 = fVar4;
            }
            fVar6 = -3.1415925 - fVar4;
            if ((-3.1415925 - fVar4) - fVar5 < 0.0) {
              fVar6 = fVar5;
            }
            auVar34 = loadVectorLeftIndexed(0x18,0x1f700);
            auVar31 = loadVectorLeftIndexed(0x1c,0x1f700);
            auVar39 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar34 = loadVectorLeftIndexed(0x20,0x1f700);
            fVar4 = fVar6 * fVar6;
            auVar32 = loadVectorLeftIndexed(0x24,0x1f700);
            auVar33 = loadVectorLeftIndexed(0x28,0x1f700);
            auVar13 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar34 = loadVectorLeftIndexed(0x2c,0x1f700);
            auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar14 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
            fVar5 = fVar4 * fVar4 * fVar6;
            fVar8 = fVar4 * fVar5;
            *(float *)(puVar15 + 0x20) =
                 fVar4 * fVar8 * 2.601887e-06 +
                 fVar8 * -0.0001980741 + fVar5 * 0.0083330255 + fVar4 * fVar6 * -0.16666657 + fVar6;
            pMVar22 = CollOutput.pMoby;
            auVar36 = loadVectorLeftIndexed(0x1c,uVar29);
            auVar34 = loadVectorRightIndexed(0x2c,uVar29);
            auVar36 = auVar36 | auVar34;
            auVar34 = ZEXT416(0xffffffff);
            auVar37 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar34 = vectorSubtractFloatingPoint
                                (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                                 auVar36);
            auVar31 = vectorSubtractFloatingPoint
                                (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                                 auVar36);
            auVar37 = vectorShiftLeftIntegerWord(auVar37,auVar37);
            auVar39 = vectorCompareGreaterThanFloatingPoint(auVar34,auVar36);
            auVar39 = vectorConditionalSelect(auVar34,auVar36,auVar39);
            auVar34 = ZEXT416(0xffffffff);
            auVar40 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar34 = vectorCompareGreaterThanFloatingPoint(auVar39,auVar31);
            auVar34 = vectorConditionalSelect(auVar31,auVar39,auVar34);
            auVar31 = loadVectorLeftIndexed(0xa6,lVar24);
            auVar39 = vectorMultiplyAddFloatingPoint(auVar34,auVar34,auVar35);
            auVar38 = vectorShiftLeftIntegerWord(auVar38,auVar38);
            auVar35 = ZEXT416(0xfffffff0);
            auVar36 = vectorShiftRightWord
                                (auVar31,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 |
                                         auVar35 << 0x60);
            auVar40 = vectorShiftLeftIntegerWord(auVar40,auVar40);
            auVar35 = ZEXT416(0xffffffff);
            auVar31 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
            auVar35 = vectorMultiplyAddFloatingPoint(auVar39,auVar34,auVar37);
            auVar37 = vectorShiftLeftIntegerWord(auVar31,auVar31);
            auVar31 = vectorMultiplyAddFloatingPoint(auVar39,auVar35,auVar38);
            auVar35 = vectorMultiplyAddFloatingPoint
                                (auVar35,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 |
                                         auVar13 << 0x60,auVar34);
            auVar38 = vectorMultiplyAddFloatingPoint(auVar39,auVar31,auVar40);
            auVar35 = vectorMultiplyAddFloatingPoint
                                (auVar31,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 |
                                         auVar32 << 0x60,auVar35);
            auVar31 = vectorSplatHalfWord(auVar36,1);
            auVar34 = vectorMultiplyAddFloatingPoint(auVar39,auVar38,auVar37);
            auVar35 = vectorMultiplyAddFloatingPoint
                                (auVar38,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 |
                                         auVar33 << 0x60,auVar35);
            auVar34 = vectorMultiplyAddFloatingPoint
                                (auVar34,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 |
                                         auVar14 << 0x60,auVar35);
            auVar35 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar11 = storeVectorElementWordIndexed
                               (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x104,
                                lVar1);
            *(undefined4 *)((int)puVar15 + 0x104) = uVar11;
            *(undefined4 *)(puVar15 + 0x21) = 0x3f800000;
            *(undefined4 *)((int)puVar15 + 0x10c) = 0x45afdf66;
            *(undefined1 *)(puVar15 + 0x23) = 1;
            *(undefined1 *)((int)puVar15 + 0x119) = 1;
            uVar12 = storeVectorElementHalfWordIndexed(auVar31,0x11a,lVar1);
            *(undefined2 *)((int)puVar15 + 0x11a) = uVar12;
            auVar35 = loadVectorLeftIndexed(0x60,0x1f700);
            auVar34 = vectorPermute(auVar34,_DAT_0001f730,_DAT_0001f740);
            auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar34 = vectorPermute(auVar34,*(undefined1 (*) [16])(puVar15 + 0x20),_DAT_0001f750);
            auVar35 = vectorPermute(auVar36,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 |
                                            auVar35 << 0x60,_DAT_0001f770);
            auVar35 = vectorPermute(auVar35,*(undefined1 (*) [16])(puVar15 + 0x22),_DAT_0001f780);
            *(undefined1 (*) [16])(puVar15 + 8) = auVar34;
            *(undefined4 *)((int)puVar15 + 0x6c) = *(undefined4 *)((int)puVar15 + 300);
            *(undefined4 *)(puVar15 + 0xd) = *(undefined4 *)(puVar15 + 0x25);
            *(undefined4 *)((int)puVar15 + 100) = *(undefined4 *)((int)puVar15 + 0x124);
            *(undefined4 *)(puVar15 + 0xc) = *(undefined4 *)(puVar15 + 0x24);
            *(undefined1 (*) [16])(puVar15 + 10) = auVar35;
            mobyutil::CollDamageMobyDirect
                      (pMVar22,pMVar22,puVar15[8],puVar15[9],puVar15[10],puVar15[0xb],puVar15[0xc],
                       puVar15[0xd]);
          }
          moby->state = '\x02';
        }
        iVar26 = fastfunc::FastDecTimerS32(uVar29 + 0x14);
        if (iVar26 != 0) {
          moby->state = '\x02';
        }
      }
      else {
        moby->state = '\x02';
      }
    }
  }
  else if (bVar3 < 3) {
    fVar4 = (moby->pos).y;
    fVar5 = (moby->pos).x;
    fVar16 = fVar4 - GameCamera.posY;
    fVar6 = (moby->pos).z;
    fVar20 = fVar5 - GameCamera.posX;
    fVar21 = fVar6 - GameCamera.posZ;
    fVar8 = SQRT(fVar21 * fVar21 + fVar20 * fVar20 + fVar16 * fVar16);
    fVar18 = 0.0;
    bVar2 = Level == Hoven;
    fVar10 = 0.4 / fVar8;
    fVar19 = fVar18;
    if (0.0 - fVar8 < 0.0) {
      fVar19 = fVar10 * fVar21;
    }
    fVar17 = fVar18;
    if (0.0 - fVar8 < 0.0) {
      fVar17 = fVar10 * fVar16;
    }
    if (0.0 - fVar8 < 0.0) {
      fVar18 = fVar10 * fVar20;
    }
    if (fVar8 - 0.0 < 0.0) {
      fVar19 = fVar10 * fVar21;
    }
    if (fVar8 - 0.0 < 0.0) {
      fVar17 = fVar10 * fVar16;
    }
    if (fVar8 - 0.0 < 0.0) {
      fVar18 = fVar10 * fVar20;
    }
    (moby->pos).z = fVar6 + fVar19;
    (moby->pos).y = fVar4 + fVar17;
    (moby->pos).x = fVar5 + fVar18;
    if ((bVar2) && (g_heroState == TURRET_PLANE_UI)) {
      puVar15[0x12] = 0xffffffffffffffff;
      puVar15[0x14] = 0;
      puVar15[0x15] = 0;
      puVar15[0x16] = 0xffffffffffffffff;
      puVar15[0x17] = 0;
      mobyutil::MB_genericExplosion
                (0,0,0x3fd3333340000000,0x3fc99999a0000000,0,0x3fc3333340000000,lVar24,&DAT_00a15d30
                 ,0,0,0xffffffffffffffff,3,3,5);
      auVar35 = ZEXT416(0xffffffff);
      auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar34 = vectorShiftLeftIntegerWord(auVar35,auVar35);
      GameCamera.offset0.amp = 0.025;
      auVar35 = loadVectorLeftIndexed(0x9c,0x1f700);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar35 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                           auVar34);
      auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      GameCamera.offset0.total =
           storeVectorElementWordIndexed
                     (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x168,0x9513c0);
    }
    else {
      mobyutil::MB_SpawnExplosionSparks
                (0x3fd0000000000000,0x402a000000000000,lVar24,lVar24 + 0x10,&DAT_0001f700,0);
    }
    mobyfunc::DeleteMoby(moby);
  }
                    /* WARNING: Read-only address (ram,0x0001f730) is written */
                    /* WARNING: Read-only address (ram,0x0001f740) is written */
                    /* WARNING: Read-only address (ram,0x0001f750) is written */
                    /* WARNING: Read-only address (ram,0x0001f770) is written */
                    /* WARNING: Read-only address (ram,0x0001f780) is written */
  return;
}



