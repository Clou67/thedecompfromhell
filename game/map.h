#pragma once
// game/map.h
#include "types.h"
#include "game/update/moby1118.h"

// ---- types
/* a level's map corners (0x724af0, 0x20 bytes a level): two world points and where they are on
   the map image (field names invented) */
struct MapBounds {
    float worldX0;           /* 0x00 */
    float worldY0;           /* 0x04 */
    float worldX1;           /* 0x08 */
    float worldY1;           /* 0x0c */
    float mapU0;             /* 0x10 */
    float mapV0;             /* 0x14 */
    float mapU1;             /* 0x18 */
    float mapV1;             /* 0x1c */
};
_Static_assert(sizeof(struct MapBounds) == 0x20, "MapBounds");

/* a map icon (g_MapIconTables[level]; the list ends with an entry that has MAPICON_END) */
struct MapIcon {
    short target;            /* 0x00  index into g_MissionTargets / g_MissionMobys; < 0: fixed spot */
    short mission;           /* 0x02  index into the level's missions, -1 = always */
    u16 flags;               /* 0x04  MAPICON_* */
    u8 _pad06[4];
    short label;             /* 0x0a  has a text label */
    short unk0c;
    short labelW;            /* 0x0e  label box size, fitted by UpdateMissionDisplay */
    short labelH;            /* 0x10 */
    u8 _pad12[6];
    float u;                 /* 0x18  map coordinates */
    float v;                 /* 0x1c */
    float rot;               /* 0x20 */
    int visible;             /* 0x24 */
};
typedef char MapIcon_size_check[sizeof(struct MapIcon) == 0x28 ? 1 : -1];

/* world -> map per level (0x724d50, 0x10 bytes), worked out from MapBounds: u = offsetU + x * scaleU */
struct MapTransform {
    float offsetU;           /* 0x00 */
    float scaleU;            /* 0x04 */
    float offsetV;           /* 0x08 */
    float scaleV;            /* 0x0c */
};
_Static_assert(sizeof(struct MapTransform) == 0x10, "MapTransform");

