// game/skyproc.cpp -- drawing the sky sprites (sun, moons, ...)
// STATUS: CLEAN (checked against the asm; local names are mine)
// 6 functions, 0x15aa0c-0x15b574
//
// In Deadlocked this file is assembly (skyproc.s: SkySpriteProc, SkyShellSetup, SkyProcessVerts,
// ...); RaC1's PS3 build keeps only SkySpriteProc, in C, and stubs for the rest.
#include <math.h>
#include "game/skyproc.h"
#include "game/boot.h"
#include "game/draw.h"
#include "game/skyfunc.h"
#include "idol/idol_draw.h"
#include "idol/mUnk.h"
#include "idol/tiefunc.h"
#include <cell/gcm/gcm_macros.h>
#include <cell/gcm/gcm_enum.h>

/* the vertices SkySpriteProc writes, 4 per sprite (the same layout as particles) */
struct SkyVertex {
    float pos[3];
    float uv[2];
    u32 color;
};

#define VTX_FORMAT(size, type)  (sizeof(SkyVertex) << 8 | (size) << 4 | (type))
#define VTX_DISABLED            CELL_GCM_VERTEX_F
#define MAIN_MEMORY             0x80000000

/* vertex program constants 4-7: identity world matrix, @0x15aa40 */
static const float s_SkyWorldMatrix[16] = {
    1.0f, 0.0f, 0.0f, 0.0f,
    0.0f, 1.0f, 0.0f, 0.0f,
    0.0f, 0.0f, 1.0f, 0.0f,
    0.0f, 0.0f, 0.0f, 1.0f,
};

