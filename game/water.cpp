// game/water.cpp -- water: the rippling tile surfaces (waves, drops, heights), water sheets, the
// ocean planes and their fog, the ice strips, and the drift that pushes things along on water
// STATUS: CLEAN (checked against the asm; local names are mine)
// 37 functions, 0x17b214-0x17f7c0
//
// A water surface is an array of 16x16-cell WaterTiles (see mesh.cpp for the wave step and
// shading). Each tile keeps three height buffers: the wave step writes g_WaterBufCur from
// g_WaterBufPrev, and between steps the shown buffer (2) is a blend of the two. A tile is drawn
// as 4x4 cells of 4x4 squares (46-vertex strips), in two layers: a wobbling base texture and an
// overlay lit by the shading pass. Oceans are grids of 7x7-square cells, each a 124-vertex strip
// over a fixed 8x8 vertex patch, with an animated texture.
#include <math.h>
#include <string.h>
#include "game/water.h"
#include "game/boot.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mesh.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pause.h"
#include "game/update.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"
#include "idol/idol_draw.h"
#include "idol/mUnk.h"
#include "idol/shrubfunc.h"
#include "idol/tiefunc.h"
#include "sdk/libgcm_cmd/marker.h"
#include "idol/fastinline.h"
#include <cell/gcm/gcm_macros.h>
#include <cell/gcm/gcm_enum.h>

#define TILE_CELLS          16      /* squares per tile side */
#define CELL_SQUARES        4       /* squares per drawn cell side */
#define GRID_VERTS          17      /* vertices per tile side */
#define CELL_STRIP_VERTS    46
#define WATER_UV_COUNT      46

#define OCEAN_CELL          7       /* squares per ocean cell side */
#define OCEAN_PATCH         8       /* vertices per ocean cell side */
#define OCEAN_STRIP_VERTS   124
#define OCEAN_DEPTH_ONLY    0x80    /* OceanPlane.depth: drawn into the depth pass too */

#define BUF_SHOWN           2       /* the blended buffer between wave steps */
#define NO_LINK             0xff

#define DRAW_STRIP_TEXTURED 9       /* FastDrawStripColor mode */

#define WATER_TILE_FLAG_TOP     1   /* WaterTile.flags: flatten that edge to tilePos.z */
#define WATER_TILE_FLAG_RIGHT   2
#define WATER_TILE_FLAG_BOTTOM  4
#define WATER_TILE_FLAG_LEFT    8

#define FOG_MODE_FIXED      1       /* LevelFogMode: the level's fog is never replaced */

#define DRIFT_SPEED_SCALE   9.6f

/* a vertex of FastDrawStripColor's strips */
typedef struct WaterStripVert {
    float x, y, z;
    float u, v;
    u32 color;
} WaterStripVert;

/* a vertex of FastDrawStripFog's ocean strips */
typedef struct OceanVert {
    float x, y, z;
    float u, v;
    float blend;                /* between the two animation textures */
    u32 color;
} OceanVert;

/* the vertex grid WaterTile_BuildVertexGrid leaves in the scratch buffer */
#define g_WaterGrid             ((Vec3 (*)[GRID_VERTS])(g_ScratchBuf + 0x2000))

/* out = v * m (a row vector times all four rows) */
static inline void MulVec4Mtx4(Vec4 *out, const Vec4 *v, const Mtx4 *m)
{
    out->x = m->v0.x * v->x + m->v1.x * v->y + m->v2.x * v->z + m->v3.x * v->w;
    out->y = m->v0.y * v->x + m->v1.y * v->y + m->v2.y * v->z + m->v3.y * v->w;
    out->z = m->v0.z * v->x + m->v1.z * v->y + m->v2.z * v->z + m->v3.z * v->w;
    out->w = m->v0.w * v->x + m->v1.w * v->y + m->v2.w * v->z + m->v3.w * v->w;
}

/* 1/sqrt (the binary: frsqrte and three Newton steps) */
static inline float FastRSqrtInline(float x)
{
    return 1.0f / sqrtf(x);
}

/* a color channel scaled, rounded and clamped to 255 (the VMX colour passes) */
static inline u32 ScaleChannel(u32 value, float scale)
{
    float f = (float)value * scale;

    if (f > 255.0f) {
        f = 255.0f;
    }

    f += 0.5f;

    if (f > 255.0f) {
        f = 255.0f;
    }

    return (u32)(int)f;
}

/* a draw-depth alpha: double the 0..0x80 alpha, at most 0xff */
static inline int DoubledAlpha(int alpha)
{
    return alpha * 2 > 0xff ? 0xff : alpha * 2;
}

static inline void BindEffectTex(RenderingStep *pass, int unit, int tex)
{
    FUN_004d676c(pass, unit, (u8 *)EffectTexHeaders + GetEffectTex(tex) * 0x24, 1, 1);
}

/* back to normal alpha blending after the water passes */
static inline void RestoreBlend(RenderingStep *pass)
{
    *pass->command++ = (RsxCmd)CELL_GCM_METHOD(CELL_GCM_NV4097_SET_BLEND_EQUATION, 1);
    *pass->command++ = (RsxCmd)(CELL_GCM_FUNC_ADD << 16 | CELL_GCM_FUNC_ADD);
    *pass->command++ = (RsxCmd)CELL_GCM_METHOD(CELL_GCM_NV4097_SET_BLEND_FUNC_SFACTOR, 2);
    *pass->command++ = (RsxCmd)(CELL_GCM_SRC_ALPHA << 16 | CELL_GCM_SRC_ALPHA);
    *pass->command++ = (RsxCmd)(CELL_GCM_ONE_MINUS_SRC_ALPHA << 16 | CELL_GCM_ONE_MINUS_SRC_ALPHA);
}

static inline void SaveFog(void)
{
    OceanFogNearDist = g_ViewContext.fogNearDist;
    OceanFogFarDist = g_ViewContext.fogFarDist;
    OceanFogNearIntensity = g_ViewContext.fogNearIntensity;
    OceanFogFarIntensity = g_ViewContext.fogFarIntensity;
    OceanFogR = g_ViewContext.fogR;
    OceanFogG = g_ViewContext.fogG;
    OceanFogB = g_ViewContext.fogB;
}

/* the ocean's fog in place of the level's (the colour is kept on Umbris unless always) */
static inline void SetOceanFog(OceanPlane *ocean, bool alwaysColor)
{
    if (LevelFogMode == FOG_MODE_FIXED) {
        return;
    }

    g_ViewContext.fogNearDist = ocean->fogNearDist;
    g_ViewContext.fogFarDist = ocean->fogFarDist;
    g_ViewContext.fogNearIntensity = ocean->fogNearIntensity;
    g_ViewContext.fogFarIntensity = ocean->fogFarIntensity;

    if (alwaysColor || Level != Umbris) {
        g_ViewContext.fogR = ocean->fogR;
        g_ViewContext.fogG = ocean->fogG;
        g_ViewContext.fogB = ocean->fogB;
    }

    RebuildSharedWaveTables();
}

