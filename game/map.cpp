#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "game/map.h"
#include "game/collproc.h"
#include "game/crt0.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/memcard.h"
#include "game/mission.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/pause.h"
#include "game/store.h"
#include "game/update/moby1118.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"
#include "idol/idol.h"
#include "idol/idol_draw.h"
#include "idol/idoldraw_ps3.h"
#include "idol/mUnk.h"
#include "sdk/linked.h"
#include "idol/fastinline.h"
#include <cell/gcm/gcm_macros.h>
#include <cell/gcm/gcm_enum.h>
// game/map.cpp -- reconstructed from NPEA00385 EBOOT
// 78 functions, 0xe1b0c-0xe64fc: the pause menu map. Loading a level's map image and reveal mask,
// the map cache of the pause menu (5 slots, prefetched in galactic map order), revealing the
// map around Ratchet, zoom and pan, and the per-level checks for which map regions show.

#define MAP_CACHE_SLOTS 5
#define MAP_MAPOMATIC   0x100   /* added to a map id for the Map-O-Matic version */

/* an item's price in the weapon info table (0x737d30, 0x18 bytes an item; see vendor.cpp) */
static inline int VendorAmmoInfoPrice(int item)
{
    return *(int *)((u8 *)&DAT_00737d30 + item * 0x18);
}

// 0x00e1b0c (0x14 bytes)
void SECTION_HEADER_MAP(void)
{
    g_MapSectionWord = 0x10000;
}

// 0x00e1b28 (0x400 bytes)
// strings: 0065290c: 'rc1/ps3data/global/maps/maps_mm[%d].ps3' | 00652934: 'rc1/ps3data/global/maps/maps[%d].ps3'
/* Resets the maps (zoom 0.65, Ratchet's markers to their defaults), works out every level's
   world -> map transform from its bounds, and loads this level's map (the Map-O-Matic one when
   owned) into g_NpcBuffer. Its reveal mask comes from the save (or is cleared, the map loaded a
   second time). Then builds the reveal disc: a radius-16 circle of bits around (15.5, 15.5).
   Levels past 18 use level 0. */
void Map_LoadPlanetMap(void)
{
    char path[64];
    char pathAgain[64];

    g_MapUnkA204d0 = 1;

    for (int i = 0; i < 20; i++) {
        g_MapZoom[i] = 0.65f;
        g_MapHeroU[i] = g_MapDefaultHeroPos[i][0];
        g_MapHeroV[i] = g_MapDefaultHeroPos[i][1];
    }

    g_MapFileId = -1;

    int level = (int)Level > 18 ? 0 : (int)Level;

    g_SelectedLevel = level;

    for (int i = 0; i < 19; i++) {
        MapBounds *bounds = &g_MapWorldBounds[i];
        float scaleU = (bounds->mapU0 - bounds->mapU1) / (bounds->worldX0 - bounds->worldX1);
        float scaleV = (bounds->mapV0 - bounds->mapV1) / (bounds->worldY0 - bounds->worldY1);

        g_MapWorldToMap[i].scaleU = scaleU;
        g_MapWorldToMap[i].offsetU = bounds->mapU0 - scaleU * bounds->worldX0;
        g_MapWorldToMap[i].scaleV = scaleV;
        g_MapWorldToMap[i].offsetV = bounds->mapV0 - scaleV * bounds->worldY0;
    }

    bool plain = UnlockableItems.mapOMatic == 0;

    if (plain) {
        sprintf(path, "rc1/ps3data/global/maps/maps[%d].ps3", level);
    }
    else {
        sprintf(path, "rc1/ps3data/global/maps/maps_mm[%d].ps3", level);
    }

    g_MapIsMapOMatic = !plain;

    int size = GetFileSize(path);

    if (size == 0) {
        g_MapUnkA204c8 = 0;
        g_MapLoaded = 1;
        g_MapUnkA204c0 = 0;
        g_MapUnkA204c4 = 0;
        return;
    }

    g_MapLoaded = 1;
    g_MapFileSize = ((size + 0x7ff) >> 11) << 7;
    LoadAssetFromFile(path, (void *)(uintptr_t)g_NpcBuffer, 0x90000);

    if (g_MapRevealMasks[g_SelectedLevel][0] == 0) {
        plain = UnlockableItems.mapOMatic == 0;

        if (plain) {
            sprintf(pathAgain, "rc1/ps3data/global/maps/maps[%d].ps3", g_SelectedLevel);
        }
        else {
            sprintf(pathAgain, "rc1/ps3data/global/maps/maps_mm[%d].ps3", g_SelectedLevel);
        }

        g_MapIsMapOMatic = !plain;
        LoadAssetFromFile(pathAgain, (void *)(uintptr_t)g_NpcBuffer, 0x90000);
        memset(g_MapRevealMask, 0, 0x8000);
    }
    else {
        memcpy(g_MapRevealMask, g_MapRevealMasks[g_SelectedLevel], 0x8000);
    }

    /* the disc, row by row; the distances are worked out in vector registers */
    VecF center = VecSplatF(15.5f);
    VecF radiusSq = VecSplatF(256.0f);
    vector signed int row = vec_splat_s32(0);
    vector signed int one = vec_splat_s32(1);

    for (int y = 0; y < 32; y++) {
        VecF dy = vec_sub(center, vec_ctf(row, 0));
        VecF rowSq = vec_madd(dy, dy, VecNegZero());
        vector signed int column = vec_splat_s32(0);

        for (int x = 0; x < 32; x++) {
            VecF dx = vec_sub(center, vec_ctf(column, 0));
            VecF distSq = vec_madd(dx, dx, rowSq);

            if (!vec_all_gt(distSq, radiusSq)) {
                g_MapRevealDisc[y][x / 8] |= 1 << (x - (x / 8) * 8);
            }

            column = vec_add(column, one);
        }

        row = vec_add(row, one);
    }
}

// 0x00e1f28 (0x164 bytes)
/* The pause menu opened: the map memory is carved from the pause allocators (cache slot 1 holds
   the shown map, slot 2 a prefetch, slots 0, 3 and 4 unused), and the level's map is copied in
   from the buffer store (or loaded again when Map-O-Matic was bought since). Was
   Map_OnPauseMenuOpen. */
void Map_OnPauseMenuOpen(void)
{
    UpdateMissionDisplay(g_SelectedLevel, 1);

    g_MapCacheBuf[1] = g_PauseAllocTop + 0x9a800;
    g_MapImageBuf = g_PauseAllocTop;
    g_PauseAllocTop += 0x12a800;
    g_MapCacheBuf[0] = 0;
    g_MapCacheBuf[2] = g_PauseAllocTop2;
    g_PauseAllocTop2 += 0x90000;
    g_MapCacheBuf[3] = 0;
    g_MapCacheBuf[4] = 0;
    g_MapCacheId[0] = -1;
    g_MapCacheId[1] = ~Veldin;
    g_MapCacheId[2] = -1;
    g_MapCacheId[3] = -1;
    g_MapCacheId[4] = -1;
    g_MapPinnedSlot = -1;

    if (g_MapFileId != -1 && g_MapIsMapOMatic == 0 && UnlockableItems.mapOMatic != 0) {
        Map_LoadPlanetMap();
        return;
    }

    if (g_MapFileId == -1) {
        g_MapAvailable = 0;
        return;
    }

    g_MapCacheSize[1] = g_MapFileSize;
    ReadIndexedBuffer(g_MapCacheBuf[1], g_MapFileId, 0, g_MapFileSize);
    g_MapCacheId[1] = Level;

    if (UnlockableItems.mapOMatic != 0) {
        g_MapCacheId[1] = Level + MAP_MAPOMATIC;
    }

    g_MapAvailable = 1;
    g_MapCurIndex = -2;
}

