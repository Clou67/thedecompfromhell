// game/mesh.cpp -- water surfaces: tile wave simulation, water sheets, environment-map UVs
// STATUS: CLEAN (checked against the asm; local names are mine)
// 19 functions, 0xe9114-0xea378
//
// A water surface is an array of 16x16-height tiles (WaterTile). Each tile keeps three height
// buffers; a wave step reads one buffer as "previous", stages the current heights with a border
// taken from the neighbours (StageTileBuf, 19 rows of 24 floats), and writes the new heights plus
// the neighbours' border copies (WaterTile_StepWave).
#include <math.h>
#include <string.h>
#include "game/mesh.h"
#include "game/camera.h"
#include "game/water.h"
#include "idol/fastfunc.h"

#define STAGE_W 24          /* staged grid: row 0 = top border, rows 1-16 the tile, 17-18 bottom;
                               col 3 = left border, cols 4-19 the tile, 20-21 right */
#define NO_LINK 0xff

#define WAVE_SPREAD 0.25f   /* 0xe9bfc */
#define WAVE_DAMP   0.0625f /* 0xe9c00 */
#define ENV_SCALE   0.45f
#define ENV_UV      0.5f    /* 0xea1f0 */

// 0x00e9114 (0x14 bytes)
void SECTION_HEADER_MESH(void)
{
    DAT_00726aac = 0x10000;
}

/* PS2 VU code, emptied on PS3 */
// 0x00e9130 (0x4 bytes)
void STUB_000e9130(...)
{
}
// 0x00e9134 (0x4 bytes)
void STUB_000e9134(...)
{
}
// 0x00e9138 (0x4 bytes)
void STUB_000e9138(...)
{
}
// 0x00e913c (0x4 bytes)
void STUB_000e913c(...)
{
}
// 0x00e9140 (0x8 bytes)
int STUB_000e9140(...)
{
    return 0;
}
// 0x00e9148 (0x4 bytes)
void STUB_000e9148(...)
{
}
// 0x00e914c (0x4 bytes)
void STUB_000e914c(...)
{
}
// 0x00e9150 (0x8 bytes)
int STUB_000e9150(...)
{
    return 0;
}
// 0x00e9158 (0x4 bytes)
void STUB_000e9158(...)
{
}

// 0x00e915c (0x4c bytes)
void AddUVOffsets(Vec2 *dst, Vec2 *src, int count, Vec2 *offset)
{
    float u = offset->x, v = offset->y;
    for (; count > 0; count--, dst++, src++) {
        dst->x = src->x + u;
        dst->y = src->y + v;
    }
}

// 0x00e91a8 (0x138 bytes)
void StageTileBuf(float (*stage)[24], WaterTileBuf *buf)
{
    unsigned i;

    memcpy(&stage[0][4], buf->heightTop, sizeof(buf->heightTop));
    for (i = 0; i < 16; i++)
        memcpy(&stage[i + 1][4], buf->height[i], sizeof(buf->height[i]));
    memcpy(&stage[17][4], buf->heightBottom, sizeof(buf->heightBottom));
    memcpy(&stage[18][4], buf->heightBottom2, sizeof(buf->heightBottom2));
    for (i = 0; i < 16; i++) {
        stage[i + 1][3] = buf->heightLeft[i];
        stage[i + 1][20] = buf->heightRight[i];
        stage[i + 1][21] = buf->heightRight2[i];
    }
    stage[0][3] = buf->heightCorner[0];
    stage[0][20] = buf->heightCorner[1];
    stage[17][3] = buf->heightCorner[2];
    stage[17][20] = buf->heightCorner[3];
    stage[17][21] = buf->heightCorner[4];
    stage[18][20] = buf->heightCorner[5];
}

// 0x00e92e8 (0xb4 bytes)
void WaterTileBufLerp(float t, float *dst, float *bufA, float *bufB)
{
    float u = 1.0f - t;
    for (unsigned i = 0; i < sizeof(WaterTileBuf) / sizeof(float); i++)
        dst[i] = bufA[i] * u + bufB[i] * t;
}

#define SHADE_PIVOT    0.573f   /* 0xe93f8: light level left unchanged by the contrast */
#define SHADE_CONTRAST 3.0f
#define SHADE_SCALE    512.0f
#define SHADE_AMBIENT  64

static inline float InvSqrt(float x)
{
    /* the binary: vrsqrtefp plus one Newton step, keeping the estimate if the step gives NaN */
    return 1.0f / sqrtf(x);
}