// 0x017b214 (0x14 bytes)
void SECTION_HEADER_WATER(void)
{
    DAT_0073a924 = 0x10000;
}

// 0x017b230 (0x274 bytes)
void WaterTile_InitAll(WaterTile *tiles, int tileCnt)
{
    int i;
    int b;

    for (i = 0; i < tileCnt; i++) {
        WaterTile *tile = &tiles[i];

        for (b = 0; b < 3; b++) {
            memset(tile->buf[b].height, 0, sizeof(tile->buf[b].height));
            memset(tile->buf[b].heightTop, 0, sizeof(tile->buf[b].heightTop));
            memset(tile->buf[b].heightLeft, 0, sizeof(tile->buf[b].heightLeft));
            memset(tile->buf[b].heightBottom, 0, sizeof(tile->buf[b].heightBottom));
            memset(tile->buf[b].heightBottom2, 0, sizeof(tile->buf[b].heightBottom2));
            memset(tile->buf[b].heightRight, 0, sizeof(tile->buf[b].heightRight));
            memset(tile->buf[b].heightRight2, 0, sizeof(tile->buf[b].heightRight2));
            memset(tile->buf[b].heightCorner, 0, sizeof(tile->buf[b].heightCorner));
        }

        tile->scroll.x = 0.0f;
        tile->scroll.y = 0.0f;
        tile->scrollRate.x = -0.0016f;
        tile->scrollRate.y = -0.0016f;
        tile->rotRate.x = 0.02f;
        tile->rotAngle.x = 1.5707964f;
        tile->rotAngle.y = -1.5707964f;
        tile->rotRate.y = -0.031f;
        tile->wig_size = 0.03f;
        tile->flags = 0;
    }
}

// 0x017b4b0 (0xe8 bytes)
/* the tile's bounding box in the 1/1024 units of WaterTileBoxes */
void WaterTile_CalcGridBSphere(WaterTile *tile, WaterTileBox *box)
{
    box->min_x = FastDoubleToInt((tile->tilePos.x + WaterTileConsts.TileOffset.x) * 1024.0f);
    box->min_y = FastDoubleToInt((tile->tilePos.y + WaterTileConsts.TileOffset.y) * 1024.0f);
    box->min_z = FastDoubleToInt((tile->tilePos.z - 1.0f) * 1024.0f);
    box->size_x = FastDoubleToInt(WaterTileConsts.TileSize.x * 1024.0f);
    box->size_y = FastDoubleToInt(WaterTileConsts.TileSize.x * 1024.0f);
}

// 0x017b5a0 (0x1e0 bytes)
/* the water tile under a point (it must be in a drawn cell), or -1 */
int WaterTile_LookupTile(float x, float y, float z)
{
    int ix = FastDoubleToInt(x * 1024.0f);
    int iy = FastDoubleToInt(y * 1024.0f);
    int iz = FastDoubleToInt(z * 1024.0f);
    int i;

    for (i = 0; i < WaterTileCnt; i++) {
        WaterTileBox *box = &WaterTileBoxes[i];
        WaterTile *tile;
        int gx;
        int gy;

        if (ix < box->min_x || iy < box->min_y || iz < box->min_z) {
            continue;
        }

        if (ix >= box->min_x + box->size_x || iy >= box->min_y + box->size_y || iz >= box->min_z + 0x800) {
            continue;
        }

        tile = &WaterTiles[i];
        gx = FastDoubleToInt((x - (tile->tilePos.x + WaterTileConsts.TileOffset.x)) / WaterTileConsts.TileGridSize.x);
        gy = FastDoubleToInt((y - (tile->tilePos.y + WaterTileConsts.TileOffset.y)) / WaterTileConsts.TileGridSize.y);

        if (tile->mask & (1 << (((gy >> 2) & 3) << 2 | ((gx >> 2) & 3)))) {
            return i;
        }
    }

    return -1;
}

// 0x017b780 (0x3c bytes)
/* scales the wobble uv table so that its entry 8 becomes scale */
void WaterWave_ScaleTable(float scale)
{
    int i;

    scale /= CONST_1_0f;     /* g_WaterUV[8].x */

    for (i = 0; i < WATER_UV_COUNT; i++) {
        g_WaterUV[i].x *= scale;
        g_WaterUV[i].y *= scale;
    }
}

/* one wave step for every tile with something drawn, then the buffers turn */
static inline void StepAllTiles(WaterTile *tiles, int count)
{
    int prev;
    int i;

    for (i = 0; i < count; i++) {
        if (tiles[i].mask != 0) {
            StageTileBuf((float (*)[24])g_ScratchBuf, &tiles[i].buf[g_WaterBufCur]);
            WaterTile_StepWave((float (*)[24])g_ScratchBuf, i, g_WaterBufPrev, tiles);
        }
    }

    prev = g_WaterBufPrev;
    g_WaterBufPrev = g_WaterBufCur;
    g_WaterBufCur = prev;
}

// 0x017b7bc (0xf4 bytes)
void WaterTile_StepSim(WaterTile *tiles, int count)
{
    StepAllTiles(tiles, count);
}

// 0x017b8b8 (0x1d4 bytes)
/* A wave step every 1 / waveInc frames; in between the shown buffer blends the last two. */
void WaterTile_UpdateWaves(WaterTile *tiles, int count)
{
    int i;

    if (g_WaterLerpT < 1.0f - WaterTileConsts.waveInc) {
        g_WaterBufShown = BUF_SHOWN;

        for (i = 0; i < count; i++) {
            if (tiles[i].mask != 0) {
                WaterTileBufLerp(g_WaterLerpT, &tiles[i].buf[g_WaterBufShown].height[0][0],
                                 &tiles[i].buf[g_WaterBufPrev].height[0][0],
                                 &tiles[i].buf[g_WaterBufCur].height[0][0]);
            }
        }
    }
    else {
        g_WaterLerpT = WaterTileConsts.waveInc;
        StepAllTiles(tiles, count);
        g_WaterBufShown = g_WaterBufPrev;
    }

    g_WaterLerpT += WaterTileConsts.waveInc;
}

// 0x017bab0 (0x2dc bytes)
/* Scrolls the tile's base texture and wobbles its uv table: each entry turns on a small circle,
   driven by rotAngle.x or (for the entries flagged in g_WaterUVUseY) rotAngle.y. */
