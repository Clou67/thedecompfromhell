// game/skyfunc.cpp -- the per-level sky functions: shells, spinning shells, stars and comets
// STATUS: CLEAN (checked against the asm; local names are mine)
// 33 functions, 0x15350c-0x15aa0c
//
// Every level has its own sky function. Each one clears the screen, then draws the sky's shells
// (idol_draw::DrawSkyShell with outMatrix) in order, some of them spun about z by an angle that
// runs from -pi to pi over a fixed number of frames, and some levels draw stars and comets
// (sky sprites) between the shells. The compiler inlined the shared pieces into every level
// function; here they are the static inline helpers below:
//   SkyClear           the four clear commands, with the level's clear colour
//   SkySpinMasked/Mod  outMatrix = a z spin, period a power of two (masked) or any (modulo)
//   SkyDrawShell       the one non-inlined piece, drawing a shell with outMatrix
//   SkyNightStars...   star / comet set-up and per-frame update; SkyInitNightSprites and
//                      SkyUpdateNightSprites are the out-of-line versions, a few levels inline
//                      variants with other types, colours and counts
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "game/skyfunc.h"
#include "game/boot.h"
#include "game/draw.h"
#include "game/loaders.h"
#include "game/mesh.h"
#include "game/mobyutil.h"
#include "game/shadow.h"
#include "game/skyproc.h"
#include "game/space.h"
#include "game/update.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"
#include "idol/idol_draw.h"
#include "idol/shrubfunc.h"
#include "idol/tiefunc.h"
#include "sdk/rUnk.h"
#include "idol/fastinline.h"
#include <cell/gcm/gcm_macros.h>
#include <cell/gcm/gcm_enum.h>

#define SKY_PI               3.14159274f                 /* the binary's pi (0x40490fdb) */
#define SPIN_SCALE(period)   (SKY_PI / ((period) / 2))   /* radians per frame of a spin */

#define CLEAR_BLACK          0xff000000
#define CLEAR_DEPTH          0xffffff00
#define CLEAR_ALL            0xf3                        /* colour and depth / stencil */

#define SPRITE_COMET         0          /* sky_sprite.type */
#define SPRITE_STAR          1
#define SPRITE_LIGHT         2          /* Level 6's blinking lights */
#define SPRITE_STAR_ALT      3
#define SPRITE_ALPHA         0x48       /* sky_sprite.gs_alpha of every star and comet */
#define SKY_RADIUS           50.0f
#define SKY_SPRITES          256

#define STAR_COLOR           0x30505050
#define STAR_COLOR_GREEN     0x30585050  /* Levels 6 and 17 */
#define STAR_COLOR_GREEN_ALT 0x30505850
#define COMET_SCALE          0.16f
#define COMET_SCALE_BIG      0.18f
#define COMET_COLOR          0x202020f0
#define COMET_FLASH          0x50000000
#define COMET_ALPHA          0x24000000
#define COMET_ALPHA_FLASH    0x70000000

#define LIGHT_BLINK_FRAMES   48

/* the head of a sky shell; Levels 19 and space spin a shell by its angle */
struct SkyShellHead {
    u16 flags;
    u16 clusterCnt;
    float unk04;
    float angle;             /* 0x08 */
};

/* a cluster of a shell (PS2 path; DL's sky_cluster) */
struct SkyCluster {
    Vec4 bSphere;            /* 0x00 */
    void *data;              /* 0x10 */
    short vertCnt;           /* 0x14 */
    short triCnt;            /* 0x16 */
    short vertOfs;           /* 0x18 */
    short stOfs;             /* 0x1a */
    short triOfs;            /* 0x1c */
    short dataSize;          /* 0x1e */
};

/* a shell as the PS2 draw functions take it: the cluster count, then the clusters at 0x10 */
struct SkyClusterList {
    int count;
    int pad[3];
    SkyCluster clusters[];
};

#define SCRATCHPAD           ((void *)0x70002000)

static inline void Emit(RenderingStep *pass, u32 word)
{
    *pass->command++ = (RsxCmd)word;
}

/* Clears the colour and depth buffers to `color` / far. */
static inline void SkyClear(u32 color)
{
    Emit(DepthPass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_COLOR_CLEAR_VALUE, 1));
    Emit(DepthPass, color);
    Emit(DepthPass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_ZSTENCIL_CLEAR_VALUE, 1));
    Emit(DepthPass, CLEAR_DEPTH);
    Emit(DepthPass, CELL_GCM_METHOD(CELL_GCM_NV4097_CLEAR_SURFACE, 1));
    Emit(DepthPass, CLEAR_ALL);
    Emit(DepthPass, CELL_GCM_METHOD(CELL_GCM_NV4097_NO_OPERATION, 1));
    Emit(DepthPass, 0);
}