// ---- globals
extern undefined4 DAT_007264cc; /* 0x7264cc */
extern undefined4 DAT_007264d0; /* 0x7264d0 */
extern undefined4 DAT_007264d4; /* 0x7264d4 */
extern undefined4 DAT_007264d8; /* 0x7264d8 */
extern undefined4 DAT_007264dc; /* 0x7264dc */
extern undefined4 DAT_007264e0; /* 0x7264e0 */
extern undefined4 DAT_007264e4; /* 0x7264e4 */
extern undefined4 DAT_00a204ec; /* 0xa204ec */
extern undefined4 DAT_00a204f0; /* 0xa204f0 */
extern undefined4 DAT_00a207e8; /* 0xa207e8 */
extern undefined4 DAT_00a20824; /* 0xa20824 */
extern undefined4 DAT_00a20828; /* 0xa20828 */
extern undefined4 DAT_00a2082c; /* 0xa2082c */
extern undefined4 DAT_00a20830; /* 0xa20830 */
extern undefined4 DAT_00a20834; /* 0xa20834 */
extern undefined4 DAT_00a20838; /* 0xa20838 */
extern undefined4 DAT_00a2083c; /* 0xa2083c */
extern undefined4 DAT_00a20840; /* 0xa20840 */
extern MiscLevelFlags g_MiscLevelFlags; /* 0x96bff0 */
extern int g_MapAlt; /* 0xa20820: set: the map uses level + 100 (guess: alternate map) */ /* type set in global_types.tsv */
extern int g_MapAvailable; /* 0xa204e4 */
extern u8 *g_MapCacheBuf[5]; /* 0xa207a8: map cache slots' buffers (0 = slot unused) */ /* type set in global_types.tsv */
extern int g_MapCacheId[5]; /* 0xa207bc: the map in each slot (level, + 0x100 for Map-O-Matic), -1 free */ /* type set in global_types.tsv */
extern int g_MapCacheSize[5]; /* 0xa207d4: its size in qwords */ /* type set in global_types.tsv */
extern int g_MapCurIndex; /* 0xa206e8 */
extern int g_MapDefaultHeroPos[20][2]; /* 0x7261cc: g_MapHeroU/V's starting values per level */ /* type set in global_types.tsv */
extern int g_MapFileId; /* 0xa206ec */
extern int g_MapFileSize; /* 0xa206f4 */
extern int g_MapHeroU[20]; /* 0xa205c4: Ratchet's map position per level, 16.16; 0x08000000 = none */ /* type set in global_types.tsv */
extern int g_MapHeroV[20]; /* 0xa20614 */ /* type set in global_types.tsv */
extern void *g_MapIconSource; /* 0xa204dc: set by Map_SetIconSource (nothing calls it) */ /* type set in global_types.tsv */
extern int g_MapIconSourceArg; /* 0xa20570 */ /* type set in global_types.tsv */
extern MapIcon *g_MapIconTables[19]; /* 0x728dd0: per level */ /* type set in global_types.tsv */
extern MapIcon *g_MapIcons; /* 0xa204e0: the shown level's icons */ /* type set in global_types.tsv */
extern u8 *g_MapImageBuf; /* 0xa206fc: start of the map's memory in the pause allocator */ /* type set in global_types.tsv */
extern int g_MapIsMapOMatic; /* 0xa206f0 */
extern int g_MapLoaded; /* 0xa204e8 */
extern int g_MapPinnedSlot; /* 0xa207d0: a cache slot Map_ChooseCacheSlotToEvict never picks */ /* type set in global_types.tsv */
extern u8 g_MapRevealDisc[32][4]; /* 0xa20664: 32x32 bits, a disc of radius 16 (what Map_RevealAroundPos stamps) */ /* type set in global_types.tsv */
extern u8 *g_MapRevealMask; /* 0xa204cc: the shown level's reveal mask, 256x256 bits */ /* type set in global_types.tsv */
extern int g_MapSectionWord; /* 0x724acc: set by SECTION_HEADER_MAP */ /* type set in global_types.tsv */
extern int g_MapUnkA204c0; /* 0xa204c0 */ /* type set in global_types.tsv */
extern int g_MapUnkA204c4; /* 0xa204c4 */ /* type set in global_types.tsv */
extern int g_MapUnkA204c8; /* 0xa204c8 */ /* type set in global_types.tsv */
extern int g_MapUnkA204d0; /* 0xa204d0: set by Map_LoadPlanetMap */ /* type set in global_types.tsv */
extern MapBounds g_MapWorldBounds[19]; /* 0x724af0 */ /* type set in global_types.tsv */
extern MapTransform g_MapWorldToMap[19]; /* 0x724d50 */ /* type set in global_types.tsv */
extern float g_MapZoom[20]; /* 0xa20574: per level */ /* type set in global_types.tsv */
extern int *ptr_GalacticMap; /* 0x729970: levels in galactic map order, 0 ends */ /* type set in global_types.tsv */