// 0x00e208c (0x80 bytes)
/* a filled cache slot holding nothing, searched from slot 4 down (or from slot 0 up) */
int Map_FindFreeCacheSlot(int fromTop)
{
    for (int i = 0; i <= 4; i++) {
        int slot = (u8)fromTop == 0 ? i : 4 - i;

        if (g_MapCacheBuf[slot] != NULL && g_MapCacheId[slot] == -1) {
            return slot;
        }
    }

    return -1;
}

// 0x00e210c (0x84 bytes)
/* moves slot src's map into slot dst */
void Map_MoveCacheSlot(int dst, int src)
{
    FastMemCopy(g_MapCacheBuf[dst], g_MapCacheBuf[src], g_MapCacheSize[src] << 4);

    int size = g_MapCacheSize[src];

    g_MapCacheId[dst] = g_MapCacheId[src];
    g_MapCacheSize[dst] = size;
    g_MapCacheId[src] = -1;
}

// 0x00e2190 (0x110 bytes)
/* A free slot (from slot 4 down). If that is slot 0, the first other slot holding a map not
   flagged 0x1000 is moved into slot 0 and its slot returned instead. */
int Map_GetFreeCacheSlotCompact(void)
{
    int slot = -1;

    for (int i = 0; i <= 4; i++) {
        if (g_MapCacheBuf[4 - i] != NULL && g_MapCacheId[4 - i] == -1) {
            slot = 4 - i;
            break;
        }
    }

    if (slot == -1) {
        return -1;
    }

    if (slot != 0) {
        return slot;
    }

    int from = 1;

    while (from < MAP_CACHE_SLOTS) {
        if ((g_MapCacheId[from] & 0x1000) == 0 && g_MapCacheBuf[from] != NULL) {
            break;
        }

        from++;
    }

    FastMemCopy(g_MapCacheBuf[0], g_MapCacheBuf[from], g_MapCacheSize[from] << 4);
    g_MapCacheId[0] = g_MapCacheId[from];
    g_MapCacheSize[0] = g_MapCacheSize[from];
    g_MapCacheId[from] = -1;

    return from;
}

// 0x00e22a0 (0x54 bytes)
/* the slot holding map id, or -1 */
int Map_FindCacheSlotById(int id)
{
    for (int i = 0; i <= 4; i++) {
        if (g_MapCacheBuf[i] != NULL && g_MapCacheId[i] == id) {
            return i;
        }
    }

    return -1;
}

/* the cache slot holding map id (inlined: Map_FindCacheSlotById) */
static inline int MapCacheSlot(int id)
{
    for (int i = 0; i < MAP_CACHE_SLOTS; i++) {
        if (g_MapCacheBuf[i] != NULL && g_MapCacheId[i] == id) {
            return i;
        }
    }

    return -1;
}

// 0x00e22f4 (0x1b8 bytes)
/* The next map to load into the cache: the selected level's, else its neighbours in galactic map
   order (+1, -1, +2, -2, +3, -3), else -1 */
int Map_GetNextMapToPrefetch(void)
{
    int variant = UnlockableItems.mapOMatic == 0 ? 0 : MAP_MAPOMATIC;
    int id = g_SelectedLevel + variant;

    if (MapCacheSlot(id) == -1) {
        return id;
    }

    int index = 0;

    if (g_SelectedLevel < 20 && ptr_GalacticMap[0] != g_SelectedLevel) {
        while (ptr_GalacticMap[++index] != g_SelectedLevel) {
        }
    }

    int step = 1;

    for (;;) {
        unsigned int at = index + step;

        if (at < 20 && ptr_GalacticMap[at] != 0) {
            id = ptr_GalacticMap[at] + variant;

            if (MapCacheSlot(id) == -1) {
                return id;
            }
        }

        /* 1, -1, 2, -2, 3, -3 */
        step = step > 0 ? -step : 1 - step;

        if (step == 4) {
            return -1;
        }
    }
}

// 0x00e24ac (0x4c bytes)
/* level's place in galactic map order, or -1 */
int Map_GetGalacticMapIndex(int level)
{
    for (int i = 0; i < 20 && ptr_GalacticMap[i] != 0; i++) {
        if (ptr_GalacticMap[i] == level) {
            return i;
        }
    }

    return -1;
}

/* inlined Map_GetGalacticMapIndex */
static inline int MapGalacticIndex(int level)
{
    for (int i = 0; i < 20 && ptr_GalacticMap[i] != 0; i++) {
        if (ptr_GalacticMap[i] == level) {
            return i;
        }
    }

    return -1;
}

// 0x00e24f8 (0x20c bytes)
/* The cache slot to load the next map into. On level 0 any free slot (from slot 4 down). Else,
   if the selected level is on the galactic map: a free slot, or the one whose map is farthest
   from it in galactic order (emptied). Off the galactic map: slot 1. g_MapPinnedSlot is never
   picked. */
int Map_ChooseCacheSlotToEvict(void)
{
    int farthest = 0;
    int bestSlot = -1;

    if (g_SelectedLevel == 0) {
        for (int slot = 4; slot >= 0; slot--) {
            if (slot != g_MapPinnedSlot && g_MapCacheBuf[slot] != NULL && g_MapCacheId[slot] == -1) {
                return slot;
            }
        }
    }

    int index = MapGalacticIndex(g_SelectedLevel);

    if (index == -1) {
        return 1;
    }

    for (int slot = 0; slot < MAP_CACHE_SLOTS; slot++) {
        if (slot == g_MapPinnedSlot || g_MapCacheBuf[slot] == NULL) {
            continue;
        }

        int id = g_MapCacheId[slot];

        if (id == -1) {
            return slot;
        }

        int distance = abs(MapGalacticIndex(id & 0xff) - index);

        if (farthest < distance) {
            bestSlot = slot;
            farthest = distance;
        }
    }

    int slot = bestSlot == -1 ? 0 : bestSlot;

    g_MapCacheId[slot] = -1;

    return slot;
}

// 0x00e2704 (0x4 bytes)
void STUB_000e2704(...)
{
}

// 0x00e2708 (0xb4 bytes)
/* out = a where mask has a bit set, else b, byte by byte over the 256x256 map (mask 1 bit a byte) */
void Map_MergeByMask(char *out, char *a, char *b, char *mask)
{
    for (int i = 0; i < 0x8000; i++, mask++) {
        unsigned int bit = 1;

        for (int j = 0; j < 8; j++) {
            *out++ = (*(u8 *)mask & bit) == 0 ? *b : *a;
            a++;
            b++;
            bit <<= 1;
        }
    }
}

// 0x00e27bc (0x78 bytes)
/* the reveal mask as a byte per pixel: 0xff revealed, 0 hidden */
void Map_ExpandRevealMask(char *out, char *mask)
{
    for (int i = 0; i < 0x8000; i++, mask++) {
        unsigned int bit = 1;

        for (int j = 0; j < 8; j++) {
            *out++ = (*(u8 *)mask & bit) == 0 ? 0 : -1;
            bit <<= 1;
        }
    }
}

// 0x00e2848 (0x2e0 bytes)
/* The map's controls: R3 or SELECT closes it (returns 1). Otherwise, on a shown map, the left
   stick's y zooms (0.65..4) and the right stick pans, slower when zoomed in; Ratchet's marker
   position is what pans (clamped to 0..0x10000000, 16.16). The arithmetic runs in vector
   registers on single values. */
