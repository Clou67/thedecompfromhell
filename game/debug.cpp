// game/debug.cpp -- the developers' debug menu, free camera and debug font
// STATUS: CLEAN (checked against the asm; local names are mine)
// 77 functions, 0x609f0-0x6565c
//
// SELECT / R3 in debug mode (GAME_MODE_DEBUG) leaves it; the menu is a grid of six columns
// (UPDATE, MODE, DRAW, AMMO, FOG, MISC) moved through with the d-pad. DebugCamera flies the camera
// while the game is stopped: L2 / R2 strafe, L2+R2 turn the up / down / left / right keys into
// pitch and (on a magnerail) roll, L1 / R1 move down / up. Speeds ramp up while a key is held and
// die away after. The debug font queues strings (g_DebugFontStrings) that are drawn later.
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "game/debug.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/crt0.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/loaders.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/pad.h"
#include "game/partproc.h"
#include "game/pause.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/camera0.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"
#include "idol/fastinline.h"
#include <stdarg.h>
#include <sys/timer.h>

#define DEBUG_FONT_WIDTHS     96       /* g_DebugFontCharWidths: ' ' to DEL */
#define DEBUG_FONT_UNKNOWN    0x20     /* characters past the table use the width of '@' */

#define CAM_ACCEL             0.004f
#define CAM_MAX_SPEED         0.3f
#define CAM_TURN_ACCEL        0.002f
#define CAM_MAX_TURN          0.04f
#define CAM_TURN_DAMP         0.6666667f
#define MAGNERAIL_CAMERA      2         /* g_onMagnerail: the free camera turns about its own axes */

#define COLOR_TITLE           0x80c0c000
#define COLOR_HEADING         0x8000c000
#define COLOR_LABEL           0x8000c0c0
#define COLOR_VALUE           0x80f0f0f0
#define COLOR_GOLD            0x80406080
#define COLOR_CURSOR          0x800000c0
#define ROW_HEIGHT            15

#define DEBUG_COLUMNS         6
#define MENU_ROWS_PER_SIDE    3         /* columns 0-2 are the top half, 3-5 the bottom */

#define CONTROL_GAME          0         /* ControlMode */
#define CONTROL_STOPPED       1
#define CONTROL_HERO          2         /* the hero is carried along with the camera */
#define CONTROL_WORLD         3

#define AMMO_ROWS             13        /* rows of the AMMO column before Bolts */
#define MAX_BOLTS             999999
#define FOG_DIST_STEP         1024.0f
#define FOG_MAX_DIST          524288.0f
#define FOG_INTENSITY_STEP    2.55f
#define SAMPLE_BOX            0.5f
#define SAMPLE_FILE_MAX       0x100000
#define HOST_SEEK_END         5
#define HOST_SEEK_SET         6
#define HOST_APPEND           7

#define LEVEL_PATH            "host0:z:/i5/levels/level"

static inline int DebugCharWidth(u8 ch)
{
    u32 index = (u8)(ch - ' ');

    return g_DebugFontCharWidths[index < DEBUG_FONT_WIDTHS ? index : DEBUG_FONT_UNKNOWN];
}

static inline int DebugTextWidth(const char *str)
{
    int width = 0;

    for (const u8 *ch = (const u8 *)str; *ch != 0; ch++) {
        width += DebugCharWidth(*ch);
    }
    return width;
}

/* Queues a copy of `str` at (x, y). */
static inline void DebugFontQueue(int x, int y, int color, const char *str)
{
    DebugFontString *entry = &g_DebugFontStrings[g_DebugFontNumStrings++];
    char *copy = (char *)g_pDebugFontBufPos;

    entry->x = x;
    entry->y = y;
    entry->color = color;
    entry->str = copy;
    g_pDebugFontBufPos = (pointer)(copy + sprintf(copy, "%s", str) + 1);
}

/* the next value of a setting cycled with CROSS (up) and TRIANGLE (down) through 0..max */
static inline void DebugCycle(int *setting, u32 pressed, int max)
{
    if (pressed & CROSS) {
        if (++*setting > max) {
            *setting = 0;
        }
    }
    if (pressed & TRIANGLE) {
        if (--*setting < 0) {
            *setting = max;
        }
    }
}

// 0x00609f0 (0xa0 bytes)
// The section's static initialiser: clears the collision vertex cache.
void SECTION_HEADER_DEBUG(void)
{
    DAT_0071eb14 = 0x10000;

    for (int i = 0; i < 8; i++) {
        CollMobyVertCacheEntry *entry = &g_CollMobyVertCache[i];

        for (int j = 0; j < 9; j++) {
            entry->mtx[j] = 0.0f;
        }
        for (int j = 0; j < 256 * 3; j++) {
            entry->verts[j] = 0.0f;
        }
    }
}

// 0x0060a90 (0x30 bytes)
void ResetDebugEnables(void)
{
    for (int i = 0; i < 20; i++) {
        g_DebugEnables[i] = 1;
    }
}

// 0x0060ac0 (0x8c bytes)
void DebugFontPrintLeft(int x, int y, uint color, char *str)
{
    DebugFontQueue(x, y, color, str);
}

// 0x0060b4c (0xf4 bytes)
void DebugFontPrintfLeft(int x, int y, int color, char *fmt, ...)
{
    char text[512];
    va_list args;

    va_start(args, fmt);
    vsprintf(text, fmt, args);
    va_end(args);

    DebugFontQueue(x, y, color, text);
}

// 0x0060c40 (0x4 bytes)
void STUB_00060c40(...)
{
}

// 0x0060c44 (0x20 bytes)
void ResetDebugFontStrings(void)
{
    g_DebugFontNumStrings = 0;
    g_pDebugFontBufPos = (pointer)g_DebugFontStringBuf;
}

// 0x0060c64 (0x124 bytes)
int DebugFontPrintCenter(int x, int y, int color, char *str)
{
    int left = x - (DebugTextWidth(str) >> 1);

    DebugFontQueue(left, y, color, str);
    return left;
}

// 0x0060d88 (0x168 bytes)
int DebugFontPrintfCenter(int x, int y, int color, char *fmt, ...)
{
    char text[512];
    va_list args;

    va_start(args, fmt);
    vsprintf(text, fmt, args);
    va_end(args);

    int left = x - (DebugTextWidth(text) >> 1);
    DebugFontQueue(left, y, color, text);
    return left;
}

// 0x0060ef0 (0x110 bytes)
void DebugFontPrintRight(int x, int y, int color, char *str)
{
    DebugFontQueue(x - DebugTextWidth(str), y, color, str);
}

