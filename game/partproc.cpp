// game/partproc.cpp -- the particle pool: allocation, the per-frame update and drawing
// STATUS: CLEAN (checked against the asm; local names are mine)
// 11 functions, 0x11e448-0x11fb94
//
// Particles live in PartInstances[4096] (0x40 bytes each); g_PartUsed has a bit per slot.
// PartIndexNext is the lowest slot that may be free, PartIndexTop the highest one in use, so
// allocation and the update loop only look at that range. In Deadlocked this file is assembly
// (partproc.s); RaC1's PS3 build has it as C.
#include <math.h>
#include <stdio.h>
#include "game/partproc.h"
#include "game/boot.h"
#include "game/draw.h"
#include "game/main.h"
#include "game/mission.h"
#include "game/mobyproc.h"
#include "game/pad.h"
#include "game/partupd.h"
#include "idol/IMSeqMem.h"
#include "idol/idoldraw_ps3.h"
#include <cell/gcm/gcm_macros.h>
#include <cell/gcm/gcm_enum.h>

#define MAX_PARTS      4096
#define PART_DEAD      0x80             /* PartInstance.type: free slot */
#define PART_FADE_IN   8                /* frames a particle takes to fade out at the end of its life */

/* PartInstance.update[] as used by class 22 (a coloured, growing, falling puff) */
struct Part22 {
    Vec3 vel;                           /* 0x20 */
    float gravity;                      /* 0x2c  added to vel.z */
    u8 startColor[4];                   /* 0x30  RGBA at the start of its life */
    u8 endColor[4];                     /* 0x34  ... and at the end */
    short life;                         /* 0x38  frames */
    short _pad;
    float growth;                       /* 0x3c  added to scale */
};

static inline bool PartAlive(PartInstance *part)
{
    return (s8)part->type >= 0;
}

/* from the view: its x, y and z columns, the last two normalized, and its position */
static inline void SetPartView(void)
{
    float *view = (float *)(DAT_00902e9c + 0xa0);      /* 4x4 matrix, rows */
    float *pos = (float *)(DAT_00902e9c + 0x20);

    g_PartView.right.x = view[0];
    g_PartView.right.y = view[4];
    g_PartView.right.z = view[8];
    g_PartView.right.w = 0.0f;

    /* the binary includes the fourth row in the length (vrsqrtefp + one Newton step) */
    float upLen2 = view[1] * view[1] + view[5] * view[5] + view[9] * view[9] + view[13] * view[13];
    float upScale = 1.0f / sqrtf(upLen2);
    g_PartView.up.x = view[1] * upScale;
    g_PartView.up.y = view[5] * upScale;
    g_PartView.up.z = view[9] * upScale;
    g_PartView.up.w = 0.0f;

    float fwdLen2 = view[2] * view[2] + view[6] * view[6] + view[10] * view[10] + view[14] * view[14];
    float fwdScale = 1.0f / sqrtf(fwdLen2);
    g_PartView.fwd.x = view[2] * fwdScale;
    g_PartView.fwd.y = view[6] * fwdScale;
    g_PartView.fwd.z = view[10] * fwdScale;
    g_PartView.fwd.w = 0.0f;

    g_PartView.camPos.x = pos[0];
    g_PartView.camPos.y = pos[1];
    g_PartView.camPos.z = pos[2];
    g_PartView.camPos.w = 0.0f;
}

static inline void UpdateAllParts(void)
{
    for (int i = 0; i <= PartIndexTop; i++) {
        PartInstance *part = &PartInstances[i];

        if (PartAlive(part))
            PartUpdates[(u8)part->iClass](part);
    }
}

// 0x011e448 (0x14 bytes)
void SECTION_HEADER_PARTPROC(void)
{
    DAT_00729624 = 0x10000;
}

