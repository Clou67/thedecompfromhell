#include "rc1.h"
#include "idol/fastinline.h"
#include <cell/gcm/gcm_macros.h>
#include <cell/gcm/gcm_enum.h>
// MERGE

#define SHIP_STATE_SCENES 42          /* moby->state while the ship's intro scenes play */
#define SHIP_PROMPT_BOARD 0x53e4      /* "press triangle to board" */
#define SHIP_GREEN_0215 0x215         /* the variant whose glows are yellower */

/* the ship's pVar */
typedef struct ShipVars {
    int splinePath;                   /* 0x00 */
    int cameraStartCuboid;            /* 0x04 */
    int cameraEndCuboid;              /* 0x08 */
    short heroNear;                   /* 0x0c  the hero stands at the boarding point */
} ShipVars;

static inline float DistXY(Vec4 *a, Vec4 *b)
{
    float dx = a->x - b->x;
    float dy = a->y - b->y;

    return sqrtf(dx * dx + dy * dy);
}

static inline float DistXYZ(Vec4 *a, Vec4 *b)
{
    float dx = a->x - b->x;
    float dy = a->y - b->y;
    float dz = a->z - b->z;

    return sqrtf(dz * dz + dx * dx + dy * dy);
}

/* where the hero boards: the variant's offset in the ship's frame */
static inline void ShipBoardPoint(Vec4 *out, MobyInstance *ship)
{
    Vec4 *ofs = &g_ShipBoardOffsets[g_SpaceshipVariant];
    Mtx4 *m = &ship->transform;

    out->x = m->v1.x * ofs->y + m->v2.x * ofs->z + m->v0.x * ofs->x + ship->pos.x;
    out->y = m->v1.y * ofs->y + m->v2.y * ofs->z + m->v0.y * ofs->x + ship->pos.y;
    out->z = m->v2.z * ofs->z + m->v0.z * ofs->x + m->v1.z * ofs->y + ship->pos.z;
}

/* the buffers a space cutscene loads into */
static inline void SpaceSceneBuffers(void)
{
    VU1_setBufSizeByLevel();
    DAT_00e5aa64 -= 0x60000;
    g_SceneLoadBuffer = g_NpcBuffer + 0x200000;
    DAT_0095cda8 = g_NpcBuffer;
}

// 0x015da00 (0x14 bytes)
void SECTION_HEADER_SPACE(void)
{
    DAT_00731bc4 = 0x10000;
}

// 0x015da58 (0x588 bytes)
/* the parked ship: plays the intro scenes it owes, pulses its glow, and takes off when the
   hero presses triangle at the boarding point */
void UpdateMoby_Spaceship(MobyInstance *moby)
{
    ShipVars *vars = (ShipVars *)moby->pVar;

    if (moby->state == SHIP_STATE_SCENES) {
        if (g_gameMode == GAME_MODE_SCENE) {
            return;
        }

        if (g_MiscLevelFlags.SpaceshipRelated1 == 0 && UnlockableItems.magneboots != 0) {
            mode_sceneInit(4);
            g_MiscLevelFlags.SpaceshipRelated1 = 1;
        }
        else if (g_MiscLevelFlags.SpaceshipRelated2 == 0 && g_SeenPlanets.Pokitaru != 0) {
            mode_sceneInit(5);
            g_MiscLevelFlags.SpaceshipRelated2 = 1;
        }
        else if (g_MiscLevelFlags.SpaceshipRelated3 == 0 && g_SeenPlanets.Pokitaru != 0) {
            PlayInfobotMovie(0xb);
            g_MiscLevelFlags.SpaceshipRelated3 = 1;
        }
        else if (g_MiscLevelFlags.SpaceShipRelated4 == 0 && g_SeenPlanets.Pokitaru != 0) {
            mode_sceneInit(6);
            g_MiscLevelFlags.SpaceShipRelated4 = 1;
        }
        else {
            moby->state = 0;
            moby->modeBits &= ~(UNK_40 | DISABLED);
            g_ShipTakeoffPending = 1;
            DAT_00964598 = 1;
        }
        return;
    }

    if (moby->enabled != 0) {
        moby->setByGroup += 2;

        float angle = (float)FastIntToDouble((u8)moby->setByGroup - 0x80) * 0.024543693f;
        int level = (int)(FastCosInline(angle) * 50.0f) + 150;
        u32 red = (moby->oClass == SHIP_GREEN_0215) ? (u32)(level >> 1) : (u32)level;
        moby->glowRgba = (red | (u32)level << 8) | (u32)level << 16;

        RegisterPostDraw((void *)Space_DrawShipEffects, moby);

        float dx = moby->pos.x - GameCamera.posX;
        float dy = moby->pos.y - GameCamera.posY;
        if (sqrtf(dx * dx + dy * dy) < 32.0f) {
            RegisterFuncForMoby((void **)STUB_0015e2c0, moby);
        }
    }

    Vec4 board;
    if (vars->heroNear == 0) {
        if (DistXY(&moby->pos, &g_heroPosition) < 6.0f) {
            ShipBoardPoint(&board, moby);
            if (DistXYZ(&board, &g_heroPosition) < 4.0f) {
                vars->heroNear = 1;
            }
        }
    }
    else {
        ShipBoardPoint(&board, moby);
        if (DistXYZ(&board, &g_heroPosition) > 4.1f) {
            vars->heroNear = 0;
        }
    }

    if (moby->modeBits & DISABLED) {
        vars->heroNear = 0;
        return;
    }

    if (vars->heroNear == 0) {
        return;
    }

    int shown = (int)MB_ShowPersistentMessage(2, (StringId)SHIP_PROMPT_BOARD);
    if ((g_Pad.buttonsPressedThisFrame & TRIANGLE) == 0 || shown == 0) {
        return;
    }

    if (Level == Orxon && g_heroType == 1) {
        /* Clank can't fly it: play the scene instead */
        moby->state = SHIP_STATE_SCENES;
        moby->modeBits |= UNK_40 | DISABLED;
        mode_sceneInit(9);
    }
    else {
        MB_ClearHelpMessage((MobyInstance *)2);
        g_ShipTakeoffPending = 1;
        DAT_00964598 = 0;
    }
}