// 0x0061000 (0x154 bytes)
void DebugFontPrintfRight(int x, int y, int color, char *fmt, ...)
{
    char text[520];
    va_list args;

    va_start(args, fmt);
    vsprintf(text, fmt, args);
    va_end(args);

    DebugFontQueue(x - DebugTextWidth(text), y, color, text);
}

// 0x0061154 (0x4c bytes)
// Unlike the print functions, takes the width of any character straight from the table.
int DebugFontStringWidth(char *str)
{
    int width = 0;

    for (const u8 *ch = (const u8 *)str; *ch != 0; ch++) {
        width += g_DebugFontCharWidths[(u8)(*ch - ' ')];
    }
    return width;
}

// 0x00611a0 (0xf0 bytes)
void DebugFontPrintN(int x, int y, int color, char *str, int len)
{
    char text[128];

    if (len <= 0) {
        return;
    }

    memcpy(text, str, len);
    text[len] = 0;
    DebugFontQueue(x, y, color, text);
}

// 0x0061290 (0x40 bytes)
void AssertFailed(char *file, int line, char *expr)
{
    printf("assertion \"%s\" failed: file \"%s\", line %d\n", expr, file, line);
    __builtin_trap();
}

// 0x00612d0 (0x4 bytes)
void STUB_000612d0(...)
{
}

// 0x00612d4 (0x4 bytes)
void STUB_000612d4(...)
{
}

// 0x00612d8 (0x4 bytes)
void STUB_000612d8(...)
{
}

// 0x00612dc (0x4 bytes)
void STUB_000612dc(...)
{
}

// 0x00612e0 (0x4 bytes)
void STUB_000612e0(...)
{
}

// 0x00612e4 (0x4 bytes)
void STUB_000612e4(...)
{
}

// 0x00612e8 (0x4 bytes)
void STUB_000612e8(...)
{
}

// 0x00612ec (0x4 bytes)
void STUB_000612ec(...)
{
}

// 0x00612f0 (0x4 bytes)
void STUB_000612f0(...)
{
}

// 0x00612f4 (0x4 bytes)
void STUB_000612f4(...)
{
}

// 0x00612f8 (0x4 bytes)
void STUB_000612f8(...)
{
}

// 0x00612fc (0x4 bytes)
void STUB_000612fc(...)
{
}

// 0x0061300 (0x4 bytes)
void STUB_00061300(...)
{
}

// 0x0061304 (0x4 bytes)
void STUB_00061304(...)
{
}

// 0x0061308 (0x4 bytes)
void STUB_00061308(...)
{
}

// 0x006130c (0x4 bytes)
void STUB_0006130c(...)
{
}

// 0x0061310 (0x4 bytes)
void STUB_00061310(...)
{
}

// 0x0061314 (0x4 bytes)
void STUB_00061314(...)
{
}

// 0x0061318 (0x4 bytes)
void STUB_00061318(...)
{
}

// 0x006131c (0x4 bytes)
void STUB_0006131c(...)
{
}

// 0x0061320 (0x4 bytes)
void STUB_00061320(...)
{
}

// 0x0061324 (0x4 bytes)
void STUB_00061324(...)
{
}

// 0x0061328 (0x4 bytes)
void STUB_00061328(...)
{
}

// 0x006132c (0x4 bytes)
void STUB_0006132c(...)
{
}

// 0x0061330 (0x4 bytes)
void STUB_00061330(...)
{
}

// 0x0061334 (0x4 bytes)
void STUB_00061334(...)
{
}

// 0x0061338 (0x4 bytes)
void STUB_00061338(...)
{
}

// 0x006133c (0x4 bytes)
void STUB_0006133c(...)
{
}

// 0x0061340 (0x4 bytes)
void STUB_00061340(...)
{
}

// 0x0061344 (0x4 bytes)
void STUB_00061344(...)
{
}

// 0x0061348 (0x4 bytes)
void STUB_00061348(...)
{
}

// 0x006134c (0x4 bytes)
void STUB_0006134c(...)
{
}

// 0x0061350 (0x4 bytes)
void STUB_00061350(...)
{
}

// 0x0061354 (0x4 bytes)
void STUB_00061354(...)
{
}

/* `axis` scaled to length `speed` (zero for a zero axis) */
static inline void ScaleToLength(const Vec4 *axis, float speed, float *x, float *y, float *z)
{
    float len = sqrtf(axis->z * axis->z + axis->x * axis->x + axis->y * axis->y);
    float scale = speed / len;

    *x = len != 0.0f ? axis->x * scale : 0.0f;
    *y = len != 0.0f ? axis->y * scale : 0.0f;
    *z = len != 0.0f ? axis->z * scale : 0.0f;
}

/* A turn speed: ramps by CAM_TURN_ACCEL toward +-CAM_MAX_TURN while held, else dies away. */
static inline void DebugTurnSpeed(float *speed, bool held, bool negative)
{
    if (!held) {
        *speed *= CAM_TURN_DAMP;
        if (fabsf(*speed) < CAM_TURN_ACCEL) {
            *speed = 0.0f;
        }
        return;
    }

    if (negative) {
        *speed -= CAM_TURN_ACCEL;
    }
    else {
        *speed += CAM_TURN_ACCEL;
    }

    if (*speed > CAM_MAX_TURN) {
        *speed = CAM_MAX_TURN;
    }
    else if (*speed < -CAM_MAX_TURN) {
        *speed = -CAM_MAX_TURN;
    }
}

/* Turns the camera's orientation by `angle` about one of its axes (0 x, 1 y, 2 z); the y turn
   goes the other way round. */
static inline void DebugTurnCamera(int axis, float angle)
{
    Mtx4 turn;
    Mtx4 orient;
    float *m = (float *)&turn;
    float sinA = axis == 1 ? -FastSinInline(angle) : FastSinInline(angle);
    float cosA = FastCosInline(angle);
    int a = axis == 0 ? 1 : 0;      /* the plane the turn is in */
    int b = axis == 2 ? 1 : 2;

    FastMtx4Identity(m);
    m[a * 4 + a] = cosA;
    m[a * 4 + b] = -sinA;
    m[b * 4 + a] = sinA;
    m[b * 4 + b] = cosA;
    FastMtxCopyNoTranslate(&orient, (Mtx4 *)&GameCamera.orientMtx);
    FastVecMtx4Mul(&orient, &orient, &turn);
    FastApplyTransform((Vec4 *)&GameCamera.orientMtx, (Vec4 *)&orient);
}

/* row scaled to length 1 (left at zero when it has no length) */
static inline void NormalizeRow(Vec4 *row)
{
    float len2 = row->z * row->z + row->x * row->x + row->y * row->y;
    float x = 0.0f, y = 0.0f, z = 0.0f;

    if (sqrtf(len2) != 0.0f) {
        float scale = 1.0f / sqrtf(len2);

        x = row->x * scale;
        y = row->y * scale;
        z = row->z * scale;
    }
    row->x = x;
    row->y = y;
    row->z = z;
}