/* The level's background colour (floats at +0x10 of the engine's environment block), opaque. */
static inline u32 SkyLevelColor(void)
{
    float *rgb = (float *)(DAT_00a15f64 + 0x10);
    u32 red = (u32)(rgb[0] * 255.0f);
    u32 green = (u32)(rgb[1] * 255.0f);
    u32 blue = (u32)(rgb[2] * 255.0f);

    return 0xff000000 | ((red << 16) & 0xff0000) | ((green << 8) & 0xff00) | (blue & 0xff);
}

static inline void SkyIdentity(void)
{
    FastMtx4Identity((float *)&outMatrix);
}

static inline void SkySpinTo(float angle)
{
    Vec4 euler = { 0.0f, 0.0f, 0.0f, 0.0f };

    euler.z = angle;
    FastEulerToMtx2((float *)&outMatrix, (float *)&euler);
}

/* outMatrix = a z spin through -pi..pi every `mask + 1` frames of `time` */
static inline void SkySpinMasked(u32 time, u32 mask, float scale)
{
    SkySpinTo((float)(int)(time & mask) * scale - SKY_PI);
}

/* outMatrix = a z spin through -pi..pi every `period` frames */
static inline void SkySpinMod(int period)
{
    SkySpinTo((float)((int)worldUpdateTime % period) * SPIN_SCALE(period) - SKY_PI);
}

/* outMatrix scaled by `scale`, centred on g_SkyOrigin */
static inline void SkyScaleMatrix(float scale)
{
    outMatrix.v0.x *= scale;
    outMatrix.v0.y *= scale;
    outMatrix.v0.z *= scale;
    outMatrix.v0.w *= scale;
    outMatrix.v1.x *= scale;
    outMatrix.v1.y *= scale;
    outMatrix.v1.z *= scale;
    outMatrix.v1.w *= scale;
    outMatrix.v2.x *= scale;
    outMatrix.v2.y *= scale;
    outMatrix.v2.z *= scale;
    outMatrix.v2.w *= scale;
    outMatrix.v3 = g_SkyOrigin;
}

/* The sprites drawn by SkySpriteProc between the shells. */
static inline void SkyDrawSprites(void)
{
    SkySpriteProc();
    SetGSReg(3, idol_draw::PackCmd(0, 1, 0, 1, 0x80));
}

/* A random direction on the sky sphere: a around z, b down from the top. Returns sin(b). */
static inline float SkyStarDir(sky_sprite *sprite, float a, float b)
{
    float sinB = FastSinInline(b);

    sprite->pos.y = FastSinInline(a) * sinB * SKY_RADIUS;
    sprite->pos.x = FastCosInline(a) * sinB * SKY_RADIUS;
    return sinB;
}

/* A star's colour: dim grey-blue with a random tint in one of two arrangements. */
static inline int SkyStarColor(u32 base, u32 altBase, int altLow)
{
    int shade = MB_randInt(24);
    int bright = MB_randInt(32);
    u32 coin = rand();
    u32 color = (bright << 24) + (shade << 16) + base;

    if ((coin & 0x10000) == 0) {
        color = ((bright << 24) + (shade << 8) + altBase) | (shade + altLow);
    }
    return color;
}

/* A comet: two phase counters in user, the given texture and scale. */
static inline void SkyNewComet(sky_sprite *sprite, char tex)
{
    sprite->type = SPRITE_COMET;
    ((short *)&sprite->user)[0] = (short)(rand() >> 16);
    ((short *)&sprite->user)[1] = (short)(rand() >> 16);
    sprite->tex = tex;
    sprite->gs_alpha = SPRITE_ALPHA;
}

/* A comet's two phases advance a frame: it circles the sky; returns the new first phase. */
static inline u16 SkyMoveComet(sky_sprite *sprite, float *cosB)
{
    u16 *phase = (u16 *)&sprite->user;

    phase[0]++;
    phase[1]++;
    float a = (float)((phase[0] & 0xfff) - 0x800) * (2.0f * SKY_PI / 4096.0f);
    float b = (float)((phase[1] & 0xfff) - 0x800) * (2.0f * SKY_PI / 4096.0f);
    float sinB = FastSinInline(b);

    sprite->pos.x = FastCosInline(a) * sinB * SKY_RADIUS;
    sprite->pos.y = FastSinInline(a) * sinB * SKY_RADIUS;
    *cosB = FastCosInline(b);
    return phase[0];
}