// ---- functions
void SECTION_HEADER_MAP(void);
void Map_LoadPlanetMap(void);
void Map_OnPauseMenuOpen(void);
int Map_FindFreeCacheSlot(int fromTop);
void Map_MoveCacheSlot(int dst, int src);
int Map_GetFreeCacheSlotCompact(void);
int Map_FindCacheSlotById(int id);
int Map_GetNextMapToPrefetch(void);
int Map_GetGalacticMapIndex(int level);
int Map_ChooseCacheSlotToEvict(void);
void STUB_000e2704(...);
void Map_MergeByMask(char *out, char *a, char *b, char *mask);
void Map_ExpandRevealMask(char *out, char *mask);
int Map_UpdateZoomPan(void);
void Map_WorldToMapCoords(float x, float y, float *outU, float *outV, int level);
void Map_GetIconLabel(int icon, char *out);
void DrawMapFrame(void);
void Map_DecodeLayer(u32 *out, u8 *data, short *offsets);
void Map_RevealAroundPos(float *pos);
void Map_RevealRect(int x, int y, int w, int h);
void Map_SaveRevealMask(char *out);
void Map_DecompressMapImage(u8 *out, u8 *data, u8 *spans);
void Map_RegisterLevelObject(void *obj, int index);
void Map_SetIconSource(void *source, int arg);
void Map_SaveLevelObjectState(void);
int Map_RegionVisible_e515c(int pixelU, int pixelV);
int Map_RegionVisible_e5190(int pixelU, int pixelV);
int Map_RegionVisible_e51ac(int pixelU, int pixelV);
int Map_RegionVisible_e51c8(int pixelU, int pixelV);
int Map_RegionVisible_e51f0(float u, float v, float z, int pixelU, int pixelV);
int Map_RegionVisible_e5290(float u, float v, float z, int pixelU, int pixelV);
int Map_RegionVisible_e5310(float u, float v, float z, int pixelU, int pixelV);
int Map_RegionVisible_e5370(int pixelU, int pixelV);
int Map_RegionVisible_e5384(int pixelU, int pixelV);
int Map_RegionVisible_e53a0(int pixelU, int pixelV);
int Map_RegionVisible_e53bc(int pixelU, int pixelV);
int Map_RegionVisible_e53d8(int pixelU, int pixelV);
int Map_RegionVisible_e53f4(int pixelU, int pixelV);
int Map_RegionVisible_e5420(float u, float v, float z, int pixelU, int pixelV);
int Map_RegionVisible_e56d8(float u, float v, float z, int pixelU, int pixelV);
int Map_RegionVisible_e5814(int pixelU, int pixelV);
int Map_RegionVisible_e5a68(float u, float v, float z, int pixelU, int pixelV);
int Map_RegionVisible_e5b28(int pixelU, int pixelV);
int Map_RegionVisible_e5bd8(float u, float v, float z, int pixelU, int pixelV);
int Map_RegionVisible_e5c68(float u, float v, float z, int pixelU, int pixelV);
int Map_RegionVisible_e5d30(float u, float v, float z, int pixelU, int pixelV);
int Map_RegionVisible_e5de8(int pixelU, int pixelV);
int Map_RegionVisible_e5e40(float u, float v, float z, int pixelU, int pixelV);
int Map_RegionVisible_e5e98(float u, float v, float z, int pixelU, int pixelV);
int Map_RegionVisible_e5ef8(float u, float v, float z, int pixelU, int pixelV);
int Map_RegionVisible_e5f50(float u, float v, float z, int pixelU, int pixelV);
int Map_RegionVisible_e5f7c(int pixelU, int pixelV);
int Map_RegionVisible_e5f98(int pixelU, int pixelV);
int Map_RegionVisible_e5fb4(int pixelU, int pixelV);
int Map_RegionVisible_e5fd0(int pixelU, int pixelV);
int Map_RegionVisible_e5fec(int pixelU, int pixelV);
int Map_RegionVisible_e6008(int pixelU, int pixelV);
int Map_RegionVisible_e6028(float u, float v, float z, int pixelU, int pixelV);
int Map_RegionVisible_e606c(int pixelU, int pixelV);
int Map_RegionVisible_e6088(int pixelU, int pixelV);
int Map_RegionVisible_e60a4(int pixelU, int pixelV);
int Map_RegionVisible_e60c0(int pixelU, int pixelV);
int Map_RegionVisible_e60dc(int pixelU, int pixelV);
int Map_RegionVisible_e6108(float u, float v, float z, int pixelU, int pixelV);
int Map_RegionVisible_e6178(float u, float v, float z, int pixelU, int pixelV);
int Map_RegionVisible_e61e0(float u, float v, float z, int pixelU, int pixelV);
int Map_RegionVisible_e6258(float u, float v, float z, int pixelU, int pixelV);
int Map_RegionVisible_e6300(float u, float v, float z, int pixelU, int pixelV);
int Map_RegionVisible_e6374(int pixelU, int pixelV);
int Map_RegionVisible_e6398(float u, float v, float z, int pixelU, int pixelV);
int Map_RegionVisible_e63c8(int pixelU, int pixelV);
int Map_RegionVisible_e63d0(int pixelU, int pixelV);
int Map_RegionVisible_e63e8(int pixelU, int pixelV);
int Map_RegionVisible_e6470(int pixelU, int pixelV);
int Map_RegionVisible_e648c(int pixelU, int pixelV);
int Map_RegionVisible_e64a8(int pixelU, int pixelV);
int Map_RegionVisible_e64c4(int pixelU, int pixelV);
int Map_RegionVisible_e64e0(int pixelU, int pixelV);