void WaterTile_UpdateUVs(WaterTile *tile)
{
    float sinX, cosX, sinY, cosY;
    int i;

    tile->scroll.x += tile->scrollRate.x;

    if (tile->scroll.x > 1.0f) {
        tile->scroll.x -= 1.0f;
    }

    if (tile->scroll.x < 0.0f) {
        tile->scroll.x += 1.0f;
    }

    tile->scroll.y += tile->scrollRate.y;

    if (tile->scroll.y > 1.0f) {
        tile->scroll.y -= 1.0f;
    }

    if (tile->scroll.y < 0.0f) {
        tile->scroll.y += 1.0f;
    }

    tile->rotAngle.x = FastWrapRot(tile->rotAngle.x, tile->rotRate.x);
    tile->rotAngle.y = FastWrapRot(tile->rotAngle.y, tile->rotRate.y);

    sinX = FastSinInline(tile->rotAngle.x);
    cosX = FastCosInline(tile->rotAngle.x);
    sinY = FastSinInline(tile->rotAngle.y);
    cosY = FastCosInline(tile->rotAngle.y);

    for (i = 0; i < WATER_UV_COUNT; i++) {
        float c = g_WaterUVUseY[i] ? cosY : cosX;
        float s = g_WaterUVUseY[i] ? sinY : sinX;

        g_WaterUV[i].x = g_WaterBaseUV[i].x + c * tile->wig_size + tile->scroll.x;
        g_WaterUV[i].y = g_WaterBaseUV[i].y + s * tile->wig_size + tile->scroll.y;
    }
}

// 0x017bd90 (0x620 bytes)
/* Raises the water around (x, y): height / distance within radius cells (height itself within
   one). add: add to the shown heights, else keep whichever is larger. The edge values are copied
   into the neighbouring tiles' border arrays as they are written. */
void WaterTile_PutDrop(WaterTile *tiles, int count, float x, float y, float radius, float height, int add)
{
    int t;

    for (t = 0; t < count; t++) {
        WaterTile *tile = &tiles[t];
        WaterTileBuf *buf = &tile->buf[g_WaterBufCur];
        float gridX = WaterTileConsts.TileGridSize.x;
        float gridY = WaterTileConsts.TileGridSize.y;
        float cx = (x - (tile->tilePos.x + WaterTileConsts.TileOffset.x)) / gridX;
        float cy = (y - (tile->tilePos.y + WaterTileConsts.TileOffset.y)) / gridY;
        int col0 = (int)(cx - radius);
        int col1 = (int)(cx + radius);
        int row0 = (int)(cy - radius);
        int row1 = (int)(cy + radius);
        float py;
        int row;

        if (row0 < 0) {
            row0 = 0;
        }

        if (col1 > 15) {
            col1 = 15;
        }

        if (col0 < 0) {
            col0 = 0;
        }

        if (row1 > 15) {
            row1 = 15;
        }

        py = gridY * (float)row0 + tile->tilePos.y + WaterTileConsts.TileOffset.y;

        for (row = row0; row <= row1; row++, py += gridY) {
            float px = gridX * (float)col0 + tile->tilePos.x + WaterTileConsts.TileOffset.x;
            int col;

            for (col = col0; col <= col1; col++, px += gridX) {
                float dist2 = (x - px) * (x - px) + (y - py) * (y - py);
                float h = height / sqrtf(dist2);

                if (dist2 - 1.0f < 0.0f) {
                    h = height;
                }

                if (!add) {
                    if (fabsf(h) < fabsf(buf->height[row][col])) {
                        h = buf->height[row][col];
                    }
                }
                else {
                    h += tile->buf[g_WaterBufShown].height[row][col];
                }

                buf->height[row][col] = h;

                if (row < 2 && tile->tileLinkTop != NO_LINK) {
                    WaterTileBuf *other = &tiles[tile->tileLinkTop].buf[g_WaterBufCur];

                    if (row == 0) {
                        other->heightBottom[col] = buf->height[row][col];
                    }
                    else {
                        other->heightBottom2[col] = buf->height[row][col];
                    }
                }

                if (col < 2 && tile->tileLinkLeft != NO_LINK) {
                    WaterTileBuf *other = &tiles[tile->tileLinkLeft].buf[g_WaterBufCur];

                    if (col == 0) {
                        other->heightRight[row] = buf->height[row][col];
                    }
                    else {
                        other->heightRight2[row] = buf->height[row][col];
                    }
                }

                if (row == 15 && tile->tileLinkBottom != NO_LINK) {
                    tiles[tile->tileLinkBottom].buf[g_WaterBufCur].heightTop[col] = buf->height[row][col];
                }

                if (col == 15 && tile->tileLinkRight != NO_LINK) {
                    tiles[tile->tileLinkRight].buf[g_WaterBufCur].heightLeft[row] = buf->height[row][col];
                }

                if (tile->tileLinkCorners[0] != NO_LINK) {
                    WaterTileBuf *other = &tiles[tile->tileLinkCorners[0]].buf[g_WaterBufCur];

                    if (col == 0 && row == 0) {
                        other->heightCorner[3] = buf->height[0][0];
                    }

                    if (col == 1 && row == 0) {
                        other->heightCorner[4] = buf->height[0][1];
                    }

                    if (col == 0 && row == 1) {
                        other->heightCorner[5] = buf->height[1][0];
                    }
                }

                if (tile->tileLinkCorners[1] != NO_LINK && col == 15 && row == 0) {
                    tiles[tile->tileLinkCorners[1]].buf[g_WaterBufCur].heightCorner[2] = buf->height[0][15];
                }

                if (tile->tileLinkCorners[2] != NO_LINK && col == 0 && row == 15) {
                    tiles[tile->tileLinkCorners[2]].buf[g_WaterBufCur].heightCorner[1] = buf->height[15][0];
                }

                if (tile->tileLinkCorners[3] != NO_LINK && col == 15 && row == 15) {
                    tiles[tile->tileLinkCorners[3]].buf[g_WaterBufCur].heightCorner[0] = buf->height[15][15];
                }
            }
        }
    }
}

// 0x017c3b0 (0x24 bytes)
void WaterTile_PutDrop_Thunk(WaterTile *tiles, int count, float x, float y, float radius, float height)
{
    WaterTile_PutDrop(tiles, count, x, y, radius, height, 0);
}

// 0x017c3e0 (0x2dc bytes)
// inlined: FastRSqrt @0x17c628
/* The shown water surface at (x, y): its height in *outZ and its normal in *outNormal (either
   may be NULL). Returns 0 if there is no water tile there. */
