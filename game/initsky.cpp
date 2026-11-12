// game/initsky.cpp -- the level's sky draw, and effects for the space (ship) cutscenes
// STATUS: CLEAN (checked against the asm; local names are mine)
// 5 functions, 0xd93a8-0xda2e0
#include <math.h>
#include "game/initsky.h"
#include "game/boot.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/pause.h"
#include "game/skyfunc.h"
#include "game/space.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"
#include "idol/tiefunc.h"
#include "sdk/libgcm_cmd/marker.h"

#define SHIP_TILT       (-0.34906584f)  /* -20 degrees */
#define TRAIL_HALFWIDTH 0.25f

static inline void SetVert(Vec4 *v, float x, float y, float z)
{
    v->x = x;
    v->y = y;
    v->z = z;
    v->w = 1.0f;
}

/* widen the trail quad: corners below `split` move one way, the others the other way */
static inline void Spread(QuadDef *q, int first, int step, int split)
{
    for (int i = first; i < 4; i += step) {
        float dy = i < split ? -TRAIL_HALFWIDTH : TRAIL_HALFWIDTH;
        float dz = i < split ? TRAIL_HALFWIDTH : -TRAIL_HALFWIDTH;
        q->xyzw[i].z += dz;
        q->xyzw[i].y += dy;
    }
}

// 0x00d93a8 (0x14 bytes)
void SECTION_HEADER_INITSKY(void)
{
    DAT_00724684 = 0x10000;
}

// 0x00d93c0 (0x28c bytes)
void InitSky(void)
{
    idol_draw::RsxCmd_DebugStr_Marker((int)ForwardPass, (char *)"Sky");
    SetupGifPaging();
    switch (Level) {
    case 0:  SkyLevel_00(); break;
    case 1:  SkyLevel_01(); break;
    case 2:  SkyLevel_02(); break;
    case 3:  SkyLevel_03(); break;
    case 4:  SkyLevel_04(); break;
    case 5:  SkyLevel_05(); break;
    case 6:  SkyLevel_06(); break;
    case 7:  SkyLevel_07(); break;
    case 8:  SkyLevel_08(); break;
    case 9:  SkyLevel_09(); break;
    case 10: SkyLevel_10(); break;
    case 11: SkyLevel_11(); break;
    case 12: SkyLevel_12(); break;
    case 13: SkyLevel_13(); break;
    case 14: SkyLevel_14(); break;
    case 15: SkyLevel_15(); break;
    case 16: SkyLevel_16(); break;
    case 17: SkyLevel_17(); break;
    case 18: SkyLevel_18(); break;
    case 19: SkyLevel_19(); break;
    default: SkyLevelNone(); break;
    }
    DoSkyGifPaging();
    SetGSReg(0x16, idol_draw::Blend(1, 5, 0x60, 3, 0, 0, 1, 2));
    SetGSReg(0x21, VU1_addGSregister(GSmem.zbuf >> 13, 1, 0));
    idol_draw::RsxCmd_WritePass(ForwardPass);
}

// 0x00d9668 (0x558 bytes)
// inlined: FastRSqrt @0xd9820
/* registered draw function: an engine trail behind the ship in 4 segments (x = 0..3 along the
   ship's bone 0 frame, tilted 20 degrees), each quad drawn twice, widened in between */
