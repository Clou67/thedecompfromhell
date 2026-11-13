#pragma once
// game/water.h
#include "types.h"
#include "game/draw.h"

// ---- types
struct OceanPlane {
    float x;
    float y;
    float z;
    float field3_0xc;
    float scaleX;
    float scaleY;
    ushort cellsX;
    ushort cellsY;
    void *wave_table;
    float fogNearDist;
    float fogFarDist;
    float fogNearIntensity;
    float fogFarIntensity;
    uint8_t fogR;
    undefined fogG;
    undefined fogB;
    byte field16_0x33;
    void *vertex_color_ptr;
    char *occupied_ocean_cells;
    ushort tex_offset;
    byte num_texs_to_cycle;
    byte depth;
};

/* a water sheet: an animated mesh of water (falls, streams); BuildVerts makes its vertices */
struct WaterSheetSrcVert {
    float x, y;              /* 0x0 */
    float z0, z1;            /* 0x8  heights blended by zBlend */
};
struct WaterSheet {
    struct WaterSheetSrcVert *srcVerts; /* 0x00 */
    struct Vec2 *srcUVs;     /* 0x04 */
    void *cullData;          /* 0x08 */
    int32_t vertexCount;     /* 0x0c */
    float scrollSpeedLayer0; /* 0x10 */
    float scrollSpeedLayer1; /* 0x14 */
    float waveAmp;           /* 0x18  UV wobble */
    int32_t frameRate;       /* 0x1c */
    float velocityU0;        /* 0x20 */
    float velocityV0;
    float velocityU1;
    float velocityV1;
    uint32_t color;          /* 0x30  0x00BBGGRR */
    int32_t textureId0;      /* 0x34 */
    int32_t textureId1;
    uint8_t depthBias0;      /* 0x3c */
    uint8_t depthBias1;
    uint8_t unknown3e[2];
    float offsetU0;          /* 0x40 */
    float offsetV0;
    float offsetU1;
    float offsetV1;
    uint32_t frameCounter;   /* 0x50 */
    uint8_t unknown54[8];    /* 0x54 */
    float zBlend;            /* 0x5c */
};
typedef char WaterSheet_size_check[sizeof(struct WaterSheet) == 0x60 ? 1 : -1];

struct WaterSheetVert {
    struct Vec3 pos;
    struct Vec2 uv0;
    struct Vec2 uv1;
    uint32_t color;
};

struct WaterTileBuf {
    float height[16][16];
    float heightTop[16];
    float heightLeft[16];
    float heightBottom[16];
    float heightRight[16];
    float heightBottom2[16];
    float heightRight2[16];
    float heightCorner[6];
    float pad2[10];
};

/* one 16x16 tile of a water surface. The tiles of a level are an array; the links are indices of
   the neighbouring tiles (0xff = none) whose border heights this tile writes (WaterTile_StepWave).
   Size and the buf offset are from the asm (stride 0x11a0, buf at 0x50). */
struct WaterTile {
    struct Vec3 tilePos;         /* 0x00 */
    byte tileLinkTop;            /* 0x0c */
    byte tileLinkLeft;           /* 0x0d */
    byte tileLinkBottom;         /* 0x0e */
    byte tileLinkRight;          /* 0x0f */
    byte tileLinkCorners[4];     /* 0x10  up-left, up-right, down-left, down-right */
    uint baseTex;                /* 0x14 */
    uint ovlTex;                 /* 0x18 */
    u8 baseAlpha;                /* 0x1c */
    u8 ovlAlpha;                 /* 0x1d */
    u16 mask;                    /* 0x1e */
    struct Vec2 scroll;          /* 0x20 */
    struct Vec2 scrollRate;      /* 0x28 */
    struct Vec2 rotAngle;        /* 0x30 */
    struct Vec2 rotRate;         /* 0x38 */
    float wig_size;              /* 0x40 */
    uint32_t flags;              /* 0x44 */
    u8 unk48[8];                 /* 0x48 */
    struct WaterTileBuf buf[3];  /* 0x50  height buffers (wave steps cycle through them) */
    u8 unk1190[0x10];            /* 0x1190 */
};
typedef char WaterTile_size_check[sizeof(struct WaterTile) == 0x11a0 ? 1 : -1];

/* the water working area in g_ScratchBuf: one tile's staged heights (StageTileBuf) and the
   per-vertex results of ShadeVerts for its 17x17 vertices */
#define WATER_VERTS 17
struct WaterStage {
    float grid[20][24];                          /* 0x0000  see StageTileBuf */
    struct Vec2 envUV[WATER_VERTS * WATER_VERTS]; /* 0x0780 */
    u32 color[WATER_VERTS * WATER_VERTS];        /* 0x1088  0xRRGGBBAA, grey */
};
typedef char WaterStage_size_check[sizeof(struct WaterStage) == 0x150c ? 1 : -1];

