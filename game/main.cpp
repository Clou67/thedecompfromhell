// game/main.cpp -- startLevel: per-level setup, then the main loop until a planet change
// STATUS: CLEAN (checked against the asm; local names are mine)
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
#include "game/mcstate.h"
#include "game/memcard.h"
#include "game/music.h"
#include "game/pad.h"
#include "game/pause.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/store.h"
#include "game/update.h"
#include "game/update/moby1118.h"
#include "game/vendor.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"
#include "idol/idol.h"
#include "idol/idol_draw.h"
#include "idol/mUnk.h"
#include "sdk/sce.h"

#define FRAME_TICKS_NTSC      9600      /* *g_pFrameTicks for one frame */
#define FRAME_TICKS_PAL       11520
#define MSG_DIALOG_DT         0.016f
#define ACTIVITY_ICON_FRAMES  55
#define ACTIVITY_ICON_SPIN    -0.11424f /* radians per animation frame */
#define CONSOLE_MEMORY_MB     156.0     /* printed as the "Console Mode" total */

/* clear an object: FastMemSetZero when size and address are 16-byte aligned, else complain and clear
   bytes (inlined once, for g_StartLevelClear; the aligned path is dead there) */
static inline void ClearMem(void *p, int size)
{
    if ((size & 15) == 0 && ((u32)p & 15) == 0) {
        FastMemSetZero(p, size);
        return;
    }
    printf("crap\n");
    for (int i = 0; i < size; i++) ((u8 *)p)[i] = 0;
}

/* playTime keeps the longest stay, in 10 s units at 60 fps (inlined twice) */
static inline void UpdateLevelPlayTime(LevelRecord *rec)
{
    int t = (int)(animationSpeed * ((float)g_GameFrameCount + 0.5f));
    if (rec->playTime < t / 600) rec->playTime = t / 600;
}

static inline float BytesToMB(int bytes)
{
    return (float)(bytes / 1024) * (1.0f / 1024.0f);
}

/* save/load states that show the spinning memory card icon */
static inline bool IsMemcardActivityState(int s)
{
    switch (s) {
    case 3: case 4: case 5: case 6:
    case 9: case 10: case 11: case 12:
    case 15: case 16: case 17: case 18: case 19: case 20:
        return true;
    default:
        return false;
    }
}

// 0x00e0e14 (0x14 bytes)
void SECTION_HEADER_MAIN(void)
{
    DAT_00724840 = 0x10000;
}