int Map_UpdateZoomPan(void)
{
    int index = g_MapCurIndex;
    VecF panX = VecLoadUnalignedF(&g_Pad.sticks.z);
    VecF panY = VecLoadUnalignedF(&g_Pad.sticks.w);

    if (g_Pad.buttonsPressedThisFrame & (R3 | SELECT)) {
        return 1;
    }

    if (g_MapAvailable == 0 || g_MapCurIndex < 0) {
        return 0;
    }

    g_MapZoom[g_MapCurIndex] = g_MapZoom[g_MapCurIndex] * -(g_Pad.sticks.y * 0.02f - 1.0f);

    if (g_MapZoom[index] > 4.0f) {
        g_MapZoom[index] = 4.0f;
        index = g_MapCurIndex;
    }

    if (g_MapZoom[index] < 0.65f) {
        g_MapZoom[index] = 0.65f;
        index = g_MapCurIndex;
    }

    /* the pan step: 3e6 / zoom */
    VecF step = vec_madd(VecRecip(VecLoadUnalignedF(&g_MapZoom[index])), VecSplatF(3e6f), VecNegZero());
    vector signed int moveU = vec_cts(vec_madd(panX, step, VecNegZero()), 0);
    vector signed int moveV = vec_cts(vec_madd(panY, step, VecNegZero()), 0);
    vector signed int u = vec_add(VecLoadUnalignedS(&g_MapHeroU[index]), moveU);
    vector signed int v = vec_add(VecLoadUnalignedS(&g_MapHeroV[g_MapCurIndex]), moveV);

    vec_ste(vec_splat(u, 0), 0, &g_MapHeroU[index]);
    vec_ste(vec_splat(v, 0), 0, &g_MapHeroV[g_MapCurIndex]);

    /* U into 0..0x10000000 (vector), V the same (scalar) */
    int at = g_MapCurIndex;
    vector signed int maxU = (vector signed int)VecSplatU(0x10000000);

    u = VecLoadUnalignedS(&g_MapHeroU[at]);
    u = vec_andc(u, (vector signed int)vec_cmpgt(vec_splat_s32(0), u));
    vec_ste(vec_splat(u, 0), 0, &g_MapHeroU[at]);
    u = VecLoadUnalignedS(&g_MapHeroU[at]);
    u = vec_sel(u, maxU, vec_cmpgt(u, maxU));
    vec_ste(vec_splat(u, 0), 0, &g_MapHeroU[at]);

    int heroV = g_MapHeroV[at];

    g_MapHeroV[at] = heroV < 0 ? 0 : heroV;
    heroV = g_MapHeroV[at];
    g_MapHeroV[at] = heroV > 0x10000000 ? 0x10000000 : heroV;

    return 0;
}

// 0x00e2b38 (0xfc bytes)
/* A world position on level's map, 0..1 (map pixels / 512). Map ids of 100 and up are the
   alternate maps (g_MapAlt); ~Veldin means the current level; out of range uses level 0. Level 6's
   alternate map is turned a quarter. */
void Map_WorldToMapCoords(float x, float y, float *outU, float *outV, int level)
{
    LevelId id = (LevelId)(level - 100 < 0 ? level : level - 100);

    if (id == ~Veldin) {
        id = Level;
    }

    int index = (int)id < 0 ? 0 : (int)id;

    index = index > 18 ? 0 : index;

    if (index == 6 && level > 99) {
        *outU = (g_MapWorldToMap[6].scaleV * y + 1053.0f) * 0.001953125f;
        *outV = -(g_MapWorldToMap[6].scaleU * x - 740.0f) * 0.001953125f;
    }
    else {
        *outU = (g_MapWorldToMap[index].scaleU * x + g_MapWorldToMap[index].offsetU) * 0.001953125f;
        *outV = (g_MapWorldToMap[index].scaleV * y + g_MapWorldToMap[index].offsetV) * 0.001953125f;
    }
}

// 0x00e2c34 (0x194 bytes)
// strings: 00652964: 'error'
/* icon's label text into out; "%b" in it becomes the price of the icon's item (unk0c), any other
   % code "error" */
void Map_GetIconLabel(int icon, char *out)
{
    char number[16];
    MapIcon *entry = &g_MapIcons[icon];
    const char *text = help_msg_string_by_index((StringId)entry->label);

    if (text == NULL) {
        return;
    }

    while (*text != '%' && *text != 0) {
        *out++ = *text++;
    }

    if (*text == 0) {
        *out = 0;
        return;
    }

    if (text[1] == 'b') {
        sprintf(number, "%d", VendorAmmoInfoPrice(entry->unk0c));
    }
    else {
        sprintf(number, "error");
    }

    for (const char *p = number; *p != 0; p++) {
        *out++ = *p;
    }

    for (text += 2; *text != 0; text++) {
        *out++ = *text;
    }

    *out = 0;
}

/* one HUD vertex: a float texture coordinate (attribute 8) and a float position */
static inline void MapEmit(u32 word)
{
    *HUD_Pass->command++ = (RsxCmd)word;
}

static inline void MapVertexF(float texU, float texV, float posX, float posY)
{
    MapEmit(CELL_GCM_METHOD(CELL_GCM_NV4097_SET_VERTEX_DATA2F_M + 1 * 8, 2));
    MapEmit(*(u32 *)&texU);
    MapEmit(*(u32 *)&texV);
    MapEmit(CELL_GCM_METHOD(CELL_GCM_NV4097_SET_VERTEX_DATA2F_M, 2));
    MapEmit(*(u32 *)&posX);
    MapEmit(*(u32 *)&posY);
}

/* an entry of g_MapIconSource */
struct MapSourceDot {
    float x;
    float y;
    int shown;               /* -1 = drawn */
    u32 color;
};

#define MAP_ICON_HIDDEN      0x0001
#define MAP_ICON_NO_PUSH     0x0002   /* not moved apart from the others */
#define MAP_ICON_END         0x0004
#define MAP_ICON_LABEL       0x0010
#define MAP_ICON_SHADED      0x0040   /* a dark box behind it */
#define MAP_ICON_BIG         0x0080   /* 1.5x */
#define MAP_ICON_ROTATED     0x0100   /* drawn turned by rot */
#define MAP_ICON_ZOOMED      0x0200   /* scales with the map zoom */
#define MAP_ICON_SIZE_B      0x0400
#define MAP_ICON_SIZE_A      0x0800
#define MAP_ICON_SIZE_C      0x1000

/* icon i shows: visible, has an icon, and none of hideMask */
static inline bool MapIconShown(int i, int hideMask)
{
    MapIcon *icon = &g_MapIcons[i];

    return icon->visible != 0 && icon->frame != 0 && (icon->flags & hideMask) == 0;
}

// 0x00e2e10 (0x1838 bytes)
// strings: 0065296c: 'No Map Available'
/* The pause map. Works in 1/16 pixels, the map 512 wide at zoom 1 (8192) around Ratchet's marker
   (mirrored in x by the mirror cheat). Draws the map texture three times its size (it wraps) then
   the map through the reveal mask (fragment program 14, units: the mask, two textures of the map
   file), darkens the marked cells, then places the icons: each one's box (icon size x scale) is
   pushed apart from every later box it overlaps along the smallest overlap, half each. Then the
   icons, their shaded boxes and labels, Ratchet's marker on his own level, and the
   g_MapIconSource dots. The arithmetic of the setup runs in vector registers holding one value. */