// 0x00613a0 (0x11d4 bytes)
// inlined: FastRSqrt @0x622fc, FastRSqrt @0x6237c, FastRSqrt @0x623f8
void DebugCamera(void)
{
    bool moved = false;
    float x, y, z;

    if (g_Pad.downButtons & START) {
        return;
    }
    if (DebugUpdate & UPDATE_CAMERA) {
        UpdateAllCameras();
    }

    short rail = g_onMagnerail;
    if (g_Pad.unk0d8 != 0) {
        return;
    }

    u32 down = g_Pad.downButtons;
    bool l2 = (down & L2) != 0;
    bool free = g_onMagnerail != MAGNERAIL_CAMERA;
    float yaw = GameCamera.rot.radius;

    /* moving: forward / back along the view, sideways with L2 / R2 */
    if (l2 && (down & R2)) {
        moved = false;
    }
    else {
        if (down & UP) {
            if (free) {
                GameCamera.posY += FastSinInline(yaw) * DebugCameraSpeed.horizontal;
                GameCamera.posX += FastCosInline(yaw) * DebugCameraSpeed.horizontal;
            }
            else {
                ScaleToLength(&GameCamera.orientMtx.forward, DebugCameraSpeed.horizontal, &x, &y, &z);
                GameCamera.posZ += z;
                GameCamera.posY += y;
                GameCamera.posX += x;
            }
            moved = true;
        }

        if (down & DOWN) {
            if (free) {
                GameCamera.posY -= FastSinInline(yaw) * DebugCameraSpeed.horizontal;
                GameCamera.posX -= FastCosInline(yaw) * DebugCameraSpeed.horizontal;
            }
            else {
                ScaleToLength(&GameCamera.orientMtx.forward, DebugCameraSpeed.horizontal, &x, &y, &z);
                GameCamera.posZ -= z;
                GameCamera.posY -= y;
                GameCamera.posX -= x;
            }
            moved = true;
        }

        if (l2) {
            if (free) {
                GameCamera.posX -= FastSinInline(yaw) * DebugCameraSpeed.horizontal;
                GameCamera.posY += FastCosInline(yaw) * DebugCameraSpeed.horizontal;
            }
            else {
                ScaleToLength(&GameCamera.orientMtx.right, DebugCameraSpeed.horizontal, &x, &y, &z);
                GameCamera.posZ += z;
                GameCamera.posX += x;
                GameCamera.posY += y;
            }
            moved = true;
        }

        if (down & R2) {
            if (g_onMagnerail == MAGNERAIL_CAMERA) {
                ScaleToLength(&GameCamera.orientMtx.right, DebugCameraSpeed.horizontal, &x, &y, &z);
                GameCamera.posZ -= z;
                GameCamera.posY -= y;
                GameCamera.posX -= x;
            }
            else {
                GameCamera.posX += FastSinInline(yaw) * DebugCameraSpeed.horizontal;
                GameCamera.posY -= FastCosInline(yaw) * DebugCameraSpeed.horizontal;
            }
            moved = true;
        }
    }

    if (moved) {
        DebugCameraSpeed.horizontal += CAM_ACCEL;
        if (DebugCameraSpeed.horizontal > CAM_MAX_SPEED) {
            DebugCameraSpeed.horizontal = CAM_MAX_SPEED;
        }
    }
    else {
        DebugCameraSpeed.horizontal *= 0.5f;
        if (DebugCameraSpeed.horizontal < CAM_ACCEL) {
            DebugCameraSpeed.horizontal = 0.0f;
        }
    }

    /* yaw: left / right, unless L2+R2 on a magnerail (then they roll) */
    bool turning = !((g_onMagnerail == MAGNERAIL_CAMERA && l2 && (down & R2)) || !(down & (LEFT | RIGHT)));
    DebugTurnSpeed(&DebugCameraSpeed.yaw, turning, (down & LEFT) != 0);
    if (turning) {
        if (g_onMagnerail == MAGNERAIL_CAMERA) {
            DebugTurnCamera(2, DebugCameraSpeed.yaw);
        }
        else {
            GameCamera.rot.radius = FastDiffRots(GameCamera.rot.radius, DebugCameraSpeed.yaw);
        }
    }

    /* pitch: L2+R2 with up / down */
    bool pitching = l2 && (down & R2) && (down & (UP | DOWN));
    DebugTurnSpeed(&DebugCameraSpeed.pitch, pitching, (down & UP) != 0);
    if (pitching) {
        if (rail == MAGNERAIL_CAMERA) {
            DebugTurnCamera(1, DebugCameraSpeed.pitch);
        }
        else {
            GameCamera.rot.elevation = FastDiffRots(GameCamera.rot.elevation, DebugCameraSpeed.pitch);
        }
    }

    /* roll: L2+R2 with left / right, on a magnerail only */
    bool rolling = rail == MAGNERAIL_CAMERA && l2 && (down & R2) && (down & (LEFT | RIGHT));
    DebugTurnSpeed(&DebugCameraSpeed.roll, rolling, (down & LEFT) != 0);
    if (rolling) {
        DebugTurnCamera(0, DebugCameraSpeed.roll);
    }

    /* up / down: R1 / L1 */
    if (!(down & R1) && !(down & L1)) {
        DebugCameraSpeed.vertical *= 0.5f;
        if (DebugCameraSpeed.vertical < CAM_ACCEL) {
            DebugCameraSpeed.vertical = 0.0f;
        }
    }
    else if (!(down & R1)) {
        DebugCameraSpeed.vertical -= CAM_ACCEL;
        if (DebugCameraSpeed.vertical < -CAM_MAX_SPEED) {
            DebugCameraSpeed.vertical = -CAM_MAX_SPEED;
        }
    }
    else {
        DebugCameraSpeed.vertical += CAM_ACCEL;
        if (DebugCameraSpeed.vertical > CAM_MAX_SPEED) {
            DebugCameraSpeed.vertical = CAM_MAX_SPEED;
        }
    }

    if (rail == MAGNERAIL_CAMERA) {
        ScaleToLength(&GameCamera.orientMtx.up, DebugCameraSpeed.vertical, &x, &y, &z);
        GameCamera.posY += y;
        GameCamera.posX += x;
        GameCamera.posZ += z;
    }
    else {
        GameCamera.posZ += DebugCameraSpeed.vertical;
    }

    /* off a magnerail the orientation comes from the angles */
    if (rail != MAGNERAIL_CAMERA) {
        Mtx4 orient;

        FastEulerToMtx1(&orient, (Vec4 *)&GameCamera.rot);
        NormalizeRow(&orient.v0);
        NormalizeRow(&orient.v1);
        NormalizeRow(&orient.v2);
        FastApplyTransform((Vec4 *)&GameCamera.orientMtx, (Vec4 *)&orient);
    }

    /* drive the camera being edited */
    float *cam = (float *)GameCamera.pCurrentUpdCam;
    if (ControlMode == CONTROL_HERO && cam != NULL) {
        cam[12] = GameCamera.posX;
        cam[13] = GameCamera.posY;
        cam[14] = GameCamera.posZ;
        *(u32 *)&cam[15] = *(u32 *)GameCamera.field8_0x14c;
        *(Vec4 *)&cam[0] = GameCamera.orientMtx.forward;
        *(Vec4 *)&cam[4] = GameCamera.orientMtx.right;
        *(Vec4 *)&cam[8] = GameCamera.orientMtx.up;
        *(Vec4 *)&cam[16] = GameCamera.orientMtx.forward;
        cam[25] = GameCamera.posX;
        cam[26] = GameCamera.posY;
        cam[27] = GameCamera.posZ;
        ResetCamOfsVectors_0((int)cam);
    }
}

