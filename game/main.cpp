// game/main.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0xe0e14-0xe1b0c
#include <stdio.h>
#include "game/main.h"
#include "game/boot.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/initonce.h"
#include "game/loaders.h"
#include "game/map.h"
#include "game/memcard.h"
#include "game/music.h"
#include "game/pad.h"
#include "game/partupd.h"
#include "game/pause.h"
#include "game/sUnk.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby1118.h"
#include "game/vendor.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"
#include "idol/idol.h"
#include "idol/idol_draw.h"
#include "idol/mUnk.h"
#include "sdk/sce.h"

// 0x00e0e14 (0x14 bytes)
void SECTION_HEADER_MAIN(void)

{
  DAT_00724840 = 0x10000;
  return;
}


// 0x00e0e60 (0xcac bytes)
// strings: 00652770: 'crap\n' | 00652778: 'Memory stats:\n' | 00652788: 'Total: %8.4f\n' | 00652798: 'Used : %8.4f\n' | 006527a8: 'Avail: %8.4f\n' | 006527b8: 'Console Mode:\n' | 006527c8: 'system misc'

/* WARNING: Removing unreachable block (ram,0x000e0ee0) */
/* WARNING: Removing unreachable block (ram,0x000e0eec) */

void startLevel(void)

{
  float fVar1;
  short sVar2;
  LevelId LVar3;
  gameMode_t gVar4;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar5;
  uint uVar9;
  uint uVar10;
  double used;
  double available;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  
  printf("crap\n");
  iVar6 = 0;
  do {
    iVar8 = iVar6 + 1;
    (&::startLevel)[iVar6] = 0;
    iVar6 = iVar8;
  } while (iVar8 < 1);
  if (g_HasInited != 0) {
    InitOnce();
    g_FinishedLoading = 1;
    g_LoadingStage = 0;
    DAT_00964562 = 0;
    while (iVar6 = LoadLevelFiles(), iVar6 == 0) {
      STUB_00503078(0);
    }
    g_FinishedLoading = 0;
  }
  InitIndexedBuffers();
  InitLevelMusicFileSizes();
  g_gameMode = GAME_MODE_SPACE;
  g_FramesSinceStateChange = 0;
  FUN_004d3044();
  g_MusicPlaying.track = 0;
  LoadAllMobys(1,0);
  DebugSelectedCol = 1;
  DebugUpdate = UPDATE_CAMERA|UPDATE_PARTICLES|UPDATE_MOBYS|UPDATE_HERO;
  Scene = 0xffffffff;
  TvMode = Cutscene;
  Actuator = 1;
  ResetDebugEnables();
  Map_LoadPlanetMap();
  Hud_InitBanks();
  LoadHudSequences();
  Space_StartLevelArrival();
  DAT_0159c330 = 0;
  STUB_00503078(0);
  STUB_000780f8();
  music_StartTrack((int)g_MusicPlaying.track,1,0x400);
  if (((Level == Novalis) && (g_SeenPlanets.Kerwan == '\0')) ||
     ((Level == Veldin && (g_MiscLevelFlags.veldinClankCsTrigger != 0)))) {
    music_Unpause();
  }
  else {
    music_Pause(0);
  }
  LVar3 = Level;
  if ((&VisitedPlanets.Veldin)[Level] == '\0') {
    (&VisitedPlanets.Veldin)[Level] = '\x01';
  }
  iVar6 = LVar3 * 8;
  if (*(short *)(&DAT_00a0fd24 + iVar6) != -1) {
    *(short *)(&DAT_00a0fd24 + iVar6) = *(short *)(&DAT_00a0fd24 + iVar6) + 1;
  }
  dVar15 = 0.5;
  iVar8 = (int)(animationSpeed * (float)((double)(longlong)g_GameFrameCount + 0.5));
  if ((int)(uint)*(ushort *)(&DAT_00a0fd26 + iVar6) < iVar8 / 600) {
    sVar2 = (short)(iVar8 >> 0x1f);
    *(short *)(&DAT_00a0fd26 + iVar6) =
         ((short)(iVar8 / 600) + sVar2) - ((short)((short)(iVar8 / 0x2580000) + sVar2) >> 0xf);
  }
  *(uint *)(&DAT_00a0fd28 + iVar6) =
       *(uint *)(&DAT_00a0fd28 + iVar6) | 1 << (LVar3 & 0x3f) | 0x80000000;
  STUB_00505f50();
  uVar7 = FUN_004fe06c(TEX_BASE);
  iVar6 = *(int *)(TEX_BASE + 0xc);
  iVar8 = FUN_004fe524(TEX_BASE);
  uVar10 = iVar6 - iVar8;
  uVar9 = uVar10 - uVar7;
  printf("Memory stats:\n");
  available = 0.0009765625;
  printf("Total: %8.4f\n",
               (double)(float)((double)(longlong)
                                       (int)(((int)uVar10 >> 10) +
                                            (uint)((int)uVar10 < 0 && (uVar10 & 0x3ff) != 0)) *
                              0.0009765625));
  used = (double)(float)((double)(longlong)
                                 (int)(((int)uVar9 >> 10) +
                                      (uint)((int)uVar9 < 0 && (uVar9 & 0x3ff) != 0)) * available);
  printf("Used : %8.4f\n",used);
  available = (double)(float)((double)(longlong)
                                      (int)(((int)uVar7 >> 10) +
                                           (uint)((int)uVar7 < 0 && (uVar7 & 0x3ff) != 0)) *
                             available);
  printf("Avail: %8.4f\n",available);
  printf("Console Mode:\n");
  printf("Total: %8.4f\n",0x4063800000000000);
  printf("Used : %8.4f\n",used);
  printf("Avail: %8.4f\n",available);
  if (g_loadingPlanet == 0) {
    uVar14 = 0x3f90624de0000000;
    uVar13 = 0x4094800000000000;
    uVar12 = 0x40b4c00000000000;
    uVar11 = 0x4071000000000000;
    used = -0.11423972994089127;
    do {
      cellSysutilCheckCallback();
      (*(code *)**(undefined4 **)(*DAT_01111640 + 8))(uVar14);
      if ((DAT_00964fa0 != '\0') && (g_gameMode != GAME_MODE_FREEZE)) {
        DisplayPrompt(9,0,0);
      }
      FUN_00502d80();
      CollMobyVertCache_Reset();
      iVar6 = *DAT_00927200;
      *DAT_00927200 = 0;
      DAT_00a53500 = DAT_00a53500 + iVar6;
      Debug_ResetLevelCounters();
      g_CutscenePlaying = 0;
      STUB_00174cf0();
      VU1_swapChain();
      STUB_00078104();
      STUB_00078134();
      STUB_000780fc();
      STUB_00505d20();
      gVar4 = g_gameMode;
      if (g_gameMode < GAME_MODE_PAUSE) {
        if (g_gameMode < GAME_MODE_NORMAL) {
          if (GAME_MODE_NONE < g_gameMode) {
                    /* Debug update */
            UpdatePad();
            UpdateDebugSelections();
            DrawDebugMenu();
          }
        }
        else {
                    /* Gameplay update */
          if (g_gameMode < GAME_MODE_MOVIE) {
            UpdatePad();
            UpdateGameplay();
            UpdateOcclusion(1);
            SetupDefaultDraw();
            Render_DispatchJob();
          }
          else if (g_gameMode < GAME_MODE_SCENE) {
                    /* Cinematic update */
            UpdateCinematic();
          }
          else {
                    /* In level movie update */
            UpdatePad();
            UpdateScene();
            UpdateOcclusion(1);
            SetupDefaultDrawMovie();
            Render_DispatchJob();
          }
        }
      }
      else if (g_gameMode < GAME_MODE_SPACE) {
        if (g_gameMode < GAME_MODE_FREEZE) {
                    /* Pause state update */
          UpdatePad();
          UpdatePause();
          UpdateOcclusion(1);
          InitLevelRenderState();
          Render_DispatchJob();
        }
        else if (g_gameMode < GAME_MODE_VENDOR) {
                    /* Freeze state update */
          UpdatePad();
          UpdateFreeze();
          UpdateOcclusion(1);
          SetupDefaultDrawFreeze();
          Render_DispatchJob();
        }
        else {
                    /* Vendor update */
          UpdatePad();
          Vendor_PreUpdate();
          UpdateOcclusion(1);
          Vendor_PostUpdate();
          Render_DispatchJob();
        }
      }
      else if (g_gameMode < GAME_MODE_PUZZLE) {
                    /* Loading screen / space update */
        UpdatePad();
        UpdateSpace();
        DisplayLoadingScreen();
      }
      else if (g_gameMode < GAME_MODE_CREDITS) {
        UpdatePad();
        UpdateCredits();
        UpdateOcclusion(1);
        DrawSomeOverlay();
        Render_DispatchJob();
      }
      iVar6 = 0;
      if (g_gameMode == gVar4) {
        iVar6 = g_FramesSinceStateChange + 1;
      }
      g_FramesSinceStateChange = iVar6;
      if (g_CutscenePlaying == 0) {
        memcard_Update();
        FlowState_Update();
        if ((((((DAT_0071fb00 == 3) || (DAT_0071fb00 == 4)) || (DAT_0071fb00 == 4)) ||
             ((DAT_0071fb00 == 5 || (DAT_0071fb00 == 6)))) ||
            ((((DAT_0071fb00 == 9 || ((DAT_0071fb00 == 10 || (DAT_0071fb00 == 0xb)))) ||
              (DAT_0071fb00 == 0xc)) ||
             ((((DAT_0071fb00 == 0xf || (DAT_0071fb00 == 0x10)) || (DAT_0071fb00 == 0x11)) ||
              (((DAT_0071fb00 == 0x12 || (DAT_0071fb00 == 0x13)) || (DAT_0071fb00 == 0x14)))))))) &&
           (DAT_00a52ce8 == 0)) {
          STUB_0006d704(0);
          uVar5 = idol_draw::Blend(1,5,4,0,0,0,1,1);
          SetGSReg(0x16,uVar5);
          uVar5 = GetIconFrameTex(0x755d,0);
          DrawSprite(uVar5,0x32,300,0x40,0x40,0x80);
          available = (double)(float)((double)(longlong)(DAT_0159c330 % 0x37) * used);
          iVar6 = GetIconFrameTex((double)(longlong)(DAT_0159c330 % 0x37),0x755d,1);
          Hud_GetTexIndex(iVar6);
          Hud_DrawTexQuadF_v4(uVar13,uVar12,uVar11,uVar11,available);
          STUB_0006d708();
        }
        DAT_00a52ce8 = 0;
        ResetDebugFontStrings();
        STUB_0006562c("system misc",0x10);
        STUB_00065630("system misc",0x10);
        STUB_00174cf4(1);
        available = (double)FastIntToDouble(*DAT_00927200);
        fVar1 = 9600.0;
        if (g_IsPal != 0) {
          fVar1 = 11520.0;
        }
        DAT_00a10714 = (float)(available / (double)fVar1);
        if ((g_gameMode == GAME_MODE_NORMAL) && (Profile != 0)) {
          STUB_00065628();
        }
        if (g_HeroIsOutOfBounds == '\0') {
          if ((g_gameMode == GAME_MODE_NORMAL) || (g_gameMode == GAME_MODE_SCENE)) {
            if ((int)(((uint)(ZERO_MASK(g_IsPal)) & 0xfffff880) + 0x2d00) <
                *DAT_00927200) {
              if (g_gameMode == GAME_MODE_NORMAL) {
                UpdatePad();
                UpdateGameplay();
              }
              else if ((g_gameMode == GAME_MODE_SCENE) && (DAT_0095cda0 == 0)) {
                UpdatePad();
                UpdateScene();
              }
            }
            STUB_00503078(0);
            DAT_0159c330 = DAT_0159c330 + 1;
            SetFrameCount();
          }
          else {
            STUB_00503078(0);
            DAT_0159c330 = DAT_0159c330 + 1;
            SetFrameCount();
          }
          DAT_00a15f3a = 0;
        }
        STUB_000684a0();
        if ((g_gameMode == GAME_MODE_NORMAL) && (g_HeroIsOutOfBounds != '\0')) {
          VU1_initChain();
          STUB_00505f4c();
          STUB_00505d20();
          sound_StopAllSounds();
          music_Stop();
          LoadAllMobys(0,1);
          g_gameMode = GAME_MODE_NORMAL;
          music_StartTrack((int)g_MusicPlaying.track,1,0x400);
          Hud_InitBanks();
        }
        iVar6 = (int)(animationSpeed * (float)((double)(longlong)g_GameFrameCount + dVar15))
        ;
        if ((int)(uint)*(ushort *)(&DAT_00a0fd26 + Level * 8) < iVar6 / 600) {
          sVar2 = (short)(iVar6 >> 0x1f);
          *(short *)(&DAT_00a0fd26 + Level * 8) =
               ((short)(iVar6 / 600) + sVar2) - ((short)((short)(iVar6 / 0x2580000) + sVar2) >> 0xf)
          ;
        }
      }
      else {
        STUB_00174cf4(1);
        VU1_initChain();
      }
    } while (g_loadingPlanet == 0);
  }
  DoSpaceTransition();
  return;
}


