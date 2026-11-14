// game/boot.cpp -- start-up: the PS3 port's boot(), the warning and logo screens, the title
// screen (front end) and loading its data, level resets and shut-down
// STATUS: CLEAN (checked against the asm; local names are mine)
// 30 functions, 0x10200-0x14b58
//
// boot() brings up Idol (licence checks, the game system, FIOS and the psarc, graphics, saves,
// Bink, trophies), then runs one "main function" after another: GameStart (warnings, logo movie,
// sound bank, then the title screen loop in PrepareFrontbin) until a level is chosen, then
// startLevel for each level. Everything Idol is reached through its singletons (g_pGame,
// g_pHWSystem, TrophyMgr, the save data, g_pBinkPlayer) built by StaticInit_BootGlobals.
#include "rc1.h"
#include <cell/fios.h>
#include <cell/fios/ps3/ppu/fios_media_ps3ppu.h>
#include "idol/fastinline.h"
#include <cell/gcm/gcm_macros.h>
#include <cell/gcm/gcm_enum.h>
#include <sys/timer.h>
#include <sys/process.h>

#define NUM_ATTRACT_MOVIES      4
#define CELL_SYSUTIL_REQUEST_EXITGAME 0x0101    /* sysutil_common.h */
#define SPLASH_HOLD             360
#define SPLASH_FADE_IN          64
#define SPLASH_FADE_OUT         30
#define SPLASH_FULL_ALPHA       0x80

#define REGION_SCEA             0       /* *(g_pHWSystem + 0xc0) */
#define REGION_SCEE             1

#define LANG_FRENCH             2
#define LANG_GERMAN             3
#define LANG_SPANISH            4
#define LANG_ITALIAN            5

#define FRONTEND_LOGO_TEX_JP    (&g_JapanLogoTex)
#define SCENE_CAMERA_FRAME_SIZE 0x20
#define SCENE_CHUNK_MAX         0x46
#define BOOT_SOUND_DEFS         13

#define SPLASH_QUAD_W           0x200   /* the screen in RSX vertex units */
#define SPLASH_QUAD_H           0x1a0

/* a 2-short vertex attribute word: first value in the low half */
#define PACK2S(lo, hi)          ((u32)(hi) << 16 | ((u32)(lo) & 0xffff))



extern sys_process_param_t __sys_process_param;     /* the SDK's, in .sys_proc_param */

typedef void (*MainFunc)(void);
typedef void (*IdolMethod)(void *self, ...);

/* an Idol C++ object's virtual function (the vtable holds function descriptors) */
static inline IdolMethod VirtualMethod(void *object, int offset)
{
    return *(IdolMethod *)(*(u8 **)object + offset);
}

/* the Bink player singleton, made on first use */
static inline BinkPlayer *GetBinkPlayer(void)
{
    if (g_pBinkPlayer == NULL) {
        BinkPlayer *player = (BinkPlayer *)Idol_New(sizeof(BinkPlayer));

        if (player != NULL) {
            BinkPlayer_Init(player);
        }

        g_pBinkPlayer = player;
    }

    return g_pBinkPlayer;
}

static inline int ScaledFrames(float frames)
{
    return (int)(animationSpeed * frames);
}

static inline int ClampToZero(int value)
{
    return value < 0 ? 0 : value;
}

/* the help message file's offsets become pointers (the file has an 8-byte header) */
static inline void RelocateHelpMsgs(u8 *base, int count)
{
    int i;

    for (i = 0; i < count; i++) {
        ((u32 *)(base + i * 16))[0] += (u32)base - 8;
    }
}

static inline void Emit(RenderingStep *pass, u32 word)
{
    *pass->command++ = (RsxCmd)word;
}

static inline void DrawSceneFade(void)
{
    if (SceneScreenFade > 0.0f) {
        if (SceneScreenFade > 1.0f) {
            SceneScreenFade = 1.0f;
        }

        DrawScreenOverlay(0, 0, 0, FastDoubleToInt(SceneScreenFade * 128.0f));
    }
}

static inline bool IsSoundHandlePlayingInline(int handle, int soundId)
{
    return handle >= 0 && g_SoundChannels[handle].sound_index == g_CoreSoundCnt + soundId &&
           (g_SoundChannels[handle].state == 1 || g_SoundChannels[handle].state == 2);
}

// 0x0010200 (0x2c bytes)
void _init(void)
{
    frame_dummy();
    __do_global_ctors_aux();
}

// 0x0010230 (0x8 bytes)
int STUB_00010230_RET_0(void)
{
    return 0;
}

// 0x0010238 (0x150 bytes)
/* plays the logo movie once; g_LogoMovieDone is set when it has finished */
void PlayLogoMovie(void)
{
    BinkPlayer *player;
    char path[64];
    char fullPath[136];
    bool done = false;

    if (g_LogoMovieDone) {
        return;
    }

    player = GetBinkPlayer();
    sprintf(path, "/rc1/ps3data/movies/logo_movie.bik");
    FileSys_ResolvePath(FileSys_Get(), path, fullPath);
    BinkPlayer_Start(player, fullPath, 0, 0x400);

    do {
        if (*(int *)((u8 *)TrophyMgr + 0x188) != 0) {
            cellSysutilCheckCallback();
        }

        UpdateOcclusion(0);

        int state = BinkPlayer_GetState(player);
        cellSysutilCheckCallback();

        if (state > 1) {
            g_LogoMovieDone = BinkPlayer_DrawFrame(player);
            done = g_LogoMovieDone != 0;
        }

        Render_DispatchJob();
    } while (!done);
}

// 0x0010388 (0x20 bytes)
const char *GetLanguageNameByIdx(void)
{
    return s_LanguageNames[g_Language];
}

// 0x00103b0 (0x1ac bytes)
/* plays attract[idx].bik with the game in movie mode */
void PlayAttractMovie(int idx)
{
    BinkPlayer *player;
    char path[64];
    char fullPath[144];

    if (idx < 0 || idx >= NUM_ATTRACT_MOVIES) {
        return;
    }

    player = GetBinkPlayer();
    sprintf(path, "/rc1/ps3data/movies/attract[%d].bik", idx);
    FileSys_ResolvePath(FileSys_Get(), path, fullPath);
    BinkPlayer_Open(player, fullPath, 0x400);

    g_MoviePlayState = 2;
    DAT_009637cb |= 8;
    FlushCache(0);
    sound_StopAllSounds();
    music_Stop();
    FadeToBlack(ScaledFrames(12.5f));

    g_gameMode = GAME_MODE_MOVIE;
    FlushCache(0);
    sound_StopAllSounds();
    music_Stop();
    STUB_005066bc_RET_0(0);
    PlayMovieBlocking();

    g_MoviePlayState = 0;
    FadeToBlack(4);
    g_gameMode = GAME_MODE_NORMAL;
    DAT_009637cb |= 0x10;
}

// 0x001055c (0x2c4 bytes)
/* the progress a new game starts from (a lighter memcard_SetupNewGameGlobals) */
void ZeroFillKeyGlobals(void)
{
    int i;

    memset(&VisitedPlanets, 0, 0x14);
    memset(g_CollectedGoldBolts, 0, 0x50);
    memset(g_LevelFlags, 0, sizeof(g_LevelFlags));

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

    memset(&g_MiscLevelFlags, 0, 0x80);

    for (i = 0; i < 12; i++) {
        Cheats[i] = 0;
    }

    memset(g_SkillPoints, 0, sizeof(g_SkillPoints));
    memset(&currentAmmoArray, 0, 0x94);
    memset(CHAR_ARRAY_0096c165, 0, 0x94);
    memset(g_purchasableVendorItems, 0xff, sizeof(g_purchasableVendorItems));

    UINT_ARRAY_0096c1dc[0] = 0;
    UINT_ARRAY_0096c1dc[1] = 0;
    DAT_0096c1e4 = 0;
    DAT_0096c1e8 = 0;
    DAT_0096c1ec = 0;
    DAT_0096c1f0 = 0;
    DAT_0096c1f4 = 0;
    DAT_0096c1f8 = 0;

    memset(&g_SeenPlanets, 0, 0x14);
    memset(GalacticMap, 0, sizeof(GalacticMap));
    memset(g_MissionTargets, 0, sizeof(g_MissionTargets));
    memset(HelpData, 0, sizeof(HelpData));
    memset(&DAT_00a0f51c, 0, 0x94);
    memset(&DAT_00a0f5b0, 0, 0x94);
    memset(&DAT_00a0f644, 0, 0x94);
    memset(&g_equippedItem, 0, 0x94);
    memset(&g_goldWeaponsArray, 0, 0x28);
    memset(&DAT_00a0f6e4, 0, 0x50);

    DAT_0071fb24 = 1;
    DAT_00969c9c = 0;
    g_memcardRestoredBolts = 0;
    g_memcardRestoredGoldWeapons = 0;
    g_memcardHadBoltTrophy = 0;
    g_memcardHadMidasTrophy = 0;
}