// 0x015dfe0 (0x2e0 bytes)
/* points GameCamera along the ship cutscene's camera track; returns the frame's first flag */
char Space_SetCutsceneCamera(void)
{
    SceneCameraFrame *frame = &g_SpaceSceneCameraFrames[g_cutsceneCameraFrame];
    char flag = frame->flags[0];
    Mtx4 rot;
    Mtx4 copy;

    g_ViewContext.xratio = frame->xratio;
    UpdateViewContext();

    GameCamera.posX = frame->x;
    GameCamera.posY = frame->y;
    GameCamera.posZ = frame->z;
    memcpy(&GameCamera.field8_0x14c, frame->flags, 4);

    memcpy(&copy, &DAT_00653758, sizeof(Mtx4));
    float sinX = std::_FSin(frame->rotX, 0);
    float cosX = std::_FSin(frame->rotX, 1);
    float sinY = std::_FSin(frame->rotY, 0);
    float cosY = std::_FSin(frame->rotY, 1);
    float sinZ = std::_FSin(frame->rotZ, 0);
    float cosZ = std::_FSin(frame->rotZ, 1);
    float sinYsinZ = sinY * sinZ;
    float cosZsinY = cosZ * sinY;

    /* the X, Y, Z euler rotation, starting from the identity at 0x734b00 */
    memcpy(&rot, &DAT_00734b00, sizeof(Mtx4));
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

    GameCamera.orientMtx.up.x = copy.v1.x;
    GameCamera.orientMtx.forward.x = -copy.v2.x;
    GameCamera.orientMtx.right.x = -copy.v0.x;
    GameCamera.orientMtx.up.y = copy.v1.y;
    GameCamera.orientMtx.forward.y = -copy.v2.y;
    GameCamera.orientMtx.right.y = -copy.v0.y;
    GameCamera.orientMtx.up.z = copy.v1.z;
    GameCamera.orientMtx.forward.z = -copy.v2.z;
    GameCamera.orientMtx.right.z = -copy.v0.z;

    if (Cheats[4] != 0) {
        /* mirrored: right = forward x up */
        GameCamera.orientMtx.right.w = 0.0f;
        GameCamera.orientMtx.right.x = -(copy.v2.y * copy.v1.z) - -(copy.v2.z * copy.v1.y);
        GameCamera.orientMtx.right.y = -(copy.v2.z * copy.v1.x) - -(copy.v2.x * copy.v1.z);
        GameCamera.orientMtx.right.z = -(copy.v2.x * copy.v1.y) - -(copy.v2.y * copy.v1.x);
    }

    return flag;
}

// 0x015e2c0 (0x4 bytes)
void STUB_0015e2c0(...)
{
}

// 0x015e2c4 (0x28 bytes)
void Space_DisableShip(void)
{
    MobyInstance *ship = g_SpaceshipPtr;

    if (ship != NULL) {
        ship->collision = NULL;
        ship->modeBits |= NO_UPDATE | DISABLED;
    }
}

// 0x015e2ec (0x114 bytes)
/* a ship moby spawned: it becomes the level's ship (disabling the previous one) */
void SetupSpaceShipVars(MobyInstance *moby)
{
    DAT_00a561c0 = 1;

    if (g_SpaceshipPtr != NULL) {
        g_SpaceshipPtr->collision = NULL;
        g_SpaceshipPtr->modeBits |= NO_UPDATE | DISABLED;
    }

    if (Level == Gemlik) {
        g_heroSpawnPosition.z = 316.72f;
        g_heroSpawnRot.z = 2.77f;
        g_heroSpawnPosition.x = 464.66f;
        g_heroSpawnPosition.y = 580.68f;
    }

    g_SpaceshipVariant = moby->oClass - GREEN_SHIP_0213;
    g_SpaceshipPtr = moby;
    moby->pUpdate = &PTR_UpdateMoby_Spaceship_00707c58;
    moby->modeBits &= ~(NO_UPDATE | DISABLED);
    moby->collision = moby->pClass->collision;
    MB_SetAnimationNoBlend(moby, 1, 0);

    ShipVars *vars = (ShipVars *)moby->pVar;
    g_shipSplinePath = vars->splinePath;
    g_shipCameraStartCuboid = vars->cameraStartCuboid;
    g_shipCameraEndCuboid = vars->cameraEndCuboid;
}

// 0x015e400 (0x2c bytes)
void Space_EnableShip(void)
{
    MobyInstance *ship = g_SpaceshipPtr;

    if (ship != NULL) {
        ship->modeBits &= ~(NO_UPDATE | DISABLED);
        ship->collision = ship->pClass->collision;
    }
}

// 0x015e430 (0x3b8 bytes)
/* starts a ship cutscene: 0 takes off, anything else lands; loads the scene and its speech */
void PlaySpaceCutscene(int cutscene)
{
    g_CutscenePlaying = 1;
    DAT_00964594 = 0xffff;
    DAT_00964578 = 0;
    g_SpaceCutscene = cutscene;
    FastMemSet(&DAT_0095cd50, 0, 0x1c0);
    FastMemSet(&DAT_00a1be80, 0, 0x40);
    FastMemSet(&DAT_00a1bec0, 0, 0x40);
    VU1_setBufSizeByLevel();
    DAT_00e5aa64 -= 0x60000;
    g_SceneLoadBuffer = g_NpcBuffer + 0x200000;
    DAT_0095cda8 = g_NpcBuffer;
    SceneScreenFade = 1.0f;
    DAT_0095cf14 = 0;
    g_gameMode = GAME_MODE_SPACE;
    TransitionMovement(100, 2);
    g_heroInvisible = 1;
    Hero_MakeInvisible();

    g_SpaceshipPtr->modeBits |= DISABLED;
    for (MobyInstance *moby = MobyInstancePermEnd; moby->state != 0xff; moby++) {
        if ((moby->state & 0x80) == 0 && (moby->oClass == MINE_004A || moby->oClass == DECOY)) {
            moby->modeBits |= NO_DRAW;
        }
    }

    int scene;
    int speech;
    int odd = (Level == Orxon && g_SpaceshipVariant == 1) && UnlockableItems.o2Mask == 0;
    int oltanis = Level == Oltanis && g_SpaceshipVariant == 2;

    if (cutscene == 0) {
        scene = g_SpaceshipVariant + 1;
        speech = g_SpaceshipVariant + 6;
        if (odd) {
            speech = 0xb;
            scene = 0;
        }
        else if (oltanis) {
            scene = 8;
            speech = 0xe;
        }

        LoadSpaceScene(scene, (int)(animationSpeed * 6.5f));
    }
    else {
        int first = g_spaceArrivalPending == 0;

        scene = g_SpaceshipVariant + 5;
        speech = g_SpaceshipVariant + (first ? 3 : 0);
        if (odd) {
            scene = 4;
            speech = (first ? 1 : 0) + 9;
        }
        else if (oltanis) {
            scene = 9;
            speech = (first ? 1 : 0) + 0xc;
        }

        LoadSpaceScene(scene, first ? (int)(animationSpeed * 6.5f) : 0);
    }

    g_PendingSpeech = speech + 40000;
    ParseSpaceSceneChunk(0);

    while (g_SpeechPlaying.status != 3) {
        sound_Update();
        STUB_00503078(0);
    }

    music_PlayPreseekedSpeech();
}