// 0x011e45c (0x11c bytes)
/* R1+R2+L2 held, L1 pressed: one update with the profile counters on, then print them */
void UpdatePartsDebug(void)
{
    if ((g_Pad.downButtons & (R1 | R2 | L2)) != (R1 | R2 | L2) || !(g_Pad.buttonsPressedThisFrame & L1)) {
        UpdateParts();
        return;
    }

    printf("\n");
    printf("*** frame %d ***\n", g_MainLoopFrames);
    printf("\n");
    *g_pDebugCounterMode = 0x81;
    UpdateParts_NotUsed();

    for (int i = 0; i < 128; i++) {
        u32 count = g_PartProfile[i].count;

        if (count != 0)
            printf("class: %d\tcount: %d\tcycles: %d\n", i, count, (int)(g_PartProfile[i].cycles << 5) / (int)count);
    }
}

// 0x011e580 (0x148 bytes)
PartInstance *CreatePartEx(int iClass, int unused)
{
    int index = PartIndexNext;

    if (index >= MAX_PARTS)
        return 0;

    PartIndexNext = index + 1;
    PartActiveCnt++;
    g_PartUsed[index >> 3] |= 1 << (index & 7);

    /* below the top: find the next free slot for PartIndexNext */
    if (PartIndexNext <= PartIndexTop) {
        PartIndexNext &= ~7;
        int byteIndex = PartIndexNext >> 3;

        while (PartIndexNext < MAX_PARTS) {
            bool found = false;

            for (int bit = 1; bit != 0x100; bit <<= 1) {
                if (!(bit & g_PartUsed[byteIndex])) {
                    found = true;
                    break;
                }
                PartIndexNext++;
            }
            if (found)
                break;

            byteIndex++;
        }
    }

    if (PartIndexNext - 1 > PartIndexTop)
        PartIndexTop = PartIndexNext - 1;

    PartInstance *part = &PartInstances[index];
    u32 *words = (u32 *)part;                   /* four vector stores in the binary */
    for (int i = 0; i < 16; i++)
        words[i] = 0;

    part->iClass = iClass;

    return part;
}

// 0x011e6c8 (0x24 bytes)
PartInstance *CreatePart(int iClass)
{
    return CreatePartEx(iClass, 0);
}

// 0x011e6ec (0x104 bytes)
void DeletePart(PartInstance *part)
{
    int index = part - PartInstances;

    PartActiveCnt--;
    g_PartUsed[index >> 3] &= ~(1 << (index & 7));

    /* it was the top one: move the top down to the next slot in use */
    if (PartIndexTop == index) {
        PartIndexTop = index - 1;

        int byteIndex = PartIndexTop >> 3;
        int bit = 1 << (PartIndexTop & 7);
        while (PartIndexTop >= 0) {
            u8 used = g_PartUsed[byteIndex];
            bool found = false;

            for (; bit != 0; bit >>= 1) {
                if (bit & used) {
                    found = true;
                    break;
                }
                PartIndexTop--;
            }
            if (found)
                break;

            byteIndex--;
            bit = 0x80;
        }
    }

    part->type = PART_DEAD;

    if (index < PartIndexNext)
        PartIndexNext = index;
}

// 0x011e7f0 (0x64 bytes)
/* particles in use, counting whole bytes of g_PartUsed below PartIndexTop */
int CountActiveParts(void)
{
    int count = 0;

    for (int i = 0; i < PartIndexTop >> 3; i++)
        count += g_NibbleBitCount[g_PartUsed[i] & 0xf] + g_NibbleBitCount[g_PartUsed[i] >> 4];

    return count;
}

// 0x011e8a0 (0x270 bytes)
void UpdateParts(void)
{
    SetPartView();
    UpdateAllParts();
}

// 0x011eb10 (0xb4 bytes)
void UpdateParts_NotUsed(void)
{
    UpdateAllParts();
}

/* the vertices DrawParts writes: 4 per quad */
struct PartVertex {
    float pos[3];
    float uv[2];
    u32 color;                          /* RGBA bytes, as the RSX reads CELL_GCM_VERTEX_UB */
};