/* A star twinkles: its base colour (user) plus a random 5-bit flicker per channel. */
static inline void SkyTwinkle(sky_sprite *sprite)
{
    u32 noise = rand() >> 16;

    sprite->rgba = sprite->user + (noise & 0x1f00) * 0x400 + (noise & 0x1f0) * 0x40 + (noise & 0x1f) * 4 - 0x202020;
}

/* The stars of SkyInitNightSprites: `stars` stars of starType (textures texBase / + 1), then
   `comets` comets with texture cometTex. */
static inline void SkyNightStars(int stars, int comets, char starType, char texBase, char cometTex)
{
    sky_sprite *sprite = Sky->sprites;

    Sky->sprite_cnt = (short)(stars + comets);
    for (int i = 0; i < (u16)Sky->sprite_cnt; i++, sprite++) {
        if (i >= stars) {
            SkyNewComet(sprite, cometTex);
            sprite->pos.w = COMET_SCALE;
            continue;
        }

        sprite->type = starType;
        ((short *)&sprite->user)[0] = (short)MB_randInt(256);
        sprite->tex = ((rand() >> 16) & 1) + texBase;
        sprite->gs_alpha = SPRITE_ALPHA;
        sprite->rot = MB_randRot();
        sprite->pos.w = (float)FastIntToDouble(MB_randInt(48) + 32) * (1.0f / 256.0f);

        float a = MB_randRot();
        float b = MB_randRot();
        SkyStarDir(sprite, a, b);
        float cosB = FastCosInline(b);
        sprite->pos.z = cosB * cosB * 36.0f + 16.0f;
        sprite->user = SkyStarColor(STAR_COLOR, STAR_COLOR, 0);
    }
}

/* The update of SkyUpdateNightSprites: comets move and flash, stars of starType twinkle. */
static inline void SkyNightUpdate(char starType)
{
    sky_sprite *sprite = Sky->sprites;

    for (int i = 0; i < (u16)Sky->sprite_cnt; i++, sprite++) {
        if (sprite->type == SPRITE_COMET) {
            float cosB;
            u16 phase = SkyMoveComet(sprite, &cosB);

            sprite->rgba = ((int)(phase & 0x3f) - 8 < 0 ? COMET_FLASH : 0) + COMET_COLOR;
            sprite->pos.z = fabsf(cosB) * SKY_RADIUS;
        }
        else if (sprite->type == starType) {
            SkyTwinkle(sprite);
        }
    }
}

/* Levels 6 and 17: brighter, greenish stars nearer the horizon, larger comets with a colour
   from g_CometColors that dims between flashes. */
static inline void SkyGreenStar(sky_sprite *sprite, char starType)
{
    sprite->type = starType;
    ((short *)&sprite->user)[0] = (short)MB_randInt(256);
    sprite->tex = (rand() >> 16) & 1;
    sprite->gs_alpha = SPRITE_ALPHA;
    sprite->rot = MB_randRot();
    sprite->pos.w = (float)FastIntToDouble(MB_randInt(48) + 32) * (1.0f / 256.0f);

    float a = MB_randRot();
    float b = MB_randRot();
    SkyStarDir(sprite, a, b);
    sprite->pos.z = FastCosInline(b) * SKY_RADIUS;
    sprite->user = SkyStarColor(STAR_COLOR_GREEN, STAR_COLOR_GREEN_ALT, 8);
}

static inline void SkyColoredComet(sky_sprite *sprite)
{
    SkyNewComet(sprite, 1);
    sprite->pos.w = COMET_SCALE_BIG;
    sprite->rgba = g_CometColors[(rand() >> 16) & 3];
}

static inline void SkyMoveColoredComet(sky_sprite *sprite)
{
    float cosB;
    u16 phase = SkyMoveComet(sprite, &cosB);
    u32 color = sprite->rgba & 0xffffff;

    sprite->rgba = color | ((int)(phase & 0x3f) - 8 < 0 ? COMET_ALPHA_FLASH : COMET_ALPHA);
    sprite->pos.z = cosB * SKY_RADIUS;
}

// 0x015350c (0x14 bytes)
void SECTION_HEADER_SKYFUNC(void)
{
    DAT_00731a6c = 0x10000;
}