// 0x0062590 (0x1d0 bytes)
// In CONTROL_HERO the hero stays where he was relative to the camera.
void UpdateDebugCamera(void)
{
    float dir = FastWrapRot(GameCamera.rot.radius, g_DebugHeroDir);

    g_heroPosition.z = GameCamera.posZ + g_DebugHeroHeight;
    g_heroPosition.y = FastSinInline(dir) * g_DebugHeroDist + GameCamera.posY;
    g_heroPosition.x = FastCosInline(dir) * g_DebugHeroDist + GameCamera.posX;
    g_heroRotation.z = FastWrapRot(GameCamera.rot.radius, g_DebugHeroYaw);
    FastEulerToMtx1((Mtx4 *)&g_heroMtx, &g_heroRotation);

    MobyInstance *hero = g_heroMobyPtr;
    hero->pos = g_heroPosition;
    hero->rotation = g_heroRotation;
    FastMemCopy32(&hero->transform, &g_heroMtx, 0x30);
    UpdateMobyTransform(g_heroMobyPtr);
}

// 0x0062760 (0x4 bytes)
void STUB_00062760(...)
{
}

// 0x0062764 (0x4c bytes)
void SetDebugGameMode(void)
{
    g_debugLastGameMode = g_gameMode;
    g_gameMode = GAME_MODE_DEBUG;
    STUB_000780f4(0, 0, 0);
}

/* Appends `text` to a level's host file. */
static inline int DebugAppendHostFile(const char *name, const char *text)
{
    char path[64];

    sprintf(path, "%s%d\\%s%s", LEVEL_PATH, Level, name, "");
    int file = HostOpen(path, HOST_APPEND);
    if (file < 0) {
        return 0;
    }

    HostSeek(file, 0, HOST_SEEK_END);
    HostWrite(file, text, strlen(text));
    HostClose(file);
    return 1;
}

/* Column 3: the ammo of a weapon (R1: 60 at a time, R2: 600) and its gold level. */
static inline void DebugEditAmmo(u32 pressed, u32 down)
{
    u32 *count;
    u32 max = MAX_BOLTS;
    int row = DebugSelectedRow;
    u8 item = g_DebugAmmoItems[row];

    if (row < AMMO_ROWS) {
        count = (u32 *)&currentAmmoArray + item;
        max = *(u16 *)((u8 *)&DAT_00737d3e + item * 24);
    }
    else {
        count = (u32 *)&g_boltCount;
    }

    int step = (down & R1) ? 60 : (down & R2) ? 600 : 1;
    if (step == 1) {
        if (pressed & CROSS) {
            *count += 1;
        }
        if ((pressed & CIRCLE) && (int)*count > 0) {
            *count -= 1;
        }
    }
    else {
        if (pressed & CROSS) {
            *count += step;
        }
        if (pressed & CIRCLE) {
            *count = (int)*count > step ? *count - step : 0;
        }
    }
    if ((int)max < (int)*count) {
        *count = max;
    }

    u8 *gold = (u8 *)&g_goldWeaponsArray;
    if (pressed & TRIANGLE) {
        gold[item]++;
    }
    if (pressed & SQUARE) {
        gold[item]--;
    }
    short maxGold = *(short *)((u8 *)&DAT_0072103e + item * 0x4c);
    if (maxGold < (short)gold[item]) {
        gold[item] = (u8)maxGold;
    }
}

/* Column 4: the fog. CROSS / R1 raise, TRIANGLE / L1 lower. */
static inline bool DebugFogUp(u32 pressed, u32 down)
{
    return (down & CROSS) || (pressed & R1);
}

static inline bool DebugFogDown(u32 pressed, u32 down)
{
    return (down & TRIANGLE) || (pressed & L1);
}

static inline void DebugFogByte(u8 *value, u32 pressed, u32 down)
{
    if (*value != 0xff && DebugFogUp(pressed, down)) {
        (*value)++;
    }
    if (*value != 0 && DebugFogDown(pressed, down)) {
        (*value)--;
    }
}

static inline void DebugEditFog(u32 pressed, u32 down)
{
    switch (DebugSelectedRow) {
    case 0:
        if (DebugFogUp(pressed, down)) {
            LevelFogNearDist += FOG_DIST_STEP;
        }
        if (DebugFogDown(pressed, down)) {
            LevelFogNearDist -= FOG_DIST_STEP;
        }
        if (LevelFogFarDist < LevelFogNearDist) {
            LevelFogNearDist = LevelFogFarDist;
        }
        else if (LevelFogNearDist < 0.0f) {
            LevelFogNearDist = 0.0f;
        }
        break;
    }

    if (DebugSelectedRow == 2) {
        if (DebugFogUp(pressed, down)) {
            LevelFogFarDist += FOG_DIST_STEP;
        }
        if (DebugFogDown(pressed, down)) {
            LevelFogFarDist -= FOG_DIST_STEP;
        }
        if (LevelFogFarDist > FOG_MAX_DIST) {
            LevelFogFarDist = FOG_MAX_DIST;
        }
        else if (LevelFogFarDist < LevelFogNearDist) {
            LevelFogFarDist = LevelFogNearDist;
        }
    }

    /* the intensities are shown as 100 - value / 2.55 percent, so the keys run the other way */
    if (DebugSelectedRow == 1) {
        if (DebugFogUp(pressed, down)) {
            LevelFogNearIntensity -= FOG_INTENSITY_STEP;
        }
        if (DebugFogDown(pressed, down)) {
            LevelFogNearIntensity += FOG_INTENSITY_STEP;
        }
        if (LevelFogNearIntensity > 255.0f) {
            LevelFogNearIntensity = 255.0f;
        }
        else if (LevelFogNearIntensity < 0.0f) {
            LevelFogNearIntensity = 0.0f;
        }
    }

    if (DebugSelectedRow == 3) {
        if (DebugFogUp(pressed, down)) {
            LevelFogFarIntensity -= FOG_INTENSITY_STEP;
        }
        if (DebugFogDown(pressed, down)) {
            LevelFogFarIntensity += FOG_INTENSITY_STEP;
        }
        if (LevelFogFarIntensity > 255.0f) {
            LevelFogFarIntensity = 255.0f;
        }
        else if (LevelFogFarIntensity < 0.0f) {
            LevelFogFarIntensity = 0.0f;
        }
    }

    if (DebugSelectedRow == 4) {
        DebugFogByte(&levelFog.r, pressed, down);
    }
    if (DebugSelectedRow == 5) {
        DebugFogByte(&levelFog.g, pressed, down);
    }
    if (DebugSelectedRow == 6) {
        DebugFogByte(&levelFog.b, pressed, down);
    }
    UpdateFog();
}