#define VTX_FORMAT(size, type)  (sizeof(PartVertex) << 8 | (size) << 4 | (type))
#define VTX_DISABLED            CELL_GCM_VERTEX_F               /* size 0 */
#define MAIN_MEMORY             0x80000000                      /* CELL_GCM_LOCATION_MAIN << 31 */
#define DRAW_BATCH              256                             /* vertices per DRAW_ARRAYS word */
#define TEX_ADDRESS_CLAMP       0x10303                         /* TEXTURE_ADDRESS word used for particles */

/* the world matrix (vertex program constants 4-7): identity, @0x11eec0 */
static const float s_PartWorldMatrix[16] = {
    1.0f, 0.0f, 0.0f, 0.0f,
    0.0f, 1.0f, 0.0f, 0.0f,
    0.0f, 0.0f, 1.0f, 0.0f,
    0.0f, 0.0f, 0.0f, 1.0f,
};

static inline void Emit(RenderingStep *ctx, u32 word)
{
    *ctx->command++ = (RsxCmd)word;
}

static inline void EmitMethod(RenderingStep *ctx, u32 method, u32 value)
{
    Emit(ctx, CELL_GCM_METHOD(method, 1));
    Emit(ctx, value);
}

static inline u32 ByteSwap32(u32 value)
{
    return value >> 24 | (value >> 8 & 0xff00) | (value & 0xff00) << 8 | value << 24;
}

/* v' = q v q* */
static inline void QuatRotate(const float *q, const float *v, float *out)
{
    float tx = q[3] * v[0] + q[1] * v[2] - q[2] * v[1];
    float ty = q[3] * v[1] + q[2] * v[0] - q[0] * v[2];
    float tz = q[3] * v[2] + q[0] * v[1] - q[1] * v[0];
    float tw = q[0] * v[0] + q[1] * v[1] + q[2] * v[2];

    out[0] = tw * q[0] + tx * q[3] - ty * q[2] + tz * q[1];
    out[1] = tw * q[1] + ty * q[3] - tz * q[0] + tx * q[2];
    out[2] = tw * q[2] + tz * q[3] - tx * q[1] + ty * q[0];
}

static inline void SetCorner(PartVertex *vertex, float x, float y, float z)
{
    vertex->pos[0] = x;
    vertex->pos[1] = y;
    vertex->pos[2] = z;
}

/* the uv of the four corners and their colours (both PartVertex layouts use the same uvs) */
static inline void SetQuadUVs(PartVertex *quad)
{
    quad[0].uv[0] = 1.0f;
    quad[0].uv[1] = 0.0f;
    quad[1].uv[0] = 1.0f;
    quad[1].uv[1] = 1.0f;
    quad[2].uv[0] = 0.0f;
    quad[2].uv[1] = 1.0f;
    quad[3].uv[0] = 0.0f;
    quad[3].uv[1] = 0.0f;
}

/* start a new batch when the blend or texture changes */
static inline void AddToBatch(int blend, u32 *tex, u32 *vertexOffset)
{
    if (blend != g_PartBatchBlend || g_PartBatchTex != tex) {
        if (g_PartBatchCount != 0)
            DrawPartBatch(g_PartBatchCount, vertexOffset);

        g_PartBatchCount = 0;
    }

    g_PartBatchCount++;
    g_PartBatchBlend = blend;
    g_PartBatchTex = tex;
}

// 0x011ebc4 (0x2f4 bytes)
/* draw quadCount quads from the vertex buffer at *vertexOffset (and move it past them) with the
   batch's blend and texture */