struct WaterTileBox {
    s32 min_x;
    s32 min_y;
    s32 min_z;
    u16 size_x;
    u16 size_y;
};

struct WaterTileConst {
    struct Vec2 TileSize;
    struct Vec2 TileOffset;
    struct Vec2 TileGridSize;
    float texScale;
    float minHeight;
    float waveInc;
    u32 pad0;
    u32 tex0;
    u32 tex1;
    struct Vec3 lightDir;
    byte alpha0;
    byte alpha1;
    char pad[2];
};

/* the current that pushes things along on water (WaterDrift_Set / _Update; @0xe5aee0) */
typedef struct WaterDrift {
    float baseAngle;         /* 0x00 */
    float angle;             /* 0x04 */
    float angleStep;         /* 0x08  per frame during a turn */
    s16 mode;                /* 0x0c  0 none, 2 and 3 wander */
    s16 state;               /* 0x0e */
    float baseSpeed;         /* 0x10 */
    float speed;             /* 0x14 */
    float speedStep;         /* 0x18 */
    s16 period;              /* 0x1c  frames */
    s16 timer;               /* 0x1e */
} WaterDrift;
typedef char WaterDrift_size_check[sizeof(WaterDrift) == 0x20 ? 1 : -1];

/* a strip of a special ocean or ice mesh (0x20 bytes) */
typedef struct WaterStrip {
    BSphere bSphere;         /* 0x00 */
    Vec3 *positions;         /* 0x10 */
    Vec2 *uvs;               /* 0x14 */
    Vec3 *normals;           /* 0x18 */
    int count;               /* 0x1c */
} WaterStrip;
typedef char WaterStrip_size_check[sizeof(WaterStrip) == 0x20 ? 1 : -1];

// ---- globals
extern float CONST_1_0f; /* 0x73ab00 */
extern undefined4 DAT_0073a924; /* 0x73a924 */
extern undefined8 DAT_0073a980; /* 0x73a980 */
extern undefined8 DAT_0073a990; /* 0x73a990 */
extern undefined8 DAT_0073a9a0; /* 0x73a9a0 */
extern undefined8 DAT_0073a9b0; /* 0x73a9b0 */
extern undefined8 DAT_0073a9c0; /* 0x73a9c0 */
extern undefined8 DAT_0073a9d0; /* 0x73a9d0 */
extern undefined8 DAT_0073a9e0; /* 0x73a9e0 */
extern undefined4 DAT_0073aa48; /* 0x73aa48 */
extern undefined4 DAT_0073aa50; /* 0x73aa50 */
extern undefined4 DAT_0073adc8; /* 0x73adc8 */
extern undefined4 DAT_0073adf4; /* 0x73adf4 */
extern undefined4 DAT_0073ae08; /* 0x73ae08 */
extern undefined4 DAT_0073ae20; /* 0x73ae20 */
extern undefined4 DAT_0073ae60; /* 0x73ae60 */
extern undefined8 DAT_0073b430; /* 0x73b430 */
extern undefined8 DAT_0073b440; /* 0x73b440 */
extern undefined8 DAT_0073b450; /* 0x73b450 */
extern undefined8 DAT_0073b460; /* 0x73b460 */
extern undefined8 DAT_0073b470; /* 0x73b470 */
extern undefined8 DAT_0073b480; /* 0x73b480 */
extern undefined8 DAT_0073b490; /* 0x73b490 */
extern undefined8 DAT_0073b4a0; /* 0x73b4a0 */
extern undefined8 DAT_0073b4b0; /* 0x73b4b0 */
extern undefined4 DAT_0073b50c; /* 0x73b50c */
extern undefined4 LevelFogMode; /* 0x95ea10 */
extern int OceanFogB; /* 0xe5aed0 */ /* type set in global_types.tsv */
extern float OceanFogFarDist; /* 0xe5aebc */ /* type set in global_types.tsv */
extern float OceanFogFarIntensity; /* 0xe5aec4 */ /* type set in global_types.tsv */
extern int OceanFogG; /* 0xe5aecc */ /* type set in global_types.tsv */
extern float OceanFogNearDist; /* 0xe5aeb8: the fog saved while an ocean's is used */ /* type set in global_types.tsv */
extern float OceanFogNearIntensity; /* 0xe5aec0 */ /* type set in global_types.tsv */
extern int OceanFogR; /* 0xe5aec8 */ /* type set in global_types.tsv */
extern WaterTileBox * WaterTileBoxes; /* 0xe5aa84 */
extern int WaterTileCnt; /* 0xe5aa88 */
extern WaterTileConst WaterTileConsts; /* 0x73aa00 */
extern WaterTile * WaterTiles; /* 0xe5aa80 */
extern Vec2 g_OceanBaseUV[124]; /* 0x73af50 */ /* type set in global_types.tsv */
extern RenderingStep *g_OceanPasses[3]; /* 0x8fa414: DepthPass, OceanForwardPass, ForwardPass */ /* type set in global_types.tsv */
extern s16 g_OceanStripIdx[124]; /* 0x73b330: the vertices of an ocean cell's strip, in its 8x8 patch */ /* type set in global_types.tsv */
extern Vec2 g_OceanUV[124]; /* 0xe5aad0: g_OceanBaseUV scaled */ /* type set in global_types.tsv */
extern Vec2 g_WaterBaseUV[46]; /* 0x73ac40 */ /* type set in global_types.tsv */
extern u32 g_WaterBoundAlpha; /* 0x73aa4c */ /* type set in global_types.tsv */
extern u32 g_WaterBoundTex; /* 0x73aa44: the tile layer texture last bound */ /* type set in global_types.tsv */
extern int g_WaterBufCur; /* 0xe5aaa4: and writes this one */ /* type set in global_types.tsv */
extern int g_WaterBufPrev; /* 0x73a9f0: the wave step reads this height buffer */ /* type set in global_types.tsv */
extern int g_WaterBufShown; /* 0x73a9f4: the buffer drawn and sampled (2 = the blend of the two) */ /* type set in global_types.tsv */
extern WaterDrift g_WaterDrift; /* 0xe5aee0 */ /* type set in global_types.tsv */
extern float g_WaterLerpT; /* 0x73aa40 */ /* type set in global_types.tsv */
extern s16 g_WaterStripIdx[46]; /* 0x73aa60: the vertices of a cell's strip, in its 17-wide grid */ /* type set in global_types.tsv */
extern Vec2 g_WaterUV[46]; /* 0x73aac0: a cell's base layer uvs, wobbled each tile */ /* type set in global_types.tsv */
extern int g_WaterUVUseY[46]; /* 0x73ae70: entries wobbled by rotAngle.y instead of .x */ /* type set in global_types.tsv */