// 0x0153550 (0x37c bytes)
void SkyInitNightSprites(int stars, int comets)
{
    SkyNightStars(stars, comets, SPRITE_STAR, 0, 1);
}

// 0x01538f0 (0x2c8 bytes)
void SkyUpdateNightSprites(void)
{
    SkyNightUpdate(SPRITE_STAR);
}

// 0x0153bb8 (0xa8 bytes)
void SkyDrawShell(int shell)
{
    idol_draw::DrawSkyShell(Sky, shell, outMatrix);
}

// 0x0153c60 (0x190 bytes)
void SkyLevelNone(void)
{
    SkyClear(CLEAR_BLACK);
    SkyIdentity();

    for (int i = 0; i < (u16)Sky->shell_cnt; i++) {
        SkyDrawShell(i);
    }
}

// 0x0153e00 (0x3e4 bytes)
void SkyLevel_00(void)
{
    SkyClear(CLEAR_BLACK);
    SkyDrawShell(0);
    SkyDrawShell(1);

    if (Sky->sprite_cnt == 0) {
        SkyInitNightSprites(244, 12);
    }
    SkyUpdateNightSprites();
    SkyDrawSprites();
    SkyDrawShell(2);

    SkySpinMasked(worldUpdateTime, 0x7fff, SPIN_SCALE(0x8000));
    SkyDrawShell(3);
    SkyIdentity();
    SkyDrawShell(4);
}

// 0x0154208 (0x37c bytes)
void SkyLevel_01(void)
{
    SkyClear(CLEAR_BLACK);

    for (int i = 0; i < (u16)Sky->shell_cnt; i++) {
        switch (i) {
        case 2:
            SkySpinMasked(worldUpdateTime, 0x3ffff, SPIN_SCALE(0x40000));
            break;
        case 3:
            SkySpinMasked(worldUpdateTime, 0x1ffff, SPIN_SCALE(0x20000));
            break;
        case 4:
            SkySpinMasked(worldUpdateTime, 0xffff, SPIN_SCALE(0x10000));
            break;
        default:
            SkyIdentity();
            break;
        }
        SkyDrawShell(i);
    }
}

// 0x01545b8 (0x858 bytes)
// SkyLevel_00's stars with the alternative star type and textures 2 / 3.
void SkyLevel_02(void)
{
    SkyClear(CLEAR_BLACK);
    SkyIdentity();
    SkyDrawShell(0);
    SkyDrawShell(1);

    if (Sky->sprite_cnt == 0) {
        SkyNightStars(246, 10, SPRITE_STAR_ALT, 2, 3);
    }
    SkyNightUpdate(SPRITE_STAR_ALT);
    SkyDrawSprites();
    SkyDrawShell(2);
    SkyDrawShell(3);
}

// 0x0154e28 (0x354 bytes)
void SkyLevel_03(void)
{
    SkyClear(CLEAR_BLACK);
    SkyIdentity();
    SkyDrawShell(0);
    SkySpinMasked(worldUpdateTime, 0xffff, SPIN_SCALE(0x10000));
    SkyDrawShell(1);
    SkySpinMasked(worldUpdateTime, 0x1ffff, SPIN_SCALE(0x20000));
    SkyDrawShell(2);
}

// 0x0155198 (0x300 bytes)
void SkyLevel_04(void)
{
    SkyClear(CLEAR_BLACK);

    for (int i = 0; i < (u16)Sky->shell_cnt; i++) {
        switch (i) {
        case 0:
            SkySpinMasked(worldUpdateTime, 0xffff, SPIN_SCALE(0x10000));
            break;
        case 2:
            SkySpinMasked(worldUpdateTime, 0x1ffff, SPIN_SCALE(0x20000));
            break;
        default:
            SkyIdentity();
            break;
        }
        SkyDrawShell(i);
    }
}

// 0x01554a0 (0x2bc bytes)
void SkyLevel_05(void)
{
    SkyClear(0xff000014);
    SkyIdentity();
    SkyDrawShell(0);

    if (Sky->sprite_cnt == 0) {
        SkyInitNightSprites(120, 8);
    }
    SkyUpdateNightSprites();
    SkyDrawSprites();

    SkySpinMod(50000);
    SkyDrawShell(1);
}