void DrawPartBatch(int quadCount, u32 *vertexOffset)
{
    RenderingStep *ctx = DL_Pass;
    u32 vertices = *vertexOffset;

    *vertexOffset = vertices + quadCount * 4 * sizeof(PartVertex);

    if (g_PartBatchBlend != 0)
        idol_draw::DrawDepth(ctx, g_PartBatchBlend);

    /* texture unit 0: the header's words, with the address mode replaced */
    u32 *tex = g_PartBatchTex;
    Emit(ctx, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_TEXTURE_OFFSET, 7));
    Emit(ctx, tex[0]);
    Emit(ctx, tex[1]);
    Emit(ctx, TEX_ADDRESS_CLAMP);
    Emit(ctx, tex[3]);
    Emit(ctx, tex[4]);
    Emit(ctx, tex[5]);
    Emit(ctx, tex[6]);
    EmitMethod(ctx, CELL_GCM_NV4097_SET_TEXTURE_CONTROL3, tex[7]);

    /* position, uv and colour arrays */
    u32 offset = vertices - *(u32 *)(g_pIdolDraw + 0x4a8);
    EmitMethod(ctx, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_OFFSET + 0 * 4, offset | MAIN_MEMORY);
    EmitMethod(ctx, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_OFFSET + 1 * 4, (offset + 12) | MAIN_MEMORY);
    EmitMethod(ctx, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_OFFSET + 3 * 4, (offset + 20) | MAIN_MEMORY);

    /* draw arrays: the first batch of up to 256 vertices, then whole batches, then the rest */
    int count = quadCount * 4;
    int first = count < DRAW_BATCH ? count : DRAW_BATCH;
    int rest = count - first;
    if (rest < 0)
        rest = 0;
    int full = (u32)rest >> 8;
    int partial = rest & 0xff;

    Emit(ctx, CELL_GCM_METHOD_FLAG_NON_INCREMENT | CELL_GCM_METHOD(CELL_GCM_NV4097_INVALIDATE_VERTEX_FILE, 3));
    Emit(ctx, 0);
    Emit(ctx, 0);
    Emit(ctx, 0);
    EmitMethod(ctx, CELL_GCM_NV4097_SET_BEGIN_END, CELL_GCM_PRIMITIVE_QUADS);
    Emit(ctx, CELL_GCM_METHOD_FLAG_NON_INCREMENT |
              CELL_GCM_METHOD(CELL_GCM_NV4097_DRAW_ARRAYS, full + (partial != 0) + (first != 0)));

    u32 start = 0;
    if (first != 0) {
        Emit(ctx, (first << 24) - 0x1000000);
        start = first;
    }

    for (int i = 0; i < full; i++) {
        Emit(ctx, start | 0xff000000);
        start += DRAW_BATCH;
    }

    if (partial != 0)
        Emit(ctx, start | ((partial << 24) - 0x1000000));

    EmitMethod(ctx, CELL_GCM_NV4097_SET_BEGIN_END, 0);
}

// 0x011ef18 (0x9f0 bytes)
/* build a quad per visible particle into a frame-heap vertex buffer and draw them in batches of
   the same blend and texture. Classes 0/1 are billboards rotated by PartInstance.rot (type 0
   facing the camera, type 1 lying flat), 2/3 are beams from pos to update[0..2] */