// 0x0010820 (0x1c4 bytes)
/* the title logo, and the pulsing "press start" (not in Japanese) */
void FrontEnd_DrawLogo(void)
{
    if (g_FrontEndLogoAlpha != 0) {
        u32 color = (u32)g_FrontEndLogoAlpha << 24 | 0x808080;

        if (!g_JapaneseMode) {
            Sprite_DrawShape(236, 16, 256, 128, 0, 0, 256, 128, color, (void *)DAT_0071c980);
        }
        else {
            Sprite_DrawShape(236, 48, 256, 128, 0, 0, 256, 128, color, FRONTEND_LOGO_TEX_JP);
        }
    }

    if (g_FrontEndPressStartAlpha != 0 && !g_JapaneseMode) {
        int language = ClampToZero(g_Language - 1);
        u32 color = (u32)g_FrontEndPressStartAlpha << 24 | 0x808080;
        Sprite_DrawShapeWrapper(160, g_ScreenHeight / 2 - 80, 192, 96, 0, 0, 256, 128, color,
                                GetEffectTex(language + 4));
    }
}

// 0x00109e4 (0x280 bytes)
/* Points GameCamera along the space scene's camera track. Returns the frame's first flag byte. */
char FrontEnd_UpdateSceneCamera(void)
{
    SceneCameraFrame *frame = &((SceneCameraFrame *)g_SpaceSceneCameraFrames)[g_cutsceneCameraFrame];
    char flag = frame->flags[0];
    Mtx4 rot;
    Mtx4 unused;
    float sinX, cosX, sinY, cosY, sinZ, cosZ;
    float sinYsinZ, cosZsinY;

    g_ViewContext.xratio = 0.63f;
    UpdateViewContext();

    GameCamera.posX = frame->x;
    GameCamera.posY = frame->y;
    GameCamera.posZ = frame->z;
    memcpy(&GameCamera.posW, frame->flags, 4);

    memcpy(&unused, &DAT_00651080, sizeof(Mtx4));
    sinX = std::_FSin(frame->rotX, 0);
    cosX = std::_FSin(frame->rotX, 1);
    sinY = std::_FSin(frame->rotY, 0);
    cosY = std::_FSin(frame->rotY, 1);
    sinZ = std::_FSin(frame->rotZ, 0);
    cosZ = std::_FSin(frame->rotZ, 1);

    sinYsinZ = sinY * sinZ;
    cosZsinY = cosZ * sinY;

    /* the X, Y, Z euler rotation, starting from the identity at 0x71cc2c */
    memcpy(&rot, &DAT_0071cc2c, sizeof(Mtx4));
    rot.v0.x = cosY * cosZ;
    rot.v0.y = cosY * sinZ;
    rot.v0.z = -sinY;
    rot.v1.x = sinX * cosZsinY - cosX * sinZ;
    rot.v1.y = sinX * sinYsinZ + cosX * cosZ;
    rot.v1.z = cosY * sinX;
    rot.v2.x = cosX * cosZsinY + sinX * sinZ;
    rot.v2.y = cosX * sinYsinZ - cosZ * sinX;
    rot.v2.z = cosX * cosY;
    memcpy(&unused, &rot, sizeof(Mtx4));

    GameCamera.orientMtx.forward.x = -rot.v2.x;
    GameCamera.orientMtx.forward.y = -rot.v2.y;
    GameCamera.orientMtx.forward.z = -rot.v2.z;
    GameCamera.orientMtx.right.x = -rot.v0.x;
    GameCamera.orientMtx.right.y = -rot.v0.y;
    GameCamera.orientMtx.right.z = -rot.v0.z;
    GameCamera.orientMtx.up.x = rot.v1.x;
    GameCamera.orientMtx.up.y = rot.v1.y;
    GameCamera.orientMtx.up.z = rot.v1.z;

    return flag;
}

// 0x0010c70 (0x368 bytes)
/* one frame of the title screen */
void FrontEnd_Draw(void)
{
    FastMemSet(OcclVisibility, 0xff, sizeof(OcclVisibility));
    FrontEnd_UpdateSceneCamera();
    ComposeCameraMatrix();
    DAT_00a10724 = 0xffffffff;
    UpdateOcclusion(1);
    *(u8 *)&PTR_DAT_00902e98 = 0;
    SetupDefaultDraw();

    FrontEnd_DrawLogo();
    DrawSceneFade();

    if (g_gameMode == GAME_MODE_FREEZE) {
        DrawDialogText();
    }

    if (g_gameMode == GAME_MODE_PAUSE && g_MenuScreen != 0x2d) {
        FrontEnd_DrawMenu();
    }

    if (g_MobyDrawCount != 0) {
        ExecuteMobyDraws();
    }

    STUB_001754c8();
    DrawSceneFade();
    Render_DispatchJob();
}

// 0x0011020 (0x4a8 bytes)
/* Steps the title screen: the space scene (its mobys move between keyed positions, two frames
   per key), the logo fading in, "press start" pulsing, and the menu once START is pressed. */
void FrontEnd_Update(void)
{
    int i;

    ResetGameCounters();

    g_cutsceneCameraFrame++;
    g_SpaceSceneFrame++;
    SceneScreenFade -= 0.0625f;

    if (SceneScreenFade < 0.0f) {
        SceneScreenFade = 0.0f;
    }

    if (g_SpaceSceneFrame < *(short *)&g_SpaceSceneNumFrames) {     /* the upper halfword */
        if ((int)g_cutsceneCameraFrame > 0x5f) {
            g_SpaceSceneChunk++;
            ParseSpaceSceneChunk(g_SpaceSceneChunk);
        }
    }
    else {
        g_SpaceSceneFrame = 0;
        g_SpaceSceneChunk = 0;
        ParseSpaceSceneChunk(0);
    }

    FrontEnd_UpdateSceneCamera();

    for (i = 0; i < g_SpaceSceneMobyCnt; i++) {
        MobyInstance *moby = g_SpaceSceneMobys[i];
        Vec4 *keys = (Vec4 *)moby->pVar;
        Vec4 *from;
        Vec4 *to;
        float blend;
        float invBlend;
        char key = (int)g_cutsceneCameraFrame >> 1;

        moby->previousAnimationFrame = key;
        moby->animationFrame = key + 1;
        UpdateMobyFrameData(moby);

        blend = FastIntToDouble(g_cutsceneCameraFrame & 1) * 0.5f;
        to = &keys[(u8)moby->animationFrame];
        from = &keys[(u8)moby->previousAnimationFrame];
        invBlend = 1.0f - blend;
        moby->animationBlend = blend;

        moby->pos.w = from->w;
        moby->unk71 = -1;
        moby->pos.x = from->x * invBlend + to->x * blend;
        moby->pos.y = from->y * invBlend + to->y * blend;
        moby->pos.z = from->z * invBlend + to->z * blend;
        UpdateMobyTransform(moby);
        moby->shadow = 0;

        if (moby->oClass == RATCHET) {
            Hero_UpdateInScene(moby);
        }
    }

    UpdateGameCounters();

    if (g_gameMode == GAME_MODE_NORMAL) {
        g_FrontEndTimer++;

        if (g_FrontEndTimer > ScaledFrames(30.5f)) {
            g_FrontEndLogoAlpha++;

            if (g_FrontEndLogoAlpha > 0x80) {
                g_FrontEndLogoAlpha = 0x80;
            }
        }

        if (g_FrontEndTimer > ScaledFrames(120.5f)) {
            int phase = (g_FrontEndTimer - ScaledFrames(120.5f)) % 60;
            float angle = (float)phase * 0.10471976f + -3.1415927f + 1.5707963f;

            g_FrontEndPressStartAlpha = (int)(FastSinInline(angle) * 32.0f) + 0x60;
        }

        if (g_Pad.buttonsPressedThisFrame & (pad_ConfirmButtonMask | START)) {
            EnterPauseState();
        }

        sound_Update();
    }
    else if (g_gameMode == GAME_MODE_PAUSE) {
        /* in the menu: hide the logo; the timer restarts past the fade-in (a VMX convert) */
        g_FrontEndLogoAlpha = ClampToZero(g_FrontEndLogoAlpha - 16);
        g_FrontEndPressStartAlpha = ClampToZero(g_FrontEndPressStartAlpha - 16);
        g_FrontEndTimer = ScaledFrames(60.5f);
        FrontEnd_UpdateMenu();
        sound_Update();
    }
    else if (g_gameMode == GAME_MODE_FREEZE) {
        UpdateFreeze();
        sound_Update();
    }
}