// 0x00e0e60 (0xcac bytes)
void startLevel(void)
{
    ClearMem(&g_StartLevelClear, sizeof(g_StartLevelClear));

    if (g_HasInited) {
        InitOnce();
        g_FinishedLoading = 1;
        g_LoadingStage = 0;
        DAT_00964562 = 0;
        while (!LoadLevelFiles()) STUB_00503078(0);
        g_FinishedLoading = 0;
    }
    InitIndexedBuffers();
    InitLevelMusicFileSizes();
    g_gameMode = GAME_MODE_SPACE;
    g_FramesSinceStateChange = 0;
    FUN_004d3044();
    g_MusicPlaying.track = 0;
    LoadAllMobys(1, 0);
    DebugSelectedCol = 1;
    DebugUpdate = (DEBUG_OPTION)(UPDATE_CAMERA | UPDATE_PARTICLES | UPDATE_MOBYS | UPDATE_HERO);
    Scene = 0xffffffff;
    TvMode = Cutscene;
    Actuator = 1;
    ResetDebugEnables();
    Map_LoadPlanetMap();
    Hud_InitBanks();
    LoadHudSequences();
    Space_StartLevelArrival();
    g_MainLoopFrames = 0;
    STUB_00503078(0);
    STUB_000780f8();

    music_StartTrack(g_MusicPlaying.track, 1, 0x400);
    if ((Level == Novalis && !g_SeenPlanets.Kerwan) ||
        (Level == Veldin && g_MiscLevelFlags.veldinClankCsTrigger))
        music_Unpause();
    else
        music_Pause(0);

    LevelId level = Level;
    if (!(&VisitedPlanets.Veldin)[level]) (&VisitedPlanets.Veldin)[level] = 1;
    LevelRecord *rec = &g_LevelRecords[level];
    if (rec->visits < 0xffff) rec->visits++;
    UpdateLevelPlayTime(rec);
    rec->flags |= (1u << level) | 0x80000000;

    /* memory report */
    STUB_00505f50();
    int avail = (int)FUN_004fe06c(TEX_BASE);
    int total = *(int *)(TEX_BASE + 0xc) - FUN_004fe524((undefined4 *)TEX_BASE);
    int used = total - avail;
    printf("Memory stats:\n");
    printf("Total: %8.4f\n", BytesToMB(total));
    float usedMB = BytesToMB(used);
    printf("Used : %8.4f\n", usedMB);
    float availMB = BytesToMB(avail);
    printf("Avail: %8.4f\n", availMB);
    printf("Console Mode:\n");
    printf("Total: %8.4f\n", CONSOLE_MEMORY_MB);
    printf("Used : %8.4f\n", usedMB);
    printf("Avail: %8.4f\n", availMB);

    if (!g_loadingPlanet) {
        do {
            cellSysutilCheckCallback();
            g_pMsgDialog->funcs->update(g_pMsgDialog, MSG_DIALOG_DT);
            if (g_Pad.showReconnectPrompt && g_gameMode != GAME_MODE_FREEZE) DisplayPrompt(9, 0, 0);
            BumpPerfCounters();
            CollMobyVertCache_Reset();

            u32 ticks = *g_pFrameTicks;
            *g_pFrameTicks = 0;
            g_TotalFrameTicks += ticks;

            Debug_ResetLevelCounters();
            g_CutscenePlaying = 0;
            STUB_00174cf0();
            VU1_swapChain();
            STUB_00078104();
            STUB_00078134();
            STUB_000780fc();
            STUB_00505d20();

            gameMode_t mode = g_gameMode;
            switch (g_gameMode) {
            case GAME_MODE_DEBUG:
                UpdatePad();
                UpdateDebugSelections();
                DrawDebugMenu();
                break;
            case GAME_MODE_NORMAL:
                UpdatePad();
                UpdateGameplay();
                UpdateOcclusion(1);
                SetupDefaultDraw();
                Render_DispatchJob();
                break;
            case GAME_MODE_MOVIE:
                UpdateCinematic();
                break;
            case GAME_MODE_SCENE:
                UpdatePad();
                UpdateScene();
                UpdateOcclusion(1);
                SetupDefaultDrawMovie();
                Render_DispatchJob();
                break;
            case GAME_MODE_PAUSE:
                UpdatePad();
                UpdatePause();
                UpdateOcclusion(1);
                InitLevelRenderState();
                Render_DispatchJob();
                break;
            case GAME_MODE_FREEZE:
                UpdatePad();
                UpdateFreeze();
                UpdateOcclusion(1);
                SetupDefaultDrawFreeze();
                Render_DispatchJob();
                break;
            case GAME_MODE_VENDOR:
                UpdatePad();
                Vendor_PreUpdate();
                UpdateOcclusion(1);
                Vendor_PostUpdate();
                Render_DispatchJob();
                break;
            case GAME_MODE_SPACE:
                UpdatePad();
                UpdateSpace();
                DisplayLoadingScreen();
                break;
            case GAME_MODE_PUZZLE:
                UpdatePad();
                UpdateCredits();
                UpdateOcclusion(1);
                DrawCredits();
                Render_DispatchJob();
                break;
            default:
                break;
            }
            g_FramesSinceStateChange = (g_gameMode == mode) ? g_FramesSinceStateChange + 1 : 0;

            if (g_CutscenePlaying) {
                STUB_00174cf4(1);
                VU1_initChain();
                continue;
            }

            memcard_Update();
            MCSTATE_Update();
            if (IsMemcardActivityState(DAT_0071fb00) && !g_HideActivityIcon) {
                STUB_0006d704(0);
                SetGSReg(0x16, idol_draw::Blend(1, 5, 4, 0, 0, 0, 1, 1));
                DrawSprite(GetIconFrameTex(MEMORY_CARD, 0), 50, 300, 64, 64, 0x80);
                int frame = g_MainLoopFrames % ACTIVITY_ICON_FRAMES;
                float angle = (float)frame * ACTIVITY_ICON_SPIN;
                int tex = Hud_GetTexIndex(GetIconFrameTex(MEMORY_CARD, 1));
                Hud_DrawTexQuadF_v4(1312.0f, 5312.0f, 272.0f, 272.0f, angle, 64, 64, tex);
                STUB_0006d708();
            }
            g_HideActivityIcon = 0;

            ResetDebugFontStrings();
            STUB_0006562c("system misc", 0x10);
            STUB_00065630("system misc", 0x10);
            STUB_00174cf4(1);
            g_FrameLoad = (float)(FastIntToDouble(*g_pFrameTicks) / (g_IsPal ? FRAME_TICKS_PAL : FRAME_TICKS_NTSC));
            if (g_gameMode == GAME_MODE_NORMAL && Profile) STUB_00065628();

            if (!g_HeroIsOutOfBounds) {
                if (g_gameMode == GAME_MODE_NORMAL || g_gameMode == GAME_MODE_SCENE) {
                    /* the frame overran its budget: run one more update to catch up */
                    if ((int)*g_pFrameTicks > (g_IsPal ? FRAME_TICKS_PAL : FRAME_TICKS_NTSC)) {
                        if (g_gameMode == GAME_MODE_NORMAL) {
                            UpdatePad();
                            UpdateGameplay();
                        } else if (g_gameMode == GAME_MODE_SCENE && !g_SceneRecording) {
                            UpdatePad();
                            UpdateScene();
                        }
                    }
                }
                STUB_00503078(0);
                g_MainLoopFrames++;
                SetFrameCount();
                DAT_00a15f3a = 0;
            }
            STUB_000684a0();

            /* fell out of the level: reload it in place */
            if (g_gameMode == GAME_MODE_NORMAL && g_HeroIsOutOfBounds) {
                VU1_initChain();
                STUB_00505f4c();
                STUB_00505d20();
                sound_StopAllSounds();
                music_Stop();
                LoadAllMobys(0, 1);
                g_gameMode = GAME_MODE_NORMAL;
                music_StartTrack(g_MusicPlaying.track, 1, 0x400);
                Hud_InitBanks();
            }
            UpdateLevelPlayTime(&g_LevelRecords[Level]);
        } while (!g_loadingPlanet);
    }
    DoSpaceTransition();
}