// 0x015e7e8 (0xb0 bytes)
void Space_StartTakeoffCutscene(void)
{
    g_CutscenePlaying = 1;
    if (g_heroHealth < 1) {
        g_heroHealth = 1;
    }

    music_Pause(0);
    if (g_SpeechPlaying.status != 6 && g_SpeechPlaying.status != 7) {
        g_SpeechPlaying.status = 5;
    }

    sound_Update();
    Help_Kill();
    PlaySpaceCutscene(0);
    g_spaceArrivalPending = 0;
}

// 0x015e8a0 (0x1e4 bytes)
/* to the same level: the arrival cutscene from where the ship leaves; else save and
   queue the level change */
void StartLeaveLevelCutscene(LevelId level)
{
    g_CutscenePlaying = 1;
    g_gameMode = GAME_MODE_SPACE;
    DAT_0095cf14 = 0;
    SceneScreenFade = 1.0f;
    g_SpaceCutscene = 0;
    DAT_00964594 = 0xffff;
    SpaceSceneBuffers();

    if (Level != level) {
        memcard_Save(0, level);
        g_SpaceCutscene = 3;
        DAT_00964594 = 0xffff;
        g_newlevelnum = level;
        return;
    }

    PlaySpaceCutscene(8);

    int chunkLen = g_IsPal ? 0x50 : 0x60;
    int frame = (int)(animationSpeed * ((float)g_ShipLeaveFrames[g_SpaceshipVariant] + 0.5f));

    g_SpaceSceneFrame = frame;
    g_SpaceSceneChunk = frame / chunkLen;
    ParseSpaceSceneChunk(g_SpaceSceneChunk);
    g_cutsceneCameraFrame = g_SpaceSceneFrame % chunkLen;
}

// 0x015ea84 (0x20 bytes)
void ChangeLevel(LevelId level)
{
    g_loadingPlanet = 1;
    g_newlevelnum = level;
    g_CutscenePlaying = 1;
}

// 0x015eaa4 (0x120 bytes)
/* a level just loaded from space: play the landing cutscene, except on the levels that
   start on foot */
void Space_StartLevelArrival(void)
{
    g_spaceArrivalPending = 1;
    if (DAT_0096459a != 0) {
        DAT_0096459a = 0;
    }

    if (Level == Novalis && g_SeenPlanets.Kerwan == 0) {
        g_gameMode = GAME_MODE_NORMAL;
    }
    else if (Level == Veldin || (Level == Oltanis && g_MiscLevelFlags.field104_0x68 == 0) || (int)Level > 0x13) {
        g_gameMode = GAME_MODE_NORMAL;
    }
    else {
        g_gameMode = GAME_MODE_SPACE;
        g_SpaceCutscene = 0;
        DAT_00964594 = 0xffff;
        SceneScreenFade = 1.0f;
        VU1_setBufSizeByLevel();
        DAT_00e5aa64 -= 0x60000;
        DAT_0095cda8 = g_NpcBuffer;
        g_SceneLoadBuffer = g_NpcBuffer + 0x200000;
        PlaySpaceCutscene(8);
    }
}

// 0x015ebd0 (0x3bc bytes)
/* the engine glows of the parked ship: a flickering quad per glow (alpha from the ship's
   pulse, plus a random jitter of up to `uid`) */
void Space_DrawShipEngineGlow(MobyInstance *moby)
{
    Vec4 *glow = &g_ShipEngineGlows[0];
    QuadDef q;

    if (g_SpaceshipVariant == 1) {
        glow = &g_ShipEngineGlows[8];
    }
    else if (g_SpaceshipVariant == 2) {
        glow = &g_ShipEngineGlows[10];
    }

    q.tex0 = (u64)GetEffectTex(5);
    q.tex1 = SCE_GS_SET_TEX1(0, 0, 1, 1, 1, 0, 0xff90);
    q.clamp = SCE_GS_SET_CLAMP(0, 0, 0, 0, 0, 0);
    q.alpha = idol_draw::PackCmd(0, 2, 0, 1, 0x80);
    for (int i = 0; i < 8; i++) {
        (&q.st[0][0])[i] = g_ShipGlowSt[i];
    }

    for (int i = 0; i < g_ShipEngineGlowCnt[g_SpaceshipVariant]; i++, glow++) {
        int alpha = (u8)moby->setByGroup;
        if (moby->uid != 0) {
            alpha += MB_randInt((short)moby->uid);
        }

        float size = (float)FastIntToDouble(alpha) * (glow->w * 0.025f);
        u32 rgb = (moby->oClass == SHIP_GREEN_0215) ? 0x308000 : 0x2058b0;
        Mtx4 *m = &g_SpaceshipPtr->transform;

        for (int j = 0; j < 4; j++) {
            Vec4 *corner = &g_ShipGlowCorners[j];
            float cx = corner->x * size + glow->x;
            float cy = corner->y * size + glow->y;
            float cz = corner->z * size + glow->z;

            q.rgba[j] = (int)((u32)alpha << 24 | rgb);
            q.xyzw[j].x = m->v2.x * cz + m->v0.x * cx + m->v1.x * cy + moby->bSphere.x * 0.0009765625f;
            q.xyzw[j].y = m->v2.y * cz + m->v0.y * cx + m->v1.y * cy + moby->bSphere.y * 0.0009765625f;
            q.xyzw[j].z = m->v2.z * cz + m->v0.z * cx + m->v1.z * cy + moby->bSphere.z * 0.0009765625f;
            q.xyzw[j].w = m->v1.w * cy + m->v2.w * cz + m->v0.w * cx + corner->w;
        }

        FastDrawQuad((undefined4 *)&q, 0, 0, (longlong)EffectTexHeaders, 9);
    }
}

