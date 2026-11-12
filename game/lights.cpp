// game/lights.cpp -- dynamic point lights
// STATUS: CLEAN (checked against the asm; local names are mine)
// 9 functions, 0xda2e0-0xdb1e0
//
// Up to 8 point lights. Each light keeps a list of the ties, tfrags and shrubs its sphere
// (radius + POINT_LIGHT_MARGIN) touches, and writes its index into their point_lights masks:
// four 4-bit slots, 0xf = empty, slots kept packed from the low end.
#include <math.h>
#include <stdio.h>
#include "game/lights.h"
#include "game/boot.h"
#include "game/camera.h"
#include "game/loaders.h"
#include "game/mobyfunc.h"
#include "game/tieproc.h"
#include "idol/fastfunc.h"
#include "idol/shrubfunc.h"
#include "idol/tfragfunc.h"
#include "idol/fastinline.h"

#define MAX_POINT_LIGHTS      8
#define POINT_LIGHT_LIST_LEN  512       /* shorts per light in PointLightLists */
#define POINT_LIGHT_MARGIN    8.0f      /* attach margin, and how far a light moves before it re-attaches */
#define POINT_LIGHT_MAX_LOAD  0.8f      /* no new lights while g_PerfLoad is above this */

enum PointLightState {
    POINT_LIGHT_FREE     = 0,
    POINT_LIGHT_CREATED  = 1,           /* allocated; attach lists not built yet */
    POINT_LIGHT_ATTACHED = 2,
};

/* ---- point_lights mask helpers (inlined three times each in the binary) ---- */

/* put light idx into the first free slot; false if all four slots are taken */
static inline bool PointLightMask_Add(ushort *mask, int idx)
{
    ushort m = *mask;
    if (m == 0xffff)                 m = idx | 0xfff0;
    else if ((m & 0xfff0) == 0xfff0) m = (m & 0xff0f) | (idx << 4);
    else if ((m & 0xff00) == 0xff00) m = (m & 0xf0ff) | (idx << 8);
    else if ((m & 0xf000) == 0xf000) m = (m & 0x0fff) | (idx << 12);
    else return false;
    *mask = m;
    return true;
}

/* take light idx out, shifting the slots above it down; *found = false if it was not there */
static inline ushort PointLightMask_Remove(ushort m, int idx, bool *found)
{
    *found = true;
    if ((m & 0x000f) == idx)              return (m >> 4) | 0xf000;
    if ((m & 0x00f0) == (idx << 4))       return ((m >> 4) & 0x0ff0) | (m & 0x000f) | 0xf000;
    if ((m & 0x0f00) == (idx << 8))       return ((m >> 4) & 0x0f00) | (m & 0x00ff) | 0xf000;
    if ((m & 0xf000) == (idx << 12))      return (m & 0x0fff) | 0xf000;
    *found = false;
    return m;
}

static inline bool SphereTouches(const Vec4 *pos, float reach, const BSphere *b)
{
    float dx = pos->x - b->x, dy = pos->y - b->y, dz = pos->z - b->z;
    return sqrtf(dz * dz + dx * dx + dy * dy) < reach + b->rad;
}

/* both constructors inline this: first free slot, or MAX_POINT_LIGHTS */
static inline int FindFreePointLight(void)
{
    int i;
    for (i = 0; i < MAX_POINT_LIGHTS; i++)
        if (PointLightData[i].state == POINT_LIGHT_FREE) break;
    return i;
}

static inline void InitPointLightData(int i)
{
    PL_Data *pl = &PointLightData[i];
    FastMemSetZero(pl, sizeof(PL_Data));
    pl->state = POINT_LIGHT_CREATED;
    pl->list = PointLightLists[i];
}

// 0x00da2e0 (0x14 bytes)
void SECTION_HEADER_LIGHTS(void)
{
    DAT_007246f4 = 0x10000;
}

// 0x00da2f8 (0x8 bytes)
undefined8 STUB_000da2f8_RET_0(...)
{
    return 0;
}

// 0x00da308 (0x1a4 bytes)
/* colour as packed 0x00BBGGRR, 0x80 = 1.0 */
int CreatePointLight3(Vec4 *pos, float radius, float intensity, u32 rgb)
{
    if (g_PerfLoad > POINT_LIGHT_MAX_LOAD) return -1;
    int i = FindFreePointLight();
    if (i == MAX_POINT_LIGHTS) return -1;

    PointLight *light = &PointLights[i];
    light->pos.x = pos->x;
    light->pos.y = pos->y;
    light->pos.z = pos->z;
    light->pos.w = radius;
    light->color.x = (float)(FastIntToDouble(rgb & 0xff) * (1.0f / 128.0f));
    light->color.y = (float)(FastIntToDouble((rgb >> 8) & 0xff) * (1.0f / 128.0f));
    light->color.z = (float)(FastIntToDouble((rgb >> 16) & 0xff) * (1.0f / 128.0f));
    light->color.w = intensity;
    InitPointLightData(i);
    return i;
}

// 0x00da4ac (0x14c bytes)
int CreatePointLight2(Vec4 *pos, float radius, float intensity, float r, float g, float b)
{
    if (g_PerfLoad > POINT_LIGHT_MAX_LOAD) return -1;
    int i = FindFreePointLight();
    if (i == MAX_POINT_LIGHTS) return -1;

    PointLight *light = &PointLights[i];
    light->pos.x = pos->x;
    light->pos.y = pos->y;
    light->pos.z = pos->z;
    light->pos.w = radius;
    light->color.x = r;
    light->color.y = g;
    light->color.z = b;
    light->color.w = intensity;
    InitPointLightData(i);
    return i;
}