// 0x00114c8 (0x64 bytes)
/* whether the sound channel is still playing soundId (a level sound) */
int IsSoundHandlePlaying(int handle, int soundId)
{
    return IsSoundHandlePlayingInline(handle, soundId);
}

// 0x001152c (0x4 bytes)
void STUB_0001152c(void)
{
}

// 0x0011530 (0x118 bytes)
/* Loads the help messages for the current language (also after changing it in the menu). */
void LoadLanguageHelpMsgs(void)
{
    char path[136];

    if (!g_JapaneseMode) {
        sprintf(path, "rc1/ps3data/global/locale/%s", s_LanguageNames[g_Language]);
    }

    if (g_JapaneseMode) {
        sprintf(path, "rc1/ps3data/global/locale/japanese");
    }

    LoadAssetFromFile(path, g_pLocaleBuffer, 0x40000);

    /* drop the 8-byte header: { count, size }, then the messages */
    g_Help.num_message = g_pLocaleBuffer[0];
    HelpMsgs = (HelpMsg *)g_pLocaleBuffer;
    FastMemCopy32(g_pLocaleBuffer, g_pLocaleBuffer + 2, ((g_pLocaleBuffer[1] + 3) & ~3) - 8);
    RelocateHelpMsgs((u8 *)HelpMsgs, g_Help.num_message);
}

// 0x0011648 (0x52c bytes)
/* Sets the level up from its gameplay file: fog and draw distances, the directional lights, the
   ties and shrubs, and the moby and particle arrays, which follow the file. Returns the memory
   after them. */
u8 *LoadGameplay(int *gameplay, int size)
{
    int *header;
    int *lights;
    int lightCount;
    u8 *mobys;
    MobyInstance *moby;
    TieInstance *tie;
    u32 i;

    FastMemSet(&g_heroMtx, 0, 0x2310);
    FastMemSet(&GameCamera, 0, sizeof(GameCamera));
    FastMemSet(g_AnimLayerPool, 0, sizeof(g_AnimLayerPool));

    DAT_00a52e60 = (u8)Cutscene;
    g_CollOutput.jointCache = &g_CollMobyJointCache[0][0];
    g_CollOutput.jointCacheKeys = g_CollJointCacheKeys;
    g_CollOutput.jointCacheNext = 0;
    g_CollOutput.collCount = 0;
    g_CollOutput.damageNext = 0;
    FastMemSetZero(g_MobyGrid, 0x10000);
    FastMemSetZero(&MobyGridAlloc, 0x60);

    /* fog */
    header = (int *)((u8 *)gameplay + gameplay[0]);
    g_ViewContext.occlColor0 = header[0];
    g_ViewContext.occlColor1 = header[1];
    g_ViewContext.occlColor2 = header[2];
    levelFog.r = (u8)header[3];
    levelFog.g = (u8)header[4];
    levelFog.b = (u8)header[5];
    LevelFogNearDist = ((float *)header)[6];
    LevelFogFarDist = ((float *)header)[7];
    LevelFogNearIntensity = ((float *)header)[8];
    LevelFogFarIntensity = ((float *)header)[9];
    UpdateFog();

    TfragDrawDist = 512000.0f;
    TieDrawDist = 720.0f;
    ShrubDrawDist = 500.0f;
    DAT_00a390b8 = 500;
    PartClipDist = 0x1f4000;
    STUB_000780f4(g_ViewContext.occlColor0, g_ViewContext.occlColor1, g_ViewContext.occlColor2);
    STUB_00174bd8(&DAT_00a10680);

    /* lights */
    FastMemSetZero(PointLights, 0x100);
    FastMemSetZero(PointLightData, 0x180);
    FastMemSetZero(DirectionalLights, 0x400);

    lights = (int *)((u8 *)gameplay + gameplay[1]);
    lightCount = lights[0];

    if (lightCount >= 12) {
        printf("!!!! Too many directional lights !!!! - Lighting will look bogus as a penalty.\n");
        lightCount = 12;
    }

    if (lightCount != 0) {
        FastMemCopy32(DirectionalLights, lights + 4, lightCount * 0x40);
    }

    /* ties */
    TieCnt = TieCntBase;
    g_TieInstance = TieInstanceBase;
    TieInstanceEnd = TieInstanceBase + TieCntBase;
    memcpy(TieInstanceBase, (void *)DAT_00a1a7b8, TieCntBase * sizeof(TieInstance));

    TieClassIndex = 0;

    for (i = 0; i < DAT_00a15f80; i++) {
        u8 *entry = (u8 *)DAT_00a15f7c + i * 0x40;
        u16 id = *(u16 *)(entry + 0x30);

        TieClasses[i] = entry;
        TieClassRef[i] = id;
        TieClassLookup[id] = (u8)i;
        TieClassIndex = i + 1;
    }

    /* shrubs */
    ShrubInstanceEnd = ShrubInstanceBase + ShrubInstanceCnt;
    g_ShrubInstance = ShrubInstanceBase;
    DAT_00a108fc = gameplay;
    memcpy(ShrubInstanceBase, (void *)DAT_00a1a7bc, ShrubInstanceCnt * 0x70);

    /* mobys (64), their pVar blocks, then the particles */
    mobys = (u8 *)(((u32)gameplay + size + 0x3f) & ~0x3f);
    g_MobyInstance = (MobyInstance *)mobys;
    FastMemSet(mobys, 0, 0x4000);
    g_pMobyVars = mobys + 0x4000;
    PartInstances = (PartInstance *)(mobys + 0x6000);
    MobyInstancePermEnd = g_MobyInstance;
    g_MobyInstance->state = 0xff;
    MobyInstanceEnd = g_MobyInstance + 63;

    PartIndexNext = 0;
    PartIndexTop = -1;
    PartActiveCnt = 0;
    FastMemSetZero(&g_PartUsed, 0x200);

    for (moby = g_MobyInstance; moby != MobyInstanceEnd; moby++) {
        moby->occlIndex = 0x7f80;
    }

    for (tie = g_TieInstance; tie != TieInstanceEnd; tie++) {
        tie->occlIndex[0] = 0;
        tie->occlIndex[1] = 0;
        tie->occlIndex[2] = 0x7f;
        tie->occlIndex[3] = 0x80;
    }

    for (i = 0; (int)i < TfragsCnt; i++) {
        Tfrags[i].occlIndex[0] = 0x7f;
        Tfrags[i].occlIndex[1] = 0x80;
    }

    OcclUpdate = 0;
    ResetDrawGlobals();
    InitPadRing();
    EnableFontColors();
    worldUpdateTime = 0;
    SceneScreenFade = 1.0f;

    return mobys + 0x46000;
}