/* one trail quad's corners: from trail point (cur + j / 2) out along dirs[j], tapering
   with the distance from the ship */
static inline void ShipTrailQuad(QuadDef *q, Vec4 *trail, int cur, int seg, Vec4 *dirs)
{
    for (int j = 0; j < 4; j++) {
        float t = (float)FastIntToDouble(seg - (j >> 1) + 1) * 0.03125f;
        float width = (1.0f - t * t) * g_ShipTrailWidths[g_SpaceshipVariant];
        Vec4 *dir = &dirs[j];
        float len = sqrtf(dir->z * dir->z + dir->x * dir->x + dir->y * dir->y);
        Vec4 ofs = { 0.0f, 0.0f, 0.0f, 0.0f };

        if (len != 0.0f) {
            ofs.x = dir->x * (width / len);
            ofs.y = dir->y * (width / len);
            ofs.z = dir->z * (width / len);
        }

        Vec4 *pnt = &trail[(cur + (j >> 1)) & 31];
        q->xyzw[j].x = ofs.x + pnt->x;
        q->xyzw[j].y = ofs.y + pnt->y;
        q->xyzw[j].w = dir->w;
        q->xyzw[j].z = ofs.z + pnt->z;
    }
}

static inline void Cross(Vec4 *out, Vec4 *a, Vec4 *b)
{
    out->x = a->y * b->z - a->z * b->y;
    out->y = a->z * b->x - a->x * b->z;
    out->z = a->x * b->y - a->y * b->x;
    out->w = 0.0f;
}

static inline void Sub(Vec4 *out, Vec4 *a, Vec4 *b)
{
    out->x = a->x - b->x;
    out->y = a->y - b->y;
    out->z = a->z - b->z;
}

// 0x015ef98 (0x6e8 bytes)
/* the ship's two engine trails as ribbons: per segment, one quad spread across the pair of
   trails and one spread out of their plane, fading out toward the end */
void Space_DrawTransitionOverlay(void)
{
    u32 texHeaders = EffectTexHeaders;
    QuadDef q;

    if (g_gameMode == GAME_MODE_SPACE && g_SpaceCutscene == 4) {
        texHeaders = *(u32 *)(DAT_00a10920 + 0xc);
        q.tex0 = **(u32 **)(DAT_00a10920 + 0x1c);
    }
    else {
        q.tex0 = (u64)GetEffectTex(0x13);
    }

    q.tex1 = SCE_GS_SET_TEX1(0, 0, 1, 1, 1, 0, 0xff90);
    q.clamp = SCE_GS_SET_CLAMP(0, 0, 0, 0, 0, 0);
    q.alpha = idol_draw::PackCmd(0, 2, 0, 1, 0x80);
    for (int i = 0; i < 8; i++) {
        (&q.st[0][0])[i] = g_ShipTrailSt[i];
    }

    for (int seg = 0; seg < g_ShipTrailLen - 1; seg++) {
        int cur = (g_ShipTrailHead - seg + 31) & 31;
        int next = (cur + 1) & 31;
        int next2 = (cur + 2) & 31;

        for (int trail = 0; trail < 2; trail++) {
            Vec4 *pts = g_ShipTrails[trail];
            Vec4 sides[4];
            Vec4 normals[4];
            Vec4 dir;
            Vec4 dirNext;

            /* across the pair of trails, both ways, here and at the next point */
            Sub(&sides[0], &g_ShipTrails[1][cur], &g_ShipTrails[0][cur]);
            sides[0].w = g_ShipTrails[1][cur].w;
            Sub(&sides[1], &g_ShipTrails[0][cur], &g_ShipTrails[1][cur]);
            sides[1].w = g_ShipTrails[0][cur].w;
            Sub(&sides[2], &g_ShipTrails[1][next], &g_ShipTrails[0][next]);
            sides[2].w = g_ShipTrails[1][next].w;
            Sub(&sides[3], &g_ShipTrails[0][next], &g_ShipTrails[1][next]);
            sides[3].w = g_ShipTrails[0][next].w;

            Sub(&dir, &pts[next], &pts[cur]);
            Sub(&dirNext, &pts[next2], &pts[next]);
            if (seg == 0) {
                dirNext = dir;
            }

            Cross(&normals[0], &dir, &sides[0]);
            Cross(&normals[1], &dir, &sides[1]);
            Cross(&normals[2], &dirNext, &sides[2]);
            Cross(&normals[3], &dirNext, &sides[3]);

            for (int j = 0; j < 4; j++) {
                float t = (float)FastIntToDouble(seg - (j >> 1) + 1) * 0.03125f;

                q.rgba[j] = (int)FastLerpColor(t, g_ShipTrailColors[g_SpaceshipVariant][0],
                                               g_ShipTrailColors[g_SpaceshipVariant][1]);
            }

            ShipTrailQuad(&q, pts, cur, seg, normals);
            FastDrawQuad((undefined4 *)&q, 0, 0, (longlong)texHeaders, 9);
            ShipTrailQuad(&q, pts, cur, seg, sides);
            FastDrawQuad((undefined4 *)&q, 0, 0, (longlong)texHeaders, 9);
        }
    }
}

#define VTX_FORMAT(size, type) ((24 << 8) | ((size) << 4) | (type))
#define VTX_DISABLED CELL_GCM_VERTEX_F
#define MAIN_MEMORY 0x80000000

typedef struct TransitionVertex {
    float pos[3];
    float uv[2];
    u32 color;
} TransitionVertex;

static inline void Emit(RenderingStep *pass, u32 word)
{
    *pass->command++ = (RsxCmd)word;
}

static inline void EmitMethod(RenderingStep *pass, u32 method, u32 value)
{
    Emit(pass, CELL_GCM_METHOD(method, 1));
    Emit(pass, value);
}

static inline u32 SwapBytes(u32 value)
{
    return value >> 24 | (value >> 8 & 0xff00) | (value & 0xff00) << 8 | value << 24;
}

// 0x015f6d0 (0x5e0 bytes)
/* unused: draws the level's transition quad (scaled per level, around g_TransitionCenter)
   as an RSX triangle strip */