int WaterTile_GetHeight(float x, float y, float z, float *outZ, Vec4 *outNormal)
{
    WaterTile *tile;
    WaterTileBuf *buf;
    float dx, dy;
    float fx, fy;
    float h00, h10, h01, h11;
    int gx, gy;
    int i = WaterTile_LookupTile(x, y, z);

    if (i < 0) {
        return 0;
    }

    tile = &WaterTiles[i];
    dx = x - (tile->tilePos.x + WaterTileConsts.TileOffset.x);
    dy = y - (tile->tilePos.y + WaterTileConsts.TileOffset.y);
    gx = FastDoubleToInt(dx / WaterTileConsts.TileGridSize.x);
    gy = FastDoubleToInt(dy / WaterTileConsts.TileGridSize.y);
    fx = (dx - FastIntToDouble(gx) * WaterTileConsts.TileGridSize.x) / WaterTileConsts.TileGridSize.x;
    fy = (dy - FastIntToDouble(gy) * WaterTileConsts.TileGridSize.y) / WaterTileConsts.TileGridSize.y;

    /* the four corners of the square, from the border arrays at the far edges */
    buf = &tile->buf[g_WaterBufShown];
    h00 = buf->height[gy][gx];
    h10 = gx == 15 ? buf->heightRight[gy] : buf->height[gy][gx + 1];
    h01 = gy == 15 ? buf->heightBottom[gx] : buf->height[gy + 1][gx];

    if (gx == 15 && gy == 15) {
        h11 = buf->heightCorner[3];
    }
    else if (gx == 15) {
        h11 = buf->heightRight[gy + 1];
    }
    else if (gy == 15) {
        h11 = buf->heightBottom[gx + 1];
    }
    else {
        h11 = buf->height[gy + 1][gx + 1];
    }

    if (outZ != NULL) {
        float top = (h10 - h00) * fx + h00;
        float bottom = (h11 - h01) * fx + h01;

        *outZ = (bottom - top) * fy + top + tile->tilePos.z;
    }

    if (outNormal != NULL) {
        float len2;

        outNormal->y = WaterTileConsts.TileGridSize.x * (h01 - h00);
        outNormal->x = (h10 - h00) * WaterTileConsts.TileGridSize.y;
        outNormal->z = -(WaterTileConsts.TileGridSize.x * WaterTileConsts.TileGridSize.y);
        outNormal->w = 0.0f;

        len2 = outNormal->z * outNormal->z + (outNormal->x * outNormal->x + outNormal->y * outNormal->y);

        if (sqrtf(len2) != 0.0f) {
            float scale = FastRSqrtInline(len2);

            outNormal->x *= scale;
            outNormal->y *= scale;
            outNormal->z *= scale;
        }
        else {
            outNormal->x = 0.0f;
            outNormal->y = 0.0f;
            outNormal->z = 0.0f;
        }
    }

    return 1;
}

// 0x017c6bc (0x94 bytes)
/* the tile's 17x17 vertex positions from the staged heights */
void WaterTile_BuildVertexGrid(WaterTile *tile)
{
    WaterStage *stage = (WaterStage *)g_ScratchBuf;
    Vec3 *out = &g_WaterGrid[0][0];
    float y = tile->tilePos.y + WaterTileConsts.TileOffset.y;
    int row;
    int col;

    for (row = 0; row < GRID_VERTS; row++) {
        float x = tile->tilePos.x + WaterTileConsts.TileOffset.x;

        for (col = 0; col < GRID_VERTS; col++) {
            out->x = x;
            out->y = y;
            out->z = stage->grid[row + 1][4 + col] + tile->tilePos.z;
            out++;
            x += WaterTileConsts.TileGridSize.x;
        }

        y += WaterTileConsts.TileGridSize.y;
    }
}

/* the first vertex of cell idx (4x4 cells of 4x4 squares) in the 17x17 grid */
static inline int CellFirstVert(u32 idx)
{
    return (idx & 3) * CELL_SQUARES + ((int)idx >> 2) * CELL_SQUARES * GRID_VERTS;
}

// 0x017c750 (0x120 bytes)
/* a cell with the wobbling uv table and a flat grey */
void WaterTile_DrawCellBase(WaterTile *tile, u32 idx)
{
    WaterStripVert *verts = (WaterStripVert *)idol::AllocateMemAlign(FrameHeap, CELL_STRIP_VERTS * sizeof(WaterStripVert), 16);
    Vec3 *grid = &g_WaterGrid[0][0] + CellFirstVert(idx);
    int i;

    for (i = 0; i < CELL_STRIP_VERTS; i++) {
        Vec3 *pos = &grid[g_WaterStripIdx[i]];

        verts[i].x = pos->x;
        verts[i].y = pos->y;
        verts[i].z = pos->z;
        verts[i].u = g_WaterUV[i].x;
        verts[i].v = g_WaterUV[i].y;
        verts[i].color = 0x7f7f7f7f;
    }

    FastDrawStripColor(CELL_STRIP_VERTS, verts, DRAW_STRIP_TEXTURED);
}

// 0x017c888 (0x28c bytes)
/* a cell with the shading pass's env-map uvs and its colours at half strength (the halving is
   done in VMX) */
void WaterTile_DrawCellOvl(WaterTile *tile, u32 idx)
{
    WaterStripVert *verts = (WaterStripVert *)idol::AllocateMemAlign(FrameHeap, CELL_STRIP_VERTS * sizeof(WaterStripVert), 16);
    WaterStage *stage = (WaterStage *)g_ScratchBuf;
    int first = CellFirstVert(idx);
    Vec3 *grid = &g_WaterGrid[0][0] + first;
    int i;

    for (i = 0; i < CELL_STRIP_VERTS; i++) {
        int v = g_WaterStripIdx[i];
        u32 color = stage->color[first + v];

        verts[i].x = grid[v].x;
        verts[i].y = grid[v].y;
        verts[i].z = grid[v].z;
        verts[i].u = stage->envUV[first + v].x;
        verts[i].v = stage->envUV[first + v].y;
        verts[i].color = ScaleChannel(color & 0xff, 0.5f) |
                         ScaleChannel((color >> 8) & 0xff, 0.5f) << 8 |
                         ScaleChannel((color >> 16) & 0xff, 0.5f) << 16 |
                         ScaleChannel(color >> 24, 0.5f) << 24;
    }

    FastDrawStripColor(CELL_STRIP_VERTS, verts, DRAW_STRIP_TEXTURED);
}

// 0x017cb20 (0x494 bytes)
/* Frustum-tests a cell's four corners (in the 1024x units of the camera matrices) and queues it
   for the VU draw (STUB_000e9f28; 0xe with clipping, 0xc without). clipMode 1 drops the clipping
   when no corner is outside the guard band. */