// 0x0011b74 (0x4c0 bytes)
/* loads everything the title screen needs */
void Load_Front_End(void)
{
    int *engine;
    int *classes;
    int classCount;
    int *chunks;
    int languageOffset;
    int i;

    g_FrontEndTimer = 0;
    VU1_setBufSizeByLevel();
    InitMemSlots();
    vu1_bufSize = 0x100000;
    g_GsRamBase = 0x2c0000;
    g_GsRamAlloc = 0x2c0000;
    GSmem.base = 0x2c0000;

    FastMemSet(g_CollJointCacheKeys, 0x87654321, 0x10);
    FastMemSet(&MobyClassLookup, 0xff, 0x800);
    FastMemSet(&MobyTexLookup, 0xff, 0xe00);
    FastMemSet(&MobyMipDists, 0, 0xe0);

    InitViewContext();
    UpdateViewContext();
    VU1_initChain();

    idol::PRINT_m_LoadGameFile(0x1400000, "g_wad.game.frontend_wad");
    load_engine_vram_pair((u8 *)&TEX_BASE, "rc1/ps3data/global/boot/engine.ps3", "rc1/ps3data/global/boot/vram.ps3");
    LoadAssetFromFile("rc1/ps3data/japan_font.ps3", &g_JapanFontTex, 0x24);
    LoadAssetFromFile("rc1/ps3data/japan_font.vram", g_FontVram, 0x80000);
    g_JapanFontTex += (u32)g_FontVram - *(u32 *)((u8 *)g_pIdolDraw + 0x4ac);
    music_Sync(1);

    /* the engine file: its moby classes, icons and effect textures */
    engine = (int *)g_EngineData;
    DAT_00a1bfd8 = engine[0x1d] + (int)engine;
    IconTableEntry = (IconTableEntries *)((u8 *)engine + *(int *)(DAT_00a1bfd8 + 4));
    TexturePointerArray = (int)engine + *(int *)(DAT_00a1bfd8 + 8);

    classes = (int *)((u8 *)engine + engine[0]);
    classCount = classes[0];
    classes++;

    for (i = 0; i < classCount; i++) {
        MobyClass *mobyClass = classes[1] != 0 ? (MobyClass *)((u8 *)engine + classes[1]) : NULL;

        LoadMobyPClasses(mobyClass, NULL, (char *)(classes + 4), classes[0]);
        classes += 2;
    }

    DAT_0071c980 = EffectTexHeaders + engine[0x1f] * 0x24;

    /* the front end's gameplay file; its help messages for the language follow it */
    DAT_00a10908 = (u32)LoadGameplay((int *)Gameplay, LoadAssetFromFile("rc1/ps3data/global/boot/gameplay_ntsc", (void *)Gameplay, 0x200000));
    DAT_0090d720 = (DAT_00a10908 + 0x3f) & ~0x3f;
    languageOffset = *(int *)(Gameplay + g_Language * 4 + 0x10);

    if (languageOffset != 0) {
        int *messages = (int *)(Gameplay + languageOffset);

        DAT_0090d71c = Gameplay + 0x10;
        DAT_0090d718 = Gameplay;
        g_Help.num_message = messages[0];
        HelpMsgs = (HelpMsg *)DAT_0090d720;
        FastMemCopy32((void *)DAT_0090d720, messages + 2, ((messages[1] + 3) & ~3) - 8);
        RelocateHelpMsgs((u8 *)HelpMsgs, g_Help.num_message);
    }

    /* the space scene */
    FastMemSet(g_SceneSavedCamPos, 0, 0x1c0);
    FastMemSet(&DAT_00a1be80, 0, 0x40);
    g_SceneLoadBuffer = g_NpcBuffer + 0x200000;
    DAT_0095cda8 = g_NpcBuffer;
    DAT_00a10908 += 0x80000;

    chunks = (int *)((u8 *)engine + engine[0x20]);

    for (i = 0; i < SCENE_CHUNK_MAX; i++) {
        if (chunks[1] == 0) {
            break;
        }

        (&g_SceneChunkPtrs)[i] = (int)engine + chunks[0];
        chunks += 2;
    }

    ParseSpaceSceneChunk(0);
    LoadLanguageHelpMsgs();

    LoadAssetFromFile("rc1/ps3data/global/boot/japanLogo.ps3", &g_JapanLogoTex, 0x24);
    LoadAssetFromFile("rc1/ps3data/global/boot/japanLogo.vram", (void *)(DAT_00a10924 + 0x200000), 0x40000);
    g_JapanLogoTex = (DAT_00a10924 - *(u32 *)((u8 *)g_pIdolDraw + 0x4ac)) + 0x200000;

    /* the frame (oClass FRAME) uses five of the boot sound defs */
    {
        MobyClass *frameClass = MobyClasses[(&MobyClassLookup)[FRAME]];

        if (frameClass != NULL && frameClass->SoundDefs != NULL) {
            frameClass->SoundDefs = &g_BootSoundDefs[7];
            MobyClasses[(&MobyClassLookup)[FRAME]]->sound_cnt = 5;
        }
    }
}

// 0x0012048 (0x788 bytes)
/* The title screen: load it, then run it until a game is loaded. Left idle for 1500 frames it
   plays the attract movies in turn. (The PS2 frontbin function at 0x1eb798.) */
void PrepareFrontbin(void)
{
    u32 stereo;
    int idleFrames;
    int attract = 1;
    int wait;

    Level = Veldin;
    *g_pDebugCounterMode = 0x83;
    *DAT_009271f8 = 0;

    stereo = g_GameSettings.Stereo;
    memcard_ResetGame();
    g_GameSettings.Stereo = stereo;

    printf("Before load Front_End\n");
    Load_Front_End();
    printf("After load Front_End\n");
    HudScratch_Reset();
    STUB_001655a0();
    InitIndexedBuffers();
    Hud_InitBanks();
    printf("After Hud Init\n");
    STUB_000e0e10();

    for (wait = *DAT_009271f8 / 0x109; wait < ScaledFrames(180.5f); wait++) {
        STUB_00503078(0);
    }

    STUB_00505f4c();

    while (STUB_00505d20() != 0) {
    }

    STUB_00505f50();
    idol::GameAuthenticate((u8 *)g_pGame, "rc1/ps3data/edat/rcuno.edat", "1014312138ED1201");

    while (*(int *)((u8 *)TrophyMgr + 0x190) != 0) {
        UpdateOcclusion(0);
        cellSysutilCheckCallback();
        Render_DispatchJob();
    }

    if (g_loadingPlanet == 0) {
        idleFrames = 0;

        do {
            SceneSound *ambient;

            cellSysutilCheckCallback();
            g_pMsgDialog->funcs->update(g_pMsgDialog, 0.016f);
            STUB_00174cf0();
            VU1_swapChain();
            STUB_00078104();
            STUB_00078134();
            STUB_000780fc();
            memcard_Update();
            MCSTATE_Update();
            UpdatePad();
            g_CutscenePlaying = 0;

            /* the scene's ambient sounds */
            for (ambient = s_SceneSounds; ambient->start != -1; ambient++) {
                if (ambient->end == -1) {
                    if (g_SpaceSceneFrame >= ambient->start && ambient->handle == -1) {
                        ambient->handle = sound_LevelPlay(ambient->sound, 0, NULL);
                    }
                    else if (g_SpaceSceneFrame < ambient->start) {
                        ambient->handle = -1;
                    }
                }
                else if (ambient->end < g_SpaceSceneFrame || g_SpaceSceneFrame < ambient->start) {
                    if (IsSoundHandlePlayingInline(ambient->handle, ambient->sound)) {
                        sound_Kill(ambient->handle);
                    }

                    ambient->handle = -1;
                }
                else if (!IsSoundHandlePlayingInline(ambient->handle, ambient->sound)) {
                    ambient->handle = sound_LevelPlay(ambient->sound, 0, NULL);
                }
            }

            FrontEnd_Update();
            FrontEnd_Draw();

            if (g_gameMode == GAME_MODE_NORMAL && ++idleFrames >= ScaledFrames(1500.5f)) {
                PlayAttractMovie(attract);

                attract = (attract + 1) % NUM_ATTRACT_MOVIES;

                if (attract == 0) {
                    attract = 1;
                }

                g_SpaceSceneFrame = 0;
                g_SpaceSceneChunk = 0;
                SceneScreenFade = 1.0f;
                ParseSpaceSceneChunk(0);
                g_FrontEndLogoAlpha = 0;
                g_FrontEndPressStartAlpha = 0;
                g_FrontEndTimer = 0;
                VU1_initChain();
                idleFrames = 0;
            }
            else {
                if (g_gameMode != GAME_MODE_NORMAL) {
                    idleFrames = 0;
                }

                /* the widescreen setting changed: redo the frame buffers */
                if (DAT_00a52e60 != Cutscene) {
                    u32 gsBase;

                    Cutscene = (Cutscene == 0);
                    FadeToBlack(4);
                    STUB_00503080();
                    STUB_0050307c(0, 0xb, Cutscene == 0 ? 12 : 13, 9);
                    gsBase = g_GsRamBase;
                    SceneScreenFade = 1.0f;
                    ResetFrameBufferInfo();
                    g_GsRamBase = gsBase;
                }

                STUB_00174cf4(1);
                STUB_00503078(0);
                g_MainLoopFrames++;
            }
        } while (g_loadingPlanet == 0);
    }

    if (Cutscene == 0) {
        GSmem.base = 0x280000;
    }

    g_GsRamBase = GSmem.base;
    g_GsRamAlloc = GSmem.base;
}