void ____Space_TransitionDrawPass(void)
{
    QuadDef q;
    Mtx4 world;
    float uv[4][2];

    SetGSReg(0x16, idol_draw::Blend(1, 0, 0x80, 1, 0, 0, 1, 1));
    q.tex0 = DAT_00a561c8;
    q.tex1 = SCE_GS_SET_TEX1(0, 0, 1, 1, 1, 0, 0xff90);
    q.clamp = SCE_GS_SET_CLAMP(0, 0, 0, 0, 0, 0);
    q.alpha = idol_draw::PackCmd(0, 1, 0, 1, 0x80);
    FastMemCopy(uv, g_TransitionUv, sizeof(uv));

    float scale = 1.0f;
    if ((int)Level >= 0 && (int)Level < 0x13) {
        scale = g_TransitionScales[Level];
    }

    for (int i = 0; i < 4; i++) {
        q.rgba[i] = (int)0x80808080;
        q.xyzw[i].x = g_TransitionCorners[i].x * scale + g_TransitionCenter.x;
        q.xyzw[i].y = g_TransitionCorners[i].y * scale + g_TransitionCenter.y;
        q.xyzw[i].z = g_TransitionCorners[i].z * scale + g_TransitionCenter.z;
        q.xyzw[i].w = g_TransitionCorners[i].w;
    }

    RenderingStep *pass = ForwardPass;
    int idolDraw = g_pIdolDraw;

    idol_draw::BindVertexProgram(g_pIdolDraw, (int)pass, 5);
    idol_draw::BindFragmentProgram(idolDraw, (int)pass, 2);

    TransitionVertex *verts = (TransitionVertex *)idol::AllocateMemAlign((int)FrameHeap, 4 * sizeof(TransitionVertex), 16);
    for (int i = 0; i < 4; i++) {
        verts[i].pos[0] = q.xyzw[i].x;
        verts[i].pos[1] = q.xyzw[i].y;
        verts[i].pos[2] = q.xyzw[i].z;
        verts[i].uv[0] = uv[i][0];
        verts[i].uv[1] = uv[i][1];
        verts[i].color = SwapBytes((u32)q.rgba[i]);
    }

    if (q.alpha != 0) {
        idol_draw::DrawDepth(ForwardPass, q.alpha);
    }

    int sampler0;
    int sampler1;
    FUN_004d6704(q.clamp, &sampler0, &sampler1);
    FUN_004d676c(ForwardPass, 0, (u8 *)(*(u32 *)(DAT_00a10920 + 0xc) + (u32)q.tex0 * 0x24), sampler0, sampler1);
    idol_draw::ResetPassState(ForwardPass);

    EmitMethod(ForwardPass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + 0 * 4, VTX_FORMAT(3, CELL_GCM_VERTEX_F));
    EmitMethod(ForwardPass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + 1 * 4, VTX_FORMAT(2, CELL_GCM_VERTEX_F));
    EmitMethod(ForwardPass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + 3 * 4, VTX_FORMAT(4, CELL_GCM_VERTEX_UB));

    u32 offset = (u32)(uintptr_t)verts - *(u32 *)(idolDraw + 0x4a8);
    EmitMethod(ForwardPass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_OFFSET + 0 * 4, offset | MAIN_MEMORY);
    EmitMethod(ForwardPass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_OFFSET + 1 * 4, (offset + 12) | MAIN_MEMORY);
    EmitMethod(ForwardPass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_OFFSET + 3 * 4, (offset + 20) | MAIN_MEMORY);

    FastMemSet(&world, 0, sizeof(world));
    world.v0.x = 1.0f;
    world.v1.y = 1.0f;
    world.v2.z = 1.0f;
    world.v3.w = 1.0f;

    const u32 *words = (const u32 *)&world;
    Emit(ForwardPass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_TRANSFORM_CONSTANT_LOAD, 17));
    Emit(ForwardPass, 4);
    for (int i = 0; i < 16; i++) {
        Emit(ForwardPass, words[i]);
    }

    Emit(ForwardPass, CELL_GCM_METHOD_FLAG_NON_INCREMENT | CELL_GCM_METHOD(CELL_GCM_NV4097_INVALIDATE_VERTEX_FILE, 3));
    Emit(ForwardPass, 0);
    Emit(ForwardPass, 0);
    Emit(ForwardPass, 0);
    EmitMethod(ForwardPass, CELL_GCM_NV4097_SET_BEGIN_END, CELL_GCM_PRIMITIVE_TRIANGLE_STRIP);
    Emit(ForwardPass, CELL_GCM_METHOD_FLAG_NON_INCREMENT | CELL_GCM_METHOD(CELL_GCM_NV4097_DRAW_ARRAYS, 1));
    Emit(ForwardPass, (4 - 1) << 24 | 0);
    EmitMethod(ForwardPass, CELL_GCM_NV4097_SET_BEGIN_END, 0);

    EmitMethod(ForwardPass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + 0 * 4, VTX_DISABLED);
    EmitMethod(ForwardPass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + 1 * 4, VTX_DISABLED);
    EmitMethod(ForwardPass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + 3 * 4, VTX_DISABLED);

    SetGSReg(0x16, FUN_00502f98(1, 5, 0x60, 3, 0, 0, 1, 2));
}

static inline void DrawBanner(u32 color)
{
    SetGSReg(0x16, idol_draw::Blend(1, 0, 0x80, 1, 0, 0, 1, 1));
    SetGSReg(3, idol_draw::PackCmd(0, 1, 0, 1, 0x80));
    Sprite_DrawShape(0x20, 0x168, 0x100, 0x20, 0, 0, 0x100, 0x20, color,
                     (void *)(uintptr_t)(*(u32 *)(DAT_00a10920 + 0xc) + (u32)DAT_00a561d0 * 0x24));
    SetGSReg(0x16, FUN_00502f98(1, 5, 0x60, 3, 0, 0, 1, 2));
}


// 0x015fcb0 (0x130 bytes)
/* the banner across the bottom of the loading screen, at `alpha` */
void Space_DrawLoadingBanner(int alpha)
{
    DrawBanner((u32)alpha << 24 | 0x808080);
}

#define LOADSCREEN_ARRIVAL 4          /* the one played after the random ones */
#define SCENE_CHUNK_FRAMES 0x60

static inline int ScaledFrames(float frames)
{
    return (int)(animationSpeed * frames);
}