void DrawMapFrame(void)
{
    if (g_MapAvailable == 0) {
        STUB_0006d704(0);
        DebugFontPrintCenter(0x100, g_FrameBufHeight >> 1, (int)0x80909090, (char *)"No Map Available");
        STUB_0006d708();
        return;
    }

    if (g_MapCurIndex < 0) {
        return;
    }

    STUB_0006d704(0);

    int index = g_MapCurIndex;
    float zoom = g_MapZoom[index];
    int mirror = Cheats[4] == 0 ? 1 : -1;
    int heroU = (int)(zoom * (float)(g_MapHeroU[index] >> 15));
    int heroV = (int)(zoom * (float)(g_MapHeroV[index] >> 15));
    int size = (int)(zoom * 8192.0f);

    /* the map's rectangle on the screen, 1/16 pixels, centred on Ratchet's marker */
    int left = 0x1000 - heroU * mirror;
    int right = left + size * mirror;
    int top = 0x800 - heroV;
    int bottom = top + size;

    /* the map texture three times over, wrapping */
    int tex = GetIconFrameTex(0xe999, index);
    u32 header[9];
    u32 *src = (u32 *)((u8 *)(uintptr_t)EffectTexHeaders + ((int *)(uintptr_t)TexturePointerArray)[tex] * 0x24);

    for (int i = 0; i < 9; i++) {
        header[i] = src[i];
    }

    header[2] = 0x10101;

    float leftF = (float)left;
    float topF = (float)top;
    int left16 = (int)(leftF * 0.0625f);
    int top16 = (int)(topF * 0.0625f);
    int right16 = (int)((float)right * 0.0625f);
    int bottom16 = (int)((float)bottom * 0.0625f);
    int width16 = right16 - left16;
    int height16 = bottom16 - top16;

    Hud_DrawTexQuadF((float)(left16 - width16), (float)(top16 - height16), (float)(right16 + width16), (float)(bottom16 + height16), -1024.0f, -1024.0f, 2048.0f, 2048.0f, header, 0x80);

    /* the map through the reveal mask */
    u32 idol = g_pIdolDrawBase;
    int mapTex = g_NpcBuffer + *(int *)(g_NpcBuffer + 8);

    idol_draw::BindFragmentProgram(idol, (int)(uintptr_t)HUD_Pass, 14);
    idol_draw::SetTextureUnitRegs((int)(uintptr_t)HUD_Pass, 0, (int *)&DAT_00a207e8);
    idol_draw::SetTextureUnitRegs((int)(uintptr_t)HUD_Pass, 1, (int *)(uintptr_t)(mapTex + 0x6c));
    idol_draw::SetTextureUnitRegs((int)(uintptr_t)HUD_Pass, 2, (int *)(uintptr_t)(mapTex + 0x90));
    idol_draw::ResetPassState(HUD_Pass);

    MapEmit(CELL_GCM_METHOD(CELL_GCM_NV4097_SET_VERTEX_DATA4UB_M + 2 * 4, 1));
    MapEmit(0x80808080);
    /* (three words to method 0x1714, all zero) */
    MapEmit(0x400c1714);
    MapEmit(0);
    MapEmit(0);
    MapEmit(0);
    MapEmit(CELL_GCM_METHOD(CELL_GCM_NV4097_SET_BEGIN_END, 1));
    MapEmit(CELL_GCM_PRIMITIVE_QUADS);
    MapVertexF(0.0f, 0.0f, (float)left16, (float)top16);
    MapVertexF(0.0f, 1024.0f, (float)left16, (float)bottom16);
    MapVertexF(1024.0f, 1024.0f, (float)right16, (float)bottom16);
    MapVertexF(1024.0f, 0.0f, (float)right16, (float)top16);
    MapEmit(CELL_GCM_METHOD(CELL_GCM_NV4097_SET_BEGIN_END, 1));
    MapEmit(0);

    idol_draw::BindFragmentProgram(idol, (int)(uintptr_t)HUD_Pass, 12);
    SetGSReg(0x16, idol_draw::Blend(1, 5, 0x60, 3, 0, 0, 0, 0));

    int mapW = right - left;
    int mapH = bottom - top;

    /* the marked cells of the 16x16 grid, darkened */
    if (g_MapCellMarksOn != 0 && g_MapUnkA204c8 != 0) {
        for (int i = 0; i < 8; i++) {
            int cell = g_MapCellMarks[i][0];

            if (cell < 0) {
                continue;
            }

            int x = cell % 16 * mapW;
            int y = cell / 16 * mapH;

            DrawFlatOverlay(x / 16 + left, y / 16 + top, (x + mapW) / 16 + left, (y + mapH) / 16 + top, STUB_00502f74_RET_0(0, 0, 0, 0x20, 0), 1);
        }
    }

    MapIcon *icons = g_MapIcons;
    int *boxes = (int *)g_ScratchBuf;   /* per icon: x0, y0, x1, y1 */

    if (icons != NULL) {
        float iconScale = (g_MapZoom[g_MapCurIndex] * 2.0f + 5.0f) * (1.0f / 13.0f);

        /* each icon's box: from its spot back (up and left) by its size */
        if (!(icons[0].flags & MAP_ICON_END)) {
            for (int i = 0; !(g_MapIcons[i].flags & MAP_ICON_END); i++) {
                MapIcon *icon = &g_MapIcons[i];

                if (!MapIconShown(i, MAP_ICON_HIDDEN)) {
                    continue;
                }

                float scale = icon->flags & MAP_ICON_BIG ? 1.5f : 1.0f;
                int frameTex = GetIconFrameTex(icon->frame, icon->frameSub);
                u32 texSize = *(u32 *)((u8 *)(uintptr_t)EffectTexHeaders + ((int *)(uintptr_t)TexturePointerArray)[frameTex] * 0x24 + 0x18);
                float texW = (float)(texSize >> 16);
                float texH = (float)(texSize & 0xffff);
                float u = g_MapIcons[i].u * (float)mapW + leftF;
                float v = g_MapIcons[i].v * (float)mapH + topF;
                float z = g_MapIcons[i].flags & MAP_ICON_ZOOMED ? g_MapZoom[g_MapCurIndex] : iconScale;

                z = z * scale;

                int x0 = (int)(u - z * texW);
                int y0 = (int)(v - z * texH);

                boxes[i * 4 + 0] = x0;
                boxes[i * 4 + 1] = y0;
                boxes[i * 4 + 2] = (int)(z * texW + (float)x0);
                boxes[i * 4 + 3] = (int)(z * texH + (float)y0);
            }
        }

        /* push overlapping boxes apart */
        if (!(g_MapIcons[1].flags & MAP_ICON_END)) {
            for (int i = 0; !(g_MapIcons[i + 1].flags & MAP_ICON_END); i++) {
                if (!MapIconShown(i, MAP_ICON_HIDDEN | MAP_ICON_NO_PUSH)) {
                    continue;
                }

                int *a = &boxes[i * 4];

                for (int j = i + 1; !(g_MapIcons[j].flags & MAP_ICON_END); j++) {
                    int *b = &boxes[j * 4];
                    int overlapX1 = b[2] - a[0];
                    int overlapX2 = a[2] - b[0];
                    int overlapY1 = b[3] - a[1];
                    int overlapY2 = a[3] - b[1];

                    if (overlapX1 <= 0 || overlapX2 <= 0 || overlapY1 <= 0 || overlapY2 <= 0) {
                        continue;
                    }

                    if (!MapIconShown(j, MAP_ICON_HIDDEN | MAP_ICON_NO_PUSH)) {
                        continue;
                    }

                    int moveAX;
                    int moveAY;
                    int moveBX;
                    int moveBY;

                    if (overlapX1 <= overlapX2 && overlapX1 <= overlapY1 && overlapX1 <= overlapY2) {
                        moveAX = overlapX1 >> 1;
                        moveBX = moveAX - overlapX1;
                        moveAY = 0;
                        moveBY = 0;
                    }
                    else if (overlapX2 <= overlapY1 && overlapX2 <= overlapY2) {
                        moveBX = overlapX2 >> 1;
                        moveAX = moveBX - overlapX2;
                        moveAY = 0;
                        moveBY = 0;
                    }
                    else if (overlapY1 <= overlapY2) {
                        moveAY = overlapY1 >> 1;
                        moveBY = moveAY - overlapY1;
                        moveAX = 0;
                        moveBX = 0;
                    }
                    else {
                        moveBY = overlapY2 >> 1;
                        moveAY = moveBY - overlapY2;
                        moveAX = 0;
                        moveBX = 0;
                    }

                    a[0] += moveAX;
                    a[2] += moveAX;
                    a[1] += moveAY;
                    a[3] += moveAY;
                    b[0] += moveBX;
                    b[2] += moveBX;
                    b[1] += moveBY;
                    b[3] += moveBY;
                }
            }
        }

        /* the icons */
        if (!(g_MapIcons[0].flags & MAP_ICON_END)) {
            for (int i = 0; !(g_MapIcons[i].flags & MAP_ICON_END); i++) {
                if (!MapIconShown(i, MAP_ICON_HIDDEN)) {
                    continue;
                }

                int *box = &boxes[i * 4];
                int frame = g_MapIcons[i].frame;
                int frameSub = g_MapIcons[i].frameSub;

                if (g_MapIcons[i].flags & MAP_ICON_SHADED) {
                    DrawFlatOverlay_Fixed(box[0] - 32, box[1] - 32, box[2] + 32, box[3] + 32, 0x80000000, 1);
                }

                MapIcon *icon = &g_MapIcons[i];
                float z = icon->flags & MAP_ICON_ZOOMED ? g_MapZoom[g_MapCurIndex] : iconScale;

                if (!(icon->flags & MAP_ICON_ROTATED)) {
                    Hud_DrawTexQuad_v2_Fixed(GetIconFrameTex(frame, frameSub), box[0], box[1], box[2] - box[0], box[3] - box[1], 0x80);
                }
                else {
                    float width = z * 256.0f;
                    float height = width;
                    float rot = icon->rot;
                    int texW = 32;

                    if (icon->flags & MAP_ICON_SIZE_B) {
                        rot = FastWrapRot(rot, 1.5707964f);
                        width = g_MapIconSizes[1][0] * z;
                        height = g_MapIconSizes[1][1] * z;
                        texW = 64;

                        if (g_MissionTargets[g_MapIcons[i].target].state & 2) {
                            frameSub++;
                        }
                    }

                    if (g_MapIcons[i].flags & MAP_ICON_SIZE_A) {
                        rot = FastWrapRot(rot, 1.5707964f);
                        width = g_MapIconSizes[0][0] * z;
                        height = g_MapIconSizes[0][1] * z;
                        texW = 64;

                        if (g_MissionTargets[g_MapIcons[i].target].state & 2) {
                            frameSub++;
                        }
                    }

                    if (g_MapIcons[i].flags & MAP_ICON_SIZE_C) {
                        rot = FastWrapRot(rot, 1.5707964f);
                        width = g_MapIconSizes[2][0] * z;
                        height = g_MapIconSizes[2][1] * z;
                    }

                    float centerX = (float)(box[0] + box[2]) * 0.5f;
                    float centerY = (float)(box[1] + box[3]) * 0.5f;
                    int texIndex = Hud_GetTexIndex(GetIconFrameTex(frame, frameSub));

                    Hud_DrawTexQuadF_v4_Fixed(centerX, centerY, width, height, rot, texW * 2, 64, texIndex);
                }

                icon = &g_MapIcons[i];

                if (!(icon->flags & MAP_ICON_LABEL)) {
                    continue;
                }

                /* the label box beside (or on) the icon, in pixels */
                int labelX;
                int labelY;

                if (icon->labelX == 0) {
                    labelX = ((box[0] + box[2]) >> 5) - icon->labelW / 2;
                }
                else {
                    labelX = ((icon->labelX > 0 ? box[2] : box[0]) >> 4) - icon->labelW / 2 + icon->labelX;
                }

                if (icon->labelY == 0) {
                    labelY = ((box[1] + box[3]) >> 5) - icon->labelH / 2;
                }
                else {
                    labelY = ((icon->labelY > 0 ? box[3] : box[1]) >> 4) - icon->labelH / 2 + icon->labelY;
                }

                int labelW = icon->labelW;
                int labelBottom = labelY + icon->labelH;
                int labelRight = labelX + labelW;
                char text[128];
                FontWindow window;

                DrawRoundedRect(labelY, labelBottom, labelX, labelRight, 0x40);
                Map_GetIconLabel(i, text);

                window.win_top = labelY;
                window.win_bot = labelBottom;
                window.win_left = labelX;
                window.win_right = labelRight;
                window.text_x = labelX + labelW / 2;
                window.text_y = labelY + 4;
                window.max_width = 0;
                window.max_height = 0;
                window.line_spacing = 15;
                window.flags = 1;
                window.sub_pixel_x = 0;
                window.sub_pixel_y = 0;
                FontPrintOpt(&window, 0x80ffa888, text, -1, 1.0f);
            }
        }
    }

    /* Ratchet's marker on his own level's map */
    if (Level == g_MapCurIndex) {
        int markerTex = GetIconFrameTex(0xe99a, 5);
        float markerSize = (g_MapZoom[g_MapCurIndex] * 4.0f + 10.0f) * 0.75f * (1.0f / 13.0f);
        float rot = g_heroRotation.z;
        float u;
        float v;

        if (g_heroStateType == 0xf) {
            rot = FastWrapRot(rot, 1.5707964f);
        }

        if (g_MapAlt != 0) {
            Map_WorldToMapCoords(g_heroPosition.x, g_heroPosition.y, &u, &v, Level + 100);
            rot = FastWrapRot(rot, 1.5707964f);
        }
        else {
            Map_WorldToMapCoords(g_heroPosition.x, g_heroPosition.y, &u, &v, Level);
        }

        u = u * (float)mapW + leftF;
        v = v * (float)mapH + topF;

        if (Cheats[4] != 0) {
            rot = FastDiffRots(-FastWrapRot(rot, 1.5707964f), 1.5707964f);
        }

        markerSize = markerSize * 256.0f;
        Hud_DrawTexQuadF_v4_Fixed(u, v, markerSize, markerSize, rot, 128, 128, Hud_GetTexIndex(markerTex));
    }

    STUB_0006d708();

    /* the g_MapIconSource dots, those on or near the screen */
    if (g_MapIconSource != NULL) {
        STUB_0006d704(0);

        MapSourceDot *dot = (MapSourceDot *)g_MapIconSource;
        float mapWF = (float)mapW;
        float mapHF = (float)mapH;

        for (int count = g_MapIconSourceArg; count != 0; count--, dot++) {
            float u;
            float v;

            Map_WorldToMapCoords(dot->x, dot->y, &u, &v, Level);

            int x = (int)(u * mapWF) + left;
            int y = (int)(v * mapHF) + top;

            if (x < -409 || y < -409 || x > 8601 || y > 7065 || dot->shown != -1) {
                continue;
            }

            int radius = g_MapSourceDotRadius;

            DrawFlatOverlay(x - radius, y - radius, x + radius, y + radius, dot->color, 1);
        }

        STUB_0006d708();
    }
}