void WaterTile_CullAndDrawCell(WaterTile *tile, u32 idx, int clipMode)
{
    if (clipMode != 0) {
        Vec4 corners[4];
        float cell = WaterTileConsts.TileOffset.x * -0.5f;
        float cellY = WaterTileConsts.TileOffset.y * -0.5f;
        float cx = (float)(int)(idx & 3);
        float cy = (float)((int)idx >> 2);
        float x0 = cell * cx + (tile->tilePos.x + WaterTileConsts.TileOffset.x);
        float y0 = cellY * cy + (tile->tilePos.y + WaterTileConsts.TileOffset.y);
        float x1 = (tile->tilePos.x + WaterTileConsts.TileOffset.x) + (cell * cx + cell);
        float y1 = (tile->tilePos.y + WaterTileConsts.TileOffset.y) + (cellY * cy + cellY);
        u32 guardFlags = 0;
        u32 clipFlags = 0;
        int i;

        corners[0].x = x0;
        corners[0].y = y0;
        corners[1].x = x1;
        corners[1].y = y0;
        corners[2].x = x0;
        corners[2].y = y1;
        corners[3].x = x1;
        corners[3].y = y1;

        for (i = 0; i < 4; i++) {
            corners[i].z = tile->tilePos.z;
            corners[i].w = 1.0f;
        }

        for (i = 0; i < 4; i++) {
            Vec4 rel;
            Vec4 guard;
            Vec4 clip;

            rel.x = (corners[i].x - GameCamera.posX) * 1024.0f;
            rel.y = (corners[i].y - GameCamera.posY) * 1024.0f;
            rel.z = (corners[i].z - GameCamera.posZ) * 1024.0f;
            rel.w = corners[i].w;

            MulVec4Mtx4(&guard, &rel, &GameCamera.mtx3);
            MulVec4Mtx4(&clip, &rel, &GameCamera.mtx4);

            guardFlags = guardFlags << 8 | FastUpdateClipFlags(&guard);
            clipFlags = clipFlags << 8 | FastUpdateClipFlags(&clip);
        }

        /* all four corners out past the same plane */
        if ((clipFlags & 0x01010101) == 0x01010101 || (clipFlags & 0x02020202) == 0x02020202 ||
            (clipFlags & 0x04040404) == 0x04040404 || (clipFlags & 0x08080808) == 0x08080808 ||
            (clipFlags & 0x20202020) == 0x20202020) {
            return;
        }

        if (clipMode != 1 || guardFlags == 0) {
            clipMode = 0;
        }
    }

    STUB_000e9f28(clipMode != 0 ? 0xe : 0xc, CellFirstVert(idx));
}

// 0x017cfb4 (0x28 bytes)
void ____Unused_Water_ResetIds_73aa44(void)
{
    g_WaterBoundTex = -1;
    DAT_0073aa50 = -1;
    DAT_0073aa48 = -1;
    g_WaterBoundAlpha = -1;
}

/* binds a tile layer's texture and alpha unless they are already bound */
static inline void BindTileLayer(u32 tex, u8 alpha)
{
    if (tex != g_WaterBoundTex || alpha != g_WaterBoundAlpha) {
        idol_draw::DrawDepth(DL_Pass, idol_draw::PackCmd(0, 1, 2, 1, DoubledAlpha(alpha)));
        BindEffectTex(DL_Pass, 0, tex);
        g_WaterBoundTex = tex;
        g_WaterBoundAlpha = alpha;
    }
}

// 0x017cfdc (0x474 bytes)
/* Draws a water surface: per tile, stage and shade it, build its vertices, flatten the flagged
   edges, then draw its cells in both layers. */
void WaterTile_DrawAll(WaterTile *tile, int cnt)
{
    int t;
    int i;

    g_WaterBoundTex = -1;
    DAT_0073aa48 = -1;
    g_WaterBoundAlpha = -1;
    DAT_0073aa50 = -1;

    for (t = 0; t < cnt; t++, tile++) {
        u32 mask;

        if (tile->mask == 0) {
            continue;
        }

        StageTileBuf((float (*)[24])g_ScratchBuf, &tile->buf[g_WaterBufShown]);
        ShadeVerts(tile);
        WaterTile_BuildVertexGrid(tile);
        WaterTile_UpdateUVs(tile);

        if (tile->flags & WATER_TILE_FLAG_TOP) {
            for (i = 0; i < GRID_VERTS; i++) {
                g_WaterGrid[0][i].z = tile->tilePos.z;
            }
        }

        if (tile->flags & WATER_TILE_FLAG_RIGHT) {
            for (i = 0; i < GRID_VERTS; i++) {
                g_WaterGrid[i][GRID_VERTS - 1].z = tile->tilePos.z;
            }
        }

        if (tile->flags & WATER_TILE_FLAG_BOTTOM) {
            for (i = 0; i < GRID_VERTS; i++) {
                g_WaterGrid[GRID_VERTS - 1][i].z = tile->tilePos.z;
            }
        }

        if (tile->flags & WATER_TILE_FLAG_LEFT) {
            for (i = 0; i < GRID_VERTS; i++) {
                g_WaterGrid[i][0].z = tile->tilePos.z;
            }
        }

        mask = tile->mask;
        BindTileLayer(tile->ovlTex, tile->ovlAlpha);

        for (i = 0; i < 16; i++, mask >>= 1) {
            if (mask & 1) {
                WaterTile_DrawCellBase(tile, i);
            }
        }

        mask = tile->mask;
        BindTileLayer(tile->baseTex, tile->baseAlpha);

        for (i = 0; i < 16; i++, mask >>= 1) {
            if (mask & 1) {
                WaterTile_DrawCellOvl(tile, i);
            }
        }
    }

    RestoreBlend(DL_Pass);
}

// 0x017d450 (0x38 bytes)
void Sheet_ResetScroll(int cnt, WaterSheet *sheet)
{
    for (; cnt > 0; cnt--, sheet++) {
        sheet->offsetU0 = 0.0f;
        sheet->offsetV0 = 0.0f;
        sheet->offsetU1 = 0.0f;
        sheet->offsetV1 = 0.0f;
        sheet->frameRate = 0;
    }
}

// 0x017d488 (0x24 bytes)
void CALL_STUB_0017d488(void)
{
    STUB_00071170();
}

/* a texture scroll offset kept within -1..1 */
static inline float WrapOffset(float offset)
{
    if (offset > 1.0f) {
        return offset - 1.0f;
    }

    if (offset < -1.0f) {
        return offset + 1.0f;
    }

    return offset;
}

// 0x017d4b8 (0x3b8 bytes)
/* Scrolls each sheet's two texture layers and draws the visible ones (layer 0 with state,
   layer 1 over it reusing the same vertices). */
void WaterSheet_DrawAll(int cnt, WaterSheet *sheet)
{
    int i;

    for (i = 0; i < cnt; i++, sheet++) {
        sheet->offsetU0 = sheet->velocityU0 * sheet->scrollSpeedLayer0 + sheet->offsetU0;
        sheet->offsetV0 = sheet->velocityV0 * sheet->scrollSpeedLayer0 + sheet->offsetV0;
        sheet->offsetU0 = WrapOffset(sheet->offsetU0);
        sheet->offsetV0 = WrapOffset(sheet->offsetV0);

        sheet->offsetU1 = sheet->velocityU1 * sheet->scrollSpeedLayer1 + sheet->offsetU1;
        sheet->offsetV1 = sheet->velocityV1 * sheet->scrollSpeedLayer1 + sheet->offsetV1;
        sheet->offsetU1 = WrapOffset(sheet->offsetU1);
        sheet->offsetV1 = WrapOffset(sheet->offsetV1);

        sheet->frameCounter = (sheet->frameCounter + sheet->frameRate) & 0xffffff;

        if (FastCheckBsphereInView(400.0f, sheet->cullData) != -1) {
            WaterSheetVert *verts = (WaterSheetVert *)idol::AllocateMemAlign(FrameHeap, sheet->vertexCount * 32, 16);

            BuildVerts(sheet, verts);

            idol_draw::DrawDepth(DL_Pass, idol_draw::PackCmd(0, 1, 2, 1, DoubledAlpha(sheet->depthBias0)));
            BindEffectTex(DL_Pass, 0, sheet->textureId0);
            FastDrawStrip_Pass(sheet->vertexCount, verts, DRAW_STRIP_TEXTURED);

            idol_draw::DrawDepth(DL_Pass, idol_draw::PackCmd(0, 1, 2, 1, DoubledAlpha(sheet->depthBias1)));
            BindEffectTex(DL_Pass, 0, sheet->textureId1);
            FastDrawStrip_DLNoState(sheet->vertexCount, verts);
        }
    }

    RestoreBlend(DL_Pass);
}