void DrawSceneShipEffect(MobyInstance *moby)
{
    QuadDef q;
    Mtx4 m;

    q.tex0 = (u64)GetEffectTex(14);
    q.tex1 = STUB_00502fd4_RET_0(0, 0, 1, 1, 1, 0, 0xff90);
    q.clamp = FUN_00502f08(1, 1, 0, 0, 0, 0);
    q.alpha = idol_draw::PackCmd(0, 2, 0, 1, 128);
    q.rgba[0] = 0x3ff08080;
    q.rgba[1] = 0x3ff08080;
    q.rgba[2] = 0x3ff08030;
    q.rgba[3] = 0x3ff08030;
    q.st[0][0] = 0.0f; q.st[0][1] = 0.0f; q.st[0][2] = 1.0f; q.st[0][3] = 0.0f;
    q.st[1][0] = 0.0f; q.st[1][1] = 1.0f; q.st[1][2] = 1.0f; q.st[1][3] = 1.0f;

    GetBoneTransformations((int)moby, 0, (int)&m);
    MB_RotateQuatAxisAngle(SHIP_TILT, (float *)&m, (float *)&m, (float *)&m.v1);

    /* rebuild the frame around the rotated x axis: v1 = v2 x v0 (normalized), v2 = v0 x v1 */
    float x0 = m.v0.x, y0 = m.v0.y, z0 = m.v0.z;
    m.v1.w = 0.0f;
    float cx = m.v2.y * z0 - m.v2.z * y0;
    float cy = m.v2.z * x0 - m.v2.x * z0;
    float cz = m.v2.x * y0 - m.v2.y * x0;
    float len2 = cz * cz + (cx * cx + cy * cy);
    float ux = 0.0f, uy = 0.0f, uz = 0.0f;
    if (sqrtf(len2) != 0.0f) {
        float s = 1.0f / sqrtf(len2);            /* FastRSqrt: estimate + three Newton steps */
        ux = cx * s;
        uy = cy * s;
        uz = cz * s;
    }
    m.v1.x = ux; m.v1.y = uy; m.v1.z = uz;
    m.v2.x = y0 * uz - z0 * uy;
    m.v2.y = z0 * ux - x0 * uz;
    m.v2.z = x0 * uy - y0 * ux;
    m.v2.w = 0.0f;
    m.v3.w = 1.0f;

    float y2 = y0 + y0, z2 = z0 + z0;

    SetVert(&q.xyzw[0], 0.0f, 0.0f, 0.0f);
    SetVert(&q.xyzw[1], 1.0f, y0, z0 - TRAIL_HALFWIDTH);
    SetVert(&q.xyzw[2], 0.0f, 0.0f, 0.0f);
    SetVert(&q.xyzw[3], 1.0f, y0, z0 + TRAIL_HALFWIDTH);
    FastDrawQuad((undefined4 *)&q, (uint)&m, 1, EffectTexHeaders, 9);
    Spread(&q, 1, 2, 2);
    FastDrawQuad((undefined4 *)&q, (uint)&m, 1, EffectTexHeaders, 9);

    SetVert(&q.xyzw[0], 1.0f, y0, z0 - TRAIL_HALFWIDTH);
    SetVert(&q.xyzw[1], 2.0f, y2, z2 - TRAIL_HALFWIDTH);
    SetVert(&q.xyzw[2], 1.0f, y0, z0 + TRAIL_HALFWIDTH);
    SetVert(&q.xyzw[3], 2.0f, y2, z2 + TRAIL_HALFWIDTH);
    FastDrawQuad((undefined4 *)&q, (uint)&m, 1, EffectTexHeaders, 9);
    Spread(&q, 0, 1, 2);
    FastDrawQuad((undefined4 *)&q, (uint)&m, 1, EffectTexHeaders, 9);

    SetVert(&q.xyzw[0], 2.0f, y2, z2 - TRAIL_HALFWIDTH);
    SetVert(&q.xyzw[1], 3.0f, 0.0f, 0.0f);
    SetVert(&q.xyzw[2], 2.0f, y2, z2 + TRAIL_HALFWIDTH);
    SetVert(&q.xyzw[3], 3.0f, 0.0f, 0.0f);
    FastDrawQuad((undefined4 *)&q, (uint)&m, 1, EffectTexHeaders, 9);
    Spread(&q, 0, 2, 2);
    FastDrawQuad((undefined4 *)&q, (uint)&m, 1, EffectTexHeaders, 9);
}