// 0x00127e0 (0x32c bytes)
/* A full-screen quad of a splash texture (the header's size word at +0x18 is width << 16 |
   height). On a 16:9 output (graphics mode 1) the texture is shown 1.1 times as wide and
   centred by starting the u coordinate negative. The binary does the size maths in VMX. */
void DrawSplashScreen(void *tex)
{
    RenderingStep *pass;
    u32 size = *(u32 *)((u8 *)tex + 0x18);
    u32 width = size >> 16;
    u32 height = size & 0xffff;
    u32 scaledWidth;
    u32 drawWidth;
    u32 offset;
    bool wide;

    FUN_004d86b0(g_pIdolDraw);

    scaledWidth = (int)((float)width * 1.1f);
    wide = *(u32 *)((u8 *)g_pIdolDraw + 12) == 1;
    drawWidth = wide ? scaledWidth : width;
    offset = wide ? width - scaledWidth : 0;

    idol_draw::BindTexture(HUD_Pass, 0, tex, TexSamplerFlags);
    idol_draw::ResetPassState(HUD_Pass);

    pass = HUD_Pass;
    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_VERTEX_DATA4UB_M + 2 * 4, 1));
    Emit(pass, 0x80808080);

    Emit(pass, CELL_GCM_METHOD_FLAG_NON_INCREMENT | CELL_GCM_METHOD(CELL_GCM_NV4097_INVALIDATE_VERTEX_FILE, 3));
    Emit(pass, 0);
    Emit(pass, 0);
    Emit(pass, 0);
    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_BEGIN_END, 1));
    Emit(pass, CELL_GCM_PRIMITIVE_QUADS);

    /* texture coordinate (attribute 1), then position (attribute 0), per corner */
    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_VERTEX_DATA2S_M + 1 * 4, 1));
    Emit(pass, PACK2S(offset, 0));
    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_VERTEX_DATA2S_M, 1));
    Emit(pass, PACK2S(0, 0));

    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_VERTEX_DATA2S_M + 1 * 4, 1));
    Emit(pass, PACK2S(offset, height));
    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_VERTEX_DATA2S_M, 1));
    Emit(pass, PACK2S(0, SPLASH_QUAD_H));

    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_VERTEX_DATA2S_M + 1 * 4, 1));
    Emit(pass, PACK2S(drawWidth, height));
    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_VERTEX_DATA2S_M, 1));
    Emit(pass, PACK2S(SPLASH_QUAD_W, SPLASH_QUAD_H));

    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_VERTEX_DATA2S_M + 1 * 4, 1));
    Emit(pass, PACK2S(drawWidth, 0));
    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_VERTEX_DATA2S_M, 1));
    Emit(pass, PACK2S(SPLASH_QUAD_W, 0));

    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_BEGIN_END, 1));
    Emit(pass, 0);
}

static inline void DrawSplashFrame(void *tex)
{
    UpdateOcclusion(0);
    cellSysutilCheckCallback();
    TexSamplerFlags = 5;
    DrawSplashScreen(tex);
    Render_DispatchJob();
    cellSysutilCheckCallback();
}

// 0x0012b0c (0x1c0 bytes)
/* Shows a loaded splash texture: fade in, hold, fade out (the alpha steps are counted but the
   quad is always drawn opaque), then black frames. */
void ShowSplash(void *tex, int holdFrames, int fadeInFrames, int fadeOutFrames, int blackFrames)
{
    int alpha;
    int i;

    if (fadeInFrames != 0) {
        alpha = 0;

        do {
            DrawSplashFrame(tex);
            alpha += SPLASH_FULL_ALPHA / fadeInFrames;
        } while (alpha <= SPLASH_FULL_ALPHA);
    }

    for (i = 0; i < holdFrames; i++) {
        DrawSplashFrame(tex);
    }

    if (fadeOutFrames != 0) {
        alpha = SPLASH_FULL_ALPHA;

        do {
            DrawSplashFrame(tex);
            alpha -= SPLASH_FULL_ALPHA / fadeOutFrames;
        } while (alpha >= 0);
    }

    for (i = 0; i < blackFrames; i++) {
        UpdateOcclusion(0);
        cellSysutilCheckCallback();
        DrawScreenOverlayTex(0, 0, 0, 0, tex);
        Render_DispatchJob();
        cellSysutilCheckCallback();
    }

    TexSamplerFlags = 0;
}

// 0x0012ccc (0x1f8 bytes)
/* a splash screen from a .ps3 texture (header and pixels in one file) */
void LoadAndShowSplash(char *path, int holdFrames, int fadeInFrames, int fadeOutFrames, int blackFrames)
{
    int *tex;

    LoadAssetFromFile(path, (void *)g_NpcBuffer, -1);

    tex = (int *)g_NpcBuffer;
    tex[0] = (int)g_NpcBuffer + (0x80 - *(int *)(DAT_00902e9c + 0x4a8));   /* pixels follow the header */

    ShowSplash(tex, holdFrames, fadeInFrames, fadeOutFrames, blackFrames);
}

