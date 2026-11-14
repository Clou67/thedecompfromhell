#include <math.h>
#include <stdio.h>
#include <string.h>
#include "game/update.h"
#include "game/boot.h"
#include "game/camera.h"
#include "game/collproc.h"
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
#include "game/mcstate.h"
#include "game/memcard.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/pad.h"
#include "game/partproc.h"
#include "game/pause.h"
#include "game/respawn.h"
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
#include "sdk/linked.h"
#include "sdk/sce.h"
// game/update.cpp -- reconstructed from NPEA00385 EBOOT
// 22 functions, 0x166e08-0x16a0d8: the per-frame update of gameplay, scenes, movies and credits

#define SCENE_CHUNK_FRAMES_NTSC 0x60
#define SCENE_CHUNK_FRAMES_PAL 0x50
#define CREDITS_IMAGE_SIZE 0xd0000


#define USAGE_MAP 6

static inline int ScaledFrames(float frames)
{
    return (int)(animationSpeed * frames);
}

static inline bool StepRequested(void)
{
    return (DebugUpdate & ENABLE_STEPPING) && (g_Pad.buttonsPressedThisFrame & L3);
}

static inline bool UpdatesMobys(void)
{
    return (DebugUpdate & UPDATE_MOBYS) || StepRequested();
}

/* the type of the camera being updated (0x13 is one the menus can't open over) */
static inline short CurrentCameraType(void)
{
    return *(short *)((u8 *)GameCamera.pCurrentUpdCam + 0x86);
}

static inline BinkPlayer *GetBinkPlayer(void)
{
    if (g_pBinkPlayer == NULL) {
        BinkPlayer *player = (BinkPlayer *)Idol_New(0x60);

        if (player != NULL) {
            BinkPlayer_Init(player);
        }

        g_pBinkPlayer = player;
    }

    return g_pBinkPlayer;
}

/* starts movies/<kind>[movieIdx].bik and returns the player */
static inline BinkPlayer *StartBink(const char *format, int movieIdx, int language)
{
    char path[64];
    char fullPath[128];
    BinkPlayer *player = GetBinkPlayer();

    sprintf(path, format, movieIdx);
    FileSys_ResolvePath(FileSys_Get(), path, fullPath);
    BinkPlayer_Start(player, fullPath, language, 0x400);

    return player;
}

/* plays the started movie to its end; START skips it */
static inline void RunBink(BinkPlayer *player)
{
    bool skipped = false;
    int done = 0;

    do {
        UpdatePad();
        if (g_Pad.downButtons & START) {
            skipped = true;
            break;
        }

        UpdateOcclusion(0);
        int state = BinkPlayer_GetState(player);
        cellSysutilCheckCallback();
        if (state > 1) {
            done = BinkPlayer_DrawFrame(player);
        }

        Render_DispatchJob();
    } while (done == 0);

    if (skipped) {
        FUN_004d4c88((undefined4 *)player);
    }
}

// 0x0166e08 (0x14 bytes)
/* the static initializer of update.cpp */
void SECTION_HEADER_UPDATE(void)
{
    DAT_0073875c = 0x10000;
}

// 0x0166e1c (0x4 bytes)
void STUB_00166e1c(...)
{
}

// 0x0166e20 (0x8 bytes)
undefined8 STUB_00166e20_RET_0(...)
{
    return 0;
}

// 0x0166e28 (0x4 bytes)
void STUB_00166e28(...)
{
}

// 0x0166e30 (0x4c bytes)
void ResetGameCounters(void)
{
    g_MobyDrawCount = 0;
    g_PostDrawCount = 0;
    g_NumLameShadows = 0;
    g_PreDrawCount = 0;
    DAT_0095cae0 = 0;
    g_PostPreDrawCount = 0;
    DAT_0095ccf0 = 0;
    DAT_00a1bfe4 = 0;
}

// 0x0166e88 (0x118 bytes)
void UpdateGameCounters(void)
{
    if (g_Pad.downButtons == 0 && g_Pad.sticks.z == 0.0f && g_Pad.sticks.w == 0.0f &&
        g_Pad.sticks.x == 0.0f && g_Pad.sticks.y == 0.0f) {
        g_IdleFrames++;
    }
    else {
        g_IdleFrames = 0;
    }

    /* bolts are only mined while the player has touched the pad in the last 15.5 minutes */
    if (g_boltMiningActive != 0 && g_IdleFrames < (int)((float)ScaledFrames(15.5f) * 60.0f)) {
        g_boltMiningTimer++;
    }

    g_GameFrameCount++;
    worldUpdateTime++;
}