// 0x0155788 (0x9a0 bytes)
// Green stars, coloured comets and six blinking lights (three pairs, the second of each pair
// half a cycle behind) at fixed places.
void SkyLevel_06(void)
{
    SkyClear(CLEAR_BLACK);
    SkyIdentity();
    SkyDrawShell(0);

    sky_sprite *sprite = Sky->sprites;
    if (Sky->sprite_cnt == 0) {
        Sky->sprite_cnt = SKY_SPRITES;
        for (int i = 0; i < (u16)Sky->sprite_cnt; i++, sprite++) {
            if (i < 234) {
                SkyGreenStar(sprite, SPRITE_STAR_ALT);
            }
            else if (i < 240) {
                int light = (i - 234) >> 1;
                int second = (i - 234) & 1;
                u8 *bytes = (u8 *)&sprite->user;

                sprite->tex = 2;
                sprite->gs_alpha = SPRITE_ALPHA;
                sprite->rot = MB_randRot();
                sprite->type = SPRITE_LIGHT;
                sprite->rgba = g_SkyLightColors[light];
                sprite->pos = g_SkyLightPositions[light];
                bytes[0] = (u8)light;
                bytes[1] = (u8)second;
                bytes[2] = (u8)(second * (LIGHT_BLINK_FRAMES / 2));
            }
            else {
                SkyColoredComet(sprite);
            }
        }
    }

    sprite = Sky->sprites;
    for (int i = 0; i < (u16)Sky->sprite_cnt; i++, sprite++) {
        if (sprite->type == SPRITE_COMET) {
            SkyMoveColoredComet(sprite);
        }
        else if (sprite->type == SPRITE_LIGHT) {
            /* bytes: light, second, frame of the blink; it turns a little each blink */
            u8 *bytes = (u8 *)&sprite->user;
            u32 frame = (bytes[2] + 1) % LIGHT_BLINK_FRAMES;

            bytes[2] = (u8)frame;
            if (frame == 0) {
                int turn = (bytes[1] << 5) | ((rand() >> 16) & 0xf);

                frame = bytes[2];
                sprite->rot = (float)FastIntToDouble(turn - 8) * (2.0f * SKY_PI / 256.0f);
            }

            u32 noise = rand() >> 16;
            u32 alpha = frame * 4 > 0x60 ? 0xc0 - frame * 4 : frame * 4;
            sprite->rgba = g_SkyLightColors[bytes[0]] + (noise & 0xf00) * 0x100 + (noise & 0xf0) * 0x10 +
                           (noise & 0xf) + (alpha << 24);
        }
        else if (sprite->type == SPRITE_STAR_ALT) {
            SkyTwinkle(sprite);
        }
    }

    SkyDrawSprites();
    SkyDrawShell(1);
    SkyDrawShell(2);
}

// 0x0156148 (0x400 bytes)
void SkyLevel_07(void)
{
    SkyClear(SkyLevelColor());
    SkyIdentity();
    SkyDrawShell(0);

    if (Sky->sprite_cnt == 0) {
        SkyInitNightSprites(120, 8);
    }
    SkyUpdateNightSprites();
    SkyDrawSprites();
    SkyDrawShell(1);

    SkySpinMod(50000);
    SkyDrawShell(2);
}

// 0x0156550 (0x2e8 bytes)
void SkyLevel_08(void)
{
    SkyClear(0xff0d0d13);
    SkyIdentity();
    SkyDrawShell(0);
    SkySpinMod(40000);
    SkyDrawShell(1);
    SkyIdentity();
    SkyDrawShell(2);
}

// 0x0156840 (0x378 bytes)
void SkyLevel_09(void)
{
    SkyClear(CLEAR_BLACK);
    SkyIdentity();
    SkyDrawShell(0);
    SkyDrawShell(1);
    SkyDrawShell(2);
    SkySpinMod(25000);
    SkyDrawShell(3);
    SkyIdentity();
    SkyDrawShell(4);
}

// 0x0156bd8 (0x434 bytes)
// The time is sped up before masking, so these shells turn 2, 5 and 10 times faster.
void SkyLevel_10(void)
{
    SkyClear(CLEAR_BLACK);

    for (int i = 0; i < (u16)Sky->shell_cnt; i++) {
        switch (i) {
        case 0:
            SkySpinMasked(worldUpdateTime * 2, 0x1fffe, SPIN_SCALE(0x20000));
            break;
        case 1:
            SkySpinMasked(worldUpdateTime * 5, 0x1ffff, SPIN_SCALE(0x20000));
            break;
        case 2:
            SkySpinMasked(worldUpdateTime * 10, 0x3ffff, SPIN_SCALE(0x40000));
            break;
        case 3:
            SkySpinMasked(worldUpdateTime * 10, 0x1ffff, SPIN_SCALE(0x20000));
            break;
        default:
            SkyIdentity();
            break;
        }
        SkyDrawShell(i);
    }
}