// 0x017d870 (0x4 bytes)
void STUB_0017d870(void)
{
}

// 0x017d8f8 (0x3a4 bytes)
/* One ocean cell: an 8x8 vertex patch from (x, y) at the ocean's height, strung into a
   124-vertex strip with the scaled wave uvs, the cell's colours (RGB doubled, byte order
   swapped, alpha forced to 0xff; done in VMX) and the texture blend. Drawn into the pass, and
   into the depth pass too for a depth-only ocean. The patch's w lane is never set. */
void SubmitOceanCell(OceanPlane *ocean, float x, float y, u32 *colors, float blend, int passIdx)
{
    Vec4 patch[OCEAN_PATCH * OCEAN_PATCH];
    OceanVert *verts;
    Vec4 row;
    int r;
    int c;
    int i;

    row.x = x;
    row.y = y;
    row.z = ocean->z;

    for (r = 0; r < OCEAN_PATCH; r++) {
        Vec4 p = row;

        for (c = 0; c < OCEAN_PATCH; c++) {
            patch[r * OCEAN_PATCH + c] = p;
            p.x += ocean->scaleX;
        }

        row.y += ocean->scaleY;
    }

    verts = (OceanVert *)idol::AllocateMemAlign(FrameHeap, OCEAN_STRIP_VERTS * sizeof(OceanVert), 16);

    for (i = 0; i < OCEAN_STRIP_VERTS; i++) {
        Vec4 *pos = &patch[g_OceanStripIdx[i]];
        u32 color = colors[4 + i];

        verts[i].x = pos->x;
        verts[i].y = pos->y;
        verts[i].z = pos->z;
        verts[i].u = g_OceanUV[i].x;
        verts[i].v = g_OceanUV[i].y;
        verts[i].blend = blend;
        verts[i].color = ScaleChannel(color & 0xff, 2.0f) << 24 |
                         ScaleChannel((color >> 8) & 0xff, 2.0f) << 16 |
                         ScaleChannel((color >> 16) & 0xff, 2.0f) << 8 |
                         0xff;
    }

    FastDrawStripFog(OCEAN_STRIP_VERTS, verts, passIdx);

    if (ocean->depth == OCEAN_DEPTH_ONLY) {
        FastDrawStripFog(OCEAN_STRIP_VERTS, verts, 0);
    }
}

// 0x017dd20 (0x5fc bytes)
/* Draws an ocean plane: picks its pass and depth state, binds the two animation frames, then
   submits each occupied 7x7 cell whose bounding sphere is in view. Returns the frame blend. */
float OceanPass(OceanPlane *ocean)
{
    RenderingStep **passes = g_OceanPasses;
    RenderingStep *pass;
    int passIdx;
    int frame;
    float blend;
    int tex;
    int nextTex;
    float cellW;
    float cellH;
    float radius;
    Vec4 center;
    char *occupied;
    u32 *colors;
    float cellX;
    float cellY;
    int row;
    int col;

    if (ocean->depth == OCEAN_DEPTH_ONLY) {
        passIdx = 2;
        idol_draw::DrawDepth(DepthPass, 0);
        *DepthPass->command++ = (RsxCmd)CELL_GCM_METHOD(CELL_GCM_NV4097_SET_ALPHA_TEST_ENABLE, 1);
        *DepthPass->command++ = (RsxCmd)0;
        idol_draw::DrawDepth(ForwardPass, 0);
        *ForwardPass->command++ = (RsxCmd)CELL_GCM_METHOD(CELL_GCM_NV4097_SET_ALPHA_TEST_ENABLE, 1);
        *ForwardPass->command++ = (RsxCmd)0;
    }
    else if (Level == Kerwan) {
        passIdx = 1;
        idol_draw::DrawDepth(OceanForwardPass, 0xc000000064ULL);
        *OceanForwardPass->command++ = (RsxCmd)CELL_GCM_METHOD(CELL_GCM_NV4097_SET_ALPHA_TEST_ENABLE, 1);
        *OceanForwardPass->command++ = (RsxCmd)0;
    }
    else {
        passIdx = 2;
        idol_draw::DrawDepth(ForwardPass, (u64)ocean->depth << 33 | 100);
        *ForwardPass->command++ = (RsxCmd)CELL_GCM_METHOD(CELL_GCM_NV4097_SET_ALPHA_TEST_ENABLE, 1);
        *ForwardPass->command++ = (RsxCmd)0;
    }

    pass = passes[passIdx];
    idol_draw::RsxCmd_DebugStr_Marker(pass, "Ocean");

    /* the animated texture: this frame and the next, and how far between them */
    frame = (int)worldUpdateTime / ocean->field16_0x33;
    blend = (float)(s64)(int)worldUpdateTime / (float)(s64)ocean->field16_0x33 - (float)(s64)frame;
    tex = ocean->tex_offset + frame % ocean->num_texs_to_cycle;
    nextTex = ocean->tex_offset + (frame + 1) % ocean->num_texs_to_cycle;

    BindEffectTex(passes[passIdx], 0, tex);
    BindEffectTex(passes[passIdx], 1, nextTex);

    if (ocean->depth == OCEAN_DEPTH_ONLY) {
        BindEffectTex(DepthPass, 0, tex);
    }

    idol_draw::ResetPassState(passes[passIdx]);

    cellW = ocean->scaleX * OCEAN_CELL;
    cellH = ocean->scaleY * OCEAN_CELL;
    radius = sqrtf((cellH < cellW ? cellW : cellH) * (cellH < cellW ? cellW : cellH) * 2.0f);

    occupied = ocean->occupied_ocean_cells;
    colors = (u32 *)ocean->vertex_color_ptr;
    center.y = ocean->y + ocean->scaleY * OCEAN_CELL * 0.5f;
    center.z = ocean->z;
    cellY = ocean->y;

    for (row = 0; row < (short)ocean->cellsY; row += OCEAN_CELL) {
        center.x = ocean->x + ocean->scaleX * 3.5f;
        cellX = ocean->x;

        for (col = 0; col < (short)ocean->cellsX; col += OCEAN_CELL) {
            if (*occupied++ == 1 &&
                FastCheckBsphere((u8 *)DAT_00902e9c + 800, radius, ocean->field3_0xc, center) != 0) {
                SubmitOceanCell(ocean, cellX, cellY, colors, blend, passIdx);
            }

            center.x += cellW;
            colors += OCEAN_PATCH * OCEAN_PATCH * 2;
            cellX = ocean->scaleX * OCEAN_CELL + cellX;
        }

        center.y += cellH;
        cellY = ocean->scaleY * OCEAN_CELL + cellY;
    }

    idol_draw::RsxCmd_WritePass(passes[passIdx]);
    return blend;
}