// 0x00e4648 (0x2d8 bytes)
/* Decodes a map layer into a 512x512 1-bit image made of 16x16 tiles of 32x32 pixels (each tile
   row of the image is 64 bytes, a band of 32 rows 0x800). The data holds, per tile, runs of 4-bit
   values packed 3 nibbles a run (offsets[tile] ends tile's runs; tile 0 starts at 0x200). A run
   at an even nibble is value = low nibble, count = next byte's low nibble << 4 | high nibble;
   at an odd one value = high nibble, count = the next byte; a count of 0 means 256. The tile is
   unpacked into g_ScratchBuf (2 pixels a byte, low nibble first), then each pixel not 0 becomes
   a set bit. */
void Map_DecodeLayer(u32 *out, u8 *data, short *offsets)
{
    u8 *scratch = g_ScratchBuf;

    for (int tile = 0; tile < 256; tile++, offsets++) {
        u8 *runs = data + (tile == 0 ? 0x200 : offsets[-1]);
        int runCnt = ((data + offsets[0] - runs) * 2) / 3;
        bool half = false;
        u8 *write = scratch;

        for (int i = 0, nibble = 0; i < runCnt; i++, nibble += 3) {
            u32 first = runs[nibble >> 1];
            u32 second = runs[(nibble >> 1) + 1];
            int count;
            u32 value;

            if ((nibble & 1) == 0) {
                count = (second & 0xf) << 4 | first >> 4;
                value = first & 0xf;
            }
            else {
                count = second;
                value = first >> 4;
            }

            count = count == 0 ? 0x100 : count;

            if (half) {
                *write++ |= value << 4;
                half = false;
                count--;
            }

            if (count != 0) {
                u8 *last;

                do {
                    last = write;
                    *write++ = value << 4 | (value & 0xf);
                    count -= 2;
                } while (count > 0);

                /* an odd count leaves the last byte half done */
                if (count != 0) {
                    half = true;
                    *last = value;
                    write = last;
                }
            }
        }

        /* the tile as 32 rows of 32 bits */
        u32 *row = out + tile + (tile / 16) * 0x1f0;

        for (int y = 0; y < 32; y++, row += 16) {
            u32 bits = 0;

            for (int x = 0; x < 32; x++) {
                u8 pair = scratch[y * 16 + (x >> 1)];
                u32 pixel = (x & 1) == 0 ? pair & 0xf : pair >> 4;

                if (pixel != 0) {
                    bits |= 1 << x;
                }
            }

            *row = bits;
        }
    }
}