// 0x00e9470 (0x78c bytes)
/* light and environment-map one staged tile: for each of its 17x17 vertices a grey level from the
   surface normal (central differences of the staged heights) and the reflection of the view
   direction as UVs. Written 4-wide with the vector unit in the binary. */
void ShadeVerts(WaterTile *tile)
{
    WaterStage *stage = (WaterStage *)g_ScratchBuf;
    Vec3 light = WaterTileConsts.lightDir;
    float camX = GameCamera.posX, camY = GameCamera.posY, camZ = GameCamera.posZ;
    float gx = WaterTileConsts.TileGridSize.x, gy = WaterTileConsts.TileGridSize.y;
    float y = tile->tilePos.y + WaterTileConsts.TileOffset.y;
    int k = 0;

    for (int row = 0; row < WATER_VERTS; row++, y += gy) {
        float x = tile->tilePos.x + WaterTileConsts.TileOffset.x;
        for (int col = 0; col < WATER_VERTS; col++, k++, x += gx) {
            float *g = &stage->grid[row + 1][col + 4];
            float h = g[0], hl = g[-1], hr = g[1], hu = g[-24], hd = g[24];

            /* sum of the normals of the up-left and down-right triangles */
            float nx = gy * (h - hl) + gy * (hr - h);
            float ny = gx * (h - hu) + gx * (hd - h);
            float nz = -(gx * gy) + -(gx * gy);
            float s = InvSqrt(nx * nx + ny * ny + nz * nz);
            nx *= s; ny *= s; nz *= s;

            float lit = (nx * light.x + ny * light.y + nz * light.z - SHADE_PIVOT) * SHADE_CONTRAST + SHADE_PIVOT;
            if (lit < 0.0f) lit = 0.0f;
            if (lit > 1.0f) lit = 1.0f;
            int grey = (int)(lit * SHADE_SCALE) + SHADE_AMBIENT;
            if (grey > 0xff) grey = 0xff;
            stage->color[k] = grey << 24 | grey << 16 | grey << 8 | 0xff;

            float vx = camX - x, vy = camY - y, vz = camZ - tile->tilePos.z - h;
            float t = InvSqrt(vz * vz + (vy * vy + vx * vx));
            vx *= t; vy *= t; vz *= t;
            /* reflect off the surface (normal flipped to face up) when the view is in front of it */
            float d = vx * -nx + vy * -ny + vz * -nz;
            if (d >= 0.0f) {
                vx -= -nx * (d * 2.0f);
                vy -= -ny * (d * 2.0f);
            }
            stage->envUV[k].x = vx * WaterTileConsts.texScale * 0.5f + 0.5f;
            stage->envUV[k].y = vy * WaterTileConsts.texScale * 0.5f + 0.5f;
        }
    }
}

// 0x00e9c08 (0x320 bytes)
/* one step of the wave equation for tiles[tileIdx]: buf[bufIdx] holds the previous heights and
   gets the new ones, then the edges are copied into the neighbours' border arrays */
void WaterTile_StepWave(float (*stage)[24], int tileIdx, int bufIdx, WaterTile *tiles)
{
    WaterTile *tile = &tiles[tileIdx];
    WaterTileBuf *b = &tile->buf[bufIdx];
    float minHeight = WaterTileConsts.minHeight;
    int r, c, i;

    for (r = 0; r < 16; r++, stage++) {
        for (c = 0; c < 16; c++) {
            float *s = &stage[0][c];
            float h = (s[3] + s[4] + s[5] + s[STAGE_W + 3] + s[STAGE_W + 5]
                       + s[2 * STAGE_W + 3] + s[2 * STAGE_W + 4] + s[2 * STAGE_W + 5]) * WAVE_SPREAD
                      - b->height[r][c];
            if (minHeight - fabsf(h) < 0.0f) h -= h * WAVE_DAMP;
            b->height[r][c] = h;
        }
    }

    if (tile->tileLinkTop != NO_LINK) {
        WaterTileBuf *n = &tiles[tile->tileLinkTop].buf[bufIdx];
        memcpy(n->heightBottom, b->height[0], sizeof(n->heightBottom));
        memcpy(n->heightBottom2, b->height[1], sizeof(n->heightBottom2));
    }
    if (tile->tileLinkLeft != NO_LINK) {
        WaterTileBuf *n = &tiles[tile->tileLinkLeft].buf[bufIdx];
        for (i = 0; i < 16; i++) {
            n->heightRight[i] = b->height[i][0];
            n->heightRight2[i] = b->height[i][1];
        }
    }
    if (tile->tileLinkBottom != NO_LINK)
        memcpy(tiles[tile->tileLinkBottom].buf[bufIdx].heightTop, b->height[15], sizeof(b->height[15]));
    if (tile->tileLinkRight != NO_LINK) {
        WaterTileBuf *n = &tiles[tile->tileLinkRight].buf[bufIdx];
        for (i = 0; i < 16; i++) n->heightLeft[i] = b->height[i][15];
    }
    if (tile->tileLinkCorners[0] != NO_LINK) {         /* up-left */
        WaterTileBuf *n = &tiles[tile->tileLinkCorners[0]].buf[bufIdx];
        n->heightCorner[3] = b->height[0][0];
        n->heightCorner[4] = b->height[0][1];
        n->heightCorner[5] = b->height[1][0];
    }
    if (tile->tileLinkCorners[1] != NO_LINK)           /* up-right */
        tiles[tile->tileLinkCorners[1]].buf[bufIdx].heightCorner[2] = b->height[0][15];
    if (tile->tileLinkCorners[2] != NO_LINK)           /* down-left */
        tiles[tile->tileLinkCorners[2]].buf[bufIdx].heightCorner[1] = b->height[15][0];
    if (tile->tileLinkCorners[3] != NO_LINK)           /* down-right */
        tiles[tile->tileLinkCorners[3]].buf[bufIdx].heightCorner[0] = b->height[15][15];
}