/* the epilepsy (SCEA) or health (SCEE) warning in the menu language */
static inline void ShowWarningScreen(void)
{
    int region = *(int *)((u8 *)g_pHWSystem + 0xc0);

    if (region == REGION_SCEA) {
        switch (g_Language) {
        case LANG_FRENCH:
            LoadAndShowSplash("Common/Textures/Epilepsy_Warning_Fre_4x3.ps3", SPLASH_HOLD, SPLASH_FADE_IN, SPLASH_FADE_OUT, 0);
            break;
        case LANG_SPANISH:
            LoadAndShowSplash("Common/Textures/Epilepsy_Warning_Spa_4x3.ps3", SPLASH_HOLD, SPLASH_FADE_IN, SPLASH_FADE_OUT, 0);
            break;
        default:
            LoadAndShowSplash("Common/Textures/Epilepsy_Warning_Eng_4x3.ps3", SPLASH_HOLD, SPLASH_FADE_IN, SPLASH_FADE_OUT, 0);
            break;
        }
    }
    else if (region == REGION_SCEE) {
        switch (g_Language) {
        case LANG_FRENCH:
            LoadAndShowSplash("Common/Textures/Health_Warning_Fre_SCEE_4x3.ps3", SPLASH_HOLD, SPLASH_FADE_IN, SPLASH_FADE_OUT, 0);
            break;
        case LANG_GERMAN:
            LoadAndShowSplash("Common/Textures/Health_Warning_Ger_SCEE_4x3.ps3", SPLASH_HOLD, SPLASH_FADE_IN, SPLASH_FADE_OUT, 0);
            break;
        case LANG_SPANISH:
            LoadAndShowSplash("Common/Textures/Health_Warning_Spa_SCEE_4x3.ps3", SPLASH_HOLD, SPLASH_FADE_IN, SPLASH_FADE_OUT, 0);
            break;
        case LANG_ITALIAN:
            LoadAndShowSplash("Common/Textures/Health_Warning_Ita_SCEE_4x3.ps3", SPLASH_HOLD, SPLASH_FADE_IN, SPLASH_FADE_OUT, 0);
            break;
        default:
            LoadAndShowSplash("Common/Textures/Health_Warning_Eng_SCEE_4x3.ps3", SPLASH_HOLD, SPLASH_FADE_IN, SPLASH_FADE_OUT, 0);
            break;
        }
    }
}

// 0x0012ec8 (0x898 bytes)
/* The first main function: warnings, "presents", the logo movie, the sound bank, then the
   title screen. Leaves with the chosen level in g_newlevelnum. */
void GameStart(void)
{
    char bankPath[152];
    int prevState = 0;
    int state;
    int frames = 0;
    int fade = 0;
    u32 bank;
    void *bankBuffer;
    int i;

    g_FrontEnd = 1;
    idol::GetSaveData()->flags = 1;
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
    g_StartLevelClear = 0;
    VU1_initChain();
    STUB_001754dc();
    ResetDebugEnables();
    g_MainLoopFrames = 0;
    STUB_00503078(0);
    g_gameMode = GAME_MODE_NORMAL;
    STUB_0006849c();
    STUB_000684a0();
    STUB_000780f8();
    STUB_000780f4(0, 0, 0);
    VU1_initChain();

    /* the PS2's memory card check screen; STUB_000e6c78 always returns 0 */
    while ((state = STUB_000e6c78()) != 0 && (frames < 11 || g_Pad.buttonsPressedThisFrame == 0)) {
        if (state != prevState) {
            FlushCache(0);
            FlushCache(0);
        }

        STUB_000780f4(0, 0, 0);
        STUB_000780fc();
        STUB_00078100();
        STUB_0007116c(&DAT_00cd4000 + DAT_00cd4070);

        if (frames < 8) {
            SetGSReg(3, idol_draw::PackCmd(0, 1, 0, 1, 0x80));
            DrawScreenOverlay(0, 0, 0, 0x80 - fade);
        }

        STUB_00078104();
        STUB_00078134();
        STUB_00174cf0();
        VU1_swapChain();
        STUB_00174cf4(1);
        STUB_00503078(0);
        UpdatePad();

        fade += 16;
        frames++;
        prevState = state;
    }

    if (prevState != 0) {
        FadeToBlack(8);
    }

    FlushCache(0);
    VU1_initChain();
    STUB_000780f4(0, 0, 0);
    STUB_000780fc();
    STUB_00078100();
    STUB_000d88f8(&DAT_00cd4000 + DAT_00cd4070);

    if (FUN_00504d90(g_pHWSystem) == 0) {
        ShowWarningScreen();
    }

    if (FUN_00504d90(g_pHWSystem) == 0) {
        int region = *(int *)((u8 *)g_pHWSystem + 0xc0);

        if (region == REGION_SCEA) {
            LoadAndShowSplash("Common/Textures/Rat1_Presents_SCEA.ps3", SPLASH_HOLD, SPLASH_FADE_IN, SPLASH_FADE_OUT, 0);
        }
        else if (region == REGION_SCEE) {
            LoadAndShowSplash("Common/Textures/Rat1_Presents_SCEE.ps3", SPLASH_HOLD, SPLASH_FADE_IN, SPLASH_FADE_OUT, 0);
        }
    }

    STUB_00078104();
    STUB_00078134();
    STUB_00174cf0();
    VU1_swapChain();
    STUB_00174cf4(1);
    STUB_00503078(0);

    g_MoviePlayState = -1;
    g_MainLoopFrames++;
    DAT_0090d714 = (u8 *)&DAT_00cd4000 + DAT_00cd4070;
    PlayLogoMovie();
    g_MoviePlayState = 0;
    FadeToBlack(ScaledFrames(12.5f));
    FlushCache(0);

    /* the sound bank, and its id in the boot sound defs */
    printf("loading sound bank...\n");
    sprintf(bankPath, "rc1/ps3data/global/boot/sound.bnk");
    bankBuffer = (void *)(DAT_00a10920 + 0x200000);
    LoadAssetFromFile(bankPath, bankBuffer, 0x100000);
    g_BootSoundBank = -1;
    Sound_LoadBank((u8 *)bankBuffer, (u8 *)sound_BasicCB, &g_BootSoundBank);
    bank = g_BootSoundBank;
    printf("done\n");
    STUB_00505f48();

    g_pSoundDefs = g_BootSoundDefs;

    for (i = 0; i < BOOT_SOUND_DEFS; i++) {
        g_BootSoundDefs[i].bank_index = bank;
    }

    g_TotalSoundDefCnt = 7;

    ResetFrameBufferInfo();
    PrepareFrontbin();
    *(u8 *)&PTR_DAT_00902e98 = 1;

    if (Cutscene != DAT_00a52e60) {
        Cutscene = DAT_00a52e60;
        STUB_00503080();
        STUB_0050307c(0, 0xb, Cutscene == 0 ? 12 : 13, 9);
        ResetFrameBufferInfo();
        STUB_000780f8();
    }

    g_newlevelnum = Level;
    Level = (LevelId)-1;
    DAT_0096459a = 1;
    DoSpaceTransition();
    g_FrontEnd = 0;
}

// 0x0013760 (0x210 bytes)
/* a splash screen from a .ps3 header and a .vram pixel file */
void LoadAndShowSplashVram(char *texPath, char *vramPath, int holdFrames, int fadeInFrames, int fadeOutFrames,
                           int blackFrames)
{
    int *tex;

    LoadAssetFromFile(texPath, (void *)DAT_00a10920, -1);
    LoadAssetFromFile(vramPath, (void *)DAT_00a10924, -1);

    tex = (int *)DAT_00a10920;
    tex[0] = DAT_00a10924 - *(int *)(DAT_00902e9c + 0x4ac);

    ShowSplash(tex, holdFrames, fadeInFrames, fadeOutFrames, blackFrames);
}

// 0x0013970 (0x9c bytes)
void Transition_DrawSky(void)
{
    SetupGifPaging();
    SkyLevelGeneric();
    DoSkyGifPaging();
    SetGSReg(0x16, idol_draw::Blend(1, 5, 0x60, 3, 0, 0, 1, 2));
    SetGSReg(0x21, VU1_addGSregister(GSmem.zbuf >> 13, 1, 0));
}

// 0x0013a0c (0x14 bytes)
void ____SectionHeader_Boot_13a0c(void)
{
    DAT_0071cc08 = 0x10000;
}