// 0x00e4928 (0x250 bytes)
/* reveals a radius-16 circle of the map around pos (map pixels, 512x512) */
void Map_RevealAroundPos(float *pos)
{
    float u;
    float v;

    if (g_MapLoaded == 0) {
        return;
    }

    if (g_MapAlt == 0) {
        Map_WorldToMapCoords(pos[0], pos[1], &u, &v, Level);
    }
    else {
        Map_WorldToMapCoords(pos[0], pos[1], &u, &v, Level + 100);
    }

    int pixelU = (int)(u * 512.0f);
    int pixelV = (int)(v * 512.0f);
    int centerU = pixelU + 1;
    int centerV = pixelV + 1;

    if (centerU >= 0x200 || (centerU | centerV) < 0 || centerV >= 0x200) {
        return;
    }

    int endV = pixelV + 17 < 0x1ff ? pixelV + 17 : 0x1ff;
    int endU = pixelU + 17 < 0x1ff ? pixelU + 17 : 0x1ff;

    for (int y = pixelV - 15 < 0 ? 0 : pixelV - 15; y < endV; y++) {
        for (int x = pixelU - 15 < 0 ? 0 : pixelU - 15; x < endU; x++) {
            int dx = x - centerU;
            int dy = y - centerV;

            if (sqrtf((float)(dx * dx + dy * dy)) <= 16.0f) {
                int bit = y * 0x200 + x;

                g_MapRevealMask[bit >> 3] |= 1 << (bit & 7);
            }
        }
    }
}

// 0x00e4b78 (0x94 bytes)
/* reveals a w x h rectangle of the map at (x, y) */
void Map_RevealRect(int x, int y, int w, int h)
{
    for (int row = y; row < y + h; row++) {
        for (int column = x; column < x + w; column++) {
            int bit = row * 0x200 + column;

            g_MapRevealMask[bit >> 3] |= 1 << (bit & 7);
        }
    }
}

// 0x00e4c0c (0x7c bytes)
/* the reveal mask for the save; its first byte set marks it as used (all zeros without a map) */
void Map_SaveRevealMask(char *out)
{
    if (g_MapLoaded == 0) {
        FastMemSet(out, 0, 0x8000);
        return;
    }

    memcpy(out, g_MapRevealMask, 0x8000);
    out[0] = 1;
}

// 0x00e4c88 (0x3e0 bytes)
/* Decodes a 256x256 1-bit map image (0x8000 bytes) into out. If the data's first byte has bit 0
   clear the image is stored at quarter size: each of 128 rows of 16 bytes is widened 4 times
   (every bit to 4) and the row repeated 4 times. Otherwise it is run-length coded: the runs
   alternate between set and clear pixels (starting set, counts from the data; the first count
   is the first byte >> 1, a 0 count switches without pixels), and are laid only where the span
   list allows (pairs of bytes: pixels to skip, pixels to fill). Spans are unpacked a byte a pixel
   into g_ScratchBuf, 32 rows at a time, then packed 8 to a byte. */
void Map_DecompressMapImage(u8 *out, u8 *data, u8 *spans)
{
    u32 widen[256];
    u32 row[16];
    u8 *scratch = g_ScratchBuf;

    if (g_MapLoaded == 0) {
        return;
    }

    if ((data[0] & 1) == 0) {
        for (u32 byte = 0; byte < 0x100; byte++) {
            u32 bits = 0;

            widen[byte] = 0;

            for (int bit = 0; bit < 8; bit++) {
                if (byte & (1 << bit)) {
                    bits |= 0xf << (bit * 4);
                    widen[byte] = bits;
                }
            }
        }

        for (int y = 0; y < 0x80; y++, out += 0x100) {
            for (int i = 0; i < 16; i++) {
                row[i] = widen[*data++];
            }

            FastMemCopy(out, row, 0x40);
            FastMemCopy(out + 0x40, row, 0x40);
            FastMemCopy(out + 0x80, row, 0x40);
            FastMemCopy(out + 0xc0, row, 0x40);
        }

        return;
    }

    u8 *start = out;
    u8 *overflow = scratch + 0x2000;
    u8 *runs = data + 1;
    u32 left = data[0] >> 1;
    u32 pixel = 1;
    u8 *write = scratch;

    FastMemSet(scratch, 0, 0x2400);

    for (;;) {
        do {
            write += spans[0];
            u32 fill = spans[1];

            spans += 2;

            while (fill != 0) {
                if (left == 0) {
                    do {
                        left = *runs++;
                        pixel = pixel == 0;
                    } while (left == 0);
                }

                fill--;
                *write++ = pixel;
                left--;
            }
        } while (write < scratch + 0x2000);

        /* 8 pixels to a byte, low bit first */
        u8 *packed = scratch;

        for (u8 *p = scratch; p < scratch + 0x2000; p += 8, packed++) {
            *packed = p[0] | p[1] << 1 | p[2] << 2 | p[3] << 3 | p[4] << 4 | p[5] << 5 | p[6] << 6 | p[7] << 7;
        }

        FastMemCopy(out, scratch, 0x400);
        out += 0x400;

        if (out == start + 0x8000) {
            break;
        }

        FastMemSet(scratch, 0, 0x2000);

        /* a span that ran past these 32 rows starts the next ones */
        if (write > scratch + 0x2000) {
            int n = write - overflow;
            u8 *from = overflow;
            u8 *to = scratch;

            do {
                n--;
                *to++ = *from++;
            } while (n > 0);
        }

        FastMemSet(overflow, 0, 0x400);
        write -= 0x2000;
    }
}

// 0x00e5068 (0x40 bytes)
/* the moby standing for map object index of this level */
void Map_RegisterLevelObject(void *obj, int index)
{
    if ((int)Level < 19) {
        g_MissionMobys[index + g_LevelTargetStart[Level]] = (MobyInstance *)obj;
    }
}

// 0x00e50a8 (0x14 bytes)
/* nothing calls it */
void Map_SetIconSource(void *source, int arg)
{
    g_MapIconSource = source;
    g_MapIconSourceArg = arg;
}

// 0x00e50bc (0xa0 bytes)
/* for the save: where this level's mission mobys are now (position and z rotation) */
void Map_SaveLevelObjectState(void)
{
    if ((int)Level >= 19) {
        return;
    }

    for (int i = g_LevelTargetStart[Level]; i < g_LevelTargetStart[Level + 1]; i++) {
        MobyInstance *moby = g_MissionMobys[i];

        if (moby != NULL) {
            g_MissionTargets[i].x = moby->pos.x;
            g_MissionTargets[i].y = moby->pos.y;
            g_MissionTargets[i].rot = moby->rotation.z;
        }
    }
}

/* Map region checks: which parts of a level's map show, by where Ratchet is (map pixel, height)
   and story flags. Two kinds (the table that holds them was not found; the kinds are read off
   the registers they use): (pixelU, pixelV), and (u, v, z, pixelU, pixelV) with u, v the map
   position as floats. A line test like (v - y0) * a + (u - x0) * b < 0 picks a side of an edge. */

/* the hero is swimming (states 0x11, 0x12) or standing in water */
static inline bool HeroInWater(void)
{
    return g_heroStateType == 0x11 || g_heroStateType == 0x12 || g_heroHotSpotWater == 1;
}