// 0x0166fb0 (0xa70 bytes)
void UpdateGameplay(void)
{
    /* debug stepping: R3 runs 6 frames, L3 one */
    if ((DebugUpdate & ENABLE_STEPPING) && (g_Pad.buttonsPressedThisFrame & R3)) {
        g_Pad.buttonsPressedThisFrame = (CONTROLLER_INPUT)(g_Pad.downButtons & ~g_StepButtons);
        g_StepFrames = 6;
        g_Pad.unk0a8 = g_StepButtons & ~g_Pad.downButtons;
        DebugUpdate = (DEBUG_OPTION)(UPDATE_CAMERA | UPDATE_PARTICLES | UPDATE_MOBYS | UPDATE_HERO);
        g_StepButtons = g_Pad.downButtons & ~L3;
    }

    if (g_StepFrames != 0) {
        g_StepFrames--;
        if (g_StepFrames == 0) {
            DebugUpdate = ENABLE_STEPPING;
        }
    }

    if ((DebugUpdate & ENABLE_STEPPING) && (g_Pad.buttonsPressedThisFrame & L3)) {
        g_Pad.buttonsPressedThisFrame = (CONTROLLER_INPUT)(g_Pad.downButtons & ~g_StepButtons);
        g_Pad.unk0a8 = g_StepButtons & ~g_Pad.downButtons;
        g_StepButtons = g_Pad.downButtons & ~L3;
    }

    /* the memory card was pulled out */
    if (g_gameMode == GAME_MODE_NORMAL && (g_CardStateFlags & 0x401) && g_FramesSinceStateChange > 7 &&
        g_heroState != VISIBOMB_CONTROL) {
        DisplayPrompt(3, 0, 0);
        return;
    }

    /* a pulled-out pad counts as START */
    bool startPressed = (g_Pad.buttonsPressedThisFrame & START) || g_Pad.connected == 0;

    if (resumePage != 0 && g_gameMode == GAME_MODE_NORMAL) {
        BeginMenu(0);
        return;
    }

    /* the pause prompts of the vehicle sections */
    if (Level == Quartu && g_FramesSinceStateChange >= 8 && g_heroType == 2 && startPressed &&
        g_heroState != MOVEMENT_LOCKED) {
        if (CurrentCameraType() != 0x13) {
            DisplayPrompt(4, 0, 0);
        }
        return;
    }

    MobyInstance *turret = (MobyInstance *)DAT_0096b2d0;
    bool inTurret = g_heroStateType == 9 && g_heroState == TURRET_PLANE_UI && turret != NULL &&
                    (turret->oClass == 0x45 || turret->oClass == 0x563 || turret->oClass == 0x4da);

    if (inTurret && g_FramesSinceStateChange >= 8 && startPressed && g_heroState != MOVEMENT_LOCKED &&
        CurrentCameraType() != 0x13) {
        DisplayPrompt(1, 0, 0);
        return;
    }

    if (g_gameMode == GAME_MODE_NORMAL && (Level == Batalia || Level == Hoven) && startPressed &&
        g_heroState == TURRET_PLANE_UI) {
        DisplayPrompt(1, 0, 0);
        return;
    }

    if (startPressed && g_FramesSinceStateChange >= 8 && g_heroState != MOVEMENT_LOCKED &&
        g_heroStateType == 0x16) {
        DisplayPrompt(0, 0, 0);
        return;
    }

    /* the pause menu */
    if (startPressed && g_FramesSinceStateChange > 7 && g_heroState != MOVEMENT_LOCKED && DAT_0096ad8c != 2 &&
        g_heroState != TURRET_PLANE_UI && g_heroState != VISIBOMB_CONTROL && g_HeroIsOutOfBounds == 0 &&
        g_heroHealth != 0 && g_gameMode == GAME_MODE_NORMAL) {
        BeginMenu(0);
        return;
    }

    /* the quick select menu (page 10) */
    if (!(DebugUpdate & ENABLE_STEPPING) && g_FramesSinceStateChange > 7 &&
        (g_Pad.buttonsPressedThisFrame & (R3 | SELECT)) && g_heroStateType != 0x16 &&
        g_heroState != MOVEMENT_LOCKED && g_heroState != TURRET_PLANE_UI && g_heroState != VISIBOMB_CONTROL &&
        g_HeroIsOutOfBounds == 0 && g_heroHealth != 0 && g_gameMode == GAME_MODE_NORMAL && !inTurret &&
        g_StepFrames == 0) {
        BeginMenu(10);
        return;
    }

    /* the "game saved" prompt, once per level */
    if (g_memcardGameSaved != 0 && g_MiscLevelFlags.field16_0x10 == 0 && g_FramesSinceStateChange > 7 &&
        g_ChallengeMode == 0 && g_HeroIsOutOfBounds == 0 && g_heroHealth != 0 &&
        ScaledFrames(30.5f) < (int)worldUpdateTime && Level != Veldin) {
        DisplayPrompt(5, 0, 0);
        g_MiscLevelFlags.field16_0x10 = 1;
        return;
    }

    if (g_heroState != VISIBOMB_CONTROL && g_heroState != TURRET_PLANE_UI) {
        MB_HandleGameplayHud();
    }

    /* L3 shows the health and bolt counters */
    if ((g_Pad.buttonsPressedThisFrame & L3) && g_heroState != VISIBOMB_CONTROL &&
        g_heroState != TURRET_PLANE_UI) {
        int hudId = RegisterHeroHealthHUDCallbacks();
        Hud_ShowEntryById(hudId, ScaledFrames(180.5f));

        hudId = RegisterHUDCallback(2, 0x754e, (void *)BoltHud_Init, (void *)BoltHud_Update,
                                    (void *)Draw_BoltCountUI, (int *)&g_boltCount, 9999999);
        Hud_ShowEntryById(hudId, ScaledFrames(180.5f));
    }

    if (g_MapAvailable != 0) {
        UsageRecord *map = &((UsageRecord *)CHAR_ARRAY_00a0feec)[USAGE_MAP];

        if (map->uses != 0xffff) {
            map->uses++;
        }

        int playTime = (int)(animationSpeed * ((float)g_GameFrameCount + 0.5f)) / 600;
        if (map->lastUse < playTime) {
            map->lastUse = (u16)playTime;
        }

        map->levels |= 1 << (Level & 0x3f) | 0x80000000;
    }

    if (g_ShipTakeoffPending != 0) {
        g_ShipTakeoffPending = 0;
        if (g_heroHealth != 0) {
            Space_StartTakeoffCutscene();
            return;
        }
    }

    if (UpdatesMobys()) {
        ResetGameCounters();
    }

    if (UpdatesMobys()) {
        UpdateNumSpawnableMobys();
        UpdateMobys();
        sound_UpdateAmbient();
        WaterDrift_Update();
    }
    STUB_0006562c("moby update", 3);

    if ((DebugUpdate & UPDATE_HERO) || StepRequested()) {
        HeroUpdate();
    }
    STUB_0006562c("hero update", 7);

    if ((DebugUpdate & UPDATE_PARTICLES) || StepRequested()) {
        UpdateParts();
        ImpactSprite_Update();
    }
    STUB_0006562c("part update", 5);

    if ((DebugUpdate & UPDATE_CAMERA) || StepRequested()) {
        UpdateCamera();
    }
    else if (ControlMode != 0) {
        DebugCamera();
        if (ControlMode == 2) {
            UpdateDebugCamera();
        }
    }
    STUB_0006562c("camera update", 8);

    sound_Update();
    STUB_0006562c("sound update", 6);

    UpdatePointLights();
    UpdateHeroLightAngle();
    UpdateAllGameplayHUD(1);
    Help_Update();

    if (UpdatesMobys()) {
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

// 0x0167a30 (0x428 bytes)
/* ends a scene: deletes its mobys, shows what mode_sceneInit hid and puts the camera and hero back */
void mode_sceneUnInit(void)
{
    if (g_SpeechPlaying.status != 6 && g_SpeechPlaying.status != 7) {
        g_SpeechPlaying.status = 5;
    }

    g_CutscenePlaying = 1;
    VU1_setBufSizeByLevel();
    FadeToBlack(12);
    ResetGameCounters();

    g_gameMode = GAME_MODE_NORMAL;
    SceneScreenFade = 0.0f;
    GameCamera.camUnderWater = (u8)g_SceneSavedCamUnderWater;
    GameCamera.posX = g_SceneSavedCamPos[0];
    GameCamera.posY = g_SceneSavedCamPos[1];
    GameCamera.posZ = g_SceneSavedCamPos[2];
    memcpy(&GameCamera.posW, g_SceneSavedCamFlags, 4);

    if (g_SceneRecording != 0) {
        printf("\nwrote %d frames\n", g_SceneFramesWritten);
    }

    g_ViewContext.xratio = 0.63f;
    UpdateViewContext();

    /* the scene loader appended each moby's sequence to its class */
    for (int i = 0; i < g_SpaceSceneMobyCnt; i++) {
        MobyInstance *moby = g_SpaceSceneMobys[i];

        if (moby != NULL) {
            moby->pClass->seq_cnt--;
            moby->pClass->seqs[moby->pClass->seq_cnt] = NULL;
            DeleteMoby(moby);
        }
    }

    if (Scene == g_SceneId) {
        for (MobyInstance *moby = g_MobyInstance; moby->state != 0xff; moby++) {
            if ((moby->state & 0x80) == 0) {
                moby->modeBits &= ~NO_DRAW;
            }
        }
    }

    for (MobyInstance *moby = MobyInstancePermEnd; moby->state != 0xff; moby++) {
        if ((moby->state & 0x80) == 0 && (moby->oClass == MINE_004A || moby->oClass == DECOY)) {
            moby->modeBits &= ~NO_DRAW;
        }
    }

    TransitionMovement(0, 1);

    /* put the hero back on the ground */
    float groundZ = GetGroundZ(0.5f, &g_heroPosition, 0);
    if (groundZ > 2.0f && fabsf(g_heroPosition.z - groundZ) < 4.5f) {
        g_heroPosition.z = groundZ;
    }

    g_heroInvisible = 0;
    Hero_MakeVisible();

    if (g_SceneHeroWarpPending != 0) {
        groundZ = GetGroundZ(0.5f, &g_SceneHeroWarpPos, 0);
        if (groundZ > 2.0f && fabsf(g_SceneHeroWarpPos.z - groundZ) < 2.0f) {
            g_SceneHeroWarpPos.z = groundZ;
        }

        Hero_Warp(&g_SceneHeroWarpPos.x, &g_SceneHeroWarpRot.x, 0, 1);
    }

    if (g_DialogMoby != 0) {
        ((MobyInstance *)g_DialogMoby)->modeBits &= ~DISABLED;
    }

    if (g_SceneHideMoby != 0) {
        MobyInstance *hidden = (MobyInstance *)g_SceneHideMoby;

        g_SceneHideMoby = 0;
        hidden->modeBits &= ~DISABLED;
    }

    /* go on with the dialog that started the scene */
    if (g_DialogMoby != 0) {
        undefined4 moby = g_DialogMoby;
        undefined4 line = g_DialogLine;

        g_DialogMoby = 0;
        g_DialogLine = 0;
        Dialog_Advance(moby, line, 1);
    }

    Scene = -1;
    music_UnpauseDelay(ScaledFrames(30.5f));
}

// 0x0167e60 (0x538 bytes)
/* starts scene absolute_scene_id (a dialog cutscene); CROSS skips a scene that isn't Scene */
void mode_sceneInit(int absolute_scene_id)
{
    if (absolute_scene_id < 0 || g_gameMode == GAME_MODE_SCENE) {
        return;
    }

    if (g_heroHealth == 0) {
        HandleHeroDeath();
        return;
    }

    music_Pause(0);
    music_Sync(0);
    g_CutscenePlaying = 1;

    FastMemSet(g_SceneSavedCamPos, 0, 0x1c0);
    FastMemSet(&DAT_00a1bf80, 0, 0x40);
    FastMemSet(&DAT_00a1be80, 0, 0x40);
    FastMemSet(&DAT_00a1bec0, 0, 0x40);
    FastMemSet(&DAT_00a1bf40, 0, 0x40);
    FastMemSet(&DAT_00a1bf00, 0, 0x40);

    g_SceneCheatZoom = 1.0f;
    vu1_bufSize -= 0x3c000;
    g_SceneCheatDolly = 0.0f;
    g_SpaceSceneFrame = 0;
    g_SpaceSceneChunk = 0;
    g_SceneLoadBuffer = g_NpcBuffer + 0x3c000;
    DAT_0095cda8 = g_NpcBuffer;
    g_SceneId = absolute_scene_id;
    Help_Kill();

    SceneScreenFade = 1.0f;
    g_SceneFlash = 0;
    g_gameMode = GAME_MODE_SCENE;

    g_SceneSavedCamUnderWater = (char)GameCamera.camUnderWater;
    GameCamera.camUnderWater = 0;
    g_SceneSavedCamPos[0] = GameCamera.posX;
    g_SceneSavedCamPos[1] = GameCamera.posY;
    g_SceneSavedCamPos[2] = GameCamera.posZ;
    memcpy(g_SceneSavedCamFlags, &GameCamera.posW, 4);

    TransitionMovement(100, 2);
    g_heroInvisible = 1;
    Hero_MakeInvisible();

    if (g_DialogMoby != 0) {
        ((MobyInstance *)g_DialogMoby)->modeBits |= DISABLED;
    }

    if (g_SceneHideMoby != 0) {
        ((MobyInstance *)g_SceneHideMoby)->modeBits |= DISABLED;
    }

    if ((g_Pad.buttonsPressedThisFrame & CROSS) && Scene != g_SceneId) {
        mode_sceneUnInit();
        return;
    }

    FadeToBlack(6);
    LoadNpcSubtitles(Level, absolute_scene_id);
    PreLoadNpcChunk(0);
    FadeToBlack(ScaledFrames(6.5f));
    music_Sync(1);
    g_SceneLoadBuffer = g_NpcBuffer + 0x80000;
    ParseNpcChunk();

    /* the level's own copies of the scene's actors (by class) stay hidden while it plays */
    if (Scene == g_SceneId) {
        char inScene[224];

        FastMemSet(inScene, 0, sizeof(inScene));
        for (int i = 0; i < g_SpaceSceneMobyCnt; i++) {
            inScene[g_SpaceSceneMobys[i]->mClass] = 1;
        }

        for (MobyInstance *moby = g_MobyInstance; moby->state != 0xff; moby++) {
            if ((moby->state & 0x80) == 0 && inScene[moby->mClass] != 0) {
                moby->modeBits |= NO_DRAW;
            }
        }

        for (int i = 0; i < g_SpaceSceneMobyCnt; i++) {
            g_SpaceSceneMobys[i]->modeBits &= ~NO_DRAW;
        }
    }

    for (MobyInstance *moby = MobyInstancePermEnd; moby->state != 0xff; moby++) {
        if ((moby->state & 0x80) == 0 && (moby->oClass == MINE_004A || moby->oClass == DECOY)) {
            moby->modeBits |= NO_DRAW;
        }
    }

    g_PendingSpeech = g_SceneId;
    while (g_SpeechPlaying.status != 3) {
        sound_Update();
        STUB_00503078(0);
    }

    /* the speech starts 3 frames before the scene: start it now and let those frames pass */
    g_SceneSpeechFrame = -3;

    bool speechStarted = false;
    if (g_SceneSpeechFrame <= 0) {
        music_PlayPreseekedSpeech();
        PreLoadNpcChunk(1);
        for (int i = 0; i > g_SceneSpeechFrame; i--) {
            STUB_00503078(0);
        }
        speechStarted = true;
    }

    if (!speechStarted) {
        PreLoadNpcChunk(1);
    }
}

// 0x01683a0 (0x3b0 bytes)
/* sets GameCamera from the scene's camera frame; returns the frame's flags[0] (set on a cut) */
char UpdateSceneCamera(void)
{
    SceneCameraFrame *frame = &g_SpaceSceneCameraFrames[g_cutsceneCameraFrame];
    char cut = frame->flags[0];
    Mtx4 rot;
    Mtx4 copy;

    g_ViewContext.xratio = frame->xratio;
    if (Cheats[0] != 0) {
        g_ViewContext.xratio *= g_SceneCheatZoom;
    }
    UpdateViewContext();

    GameCamera.posX = frame->x;
    GameCamera.posY = frame->y;
    GameCamera.posZ = frame->z;
    memcpy(&GameCamera.posW, frame->flags, 4);

    float sinX = std::_FSin(frame->rotX, 0);
    float cosX = std::_FSin(frame->rotX, 1);
    float sinY = std::_FSin(frame->rotY, 0);
    float cosY = std::_FSin(frame->rotY, 1);
    float sinZ = std::_FSin(frame->rotZ, 0);
    float cosZ = std::_FSin(frame->rotZ, 1);
    float sinYsinZ = sinY * sinZ;
    float cosZsinY = cosZ * sinY;

    /* the X, Y, Z euler rotation, starting from the identity at 0x7387f0 */
    memcpy(&rot, &DAT_007387f0, sizeof(Mtx4));
    rot.v0.x = cosY * cosZ;
    rot.v0.y = cosY * sinZ;
    rot.v0.z = -sinY;
    rot.v1.x = sinX * cosZsinY - cosX * sinZ;
    rot.v1.y = sinX * sinYsinZ + cosX * cosZ;
    rot.v1.z = cosY * sinX;
    rot.v2.x = cosX * cosZsinY + sinX * sinZ;
    rot.v2.y = cosX * sinYsinZ - cosZ * sinX;
    rot.v2.z = cosX * cosY;
    memcpy(&copy, &rot, sizeof(Mtx4));

    GameCamera.orientMtx.forward.x = -copy.v2.x;
    GameCamera.orientMtx.right.x = -copy.v0.x;
    GameCamera.orientMtx.forward.y = -copy.v2.y;
    GameCamera.orientMtx.right.y = -copy.v0.y;
    GameCamera.orientMtx.forward.z = -copy.v2.z;
    GameCamera.orientMtx.right.z = -copy.v0.z;
    GameCamera.orientMtx.up.x = copy.v1.x;
    GameCamera.orientMtx.up.y = copy.v1.y;
    GameCamera.orientMtx.up.z = copy.v1.z;

    if (Cheats[4] != 0) {
        /* mirrored: right = forward x up */
        GameCamera.orientMtx.right.x =
            GameCamera.orientMtx.forward.y * copy.v1.z - GameCamera.orientMtx.forward.z * copy.v1.y;
        GameCamera.orientMtx.right.y =
            GameCamera.orientMtx.forward.z * copy.v1.x - GameCamera.orientMtx.forward.x * copy.v1.z;
        GameCamera.orientMtx.right.z =
            GameCamera.orientMtx.forward.x * copy.v1.y - GameCamera.orientMtx.forward.y * copy.v1.x;
        GameCamera.orientMtx.right.w = 0.0f;
    }

    /* pull the camera back along its forward axis */
    if (Cheats[0] != 0 && g_SceneCheatDolly != 0.0f) {
        float forwardX = GameCamera.orientMtx.forward.x;
        float forwardY = GameCamera.orientMtx.forward.y;
        float forwardZ = GameCamera.orientMtx.forward.z;
        float offsetX = 0.0f;
        float offsetY = 0.0f;
        float offsetZ = 0.0f;
        float length = sqrtf(forwardX * forwardX + forwardY * forwardY + forwardZ * forwardZ);

        if (length != 0.0f) {
            float scale = g_SceneCheatDolly / length;

            offsetX = forwardX * scale;
            offsetY = forwardY * scale;
            offsetZ = forwardZ * scale;
        }

        GameCamera.posX -= offsetX;
        GameCamera.posY -= offsetY;
        GameCamera.posZ -= offsetZ;
    }

    return cut;
}

// 0x0168768 (0x5cc bytes)
/* a frame of a scene: its mobys play their recorded positions (two scene frames per animation
   frame) while the chunks of the scene stream in */
void UpdateScene(void)
{
    if (g_Pad.buttonsPressedThisFrame & START) {
        mode_sceneUnInit();
        return;
    }

    if (UpdatesMobys()) {
        ResetGameCounters();
    }

    bool advance = !(DebugUpdate & ENABLE_STEPPING) || (g_Pad.buttonsPressedThisFrame & (L3 | CIRCLE));

    if (advance) {
        UpdateSpaceSceneEffects();
    }

    if (UpdatesMobys()) {
        UpdateMobys();
        sound_UpdateAmbient();
    }
    STUB_0006562c("moby update", 3);

    if ((DebugUpdate & UPDATE_HERO) || StepRequested()) {
        HeroUpdate();
    }
    STUB_0006562c("hero update", 7);

    if ((DebugUpdate & UPDATE_PARTICLES) || StepRequested()) {
        UpdateParts();
    }
    STUB_0006562c("part update", 5);

    if (advance) {
        g_cutsceneCameraFrame++;
        g_SpaceSceneFrame++;

        SceneScreenFade -= 0.34f;
        if (SceneScreenFade < 0.0f) {
            SceneScreenFade = 0.0f;
        }

        if (g_SceneSpeechFrame <= g_SpaceSceneFrame) {
            music_PlayPreseekedSpeech();
        }

        bool end = *(short *)&g_SpaceSceneNumFrames <= g_SpaceSceneFrame;

        /* START skips a scene once it has faded in; in the story the shoulder buttons must be held too */
        if (g_SpaceSceneFrame >= ScaledFrames(18.5f) && SceneScreenFade == 0.0f &&
            (g_Pad.buttonsPressedThisFrame & START)) {
            bool skippable = g_ChallengeMode != 0 || g_goodiesMenuActive != 0 || g_MoviePlayState != 0 ||
                             (int)Level < 1;

            if (skippable || (g_Pad.downButtons & (R1 | L1 | R2 | L2)) == (R1 | L1 | R2 | L2)) {
                end = true;
            }
        }

        if (end) {
            mode_sceneUnInit();
        }
        else {
            int chunkFrames = g_IsPal != 0 ? SCENE_CHUNK_FRAMES_PAL : SCENE_CHUNK_FRAMES_NTSC;

            if (g_cutsceneCameraFrame >= chunkFrames) {
                music_Sync(1);
                g_SpaceSceneChunk++;
                g_SceneLoadBuffer = g_NpcBuffer + 0x80000;
                ParseNpcChunk();
                PreLoadNpcChunk(g_SpaceSceneChunk + 1);
            }

            char cut = UpdateSceneCamera();

            for (int i = 0; i < g_SpaceSceneMobyCnt; i++) {
                MobyInstance *moby = g_SpaceSceneMobys[i];
                char animFrame = (char)(g_cutsceneCameraFrame >> 1);

                moby->previousAnimationFrame = animFrame;
                moby->animationFrame = animFrame + 1;
                UpdateMobyFrameData(moby);

                moby->animationBlend = (float)FastIntToDouble(g_cutsceneCameraFrame & 1) * 0.5f;
                if (cut != 0 && (g_cutsceneCameraFrame & 1)) {
                    moby->animationBlend = 1.0f;
                }

                /* the positions are recorded per animation frame */
                float blend = moby->animationBlend;
                float keep = 1.0f - blend;
                Vec4 *positions = (Vec4 *)moby->pVar;
                Vec4 *from = &positions[(u8)moby->previousAnimationFrame];
                Vec4 *to = &positions[(u8)moby->animationFrame];

                moby->pos.w = from->w;
                moby->unk71 = -1;
                moby->pos.x = from->x * keep + to->x * blend;
                moby->pos.y = from->y * keep + to->y * blend;
                moby->pos.z = from->z * keep + to->z * blend;
                UpdateMobyTransform(moby);

                if (moby->shadow != 0) {
                    MB_SetZBoundsFromFloorCeil(moby);
                }

                if (moby->oClass == RATCHET) {
                    Hero_UpdateInScene(moby);
                }

                if (moby->oClass == CLANK_000A || moby->oClass == GIANT_CLANK || moby->oClass == CLANK_0555) {
                    Hero_AddPulsingMobyGlow(moby);
                }
            }
        }
    }
    STUB_0006562c("camera update", 8);

    sound_Update();
    STUB_0006562c("sound update", 6);

    UpdatePointLights();
    UpdateHeroLightAngle();

    if (UpdatesMobys()) {
        UpdateGameCounters();
    }
}

// 0x0168d34 (0xb8 bytes)
/* switches to the movie mode; arg0 and arg1 are only stored (nothing on PS3 reads them) */
void StartMovie(int arg0, int arg1, int language)
{
    g_ReverbDirty |= 8;
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
}

// 0x0168dec (0x190 bytes)
void PlayInfobotMovie(int movieIdx)
{
    if (movieIdx <= 0 || movieIdx >= 19) {
        return;
    }

    StartBink("/rc1/ps3data/movies/infobots[%d].bik", movieIdx, g_Language);

    int language = g_Language;
    if (g_heroHealth == 0) {
        HandleHeroDeath();
    }
    else if (g_HeroIsOutOfBounds == 0) {
        /* the binary passes the hero block (0x969ce0) for both unused arguments */
        StartMovie((int)(uintptr_t)&g_heroMtx, (int)(uintptr_t)&g_heroMtx, language);
    }
}

// 0x0168f7c (0x190 bytes)
void PlayHelpMovie(int movieIdx)
{
    if ((u32)movieIdx >= 3) {
        return;
    }

    StartBink("/rc1/ps3data/movies/help[%d].bik", movieIdx, g_Language);

    int language = g_Language;
    if (g_heroHealth == 0) {
        HandleHeroDeath();
    }
    else if (g_HeroIsOutOfBounds == 0) {
        StartMovie((int)(uintptr_t)&g_heroMtx, (int)(uintptr_t)&g_heroMtx, language);
    }
}

// 0x016910c (0x15c bytes)
void PlaySpecialMovie(int movieIdx)
{
    if ((u32)movieIdx >= 4) {
        return;
    }

    BinkPlayer *player = StartBink("/rc1/ps3data/movies/special[%d].bik", movieIdx, 0);

    /* the binary passes the register Idol_New's result was in, which is stale when the player
       already existed; nothing reads these */
    StartMovie((int)(uintptr_t)player, (int)(uintptr_t)player, 0);
}

// 0x0169268 (0x160 bytes)
void PlayStoryMovie(int movieIdx)
{
    if ((u32)movieIdx >= 12) {
        return;
    }

    BinkPlayer *player = StartBink("/rc1/ps3data/movies/story[%d].bik", movieIdx, g_Language);

    StartMovie((int)(uintptr_t)player, (int)(uintptr_t)player, g_Language);
}

// 0x01693c8 (0x274 bytes)
/* ends a movie: stores GS memory (the z buffer pages, then the GS ram) to g_MovieVramSave (PS2
   leftovers; the GS calls are stubs) and goes back to gameplay */
void mode_movieUnInit(void)
{
    /* empty structs on PS3, so one byte each */
    struct GsStoreImage {};
    GsStoreImage zbufImage;
    GsStoreImage ramImage;

    g_CutscenePlaying = 1;
    STUB_00503078(0);
    sceGsSyncPath(0, 0);
    STUB_00503208(Respawn_IncCounter);

    int zbufPages = Cutscene != 0 ? 14 : 13;
    int ramPages = Cutscene != 0 ? 14 : 17;
    u32 dest = g_MovieVramSave;

    int gsAddr = GSmem.zbuf;
    for (int i = 0; i < zbufPages; i++) {
        sceGsSetDefStoreImage(&zbufImage, gsAddr >> 8, 2, 0x2a, 0, 0, 0x80, 0x80);
        FlushCache(0);
        sceGsExecStoreImage(&zbufImage, dest);
        sceGsSyncPath(0, 0);
        gsAddr += 0x10000;
        dest += 0xc000;
    }

    gsAddr = g_GsRamBase;
    for (int i = 0; i < ramPages; i++) {
        sceGsSetDefStoreImage(&ramImage, gsAddr >> 8, 1, 0x12, 0, 0, 0x40, 0x40);
        FlushCache(0);
        sceGsExecStoreImage(&ramImage, dest);
        sceGsSyncPath(0, 0);
        gsAddr += 0x4000;
        dest += 0x4000;
    }

    if (g_MoviePlayState == 2) {
        g_MoviePlayState = 0;
    }

    FadeToBlack(4);
    music_StartTrack(g_MusicPlaying.track, 1, 0x400);
    g_gameMode = GAME_MODE_NORMAL;

    if (g_DialogMoby != 0) {
        undefined4 moby = g_DialogMoby;
        undefined4 line = g_DialogLine;

        g_DialogMoby = 0;
        g_DialogLine = 0;
        Dialog_Advance(moby, line, 1);
    }

    g_ReverbDirty |= 0x10;
}

// 0x016963c (0x110 bytes)
void PlayMovieBlocking(void)
{
    RunBink(GetBinkPlayer());
}

// 0x016974c (0x154 bytes)
void UpdateCinematic(void)
{
    FlushCache(0);
    sound_StopAllSounds();
    music_Stop();
    STUB_005066bc_RET_0(0);

    RunBink(GetBinkPlayer());

    FUN_00503128_RET_0(0);
    mode_movieUnInit();
}

// 0x01698a0 (0x274 bytes)
/* starts the credits: loads the first two images */
void mode_creditsInit(void)
{
    u32 vramBase = *(u32 *)(g_pIdolDrawBase + 0x4ac);

    music_Sync(0);
    FadeToBlack(8);
    SceneScreenFade = 1.0f;
    g_CutscenePlaying = 1;
    g_gameMode = GAME_MODE_PUZZLE;

    FastMemSet(&g_Credits, 0, sizeof(g_Credits));
    g_Credits.vram[0] = DAT_00a10924;
    g_Credits.vram[1] = DAT_00a10924 + CREDITS_IMAGE_SIZE;

    CreditsImage *header = (CreditsImage *)(uintptr_t)g_NpcBuffer;
    LoadAssetFromFile("rc1/ps3data/global/credits/credits[0].ps3", header, sizeof(CreditsImage));
    g_Credits.images[0] = *header;
    LoadAssetFromFile("rc1/ps3data/global/credits/credits[1].ps3", header, sizeof(CreditsImage));
    g_Credits.images[1] = *header;

    LoadAssetFromFile("rc1/ps3data/global/credits/credits[0].vram", (void *)(uintptr_t)g_Credits.vram[0],
                      CREDITS_IMAGE_SIZE);
    g_Credits.images[0].texData += g_Credits.vram[0] - vramBase;

    music_Sync(1);
    idol::PRINT_m_LoadGameFile(g_Credits.vram[1], (char *)"credits_images_ntsc");
    LoadAssetFromFile("/rc1/ps3data/global/credits/credits[1].vram", (void *)(uintptr_t)g_Credits.vram[1],
                      CREDITS_IMAGE_SIZE);
    g_Credits.images[1].texData += g_Credits.vram[1] - vramBase;
}

// 0x0169b14 (0x6c bytes)
void mode_creditsUnInit(void)
{
    STUB_00174cf4(1);
    FadeToBlack(12);
    music_StopLoad();
    g_CutscenePlaying = 1;
    g_gameMode = GAME_MODE_NORMAL;
    SceneScreenFade = 0.0f;
    VU1_setBufSizeByLevel();
}

// 0x0169b88 (0x550 bytes)
/* scrolls the credits images; each one, once scrolled, loads the next into the second half */
void UpdateCredits(void)
{
    char path[128];

    music_Sync(0);

    /* the binary reads g_JapaneseMode here and again below */
    bool japanese = g_JapaneseMode;

    SceneScreenFade -= 0.05f;
    if (SceneScreenFade < 0.0f) {
        SceneScreenFade = 0.0f;
    }

    if (g_Credits.state == 0) {
        if (g_Credits.frame >= g_CreditsImageLength[g_Credits.image] - 36) {
            if (g_MusicLoading != 0) {
                music_Sync(1);
            }

            bool finished;
            if (g_JapaneseMode) {
                finished = g_Credits.image > 36;
            }
            else {
                finished = (japanese && g_Credits.image == 41) || g_Credits.image > 44;
            }

            if (finished) {
                mode_creditsUnInit();
                return;
            }

            g_Credits.loadTimer = -1;
            g_Credits.state = 1;
        }
    }
    else if (g_Credits.state == 1) {
        STUB_00174cf4(1);

        if (g_Credits.loadTimer >= 36) {
            u32 vramBase = *(u32 *)(g_pIdolDrawBase + 0x4ac);

            /* the images only in one language's credits */
            if (!g_JapaneseMode) {
                if (!japanese && g_Credits.image == 17) {
                    g_Credits.image = 27;
                    g_Credits.frame = 0x2238;
                }

                if (japanese && g_Credits.image == 8) {
                    g_Credits.image = 17;
                    g_Credits.frame = 0x1590;
                }

                if (!japanese && g_Credits.image == 39) {
                    g_Credits.image = 41;
                    g_Credits.frame = 0x350c;
                }
            }

            g_Credits.state = 0;
            g_Credits.loadTimer = -1;

            int file = g_Credits.image % 20;
            g_Credits.image++;

            idol::PRINT_m_LoadGameFile(g_Credits.vram[1], (char *)"g_wad.game.credits_images_ntsc[image_id]");

            CreditsImage *header = (CreditsImage *)(uintptr_t)DAT_00a10920;
            g_Credits.images[0] = g_Credits.images[1];

            sprintf(path, "rc1/ps3data/global/credits/credits[%d].ps3", file);
            LoadAssetFromFile(path, header, sizeof(CreditsImage));
            g_Credits.images[1] = *header;

            sprintf(path, "rc1/ps3data/global/credits/credits[%d].vram", file);
            LoadAssetFromFile(path, (void *)(uintptr_t)g_Credits.vram[1], CREDITS_IMAGE_SIZE);
            g_Credits.images[1].texData += g_Credits.vram[1] - vramBase;
        }
    }

    g_Credits.loadTimer++;
    g_Credits.frame++;

    if (g_Pad.buttonsPressedThisFrame & START) {
        mode_creditsUnInit();
    }

    sound_Update();
}