/* the loading screens play the intro of a planet the player hasn't seen */
static inline int SpaceIsIntro(void)
{
    return Level == Veldin || (Level == Novalis && g_SeenPlanets.Kerwan == 0);
}

/* moves a scene moby half a key (two sub steps per frame) and records its engine bones
   in the trails */
static inline void SpaceSceneMobyStep(MobyInstance *moby, int sub)
{
    MobyClass *cls = moby->pClass;
    MobySeq *seq = cls->seqs[cls->seq_cnt - 1];
    int key = (int)g_cutsceneCameraFrame >> 1;
    u8 *frameA = *(u8 **)((u8 *)seq + 0x1c + key * 4);
    u8 *frameB = *(u8 **)((u8 *)seq + 0x1c + (key + 1) * 4);
    Vec4 *from = &((Vec4 *)moby->pVar)[key];
    Vec4 *to = &((Vec4 *)moby->pVar)[key + 1];
    float blend = (float)FastIntToDouble(g_cutsceneCameraFrame & 1) * 0.5f + (float)sub * 0.25f;
    float invBlend = 1.0f - blend;

    moby->animationBlend = blend;
    moby->updateId = 2;
    moby->pos.w = from->w;
    moby->animationId = 2;
    moby->previousAnimationFrame = 0;
    moby->animationFrame = 0;
    moby->pos.x = from->x * invBlend + to->x * blend;
    moby->pos.y = from->y * invBlend + to->y * blend;
    moby->pos.z = from->z * invBlend + to->z * blend;
    UpdateMobyFrameData(moby);
    FastMemCopy((u8 *)moby->pPreviousAnimationData + 0x10, frameA + 0x10, 0x20);
    FastMemCopy((u8 *)moby->pCurrentAnimationData + 0x10, frameB + 0x10, 0x20);
    moby->drawDistance = 0x1ff;
    moby->unk72 = -1;
    moby->unk71 = -1;
    UpdateMobyTransform(moby);
    moby->updateId = moby->pClass->seq_cnt - 1;
    moby->animationId = moby->pClass->seq_cnt - 1;

    Mtx4 left;
    Mtx4 right;
    GetBoneTransformations(moby, 1, &left);
    GetBoneTransformations(moby, 2, &right);

    g_ShipTrailHead = (g_ShipTrailHead + 1) & 31;
    if (g_ShipTrailLen < 32) {
        g_ShipTrailLen++;
    }

    g_ShipTrails[0][g_ShipTrailHead] = left.v3;
    g_ShipTrails[1][g_ShipTrailHead] = right.v3;
}

// 0x015fe00 (0x9a4 bytes)
/* one frame of the space loading screens: plays the scene's chunks, and at its end picks the
   next screen (random first, then LOADSCREEN_ARRIVAL) or, after two, lets the level go on */
void ChooseLoadingScreen(void)
{
    short numFrames;

    ResetGameCounters();
    g_cutsceneCameraFrame++;
    g_SpaceSceneFrame++;
    SceneScreenFade -= 0.25f;
    if (SceneScreenFade < 0.0f) {
        SceneScreenFade = 0.0f;
    }

    if (g_SpaceSceneFrame == 1 && !SpaceIsIntro()) {
        STUB_00505f50();
        snd_PlaySoundVolPanPMPB_CB(g_BootSoundBank, g_currentLoadingScreen, 0x400, 0, 0, 0, NULL, (u64)(uintptr_t)g_SoundChannels);
        STUB_00505f4c();
        STUB_00505d20();
    }

    numFrames = *(short *)&g_SpaceSceneNumFrames;
    if (g_SpaceSceneFrame < numFrames) {
        if ((int)g_cutsceneCameraFrame >= SCENE_CHUNK_FRAMES) {
            g_SpaceSceneChunk++;
            ParseSpaceSceneChunk(g_SpaceSceneChunk);
        }
    }
    else {
        /* the scene is over: drop its mobys and their extra sequence */
        for (int i = 0; i < g_SpaceSceneMobyCnt; i++) {
            MobyInstance *moby = g_SpaceSceneMobys[i];

            if (moby != NULL) {
                moby->pClass->seq_cnt--;
                moby->pClass->seqs[moby->pClass->seq_cnt] = NULL;
                DeleteMoby(moby);
            }
        }

        if (!SpaceIsIntro() && (short)g_LoadingStage < 3) {
            g_loadingCount = 0;
        }

        if ((int)g_loadingCount >= 2) {
            if (DAT_00964562 != 0) {
                DAT_00964562 = 0;
            }

            g_CutscenePlaying = 1;
            return;
        }

        int screen = LOADSCREEN_ARRIVAL;
        if (g_loadingCount == 0) {
            int r = rand() >> 16;

            screen = (g_currentLoadingScreen + r % 3 + 1) & 3;
        }

        g_currentLoadingScreen = screen;
        g_loadingCount++;
        g_ShipTrailHead = 0;
        g_ShipTrailLen = 0;
        g_TransitionCenter = g_TransitionCenterStart;
        FastMemSet(&DAT_0095cd50, 0, 0x1c0);
        g_SceneLoadBuffer = g_NpcBuffer + 0x200000;
        DAT_0095cda8 = g_NpcBuffer;

        /* the screen's chunk table: (offset, size) pairs up to a 0 size */
        int *chunks = (int *)(DAT_00a10920 + *(int *)(DAT_00a10920 + 0x28 + g_currentLoadingScreen * 4));
        for (int i = 0; i < 0x46 && chunks[1] != 0; i++, chunks += 2) {
            (&g_SceneChunkPtrs)[i] = DAT_00a10920 + chunks[0];
        }

        ParseSpaceSceneChunk(0);
    }

    Space_SetCutsceneCamera();
    if (g_ViewContext.xratio < g_LoadScreenXRatios[g_currentLoadingScreen]) {
        g_ViewContext.xratio = g_LoadScreenXRatios[g_currentLoadingScreen];
    }
    UpdateViewContext();

    /* the arrival screen drifts its centre in as the scene runs out */
    numFrames = *(short *)&g_SpaceSceneNumFrames;
    float remaining = 1.0f;
    if (g_currentLoadingScreen == LOADSCREEN_ARRIVAL) {
        remaining = (float)(numFrames - g_SpaceSceneFrame) / (float)numFrames;
        g_TransitionCenter.x = g_TransitionDrift.x * remaining + g_TransitionCenter.x;
        g_TransitionCenter.y = g_TransitionDrift.y * remaining + g_TransitionCenter.y;
        g_TransitionCenter.z = g_TransitionDrift.z * remaining + g_TransitionCenter.z;
    }

    /* the sky scrolls past */
    float scroll = (float)(g_SpaceSceneFrame - ScaledFrames(120.5f)) * 20.0f * remaining;
    Vec4 *dir = &g_LoadScreenSkyDirs[g_currentLoadingScreen];
    g_SkyOrigin.x = dir->x * scroll;
    g_SpaceSkyAngle = g_LoadScreenSkyAngles[g_currentLoadingScreen];
    g_SkyOrigin.y = dir->y * scroll;
    g_SkyOrigin.z = dir->z * scroll;
    g_SkyOrigin.w = dir->w;

    for (int i = 0; i < g_SpaceSceneMobyCnt; i++) {
        MobyInstance *moby = g_SpaceSceneMobys[i];

        for (int sub = 0; sub < 2; sub++) {
            SpaceSceneMobyStep(moby, sub);

            if (g_currentLoadingScreen != LOADSCREEN_ARRIVAL) {
                continue;
            }

            if (SpaceIsIntro()) {
                g_ShipTrailLen = 0;
                moby->modeBits |= DISABLED;
            }

            /* the last 56 frames: the ship shrinks and its trails fade */
            numFrames = *(short *)&g_SpaceSceneNumFrames;
            if (g_SpaceSceneFrame > numFrames - 0x38) {
                int left = numFrames - g_SpaceSceneFrame;

                moby->scale = moby->pClass->gScale * ((float)(numFrames - g_SpaceSceneFrame) * 0.017857144f);
                for (int v = 0; v < 3; v++) {
                    g_ShipTrailColors[v][0] = (g_ShipTrailColors[v][0] & 0xffffff) | (u32)left << 24;
                }
            }
            else {
                for (int v = 0; v < 3; v++) {
                    g_ShipTrailColors[v][0] = (g_ShipTrailColors[v][0] & 0xffffff) | 0x38000000;
                }
            }
        }
    }

    UpdateGameCounters();
}