// 0x00e515c (0x34 bytes)
int Map_RegionVisible_e515c(int pixelU, int pixelV)
{
    return (pixelV - 0xdb) * 0x56 + (pixelU - 0xd3) * -0x1e < 0;
}

// 0x00e5190 (0x1c bytes)
int Map_RegionVisible_e5190(int pixelU, int pixelV)
{
    return g_MiscLevelFlags.field12_0xc != 0;
}

// 0x00e51ac (0x1c bytes)
int Map_RegionVisible_e51ac(int pixelU, int pixelV)
{
    return g_MiscLevelFlags.field13_0xd != 0;
}

// 0x00e51c8 (0x1c bytes)
int Map_RegionVisible_e51c8(int pixelU, int pixelV)
{
    return g_MiscLevelFlags.field21_0x15 != 0;
}

// 0x00e51f0 (0x98 bytes)
int Map_RegionVisible_e51f0(float u, float v, float z, int pixelU, int pixelV)
{
    bool swimming = HeroInWater();

    if (pixelV < 200 && z >= 39.5f && !(swimming | (z > 42.5f))) {
        return 1;
    }

    return pixelV > 199 && z >= 87.0f && g_heroStateType != 0x10;
}

// 0x00e5290 (0x78 bytes)
int Map_RegionVisible_e5290(float u, float v, float z, int pixelU, int pixelV)
{
    if (pixelU < 0x100 && g_MiscLevelFlags.field14_0xe != 0) {
        return 1;
    }

    return pixelU >= 0x100 && z >= 58.0f && z <= 86.0f && g_heroStateType != 0x10;
}

// 0x00e5310 (0x60 bytes)
int Map_RegionVisible_e5310(float u, float v, float z, int pixelU, int pixelV)
{
    if (pixelU < 0x100) {
        return HeroInWater();
    }

    return z >= 95.0f;
}

// 0x00e5370 (0x14 bytes)
int Map_RegionVisible_e5370(int pixelU, int pixelV)
{
    return DAT_00a20824 == 0;
}

// 0x00e5384 (0x1c bytes)
int Map_RegionVisible_e5384(int pixelU, int pixelV)
{
    return g_MiscLevelFlags.field28_0x1c != 0;
}

// 0x00e53a0 (0x1c bytes)
int Map_RegionVisible_e53a0(int pixelU, int pixelV)
{
    return g_MiscLevelFlags.field29_0x1d != 0;
}

// 0x00e53bc (0x1c bytes)
int Map_RegionVisible_e53bc(int pixelU, int pixelV)
{
    return g_MiscLevelFlags.field30_0x1e != 0;
}

// 0x00e53d8 (0x1c bytes)
int Map_RegionVisible_e53d8(int pixelU, int pixelV)
{
    return g_MiscLevelFlags.field31_0x1f != 0;
}

// 0x00e53f4 (0x1c bytes)
int Map_RegionVisible_e53f4(int pixelU, int pixelV)
{
    return g_MiscLevelFlags.field37_0x25 != 0;
}

// 0x00e5420 (0x2b0 bytes)
int Map_RegionVisible_e5420(float u, float v, float z, int pixelU, int pixelV)
{
    if ((pixelV - 0x16f) * -0x102 + (pixelU - 0x189) * 0x82 < 0) {
        return (pixelV - 0x146) * 0x116 + (pixelU - 0x75) * -0x86 < 0 && (pixelV - 0x130) * -0x91 < 0 && z >= 43.9f;
    }

    if ((pixelV - 0xcd) * -0xbf + (pixelU - 0x191) * -0x6e < 0) {
        float du = u - 337.5f;
        float dv = v - 250.0f;

        if (sqrtf(du * du + dv * dv) <= 7.0f) {
            return 1;
        }

        return (pixelV - 0x12a) * 0x31 + (pixelU - 0x142) * 0x2e < 0 && DAT_00a20830 != 0;
    }

    return HeroInWater() && (pixelV - 0xb8) * 0xf + (pixelU - 299) * -0x3a < 0 &&
           (pixelV - 0xed) * 0x35 + (pixelU - 0x130) * 0x22 < 0 && (pixelV - 0xdc) * -0x26 + (pixelU - 0x161) * 0x2c < 0 &&
           (pixelV - 0xa8) * -0x3d + (pixelU - 0x156) * -0x29 < 0;
}

// 0x00e56d8 (0x13c bytes)
int Map_RegionVisible_e56d8(float u, float v, float z, int pixelU, int pixelV)
{
    bool swimming = HeroInWater();

    if ((pixelV - 0x168) * 0xef < 0 && pixelV >= 0x135 && DAT_00a20828 != 0 && z >= 47.7f) {
        return 1;
    }

    return swimming && (pixelV - 0x9a) * 0x77 + (pixelU - 0xc5) * -0x47 < 0 && (pixelV - 0xc3) * 0x81 + (pixelU - 0xd6) * -2 < 0 &&
           (pixelV - 0xda) * 0x6a + (pixelU - 0x107) * 0x3a < 0;
}

// 0x00e5814 (0x24c bytes)
int Map_RegionVisible_e5814(int pixelU, int pixelV)
{
    if (pixelV < 0xe9) {
        return (pixelV - 0xa0) * 0x2d + (pixelU - 0x132) * -0x38 < 0 && (pixelV - 0xd8) * 0x34 + (pixelU - 0x14d) * 0x3e < 0 &&
               (pixelV - 0xb4) * -0x4b + (pixelU - 0x182) * 0x21 < 0 && (pixelV - 0x8c) * -0x27 + (pixelU - 0x157) * -0x1e < 0;
    }

    if (!((pixelV - 0x115) * 0xb9 + (pixelU - 0x8f) * -0x36 < 0 || (pixelV - 0x108) * 0x40 + (pixelU - 0xe7) * -0x5c < 0)) {
        return 0;
    }

    if (!((pixelV - 0x15f) * 0x67 + (pixelU - 0xed) * 0x51 < 0 || (pixelV - 299) * 0xcd + (pixelU - 0xa2) * -0x1c < 0)) {
        return 0;
    }

    return (pixelV - 0x163) * 0xf + (pixelU - 0x132) * 0x97 < 0 || (pixelV - 0x108) * 0xde + (pixelU - 0xc2) * -0x26 < 0;
}

// 0x00e5a68 (0xc0 bytes)
int Map_RegionVisible_e5a68(float u, float v, float z, int pixelU, int pixelV)
{
    if (pixelV < 0xbb) {
        return !HeroInWater() && DAT_00a2083c != 0;
    }

    return z >= 51.5f && z <= 54.0f && (pixelV - 0xe5) * 0x1a + (pixelU - 0x10a) * -0x14 < 0;
}

// 0x00e5b28 (0xa0 bytes)
int Map_RegionVisible_e5b28(int pixelU, int pixelV)
{
    if (DAT_00a20834 == 0) {
        return 0;
    }

    return (pixelV - 0xed) * 199 + (pixelU - 0x99) * -0x2a < 0 || (pixelV - 0xf7) * 0x2f + (pixelU - 0x10e) * -0x22 < 0;
}

// 0x00e5bd8 (0x88 bytes)
int Map_RegionVisible_e5bd8(float u, float v, float z, int pixelU, int pixelV)
{
    if (pixelV < 0x9d) {
        return z >= 73.5f && z <= 80.0f && DAT_00a20840 != 0;
    }

    return z >= 51.5f && z <= 54.0f && DAT_00a20838 != 0;
}

// 0x00e5c68 (0xc4 bytes)
int Map_RegionVisible_e5c68(float u, float v, float z, int pixelU, int pixelV)
{
    int visible = HeroInWater();

    if (pixelV < 0x105) {
        if (pixelV > 0xc0 && (pixelV - 0xb8) * 0x7d + (pixelU - 0xd9) * -0x1a < 0) {
            visible = 0;
        }

        return visible;
    }

    return DAT_00a2082c != 0 && z >= 47.7f;
}