void DrawParts(void)
{
    RenderingStep *ctx = DL_Pass;
    PartVertex *buffer = (PartVertex *)idol::AllocateMemAlign((int)FrameHeap, (PartIndexTop * 4 + 4) * sizeof(PartVertex), 16);
    u32 vertexOffset = (u32)buffer;
    PartVertex *quad = buffer;

    idol_draw::BindVertexProgram(g_pIdolDraw, (int)ctx, 5);
    idol_draw::BindFragmentProgram(g_pIdolDraw, (int)ctx, 6);

    EmitMethod(ctx, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + 0 * 4, VTX_FORMAT(3, CELL_GCM_VERTEX_F));
    EmitMethod(ctx, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + 1 * 4, VTX_FORMAT(2, CELL_GCM_VERTEX_F));
    EmitMethod(ctx, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + 3 * 4, VTX_FORMAT(4, CELL_GCM_VERTEX_UB));

    const u32 *world = (const u32 *)s_PartWorldMatrix;
    Emit(ctx, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_TRANSFORM_CONSTANT_LOAD, 17));
    Emit(ctx, 4);
    for (int i = 0; i < 16; i++)
        Emit(ctx, world[i]);

    for (int i = 0; i <= PartIndexTop; i++) {
        PartInstance *part = &PartInstances[i];

        if (!PartAlive(part))
            continue;

        int kind = part->type & 3;
        if (kind <= 1) {
            /* billboard: cull against the view frustum with the particle's size */
            float size = part->scale * (1.0f / 210000.0f);
            float x = part->pos.x, y = part->pos.y, z = part->pos.z;
            bool visible = true;

            for (int plane = 0; plane < 6; plane++) {
                Vec4 *frustum = &g_FrustumPlanes[plane];

                if (frustum->y * y + (frustum->z * z + (frustum->x * x + frustum->w)) + size < 0.0f) {
                    visible = false;
                    break;
                }
            }
            if (!visible)
                continue;

            /* big particles shrink */
            if (!g_PartNoShrink && size > 0.5f) {
                size *= 0.6f;
                if (size < 0.5f)
                    size = 0.5f;
                part->scale = size * 210000.0f;
            }

            int blend = (u8)part->gsAlpha;
            u32 *tex = (u32 *)(EffectTexHeaders + GetEffectTexAddr(part->tex) * 36);
            u32 color = ByteSwap32(part->color);
            quad[0].color = quad[1].color = quad[2].color = quad[3].color = color;
            SetQuadUVs(quad);

            float angle = (float)((u8)part->rot + 32) * 3.1415927f * (1.0f / 128.0f) + 3.1415927f;
            float half = angle * 0.5f;
            float q[4], right[3], up[3];
            if (part->type == 0) {
                /* rotate the camera's right and up around its forward axis */
                float s = sinf(half);
                q[0] = g_PartView.fwd.x * s;
                q[1] = g_PartView.fwd.y * s;
                q[2] = g_PartView.fwd.z * s;
                q[3] = cosf(half);
                right[0] = g_PartView.right.x; right[1] = g_PartView.right.y; right[2] = g_PartView.right.z;
                up[0] = g_PartView.up.x; up[1] = g_PartView.up.y; up[2] = g_PartView.up.z;
            } else {
                /* lying in the world x/y plane, rotated around z */
                q[0] = 0.0f;
                q[1] = 0.0f;
                q[2] = sinf(half);
                q[3] = cosf(half);
                right[0] = 1.0f; right[1] = 0.0f; right[2] = 0.0f;
                up[0] = 0.0f; up[1] = 1.0f; up[2] = 0.0f;
            }

            float side[3], height[3];
            QuatRotate(q, right, side);
            QuatRotate(q, up, height);
            for (int axis = 0; axis < 3; axis++) {
                side[axis] *= size;
                height[axis] *= size;
            }

            float cornerX = x - side[0] * 0.5f - height[0] * 0.5f;
            float cornerY = y - side[1] * 0.5f - height[1] * 0.5f;
            float cornerZ = z - side[2] * 0.5f - height[2] * 0.5f;
            SetCorner(&quad[1], cornerX, cornerY, cornerZ);
            SetCorner(&quad[0], cornerX + side[0], cornerY + side[1], cornerZ + side[2]);
            SetCorner(&quad[2], cornerX + height[0], cornerY + height[1], cornerZ + height[2]);
            SetCorner(&quad[3], cornerX + height[0] + side[0], cornerY + height[1] + side[1], cornerZ + height[2] + side[2]);
            quad += 4;

            AddToBatch(blend, tex, &vertexOffset);
        } else {
            /* beam from pos to update[0..2], as wide as pos.w, turned to face the camera */
            float *end = (float *)part->update;
            float x0 = part->pos.x, y0 = part->pos.y, z0 = part->pos.z;
            float x1 = end[0], y1 = end[1], z1 = end[2];
            int blend = (u8)part->gsAlpha;
            int texIndex;

            if (kind == 3) {
                texIndex = GetEffectTexAddr(part->tex);
            } else {
                part->pos.w = 0.05f;
                texIndex = (int)GetEffectTex(22);
            }
            u32 *tex = (u32 *)(EffectTexHeaders + texIndex * 36);

            quad[1].color = quad[2].color = ByteSwap32(part->color);
            quad[3].color = quad[0].color = ByteSwap32(*(u32 *)&part->scale);   /* second colour */
            SetQuadUVs(quad);

            float midX = (x0 + x1) * 0.5f - g_PartView.camPos.x;
            float midY = (y0 + y1) * 0.5f - g_PartView.camPos.y;
            float midZ = (z0 + z1) * 0.5f - g_PartView.camPos.z;
            float dirX = x1 - x0, dirY = y1 - y0, dirZ = z1 - z0;
            float normalX = midY * dirZ - midZ * dirY;
            float normalY = midZ * dirX - midX * dirZ;
            float normalZ = midX * dirY - midY * dirX;
            float length = sqrtf(normalX * normalX + normalY * normalY + normalZ * normalZ);
            if (length != 0.0f) {
                normalX /= length;
                normalY /= length;
                normalZ /= length;
            }

            float width = part->pos.w;
            normalX *= width;
            normalY *= width;
            normalZ *= width;

            float cornerX = x0 - normalX * 0.5f;
            float cornerY = y0 - normalY * 0.5f;
            float cornerZ = z0 - normalZ * 0.5f;
            SetCorner(&quad[1], cornerX, cornerY, cornerZ);
            SetCorner(&quad[0], cornerX + dirX, cornerY + dirY, cornerZ + dirZ);
            SetCorner(&quad[2], cornerX + normalX, cornerY + normalY, cornerZ + normalZ);
            SetCorner(&quad[3], cornerX + normalX + dirX, cornerY + normalY + dirY, cornerZ + normalZ + dirZ);
            quad += 4;

            AddToBatch(blend, tex, &vertexOffset);
        }
    }

    if (g_PartBatchCount != 0)
        DrawPartBatch(g_PartBatchCount, &vertexOffset);

    EmitMethod(ctx, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + 0 * 4, VTX_DISABLED);
    EmitMethod(ctx, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + 1 * 4, VTX_DISABLED);
    g_PartBatchCount = 0;
    EmitMethod(ctx, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + 3 * 4, VTX_DISABLED);
}