/* the ocean wave uv table, scaled */
static inline void ScaleOceanUV(float scale)
{
    int i;

    for (i = 0; i < OCEAN_STRIP_VERTS; i++) {
        g_OceanUV[i].x = g_OceanBaseUV[i].x * scale;
        g_OceanUV[i].y = g_OceanBaseUV[i].y * scale;
    }
}

// 0x017e31c (0x4c bytes)
void OceanPlane_SetDepth(OceanPlane *ocean, float scale, u8 depth)
{
    ocean->depth = depth;
    ScaleOceanUV(scale);
}

// 0x017e368 (0x50 bytes)
void OceanPlane_SetDefaultDepth(OceanPlane *ocean, float scale)
{
    ocean->depth = OCEAN_DEPTH_ONLY;
    ScaleOceanUV(scale);
}

// 0x017e3b8 (0x110 bytes)
void PushOceanFog(OceanPlane *ocean)
{
    SaveFog();
    SetOceanFog(ocean, false);
    SetGSReg(3, idol_draw::PackCmd(0, 1, 2, 1, ocean->depth));
}

/* back to the fog saved by SaveFog */
static inline void RestoreFog(void)
{
    if (LevelFogMode == FOG_MODE_FIXED) {
        return;
    }

    g_ViewContext.fogNearDist = OceanFogNearDist;
    g_ViewContext.fogFarDist = OceanFogFarDist;
    g_ViewContext.fogNearIntensity = OceanFogNearIntensity;
    g_ViewContext.fogFarIntensity = OceanFogFarIntensity;
    g_ViewContext.fogR = OceanFogR;
    g_ViewContext.fogG = OceanFogG;
    g_ViewContext.fogB = OceanFogB;
    RebuildSharedWaveTables();
}

// 0x017e4c8 (0x90 bytes)
void PopZoneFog(OceanPlane *ocean)
{
    RestoreFog();
}

// 0x017e558 (0x19c bytes)
/* an ocean with its own fog */
float SubmitZone(OceanPlane *ocean)
{
    float blend;

    PushOceanFog(ocean);
    blend = OceanPass(ocean);
    RestoreFog();

    return blend;
}


// 0x017e700 (0x304 bytes)
/* An ocean made of prebuilt strips in one colour, uvs at half scale. */
void OceanSpecialPass(float alpha, OceanPlane *ocean, WaterStrip *strips, int count)
{
    u32 *colors = (u32 *)g_ScratchBuf;
    Vec2 *uvs = (Vec2 *)(g_ScratchBuf + 0x1000);
    int i;
    int s;

    idol_draw::RsxCmd_DebugStr_Marker(ForwardPass, "OceanSpecial");
    idol_draw::RsxCmd_DebugStr_Marker(DepthPass, "OceanSpecial");

    SaveFog();
    SetOceanFog(ocean, true);
    SetGSReg(3, idol_draw::PackCmd(0, 1, 2, 1, ocean->depth));
    STUB_00071170();

    for (i = 0; i < 256; i++) {
        colors[i] = 0xff757c8e;
    }

    for (s = 0; s < count; s++, strips++) {
        if (FastCheckBsphereInView(256.0f, strips) != -1) {
            for (i = 0; i < strips->count; i++) {
                uvs[i].x = strips->uvs[i].x * 0.5f;
                uvs[i].y = strips->uvs[i].y * 0.5f;
            }

            DrawOceanStrip(alpha, strips->count, strips->positions, colors, uvs);
        }
    }

    RestoreFog();
    idol_draw::RsxCmd_WritePass(ForwardPass);
    idol_draw::RsxCmd_WritePass(DepthPass);
}

// 0x017ea04 (0x48 bytes)
void ScaleWaveTable(float scale)
{
    ScaleOceanUV(scale);
}

// 0x017ea4c (0x124 bytes)
/* fog for a special ocean (r, g, b are kept on Umbris) */
void SetFogVars(float nearDist, float farDist, float nearIntensity, float farIntensity, u32 r, u32 g, u32 b)
{
    SaveFog();

    if (LevelFogMode != FOG_MODE_FIXED) {
        if (Level != Umbris) {
            g_ViewContext.fogR = r & 0xff;
            g_ViewContext.fogG = g & 0xff;
            g_ViewContext.fogB = b & 0xff;
        }

        g_ViewContext.fogNearDist = nearDist;
        g_ViewContext.fogFarDist = farDist;
        g_ViewContext.fogNearIntensity = nearIntensity;
        g_ViewContext.fogFarIntensity = farIntensity;
        RebuildSharedWaveTables();
    }

    SetGSReg(3, idol_draw::PackCmd(0, 1, 2, 1, 0x80));
    STUB_00500458(g_OceanStripIdx, g_ScratchBuf + 0x2800, 0xf8);
}

// 0x017eb70 (0x90 bytes)
void RestoreFogVars(void)
{
    RestoreFog();
}

// 0x017ec00 (0x38 bytes)
void OceanPass_Thunk(OceanPlane *ocean)
{
    STUB_000ea1e8();
    OceanPass(ocean);
}

// 0x017ec40 (0x1d4 bytes)
/* Ice: strips in a flat grey with an environment map from their normals. */
void IcePass(WaterStrip *strips, int count, int tex0, int tex1)
{
    u32 *colors = (u32 *)g_ScratchBuf;
    Vec2 *envUV = (Vec2 *)(g_ScratchBuf + 0x400);
    u64 depthCmd;
    int i;

    idol_draw::RsxCmd_DebugStr_Marker(DL_Pass, "Ice");
    idol_draw::RsxCmd_DebugStr_Marker(DL_DepthPass, "Ice");
    STUB_00071170();

    depthCmd = idol_draw::PackCmd(0, 1, 2, 1, 0x80);
    idol_draw::PackCmd(0, 1, 2, 1, 0x40);

    for (i = 0; i < 0xb4; i++) {
        colors[i] = 0x80808080;
    }

    for (i = 0; i < count; i++, strips++) {
        if (FastCheckBsphereInView(256.0f, strips) != -1) {
            NormalsToEnvUV(strips->count, strips->positions, strips->normals, envUV);
            DrawTexturedStrips(strips->count, strips->positions, colors, strips->uvs, envUV, tex0, tex1, depthCmd);
        }
    }

    idol_draw::RsxCmd_WritePass(DL_Pass);
    idol_draw::RsxCmd_WritePass(DL_DepthPass);
}