#define SHIP_ENV_CLASS 0x212          /* first ship class with a reflection mesh */

static inline void MtxApply(Vec4 *out, Mtx4 *m, Vec4 *v)
{
    out->x = m->v3.x * v->w + m->v2.x * v->z + m->v0.x * v->x + v->y * m->v1.x;
    out->y = m->v3.y * v->w + m->v2.y * v->z + m->v0.y * v->x + v->y * m->v1.y;
    out->z = m->v3.z * v->w + m->v2.z * v->z + m->v0.z * v->x + v->y * m->v1.z;
    out->w = m->v3.w * v->w + m->v2.w * v->z + m->v0.w * v->x + v->y * m->v1.w;
}

static inline void Normalize(Vec4 *v)
{
    float len2 = v->z * v->z + v->x * v->x + v->y * v->y;
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;

    if (sqrtf(len2) != 0.0f) {
        float inv = 1.0f / sqrtf(len2);

        x = v->x * inv;
        y = v->y * inv;
        z = v->z * inv;
    }

    v->x = x;
    v->y = y;
    v->z = z;
}

/* the sphere-map uv of a vertex: the view ray reflected off its normal */
static inline void ShipEnvUv(float *uv, Vec4 *world, Mtx4 *m, Vec4 *normal)
{
    Vec4 view;
    view.x = world->x - GameCamera.posX;
    view.y = world->y - GameCamera.posY;
    view.z = world->z - GameCamera.posZ;
    Normalize(&view);

    Vec4 n;
    n.x = normal->w * m->v3.x + normal->z * m->v2.x + normal->x * m->v0.x + normal->y * m->v1.x;
    n.y = normal->w * m->v3.y + normal->z * m->v2.y + normal->x * m->v0.y + normal->y * m->v1.y;
    n.z = normal->w * m->v3.z + normal->z * m->v2.z + normal->x * m->v0.z + normal->y * m->v1.z;

    float len = sqrtf(n.z * n.z + n.x * n.x + n.y * n.y);
    float scale = 0.1f / len;
    if (len == 0.0f) {
        n.x = 0.0f;
        n.y = 0.0f;
        n.z = 0.0f;
    }
    else {
        n.x *= scale;
        n.y *= scale;
        n.z *= scale;
    }

    float dot = (n.z * view.z + (n.x * view.x + n.y * view.y)) * 2.0f;
    Vec4 r;
    r.x = -(n.x * dot - view.x);
    r.y = -(n.y * dot - view.y);
    r.z = -(n.z * dot - view.z);
    Normalize(&r);

    float m2 = sqrtf((r.z + 1.0f) * 2.0f) * 2.0f;
    uv[0] = r.x / m2 + 0.5f;
    uv[1] = r.y / m2 + 0.5f;
}

// 0x01607c0 (0x98c bytes)
/* the ship's environment-mapped shine: near the camera the reflection uvs follow it (easing in
   from where they stopped over ~60 frames); away, only the mesh follows the ship */