// 0x00d9bf8 (0x2d0 bytes)
/* 4 rounds of two particles (a big and a small one, drifting to opposite sides) at bone 0 */
void SpawnSceneShipParticles(MobyInstance *moby)
{
    Vec4 pos;
    float vel[4];

    GetBonePosition((int)moby, 0, (float *)&pos);
    for (int i = 0; i < 4; i++) {
        float size = (float)MB_randRangeFloat(0.15f, 0.5f);
        int side = MB_randInt(2) == 0 ? -1 : 1;
        float rot = (float)MB_randRot();
        float elev = (float)MB_randRangeFloat(0.34906584f, 1.5358897f);
        float speed = (float)MB_randRangeFloat(0.05f, 0.2f);
        MB_SphericalToVector(speed * DAT_0071f408, rot, elev, vel);
        pos.x += (float)MB_randRangeSigned(0.0f, 0.15f);
        pos.y += (float)MB_randRangeSigned(0.0f, 0.15f);
        pos.z += (float)MB_randRangeSigned(0.0f, 0.15f);

        PartInstance *p = SpawnPart_53(size * 0.1f, size, 0.009f, (float *)&pos,
                                       (short)(int)(animationSpeed * 60.5f), 0, 0, 0x7f7f2020, 0,
                                       (undefined1)side, (int *)vel);
        if (p) ((u8 *)p)[9] = FastDoubleToInt(4.0f) + 112;
        p = SpawnPart_53(size * 0.07f, size * 0.7f, 0.009f, (float *)&pos,
                         (short)(int)(animationSpeed * 60.5f), 0, 0, 0x7f7f7f7f, 1,
                         (undefined1)-side, (int *)vel);
        if (p) ((u8 *)p)[9] = FastDoubleToInt(4.0f) + 112;
    }
}

// 0x00d9ee8 (0x3f8 bytes)
/* per-level extras for the space cutscenes */
void UpdateSpaceSceneEffects(void)
{
    int i;

    if (Level == Veldin) {
        for (i = 0; i < g_SpaceSceneMobyCnt; i++)
            if (g_SpaceSceneMobys[i]->oClass == VELDIN_SHIP)
                RegisterFuncForMoby((void **)Space_DrawShipEffects, g_SpaceSceneMobys[i]);
    }
    if (Level == Aridia) {
        for (i = 0; i < g_SpaceSceneMobyCnt; i++)
            if (g_SpaceSceneMobys[i]->oClass == 433)
                g_SpaceSceneMobys[i]->modeBits |= DISABLE_Z_WRITE;
    }
    if (Level == Kerwan && g_SceneId == 5 && g_SpaceSceneFrame > (int)(animationSpeed * 900.5f) &&
        g_SpaceSceneFrame < (int)(animationSpeed * 1100.5f) && g_SpaceSceneMobys[3] != 0) {
        MobyInstance *ship = g_SpaceSceneMobys[3];
        for (i = 0; i < 4; i++) {
            Vec4 pos;
            float vel[4] = { 0.0f, 0.0f, 0.0f, 0.0f };
            GetBonePosition((int)ship, i % 2, (float *)&pos);
            float a = (float)MB_randRot();
            float b = (float)MB_randRot();
            float speed = (float)MB_randRangeFloat(g_FrameTime * 0.7f, g_FrameTime * 2.2f);
            MB_SphericalToVector(speed, a, b, vel);
            int life = MB_randRange((int)(animationSpeed * 12.5f), (int)(animationSpeed * 35.5f));
            SpawnPart_22(147000.0f, (float *)&pos, (int *)vel, 0x80808080, 0x808080, 0, life);
        }
    }
    if (Level == Umbris && g_SceneId == 4 && g_SpaceSceneMobys[4] != 0 &&
        g_SpaceSceneMobys[4]->oClass == RED_SHIP)
        RegisterFuncForMoby((void **)Space_DrawShipEffects, g_SpaceSceneMobys[4]);
    if (Level == Oltanis && g_SceneId == 0 && g_SpaceSceneMobys[1] != 0 &&
        g_SpaceSceneFrame >= 28 && g_SpaceSceneFrame < 34) {
        MobyInstance *ship = g_SpaceSceneMobys[1];
        SpawnSceneShipParticles(ship);
        RegisterFuncForMoby((void **)DrawSceneShipEffect, ship);
    }
    if (Level == Quartu && (g_SceneId == 3 || g_SceneId == 4)) {
        for (i = 0; i < g_SpaceSceneMobyCnt; i++) SetMobyLightFromBlender(g_SpaceSceneMobys[i]);
    }
}