// 0x017ee14 (0x32c bytes)
/* the PS2 GS packets the water code once sent (static constructor) */
void Water_StaticInitGsPackets(void)
{
    DAT_0073b50c = 0x10000;

    DAT_0073a980 = SCE_GIF_SET_TAG(1, 1, 0, 0, 0, 6);
    DAT_0073a990 = idol_draw::Blend(1, 5, 0x60, 3, 0, 0, 1, 2);
    DAT_0073a9a0 = idol_draw::Blend(1, 5, 0x60, 3, 0, 0, 1, 2);
    DAT_0073a9b0 = SCE_GS_SET_CLAMP(0, 0, 0, 0, 0, 0);
    DAT_0073a9c0 = SCE_GS_SET_CLAMP(0, 0, 0, 0, 0, 0);
    DAT_0073a9d0 = SCE_GS_SET_TEX1(0, 0, 1, 1, 1, 0, 0xff90);
    DAT_0073a9e0 = SCE_GS_SET_TEX1(0, 0, 1, 1, 1, 0, 0xff90);
    DAT_0073adc8 = SCE_VIF1_SET_STCYCL(4, 4, 0);
    DAT_0073adf4 = FUN_005030dc(0);
    DAT_0073ae08 = SCE_VIF1_SET_STCYCL(1, 3, 0);
    DAT_0073ae20 = FUN_005030ec(0);
    DAT_0073ae60 = FUN_005030ec(0);

    DAT_0073b430 = SCE_GIF_SET_TAG(1, 1, 0, 0, 0, 8);
    DAT_0073b440 = FUN_00502f98(0, 0, 0, 0, 0, 0, 1, 2);
    DAT_0073b450 = FUN_00502f98(0, 0, 0, 0, 0, 0, 1, 2);
    DAT_0073b460 = SCE_GS_SET_TEX1(0, 0, 1, 1, 1, 0, 0xff90);
    DAT_0073b470 = SCE_GS_SET_CLAMP(0, 0, 0, 0, 0, 0);
    DAT_0073b480 = idol_draw::PackCmd(0, 1, 2, 1, 0x80);
    DAT_0073b490 = SCE_GS_SET_TEX1(0, 0, 1, 1, 1, 0, 0xff90);
    DAT_0073b4a0 = SCE_GS_SET_CLAMP(0, 0, 0, 0, 0, 0);
    DAT_0073b4b0 = idol_draw::PackCmd(0, 1, 2, 1, 0x40);
}

// 0x017f148 (0x7c bytes)
/* Sets the water drift (the current that pushes the hero along): mode 0 none, 2 and 3 wander
   from the given direction and speed. A speed over 9.6 per frame becomes that limit over the
   speed (as in the binary). */
void WaterDrift_Set(int mode, float angle, float speed, short period)
{
    g_WaterDrift.mode = mode;

    if (mode == 0) {
        g_WaterDrift.baseAngle = 0.0f;
        g_WaterDrift.baseSpeed = 0.0f;
        g_WaterDrift.period = 0;
        return;
    }

    {
        float maxSpeed = g_FrameTime * DRIFT_SPEED_SCALE;

        g_WaterDrift.angle = angle;
        g_WaterDrift.period = period;
        g_WaterDrift.baseAngle = angle;
        g_WaterDrift.state = 0;

        if (maxSpeed - fabsf(speed) < 0.0) {
            speed = maxSpeed / fabsf(speed);
        }

        g_WaterDrift.baseSpeed = speed;
        g_WaterDrift.speed = speed;
    }
}

/* starts a turn: a random new direction (within turnRange of the base) and speed, reached over
   the given frames */
static inline void StartDriftTurn(float frames, float turnRange, float speedMin, float speedMax, short nextState)
{
    float angle = FastWrapRot(g_WaterDrift.baseAngle, MB_randRangeFloat(-turnRange, turnRange));
    float speed = MB_randRangeFloat(speedMin, speedMax);

    g_WaterDrift.angleStep = FastDiffRots(angle, g_WaterDrift.angle) / frames;
    g_WaterDrift.speedStep = (speed - g_WaterDrift.speed) / frames;
    g_WaterDrift.timer = FastDoubleToInt(frames);
    g_WaterDrift.state = nextState;
}

/* one frame of a turn; at its end, a pause of period * (pauseMin..pauseMax) */
static inline void StepDriftTurn(float pauseMin, float pauseMax, short nextState)
{
    if (FastDecTimerS16((u16 *)&g_WaterDrift.timer) == 0) {
        float maxSpeed;

        g_WaterDrift.angle = FastWrapRot(g_WaterDrift.angle, g_WaterDrift.angleStep);
        g_WaterDrift.speed += g_WaterDrift.speedStep;
        maxSpeed = g_FrameTime * DRIFT_SPEED_SCALE;

        if (fabsf(g_WaterDrift.speed) > maxSpeed) {
            g_WaterDrift.speed = maxSpeed * (g_WaterDrift.speed - 0.0f < 0.0f ? -1.0f : 1.0f);
        }
    }
    else {
        g_WaterDrift.timer = FastDoubleToInt(FastIntToDouble(g_WaterDrift.period) * MB_randRangeFloat(pauseMin, pauseMax));
        g_WaterDrift.state = nextState;
    }
}

// 0x017f210 (0x5b0 bytes)
/* Mode 2: pause, turn up to 60 degrees off the base direction, repeat. Mode 3: pause, a wide turn
   (90 degrees, faster), a short pause, a small turn (45 degrees), repeat. */
void WaterDrift_Update(void)
{
    if (g_WaterDrift.mode == 2) {
        switch (g_WaterDrift.state) {
        case 0:
            if (FastDecTimerS16((u16 *)&g_WaterDrift.timer) != 0) {
                float frames = FastIntToDouble(g_WaterDrift.period) * MB_randRangeFloat(0.5f, 1.5f);

                StartDriftTurn(frames, 1.0471976f, g_WaterDrift.baseSpeed * 0.5f, g_WaterDrift.baseSpeed * 1.5f, 1);
            }
            break;
        case 1:
            StepDriftTurn(2.0f, 3.0f, 0);
            break;
        }
    }
    else if (g_WaterDrift.mode == 3) {
        switch (g_WaterDrift.state) {
        case 0:
            if (FastDecTimerS16((u16 *)&g_WaterDrift.timer) != 0) {
                float frames = MB_randRangeFloat(45.0f, 60.0f) * animationSpeed;

                StartDriftTurn(frames, 1.5707964f, g_WaterDrift.baseSpeed * 1.5f, g_WaterDrift.baseSpeed * 2.0f, 1);
            }
            break;
        case 1:
            StepDriftTurn(1.0f, 1.5f, 2);
            break;
        case 2:
            if (FastDecTimerS16((u16 *)&g_WaterDrift.timer) != 0) {
                float frames = MB_randRangeFloat(45.0f, 60.0f) * animationSpeed;

                StartDriftTurn(frames, 0.785398f, g_WaterDrift.baseSpeed * 0.8f, g_WaterDrift.baseSpeed * 1.2f, 3);
            }
            break;
        case 3:
            StepDriftTurn(3.0f, 5.0f, 0);
            break;
        }
    }
}