// 0x00da5f8 (0x3f0 bytes)
/* take light idx off everything it was attached to */
void DetachPointLight(int idx)
{
    PL_Data *pl = &PointLightData[idx];
    bool found;

    for (short *p = pl->list + pl->tieOffset, *end = p + pl->tieCnt; p != end; p++) {
        TieInstance *tie = &g_TieInstance[*p];
        ushort m = PointLightMask_Remove(tie->point_lights, idx, &found);
        if (!found) printf("screwed up point light on tie\n");
        if (m == 0xffff) tie->dir_lights_upd = 1;
        tie->point_lights = m;
    }
    pl->tieOffset = 0;
    pl->tieCnt = 0;

    for (short *p = pl->list + pl->tfragOffset, *end = p + pl->tfragCnt; p != end; p++) {
        Tfrag *tfrag = &Tfrags[*p];
        ushort m = PointLightMask_Remove(tfrag->point_lights, idx, &found);
        if (!found) printf("screwed up point light on tfrag\n");
        if (m == 0xffff) tfrag->dir_lights_upd = 1;
        tfrag->point_lights = m;
    }
    pl->tfragOffset = 0;
    pl->tfragCnt = 0;

    for (short *p = pl->list + pl->shrubOffset, *end = p + pl->shrubCnt; p != end; p++) {
        ShrubInstance *shrub = &g_ShrubInstance[*p];
        ushort m = PointLightMask_Remove(shrub->point_lights, idx, &found);
        if (!found) printf("screwed up point light on shrub\n");
        if (m == 0xffff) shrub->dir_lights_upd = 1;
        shrub->point_lights = m;
    }
    pl->shrubOffset = 0;
    pl->shrubCnt = 0;
}

// 0x00da9e8 (0x74 bytes)
void DeletePointLight(int idx)
{
    DetachPointLight(idx);
    FastMemSetZero(&PointLights[idx], sizeof(PointLight));
    FastMemSetZero(&PointLightData[idx], sizeof(PL_Data));
}

// 0x00daa60 (0x4f8 bytes)
/* build light idx's lists: every tie, tfrag and shrub its sphere touches (Ghidra name; it attaches) */
void CreatePointLight(int idx)
{
    PointLight *light = &PointLights[idx];
    PL_Data *pl = &PointLightData[idx];
    short *list = pl->list;
    short *end = list + POINT_LIGHT_LIST_LEN;
    short *out = list;
    float reach = light->pos.w + POINT_LIGHT_MARGIN;

    if (out < end) {
        pl->tieOffset = 0;
        short n = 0;
        for (TieInstance *tie = g_TieInstance; tie != TieInstanceEnd; tie++, n++) {
            if (!SphereTouches(&light->pos, reach, &tie->bSphere)) continue;
            *out = n;
            if (PointLightMask_Add(&tie->point_lights, idx)) out++;
            if (out >= end) break;
        }
        pl->tieCnt = out - pl->list;
    }
    if (out < end) {
        pl->tfragOffset = out - pl->list;
        for (int n = 0; n < (int)TfragsCnt; n++) {
            Tfrag *tfrag = &Tfrags[n];
            if (!SphereTouches(&light->pos, reach, &tfrag->bSphere)) continue;
            *out = n;
            if (PointLightMask_Add(&tfrag->point_lights, idx)) out++;
            if (out >= end) break;
        }
        pl->tfragCnt = (out - pl->list) - pl->tfragOffset;
    }
    if (out < end) {
        pl->shrubOffset = out - pl->list;
        short n = 0;
        for (ShrubInstance *shrub = g_ShrubInstance; shrub != ShrubInstanceEnd; shrub++, n++) {
            if (!SphereTouches(&light->pos, reach, &shrub->bSphere)) continue;
            *out = n;
            if (PointLightMask_Add(&shrub->point_lights, idx)) out++;
            if (out >= end) break;
        }
        pl->shrubCnt = (out - pl->list) - pl->shrubOffset;
    }
}

// 0x00daf58 (0x34 bytes)
void RefreshPointLight(int idx)
{
    DetachPointLight(idx);
    CreatePointLight(idx);
}

// 0x00dafb8 (0x228 bytes)
void UpdatePointLights(void)
{
    /* camera-relative directional light: grey, from above, orbiting with the camera's yaw */
    g_CamLightColor.x = 0.8f;
    g_CamLightColor.y = 0.8f;
    g_CamLightColor.z = 0.8f;
    g_CamLightColor.w = -0.3f;
    float yaw = (float)FastWrapRot(GameCamera.rot.radius, -0.8f);
    g_CamLightDir.x = FastCosInline(yaw) * 0.866f;
    g_CamLightDir.y = FastSinInline(yaw) * 0.866f;
    g_CamLightDir.z = -0.5f;
    g_CamLightDir.w = 0.0f;

    /* re-attach lights that moved more than POINT_LIGHT_MARGIN since their lists were built */
    for (int i = 0; i < MAX_POINT_LIGHTS; i++) {
        PL_Data *pl = &PointLightData[i];
        int state = pl->state;
        if (state == POINT_LIGHT_FREE) continue;
        PointLight *light = &PointLights[i];
        float dx = light->pos.x - pl->lastPos.x;
        float dy = light->pos.y - pl->lastPos.y;
        float dz = light->pos.z - pl->lastPos.z;
        if (sqrtf(dz * dz + dx * dx + dy * dy) <= POINT_LIGHT_MARGIN) continue;
        pl->lastPos = light->pos;
        if (state == POINT_LIGHT_CREATED) {
            CreatePointLight(i);
            pl->state = POINT_LIGHT_ATTACHED;
        } else if (state == POINT_LIGHT_ATTACHED) {
            DetachPointLight(i);
            CreatePointLight(i);
        }
    }
}