/* Column 5 row 2: writes the camera position to occ_sample_deltas.dat (unless an occlusion
   sample is already within half a unit), then reloads occ_samp.dat. */
static inline void DebugAddOcclSample(void)
{
    char path[64];
    char line[64];

    /* (the game steps through the samples 4 bytes at a time) */
    for (int i = 0; i < g_OcclSampleCnt; i++) {
        float *sample = (float *)((u8 *)g_pOcclSamples + i * 4);

        if (sample[0] < GameCamera.posX + SAMPLE_BOX && GameCamera.posX - SAMPLE_BOX < sample[0] &&
            sample[1] < GameCamera.posY + SAMPLE_BOX && GameCamera.posY - SAMPLE_BOX < sample[1] &&
            sample[2] < GameCamera.posZ + SAMPLE_BOX && GameCamera.posZ - SAMPLE_BOX < sample[2]) {
            return;
        }
    }

    sprintf(line, "add_sample: %.2f %.2f %.2f\n", (double)GameCamera.posX, (double)GameCamera.posY,
            (double)GameCamera.posZ);
    if (DebugAppendHostFile("occ_sample_deltas.dat", line)) {
        AddSample = 'y';
    }

    void *samples = (void *)g_pOcclSamples;
    int count = 0;
    sprintf(path, "%s%d\\%s%s", LEVEL_PATH, Level, "occ_samp.dat", "");
    int file = HostOpen(path, HOST_APPEND);
    if (file < 0) {
        return;
    }

    HostSeek(file, 0, HOST_SEEK_END);
    HostWrite(file, &GameCamera.posX, 4);
    HostWrite(file, &GameCamera.posY, 4);
    HostWrite(file, &GameCamera.posZ, 4);
    HostSeek(file, 0, HOST_SEEK_SET);
    int size = HostSeek(file, 0, HOST_SEEK_END);
    if (size <= SAMPLE_FILE_MAX) {
        HostSeek(file, 0, HOST_SEEK_SET);
        HostRead(file, samples, size);
        count = size / 12;
    }
    g_OcclSampleCnt = count;
    HostClose(file);
}

/* Column 1 row 0, entering CONTROL_HERO: where the hero is relative to the camera. */
static inline void DebugTakeHeroOffset(void)
{
    float dy = g_heroPosition.y - GameCamera.posY;
    float dx = g_heroPosition.x - GameCamera.posX;

    DebugUpdate = DEBUG_OPTION__NONE;
    g_DebugHeroDist = sqrtf(dx * dx + dy * dy);
    g_DebugHeroDir = FastDiffRots(FastAtan2Inline(dy, dx), GameCamera.rot.radius);
    g_DebugHeroHeight = g_heroPosition.z - GameCamera.posZ;
    g_DebugHeroYaw = FastDiffRots(g_heroRotation.z, GameCamera.rot.radius);
}

static inline void DebugEditMode(u32 pressed)
{
    int row = DebugSelectedRow;

    if (row == 0) {
        if (!(pressed & (CROSS | TRIANGLE))) {
            return;
        }
        DebugCycle(&ControlMode, pressed, CONTROL_WORLD);
        switch (ControlMode) {
        case CONTROL_GAME:
            DebugUpdate = (DEBUG_OPTION)(UPDATE_CAMERA | UPDATE_PARTICLES | UPDATE_MOBYS | UPDATE_HERO);
            break;
        case CONTROL_STOPPED:
            DebugUpdate = DEBUG_OPTION__NONE;
            break;
        case CONTROL_HERO:
            DebugTakeHeroOffset();
            break;
        case CONTROL_WORLD:
            DebugUpdate = (DEBUG_OPTION)(UPDATE_PARTICLES | UPDATE_MOBYS);
            break;
        }
    }
    else if (row == 1) {
        DebugCycle(&Profile, pressed, 7);
    }
    else if (row == 2) {
        if (OcclGrid == NULL) {
            OcclUpdate = 0;
        }
        else {
            DebugCycle(&OcclUpdate, pressed, 2);
        }
    }
    else if (row == 3) {
        if (pressed & (CROSS | TRIANGLE)) {
            Bookmark = Bookmark == 0;
        }
    }
    else if (row == 4) {
        if (pressed & (CROSS | TRIANGLE)) {
            Invincibility = Invincibility == 0;
        }
    }
    else if (row == 5) {
        if (pressed & (CROSS | TRIANGLE)) {
            bool wasNormal = DrawDistMode == 0;

            DrawDistMode = DrawDistMode == 0;
            if (wasNormal) {
                TfragDrawDist = 65536.0f;
                DAT_00a390b8 = 64;
                TieDrawDist = 64.0f;
                ShrubDrawDist = 40.0f;
                PartClipDist = 0x40000;
            }
            else {
                TfragDrawDist = 512000.0f;
                TieDrawDist = 720.0f;
                ShrubDrawDist = 500.0f;
                DAT_00a390b8 = 500;
                PartClipDist = 0x1f4000;
            }
        }
    }
    else if (row == 6) {
        DebugCycle(&CollMode, pressed, 2);
    }
    else if (row == 7) {
        if (pressed & (CROSS | TRIANGLE)) {
            TvMode = TvMode == 0;
        }
    }
    else if (row == 8) {
        if (pressed & (CROSS | TRIANGLE)) {
            bool wasNormal = ScreenMode == 0;
            float scale = wasNormal ? 0.125f : 0.5f;

            ScreenMode = ScreenMode == 0;
            g_ViewContext.xpix = (float)(FastIntToDouble(g_FrameBufWidth) * scale);
            g_ViewContext.ypix = (float)(FastIntToDouble(g_FrameBufHeight) * scale);
            g_ViewContext.xclip = g_ViewContext.xpix * 4.0f;
            g_ViewContext.yclip = g_ViewContext.ypix * 4.0f;
            UpdateViewContext();
        }
    }
    else if (row == 9) {
        /* the next / previous scene that has an npc file, or none */
        if (pressed & (CROSS | TRIANGLE)) {
            do {
                if (pressed & CROSS) {
                    if (++Scene == 36) {
                        Scene = -1;
                    }
                }
                else if (--Scene < -1) {
                    Scene = 35;
                }
                if (Scene < 0) {
                    break;
                }
                pressed = g_Pad.buttonsPressedThisFrame;
            } while (LoadNpcMobys(Level, Scene) == 0);
        }
        g_debugLastGameMode = Scene < 0 ? GAME_MODE_NORMAL : GAME_MODE_SCENE;
    }
    else if (row == 10) {
        /* level flags: CROSS / TRIANGLE pick the segment, CIRCLE toggles it */
        int segment = Segment;

        if (pressed & (CROSS | TRIANGLE)) {
            if (pressed & CROSS) {
                if (++Segment == 16) {
                    Segment = 0;
                }
            }
            else if (--Segment < 0) {
                Segment = 15;
            }
        }
        else if (pressed & CIRCLE) {
            char flag = g_LevelFlags[Level][Segment] == 0 ? -1 : 0;

            g_LevelFlags[Level][Segment] = flag;
            (&g_CheckpointLevelFlags)[segment] = flag;
        }
    }
}