void Space_DrawShipEffects(MobyInstance *moby)
{
    int cls = moby->oClass - SHIP_ENV_CLASS;
    Vec4 *verts = g_ShipEnvVerts[cls];
    Vec4 *normals = g_ShipEnvNormals[cls];
    short *quads = g_ShipEnvQuads[cls];
    int vertCnt = g_ShipEnvVertCnt[cls];
    int quadCnt = g_ShipEnvQuadCnt[cls];
    u32 texHeaders = EffectTexHeaders;
    QuadDef q;
    Mtx4 m;

    if (g_gameMode == GAME_MODE_SPACE && g_SpaceCutscene == 4) {
        q.tex0 = *(u32 *)(*(u32 *)(DAT_00a10920 + 0x1c) + 4);
        texHeaders = *(u32 *)(DAT_00a10920 + 0xc);
    }
    else {
        q.tex0 = (u64)GetEffectTex(0x15);
    }

    q.tex1 = SCE_GS_SET_TEX1(0, 0, 1, 1, 1, 0, 0xff90);
    q.clamp = SCE_GS_SET_CLAMP(0, 0, 0, 0, 0, 0);
    q.alpha = idol_draw::PackCmd(0, 1, 0, 1, 0x80);
    for (int i = 0; i < 4; i++) {
        q.rgba[i] = (int)g_ShipEnvColors[cls];
    }

    GetBoneTransformations(moby, 0, &m);

    int near = g_gameMode != GAME_MODE_NORMAL ||
               (fabsf(GameCamera.posX - moby->pos.x) < 16.0f && fabsf(GameCamera.posY - moby->pos.y) < 16.0f);

    if (((g_gameMode != GAME_MODE_SPACE || g_SpaceCutscene != 4) && near) || g_ShipEnvForce == 1) {
        g_ShipEnvActive = 1;
        FastDecTimerS32(&g_ShipEnvTimer);
        float blend = (float)FastIntToDouble(g_ShipEnvTimer) / (float)FastIntToDouble(ScaledFrames(60.5f));

        for (int i = 0; i < vertCnt; i++) {
            float uv[2];

            MtxApply(&g_ShipEnvWorld[i], &m, &verts[i]);
            ShipEnvUv(uv, &g_ShipEnvWorld[i], &m, &normals[i]);

            if (g_ShipEnvForce == 1 || g_ShipEnvTimer == 0) {
                g_ShipEnvUv[i][0] = uv[0];
                g_ShipEnvUv[i][1] = uv[1];
            }
            else {
                g_ShipEnvUv[i][0] = (g_ShipEnvUvPrev[i][0] - uv[0]) * blend + uv[0];
                g_ShipEnvUv[i][1] = (g_ShipEnvUvPrev[i][1] - uv[1]) * blend + uv[1];
            }
        }

        if (g_ShipEnvForce == 1) {
            g_ShipEnvForce = 2;
        }
    }
    else {
        if (g_ShipEnvActive == 1) {
            g_ShipEnvActive = 0;
            for (int i = 0; i < vertCnt; i++) {
                g_ShipEnvUvPrev[i][0] = g_ShipEnvUv[i][0];
                g_ShipEnvUvPrev[i][1] = g_ShipEnvUv[i][1];
                MtxApply(&g_ShipEnvWorld[i], &m, &verts[i]);
            }
        }
        else {
            for (int i = 0; i < vertCnt; i++) {
                MtxApply(&g_ShipEnvWorld[i], &m, &verts[i]);
            }
        }

        g_ShipEnvTimer = ScaledFrames(60.5f);
    }

    for (int i = 0; i < quadCnt; i++, quads += 8) {
        for (int j = 0; j < 4; j++) {
            int vert = quads[j * 2];

            q.xyzw[j] = g_ShipEnvWorld[vert];
            (&q.st[0][0])[j * 2] = g_ShipEnvUv[vert][0];
            (&q.st[0][0])[j * 2 + 1] = g_ShipEnvUv[vert][1];
        }

        FastDrawQuad((undefined4 *)&q, 0, 0, (longlong)texHeaders, 9);
    }
}

// 0x016114c (0x328 bytes)
/* draws a frame of the space loading screens */
void TransitionDraw_Space(void)
{
    STUB_00078100();
    ComposeCameraMatrix();
    CleanAnimationCache();
    STUB_0006849c();
    DAT_00a10724 = 0xffffffff;

    /* the sky shell at a view at least 0.63 wide */
    float xratio = g_ViewContext.xratio;
    if (g_ViewContext.xratio < 0.63f) {
        g_ViewContext.xratio = 0.63f;
    }
    UpdateViewContext();
    ComposeCameraMatrix();
    Space_DrawSkyShell();
    g_ViewContext.xratio = xratio;
    UpdateViewContext();
    ComposeCameraMatrix();

    if (g_currentLoadingScreen == LOADSCREEN_ARRIVAL) {
        STUB_0006d704(1);
        ____Space_TransitionDrawPass();
        STUB_0006d708();
    }

    DrawMobys();
    STUB_00175554(0x2080000);
    STUB_0006d704(1);

    if (!SpaceIsIntro()) {
        Space_DrawTransitionOverlay();
    }

    if (g_currentLoadingScreen == LOADSCREEN_ARRIVAL && g_SpaceSceneFrame > 60) {
        int alpha = g_SpaceSceneFrame * 2 - 120;
        if (alpha > 0x80) {
            alpha = 0x80;
        }

        DrawBanner(((u32)alpha << 24 & 0xfe000000) | 0x808080);
    }

    if (!SpaceIsIntro()) {
        Space_DrawShipEffects(g_SpaceSceneMobys[0]);
    }

    STUB_0006d708();
    if (SceneScreenFade > 1.0f) {
        SceneScreenFade = 1.0f;
    }

    STUB_00174cf4(0x10);
    STUB_000f1448();
}

// 0x0161480 (0x244 bytes)
/* six engine sparks off the ship, drifting by zVel */
void Space_SpawnShipParticles(MobyInstance *ship, float zVel)
{
    Vec4 *ofs = g_ShipParticleOffsets[g_SpaceshipVariant];
    Mtx4 *m = &ship->transform;

    for (int i = 0; i < 6; i++, ofs++) {
        Vec4 vel;
        Vec4 accel;
        Vec4 pos;

        vel.x = (float)MB_randRangeFloat(-g_FrameTime, g_FrameTime);
        vel.y = (float)MB_randRangeFloat(-g_FrameTime, g_FrameTime);
        vel.z = (float)MB_randRangeFloat(g_FrameTime * -0.25f, g_FrameTime * 0.25f) + zVel;
        vel.w = 0.4f;
        accel.x = vel.x;
        accel.y = vel.y;
        accel.z = vel.z;
        accel.w = 0.6f;

        pos.x = m->v2.x * ofs->z + m->v0.x * ofs->x + m->v1.x * ofs->y + ship->pos.x;
        pos.y = m->v2.y * ofs->z + m->v0.y * ofs->x + m->v1.y * ofs->y + ship->pos.y;
        pos.z = m->v2.z * ofs->z + m->v0.z * ofs->x + m->v1.z * ofs->y + ship->pos.z;
        pos.w = m->v1.w * ofs->y + m->v2.w * ofs->z + m->v0.w * ofs->x + ofs->w;

        int life = ScaledFrames(4.5f);
        SpawnPart_2(&pos.x, &vel.x, &accel.x, 0x24c0c0c0, 0x14c0c0c0, (short)life, (undefined2)life,
                    (undefined2)(life + MB_randInt(life)));
    }
}
