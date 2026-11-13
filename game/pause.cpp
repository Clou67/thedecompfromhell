// game/pause.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 145 functions, 0x13a9c4-0x151d48
#include <stdio.h>
#include <string.h>
#include "game/pause.h"
#include "game/boot.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/loaders.h"
#include "game/main.h"
#include "game/map.h"
#include "game/mcstate.h"
#include "game/memcard.h"
#include "game/mesh.h"
#include "game/mission.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/pad.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/sUnk.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby1118.h"
#include "game/vendor.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"
#include "idol/idol.h"
#include "idol/mUnk.h"
#include "sdk/libc/abort.h"
#include "sdk/libgcm_cmd/marker.h"
#include "sdk/mUnk4.h"

// 0x013a9c4 (0x14 bytes)
void SECTION_HEADER_PAUSE(void)

{
  DAT_00729818 = 0x10000;
  return;
}


// 0x013a9d8 (0x10 bytes)
/* [p2_pause] returns g_MenuScreen
   [p2_pause] returns g_MenuScreen
   [p2_pause] returns g_MenuScreen */

undefined4 GetMenuScreen(void)

{
  return g_MenuScreen;
}


// 0x013a9e8 (0x124 bytes)
// strings: 0065349c: 'rc1/ps3data/global/hud_seq%d.ps3'

/* [p2_pause] loads rc1/ps3data/global/hud_seq%d.ps3 x20, relocates; called from startLevel
   [p2_pause] loads rc1/ps3data/global/hud_seq%d.ps3 x20, relocates; called from startLevel
   [p2_pause] loads rc1/ps3data/global/hud_seq%d.ps3 x20, relocates; called from startLevel */

void LoadHudSequences(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  char acStack_120 [256];
  
  uVar5 = 0;
  uVar4 = g_NpcBuffer + 0x400000;
  do {
    snprintf(acStack_120,"rc1/ps3data/global/hud_seq%d.ps3",uVar5);
    iVar1 = LoadAssetFromFile(acStack_120,uVar4,0xffffffffffffffff);
    iVar6 = (int)((uVar5 & 0xffffffff) << 2);
    *(uint *)(&DAT_00a52d04 + iVar6) = uVar4;
    uVar4 = uVar4 + iVar1 + 0xf & 0xfffffff0;
    iVar6 = *(int *)(&DAT_00a52d04 + iVar6);
    if (*(int *)(iVar6 + 0x14) != 0) {
      *(int *)(iVar6 + 0x14) = iVar6 + *(int *)(iVar6 + 0x14);
    }
    iVar1 = 0;
    if (*(char *)(iVar6 + 0x10) != '\0') {
      iVar2 = 0;
      do {
        iVar1 = iVar1 + 1;
        piVar3 = (int *)(iVar6 + 0x1c + iVar2);
        iVar2 = iVar2 + 4;
        *piVar3 = iVar6 + *piVar3;
      } while (iVar1 < (int)(uint)*(byte *)(iVar6 + 0x10));
    }
    iVar6 = (int)uVar5 + 1;
    uVar5 = (ulonglong)iVar6;
  } while (iVar6 < 0x14);
  return;
}


// 0x013ab10 (0xbc bytes)
/* [p2_pause] sets GameCamera pos 256,256,64 + identity orient (same code as head of FrontEnd menu
   update)
   [p2_pause] sets GameCamera pos 256,256,64 + identity orient (same code as head of FrontEnd menu
   update)
   [p2_pause] sets GameCamera pos 256,256,64 + identity orient (same code as head of FrontEnd menu
   update) */

void ResetMenuCamera(void)

{
  GameCamera.posX = 256.0;
  GameCamera.posY = 256.0;
  GameCamera.posZ = 64.0;
  memset(0x951710,0,0x10);
  memset(0x951720,0,0x10);
  memset(0x951730,0,0x10);
  GameCamera.orientMtx.forward.x = 1.0;
  GameCamera.orientMtx.right.y = 1.0;
  GameCamera.orientMtx.up.z = 1.0;
  GameCamera.orientMtx.up.w = 1.0;
  return;
}


// 0x013abcc (0x344 bytes)
/* [p2_pause] called from UpdateGameplay/UpdateSpace with screen id; saves view state, sets menu
   flags per level/challenge mode
   [p2_pause] called from UpdateGameplay/UpdateSpace with screen id; saves view state, sets menu
   flags per level/challenge mode
   [p2_pause] called from UpdateGameplay/UpdateSpace with screen id; saves view state, sets menu
   flags per level/challenge mode */

void BeginMenu(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  DAT_00a534a4 = *(undefined4 *)(g_pIdolDraw + 0x1a78);
  *(undefined4 *)(g_pIdolDraw + 0x1a78) = 0;
  FUN_0060bc8c(0x1d);
  music_Pause(0);
  STUB_00505d20();
  FUN_004edce4(&DAT_01111700,1);
  if (ControlMode == 0) {
    DAT_00a52e68 = DAT_00a52e64;
    if (g_equippedItem == (PDA|HYDRO_PACK)) {
      g_equippedItem = UNK_00;
    }
    DAT_00a52ce0 = 0;
    if ((Level == Gemlik) || (DAT_0096bfab != '\0')) {
      DAT_00a52ce0 = 1;
    }
    DAT_00a52ce4 = 0;
    if ((Level == Veldin) || (Level == Oltanis)) {
      DAT_00a52ce4 = 1;
    }
    DAT_00a52c88 = false;
    if ((g_ChallengeMode != 0 || g_goodiesMenuActive != 0) || (DAT_00a52ca4 != '\0')) {
      DAT_00a52c88 = true;
    }
    DAT_00a52c89 = (undefined1)((ulonglong)(LZCOUNT(param_1 + -0x23) << 0x20) >> 0x25);
    if (!(bool)DAT_00a52c88) {
      DAT_00729be8 = &PTR_PTR_00729d40;
    }
    else {
      DAT_00729be8 = &PTR_PTR_00729d90;
    }
    DAT_00729d7c = &PTR_PTR_00729bb0;
    if ((bool)DAT_00a52c88) {
      DAT_00729d7c = &PTR_PTR_00729d90;
    }
    g_gameMode = GAME_MODE_PAUSE;
    g_menuClosing = 0;
    DAT_00a52bc0 = 0;
    DAT_00a52cbc = 0;
    g_SelectedLevel = Veldin;
    if ((int)Level < 0x13) {
      g_SelectedLevel = Level;
    }
    g_MenuScreen = param_1;
    RefreshLevelMissionStatus();
    DAT_0072ba84 = 0;
    iVar1 = MB_CountSkillPoints();
    iVar2 = MB_CountSkillPoints();
    iVar3 = MB_CountGoldWeapons();
    DAT_0072e1fe = 2;
    DAT_0072e222 = 2;
    if (0xe < iVar1) {
      DAT_0072e1fe = 3;
    }
    DAT_0072e20a = 2;
    if (0x1d < iVar2) {
      DAT_0072e20a = 3;
    }
    DAT_0072e216 = 2;
    if (9 < iVar3) {
      DAT_0072e216 = 10;
      DAT_0072e222 = 3;
    }
    DAT_0072e24c = 0x4fd9;
    if (0xe < iVar1) {
      DAT_0072e24c = 0x4fd3;
    }
    DAT_0072e250 = 0x4fda;
    if (0x1d < iVar2) {
      DAT_0072e250 = 0x4fd4;
    }
    DAT_0072e254 = 0x4fdb;
    DAT_0072e258 = 0x4fdb;
    if (9 < iVar3) {
      DAT_0072e254 = 0x4fd7;
      DAT_0072e258 = 0x4fd8;
    }
    if ((g_JapaneseMode == false) && (DAT_00966af0 != 0)) {
      DAT_0072e220 = 0;
    }
    DAT_00a52cec = 0;
    g_HideActivityIcon = 1;
  }
  else {
    DAT_00a15c78 = 1;
  }
  return;
}


// 0x013af10 (0x58 bytes)
void Menu_UpdateViewMtxIfChanged(void)

{
  if (DAT_00a52e64 != DAT_00a52e68) {
    DAT_00a52e68 = DAT_00a52e64;
    FUN_004d6f50(g_pIdolDraw,DAT_00a52e64);
  }
  return;
}


// 0x013af68 (0x194 bytes)
/* [p2_pause] fills 0xa53098 slot table {ptr,flags} with 0x11800-byte buffers
   [p2_pause] fills 0xa53098 slot table {ptr,flags} with 0x11800-byte buffers
   [p2_pause] fills 0xa53098 slot table {ptr,flags} with 0x11800-byte buffers */

void Menu_InitStreamBuffers(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar6;
  longlong lVar5;
  int iVar7;
  
  iVar1 = DAT_00a52cb8;
  if (param_1 != 0) {
    iVar6 = 2;
    iVar4 = 2;
  }
  else {
    iVar6 = 1;
    iVar4 = 0;
  }
  uVar2 = 0;
  iVar3 = DAT_00a52cb4;
  if (iVar6 != 0) {
    iVar7 = 0;
    do {
      uVar2 = uVar2 + 1;
      *(int *)((int)&DAT_00a53098 + iVar7) = iVar3;
      iVar3 = iVar3 + 0x11800;
      *(undefined4 *)((int)&DAT_00a5309c + iVar7) = 0;
      iVar7 = iVar7 + 8;
    } while ((int)uVar2 < iVar6);
  }
  iVar6 = iVar6 + (uint)(param_1 != 0);
  if ((int)uVar2 < iVar6) {
    lVar5 = (uVar2 & 0x1fffffff) << 3;
    do {
      iVar7 = (int)lVar5;
      uVar2 = uVar2 + 1;
      *(int *)((int)&DAT_00a53098 + iVar7) = iVar1;
      lVar5 = lVar5 + 8;
      iVar1 = iVar1 + 0x11800;
      *(undefined4 *)((int)&DAT_00a5309c + iVar7) = 0;
    } while ((int)uVar2 < iVar6);
  }
  iVar6 = iVar6 + iVar4;
  if ((int)uVar2 < iVar6) {
    lVar5 = (uVar2 & 0x1fffffff) << 3;
    do {
      iVar4 = (int)lVar5;
      uVar2 = uVar2 + 1;
      *(int *)((int)&DAT_00a53098 + iVar4) = iVar3;
      lVar5 = lVar5 + 8;
      iVar3 = iVar3 + 0x4f000;
      *(undefined4 *)((int)&DAT_00a5309c + iVar4) = 1;
    } while ((int)uVar2 < iVar6);
  }
  if ((int)uVar2 < iVar6) {
    lVar5 = (uVar2 & 0x1fffffff) << 3;
    do {
      iVar4 = (int)lVar5;
      uVar2 = uVar2 + 1;
      *(int *)((int)&DAT_00a53098 + iVar4) = iVar1;
      lVar5 = lVar5 + 8;
      iVar1 = iVar1 + 0x4f000;
      *(undefined4 *)((int)&DAT_00a5309c + iVar4) = 1;
    } while ((int)uVar2 < iVar6);
  }
  if ((int)uVar2 < 5) {
    lVar5 = (uVar2 & 0x1fffffff) << 3;
    do {
      iVar1 = (int)lVar5;
      uVar2 = uVar2 + 1;
      lVar5 = lVar5 + 8;
      *(undefined4 *)((int)&DAT_00a53098 + iVar1) = 0;
      *(undefined4 *)((int)&DAT_00a5309c + iVar1) = 0;
    } while ((int)uVar2 < 5);
  }
  return;
}


// 0x013b108 (0x728 bytes)
void OpenPauseMenu(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  MobyInstance *pMVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  double dVar13;
  
  bVar5 = false;
  puVar11 = &g_MenuScreen;
  g_CollOutput.collCount = g_CollOutput.collCount | 0x80000000;
  g_unclosableMenu = 0;
  DAT_00a52c80 = 0;
  if (g_MenuScreen == 10) {
    bVar5 = true;
    g_MenuScreen = 0xb;
    g_currentMenuPage = (undefined4 *)&DAT_0072a9f0;
    g_nextMenuPage = (undefined4 *)&DAT_0072a9f0;
  }
  else if (g_MenuScreen == 0xe) {
    bVar5 = true;
    g_MenuScreen = 0xf;
    g_currentMenuPage = (undefined4 *)&DAT_0072d87c;
    g_nextMenuPage = (undefined4 *)&DAT_0072d87c;
  }
  else if (g_MenuScreen == 0x21) {
    g_MenuScreen = 0x22;
    g_unclosableMenu = 1;
    DAT_00a15f39 = 1;
    g_currentMenuPage = (undefined4 *)&DAT_0072ebc8;
    g_nextMenuPage = (undefined4 *)&DAT_0072ebc8;
  }
  else if (g_MenuScreen == 0x23) {
    g_currentMenuPage = (undefined4 *)&DAT_0072e43c;
    g_nextMenuPage = (undefined4 *)&DAT_0072e43c;
  }
  else if (g_MenuScreen == 0x2d) {
    g_MenuScreen = 2;
    g_currentMenuPage = &DAT_00730034;
    g_nextMenuPage = &DAT_00730034;
  }
  else {
    g_MenuScreen = 2;
    g_currentMenuPage = (undefined4 *)&mainPage;
    g_nextMenuPage = (undefined4 *)&mainPage;
  }
  if (resumePage != (undefined4 *)0x0) {
    g_MoviePlayState = DAT_00a52cdc;
    g_currentMenuPage = resumePage;
    g_nextMenuPage = resumePage;
    g_MenuScreen = resumeScreen;
    if (resumeScreen == 0xf || resumeScreen == 0xb) {
      bVar5 = true;
      g_SelectedLevel = DAT_00a52c90;
      RefreshLevelMissionStatus();
    }
    resumePage = (undefined4 *)0x0;
    resumeScreen = 0;
  }
  DAT_00a1de90 = DAT_007298d0;
  DAT_00a1de94 = DAT_007298d4;
  DAT_00a1de98 = DAT_007298d8;
  DAT_00a1de9c = DAT_007298dc;
  DAT_00a1de80 = DAT_007298e0;
  DAT_00a1de84 = DAT_007298e4;
  DAT_00a1de88 = DAT_007298e8;
  DAT_00a1de8c = DAT_007298ec;
  memset(&DAT_00a1deb0,0,0x10);
  memset(&DAT_00a1dea0,0,0x10);
  DAT_00a52bf0 = GameCamera.posX;
  DAT_00a52bf4 = GameCamera.posY;
  DAT_00a52bf8 = GameCamera.posZ;
  DAT_00a52bfc[0] = ((u8 *)&GameCamera.posW)[0];
  DAT_00a52bfc[1] = ((u8 *)&GameCamera.posW)[1];
  DAT_00a52bfc[2] = ((u8 *)&GameCamera.posW)[2];
  DAT_00a52bfc[3] = ((u8 *)&GameCamera.posW)[3];
  DAT_00a52c00 = GameCamera.rot.azimuth;
  DAT_00a52c04 = GameCamera.rot.elevation;
  DAT_00a52c08 = GameCamera.rot.radius;
  DAT_00a52c0c[0] = ((u8 *)&GameCamera.rotW)[0];
  DAT_00a52c0c[1] = ((u8 *)&GameCamera.rotW)[1];
  DAT_00a52c0c[2] = ((u8 *)&GameCamera.rotW)[2];
  DAT_00a52c0c[3] = ((u8 *)&GameCamera.rotW)[3];
  DAT_00a52c94 = g_ViewContext.xratio;
  dVar13 = 0.0;
  g_ViewContext.fogNearDist = 0.0;
  g_ViewContext.fogFarDist = 524288.0;
  g_ViewContext.fogNearIntensity = 255.0;
  g_ViewContext.xratio = 0.63;
  g_ViewContext.fogFarIntensity = 0.0;
  UpdateViewContext();
  GameCamera.posX = 256.0;
  GameCamera.posZ = 64.0;
  GameCamera.posY = 256.0;
  memset(0x951710,0,0x10);
  memset(0x951720,0,0x10);
  memset(0x951730,0,0x10);
  GameCamera.orientMtx.forward.x = 1.0;
  GameCamera.orientMtx.right.y = 1.0;
  GameCamera.orientMtx.up.z = 1.0;
  GameCamera.orientMtx.up.w = 1.0;
  ComposeCameraMatrix();
  STUB_00174cf4(1);
  STUB_00503078(0);
  g_MainLoopFrames = g_MainLoopFrames + 1;
  if (bVar5) {
    DAT_00e5aa64 = 0x30000;
    DAT_00a52cb0 = g_NpcBuffer;
    DAT_00a52cac = g_NpcBuffer + 0x1e0000;
    DAT_00a52bc0 = (code *)(g_NpcBuffer + 0x100000);
    DAT_00a52ca8 = g_NpcBuffer + 0x4d800;
    DAT_00a52cb4 = g_NpcBuffer + 0x3c000;
    DAT_00a52cb8 = DAT_00a52cac;
    Menu_InitStreamBuffers(0);
  }
  else {
    DAT_00a52cb0 = g_NpcBuffer + 0xc000;
    DAT_00e5aa64 = 0x60000;
    DAT_00a52bc0 = MB_CopyHeroLights + g_NpcBuffer;
    DAT_00a52cb4 = g_NpcBuffer + 0x3c000;
    DAT_00a52cb8 = g_NpcBuffer + 0x1ec000;
    DAT_00a52cac = g_NpcBuffer + 0x1fd800;
    DAT_00a52ca8 = g_NpcBuffer + 0xfd000;
    Menu_InitStreamBuffers(1);
  }
  DAT_0071fbd4 = 0x2000;
  VU1_initChain();
  if ((g_MenuScreen == 0xb) || (g_MenuScreen == 0xf)) {
    Map_OnPauseMenuOpen();
  }
  STUB_000c8818(0);
  if (((g_MenuScreen == 0xb) || (g_MenuScreen == 0xf)) || (g_MenuScreen == 0x12)) {
    STUB_000c8810(1);
  }
  else {
    STUB_000c8810(0);
  }
  Draw_FlushAndPresent();
  DAT_00a52bc8 = g_GsRamBase;
  if ((g_MenuScreen == 0xb) || (g_MenuScreen == 0xf)) {
    DAT_00a20704 = g_GsRamBase + 0x40000;
    DAT_00a20700 = g_GsRamBase;
    iVar7 = 0;
    g_GsRamBase = g_GsRamBase + 0x40400;
    do {
      iVar8 = iVar7 + 1;
      iVar12 = g_GsRamBase + 0x4000;
      (&DAT_00a20708)[iVar7] = g_GsRamBase;
      iVar7 = iVar8;
      g_GsRamBase = iVar12;
    } while (iVar8 < 4);
  }
  else {
    iVar7 = 4;
    puVar10 = &DAT_00a204c0;
    DAT_00a20700 = 0;
    DAT_00a20704 = 0;
    do {
      iVar7 = iVar7 + -1;
      puVar10[0x92] = 0;
      puVar10 = puVar10 + 1;
    } while (iVar7 != 0);
  }
  Hud_SwapMobyBank(1);
  iVar7 = 0;
  iVar8 = 4;
  DAT_00a52c7c = (uint)MobyClasses[0]->seq_cnt;
  MobyClasses[0]->seq_cnt = MobyClasses[0]->seq_cnt + '\x1c';
  do {
    iVar8 = iVar8 + -1;
    puVar10 = (undefined4 *)((int)&g_equippedItem + iVar7);
    iVar7 = iVar7 + 4;
    puVar11[0xc] = *puVar10;
    puVar11 = puVar11 + 1;
  } while (iVar8 != 0);
  if (g_currentMenuPage != (undefined4 *)0x0) {
    iVar8 = 0;
    iVar7 = 0;
    do {
      if (DAT_00a35932 == -1) {
        pMVar9 = (MobyInstance *)0x0;
      }
      else {
        pMVar9 = CreateMoby(FRAME);
        if (pMVar9 != (MobyInstance *)0x0) {
          pMVar9->updateDistance = -1;
          pMVar9->drawDistance = 0xff;
          pMVar9->enabled = '\x01';
          pMVar9->state = '\0';
          UpdateMobyTransform(pMVar9);
          MB_SetLights(pMVar9,0x202020,0xe,0xe,0);
        }
      }
      *(MobyInstance **)((int)g_menuMobys + iVar7) = pMVar9;
      fVar6 = GameCamera.posX;
      if (*(int *)((int)g_menuMobys + iVar7) != 0) {
        iVar2 = *(int *)((int)g_menuMobys + iVar7);
        *(undefined ***)(iVar2 + 0x74) = &PTR_UpdateMoby_1138_00708f30;
        iVar3 = *(int *)((int)g_menuMobys + iVar7);
        uVar1 = *(ushort *)(iVar2 + 0x34);
        iVar12 = *(int *)(iVar3 + 0x24);
        iVar4 = *(int *)((int)g_currentMenuPage + iVar7);
        *(float *)(iVar3 + 0x10) = fVar6;
        fVar6 = GameCamera.posY;
        *(ushort *)(iVar2 + 0x34) = uVar1 & 0xfffd;
        *(float *)(iVar3 + 0x14) = fVar6;
        fVar6 = GameCamera.posZ;
        *(float *)(iVar3 + 0x40) = (float)dVar13;
        *(float *)(iVar3 + 0x18) = fVar6;
        *(float *)(iVar3 + 0x44) = (float)dVar13;
        *(float *)(iVar3 + 0x48) = (float)dVar13;
        MB_SetAnimationNoBlend
                  (iVar3,iVar4,(ulonglong)*(byte *)(*(int *)(iVar12 + 0x48 + iVar4 * 4) + 0x10) - 1)
        ;
      }
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar8 < 0xe);
  }
  return;
}


// 0x013b838 (0xda8 bytes)
// strings: 006534c0: 'Transition to level %d\n' | 0096c165: 'None'

void UpdatePause(void)

{
  bool bVar1;
  undefined *puVar2;
  int iVar4;
  undefined2 uVar7;
  LevelId LVar5;
  int *piVar6;
  longlong lVar3;
  undefined4 uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined *puVar13;
  MobyInstance *moby;
  uint uVar14;
  double dVar15;
  
  puVar12 = &g_MenuScreen;
  iVar4 = DAT_00a52cbc + 1;
  DAT_00a52cbc = 32000;
  if (iVar4 < 0x7d01) {
    DAT_00a52cbc = iVar4;
  }
  if (DAT_00a52cf4 != 0) {
    DAT_00a52cf4 = DAT_00a52cf4 + -1;
  }
  iVar9 = 0;
  iVar4 = memcard_IsSaveSystemIdle();
  if (iVar4 != 0) {
    iVar9 = DAT_00a52d00 + 1;
  }
  if (g_MenuScreen < 0x1e) {
    if (g_MenuScreen < 3) {
      if (g_MenuScreen < 2) goto LAB_0013b904;
    }
    else if (g_MenuScreen != 0x1a) goto LAB_0013b904;
  }
  else if (0x1f < g_MenuScreen) goto LAB_0013b904;
  DAT_00a15f3a = 1;
LAB_0013b904:
  DAT_00a52d00 = iVar9;
  if (g_MenuScreen == 0x14) {
    if (DAT_00a52bc4 != 0) {
      DAT_00a52bc4 = DAT_00a52bc4 + -1;
    }
    if ((DAT_00a52bc4 == 0) && (g_MusicLoading == 0)) {
      DAT_0071fbd4 = 0x1e000;
      VU1_setBufSizeByLevel();
      GameCamera.posX = DAT_00a52bf0;
      GameCamera.posY = DAT_00a52bf4;
      GameCamera.posZ = DAT_00a52bf8;
      ((u8 *)&GameCamera.posW)[0] = DAT_00a52bfc[0];
      ((u8 *)&GameCamera.posW)[1] = DAT_00a52bfc[1];
      ((u8 *)&GameCamera.posW)[2] = DAT_00a52bfc[2];
      ((u8 *)&GameCamera.posW)[3] = DAT_00a52bfc[3];
      GameCamera.rot.azimuth = DAT_00a52c00;
      GameCamera.rot.elevation = DAT_00a52c04;
      GameCamera.rot.radius = DAT_00a52c08;
      ((u8 *)&GameCamera.rotW)[0] = DAT_00a52c0c[0];
      ((u8 *)&GameCamera.rotW)[1] = DAT_00a52c0c[1];
      ((u8 *)&GameCamera.rotW)[2] = DAT_00a52c0c[2];
      ((u8 *)&GameCamera.rotW)[3] = DAT_00a52c0c[3];
      g_ViewContext.xratio = DAT_00a52c94;
      Hud_SwapMobyBank(0);
      if (DAT_00a52cec != 0) {
        g_gadgetIdx = 0xffffffff;
        LoadGadgetModel(DAT_00a52cec,DAT_00a52cf0);
      }
      UpdateFog();
      iVar4 = g_MoviePlayState;
      DAT_00a52cb4 = 0;
      DAT_00a52cb8 = 0;
      g_CutscenePlaying = 1;
      DAT_00a52cb0 = 0;
      DAT_00a52bc0 = 0;
      if (g_menuClosing == 2) {
        printf("Transition to level %d\n",g_SelectedLevel);
        StartLeaveLevelCutscene(g_SelectedLevel);
      }
      else if (g_menuClosing == 3) {
        g_MoviePlayState = 2;
        DAT_00a52cdc = iVar4;
        FadeToBlack((int)(animationSpeed * 16.5));
        g_gameMode = GAME_MODE_NORMAL;
        PlayInfobotMovie(DAT_00a52c90);
      }
      else if (g_menuClosing == 4) {
        g_MoviePlayState = 1;
        DAT_00a52cdc = iVar4;
        FadeToBlack((int)(animationSpeed * 16.5));
        g_gameMode = GAME_MODE_NORMAL;
        PlayStoryMovie(DAT_00a52c90);
      }
      else if (g_menuClosing == 6) {
        g_MoviePlayState = 1;
        DAT_00a52cdc = iVar4;
        FadeToBlack((int)(animationSpeed * 16.5));
        g_gameMode = GAME_MODE_NORMAL;
        PlaySpecialMovie(DAT_00a52c90);
      }
      else if (g_menuClosing == 5) {
        g_MoviePlayState = 1;
        DAT_00a52cdc = iVar4;
        FadeToBlack((int)(animationSpeed * 16.5));
        g_gameMode = GAME_MODE_NORMAL;
        mode_sceneInit(DAT_00a52c90);
      }
      else if (g_menuClosing == 7) {
        DAT_00a52cdc = g_MoviePlayState;
        FadeToBlack((int)(animationSpeed * 16.5));
        g_gameMode = GAME_MODE_NORMAL;
        mode_creditsInit();
      }
      else {
        g_gameMode = GAME_MODE_NORMAL;
      }
      FUN_0060bb90(0x1d);
      if (g_menuClosing != 2) {
        music_Unpause();
      }
      STUB_00505d20();
      sound_Update();
    }
  }
  else {
    if (((((g_MenuScreen == 0) || (g_MenuScreen == 10)) || (g_MenuScreen == 0xe)) ||
        ((g_MenuScreen == 0x11 || (g_MenuScreen == 0x21)))) ||
       ((g_MenuScreen == 0x2d || (g_MenuScreen == 0x23)))) {
      OpenPauseMenu();
    }
    if ((((g_Pad.unk0c0 & 2) == 0) || ((g_Pad.unk0c0 & 4) == 0)) ||
       (((g_Pad.unk0c0 & 8) != 0 || ((g_Pad.unk0c0 & 1) != 0)))) {
      DAT_00a534c0 = 0;
    }
    else if (((g_Pad.pressedButton & 0xf0a0) != 0) && (DAT_00a534c0 < 0x14)) {
      uVar7 = 0;
      if ((((g_Pad.pressedButton & 0x1000) == 0) &&
          (((uVar7 = 1, (g_Pad.pressedButton & 0x4000) == 0 &&
            (uVar7 = 2, (g_Pad.pressedButton & 0x8000) == 0)) &&
           (uVar7 = 3, (g_Pad.pressedButton & 0x2000) == 0)))) &&
         (uVar7 = 5, (g_Pad.pressedButton & 0x80) != 0)) {
        uVar7 = 4;
      }
      iVar4 = DAT_00a534c0 * 2;
      DAT_00a534c0 = DAT_00a534c0 + 1;
      bVar1 = DAT_00a534c0 == 0x14;
      *(undefined2 *)(&DAT_00a534c4 + iVar4) = uVar7;
      if (bVar1) {
        iVar9 = 2;
        iVar4 = -1;
        do {
          uVar10 = 0;
          bVar1 = true;
          do {
            iVar11 = (int)uVar10 + 1;
            if (*(ushort *)(&DAT_00a534c4 + (int)((uVar10 & 0xffffffff) << 1)) !=
                (ushort)(byte)(&DAT_00731598)[iVar9 * iVar11 & 0xff]) {
              bVar1 = false;
              break;
            }
            uVar10 = (ulonglong)iVar11;
          } while (iVar11 < 0x14);
          if (bVar1) {
            iVar4 = iVar9 + -2;
            break;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < 0x93);
        if (iVar4 != -1) {
          LVar5 = iVar4 - 0x24;
          iVar9 = iVar4 + -0x3d;
          if (iVar4 < 0x25) {
            (&UnlockableItems.field0_0x0)[iVar4] = '\x01';
            CHAR_ARRAY_0096c165[iVar4] = '\x01';
          }
          else if (((int)LVar5 < 1) || (0x12 < (int)LVar5)) {
            if ((iVar4 + -0x37 < 0) || (5 < iVar4 + -0x37)) {
              if ((-1 < iVar9) && (iVar9 < 0x1e)) {
                MB_UnlockSkillPoint(iVar9);
              }
            }
            else {
              *(undefined1 *)((int)&g_hasClank + iVar4 + 1) = 1;
            }
          }
          else {
            MB_UnlockLevel(LVar5);
          }
        }
      }
    }
    puVar2 = g_nextMenuPage;
    if (g_MenuScreen == 1) {
      iVar4 = 0;
      if (0 < DAT_00a52bc4) {
        iVar4 = DAT_00a52bc4 + -1;
      }
      DAT_00a52bc4 = iVar4;
      if (iVar4 == 0) {
        g_nextMenuPage = (undefined *)0x0;
        iVar4 = 0;
        g_currentMenuPage = puVar2;
        g_MenuScreen = *(int *)(puVar2 + 0x3c);
        do {
          piVar6 = (int *)(g_currentMenuPage + iVar4 * 4 + 0x44);
          if ((*piVar6 != 0) && (*(int *)(*piVar6 + 8) != 0)) {
            (*(code *)**(undefined4 **)(*piVar6 + 8))(*piVar6,0);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 0xe);
      }
    }
    else if (g_nextMenuPage != (undefined *)0x0) {
      if (g_currentMenuPage == g_nextMenuPage) {
        PlayMobySound(3,0x11,(MobyInstance *)g_menuMobys[0]);
      }
      else {
        PlayMobySound(4,0x11,(MobyInstance *)g_menuMobys[0]);
      }
      iVar9 = 0;
      iVar4 = 0;
      do {
        piVar6 = (int *)(g_currentMenuPage + iVar4 + 0x44);
        if ((*piVar6 != 0) && (*(int *)(*piVar6 + 0xc) != 0)) {
          (*(code *)**(undefined4 **)(*piVar6 + 0xc))(*piVar6,0);
        }
        iVar9 = iVar9 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar9 < 0xe);
      uVar14 = (((int)g_nextMenuPage - *(int *)(g_currentMenuPage + 0x38)) == 0);
      if ((((g_currentMenuPage == g_nextMenuPage) && (g_currentMenuPage != &DAT_0072ebc8)) &&
          (g_currentMenuPage != (undefined *)0x72f768)) &&
         (((g_currentMenuPage != (undefined *)0x72fa74 && (g_currentMenuPage != &DAT_0072dc78)) &&
          ((g_currentMenuPage != (undefined *)0x72f350 &&
           ((g_currentMenuPage != (undefined *)0x72e0e0 && (g_MenuScreen != 0x23)))))))) {
        uVar14 = (uVar14 == 0);
      }
      iVar9 = 0;
      iVar4 = 0;
      do {
        puVar2 = g_nextMenuPage;
        if (*(int *)(g_nextMenuPage + iVar4 + 0x44) != 0) {
          *(undefined4 *)(*(int *)(g_nextMenuPage + iVar4 + 0x44) + 0x14) =
               *(undefined4 *)((int)g_menuMobys + iVar4);
        }
        if (uVar14 == 0) {
          MB_SetAnimationNoBlend
                    (*(undefined4 *)((int)g_menuMobys + iVar4),*(undefined4 *)(puVar2 + iVar4),0);
          *(undefined4 *)(*(int *)((int)g_menuMobys + iVar4) + 0x58) = 0x3f800000;
        }
        else {
          MB_SetAnimationNoBlend
                    (*(int *)((int)g_menuMobys + iVar4),*(int *)(g_currentMenuPage + iVar4),
                     (ulonglong)
                     *(byte *)(*(int *)(*(int *)(*(int *)((int)g_menuMobys + iVar4) + 0x24) + 0x48 +
                                       *(int *)(g_currentMenuPage + iVar4) * 4) + 0x10) - 1);
          *(undefined4 *)(*(int *)((int)g_menuMobys + iVar4) + 0x58) = 0xbf800000;
        }
        iVar9 = iVar9 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar9 < 0xe);
      g_MenuScreen = 1;
      DAT_00a52bc4 = 0xc;
      DAT_00a52c80 = g_currentMenuPage;
      g_currentMenuPage = (undefined *)0x0;
    }
    puVar2 = g_currentMenuPage;
    if (g_currentMenuPage != (undefined *)0x0) {
      iVar4 = 0;
      puVar13 = g_currentMenuPage;
      do {
        if (((((puVar2 != (undefined *)0xffffffbc) &&
              (piVar6 = *(int **)(puVar13 + 0x44), piVar6 != (int *)0x0)) && (*piVar6 != 0)) &&
            (iVar9 = (**(code **)*piVar6)(), iVar9 != 0)) &&
           ((g_menuClosing = 1, g_MenuScreen == 0xf || (g_MenuScreen == 0x10)))) {
          g_menuClosing = 2;
        }
        iVar4 = iVar4 + 1;
        puVar13 = puVar13 + 4;
      } while (iVar4 < 0xe);
      if ((g_currentMenuPage != (undefined *)0x0) && (*(int *)(g_currentMenuPage + 0x80) != 0)) {
        iVar4 = *(int *)(g_currentMenuPage + 0x40);
        if (*(int *)(iVar4 + 0xc) != 0) {
          (*(code *)**(undefined4 **)(iVar4 + 0xc))(iVar4,1);
        }
        puVar2 = g_currentMenuPage;
        *(undefined4 *)(g_currentMenuPage + 0x40) = *(undefined4 *)(g_currentMenuPage + 0x80);
        *(undefined4 *)(puVar2 + 0x80) = 0;
        iVar4 = *(int *)(puVar2 + 0x40);
        if (*(int *)(iVar4 + 8) != 0) {
          (*(code *)**(undefined4 **)(iVar4 + 8))(iVar4,1);
        }
      }
    }
    UpdateMobys();
    sound_Update();
    if ((g_menuClosing != 0) && (9 < DAT_00a52cbc)) {
      STUB_00174cf4(1);
      VU1_initChain();
      if (g_currentMenuPage != (undefined *)0x0) {
        iVar9 = 0;
        iVar4 = 0;
        do {
          piVar6 = (int *)(g_currentMenuPage + iVar4 + 0x44);
          if ((*piVar6 != 0) && (*(int *)(*piVar6 + 0xc) != 0)) {
            (*(code *)**(undefined4 **)(*piVar6 + 0xc))(*piVar6,0);
          }
          iVar9 = iVar9 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar9 < 0xe);
        g_currentMenuPage = (undefined *)0x0;
      }
      iVar4 = 0;
      iVar9 = 0;
      do {
        if (*(int *)((int)&g_equippedItem + iVar9) != puVar12[0xc]) {
          uVar8 = 0x26;
          if (*(int *)((int)&DAT_00a52be0 + iVar9) != 0) {
            uVar8 = *(undefined4 *)((int)&DAT_00a52be0 + iVar9);
          }
          *(undefined4 *)((int)&DAT_0096bd98 + iVar9) = uVar8;
        }
        iVar4 = iVar4 + 1;
        puVar12 = puVar12 + 1;
        iVar9 = iVar9 + 4;
      } while (iVar4 < 4);
      iVar9 = 0;
      iVar4 = 0;
      g_GsRamBase = DAT_00a52bc8;
      do {
        moby = *(MobyInstance **)((int)g_menuMobys + iVar4);
        if (moby != (MobyInstance *)0x0) {
          DeleteMoby(moby);
          lVar3 = (longlong)worldUpdateTime;
          moby->color = (int)((ulonglong)lVar3 >> 0x20);
          moby->light = (int)lVar3;
          moby = (MobyInstance *)0x0;
        }
        iVar9 = iVar9 + 1;
        *(MobyInstance **)((int)g_menuMobys + iVar4) = moby;
        iVar4 = iVar4 + 4;
      } while (iVar9 < 0xe);
      iVar4 = RegisterHeroHealthHUDCallbacks();
      dVar15 = 180.5;
      Hud_ShowEntryById(iVar4,(int)(animationSpeed * 180.5));
      iVar4 = RegisterHUDCallback
                        (2,0x754e,&PTR_BoltHud_Init_00705810,&PTR_BoltHud_Update_00705818,
                         &PTR_Draw_BoltCountUI_00705820,&g_boltCount,9999999);
      Hud_ShowEntryById(iVar4,(int)((double)animationSpeed * dVar15));
      DAT_00a52bc4 = 2;
      g_MenuScreen = 0x14;
      if ((int)DAT_00a52c7c < (int)(uint)MobyClasses[0]->seq_cnt) {
        lVar3 = ((ulonglong)DAT_00a52c7c & 0x3fffffff) << 2;
        uVar14 = DAT_00a52c7c;
        do {
          uVar14 = uVar14 + 1;
          iVar4 = (int)lVar3;
          lVar3 = lVar3 + 4;
          *(undefined4 *)(&MobyClasses[0]->type + iVar4) = 0;
        } while ((int)uVar14 < (int)(uint)MobyClasses[0]->seq_cnt);
      }
      MobyClasses[0]->seq_cnt = (u8)DAT_00a52c7c;
      g_CutscenePlaying = 1;
      g_CollOutput.collCount = g_CollOutput.collCount & 0x7fffffff;
      STUB_00174cf0();
      STUB_00174cf4(1);
      iVar9 = DAT_00a52e68;
      iVar4 = DAT_00a52e64;
      *(undefined4 *)(g_pIdolDraw + 0x1a78) = DAT_00a534a4;
      DAT_00a534a4 = 0;
      if (iVar4 != iVar9) {
        DAT_00a52e68 = DAT_00a52e64;
        FUN_004d6f50(g_pIdolDraw,DAT_00a52e64);
      }
    }
  }
  return;
}


// 0x013c5e8 (0x47c bytes)
void DrawTVTextures(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar8;
  undefined8 uVar7;
  int iVar9;
  int iVar10;
  
  if ((param_1 != 0) && (iVar10 = *(int *)(param_1 + 0x78), iVar10 != 0)) {
    iVar1 = *(int *)(iVar10 + 0x50);
    iVar2 = *(int *)(iVar10 + 0x54);
    iVar3 = *(int *)(iVar10 + 0x58);
    iVar4 = *(int *)(iVar10 + 0x5c);
    if ((iVar1 < 0x200) && (-1 < iVar3 + iVar1)) {
      iVar8 = 0x1a0;
      if (Cutscene != 0) {
        iVar8 = 0x1c0;
      }
      if ((iVar2 <= iVar8) && (-1 < iVar4 + iVar2)) {
        uVar5 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
        SetGSReg(6,uVar5);
        uVar5 = idol_draw::PackCmd(0,1,0,1,0x80);
        SetGSReg(3,uVar5);
        uVar5 = GetIconFrameTex(0xe99e,7);
        Hud_DrawTexQuad_v2(uVar5,iVar1 << 4,iVar2 << 4,iVar3 << 4,iVar4 << 4,0x80);
        if (*(int *)(iVar10 + 0x48) == 0) {
          iVar8 = MB_randInt(2000);
          if (iVar8 == 0) {
            *(undefined4 *)(iVar10 + 0x4c) = 0;
            *(undefined4 *)(iVar10 + 0x48) = 1;
          }
        }
        else {
          *(int *)(iVar10 + 0x4c) = *(int *)(iVar10 + 0x4c) + 2;
          uVar5 = MB_randInt(200);
          uVar6 = MB_randInt(200);
          iVar8 = FUN_005c4988(*(int *)(iVar10 + 0x4c) + -0x80);
          uVar7 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
          SetGSReg(6,uVar7);
          iVar8 = (0x80 - iVar8) * 2;
          iVar9 = 0x80;
          if (iVar8 < 0x81) {
            iVar9 = iVar8;
          }
          uVar7 = idol_draw::PackCmd(0,2,2,1,iVar9);
          SetGSReg(3,uVar7);
          GetEffectTex(0x1a);
          Sprite_DrawShapeWrapper(iVar1,iVar2,iVar3,iVar4,uVar5,uVar6,iVar3,iVar4);
          if (0xff < *(int *)(iVar10 + 0x4c)) {
            *(undefined4 *)(iVar10 + 0x48) = 0;
          }
        }
        uVar5 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
        SetGSReg(6,uVar5);
        uVar5 = idol_draw::PackCmd(0,1,0,1,0x80);
        SetGSReg(3,uVar5);
        GetEffectTex(0x1c);
        Sprite_DrawShapeWrapper
                  (iVar1,iVar2,iVar3,iVar4,0,0,iVar3,(int)((float)(longlong)iVar4 * 0.5));
        iVar8 = -2;
        iVar10 = -2;
        if (0x4b < iVar3) {
          iVar8 = -1;
        }
        if (0x96 < iVar3) {
          iVar8 = 0;
        }
        if (0x4b < iVar4) {
          iVar10 = -1;
        }
        if (0x96 < iVar4) {
          iVar10 = 0;
        }
        GetEffectTex(0x19);
        Sprite_DrawShapeWrapper
                  (iVar1 + 1,iVar2 + 1,iVar3 + iVar8,iVar4 + iVar10,1,1,0x3e,0x3e);
      }
    }
  }
  return;
}


// 0x013ca68 (0x7b0 bytes)
/* [p2_pause] called from SetupDefaultDrawFreeze; iterates page widgets calling draw callback
   (+4)
   [p2_pause] called from SetupDefaultDrawFreeze; iterates page widgets calling draw callback
   (+4)
   [p2_pause] called from SetupDefaultDrawFreeze; iterates page widgets calling draw callback
   (+4) */

void DrawPauseMenu(char param_1)

{
  RsxCmd *pRVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  RenderingStep *pRVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  
  iVar22 = 0;
  iVar17 = 0;
  STUB_00078100();
  pRVar8 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar8->command[1] = 0xffffff00;
  pRVar8->command = pRVar8->command + 2;
  pRVar8 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar8->command[1] = 1;
  pRVar1 = pRVar8->command;
  pRVar8->command = pRVar1 + 2;
  pRVar1[2] = NV4097_NO_OPERATION_x1;
  pRVar8->command[1] = 0;
  pRVar8->command = pRVar8->command + 2;
  DrawRenderTargetToScreen(0);
  if ((param_1 == '\0') && (DrawScreenOverlay(0,0,0,0x30), g_MenuScreen != 0x14)) {
    uVar9 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
    SetGSReg(0x16,uVar9);
    DrawMobyDepth();
    iVar18 = 0;
    iVar21 = 0;
    do {
      if (((*(int *)((int)&DAT_00729894 + iVar21) != 0) &&
          (*(int *)((int)g_menuMobys + iVar21) != 0)) && ((iVar18 != 6 || (DAT_00a52c88 != '\0'))))
      {
        MB_AddToDrawList(*(undefined4 *)((int)g_menuMobys + iVar21),1);
      }
      iVar18 = iVar18 + 1;
      iVar21 = iVar21 + 4;
    } while (iVar18 < 0xe);
    if (g_currentMenuPage != 0) {
      iVar22 = g_currentMenuPage + 0x44;
    }
    iVar18 = 0;
    iVar21 = 0;
    do {
      if (((*(int *)((int)g_menuMobys + iVar21) != 0) &&
          (*(int *)((int)&DAT_00729894 + iVar21) != 0)) && ((iVar18 != 6 || (DAT_00a52c88 != '\0')))
         ) {
        puVar2 = *(undefined8 **)(*(int *)((int)g_menuMobys + iVar21) + 0x78);
        ProjectBoxToScreenInt
                  (*puVar2,puVar2[1],puVar2[6],puVar2[7],&local_90,&local_8c,&local_88,&local_84);
        iVar13 = local_88 + 1;
        iVar11 = local_84 + 1;
        if ((iVar22 != 0) && (iVar7 = *(int *)(iVar22 + iVar21), iVar7 != 0)) {
          *(int *)(iVar7 + 0x20) = local_90;
          *(int *)(iVar7 + 0x24) = local_8c;
          *(int *)(iVar7 + 0x18) = iVar13;
          *(int *)(iVar7 + 0x1c) = iVar11;
        }
        *(int *)(puVar2 + 10) = iVar13;
        *(int *)((int)puVar2 + 0x54) = iVar11;
        *(int *)(puVar2 + 0xb) = local_90;
        *(int *)((int)puVar2 + 0x5c) = local_8c;
        DrawFlatOverlay
                  (local_88 + 2,local_84 + 2,local_90 + iVar13 + -1,local_8c + iVar11 + -1,
                   DAT_00729840,0);
        local_88 = iVar13;
        local_84 = iVar11;
      }
      iVar18 = iVar18 + 1;
      iVar21 = iVar21 + 4;
    } while (iVar18 < 0xe);
    iVar21 = 0;
    do {
      iVar11 = 0;
      iVar18 = 0;
      do {
        if (((((((iVar22 != 0 && *(int *)((int)g_menuMobys + iVar18) != 0) &&
                (iVar13 = *(int *)(iVar22 + iVar18), iVar13 != 0)) &&
               ((*(uint *)(iVar13 + 0x10) & 4) == 0)) &&
              ((*(int *)((int)&DAT_00729894 + iVar18) != 0 && (*(int *)(iVar13 + 4) != 0)))) &&
             ((iVar11 != 6 || (DAT_00a52c88 != '\0')))) &&
            ((iVar21 != 0 || ((*(uint *)(iVar13 + 0x10) & 2) != 0)))) &&
           ((iVar21 != 1 || ((*(uint *)(*(int *)(iVar22 + iVar18) + 0x10) & 2) == 0)))) {
          iVar13 = *(int *)(iVar22 + iVar18);
          if ((iVar13 == 0) || ((*(uint *)(iVar13 + 0x10) & 1) == 0)) {
            iVar13 = *(int *)(*(int *)((int)g_menuMobys + iVar18) + 0x78);
            uVar20 = 8;
            uVar19 = 8;
            uVar3 = *(uint *)(iVar13 + 0x58);
            uVar4 = *(undefined4 *)(iVar13 + 0x50);
            uVar5 = *(undefined4 *)(iVar13 + 0x54);
            uVar6 = *(uint *)(iVar13 + 0x5c);
            if (0x100 < (int)uVar3) {
              do {
                uVar20 = uVar20 + 1;
              } while (1 << (uVar20 & 0x3f) < (int)uVar3);
            }
            if (0x100 < (int)uVar6) {
              do {
                uVar19 = uVar19 + 1;
              } while (1 << (uVar19 & 0x3f) < (int)uVar6);
            }
            SetScreenResolution
                      (0x3ff0000000000000,uVar20,uVar19,&DAT_0013ca64,
                       (ulonglong)(LZCOUNT(iVar21) << 0x20) >> 0x25 ^ 1,DAT_00729844);
            uVar10 = (*(code *)**(undefined4 **)(*(int *)(iVar22 + iVar18) + 4))();
            ResetHUDPass();
            uVar9 = idol_draw::PackCmd(0,1,2,1,0x80);
            SetGSReg(3,uVar9);
            uVar9 = FUN_00502f98(1,1,4,0,0,0,0,0);
            SetGSReg(0x16,uVar9);
            if ((uVar10 & 1) == 0) {
              uVar20 = 1 << (uVar20 & 0x3f);
              uVar19 = 1 << (uVar19 & 0x3f);
              uVar14 = 0;
              uVar16 = 0;
              uVar15 = uVar3;
              uVar12 = uVar6;
              if ((uVar10 & 2) == 0) {
                uVar15 = uVar20;
                uVar12 = uVar19;
                if ((uVar10 & 8) == 0) {
                  if ((uVar10 & 4) == 0) {
                    if ((uVar10 & 0x10) == 0) goto LAB_0013d130;
                  }
                  else if ((int)uVar3 < (int)uVar6) {
                    uVar14 = (((int)uVar20 >> 1) + (uint)((int)uVar20 < 0 && (uVar20 & 1) != 0)) -
                             (int)(uVar20 * uVar3) / (int)(uVar6 << 1);
                    uVar15 = uVar20 - uVar14;
                  }
                  else {
                    uVar16 = (((int)uVar19 >> 1) + (uint)((int)uVar19 < 0 && (uVar19 & 1) != 0)) -
                             (int)(uVar19 * uVar6) / (int)(uVar3 << 1);
                    uVar12 = uVar19 - uVar16;
                  }
                }
                else {
                  uVar15 = uVar20 - uVar3;
                  uVar12 = uVar19 - uVar6;
                  uVar14 = ((int)uVar15 >> 1) + (uint)((int)uVar15 < 0 && (uVar15 & 1) != 0);
                  uVar16 = ((int)uVar12 >> 1) + (uint)((int)uVar12 < 0 && (uVar12 & 1) != 0);
                  uVar15 = uVar20 - uVar14;
                  uVar12 = uVar19 - uVar16;
                  if ((int)uVar14 < 0) {
                    uVar14 = 0;
                  }
                  if ((int)uVar16 < 0) {
                    uVar16 = 0;
                  }
                  if ((int)uVar20 < (int)uVar15) {
                    uVar15 = uVar20;
                  }
                  if ((int)uVar19 < (int)uVar12) {
                    uVar12 = uVar19;
                  }
                }
              }
              uVar15 = uVar15 - uVar14;
              uVar12 = uVar12 - uVar16;
              Sprite_DrawShape
                        (uVar4,uVar5,uVar3,uVar6,
                         ((int)uVar14 >> 1) + (uint)((int)uVar14 < 0 && (uVar14 & 1) != 0),
                         ((int)uVar16 >> 1) + (uint)((int)uVar16 < 0 && (uVar16 & 1) != 0),
                         ((int)uVar15 >> 1) + (uint)((int)uVar15 < 0 && (uVar15 & 1) != 0),
                         ((int)uVar12 >> 1) + (uint)((int)uVar12 < 0 && (uVar12 & 1) != 0));
            }
          }
          else {
            (*(code *)**(undefined4 **)(iVar13 + 4))();
          }
        }
LAB_0013d130:
        iVar11 = iVar11 + 1;
        iVar18 = iVar18 + 4;
      } while (iVar11 < 0xe);
      if (iVar21 == 0) {
        STUB_000f184c();
        DrawMobyList();
        STUB_00174cf4(0x10);
        STUB_000f1448();
      }
      iVar21 = iVar21 + 1;
    } while (iVar21 < 2);
    STUB_0006d704(0);
    iVar22 = 0;
    do {
      if ((*(int *)((int)&DAT_00729894 + iVar22) != 0) && ((iVar17 != 6 || (DAT_00a52c88 != '\0'))))
      {
        DrawTVTextures(*(undefined4 *)((int)g_menuMobys + iVar22));
      }
      iVar17 = iVar17 + 1;
      iVar22 = iVar22 + 4;
    } while (iVar17 < 0xe);
    STUB_0006d708();
  }
  return;
}


// 0x013d218 (0x14 bytes)
void ____Unused_Pause_InitEntry9(undefined2 *param_1,undefined2 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = 9;
  *(undefined4 *)(param_1 + 2) = param_3;
  return;
}


// 0x013d22c (0x1b4 bytes)
/* [p2_pause] InitOnce; fills menu text-id tables at 0x730488 by language
   [p2_pause] InitOnce; fills menu text-id tables at 0x730488 by language
   [p2_pause] InitOnce; fills menu text-id tables at 0x730488 by language */

void InitMenuTextIds(void)

{
  if (*(int *)((int)g_pHWSystem + 0xc0) == 0) {
    DAT_00730488 = 0x4f2c;
    DAT_0073048c = 0;
    DAT_0073048a = 9;
    DAT_00730496 = 9;
    DAT_00730494 = 0x4f2d;
    DAT_00730498 = 2;
    DAT_007304a0 = 0x4f2e;
    DAT_007304a2 = 9;
    DAT_007304a4 = 4;
    memset(&DAT_007304ac,0,0xc);
  }
  else if (*(int *)((int)g_pHWSystem + 0xc0) == 1) {
    DAT_00730488 = 0x4f2c;
    DAT_0073048c = 0;
    DAT_0073048a = 9;
    DAT_00730494 = 0x4f2d;
    DAT_00730496 = 9;
    DAT_00730498 = 2;
    DAT_007304a0 = 0x4f2f;
    DAT_007304a2 = 9;
    DAT_007304a4 = 3;
    DAT_007304ac = 0x4f2e;
    DAT_007304ae = 9;
    DAT_007304b0 = 4;
    DAT_007304b8 = 0x4f30;
    DAT_007304ba = 9;
    DAT_007304bc = 5;
    memset(&DAT_007304c4,0,0xc);
  }
  else if (*(int *)((int)g_pHWSystem + 0xc0) == 3) {
    DAT_00730488 = 0xfb2e;
    DAT_0073048a = 9;
    DAT_0073048c = 6;
    memset(&DAT_00730494,0,0xc);
  }
  return;
}


// 0x013d3e0 (0x40 bytes)
void EnterPauseState(void)

{
  g_gameMode = GAME_MODE_PAUSE;
  g_MenuScreen = 0x2d;
  g_menuClosing = 0;
  DAT_00a52bc0 = 0;
  DAT_00a52e68 = DAT_00a52e64;
  DAT_00a52cbc = 0;
  return;
}


// 0x013d428 (0x2e0 bytes)
/* [p2_pause] sets g_MenuScreen=2, page 0x730034, creates menu mobys; called by FrontEnd menu update
   [p2_pause] sets g_MenuScreen=2, page 0x730034, creates menu mobys; called by FrontEnd menu update
   [p2_pause] sets g_MenuScreen=2, page 0x730034, creates menu mobys; called by FrontEnd menu update
    */

void FrontEnd_InitMenu(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined4 *puVar6;
  MobyInstance *pMVar7;
  int iVar8;
  int iVar9;
  
  g_unclosableMenu = 0;
  g_MenuScreen = 2;
  DAT_00a1de90 = DAT_007298d0;
  g_currentMenuPage = &DAT_00730034;
  g_nextMenuPage = &DAT_00730034;
  DAT_00a1de94 = DAT_007298d4;
  DAT_00a1de98 = DAT_007298d8;
  DAT_00a1de9c = DAT_007298dc;
  DAT_00a1de80 = DAT_007298e0;
  DAT_00a1de84 = DAT_007298e4;
  DAT_00a1de88 = DAT_007298e8;
  DAT_00a1de8c = DAT_007298ec;
  memset(&DAT_00a1deb0,0,0x10);
  memset(&DAT_00a1dea0,0,0x10);
  STUB_00174cf4(1);
  STUB_00503078(0);
  g_MainLoopFrames = g_MainLoopFrames + 1;
  DAT_00e5aa64 = 0xa0000;
  DAT_00a52bc0 = g_NpcBuffer + 0x100000;
  DAT_00a52cb4 = g_NpcBuffer + 0x30000;
  DAT_00a52cb0 = g_NpcBuffer;
  DAT_00a52cb8 = g_NpcBuffer + 0x1e0000;
  DAT_00a52ca8 = g_NpcBuffer + 0xf1000;
  DAT_00a52cac = g_NpcBuffer + 0x1f1800;
  Menu_InitStreamBuffers(1);
  VU1_initChain();
  DAT_00a52bc8 = g_GsRamBase;
  if (g_currentMenuPage != (undefined4 *)0x0) {
    iVar8 = 0;
    iVar9 = 0;
    do {
      if (DAT_00a35932 == -1) {
        pMVar7 = (MobyInstance *)0x0;
      }
      else {
        pMVar7 = CreateMoby(FRAME);
        if (pMVar7 != (MobyInstance *)0x0) {
          pMVar7->updateDistance = -1;
          pMVar7->drawDistance = 0xff;
          pMVar7->enabled = '\x01';
          pMVar7->state = '\0';
          UpdateMobyTransform(pMVar7);
          MB_SetLights(pMVar7,0x202020,0xe,0xe,0);
        }
      }
      *(MobyInstance **)((int)g_menuMobys + iVar9) = pMVar7;
      fVar5 = GameCamera.posX;
      if (*(int *)((int)g_menuMobys + iVar9) != 0) {
        iVar2 = *(int *)((int)g_menuMobys + iVar9);
        *(undefined ***)(iVar2 + 0x74) = &PTR_UpdateMoby_1138_00708f30;
        puVar6 = g_currentMenuPage;
        uVar1 = *(ushort *)(iVar2 + 0x34);
        iVar3 = *(int *)((int)g_menuMobys + iVar9);
        *(float *)(iVar3 + 0x10) = fVar5;
        *(ushort *)(iVar2 + 0x34) = uVar1 & 0xfffd;
        *(float *)(iVar3 + 0x14) = GameCamera.posY;
        iVar4 = *(int *)((int)puVar6 + iVar9);
        *(float *)(iVar3 + 0x18) = GameCamera.posZ;
        *(undefined4 *)(iVar3 + 0x40) = 0;
        iVar2 = *(int *)(*(int *)(iVar3 + 0x24) + 0x48 + iVar4 * 4);
        *(undefined4 *)(iVar3 + 0x44) = 0;
        *(undefined4 *)(iVar3 + 0x48) = 0;
        MB_SetAnimationNoBlend(iVar3,iVar4,(ulonglong)*(byte *)(iVar2 + 0x10) - 1);
      }
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + 4;
    } while (iVar8 < 0xe);
  }
  return;
}


// 0x013d708 (0x190 bytes)
/* [p2_pause] calls widget OnExit (+0xc) for current page, deletes mobys
   [p2_pause] calls widget OnExit (+0xc) for current page, deletes mobys
   [p2_pause] calls widget OnExit (+0xc) for current page, deletes mobys */

void FrontEnd_ShutdownMenu(void)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  MobyInstance *moby;
  int iVar4;
  
  if (9 < DAT_00a52cbc) {
    if (g_currentMenuPage != 0) {
      iVar3 = 0;
      iVar4 = 0;
      do {
        piVar1 = (int *)(g_currentMenuPage + 0x44 + iVar4);
        if ((*piVar1 != 0) && (*(int *)(*piVar1 + 0xc) != 0)) {
          (*(code *)**(undefined4 **)(*piVar1 + 0xc))(*piVar1,0);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar3 < 0xe);
      g_currentMenuPage = 0;
    }
    iVar3 = 0;
    iVar4 = 0;
    g_GsRamBase = DAT_00a52bc8;
    do {
      moby = *(MobyInstance **)((int)g_menuMobys + iVar4);
      if (moby != (MobyInstance *)0x0) {
        DeleteMoby(moby);
        lVar2 = (longlong)worldUpdateTime;
        moby->color = (int)((ulonglong)lVar2 >> 0x20);
        moby->light = (int)lVar2;
        moby = (MobyInstance *)0x0;
      }
      iVar3 = iVar3 + 1;
      *(MobyInstance **)((int)g_menuMobys + iVar4) = moby;
      iVar4 = iVar4 + 4;
    } while (iVar3 < 0xe);
    if (DAT_00a52e64 != DAT_00a52e68) {
      DAT_00a52e68 = DAT_00a52e64;
      FUN_004d6f50(g_pIdolDraw,DAT_00a52e64);
    }
    g_MenuScreen = 0x14;
    DAT_00a52bc4 = 2;
  }
  return;
}


// 0x013d8a0 (0x578 bytes)
/* [p2_pause] called from FrontEnd_Update; title/front-end menu tick
   [p2_pause] called from FrontEnd_Update; title/front-end menu tick
   [p2_pause] called from FrontEnd_Update; title/front-end menu tick */

void FrontEnd_UpdateMenu(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  double dVar7;
  
  iVar1 = DAT_00a52cbc + 1;
  DAT_00a52cbc = 32000;
  if (iVar1 < 0x7d01) {
    DAT_00a52cbc = iVar1;
  }
  GameCamera.posX = 256.0;
  GameCamera.posY = 256.0;
  GameCamera.posZ = 64.0;
  memset(0x951710,0,0x10);
  memset(0x951720,0,0x10);
  memset(0x951730,0,0x10);
  dVar7 = 1.0;
  GameCamera.orientMtx.forward.x = 1.0;
  GameCamera.orientMtx.right.y = 1.0;
  GameCamera.orientMtx.up.z = 1.0;
  GameCamera.orientMtx.up.w = 1.0;
  if (DAT_00a52cf4 != 0) {
    DAT_00a52cf4 = DAT_00a52cf4 + -1;
  }
  iVar4 = 0;
  iVar1 = memcard_IsSaveSystemIdle();
  if (iVar1 != 0) {
    iVar4 = DAT_00a52d00 + 1;
  }
  DAT_00a52d00 = iVar4;
  if (g_MenuScreen == 0x14) {
    if (DAT_00a52bc4 != 0) {
      DAT_00a52bc4 = DAT_00a52bc4 + -1;
    }
    if ((DAT_00a52bc4 == 0) && (g_MusicLoading == 0)) {
      DAT_0071fbd4 = 0x1e000;
      VU1_setBufSizeByLevel();
      UpdateFog();
      DAT_00a52cb4 = 0;
      DAT_00a52cb8 = 0;
      DAT_00a52cb0 = 0;
      DAT_00a52bc0 = 0;
      g_CutscenePlaying = 1;
      g_gameMode = GAME_MODE_NORMAL;
    }
  }
  else {
    if ((g_MenuScreen == 0) || (g_MenuScreen == 0x2d)) {
      FrontEnd_InitMenu();
    }
    iVar1 = g_nextMenuPage;
    if ((g_CardStateFlags & 1) == 0) {
      if (g_MenuScreen == 1) {
        iVar4 = 0;
        if (0 < DAT_00a52bc4) {
          iVar4 = DAT_00a52bc4 + -1;
        }
        DAT_00a52bc4 = iVar4;
        if (iVar4 == 0) {
          g_nextMenuPage = 0;
          g_currentMenuPage = iVar1;
          iVar4 = 0;
          g_MenuScreen = *(int *)(iVar1 + 0x3c);
          do {
            piVar2 = (int *)(g_currentMenuPage + 0x44 + iVar4 * 4);
            if ((*piVar2 != 0) && (*(int *)(*piVar2 + 8) != 0)) {
              (*(code *)**(undefined4 **)(*piVar2 + 8))(*piVar2,0);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < 0xe);
        }
      }
      else if (g_nextMenuPage != 0) {
        if (g_currentMenuPage == g_nextMenuPage) {
          PlayMobySound(3,0x11,(MobyInstance *)g_menuMobys[0]);
        }
        else {
          PlayMobySound(4,0x11,(MobyInstance *)g_menuMobys[0]);
        }
        iVar4 = 0;
        iVar1 = 0;
        do {
          piVar2 = (int *)(g_currentMenuPage + 0x44 + iVar1);
          if ((*piVar2 != 0) && (*(int *)(*piVar2 + 0xc) != 0)) {
            (*(code *)**(undefined4 **)(*piVar2 + 0xc))(*piVar2,0);
          }
          iVar4 = iVar4 + 1;
          iVar1 = iVar1 + 4;
        } while (iVar4 < 0xe);
        uVar6 = ((g_nextMenuPage - *(int *)(g_currentMenuPage + 0x38)) == 0);
        if (g_currentMenuPage == g_nextMenuPage) {
          uVar6 = (uVar6 == 0);
        }
        iVar4 = 0;
        iVar1 = 0;
        do {
          iVar5 = g_nextMenuPage;
          piVar2 = (int *)(g_nextMenuPage + 0x44 + iVar1);
          if (*piVar2 != 0) {
            *(undefined4 *)(*piVar2 + 0x14) = *(undefined4 *)((int)g_menuMobys + iVar1);
          }
          if (uVar6 == 0) {
            MB_SetAnimationNoBlend
                      (*(undefined4 *)((int)g_menuMobys + iVar1),*(undefined4 *)(iVar5 + iVar1),0);
            *(float *)(*(int *)((int)g_menuMobys + iVar1) + 0x58) = (float)dVar7;
          }
          else {
            MB_SetAnimationNoBlend
                      (*(int *)((int)g_menuMobys + iVar1),*(int *)(g_currentMenuPage + iVar1),
                       (ulonglong)
                       *(byte *)(*(int *)(*(int *)(*(int *)((int)g_menuMobys + iVar1) + 0x24) + 0x48
                                         + *(int *)(g_currentMenuPage + iVar1) * 4) + 0x10) - 1);
            *(undefined4 *)(*(int *)((int)g_menuMobys + iVar1) + 0x58) = 0xbf800000;
          }
          iVar4 = iVar4 + 1;
          iVar1 = iVar1 + 4;
        } while (iVar4 < 0xe);
        g_MenuScreen = 1;
        DAT_00a52bc4 = 0xc;
        DAT_00a52c80 = g_currentMenuPage;
        g_currentMenuPage = 0;
      }
      iVar1 = g_currentMenuPage;
      if (g_currentMenuPage != 0) {
        iVar5 = 0;
        iVar4 = g_currentMenuPage;
        do {
          if ((((iVar1 != -0x44) && (piVar2 = *(int **)(iVar4 + 0x44), piVar2 != (int *)0x0)) &&
              (*piVar2 != 0)) && (iVar3 = (**(code **)*piVar2)(), iVar3 != 0)) {
            g_menuClosing = 1;
          }
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar5 < 0xe);
        if ((g_currentMenuPage != 0) && (*(int *)(g_currentMenuPage + 0x80) != 0)) {
          iVar1 = *(int *)(g_currentMenuPage + 0x40);
          if (*(int *)(iVar1 + 0xc) != 0) {
            (*(code *)**(undefined4 **)(iVar1 + 0xc))(iVar1,1);
          }
          iVar1 = g_currentMenuPage;
          *(undefined4 *)(g_currentMenuPage + 0x40) = *(undefined4 *)(g_currentMenuPage + 0x80);
          *(undefined4 *)(iVar1 + 0x80) = 0;
          iVar1 = *(int *)(iVar1 + 0x40);
          if (*(int *)(iVar1 + 8) != 0) {
            (*(code *)**(undefined4 **)(iVar1 + 8))(iVar1,1);
          }
        }
      }
      UpdateMobys();
      if (g_menuClosing != 0) {
        FrontEnd_ShutdownMenu();
      }
    }
    else {
      DisplayPrompt(3,g_currentMenuPage,0);
    }
  }
  return;
}


// 0x013de20 (0x7e4 bytes)
// strings: 006534d8: 'monitor %d'

/* [p2_pause] called from FrontEnd_Draw; draws monitors ('monitor %d') + widgets
   [p2_pause] called from FrontEnd_Draw; draws monitors ('monitor %d') + widgets
   [p2_pause] called from FrontEnd_Draw; draws monitors ('monitor %d') + widgets */

void FrontEnd_DrawMenu(void)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  char acStack_d0 [64];
  
  iVar15 = 0;
  uVar7 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  SetGSReg(0x16,uVar7);
  DrawMobyDepth();
  STUB_000f1844();
  STUB_000f1848();
  GameCamera.posX = 256.0;
  GameCamera.posY = 256.0;
  GameCamera.posZ = 64.0;
  memset(0x951710,0,0x10);
  memset(0x951720,0,0x10);
  memset(0x951730,0,0x10);
  uVar7 = 0x3ff0000000000000;
  GameCamera.orientMtx.forward.x = 1.0;
  GameCamera.orientMtx.right.y = 1.0;
  GameCamera.orientMtx.up.z = 1.0;
  GameCamera.orientMtx.up.w = 1.0;
  ComposeCameraMatrix();
  iVar14 = 0;
  iVar19 = 0;
  do {
    if (((*(int *)((int)&DAT_00729894 + iVar19) != 0) && (*(int *)((int)g_menuMobys + iVar19) != 0))
       && ((iVar14 != 6 || (DAT_00a52c88 != '\0')))) {
      MB_AddToDrawList(*(undefined4 *)((int)g_menuMobys + iVar19),1);
    }
    iVar14 = iVar14 + 1;
    iVar19 = iVar19 + 4;
  } while (iVar14 < 0xe);
  iVar19 = 0;
  if (g_currentMenuPage != 0) {
    iVar19 = g_currentMenuPage + 0x44;
  }
  iVar17 = 0;
  iVar14 = 0;
  do {
    if (((*(int *)((int)g_menuMobys + iVar14) != 0) && (*(int *)((int)&DAT_00729894 + iVar14) != 0))
       && ((iVar17 != 6 || (DAT_00a52c88 != '\0')))) {
      puVar1 = *(undefined8 **)(*(int *)((int)g_menuMobys + iVar14) + 0x78);
      ProjectBoxToScreenInt
                (*puVar1,puVar1[1],puVar1[6],puVar1[7],&local_e0,&local_dc,&local_d8,&local_d4);
      iVar12 = local_d8 + 1;
      iVar11 = local_d4 + 1;
      if ((iVar19 != 0) && (iVar6 = *(int *)(iVar19 + iVar14), iVar6 != 0)) {
        *(int *)(iVar6 + 0x20) = local_e0;
        *(int *)(iVar6 + 0x24) = local_dc;
        *(int *)(iVar6 + 0x18) = iVar12;
        *(int *)(iVar6 + 0x1c) = iVar11;
      }
      *(int *)(puVar1 + 10) = iVar12;
      *(int *)((int)puVar1 + 0x54) = iVar11;
      *(int *)(puVar1 + 0xb) = local_e0;
      *(int *)((int)puVar1 + 0x5c) = local_dc;
      DrawFlatOverlay
                (local_d8 + 2,local_d4 + 2,local_e0 + iVar12 + -1,local_dc + iVar11 + -1,
                 DAT_00729840,0);
      local_d8 = iVar12;
      local_d4 = iVar11;
    }
    iVar17 = iVar17 + 1;
    iVar14 = iVar14 + 4;
  } while (iVar17 < 0xe);
  iVar14 = 0;
  do {
    uVar16 = 0;
    do {
      iVar17 = (int)((uVar16 & 0xffffffff) << 2);
      if (((((((iVar19 != 0 && *(int *)((int)g_menuMobys + iVar17) != 0) &&
              (*(int *)(iVar19 + iVar17) != 0)) &&
             ((*(uint *)(*(int *)(iVar19 + iVar17) + 0x10) & 4) == 0)) &&
            ((*(int *)((int)&DAT_00729894 + iVar17) != 0 &&
             (*(int *)(*(int *)(iVar19 + iVar17) + 4) != 0)))) &&
           (((int)uVar16 != 6 || (DAT_00a52c88 != '\0')))) &&
          ((iVar14 != 0 || ((*(uint *)(*(int *)(iVar19 + iVar17) + 0x10) & 2) != 0)))) &&
         ((iVar14 != 1 || ((*(uint *)(*(int *)(iVar19 + iVar17) + 0x10) & 2) == 0)))) {
        iVar11 = *(int *)(iVar19 + iVar17);
        if ((iVar11 == 0) || ((*(uint *)(iVar11 + 0x10) & 1) == 0)) {
          uVar20 = 8;
          uVar21 = 8;
          iVar11 = *(int *)(*(int *)((int)g_menuMobys + iVar17) + 0x78);
          uVar2 = *(uint *)(iVar11 + 0x58);
          uVar3 = *(undefined4 *)(iVar11 + 0x50);
          uVar4 = *(undefined4 *)(iVar11 + 0x54);
          uVar5 = *(uint *)(iVar11 + 0x5c);
          if (0x100 < (int)uVar2) {
            do {
              uVar20 = uVar20 + 1;
            } while (1 << (uVar20 & 0x3f) < (int)uVar2);
          }
          if (0x100 < (int)uVar5) {
            do {
              uVar21 = uVar21 + 1;
            } while (1 << (uVar21 & 0x3f) < (int)uVar5);
          }
          for (; 0x11 < (int)(uVar20 + uVar21); uVar21 = uVar21 - 1) {
          }
          snprintf(acStack_d0,"monitor %d",uVar16);
          idol_draw::RsxCmd_DebugStr_Marker(HUD_Pass,acStack_d0);
          SetScreenResolution
                    (uVar7,uVar20,uVar21,&DAT_00730000,
                     (ulonglong)(LZCOUNT(iVar14) << 0x20) >> 0x25 ^ 1,DAT_00729844);
          uVar8 = (*(code *)**(undefined4 **)(*(int *)(iVar19 + iVar17) + 4))();
          ResetHUDPass();
          idol_draw::RsxCmd_WritePass(HUD_Pass);
          if ((uVar8 & 1) == 0) {
            uVar21 = 1 << (uVar21 & 0x3f);
            uVar20 = 1 << (uVar20 & 0x3f);
            uVar22 = 0;
            uVar18 = 0;
            uVar10 = uVar2;
            uVar13 = uVar5;
            if ((uVar8 & 2) == 0) {
              uVar10 = uVar20;
              uVar13 = uVar21;
              if ((uVar8 & 8) == 0) {
                if ((uVar8 & 4) == 0) {
                  if ((uVar8 & 0x10) == 0) goto LAB_0013e528;
                }
                else if ((int)uVar2 < (int)uVar5) {
                  uVar22 = (((int)uVar20 >> 1) + (uint)((int)uVar20 < 0 && (uVar20 & 1) != 0)) -
                           (int)(uVar20 * uVar2) / (int)(uVar5 << 1);
                  uVar10 = uVar20 - uVar22;
                }
                else {
                  uVar18 = (((int)uVar21 >> 1) + (uint)((int)uVar21 < 0 && (uVar21 & 1) != 0)) -
                           (int)(uVar21 * uVar5) / (int)(uVar2 << 1);
                  uVar13 = uVar21 - uVar18;
                }
              }
              else {
                uVar10 = uVar20 - uVar2;
                uVar13 = uVar21 - uVar5;
                uVar22 = ((int)uVar10 >> 1) + (uint)((int)uVar10 < 0 && (uVar10 & 1) != 0);
                uVar18 = ((int)uVar13 >> 1) + (uint)((int)uVar13 < 0 && (uVar13 & 1) != 0);
                uVar10 = uVar20 - uVar22;
                uVar13 = uVar21 - uVar18;
                if ((int)uVar22 < 0) {
                  uVar22 = 0;
                }
                if ((int)uVar18 < 0) {
                  uVar18 = 0;
                }
                if ((int)uVar20 < (int)uVar10) {
                  uVar10 = uVar20;
                }
                if ((int)uVar21 < (int)uVar13) {
                  uVar13 = uVar21;
                }
              }
            }
            uVar9 = idol_draw::PackCmd(0,1,2,1,0x80);
            SetGSReg(3,uVar9);
            uVar9 = FUN_00502f98(1,1,4,0,0,0,0,0);
            SetGSReg(0x16,uVar9);
            uVar10 = uVar10 - uVar22;
            uVar13 = uVar13 - uVar18;
            Sprite_DrawShape
                      (uVar3,uVar4,uVar2,uVar5,
                       ((int)uVar22 >> 1) + (uint)((int)uVar22 < 0 && (uVar22 & 1) != 0),
                       ((int)uVar18 >> 1) + (uint)((int)uVar18 < 0 && (uVar18 & 1) != 0),
                       ((int)uVar10 >> 1) + (uint)((int)uVar10 < 0 && (uVar10 & 1) != 0),
                       ((int)uVar13 >> 1) + (uint)((int)uVar13 < 0 && (uVar13 & 1) != 0));
          }
        }
        else {
          (*(code *)**(undefined4 **)(iVar11 + 4))();
        }
      }
LAB_0013e528:
      iVar17 = (int)uVar16 + 1;
      uVar16 = (ulonglong)iVar17;
    } while (iVar17 < 0xe);
    if (iVar14 == 0) {
      STUB_000f184c();
      DrawMobyList();
    }
    iVar14 = iVar14 + 1;
    if (1 < iVar14) {
      STUB_0006d704(0);
      iVar19 = 0;
      do {
        if ((*(int *)((int)&DAT_00729894 + iVar19) != 0) &&
           ((iVar15 != 6 || (DAT_00a52c88 != '\0')))) {
          DrawTVTextures(*(undefined4 *)((int)g_menuMobys + iVar19));
        }
        iVar15 = iVar15 + 1;
        iVar19 = iVar19 + 4;
      } while (iVar15 < 0xe);
      STUB_0006d708();
      return;
    }
  } while( true );
}


// 0x013e604 (0x30 bytes)
/* [p2_pause] index<16 into table of rc1/ps3data/global/mission_ss_mi* paths
   [p2_pause] index<16 into table of rc1/ps3data/global/mission_ss_mi* paths
   [p2_pause] index<16 into table of rc1/ps3data/global/mission_ss_mi* paths */

undefined4 GetMissionScreenshotPath(longlong param_1)

{
  undefined4 uVar1;
  
  if ((uint)param_1 < 0x10) {
    uVar1 = *(undefined4 *)
             ((int)&PTR_s_rc1_ps3data_global_mission_ss_mi_00729854 + (int)(param_1 << 2));
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// 0x013e634 (0x414 bytes)
// strings: 00a0ca34: 'None' | 0071fb2c: '������������'

void PrepareChallengeModeSave(longlong param_1)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  char *addr;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar13 = g_ScratchBuf;
  FastMemCopy32(g_ScratchBuf,&g_goldWeaponsArray,0x28);
  FastMemCopy32(iVar13 + 0x30,&UnlockableItems,0x25);
  FastMemCopy32(iVar13 + 0x60,&currentAmmoArray,0x94);
  FastMemCopy32(iVar13 + 0x100,g_CollectedGoldBolts,0x50);
  FastMemCopy32(iVar13 + 0x150,UINT_ARRAY_0096c1dc,0x20);
  iVar6 = iVar13 + 0x170;
  FastMemCopy32(iVar6,g_purchasableVendorItems,0xc);
  iVar7 = iVar13 + 0x180;
  FastMemCopy32(iVar7,g_SkillPoints,0x20);
  iVar8 = iVar13 + 0x1a0;
  FastMemCopy32(iVar8,Cheats,0xc);
  iVar9 = iVar13 + 0x1b0;
  FastMemCopy32(iVar9,&DAT_0096c080,0xc);
  uVar5 = g_totalBoltsCollected;
  iVar4 = g_ChallengeMode;
  bVar3 = g_MiscLevelFlags.UltraNanotech;
  bVar2 = g_MiscLevelFlags.PremiumNanotech;
  uVar1 = g_boltCount;
  memcard_ResetGame();
  FastMemCopy32(&g_goldWeaponsArray,iVar13,0x28);
  if (DAT_00731698 != -1) {
    iVar10 = 0;
    do {
      iVar12 = *(int *)((int)&DAT_0073169c + iVar10);
      (&UnlockableItems.field0_0x0)[*(int *)((int)&DAT_00731698 + iVar10)] =
           *(undefined *)(iVar13 + *(int *)((int)&DAT_00731698 + iVar10) + 0x30);
      iVar10 = iVar10 + 4;
    } while (iVar12 != -1);
  }
  FastMemCopy32(&currentAmmoArray,iVar13 + 0x60,0x94);
  FastMemCopy32(g_CollectedGoldBolts,iVar13 + 0x100,0x50);
  iVar12 = 0;
  iVar10 = 0;
  do {
    iVar11 = 0;
    if ((&UnlockableItems.field0_0x0)[*(int *)(iVar13 + 0x150)] != '\0') {
      iVar11 = *(int *)(iVar13 + 0x150);
    }
    iVar12 = iVar12 + 1;
    *(int *)((int)UINT_ARRAY_0096c1dc + iVar10) = iVar11;
    iVar13 = iVar13 + 4;
    iVar10 = iVar10 + 4;
  } while (iVar12 < 8);
  FastMemCopy32(g_purchasableVendorItems,iVar6,0xc);
  FastMemCopy32(g_SkillPoints,iVar7,0x20);
  FastMemCopy32(Cheats,iVar8,0xc);
  FastMemCopy32(&DAT_0096c080,iVar9,0xc);
  addr = DAT_00a52c8c;
  DAT_0096ca08 = 0;
  if (bVar2 != false) {
    g_MiscLevelFlags.PremiumNanotech = true;
    g_heroMaxNanotech = 5;
  }
  if (bVar3 != false) {
    g_MiscLevelFlags.UltraNanotech = true;
    g_heroMaxNanotech = 8;
  }
  g_HelpVoiceOn = 0;
  g_ChallengeMode = iVar4 + 1;
  g_HelpTextOn = 0;
  g_boltCount = uVar1;
  g_totalBoltsCollected = uVar5;
  if (-1 < (int)param_1) {
    g_SaveCurFile = (int)param_1;
    *(undefined4 *)((int)&DAT_0071fa44 + ((int)(param_1 << 5) - (int)(param_1 << 2))) = 0;
    memcard_MakeWholeSave(addr);
    DAT_0071faec = 0;
    DAT_0071fb18 = DAT_00a52c8c;
    memcard_PerformOperation(0);
  }
  return;
}


// 0x013ea48 (0x30 bytes)
/* [p2_pause] stores param in 0xa52c8c then memcard_MakeWholeSave
   [p2_pause] stores param in 0xa52c8c then memcard_MakeWholeSave
   [p2_pause] stores param in 0xa52c8c then memcard_MakeWholeSave */

void MakeWholeSaveWithMode(char *param_1)

{
  DAT_00a52c8c = param_1;
  memcard_MakeWholeSave(param_1);
  return;
}


// 0x013ea78 (0x74 bytes)
/* [p2_pause] stops music if flagged, zeroes queue count 0xa52e9c
   [p2_pause] stops music if flagged, zeroes queue count 0xa52e9c
   [p2_pause] stops music if flagged, zeroes queue count 0xa52e9c */

void ClearMenuQueue(void)

{
  if ((g_MusicLoading != 0) && (DAT_00a52c7b != '\0')) {
    music_StopLoad();
    DAT_00a52c7b = '\0';
  }
  DAT_00a52e9c = 0;
  DAT_00a5306c = 0;
  return;
}


// 0x013eaec (0xc0 bytes)
/* [p2_pause] shifts the 8-entry 0x38-byte queue at 0xa52ea0 down by one
   [p2_pause] shifts the 8-entry 0x38-byte queue at 0xa52ea0 down by one
   [p2_pause] shifts the 8-entry 0x38-byte queue at 0xa52ea0 down by one */

undefined8 PopMenuQueueEntry(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 7;
  iVar5 = 0x38;
  do {
    iVar4 = iVar4 + -1;
    uVar1 = *(undefined4 *)((int)&DAT_00a52eac + iVar5);
    *(undefined4 *)((int)&DAT_00a52e68 + iVar5) = *(undefined4 *)((int)&DAT_00a52ea0 + iVar5);
    *(undefined4 *)((int)&DAT_00a52e6c + iVar5) = *(undefined4 *)((int)&DAT_00a52ea4 + iVar5);
    *(undefined4 *)(iVar5 + 0xa52e70) = *(undefined4 *)((int)&DAT_00a52ea8 + iVar5);
    *(undefined4 *)(iVar5 + 0xa52e74) = uVar1;
    uVar1 = *(undefined4 *)((int)&DAT_00a52eb4 + iVar5);
    uVar2 = *(undefined4 *)((int)&DAT_00a52eb8 + iVar5);
    uVar3 = *(undefined4 *)((int)&DAT_00a52ebc + iVar5);
    *(undefined4 *)(iVar5 + 0xa52e78) = *(undefined4 *)((int)&DAT_00a52eb0 + iVar5);
    *(undefined4 *)(iVar5 + 0xa52e7c) = uVar1;
    *(undefined4 *)(iVar5 + 0xa52e80) = uVar2;
    *(undefined4 *)((int)&DAT_00a52e84 + iVar5) = uVar3;
    uVar1 = *(undefined4 *)((int)&DAT_00a52ec4 + iVar5);
    uVar2 = *(undefined4 *)((int)&DAT_00a52ec8 + iVar5);
    uVar3 = *(undefined4 *)((int)&DAT_00a52ecc + iVar5);
    *(undefined4 *)(iVar5 + 0xa52e88) = *(undefined4 *)((int)&DAT_00a52ec0 + iVar5);
    *(undefined4 *)(iVar5 + 0xa52e8c) = uVar1;
    *(undefined4 *)(iVar5 + 0xa52e90) = uVar2;
    *(undefined4 *)(iVar5 + 0xa52e94) = uVar3;
    uVar1 = *(undefined4 *)((int)&DAT_00a52ed4 + iVar5);
    *(undefined4 *)(iVar5 + 0xa52e98) = *(undefined4 *)((int)&DAT_00a52ed0 + iVar5);
    *(undefined4 *)((int)&DAT_00a52e9c + iVar5) = uVar1;
    iVar5 = iVar5 + 0x38;
  } while (iVar4 != 0);
  DAT_00a52e9c = DAT_00a52e9c + -1;
  return 0;
}


// 0x013ebb0 (0xd74 bytes)
// strings: 006536cc: 'rc1/ps3data/global/ratchet_seq%d.ps3'

/* [p2_pause] loads ratchet_seq%d.ps3, creates/animates hero moby for menu; called by
   MenuHero_Update
   [p2_pause] loads ratchet_seq%d.ps3, creates/animates hero moby for menu; called by
   MenuHero_Update
   [p2_pause] loads ratchet_seq%d.ps3, creates/animates hero moby for menu; called by
   MenuHero_Update */

undefined8
LoadMenuRatchetModel
          (MobyInstance *param_1,undefined8 param_2,MobyInstance *param_3,int *param_4,int *param_5,
          int *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar11;
  longlong lVar10;
  int iVar12;
  int iVar13;
  MobyInstance *pMVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  char acStack_180 [256];
  
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  if (DAT_00a52e9c != 0) {
    if ((param_1->field43_0x70 & 2U) != 0) {
      bVar5 = true;
      if ((DAT_00a5306c == 0) || (DAT_00a5306c = DAT_00a5306c + -1, DAT_00a5306c == 0)) {
        bVar6 = true;
      }
    }
    uVar11 = (uint)DAT_00a52c7b;
    if ((DAT_00a52c7b != 0) && (g_MusicLoading == 0)) {
      iVar12 = uVar11 - 1;
      iVar15 = 0;
      DAT_00a52c6c = 0;
      do {
        if ((&DAT_00a53098)[iVar15 * 2] == (&DAT_00a52c50)[iVar12]) {
          (&DAT_00a5309c)[iVar15 * 2] = (&DAT_00a5309c)[iVar15 * 2] & 0xfffffffb;
          break;
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < 5);
      uVar9 = DAT_00a52ea4;
      uVar8 = DAT_00a52cf8;
      (&DAT_00a52c77)[uVar11] = (char)DAT_00a52cf8;
      if (uVar9 == uVar8) {
        DAT_00a52ea0 = 2;
      }
      *(undefined4 *)(&MobyClasses[0]->type + uVar8 * 4) = (&DAT_00a52c50)[iVar12];
      ParseMobySeq(MobyClasses[0],DAT_00a52cf8);
      DAT_00a52c7b = 0;
    }
    if ((((DAT_00a52c7b == 0) && (g_MusicLoading == 0)) && (0 < DAT_00a52e9c)) && (DAT_00a52ea0 == 0)) {
      if (((&DAT_00a52c78)[DAT_00a52c7a] == DAT_00a52ea4) ||
         ((&DAT_00a52c78)[((uint)DAT_00a52c7a == 0)] == DAT_00a52ea4)) {
        DAT_00a52ea0 = 2;
      }
      else if (DAT_00a52ea4 < DAT_00a52c7c) {
        DAT_00a52ea0 = 3;
      }
      else {
        iVar12 = (&DAT_00a52c50)[DAT_00a52c7a];
        DAT_00a52c6c = iVar12;
        snprintf(acStack_180,"rc1/ps3data/global/ratchet_seq%d.ps3",
                       DAT_00a52ea4 - DAT_00a52c7c);
        LoadAssetFromFile(acStack_180,iVar12,0x4f000);
        iVar15 = 0;
        do {
          if ((&DAT_00a53098)[iVar15 * 2] == iVar12) {
            (&DAT_00a5309c)[iVar15 * 2] = (&DAT_00a5309c)[iVar15 * 2] | 4;
            break;
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < 5);
        DAT_00a52ea0 = 1;
        DAT_00a52c7b = DAT_00a52c7a + 1;
        DAT_00a52cf8 = DAT_00a52ea4;
        (&DAT_00a52c78)[DAT_00a52c7a] = 0xff;
      }
    }
    if ((0 < DAT_00a52e9c) && ((DAT_00a52ea0 == 2 || (DAT_00a52ea0 == 3)))) {
      if ((DAT_00a52eb0 == 0) ||
         (((DAT_00a52be0 == DAT_00a52eb0 || (DAT_00a52be8 == DAT_00a52eb0)) ||
          (DAT_00a52be4 == DAT_00a52eb0)))) {
        if (DAT_00a52ea8 == 0) {
          bVar7 = true;
        }
        else if (DAT_00a52ea8 == 1 && bVar5) {
          bVar7 = true;
        }
        else if (DAT_00a52ea8 == 2 && bVar6) {
          bVar7 = true;
        }
        else if (DAT_00a52ea8 == 3) {
          bVar7 = false;
          iVar15 = 7;
          puVar4 = &DAT_00a52ea0;
          iVar12 = 0x38;
          do {
            uVar1 = puVar4[0xf];
            iVar15 = iVar15 + -1;
            uVar2 = puVar4[0x10];
            uVar3 = puVar4[0x11];
            *(undefined4 *)((int)&DAT_00a52e68 + iVar12) = puVar4[0xe];
            *(undefined4 *)((int)&DAT_00a52e6c + iVar12) = uVar1;
            *(undefined4 *)(iVar12 + 0xa52e70) = uVar2;
            *(undefined4 *)(iVar12 + 0xa52e74) = uVar3;
            uVar1 = puVar4[0x13];
            uVar2 = puVar4[0x14];
            uVar3 = puVar4[0x15];
            *(undefined4 *)(iVar12 + 0xa52e78) = puVar4[0x12];
            *(undefined4 *)(iVar12 + 0xa52e7c) = uVar1;
            *(undefined4 *)(iVar12 + 0xa52e80) = uVar2;
            *(undefined4 *)((int)&DAT_00a52e84 + iVar12) = uVar3;
            uVar1 = puVar4[0x17];
            uVar2 = puVar4[0x18];
            uVar3 = puVar4[0x19];
            *(undefined4 *)(iVar12 + 0xa52e88) = puVar4[0x16];
            *(undefined4 *)(iVar12 + 0xa52e8c) = uVar1;
            *(undefined4 *)(iVar12 + 0xa52e90) = uVar2;
            *(undefined4 *)(iVar12 + 0xa52e94) = uVar3;
            uVar1 = puVar4[0x1b];
            *(undefined4 *)(iVar12 + 0xa52e98) = puVar4[0x1a];
            *(undefined4 *)((int)&DAT_00a52e9c + iVar12) = uVar1;
            puVar4 = puVar4 + 0xe;
            iVar12 = iVar12 + 0x38;
          } while (iVar15 != 0);
          DAT_00a52e9c = DAT_00a52e9c + -1;
        }
      }
      else {
        bVar7 = false;
        iVar15 = 7;
        puVar4 = &DAT_00a52ea0;
        iVar12 = 0x38;
        do {
          uVar1 = puVar4[0xf];
          iVar15 = iVar15 + -1;
          uVar2 = puVar4[0x10];
          uVar3 = puVar4[0x11];
          *(undefined4 *)((int)&DAT_00a52e68 + iVar12) = puVar4[0xe];
          *(undefined4 *)((int)&DAT_00a52e6c + iVar12) = uVar1;
          *(undefined4 *)(iVar12 + 0xa52e70) = uVar2;
          *(undefined4 *)(iVar12 + 0xa52e74) = uVar3;
          uVar1 = puVar4[0x13];
          uVar2 = puVar4[0x14];
          uVar3 = puVar4[0x15];
          *(undefined4 *)(iVar12 + 0xa52e78) = puVar4[0x12];
          *(undefined4 *)(iVar12 + 0xa52e7c) = uVar1;
          *(undefined4 *)(iVar12 + 0xa52e80) = uVar2;
          *(undefined4 *)((int)&DAT_00a52e84 + iVar12) = uVar3;
          uVar1 = puVar4[0x17];
          uVar2 = puVar4[0x18];
          uVar3 = puVar4[0x19];
          *(undefined4 *)(iVar12 + 0xa52e88) = puVar4[0x16];
          *(undefined4 *)(iVar12 + 0xa52e8c) = uVar1;
          *(undefined4 *)(iVar12 + 0xa52e90) = uVar2;
          *(undefined4 *)(iVar12 + 0xa52e94) = uVar3;
          uVar1 = puVar4[0x1b];
          *(undefined4 *)(iVar12 + 0xa52e98) = puVar4[0x1a];
          *(undefined4 *)((int)&DAT_00a52e9c + iVar12) = uVar1;
          puVar4 = puVar4 + 0xe;
          iVar12 = iVar12 + 0x38;
        } while (iVar15 != 0);
        DAT_00a52e9c = DAT_00a52e9c + -1;
      }
    }
    if (bVar7) {
      DAT_00a53060 = DAT_00a52ea0;
      DAT_00a53064 = DAT_00a52ea4;
      DAT_00a53068 = DAT_00a52ea8;
      DAT_00a5306c = DAT_00a52eac;
      DAT_00a53070 = DAT_00a52eb0;
      DAT_00a53074 = DAT_00a52eb4;
      DAT_00a53078 = DAT_00a52eb8;
      DAT_00a5307c = DAT_00a52ebc;
      DAT_00a53080 = DAT_00a52ec0;
      DAT_00a53084 = DAT_00a52ec4;
      DAT_00a53088 = DAT_00a52ec8;
      iVar15 = 7;
      DAT_00a5308c = DAT_00a52ecc;
      DAT_00a53090 = DAT_00a52ed0;
      DAT_00a53094 = DAT_00a52ed4;
      puVar4 = &DAT_00a52ea0;
      iVar12 = 0x38;
      do {
        uVar1 = puVar4[0xf];
        iVar15 = iVar15 + -1;
        uVar2 = puVar4[0x10];
        uVar3 = puVar4[0x11];
        *(undefined4 *)((int)&DAT_00a52e68 + iVar12) = puVar4[0xe];
        *(undefined4 *)((int)&DAT_00a52e6c + iVar12) = uVar1;
        *(undefined4 *)(iVar12 + 0xa52e70) = uVar2;
        *(undefined4 *)(iVar12 + 0xa52e74) = uVar3;
        uVar1 = puVar4[0x13];
        uVar2 = puVar4[0x14];
        uVar3 = puVar4[0x15];
        *(undefined4 *)(iVar12 + 0xa52e78) = puVar4[0x12];
        *(undefined4 *)(iVar12 + 0xa52e7c) = uVar1;
        *(undefined4 *)(iVar12 + 0xa52e80) = uVar2;
        *(undefined4 *)((int)&DAT_00a52e84 + iVar12) = uVar3;
        uVar1 = puVar4[0x17];
        uVar2 = puVar4[0x18];
        uVar3 = puVar4[0x19];
        *(undefined4 *)(iVar12 + 0xa52e88) = puVar4[0x16];
        *(undefined4 *)(iVar12 + 0xa52e8c) = uVar1;
        *(undefined4 *)(iVar12 + 0xa52e90) = uVar2;
        *(undefined4 *)(iVar12 + 0xa52e94) = uVar3;
        uVar1 = puVar4[0x1b];
        *(undefined4 *)(iVar12 + 0xa52e98) = puVar4[0x1a];
        *(undefined4 *)((int)&DAT_00a52e9c + iVar12) = uVar1;
        puVar4 = puVar4 + 0xe;
        iVar12 = iVar12 + 0x38;
      } while (iVar15 != 0);
      DAT_00a52e9c = DAT_00a52e9c + -1;
      if ((int)DAT_00a52c58 < (int)(DAT_00a52c58 + DAT_00a52c5c)) {
        lVar10 = ((ulonglong)DAT_00a52c58 & 0x1fffffff) << 3;
        uVar11 = DAT_00a52c58;
        do {
          iVar12 = (int)lVar10;
          uVar11 = uVar11 + 1;
          lVar10 = lVar10 + 8;
          *(undefined4 *)
           (&MobyClasses[(byte)(&MobyClassLookup)[*(int *)(&DAT_007314d0 + iVar12)]]->type +
           *(int *)(&DAT_007314d4 + iVar12) * 4) = 0;
        } while ((int)uVar11 < (int)(DAT_00a52c58 + DAT_00a52c5c));
      }
      iVar12 = DAT_00a53094;
      iVar15 = 0;
      DAT_00a52c5c = DAT_00a53094;
      DAT_00a52c58 = DAT_00a53090;
      if (0 < DAT_00a53094) {
        lVar10 = ((ulonglong)DAT_00a53090 & 0x1fffffff) << 3;
        lVar16 = ((ulonglong)DAT_00a53090 & 0x3fffffff) << 2;
        do {
          iVar13 = (int)lVar10;
          iVar17 = (int)lVar16;
          iVar15 = iVar15 + 1;
          lVar16 = lVar16 + 4;
          lVar10 = lVar10 + 8;
          *(undefined4 *)
           (&MobyClasses[(byte)(&MobyClassLookup)[*(int *)(&DAT_007314d0 + iVar13)]]->type +
           *(int *)(&DAT_007314d4 + iVar13) * 4) = *(undefined4 *)(&DAT_00a52d04 + iVar17);
        } while (iVar15 < iVar12);
      }
      MB_SetAnimationFrame(param_1,DAT_00a53064,0,10,5);
      if (DAT_00a53064 == DAT_00a52c78) {
        DAT_00a52c7a = 1;
      }
      else if (DAT_00a53064 == DAT_00a52c79) {
        DAT_00a52c7a = 0;
      }
      pMVar14 = (MobyInstance *)param_2;
      if ((&DAT_00721008)[DAT_00a53070 * 0x13] == 2) {
        if (param_3 != (MobyInstance *)0x0) {
          MB_SetAnimationFrame(param_3,DAT_00a53074,0,10,5);
        }
        if (pMVar14 != (MobyInstance *)0x0) {
          MB_SetAnimationNoBlend(param_2,1,0);
        }
      }
      else if (pMVar14 != (MobyInstance *)0x0) {
        MB_SetAnimationFrame(pMVar14,DAT_00a53074,0,10,5);
      }
      pMVar14 = (MobyInstance *)*param_4;
      if (pMVar14 != (MobyInstance *)0x0) {
        DeleteMoby(pMVar14);
        lVar10 = (longlong)worldUpdateTime;
        pMVar14->color = (int)((ulonglong)lVar10 >> 0x20);
        pMVar14->light = (int)lVar10;
        pMVar14 = (MobyInstance *)0x0;
      }
      *param_4 = (int)pMVar14;
      pMVar14 = (MobyInstance *)*param_5;
      if (pMVar14 != (MobyInstance *)0x0) {
        DeleteMoby(pMVar14);
        lVar10 = (longlong)worldUpdateTime;
        pMVar14->color = (int)((ulonglong)lVar10 >> 0x20);
        pMVar14->light = (int)lVar10;
        pMVar14 = (MobyInstance *)0x0;
      }
      *param_5 = (int)pMVar14;
      pMVar14 = (MobyInstance *)*param_6;
      if (pMVar14 != (MobyInstance *)0x0) {
        DeleteMoby(pMVar14);
        lVar10 = (longlong)worldUpdateTime;
        pMVar14->color = (int)((ulonglong)lVar10 >> 0x20);
        pMVar14->light = (int)lVar10;
        pMVar14 = (MobyInstance *)0x0;
      }
      *param_6 = (int)pMVar14;
      if (DAT_00a53078 != -1) {
        if ((&MobyClassLookup)[DAT_00a53078] == -1) {
          pMVar14 = (MobyInstance *)0x0;
        }
        else {
          pMVar14 = CreateMoby((MOBY_OCLASSES)DAT_00a53078);
          if (pMVar14 != (MobyInstance *)0x0) {
            pMVar14->updateDistance = -1;
            pMVar14->drawDistance = 0xff;
            pMVar14->enabled = '\x01';
            pMVar14->state = '\0';
            UpdateMobyTransform(pMVar14);
            MB_SetLights(pMVar14,0x202020,0xe,0xe,0);
          }
        }
        *param_4 = (int)pMVar14;
        if (pMVar14 != (MobyInstance *)0x0) {
          if (DAT_00a53078 != 0x27a) {
            MB_SetAnimationNoBlend(pMVar14,DAT_00a5307c,0);
            MB_SetAnimation(*param_4,DAT_00a5307c,0,10);
          }
          *(undefined2 *)(*param_4 + 0x34) = 0;
          iVar12 = *param_4;
          *(f32 *)(iVar12 + 0x10) = (param_1->pos).x;
          *(f32 *)(iVar12 + 0x14) = (param_1->pos).y;
          *(f32 *)(iVar12 + 0x18) = (param_1->pos).z;
          *(f32 *)(iVar12 + 0x1c) = (param_1->pos).w;
          iVar12 = *param_4;
          *(f32 *)(iVar12 + 0x40) = (param_1->rotation).x;
          *(f32 *)(iVar12 + 0x44) = (param_1->rotation).y;
          *(f32 *)(iVar12 + 0x48) = (param_1->rotation).z;
          *(f32 *)(iVar12 + 0x4c) = (param_1->rotation).w;
          iVar12 = *param_4;
          if (*(short *)(iVar12 + 0xa6) == 0x4a) {
            *(float *)(iVar12 + 0x2c) = *(float *)(iVar12 + 0x2c) * 3.0;
          }
          UpdateMobyTransform((MobyInstance *)*param_4);
          *(undefined ***)(*param_4 + 0x74) = &PTR_STUB_00150658_007078e8;
        }
      }
      if (DAT_00a53080 != -1) {
        if ((&MobyClassLookup)[DAT_00a53080] == -1) {
          pMVar14 = (MobyInstance *)0x0;
        }
        else {
          pMVar14 = CreateMoby((MOBY_OCLASSES)DAT_00a53080);
          if (pMVar14 != (MobyInstance *)0x0) {
            pMVar14->updateDistance = -1;
            pMVar14->drawDistance = 0xff;
            pMVar14->enabled = '\x01';
            pMVar14->state = '\0';
            UpdateMobyTransform(pMVar14);
            MB_SetLights(pMVar14,0x202020,0xe,0xe,0);
          }
        }
        *param_5 = (int)pMVar14;
        if (pMVar14 != (MobyInstance *)0x0) {
          MB_SetAnimationNoBlend(pMVar14,DAT_00a53084,0);
          MB_SetAnimation(*param_5,DAT_00a53084,0,10);
          *(undefined2 *)(*param_5 + 0x34) = 0;
          iVar12 = *param_5;
          *(f32 *)(iVar12 + 0x10) = (param_1->pos).x;
          *(f32 *)(iVar12 + 0x14) = (param_1->pos).y;
          *(f32 *)(iVar12 + 0x18) = (param_1->pos).z;
          *(f32 *)(iVar12 + 0x1c) = (param_1->pos).w;
          iVar12 = *param_5;
          *(f32 *)(iVar12 + 0x40) = (param_1->rotation).x;
          *(f32 *)(iVar12 + 0x44) = (param_1->rotation).y;
          *(f32 *)(iVar12 + 0x48) = (param_1->rotation).z;
          *(f32 *)(iVar12 + 0x4c) = (param_1->rotation).w;
          iVar12 = *param_5;
          if (*(short *)(iVar12 + 0xa6) == 0x4a) {
            *(float *)(iVar12 + 0x2c) = *(float *)(iVar12 + 0x2c) * 3.0;
          }
          UpdateMobyTransform((MobyInstance *)*param_5);
          *(undefined ***)(*param_5 + 0x74) = &PTR_STUB_00150658_007078e8;
        }
      }
      if (DAT_00a53088 != -1) {
        if ((&MobyClassLookup)[DAT_00a53088] == -1) {
          pMVar14 = (MobyInstance *)0x0;
        }
        else {
          pMVar14 = CreateMoby((MOBY_OCLASSES)DAT_00a53088);
          if (pMVar14 != (MobyInstance *)0x0) {
            pMVar14->updateDistance = -1;
            pMVar14->drawDistance = 0xff;
            pMVar14->enabled = '\x01';
            pMVar14->state = '\0';
            UpdateMobyTransform(pMVar14);
            MB_SetLights(pMVar14,0x202020,0xe,0xe,0);
          }
        }
        *param_6 = (int)pMVar14;
        if (pMVar14 != (MobyInstance *)0x0) {
          MB_SetAnimationNoBlend(pMVar14,DAT_00a5308c,0);
          MB_SetAnimation(*param_6,DAT_00a5308c,0,10);
          *(undefined2 *)(*param_6 + 0x34) = 0;
          iVar12 = *param_6;
          *(f32 *)(iVar12 + 0x10) = (param_1->pos).x;
          *(f32 *)(iVar12 + 0x14) = (param_1->pos).y;
          *(f32 *)(iVar12 + 0x18) = (param_1->pos).z;
          *(f32 *)(iVar12 + 0x1c) = (param_1->pos).w;
          iVar12 = *param_6;
          *(f32 *)(iVar12 + 0x40) = (param_1->rotation).x;
          *(f32 *)(iVar12 + 0x44) = (param_1->rotation).y;
          *(f32 *)(iVar12 + 0x48) = (param_1->rotation).z;
          *(f32 *)(iVar12 + 0x4c) = (param_1->rotation).w;
          iVar12 = *param_6;
          if (*(short *)(iVar12 + 0xa6) == 0x4a) {
            *(float *)(iVar12 + 0x2c) = *(float *)(iVar12 + 0x2c) * 3.0;
          }
          UpdateMobyTransform((MobyInstance *)*param_6);
          *(undefined ***)(*param_6 + 0x74) = &PTR_STUB_00150658_007078e8;
        }
      }
    }
  }
  return 0;
}


// 0x013f924 (0xf0 bytes)
/* [p2_pause] appends 13-word entry to 8-entry queue at 0xa52ea0
   [p2_pause] appends 13-word entry to 8-entry queue at 0xa52ea0
   [p2_pause] appends 13-word entry to 8-entry queue at 0xa52ea0 */

undefined8
PushMenuQueueEntry
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 in_stack_00000074;
  undefined4 in_stack_0000007c;
  undefined4 in_stack_00000084;
  undefined4 in_stack_0000008c;
  undefined4 in_stack_00000094;
  
  iVar3 = DAT_00a52e9c;
  if (DAT_00a52e9c < 8) {
    iVar1 = DAT_00a52e9c * 0xe;
    iVar2 = DAT_00a52e9c * 0xe;
    DAT_00a52e9c = DAT_00a52e9c + 1;
    (&DAT_00a52ea4)[iVar2] = param_1;
    (&DAT_00a52ea0)[iVar1] = 0;
    (&DAT_00a52ea8)[iVar3 * 0xe] = param_2;
    uVar4 = 0;
    (&DAT_00a52eac)[iVar3 * 0xe] = param_3;
    (&DAT_00a52eb0)[iVar3 * 0xe] = param_4;
    (&DAT_00a52eb4)[iVar3 * 0xe] = param_5;
    (&DAT_00a52eb8)[iVar3 * 0xe] = param_6;
    (&DAT_00a52ebc)[iVar3 * 0xe] = param_7;
    (&DAT_00a52ec0)[iVar3 * 0xe] = param_8;
    (&DAT_00a52ec4)[iVar3 * 0xe] = in_stack_00000074;
    (&DAT_00a52ec8)[iVar3 * 0xe] = in_stack_0000007c;
    (&DAT_00a52ecc)[iVar3 * 0xe] = in_stack_00000084;
    (&DAT_00a52ed0)[iVar3 * 0xe] = in_stack_0000008c;
    (&DAT_00a52ed4)[iVar3 * 0xe] = in_stack_00000094;
  }
  else {
    uVar4 = 0xffffffffffffffff;
  }
  return uVar4;
}


// 0x013fa14 (0x4 bytes)
void STUB_0013fa14(...)

{
  return;
}


// 0x013fa18 (0x74 bytes)
void SetFrameCount(void)

{
  int iVar1;
  
  iVar1 = g_FrameCount;
  if (DAT_00a15f3a == '\0') {
    iVar1 = g_FrameCount + 1;
    if ((iVar1 == (iVar1 / 0x32) * 0x32) && (g_IsPal != 0)) {
      iVar1 = g_FrameCount + 0xb;
    }
  }
  g_FrameCount = iVar1;
  return;
}


// 0x013fa8c (0x9c bytes)
/* [p2_pause] generic widget update (slot0) used by ~50 widgets: back/close handling
   [p2_pause] generic widget update (slot0) used by ~50 widgets: back/close handling
   [p2_pause] generic widget update (slot0) used by ~50 widgets: back/close handling */

undefined8 MenuText_Update(int param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(g_currentMenuPage + 0x40) == param_1) {
    if (((g_Pad.pressedButton & 0xd00) == 0) || (g_unclosableMenu != 0)) {
      if ((g_Pad.pressedButton & 0x10) != 0) {
        if (*(int *)(g_currentMenuPage + 0x38) != 0) {
          g_nextMenuPage = *(int *)(g_currentMenuPage + 0x38);
          return 0;
        }
        if (g_unclosableMenu == 0) {
          return 0xffffffffffffffff;
        }
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// 0x013fb28 (0x1e0 bytes)
/* [p2_pause] widget update paired with IconList_Draw
   [p2_pause] widget update paired with IconList_Draw
   [p2_pause] widget update paired with IconList_Draw */

undefined8 IconList_Update(int param_1)

{
  ulonglong uVar1;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar2;
  
  uVar4 = g_Pad.pressedButton;
  if (((g_Pad.pressedButton & 0xd00) != 0) && (g_unclosableMenu == 0)) {
    return 1;
  }
  if ((g_Pad.pressedButton & 0x10) != 0) {
    if (*(int *)(g_currentMenuPage + 0x38) != 0) {
      g_nextMenuPage = *(undefined4 *)(g_currentMenuPage + 0x38);
      return 0;
    }
    if (g_unclosableMenu == 0) {
      return 0xffffffffffffffff;
    }
  }
  iVar5 = *(int *)(param_1 + 0x3c);
  if (((g_Pad.pressedButton & 0x1000) != 0) && (iVar5 != 0)) {
    *(int *)(param_1 + 0x3c) = iVar5 + -1;
  }
  if (((uVar4 & 0x4000) != 0) &&
     (iVar3 = *(int *)(param_1 + 0x3c) + 1, iVar3 < *(int *)(param_1 + 0x40))) {
    *(int *)(param_1 + 0x3c) = iVar3;
  }
  if (*(int *)(param_1 + 0x3c) != iVar5) {
    PlayMobySound(1,0x11,*(MobyInstance **)(param_1 + 0x14));
  }
  if (*(int *)(param_1 + 0x24) / 0x25 < *(int *)(param_1 + 0x40)) {
    uVar4 = *(int *)(param_1 + 0x24) - 0x28;
    if (*(int *)(param_1 + 0x3c) <= *(int *)(param_1 + 0x60)) {
      iVar3 = *(int *)(param_1 + 0x3c) + -1;
      iVar5 = 0;
      if (-1 < iVar3) {
        iVar5 = iVar3;
      }
      *(int *)(param_1 + 0x60) = iVar5;
    }
    uVar1 = ((ulonglong)*(uint *)(param_1 + 0x3c) -
            ((longlong)((int)uVar4 / 0x25 + ((int)uVar4 >> 0x1f)) + (ulonglong)(uVar4 >> 0x1f))) + 2
    ;
    uVar2 = (ulonglong)*(uint *)(param_1 + 0x60);
    if ((int)*(uint *)(param_1 + 0x60) < (int)uVar1) {
      uVar2 = uVar1;
    }
    *(int *)(param_1 + 0x60) = (int)uVar2;
    *(int *)(param_1 + 0x5c) = 0x17 - ((int)uVar2 + (int)(uVar2 << 5) + (int)(uVar2 << 2));
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 5;
  }
  return 0;
}


// 0x013fd08 (0x2c0 bytes)
/* [p2_pause] draws icon frames with DrawSprite
   [p2_pause] draws icon frames with DrawSprite
   [p2_pause] draws icon frames with DrawSprite */

undefined8 IconList_Draw(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar4;
  undefined8 uVar3;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar6 = 0;
  iVar1 = *(int *)(param_1 + 0x5c);
  iVar8 = *(int *)(param_1 + 0x20) + -0x20;
  iVar2 = iVar8 >> 1;
  STUB_0006d704(0);
  iVar9 = iVar1;
  if (0 < *(int *)(param_1 + 0x40)) {
    iVar7 = 0;
    do {
      puVar5 = (undefined2 *)(*(int *)(param_1 + 0x48) + iVar7);
      if (*(int *)(param_1 + 0x3c) == iVar6) {
        iVar4 = FUN_005c4988(((ulonglong)g_MainLoopFrames & 0x3f) - 0x20);
        DrawFlatOverlay
                  (iVar2 + -3,iVar9 + -3,iVar2 + 0x23,iVar9 + 0x23,
                   (iVar4 + 0x40) * 0x10202 | 0x80000000,1);
        DrawFlatOverlay(iVar2 + -1,iVar9 + -1,iVar2 + 0x21,iVar9 + 0x21,DAT_00729840,1);
      }
      uVar3 = GetIconFrameTex(*puVar5,puVar5[1]);
      Hud_DrawTexQuad_v2(uVar3,iVar2,iVar9,0x20,0x20,0x80);
      iVar6 = iVar6 + 1;
      iVar9 = iVar9 + 0x25;
      iVar7 = iVar7 + 10;
    } while (iVar6 < *(int *)(param_1 + 0x40));
  }
  if (iVar1 < 0) {
    DrawFlatOverlay(0,0,*(undefined4 *)(param_1 + 0x20),0x14,DAT_00729840,0);
    uVar3 = GetIconFrameTex(0xe99e,6);
    DrawSprite(uVar3,iVar2,2,0x20,0x10,0x80);
  }
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 << 4 < iVar9) {
    DrawFlatOverlay(0,iVar1 + -0x14,*(undefined4 *)(param_1 + 0x20),iVar1,DAT_00729840,0);
    uVar3 = GetIconFrameTex(0xe99e,6);
    Hud_DrawTexQuad(uVar3,iVar8 >> 5,*(int *)(param_1 + 0x24) + -0x12,2,0x10,0x80);
  }
  STUB_0006d708();
  return 2;
}


// 0x013ffc8 (0x34 bytes)
/* [p2_pause] OnEnter: picks string list by DAT_00966af0
   [p2_pause] OnEnter: picks string list by DAT_00966af0
   [p2_pause] OnEnter: picks string list by DAT_00966af0 */

undefined8 SelectItemList_OnEnter(int param_1)

{
  undefined *puVar1;
  
  if (DAT_00966af0 == 0) {
    puVar1 = &DAT_007302ac;
  }
  else {
    puVar1 = &DAT_0073027c;
  }
  *(undefined **)(param_1 + 0x34) = puVar1;
  return 0;
}


// 0x013fffc (0x148 bytes)
/* [p2_pause] builds list of unlocked Cheats entries (text 0x4f5a/0x4f5b) at 0xa53388
   [p2_pause] builds list of unlocked Cheats entries (text 0x4f5a/0x4f5b) at 0xa53388
   [p2_pause] builds list of unlocked Cheats entries (text 0x4f5a/0x4f5b) at 0xa53388 */

undefined8 BuildCheatsList(void)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  undefined4 local_50 [7];
  int local_34 [11];
  
  lVar4 = 0;
  for (uVar3 = 0; (int)uVar3 < 0xc; uVar3 = uVar3 + 1) {
    iVar2 = (int)((uVar3 & 0xffffffff) << 2);
    if (*(int *)((int)local_34 + iVar2) == -1) break;
    if ((&DAT_0096c080)[*(int *)((int)local_34 + iVar2)] != '\0') {
      iVar5 = (int)(lVar4 << 4) + (int)(lVar4 << 2);
      iVar1 = *(int *)((int)local_34 + iVar2);
      *(undefined4 *)((int)&DAT_00a53388 + iVar5) = *(undefined4 *)((int)local_50 + iVar2);
      lVar4 = lVar4 + 1;
      *(undefined4 *)((int)&DAT_00a53390 + iVar5) = 0x4f5a;
      *(char **)((int)&DAT_00a5338c + iVar5) = Cheats + iVar1;
      *(undefined4 *)((int)&DAT_00a53394 + iVar5) = 0x4f5b;
      *(undefined4 *)((int)&DAT_00a53398 + iVar5) = 0;
    }
  }
  *(undefined4 *)((int)&DAT_00a53388 + (int)(lVar4 << 4) + (int)(lVar4 << 2)) = 0;
  return 0;
}


// 0x0140144 (0x8 bytes)
/* [p2_pause] returns 0; slot2 of camera settings widget
   [p2_pause] returns 0; slot2 of camera settings widget
   [p2_pause] returns 0; slot2 of camera settings widget */

undefined8 CameraSettings_OnEnter(void)

{
  return 0;
}


// 0x014014c (0x8 bytes)
/* [p2_pause] returns 0; slot3 of camera settings widget
   [p2_pause] returns 0; slot3 of camera settings widget
   [p2_pause] returns 0; slot3 of camera settings widget */

undefined8 CameraSettings_OnExit(void)

{
  return 0;
}


// 0x0140154 (0x10 bytes)
/* [p2_pause] generic widget OnEnter: sets +0x44=-1
   [p2_pause] generic widget OnEnter: sets +0x44=-1
   [p2_pause] generic widget OnEnter: sets +0x44=-1 */

undefined8 MenuText_OnEnter(int param_1)

{
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  return 0;
}


// 0x0140170 (0x148 bytes)
/* [p2_pause] lerps two ABGR colors by elapsed frames
   [p2_pause] lerps two ABGR colors by elapsed frames
   [p2_pause] lerps two ABGR colors by elapsed frames */

void GetMenuFadeColor(int param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  
  if ((int)param_2 == -1) {
    param_2 = 0xffffffff80ffa888;
  }
  if ((int)param_3 == -1) {
    param_3 = 0xffffffff8020ffff;
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  dVar1 = 1.0;
  if (param_1 <= (int)(animationSpeed * ((float)(longlong)DAT_00729848 + 0.5))) {
    dVar1 = (double)(1.0 - (float)((double)(longlong)
                                           ((int)(animationSpeed *
                                                 ((float)(longlong)DAT_00729848 + 0.5)) - param_1) /
                                  (double)(longlong)
                                          (int)(animationSpeed *
                                               ((float)(longlong)DAT_00729848 + 0.5))));
  }
  FastLerpColor(dVar1,param_2,param_3);
  return;
}


// 0x01402c8 (0x1138 bytes)
// strings: 006534f4: '%s %s' | 006534fc: '(null)'

/* [p2_pause] generic widget draw (slot1): help_msg strings with font print
   [p2_pause] generic widget draw (slot1): help_msg strings with font print
   [p2_pause] generic widget draw (slot1): help_msg strings with font print */

undefined8 MenuText_Draw(undefined8 param_1)

{
  bool bVar1;
  undefined uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  GPiece<16> auVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  int iVar9;
  short sVar13;
  undefined *puVar10;
  char *pcVar11;
  char *__s;
  undefined8 uVar8;
  undefined *puVar12;
  undefined *puVar14;
  undefined1 *__dest;
  ulonglong uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  short local_f0;
  short local_ee;
  short local_e2;
  char acStack_d8 [104];
  
  uVar15 = 0;
  uVar18 = 0x3ff0000000000000;
  pcVar11 = "default";
  if (g_JapaneseMode) {
    puVar12 = &JapaneseGlyphs;
  }
  else {
    puVar12 = &MediumWesternGlyphs;
  }
  ppuVar6 = (undefined **)param_1;
  uVar17 = 1;
  if (((uint)ppuVar6[0xc] & 8) != 0) {
    if (g_JapaneseMode) {
      puVar12 = &JapaneseGlyphs;
    }
    else {
      uVar17 = 3;
      puVar12 = &LargeWesternGlyphs;
    }
  }
  if (((uint)ppuVar6[0xc] & 0x10) != 0) {
    if (g_JapaneseMode) {
      uVar17 = 1;
      puVar12 = &JapaneseGlyphs;
    }
    else {
      uVar17 = 2;
      puVar12 = &Glyphs;
    }
  }
  uVar19 = uVar18;
  uVar7 = idol_draw::PackCmd(0,1,0,1,0);
  SetGSReg(3,uVar7);
  uVar7 = idol_draw::Blend(1,5,4,0,0,0,0,1);
  SetGSReg(0x16,uVar7);
  puVar3 = ppuVar6[0xc];
  if (((uint)puVar3 & 0x20) == 0) {
    if (((uint)puVar3 & 0x40) == 0) {
      if (((uint)puVar3 & 4) == 0) {
        if (((uint)puVar3 & 0x80) == 0) {
          if (((uint)puVar3 & 0x100) == 0) {
            if (((uint)puVar3 & 0x1000) == 0) {
              sVar13 = *(short *)(*(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x48) + 6 +
                                 *(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x3c) * 10);
              puVar16 = (undefined *)(int)sVar13;
              if ((&g_goldWeaponsArray.field0_0x0)[sVar13] != '\0') {
                uVar15 = 1;
              }
            }
            else {
              bVar1 = 1 < g_Language;
              puVar16 = *(undefined **)(*(int *)(g_currentMenuPage + 0x40) + 0x40);
              sVar13 = *(short *)(*(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x34) +
                                 (int)puVar16 * 0xc);
              ppuVar6[0xd] = (undefined *)0xffff;
              if ((bVar1) && (g_Language < 6)) {
                uVar19 = 0x3fecccccc0000000;
              }
              sVar13 = Help_GetPairedId(sVar13,1);
              ppuVar6[0xd] = (undefined *)(int)sVar13;
            }
          }
          else {
            puVar16 = *(undefined **)(*(int *)(g_currentMenuPage + 0x40) + 0x3c);
            iVar9 = *(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x48) + (int)puVar16 * 10;
            if (*(short *)(iVar9 + 4) == 0) {
              uVar2 = (&UnlockableItems.field0_0x0)[*(short *)(iVar9 + 6)];
            }
            else {
              uVar2 = (&g_MiscLevelFlags.Zoomerator)[*(short *)(iVar9 + 6)];
            }
            if (uVar2 == '\0') {
              puVar16 = (undefined *)0xffffffff;
            }
          }
        }
        else {
          puVar16 = *(undefined **)(*(int *)(g_currentMenuPage + 0x40) + 0x40);
          if ((((uint)puVar3 & 0x8000) != 0) && (Cutscene != 0)) {
            uVar15 = 1;
          }
        }
      }
      else {
        if ((int)ppuVar6[0x11] < (int)(animationSpeed * ((float)(longlong)DAT_00729848 + 0.5))) {
          auVar5 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar4 = storeVectorElementWordIndexed
                            (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0x44,param_1)
          ;
          *(undefined4 *)((uint)(ppuVar6 + 0x11) & 0xfffffffc) = uVar4;
        }
        puVar16 = (undefined *)0x0;
        ppuVar6[0x12] = (undefined *)0x0;
        ppuVar6[0x13] = (undefined *)0x0;
      }
    }
    else {
      puVar16 = (undefined *)(g_SelectedLevel + -1);
    }
  }
  else {
    puVar16 = (undefined *)(Level - Novalis);
    if ((undefined *)0x11 < puVar16) {
      puVar16 = (undefined *)0xffffffff;
    }
  }
  if (ppuVar6[0x11] == (undefined *)0xffffffff) {
    auVar5 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar4 = storeVectorElementWordIndexed
                      (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0x44,param_1);
    *(undefined4 *)((uint)(ppuVar6 + 0x11) & 0xfffffffc) = uVar4;
    ppuVar6[0x12] = puVar16;
    ppuVar6[0x13] = (undefined *)uVar15;
  }
  puVar3 = ppuVar6[0x12];
  if (puVar16 == puVar3) {
    ppuVar6[0x11] = ppuVar6[0x11] + 3;
  }
  else {
    if ((int)(animationSpeed * ((float)(longlong)DAT_00729848 + 0.5)) < (int)ppuVar6[0x11]) {
      auVar5 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar4 = storeVectorElementWordIndexed
                        (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0x44,param_1);
      *(undefined4 *)((uint)(ppuVar6 + 0x11) & 0xfffffffc) = uVar4;
    }
    puVar14 = (undefined *)0x0;
    if (0 < (int)ppuVar6[0x11]) {
      puVar14 = ppuVar6[0x11] + -1;
    }
    puVar10 = (undefined *)0x0;
    if (0 < (int)puVar14) {
      puVar10 = puVar14 + -1;
    }
    puVar14 = (undefined *)0x0;
    if (0 < (int)puVar10) {
      puVar14 = puVar10 + -1;
    }
    ppuVar6[0x11] = puVar14;
    if (puVar14 == (undefined *)0x0) {
      ppuVar6[0x12] = puVar16;
      ppuVar6[0x13] = (undefined *)uVar15;
      ppuVar6[0xf] = (undefined *)0x0;
      ppuVar6[0xc] = (undefined *)((uint)ppuVar6[0xc] & 0xfffffbff);
    }
    else {
      uVar15 = ZEXT48(ppuVar6[0x13]);
      puVar16 = puVar3;
    }
  }
  puVar3 = ppuVar6[0xc];
  if (((uint)puVar3 & 4) == 0) {
    if (((uint)puVar3 & 0x1000) == 0) {
      if (puVar16 == (undefined *)0xffffffff && ((uint)puVar3 & 0x100) != 0) {
        pcVar11 = "";
      }
      else if (ppuVar6[0xd] != (undefined *)0x0) {
        pcVar11 = (char *)help_msg_string_by_index
                                    (*(StringId *)
                                      (ppuVar6[0xd] +
                                      ((int)puVar16 * (int)ppuVar6[0xe] & 0xfffffffcU) +
                                      (int)(uVar15 << 2)));
      }
    }
    else {
      if (ppuVar6[0xd] == (undefined *)0xffff) {
        return 1;
      }
      pcVar11 = (char *)help_msg_string_by_index((StringId)ppuVar6[0xd]);
    }
  }
  else {
    if (ppuVar6[0xd] == (undefined *)0x0) {
      return 1;
    }
    pcVar11 = (char *)help_msg_string_by_index((StringId)ppuVar6[0xd]);
  }
  if ((((uint)ppuVar6[0xc] & 0x11e4) == 0) && ((&UnlockableItems.field0_0x0)[(int)puVar16] == '\0'))
  {
    pcVar11 = "";
  }
  __s = pcVar11;
  if (((uint)ppuVar6[0xc] & 0x200) != 0) {
    iVar9 = *(int *)(ppuVar6[0xd] + ((int)puVar16 * (int)ppuVar6[0xe] & 0xfffffffc));
    if ((iVar9 != 0x4ed9 && iVar9 != 0x4ed2) && (iVar9 != 0x4edd)) {
      __s = &stack0x00000000 + -0xd8;
      uVar7 = help_msg_string_by_index(STR_PLANET);
      snprintf(__s,"%s %s",uVar7,pcVar11);
    }
  }
  if ((((uint)ppuVar6[0xc] & 0x800) != 0) && (g_SkillPoints[(int)puVar16] == '\0')) {
    __s = (char *)help_msg_string_by_index(STR_0x4F54);
  }
  if (__s == (char *)0x0) {
    __s = "(null)";
  }
  STUB_0006d704(0);
  uVar17 = GetEffectTex(uVar17);
  __dest = &stack0x00000000 + -0xf0;
  memcpy(__dest,&DAT_00731758,0x18);
  local_f0 = (short)DAT_00730ac8;
  local_ee = (short)ppuVar6[9] - local_f0;
  if (((uint)ppuVar6[0xc] & 0x10000) != 0) {
    local_ee = (short)ppuVar6[9] + -1;
  }
  uVar7 = FastLerpColor(0x3fe0000000000000,DAT_00729840,0xffffffff80ffa888);
  uVar8 = GetMenuFadeColor(ppuVar6[0x11],uVar7,0xffffffff80ffa888);
  uVar7 = uVar18;
  if (((((ppuVar6 == &PTR_PTR_00729f18) || (ppuVar6 == &PTR_PTR_00729fc8)) ||
       (ppuVar6 == &PTR_PTR_00729f70)) || (ppuVar6 == &PTR_PTR_0072a020)) &&
     ((1 < g_Language && (g_Language < 6)))) {
    uVar7 = 0x3fe6666660000000;
    local_f0 = 0;
    local_ee = 0x28;
  }
  if (g_JapaneseMode == false) {
    FontPrintOptWestern(uVar7,__dest,uVar8,__s,0xffffffffffffffff,uVar17,puVar12);
  }
  else {
    FontPrintOptJapanese(uVar18,__dest,uVar8,__s,0xffffffffffffffff,uVar17,puVar12);
  }
  puVar3 = ppuVar6[0xc];
  if ((((uint)puVar3 & 0x2000) == 0) && ((int)local_ee - (int)local_f0 <= local_e2 + 4)) {
    if (((uint)puVar3 & 0x400) == 0) {
      ppuVar6[0xc] = (undefined *)((uint)puVar3 | 0x400);
      ppuVar6[0xf] = (undefined *)((int)ppuVar6[9] * -8);
    }
  }
  else if (((uint)puVar3 & 0x400) != 0) {
    ppuVar6[0xf] = (undefined *)0x0;
    ppuVar6[0xc] = (undefined *)((uint)ppuVar6[0xc] ^ 0x400);
  }
  DisableFontColors();
  if (g_JapaneseMode == false) {
    FontPrintOptWestern(uVar18,__dest,0x80000000,__s,0xffffffffffffffff,uVar17,puVar12);
  }
  else {
    FontPrintOptJapanese(uVar18,__dest,0x80000000,__s,0xffffffffffffffff,uVar17,puVar12);
  }
  EnableFontColors();
  if (((uint)ppuVar6[0xc] & 0x20000) != 0) {
    DisableFontColors();
  }
  if (g_JapaneseMode == false) {
    FontPrintOptWestern(uVar19,__dest,uVar8,__s,0xffffffffffffffff,uVar17,puVar12);
  }
  else {
    FontPrintOptJapanese(uVar18,__dest,uVar8,__s,0xffffffffffffffff,uVar17,puVar12);
  }
  if (((uint)ppuVar6[0xc] & 0x20000) != 0) {
    EnableFontColors();
  }
  if (((uint)ppuVar6[0xc] & 0x400) != 0) {
    DisableFontColors();
    if (g_JapaneseMode == false) {
      FontPrintOptWestern(uVar18,__dest,0x80000000,__s,0xffffffffffffffff,uVar17,puVar12);
    }
    else {
      FontPrintOptJapanese(uVar18,__dest,0x80000000,__s,0xffffffffffffffff,uVar17,puVar12);
    }
    EnableFontColors();
    if (g_JapaneseMode == false) {
      FontPrintOptWestern(uVar18,__dest,uVar8,__s,0xffffffffffffffff,uVar17,puVar12);
    }
    else {
      FontPrintOptJapanese(uVar18,__dest,uVar8,__s,0xffffffffffffffff,uVar17,puVar12);
    }
  }
  if (((uint)ppuVar6[0xc] & 0x400) != 0) {
    iVar9 = 3;
    if ((g_Pad.downButtons & L2) != 0) {
      iVar9 = 10;
    }
    puVar12 = ppuVar6[0xf] + iVar9;
    ppuVar6[0xf] = puVar12;
    iVar9 = ((int)local_e2 + DAT_00730ad4 * 3) * 0x10;
    ppuVar6[0xf] = puVar12 + -(((int)puVar12 / iVar9) * iVar9);
  }
  STUB_0006d708();
  return 2;
}


// 0x0141408 (0x878 bytes)
undefined8 UpdatePauseMenu(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  short *psVar8;
  GPiece<16> auVar9;
  
  iVar5 = 0;
  bVar1 = *(int *)(g_currentMenuPage + 0x40) != param_1;
  if (**(short **)(param_1 + 0x34) != 0) {
    iVar4 = 0;
    iVar7 = 0;
    do {
      if ((bVar1) || (*(int *)(param_1 + 0x40) != iVar5)) {
        psVar8 = (short *)(*(int *)(param_1 + 0x34) + 10 + iVar4);
        if ((int)(animationSpeed * ((float)(longlong)DAT_00729848 + 0.5)) < (int)*psVar8) {
          iVar2 = (int)(animationSpeed * ((float)(longlong)DAT_00729848 + 0.5));
          auVar9.piece<0,4>() = iVar2;
          auVar9.piece<4,4>() = iVar2;
          auVar9.piece<8,4>() = iVar2;
          auVar9.piece<12,4>() = iVar2;
          auVar9 = vectorSplatHalfWord(auVar9,1);
          sVar6 = storeVectorElementHalfWordIndexed(auVar9,0,ZEXT48(psVar8));
          *psVar8 = sVar6;
        }
        sVar6 = 0;
        if (0 < *psVar8) {
          sVar6 = *psVar8 + -1;
        }
        *psVar8 = sVar6;
      }
      else {
        psVar8 = (short *)(*(int *)(param_1 + 0x34) + 10 + iVar4);
        *psVar8 = *psVar8 + 1;
        if (32000 < *psVar8) {
          *psVar8 = 32000;
        }
      }
      iVar7 = iVar7 + 0xc;
      iVar4 = iVar4 + 0xc;
      iVar5 = iVar5 + 1;
    } while (*(short *)(*(int *)(param_1 + 0x34) + iVar7) != 0);
  }
  if (!bVar1) {
    if ((g_Pad.pressedButton & 0xd00) != 0) {
      if ((*(uint *)(param_1 + 0x30) & 0x20) != 0) {
        g_SelectedLevel = Level;
      }
      return 0xffffffffffffffff;
    }
    if ((g_Pad.pressedButton & 0x10) != 0) {
      if ((*(uint *)(param_1 + 0x30) & 0x20) != 0) {
        g_SelectedLevel = Level;
      }
      if (*(int *)(g_currentMenuPage + 0x38) != 0) {
        g_nextMenuPage = *(undefined4 *)(g_currentMenuPage + 0x38);
        return 0;
      }
      if (g_unclosableMenu == 0) {
        return 0xffffffffffffffff;
      }
    }
    if (((g_Pad.pressedButton & pad_ConfirmButtonMask) != 0) && ((g_CardStateFlags & 1) == 0)
       ) {
      iVar5 = *(int *)(param_1 + 0x34);
      iVar4 = *(int *)(param_1 + 0x40) * 0xc;
      sVar6 = *(short *)(iVar5 + 2 + iVar4);
      if (sVar6 < 7) {
        if (sVar6 < 4) {
          if (1 < sVar6) {
            if (sVar6 < 3) {
              PlayMobySound(2,0x11,*(MobyInstance **)(param_1 + 0x14));
            }
            else {
              g_nextMenuPage = *(undefined4 *)(iVar5 + 4 + iVar4);
            }
          }
        }
        else if (sVar6 < 5) {
          PlayMobySound(0,0x11,*(MobyInstance **)(param_1 + 0x14));
          DAT_00a52cfc = 0;
          memcard_PerformOperation(0);
          DisplayPrompt
                    (3,*(int *)(*(int *)(param_1 + 0x34) + 4 + *(int *)(param_1 + 0x40) * 0xc),0);
        }
        else {
          if (5 < sVar6) {
            iVar5 = *(int *)(iVar5 + 4 + iVar4) >> 0x10;
            if (iVar5 != 0) {
              g_SceneHideMoby = *(undefined4 *)(&g_MissionMobys + iVar5 * 4);
            }
            resumePage = g_currentMenuPage;
            resumeScreen = 0;
            g_menuClosing = 5;
            DAT_00a52c90 = *(uint *)(*(int *)(param_1 + 0x34) + 4 + iVar4) & 0xffff;
            PlayMobySound(0,0x11,*(MobyInstance **)(param_1 + 0x14));
            return 0;
          }
          PlayMobySound(0,0x11,*(MobyInstance **)(param_1 + 0x14));
          DAT_00a52cfc = 1;
          memcard_PerformOperation(1);
          DisplayPrompt
                    (3,*(int *)(*(int *)(param_1 + 0x34) + 4 + *(int *)(param_1 + 0x40) * 0xc),0);
        }
      }
      else {
        if (sVar6 < 10) {
          if (sVar6 < 8) {
            resumePage = g_currentMenuPage;
            resumeScreen = 2;
            g_menuClosing = 3;
            DAT_00a52c90 = *(undefined4 *)(iVar5 + 4 + iVar4);
            PlayMobySound(0,0x11,*(MobyInstance **)(param_1 + 0x14));
            return 0;
          }
          if (8 < sVar6) {
            g_Language = *(int *)(iVar5 + 4 + iVar4);
            if (g_Language != 6) {
              pad_ConfirmButtonMask = 0x40;
              DAT_00902ed8 = 0x20;
            }
            else {
              pad_ConfirmButtonMask = 0x60;
              DAT_00902ed8 = 0x60;
            }
            g_JapaneseMode = g_Language == 6;
            LoadLanguageHelpMsgs();
            return 0;
          }
          resumeScreen = 2;
          resumePage = g_currentMenuPage;
          g_menuClosing = 4;
          DAT_00a52c90 = *(undefined4 *)(iVar5 + 4 + iVar4);
          PlayMobySound(0,0x11,*(MobyInstance **)(param_1 + 0x14));
          return 0;
        }
        if (sVar6 < 0xb) {
          resumeScreen = 2;
          resumePage = g_currentMenuPage;
          g_menuClosing = 6;
          DAT_00a52c90 = *(undefined4 *)(iVar5 + 4 + iVar4);
          PlayMobySound(0,0x11,*(MobyInstance **)(param_1 + 0x14));
          return 0;
        }
        if (sVar6 < 0xc) {
          resumeScreen = 2;
          resumePage = g_currentMenuPage;
          g_menuClosing = 7;
          PlayMobySound(0,0x11,*(MobyInstance **)(param_1 + 0x14));
          return 0;
        }
      }
    }
    iVar5 = 0;
    if (**(short **)(param_1 + 0x34) != 0) {
      iVar4 = 0;
      iVar5 = 0;
      do {
        iVar4 = iVar4 + 0xc;
        iVar5 = iVar5 + 1;
      } while (*(short *)(*(int *)(param_1 + 0x34) + iVar4) != 0);
    }
    iVar4 = *(int *)(param_1 + 0x40);
    uVar3 = g_Pad.pressedButton;
    if ((*(uint *)(param_1 + 0x30) & 1) != 0) {
      uVar3 = g_Pad.repeat;
    }
    if (((uVar3 & 0x1000) != 0) ||
       (((*(uint *)(param_1 + 0x30) & 0x100) != 0 && ((uVar3 & 4) != 0)))) {
      if (iVar4 == 0) {
        if ((*(uint *)(param_1 + 0x30) & 0x1000) == 0) {
          *(undefined4 *)(g_currentMenuPage + 0x80) = *(undefined4 *)(param_1 + 0x38);
        }
        else {
          *(int *)(param_1 + 0x40) = iVar5 + -1;
        }
      }
      else {
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
      }
    }
    if (((uVar3 & 0x4000) != 0) ||
       (((*(uint *)(param_1 + 0x30) & 0x100) != 0 && ((uVar3 & 8) != 0)))) {
      iVar5 = *(int *)(param_1 + 0x40) * 0xc;
      if ((*(short *)(*(int *)(param_1 + 0x34) + 0xc + iVar5) == 0) ||
         (*(short *)(*(int *)(param_1 + 0x34) + 0xe + iVar5) == 0)) {
        if ((*(uint *)(param_1 + 0x30) & 0x1000) == 0) {
          *(undefined4 *)(g_currentMenuPage + 0x80) = *(undefined4 *)(param_1 + 0x3c);
        }
        else {
          *(undefined4 *)(param_1 + 0x40) = 0;
        }
      }
      else {
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
      }
    }
    if (((*(int *)(param_1 + 0x40) != iVar4) || (*(int *)(g_currentMenuPage + 0x80) != 0)) &&
       (PlayMobySound(1,0x11,*(MobyInstance **)(param_1 + 0x14)),
       (*(uint *)(param_1 + 0x30) & 0x20) != 0)) {
      g_SelectedLevel = *(LevelId *)(ptr_GalacticMap + *(int *)(param_1 + 0x40) * 4);
    }
  }
  return 0;
}


// 0x0141c90 (0xa18 bytes)
undefined8 DrawPauseStrings(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  
  iVar2 = *(int *)(g_currentMenuPage + 0x40);
  if (g_JapaneseMode) {
    iVar13 = 0xe;
  }
  else {
    iVar13 = 0xc;
  }
  uVar12 = 1;
  if ((*(uint *)(param_1 + 0x30) & 4) != 0) {
    if (g_JapaneseMode) {
      iVar13 = 0xe;
    }
    else {
      iVar13 = 0xe;
      uVar12 = 3;
    }
  }
  uVar18 = 0x3ff0000000000000;
  if (g_Language == 6) {
    uVar18 = 0x3feb333340000000;
  }
  else if (g_Language == 5) {
    uVar18 = 0x3fecccccc0000000;
  }
  else if (g_Language == 4) {
    uVar18 = 0x3fecccccc0000000;
  }
  else if (g_Language == 3) {
    uVar18 = 0x3fecccccc0000000;
  }
  else if (g_Language == 2) {
    uVar18 = 0x3fecccccc0000000;
  }
  if ((*(uint *)(param_1 + 0x30) & 8) != 0) {
    if (g_JapaneseMode) {
      iVar13 = 0xe;
      uVar12 = 1;
    }
    else {
      iVar13 = 10;
      uVar12 = 2;
    }
  }
  uVar5 = idol_draw::PackCmd(0,1,0,1,0);
  SetGSReg(3,uVar5);
  uVar5 = idol_draw::Blend(1,5,4,0,0,0,0,1);
  SetGSReg(0x16,uVar5);
  STUB_0006d704(0);
  iVar10 = 0;
  if (**(short **)(param_1 + 0x34) != 0) {
    iVar6 = 0;
    iVar10 = 0;
    do {
      iVar6 = iVar6 + 0xc;
      iVar10 = iVar10 + 1;
    } while (*(short *)(*(int *)(param_1 + 0x34) + iVar6) != 0);
  }
  if ((*(uint *)(param_1 + 0x30) & 0x10) == 0) {
    iVar10 = *(int *)(param_1 + 0x24) / (iVar10 + 1);
  }
  else {
    iVar10 = iVar13 + 3;
  }
  iVar9 = 0;
  iVar6 = *(int *)(param_1 + 0x20) >> 1;
  iVar13 = (iVar10 - (iVar13 >> 1)) + -1;
  if ((g_MenuScreen == 0x2a) && (g_Language == 2)) {
    uVar18 = 0x3fe99999a0000000;
  }
  if (((*(uint *)(param_1 + 0x30) & 0x4000) != 0) && (**(short **)(param_1 + 0x34) != 0)) {
    iVar11 = 0;
    iVar14 = 0;
    iVar9 = 0;
    do {
      if (g_JapaneseMode == false) {
        uVar5 = help_msg_string_by_index((int)*(short *)(*(int *)(param_1 + 0x34) + iVar11));
        iVar7 = FontLenScaledWithTableNoKern(uVar18,uVar5,0xffffffffffffffff);
      }
      else {
        uVar5 = help_msg_string_by_index((int)*(short *)(*(int *)(param_1 + 0x34) + iVar11));
        iVar7 = FontLenScaledWithTable(uVar18,uVar5,0xffffffffffffffff);
      }
      if (iVar9 < iVar7) {
        iVar9 = iVar7;
      }
      iVar14 = iVar14 + 0xc;
      iVar11 = iVar11 + 0xc;
    } while (*(short *)(*(int *)(param_1 + 0x34) + iVar14) != 0);
  }
  uVar3 = *(uint *)(param_1 + 0x30);
  if ((((uVar3 & 0x20000) == 0) || (iVar9 + 6 <= *(int *)(param_1 + 0x20))) || ((uVar3 & 8) != 0)) {
    if (*(int *)(param_1 + 0x20) < iVar9) {
      iVar9 = *(int *)(param_1 + 0x20);
    }
    iVar14 = 0;
    if (**(short **)(param_1 + 0x34) != 0) {
      iVar7 = 0;
      iVar11 = 0;
      do {
        bVar4 = false;
        if ((iVar2 == param_1) && (*(int *)(param_1 + 0x40) == iVar14)) {
          bVar4 = true;
        }
        iVar8 = *(int *)(param_1 + 0x34);
        bVar1 = *(short *)(iVar8 + 2 + iVar7) != 0;
        if ((*(uint *)(param_1 + 0x30) & 2) == 0) {
          if (bVar4) {
            if (bVar1) {
              GetMenuFadeColor(*(undefined2 *)(iVar8 + 10 + iVar7),0xffffffffffffffff,
                               0xffffffffffffffff);
            }
          }
          else if (bVar1) {
            GetMenuFadeColor(*(undefined2 *)(iVar8 + 10 + iVar7),0xffffffffffffffff,
                             0xffffffffffffffff);
          }
        }
        uVar5 = help_msg_string_by_index((int)*(short *)(*(int *)(param_1 + 0x34) + iVar7));
        if (*(short *)(*(int *)(param_1 + 0x34) + 2 + iVar7) == 2) {
          uVar5 = help_msg_string_by_index(STR_0x4F54);
        }
        if (g_JapaneseMode == false) {
          iVar8 = FontLenScaledWithTableNoKern(uVar18,uVar5,0xffffffffffffffff);
        }
        else {
          iVar8 = FontLenScaledWithTable(uVar18,uVar5,0xffffffffffffffff);
        }
        iVar8 = iVar6 - (iVar8 >> 1);
        if ((*(uint *)(param_1 + 0x30) & 0x40) == 0) {
          if ((*(uint *)(param_1 + 0x30) & 0x4000) != 0) {
            iVar8 = iVar6 - (iVar9 >> 1);
          }
        }
        else {
          iVar8 = 4;
        }
        DisableFontColors();
        if (g_JapaneseMode == false) {
          dVar16 = (double)(longlong)(DAT_0072984c + iVar8);
          dVar15 = (double)(longlong)(DAT_00729850 + iVar13);
          GetEffectTex((double)(longlong)(DAT_00729850 + iVar13),uVar12);
          FontPrintScaledWestern(dVar16,dVar15,uVar18);
        }
        else {
          dVar16 = (double)(longlong)(DAT_0072984c + iVar8);
          dVar15 = (double)(longlong)(DAT_00729850 + iVar13);
          GetEffectTex((double)(longlong)(DAT_00729850 + iVar13),uVar12);
          FontPrintScaledJapanese(dVar16,dVar15,uVar18);
        }
        EnableFontColors();
        if ((*(uint *)(param_1 + 0x30) & 0x80) != 0) {
          DisableFontColors();
        }
        dVar16 = (double)(longlong)iVar13;
        dVar15 = (double)(longlong)iVar8;
        if (g_JapaneseMode == false) {
          GetEffectTex(uVar12);
          FontPrintScaledWestern(dVar15,dVar16,uVar18);
        }
        else {
          GetEffectTex((longlong)iVar8,uVar12);
          FontPrintScaledJapanese(dVar15,dVar16,uVar18);
        }
        iVar13 = iVar13 + iVar10;
        if (*(short *)(*(int *)(param_1 + 0x34) + 8 + iVar7) != 0) {
          DisableFontColors();
          if (g_JapaneseMode == false) {
            dVar17 = (double)(longlong)(DAT_0072984c + iVar8);
            dVar16 = (double)(longlong)(DAT_00729850 + iVar13);
            help_msg_string_by_index((int)*(short *)(*(int *)(param_1 + 0x34) + 8 + iVar7));
            GetEffectTex(uVar12);
            FontPrintScaledWestern(dVar17,dVar16,uVar18);
          }
          else {
            dVar17 = (double)(longlong)(DAT_0072984c + iVar8);
            dVar16 = (double)(longlong)(DAT_00729850 + iVar13);
            help_msg_string_by_index((int)*(short *)(*(int *)(param_1 + 0x34) + 8 + iVar7));
            GetEffectTex(uVar12);
            FontPrintScaledJapanese(dVar17,dVar16,uVar18);
          }
          if ((*(uint *)(param_1 + 0x30) & 0x80) == 0) {
            EnableFontColors();
          }
          dVar16 = (double)(longlong)iVar13;
          if (g_JapaneseMode == false) {
            help_msg_string_by_index((int)*(short *)(*(int *)(param_1 + 0x34) + 8 + iVar7));
            GetEffectTex(uVar12);
            FontPrintScaledWestern(dVar15,dVar16,uVar18);
          }
          else {
            help_msg_string_by_index((int)*(short *)(*(int *)(param_1 + 0x34) + 8 + iVar7));
            GetEffectTex(uVar12);
            FontPrintScaledJapanese(dVar15,dVar16,uVar18);
          }
          iVar13 = iVar13 + iVar10;
        }
        if ((*(uint *)(param_1 + 0x30) & 0x80) != 0) {
          EnableFontColors();
        }
        iVar11 = iVar11 + 0xc;
        iVar14 = iVar14 + 1;
        iVar7 = iVar7 + 0xc;
      } while (*(short *)(*(int *)(param_1 + 0x34) + iVar11) != 0);
    }
    STUB_0006d708();
    uVar12 = 2;
  }
  else {
    uVar12 = 1;
    *(uint *)(param_1 + 0x30) = uVar3 | 8;
  }
  return uVar12;
}


// 0x01426a8 (0xdc bytes)
/* [p2_pause] skips hidden items via +0x4c chain, sets page+0x80
   [p2_pause] skips hidden items via +0x4c chain, sets page+0x80
   [p2_pause] skips hidden items via +0x4c chain, sets page+0x80 */

undefined8 MenuButton_OnEnter(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = false;
  if (param_2 == 0) {
    if ((DAT_00a52ce0 != 0) && ((*(uint *)(param_1 + 0x30) & 8) != 0)) {
      bVar1 = true;
    }
    if ((DAT_00a52ce4 != 0) && ((*(uint *)(param_1 + 0x30) & 4) != 0)) {
      bVar1 = true;
    }
    bVar2 = false;
    if (bVar1) {
      do {
        param_1 = *(int *)(param_1 + 0x4c);
        bVar2 = true;
        bVar1 = false;
        if ((DAT_00a52ce0 != 0) && ((*(uint *)(param_1 + 0x30) & 8) != 0)) {
          bVar1 = true;
        }
        if ((DAT_00a52ce4 != 0) && ((*(uint *)(param_1 + 0x30) & 4) != 0)) {
          bVar1 = true;
        }
      } while (bVar1);
    }
    if (bVar2) {
      *(int *)(g_currentMenuPage + 0x80) = param_1;
    }
  }
  return 0;
}


// 0x0142784 (0x5dc bytes)
/* [p2_pause] button widget update
   [p2_pause] button widget update
   [p2_pause] button widget update */

undefined8 MenuButton_Update(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  if (*(int *)(g_currentMenuPage + 0x40) == param_1) {
    if (((g_Pad.pressedButton & 0xd00) == 0) || (g_unclosableMenu != 0)) {
      if ((g_Pad.pressedButton & 0x10) != 0) {
        if (*(int *)(g_currentMenuPage + 0x38) != 0) {
          g_nextMenuPage = *(int *)(g_currentMenuPage + 0x38);
          return 0;
        }
        if (g_unclosableMenu == 0) {
          return 0xffffffffffffffff;
        }
      }
      iVar8 = *(int *)(param_1 + 0x44);
      iVar2 = *(int *)(param_1 + 0x3c);
      iVar7 = *(int *)(param_1 + 0x40);
      iVar10 = iVar2 - (iVar2 / iVar8) * iVar8;
      if ((g_Pad.pressedButton & 0x1000) != 0) {
        if (iVar2 / iVar8 == 0) {
          iVar12 = param_1;
          if (*(int *)(param_1 + 0x4c) == 0) {
            if ((*(uint *)(param_1 + 0x30) & 0x8000) == 0) {
              *(int *)(param_1 + 0x3c) = iVar2 + iVar8 * (iVar7 + -1);
            }
          }
          else {
            do {
              iVar12 = *(int *)(iVar12 + 0x4c);
              bVar4 = false;
              iVar11 = *(int *)(iVar12 + 0x40);
              iVar3 = *(int *)(iVar12 + 0x44);
              if ((DAT_00a52ce0 != 0) && ((*(uint *)(iVar12 + 0x30) & 8) != 0)) {
                bVar4 = true;
              }
              if ((DAT_00a52ce4 != 0) && ((*(uint *)(iVar12 + 0x30) & 4) != 0)) {
                bVar4 = true;
              }
            } while (bVar4);
            *(int *)(g_currentMenuPage + 0x80) = iVar12;
            if ((iVar3 == 5) && (*(int *)(param_1 + 0x44) == 3)) {
              iVar10 = iVar10 + 1;
            }
            if ((iVar3 == 3) && (*(int *)(param_1 + 0x44) == 5)) {
              iVar9 = iVar10 + -1;
              iVar10 = 2;
              if ((iVar9 < 3) && (iVar10 = iVar9, iVar9 < 0)) {
                iVar10 = 0;
              }
            }
            iVar9 = iVar10;
            if (iVar3 + -1 <= iVar10) {
              iVar9 = iVar3 + -1;
            }
            *(int *)(iVar12 + 0x3c) = (iVar11 + -1) * iVar3 + iVar9;
          }
        }
        else {
          *(int *)(param_1 + 0x3c) = iVar2 - iVar8;
        }
      }
      if ((g_Pad.pressedButton & 0x4000) != 0) {
        if (iVar2 / iVar8 + 1 < iVar7) {
          *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + iVar8;
        }
        else {
          iVar7 = param_1;
          if (*(int *)(param_1 + 0x50) == 0) {
            if ((*(uint *)(param_1 + 0x30) & 0x8000) == 0) {
              *(int *)(param_1 + 0x3c) =
                   *(int *)(param_1 + 0x3c) -
                   *(int *)(param_1 + 0x44) * (*(int *)(param_1 + 0x40) + -1);
            }
          }
          else {
            do {
              iVar7 = *(int *)(iVar7 + 0x50);
              bVar4 = false;
              iVar12 = *(int *)(iVar7 + 0x44);
              if ((DAT_00a52ce0 != 0) && ((*(uint *)(iVar7 + 0x30) & 8) != 0)) {
                bVar4 = true;
              }
              if ((DAT_00a52ce4 != 0) && ((*(uint *)(iVar7 + 0x30) & 4) != 0)) {
                bVar4 = true;
              }
            } while (bVar4);
            *(int *)(g_currentMenuPage + 0x80) = iVar7;
            if ((iVar12 == 5) && (*(int *)(param_1 + 0x44) == 3)) {
              iVar10 = iVar10 + 1;
            }
            if ((iVar12 == 3) && (*(int *)(param_1 + 0x44) == 5)) {
              iVar11 = iVar10 + -1;
              iVar10 = 2;
              if ((iVar11 < 3) && (iVar10 = iVar11, iVar11 < 0)) {
                iVar10 = 0;
              }
            }
            iVar11 = iVar10;
            if (iVar12 + -1 <= iVar10) {
              iVar11 = iVar12 + -1;
            }
            *(int *)(iVar7 + 0x3c) = iVar11;
          }
        }
      }
      uVar5 = g_Pad.pressedButton;
      if ((g_Pad.pressedButton & 0x8000) != 0) {
        if (iVar10 == 0) {
          if (*(int *)(param_1 + 0x54) == 0) {
            if ((*(uint *)(param_1 + 0x30) & 0x8000) == 0) {
              *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x44) + -1;
            }
          }
          else {
            *(int *)(g_currentMenuPage + 0x80) = *(int *)(param_1 + 0x54);
          }
        }
        else {
          *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
        }
      }
      if ((uVar5 & 0x2000) != 0) {
        if (iVar10 + 1 < iVar8) {
          *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
        }
        else if (*(int *)(param_1 + 0x58) == 0) {
          if ((*(uint *)(param_1 + 0x30) & 0x8000) == 0) {
            *(int *)(param_1 + 0x3c) = (*(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x44)) + 1;
          }
        }
        else {
          *(int *)(g_currentMenuPage + 0x80) = *(int *)(param_1 + 0x58);
        }
      }
      if ((*(int *)(param_1 + 0x3c) != iVar2) || (*(int *)(g_currentMenuPage + 0x80) != 0)) {
        PlayMobySound(1,0x11,*(MobyInstance **)(param_1 + 0x14));
      }
      if ((((g_Pad.pressedButton & pad_ConfirmButtonMask) != 0) &&
          ((*(uint *)(param_1 + 0x30) & 1) == 0)) && (DAT_00a52cf4 == 0)) {
        iVar8 = *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x3c) * 10;
        sVar1 = *(short *)(iVar8 + 6);
        if ((sVar1 == 0) || ((&UnlockableItems.field0_0x0)[sVar1] == '\0')) {
          PlayMobySound(2,0x11,*(MobyInstance **)(param_1 + 0x14));
        }
        else {
          iVar2 = (&DAT_00721008)[sVar1 * 0x13];
          PlayMobySound(0,0x11,*(MobyInstance **)(param_1 + 0x14));
          DAT_00a52cf4 = 10;
          if ((((&DAT_00a52be0)[iVar2] == (int)*(short *)(iVar8 + 6)) && (iVar2 != 0)) &&
             (iVar2 != 3)) {
            (&DAT_00a52be0)[iVar2] = 0;
          }
          else if (*(short *)(iVar8 + 6) == 0x18) {
            iVar8 = Hero_GetWeaponAmmo(0x18);
            if ((iVar8 != 0) && (g_MenuScreen == 3)) {
              iVar8 = Hero_GetWeaponAmmo(0x18);
              iVar8 = (uint)DAT_0096bcd7 + iVar8;
              if (6 < iVar8) {
                iVar8 = 6;
              }
              DAT_0096bcd7 = (byte)iVar8;
              DAT_0096bcd5 = 1;
            }
          }
          else {
            (&DAT_00a52be0)[iVar2] = (int)*(short *)(iVar8 + 6);
          }
        }
      }
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}


// 0x0142d60 (0x8 bytes)
undefined8 STUB_00142d60(...)

{
  return 0;
}


// 0x0142d68 (0xd0 bytes)
/* [p2_pause] restores music state
   [p2_pause] restores music state
   [p2_pause] restores music state */

undefined8 MapPage_OnExit(void)

{
  uint *puVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = DAT_00a207d0;
  sVar2 = g_MusicLoading;
  if ((g_MusicLoading == 0) && (DAT_00a207d0 != -1)) {
    puVar1 = (uint *)(&g_MapCacheId + DAT_00a207d0);
    DAT_00a207d0 = -1;
    DAT_00a52c7b = '\0';
    (&g_MapCacheId)[iVar3] = *puVar1 ^ 0x1000;
  }
  if ((sVar2 != 0) && (DAT_00a52c7b != '\0')) {
    music_StopLoad();
    iVar3 = DAT_00a207d0;
    DAT_00a52c7b = '\0';
    DAT_00a207d0 = -1;
    (&g_MapCacheId)[iVar3] = -1;
  }
  return 0;
}


// 0x0142e38 (0x754 bytes)
// strings: 00653504: 'rc1/ps3data/global/maps/maps_mm[%d].ps3' | 0065352c: 'rc1/ps3data/global/maps/maps[%d].ps3' | 00653554: 'rc1/ps3data/global/maps/maps_mm[%d].vram' | 00653584: 'rc1/ps3data/global/maps/maps[%d].vram' | 006535ac: '*pMapFile'

/* [p2_pause] loads maps/maps[_mm][%d].ps3/.vram
   [p2_pause] loads maps/maps[_mm][%d].ps3/.vram
   [p2_pause] loads maps/maps[_mm][%d].ps3/.vram */

undefined8 MapPage_Update(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  short sVar4;
  LevelId LVar5;
  int iVar7;
  int iVar8;
  longlong lVar6;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  char acStack_8080 [64];
  char acStack_8040 [32776];
  
  Map_UpdateZoomPan();
  LVar5 = g_SelectedLevel;
  if ((*(uint *)(param_1 + 0x34) & 0x40) == 0) {
    if (((g_Pad.pressedButton & 0xd00) != 0) && (g_unclosableMenu == 0)) {
      return 1;
    }
    if ((g_Pad.pressedButton & 0x10) != 0) {
      if (*(int *)(g_currentMenuPage + 0x38) != 0) {
        g_nextMenuPage = (undefined *)*(undefined4 *)(g_currentMenuPage + 0x38);
        return 0;
      }
      if (g_unclosableMenu == 0) {
        return 0xffffffffffffffff;
      }
    }
    if ((g_Pad.pressedButton & 0x40) != 0) {
      g_nextMenuPage = &DAT_0072ace0;
    }
    if (((g_Pad.pressedButton & 0x20) != 0) && (g_SelectedLevel != Veldin)) {
      resumePage = &DAT_0072a9f0;
      resumeScreen = 0xb;
      g_menuClosing = 3;
      DAT_00a52c90 = g_SelectedLevel;
      PlayMobySound(0,0x11,*(MobyInstance **)(param_1 + 0x14));
      return 0;
    }
    iVar7 = Map_GetGalacticMapIndex(g_SelectedLevel);
    if (-1 < iVar7) {
      iVar14 = (int)((longlong)iVar7 << 2);
      if ((((g_Pad.pressedButton & 8) != 0) && (iVar7 < 0x13)) &&
         (*(LevelId *)(ptr_GalacticMap + iVar14 + 4) != Veldin)) {
        g_SelectedLevel = *(LevelId *)(ptr_GalacticMap + iVar14 + 4);
      }
      if ((((g_Pad.pressedButton & 4) != 0) && (iVar7 != 0)) &&
         (*(LevelId *)(ptr_GalacticMap + iVar14 + -4) != Veldin)) {
        g_SelectedLevel = *(LevelId *)(ptr_GalacticMap + iVar14 + -4);
      }
    }
    if (g_SelectedLevel != LVar5) {
      iVar7 = PlayMobySound(1,0x11,*(MobyInstance **)(param_1 + 0x14));
      RefreshLevelMissionStatus(iVar7);
    }
  }
  if (g_SelectedLevel != g_MapCurIndex) {
    bVar1 = UnlockableItems.mapOMatic == '\0';
    if (bVar1) {
      snprintf(acStack_8080,"rc1/ps3data/global/maps/maps[%d].ps3",g_SelectedLevel);
    }
    else {
      snprintf(acStack_8080,"rc1/ps3data/global/maps/maps_mm[%d].ps3",g_SelectedLevel);
    }
    g_MapIsMapOMatic = (int)!bVar1;
    g_MapLoaded = 1;
    LoadAssetFromFile(acStack_8080,g_NpcBuffer,0x90000);
    iVar7 = g_NpcBuffer;
    if (UnlockableItems.mapOMatic == '\0') {
      snprintf(acStack_8080,"rc1/ps3data/global/maps/maps[%d].vram",g_SelectedLevel);
    }
    else {
      snprintf(acStack_8080,"rc1/ps3data/global/maps/maps_mm[%d].vram",g_SelectedLevel);
    }
    LoadAssetFromFile(acStack_8080,DAT_00a20810,0x300000);
    iVar3 = g_pIdolDrawBase;
    iVar8 = iVar7 + *(int *)(iVar7 + 8);
    iVar11 = 0;
    iVar12 = 5;
    iVar14 = DAT_00a20810 - *(int *)(g_pIdolDrawBase + 0x4ac);
    do {
      iVar12 = iVar12 + -1;
      *(int *)(iVar8 + iVar11) = *(int *)(iVar8 + iVar11) + iVar14;
      iVar11 = iVar11 + 0x24;
    } while (iVar12 != 0);
    DAT_00a207e8 = (int)DAT_00a20814 - *(int *)(iVar3 + 0x4ac);
    DAT_00a207ec = 0x1e129;
    DAT_00a207f0 = 0x10303;
    DAT_00a207f4 = 0x80000000;
    DAT_00a207f8 = 0xaaff;
    DAT_00a207fc = 0x2062000;
    DAT_00a20800 = 0x2000200;
    DAT_00a20804 = 0x100200;
    g_MapAvailable = 1;
    if (g_SelectedLevel == Level) {
      Map_ExpandRevealMask(DAT_00a20814,(char *)g_MapRevealMask);
    }
    else if ((&VisitedPlanets.Veldin)[g_SelectedLevel] == '\0') {
      memset(acStack_8040,0,0x8000);
      Map_ExpandRevealMask(DAT_00a20814,acStack_8040);
    }
    else {
      Map_ExpandRevealMask(DAT_00a20814,&DAT_0096ca34 + g_SelectedLevel * 0x8000);
    }
    if ((*(uint *)(param_1 + 0x34) & 0x80) == 0) {
      puVar13 = (undefined4 *)(iVar7 + *(int *)(iVar7 + 8));
      DAT_00a20718 = *puVar13;
      DAT_00a2071c = puVar13[1];
      DAT_00a20720 = puVar13[2];
      DAT_00a20724 = puVar13[3];
      DAT_00a20728 = puVar13[4];
      DAT_00a2072c = puVar13[5];
      DAT_00a20730 = puVar13[6];
      DAT_00a20734 = puVar13[7];
      DAT_00a20738 = puVar13[8];
      DAT_00a2073c = puVar13[9];
      DAT_00a20740 = puVar13[10];
      DAT_00a20744 = puVar13[0xb];
      DAT_00a20748 = puVar13[0xc];
      DAT_00a2074c = puVar13[0xd];
      DAT_00a20750 = puVar13[0xe];
      DAT_00a20754 = puVar13[0xf];
      DAT_00a20758 = puVar13[0x10];
      DAT_00a2075c = puVar13[0x11];
      DAT_00a20760 = puVar13[0x12];
      DAT_00a20764 = puVar13[0x13];
      DAT_00a20768 = puVar13[0x14];
      DAT_00a2076c = puVar13[0x15];
      DAT_00a20770 = puVar13[0x16];
      DAT_00a20774 = puVar13[0x17];
      DAT_00a20778 = puVar13[0x18];
      DAT_00a2077c = puVar13[0x19];
      DAT_00a20780 = puVar13[0x1a];
    }
    g_MapCurIndex = g_SelectedLevel;
    UpdateMissionDisplay(g_SelectedLevel,0);
  }
  iVar7 = DAT_00a207d0;
  sVar4 = g_MusicLoading;
  if ((g_MusicLoading == 0) && (DAT_00a207d0 != -1)) {
    puVar2 = (uint *)(&g_MapCacheId + DAT_00a207d0);
    DAT_00a207d0 = -1;
    DAT_00a52c7b = 0;
    (&g_MapCacheId)[iVar7] = *puVar2 ^ 0x1000;
  }
  if (sVar4 == 0) {
    iVar7 = Map_GetFreeCacheSlotCompact();
    lVar6 = (longlong)iVar7;
    if ((iVar7 != -1) && (uVar9 = Map_GetNextMapToPrefetch(), uVar9 != 0xffffffff)) {
      uVar10 = 0;
      if (Level + g_MapIsMapOMatic != 0) {
        uVar10 = 0x100;
      }
      if (uVar10 == uVar9) {
        iVar14 = (int)(lVar6 << 2);
        ReadIndexedBuffer
                  (*(undefined4 *)((int)&g_MapCacheBuf + iVar14),g_MapFileId,0,
                   g_MapFileSize,0);
        *(int *)((int)&g_MapCacheSize + iVar14) = g_MapFileSize;
      }
      else {
        if ((uVar9 & 0x100) == 0) {
          iVar14 = uVar9 * 8 + 0x10e9660;
        }
        else {
          iVar14 = (uVar9 ^ 0x100) * 8 + 0x10e96f8;
        }
        iVar3 = (int)(lVar6 << 2);
        idol::PRINT_m_LoadGameFile(*(uint *)((int)&g_MapCacheBuf + iVar3),"*pMapFile");
        DAT_00a52c7b = 1;
        *(int *)((int)&g_MapCacheSize + iVar3) = (*(int *)(iVar14 + 4) << 0xb) >> 4;
      }
      DAT_00a207d0 = iVar7;
      *(uint *)((int)&g_MapCacheId + (int)(lVar6 << 2)) = uVar9 | 0x1000;
    }
  }
  return 0;
}


// 0x014358c (0xc0 bytes)
/* [p2_pause] RefreshLevelMissionStatus + BuildMissionList
   [p2_pause] RefreshLevelMissionStatus + BuildMissionList
   [p2_pause] RefreshLevelMissionStatus + BuildMissionList */

undefined8 Missions_OnEnter(int param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  
  RefreshLevelMissionStatus();
  lVar3 = BuildMissionList(g_ScratchBuf,(uint *)0x0,g_ScratchBuf + 0x40,'\x01');
  *(int *)(param_1 + 0x7c) = (int)lVar3;
  piVar2 = (int *)(param_1 + 0x30 + g_SelectedLevel * 4);
  if (*piVar2 != -1) {
    iVar1 = *piVar2;
    DAT_0072af24 = g_ScratchBuf[iVar1];
    DAT_0072adc0 = g_ScratchBuf[iVar1 + 0x40];
  }
  return 0;
}


// 0x014364c (0x330 bytes)
/* [p2_pause] paired with DrawMissionsFrame; cycles level
   [p2_pause] paired with DrawMissionsFrame; cycles level
   [p2_pause] paired with DrawMissionsFrame; cycles level */

undefined8 Missions_Update(int param_1)

{
  int iVar1;
  int *piVar2;
  LevelId LVar3;
  uint uVar4;
  LevelId LVar5;
  LevelId LVar6;
  undefined8 uVar7;
  LevelId LVar9;
  int iVar10;
  longlong lVar8;
  int iVar11;
  
  LVar5 = g_SelectedLevel;
  if (*(int *)(g_currentMenuPage + 0x40) == param_1) {
    if (((g_Pad.pressedButton & 0xd00) == 0) || (g_unclosableMenu != 0)) {
      LVar6 = g_SelectedLevel;
      if ((g_Pad.pressedButton & 8) != 0) {
        for (LVar9 = g_SelectedLevel + Novalis;
            ((LVar6 = g_SelectedLevel, (int)LVar9 < 0x14 &&
             (LVar6 = LVar9, (&g_SeenPlanets.Veldin)[LVar9] == '\0')) && (Level != LVar9));
            LVar9 = LVar9 + Novalis) {
        }
      }
      g_SelectedLevel = LVar6;
      LVar9 = g_SelectedLevel;
      LVar6 = g_SelectedLevel;
      if ((g_Pad.pressedButton & 4) != 0) {
        do {
          LVar3 = LVar6 - Novalis;
          LVar9 = g_SelectedLevel;
          if (((int)LVar3 < 0) ||
             (LVar9 = LVar3, *(char *)((int)&DAT_0096ca08 + LVar6 + Kerwan) != '\0')) break;
          LVar6 = LVar3;
        } while (Level != LVar3);
      }
      g_SelectedLevel = LVar9;
      if (g_SelectedLevel != LVar5) {
        iVar10 = PlayMobySound(1,0x11,*(MobyInstance **)(param_1 + 0x14));
        RefreshLevelMissionStatus(iVar10);
      }
      uVar4 = g_Pad.pressedButton;
      iVar10 = *(int *)(param_1 + 0x7c);
      if (iVar10 != 0) {
        piVar2 = (int *)(param_1 + 0x30 + g_SelectedLevel * 4);
        iVar1 = *piVar2;
        if ((g_Pad.pressedButton & 0x1000) != 0) {
          iVar11 = iVar1 + iVar10 + -1;
          *piVar2 = iVar11 - (iVar11 / iVar10) * iVar10;
        }
        if ((uVar4 & 0x4000) != 0) {
          *piVar2 = (*piVar2 + 1) -
                    ((*piVar2 + 1) / *(int *)(param_1 + 0x7c)) * *(int *)(param_1 + 0x7c);
        }
        if (*piVar2 != iVar1) {
          PlayMobySound(1,0x11,*(MobyInstance **)(param_1 + 0x14));
        }
        if (((uVar4 & 0x5000) != 0) || (g_SelectedLevel != LVar5)) {
          lVar8 = BuildMissionList(g_ScratchBuf,(uint *)0x0,g_ScratchBuf + 0x40,'\x01');
          *(int *)(param_1 + 0x7c) = (int)lVar8;
          iVar10 = *(int *)(param_1 + 0x30 + g_SelectedLevel * 4);
          DAT_0072af24 = g_ScratchBuf[iVar10];
          DAT_0072adc0 = g_ScratchBuf[iVar10 + 0x40];
        }
      }
      if ((g_Pad.pressedButton & 0x10) != 0) {
        if (*(int *)(g_currentMenuPage + 0x38) != 0) {
          g_nextMenuPage = *(undefined4 *)(g_currentMenuPage + 0x38);
          return 0;
        }
        if (g_unclosableMenu == 0) {
          return 0xffffffffffffffff;
        }
      }
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
  }
  else {
    if ((int)g_SelectedLevel < 0x14) {
      *(undefined4 *)(param_1 + 0x30 + g_SelectedLevel * 4) = 0xffffffff;
    }
    uVar7 = 0;
  }
  return uVar7;
}


// 0x0143980 (0x2b0 bytes)
// strings: 00a0feec: 'None'

/* [p2_pause] edits 8-int array copied from UINT_ARRAY_0096c1dc
   [p2_pause] edits 8-int array copied from UINT_ARRAY_0096c1dc
   [p2_pause] edits 8-int array copied from UINT_ARRAY_0096c1dc */

undefined8 SlotConfig_Update(int param_1)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = g_Pad.pressedButton;
  iVar4 = *(int *)(param_1 + 0x50);
  sVar1 = *(short *)(*(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x48) + 6 +
                    *(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x3c) * 10);
  if ((g_Pad.pressedButton & 8) != 0) {
    uVar5 = iVar4 + 1;
    *(uint *)(param_1 + 0x50) =
         uVar5 + (((int)uVar5 >> 3) + (uint)((int)uVar5 < 0 && (uVar5 & 7) != 0)) * -8;
  }
  if ((uVar3 & 4) != 0) {
    uVar3 = *(int *)(param_1 + 0x50) + 7;
    *(uint *)(param_1 + 0x50) =
         uVar3 + (((int)uVar3 >> 3) + (uint)((int)uVar3 < 0 && (uVar3 & 7) != 0)) * -8;
  }
  if (*(int *)(param_1 + 0x50) != iVar4) {
    PlayMobySound(1,0x11,*(MobyInstance **)(param_1 + 0x14));
  }
  if (((sVar1 != 0) && ((&UnlockableItems.field0_0x0)[sVar1] != '\0')) &&
     ((g_Pad.pressedButton & pad_ConfirmButtonMask) != 0)) {
    if (CHAR_ARRAY_00a0feec.piece<168,2>() != -1) {
      CHAR_ARRAY_00a0feec.piece<168,2>() = CHAR_ARRAY_00a0feec.piece<168,2>() + 1;
    }
    if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec.piece<170,2>() <
        (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5)) / 600) {
      iVar4 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
      sVar2 = (short)(iVar4 >> 0x1f);
      CHAR_ARRAY_00a0feec.piece<170,2>() =
           ((short)(iVar4 / 600) + sVar2) - ((short)((short)(iVar4 / 0x2580000) + sVar2) >> 0xf);
    }
    CHAR_ARRAY_00a0feec.piece<172,4>() = CHAR_ARRAY_00a0feec.piece<172,4>() | 1 << (Level & 0x3f) | 0x80000000;
    for (iVar4 = 0; (iVar4 < 8 && (*(int *)(param_1 + 0x30 + iVar4 * 4) != (int)sVar1));
        iVar4 = iVar4 + 1) {
    }
    if (iVar4 < 8) {
      *(undefined4 *)(param_1 + 0x30 + iVar4 * 4) = 0;
    }
    iVar4 = *(int *)(param_1 + 0x50);
    uVar3 = iVar4 + 1;
    *(uint *)(param_1 + 0x50) =
         uVar3 + (((int)uVar3 >> 3) + (uint)((int)uVar3 < 0 && (uVar3 & 7) != 0)) * -8;
    *(int *)(param_1 + 0x30 + iVar4 * 4) = (int)sVar1;
  }
  return 0;
}


// 0x0143c30 (0x8c bytes)
/* [p2_pause] copies UINT_ARRAY_0096c1dc[8] into widget
   [p2_pause] copies UINT_ARRAY_0096c1dc[8] into widget
   [p2_pause] copies UINT_ARRAY_0096c1dc[8] into widget */

void SlotConfig_OnEnter(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 8;
  iVar5 = 0;
  do {
    puVar3 = (undefined4 *)(param_1 + 0x30 + iVar5);
    iVar4 = iVar4 + -1;
    puVar2 = (undefined4 *)((int)UINT_ARRAY_0096c1dc + iVar5);
    iVar5 = iVar5 + 4;
    *puVar3 = *puVar2;
  } while (iVar4 != 0);
  *(undefined4 *)(param_1 + 0x50) = 0;
  while ((iVar4 = *(int *)(param_1 + 0x50), *(int *)(param_1 + 0x30 + iVar4 * 4) != 0 && (iVar4 < 8)
         )) {
    *(int *)(param_1 + 0x50) = iVar4 + 1;
  }
  uVar1 = *(uint *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) =
       uVar1 + (((int)uVar1 >> 3) + (uint)((int)uVar1 < 0 && (uVar1 & 7) != 0)) * -8;
  return;
}


// 0x0143cbc (0x40 bytes)
/* [p2_pause] copies widget values back to UINT_ARRAY_0096c1dc
   [p2_pause] copies widget values back to UINT_ARRAY_0096c1dc
   [p2_pause] copies widget values back to UINT_ARRAY_0096c1dc */

void SlotConfig_OnExit(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    iVar2 = iVar2 + 1;
    *(undefined4 *)((int)UINT_ARRAY_0096c1dc + iVar1) = *(undefined4 *)(param_1 + 0x30 + iVar1);
    iVar1 = iVar1 + 4;
  } while (iVar2 < 8);
  return;
}


// 0x0143cfc (0x38 bytes)
/* [p2_pause] OnEnter: picks string list by UnlockableItems.heliPack
   [p2_pause] OnEnter: picks string list by UnlockableItems.heliPack
   [p2_pause] OnEnter: picks string list by UnlockableItems.heliPack */

undefined8 SelectPackItemList_OnEnter(int param_1)

{
  undefined *puVar1;
  
  if (UnlockableItems.heliPack == '\0') {
    puVar1 = &DAT_0072be38;
  }
  else {
    puVar1 = &DAT_0072be04;
  }
  *(undefined **)(param_1 + 0x34) = puVar1;
  return 0;
}


// 0x0143d34 (0x18 bytes)
/* [p2_pause] sets 0xa206e8=-1
   [p2_pause] sets 0xa206e8=-1
   [p2_pause] sets 0xa206e8=-1 */

undefined8 MapPage_OnEnter(void)

{
  g_MapCurIndex = -1;
  return 0;
}


// 0x0143d4c (0x28 bytes)
/* [p2_pause] OnEnter: Menu_InitStreamBuffers(1)
   [p2_pause] OnEnter: Menu_InitStreamBuffers(1)
   [p2_pause] OnEnter: Menu_InitStreamBuffers(1) */

undefined8 MenuText_OnEnterResetBuffers(void)

{
  Menu_InitStreamBuffers(1);
  return 0;
}


// 0x0143d74 (0x38 bytes)
/* [p2_pause] applies SfxVolume to g_soundGlobals.dialogVolume
   [p2_pause] applies SfxVolume to g_soundGlobals.dialogVolume
   [p2_pause] applies SfxVolume to g_soundGlobals.dialogVolume */

undefined8 SoundOptions_OnExit(void)

{
  uint uVar1;
  
  uVar1 = g_GameSettings.SfxVolume << 3;
  g_soundGlobals.dialogVolume =
       (float)(((int)uVar1 / 10 + ((int)(uVar1 | g_GameSettings.SfxVolume >> 0x1d) >> 0x1f)) -
              ((int)uVar1 >> 0x1f));
  return 0;
}


// 0x0143dac (0x2d8 bytes)
/* [p2_pause] paired with DrawSoundOptionsFrame
   [p2_pause] paired with DrawSoundOptionsFrame
   [p2_pause] paired with DrawSoundOptionsFrame */

undefined8 SoundOptions_Update(int param_1)

{
  int iVar1;
  int iVar2;
  dword dVar3;
  dword dVar4;
  dword dVar5;
  uint uVar6;
  uint uVar7;
  dword dVar8;
  
  uVar6 = g_Pad.pressedButton;
  if (((g_Pad.pressedButton & 0xd00) != 0) && (g_unclosableMenu == 0)) {
    return 1;
  }
  if ((g_Pad.pressedButton & 0x10) != 0) {
    if (*(int *)(g_currentMenuPage + 0x38) != 0) {
      g_nextMenuPage = *(undefined4 *)(g_currentMenuPage + 0x38);
      return 0;
    }
    if (g_unclosableMenu == 0) {
      return 0xffffffffffffffff;
    }
  }
  iVar1 = *(int *)(param_1 + 0x40);
  if ((g_Pad.pressedButton & 0x1000) != 0) {
    uVar7 = iVar1 + 1;
    *(uint *)(param_1 + 0x40) =
         uVar7 + (((int)uVar7 >> 1) + (uint)((int)uVar7 < 0 && (uVar7 & 1) != 0)) * -2;
  }
  if ((uVar6 & 0x4000) != 0) {
    uVar6 = *(int *)(param_1 + 0x40) + 1;
    *(uint *)(param_1 + 0x40) =
         uVar6 + (((int)uVar6 >> 1) + (uint)((int)uVar6 < 0 && (uVar6 & 1) != 0)) * -2;
  }
  if (((*(int *)(param_1 + 0x40) != iVar1) || (*(int *)(g_currentMenuPage + 0x80) != 0)) &&
     (PlayMobySound(1,0x11,*(MobyInstance **)(param_1 + 0x14)),
     (*(uint *)(param_1 + 0x30) & 0x20) != 0)) {
    g_SelectedLevel = *(undefined4 *)(ptr_GalacticMap + *(int *)(param_1 + 0x40) * 4);
  }
  dVar4 = g_GameSettings.SfxVolume;
  dVar3 = g_GameSettings.MusicVolume;
  dVar8 = g_GameSettings.MusicVolume;
  if ((g_Pad.unk0c0 & 0x2000) != 0) {
    dVar5 = g_GameSettings.SfxVolume;
    if ((*(int *)(param_1 + 0x40) == 0) &&
       (dVar5 = 0x400, (int)(g_GameSettings.SfxVolume + 3) < 0x400)) {
      dVar5 = g_GameSettings.SfxVolume + 3;
    }
    g_GameSettings.SfxVolume = dVar5;
    if ((*(int *)(param_1 + 0x40) == 1) &&
       (dVar8 = 0x400, (int)(g_GameSettings.MusicVolume + 3) < 0x400)) {
      dVar8 = g_GameSettings.MusicVolume + 3;
    }
  }
  g_GameSettings.MusicVolume = dVar8;
  if ((g_Pad.unk0c0 & 0x8000) != 0) {
    if (*(int *)(param_1 + 0x40) == 0) {
      dVar8 = g_GameSettings.SfxVolume - 3;
      g_GameSettings.SfxVolume = 0;
      if (0 < (int)dVar8) {
        g_GameSettings.SfxVolume = dVar8;
      }
    }
    if (*(int *)(param_1 + 0x40) == 1) {
      dVar8 = g_GameSettings.MusicVolume - 3;
      g_GameSettings.MusicVolume = 0;
      if (0 < (int)dVar8) {
        g_GameSettings.MusicVolume = dVar8;
      }
    }
  }
  if ((g_GameSettings.MusicVolume != dVar3) || (g_GameSettings.SfxVolume != dVar4)) {
    uVar6 = g_GameSettings.SfxVolume << 3;
    iVar2 = g_GameSettings.SfxVolume * 7;
    iVar1 = iVar2 / 10 + (iVar2 >> 0x1f);
    g_soundGlobals.sfxVolume =
         (float)(((int)uVar6 / 10 + ((int)(uVar6 | g_GameSettings.SfxVolume >> 0x1d) >> 0x1f)) -
                ((int)uVar6 >> 0x1f));
    iVar2 = iVar2 / 10 + (iVar2 >> 0x1f);
    g_soundGlobals.ambientVolume = (float)(iVar1 - (iVar1 >> 0x1f));
    g_soundGlobals.shellVolume = (float)(iVar2 - (iVar2 >> 0x1f));
    g_soundGlobals.musicVolume = (float)g_GameSettings.MusicVolume;
    g_soundGlobals.dialogVolume = (float)g_GameSettings.MusicVolume;
    g_soundGlobals.mpegVolume = (float)g_GameSettings.SfxVolume;
  }
  return 0;
}


// 0x0144084 (0x350 bytes)
undefined8 DrawSoundOptionsFrame(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar3;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = *(int *)(param_1 + 0x24) / 3 + (*(int *)(param_1 + 0x24) >> 0x1f);
  iVar1 = *(int *)(param_1 + 0x20) >> 1;
  iVar2 = iVar2 - (iVar2 >> 0x1f);
  iVar7 = iVar1 + 0x10;
  STUB_0006d704(0);
  uVar4 = 0x80ffa888;
  uVar5 = uVar4;
  if (*(int *)(param_1 + 0x40) == 0) {
    uVar5 = 0x8020ffff;
  }
  uVar3 = help_msg_string_by_index(STR_SOUND_EFFECTS_VOLUME);
  FontPrintMediumRight(iVar1 + 8,iVar2 + -8,uVar5,uVar3,0xffffffffffffffff);
  DrawFlatOverlay
            (iVar1 + 0x17,iVar2 + -8,*(int *)(param_1 + 0x20) + -0x3f,iVar2 + 8,0x80696969,0);
  iVar8 = iVar1 + 0x19;
  DrawFlatOverlay(iVar8,iVar2 + -6,*(int *)(param_1 + 0x20) + -0x41,iVar2 + 6,0x80383838,0);
  uVar6 = ((*(int *)(param_1 + 0x20) - iVar7) + -0x4a) * g_GameSettings.SfxVolume;
  uVar3 = GetIconFrameTex(0xe99e,8);
  DrawSprite2(uVar3,iVar8,iVar2 + -6,
                   iVar7 + ((int)uVar6 >> 10) + (uint)((int)uVar6 < 0 && (uVar6 & 0x3ff) != 0) + 8,
                   iVar2 + 5,0,0x13,0x35);
  iVar2 = iVar2 * 2;
  if (*(int *)(param_1 + 0x40) == 1) {
    uVar4 = 0x8020ffff;
  }
  uVar3 = help_msg_string_by_index(STR_MUSIC_VOLUME);
  FontPrintMediumRight(iVar1 + 8,iVar2 + -8,uVar4,uVar3,0xffffffffffffffff);
  DrawFlatOverlay
            (iVar1 + 0x17,iVar2 + -8,*(int *)(param_1 + 0x20) + -0x3f,iVar2 + 8,0x80696969,0);
  DrawFlatOverlay(iVar8,iVar2 + -6,*(int *)(param_1 + 0x20) + -0x41,iVar2 + 6,0x80383838,0);
  uVar6 = ((*(int *)(param_1 + 0x20) - iVar7) + -0x4a) * g_GameSettings.MusicVolume;
  uVar3 = GetIconFrameTex(0xe99e,9);
  DrawSprite2(uVar3,iVar8,iVar2 + -6,
                   iVar7 + ((int)uVar6 >> 10) + (uint)((int)uVar6 < 0 && (uVar6 & 0x3ff) != 0) + 8,
                   iVar2 + 5,0,0x13,0x35);
  STUB_0006d708();
  return 2;
}


// 0x01443d4 (0xa4 bytes)
// strings: 00a1000c: 'None'

/* [p2_pause] OnEnter of skill points list widget
   [p2_pause] OnEnter of skill points list widget
   [p2_pause] OnEnter of skill points list widget */

void SkillPoints_OnEnter(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < HelpLogPos) {
    iVar3 = 0;
    do {
      iVar2 = HelpLogPos;
      bVar1 = HelpData[(HelpLogPos - iVar4) + 0x49f];
      iVar4 = iVar4 + 1;
      *(undefined2 *)((int)&PTR_Elf64_Ehdr_0072b332 + iVar3) = 1;
      *(undefined2 *)((int)&DAT_0072b330 + iVar3) = *(undefined2 *)(&DAT_007208ce + (uint)bVar1 * 4)
      ;
      iVar3 = iVar3 + 0xc;
    } while (iVar4 < iVar2);
  }
  (&DAT_0072b330)[HelpLogPos * 6] = 0;
  return;
}


// 0x0144478 (0x8 bytes)
/* [p2_pause] returns 0
   [p2_pause] returns 0
   [p2_pause] returns 0 */

undefined8 SkillPoints_OnExit(void)

{
  return 0;
}


// 0x0144480 (0xc8 bytes)
/* [p2_pause] inits stream buffers, flags slots
   [p2_pause] inits stream buffers, flags slots
   [p2_pause] inits stream buffers, flags slots */

void MusicWidget_OnEnter(int param_1)

{
  int iVar1;
  int iVar2;
  
  Menu_InitStreamBuffers(1);
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  do {
    if ((*(int *)((int)&DAT_00a53098 + iVar1) != 0) &&
       (*(uint *)((int)&DAT_00a53098 + iVar1) < DAT_00a52cb8)) {
      *(uint *)((int)&DAT_00a5309c + iVar1) = *(uint *)((int)&DAT_00a5309c + iVar1) | 2;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 8;
  } while (iVar2 < 5);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (g_MusicLoading == 0) {
    *(undefined4 *)(param_1 + 0x50) = 1;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
  return;
}


// 0x0144548 (0x50 bytes)
/* [p2_pause] stops music, reinit buffers
   [p2_pause] stops music, reinit buffers
   [p2_pause] stops music, reinit buffers */

undefined8 MusicWidget_OnExit(int param_1)

{
  if ((g_MusicLoading != 0) && (*(int *)(param_1 + 0x50) == 1)) {
    music_StopLoad();
  }
  Menu_InitStreamBuffers(1);
  return 0;
}


// 0x0144598 (0x8c bytes)
/* [p2_pause] state machine on g_MusicLoading flag
   [p2_pause] state machine on g_MusicLoading flag
   [p2_pause] state machine on g_MusicLoading flag */

undefined8 MusicWidget_Update(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x50);
  if ((iVar1 < 2) && (-1 < iVar1)) {
    if (iVar1 < 1) {
      if (g_MusicLoading == 0) {
        *(undefined4 *)(param_1 + 0x50) = 1;
      }
    }
    else if (g_MusicLoading == 0) {
      *(undefined4 *)(param_1 + 0x50) = 2;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffb;
    }
  }
  return 0;
}


// 0x0144638 (0x874 bytes)
// strings: 0096c08c: 'None'

undefined8 DrawSkillPointsFrame(undefined **param_1)

{
  char cVar1;
  short sVar2;
  undefined **ppuVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar7;
  undefined8 uVar6;
  undefined *puVar8;
  short sVar9;
  longlong lVar10;
  int iVar11;
  undefined *puVar12;
  undefined8 uVar13;
  int iVar14;
  short sVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  GPiece<10> local_b0;
  short local_a6;
  
  ppuVar3 = *(undefined ***)(g_currentMenuPage + 0x40);
  if (g_JapaneseMode) {
    iVar11 = 0xe;
    puVar16 = &JapaneseGlyphs;
  }
  else {
    iVar11 = 0xc;
    puVar16 = &MediumWesternGlyphs;
  }
  uVar13 = 1;
  if (((uint)param_1[0xc] & 4) != 0) {
    if (g_JapaneseMode) {
      iVar11 = 0xe;
      puVar16 = &JapaneseGlyphs;
    }
    else {
      iVar11 = 0xe;
      puVar16 = &LargeWesternGlyphs;
      uVar13 = 3;
    }
  }
  if (((uint)param_1[0xc] & 8) != 0) {
    if (g_JapaneseMode) {
      iVar11 = 0xe;
      puVar16 = &JapaneseGlyphs;
      uVar13 = 1;
    }
    else {
      iVar11 = 10;
      puVar16 = &Glyphs;
      uVar13 = 2;
    }
  }
  uVar5 = idol_draw::PackCmd(0,1,0,1,0);
  SetGSReg(3,uVar5);
  uVar5 = idol_draw::Blend(1,5,4,0,0,0,0,1);
  SetGSReg(0x16,uVar5);
  STUB_0006d704(0);
  iVar14 = 0;
  if (*(short *)param_1[0xd] != 0) {
    iVar7 = 0;
    iVar14 = 0;
    do {
      iVar7 = iVar7 + 0xc;
      iVar14 = iVar14 + 1;
    } while (*(short *)(param_1[0xd] + iVar7) != 0);
  }
  if (((uint)param_1[0xc] & 0x10) == 0) {
    sVar15 = (short)((int)param_1[9] / (iVar14 + 1));
  }
  else {
    sVar15 = (short)iVar11 + 3;
  }
  sVar9 = (short)param_1[9] + -4;
  local_a6 = (sVar15 - (short)(iVar11 >> 1)) - (short)param_1[0x11];
  uVar13 = GetEffectTex(uVar13);
  puVar12 = (undefined *)0x0;
  sVar2 = *(short *)param_1[0xd];
  while (sVar2 != 0) {
    bVar4 = false;
    if ((ppuVar3 == param_1) && (param_1[0x10] == puVar12)) {
      bVar4 = true;
    }
    iVar11 = (int)puVar12 * 0xc;
    uVar5 = 0xffffffff80ffa888;
    if (((uint)param_1[0xc] & 2) == 0) {
      if (bVar4) {
        uVar5 = 0xffffffff80006060;
        if (*(short *)(param_1[0xd] + iVar11 + 2) != 0) {
          uVar5 = 0xffffffff8020ffff;
        }
      }
      else {
        uVar5 = 0xffffffff80303030;
        if (*(short *)(param_1[0xd] + iVar11 + 2) != 0) {
          uVar5 = 0xffffffff80ffa888;
        }
      }
    }
    if ((((uint)param_1[0xc] & 0x10000) == 0 && bVar4) && (local_a6 < 4)) {
      param_1[0x11] = param_1[0x11] + -4;
    }
    uVar6 = help_msg_string_by_index((int)*(short *)(param_1[0xd] + iVar11));
    uVar17 = 0x3ff0000000000000;
    if ((g_JapaneseMode == false) ||
       ((*(short *)(param_1[0xd] + iVar11) != 0x4ec7 &&
        (*(short *)(param_1[0xd] + iVar11) != 0x4ebd)))) {
      uVar18 = uVar17;
      if ((param_1 == &PTR_PTR_0072ba44) && ((1 < g_Language && (g_Language < 6)))) {
        uVar18 = 0x3feb333340000000;
      }
    }
    else {
      uVar18 = 0x3fecccccc0000000;
    }
    if (((*(short *)(param_1[0xd] + iVar11) == 0x4ec3) ||
        (*(short *)(param_1[0xd] + iVar11) == 0x4fe8)) && (g_Language == 2)) {
      uVar18 = 0x3feb333340000000;
    }
    if ((*(short *)(param_1[0xd] + iVar11) == 0x4fe8) && (g_Language == 2)) {
      uVar18 = 0x3fe99999a0000000;
    }
    if (bVar4) {
      DisableFontColors();
    }
    if (g_JapaneseMode == false) {
      FontPrintOptWestern(uVar18,local_b0,uVar5,uVar6,0xffffffffffffffff,uVar13,puVar16);
    }
    else {
      FontPrintOptJapanese(uVar18,local_b0,uVar5,uVar6,0xffffffffffffffff,uVar13,puVar16);
    }
    if (bVar4) {
      EnableFontColors();
    }
    if (((uint)param_1[0xc] & 0x200) != 0) {
      lVar10 = (longlong)local_a6;
      cVar1 = g_SkillPoints[(int)puVar12];
      DrawFlatOverlay(10,lVar10 + 4,0x14,lVar10 + 0xe,0x80ffa888,0);
      DrawFlatOverlay(0xb,lVar10 + 5,0x13,lVar10 + 0xd,DAT_00729840,0);
      if (cVar1 != '\0') {
        uVar6 = GetIconFrameTex(0xe99e,1);
        DrawSprite(uVar6,2,lVar10 + -9,0x1e,0x1e,0x80);
      }
    }
    iVar14 = g_Language;
    if (((uint)param_1[0xc] & 0x800) != 0) {
      lVar10 = (longlong)local_a6;
      iVar7 = *(int *)(param_1[0xd] + iVar11 + 4);
      DrawFlatOverlay(10,lVar10 + 4,0x14,lVar10 + 0xe,0x80ffa888,0);
      DrawFlatOverlay(0xb,lVar10 + 5,0x13,lVar10 + 0xd,DAT_00729840,0);
      if (iVar14 == iVar7) {
        uVar6 = GetIconFrameTex(0xe99e,1);
        DrawSprite(uVar6,2,lVar10 + -9,0x1e,0x1e,0x80);
      }
    }
    if (*(short *)(param_1[0xd] + iVar11 + 8) != 0) {
      uVar6 = help_msg_string_by_index((int)*(short *)(param_1[0xd] + iVar11 + 8));
      if (g_JapaneseMode == false) {
        FontPrintOptWestern(uVar17,local_b0,uVar5,uVar6,0xffffffffffffffff,uVar13,puVar16);
      }
      else {
        FontPrintOptJapanese(uVar17,local_b0,uVar5,uVar6,0xffffffffffffffff,uVar13,puVar16);
      }
      local_a6 = local_a6 + sVar15;
    }
    local_a6 = local_a6 + 8;
    if ((((uint)param_1[0xc] & 0x10000) == 0 && bVar4) && ((int)sVar9 < (int)local_a6)) {
      if (((uint)param_1[0xc] & 0x8000) == 0) {
        puVar8 = param_1[0x11] + 4;
      }
      else {
        puVar8 = param_1[0x11] + ((int)local_a6 - (int)sVar9);
      }
      param_1[0x11] = puVar8;
    }
    puVar12 = puVar12 + 1;
    sVar2 = *(short *)(param_1[0xd] + (int)puVar12 * 0xc);
  }
  STUB_0006d708();
  if (((uint)param_1[0xc] & 0x8000) == 0) {
    uVar13 = 2;
  }
  else {
    uVar13 = 1;
    param_1[0xc] = (undefined *)((uint)param_1[0xc] ^ 0x8000);
  }
  return uVar13;
}


// 0x0144ec0 (0x5cc bytes)
/* [p2_pause] button widget draw with icon frames
   [p2_pause] button widget draw with icon frames
   [p2_pause] button widget draw with icon frames */

undefined8 MenuButton_Draw(int param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  undefined uVar5;
  float fVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  undefined2 *puVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  puVar16 = *(undefined2 **)(param_1 + 0x48);
  iVar14 = *(int *)(*(int *)(param_1 + 0x14) + 0x78);
  iVar8 = *(int *)(g_currentMenuPage + 0x40);
  uVar11 = idol_draw::PackCmd(0,1,0,1,0x80);
  SetGSReg(3,uVar11);
  uVar11 = FUN_00502f98(1,5,0,0,0,0,0,0);
  SetGSReg(0x16,uVar11);
  STUB_0006d704(0);
  iVar15 = *(int *)(param_1 + 0x44);
  if (iVar15 < 2) {
    fVar6 = 0.0;
    dVar21 = (double)((*(float *)(iVar14 + 0x40) - DAT_00730ad8) * 0.5);
  }
  else {
    dVar21 = (double)*(float *)(param_1 + 0x34);
    fVar6 = DAT_00730ad8 +
            ((*(float *)(iVar14 + 0x40) - (float)(dVar21 * 2.0)) -
            DAT_00730ad8 * (float)(longlong)iVar15) / (float)(longlong)(iVar15 + -1);
  }
  dVar20 = (double)fVar6;
  if ((*(uint *)(param_1 + 0x30) & 2) == 0) {
    iVar15 = *(int *)(param_1 + 0x40);
    if (iVar15 < 2) {
      dVar19 = 0.0;
      dVar17 = (double)((*(float *)(iVar14 + 0x44) - DAT_00730adc) * 0.5);
    }
    else {
      dVar17 = (double)*(float *)(param_1 + 0x38);
      dVar19 = (double)(DAT_00730adc +
                       ((*(float *)(iVar14 + 0x44) - (float)(dVar17 * 2.0)) -
                       DAT_00730adc * (float)(longlong)iVar15) / (float)(longlong)(iVar15 + -1));
    }
  }
  else {
    dVar17 = (double)*(float *)(param_1 + 0x38);
    dVar19 = (double)(DAT_00730adc + 0.15);
  }
  iVar15 = *(int *)(param_1 + 0x24);
  if (iVar15 < *(int *)(param_1 + 0x20)) {
    iVar15 = *(int *)(param_1 + 0x20);
  }
  fVar6 = *(float *)(iVar14 + 0x44);
  if (fVar6 < *(float *)(iVar14 + 0x40)) {
    fVar6 = *(float *)(iVar14 + 0x40);
  }
  iVar14 = 0;
  dVar18 = (double)((float)(longlong)iVar15 / fVar6);
  dVar3 = (double)DAT_00730ad8 * dVar18;
  dVar4 = (double)DAT_00730adc * dVar18;
  if (0 < *(int *)(param_1 + 0x40)) {
    do {
      iVar15 = 0;
      dVar22 = dVar21;
      if (0 < *(int *)(param_1 + 0x44)) {
        do {
          iVar1 = (int)(dVar21 * dVar18);
          iVar2 = (int)(dVar17 * dVar18);
          iVar9 = (int)dVar3 + iVar1;
          iVar10 = (int)dVar4 + iVar2;
          if ((iVar8 == param_1) &&
             (*(int *)(param_1 + 0x3c) == ((int)puVar16 - *(int *)(param_1 + 0x48)) / 10)) {
            iVar12 = FUN_005c4988(((ulonglong)g_MainLoopFrames & 0x3f) - 0x20);
            DrawFlatOverlay
                      (iVar1 + -3,iVar2 + -3,iVar9 + 3,iVar10 + 3,
                       (iVar12 + 0x40) * 0x10202 | 0x80000000,1);
            DrawFlatOverlay(iVar1 + -2,iVar2 + -2,iVar9 + 2,iVar10 + 2,DAT_00729840,1);
          }
          if (puVar16[2] == 0) {
            uVar5 = (&UnlockableItems.field0_0x0)[(short)puVar16[3]];
          }
          else {
            uVar5 = (&g_MiscLevelFlags.Zoomerator)[(short)puVar16[3]];
          }
          if (uVar5 != '\0') {
            lVar13 = 0;
            if (puVar16[2] == 0) {
              sVar7 = puVar16[3];
              lVar13 = 0;
              if (((&DAT_00a52be0)[(&DAT_00721008)[sVar7 * 0x13]] == (int)sVar7) &&
                 ((*(uint *)(param_1 + 0x30) & 0x20) == 0)) {
                lVar13 = 1;
              }
              if (((int)lVar13 == 0) && ((&g_goldWeaponsArray.field0_0x0)[sVar7] != '\0')) {
                lVar13 = 4;
              }
              if ((DAT_00a52ce0 != 0) && ((*(uint *)(param_1 + 0x30) & 8) != 0)) {
                lVar13 = 2;
              }
              if ((DAT_00a52ce4 != 0) && ((*(uint *)(param_1 + 0x30) & 4) != 0)) {
                lVar13 = 2;
              }
            }
            uVar11 = GetIconFrameTex(*puVar16,(short)puVar16[1] + lVar13);
            Hud_DrawTexQuad_v2(uVar11,iVar1,iVar2,(int)dVar3,(int)dVar4,0x80);
          }
          iVar15 = iVar15 + 1;
          puVar16 = puVar16 + 5;
          dVar21 = (double)(float)(dVar21 + dVar20);
        } while (iVar15 < *(int *)(param_1 + 0x44));
      }
      iVar14 = iVar14 + 1;
      dVar17 = (double)(float)(dVar17 + dVar19);
      dVar21 = dVar22;
    } while (iVar14 < *(int *)(param_1 + 0x40));
  }
  STUB_0006d708();
  return 2;
}


// 0x014548c (0x34 bytes)
undefined8 ____Pause_SetEntryByHeroType(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = 3;
  if (g_heroType == '\x01') {
    uVar1 = 0;
  }
  *(undefined2 *)(*(int *)(param_1 + 0x34) + 2) = uVar1;
  return 0;
}


// 0x01454d0 (0x2e0 bytes)
/* [p2_pause] draw for MenuHero widget
   [p2_pause] draw for MenuHero widget
   [p2_pause] draw for MenuHero widget */

undefined8 MenuHero_Draw(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  GPiece<16> auVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  double dVar9;
  
  iVar5 = 0;
  iVar7 = 0;
  iVar6 = param_1;
  do {
    puVar8 = (uint *)(param_1 + 0x44 + iVar7);
    if ((((*puVar8 != 0) && (*(char *)(iVar6 + 0xa4) == '\0')) &&
        (*(int *)((int)&DAT_00730ae8 + iVar7) != 0)) &&
       (((iVar5 != 7 || (*(short *)(*puVar8 + 0xa6) != 0x4a)) ||
        (*(char *)(*(int *)(param_1 + 0x44) + 0x52) == *(char *)(*(int *)(param_1 + 0x44) + 0x53))))
       ) {
      if (iVar5 < 7) {
        if (iVar5 < 4) {
          if (0 < iVar5) {
LAB_001455a0:
            iVar2 = *(int *)(param_1 + 0x44);
            if (((*(char *)(iVar2 + 0x52) == -0x67) && (*(char *)(iVar2 + 0x53) == -0x67)) &&
               ((0x4c < *(byte *)(iVar2 + 0x50) && (*(byte *)(iVar2 + 0x50) < 0x92))))
            goto LAB_00145770;
          }
        }
        else if (4 < iVar5) goto LAB_001455a0;
      }
      else if (9 < iVar5 && iVar5 < 0xd) goto LAB_001455a0;
      dVar9 = (double)*(float *)(*puVar8 + 0x2c);
      if ((iVar5 == 7) && (*(short *)(*puVar8 + 0xa6) == 0x27a)) {
        bVar1 = *(byte *)(*(int *)(param_1 + 0x44) + 0x50);
        if ((bVar1 < 0x51) || (0x92 < bVar1)) goto LAB_00145770;
        auVar4 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar3 = storeVectorElementWordIndexed
                          (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,0x2c,
                           (ulonglong)*puVar8);
        *(undefined4 *)(*puVar8 + 0x2c & 0xfffffffc) = uVar3;
      }
      MB_AddToDrawList(*puVar8,1);
      *(float *)(*puVar8 + 0x2c) = (float)dVar9;
    }
LAB_00145770:
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + 1;
    iVar7 = iVar7 + 4;
    if (0x17 < iVar5) {
      return 4;
    }
  } while( true );
}


// 0x01457b0 (0x8 bytes)
undefined8 STUB_001457b0(...)

{
  return 0;
}


// 0x01457b8 (0x24 bytes)
/* [p2_pause] resets view rot (pi) and mobys
   [p2_pause] resets view rot (pi) and mobys
   [p2_pause] resets view rot (pi) and mobys */

undefined8 ItemView_OnEnter(int param_1)

{
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x40490fdb;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return 0;
}


// 0x01457dc (0x9c bytes)
/* [p2_pause] deletes item view mobys
   [p2_pause] deletes item view mobys
   [p2_pause] deletes item view mobys */

undefined8 ItemView_OnExit(int param_1)

{
  longlong lVar1;
  MobyInstance *pMVar2;
  
  pMVar2 = *(MobyInstance **)(param_1 + 0x44);
  if (pMVar2 != (MobyInstance *)0x0) {
    DeleteMoby(pMVar2);
    lVar1 = (longlong)worldUpdateTime;
    pMVar2->color = (int)((ulonglong)lVar1 >> 0x20);
    pMVar2->light = (int)lVar1;
    pMVar2 = (MobyInstance *)0x0;
  }
  *(MobyInstance **)(param_1 + 0x44) = pMVar2;
  pMVar2 = *(MobyInstance **)(param_1 + 0x48);
  if (pMVar2 != (MobyInstance *)0x0) {
    DeleteMoby(pMVar2);
    lVar1 = (longlong)worldUpdateTime;
    pMVar2->color = (int)((ulonglong)lVar1 >> 0x20);
    pMVar2->light = (int)lVar1;
    pMVar2 = (MobyInstance *)0x0;
  }
  *(MobyInstance **)(param_1 + 0x48) = pMVar2;
  return 0;
}


// 0x0145880 (0x30c bytes)
/* [p2_pause] creates item moby by oClass
   [p2_pause] creates item moby by oClass
   [p2_pause] creates item moby by oClass */

undefined8 ItemView_Update(int param_1)

{
  MOBY_OCLASSES oClass;
  int *piVar1;
  int iVar2;
  MobyInstance *moby;
  float fVar3;
  MOBY_OCLASSES MVar6;
  MobyInstance *pMVar5;
  longlong lVar4;
  
  MVar6 = ~RATCHET;
  if (*(int *)(param_1 + 0x44) != 0) {
    MVar6 = *(MOBY_OCLASSES *)(*(int *)(param_1 + 0x44) + 0xa6);
  }
  oClass = *(MOBY_OCLASSES *)
            (&DAT_0072103a +
            *(short *)(*(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x48) + 6 +
                      *(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x3c) * 10) * 0x4c);
  if ((oClass == ~RATCHET) || (MVar6 != ~RATCHET)) {
    if (oClass == ~RATCHET) {
      pMVar5 = *(MobyInstance **)(param_1 + 0x44);
      if (pMVar5 != (MobyInstance *)0x0) {
        DeleteMoby(pMVar5);
        lVar4 = (longlong)worldUpdateTime;
        pMVar5->color = (int)((ulonglong)lVar4 >> 0x20);
        pMVar5->light = (int)lVar4;
        pMVar5 = (MobyInstance *)0x0;
      }
      *(MobyInstance **)(param_1 + 0x44) = pMVar5;
    }
    else if (MVar6 != oClass) {
      if ((&MobyClassLookup)[(short)oClass] == -1) {
        pMVar5 = (MobyInstance *)0x0;
      }
      else {
        pMVar5 = CreateMoby(oClass);
        if (pMVar5 != (MobyInstance *)0x0) {
          pMVar5->updateDistance = -1;
          pMVar5->drawDistance = 0xff;
          pMVar5->enabled = '\x01';
          pMVar5->state = '\0';
          UpdateMobyTransform(pMVar5);
          MB_SetLights(pMVar5,0x202020,0xe,0xe,0);
        }
      }
      if (pMVar5 != (MobyInstance *)0x0) {
        pMVar5->modeBits = NONE;
        iVar2 = *(int *)(param_1 + 0x44);
        (pMVar5->pos).x = *(f32 *)(iVar2 + 0x10);
        (pMVar5->pos).y = *(f32 *)(iVar2 + 0x14);
        (pMVar5->pos).z = *(f32 *)(iVar2 + 0x18);
        (pMVar5->pos).w = *(f32 *)(iVar2 + 0x1c);
        (pMVar5->rotation).x = *(f32 *)(iVar2 + 0x40);
        (pMVar5->rotation).y = *(f32 *)(iVar2 + 0x44);
        piVar1 = (int *)pMVar5->pVar;
        (pMVar5->rotation).z = *(f32 *)(iVar2 + 0x48);
        (pMVar5->rotation).w = *(f32 *)(iVar2 + 0x4c);
        pMVar5->pUpdate = *(void **)(iVar2 + 0x74);
        *piVar1 = param_1;
      }
      moby = *(MobyInstance **)(param_1 + 0x44);
      if (moby != (MobyInstance *)0x0) {
        DeleteMoby(moby);
        lVar4 = (longlong)worldUpdateTime;
        moby->color = (int)((ulonglong)lVar4 >> 0x20);
        moby->light = (int)lVar4;
      }
      *(MobyInstance **)(param_1 + 0x44) = pMVar5;
    }
  }
  else {
    if ((&MobyClassLookup)[(short)oClass] == -1) {
      pMVar5 = (MobyInstance *)0x0;
    }
    else {
      pMVar5 = CreateMoby(oClass);
      if (pMVar5 != (MobyInstance *)0x0) {
        pMVar5->updateDistance = -1;
        pMVar5->drawDistance = 0xff;
        pMVar5->enabled = '\x01';
        pMVar5->state = '\0';
        UpdateMobyTransform(pMVar5);
        MB_SetLights(pMVar5,0x202020,0xe,0xe,0);
      }
    }
    if (pMVar5 != (MobyInstance *)0x0) {
      *(MobyInstance **)(param_1 + 0x44) = pMVar5;
      pMVar5->modeBits = NONE;
      piVar1 = (int *)pMVar5->pVar;
      (pMVar5->pos).x = GameCamera.posX + 6.0;
      (pMVar5->pos).y = GameCamera.posY;
      fVar3 = GameCamera.posZ;
      (pMVar5->rotation).z = 3.1415927;
      pMVar5->pUpdate = &PTR_ItemView_SpinMobyUpdate_007076f0;
      (pMVar5->pos).z = fVar3 - 0.3;
      *piVar1 = param_1;
    }
  }
  return 0;
}


// 0x0145b8c (0x14c bytes)
/* [p2_pause] prints STR_USES_NO_AMMO etc
   [p2_pause] prints STR_USES_NO_AMMO etc
   [p2_pause] prints STR_USES_NO_AMMO etc */

undefined8 ItemView_Draw(int param_1)

{
  undefined8 uVar1;
  GPiece<32> local_30;
  
  if ((&UnlockableItems.field0_0x0)
      [*(short *)(*(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x48) + 6 +
                 *(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x3c) * 10)] == '\0') {
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 0x44) == 0) {
    STUB_0006d704(0);
    uVar1 = help_msg_string_by_index(STR_USES_NO_AMMO);
    FontPrintMediumOpt(local_30,0x80ffa888,uVar1,0xffffffffffffffff);
    STUB_0006d708();
    uVar1 = 2;
  }
  else {
    MB_AddToDrawList(*(int *)(param_1 + 0x44),1);
    if (*(int *)(param_1 + 0x48) != 0) {
      MB_AddToDrawList(*(int *)(param_1 + 0x48),1);
    }
    uVar1 = 8;
  }
  return uVar1;
}


// 0x0145ce0 (0x44 bytes)
/* [p2_pause] moby callback: rotates
   [p2_pause] moby callback: rotates
   [p2_pause] moby callback: rotates */

void ItemView_SpinMobyUpdate(int param_1)

{
  double dVar1;
  
  dVar1 = (double)FastWrapRot(*(float *)(param_1 + 0x48),0.01);
  *(float *)(param_1 + 0x48) = (float)dVar1;
  return;
}


// 0x0145d28 (0x648 bytes)
/* [p2_pause] loads gadget model, creates mobys
   [p2_pause] loads gadget model, creates mobys
   [p2_pause] loads gadget model, creates mobys */

undefined8 WeaponView_Update(int param_1)

{
  f32 fVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  longlong lVar9;
  MobyInstance *pMVar11;
  longlong lVar10;
  int iVar12;
  int oClass;
  double dVar13;
  
  iVar12 = -1;
  sVar3 = *(short *)(*(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x48) + 6 +
                    *(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x3c) * 10);
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar12 = (int)*(short *)(*(int *)(param_1 + 0x44) + 0xa6);
  }
  iVar7 = (int)sVar3;
  oClass = (&DAT_00721010)[iVar7 * 0x13];
  if (sVar3 == 0x18) {
    oClass = 0x1df;
  }
  dVar13 = (double)FastWrapRot(*(float *)(param_1 + 0x38),0.01);
  iVar4 = (&DAT_00721008)[iVar7 * 0x13];
  bVar8 = false;
  *(float *)(param_1 + 0x38) = (float)dVar13;
  piVar6 = g_pIdolDraw;
  iVar7 = (&DAT_00721008)[iVar7 * 0x13];
  if (((iVar4 != 2) && (iVar7 != 3)) && (iVar7 != 1)) {
    bVar8 = true;
  }
  if (sVar3 == 0x18) {
    bVar8 = false;
  }
  iVar4 = *(int *)(param_1 + 0x34);
  uVar5 = *(uint *)(param_1 + 0x30);
  if (iVar4 < 2) {
    if (-1 < iVar4) {
      if (iVar4 < 1) {
        *(undefined4 *)(param_1 + 0x34) = 1;
      }
      else if (oClass != -1) {
        *(undefined4 *)(param_1 + 0x34) = 2;
      }
    }
  }
  else if (iVar4 < 3) {
    if (*(char *)((int)g_pIdolDraw + 0x11) == -0x7f) {
      if (((uint)g_pIdolDraw[5] >> 1 & 1) == 0) {
        (*(code *)**(undefined4 **)(*g_pIdolDraw + 0x18))(g_pIdolDraw);
      }
      (*(code *)**(undefined4 **)(*piVar6 + 0x18))(piVar6);
      piVar6[0x6a3] = piVar6[0x6a3] + 2;
    }
    if (oClass == -1) {
      *(undefined4 *)(param_1 + 0x34) = 1;
    }
    else {
      if (bVar8) {
        if ((g_CurrentWeapon != 0) && (oClass != g_CurrentWeapon)) {
          Hero_KillGadget(0,0);
        }
        if ((oClass != DAT_00a52cc8) ||
           (MobyClasses[(byte)(&MobyClassLookup)[oClass]] == (MobyClass *)0x0)) {
          LoadGadgetModel(oClass,(DAT_00a52cc4 == 0));
          DAT_00a52cf0 = g_GadgetBufferSlot;
          DAT_00a52ccc = oClass;
          DAT_00a52cec = oClass;
          MobyClasses[(byte)(&MobyClassLookup)[oClass]]->sound_cnt = '\0';
        }
      }
      if ((&MobyClassLookup)[oClass] == -1) {
        pMVar11 = (MobyInstance *)0x0;
      }
      else {
        pMVar11 = CreateMoby((MOBY_OCLASSES)oClass);
        if (pMVar11 != (MobyInstance *)0x0) {
          pMVar11->updateDistance = -1;
          pMVar11->drawDistance = 0xff;
          pMVar11->enabled = '\x01';
          pMVar11->state = '\0';
          UpdateMobyTransform(pMVar11);
          MB_SetLights(pMVar11,0x202020,0xe,0xe,0);
        }
      }
      lVar10 = 1;
      if (sVar3 == 2) {
        lVar10 = 6;
      }
      if (pMVar11 != (MobyInstance *)0x0) {
        if ((bVar8) && ((&g_goldWeaponsArray.field0_0x0)[sVar3] != '\0')) {
          Hero_SetLightsFromMoby(pMVar11,*(undefined4 *)(param_1 + 0x14));
        }
        *(MobyInstance **)(param_1 + 0x44) = pMVar11;
        pMVar11->modeBits = NONE;
        iVar12 = (int)((longlong)sVar3 << 5);
        if ((uVar5 & 1) == 0) {
          fVar2 = *(float *)(&DAT_0073818c + iVar12);
        }
        else {
          fVar2 = *(float *)(&DAT_00738188 + iVar12);
        }
        piVar6 = (int *)pMVar11->pVar;
        (pMVar11->pos).x = GameCamera.posX + fVar2;
        (pMVar11->pos).y = GameCamera.posY + *(float *)(&DAT_00738190 + iVar12);
        (pMVar11->pos).z = GameCamera.posZ + *(float *)(&DAT_00738194 + iVar12);
        (pMVar11->rotation).x = *(f32 *)(&DAT_00738198 + iVar12);
        fVar1 = *(f32 *)(&DAT_0073819c + iVar12);
        (pMVar11->rotation).z = 3.1415927;
        (pMVar11->rotation).y = fVar1;
        pMVar11->pUpdate = &PTR_WeaponView_MobyUpdate_00707708;
        *piVar6 = param_1;
        piVar6[3] = (int)sVar3;
        lVar9 = lVar10;
        if ((int)(pMVar11->pClass->seq_cnt - 1) <= (int)lVar10) {
          lVar9 = (ulonglong)pMVar11->pClass->seq_cnt - 1;
        }
        MB_SetAnimationNoBlend(pMVar11,lVar9,0);
      }
      if (iVar7 == 3 && pMVar11 != (MobyInstance *)0x0) {
        if ((&MobyClassLookup)[g_BackpackMobyClass] == -1) {
          pMVar11 = (MobyInstance *)0x0;
        }
        else {
          pMVar11 = CreateMoby((MOBY_OCLASSES)g_BackpackMobyClass);
          if (pMVar11 != (MobyInstance *)0x0) {
            pMVar11->updateDistance = -1;
            pMVar11->drawDistance = 0xff;
            pMVar11->enabled = '\x01';
            pMVar11->state = '\0';
            UpdateMobyTransform(pMVar11);
            MB_SetLights(pMVar11,0x202020,0xe,0xe,0);
          }
        }
        if (pMVar11 != (MobyInstance *)0x0) {
          pMVar11->modeBits = NONE;
          iVar12 = *(int *)(param_1 + 0x44);
          (pMVar11->pos).x = *(f32 *)(iVar12 + 0x10);
          (pMVar11->pos).y = *(f32 *)(iVar12 + 0x14);
          (pMVar11->pos).z = *(f32 *)(iVar12 + 0x18);
          (pMVar11->pos).w = *(f32 *)(iVar12 + 0x1c);
          (pMVar11->rotation).x = *(f32 *)(iVar12 + 0x40);
          (pMVar11->rotation).y = *(f32 *)(iVar12 + 0x44);
          (pMVar11->rotation).z = *(f32 *)(iVar12 + 0x48);
          (pMVar11->rotation).w = *(f32 *)(iVar12 + 0x4c);
          *(MobyInstance **)(param_1 + 0x48) = pMVar11;
          piVar6 = (int *)pMVar11->pVar;
          pMVar11->pUpdate = &PTR_WeaponView_MobyUpdate_00707708;
          *piVar6 = param_1;
          piVar6[3] = (int)sVar3;
          if ((int)(pMVar11->pClass->seq_cnt - 1) <= (int)lVar10) {
            lVar10 = (ulonglong)pMVar11->pClass->seq_cnt - 1;
          }
          MB_SetAnimationNoBlend(pMVar11,lVar10,0);
        }
      }
      *(undefined4 *)(param_1 + 0x34) = 3;
    }
  }
  else if ((iVar4 < 4) && (iVar12 != oClass)) {
    pMVar11 = *(MobyInstance **)(param_1 + 0x44);
    if (pMVar11 != (MobyInstance *)0x0) {
      DeleteMoby(pMVar11);
      lVar10 = (longlong)worldUpdateTime;
      pMVar11->color = (int)((ulonglong)lVar10 >> 0x20);
      pMVar11->light = (int)lVar10;
      pMVar11 = (MobyInstance *)0x0;
    }
    *(MobyInstance **)(param_1 + 0x44) = pMVar11;
    pMVar11 = *(MobyInstance **)(param_1 + 0x48);
    if (pMVar11 != (MobyInstance *)0x0) {
      DeleteMoby(pMVar11);
      lVar10 = (longlong)worldUpdateTime;
      pMVar11->color = (int)((ulonglong)lVar10 >> 0x20);
      pMVar11->light = (int)lVar10;
      pMVar11 = (MobyInstance *)0x0;
    }
    *(MobyInstance **)(param_1 + 0x48) = pMVar11;
    *(undefined4 *)(param_1 + 0x34) = 2;
  }
  return 0;
}


// 0x0146370 (0xb4 bytes)
/* [p2_pause] draws weapon mobys if unlocked
   [p2_pause] draws weapon mobys if unlocked
   [p2_pause] draws weapon mobys if unlocked */

undefined8 WeaponView_Draw(int param_1)

{
  undefined8 uVar1;
  
  if ((&UnlockableItems.field0_0x0)
      [*(short *)(*(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x48) + 6 +
                 *(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x3c) * 10)] == '\0') {
    uVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x44) != 0) {
      MB_AddToDrawList(*(int *)(param_1 + 0x44),1);
    }
    if (*(int *)(param_1 + 0x48) != 0) {
      MB_AddToDrawList(*(int *)(param_1 + 0x48),1);
    }
    uVar1 = 8;
  }
  return uVar1;
}


// 0x0146440 (0x1b8 bytes)
/* [p2_pause] moby callback set by WeaponView_Update
   [p2_pause] moby callback set by WeaponView_Update
   [p2_pause] moby callback set by WeaponView_Update */

void WeaponView_MobyUpdate(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar5 = **(int **)(param_1 + 0x78);
  iVar7 = (*(int **)(param_1 + 0x78))[3] * 0x20;
  uVar6 = *(uint *)(iVar5 + 0x30);
  fVar1 = *(float *)(iVar5 + 0x38);
  *(float *)(param_1 + 0x48) = fVar1;
  if ((uVar6 & 1) == 0) {
    fVar4 = *(float *)(&DAT_0073818c + iVar7);
  }
  else {
    fVar4 = *(float *)(&DAT_00738188 + iVar7);
  }
  fVar4 = GameCamera.posX + fVar4;
  *(float *)(param_1 + 0x10) = fVar4;
  fVar12 = GameCamera.posY + *(float *)(&DAT_00738190 + iVar7);
  *(float *)(param_1 + 0x14) = fVar12;
  *(float *)(param_1 + 0x18) = GameCamera.posZ + *(float *)(&DAT_00738194 + iVar7);
  fVar8 = fVar1 + 1.5707963;
  fVar2 = *(float *)(&DAT_007381a4 + iVar7);
  fVar3 = *(float *)(&DAT_007381a0 + iVar7);
  fVar9 = fVar8;
  if (3.1415925 - fVar8 <= fVar8) {
    fVar9 = 3.1415925 - fVar8;
  }
  if (fVar9 <= -3.1415925 - fVar8) {
    fVar9 = -3.1415925 - fVar8;
  }
  fVar8 = fVar9 * fVar9;
  fVar10 = fVar8 * fVar8 * fVar9;
  fVar11 = fVar8 * fVar10;
  fVar9 = fVar9 + fVar8 * fVar9 * -0.16666657 + fVar10 * 0.0083330255 + fVar11 * -0.0001980741 +
          fVar8 * fVar11 * 2.601887e-06;
  fVar8 = fVar1;
  if (3.1415925 - fVar1 <= fVar1) {
    fVar8 = 3.1415925 - fVar1;
  }
  if (fVar8 <= -3.1415925 - fVar1) {
    fVar8 = -3.1415925 - fVar1;
  }
  fVar11 = fVar8 * fVar8;
  fVar1 = fVar11 * fVar11 * fVar8;
  fVar10 = fVar11 * fVar1;
  fVar1 = fVar8 + fVar11 * fVar8 * -0.16666657 + fVar1 * 0.0083330255 + fVar10 * -0.0001980741 +
          fVar11 * fVar10 * 2.601887e-06;
  *(float *)(param_1 + 0x10) = fVar1 * -fVar2 + fVar9 * fVar3 + fVar4;
  *(float *)(param_1 + 0x14) = fVar12 + (fVar1 * fVar3 - fVar9 * -fVar2);
  return;
}


// 0x01465f8 (0x108 bytes)
/* [p2_pause] input handler restoring g_SelectedLevel
   [p2_pause] input handler restoring g_SelectedLevel
   [p2_pause] input handler restoring g_SelectedLevel */

undefined8 PlanetInfo_Update(int param_1)

{
  if ((g_Pad.pressedButton & 0xd00) != 0) {
    if ((*(uint *)(param_1 + 0x30) & 0x20) != 0) {
      g_SelectedLevel = Level;
    }
    return 0xffffffffffffffff;
  }
  if ((g_Pad.pressedButton & 0x10) != 0) {
    if ((*(uint *)(param_1 + 0x30) & 0x20) != 0) {
      g_SelectedLevel = Level;
    }
    if (*(int *)(g_currentMenuPage + 0x38) != 0) {
      g_nextMenuPage = *(undefined4 *)(g_currentMenuPage + 0x38);
      return 0;
    }
    if (g_unclosableMenu == 0) {
      return 0xffffffffffffffff;
    }
  }
  if ((g_Pad.pressedButton & DAT_00902ed8) != 0) {
    g_memcardGameSaved = 0;
    g_newlevelnum = 0xffffffff;
    g_loadingPlanet = 1;
    g_CutscenePlaying = 1;
  }
  return 0;
}


// 0x0146708 (0x27c bytes)
/* [p2_pause] draw
   [p2_pause] draw
   [p2_pause] draw */

undefined8 PlanetInfo_Draw(int param_1)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  GPiece<24> local_50;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x24);
  uVar6 = STUB_0006d704();
  if (g_Language < 4) {
    uVar7 = 0x3ff0000000000000;
    if (g_Language < 0) goto LAB_001467e8;
  }
  else {
    uVar6 = 0x3fecccccc0000000;
    uVar7 = uVar6;
    if ((g_Language < 5) || (g_Language < 6)) goto LAB_001467e8;
  }
  uVar7 = 0x3ff0000000000000;
LAB_001467e8:
  uVar6 = idol_draw::Blend(uVar6,1,5,4,0,0,0,0,1);
  SetGSReg(0x16,uVar6);
  uVar6 = help_msg_string_by_index(STR_ARE_YOU_SURE_YOU_0x4F6D);
  FontPrintMediumOpt(local_50,0x80ffa888,uVar6,0xffffffffffffffff);
  uVar6 = help_msg_string_by_index(STR_QUIT_GAME_2);
  FontPrintCenterScaled
            (uVar7,((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0),iVar2 + -0x40,
             0x80ffa888,uVar6,0xffffffffffffffff);
  pcVar3 = (char *)help_msg_string_by_index(STR_NO);
  iVar4 = FontLen(pcVar3,-1);
  pcVar3 = (char *)help_msg_string_by_index(STR_YES_3);
  iVar5 = FontLen(pcVar3,-1);
  if (iVar5 < iVar4) {
    iVar5 = iVar4;
  }
  iVar5 = *(int *)(param_1 + 0x20) - iVar5 >> 1;
  uVar6 = help_msg_string_by_index(STR_NO);
  FontPrintMediumLeft(iVar5,iVar2 + -0x28,0x80ffa888,uVar6,0xffffffffffffffff);
  uVar6 = help_msg_string_by_index(STR_YES_3);
  FontPrintMediumLeft(iVar5,iVar2 + -0x14,0x80ffa888,uVar6,0xffffffffffffffff);
  STUB_0006d708();
  return 2;
}


// 0x0146984 (0x128 bytes)
/* [p2_pause] creates GOLD_BOLT moby
   [p2_pause] creates GOLD_BOLT moby
   [p2_pause] creates GOLD_BOLT moby */

undefined8 GoldBoltWidget_SpawnMoby(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  MobyInstance *pMVar4;
  
  if (DAT_00a3592e == -1) {
    pMVar4 = (MobyInstance *)0x0;
  }
  else {
    pMVar4 = CreateMoby(GOLD_BOLT);
    if (pMVar4 != (MobyInstance *)0x0) {
      pMVar4->updateDistance = -1;
      pMVar4->drawDistance = 0xff;
      pMVar4->enabled = '\x01';
      pMVar4->state = '\0';
      UpdateMobyTransform(pMVar4);
      MB_SetLights(pMVar4,0x202020,0xe,0xe,0);
    }
  }
  if (pMVar4 != (MobyInstance *)0x0) {
    *(MobyInstance **)(param_1 + 0x44) = pMVar4;
    pMVar4->modeBits = NONE;
    piVar1 = (int *)pMVar4->pVar;
    (pMVar4->pos).x = GameCamera.posX + DAT_00730b60;
    (pMVar4->pos).y = GameCamera.posY + DAT_00730b64;
    fVar3 = GameCamera.posZ;
    fVar2 = DAT_00730b68;
    (pMVar4->rotation).y = -1.9;
    pMVar4->pUpdate = &PTR_GoldBolt_SpinMobyUpdate_00707740;
    (pMVar4->pos).z = fVar3 - fVar2;
    *piVar1 = param_1;
  }
  return 0;
}


// 0x0146aac (0x68 bytes)
/* [p2_pause] deletes widget moby
   [p2_pause] deletes widget moby
   [p2_pause] deletes widget moby */

undefined8 GoldBoltWidget_DeleteMoby(int param_1)

{
  longlong lVar1;
  MobyInstance *moby;
  
  moby = *(MobyInstance **)(param_1 + 0x44);
  if (moby != (MobyInstance *)0x0) {
    DeleteMoby(moby);
    lVar1 = (longlong)worldUpdateTime;
    moby->color = (int)((ulonglong)lVar1 >> 0x20);
    moby->light = (int)lVar1;
    moby = (MobyInstance *)0x0;
  }
  *(MobyInstance **)(param_1 + 0x44) = moby;
  return 0;
}


// 0x0146b14 (0x530 bytes)
/* [p2_pause] gold bolt page update/text
   [p2_pause] gold bolt page update/text
   [p2_pause] gold bolt page update/text */

undefined8 GoldBoltWidget_Update(int param_1)

{
  undefined4 uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char *pcVar7;
  char *__dest;
  size_t sVar8;
  longlong lVar5;
  undefined8 uVar6;
  int iVar9;
  longlong lVar10;
  int iVar11;
  short sVar12;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  longlong lVar13;
  ulonglong in_LR;
  
  uVar3 = ZEXT48(&stack0x00000000);
  puVar2 = (ulonglong *)(uVar3 - 0x170);
  *puVar2 = uVar3;
  puVar2[0x30] = in_LR;
  puVar2[0x2d] = unaff_r31;
  iVar9 = *(int *)(param_1 + 0x44);
  puVar2[0x2c] = unaff_r30;
  puVar2[0x2b] = unaff_r29;
  puVar2[0x2a] = unaff_r28;
  puVar2[0x29] = unaff_r27;
  puVar2[0x28] = unaff_r26;
  puVar2[0x27] = unaff_r25;
  puVar2[0x26] = unaff_r24;
  puVar2[0x25] = unaff_r23;
  puVar2[0x24] = unaff_r22;
  puVar2[0x23] = unaff_r21;
  puVar2[0x22] = unaff_r20;
  if (iVar9 != 0) {
    MB_AddToDrawList(iVar9,1);
  }
  STUB_0006d704(0);
  iVar9 = *(int *)(param_1 + 0x20);
  *(undefined2 *)(puVar2 + 0xe) = 0;
  *(undefined2 *)((int)puVar2 + 0x7a) = 0;
  uVar4 = (longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffff;
  sVar12 = (short)uVar4 - ((short)(uVar4 >> 0x10) >> 0xf);
  *(undefined2 *)((int)puVar2 + 0x74) = 8;
  *(undefined2 *)((int)puVar2 + 0x7c) = 0;
  *(undefined2 *)((int)puVar2 + 0x7e) = 0;
  *(undefined2 *)(puVar2 + 0x10) = 0x10;
  *(undefined2 *)((int)puVar2 + 0x82) = 5;
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined2 *)((int)puVar2 + 0x84) = 0;
  lVar13 = uVar3 - 0xe8;
  *(undefined2 *)((int)puVar2 + 0x86) = 0;
  *(short *)((int)puVar2 + 0x72) = (short)uVar1;
  *(short *)((int)puVar2 + 0x76) = sVar12;
  *(short *)(puVar2 + 0xf) = (short)(sVar12 + 8 >> 1);
  pcVar7 = (char *)help_msg_string_by_index(STR_GOLD_BOLTS_2);
  __dest = (char *)lVar13;
  strcpy(__dest,pcVar7);
  if ((g_Language == 3) && (pcVar7 = strchr(__dest,0x2d), pcVar7 != (char *)0x0)) {
    sVar8 = strlen(__dest);
    lVar10 = (longlong)(int)sVar8;
    lVar5 = (uVar3 - 0x170) + lVar10;
    if (ZEXT48(pcVar7) < (lVar5 + 0x88U & 0xffffffff)) {
      do {
        lVar10 = lVar10 + -1;
        sVar8 = (size_t)lVar10;
        uVar4 = lVar5 + 0x87;
        *(undefined1 *)((int)lVar5 + 0x89) = *(undefined1 *)((int)lVar5 + 0x88);
        lVar5 = lVar5 + -1;
      } while (ZEXT48(pcVar7) < (uVar4 & 0xffffffff));
    }
    *(undefined1 *)((int)puVar2 + sVar8 + 0x89) = 0x20;
  }
  FontPrintMediumOpt(uVar3 - 0x100,0x8000c0c0,lVar13,0xffffffffffffffff);
  *(undefined2 *)(puVar2 + 0xf) = 0x2b;
  *(undefined2 *)((int)puVar2 + 0x7a) = 0x6e;
  *(ushort *)((int)puVar2 + 0x82) = *(ushort *)((int)puVar2 + 0x82) ^ 4;
  FontPrintMediumOpt(uVar3 - 0x100,0x8000c0c0,lVar13,0xffffffffffffffff);
  iVar9 = DAT_0072984c + 200;
  iVar11 = DAT_00729850 + 0x59;
  uVar6 = help_msg_string_by_index(STR_FOUND);
  FontPrintMediumRight(iVar9,iVar11,0x80000000,uVar6,0xffffffffffffffff);
  iVar11 = DAT_0072984c + 200;
  iVar9 = DAT_00729850 + 0x72;
  uVar6 = help_msg_string_by_index(STR_USED);
  FontPrintMediumRight(iVar11,iVar9,0x80000000,uVar6,0xffffffffffffffff);
  iVar11 = DAT_0072984c + 200;
  iVar9 = DAT_00729850 + 0x90;
  uVar6 = help_msg_string_by_index(STR_REMAIN);
  FontPrintMediumRight(iVar11,iVar9,0x80000000,uVar6,0xffffffffffffffff);
  uVar6 = help_msg_string_by_index(STR_FOUND);
  FontPrintMediumRight(200,0x59,0x80ffa888,uVar6,0xffffffffffffffff);
  uVar6 = help_msg_string_by_index(STR_USED);
  FontPrintMediumRight(200,0x72,0x80ffa888,uVar6,0xffffffffffffffff);
  uVar6 = help_msg_string_by_index(STR_REMAIN);
  FontPrintMediumRight(200,0x90,0x80ffa888,uVar6,0xffffffffffffffff);
  iVar9 = MB_CountGoldBolts();
  snprintf(__dest,"%d",iVar9);
  FontPrintLargeRight
            (DAT_0072984c + 0xf0,DAT_00729850 + 0x59,0x80000000,lVar13,0xffffffffffffffff);
  FontPrintLargeRight(0xf0,0x59,0x80ffa888,lVar13,0xffffffffffffffff);
  iVar9 = MB_CountGoldWeapons();
  snprintf(__dest,"%d",(int)((longlong)iVar9 << 2));
  FontPrintLargeRight
            (DAT_0072984c + 0xf0,DAT_00729850 + 0x72,0x80000000,lVar13,0xffffffffffffffff);
  FontPrintLargeRight(0xf0,0x72,0x80ffa888,lVar13,0xffffffffffffffff);
  iVar9 = MB_GetUnspentGoldBolts();
  snprintf(__dest,"%d",iVar9);
  FontPrintLargeRight
            (DAT_0072984c + 0xf0,DAT_00729850 + 0x90,0x80000000,lVar13,0xffffffffffffffff);
  FontPrintLargeRight(0xf0,0x90,0x80ffa888,lVar13,0xffffffffffffffff);
  DrawFlatOverlay
            (DAT_0072984c + 0xd0,DAT_00729850 + 0x89,DAT_0072984c + 0xf2,DAT_00729850 + 0x8c,
             0x80000000,0);
  DrawFlatOverlay(0xd0,0x89,0xf2,0x8c,0x80805444,0);
  STUB_0006d708();
  return 8;
}


// 0x0147044 (0x2a8 bytes)
// strings: 00a0ca34: 'None' | 006535bc: '%s %d %s %d'

undefined8 Update_FoundGBsShipMenu(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  char acStack_140 [264];
  
  if (DAT_00a534f0 == '\0') {
    DAT_00a534f8 = *(int *)(g_pIdolDraw + 0xc) == 0;
    DAT_00a534f0 = '\x01';
  }
  if (DAT_00a534f8 == '\0') {
    pfVar3 = (float *)&DAT_00730b7c;
  }
  else {
    pfVar3 = (float *)&DAT_00730b70;
  }
  iVar4 = *(int *)(param_1 + 0x44);
  *(float *)(iVar4 + 0x10) = GameCamera.posX + *pfVar3;
  *(float *)(iVar4 + 0x14) = GameCamera.posY + DAT_00730b6c + pfVar3[1];
  *(float *)(iVar4 + 0x18) = GameCamera.posZ - pfVar3[2];
  if (iVar4 != 0) {
    MB_AddToDrawList(iVar4,1);
  }
  iVar5 = 0;
  STUB_0006d704(0);
  iVar4 = 0;
  do {
    if (g_CollectedGoldBolts[g_SelectedLevel * 4 + iVar4] != '\0') {
      iVar5 = iVar5 + 1;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  iVar4 = 0x10;
  if (g_Language < 3) {
    if (1 < g_Language) {
      iVar4 = 10;
    }
  }
  else if (g_Language < 4) {
    iVar4 = 5;
  }
  else if (g_Language < 5) {
    iVar4 = -0x14;
  }
  uVar1 = help_msg_string_by_index(STR_FOUND);
  uVar2 = help_msg_string_by_index(STR_OF);
  snprintf(acStack_140,"%s %d %s %d",uVar1,iVar5,uVar2,
                 (&g_MaxBoltsPerLevel.Veldin)[g_SelectedLevel]);
  FontPrintMediumRight
            (*(int *)(param_1 + 0x20) - iVar4,(g_ScreenHeight >> 1) + -8,0x80000000,
             acStack_140,0xffffffffffffffff);
  FontPrintMediumRight
            ((*(int *)(param_1 + 0x20) - iVar4) + -1,(g_ScreenHeight >> 1) + -9,0x80ffa888,
             acStack_140,0xffffffffffffffff);
  STUB_0006d708();
  return 8;
}


// 0x01472f0 (0x44 bytes)
/* [p2_pause] moby callback rotates
   [p2_pause] moby callback rotates
   [p2_pause] moby callback rotates */

void GoldBolt_SpinMobyUpdate(int param_1)

{
  double dVar1;
  
  dVar1 = (double)FastWrapRot(*(float *)(param_1 + 0x40),0.02);
  *(float *)(param_1 + 0x40) = (float)dVar1;
  return;
}


// 0x0147334 (0x2fc bytes)
// strings: 006535d0: '%d,%03d/' | 006535e0: '%d,%03d'

/* [p2_pause] prints '%d,%03d' cost
   [p2_pause] prints '%d,%03d' cost
   [p2_pause] prints '%d,%03d' cost */

undefined8 ItemInfo_DrawCost(void)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  int iVar6;
  GPiece<24> local_b0;
  char acStack_98 [80];
  
  sVar1 = *(short *)(*(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x48) + 6 +
                    *(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x3c) * 10);
  if ((&UnlockableItems.field0_0x0)[sVar1] == '\0') {
    uVar4 = 0;
  }
  else {
    iVar3 = (int)((longlong)sVar1 << 3) * 3;
    iVar6 = *(int *)((int)&currentAmmoArray.field0_0x0 + (int)((longlong)sVar1 << 2));
    uVar2 = *(ushort *)((int)&DAT_00737d3e + iVar3);
    uVar4 = idol_draw::PackCmd(0,1,0,1,0);
    SetGSReg(3,uVar4);
    uVar4 = FUN_00502f98(1,5,0,0,0,0,0,0);
    SetGSReg(0x16,uVar4);
    if (*(short *)((int)&DAT_00737d38 + iVar3) == 0) {
      pcVar5 = (char *)help_msg_string_by_index(STR_NO_AMMO);
      snprintf(acStack_98,pcVar5);
    }
    else {
      if (iVar6 < 1000) {
        iVar6 = snprintf(acStack_98,"%d/",iVar6);
      }
      else {
        iVar6 = snprintf(acStack_98,"%d,%03d/",iVar6 / 1000,iVar6 % 1000);
      }
      pcVar5 = acStack_98 + iVar6;
      if (uVar2 < 1000) {
        snprintf(pcVar5,"%d",(ulonglong)uVar2);
      }
      else {
        snprintf(pcVar5,"%d,%03d",uVar2 / 1000,(uint)uVar2 + (uVar2 / 1000) * -1000);
      }
    }
    STUB_0006d704(0);
    FontPrintMediumOpt(local_b0,0x80ffa888,acStack_98,0xffffffffffffffff);
    STUB_0006d708();
    uVar4 = 2;
  }
  return uVar4;
}


// 0x0147630 (0xb4 bytes)
/* [p2_pause] calls DrawMapFrame
   [p2_pause] calls DrawMapFrame
   [p2_pause] calls DrawMapFrame */

undefined8 MapPage_Draw(void)

{
  undefined8 uVar1;
  
  uVar1 = idol_draw::PackCmd(0,1,0,1,0);
  SetGSReg(3,uVar1);
  uVar1 = FUN_00502f98(1,5,0,0,0,0,0,0);
  SetGSReg(0x16,uVar1);
  DrawMapFrame();
  return 8;
}


// 0x01476f0 (0x4c0 bytes)
undefined8 MapMenu_DrawOptions(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  uVar1 = idol_draw::PackCmd(0,1,0,1,0);
  SetGSReg(3,uVar1);
  uVar1 = FUN_00502f98(1,5,0,0,0,0,0,0);
  SetGSReg(0x16,uVar1);
  STUB_0006d704(0);
  dVar6 = 1.0;
  if (g_Language < 3) {
    if ((-1 < g_Language) && (1 < g_Language)) {
      dVar6 = 0.8999999761581421;
    }
  }
  else if (g_Language < 5) {
    if (g_Language < 4) {
      dVar6 = 0.8999999761581421;
    }
    else {
      dVar6 = 0.8999999761581421;
    }
  }
  else if (g_Language < 6) {
    dVar6 = 0.8999999761581421;
  }
  uVar1 = help_msg_string_by_index(STR_VIEW_MISSIONS);
  iVar2 = FontLenScaledSmall(dVar6,uVar1,0xffffffffffffffff);
  uVar1 = help_msg_string_by_index(STR_PREVIOUS_MAP);
  iVar3 = FontLenScaledSmall(dVar6,uVar1,0xffffffffffffffff);
  if (iVar3 < iVar2) {
    iVar3 = iVar2;
  }
  iVar2 = iVar3;
  if (Level != Veldin) {
    uVar1 = help_msg_string_by_index(STR_PLAY_INFOBOT);
    iVar2 = FontLenScaledSmall(dVar6,uVar1,0xffffffffffffffff);
    if (iVar2 < iVar3) {
      iVar2 = iVar3;
    }
  }
  uVar1 = help_msg_string_by_index(STR_NEXT_MAP);
  iVar3 = FontLenScaledSmall(dVar6,uVar1,0xffffffffffffffff);
  if (iVar3 < iVar2) {
    iVar3 = iVar2;
  }
  uVar1 = help_msg_string_by_index(STR_TRACK_ZOOM);
  iVar2 = FontLenScaledSmall(dVar6,uVar1,0xffffffffffffffff);
  if (iVar2 < iVar3) {
    iVar2 = iVar3;
  }
  uVar1 = help_msg_string_by_index(STR_EXIT);
  iVar3 = FontLenScaledSmall(dVar6,uVar1,0xffffffffffffffff);
  if (iVar3 < iVar2) {
    iVar3 = iVar2;
  }
  iVar3 = *(int *)(param_1 + 0x20) - iVar3 >> 1;
  if (iVar3 < 2) {
    iVar3 = 2;
  }
  iVar2 = 6;
  if (Level != Veldin) {
    iVar2 = 7;
  }
  iVar2 = *(int *)(param_1 + 0x24) / iVar2;
  DisableFontColors();
  iVar4 = iVar2 + -6;
  dVar7 = (double)(longlong)iVar3;
  dVar5 = (double)(longlong)iVar4;
  help_msg_string_by_index(STR_VIEW_MISSIONS);
  FontPrintScaledSmall(dVar7,dVar5,dVar6);
  if (Level != Veldin) {
    iVar4 = iVar4 + iVar2;
    dVar5 = (double)(longlong)iVar4;
    help_msg_string_by_index(STR_PLAY_INFOBOT);
    FontPrintScaledSmall(dVar7,dVar5,dVar6);
  }
  dVar5 = (double)(longlong)(iVar4 + iVar2);
  help_msg_string_by_index(STR_PREVIOUS_MAP);
  FontPrintScaledSmall(dVar7,dVar5,dVar6);
  iVar3 = iVar4 + iVar2 + iVar2;
  dVar5 = (double)(longlong)iVar3;
  help_msg_string_by_index(STR_NEXT_MAP);
  FontPrintScaledSmall(dVar7,dVar5,dVar6);
  iVar3 = iVar3 + iVar2;
  uVar1 = help_msg_string_by_index(STR_TRACK_ZOOM);
  dVar5 = dVar6;
  if (g_Language == 2) {
    dVar5 = (double)(float)(dVar6 - 0.05000000074505806);
  }
  FontPrintScaledSmall
            (dVar7,(double)(longlong)iVar3,dVar5,uVar1,(longlong)iVar3,0x80ffa888,uVar1,
             0xffffffffffffffff);
  dVar5 = (double)(longlong)(iVar3 + iVar2);
  help_msg_string_by_index(STR_EXIT);
  FontPrintScaledSmall(dVar7,dVar5,dVar6);
  EnableFontColors();
  STUB_0006d708();
  return 2;
}


// 0x0147bb0 (0x138 bytes)
/* [p2_pause] prints STR_EXIT / STR_SELECT
   [p2_pause] prints STR_EXIT / STR_SELECT
   [p2_pause] prints STR_EXIT / STR_SELECT */

undefined8 ExitSelectPrompt_Draw(void)

{
  undefined8 uVar1;
  
  uVar1 = idol_draw::PackCmd(0,1,0,1,0);
  SetGSReg(3,uVar1);
  uVar1 = FUN_00502f98(1,5,0,0,0,0,0,0);
  SetGSReg(0x16,uVar1);
  STUB_0006d704(0);
  uVar1 = help_msg_string_by_index(STR_EXIT);
  FontPrintMediumLeft(4,7,0x80ffa888,uVar1,0xffffffffffffffff);
  uVar1 = help_msg_string_by_index(STR_SELECT);
  FontPrintMediumLeft(4,0x17,0x80ffa888,uVar1,0xffffffffffffffff);
  STUB_0006d708();
  return 2;
}


// 0x0147cf8 (0x3fc bytes)
undefined8 DrawMissionsFrame(int param_1)

{
  float fVar1;
  int *outTextIds;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint local_b0;
  undefined2 local_ac;
  undefined2 local_aa;
  undefined2 local_a8;
  undefined2 local_a6;
  undefined2 local_a4;
  short local_a2;
  undefined2 local_a0;
  short local_9e;
  short local_9c;
  undefined2 local_9a;
  undefined2 local_98;
  undefined2 local_96;
  
  outTextIds = g_ScratchBuf;
  local_b0 = 0;
  STUB_0006d704(0);
  lVar2 = BuildMissionList(outTextIds,&local_b0,(int *)0x0,'\0');
  uVar3 = idol_draw::PackCmd(0,1,0,1,0);
  SetGSReg(3,uVar3);
  uVar3 = FUN_00502f98(1,5,0x10,0,0,0,0,0);
  SetGSReg(0x16,uVar3);
  uVar3 = help_msg_string_by_index(STR_MISSIONS);
  FontPrintMediumLeft(4,4,0x80ffa888,uVar3,0xffffffffffffffff);
  local_ac = 0;
  local_a8 = 0;
  uVar10 = 0;
  local_a4 = 0;
  iVar11 = 0x18;
  local_a2 = 0;
  local_a0 = 0;
  local_9e = 0;
  local_9c = 0x10;
  local_9a = 0;
  local_98 = 0;
  local_96 = 0;
  local_aa = (undefined2)*(undefined4 *)(param_1 + 0x24);
  local_a6 = (undefined2)*(undefined4 *)(param_1 + 0x20);
  if (0 < (int)lVar2) {
    iVar6 = 0;
    do {
      iVar9 = iVar11 + 10;
      uVar3 = 0xffffffff80ffa888;
      uVar7 = *(uint *)(param_1 + 0x30 + g_SelectedLevel * 4);
      if (uVar7 == uVar10) {
        uVar3 = 0xffffffff8020ffff;
        DisableFontColors();
      }
      local_a4 = 0x10;
      local_a2 = (short)iVar11;
      uVar4 = help_msg_string_by_index(*(StringId *)((int)outTextIds + iVar6));
      if (g_JapaneseMode == false) {
        fVar1 = 1.0;
      }
      else {
        fVar1 = 0.9;
      }
      FontPrintOpt((double)fVar1,&local_ac,uVar3,uVar4,0xffffffffffffffff);
      if (uVar7 == uVar10) {
        EnableFontColors();
      }
      iVar5 = (int)local_9c;
      iVar8 = (int)local_9e;
      if (iVar8 / iVar5 == 2) {
        iVar9 = iVar11 + 0x10;
      }
      uVar7 = local_b0 & 1 << (uVar10 & 0x3f);
      DrawFlatOverlay(4,iVar9 + -5,0xe,iVar9 + 5,0x80ffa888,0);
      DrawFlatOverlay(5,iVar9 + -4,0xd,iVar9 + 4,DAT_00729840,0);
      if (uVar7 != 0) {
        uVar3 = GetIconFrameTex(0xe99e,1);
        DrawSprite(uVar3,0xfffffffffffffffc,iVar9 + -0x12,0x1e,0x1e,0x80);
      }
      uVar10 = uVar10 + 1;
      iVar6 = iVar6 + 4;
      iVar11 = iVar11 + (iVar8 / iVar5) * 0x10;
    } while ((int)uVar10 < (int)lVar2);
  }
  if ((local_b0 & 0x80000000) != 0) {
    local_a2 = (short)iVar11 + 8;
    local_9a = 1;
    local_a4 = (undefined2)(*(int *)(param_1 + 0x24) >> 1);
    uVar3 = 0x3ff0000000000000;
    if ((1 < g_Language) && (g_Language < 7)) {
      uVar3 = 0x3feb333340000000;
    }
    uVar4 = help_msg_string_by_index(STR_ALL_MISSIONS_COMPLETE);
    FontPrintOpt(uVar3,&local_ac,0x8020ffff,uVar4,0xffffffffffffffff);
  }
  STUB_0006d708();
  return 2;
}


// 0x01480f4 (0x3b0 bytes)
// strings: 006535e8: '%s[%d]' | 006535f0: '%s.ps3' | 006535f8: '%s.vram'

/* [p2_pause] streams %s[%d].ps3/.vram image into buffer
   [p2_pause] streams %s[%d].ps3/.vram image into buffer
   [p2_pause] streams %s[%d].ps3/.vram image into buffer */

undefined8 ImageWidget_Update(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar6;
  ulonglong uVar5;
  int iVar7;
  longlong lVar8;
  char acStack_140 [128];
  char acStack_c0 [128];
  
  uVar1 = *(uint *)(param_1 + 0x34);
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 2) == 0) {
      if ((uVar1 & 4) == 0) {
        if ((uVar1 & 0x100) == 0) {
          iVar6 = *(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x40);
          lVar8 = (longlong)iVar6;
          if (iVar6 < 0) {
            lVar8 = 0;
          }
        }
        else {
          iVar6 = *(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x40);
          lVar8 = (longlong)iVar6;
          if (iVar6 < 0) {
            lVar8 = 0;
          }
          if (4 < (int)lVar8) {
            lVar8 = 4;
          }
          iVar6 = memcard_IsSaveSystemIdle();
          if ((iVar6 == 0) || (DAT_00a52d00 < 0xb)) {
            *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
          }
          else {
            if (*(int *)(param_1 + 0x44) == -1) {
              *(undefined4 *)(param_1 + 0x44) = 0;
            }
            lVar8 = (longlong)*(int *)((int)&DAT_0071fa44 + ((int)(lVar8 << 5) - (int)(lVar8 << 2)))
            ;
          }
        }
      }
      else {
        lVar8 = (longlong)*(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x3c);
      }
    }
    else {
      lVar8 = (longlong)g_SelectedLevel;
    }
  }
  else {
    lVar8 = (longlong)*(int *)(param_1 + 0x58);
    if (*(int *)(param_1 + 0x58) == -1) {
      return 0;
    }
  }
  iVar2 = g_pIdolDrawBase;
  iVar6 = *(int *)(param_1 + 0x44);
  if (iVar6 < 2) {
    if (iVar6 < 0) {
      return 0;
    }
    if (iVar6 < 1) {
LAB_00148288:
      if ((int)lVar8 == *(int *)(param_1 + 0x50)) {
        return 0;
      }
      if (*(int *)(param_1 + 0x48) == 0) {
        return 0;
      }
      if (g_MusicLoading != 0) {
        return 0;
      }
      if (*(uint *)(param_1 + 0x30) < 0x10) {
        uVar5 = ZEXT48((&PTR_s_rc1_ps3data_global_mission_ss_mi_00729854)[*(uint *)(param_1 + 0x30)]
                      );
      }
      else {
        uVar5 = 0;
      }
      snprintf(acStack_140,"%s[%d]",uVar5,lVar8);
      snprintf(acStack_c0,"%s.ps3",acStack_140);
      LoadAssetFromFile(acStack_c0,g_NpcBuffer,0x100000);
      piVar4 = g_NpcBuffer;
      snprintf(acStack_c0,"%s.vram",acStack_140);
      iVar6 = DAT_00a10924 + 0x200000;
      iVar7 = LoadAssetFromFile(acStack_c0,iVar6,0x100000);
      DAT_00a2071c = piVar4[1];
      DAT_00a20718 = *piVar4 + (iVar6 - *(int *)(iVar2 + 0x4ac));
      DAT_00a20720 = piVar4[2];
      DAT_00a20724 = piVar4[3];
      *piVar4 = DAT_00a20718;
      *(int *)(param_1 + 100) = DAT_00a20718;
      *(int *)(param_1 + 0x68) = DAT_00a2071c;
      *(int *)(param_1 + 0x6c) = DAT_00a20720;
      *(int *)(param_1 + 0x70) = DAT_00a20724;
      iVar6 = piVar4[5];
      iVar2 = piVar4[6];
      iVar3 = piVar4[7];
      *(int *)(param_1 + 0x74) = piVar4[4];
      *(int *)(param_1 + 0x78) = iVar6;
      *(int *)(param_1 + 0x7c) = iVar2;
      *(int *)(param_1 + 0x80) = iVar3;
      *(int *)(param_1 + 0x84) = piVar4[8];
      *(undefined1 *)(param_1 + 0xac) = 1;
      DAT_00a20728 = *(undefined4 *)(param_1 + 0x74);
      DAT_00a2072c = *(undefined4 *)(param_1 + 0x78);
      DAT_00a20730 = *(undefined4 *)(param_1 + 0x7c);
      DAT_00a20734 = *(undefined4 *)(param_1 + 0x80);
      DAT_00a20738 = *(undefined4 *)(param_1 + 0x84);
      if (iVar7 != 0) {
        *(int *)(param_1 + 0x50) = (int)lVar8;
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
        return 0;
      }
      *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
      return 0;
    }
  }
  else {
    if (iVar6 < 3) goto LAB_00148288;
    if (3 < iVar6) {
      return 0;
    }
  }
  if (g_MusicLoading == 0) {
    *(undefined4 *)(param_1 + 0x44) = 2;
  }
  return 0;
}


// 0x01484a4 (0x94 bytes)
/* [p2_pause] Sprite_DrawShape fullscreen image
   [p2_pause] Sprite_DrawShape fullscreen image
   [p2_pause] Sprite_DrawShape fullscreen image */

undefined8 ImageWidget_Draw(int param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x44) < 2) {
    uVar1 = 0;
  }
  else {
    Sprite_DrawShape
              (0,0,DAT_00966b8c,DAT_00966b8e,0,0,*(undefined4 *)(param_1 + 0x38),
               *(undefined4 *)(param_1 + 0x3c));
    uVar1 = 0x10;
  }
  return uVar1;
}


// 0x0148538 (0x150 bytes)
/* [p2_pause] finds free slot in 0xa53098 table, marks used
   [p2_pause] finds free slot in 0xa53098 table, marks used
   [p2_pause] finds free slot in 0xa53098 table, marks used */

undefined4 Menu_AllocStreamBuffer(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar3 = 0;
  while ((((param_1 != 0 &&
           ((*(uint *)((int)&DAT_00a5309c + (int)((uVar3 & 0xffffffff) << 3)) & 1) == 0)) ||
          ((param_1 == 0 &&
           ((*(uint *)((int)&DAT_00a5309c + (int)((uVar3 & 0xffffffff) << 3)) & 1) != 0)))) ||
         ((iVar1 = (int)((uVar3 & 0xffffffff) << 3), *(int *)((int)&DAT_00a53098 + iVar1) == 0 ||
          ((*(uint *)((int)&DAT_00a5309c + iVar1) & 2) != 0))))) {
    uVar3 = uVar3 + 1;
    if (4 < (int)uVar3) {
      return 0;
    }
  }
  iVar4 = 0;
  *(uint *)((int)&DAT_00a5309c + iVar1) = *(uint *)((int)&DAT_00a5309c + iVar1) | 2;
  do {
    if ((&DAT_00a53098)[iVar4 * 2] == *(int *)((int)&DAT_00a53098 + iVar1)) {
      uVar2 = 0x11800;
      if (((&DAT_00a5309c)[iVar4 * 2] & 1) != 0) {
        uVar2 = 0x4f000;
      }
      goto LAB_00148640;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 5);
  uVar2 = 0xffffffffffffffff;
LAB_00148640:
  FastMemSet(*(undefined4 *)((int)&DAT_00a53098 + iVar1),0xffffffffdeadbeef,uVar2);
  return *(undefined4 *)((int)&DAT_00a53098 + iVar1);
}


// 0x0148688 (0xe4 bytes)
/* [p2_pause] allocs stream buffers
   [p2_pause] allocs stream buffers
   [p2_pause] allocs stream buffers */

undefined8 ImageWidget_OnEnter(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x44) = 0;
  uVar1 = Menu_AllocStreamBuffer(*(uint *)(param_1 + 0x34) & 0x200);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  uVar1 = Menu_AllocStreamBuffer(*(uint *)(param_1 + 0x34) & 0x200);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  if ((*(uint *)(param_1 + 0x34) & 0x200) == 0) {
    if (*(int *)(param_1 + 0x48) == 0) {
      uVar1 = Menu_AllocStreamBuffer(1);
      *(undefined4 *)(param_1 + 0x48) = uVar1;
    }
    if (*(int *)(param_1 + 0x4c) == 0) {
      uVar1 = Menu_AllocStreamBuffer(1);
      *(undefined4 *)(param_1 + 0x4c) = uVar1;
    }
  }
  memset(param_1 + 100,0,0x24);
  memset(param_1 + 0x88,0,0x24);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  return 0;
}


// 0x014876c (0x194 bytes)
/* [p2_pause] frees stream buffers
   [p2_pause] frees stream buffers
   [p2_pause] frees stream buffers */

undefined8 ImageWidget_OnExit(int param_1)

{
  char cVar1;
  ulonglong uVar2;
  int iVar3;
  
  cVar1 = DAT_00a52c7b;
  uVar2 = 0;
  do {
    iVar3 = (int)((uVar2 & 0xffffffff) << 3);
    if ((*(int *)((int)&DAT_00a53098 + iVar3) == *(int *)(param_1 + 0x48)) &&
       ((*(uint *)((int)&DAT_00a5309c + iVar3) & 2) != 0)) {
      if (((*(uint *)((int)&DAT_00a5309c + iVar3) & 4) != 0) &&
         (*(uint *)((int)&DAT_00a5309c + iVar3) = *(uint *)((int)&DAT_00a5309c + iVar3) ^ 4,
         cVar1 != '\0')) {
        music_StopLoad();
        DAT_00a52c7b = '\0';
      }
      *(uint *)((int)&DAT_00a5309c + iVar3) = *(uint *)((int)&DAT_00a5309c + iVar3) & 0xfffffffd;
      break;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 5);
  *(undefined4 *)(param_1 + 0x48) = 0;
  cVar1 = DAT_00a52c7b;
  iVar3 = 0;
  while (((&DAT_00a53098)[iVar3 * 2] != *(int *)(param_1 + 0x4c) ||
         (((&DAT_00a5309c)[iVar3 * 2] & 2) == 0))) {
    iVar3 = iVar3 + 1;
    if (4 < iVar3) {
LAB_001488bc:
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(undefined1 *)(param_1 + 0xac) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
      return 0;
    }
  }
  if ((((&DAT_00a5309c)[iVar3 * 2] & 4) != 0) &&
     ((&DAT_00a5309c)[iVar3 * 2] = (&DAT_00a5309c)[iVar3 * 2] ^ 4, cVar1 != '\0')) {
    music_StopLoad();
    DAT_00a52c7b = '\0';
  }
  (&DAT_00a5309c)[iVar3 * 2] = (&DAT_00a5309c)[iVar3 * 2] & 0xfffffffd;
  goto LAB_001488bc;
}


// 0x0148908 (0x8e4 bytes)
// strings: 0096c08c: 'None' | 006535e8: '%s[%d]' | 006535f0: '%s.ps3' | 006535f8: '%s.vram' | 00653600: 'pMon->base[index]'

undefined8 UpdateOptionsMenus(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar7;
  ulonglong uVar6;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int local_370 [8];
  char acStack_350 [128];
  char acStack_2d0 [128];
  char acStack_250 [128];
  char acStack_1d0 [128];
  char acStack_150 [128];
  char acStack_d0 [128];
  longlong local_50;
  
  uVar1 = *(uint *)(param_1 + 0x34);
  iVar7 = *(int *)(param_1 + 0x5c) + 1;
  *(int *)(param_1 + 0x5c) = iVar7;
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 2) == 0) {
      if ((uVar1 & 4) == 0) {
        if ((uVar1 & 0x100) == 0) {
          if ((uVar1 & 8) == 0) {
            if ((uVar1 & 0x400) == 0) {
              if ((uVar1 & 0x1000) == 0) {
                iVar7 = *(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x40);
                lVar10 = (longlong)iVar7;
                if (iVar7 < 0) {
                  lVar10 = 0;
                }
                if (((uVar1 & 0x4000) != 0) &&
                   (*(short *)(*(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x34) +
                               (int)lVar10 * 0xc + 2) == 2)) {
                  lVar10 = 9;
                }
              }
              else {
                local_370[0] = 0;
                local_370[1] = 0;
                local_370[2] = 0xc;
                local_370[3] = 0x24;
                local_370[4] = 0x30;
                local_370[5] = 0x18;
                local_370[6] = 0;
                lVar10 = (longlong)(**(int **)(param_1 + 0x40) + local_370[g_Language]);
              }
            }
            else {
              local_50 = (longlong)(int)(animationSpeed * 300.5);
              lVar10 = (longlong)((iVar7 / (int)(animationSpeed * 300.5)) % 0x13);
            }
          }
          else {
            iVar7 = *(int *)(g_currentMenuPage + 0x40);
            lVar10 = (longlong)*(short *)(*(int *)(iVar7 + 0x48) + 8 + *(int *)(iVar7 + 0x3c) * 10);
            if (*(int *)(iVar7 + 0x40) == 0) {
              *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
            }
          }
        }
        else {
          iVar7 = *(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x40);
          lVar10 = (longlong)iVar7;
          if (iVar7 < 0) {
            lVar10 = 0;
          }
          if (4 < (int)lVar10) {
            lVar10 = 4;
          }
          iVar7 = memcard_IsSaveSystemIdle();
          if ((iVar7 == 0) || (DAT_00a52d00 < 0xb)) {
            *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
          }
          else {
            if (*(int *)(param_1 + 0x44) == -1) {
              *(undefined4 *)(param_1 + 0x44) = 0;
            }
            iVar7 = *(int *)((int)&DAT_0071fa44 + ((int)(lVar10 << 5) - (int)(lVar10 << 2)));
            lVar10 = (longlong)iVar7;
            if (iVar7 == -1) {
              *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
            }
          }
        }
      }
      else {
        lVar10 = (longlong)*(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x3c);
      }
    }
    else {
      lVar10 = (longlong)g_SelectedLevel;
    }
  }
  else {
    lVar10 = (longlong)*(int *)(param_1 + 0x58);
    if (*(int *)(param_1 + 0x58) == -1) {
      return 0;
    }
  }
  iVar7 = g_pIdolDrawBase;
  uVar1 = *(uint *)(param_1 + 0x34);
  if (((uVar1 & 0x2000) != 0) && (g_SkillPoints[(int)lVar10] == '\0')) {
    lVar10 = 0x1e;
  }
  iVar2 = *(int *)(param_1 + 0x44);
  iVar11 = (int)lVar10;
  if (iVar2 == 6) {
    *(undefined4 *)(param_1 + 0x44) = 2;
LAB_00148e14:
    if (iVar11 != *(int *)(param_1 + 0x50)) {
      uVar4 = *(uint *)(param_1 + 0x4c);
      if (uVar4 == 0) {
        *(undefined4 *)(param_1 + 0x44) = 0;
      }
      else if (g_MusicLoading == 0) {
        if ((uVar1 & 0x10) == 0) {
          idol::PRINT_m_LoadGameFile(uVar4,"pMon->base[index]");
        }
        else {
          FUN_00503434(uVar4,"pMon->base[index]");
        }
        if (*(uint *)(param_1 + 0x30) < 0x10) {
          uVar6 = ZEXT48((&PTR_s_rc1_ps3data_global_mission_ss_mi_00729854)
                         [*(uint *)(param_1 + 0x30)]);
        }
        else {
          uVar6 = 0;
        }
        snprintf(acStack_250,"%s[%d]",uVar6,lVar10);
        iVar2 = g_pIdolDrawBase;
        snprintf(acStack_1d0,"%s.ps3",acStack_250);
        LoadAssetFromFile(acStack_1d0,g_NpcBuffer,0x100000);
        piVar5 = g_NpcBuffer;
        snprintf(acStack_1d0,"%s.vram",acStack_250);
        iVar8 = LoadAssetFromFile(acStack_1d0,DAT_00a10924,0x200000);
        iVar7 = piVar5[1];
        iVar9 = *piVar5 + (DAT_00a10924 - *(int *)(iVar2 + 0x4ac));
        iVar2 = piVar5[2];
        iVar3 = piVar5[3];
        *piVar5 = iVar9;
        *(int *)(param_1 + 100) = iVar9;
        *(int *)(param_1 + 0x68) = iVar7;
        *(int *)(param_1 + 0x6c) = iVar2;
        *(int *)(param_1 + 0x70) = iVar3;
        iVar7 = piVar5[5];
        iVar2 = piVar5[6];
        iVar3 = piVar5[7];
        *(int *)(param_1 + 0x74) = piVar5[4];
        *(int *)(param_1 + 0x78) = iVar7;
        *(int *)(param_1 + 0x7c) = iVar2;
        *(int *)(param_1 + 0x80) = iVar3;
        *(int *)(param_1 + 0x84) = piVar5[8];
        *(undefined1 *)(param_1 + 0xac) = 1;
        if (iVar8 < 1) {
          *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
        }
        else {
          iVar7 = 0;
          do {
            if ((&DAT_00a53098)[iVar7 * 2] == *(int *)(param_1 + 0x4c)) {
              (&DAT_00a5309c)[iVar7 * 2] = (&DAT_00a5309c)[iVar7 * 2] | 4;
              break;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < 5);
          *(int *)(param_1 + 0x54) = iVar11;
          *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
        }
      }
    }
  }
  else {
    if (iVar2 != 5) {
      if (iVar2 == 4) {
        if (iVar11 == *(int *)(param_1 + 0x54)) {
          return 0;
        }
        uVar4 = *(uint *)(param_1 + 0x48);
        if (uVar4 == 0) {
          *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
          return 0;
        }
        if (g_MusicLoading != 0) {
          return 0;
        }
        if ((uVar1 & 0x10) == 0) {
          idol::PRINT_m_LoadGameFile(uVar4,"pMon->base[index]");
        }
        else {
          FUN_00503434(uVar4,"pMon->base[index]");
        }
        if (*(uint *)(param_1 + 0x30) < 0x10) {
          uVar6 = ZEXT48((&PTR_s_rc1_ps3data_global_mission_ss_mi_00729854)
                         [*(uint *)(param_1 + 0x30)]);
        }
        else {
          uVar6 = 0;
        }
        snprintf(acStack_150,"%s[%d]",uVar6,lVar10);
        iVar2 = g_pIdolDrawBase;
        snprintf(acStack_d0,"%s.ps3",acStack_150);
        LoadAssetFromFile(acStack_d0,g_NpcBuffer,0x100000);
        piVar5 = g_NpcBuffer;
        snprintf(acStack_d0,"%s.vram",acStack_150);
        LoadAssetFromFile(acStack_d0,DAT_00a10924,0x200000);
        iVar7 = piVar5[1];
        iVar8 = *piVar5 + (DAT_00a10924 - *(int *)(iVar2 + 0x4ac));
        iVar2 = piVar5[2];
        iVar3 = piVar5[3];
        *piVar5 = iVar8;
        *(int *)(param_1 + 100) = iVar8;
        *(int *)(param_1 + 0x68) = iVar7;
        *(int *)(param_1 + 0x6c) = iVar2;
        *(int *)(param_1 + 0x70) = iVar3;
        iVar7 = piVar5[5];
        iVar2 = piVar5[6];
        iVar3 = piVar5[7];
        *(int *)(param_1 + 0x74) = piVar5[4];
        *(int *)(param_1 + 0x78) = iVar7;
        *(int *)(param_1 + 0x7c) = iVar2;
        *(int *)(param_1 + 0x80) = iVar3;
        *(int *)(param_1 + 0x84) = piVar5[8];
        *(undefined1 *)(param_1 + 0xac) = 1;
        *(int *)(param_1 + 0x50) = iVar11;
        *(undefined4 *)(param_1 + 0x44) = 2;
        return 0;
      }
      if (iVar2 != 3) {
        if (iVar2 == 2) goto LAB_00148e14;
        if (iVar2 != 1) {
          if (iVar2 != 0) {
            return 0;
          }
          if (*(int *)(param_1 + 0x48) == 0) {
            return 0;
          }
          if (g_MusicLoading != 0) {
            return 0;
          }
          if (*(uint *)(param_1 + 0x30) < 0x10) {
            uVar6 = ZEXT48((&PTR_s_rc1_ps3data_global_mission_ss_mi_00729854)
                           [*(uint *)(param_1 + 0x30)]);
          }
          else {
            uVar6 = 0;
          }
          snprintf(acStack_350,"%s[%d]",uVar6,lVar10);
          snprintf(acStack_2d0,"%s.ps3",acStack_350);
          LoadAssetFromFile(acStack_2d0,g_NpcBuffer,0x100000);
          piVar5 = g_NpcBuffer;
          snprintf(acStack_2d0,"%s.vram",acStack_350);
          iVar8 = LoadAssetFromFile(acStack_2d0,DAT_00a10924,0x200000);
          iVar2 = piVar5[1];
          iVar9 = *piVar5 + (DAT_00a10924 - *(int *)(iVar7 + 0x4ac));
          iVar7 = piVar5[2];
          iVar3 = piVar5[3];
          *piVar5 = iVar9;
          *(int *)(param_1 + 100) = iVar9;
          *(int *)(param_1 + 0x68) = iVar2;
          *(int *)(param_1 + 0x6c) = iVar7;
          *(int *)(param_1 + 0x70) = iVar3;
          iVar7 = piVar5[5];
          iVar2 = piVar5[6];
          iVar3 = piVar5[7];
          *(int *)(param_1 + 0x74) = piVar5[4];
          *(int *)(param_1 + 0x78) = iVar7;
          *(int *)(param_1 + 0x7c) = iVar2;
          *(int *)(param_1 + 0x80) = iVar3;
          *(int *)(param_1 + 0x84) = piVar5[8];
          *(undefined1 *)(param_1 + 0xac) = 1;
          if (iVar8 < 1) {
            return 0;
          }
          iVar7 = 0;
          do {
            if ((&DAT_00a53098)[iVar7 * 2] == *(int *)(param_1 + 0x48)) {
              (&DAT_00a5309c)[iVar7 * 2] = (&DAT_00a5309c)[iVar7 * 2] | 4;
              break;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < 5);
          *(int *)(param_1 + 0x50) = iVar11;
          *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
          return 0;
        }
      }
    }
    if (g_MusicLoading == 0) {
      *(int *)(param_1 + 0x44) = iVar2 + 1;
    }
  }
  return 0;
}


// 0x01491f0 (0x4b4 bytes)
/* [p2_pause] draw paired with UpdateOptionsMenus
   [p2_pause] draw paired with UpdateOptionsMenus
   [p2_pause] draw paired with UpdateOptionsMenus */

undefined8 ImageWidget_DrawWithText(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar4;
  undefined8 uVar3;
  StringId helpmsg;
  undefined8 uVar5;
  int local_70;
  GPiece<28> local_4c;
  
  if (*(int *)(param_1 + 0x44) < 2) {
    if ((*(uint *)(param_1 + 0x34) & 0x100) != 0) {
      iVar4 = memcard_IsSaveSystemIdle();
      if (iVar4 == 0) {
        STUB_0006d704(0);
        helpmsg = STR_CHECKING_MEMORY_CARD_PS2PLEASE_0x4FB9;
        if (DAT_00a52cd4 != 0) {
          helpmsg = DAT_00a52cd8;
        }
        uVar3 = help_msg_string_by_index(helpmsg);
        uVar5 = 0x3ff0000000000000;
        FontPrintOpt(0x3ff0000000000000,local_4c,0x80000000,uVar3,0xffffffffffffffff);
        FontPrintOpt(uVar5,local_4c,0x80000000,uVar3,0xffffffffffffffff);
        FontPrintOpt(uVar5,local_4c,0x80ffa888,uVar3,0xffffffffffffffff);
        STUB_0006d708();
      }
      return 2;
    }
    return 1;
  }
  if ((*(uint *)(param_1 + 0x34) & 4) != 0) {
    iVar4 = *(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x48) +
            *(int *)(param_1 + 0x50 + (uint)(3 < *(int *)(param_1 + 0x44)) * 4) * 10;
    if ((*(short *)(iVar4 + 4) == 0) &&
       ((&UnlockableItems.field0_0x0)[*(short *)(iVar4 + 6)] == '\0')) {
      return 1;
    }
    if ((*(short *)(iVar4 + 4) == 1) &&
       ((&g_MiscLevelFlags.Zoomerator)[*(short *)(iVar4 + 6)] == false)) {
      return 1;
    }
  }
  STUB_0006d704(0);
  if (*(int *)(param_1 + 0x44) < 5) {
    local_70 = *(int *)(param_1 + 100);
  }
  if (local_70 == 0) {
    return 0x10;
  }
  iVar4 = *(int *)(param_1 + 0x30);
  if (iVar4 < 0xb) {
    if (iVar4 < 4) {
      if (iVar4 < 1) {
LAB_00149608:
        uVar1 = *(uint *)(param_1 + 0x38);
        uVar2 = *(uint *)(param_1 + 0x3c);
        Sprite_DrawShape
                  (0,0,DAT_00966b8c,DAT_00966b8e,0,0,
                   ((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0),
                   ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0));
        goto LAB_00149670;
      }
    }
    else if (iVar4 != 6) goto LAB_00149608;
  }
  else {
    if (iVar4 < 0xc) {
      Sprite_DrawShape
                (0,0,(longlong)DAT_00966b8c << 1,DAT_00966b8e,0,0,*(int *)(param_1 + 0x38) << 1,
                 *(undefined4 *)(param_1 + 0x3c));
      goto LAB_00149670;
    }
    if (0xf < iVar4) goto LAB_00149608;
  }
  Sprite_DrawShape
            (0,0,DAT_00966b8c,DAT_00966b8e,0,0,*(undefined4 *)(param_1 + 0x38),
             *(undefined4 *)(param_1 + 0x3c));
LAB_00149670:
  STUB_0006d708();
  return 0x10;
}


// 0x01496a4 (0x320 bytes)
// strings: 00653614: 'rc1/ps3data/global/help_controlsA/help_controlsA[%d]' | 006535f0: '%s.ps3' | 006535f8: '%s.vram' | 0065364c: 'rc1/ps3data/global/help_controlsB/help_controlsB[%d]'

/* [p2_pause] loads help_controlsA/B[%d]
   [p2_pause] loads help_controlsA/B[%d]
   [p2_pause] loads help_controlsA/B[%d] */

undefined8 HelpControls_Update(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char acStack_230 [128];
  char acStack_1b0 [128];
  char acStack_130 [128];
  char acStack_b0 [128];
  
  iVar2 = g_pIdolDrawBase;
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 < 2) {
    if (-1 < iVar1) {
      if (iVar1 < 1) {
        if ((*(int *)(param_1 + 0x48) != 0) && (g_MusicLoading == 0)) {
          snprintf(acStack_230,"rc1/ps3data/global/help_controlsA/help_controlsA[%d]",
                         g_Language);
          snprintf(acStack_1b0,"%s.ps3",acStack_230);
          LoadAssetFromFile(acStack_1b0,g_NpcBuffer,0x24);
          piVar3 = g_NpcBuffer;
          snprintf(acStack_1b0,"%s.vram",acStack_230);
          iVar5 = DAT_00a10924;
          LoadAssetFromFile(acStack_1b0,DAT_00a10924,0x100000);
          iVar1 = piVar3[1];
          iVar4 = *piVar3 + (iVar5 - *(int *)(iVar2 + 0x4ac));
          iVar2 = piVar3[2];
          iVar5 = piVar3[3];
          *piVar3 = iVar4;
          *(int *)(param_1 + 100) = iVar4;
          *(int *)(param_1 + 0x68) = iVar1;
          *(int *)(param_1 + 0x6c) = iVar2;
          *(int *)(param_1 + 0x70) = iVar5;
          iVar1 = piVar3[5];
          iVar2 = piVar3[6];
          iVar5 = piVar3[7];
          *(int *)(param_1 + 0x74) = piVar3[4];
          *(int *)(param_1 + 0x78) = iVar1;
          *(int *)(param_1 + 0x7c) = iVar2;
          *(int *)(param_1 + 0x80) = iVar5;
          *(int *)(param_1 + 0x84) = piVar3[8];
          *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
        }
      }
      else if (g_MusicLoading == 0) {
        *(int *)(param_1 + 0x44) = iVar1 + 1;
      }
    }
  }
  else if (iVar1 < 3) {
    if ((*(int *)(param_1 + 0x4c) != 0) && (g_MusicLoading == 0)) {
      snprintf(acStack_130,"rc1/ps3data/global/help_controlsB/help_controlsB[%d]",g_Language);
      snprintf(acStack_b0,"%s.ps3",acStack_130);
      LoadAssetFromFile(acStack_b0,g_NpcBuffer,0x24);
      piVar3 = g_NpcBuffer;
      snprintf(acStack_b0,"%s.vram",acStack_130);
      iVar5 = DAT_00a10924 + 0x100000;
      LoadAssetFromFile(acStack_b0,iVar5,0x100000);
      iVar1 = piVar3[1];
      iVar4 = *piVar3 + (iVar5 - *(int *)(iVar2 + 0x4ac));
      iVar2 = piVar3[2];
      iVar5 = piVar3[3];
      *piVar3 = iVar4;
      *(int *)(param_1 + 0x88) = iVar4;
      *(int *)(param_1 + 0x8c) = iVar1;
      *(int *)(param_1 + 0x90) = iVar2;
      *(int *)(param_1 + 0x94) = iVar5;
      iVar1 = piVar3[5];
      iVar2 = piVar3[6];
      iVar5 = piVar3[7];
      *(int *)(param_1 + 0x98) = piVar3[4];
      *(int *)(param_1 + 0x9c) = iVar1;
      *(int *)(param_1 + 0xa0) = iVar2;
      *(int *)(param_1 + 0xa4) = iVar5;
      *(int *)(param_1 + 0xa8) = piVar3[8];
      *(undefined1 *)(param_1 + 0xac) = 1;
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
    }
  }
  else if ((iVar1 < 4) && (g_MusicLoading == 0)) {
    *(int *)(param_1 + 0x44) = iVar1 + 1;
  }
  return 0;
}


// 0x01499c4 (0x184 bytes)
/* [p2_pause] draws controls image
   [p2_pause] draws controls image
   [p2_pause] draws controls image */

undefined8 HelpControls_Draw(int param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x44) < 4) {
    uVar1 = 0;
  }
  else {
    STUB_0006d704(0);
    Sprite_DrawShape(10,0,0xf6,0x100,0,0,0x100,0x100);
    Sprite_DrawShape(0x100,0,0x100,0x100,0,0,0x100,0x100);
    STUB_0006d708();
    uVar1 = 8;
  }
  return uVar1;
}


// 0x0149b50 (0x40c bytes)
/* [p2_pause] draws blinking overlays per g_MapCurIndex
   [p2_pause] draws blinking overlays per g_MapCurIndex
   [p2_pause] draws blinking overlays per g_MapCurIndex */

undefined8 MapPage_DrawOverlay(void)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  if (g_MapCurIndex < 0) {
    uVar2 = 0;
  }
  else {
    if (((g_MapCurIndex == 6) || (g_MapCurIndex == 0xd)) || (g_MapCurIndex == 0x11))
    {
      uVar2 = idol_draw::Blend(0,0,0,0,0,0,0,0);
      SetGSReg(0x16,uVar2);
      uVar2 = SCE_GS_SET_CLAMP(1,1,0,0,0,0);
      SetGSReg(6,uVar2);
      uVar6 = 0;
      dVar8 = (double)(longlong)(int)DAT_00966b8c;
      dVar7 = (double)(longlong)(int)DAT_00966b8e;
      Hud_DrawTexQuadF_v2(0,0,dVar8,dVar7,0,0,&DAT_00a20718);
      uVar2 = idol_draw::Blend(1,5,0x60,3,0,0,0,0);
      SetGSReg(0x16,uVar2);
      if (g_MainLoopFrames % 0x3c < 0x28) {
        Hud_DrawTexQuadF_v2(uVar6,uVar6,dVar8,dVar7,uVar6,uVar6,&DAT_00a2073c);
      }
      if (g_MainLoopFrames % 0x96 < 0x5a) {
        Hud_DrawTexQuadF_v2(uVar6,uVar6,dVar8,dVar7,uVar6,uVar6,&DAT_00a20760);
      }
    }
    else {
      uVar1 = *(uint *)(&DAT_007354d4 + g_MapCurIndex * 4) & 0x7fffffff;
      lVar4 = (longlong)((int)((int)((longlong)DAT_00966b8e << 4) + uVar1 * -2) >> 4);
      uVar3 = g_MainLoopFrames + g_MapCurIndex * 0x2ab;
      dVar8 = (double)(longlong)((int)((int)((longlong)DAT_00966b8c << 4) + uVar1 * -2) >> 4);
      lVar5 = (longlong)
              (int)(uVar3 + (((int)uVar3 >> 0xb) + (uint)((int)uVar3 < 0 && (uVar3 & 0x7ff) != 0)) *
                            -0x800);
      dVar9 = (double)((float)(longlong)(int)*(uint *)(&DAT_007354d4 + g_MapCurIndex * 4) *
                      0.0625);
      uVar2 = 0;
      dVar7 = (double)lVar4;
      Hud_DrawTexQuadF_v2
                (dVar9,dVar9,dVar8,dVar7,(double)((float)lVar5 * 0.0625),0,&DAT_00a20718,lVar4,lVar5
                 ,8,8);
      Hud_DrawTexQuadF_v2(dVar9,dVar9,dVar8,dVar7,uVar2,uVar2,&DAT_00a2073c);
      Hud_DrawTexQuadF_v2(dVar9,dVar9,dVar8,dVar7,uVar2,uVar2,&DAT_00a20760);
    }
    uVar2 = 4;
  }
  return uVar2;
}


// 0x0149f88 (0x4cc bytes)
/* [p2_pause] draw for SlotConfig widget
   [p2_pause] draw for SlotConfig widget
   [p2_pause] draw for SlotConfig widget */

undefined8 SlotConfig_Draw(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar7;
  undefined8 uVar6;
  int iVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  STUB_0006d704(0);
  iVar9 = *(int *)(param_1 + 0x20);
  iVar8 = *(int *)(param_1 + 0x24);
  dVar18 = (double)((float)(longlong)iVar9 * 0.5);
  dVar17 = (double)((float)(longlong)iVar8 * 0.5);
  if (iVar8 <= iVar9) {
    iVar9 = iVar8;
  }
  iVar10 = 0;
  iVar8 = 0;
  dVar16 = (double)((float)(longlong)iVar9 * 0.5 - 40.0);
  do {
    dVar11 = (double)FastAddRots((float)(longlong)iVar10 * 0.7853982 + -1.5707964);
    fVar1 = (float)(dVar11 + 1.570796251296997);
    fVar4 = fVar1;
    if (3.1415925 - fVar1 <= fVar1) {
      fVar4 = 3.1415925 - fVar1;
    }
    if (fVar4 <= -3.1415925 - fVar1) {
      fVar4 = -3.1415925 - fVar1;
    }
    fVar5 = fVar4 * fVar4;
    fVar1 = fVar5 * fVar5 * fVar4;
    fVar3 = fVar5 * fVar1;
    dVar15 = (double)(float)(dVar18 + (double)(float)((double)(fVar4 + fVar5 * fVar4 * -0.16666657 +
                                                               fVar1 * 0.0083330255 +
                                                               fVar3 * -0.0001980741 +
                                                              fVar5 * fVar3 * 2.601887e-06) * dVar16
                                                     ));
    dVar12 = dVar11;
    if ((double)(float)(3.141592502593994 - dVar11) <= dVar11) {
      dVar12 = (double)(float)(3.141592502593994 - dVar11);
    }
    if (dVar12 <= (double)(float)(-3.141592502593994 - dVar11)) {
      dVar12 = (double)(float)(-3.141592502593994 - dVar11);
    }
    dVar11 = (double)(float)(dVar12 * dVar12);
    dVar13 = (double)(float)(dVar11 * (double)(float)(dVar11 * dVar12));
    dVar14 = (double)(float)(dVar11 * dVar13);
    dVar11 = (double)(float)(dVar17 + (double)(float)((double)((float)(dVar12 + (double)(float)((
                                                  double)(float)(dVar11 * dVar12) *
                                                  -0.16666656732559204)) +
                                                  (float)(dVar13 * 0.008333025500178337) +
                                                  (float)(dVar14 * -0.0001980741071747616) +
                                                  (float)(dVar11 * dVar14) * 2.601887e-06) * dVar16)
                            );
    if (iVar10 == *(int *)(param_1 + 0x50)) {
      iVar7 = FUN_005c4988(((ulonglong)g_MainLoopFrames & 0x3f) - 0x20);
      iVar9 = (int)dVar15;
      iVar2 = (int)dVar11;
      DrawFlatOverlay
                (iVar9 + -0x13,iVar2 + -0x13,iVar9 + 0x13,iVar2 + 0x13,
                 (iVar7 + 0x40) * 0x10202 | 0x80000000,0);
      DrawFlatOverlay(iVar9 + -0x12,iVar2 + -0x12,iVar9 + 0x12,iVar2 + 0x12,DAT_00729840,0);
    }
    iVar9 = *(int *)(param_1 + 0x30 + iVar8);
    if (iVar9 == 0) {
      DrawFlatOverlay
                ((int)dVar15 + -0xf,(int)dVar11 + -0xf,(int)dVar15 + 0xf,(int)dVar11 + 0xf,
                 0x40404040,0);
    }
    else {
      uVar6 = 0;
      if ((&g_goldWeaponsArray.field0_0x0)[iVar9] != '\0') {
        uVar6 = 4;
      }
      uVar6 = GetIconFrameTex
                        (*(undefined2 *)
                          (&DAT_00721038 + iVar9 * -4 + (int)((longlong)iVar9 << 4) * 5),uVar6);
      DrawSprite(uVar6,(int)dVar15 + -0x11,(int)dVar11 + -0x11,0x20,0x20,0x80);
    }
    iVar10 = iVar10 + 1;
    iVar8 = iVar8 + 4;
  } while (iVar10 < 8);
  uVar6 = GetIconFrameTex(0xe99e,0);
  DrawSprite(uVar6,8,0x27,0x20,0xffffffffffffffe0,0x80);
  uVar6 = GetIconFrameTex(0xe99e,0);
  DrawSprite(uVar6,*(int *)(param_1 + 0x20) + -10,0x27,0xffffffffffffffe0,0xffffffffffffffe0,
                  0x80);
  FontPrintMediumLeft(0x28,0xf,0x80ffa888,&DAT_00653684,0xffffffffffffffff);
  FontPrintMediumLeft
            (*(int *)(param_1 + 0x20) + -0x3c,0xf,0x80ffa888,&DAT_0065368c,0xffffffffffffffff);
  STUB_0006d708();
  return 2;
}


// 0x014a460 (0x40c bytes)
/* [p2_pause] prompt/FadeToBlack
   [p2_pause] prompt/FadeToBlack
   [p2_pause] prompt/FadeToBlack */

undefined8 ConfirmDialog_Update(undefined8 param_1)

{
  int iVar1;
  byte *pbVar2;
  undefined4 uVar3;
  GPiece<16> auVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  
  uVar8 = g_Pad.pressedButton;
  iVar5 = (int)param_1;
  if (*(int *)(iVar5 + 0x3c) == 0) {
    if (*(int *)(g_currentMenuPage + 0x40) == iVar5) {
      if (((g_Pad.pressedButton & 0xd00) == 0) || (g_unclosableMenu != 0)) {
        if ((g_Pad.pressedButton & 0x10) != 0) {
          if (*(int *)(g_currentMenuPage + 0x38) != 0) {
            g_nextMenuPage = *(int *)(g_currentMenuPage + 0x38);
            return 0;
          }
          if (g_unclosableMenu == 0) {
            return 0xffffffffffffffff;
          }
        }
        iVar1 = *(int *)(iVar5 + 0x38);
        if (((g_Pad.pressedButton & 0x1000) != 0) && (iVar1 != 0)) {
          *(int *)(iVar5 + 0x38) = iVar1 + -1;
        }
        if (((uVar8 & 0x4000) != 0) &&
           (*(int *)(*(int *)(iVar5 + 0x34) + 0x14 + *(int *)(iVar5 + 0x38) * 0x14) != 0)) {
          *(int *)(iVar5 + 0x38) = *(int *)(iVar5 + 0x38) + 1;
        }
        if ((g_Pad.pressedButton & pad_ConfirmButtonMask) != 0) {
          PlayMobySound(0,0x11,*(MobyInstance **)(iVar5 + 0x14));
          iVar7 = *(int *)(iVar5 + 0x38) * 0x14;
          if ((*(uint *)(*(int *)(iVar5 + 0x34) + 0x10 + iVar7) & 1) == 0) {
            piVar6 = (int *)(*(int *)(iVar5 + 0x34) + 4 + iVar7);
            if (*piVar6 != 0) {
              pbVar2 = (byte *)*piVar6;
              *pbVar2 = (byte)((ulonglong)(LZCOUNT((uint)*pbVar2) << 0x20) >> 0x25);
            }
          }
          else if (DAT_00a52e60 == 0) {
            FadeToBlack(4);
            auVar4 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar3 = storeVectorElementWordIndexed
                              (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,0x3c,
                               param_1);
            *(undefined4 *)(iVar5 + 0x3cU & 0xfffffffc) = uVar3;
            DAT_00a52e60 = (byte)((ulonglong)(LZCOUNT((uint)DAT_00a52e60) << 0x20) >> 0x25);
          }
          else {
            DisplayPrompt(6,g_currentMenuPage,0);
          }
        }
        if (*(int *)(iVar5 + 0x38) != iVar1) {
          PlayMobySound(1,0x11,*(MobyInstance **)(iVar5 + 0x14));
        }
        uVar9 = 0;
      }
      else {
        uVar9 = 1;
      }
    }
    else {
      uVar9 = 0;
    }
  }
  else {
    *(int *)(iVar5 + 0x3c) = *(int *)(iVar5 + 0x3c) + -1;
    uVar9 = 0;
    auVar4 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
    SceneScreenFade =
         (float)storeVectorElementWordIndexed
                          (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,0,0x95cf10);
  }
  return uVar9;
}


// 0x014a86c (0x2f8 bytes)
/* [p2_pause] draw
   [p2_pause] draw
   [p2_pause] draw */

undefined8 ConfirmDialog_Draw(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar4;
  undefined8 uVar3;
  int iVar5;
  int iVar6;
  StringId *pSVar7;
  StringId helpmsg;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  GPiece<24> local_80;
  
  uVar2 = idol_draw::Blend(1,5,4,0,0,0,0,1);
  SetGSReg(0x16,uVar2);
  STUB_0006d704(0);
  if (((*(uint *)(param_1 + 0x30) & 1) != 0) && (**(int **)(param_1 + 0x34) == 0)) {
    uVar2 = help_msg_string_by_index(STR_NO_CHEATS_ACTIVATED);
    FontPrintMediumOpt(local_80,0x80ffa888,uVar2,0xffffffffffffffff);
  }
  iVar9 = 0;
  if (**(int **)(param_1 + 0x34) != 0) {
    iVar4 = 0;
    iVar9 = 0;
    do {
      iVar4 = iVar4 + 0x14;
      iVar9 = iVar9 + 1;
    } while (*(int *)(*(int *)(param_1 + 0x34) + iVar4) != 0);
  }
  iVar4 = *(int *)(param_1 + 0x24);
  iVar8 = 0;
  iVar10 = iVar4 / (iVar9 + 1) + -8;
  if (**(int **)(param_1 + 0x34) != 0) {
    iVar6 = 0;
    iVar5 = 0;
    do {
      pSVar7 = (StringId *)(*(int *)(param_1 + 0x34) + iVar6);
      uVar2 = 0xffffffff80ffa888;
      if (iVar8 == *(int *)(param_1 + 0x38)) {
        uVar2 = 0xffffffff8020ffff;
      }
      cVar11 = '\0';
      if ((char *)pSVar7[1] != (char *)0x0) {
        cVar11 = *(char *)pSVar7[1];
      }
      uVar3 = help_msg_string_by_index(*pSVar7);
      FontPrintMediumLeft(0xc,iVar10,uVar2,uVar3,0xffffffffffffffff);
      iVar1 = *(int *)(param_1 + 0x20);
      if (cVar11 == '\0') {
        helpmsg = pSVar7[3];
      }
      else {
        helpmsg = pSVar7[2];
      }
      uVar2 = help_msg_string_by_index(helpmsg);
      FontPrintMediumRight(iVar1 + -0xc,iVar10,0x80ffa888,uVar2,0xffffffffffffffff);
      iVar5 = iVar5 + 0x14;
      iVar10 = iVar10 + iVar4 / (iVar9 + 1);
      iVar6 = iVar6 + 0x14;
      iVar8 = iVar8 + 1;
    } while (*(int *)(*(int *)(param_1 + 0x34) + iVar5) != 0);
  }
  STUB_0006d708();
  return 2;
}


// 0x014ab64 (0x218 bytes)
/* [p2_pause] update callback paired with DrawCameraSettingsFrame
   [p2_pause] update callback paired with DrawCameraSettingsFrame
   [p2_pause] update callback paired with DrawCameraSettingsFrame */

undefined8 CameraSettings_Update(undefined **param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar3 = g_Pad.pressedButton;
  if (*(undefined ***)(g_currentMenuPage + 0x40) == param_1) {
    if (((g_Pad.pressedButton & 0xd00) == 0) || (g_unclosableMenu != 0)) {
      if ((g_Pad.pressedButton & 0x10) != 0) {
        if (*(int *)(g_currentMenuPage + 0x38) != 0) {
          g_nextMenuPage = *(int *)(g_currentMenuPage + 0x38);
          return 0;
        }
        if (g_unclosableMenu == 0) {
          return 0xffffffffffffffff;
        }
      }
      puVar1 = param_1[0xe];
      if (((g_Pad.pressedButton & 0x1000) != 0) && (puVar1 != (undefined *)0x0)) {
        param_1[0xe] = puVar1 + -1;
      }
      if (((uVar3 & 0x4000) != 0) && (*(int *)(param_1[0xd] + (int)param_1[0xe] * 0x20 + 0x20) != 0)
         ) {
        param_1[0xe] = param_1[0xe] + 1;
      }
      if (puVar1 != param_1[0xe]) {
        PlayMobySound(1,0x11,(MobyInstance *)param_1[5]);
      }
      for (uVar5 = 0; iVar6 = (int)uVar5,
          iVar6 < 6 &&
          *(int *)(param_1[0xd] + (int)((uVar5 & 0xffffffff) << 2) + (int)param_1[0xe] * 0x20 + 8)
          != 0; uVar5 = uVar5 + 1) {
      }
      if (((g_Pad.pressedButton & pad_ConfirmButtonMask) != 0) &&
         (pbVar2 = *(byte **)(param_1[0xd] + (int)param_1[0xe] * 0x20 + 4), pbVar2 != (byte *)0x0))
      {
        if (param_1 == &PTR_PTR_0072d360) {
          *(int *)pbVar2 = (*(int *)pbVar2 + 1) - ((*(int *)pbVar2 + 1) / iVar6) * iVar6;
        }
        else {
          *pbVar2 = (char)(*pbVar2 + 1) - (char)((int)(*pbVar2 + 1) / iVar6) * (char)uVar5;
        }
        PlayMobySound(0,0x11,(MobyInstance *)param_1[5]);
      }
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


// 0x014ad88 (0x48c bytes)
// strings: 0014ad80: '?fffA@' (raw)

undefined8 DrawCameraSettingsFrame(undefined **param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  StringId *pSVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  undefined8 uVar15;
  
  uVar4 = idol_draw::Blend(1,5,4,0,0,0,0,1);
  SetGSReg(0x16,uVar4);
  STUB_0006d704(0);
  uVar4 = 0x3fecccccc0000000;
  if (g_Language < 4) {
    uVar15 = 0x3ff0000000000000;
    if (1 < g_Language) {
      uVar15 = uVar4;
    }
  }
  else {
    uVar15 = uVar4;
    if ((4 < g_Language) && (uVar15 = 0x3ff0000000000000, g_Language < 6)) {
      uVar15 = uVar4;
    }
  }
  iVar12 = 0;
  if (*(int *)param_1[0xd] != 0) {
    iVar13 = 0;
    iVar12 = 0;
    do {
      iVar13 = iVar13 + 0x20;
      iVar12 = iVar12 + 1;
    } while (*(int *)(param_1[0xd] + iVar13) != 0);
  }
  puVar1 = param_1[9];
  iVar11 = 0;
  iVar13 = (int)puVar1 / (iVar12 + 1) + -8;
  if (*(int *)param_1[0xd] != 0) {
    iVar8 = 0;
    iVar7 = 0;
    do {
      uVar6 = 0x80ffa888;
      pSVar10 = (StringId *)(param_1[0xd] + iVar8);
      if (((iVar11 == 3) && (param_1 == &PTR_PTR_0072d360)) &&
         (*(char *)(g_pIdolDraw + 0x185a4) != '\0')) {
        iVar3 = iRam0072d380 >> 1;
        iVar9 = iVar13 + 4;
        uVar4 = 0x4028000000000000;
        if (param_1[0xe] == (undefined *)0x3) {
          uVar6 = 0x8020ffff;
        }
        uVar5 = help_msg_string_by_index(STR_D_LEVEL);
        FontPrintScaledMedium(uVar4,(double)(longlong)iVar9,uVar15,uVar5,(longlong)iVar9,uVar6,uVar5,
                            0xffffffffffffffff);
        DrawFlatOverlay(iVar3 + 0x57,iVar9,iRam0072d380 + -10,iVar13 + 0x12,0x80696969,0);
        DrawFlatOverlay(iVar3 + 0x59,iVar13 + 5,iRam0072d380 + -0xc,iVar13 + 0xf,0x80383838,0);
        iVar9 = ((iRam0072d380 - (iVar3 + 0x50)) + -0x15) * DAT_00a52e64;
        uVar4 = GetIconFrameTex(0xe99e,8);
        DrawSprite2(uVar4,iVar3 + 0x59,iVar13 + 5,iVar3 + 0x50 + iVar9 / 5 + 8,iVar13 + 0xe,0,
                         0x13,0x35);
        iVar13 = iVar13 + 6;
      }
      else {
        uVar4 = 0x4028000000000000;
        dVar14 = (double)(longlong)iVar13;
        help_msg_string_by_index(*pSVar10);
        FontPrintScaledMedium(uVar4,dVar14,uVar15);
        puVar2 = param_1[8];
        uVar4 = help_msg_string_by_index(pSVar10[*(int *)pSVar10[1] + 2]);
        FontPrintRightWithScale
                  (uVar15,puVar2 + -0xc,iVar13,0x80ffa888,uVar4,0xffffffffffffffff);
      }
      iVar13 = iVar13 + (int)puVar1 / (iVar12 + 1);
      iVar7 = iVar7 + 0x20;
      iVar8 = iVar8 + 0x20;
      iVar11 = iVar11 + 1;
    } while (*(int *)(param_1[0xd] + iVar7) != 0);
  }
  STUB_0006d708();
  return 2;
}


// 0x014b214 (0x118 bytes)
/* [p2_pause] builds list from g_goldWeaponsArray
   [p2_pause] builds list from g_goldWeaponsArray
   [p2_pause] builds list from g_goldWeaponsArray */

undefined8 GoldWeapons_OnEnter(void)

{
  undefined uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined2 uVar9;
  
  iVar7 = 0;
  lVar8 = 0;
  iVar6 = 0;
  do {
    sVar5 = *(short *)((int)&DAT_0072a702 + iVar6);
    if ((&UnlockableItems.field0_0x0)[sVar5] != '\0') {
      iVar4 = sVar5 * 0x10 + ((int)sVar5 + sVar5 * -0x10) * -4;
      iVar3 = (int)lVar8 * 2 + (int)(lVar8 << 3);
      uVar9 = 0;
      uVar1 = (&g_goldWeaponsArray.field0_0x0)[sVar5];
      *(undefined2 *)((int)&DAT_00a530c0 + iVar3) = *(undefined2 *)(&DAT_00721038 + iVar4);
      if (uVar1 != '\0') {
        uVar9 = 4;
      }
      uVar1 = (&g_goldWeaponsArray.field0_0x0)[sVar5];
      *(undefined2 *)((int)&DAT_00a530c0 + iVar3 + 2) = uVar9;
      *(undefined2 *)((int)&DAT_00a530c4 + iVar3) = 0;
      *(short *)((int)&DAT_00a530c4 + iVar3 + 2) = sVar5;
      *(short *)((int)&DAT_00a530c8 + iVar3) = (short)iVar7;
      if (uVar1 == '\0') {
        sVar5 = *(short *)(iVar4 + 0x721040);
      }
      else {
        sVar5 = *(short *)(iVar4 + 0x721042);
      }
      lVar2 = lVar8 << 2;
      lVar8 = lVar8 + 1;
      *(int *)(&DAT_00a53158 + (int)lVar2) = (int)sVar5;
    }
    iVar7 = iVar7 + 1;
    iVar6 = iVar6 + 10;
  } while (iVar7 < 0xf);
  DAT_0072c4f4 = (int)lVar8;
  return 0;
}


// 0x014b32c (0x14c bytes)
/* [p2_pause] builds weapon list from UnlockableItems
   [p2_pause] builds weapon list from UnlockableItems
   [p2_pause] builds weapon list from UnlockableItems */

void Weapons_OnEnter(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  iVar7 = 0;
  lVar8 = 0;
  iVar5 = 0;
  do {
    if (iVar7 < 6) {
      iVar6 = (int)*(short *)((int)&DAT_0072a21e + iVar5);
    }
    else if (iVar7 < 9) {
      iVar6 = (int)*(short *)((int)&DAT_0072a21e + iVar5);
    }
    else if (iVar7 < 0xc) {
      iVar6 = (int)*(short *)((int)&DAT_0072a21e + iVar5);
    }
    else {
      iVar6 = (int)*(short *)((int)&DAT_0072a21e + iVar5);
    }
    if ((&UnlockableItems.field0_0x0)[iVar6] != '\0') {
      iVar3 = (int)lVar8 * 2 + (int)(lVar8 << 3);
      sVar1 = *(short *)(iVar6 * 0x4c + 0x721040);
      sVar2 = *(short *)(&DAT_00721044 + iVar6 * 0x13);
      iVar4 = (int)(lVar8 << 2);
      *(undefined2 *)((int)&DAT_00a53194 + iVar3) = *(undefined2 *)(&DAT_00721038 + iVar6 * 0x4c);
      *(undefined2 *)((int)&DAT_00a53196 + iVar3) = 0;
      *(undefined2 *)((int)&DAT_00a53198 + iVar3) = 0;
      *(short *)((int)&DAT_00a5319a + iVar3) = (short)iVar6;
      *(short *)((int)&DAT_00a5319c + iVar3) = (short)iVar7;
      lVar8 = lVar8 + 1;
      *(int *)(&DAT_00a53220 + iVar4) = (int)sVar1;
      *(int *)(&DAT_00a53258 + iVar4) = (int)sVar2;
    }
    iVar7 = iVar7 + 1;
    iVar5 = iVar5 + 10;
  } while (iVar7 < 0xe);
  DAT_0072c8bc = (int)lVar8;
  return;
}


// 0x014b478 (0x8 bytes)
undefined8 STUB_0014b478(...)

{
  return 0;
}


// 0x014b480 (0x138 bytes)
/* [p2_pause] builds list from GalacticMap/g_PlanetsPage
   [p2_pause] builds list from GalacticMap/g_PlanetsPage
   [p2_pause] builds list from GalacticMap/PlanetsPage */

void PlanetList_OnEnter(int param_1)

{
  undefined *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = 0;
  while ((iVar3 = (int)uVar2, iVar3 < 0x14 &&
         (iVar4 = (int)((uVar2 & 0xffffffff) << 2), *(int *)((int)GalacticMap + iVar4) != 0))) {
    iVar4 = *(int *)((int)GalacticMap + iVar4);
    iVar3 = iVar3 * 0xc;
    *(short *)(&DAT_00a53290 + iVar3) = (short)g_PlanetsPage[iVar4].nameId;
    uVar2 = uVar2 + 1;
    *(undefined2 *)(&DAT_00a53292 + iVar3) = 1;
    *(undefined4 *)(&DAT_00a53294 + iVar3) = 0;
    *(short *)(&DAT_00a53298 + iVar3) = (short)g_PlanetsPage[iVar4].subPlanetNameId;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  puVar1 = ptr_GalacticMap;
  iVar4 = 0;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x8000;
  *(undefined2 *)(&DAT_00a53290 + iVar3 * 0xc) = 0;
  iVar3 = *(int *)puVar1;
  while( true ) {
    if (iVar3 == 0) {
      return;
    }
    if (g_SelectedLevel == *(int *)(ptr_GalacticMap + iVar4 * 4)) break;
    iVar4 = iVar4 + 1;
    iVar3 = *(int *)(ptr_GalacticMap + iVar4 * 4);
  }
  *(int *)(param_1 + 0x40) = iVar4;
  return;
}


// 0x014b5b8 (0x3c bytes)
/* [p2_pause] confirm -> page 0x72dc78; paired with DrawGalacticMapFrame
   [p2_pause] confirm -> page 0x72dc78; paired with DrawGalacticMapFrame
   [p2_pause] confirm -> page 0x72dc78; paired with DrawGalacticMapFrame */

undefined8 GalacticMap_Update(void)

{
  if ((g_Pad.pressedButton & pad_ConfirmButtonMask) != 0) {
    g_nextMenuPage = &DAT_0072dc78;
  }
  return 0;
}


// 0x014b5f4 (0xb4 bytes)
// strings: 00653690: 'Galactic Map Draw'

undefined8 pause_DrawGalacticMapFrame(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar4 = *(int *)(param_1 + 0x24);
  idol_draw::RsxCmd_DebugStr_Marker(HUD_Pass,"Galactic Map Draw");
  idol_draw::DrawGalacticMapFrame(iVar1,iVar1 + iVar2,iVar3,iVar3 + iVar4);
  idol_draw::RsxCmd_WritePass(HUD_Pass);
  return 2;
}


// 0x014b6a8 (0x124 bytes)
/* [p2_pause] planet page input
   [p2_pause] planet page input
   [p2_pause] planet page input */

undefined8 PlanetSelect_Update(int param_1)

{
  if ((g_Pad.pressedButton & 0x10) == 0) {
    if ((g_Pad.pressedButton & 0x800) != 0) {
      g_SelectedLevel = Level;
      return 1;
    }
    if ((g_Pad.pressedButton & 0x40) != 0) {
      PlayMobySound(0,0x11,*(MobyInstance **)(param_1 + 0x14));
      return 1;
    }
    if ((g_Pad.pressedButton & 0x20) != 0) {
      resumeScreen = 0xf;
      resumePage = g_currentMenuPage;
      g_menuClosing = 3;
      DAT_00a52c90 = g_SelectedLevel;
      PlayMobySound(0,0x11,*(MobyInstance **)(param_1 + 0x14));
    }
  }
  else {
    if (*(int *)(g_currentMenuPage + 0x38) != 0) {
      g_nextMenuPage = *(undefined4 *)(g_currentMenuPage + 0x38);
      return 0;
    }
    if (g_unclosableMenu == 0) {
      return 0xffffffffffffffff;
    }
  }
  return 0;
}


// 0x014b7cc (0x54 bytes)
undefined8 MessageBox_OnEnter(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(g_currentMenuPage + 0x84) = 0;
  uVar1 = Menu_AllocStreamBuffer(0);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  return 0;
}


// 0x014b820 (0xe8 bytes)
undefined8 MessageBox_OnExit(int param_1)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  
  cVar2 = DAT_00a52c7b;
  uVar3 = 0;
  while ((iVar1 = (int)((uVar3 & 0xffffffff) << 3),
         *(int *)((int)&DAT_00a53098 + iVar1) != *(int *)(param_1 + 0x54) ||
         ((*(uint *)((int)&DAT_00a5309c + iVar1) & 2) == 0))) {
    uVar3 = uVar3 + 1;
    if (4 < (int)uVar3) {
LAB_0014b8dc:
      *(undefined4 *)(param_1 + 0x54) = 0;
      return 0;
    }
  }
  if (((*(uint *)((int)&DAT_00a5309c + iVar1) & 4) != 0) &&
     (*(uint *)((int)&DAT_00a5309c + iVar1) = *(uint *)((int)&DAT_00a5309c + iVar1) ^ 4,
     cVar2 != '\0')) {
    music_StopLoad();
    DAT_00a52c7b = '\0';
  }
  *(uint *)((int)&DAT_00a5309c + iVar1) = *(uint *)((int)&DAT_00a5309c + iVar1) & 0xfffffffd;
  goto LAB_0014b8dc;
}


// 0x014b908 (0x98 bytes)
/* [p2_pause] confirm/triangle back
   [p2_pause] confirm/triangle back
   [p2_pause] confirm/triangle back */

void MessageBox_Update(void)

{
  if ((g_CardState == 0x10) || (g_CardState == 1)) {
    if ((g_Pad.buttonsPressedThisFrame & DAT_00902ed8) == 0) {
      if ((g_Pad.buttonsPressedThisFrame & TRIANGLE) != 0) {
        g_nextMenuPage = *(undefined4 *)(g_currentMenuPage + 0x38);
        *(undefined4 *)(g_currentMenuPage + 0x84) = 0;
      }
    }
    else {
      DAT_00a52c84 = 0;
      g_nextMenuPage = *(undefined4 *)(g_currentMenuPage + 0x38);
      *(undefined4 *)(g_currentMenuPage + 0x84) = 1;
    }
  }
  else {
    g_nextMenuPage = *(undefined4 *)(g_currentMenuPage + 0x38);
  }
  return;
}


// 0x014b9a8 (0x270 bytes)
/* [p2_pause] '(error)' fallback
   [p2_pause] '(error)' fallback
   [p2_pause] '(error)' fallback */

undefined8 MessageBox_Draw(void)

{
  undefined8 uVar1;
  char *pcVar2;
  GPiece<32> local_50;
  
  uVar1 = idol_draw::PackCmd(0,1,0,1,0);
  SetGSReg(3,uVar1);
  uVar1 = idol_draw::Blend(1,5,4,0,0,0,0,1);
  SetGSReg(0x16,uVar1);
  STUB_0006d704(0);
  pcVar2 = "(error)";
  if (DAT_00a52c84 < 3) {
    if (-1 < DAT_00a52c84) {
      pcVar2 = (char *)help_msg_string_by_index(STR_A_RATCHET_AND_CLANK_0x4FB3);
    }
  }
  else if (DAT_00a52c84 < 4) {
    pcVar2 = (char *)help_msg_string_by_index(STR_SAVING_DATAPLEASE_DO_NOT_0x4FB5);
  }
  uVar1 = 0x3ff0000000000000;
  FontPrintOpt(0x3ff0000000000000,local_50,0x80000000,pcVar2,0xffffffffffffffff);
  FontPrintOpt(uVar1,local_50,0x80000000,pcVar2,0xffffffffffffffff);
  FontPrintOpt(uVar1,local_50,0x80ffa888,pcVar2,0xffffffffffffffff);
  STUB_0006d708();
  return 2;
}


// 0x014bc18 (0x80 bytes)
/* [p2_pause] selects string list by Level%19
   [p2_pause] selects string list by Level%19
   [p2_pause] selects string list by Level%19 */

undefined8 LevelTips_OnEnter(int param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (DAT_00731780 != Level) {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  uVar2 = (ulonglong)Level;
  uVar1 = uVar2 * 0xaf286bcb >> 0x20;
  DAT_00731780 = Level;
  *(undefined **)(param_1 + 0x34) =
       (&PTR_DAT_0072ff98)
       [(int)(uVar2 + ((((uVar2 - uVar1 << 0x20) >> 0x21) + uVar1 << 0x20) >> 0x24) * -0x13)];
  return 0;
}


// 0x014bc98 (0x154 bytes)
undefined8 MenuCycle30_Update(int param_1)

{
  int iVar1;
  
  if (((g_Pad.pressedButton & 0xd00) != 0) && (g_unclosableMenu == 0)) {
    return 1;
  }
  if ((g_Pad.pressedButton & 0x10) != 0) {
    if (*(int *)(g_currentMenuPage + 0x38) != 0) {
      g_nextMenuPage = *(undefined4 *)(g_currentMenuPage + 0x38);
      return 0;
    }
    if (g_unclosableMenu == 0) {
      return 0xffffffffffffffff;
    }
  }
  iVar1 = *(int *)(param_1 + 0x40);
  if ((g_Pad.buttonsPressedThisFrame & CROSS) == 0) {
    if ((g_Pad.buttonsPressedThisFrame & CIRCLE) != 0) {
      *(int *)(param_1 + 0x40) = (iVar1 + 0x1d) % 0x1e;
    }
  }
  else {
    *(int *)(param_1 + 0x40) = (iVar1 + 1) % 0x1e;
  }
  if (*(int *)(param_1 + 0x40) != iVar1) {
    PlayMobySound(1,0x11,*(MobyInstance **)(param_1 + 0x14));
  }
  return 0;
}


// 0x014bdec (0x170 bytes)
undefined8 MenuCycle12_Update(int param_1)

{
  if (((g_Pad.pressedButton & 0xd00) != 0) && (g_unclosableMenu == 0)) {
    return 1;
  }
  if ((g_Pad.pressedButton & 0x10) != 0) {
    if (*(int *)(g_currentMenuPage + 0x38) != 0) {
      g_nextMenuPage = *(undefined4 *)(g_currentMenuPage + 0x38);
      return 0;
    }
    if (g_unclosableMenu == 0) {
      return 0xffffffffffffffff;
    }
  }
  if ((g_Pad.buttonsPressedThisFrame & (RIGHT|CROSS)) == 0) {
    if ((g_Pad.buttonsPressedThisFrame & (LEFT|CIRCLE)) != 0) {
      *(int *)(param_1 + 0x54) = (*(int *)(param_1 + 0x54) + 0xb) % 0xc;
      PlayMobySound(1,0x11,*(MobyInstance **)(param_1 + 0x14));
    }
  }
  else {
    *(int *)(param_1 + 0x54) = (*(int *)(param_1 + 0x54) + 1) % 0xc;
    PlayMobySound(1,0x11,*(MobyInstance **)(param_1 + 0x14));
  }
  return 0;
}


// 0x014bf78 (0x210 bytes)
undefined8 MenuIconText_Draw(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  GPiece<8> local_60;
  GPiece<32> local_58;
  
  STUB_0006d704(0);
  uVar6 = 0x40030a3d80000000;
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar1 = *(uint *)(param_1 + 0x24);
    FontPrintMediumLeft
              (*(int *)(param_1 + 0x20) + -0x18,
               ((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0) + -8,0x80ffa888,
               local_58,0xffffffffffffffff);
    uVar7 = 0x4037000000000000;
    uVar5 = 0x402e000000000000;
    uVar4 = 0x4020000000000000;
    uVar3 = 0x4030000000000000;
    uVar6 = 0x40163d70a0000000;
    iVar2 = GetIconFrameTex(0x40163d70a0000000,0x4030000000000000,0xe99e,6);
    Hud_GetTexIndex(iVar2);
    Hud_DrawTexQuadF_v4(uVar7,uVar5,uVar4,uVar3,uVar6);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x24);
    FontPrintMediumLeft
              (4,((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0) + -8,0x80ffa888,
               local_60,0xffffffffffffffff);
    uVar5 = 0x4038000000000000;
    uVar4 = 0x401c000000000000;
    uVar3 = 0x402c000000000000;
    iVar2 = GetIconFrameTex(0x402c000000000000,0xe99e,6);
    Hud_GetTexIndex(iVar2);
    Hud_DrawTexQuadF_v4(uVar5,uVar5,uVar4,uVar3,uVar6);
  }
  STUB_0006d708();
  return 2;
}


// 0x014c188 (0x1e0 bytes)
/* [p2_pause] STR_ALL_LEVELS
   [p2_pause] STR_ALL_LEVELS
   [p2_pause] STR_ALL_LEVELS */

undefined8 LevelFilter_Draw(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar1 = *(int *)(*(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x34) + 4 +
                  *(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x40) * 0xc);
  STUB_0006d704(0);
  if (iVar1 == -1) {
    uVar2 = *(uint *)(param_1 + 0x20);
    uVar3 = *(uint *)(param_1 + 0x24);
    uVar5 = help_msg_string_by_index(STR_ALL_LEVELS);
    FontPrintMediumCenter
              (((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0),
               ((int)uVar3 >> 1) + (uint)((int)uVar3 < 0 && (uVar3 & 1) != 0) + -8,0x80ffa888,uVar5,
               0xffffffffffffffff);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x24);
    uVar2 = *(uint *)(param_1 + 0x20);
    uVar5 = help_msg_string_by_index(g_PlanetsPage[iVar1].nameId);
    FontPrintMediumCenter
              (((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0),iVar4 / 3 + -8,
               0x80ffa888,uVar5,0xffffffffffffffff);
    iVar4 = *(int *)(param_1 + 0x24);
    uVar2 = *(uint *)(param_1 + 0x20);
    uVar5 = help_msg_string_by_index(g_PlanetsPage[iVar1].subPlanetNameId);
    FontPrintMediumCenter
              (((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0),(iVar4 << 1) / 3 + -8,
               0x80ffa888,uVar5,0xffffffffffffffff);
  }
  STUB_0006d708();
  return 2;
}


// 0x014c370 (0x240 bytes)
// strings: 0096c08c: 'None'

undefined8 ShowScreenAfterDrekDefeat(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  GPiece<8> auStack_80;
  GPiece<16> auStack_78;
  GPiece<16> auStack_68;
  longlong local_58;
  
  MB_UnlockTrophy(DREK_THIS);
  cVar1 = g_SkillPoints[0x1d];
  if ((g_Pad.buttonsPressedThisFrame & CIRCLE) == 0) {
    if ((g_Pad.buttonsPressedThisFrame & CROSS) != 0) {
      iVar2 = 0;
      do {
        iVar3 = iVar2 + 1;
        auStack_80[iVar2] = (&DAT_00a0ca7c)[iVar2];
        iVar2 = iVar3;
      } while (iVar3 < 4);
      FastMemCopy32(auStack_78,Cheats,0xc);
      FastMemCopy32(auStack_68,&DAT_0096c080,0xc);
      memcard_RestoreGame(DAT_00a52c8c);
      iVar2 = 0;
      g_SkillPoints[0x1d] = cVar1;
      do {
        iVar3 = iVar2 + 1;
        (&DAT_00a0ca7c)[iVar2] = auStack_80[iVar2];
        iVar2 = iVar3;
      } while (iVar3 < 4);
      FastMemCopy32(Cheats,auStack_78,0xc);
      FastMemCopy32(&DAT_0096c080,auStack_68,0xc);
      g_goodiesMenuActive = 1;
      MB_UnlockTrophy(DREK_THIS);
      DAT_00a15f39 = 0;
      memcard_Save(0,-1);
      ClearCheckpointData();
      local_58 = (longlong)(int)(animationSpeed * 16.5);
      FadeToBlack((int)(animationSpeed * 16.5));
      g_HeroIsOutOfBounds = 1;
      return 0xffffffffffffffff;
    }
  }
  else {
    g_CardStateFlags = g_CardStateFlags | 2;
    DisplayPrompt(3,0x730928,0);
    PrepareChallengeModeSave(0);
  }
  return 0;
}


// 0x014c5b0 (0x18 bytes)
undefined8 SecretMenu_OnEnter(int param_1)

{
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return 0;
}


// 0x014c5d8 (0xc18 bytes)
/* [p2_pause] L1+L2+R1+R2+Triangle combo
   [p2_pause] L1+L2+R1+R2+Triangle combo
   [p2_pause] L1+L2+R1+R2+Triangle combo */

undefined8 SecretMenu_Update(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  GPiece<16> auVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  
  bVar5 = false;
  if (((((g_Pad.downButtons & L1) != 0) && ((g_Pad.downButtons & L2) != 0)) && ((g_Pad.downButtons & R1) != 0))
     && ((g_Pad.downButtons & R2) != 0)) {
    bVar5 = true;
  }
  if ((DAT_00a52c89 == '\0') || ((bVar5 && ((g_Pad.downButtons & TRIANGLE) != 0)))) {
    if (((g_Pad.pressedButton & 0xd00) != 0) && (g_unclosableMenu == 0)) {
      return 1;
    }
    if ((g_Pad.pressedButton & 0x10) != 0) {
      if (*(int *)(g_currentMenuPage + 0x38) != 0) {
        g_nextMenuPage = *(undefined4 *)(g_currentMenuPage + 0x38);
        return 0;
      }
      if (g_unclosableMenu == 0) {
        return 0xffffffffffffffff;
      }
    }
  }
  iVar4 = (int)param_1;
  iVar6 = *(int *)(iVar4 + 0x40);
  *(int *)(iVar4 + 0x40) = iVar6 + -1;
  if (bVar5) {
    *(int *)(iVar4 + 0x40) = iVar6 + -2;
  }
  iVar6 = 0;
  if (-1 < *(int *)(iVar4 + 0x40)) {
    iVar6 = *(int *)(iVar4 + 0x40);
  }
  iVar1 = *(int *)(iVar4 + 0x50);
  *(int *)(iVar4 + 0x40) = iVar6;
  if (iVar1 < 10) {
    if (iVar1 < 4) {
      if (iVar1 < 1) {
        if (iVar1 < 0) {
          return 0;
        }
        *(int *)(iVar4 + 0x50) = iVar1 + 1;
        auVar3 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar2 = storeVectorElementWordIndexed
                          (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x40,param_1);
        *(undefined4 *)(iVar4 + 0x40U & 0xfffffffc) = uVar2;
        *(undefined4 *)(iVar4 + 0x3c) = 0;
        DAT_0072e4f8 = 0x50aa;
        *(undefined **)(iVar4 + 0x34) = &DAT_00730b90;
        return 0;
      }
      if (iVar1 < 2) goto LAB_0014c8e0;
      if (2 < iVar1) {
        if (iVar6 != 0) {
          return 0;
        }
        DAT_0072e4f8 = 0x50d5;
        *(undefined4 *)(iVar4 + 0x34) = 0x50d6;
        auVar3 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
        iVar6 = *(int *)(iVar4 + 0x50);
        uVar2 = storeVectorElementWordIndexed
                          (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x40,param_1);
        *(undefined4 *)(iVar4 + 0x40U & 0xfffffffc) = uVar2;
        *(undefined4 *)(iVar4 + 0x3c) = 0;
        *(int *)(iVar4 + 0x50) = iVar6 + 1;
        return 0;
      }
    }
    else if (iVar1 < 7) {
      if (iVar1 < 5) {
        if (iVar6 != 0) {
          return 0;
        }
        *(undefined4 *)(iVar4 + 0x50) = 5;
        auVar3 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar2 = storeVectorElementWordIndexed
                          (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x40,param_1);
        *(undefined4 *)(iVar4 + 0x40U & 0xfffffffc) = uVar2;
        *(undefined4 *)(iVar4 + 0x3c) = 0;
        DAT_0072e4f8 = 0x50d7;
        *(undefined **)(iVar4 + 0x34) = &DAT_00730c3c;
        return 0;
      }
      if (iVar1 < 6) goto LAB_0014c8e0;
    }
    else {
      if (iVar1 < 8) {
        if (iVar6 != 0) {
          return 0;
        }
        DAT_0072e4f8 = 0x5107;
        *(undefined **)(iVar4 + 0x34) = &DAT_00730cfc;
        auVar3 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
        iVar6 = *(int *)(iVar4 + 0x50);
        uVar2 = storeVectorElementWordIndexed
                          (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x40,param_1);
        *(undefined4 *)(iVar4 + 0x40U & 0xfffffffc) = uVar2;
        *(undefined4 *)(iVar4 + 0x3c) = 0;
        *(int *)(iVar4 + 0x50) = iVar6 + 1;
        return 0;
      }
      if (iVar1 < 9) goto LAB_0014c8e0;
    }
  }
  else if (iVar1 < 0xf) {
    if (iVar1 < 0xc) {
      if (iVar1 < 0xb) {
        if (iVar6 != 0) {
          return 0;
        }
        DAT_0072e4f8 = 0x5136;
        *(undefined4 *)(iVar4 + 0x34) = 0x5137;
        auVar3 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
        iVar6 = *(int *)(iVar4 + 0x50);
        uVar2 = storeVectorElementWordIndexed
                          (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x40,param_1);
        *(undefined4 *)(iVar4 + 0x40U & 0xfffffffc) = uVar2;
        *(undefined4 *)(iVar4 + 0x3c) = 0;
        *(int *)(iVar4 + 0x50) = iVar6 + 1;
        return 0;
      }
      if (iVar6 != 0) {
        return 0;
      }
      auVar3 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar2 = storeVectorElementWordIndexed
                        (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x40,param_1);
      *(undefined4 *)(iVar4 + 0x40U & 0xfffffffc) = uVar2;
      *(undefined4 *)(iVar4 + 0x3c) = 0;
      DAT_0072e4f8 = 0x5138;
      *(undefined **)(iVar4 + 0x34) = &DAT_00730d8c;
      *(undefined4 *)(iVar4 + 0x50) = 0xc;
      return 0;
    }
    if (iVar1 < 0xd) {
LAB_0014c8e0:
      if (iVar6 != 0) {
        return 0;
      }
      *(undefined4 *)(iVar4 + 0x54) = 0;
      *(int *)(iVar4 + 0x50) = iVar1 + 1;
      return 0;
    }
    if (0xd < iVar1) {
      if (iVar6 != 0) {
        return 0;
      }
      DAT_0072e4f8 = 0;
      *(undefined4 *)(iVar4 + 0x34) = 0x5143;
      auVar3 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
      iVar6 = *(int *)(iVar4 + 0x50);
      uVar2 = storeVectorElementWordIndexed
                        (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x40,param_1);
      *(undefined4 *)(iVar4 + 0x40U & 0xfffffffc) = uVar2;
      *(undefined4 *)(iVar4 + 0x3c) = 0;
      *(int *)(iVar4 + 0x50) = iVar6 + 1;
      return 0;
    }
  }
  else {
    if (0x11 < iVar1) {
      if (iVar1 < 0x13) {
        if (iVar6 != 0) {
          return 0;
        }
        DAT_0072e4f8 = 0;
        *(undefined4 *)(iVar4 + 0x34) = 0x5175;
        *(int *)(iVar4 + 0x50) = *(int *)(iVar4 + 0x50) + 1;
        auVar3 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar2 = storeVectorElementWordIndexed
                          (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x40,param_1);
        *(undefined4 *)(iVar4 + 0x40U & 0xfffffffc) = uVar2;
        return 0;
      }
      if (0x13 < iVar1) {
        return 0;
      }
      if (iVar6 != 0) {
        return 0;
      }
      if (DAT_00a52c89 == '\0') {
        return 0;
      }
      return 1;
    }
    if (iVar1 < 0x10) {
      if (iVar6 != 0) {
        return 0;
      }
      auVar3 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar2 = storeVectorElementWordIndexed
                        (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x40,param_1);
      *(undefined4 *)(iVar4 + 0x40U & 0xfffffffc) = uVar2;
      *(undefined4 *)(iVar4 + 0x3c) = 0;
      DAT_0072e4f8 = 0x5144;
      *(undefined **)(iVar4 + 0x34) = &DAT_00730da4;
      *(undefined4 *)(iVar4 + 0x50) = 0x10;
      return 0;
    }
    if (iVar1 < 0x11) goto LAB_0014c8e0;
  }
  iVar6 = *(int *)(iVar4 + 0x3c);
  *(int *)(iVar4 + 0x3c) = iVar6 + 10;
  if (bVar5) {
    *(int *)(iVar4 + 0x3c) = iVar6 + 0x14;
  }
  if (*(int *)(iVar4 + 0x54) != 0) {
    auVar3 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x40,param_1);
    *(undefined4 *)(iVar4 + 0x40U & 0xfffffffc) = uVar2;
    *(int *)(iVar4 + 0x50) = iVar1 + 1;
  }
  return 0;
}


// 0x014d1f0 (0x2ac bytes)
undefined8 SecretMenu_Draw(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  GPiece<14> local_50;
  short local_42;
  
  uVar3 = FUN_00502f98(0,0,0,0,0,0,1,1);
  SetGSReg(0x16,uVar3);
  uVar3 = idol_draw::PackCmd(0,1,0,1,0x80);
  SetGSReg(3,uVar3);
  STUB_0006d704(0);
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 < 0xb) {
    if (iVar1 < 1) goto LAB_0014d464;
    if (iVar1 != 4) goto LAB_0014d364;
  }
  else if (iVar1 < 0x13) {
    if (iVar1 < 0xf) {
      if (0xb < iVar1) {
LAB_0014d364:
        iVar4 = (*(int *)(param_1 + 0x1c) - (*(int *)(param_1 + 0x3c) >> 4)) + 4;
        iVar1 = **(int **)(param_1 + 0x34);
        iVar2 = 0;
        while (iVar1 != -1) {
          uVar3 = help_msg_string_by_index(*(StringId *)(*(int *)(param_1 + 0x34) + iVar2));
          FontPrintMediumOpt(local_50,0x80ffa888,uVar3,0xffffffffffffffff);
          iVar4 = iVar4 + local_42 + 10;
          iVar1 = *(int *)(*(int *)(param_1 + 0x34) + iVar2 + 4);
          iVar2 = iVar2 + 4;
        }
        if (iVar4 + 0x18 < *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x24)) {
          *(undefined4 *)(param_1 + 0x54) = 1;
        }
        goto LAB_0014d464;
      }
    }
    else if (0xf < iVar1) goto LAB_0014d364;
  }
  else if (0x13 < iVar1) goto LAB_0014d464;
  uVar3 = help_msg_string_by_index(*(StringId *)(param_1 + 0x34));
  FontPrintMediumOpt(local_50,0x80ffa888,uVar3,0xffffffffffffffff);
LAB_0014d464:
  STUB_0006d708();
  return 2;
}


// 0x014d49c (0x1a0 bytes)
undefined8 DrawUnusedCompletedGameFrame(void)

{
  undefined8 str;
  GPiece<32> local_60;
  
  STUB_0006d704(0);
  str = GetIconFrameTex(0xe99a,6);
  DrawSprite(str,4,0xc,0x10,0x10,0x80);
  str = help_msg_string_by_index(STR_USE_GOLD_BOLTS_TO_0x5182);
  FontPrintMediumOpt(local_60,0x80ffa888,str,0xffffffffffffffff);
  str = GetIconFrameTex(0xe99a,6);
  DrawSprite(str,4,0x18,0x10,0x10,0x80);
  str = help_msg_string_by_index(STR_OBTAIN_ALL_GOLD_WEAPONS_0x5183);
  FontPrintMediumOpt(local_60,0x80ffa888,str,0xffffffffffffffff);
  STUB_0006d708();
  return 2;
}


// 0x014d63c (0x688 bytes)
undefined8 Draw_GameCompletedFrame(int param_1)

{
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar1;
  undefined8 uVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  char acStack_e0 [88];
  
  STUB_0006d704(0);
  iVar8 = *(int *)(param_1 + 0x24) / 5;
  iVar7 = *(int *)(param_1 + 0x24) / 5 + -8;
  pcVar2 = (char *)help_msg_string_by_index(STR_D_OF_D_GOLD_0x522F);
  iVar3 = MB_CountGoldBolts();
  snprintf(acStack_e0,pcVar2,iVar3,0x28);
  iVar4 = FontLen(acStack_e0,-1);
  iVar3 = 0;
  if (0 < iVar4) {
    iVar3 = iVar4;
  }
  pcVar2 = (char *)help_msg_string_by_index(STR_D_OF_D_GOLD_0x5230);
  iVar4 = MB_CountGoldWeapons();
  snprintf(acStack_e0,pcVar2,iVar4,10);
  iVar4 = FontLen(acStack_e0,-1);
  if (iVar3 < iVar4) {
    iVar3 = iVar4;
  }
  pcVar2 = (char *)help_msg_string_by_index(STR_D_OF_D_SKILL_0x5231);
  iVar4 = MB_CountSkillPoints();
  snprintf(acStack_e0,pcVar2,iVar4,0x1e);
  iVar4 = FontLen(acStack_e0,-1);
  if (iVar3 < iVar4) {
    iVar3 = iVar4;
  }
  if (g_JapaneseMode == false) {
    puVar6 = &MediumWesternGlyphs;
  }
  else {
    puVar6 = &JapaneseGlyphs;
  }
  uVar5 = 1;
  if (*(int *)(param_1 + 0x20) < iVar3 + 0x18) {
    if (g_JapaneseMode == false) {
      uVar5 = 2;
      puVar6 = &Glyphs;
    }
    else {
      puVar6 = &JapaneseGlyphs;
    }
  }
  DisableFontColors();
  iVar3 = *(int *)(param_1 + 0x20);
  uVar1 = help_msg_string_by_index(STR_YOUVE_GOT);
  FontPrintMediumCenter(iVar3 >> 1,iVar7,0x80ffa888,uVar1,0xffffffffffffffff);
  iVar7 = iVar8 + iVar7;
  iVar3 = MB_CountGoldBolts();
  DrawFlatOverlay(6,iVar7 + 4,0x10,iVar7 + 0xe,0x80ffa888,0);
  DrawFlatOverlay(7,iVar7 + 5,0xf,iVar7 + 0xd,DAT_00729840,0);
  if (iVar3 == 0x28) {
    uVar1 = GetIconFrameTex(0xe99e,1);
    DrawSprite(uVar1,0xfffffffffffffffe,iVar7 + -9,0x1e,0x1e,0x80);
  }
  pcVar2 = (char *)help_msg_string_by_index(STR_D_OF_D_GOLD_0x522F);
  iVar3 = MB_CountGoldBolts();
  snprintf(acStack_e0,pcVar2,iVar3,0x28);
  if (g_JapaneseMode == false) {
    uVar1 = GetEffectTex(uVar5);
    FontPrint(0x14,iVar7,0x80ffa888,acStack_e0,0xffffffffffffffff,uVar1,puVar6);
  }
  else {
    uVar1 = GetEffectTex(uVar5);
    FontPrintJapanese(0x14,iVar7,0x80ffa888,acStack_e0,0xffffffffffffffff,uVar1,puVar6);
  }
  iVar7 = iVar8 + iVar7;
  iVar3 = MB_CountGoldWeapons();
  DrawFlatOverlay(6,iVar7 + 4,0x10,iVar7 + 0xe,0x80ffa888,0);
  DrawFlatOverlay(7,iVar7 + 5,0xf,iVar7 + 0xd,DAT_00729840,0);
  if (iVar3 == 10) {
    uVar1 = GetIconFrameTex(0xe99e,1);
    DrawSprite(uVar1,0xfffffffffffffffe,iVar7 + -9,0x1e,0x1e,0x80);
  }
  pcVar2 = (char *)help_msg_string_by_index(STR_D_OF_D_GOLD_0x5230);
  iVar3 = MB_CountGoldWeapons();
  snprintf(acStack_e0,pcVar2,iVar3,10);
  if (g_JapaneseMode == false) {
    uVar1 = GetEffectTex(uVar5);
    FontPrint(0x14,iVar7,0x80ffa888,acStack_e0,0xffffffffffffffff,uVar1,puVar6);
  }
  else {
    uVar1 = GetEffectTex(uVar5);
    FontPrintJapanese(0x14,iVar7,0x80ffa888,acStack_e0,0xffffffffffffffff,uVar1,puVar6);
  }
  iVar8 = iVar8 + iVar7;
  iVar3 = MB_CountSkillPoints();
  DrawFlatOverlay(6,iVar8 + 4,0x10,iVar8 + 0xe,0x80ffa888,0);
  DrawFlatOverlay(7,iVar8 + 5,0xf,iVar8 + 0xd,DAT_00729840,0);
  if (iVar3 == 0x1e) {
    uVar1 = GetIconFrameTex(0xe99e,1);
    DrawSprite(uVar1,0xfffffffffffffffe,iVar8 + -9,0x1e,0x1e,0x80);
  }
  pcVar2 = (char *)help_msg_string_by_index(STR_D_OF_D_SKILL_0x5231);
  iVar3 = MB_CountSkillPoints();
  snprintf(acStack_e0,pcVar2,iVar3,0x1e);
  if (g_JapaneseMode == false) {
    uVar5 = GetEffectTex(uVar5);
    FontPrint(0x14,iVar8,0x80ffa888,acStack_e0,0xffffffffffffffff,uVar5,puVar6);
  }
  else {
    uVar5 = GetEffectTex(uVar5);
    FontPrintJapanese(0x14,iVar8,0x80ffa888,acStack_e0,0xffffffffffffffff,uVar5,puVar6);
  }
  EnableFontColors();
  STUB_0006d708();
  return 2;
}


// 0x014dcc4 (0x1a4 bytes)
/* [p2_pause] STR_EMPTY
   [p2_pause] STR_EMPTY
   [p2_pause] STR_EMPTY */

undefined8 SaveSlotInfo_Draw(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  iVar1 = (&DAT_0071fa44)[*(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x40) * 7];
  STUB_0006d704(0);
  if (iVar1 == -1) {
    uVar2 = *(uint *)(param_1 + 0x20);
    uVar3 = *(uint *)(param_1 + 0x24);
    uVar4 = help_msg_string_by_index(STR_EMPTY);
    FontPrintMediumCenter
              (((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0),
               ((int)uVar3 >> 1) + (uint)((int)uVar3 < 0 && (uVar3 & 1) != 0) + -8,0x80ffa888,uVar4,
               0xffffffffffffffff);
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x20);
    uVar4 = help_msg_string_by_index(g_PlanetsPage[iVar1].nameId);
    FontPrintMediumCenter
              (((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0),4,0x80ffa888,uVar4,
               0xffffffffffffffff);
    uVar2 = *(uint *)(param_1 + 0x20);
    uVar4 = help_msg_string_by_index(g_PlanetsPage[iVar1].subPlanetNameId);
    FontPrintMediumCenter
              (((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0),0x14,0x80ffa888,uVar4,
               0xffffffffffffffff);
  }
  STUB_0006d708();
  return 2;
}


// 0x014de68 (0x50 bytes)
/* [p2_pause] with DrawSaveLoadFrame
   [p2_pause] with DrawSaveLoadFrame
   [p2_pause] with DrawSaveLoadFrame */

undefined8 SaveLoad_OnEnter(int param_1)

{
  undefined4 uVar1;
  
  Menu_InitStreamBuffers(1);
  uVar1 = Menu_AllocStreamBuffer(0);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return 0;
}


// 0x014deb8 (0xe8 bytes)
undefined8 SaveLoad_OnExit(int param_1)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  
  cVar2 = DAT_00a52c7b;
  uVar3 = 0;
  while ((iVar1 = (int)((uVar3 & 0xffffffff) << 3),
         *(int *)((int)&DAT_00a53098 + iVar1) != *(int *)(param_1 + 0x48) ||
         ((*(uint *)((int)&DAT_00a5309c + iVar1) & 2) == 0))) {
    uVar3 = uVar3 + 1;
    if (4 < (int)uVar3) {
LAB_0014df74:
      *(undefined4 *)(param_1 + 0x48) = 0;
      return 0;
    }
  }
  if (((*(uint *)((int)&DAT_00a5309c + iVar1) & 4) != 0) &&
     (*(uint *)((int)&DAT_00a5309c + iVar1) = *(uint *)((int)&DAT_00a5309c + iVar1) ^ 4,
     cVar2 != '\0')) {
    music_StopLoad();
    DAT_00a52c7b = '\0';
  }
  *(uint *)((int)&DAT_00a5309c + iVar1) = *(uint *)((int)&DAT_00a5309c + iVar1) & 0xfffffffd;
  goto LAB_0014df74;
}


// 0x014dfa0 (0x44c bytes)
/* [p2_pause] memcard_Save
   [p2_pause] memcard_Save
   [p2_pause] memcard_Save */

undefined8 SaveGame_Update(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  CONTROLLER_INPUT CVar3;
  LevelId LVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)(g_currentMenuPage + 0x40) != param_1) {
    return 0;
  }
  if (((*(int *)(param_1 + 0x4c) == 0) && (DAT_00a52c80 == &DAT_0072df3c)) && (DAT_0072dfc0 != 0)) {
    *(undefined4 *)(param_1 + 0x4c) = 1;
  }
  if (*(int *)(param_1 + 0x4c) == 1) {
    uVar1 = *(undefined4 *)(param_1 + 0x48);
    iVar2 = *(int *)(param_1 + 0x40);
    Map_SaveLevelObjectState();
    Map_SaveRevealMask(&DAT_0096ca34 + Level * 0x8000);
    DAT_0071faec = 0;
    g_SaveCurFile = iVar2;
    DAT_0071fb18 = uVar1;
    memcard_Save(1,-1);
    DAT_00a52cd4 = 1;
    g_CardErrorSeen = 0;
    DAT_00a52cd8 = 0x4fb5;
  }
  *(undefined4 *)(param_1 + 0x4c) = 2;
  iVar2 = *(int *)(param_1 + 0x40);
  if (DAT_00a52cd4 != 0) {
    iVar6 = memcard_IsSaveSystemIdle();
    LVar4 = Level;
    iVar7 = g_SaveCurFile;
    if ((iVar6 == 0) || (DAT_00a52d00 < 0xb)) {
      return 0;
    }
    DAT_00a52cd4 = 0;
    if (((g_CardError != 0) || (g_CardWarning != 0)) || (g_CardErrorSeen != 0)) {
      g_memcardGameSaved = 0;
      g_CardStateFlags = g_CardStateFlags | 0x80;
      DisplayPrompt(3,g_currentMenuPage,0);
      return 0;
    }
    g_memcardGameSaved = 1;
    (&DAT_0071fa48)[g_SaveCurFile * 7] = g_boltCount;
    uVar5 = g_FrameCount;
    (&DAT_0071fa44)[iVar7 * 7] = LVar4;
    uVar1 = g_ChallengeMode;
    (&DAT_0071fa50)[iVar7 * 7] = uVar5;
    (&DAT_0071fa4c)[iVar7 * 7] = uVar1;
  }
  if (((g_Pad.pressedButton & 0xd00) != 0) && (g_unclosableMenu == 0)) {
    return 1;
  }
  if ((g_Pad.pressedButton & 0x10) != 0) {
    if (*(int *)(g_currentMenuPage + 0x38) != 0) {
      g_nextMenuPage = (undefined *)*(undefined4 *)(g_currentMenuPage + 0x38);
      return 0;
    }
    if (g_unclosableMenu == 0) {
      return 0xffffffffffffffff;
    }
  }
  if ((g_CardState == 0x10) || (g_CardState == 1)) {
    iVar7 = memcard_IsSaveSystemIdle();
    if ((iVar7 != 0) && ((10 < DAT_00a52d00 && (DAT_0071fa2c == 9)))) {
      CVar3 = g_Pad.buttonsPressedThisFrame;
      if ((*(uint *)(param_1 + 0x30) & 1) != 0) {
        CVar3 = g_Pad.repeat;
      }
      *(int *)(param_1 + 0x40) = DAT_00a10544;
      if (DAT_00a10544 != 0 && (CVar3 & UP) != 0) {
        *(int *)(param_1 + 0x40) = DAT_00a10544 + -1;
      }
      if (((CVar3 & DOWN) != 0) && (*(int *)(param_1 + 0x40) < 4)) {
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
      }
      DAT_00a10544 = *(int *)(param_1 + 0x40);
      if ((CVar3 & pad_ConfirmButtonMask) != 0) {
        if ((&DAT_0071fa44)[*(int *)(param_1 + 0x40) * 7] == -1) {
          *(undefined4 *)(param_1 + 0x4c) = 1;
        }
        else {
          g_nextMenuPage = &DAT_0072df3c;
          DAT_00a52c84 = 0;
          DAT_0072e004 = *(int *)(param_1 + 0x40);
        }
      }
      if (*(int *)(param_1 + 0x40) != iVar2) {
        PlayMobySound(1,0x11,*(MobyInstance **)(param_1 + 0x14));
      }
    }
  }
  else {
    g_nextMenuPage = *(undefined **)(g_currentMenuPage + 0x38);
  }
  return 0;
}


// 0x014e3ec (0x2d4 bytes)
undefined8 SaveLoad_Update2(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (DAT_00a52cd4 != 0) {
    iVar3 = memcard_IsSaveSystemIdle();
    if ((iVar3 == 0) || (DAT_00a52d00 < 0xb)) {
      return 0;
    }
    DAT_00a52cd4 = 0;
    if (((g_CardError != 0) || (g_CardWarning != 0)) || (g_CardErrorSeen != 0)) {
      g_memcardGameSaved = 0;
      g_CardStateFlags = g_CardStateFlags | 0x100;
      DisplayPrompt(3,g_currentMenuPage,0);
      return 0;
    }
  }
  if (((g_Pad.pressedButton & 0xd00) != 0) && (g_unclosableMenu == 0)) {
    return 1;
  }
  if ((g_Pad.pressedButton & 0x10) != 0) {
    if (*(int *)(g_currentMenuPage + 0x38) != 0) {
      g_nextMenuPage = *(undefined4 *)(g_currentMenuPage + 0x38);
      return 0;
    }
    if (g_unclosableMenu == 0) {
      return 0xffffffffffffffff;
    }
  }
  if ((g_CardState == 0x10) || (g_CardState == 1)) {
    uVar2 = g_Pad.pressedButton;
    if ((*(uint *)(param_1 + 0x30) & 1) != 0) {
      uVar2 = g_Pad.repeat;
    }
    *(int *)(param_1 + 0x40) = DAT_00a10544;
    if (DAT_00a10544 != 0 && (uVar2 & 0x1000) != 0) {
      *(int *)(param_1 + 0x40) = DAT_00a10544 + -1;
    }
    if (((uVar2 & 0x4000) != 0) && (*(int *)(param_1 + 0x40) < 4)) {
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    }
    DAT_00a10544 = *(int *)(param_1 + 0x40);
    if (((uVar2 & pad_ConfirmButtonMask) != 0) &&
       (-1 < (int)(&DAT_0071fa44)[*(int *)(param_1 + 0x40) * 7])) {
      PlayMobySound(0,0x11,*(MobyInstance **)(param_1 + 0x14));
      DAT_0071faec = 0;
      g_SaveCurFile = *(undefined4 *)(param_1 + 0x40);
      if (g_CardOp < 0) {
        g_CardOp = 0xd;
        g_CardOpStep = 0;
      }
      DAT_00a52cd4 = 1;
      g_CardErrorSeen = 0;
      DAT_00a52cd8 = 0x4fb6;
    }
    if (*(int *)(param_1 + 0x40) != iVar1) {
      PlayMobySound(1,0x11,*(MobyInstance **)(param_1 + 0x14));
    }
  }
  else {
    g_nextMenuPage = *(undefined4 *)(g_currentMenuPage + 0x38);
  }
  return 0;
}


// 0x014e6c0 (0x59c bytes)
// strings: 0071f9ba: '/BASCUS-97199RATCHET/static.ico' | 0071f99c: '/BASCUS-97199RATCHET/icon.sys' | 0071f9da: '/BASCUS-97199RATCHET/BASCUS-97199RATCHET'

/* [p2_pause] memcard_ResetGame, ChangeLevel; front-end pages
   [p2_pause] memcard_ResetGame, ChangeLevel; front-end pages
   [p2_pause] memcard_ResetGame, ChangeLevel; front-end pages */

undefined8 LoadGame_Update(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  CONTROLLER_INPUT CVar3;
  uint uVar4;
  LevelId LVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  
  if (*(int *)(g_currentMenuPage + 0x40) == param_1) {
    iVar1 = *(int *)(param_1 + 0x40);
    if (((*(int *)(param_1 + 0x4c) == 0) && (DAT_00a52c80 == &DAT_007308a0)) && (DAT_00730924 != 0))
    {
      *(undefined4 *)(param_1 + 0x4c) = 1;
    }
    if (((*(int *)(param_1 + 0x4c) == 0) && (DAT_00a52c80 == &DAT_00730a00)) && (DAT_00730a84 != 0))
    {
      *(undefined4 *)(param_1 + 0x4c) = 1;
    }
    if (*(int *)(param_1 + 0x4c) == 1) {
      if ((*(uint *)(param_1 + 0x30) & 0x2000) == 0) {
        uVar2 = *(undefined4 *)(param_1 + 0x48);
        memcard_ResetGame();
        DAT_0071faec = 0;
        g_SaveCurFile = iVar1;
        DAT_0071fb18 = uVar2;
        (&DAT_0071fa44)[iVar1 * 7] = 0;
        memcard_PerformOperation(0);
      }
      else {
        PrepareChallengeModeSave(iVar1);
      }
      DAT_00a52cd4 = 1;
      g_CardErrorSeen = 0;
      DAT_00a52cd8 = 0x4fb5;
    }
    *(undefined4 *)(param_1 + 0x4c) = 2;
    if (DAT_00a52cd4 == 0) {
      if (((g_Pad.pressedButton & 0xd00) == 0) || (g_unclosableMenu != 0)) {
        if ((g_Pad.pressedButton & 0x10) != 0) {
          if (*(int *)(g_currentMenuPage + 0x38) != 0) {
            g_nextMenuPage = (undefined *)*(undefined4 *)(g_currentMenuPage + 0x38);
            return 0;
          }
          if (g_unclosableMenu == 0) {
            return 0xffffffffffffffff;
          }
        }
        if ((g_CardState == 0x10) || (g_CardState == 1)) {
          CVar3 = g_Pad.buttonsPressedThisFrame;
          if ((*(uint *)(param_1 + 0x30) & 1) != 0) {
            CVar3 = g_Pad.repeat;
          }
          *(int *)(param_1 + 0x40) = DAT_00a10544;
          if (DAT_00a10544 != 0 && (CVar3 & UP) != 0) {
            *(int *)(param_1 + 0x40) = DAT_00a10544 + -1;
          }
          if (((CVar3 & DOWN) != 0) && (*(int *)(param_1 + 0x40) < 4)) {
            *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
          }
          DAT_00a10544 = *(int *)(param_1 + 0x40);
          if ((CVar3 & CROSS) == 0) {
            if ((CVar3 & CIRCLE) != 0) {
              if ((*(uint *)(param_1 + 0x30) & 0x2000) == 0) {
                g_memcardGameSaved = 0;
                g_CardStateFlags = g_CardStateFlags & 0xfffffff9;
                memcard_ResetGame();
                ChangeLevel(Veldin);
                DAT_0096459a = 1;
                return 0;
              }
              if (g_memcardGameSaved == 0) {
                g_memcardGameSaved = 0;
                PrepareChallengeModeSave(0xffffffffffffffff);
                ChangeLevel(Veldin);
                DAT_0096459a = 1;
                return 0;
              }
              DisplayPrompt(7,0,0);
            }
          }
          else {
            iVar8 = *(int *)(param_1 + 0x40);
            if ((&DAT_0071fa44)[iVar8 * 7] == -1) {
              *(undefined4 *)(param_1 + 0x4c) = 1;
            }
            else {
              uVar4 = *(uint *)(param_1 + 0x30) & 0x2000;
              if (uVar4 == 0) {
                g_nextMenuPage = &DAT_007308a0;
              }
              else {
                g_nextMenuPage = &DAT_00730a00;
              }
              DAT_00a52c84 = 1;
              DAT_0072e004 = iVar8;
              if (uVar4 != 0) {
                DAT_00a52c84 = 2;
              }
            }
          }
          if (*(int *)(param_1 + 0x40) != iVar1) {
            PlayMobySound(1,0x11,*(MobyInstance **)(param_1 + 0x14));
          }
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          g_nextMenuPage = *(undefined **)(g_currentMenuPage + 0x38);
        }
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      iVar8 = memcard_IsSaveSystemIdle();
      LVar5 = Level;
      iVar1 = g_SaveCurFile;
      if ((iVar8 == 0) || (DAT_00a52d00 < 0xb)) {
        uVar7 = 0;
      }
      else {
        DAT_00a52cd4 = 0;
        if (((g_CardError == 0) && (g_CardWarning == 0)) && (g_CardErrorSeen == 0)) {
          g_memcardGameSaved = 1;
          (&DAT_0071fa48)[g_SaveCurFile * 7] = g_boltCount;
          uVar6 = g_FrameCount;
          (&DAT_0071fa44)[iVar1 * 7] = LVar5;
          uVar2 = g_ChallengeMode;
          (&DAT_0071fa50)[iVar1 * 7] = uVar6;
          (&DAT_0071fa4c)[iVar1 * 7] = uVar2;
          ChangeLevel(Veldin);
          uVar7 = 0;
          DAT_0096459a = 1;
        }
        else if (DAT_00a15f39 == '\0') {
          g_memcardGameSaved = 0;
          g_CardStateFlags = g_CardStateFlags | 0x80;
          DisplayPrompt(3,g_currentMenuPage,0);
          uVar7 = 0;
        }
        else {
          g_CardStateFlags = g_CardStateFlags | 0x80;
          DisplayPrompt(8,g_currentMenuPage,g_memcardGameSaved);
          uVar7 = 0;
          g_memcardGameSaved = 0;
        }
      }
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}


// 0x014ec5c (0x58c bytes)
// strings: 006536ac: '%02d:%02d' | 006535e0: '%d,%03d' | 006536bc: '%d,%03d,%03d'

undefined8 DrawSaveLoadFrame(int param_1)

{
  uint uVar1;
  int iVar4;
  int iVar5;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char acStack_c0 [88];
  
  iVar10 = 0;
  STUB_0006d704(0);
  iVar11 = 4;
  iVar8 = 0;
  do {
    iVar5 = *(int *)(param_1 + 0x20);
    iVar9 = iVar5 + -3;
    iVar4 = memcard_IsSaveSystemIdle();
    if (((iVar4 != 0) && (10 < DAT_00a52d00)) && (*(int *)(param_1 + 0x40) == iVar10)) {
      DrawFlatOverlay(0,iVar11 + -4,iVar5,iVar11 + 0x34,0x8020ffff,0);
      DrawFlatOverlay(3,iVar11 + -1,iVar9,iVar11 + 0x31,DAT_00729840,0);
    }
    DrawFlatOverlay(3,iVar11 + -1,iVar9,iVar11 + 0x31,0x80303030,0);
    iVar5 = memcard_IsSaveSystemIdle();
    if (((iVar5 != 0) && (10 < DAT_00a52d00)) && (DAT_0071fa2c == 9)) {
      if (*(int *)((int)&DAT_0071fa44 + iVar8) == -1) {
        uVar1 = *(uint *)(param_1 + 0x20);
        uVar2 = help_msg_string_by_index(STR_EMPTY);
        FontPrintSmallCenter
                  (((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0),iVar11 + 0x10,
                   0x80ffa888,uVar2,0xffffffffffffffff);
      }
      else {
        iVar5 = *(int *)((int)&DAT_0071fa50 + iVar8) / 0x34bc0;
        lVar7 = (longlong)iVar5;
        uVar2 = 0xffffffff80ffa888;
        iVar4 = *(int *)((int)&DAT_0071fa50 + iVar8) / 0xe10 -
                ((int)(lVar7 << 6) - (int)(lVar7 << 2));
        if (*(int *)(param_1 + 0x40) == iVar10) {
          uVar2 = 0xffffffff8020ffff;
        }
        if (99 < iVar5) {
          lVar7 = 99;
          iVar4 = 0x3b;
        }
        snprintf(acStack_c0,"%02d:%02d",lVar7,iVar4);
                    /* Time tex */
        uVar3 = GetIconFrameTex(0xe99e,3);
        DrawSprite(uVar3,4,iVar11,0x10,0x10,0x80);
        FontPrintSmallLeft(0x16,iVar11,uVar2,acStack_c0,0xffffffffffffffff);
        if (*(int *)((int)&DAT_0071fa4c + iVar8) != 0) {
                    /* Challenge mode/replay tex */
          uVar3 = GetIconFrameTex(0xe99e,4);
          DrawSprite(uVar3,0x4e,iVar11,0x10,0x10,0x80);
          iVar5 = 99;
          if (*(int *)((int)&DAT_0071fa4c + iVar8) < 99) {
            iVar5 = *(int *)((int)&DAT_0071fa4c + iVar8);
          }
          snprintf(acStack_c0,"%d",iVar5);
          FontPrintSmallLeft(0x60,iVar11,uVar2,acStack_c0,0xffffffffffffffff);
        }
        puVar6 = &DAT_0098967f;
        if ((int)*(undefined **)((int)&DAT_0071fa48 + iVar8) < 9999999) {
          puVar6 = *(undefined **)((int)&DAT_0071fa48 + iVar8);
        }
        if ((int)puVar6 < 1000) {
          snprintf(acStack_c0,"%d",puVar6);
        }
        else if ((int)puVar6 < 1000000) {
          snprintf(acStack_c0,"%d,%03d",(int)puVar6 / 1000,(int)puVar6 % 1000);
        }
        else {
          snprintf(acStack_c0,"%d,%03d,%03d",(int)puVar6 / 1000000,
                         ((int)puVar6 % 1000000) / 1000,(int)puVar6 % 1000);
        }
                    /* Bolts tex */
        uVar3 = GetIconFrameTex(0x754f,0xf);
        DrawSprite(uVar3,4,iVar11 + 0x10,0x10,0x10,0x80);
        FontPrintSmallLeft(0x16,iVar11 + 0x10,uVar2,acStack_c0,0xffffffffffffffff);
                    /* Date texture */
        uVar3 = GetIconFrameTex(0xe99e,2);
        DrawSprite(uVar3,4,iVar11 + 0x20,0x10,0x10,0x80);
        FontPrintSmallLeft(0x16,iVar11 + 0x20,uVar2,acStack_c0,0xffffffffffffffff);
      }
    }
    iVar5 = 0x1b;
    if (Cutscene != 0) {
      iVar5 = 0x24;
    }
    iVar10 = iVar10 + 1;
    iVar11 = iVar11 + 0x30 + iVar5;
    iVar8 = iVar8 + 0x1c;
  } while (iVar10 < 5);
  STUB_0006d708();
  return 2;
}


// 0x014f1f0 (0x318 bytes)
undefined8 SpawnHeroInMenu_(int param_1)

{
  int *piVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  MobyInstance *pMVar6;
  int iVar7;
  
                    /* This function comes after pause, and before skyfunc. So the respawn namespace
                       is some bullshit name i cooked up as an assumption for the name of this
                       section
                       
                       Though it's fully possible it could be contained within pause_q It's not part
                       of the hero namespace at least */
  Menu_InitStreamBuffers(1);
  if ((g_MusicLoading != 0) && (DAT_00a52c7b != '\0')) {
    music_StopLoad();
    DAT_00a52c7b = '\0';
  }
  puVar3 = &g_MenuScreen;
  DAT_00a52e9c = 0;
  DAT_00a5306c = 0;
  g_gadgetIdx = 0xffffffff;
  DAT_00a52cc8 = 0xffffffff;
  DAT_00a52ccc = 0xffffffff;
  DAT_00a52c50 = Menu_AllocStreamBuffer(1);
  DAT_00a52c54 = Menu_AllocStreamBuffer(1);
  DAT_00a52c7a = 0;
  iVar7 = 0;
  DAT_00a52c78 = 0xff;
  DAT_00a52c79 = 0xff;
  do {
    uVar4 = Menu_AllocStreamBuffer(0);
    iVar7 = iVar7 + 1;
    puVar3[0x2c] = uVar4;
    puVar3 = puVar3 + 1;
  } while (iVar7 < 3);
  DAT_00a52da1 = 0;
  DAT_00a52bcc = 0xffffffff;
  DAT_00a52de1 = 0;
  DAT_00a52e21 = 0;
  if (MobyClassLookup == -1) {
    pMVar6 = (MobyInstance *)0x0;
  }
  else {
    pMVar6 = CreateMoby(RATCHET);
    if (pMVar6 != (MobyInstance *)0x0) {
      pMVar6->updateDistance = -1;
      pMVar6->drawDistance = 0xff;
      pMVar6->enabled = '\x01';
      pMVar6->state = '\0';
      UpdateMobyTransform(pMVar6);
      MB_SetLights(pMVar6,0x202020,0xe,0xe,0);
    }
  }
  iVar5 = 0x18;
  iVar7 = param_1;
  do {
    iVar5 = iVar5 + -1;
    *(undefined1 *)(iVar7 + 0xa4) = 0;
    iVar7 = iVar7 + 1;
  } while (iVar5 != 0);
  if (pMVar6 != (MobyInstance *)0x0) {
    *(MobyInstance **)(param_1 + 0x44) = pMVar6;
    pMVar6->modeBits = NONE;
    piVar1 = (int *)pMVar6->pVar;
    (pMVar6->pos).x = GameCamera.posX + 4.0;
    (pMVar6->pos).y = GameCamera.posY;
    fVar2 = GameCamera.posZ;
    (pMVar6->rotation).z = 3.1415927;
    pMVar6->pUpdate = &PTR_STUB_00150654_007078e0;
    (pMVar6->pos).z = fVar2 - 0.6;
    *piVar1 = param_1;
    piVar1[1] = 0;
    piVar1[2] = 0;
    DAT_00a52c70 = 0xffffffff;
    FastMemSet(&DAT_00a1be80,0,0x40);
    Hero_UpdateInScene(pMVar6);
  }
  if (DAT_00a35719 == -1) {
    pMVar6 = (MobyInstance *)0x0;
  }
  else {
    pMVar6 = CreateMoby(CLANK_BACKPACK);
    if (pMVar6 != (MobyInstance *)0x0) {
      pMVar6->updateDistance = -1;
      pMVar6->drawDistance = 0xff;
      pMVar6->enabled = '\x01';
      pMVar6->state = '\0';
      UpdateMobyTransform(pMVar6);
      MB_SetLights(pMVar6,0x202020,0xe,0xe,0);
    }
  }
  if (pMVar6 != (MobyInstance *)0x0) {
    *(int *)pMVar6->pVar = param_1;
    pMVar6->pUpdate = &PTR_MenuHero_MobyUpdateD_00707908;
    pMVar6->modeBits = NO_POST_UPDATE;
  }
  *(MobyInstance **)(param_1 + 0x48) = pMVar6;
  return 0;
}


// 0x014f508 (0x310 bytes)
undefined8 UpdateAfterEquipGadget(int param_1)

{
  bool bVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  MobyInstance *moby;
  
  iVar5 = 0;
  iVar4 = 0;
  do {
    puVar6 = (undefined4 *)(param_1 + 0x44 + iVar4);
    moby = (MobyInstance *)*puVar6;
    if (moby != (MobyInstance *)0x0) {
      DeleteMoby(moby);
      lVar2 = (longlong)worldUpdateTime;
      moby->color = (int)((ulonglong)lVar2 >> 0x20);
      moby->light = (int)lVar2;
      moby = (MobyInstance *)0x0;
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 4;
    *puVar6 = moby;
  } while (iVar5 < 0x18);
  iVar4 = 0;
  puVar6 = &g_MenuScreen;
  do {
    if (((&DAT_00a53098)[iVar4 * 2] == DAT_00a52c50) && (((&DAT_00a5309c)[iVar4 * 2] & 2) != 0)) {
      if ((((&DAT_00a5309c)[iVar4 * 2] & 4) != 0) &&
         (bVar1 = DAT_00a52c7b != '\0', (&DAT_00a5309c)[iVar4 * 2] = (&DAT_00a5309c)[iVar4 * 2] ^ 4,
         bVar1)) {
        music_StopLoad();
        DAT_00a52c7b = '\0';
      }
      (&DAT_00a5309c)[iVar4 * 2] = (&DAT_00a5309c)[iVar4 * 2] & 0xfffffffd;
      break;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 5);
  DAT_00a52c50 = 0;
  iVar4 = 0;
  while (((&DAT_00a53098)[iVar4 * 2] != DAT_00a52c54 || (((&DAT_00a5309c)[iVar4 * 2] & 2) == 0))) {
    iVar4 = iVar4 + 1;
    if (4 < iVar4) {
LAB_0014f6ac:
      DAT_00a52c54 = 0;
      DAT_00a52c78 = 0xff;
      DAT_00a52c79 = 0xff;
      DAT_00a52c7a = 0;
      if ((int)DAT_00a52c58 < (int)(DAT_00a52c58 + DAT_00a52c5c)) {
        lVar2 = ((ulonglong)DAT_00a52c58 & 0x1fffffff) << 3;
        uVar3 = DAT_00a52c58;
        do {
          iVar4 = (int)lVar2;
          uVar3 = uVar3 + 1;
          lVar2 = lVar2 + 8;
          *(undefined4 *)
           (&MobyClasses[(byte)(&MobyClassLookup)[*(int *)(&DAT_007314d0 + iVar4)]]->type +
           *(int *)(&DAT_007314d4 + iVar4) * 4) = 0;
        } while ((int)uVar3 < (int)(DAT_00a52c58 + DAT_00a52c5c));
      }
      iVar4 = 0;
      DAT_00a52c5c = 0;
      do {
        iVar5 = 0;
        do {
          if (((&DAT_00a53098)[iVar5 * 2] == puVar6[0x2c]) &&
             (((&DAT_00a5309c)[iVar5 * 2] & 2) != 0)) {
            if ((((&DAT_00a5309c)[iVar5 * 2] & 4) != 0) &&
               (bVar1 = DAT_00a52c7b != '\0',
               (&DAT_00a5309c)[iVar5 * 2] = (&DAT_00a5309c)[iVar5 * 2] ^ 4, bVar1)) {
              music_StopLoad();
              DAT_00a52c7b = '\0';
            }
            (&DAT_00a5309c)[iVar5 * 2] = (&DAT_00a5309c)[iVar5 * 2] & 0xfffffffd;
            break;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 5);
        iVar4 = iVar4 + 1;
        puVar6[0x2c] = 0;
        puVar6 = puVar6 + 1;
        if (2 < iVar4) {
          return 0;
        }
      } while( true );
    }
  }
  if ((((&DAT_00a5309c)[iVar4 * 2] & 4) != 0) &&
     (bVar1 = DAT_00a52c7b != '\0', (&DAT_00a5309c)[iVar4 * 2] = (&DAT_00a5309c)[iVar4 * 2] ^ 4,
     bVar1)) {
    music_StopLoad();
    DAT_00a52c7b = '\0';
  }
  (&DAT_00a5309c)[iVar4 * 2] = (&DAT_00a5309c)[iVar4 * 2] & 0xfffffffd;
  goto LAB_0014f6ac;
}


// 0x014f828 (0xe2c bytes)
/* [p2_pause] menu hero/gadget model widget update; spawns mobys, sets moby update callbacks
   [p2_pause] menu hero/gadget model widget update; spawns mobys, sets moby update callbacks
   [p2_pause] menu hero/gadget model widget update; spawns mobys, sets moby update callbacks */

undefined8 MenuHero_Update(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar4;
  longlong lVar3;
  int iVar5;
  MobyInstance *pMVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  
  iVar10 = DAT_00a52be0;
  pMVar6 = *(MobyInstance **)(param_1 + 0x54);
  uVar9 = 0;
  iVar4 = -1;
  if (pMVar6 != (MobyInstance *)0x0) {
    iVar4 = (int)(short)pMVar6->oClass;
  }
  uVar7 = (ulonglong)DAT_00a52be0;
  iVar5 = (&DAT_00721010)[DAT_00a52be0 * 4 - (int)(uVar7 * -0xf)];
  if (iVar5 == DAT_00a52ccc && iVar4 != iVar5) {
    if (pMVar6 != (MobyInstance *)0x0) {
      DeleteMoby(pMVar6);
      lVar3 = (longlong)worldUpdateTime;
      pMVar6->color = (int)((ulonglong)lVar3 >> 0x20);
      pMVar6->light = (int)lVar3;
    }
    if (DAT_00a52da1 != '\0') {
      DetachManipulator(*(MobyInstance **)(param_1 + 0x44),&DAT_00a52da0);
    }
    if ((g_CurrentWeapon != 0) && (iVar10 != g_CurrentWeapon)) {
      Hero_KillGadget(0,0);
    }
    g_GadgetBufferSlot = (DAT_00a52cc4 == 0);
    LoadGadgetModel(iVar5,-1);
    DAT_00a52cc4 = g_GadgetBufferSlot;
    DAT_00a52cf0 = g_GadgetBufferSlot;
    DAT_00a52cc8 = iVar5;
    DAT_00a52cec = iVar5;
    MobyClasses[(byte)(&MobyClassLookup)[iVar5]]->sound_cnt = '\0';
    if ((&MobyClassLookup)[iVar5] == -1) {
      pMVar6 = (MobyInstance *)0x0;
    }
    else {
      pMVar6 = CreateMoby((MOBY_OCLASSES)iVar5);
      if (pMVar6 != (MobyInstance *)0x0) {
        pMVar6->updateDistance = -1;
        pMVar6->drawDistance = 0xff;
        pMVar6->enabled = '\x01';
        pMVar6->state = '\0';
        UpdateMobyTransform(pMVar6);
        MB_SetLights(pMVar6,0x202020,0xe,0xe,0);
      }
    }
    if (pMVar6 != (MobyInstance *)0x0) {
      if ((&g_goldWeaponsArray.field0_0x0)[iVar10] != '\0') {
        Hero_SetLightsFromMoby(pMVar6,*(undefined4 *)(param_1 + 0x44));
      }
      *(int *)pMVar6->pVar = param_1;
      pMVar6->pUpdate = &PTR_MenuHero_MobyUpdateA_007078f0;
      pMVar6->modeBits = NO_POST_UPDATE;
      uVar9 = uVar7;
      if (iVar10 == 0x12) {
        AttachManipulator(*(MobyInstance **)(param_1 + 0x44),0,&DAT_00a52da0);
        DAT_00a52dc0 = 0;
        DAT_00a52dc4 = 0;
        DAT_00a52dc8 = 0;
      }
    }
    *(MobyInstance **)(param_1 + 0x54) = pMVar6;
  }
  pMVar6 = *(MobyInstance **)(param_1 + 0x50);
  iVar10 = -1;
  if (pMVar6 != (MobyInstance *)0x0) {
    iVar10 = (int)(short)pMVar6->oClass;
  }
  iVar4 = (&DAT_00721010)[DAT_00a52be8 * 0x13];
  if (iVar10 != iVar4) {
    if (pMVar6 != (MobyInstance *)0x0) {
      DeleteMoby(pMVar6);
      lVar3 = (longlong)worldUpdateTime;
      pMVar6->color = (int)((ulonglong)lVar3 >> 0x20);
      pMVar6->light = (int)lVar3;
      pMVar6 = (MobyInstance *)0x0;
    }
    if (iVar4 != -1) {
      if ((&MobyClassLookup)[iVar4] == -1) {
        pMVar6 = (MobyInstance *)0x0;
      }
      else {
        pMVar6 = CreateMoby((MOBY_OCLASSES)iVar4);
        if (pMVar6 != (MobyInstance *)0x0) {
          pMVar6->updateDistance = -1;
          pMVar6->drawDistance = 0xff;
          pMVar6->enabled = '\x01';
          pMVar6->state = '\0';
          UpdateMobyTransform(pMVar6);
          MB_SetLights(pMVar6,0x202020,0xe,0xe,0);
        }
      }
      if (pMVar6 != (MobyInstance *)0x0) {
        uVar9 = (ulonglong)DAT_00a52be8;
        *(int *)pMVar6->pVar = param_1;
        pMVar6->pUpdate = &PTR_MenuHero_MobyUpdateB_007078f8;
        pMVar6->modeBits = NO_POST_UPDATE;
      }
    }
    *(MobyInstance **)(param_1 + 0x50) = pMVar6;
  }
  pMVar6 = *(MobyInstance **)(param_1 + 0x58);
  iVar10 = -1;
  if (pMVar6 != (MobyInstance *)0x0) {
    iVar10 = (int)(short)pMVar6->oClass;
  }
  iVar4 = (&DAT_00721010)[DAT_00a52be4 * 0x13];
  if (iVar10 != iVar4) {
    if (pMVar6 != (MobyInstance *)0x0) {
      DeleteMoby(pMVar6);
      lVar3 = (longlong)worldUpdateTime;
      pMVar6->color = (int)((ulonglong)lVar3 >> 0x20);
      pMVar6->light = (int)lVar3;
    }
    pMVar6 = (MobyInstance *)0x0;
    if (DAT_00a52de1 != '\0') {
      DetachManipulator(*(MobyInstance **)(param_1 + 0x44),&DAT_00a52de0);
    }
    if (DAT_00a52e21 != '\0') {
      DetachManipulator(*(MobyInstance **)(param_1 + 0x44),&DAT_00a52e20);
    }
    if (iVar4 != -1) {
      if ((&MobyClassLookup)[iVar4] == -1) {
        pMVar6 = (MobyInstance *)0x0;
      }
      else {
        pMVar6 = CreateMoby((MOBY_OCLASSES)iVar4);
        if (pMVar6 != (MobyInstance *)0x0) {
          pMVar6->updateDistance = -1;
          pMVar6->drawDistance = 0xff;
          pMVar6->enabled = '\x01';
          pMVar6->state = '\0';
          UpdateMobyTransform(pMVar6);
          MB_SetLights(pMVar6,0x202020,0xe,0xe,0);
        }
      }
      if (pMVar6 != (MobyInstance *)0x0) {
        uVar9 = (ulonglong)DAT_00a52be4;
        *(int *)pMVar6->pVar = param_1;
        pMVar6->pUpdate = &PTR_MenuHero_MobyUpdateC_00707900;
        pMVar6->modeBits = NO_POST_UPDATE;
        AttachManipulator(*(MobyInstance **)(param_1 + 0x44),0x16,&DAT_00a52de0);
        AttachManipulator(*(MobyInstance **)(param_1 + 0x44),0x17,&DAT_00a52e20);
        DAT_00a52e00 = 0x3c23d70a;
        DAT_00a52e04 = 0x3c23d70a;
        DAT_00a52e08 = 0x3c23d70a;
        DAT_00a52e40 = 0x3c23d70a;
        DAT_00a52e44 = 0x3c23d70a;
        DAT_00a52e48 = 0x3c23d70a;
      }
    }
    *(MobyInstance **)(param_1 + 0x58) = pMVar6;
    pMVar6 = *(MobyInstance **)(param_1 + 0x5c);
    if (pMVar6 != (MobyInstance *)0x0) {
      DeleteMoby(pMVar6);
      lVar3 = (longlong)worldUpdateTime;
      pMVar6->color = (int)((ulonglong)lVar3 >> 0x20);
      pMVar6->light = (int)lVar3;
      pMVar6 = (MobyInstance *)0x0;
    }
    if (iVar4 != -1) {
      if ((&MobyClassLookup)[iVar4] == -1) {
        pMVar6 = (MobyInstance *)0x0;
      }
      else {
        pMVar6 = CreateMoby((MOBY_OCLASSES)iVar4);
        if (pMVar6 != (MobyInstance *)0x0) {
          pMVar6->updateDistance = -1;
          pMVar6->drawDistance = 0xff;
          pMVar6->enabled = '\x01';
          pMVar6->state = '\0';
          UpdateMobyTransform(pMVar6);
          MB_SetLights(pMVar6,0x202020,0xe,0xe,0);
        }
      }
      if (pMVar6 != (MobyInstance *)0x0) {
        *(int *)pMVar6->pVar = param_1;
        pMVar6->pUpdate = &PTR_MenuHero_MobyUpdateC_00707900;
        pMVar6->modeBits = NO_POST_UPDATE;
      }
    }
    *(MobyInstance **)(param_1 + 0x5c) = pMVar6;
  }
  pMVar6 = *(MobyInstance **)(param_1 + 0x4c);
  iVar10 = -1;
  if (pMVar6 != (MobyInstance *)0x0) {
    iVar10 = (int)(short)pMVar6->oClass;
  }
  iVar4 = (&DAT_00721010)[DAT_00a52bec * 0x13];
  if (iVar10 != iVar4) {
    if (pMVar6 != (MobyInstance *)0x0) {
      DeleteMoby(pMVar6);
      lVar3 = (longlong)worldUpdateTime;
      pMVar6->color = (int)((ulonglong)lVar3 >> 0x20);
      pMVar6->light = (int)lVar3;
      pMVar6 = (MobyInstance *)0x0;
    }
    if (iVar4 != -1) {
      if ((&MobyClassLookup)[iVar4] == -1) {
        pMVar6 = (MobyInstance *)0x0;
      }
      else {
        pMVar6 = CreateMoby((MOBY_OCLASSES)iVar4);
        if (pMVar6 != (MobyInstance *)0x0) {
          pMVar6->updateDistance = -1;
          pMVar6->drawDistance = 0xff;
          pMVar6->enabled = '\x01';
          pMVar6->state = '\0';
          UpdateMobyTransform(pMVar6);
          MB_SetLights(pMVar6,0x202020,0xe,0xe,0);
        }
      }
      if (pMVar6 != (MobyInstance *)0x0) {
        *(int *)pMVar6->pVar = param_1;
        pMVar6->pUpdate = &PTR_MenuHero_MobyUpdateD_00707908;
        pMVar6->modeBits = NO_POST_UPDATE;
        if (pMVar6->oClass == HELIPACK_025F) {
          if (pMVar6->animationId != '\x06') {
            MB_SetAnimation(pMVar6,6,0,10);
          }
          pMVar6->state = '\b';
        }
      }
    }
    *(MobyInstance **)(param_1 + 0x4c) = pMVar6;
  }
  pMVar6 = *(MobyInstance **)(param_1 + 0x6c);
  iVar10 = -1;
  if (pMVar6 != (MobyInstance *)0x0) {
    iVar10 = (int)(short)pMVar6->oClass;
  }
  iVar4 = -1;
  if (UnlockableItems.persuader != '\0') {
    iVar4 = 0x197;
  }
  if (iVar10 != iVar4) {
    if (pMVar6 != (MobyInstance *)0x0) {
      DeleteMoby(pMVar6);
      lVar3 = (longlong)worldUpdateTime;
      pMVar6->color = (int)((ulonglong)lVar3 >> 0x20);
      pMVar6->light = (int)lVar3;
      pMVar6 = (MobyInstance *)0x0;
    }
    if (iVar4 != -1) {
      if ((&MobyClassLookup)[iVar4] == -1) {
        pMVar6 = (MobyInstance *)0x0;
      }
      else {
        pMVar6 = CreateMoby((MOBY_OCLASSES)iVar4);
        if (pMVar6 != (MobyInstance *)0x0) {
          pMVar6->updateDistance = -1;
          pMVar6->drawDistance = 0xff;
          pMVar6->enabled = '\x01';
          pMVar6->state = '\0';
          UpdateMobyTransform(pMVar6);
          MB_SetLights(pMVar6,0x202020,0xe,0xe,0);
        }
      }
      if (pMVar6 != (MobyInstance *)0x0) {
        *(int *)pMVar6->pVar = param_1;
        pMVar6->pUpdate = &PTR_MenuHero_MobyUpdateE_00707910;
        pMVar6->modeBits = NO_POST_UPDATE;
      }
    }
    *(MobyInstance **)(param_1 + 0x6c) = pMVar6;
  }
  pMVar6 = *(MobyInstance **)(param_1 + 0x70);
  iVar10 = -1;
  if (pMVar6 != (MobyInstance *)0x0) {
    iVar10 = (int)(short)pMVar6->oClass;
  }
  iVar4 = -1;
  if (UnlockableItems.mapOMatic != '\0') {
    iVar4 = 0x266;
  }
  if (iVar10 != iVar4) {
    if (pMVar6 != (MobyInstance *)0x0) {
      DeleteMoby(pMVar6);
      lVar3 = (longlong)worldUpdateTime;
      pMVar6->color = (int)((ulonglong)lVar3 >> 0x20);
      pMVar6->light = (int)lVar3;
      pMVar6 = (MobyInstance *)0x0;
    }
    if (iVar4 != -1) {
      if ((&MobyClassLookup)[iVar4] == -1) {
        pMVar6 = (MobyInstance *)0x0;
      }
      else {
        pMVar6 = CreateMoby((MOBY_OCLASSES)iVar4);
        if (pMVar6 != (MobyInstance *)0x0) {
          pMVar6->updateDistance = -1;
          pMVar6->drawDistance = 0xff;
          pMVar6->enabled = '\x01';
          pMVar6->state = '\0';
          UpdateMobyTransform(pMVar6);
          MB_SetLights(pMVar6,0x202020,0xe,0xe,0);
        }
      }
      if (pMVar6 != (MobyInstance *)0x0) {
        *(int *)pMVar6->pVar = param_1;
        pMVar6->pUpdate = &PTR_MenuHero_MobyUpdateE_00707910;
        pMVar6->modeBits = NO_POST_UPDATE;
      }
    }
    *(MobyInstance **)(param_1 + 0x70) = pMVar6;
  }
  pMVar6 = *(MobyInstance **)(param_1 + 0x74);
  iVar10 = -1;
  if (pMVar6 != (MobyInstance *)0x0) {
    iVar10 = (int)(short)pMVar6->oClass;
  }
  iVar4 = -1;
  if (UnlockableItems.boltGrabber != '\0') {
    iVar4 = 0x26a;
  }
  if (iVar10 != iVar4) {
    if (pMVar6 != (MobyInstance *)0x0) {
      DeleteMoby(pMVar6);
      lVar3 = (longlong)worldUpdateTime;
      pMVar6->color = (int)((ulonglong)lVar3 >> 0x20);
      pMVar6->light = (int)lVar3;
      pMVar6 = (MobyInstance *)0x0;
    }
    if (iVar4 != -1) {
      if ((&MobyClassLookup)[iVar4] == -1) {
        pMVar6 = (MobyInstance *)0x0;
      }
      else {
        pMVar6 = CreateMoby((MOBY_OCLASSES)iVar4);
        if (pMVar6 != (MobyInstance *)0x0) {
          pMVar6->updateDistance = -1;
          pMVar6->drawDistance = 0xff;
          pMVar6->enabled = '\x01';
          pMVar6->state = '\0';
          UpdateMobyTransform(pMVar6);
          MB_SetLights(pMVar6,0x202020,0xe,0xe,0);
        }
      }
      if (pMVar6 != (MobyInstance *)0x0) {
        *(int *)pMVar6->pVar = param_1;
        pMVar6->pUpdate = &PTR_MenuHero_MobyUpdateE_00707910;
        pMVar6->modeBits = NO_POST_UPDATE;
      }
    }
    *(MobyInstance **)(param_1 + 0x74) = pMVar6;
  }
  iVar4 = 0;
  iVar10 = 0;
  do {
    puVar2 = (undefined4 *)(param_1 + 0x78 + iVar10);
    iVar5 = -1;
    pMVar6 = (MobyInstance *)*puVar2;
    if (pMVar6 != (MobyInstance *)0x0) {
      iVar5 = (int)(short)pMVar6->oClass;
    }
    iVar8 = -1;
    if (iVar4 < (int)(uint)DAT_0096bcd7) {
      iVar8 = 0x1df;
    }
    if (iVar5 != iVar8) {
      if (pMVar6 != (MobyInstance *)0x0) {
        DeleteMoby(pMVar6);
        lVar3 = (longlong)worldUpdateTime;
        pMVar6->color = (int)((ulonglong)lVar3 >> 0x20);
        pMVar6->light = (int)lVar3;
        pMVar6 = (MobyInstance *)0x0;
      }
      if (iVar8 != -1) {
        if ((&MobyClassLookup)[iVar8] == -1) {
          pMVar6 = (MobyInstance *)0x0;
        }
        else {
          pMVar6 = CreateMoby((MOBY_OCLASSES)iVar8);
          if (pMVar6 != (MobyInstance *)0x0) {
            pMVar6->updateDistance = -1;
            pMVar6->drawDistance = 0xff;
            pMVar6->enabled = '\x01';
            pMVar6->state = '\0';
            UpdateMobyTransform(pMVar6);
            MB_SetLights(pMVar6,0x202020,0xe,0xe,0);
          }
        }
        if (iVar4 < (int)(uint)DAT_0096bcd6) {
          uVar1 = 0;
        }
        else {
          uVar1 = 0x40400000;
        }
        *(undefined4 *)((int)&DAT_00a52e6c + iVar10) = uVar1;
        *(undefined4 *)((int)&DAT_00a52e84 + iVar10) = 0;
        if (pMVar6 != (MobyInstance *)0x0) {
          *(int *)pMVar6->pVar = param_1;
          pMVar6->pUpdate = &PTR_MenuHero_MobyUpdateF_00707918;
          pMVar6->modeBits = NO_POST_UPDATE;
          pMVar6->setByGroup = (char)iVar4;
        }
      }
      *puVar2 = pMVar6;
    }
    iVar4 = iVar4 + 1;
    iVar10 = iVar10 + 4;
  } while (iVar4 < 8);
  iVar10 = (int)uVar9;
  if ((iVar10 != DAT_00a52bcc) && (0 < iVar10 && iVar10 < 0x24)) {
    DAT_00a52bcc = iVar10;
    if ((g_MusicLoading != 0) && (DAT_00a52c7b != '\0')) {
      music_StopLoad();
      DAT_00a52c7b = '\0';
    }
    iVar4 = (int)(uVar9 << 4) * 3;
    DAT_00a52ed0 = *(undefined4 *)(&DAT_00730de0 + iVar4);
    DAT_00a52eac = *(undefined4 *)(&DAT_00730dec + iVar4);
    DAT_00a52eb4 = *(undefined4 *)(&DAT_00730df0 + iVar4);
    DAT_00a52ea4 = *(int *)(&DAT_00730de8 + iVar4) + DAT_00a52c7c;
    DAT_00a52eb8 = *(undefined4 *)(&DAT_00730df8 + iVar4);
    DAT_00a52ebc = *(undefined4 *)(&DAT_00730dfc + iVar4);
    DAT_00a52ec0 = *(undefined4 *)(&DAT_00730e00 + iVar4);
    DAT_00a52ec4 = *(undefined4 *)(&DAT_00730e04 + iVar4);
    DAT_00a52ec8 = *(undefined4 *)(&DAT_00730e08 + iVar4);
    DAT_00a52ecc = *(undefined4 *)(&DAT_00730e0c + iVar4);
    DAT_00a52ed4 = *(undefined4 *)(&DAT_00730de4 + iVar4);
    DAT_00a52ea0 = 0;
    DAT_00a52ea8 = 0;
    DAT_00a5306c = 0;
    DAT_00a52e9c = 1;
    DAT_00a52eb0 = iVar10;
    if (*(int *)(&DAT_00730dec + iVar4) != 0) {
      DAT_00a52edc = *(int *)(&DAT_00730df4 + iVar4) + DAT_00a52c7c;
      DAT_00a52e9c = 2;
      DAT_00a52ed8 = 0;
      DAT_00a52ee0 = 2;
      DAT_00a52ee4 = 0;
      DAT_00a52eec = 1;
      DAT_00a52ef0 = 0xffffffff;
      DAT_00a52ef4 = 0;
      DAT_00a52ef8 = 0xffffffff;
      DAT_00a52efc = 0;
      DAT_00a52f00 = 0xffffffff;
      DAT_00a52f04 = 0;
      DAT_00a52f08 = 0;
      DAT_00a52f0c = 0;
      DAT_00a52ee8 = iVar10;
    }
  }
  iVar4 = 0;
  iVar10 = param_1;
  do {
    if (*(char *)(iVar10 + 0xa4) != '\0') {
      *(char *)(iVar10 + 0xa4) = *(char *)(iVar10 + 0xa4) + -1;
    }
    iVar4 = iVar4 + 1;
    iVar10 = iVar10 + 1;
  } while (iVar4 < 0x18);
  LoadMenuRatchetModel
            (*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x54),
             *(undefined4 *)(param_1 + 0x50),param_1 + 0x60,param_1 + 100,param_1 + 0x68);
  return 0;
}


// 0x0150654 (0x4 bytes)
void STUB_00150654(...)

{
  return;
}


// 0x0150658 (0x4 bytes)
void STUB_00150658(...)

{
  return;
}


// 0x0150660 (0x21c bytes)
/* [p2_pause] moby update callback set by MenuHero_Update
   [p2_pause] moby update callback set by MenuHero_Update
   [p2_pause] moby update callback set by MenuHero_Update */

void MenuHero_MobyUpdateA(MobyInstance *param_1)

{
  bool bVar1;
  MobyInstance *pMoby;
  int iVar2;
  Vec4 aVStack_70 [3];
  f32 local_40;
  f32 local_3c;
  f32 local_38;
  f32 local_34;
  
                    /* WARNING: Load size is inaccurate */
  pMoby = *(MobyInstance **)(*param_1->pVar + 0x44);
  if (((param_1->field43_0x70 & 2U) != 0) && (param_1->animationId != '\x01')) {
    MB_SetAnimation(param_1,1,0,0);
  }
  iVar2 = 0;
  do {
    if ((&DAT_00721010)[iVar2 * 0x13] == (int)(short)param_1->oClass) break;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x25);
  GetBoneTransformations(pMoby,*(undefined4 *)(&DAT_0072100c + iVar2 * 0x4c),aVStack_70);
  (param_1->pos).x = local_40;
  (param_1->pos).y = local_3c;
  (param_1->pos).z = local_38;
  (param_1->pos).w = local_34;
  UpdateMobyTransform(param_1);
  iVar2 = *(int *)(&DAT_00721018 + iVar2 * 0x4c);
  FastApplyTransform(&(param_1->transform).v0,aVStack_70);
  if (iVar2 != 0) {
    MB_NormalizeMtx3Columns(&param_1->transform);
  }
  PostUpdateMobyLockTransform(param_1);
  bVar1 = DAT_00a52da1 != '\0';
  if (bVar1) {
    DetachManipulator(pMoby,&DAT_00a52da0);
  }
  if (iVar2 == 0) {
    Hero_BuildPoseFromJoints(&DAT_00721afc,&DAT_00a1b880,param_1->pClass,0,pMoby);
    param_1->pPreviousAnimationData = &DAT_00a1b880;
    param_1->pCurrentAnimationData = &DAT_00a1b880;
    param_1->animationBlend = 0.0;
    param_1->unk58 = 0.0;
    param_1->previousAnimationFrame = '\0';
    param_1->animationFrame = '\0';
    param_1->updateId = '\0';
    param_1->animationId = '\0';
  }
  if (bVar1) {
    AttachManipulator(pMoby,0,&DAT_00a52da0);
    DAT_00a52dc0 = 0;
    DAT_00a52dc4 = 0;
    DAT_00a52dc8 = 0;
  }
  return;
}


// 0x015087c (0x134 bytes)
/* [p2_pause] moby update callback set by MenuHero_Update
   [p2_pause] moby update callback set by MenuHero_Update
   [p2_pause] moby update callback set by MenuHero_Update */

void MenuHero_MobyUpdateB(MobyInstance *param_1)

{
  undefined4 uVar1;
  Vec4 aVStack_60 [3];
  f32 local_30;
  f32 local_2c;
  f32 local_28;
  f32 local_24;
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = *(undefined4 *)(*param_1->pVar + 0x44);
  UpdateMobyAnimFrame();
  UpdateMobyTransform(param_1);
  GetBoneTransformations(uVar1,4,aVStack_60);
  (param_1->pos).x = local_30;
  (param_1->pos).y = local_2c;
  (param_1->pos).z = local_28;
  (param_1->pos).w = local_24;
  FastApplyTransform(&(param_1->transform).v0,aVStack_60);
  MB_NormalizeMtx3Columns(&param_1->transform);
  PostUpdateMobyLockTransform(param_1);
  if (param_1->oClass == SONIC_SUMMONER) {
    Hero_BuildPoseFromJoints(&DAT_00721b44,&DAT_00a1ba80,param_1->pClass,6,uVar1);
  }
  else {
    Hero_BuildPoseFromJoints(&DAT_00721b88,&DAT_00a1ba80,param_1->pClass,0,uVar1);
  }
  param_1->pPreviousAnimationData = &DAT_00a1ba80;
  param_1->pCurrentAnimationData = &DAT_00a1ba80;
  param_1->animationBlend = 0.0;
  param_1->previousAnimationFrame = '\0';
  param_1->animationFrame = '\0';
  param_1->updateId = '\0';
  param_1->animationId = '\0';
  return;
}


// 0x01509b8 (0x23c bytes)
/* [p2_pause] moby update callback set by MenuHero_Update
   [p2_pause] moby update callback set by MenuHero_Update
   [p2_pause] moby update callback set by MenuHero_Update */

void MenuHero_MobyUpdateC(MobyInstance *param_1)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  MobyInstance *pMoby;
  MobyInstance *pMVar4;
  undefined8 uVar5;
  Vec4 aVStack_80 [3];
  f32 local_50;
  f32 local_4c;
  f32 local_48;
  f32 local_44;
  
  piVar3 = (int *)param_1->pVar;
  pMoby = *(MobyInstance **)(*piVar3 + 0x44);
  UpdateMobyAnimFrame();
  UpdateMobyTransform(param_1);
  uVar5 = 2;
  pMVar4 = *(MobyInstance **)(*piVar3 + 0x5c);
  if (param_1 == pMVar4) {
    uVar5 = 3;
  }
  GetBoneTransformations(pMoby,uVar5,aVStack_80);
  (param_1->pos).x = local_50;
  (param_1->pos).y = local_4c;
  (param_1->pos).z = local_48;
  (param_1->pos).w = local_44;
  FastApplyTransform(&(param_1->transform).v0,aVStack_80);
  MB_NormalizeMtx3Columns(&param_1->transform);
  PostUpdateMobyLockTransform(param_1);
  bVar1 = DAT_00a52e21 != '\0';
  if (bVar1) {
    DetachManipulator(pMoby,&DAT_00a52e20);
  }
  bVar2 = DAT_00a52de1 != '\0';
  if (bVar2) {
    DetachManipulator(pMoby,&DAT_00a52de0);
  }
  if (param_1 == pMVar4) {
    Hero_BuildPoseFromJoints(&DAT_00721bb0,&DAT_00a1bd80,param_1->pClass,0,pMoby);
    param_1->pPreviousAnimationData = &DAT_00a1bd80;
    param_1->pCurrentAnimationData = &DAT_00a1bd80;
  }
  else {
    Hero_BuildPoseFromJoints(&DAT_00721b98,&DAT_00a1bc80,param_1->pClass,0,pMoby);
    param_1->pPreviousAnimationData = &DAT_00a1bc80;
    param_1->pCurrentAnimationData = &DAT_00a1bc80;
  }
  if (bVar1) {
    AttachManipulator(pMoby,0x17,&DAT_00a52e20);
    DAT_00a52e40 = 0;
    DAT_00a52e44 = 0;
    DAT_00a52e48 = 0;
  }
  if (bVar2) {
    AttachManipulator(pMoby,0x16,&DAT_00a52de0);
    DAT_00a52e00 = 0;
    DAT_00a52e04 = 0;
    DAT_00a52e08 = 0;
  }
  param_1->animationBlend = 0.0;
  param_1->previousAnimationFrame = '\0';
  param_1->animationFrame = '\0';
  param_1->updateId = '\0';
  param_1->animationId = '\0';
  return;
}


// 0x0150bf4 (0x184 bytes)
/* [p2_pause] moby update callback (helipack) set by MenuHero_Update/SpawnHeroInMenu
   [p2_pause] moby update callback (helipack) set by MenuHero_Update/SpawnHeroInMenu
   [p2_pause] moby update callback (helipack) set by MenuHero_Update/SpawnHeroInMenu */

void MenuHero_MobyUpdateD(MobyInstance *param_1)

{
  undefined4 uVar1;
  u8 uVar2;
  Vec4 aVStack_60 [3];
  f32 local_30;
  f32 local_2c;
  f32 local_28;
  f32 local_24;
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = *(undefined4 *)(*param_1->pVar + 0x44);
  if ((param_1->field43_0x70 & 2U) != 0) {
    if (param_1->oClass == HELIPACK_025F) {
      if (param_1->updateId == '\x06') {
        uVar2 = param_1->state + 0xff;
        param_1->state = uVar2;
        if (uVar2 == '\0') {
          if (param_1->animationId != '\x01') {
            MB_SetAnimation(param_1,1,0,10);
          }
        }
        else if (param_1->animationId != '\x06') {
          MB_SetAnimation(param_1,6,0,0);
        }
      }
      else if (param_1->animationId != '\x01') {
        MB_SetAnimation(param_1,1,0,0);
      }
    }
    else if (param_1->animationId != '\x01') {
      MB_SetAnimation(param_1,1,0,0);
    }
  }
  GetBoneTransformations(uVar1,5,aVStack_60);
  (param_1->pos).x = local_30;
  (param_1->pos).y = local_2c;
  (param_1->pos).z = local_28;
  (param_1->pos).w = local_24;
  FastApplyTransform(&(param_1->transform).v0,aVStack_60);
  MB_NormalizeMtx3Columns(&param_1->transform);
  PostUpdateMobyLockTransform(param_1);
  return;
}


// 0x0150d78 (0xd0 bytes)
/* [p2_pause] moby update callback (persuader) set by MenuHero_Update
   [p2_pause] moby update callback (persuader) set by MenuHero_Update
   [p2_pause] moby update callback (persuader) set by MenuHero_Update */

void MenuHero_MobyUpdateE(MobyInstance *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  Vec4 aVStack_60 [3];
  f32 local_30;
  f32 local_2c;
  f32 local_28;
  f32 local_24;
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = *(undefined4 *)(*param_1->pVar + 0x44);
  UpdateMobyAnimFrame();
  UpdateMobyTransform(param_1);
  uVar2 = 0x1d;
  if (param_1->oClass == PERSUADER_0197) {
    uVar2 = 0x1e;
  }
  GetBoneTransformations(uVar1,uVar2,aVStack_60);
  (param_1->pos).x = local_30;
  (param_1->pos).y = local_2c;
  (param_1->pos).z = local_28;
  (param_1->pos).w = local_24;
  FastApplyTransform(&(param_1->transform).v0,aVStack_60);
  MB_NormalizeMtx3Columns(&param_1->transform);
  PostUpdateMobyLockTransform(param_1);
  return;
}


// 0x0150e88 (0x554 bytes)
/* [p2_pause] moby update callback set by MenuHero_Update
   [p2_pause] moby update callback set by MenuHero_Update
   [p2_pause] moby update callback set by MenuHero_Update */

void MenuHero_MobyUpdateF(MobyInstance *param_1)

{
  float fVar1;
  byte bVar2;
  f32 fVar3;
  f32 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  Mtx4 *p1;
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  GPiece<16> local_b0;
  GPiece<64> auStack_a0;
  MobyInstance *iVar11;
  
                    /* WARNING: Load size is inaccurate */
  iVar11 = *(MobyInstance **)(*param_1->pVar + 0x44);
  UpdateMobyAnimFrame();
  UpdateMobyTransform(param_1);
  p1 = &param_1->transform;
  fVar3 = (iVar11->pos).y;
  (param_1->pos).x = (iVar11->pos).x;
  fVar4 = (iVar11->pos).z;
  (param_1->pos).y = fVar3;
  fVar3 = (iVar11->pos).w;
  (param_1->pos).z = fVar4;
  (param_1->pos).w = fVar3;
  FastApplyTransform(&p1->v0,&(iVar11->transform).v0);
  MB_NormalizeMtx3Columns(p1);
  bVar2 = param_1->setByGroup;
  param_1->scale = param_1->pClass->gScale;
  if (bVar2 < 3) {
    iVar14 = (uint)bVar2 * 2;
    iVar14 = iVar14 + ((uint)((iVar14 + 1) * 0x155) >> 0xb) * -6;
  }
  else {
    iVar14 = (uint)bVar2 * 2;
    iVar14 = iVar14 + 1 + ((uint)((iVar14 + 2) * 0x155) >> 0xb) * -6;
  }
  dVar15 = (double)FastIntToDouble(200);
  dVar16 = 6.283180236816406;
  dVar17 = 3.141590118408203;
  dVar20 = (double)((float)((double)(longlong)(g_MainLoopFrames % 200) / dVar15) * 6.28318 - 3.14159);
  dVar15 = (double)FastIntToDouble(6);
  dVar19 = (double)(longlong)iVar14;
  dVar18 = (double)(float)((double)(float)((double)(float)(dVar19 * dVar16) / dVar15) - dVar17);
  dVar15 = (double)FastIntToDouble(0xaa);
  dVar17 = (double)(float)((double)(float)((double)(float)((double)(longlong)(g_MainLoopFrames % 0xaa) /
                                                          dVar15) * dVar16) - dVar17);
  dVar15 = (double)FastIntToDouble(6);
  fVar1 = (float)((double)(float)(dVar19 * 12.566360473632812) / dVar15);
  dVar16 = (double)fVar1;
  FastAddRots(fVar1);
  dVar15 = (double)FastWrapRot((float)dVar20,(float)dVar18);
  dVar16 = (double)FastWrapRot((float)dVar17,(float)dVar16);
  uVar13 = (uint)(byte)param_1->setByGroup;
  if ((float)(&DAT_00a52e6c)[uVar13] != 0.0) {
    OrganicDelt
              (0.0,1.0,g_FrameTimeSq * 6.0,g_FrameTime * 6.0,
               (float *)(&DAT_00a52e6c + (byte)param_1->setByGroup),uVar13 * 4,
               (float *)(&DAT_00a52e84 + uVar13));
  }
  fVar1 = (float)(dVar15 + 1.570796251296997);
  fVar11 = fVar1;
  if (3.1415925 - fVar1 <= fVar1) {
    fVar11 = 3.1415925 - fVar1;
  }
  if (fVar11 <= -3.1415925 - fVar1) {
    fVar11 = -3.1415925 - fVar1;
  }
  fVar6 = fVar11 * fVar11;
  fVar1 = fVar6 * fVar6 * fVar11;
  fVar5 = fVar6 * fVar1;
  fVar1 = fVar11 + fVar6 * fVar11 * -0.16666657 + fVar1 * 0.0083330255 + fVar5 * -0.0001980741 +
          fVar6 * fVar5 * 2.601887e-06;
  dVar17 = dVar15;
  if ((double)(float)(3.141592502593994 - dVar15) <= dVar15) {
    dVar17 = (double)(float)(3.141592502593994 - dVar15);
  }
  if (dVar17 <= (double)(float)(-3.141592502593994 - dVar15)) {
    dVar17 = (double)(float)(-3.141592502593994 - dVar15);
  }
  dVar18 = (double)(float)(dVar17 * dVar17);
  dVar19 = (double)(float)(dVar18 * (double)(float)(dVar18 * dVar17));
  dVar20 = (double)(float)(dVar18 * dVar19);
  fVar11 = (float)(dVar17 + (double)(float)((double)(float)(dVar18 * dVar17) * -0.16666656732559204)
                  ) + (float)(dVar19 * 0.008333025500178337) +
           (float)(dVar20 * -0.0001980741071747616) + (float)(dVar18 * dVar20) * 2.601887e-06;
  dVar17 = dVar16;
  if ((double)(float)(3.141592502593994 - dVar16) <= dVar16) {
    dVar17 = (double)(float)(3.141592502593994 - dVar16);
  }
  if (dVar17 <= (double)(float)(-3.141592502593994 - dVar16)) {
    dVar17 = (double)(float)(-3.141592502593994 - dVar16);
  }
  dVar16 = (double)(float)(dVar17 * dVar17);
  dVar18 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar17));
  dVar19 = (double)(float)(dVar16 * dVar18);
  fVar5 = (iVar11->transform).v0.y;
  fVar6 = (iVar11->transform).v1.y;
  fVar7 = (iVar11->transform).v0.z;
  fVar8 = (iVar11->transform).v1.z;
  fVar9 = (iVar11->transform).v2.y;
  fVar10 = (iVar11->transform).v2.z;
  fVar12 = ((float)(dVar17 + (double)(float)((double)(float)(dVar16 * dVar17) * -0.16666656732559204
                                            )) + (float)(dVar18 * 0.008333025500178337) +
            (float)(dVar19 * -0.0001980741071747616) + (float)(dVar16 * dVar19) * 2.601887e-06) *
           0.25 + 0.5 + (float)(&DAT_00a52e6c)[(byte)param_1->setByGroup];
  (param_1->pos).x =
       (param_1->pos).x +
       (iVar11->transform).v0.x * fVar1 + (iVar11->transform).v1.x * fVar11 +
       (iVar11->transform).v2.x * fVar12;
  (param_1->pos).y = (param_1->pos).y + fVar5 * fVar1 + fVar6 * fVar11 + fVar9 * fVar12;
  (param_1->pos).z = (param_1->pos).z + fVar7 * fVar1 + fVar8 * fVar11 + fVar10 * fVar12;
  FastWrapRot((float)dVar15,1.5707964);
  FastEulerToMtx(auStack_a0,local_b0);
  FastVecMtx4MultBatch3(p1,auStack_a0,p1);
  PostUpdateMobyLockTransform(param_1);
  return;
}


// 0x01513e8 (0x160 bytes)
undefined8 Spawn_Moby1957_HelpdeskLady(int param_1)

{
  int *piVar1;
  float fVar2;
  MobyInstance *pMVar3;
  int iVar4;
  
  if (DAT_00a35c65 == -1) {
    pMVar3 = (MobyInstance *)0x0;
  }
  else {
    pMVar3 = CreateMoby(HELPDESK_LADY_CREDITS);
    if (pMVar3 != (MobyInstance *)0x0) {
      pMVar3->updateDistance = -1;
      pMVar3->drawDistance = 0xff;
      pMVar3->enabled = '\x01';
      pMVar3->state = '\0';
      UpdateMobyTransform(pMVar3);
      MB_SetLights(pMVar3,0x202020,0xe,0xe,0);
    }
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (pMVar3 == (MobyInstance *)0x0) {
    *(undefined4 *)(param_1 + 0x34) = 3;
  }
  else {
    *(MobyInstance **)(param_1 + 0x44) = pMVar3;
    pMVar3->modeBits = NONE;
    piVar1 = (int *)pMVar3->pVar;
    (pMVar3->pos).x = GameCamera.posX + 2.2;
    (pMVar3->pos).y = GameCamera.posY;
    fVar2 = GameCamera.posZ;
    (pMVar3->rotation).z = 3.1415927;
    pMVar3->pUpdate = &PTR_STUB_UpdateMoby_1957_HelpdeskLady_00707940;
    (pMVar3->pos).z = fVar2 + -1.6;
    *piVar1 = param_1;
    piVar1[1] = 0;
    piVar1[2] = 0;
  }
  iVar4 = Menu_AllocStreamBuffer(1);
  *(int *)(param_1 + 0x3c) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x34) = 3;
  }
  return 0;
}


// 0x0151548 (0x16c bytes)
/* [p2_pause] deletes 24 mobys; widget with M1957_Update_GirlwadOnGameComplete
   [p2_pause] deletes 24 mobys; widget with M1957_Update_GirlwadOnGameComplete
   [p2_pause] deletes 24 mobys; widget with M1957_Update_GirlwadOnGameComplete */

undefined8 GameComplete_OnExit(int param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar4;
  MobyInstance *moby;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  do {
    puVar4 = (undefined4 *)(param_1 + 0x44 + iVar5);
    moby = (MobyInstance *)*puVar4;
    if (moby != (MobyInstance *)0x0) {
      DeleteMoby(moby);
      lVar2 = (longlong)worldUpdateTime;
      moby->color = (int)((ulonglong)lVar2 >> 0x20);
      moby->light = (int)lVar2;
      moby = (MobyInstance *)0x0;
    }
    iVar3 = iVar3 + 1;
    iVar5 = iVar5 + 4;
    *puVar4 = moby;
    cVar1 = DAT_00a52c7b;
  } while (iVar3 < 0x18);
  iVar3 = 0;
  while (((&DAT_00a53098)[iVar3 * 2] != *(int *)(param_1 + 0x3c) ||
         (((&DAT_00a5309c)[iVar3 * 2] & 2) == 0))) {
    iVar3 = iVar3 + 1;
    if (4 < iVar3) {
LAB_00151660:
      *(undefined4 *)(param_1 + 0x3c) = 0;
      if ((g_SpeechPlaying.status != 6) && (g_SpeechPlaying.status != 7)) {
        g_SpeechPlaying.status = 5;
      }
      return 0;
    }
  }
  if ((((&DAT_00a5309c)[iVar3 * 2] & 4) != 0) &&
     ((&DAT_00a5309c)[iVar3 * 2] = (&DAT_00a5309c)[iVar3 * 2] ^ 4, cVar1 != '\0')) {
    music_StopLoad();
    DAT_00a52c7b = '\0';
  }
  (&DAT_00a5309c)[iVar3 * 2] = (&DAT_00a5309c)[iVar3 * 2] & 0xfffffffd;
  goto LAB_00151660;
}


// 0x01516c0 (0x608 bytes)
// strings: 006536f4: 'girlwad'

undefined8 M1957_Update_GirlwadOnGameComplete(int param_1)

{
  char cVar1;
  GPiece<16> auVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 uVar5;
  u8 uVar6;
  byte bVar7;
  byte bVar8;
  int seq;
  int iVar9;
  int iVar10;
  ulonglong moby;
  MobyInstance *uVar1;
  
  iVar10 = *(int *)(param_1 + 0x34);
  if (iVar10 < 1) {
    if (iVar10 < 0) {
      return 0;
    }
    if (g_MusicLoading != 0) {
      return 0;
    }
    iVar10 = (DAT_010ea454 & 0x1fffff) * -0x800 + 0x4f000;
    uVar3 = idol::PRINT_m_LoadGameFile(*(int *)(param_1 + 0x3c) + iVar10,"girlwad");
    if ((int)uVar3 == 0) {
      *(undefined4 *)(param_1 + 0x34) = 3;
      return 0;
    }
    *(undefined4 *)(param_1 + 0x34) = 1;
    *(int *)(param_1 + 0x40) = iVar10;
    DAT_00a52c7b = 1;
    iVar10 = 0;
    do {
      if ((&DAT_00a53098)[iVar10 * 2] == *(int *)(param_1 + 0x3c)) {
        (&DAT_00a5309c)[iVar10 * 2] = (&DAT_00a5309c)[iVar10 * 2] | 4;
        return 0;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < 5);
    DAT_00a52c7b = 1;
    return 0;
  }
  if (iVar10 < 2) {
    if (g_MusicLoading != 0) {
      return 0;
    }
    iVar9 = 0;
    DAT_00a52c7b = 0;
    STUB_000e9150(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x40));
    bVar7 = DAT_00a35c65;
    iVar10 = *(int *)(param_1 + 0x3c);
    iVar4 = 0;
    do {
      seq = iVar4 + 1;
      (&MobyClasses[bVar7]->seqs)[iVar4] =
           (MobySeq *)(*(int *)(param_1 + 0x3c) + *(int *)(iVar10 + iVar9));
      ParseMobySeq(MobyClasses[bVar7],seq);
      iVar9 = iVar9 + 8;
      iVar4 = seq;
    } while (seq < 3);
    uVar5 = 4;
    *(undefined4 *)(param_1 + 0x34) = 2;
    if (g_ChallengeMode == 0) {
      uVar5 = 0;
    }
    iVar10 = *(int *)(param_1 + 0x44);
    *(undefined1 *)(iVar10 + 0x20) = uVar5;
    *(undefined1 *)(iVar10 + 0xbc) = 0;
    return 0;
  }
  if (2 < iVar10) {
    return 0;
  }
  uVar1 = *(MobyInstance **)(param_1 + 0x44);
  moby = ZEXT48(uVar1);
  bVar7 = uVar1->state;
  if (bVar7 == 6) {
    bVar7 = uVar1->setByGroup + 1;
    uVar1->setByGroup = bVar7;
    if ((int)(animationSpeed * 240.5) < (int)(uint)bVar7) {
      auVar2 = auRam00000000 >> 0x60 & (GPiece<16>)0xff;
      cVar1 = storeVectorElementByteIndexed
                        (auVar2 | auVar2 << 8 | auVar2 << 0x10 | auVar2 << 0x18 | auVar2 << 0x20 |
                         auVar2 << 0x28 | auVar2 << 0x30 | auVar2 << 0x38 | auVar2 << 0x40 |
                         auVar2 << 0x48 | auVar2 << 0x50 | auVar2 << 0x58 | auVar2 << 0x60 |
                         auVar2 << 0x68 | auVar2 << 0x70 | auVar2 << 0x78,0xbc,moby);
      uVar1->setByGroup = cVar1;
    }
    if ((int)(uint)(byte)uVar1->setByGroup < (int)(animationSpeed * 240.5)) {
      return 0;
    }
    uVar6 = '\x04';
    if (g_ChallengeMode == 0) {
      uVar6 = '\0';
    }
    uVar1->state = uVar6;
    uVar1->setByGroup = '\0';
    return 0;
  }
  if (bVar7 == 5) {
LAB_00151ab4:
    if ((uVar1->setByGroup == '\0') && (uVar1->updateId == uVar1->animationId)) {
      music_PlayPreseekedSpeech();
      uVar1->setByGroup = '\x01';
    }
    if ((uVar1->field43_0x70 & 2U) != 0) {
      uVar6 = '\x06';
      if (uVar1->state == '\x01') {
        uVar6 = '\x02';
      }
      uVar1->state = uVar6;
      uVar1->setByGroup = '\0';
      MB_SetAnimation(moby,0,0,(int)(animationSpeed * 24.5));
    }
  }
  else {
    if (bVar7 != 4) {
      if (bVar7 == 3) goto LAB_00151ab4;
      if (bVar7 != 2) {
        if (bVar7 == 1) goto LAB_00151ab4;
        if (bVar7 != 0) {
          return 0;
        }
      }
    }
    iVar10 = g_Language + -1;
    if (iVar10 < 0) {
      iVar10 = 0;
    }
    if (uVar1->setByGroup == '\0') {
      g_PendingSpeech = (uint)(bVar7 >> 1) * 6 + iVar10 + 60000;
    }
    bVar8 = uVar1->setByGroup + 1;
    uVar1->setByGroup = bVar8;
    if ((int)(animationSpeed * 120.5) < (int)(uint)bVar8) {
      auVar2 = auRam00000000 >> 0x60 & (GPiece<16>)0xff;
      cVar1 = storeVectorElementByteIndexed
                        (auVar2 | auVar2 << 8 | auVar2 << 0x10 | auVar2 << 0x18 | auVar2 << 0x20 |
                         auVar2 << 0x28 | auVar2 << 0x30 | auVar2 << 0x38 | auVar2 << 0x40 |
                         auVar2 << 0x48 | auVar2 << 0x50 | auVar2 << 0x58 | auVar2 << 0x60 |
                         auVar2 << 0x68 | auVar2 << 0x70 | auVar2 << 0x78,0xbc,moby);
      uVar1->setByGroup = cVar1;
    }
    if (((int)(animationSpeed * 120.5) <= (int)(uint)(byte)uVar1->setByGroup) &&
       (g_SpeechPlaying.status == 3)) {
      uVar1->setByGroup = '\0';
      uVar1->state = uVar1->state + '\x01';
      MB_SetAnimation
                (moby,(((ulonglong)bVar7 << 0x20) >> 0x21) + 1,0,(int)(animationSpeed * 24.5));
    }
  }
  return 0;
}


// 0x0151cc8 (0x7c bytes)
/* [p2_pause] draws 24 mobys
   [p2_pause] draws 24 mobys
   [p2_pause] draws 24 mobys */

undefined8 GameComplete_Draw(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  do {
    piVar1 = (int *)(param_1 + 0x44 + iVar3);
    if (*piVar1 != 0) {
      MB_AddToDrawList(*piVar1,1);
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar2 < 0x18);
  return 4;
}


// 0x0151d44 (0x4 bytes)
void STUB_UpdateMoby_1957_HelpdeskLady(...)

{
  return;
}