// 0x00627d0 (0x168c bytes)
// inlined: FastAtan2 @0x62d48
void UpdateDebugSelections(void)
{
    int rows[DEBUG_COLUMNS] = { 5, 11, 9, 14, 7, 5 };

    sound_Update();

    u32 pressed = g_Pad.buttonsPressedThisFrame;
    u32 down = g_Pad.downButtons;

    if (pressed & (R3 | SELECT)) {
        /* leave debug mode */
        g_gameMode = (gameMode_t)g_debugLastGameMode;
        STUB_000780f4(g_ViewContext.occlColor0, g_ViewContext.occlColor1, g_ViewContext.occlColor2);
        g_DebugExitCamPos[0] = (int)GameCamera.posX >> 2;
        g_DebugExitCamPos[1] = (int)GameCamera.posY >> 2;
        g_DebugExitCamPos[2] = (int)GameCamera.posZ >> 2;
        AddStart = 'n';
        AddSample = 'n';
        return;
    }

    /* moving the cursor: three columns on top, three below */
    if (pressed & RIGHT) {
        DebugSelectedCol++;
        if (DebugSelectedCol == 3) {
            DebugSelectedCol = 0;
        }
        else if (DebugSelectedCol == 6) {
            DebugSelectedCol = 3;
        }
    }
    else if (pressed & LEFT) {
        DebugSelectedCol--;
        if (DebugSelectedCol < 0) {
            DebugSelectedCol = 2;
        }
        else if (DebugSelectedCol == 2) {
            DebugSelectedCol = 5;
        }
    }

    if ((pressed & UP) && --DebugSelectedRow < 0) {
        if (DebugSelectedCol >= MENU_ROWS_PER_SIDE) {
            DebugSelectedCol = (DebugSelectedCol + 3) % 6;
        }
        DebugSelectedRow = rows[DebugSelectedCol] - 1;
    }
    else if ((pressed & DOWN) && ++DebugSelectedRow >= rows[DebugSelectedCol]) {
        if (DebugSelectedCol < MENU_ROWS_PER_SIDE) {
            DebugSelectedCol = (DebugSelectedCol + 9) % 6;
        }
        DebugSelectedRow = 0;
    }
    if (DebugSelectedRow >= rows[DebugSelectedCol]) {
        DebugSelectedRow = rows[DebugSelectedCol] - 1;
    }

    switch (DebugSelectedCol) {
    case 5:
        if (DebugSelectedRow == 0 && (pressed & (CROSS | TRIANGLE))) {
            BattleCam = BattleCam == 0;
        }
        if (DebugSelectedRow == 1 && (pressed & (CROSS | TRIANGLE))) {
            Actuator = Actuator == 0;
        }
        if (DebugSelectedRow == 2 && (pressed & (SQUARE | CROSS | CIRCLE | TRIANGLE))) {
            DebugAddOcclSample();
        }
        if (DebugSelectedRow == 3 && (g_Pad.buttonsPressedThisFrame & (SQUARE | CROSS | CIRCLE | TRIANGLE))) {
            char line[64];

            sprintf(line, "start_pt: %.2f %.2f %.2f\n", (double)GameCamera.posX, (double)GameCamera.posY,
                    (double)GameCamera.posZ);
            if (DebugAppendHostFile("occ_sample_deltas.dat", line)) {
                AddStart = 'y';
            }
        }
        break;

    case 4:
        DebugEditFog(pressed, down);
        break;

    case 3:
        DebugEditAmmo(pressed, down);
        break;

    case 2:
        if (pressed & CROSS) {
            DrawMode = (DebugDrawMode)(DrawMode ^ (1 << DebugSelectedRow));
        }
        break;

    case 1:
        DebugEditMode(pressed);
        break;

    case 0:
        /* toggling stepping on leaves only it; off turns everything below it back on */
        if (pressed & CROSS) {
            int bit = 1 << DebugSelectedRow;

            DebugUpdate = (DEBUG_OPTION)(DebugUpdate ^ bit);
            if (bit == ENABLE_STEPPING) {
                DebugUpdate = (DEBUG_OPTION)((DebugUpdate & ENABLE_STEPPING) ? ENABLE_STEPPING : ENABLE_STEPPING - 1);
            }
        }
        break;
    }
}

static inline const char *DebugOnOff(bool on)
{
    return g_DebugOnOff[on ? 1 : 0];
}

static inline void DebugMenuRow(int x, int valueX, int y, const char *label, const char *value)
{
    DebugFontPrintLeft(x, y, COLOR_LABEL, (char *)label);
    DebugFontPrintLeft(valueX, y, COLOR_VALUE, (char *)value);
}

static inline void DebugMenuCursor(int col, int x, int y)
{
    if (DebugSelectedCol == col) {
        DebugFontPrintLeft(x, DebugSelectedRow * ROW_HEIGHT + y, COLOR_CURSOR, (char *)",");
    }
}