// 0x00e9f28 (0x4 bytes)
void STUB_000e9f28(...)
{
}

#define SHEET_BRIGHTEN 1.38f            /* 0xe9f30 */
#define SHEET_PHASE    0.0015339808f    /* 0xe9f44: 2pi / 4096 */

/* one channel of the sheet colour brightened, saturating at 255 (done 3-wide in the vector unit) */
static inline u32 Brighten(u32 c)
{
    float f = (float)(c & 0xff) * SHEET_BRIGHTEN;
    u32 v = f <= 0.0f ? 0 : f >= 4294967295.0f ? 0xffffffff : (u32)f;   /* vctuxs */
    return v > 0xff ? 0xff : v;
}

// 0x00e9f48 (0x2a0 bytes)
/* vertices of a water sheet: height blended between two poses, both UV layers wobbled by a wave
   whose phase comes from the vertex position */
void BuildVerts(WaterSheet *sheet, WaterSheetVert *out)
{
    u32 c = sheet->color;
    u32 color = Brighten(c) << 24 | Brighten(c >> 8) << 16 | Brighten(c >> 16) << 8 | 0xff;

    for (int i = 0; i < sheet->vertexCount; i++, out++) {
        WaterSheetSrcVert *src = &sheet->srcVerts[i];
        u32 seed = *(u32 *)&src->x + *(u32 *)&src->y;
        u32 idx = (((seed >> 11) & 0x1fe0) + sheet->frameCounter & 0xff) << 4;
        float phase = (float)idx * SHEET_PHASE - 3.1415927f;
        float t = sheet->zBlend;

        out->pos.x = src->x;
        out->pos.y = src->y;
        out->pos.z = src->z0 * t + src->z1 * (1.0f - t);
        float s = sinf(phase) * sheet->waveAmp;
        float k = cosf(phase) * sheet->waveAmp;
        Vec2 *uv = &sheet->srcUVs[i];
        out->uv0.x = s + (uv->x + sheet->offsetU0);
        out->color = color;
        out->uv0.y = k + (uv->y + sheet->offsetV0);
        out->uv1.x = (uv->x + sheet->offsetU1) - s;
        out->uv1.y = (uv->y + sheet->offsetV1) - k;
    }
}

// 0x00ea1e8 (0x4 bytes)
void STUB_000ea1e8(...)
{
}

// 0x00ea1f8 (0x180 bytes)
/* environment-map UVs: reflect the direction to the camera off each normal */
void NormalsToEnvUV(int count, Vec3 *positions, Vec3 *normals, Vec2 *outUV)
{
    for (int i = 0; i < count; i++, positions++, normals++, outUV++) {
        float view[4], refl[4];
        view[0] = GameCamera.posX - positions->x;
        view[1] = GameCamera.posY - positions->y;
        view[2] = GameCamera.posZ - positions->z;
        view[3] = *(float *)GameCamera.field8_0x14c;
        float len = sqrtf(view[2] * view[2] + (view[0] * view[0] + view[1] * view[1]));
        float s = ENV_SCALE / len;
        for (int k = 0; k < 3; k++) view[k] = len == 0.0f ? 0.0f : view[k] * s;   /* guarded normalize */
        FastVecReflect(refl, view, (float *)normals);    /* 0x500608, name a guess (reflects off the normal) */
        outUV->x = refl[0] * ENV_UV;
        outUV->y = refl[1] * ENV_UV;
    }
}