// 0x011f918 (0x27c bytes)
/* class 22: drifts and falls, grows, and fades from its start colour to its end colour; the
   last PART_FADE_IN frames also fade the alpha */
void UpdatePart_22(PartInstance *part)
{
    Part22 *data = (Part22 *)part->update;

    part->timer--;
    short timer = part->timer;
    if (timer < 1) {
        DeletePart(part);
        return;
    }

    part->rot++;

    float fade = (float)((timer < PART_FADE_IN ? timer : PART_FADE_IN) << 9) * (1.0f / 4096.0f);
    float age = (float)timer * (1.0f / (float)data->life);     /* 1 at birth, 0 at the end */
    float rest = 1.0f - age;

    part->pos.x = data->vel.x + part->pos.x;
    part->pos.y = data->vel.y + part->pos.y;
    part->pos.z = data->vel.z + part->pos.z;
    data->vel.z = data->gravity + data->vel.z;
    part->scale = part->scale + data->growth;

    u8 *color = (u8 *)&part->color;
    color[0] = (int)(data->endColor[0] * rest + data->startColor[0] * age);
    color[1] = (int)(data->endColor[1] * rest + data->startColor[1] * age);
    color[2] = (int)(data->endColor[2] * rest + data->startColor[2] * age);
    color[3] = (int)(data->endColor[3] * fade * rest + data->startColor[3] * fade * age);
}