// ---- functions
void SECTION_HEADER_WATER(void);
void WaterTile_InitAll(WaterTile *tiles, int tileCnt);
void WaterTile_CalcGridBSphere(WaterTile *tile, WaterTileBox *box);
int WaterTile_LookupTile(float x, float y, float z);
void WaterWave_ScaleTable(float scale);
void WaterTile_StepSim(WaterTile *tiles, int count);
void WaterTile_UpdateWaves(WaterTile *tiles, int count);
void WaterTile_UpdateUVs(WaterTile *tile);
void WaterTile_PutDrop(WaterTile *tiles, int count, float x, float y, float radius, float height, int add);
void WaterTile_PutDrop_Thunk(WaterTile *tiles, int count, float x, float y, float radius, float height);
int WaterTile_GetHeight(float x, float y, float z, float *outZ, Vec4 *outNormal);
void WaterTile_BuildVertexGrid(WaterTile *tile);
void WaterTile_DrawCellBase(WaterTile *tile, u32 idx);
void WaterTile_DrawCellOvl(WaterTile *tile, u32 idx);
void WaterTile_CullAndDrawCell(WaterTile *tile, u32 idx, int clipMode);
void ____Unused_Water_ResetIds_73aa44(void);
void WaterTile_DrawAll(WaterTile *tile, int cnt);
void Sheet_ResetScroll(int cnt, WaterSheet *sheet);
void CALL_STUB_0017d488(void);
void WaterSheet_DrawAll(int cnt, WaterSheet *sheet);
void STUB_0017d870(void);
void SubmitOceanCell(OceanPlane *ocean, float x, float y, u32 *colors, float blend, int passIdx);
float OceanPass(OceanPlane *ocean);
void OceanPlane_SetDepth(float scale, OceanPlane *ocean, u64 unused, u8 depth);
void OceanPlane_SetDefaultDepth(float scale, OceanPlane *ocean);
void PushOceanFog(OceanPlane *ocean);
void PopZoneFog(OceanPlane *ocean);
float SubmitZone(OceanPlane *ocean);
void OceanSpecialPass(float alpha, OceanPlane *ocean, WaterStrip *strips, int count);
void ScaleWaveTable(float scale);
void SetFogVars(float nearDist, float farDist, float nearIntensity, float farIntensity, u32 r, u32 g, u32 b);
void RestoreFogVars(void);
void OceanPass_Thunk(OceanPlane *ocean);
void IcePass(WaterStrip *strips, int count, int tex0, int tex1);
void Water_StaticInitGsPackets(void);
void WaterDrift_Set(int mode, float angle, float speed, short period);
void WaterDrift_Update(void);