// 0x0013a20 (0x248 bytes)
/* shuts Idol down in order and exits (from the XMB's quit) */
void GameShutDown(void)
{
    printf("!!! GameShutDown() called !!!\n");
    sys_timer_usleep(16000);
    sys_timer_usleep(16000);
    pad_Shutdown();
    FUN_005057a0();

    if (g_pIdolDraw != 0) {
        printf("!!! Shutdown Graphics !!!\n");
        VirtualMethod((void *)g_pIdolDraw, 0x1c)((void *)g_pIdolDraw);
    }

    if (g_pHWSystem != NULL) {
        printf("!!! Shutdown HWSystem !!!\n");
        VirtualMethod(g_pHWSystem, 0x20)(g_pHWSystem);
    }

    if (TrophyMgr != 0) {
        printf("!!! Shutdown NP Trophy !!!\n");
        sceNpTrophyDestroyHandle(TrophyMgr);
    }

    if (GetBinkPlayer() != NULL) {
        printf("!!! Shutdown Bink !!!\n");
        BinkPlayer_Stop(GetBinkPlayer());
    }

    if (idol::GetSaveData() != NULL) {
        while (!memcard_IsSaveSystemIdle()) {
            printf("Waiting for save game to finish...\n");
        }

        printf("!!! Shutdown GameSave !!!\n");
        FUN_004e7710(idol::GetSaveData());
    }

    printf("!!! Shutdown Scream !!!\n");
    FUN_005066e0();
    printf("!!! Calling exit() !!!\n");
    exit(0);

    for (;;) {
    }
}

// 0x0013c68 (0x68 bytes)
void sysutil_gameexit_callback(u64 status, u64 param, void *userData)
{
    if ((s64)status == CELL_SYSUTIL_REQUEST_EXITGAME) {
        print_tty2("sysutil_gameexit_callback received CELL_SYSUTIL_REQUEST_EXITGAME \n");
        GameShutDown();
        return;
    }

    if ((s64)status > 0x120 && (s64)status < 0x123) {
        return;     /* the drawing begin/end notices */
    }

    print_tty2("In sysutil_gameexit_callback, status = 0x%08x\n", (int)status);
}

// 0x0013cd0 (0xdc bytes)
/* Copies the initialised-data records ({ dest, size, ?, id, data... }) of the first id found;
   returns when it reaches a record with another id. Copies 8 bytes at a time when everything is
   8-byte aligned. */
u32 CopyInitDataRecords(void)
{
    u32 *record = (u32 *)((u8 *)DAT_00964564 + *DAT_00964564);
    u32 id = 0;

    for (;;) {
        u32 *src = record + 4;
        u32 *dest = (u32 *)record[0];
        u32 size = record[1];

        if (id == 0) {
            id = record[3];
        }
        else if (id != record[3]) {
            return id;
        }

        if ((size & 7) == 0 && ((u32)src & 7) == 0 && ((u32)dest & 7) == 0) {
            u64 *to = (u64 *)dest;
            u64 *from = (u64 *)src;

            for (; (u8 *)to != (u8 *)dest + size; to++) {
                *to = *from++;
            }
        }
        else {
            u32 *to = dest;
            u32 *from = src;

            for (; (u8 *)to != (u8 *)dest + size; to++) {
                *to = *from++;
            }
        }

        record = (u32 *)((u8 *)src + record[1]);
    }
}

// 0x0013dac (0x270 bytes)
/* what every main function starts from: no level loading, the HUD and help reset, the
   checkpoints cleared */