/* uv of the four corners */
static const float s_SkyCornerUV[4][2] = {
    { 0.0f, 0.0f },
    { 1.0f, 0.0f },
    { 0.0f, 1.0f },
    { 1.0f, 1.0f },
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

static inline u32 SwapBytes(u32 value)
{
    return value >> 24 | (value >> 8 & 0xff00) | (value & 0xff00) << 8 | value << 24;
}

/* a matrix column, normalized unless its length is 0 */
static inline void ViewAxis(const float *view, int column, float *out)
{
    float x = view[column];
    float y = view[4 + column];
    float z = view[8 + column];

    float length = sqrtf(z * z + (x * x + y * y));

    if (length != 0.0f) {
        x /= length;
        y /= length;
        z /= length;
    }

    out[0] = x;
    out[1] = y;
    out[2] = z;
}

/* v' = q v q* (the binary expands this with the products of the axes precomputed) */
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

// 0x015aa0c (0x14 bytes)
void SECTION_HEADER_SKYPROC(void)
{
    DAT_00731b48 = 0x10000;
}

// 0x015aa80 (0xadc bytes)
/* draw each sky sprite as a camera-facing quad, rotated by its rot, around the camera */
void SkySpriteProc(void)
{
    const float *view = (const float *)(DAT_00902e9c + 0xa0);       /* 4x4 matrix, rows */
    const float *cameraPos = (const float *)(DAT_00902e9c + 0x20);

    float right[3], up[3], forward[3];

    ViewAxis(view, 0, right);
    ViewAxis(view, 1, up);
    ViewAxis(view, 2, forward);

    float camX = cameraPos[0];
    float camY = cameraPos[1];
    float camZ = cameraPos[2];

    sky_sprite *sprite = Sky->sprites;

    for (int i = 0; i < Sky->sprite_cnt; i++, sprite++) {
        QuadDef quad;

        quad.clamp = 1;
        quad.alpha = (u8)sprite->gs_alpha;
        quad.rgba[0] = quad.rgba[1] = quad.rgba[2] = quad.rgba[3] = sprite->rgba;

        int texIndex = GetSkyTex((u8)sprite->tex);
        quad.tex0 = texIndex;
        quad.tex1 = GetSkyTex((u8)sprite->tex);

        float scale = sprite->type == 0 ? 0.5f : 0.4f;

        /* rotate the camera's right and up around its forward axis */
        float half = ((sprite->rot + 32.0f) * 3.1415927f * (1.0f / 128.0f) + 1.5707964f) * 0.5f;
        float sine = sinf(half);
        float q[4] = { forward[0] * sine, forward[1] * sine, forward[2] * sine, cosf(half) };

        float side[3], height[3];

        QuatRotate(q, right, side);
        QuatRotate(q, up, height);

        for (int axis = 0; axis < 3; axis++) {
            side[axis] *= scale;
            height[axis] *= scale;
        }

        float cornerX = sprite->pos.x + camX - side[0] * 0.5f - height[0] * 0.5f;
        float cornerY = sprite->pos.y + camY - side[1] * 0.5f - height[1] * 0.5f;
        float cornerZ = sprite->pos.z + camZ - side[2] * 0.5f - height[2] * 0.5f;

        quad.xyzw[0].x = cornerX;
        quad.xyzw[0].y = cornerY;
        quad.xyzw[0].z = cornerZ;
        quad.xyzw[1].x = cornerX + side[0];
        quad.xyzw[1].y = cornerY + side[1];
        quad.xyzw[1].z = cornerZ + side[2];
        quad.xyzw[2].x = cornerX + height[0];
        quad.xyzw[2].y = cornerY + height[1];
        quad.xyzw[2].z = cornerZ + height[2];
        quad.xyzw[3].x = cornerX + height[0] + side[0];
        quad.xyzw[3].y = cornerY + height[1] + side[1];
        quad.xyzw[3].z = cornerZ + height[2] + side[2];

        for (int corner = 0; corner < 4; corner++)
            quad.xyzw[corner].w = 1.0f;

        /* the vertex buffer */
        RenderingStep *ctx = ForwardPass;
        u32 texHeaders = EffectTexHeaders;

        idol_draw::BindVertexProgram(g_pIdolDraw, (int)ctx, 5);
        idol_draw::BindFragmentProgram(g_pIdolDraw, (int)ctx, 6);

        SkyVertex *vertices = (SkyVertex *)idol::AllocateMemAlign((int)FrameHeap, 4 * sizeof(SkyVertex), 16);

        for (int corner = 0; corner < 4; corner++) {
            vertices[corner].pos[0] = quad.xyzw[corner].x;
            vertices[corner].pos[1] = quad.xyzw[corner].y;
            vertices[corner].pos[2] = quad.xyzw[corner].z;
            vertices[corner].uv[0] = s_SkyCornerUV[corner][0];
            vertices[corner].uv[1] = s_SkyCornerUV[corner][1];
            vertices[corner].color = SwapBytes(quad.rgba[corner]);
        }

        /* blend, texture and arrays */
        if (quad.alpha != 0)
            idol_draw::DrawDepth(ctx, quad.alpha);

        int sampler0, sampler1;

        DecodeTexWrapModes(1, &sampler0, &sampler1);
        IdolDraw_SetTexture(ctx, 0, (u8 *)(texHeaders + texIndex * 36), sampler0, sampler1);
        idol_draw::ResetPassState(ctx);

        EmitMethod(ctx, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + 0 * 4, VTX_FORMAT(3, CELL_GCM_VERTEX_F));
        EmitMethod(ctx, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + 1 * 4, VTX_FORMAT(2, CELL_GCM_VERTEX_F));
        EmitMethod(ctx, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + 3 * 4, VTX_FORMAT(4, CELL_GCM_VERTEX_UB));

        u32 offset = (u32)vertices - *(u32 *)(g_pIdolDraw + 0x4a8);

        EmitMethod(ctx, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_OFFSET + 0 * 4, offset | MAIN_MEMORY);
        EmitMethod(ctx, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_OFFSET + 1 * 4, (offset + 12) | MAIN_MEMORY);
        EmitMethod(ctx, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_OFFSET + 3 * 4, (offset + 20) | MAIN_MEMORY);

        const u32 *world = (const u32 *)s_SkyWorldMatrix;

        Emit(ctx, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_TRANSFORM_CONSTANT_LOAD, 17));
        Emit(ctx, 4);

        for (int word = 0; word < 16; word++)
            Emit(ctx, world[word]);

        /* one triangle fan of 4 vertices */
        Emit(ctx, CELL_GCM_METHOD_FLAG_NON_INCREMENT | CELL_GCM_METHOD(CELL_GCM_NV4097_INVALIDATE_VERTEX_FILE, 3));
        Emit(ctx, 0);
        Emit(ctx, 0);
        Emit(ctx, 0);
        EmitMethod(ctx, CELL_GCM_NV4097_SET_BEGIN_END, CELL_GCM_PRIMITIVE_TRIANGLE_FAN);
        Emit(ctx, CELL_GCM_METHOD_FLAG_NON_INCREMENT | CELL_GCM_METHOD(CELL_GCM_NV4097_DRAW_ARRAYS, 1));
        Emit(ctx, (4 - 1) << 24 | 0);
        EmitMethod(ctx, CELL_GCM_NV4097_SET_BEGIN_END, 0);

        EmitMethod(ctx, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + 0 * 4, VTX_DISABLED);
        EmitMethod(ctx, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + 1 * 4, VTX_DISABLED);
        EmitMethod(ctx, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + 3 * 4, VTX_DISABLED);
    }

    /* back to normal alpha blending */
    RenderingStep *ctx = ForwardPass;

    Emit(ctx, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_BLEND_FUNC_SFACTOR, 2));
    Emit(ctx, CELL_GCM_SRC_ALPHA << 16 | CELL_GCM_SRC_ALPHA);
    Emit(ctx, CELL_GCM_ONE_MINUS_SRC_ALPHA << 16 | CELL_GCM_ONE_MINUS_SRC_ALPHA);
}

/* the rest of Deadlocked's skyproc.s (SkyShellSetup, SkyProcessVerts, ...): empty on PS3 */
// 0x015b55c (0x8 bytes)
int STUB_0015b55c(...)
{
    return 0;
}

// 0x015b564 (0x8 bytes)
int STUB_0015b564(...)
{
    return 0;
}

// 0x015b56c (0x4 bytes)
void STUB_0015b56c(...)
{
}

// 0x015b570 (0x4 bytes)
void STUB_0015b570(...)
{
}