/* Levels 11, 12 and 16: shells 1-3 turn once every 2^18, 2^17 and 2^16 frames. */
static inline void SkyThreeSpins(void)
{
    SkyClear(CLEAR_BLACK);

    for (int i = 0; i < (u16)Sky->shell_cnt; i++) {
        switch (i) {
        case 1:
            SkySpinMasked(worldUpdateTime, 0x3ffff, SPIN_SCALE(0x40000));
            break;
        case 2:
            SkySpinMasked(worldUpdateTime, 0x1ffff, SPIN_SCALE(0x20000));
            break;
        case 3:
            SkySpinMasked(worldUpdateTime, 0xffff, SPIN_SCALE(0x10000));
            break;
        default:
            SkyIdentity();
            break;
        }
        SkyDrawShell(i);
    }
}

// 0x0157030 (0x37c bytes)
void SkyLevel_11(void)
{
    SkyThreeSpins();
}

// 0x01573d0 (0x37c bytes)
void SkyLevel_12(void)
{
    SkyThreeSpins();
}

// 0x015774c (0x2d4 bytes)
void SkyLevel_13(void)
{
    SkyClear(CLEAR_BLACK);
    SkyIdentity();
    SkyDrawShell(0);
    SkyDrawShell(1);

    if (Sky->sprite_cnt == 0) {
        SkyInitNightSprites(120, 8);
    }
    SkyUpdateNightSprites();
    SkyDrawSprites();
    SkyDrawShell(2);
}

// 0x0157a30 (0x350 bytes)
void SkyLevel_14(void)
{
    SkyClear(CLEAR_BLACK);
    SkyIdentity();
    SkyDrawShell(0);
    SkySpinMod(50000);
    SkyDrawShell(1);
    SkySpinMod(100000);
    SkyDrawShell(2);
}

// 0x0157d98 (0x2fc bytes)
void SkyLevel_15(void)
{
    SkyClear(SkyLevelColor());
    SkyIdentity();
    SkyDrawShell(0);

    if (Sky->sprite_cnt == 0) {
        SkyInitNightSprites(120, 8);
    }
    SkyUpdateNightSprites();
    SkyDrawSprites();
    SkyDrawShell(1);
}

// 0x01580b8 (0x37c bytes)
void SkyLevel_16(void)
{
    SkyThreeSpins();
}

// 0x0158460 (0x804 bytes)
// Level 6's green stars and coloured comets, without the lights.
void SkyLevel_17(void)
{
    SkyClear(CLEAR_BLACK);
    SkyIdentity();
    SkyDrawShell(0);

    sky_sprite *sprite = Sky->sprites;
    if (Sky->sprite_cnt == 0) {
        Sky->sprite_cnt = SKY_SPRITES;
        for (int i = 0; i < (u16)Sky->sprite_cnt; i++, sprite++) {
            if (i < 240) {
                SkyGreenStar(sprite, SPRITE_STAR);
            }
            else {
                SkyColoredComet(sprite);
            }
        }
    }

    sprite = Sky->sprites;
    for (int i = 0; i < (u16)Sky->sprite_cnt; i++, sprite++) {
        if (sprite->type == SPRITE_COMET) {
            SkyMoveColoredComet(sprite);
        }
        else {
            SkyTwinkle(sprite);
        }
    }

    SkyDrawSprites();
    SkyDrawShell(1);
    SkyDrawShell(2);
}

// 0x0158c70 (0x470 bytes)
void SkyLevel_18(void)
{
    SkyClear(CLEAR_BLACK);
    SkyDrawShell(0);
    SkyDrawShell(1);
    SkyDrawShell(2);
    SkyDrawShell(3);
    SkySpinMod(40000);
    SkyDrawShell(4);
    SkySpinMod(60000);
    SkyDrawShell(5);
    SkyIdentity();
    SkyDrawShell(6);
}