// 0x00e5d30 (0xb8 bytes)
int Map_RegionVisible_e5d30(float u, float v, float z, int pixelU, int pixelV)
{
    return !HeroInWater() && z >= 71.5f && (pixelV - 0xe2) * -0x6b + (pixelU - 0x131) * 0x4f >= 0 &&
           (pixelV - 0x89) * -0xbf + (pixelU - 400) * -0x72 >= 0;
}

// 0x00e5de8 (0x4c bytes)
int Map_RegionVisible_e5de8(int pixelU, int pixelV)
{
    int flag = g_MiscLevelFlags.field53_0x35 != 0;

    return pixelV > 0x100 ? g_heroStateType == 0xf : flag;
}

// 0x00e5e40 (0x4c bytes)
int Map_RegionVisible_e5e40(float u, float v, float z, int pixelU, int pixelV)
{
    if (pixelU < 0xe0) {
        return z >= 47.75f;
    }

    return z < 29.0f;
}

// 0x00e5e98 (0x54 bytes)
int Map_RegionVisible_e5e98(float u, float v, float z, int pixelU, int pixelV)
{
    if (pixelU < 0xe0) {
        return z >= 44.0f && z <= 45.0f;
    }

    return z >= 37.0f;
}

// 0x00e5ef8 (0x54 bytes)
int Map_RegionVisible_e5ef8(float u, float v, float z, int pixelU, int pixelV)
{
    if (pixelU < 0xe0) {
        return z >= 42.0f && z <= 43.0f;
    }

    return z >= 39.0f;
}

// 0x00e5f50 (0x2c bytes)
int Map_RegionVisible_e5f50(float u, float v, float z, int pixelU, int pixelV)
{
    return pixelU < 0xe0 && z <= 38.0f;
}

// 0x00e5f7c (0x1c bytes)
int Map_RegionVisible_e5f7c(int pixelU, int pixelV)
{
    return g_MiscLevelFlags.field48_0x30 != 0;
}

// 0x00e5f98 (0x1c bytes)
int Map_RegionVisible_e5f98(int pixelU, int pixelV)
{
    return g_MiscLevelFlags.field49_0x31 != 0;
}

// 0x00e5fb4 (0x1c bytes)
int Map_RegionVisible_e5fb4(int pixelU, int pixelV)
{
    return g_MiscLevelFlags.field50_0x32 != 0;
}

// 0x00e5fd0 (0x1c bytes)
int Map_RegionVisible_e5fd0(int pixelU, int pixelV)
{
    return g_MiscLevelFlags.field67_0x43 != 0;
}

// 0x00e5fec (0x1c bytes)
int Map_RegionVisible_e5fec(int pixelU, int pixelV)
{
    return g_MiscLevelFlags.field68_0x44 != 0;
}

// 0x00e6008 (0x1c bytes)
int Map_RegionVisible_e6008(int pixelU, int pixelV)
{
    return g_MiscLevelFlags.field69_0x45 != 0;
}

// 0x00e6028 (0x44 bytes)
int Map_RegionVisible_e6028(float u, float v, float z, int pixelU, int pixelV)
{
    if (pixelU < 0xbe) {
        return z >= 58.5f;
    }

    return g_MiscLevelFlags.field80_0x50 != 0;
}

// 0x00e606c (0x1c bytes)
int Map_RegionVisible_e606c(int pixelU, int pixelV)
{
    return g_MiscLevelFlags.field76_0x4c != 0;
}

// 0x00e6088 (0x1c bytes)
int Map_RegionVisible_e6088(int pixelU, int pixelV)
{
    return g_MiscLevelFlags.field77_0x4d != 0;
}

// 0x00e60a4 (0x1c bytes)
int Map_RegionVisible_e60a4(int pixelU, int pixelV)
{
    return g_MiscLevelFlags.field78_0x4e != 0;
}

// 0x00e60c0 (0x1c bytes)
int Map_RegionVisible_e60c0(int pixelU, int pixelV)
{
    return g_MiscLevelFlags.field79_0x4f != 0;
}

// 0x00e60dc (0x1c bytes)
int Map_RegionVisible_e60dc(int pixelU, int pixelV)
{
    return g_MiscLevelFlags.field81_0x51 != 0;
}

// 0x00e6108 (0x64 bytes)
int Map_RegionVisible_e6108(float u, float v, float z, int pixelU, int pixelV)
{
    if (pixelU < 0xdd) {
        return z >= 232.0f && z <= 235.0f && g_MiscLevelFlags.field86_0x56 != 0;
    }

    return z <= 180.0f;
}

// 0x00e6178 (0x5c bytes)
int Map_RegionVisible_e6178(float u, float v, float z, int pixelU, int pixelV)
{
    if (pixelU < 0xdd) {
        return z >= 242.0f;
    }

    return z <= 180.0f && g_MiscLevelFlags.field87_0x57 != 0;
}

// 0x00e61e0 (0x68 bytes)
int Map_RegionVisible_e61e0(float u, float v, float z, int pixelU, int pixelV)
{
    if (pixelU < 0xdd) {
        return z >= 238.0f && z <= 241.0f;
    }

    return z <= 180.0f && g_MiscLevelFlags.field88_0x58 != 0;
}

// 0x00e6258 (0x94 bytes)
int Map_RegionVisible_e6258(float u, float v, float z, int pixelU, int pixelV)
{
    bool swimming = HeroInWater();

    if (pixelU < 0x15f) {
        return swimming && z >= 200.0f;
    }

    return z >= 233.0f && z <= 235.0f && g_MiscLevelFlags.field90_0x5a != 0;
}

// 0x00e6300 (0x74 bytes)
int Map_RegionVisible_e6300(float u, float v, float z, int pixelU, int pixelV)
{
    if (pixelU < 0x15f) {
        return z >= 228.0f && z <= 230.0f;
    }

    return z >= 233.0f && z <= 235.0f && g_MiscLevelFlags.field91_0x5b != 0;
}

// 0x00e6374 (0x1c bytes)
int Map_RegionVisible_e6374(int pixelU, int pixelV)
{
    return g_MiscLevelFlags.field89_0x59 != 0;
}

// 0x00e6398 (0x30 bytes)
int Map_RegionVisible_e6398(float u, float v, float z, int pixelU, int pixelV)
{
    return pixelV > 0x140 || z >= 63.5f;
}

// 0x00e63c8 (0x8 bytes)
int Map_RegionVisible_e63c8(int pixelU, int pixelV)
{
    return 1;
}

// 0x00e63d0 (0x8 bytes)
int Map_RegionVisible_e63d0(int pixelU, int pixelV)
{
    return 1;
}

// 0x00e63e8 (0x88 bytes)
int Map_RegionVisible_e63e8(int pixelU, int pixelV)
{
    if (DAT_00a20828 != 0) {
        return 1;
    }

    float du = (float)pixelU - 161.5f;
    float dv = (float)pixelV - 249.0f;

    return sqrtf(du * du + dv * dv) <= 35.0f;
}

// 0x00e6470 (0x1c bytes)
int Map_RegionVisible_e6470(int pixelU, int pixelV)
{
    return g_MiscLevelFlags.field114_0x72 != 0;
}

// 0x00e648c (0x1c bytes)
int Map_RegionVisible_e648c(int pixelU, int pixelV)
{
    return g_MiscLevelFlags.field115_0x73 != 0;
}

// 0x00e64a8 (0x1c bytes)
int Map_RegionVisible_e64a8(int pixelU, int pixelV)
{
    return g_MiscLevelFlags.field116_0x74 != 0;
}

// 0x00e64c4 (0x1c bytes)
int Map_RegionVisible_e64c4(int pixelU, int pixelV)
{
    return g_MiscLevelFlags.field117_0x75 != 0;
}

// 0x00e64e0 (0x1c bytes)
int Map_RegionVisible_e64e0(int pixelU, int pixelV)
{
    return g_MiscLevelFlags.field127_0x7f != 0;
}