/* an AMMO row: the ammo (unless < 0 is passed) and the gold level (unless NULL) */
static inline void DebugAmmoRow(int y, const char *label, int ammo, bool showAmmo, bool *gold)
{
    char text[16];

    DebugFontPrintLeft(0x14, y, COLOR_LABEL, (char *)label);
    if (showAmmo) {
        sprintf(text, "%d", ammo);
        DebugFontPrintLeft(0x8c, y, COLOR_VALUE, text);
    }
    if (gold != NULL) {
        sprintf(text, "%d", *(u8 *)gold);
        DebugFontPrintLeft(0x7a, y, COLOR_GOLD, text);
    }
}

// 0x0063e68 (0x15d0 bytes)
void DrawDebugMenu(void)
{
    char sceneText[16];
    char segmentText[16];
    char fogText[16];
    char flag[2];

    STUB_00078100();
    if (g_CutscenePlaying != 0) {
        return;
    }

    DebugFontPrintCenter(0x100, 0x10, COLOR_TITLE, (char *)"I-5");
    DebugFontPrintCenter(0x100, 0x18, COLOR_TITLE, (char *)"-------------");

    /* UPDATE */
    DebugFontPrintLeft(0xc, 0x2c, COLOR_HEADING, (char *)"UPDATE");
    DebugFontPrintLeft(0xc, 0x32, COLOR_HEADING, (char *)"------");
    DebugMenuRow(0x14, 0x6c, 0x40, "Ratchett", DebugOnOff(DebugUpdate & UPDATE_HERO));
    DebugMenuRow(0x14, 0x6c, 0x4f, "Mobys", DebugOnOff(DebugUpdate & UPDATE_MOBYS));
    DebugMenuRow(0x14, 0x6c, 0x5e, "Parts", DebugOnOff(DebugUpdate & UPDATE_PARTICLES));
    DebugMenuRow(0x14, 0x6c, 0x6d, "Camera", DebugOnOff(DebugUpdate & UPDATE_CAMERA));
    DebugMenuRow(0x14, 0x6c, 0x7c, "Step", DebugOnOff(DebugUpdate & ENABLE_STEPPING));
    DebugMenuCursor(0, 9, 0x40);

    /* MODE */
    DebugFontPrintLeft(0xa8, 0x2c, COLOR_HEADING, (char *)"MODE");
    DebugFontPrintLeft(0xa8, 0x32, COLOR_HEADING, (char *)"----");
    DebugMenuRow(0xb0, 0x108, 0x40, "Control", g_DebugControlNames[ControlMode]);
    DebugMenuRow(0xb0, 0x108, 0x4f, "Profile", g_DebugProfileNames[Profile]);
    DebugMenuRow(0xb0, 0x108, 0x5e, "Occl", g_DebugOcclNames[OcclUpdate]);
    DebugMenuRow(0xb0, 0x108, 0x6d, "Bookmark", DebugOnOff(Bookmark == 0));
    DebugMenuRow(0xb0, 0x108, 0x7c, "Invinc", g_DebugOnOff[Invincibility]);
    DebugMenuRow(0xb0, 0x108, 0x8b, "Drawdist", g_DebugDrawDistNames[DrawDistMode]);
    DebugMenuRow(0xb0, 0x108, 0x9a, "Coll", g_DebugCollNames[CollMode]);
    DebugMenuRow(0xb0, 0x108, 0xa9, "Tv Mode", g_DebugTvNames[TvMode]);
    DebugMenuRow(0xb0, 0x108, 0xb8, "Screen", g_DebugScreenNames[ScreenMode]);
    DebugFontPrintLeft(0xb0, 199, COLOR_LABEL, (char *)"Scene");
    if (Scene < 0) {
        DebugFontPrintLeft(0x108, 199, COLOR_VALUE, (char *)"none");
    }
    else {
        sprintf(sceneText, "%d", Scene);
        DebugFontPrintLeft(0x108, 199, COLOR_VALUE, sceneText);
    }
    DebugFontPrintLeft(0xb0, 0xd6, COLOR_LABEL, (char *)"Segment");
    sprintf(segmentText, "%d = %d", Segment, (u8)g_LevelFlags[Level][Segment]);
    DebugFontPrintLeft(0x108, 0xd6, COLOR_VALUE, segmentText);
    DebugMenuCursor(1, 0xa5, 0x40);

    /* DRAW */
    DebugFontPrintLeft(0x158, 0x2c, COLOR_HEADING, (char *)"DRAW");
    DebugFontPrintLeft(0x158, 0x32, COLOR_HEADING, (char *)"----");
    DebugMenuRow(0x160, 0x1cc, 0x40, "Darken", DebugOnOff(DrawMode & Darken));
    DebugMenuRow(0x160, 0x1cc, 0x4f, "Env Coll", DebugOnOff(DrawMode & EnvColl));
    DebugMenuRow(0x160, 0x1cc, 0x5e, "Moby Coll", DebugOnOff(DrawMode & MobyColl));
    DebugMenuRow(0x160, 0x1cc, 0x6d, "Hero Coll", DebugOnOff(DrawMode & HeroColl));
    DebugMenuRow(0x160, 0x1cc, 0x7c, "Bspheres", DebugOnOff(DrawMode & Bspheres));
    DebugMenuRow(0x160, 0x1cc, 0x8b, "Cameras", DebugOnOff(DrawMode & Cameras));
    DebugMenuRow(0x160, 0x1cc, 0x9a, "Cuboids", DebugOnOff(DrawMode & DebugDrawMode__Cuboids));
    DebugMenuRow(0x160, 0x1cc, 0xa9, "Samples", DebugOnOff(DrawMode & Samples));
    DebugMenuRow(0x160, 0x1cc, 0xb8, "Text", DebugOnOff(DrawMode & Text));
    DebugMenuCursor(2, 0x155, 0x3e);

    /* AMMO: ammo in white, gold level in blue */
    Items *gold = &g_goldWeaponsArray;
    Items32 *ammo = &currentAmmoArray;
    DebugFontPrintLeft(0xc, 0xa6, COLOR_HEADING, (char *)"AMMO");
    DebugFontPrintLeft(0xc, 0xac, COLOR_HEADING, (char *)"----");
    DebugMenuCursor(3, 9, 0xb8);
    DebugAmmoRow(0xba, "SuckCannon", 0, false, &gold->suckCannon);
    DebugAmmoRow(0xc9, "Morpha-Ray", 0, false, &gold->morphORay);
    DebugAmmoRow(0xd8, "Inflato R", 0, false, &gold->decoyGlove);
    DebugAmmoRow(0xe7, "R.Y.N.O.", ammo->ryno, true, NULL);
    DebugAmmoRow(0xf6, "D. Droids", ammo->droneDevice, true, NULL);
    DebugAmmoRow(0x105, "Bomb", ammo->bombGlove, true, &gold->bombGlove);
    DebugAmmoRow(0x114, "Devastator", ammo->devastator, true, &gold->devastator);
    DebugAmmoRow(0x123, "Visibomb", ammo->visibombGun, true, NULL);
    DebugAmmoRow(0x132, "Agents", ammo->gloveOfDoom, true, &gold->gloveOfDoom);
    DebugAmmoRow(0x141, "Pyrocitor", ammo->pyrocitor, true, &gold->pyrocitor);
    DebugAmmoRow(0x150, "Tesla Claw", ammo->teslaClaw, true, &gold->teslaClaw);
    DebugAmmoRow(0x15f, "Mine Glove", ammo->mineGlove, true, &gold->mineGlove);
    DebugAmmoRow(0x16e, "Blaster", ammo->blaster, true, &gold->blaster);
    DebugAmmoRow(0x17d, "Bolts", g_boltCount, true, NULL);

    /* FOG: distances in units of 1024, intensities as a percentage */
    DebugFontPrintLeft(0xbc, 0x100, COLOR_HEADING, (char *)"FOG");
    DebugFontPrintLeft(0xbc, 0x106, COLOR_HEADING, (char *)"---");
    DebugMenuCursor(4, 0xb9, 0x112);
    sprintf(fogText, "%.02f", (double)(LevelFogNearDist * (1.0f / 1024.0f)));
    DebugMenuRow(0xc4, 0x11c, 0x114, "NearDst", fogText);
    sprintf(fogText, "%.02f", (double)-(LevelFogNearIntensity * 0.39215687f - 100.0f));
    DebugMenuRow(0xc4, 0x11c, 0x123, "NearInt", fogText);
    sprintf(fogText, "%.02f", (double)(LevelFogFarDist * (1.0f / 1024.0f)));
    DebugMenuRow(0xc4, 0x11c, 0x132, "FarDst", fogText);
    sprintf(fogText, "%.02f", (double)-(LevelFogFarIntensity * 0.39215687f - 100.0f));
    DebugMenuRow(0xc4, 0x11c, 0x141, "FarInt", fogText);
    sprintf(fogText, "%d", levelFog.r);
    DebugMenuRow(0xc4, 0x11c, 0x150, "Color_R", fogText);
    sprintf(fogText, "%d", levelFog.g);
    DebugMenuRow(0xc4, 0x11c, 0x15f, "Color_G", fogText);
    sprintf(fogText, "%d", levelFog.b);
    DebugMenuRow(0xc4, 0x11c, 0x16e, "Color_B", fogText);

    /* MISC */
    DebugFontPrintLeft(0x160, 0x100, COLOR_HEADING, (char *)"MISC");
    DebugFontPrintLeft(0x160, 0x106, COLOR_HEADING, (char *)"----");
    DebugMenuCursor(5, 0x15d, 0x112);
    DebugMenuRow(0x168, 0x1ca, 0x114, "BattleCam", DebugOnOff(BattleCam == 0));
    DebugMenuRow(0x168, 0x1ca, 0x123, "Actuator", g_DebugOnOff[Actuator]);
    flag[0] = AddSample;
    flag[1] = 0;
    DebugMenuRow(0x168, 0x1ca, 0x132, "AddSample", flag);
    flag[1] = 0;
    flag[0] = AddStart;
    DebugMenuRow(0x168, 0x1ca, 0x141, "AddStart", flag);

    ResetDebugFontStrings();
    while (DAT_00e5aa70 & 1) {
    }
}