// 0x0159118 (0x47c bytes)
// Shells 1-5 each keep their own angle, advanced by g_SkyShellSpeed at their own rate; each is
// tilted a little (shell 5 keeps shell 4's tilt), spun by its angle offset by 2000 per shell,
// and drawn at a size from 3 down to 1.25 around g_SkyOrigin.
void SkyLevel_19(void)
{
    Vec4 euler = { 0.0f, 0.0f, 0.0f, 0.0f };

    SkyClear(CLEAR_BLACK);
    SkyIdentity();

    for (int i = 0; i < (u16)Sky->shell_cnt; i++) {
        SkyShellHead *shell = (SkyShellHead *)Sky->shells[i];
        float scale = 1.0f;

        switch (i) {
        case 1:
            euler.y = 0.02f;
            shell->angle = g_SkyShellSpeed * 0.55f + shell->angle;
            scale = 3.0f;
            break;
        case 2:
            euler.y = -0.02f;
            shell->angle = g_SkyShellSpeed * 0.6f + shell->angle;
            scale = 2.5f;
            break;
        case 3:
            euler.y = 0.01f;
            shell->angle = g_SkyShellSpeed * 0.7f + shell->angle;
            scale = 2.0f;
            break;
        case 4:
            euler.y = -0.01f;
            shell->angle = g_SkyShellSpeed * 0.75f + shell->angle;
            scale = 1.5f;
            break;
        case 5:
            shell->angle = g_SkyShellSpeed * 0.8f + shell->angle;
            scale = 1.25f;
            break;
        default:
            SkyIdentity();
            break;
        }

        if (i >= 1) {
            int steps = (int)((float)i * 2000.0f + shell->angle);

            euler.z = (float)(steps % 10000) * SPIN_SCALE(10000) - SKY_PI;
            FastEulerToMtx2((float *)&outMatrix, (float *)&euler);
            SkyScaleMatrix(scale);
        }
        SkyDrawShell(i);
    }
}

// 0x01595d0 (0x884 bytes)
// The stars of levels without a sky function of their own: a fixed pattern (seed 12345) in a
// band around the horizon.
void SkyLevelGeneric(void)
{
    SkyClear(CLEAR_BLACK);
    SkyIdentity();
    SkyDrawShell(0);
    SkyDrawShell(1);

    sky_sprite *sprite = Sky->sprites;
    if (Sky->sprite_cnt == 0) {
        Sky->sprite_cnt = SKY_SPRITES;
        seedRand(12345);
        for (int i = 0; i < (u16)Sky->sprite_cnt; i++, sprite++) {
            if (i >= 246) {
                SkyNewComet(sprite, 1);
                sprite->pos.w = COMET_SCALE;
                continue;
            }

            sprite->type = SPRITE_STAR;
            ((short *)&sprite->user)[0] = (short)MB_randInt(256);
            sprite->tex = 1;
            sprite->gs_alpha = SPRITE_ALPHA;
            sprite->rot = MB_randRot();
            sprite->pos.w = (float)FastIntToDouble(MB_randInt(24) + 32) * (1.0f / 256.0f);

            float a = FastWrapRot(-3.0f, MB_randRot() * 0.2f);
            float b = MB_randRot() * 0.09f + 1.2f;
            SkyStarDir(sprite, a, b);
            sprite->pos.z = FastCosInline(b) * SKY_RADIUS;
            sprite->user = SkyStarColor(STAR_COLOR, STAR_COLOR, 0);
        }
    }

    sprite = Sky->sprites;
    for (int i = 0; i < (u16)Sky->sprite_cnt; i++, sprite++) {
        if (sprite->type == SPRITE_COMET) {
            float cosB;
            u16 phase = SkyMoveComet(sprite, &cosB);

            sprite->rgba = ((int)(phase & 0x3f) - 8 < 0 ? COMET_FLASH : 0) + COMET_COLOR;
            sprite->pos.z = fabsf(cosB) * SKY_RADIUS;
        }
        else {
            SkyTwinkle(sprite);
        }
    }

    SkyDrawSprites();
    SkyDrawShell(2);
    SkyDrawShell(3);
}

// 0x0159e54 (0x4 bytes)
void DoSkyGifPaging(void)
{
}

// 0x0159e58 (0x4 bytes)
void SetupGifPaging(void)
{
}