void ResetLevelGlobals(void)
{
    HudElement *element;
    int i;

    if (g_newlevelnum < 0) {
        g_FrontEnd = 1;
    }

    g_loadingPlanet = 0;
    g_HudMobys = NULL;
    g_TargetableMobys = 0;
    g_newlevelnum = 0;
    oClass_to_mClass_lookup = 0;
    memset(g_MobyClassUpdates, 0, sizeof(g_MobyClassUpdates));
    g_HudMobyBankActive = 0;
    g_HudScratchPtr = 0;

    DAT_00731f40 = 0x3880a0c0;
    DAT_00731f44 = 0x2058b0;
    DAT_00731f48 = 0x3880a0c0;
    DAT_00731f4c = 0x2058b0;
    DAT_00731f50 = 0x3880c080;
    DAT_00731f54 = 0x308030;

    g_Help.state = 0;
    g_Help.counter = 0;
    g_Help.boxHalfW = 0;
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

    for (element = HudEntries, i = 0; i < 13; i++, element++) {
        element->flags = 0;
        element->iconId = 0xffff;
        element->maxValue = 0;
        element->pValue = NULL;
        element->initCb = NULL;
        element->updateCb = NULL;
        element->drawCb = NULL;
    }

    g_toastMsgTimer = 0;
    DAT_00a15c84 = 0;
    FastMemSet(&g_CheckpointLive, 0, sizeof(CheckpointData));
    FastMemSet(&g_Checkpoint, 0, sizeof(CheckpointData));
    FastMemSet(&g_CheckpointBits, 0, 0x100);

    if (Level == Oltanis || (Level != Blarg && Level != Aridia)) {
        DAT_00a1a858 = 0;
    }
    else {
        DAT_00a1a858 = 3;
    }

    if (g_MapRevealMask != 0) {
        memset((void *)g_MapRevealMask, 0, 0x8000);
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
}

// 0x001401c (0x838 bytes)
/* The PS3 port's main(): Idol start-up, then the main function loop (never returns). */
int boot(int argc, char **argv, char **envp)
{
    u8 *hwSystem;
    u8 *game;
    cell::fios::ps3media *media;
    cell::fios::dearchiver *dearchive;
    cell::fios::scheduler *scheduler;
    u8 *heap;
    cell::fios::filehandle *fileHandle;
    cell::fios::fios_parameters fiosParams = FIOS_PARAMETERS_INITIALIZER;
    cell::fios::Compression::AsyncDecompressor *decompressors[1];
    const char *extensions[1];
    void *allocator;
    MainFunc mainFunc = GameStart;
    int contentArg;
    int discBoot;
    int ticks;

    DAT_008fabd0 = Cheats + 4;
    Level = (LevelId)-1;

    if (__sys_process_param.size == 0) {
        print_tty("Error, __sys_process_param.size of 0. I don't know how this could happen, but it will cause some problems\n");
        return -1;
    }

    printf("\n\nargv[0] %s\n", argv[0]);

    /* run as RC1.ppu.self (a dev build) the content path is the first argument */
    contentArg = strstr(argv[0], "RC1.ppu.self") != NULL ? 1 : 0;
    FUN_00502cd0();
    MapVTables();

    hwSystem = (u8 *)g_pHWSystem;
    idol::CheckLicense((int *)hwSystem, "NPUA", "NPUA80643", "UP9000-NPUA80643_00", false, -1);
    idol::CheckLicense((int *)hwSystem, "NPEA", "NPEA00385", "EP9000-NPEA00385_00", false, -1);
    idol::CheckLicense((int *)hwSystem, "BCUS", "BCUS98212", "UP9000-BCUS98212_00", true, -1);
    idol::CheckLicense((int *)hwSystem, "BCES", "BCES01503", "EP9000-BCES01503_00", true, -1);
    FUN_00504988(hwSystem, argv[contentArg], 0);
    FUN_004e68bc(hwSystem, 11, 8, 16);
    DAT_008fa630 = &DAT_0071cce4;

    discBoot = *((u8 *)hwSystem + 0x10) != 0 ? 1 : 0;

    if (cellSysutilRegisterCallback(0, sysutil_gameexit_callback, NULL) < 0) {
        printf("ERROR: (boot.cpp) Error Registering Exit callback function\n");
    }

    FUN_004ee594((u8 *)&DAT_009260d8, discBoot, 0, 0);
    cellSysutilCheckCallback();

    game = (u8 *)g_pGame;
    VirtualMethod(game, 8)(game);
    VirtualMethod(hwSystem, 0x24)(hwSystem, "(boot.cpp) After InitGameSystem");
    cellSysutilCheckCallback();

    /* FIOS: the content directory (/app_home, or the disc path) and the psarc on it */
    allocator = Idol_New(4);

    if (allocator != NULL) {
        *(void **)allocator = &PTR_PTR_00661820;
    }

    fiosParams.pAllocator = (cell::fios::allocator *)allocator;
    cell::fios::FIOSInit(&fiosParams);
    cellSysutilCheckCallback();

    if (*((u8 *)hwSystem + 0x10) == 0) {
        media = new cell::fios::ps3media("/app_home");
        printf("Setting ps3medius with %d\n", "/app_home");
    }
    else {
        media = new cell::fios::ps3media((const char *)&DAT_00926181);
        printf("Setting ps3medius with %d\n", (char *)&DAT_00926181);
    }

    cellSysutilCheckCallback();

    /* the psarc decompressor (its constructor is not part of the SDK objects matched so far) */
    heap = (u8 *)FUN_005e39dc(0x2f00, 0x80);
    extensions[0] = ".psarc";

    if (heap != NULL) {
        FUN_005e6af0(heap, (u8 *)PTR_DAT_008fa62c);
    }

    decompressors[0] = (cell::fios::Compression::AsyncDecompressor *)heap;
    dearchive = new cell::fios::dearchiver(media, 1, decompressors, cell::fios::dearchiver::kSearchNewestToOldest, false, 1, extensions);
    scheduler = cell::fios::scheduler::createSchedulerForMedia(dearchive);
    cell::fios::scheduler::setDefaultScheduler(scheduler);

    if (scheduler->openFile(NULL, "rc1/ps3data/PS3arc.psarc", cell::fios::kO_READ, &fileHandle)->syncWait() != 0) {
        /* no archive: nothing to run */
        for (;;) {
            cellSysutilCheckCallback();
            sys_timer_usleep(100);
        }
    }

    cellSysutilCheckCallback();

    /* graphics */
    heap = (u8 *)FUN_0050436c(game);
    FUN_004fe778(heap, "Before InitGameGraphics");
    idol::InitGameGraphics(game);
    FUN_004fe778(heap, "After InitGameGraphics");
    cellSysutilCheckCallback();
    FUN_005043b0(game);
    FUN_00504468(game);
    cellSysutilCheckCallback();
    VirtualMethod(DAT_009030e4, 8)(DAT_009030e4, heap, 0, (u8 *)g_pGame + 4);

    /* saves and Bink */
    FUN_004e7f9c(idol::GetSaveData(), 0);
    GetBinkPlayer()->unk5c = 0;
    GetBinkPlayer();
    FUN_005eae04((u8 *)Global_QuickMovieMalloc, (u8 *)Global_QuickMovieFree);
    FUN_0050565c(heap);
    GetBinkPlayer();
    FUN_005ec620((u8 *)&PTR_FUN_007108d0, FUN_005057c4());
    FUN_0050565c(heap);
    FUN_004ec568((u8 *)&DAT_01111700, 8);
    cellSysutilCheckCallback();

    idol::GetSaveData();
    idol::registerSavesystemCallback();
    printf("Checking for saves");

    for (ticks = 0; g_memcardSaveBusy != 0; ) {
        cellSysutilCheckCallback();
        ticks++;

        if (ticks % 1000000 == 0) {
            print_tty2(".");
        }
    }

    print_tty2("DONE!\n");
    idol::RegisterTrophyCtxHandle(TrophyMgr);
    cellSysutilCheckCallback();
    SetNtscPalTiming();

    /* the main functions: the title screen until a level is picked, then each level */
    for (;;) {
        ResetLevelGlobals();
        mainFunc();

        if (g_pNextMainFunc != NULL) {
            mainFunc = (MainFunc)g_pNextMainFunc;
            g_pNextMainFunc = NULL;
        }
        else {
            mainFunc = Level < 0 ? GameStart : startLevel;
        }

        FlushCache(0);
        FlushCache(2);
    }
}

// 0x0014854 (0xa4 bytes)
/* static destructors: put back the base class vtables */
void StaticDestroy_BootGlobals(void)
{
    FUN_004d5da4(&g_BinkPlayerObject, 2);
    FUN_004e7738((u8 *)&DAT_00926c00, 2);
    DAT_009265a0 = (u32)&PTR_PTR_00661790;
    DAT_009260d0 = (u32)&PTR_PTR_00661760;
    DAT_0090dad0 = (u32)&PTR_PTR_00661710;
    DAT_0090d98c = (u32)&PTR_PTR_0066177c;
    DAT_0090d840 = (u32)&PTR_PTR_00666410;
    DAT_0090d770 = (u32)&PTR_PTR_00661748;
}

// 0x00148f8 (0x260 bytes)
/* Static constructors for Idol's singletons: the game (0x90d770, three empty lists inside it),
   the HW system (0x90d840), 0x90d98c, the graphics object (0x90dad0), the pad driver (0x9260d0),
   the trophy manager (0x9265a0), the save data (0x926c00) and the Bink player (0x927078). */
void StaticInit_BootGlobals(void)
{
    DAT_0071ccc0 = 0x10000;

    /* game */
    DAT_0090d774 = 0;
    DAT_0090d7c8 = 0;
    DAT_0090d7cc = 0;
    DAT_0090d7d0 = 0;
    DAT_0090d7d4 = 0;
    DAT_0090d7d8 = 0;
    DAT_0090d7d9 = 0;
    DAT_0090d7dc = 0;
    DAT_0090d7e0 = (u32)&DAT_0066173c;
    DAT_0090d7e4 = 0;
    DAT_0090d7e8 = 0;
    DAT_0090d7ec = 0;
    DAT_0090d7f0 = 0;
    DAT_0090d7f4 = 0;
    DAT_0090d7f8 = 0;
    DAT_0090d7fc = 0;
    DAT_0090d7fd = 0;
    DAT_0090d800 = 0;
    DAT_0090d804 = (u32)&DAT_0066173c;
    DAT_0090d808 = 0;
    DAT_0090d80c = 0;
    DAT_0090d810 = 0;
    DAT_0090d814 = 0;
    DAT_0090d818 = 0;
    DAT_0090d81c = 0;
    DAT_0090d820 = 0;
    DAT_0090d821 = 0;
    DAT_0090d824 = 0;
    DAT_0090d828 = (u32)&DAT_0066173c;
    DAT_0090d82c = 0;
    DAT_0090d830 = 0;
    DAT_0090d834 = 0;
    DAT_0090d838 = 0;
    DAT_0090d83c = 0xffffffff;
    g_pGame = &DAT_0090d770;
    DAT_0090d770 = (u32)&PTR_PTR_00661878;

    /* HW system */
    DAT_0090d840 = (u32)&PTR_PTR_00666410;
    DAT_0090d844 = 0;
    DAT_0090d848 = 0;
    DAT_0090d84c = 0;
    DAT_0090d850 = 0;
    DAT_0090d851 = 0;
    DAT_0090d854 = 1;
    DAT_0090d8f8 = 0;
    DAT_0090d8fc = 0;
    g_pHWSystem = &DAT_0090d840;
    memset(&DAT_0090d858, 0, 0xa0);
    DAT_0090d840 = (u32)&PTR_PTR_00661898;
    DAT_0159b388 = 1;

    DAT_0090d98c = (u32)&PTR_PTR_00661960;
    DAT_009030e4 = &DAT_0090d98c;
    FUN_004d7088((u8 *)&DAT_0090dad0);

    /* pad driver */
    g_pPadDriver = (PadDriver *)&DAT_009260d0;
    DAT_009260d0 = (u32)&PTR_PTR_00661940;
    FUN_004ee1e0((u8 *)&DAT_009260d8);

    /* trophies */
    DAT_009265a0 = (u32)&PTR_PTR_00661790;
    FUN_004f0c98((u8 *)&DAT_00926734);
    DAT_0092674c = 0;
    DAT_00926750 = 0;
    memset(&DAT_00926754, 0, 0x498);
    DAT_00926bec = 0;
    DAT_00926bf0 = 0;
    DAT_00926bf4 = 0;
    DAT_00926bf8 = 0;
    DAT_00926bfc = 0;
    DAT_00926730 = 0xffffffff;
    DAT_009265a4 = 0;
    DAT_00926728 = 0xffffffff;
    DAT_0092672c = 1;
    TrophyMgr = (u32)&DAT_009265a0;
    FUN_004f0df4((u8 *)&DAT_00926734);

    FUN_004e7388((u8 *)&DAT_00926c00);
    BinkPlayer_Init(&g_BinkPlayerObject);
}