// 0x0065438 (0x4 bytes)
void STUB_00065438(...)
{
}

// 0x006543c (0x4 bytes)
void STUB_0006543c(...)
{
}

// 0x0065440 (0x4 bytes)
void STUB_00065440(...)
{
}

// 0x0065444 (0x4 bytes)
void STUB_00065444(...)
{
}

// 0x0065448 (0x4 bytes)
void STUB_00065448(...)
{
}

// 0x006544c (0x4 bytes)
void STUB_0006544c(...)
{
}

// 0x0065450 (0x4 bytes)
void STUB_00065450(...)
{
}

// 0x0065454 (0x4 bytes)
void STUB_00065454(...)
{
}

// 0x0065458 (0x4 bytes)
void STUB_00065458(...)
{
}

// 0x006545c (0x4 bytes)
void STUB_0006545c(...)
{
}

// 0x0065460 (0x4 bytes)
void STUB_00065460(...)
{
}

// 0x0065464 (0x4 bytes)
void STUB_00065464(...)
{
}

// 0x0065468 (0x4 bytes)
void STUB_00065468(...)
{
}

// 0x006546c (0x4 bytes)
void STUB_0006546c(...)
{
}

// 0x0065470 (0x4 bytes)
void STUB_00065470(...)
{
}

// 0x0065474 (0x4 bytes)
void STUB_00065474(...)
{
}

// 0x0065490 (0x178 bytes)
// Projects a world position (in metres) to screen coordinates in 1/16 pixels around (2048,
// 2048), and its depth.
void ScreenPosFromWorldSpace(float *screen, float *world)
{
    float identity[16];
    float m[16];

    FastMtx4Identity(identity);
    FastVecMtx4Mul((Mtx4 *)m, &GameCamera.matrix, (Mtx4 *)identity);

    float y = world[1] * 1024.0f;
    float x = world[0] * 1024.0f;
    float z = world[2] * 1024.0f;
    float scale = g_ViewContext.perspScale / (m[11] * z + m[3] * x + m[7] * y + m[15]);

    screen[0] = ((m[8] * z + m[0] * x + m[4] * y + m[12]) * scale + 2048.0f) * 16.0f;
    screen[1] = ((m[9] * z + m[1] * x + m[5] * y + m[13]) * scale + 2048.0f) * 16.0f;
    screen[2] = (m[10] * z + m[2] * x + m[6] * y + m[14]) * (1.0f / 1024.0f);
}

// 0x0065608 (0x20 bytes)
void Debug_ResetLevelCounters(void)
{
    DAT_0095a3b0 = 0;
    DAT_0095a568 = DAT_0095a564;
    DAT_0095a564 = 0;
}

// 0x0065628 (0x4 bytes)
void STUB_00065628(...)
{
}

// 0x006562c (0x4 bytes)
void STUB_0006562c(...)
{
}

// 0x0065630 (0x4 bytes)
void STUB_00065630(...)
{
}

// 0x0065634 (0x8 bytes)
undefined8 STUB_00065634_RET_NEG1(...)
{
    return -1;
}

// 0x006563c (0x8 bytes)
undefined8 STUB_0006563c_RET_NEG1(...)
{
    return -1;
}

// 0x0065644 (0x18 bytes)
void STUB_00065644(...)
{
}