// 0x0159e88 (0x46c bytes)
// The space sky (its own SKY, in the space data): shells 2-5 tilted, turned by
// g_SpaceSkyAngle plus an offset and drawn bigger around g_SkyOrigin.
void Space_DrawSkyShell(void)
{
    SKY *sky = *(SKY **)(DAT_00a10920 + 8);
    Vec4 euler = { 0.0f, 0.0f, 0.0f, 0.0f };

    SkyClear(CLEAR_BLACK);
    SkyIdentity();

    for (int i = 0; i < (u16)sky->shell_cnt; i++) {
        float scale = 1.0f;

        switch (i) {
        case 1:
            euler.y = 0.0f;
            euler.z = g_SpaceSkyAngle;
            /* fall through */
        case 0:
            euler.y = 0.0f;
            euler.z = FastWrapRot(g_SpaceSkyAngle, 0.0f);
            break;
        case 2:
            euler.y = -0.075f;
            euler.z = FastWrapRot(g_SpaceSkyAngle, -0.15f);
            scale = 1.25f;
            break;
        case 3:
            euler.y = 0.05f;
            euler.z = FastWrapRot(g_SpaceSkyAngle, 0.125f);
            scale = 1.5f;
            break;
        case 4:
            euler.y = 0.1f;
            euler.z = FastWrapRot(g_SpaceSkyAngle, -0.05f);
            scale = 1.75f;
            break;
        case 5:
            euler.y = -0.15f;
            euler.z = FastWrapRot(g_SpaceSkyAngle, 0.1f);
            scale = 2.0f;
            break;
        }

        FastEulerToMtx2((float *)&outMatrix, (float *)&euler);
        SkyScaleMatrix(scale);
        idol_draw::DrawSkyShell(sky, i, outMatrix);
    }

    SetGSReg(0x16, idol_draw::Blend(1, 5, 0x60, 3, 0, 0, 1, 2));
    SetGSReg(0x21, VU1_addGSregister(GSmem.zbuf >> 13, 1, 0));
}

// 0x015a2f4 (0x1c bytes)
int GetSkyTex(int idx)
{
    return Sky->texBase + idx;
}

// 0x015a310 (0x2c bytes)
int GetSkyShellTexIndex(int shell)
{
    return Sky->texBase + ((u8 *)*(int *)(g_SkyData + 0x18))[shell];
}

/* The PS2 shell draw shared by the textured and Gouraud versions: test the clusters, then
   double-buffer each visible cluster's data into VU1 memory and draw it from there. */
static inline void SkyDrawClusters(SkyClusterList *shell, u8 packetKind, bool textured)
{
    int count = shell->count;
    char visible[count];

    if (count == 0) {
        return;
    }

    STUB_0015b564(shell->clusters, count, visible);
    g_pPacket[0] = 7;
    g_pPacket[1] = packetKind;
    g_pPacket[2] = 0;
    g_pPacket[3] = Gs_DmaTagByte(7, 0);
    g_pPacket += 16;

    g_SkyVuBuffer = 1 - g_SkyVuBuffer;
    if (visible[0] == 1) {
        STUB_000e9130(shell->clusters[0].data, shell->clusters[0].dataSize >> 4, g_SkyVuBufferAddrs[g_SkyVuBuffer]);
    }

    for (int i = 0; i < shell->count; i++) {
        SkyCluster *cluster = &shell->clusters[i];

        if (visible[i] == 1) {
            STUB_000e9134();
        }

        g_SkyVuBuffer = 1 - g_SkyVuBuffer;
        if (i + 1 < shell->count && visible[i + 1] == 1) {
            STUB_000e9130(cluster[1].data, cluster[1].dataSize >> 4, g_SkyVuBufferAddrs[g_SkyVuBuffer]);
        }

        if (visible[i] == 1) {
            int vu = g_SkyVuBufferAddrs[1 - g_SkyVuBuffer];

            if (STUB_0015b55c(vu + cluster->vertOfs, SCRATCHPAD, cluster->vertCnt) == 0) {
                if (textured) {
                    STUB_0015b570(cluster->triCnt, vu + cluster->triOfs, vu + cluster->stOfs, SCRATCHPAD);
                }
                else {
                    STUB_0015b56c(cluster->triCnt, vu + cluster->triOfs, vu + cluster->stOfs, SCRATCHPAD);
                }
            }
        }
    }
}

// 0x015a33c (0x334 bytes)
void SkyDrawShellTextured(int *shell)
{
    SkyDrawClusters((SkyClusterList *)shell, 0, true);
}

// 0x015a670 (0x39c bytes)
void SkyDrawShellGouraud(int *shell)
{
    if (*shell == 0) {
        return;
    }

    SkyDrawClusters((SkyClusterList *)shell, 0x90, false);
    SetGSReg(0x16, idol_draw::Blend(1, 5, 0x80, 1, 0, 0, 1, 1));
    SetGSReg(0x21, VU1_addGSregister(GSmem.zbuf >> 13, 1, 1));
}
