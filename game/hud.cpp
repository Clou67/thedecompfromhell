#include <math.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "game/hud.h"
#include "game/boot.h"
#include "game/collproc.h"
#include "game/crt0.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/loaders.h"
#include "game/main.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/pause.h"
#include "game/update.h"
#include "game/update/moby1118.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"
#include "idol/idol_draw.h"
#include "idol/idoldraw_ps3.h"
#include "idol/fastinline.h"
#include <cell/gcm/gcm_macros.h>
#include <cell/gcm/gcm_enum.h>
// game/hud.cpp -- reconstructed from NPEA00385 EBOOT
// 112 functions, 0xc8274-0xd88e4: the gameplay HUD. The 13 HUD entries (registered callbacks
// that slide in, count and draw a value: bolts, health, ammo, oxygen, quick select, race and
// trick displays...), the HUD's scratch memory and spare moby bank, and the textured quad and
// sprite drawers the HUD and the menus share.

#define HUD_ENTRY_CNT 13
#define PI 3.1415927f

/* HUD icons (IconTableEntry ids) that UiTexCategory has no name for; the names are invented */
#define HUD_ICON_HEALTH         0x7535  /* registered for the health entry */
#define HUD_ICON_METER_FRAME    0x7558  /* the hoverboard / Giant Clank meter: 0 frame, 1 fill, 2 light */
#define HUD_ICON_BOSS_BAR       0x7562  /* 0 and 4 portrait, 1 and 2 frame, 3 under the fill */
#define HUD_ICON_TEXT_BOX       0x7580  /* 0 middle, 1 end cap */
#define HUD_ICON_RING_HIGHLIGHT 0xe99c  /* behind the selected quick select / clank command slot */

/* one word into the HUD pass */
static inline void HudEmit(u32 word)
{
    *HUD_Pass->command++ = (RsxCmd)word;
}

#define HUD_SET_COLOR4UB      CELL_GCM_METHOD(CELL_GCM_NV4097_SET_VERTEX_DATA4UB_M + 2 * 4, 1)
#define HUD_SET_TEXCOORD2S    CELL_GCM_METHOD(CELL_GCM_NV4097_SET_VERTEX_DATA2S_M + 1 * 4, 1)
#define HUD_SET_POSITION2S    CELL_GCM_METHOD(CELL_GCM_NV4097_SET_VERTEX_DATA2S_M, 1)
#define HUD_SET_BEGIN_END     CELL_GCM_METHOD(CELL_GCM_NV4097_SET_BEGIN_END, 1)

/* the colour, (three zero words to method 0x1714,) quads begin */
static inline void HudBeginQuads(u32 color)
{
    HudEmit(HUD_SET_COLOR4UB);
    HudEmit(color);
    HudEmit(0x400c1714);
    HudEmit(0);
    HudEmit(0);
    HudEmit(0);
    HudEmit(HUD_SET_BEGIN_END);
    HudEmit(CELL_GCM_PRIMITIVE_QUADS);
}

static inline void HudEnd(void)
{
    HudEmit(HUD_SET_BEGIN_END);
    HudEmit(0);
}

/* a vertex: texture coordinate (v high), position (y high) */
static inline void HudVertex(u32 texCoord, int x, int y)
{
    HudEmit(HUD_SET_TEXCOORD2S);
    HudEmit(texCoord);
    HudEmit(HUD_SET_POSITION2S);
    HudEmit((y & 0xffff) << 16 | (x & 0xffff));
}

static inline void HudPosition(int x, int y)
{
    HudEmit(HUD_SET_POSITION2S);
    HudEmit((y & 0xffff) << 16 | (x & 0xffff));
}

/* effect texture tex's header (TexturePointerArray index) */
static inline u8 *HudTexHeader(int tex)
{
    return (u8 *)(uintptr_t)EffectTexHeaders + ((int *)(uintptr_t)TexturePointerArray)[tex] * 0x24;
}

/* binds a texture header to unit 0 of the HUD pass */
static inline void HudBindTex(u8 *header)
{
    idol_draw::SetTextureUnitRegs((int)(uintptr_t)HUD_Pass, 0, (int *)header);
    idol_draw::ResetPassState(HUD_Pass);
}

/* the entry registered with id, or HUD_ENTRY_CNT */
static inline int HudFindEntry(int id)
{
    int slot;

    for (slot = 0; slot < HUD_ENTRY_CNT; slot++) {
        if (HudEntries[slot].id == id) {
            break;
        }
    }

    return slot;
}

/* an entry's callback (a function descriptor) */
static inline void HudCall(void *callback, HudElement *entry)
{
    ((void (*)(HudElement *))callback)(entry);
}

// 0x00c8274 (0x14 bytes)
void SECTION_HEADER_HUD(void)
{
    g_HudSectionWord = 0x10000;
}

// 0x00c8288 (0x48 bytes)
/* iconId's index in IconTableEntry (the 0xffff end entry's when missing) */
int Hud_FindIconIndex(int iconId)
{
    int i = 0;

    while (IconTableEntry[i].iconId != iconId && IconTableEntry[i].iconId != 0xffff) {
        i++;
    }

    return i;
}

/* the entry's icon from IconTableEntry */
static inline void HudSetIcon(HudElement *entry, u32 iconId)
{
    u32 i = 0;

    while (IconTableEntry[i].iconId != iconId && IconTableEntry[i].iconId != 0xffff) {
        i++;
    }

    entry->icon.iconIdx = (s16)i;
    entry->iconId = IconTableEntry[i].iconId;
    entry->icon.mode = IconTableEntry[i].animMode;
    entry->icon.frame = IconTableEntry[i].firstFrame;
}

// 0x00c82d0 (0x6c bytes)
void HudEntry_SetIcon(HudElement *entry, u32 iconId)
{
    HudSetIcon(entry, iconId);
}

// 0x00c833c (0x108 bytes)
/* the entry back to what it was registered with; runs its init callback */
void HudEntry_Reset(HudElement *entry)
{
    void *init = entry->regInitCb;

    HudSetIcon(entry, entry->regIconId);
    entry->flags = entry->regFlags;
    entry->initCb = init;
    entry->updateCb = entry->regUpdateCb;
    entry->drawCb = entry->regDrawCb;
    entry->pValue = entry->regPValue;
    entry->maxValue = entry->regMaxValue;

    if (init != NULL) {
        HudCall(init, entry);
    }

    entry->locked = 0;
}

// 0x00c8444 (0x134 bytes)
/* Registers callbacks for HUD slot (low 4 bits; the rest are flags) showing *value with icon
   iconId: returns the entry's handle. A changed registration gets a new handle, its timers
   cleared and the entry locked (and reset at once with flag 0x20 in both). In vendor mode only
   slots 0 and 2 can be registered (others return 0). */
int RegisterHUDCallback(u32 slot, int iconId, void *init, void *update, void *draw, int *value, int maxValue)
{
    u32 index = slot & 0xf;
    u32 flags = slot & 0xfff0;

    if (g_gameMode == GAME_MODE_VENDOR && index != 2 && index != 0) {
        return 0;
    }

    HudElement *entry = &HudEntries[index];

    if (entry->regPValue != value || entry->regMaxValue != maxValue || entry->regIconId != iconId || entry->regFlags != flags || entry->regInitCb != init || entry->regUpdateCb != update || entry->regDrawCb != draw) {
        entry->regPValue = value;
        entry->regMaxValue = maxValue;
        entry->regIconId = iconId;
        entry->regFlags = flags;
        entry->regInitCb = init;
        entry->regUpdateCb = update;
        entry->regDrawCb = draw;

        u32 oldFlags = entry->flags;

        entry->id = g_HudNextId++;
        entry->showTimer = 0;
        entry->animA = 0;
        entry->animB = 0;
        *(u16 *)&entry->unk72 = 0;
        entry->locked = 1;

        if (flags & oldFlags & 0x20) {
            HudEntry_Reset(entry);
        }
    }

    return entry->id;
}

// 0x00c8578 (0x4c bytes)
int RegisterHeroHealthHUDCallbacks(void)
{
    return RegisterHUDCallback(1, HUD_ICON_HEALTH, &PTR_HealthHud_Init_007057f0, &PTR_HealthHud_Update_007057f8, &PTR_Draw_NanotechUI_00705800, (int *)&g_heroHealth, 8);
}

// 0x00c85c4 (0x2c bytes)
void HudScratch_Reset(void)
{
    g_HudScratchPtr = g_HudBuffer;
    g_HudScratchEnd = g_HudBuffer + 0x64000;
}

/* size bytes (rounded to 16) of g_HudBuffer, NULL when it is full */
static inline u8 *HudScratchAlloc(int size)
{
    if (g_HudScratchPtr == NULL) {
        g_HudScratchEnd = g_HudBuffer + 0x64000;
        g_HudScratchPtr = g_HudBuffer;
    }

    if (g_HudScratchEnd - g_HudScratchPtr < size) {
        return NULL;
    }

    u8 *block = g_HudScratchPtr;

    g_HudScratchPtr += (size + 15) & ~15;
    return block;
}

// 0x00c85f0 (0x68 bytes)
u8 *HudScratch_Alloc(int size)
{
    return HudScratchAlloc(size);
}

// 0x00c8658 (0x1b8 bytes)
/* Every entry free (handle -1, reset); the spare moby bank (40 mobys, 0x1400 bytes of vars) is
   taken from the scratch memory the first time, then cleared with an end marker. */
void Hud_InitBanks(void)
{
    g_HudNextId = 0;
    g_HudHideCounter = 0;

    for (int i = 0; i < HUD_ENTRY_CNT; i++) {
        HudEntries[i].id = -1;
        HudEntries[i].regIconId = 0x10000;
        RegisterHUDCallback(i, 0xffff, NULL, NULL, NULL, NULL, 1);
        HudEntries[i].showTimer = 0;
        HudEntries[i].flags = 0;
        HudEntries[i].regFlags = 0;
        HudEntries[i].slideTime = -6;
    }

    if (g_HudMobys == NULL) {
        g_HudMobys = (MobyInstance *)HudScratchAlloc(0x2800);
        g_HudMobyVars = HudScratchAlloc(0x1400);
    }

    g_HudMobysEnd = g_HudMobys + 40;
    g_HudMobysPermEnd = g_HudMobys;
    FastMemSetZero(g_HudMobys, 0x2800);
    g_HudMobys->state = 0xff;
}

// 0x00c8810 (0x4 bytes)
void STUB_000c8810(...)
{
}

// 0x00c8814 (0x4 bytes)
void STUB_000c8814(...)
{
}

// 0x00c8818 (0x4 bytes)
void STUB_000c8818(...)
{
}

// 0x00c881c (0x4 bytes)
void STUB_000c881c(...)
{
}

// 0x00c8820 (0xa0 bytes)
/* swaps the spare moby bank in (bank 1) or out (0) */
void Hud_SwapMobyBank(int bank)
{
    if ((u8)bank == g_HudMobyBankActive) {
        return;
    }

    MobyInstance *mobys = g_HudMobys;
    MobyInstance *permEnd = MobyInstancePermEnd;
    MobyInstance *end = MobyInstanceEnd;
    u8 *vars = g_HudMobyVars;

    g_HudMobyBankActive = g_HudMobyBankActive == 0;
    g_HudMobys = g_MobyInstance;
    g_MobyInstance = mobys;
    MobyInstancePermEnd = g_HudMobysPermEnd;
    g_HudMobysPermEnd = permEnd;
    MobyInstanceEnd = g_HudMobysEnd;
    g_HudMobysEnd = end;
    g_HudMobyVars = g_pMobyVars;
    g_pMobyVars = vars;
}

// 0x00c88c0 (0xa4 bytes)
void Hud_ResetAllEntries(void)
{
    for (int i = 0; i < HUD_ENTRY_CNT; i++) {
        RegisterHUDCallback(i, 0xffff, NULL, NULL, NULL, NULL, 1);
        HudEntries[i].showTimer = 0;
        HudEntries[i].slideTime = -6;
        HudEntry_Reset(&HudEntries[i]);
    }
}

// 0x00c8964 (0x90 bytes)
/* empties the entry registered as id; 1 if there was one */
int Hud_UnregisterById(int id)
{
    int slot = HudFindEntry(id);

    if (slot < HUD_ENTRY_CNT) {
        RegisterHUDCallback(slot, 0xffff, NULL, NULL, NULL, NULL, 0);
    }

    return slot < HUD_ENTRY_CNT;
}

// 0x00c89f4 (0xd0 bytes)
/* changes the icon of entry id (also what it was registered with) */
HudElement *Hud_SetEntryIconById(int id, u32 iconId)
{
    int slot = HudFindEntry(id);

    if (slot >= HUD_ENTRY_CNT) {
        return NULL;
    }

    HudElement *entry = &HudEntries[slot];

    HudSetIcon(entry, iconId);
    entry->regIconId = entry->iconId;
    return entry;
}

// 0x00c8ac4 (0x64 bytes)
/* hides entry id and restarts its count from targetValue to maxValue */
void Hud_RestoreEntryCallbackById(int id)
{
    for (int slot = 0; slot < HUD_ENTRY_CNT; slot++) {
        if (HudEntries[slot].id == id) {
            HudEntries[slot].showTimer = 0;
            HudEntries[slot].displayedValue = HudEntries[slot].targetValue;
            HudEntries[slot].targetValue = HudEntries[slot].maxValue;
            return;
        }
    }
}

// 0x00c8b28 (0x60 bytes)
/* entry id's flags (at once unless it is still locked) */
void Hud_SetEntryValueById(int id, int value)
{
    int slot = HudFindEntry(id);

    if (slot >= HUD_ENTRY_CNT) {
        return;
    }

    HudEntries[slot].regFlags = value;

    if (HudEntries[slot].locked == 0) {
        HudEntries[slot].flags = value;
    }
}

// 0x00c8b88 (0x70 bytes)
/* (x, y) moved for the entry's alignment: centred in y unless aligned top or bottom, in x
   unless left (by the whole width when right) */
void HudEntry_ApplyAlignment(HudElement *entry, int *x, int *y)
{
    u32 align = entry->alignFlags;
    int width = entry->width;

    if (!(align & 1) && !(align & 2)) {
        *y -= entry->height >> 1;
        align = entry->alignFlags;
    }

    if (align & 4) {
        return;
    }

    if (!(align & 8)) {
        width >>= 1;
    }

    *x -= width;
}

/* an int through FastIntToDouble, as a float */
static inline float HudIntToFloat(int value)
{
    return (float)FastIntToDouble(value);
}

// 0x00c8c08 (0x208 bytes)
/* The entry's slide offset at step time (+ delay while showing, - delay while hiding; 0..23
   on g_HudSlideBounce while showTimer is set, g_HudSlideEase otherwise): off the top or bottom
   by its height + 52, off the left or right by its width + 20. */
void HudEntry_GetSlideOffset(HudElement *entry, int *x, int *y, int time, int delay)
{
    int step = entry->showTimer == 0 ? time + delay : time - delay;

    step = step < 0 ? 0 : step;
    step = step > 23 ? 23 : step;

    float slide = entry->showTimer != 0 ? g_HudSlideBounce[step] : g_HudSlideEase[step];
    u32 align = entry->alignFlags;
    int moveX = 0;
    int moveY = 0;

    if (align & 1) {
        moveY = -FastDoubleToInt(slide * (HudIntToFloat(entry->height) + 52.0f) + 0.5f);
    }
    else if (align & 2) {
        moveY = FastDoubleToInt(slide * (HudIntToFloat(entry->height) + 52.0f) + 0.5f);
    }
    else if (align & 4) {
        moveX = -FastDoubleToInt(slide * (HudIntToFloat(entry->width) + 20.0f) + 0.5f);
    }
    else if (align & 8) {
        moveX = FastDoubleToInt(slide * (HudIntToFloat(entry->width) + 20.0f) + 0.5f);
    }

    *x += moveX;
    *y += moveY;
}

// 0x00c8e10 (0x124 bytes)
/* The entry's counter starts at its value (capped at maxValue; 99999 with no value or a
   misaligned pointer) and its size grows to fit maxValue's digits: 12 a digit down for an entry
   at the left or right edge (width at least 14), 14 a digit across otherwise (height at least
   12). */
void HudEntry_CalcNumberSize(HudElement *entry)
{
    int *value = entry->pValue;
    int max = entry->maxValue;
    int start;

    if (value == NULL || ((u32)(uintptr_t)value & 3)) {
        start = 99999;
    }
    else {
        start = *value < max ? *value : max;
    }

    entry->targetValue = start;
    entry->displayedValue = start;

    int digits = 0;

    for (; max > 9; max /= 10) {
        digits++;
    }

    int width;
    int height;

    if (!(entry->alignFlags & 3) && (entry->alignFlags & 0xc)) {
        width = entry->width;
        height = digits * 12 + entry->height + 12;
        width = width > 14 ? width : 14;
    }
    else {
        height = entry->height;
        width = digits * 14 + entry->width + 14;
        height = height > 12 ? height : 12;
    }

    entry->height = height;
    entry->width = width;
}

/* a counter entry: shown for 180.5 frames (+30), no offset */
static inline void HudEntry_InitCounterInline(HudElement *entry)
{
    entry->showTimer = (int)(animationSpeed * 180.5f) + 30;
    entry->icon.offsX = 0;
    entry->icon.offsY = 0;
    HudEntry_CalcNumberSize(entry);
}

// 0x00c8f40 (0x74 bytes)
void HudEntry_InitCounter(HudElement *entry)
{
    HudEntry_InitCounterInline(entry);
}

// 0x00c8fc0 (0x80 bytes)
/* the same with a 32x32 icon */
void HudEntry_InitCounter32(HudElement *entry)
{
    entry->showTimer = (int)(animationSpeed * 180.5f) + 30;
    entry->width = 32;
    entry->height = 32;
    entry->icon.offsX = 0;
    entry->icon.offsY = 0;
    HudEntry_CalcNumberSize(entry);
}

// 0x00c9040 (0x60 bytes)
void Hud_SetEntryPosById(int id, int width, int height, s16 offsX, s16 offsY)
{
    int slot = HudFindEntry(id);

    if (slot >= HUD_ENTRY_CNT) {
        return;
    }

    HudEntries[slot].width = width;
    HudEntries[slot].height = height;
    HudEntries[slot].icon.offsX = offsX;
    HudEntries[slot].icon.offsY = offsY;
}

// 0x00c90a0 (0x90 bytes)
/* shows entry id for at least time frames; 1 when it could not (missing or locked) */
int Hud_ShowEntryById(int id, int time)
{
    int slot = HudFindEntry(id);

    if (slot >= HUD_ENTRY_CNT || HudEntries[slot].locked != 0) {
        return 1;
    }

    HudEntries[slot].showTimer = time > HudEntries[slot].showTimer ? time : HudEntries[slot].showTimer;
    return 0;
}

// 0x00c9138 (0x23c bytes)
/* the icon's texture frame now (also kept in anim->frame): still, looping, ping-pong, or a
   ping-pong played again after a random pause (the restart time is set to a small value, so it
   plays on) */
int HudIcon_GetAnimFrame(HudIconAnim *anim)
{
    IconTableEntries *icon = &IconTableEntry[anim->iconIdx];
    int frame = 0;

    if (icon->iconId != 0xffff) {
        int count = icon->frameCnt;

        if (anim->mode == 0) {
            frame = icon->firstFrame;
        }
        else if (anim->mode == 1) {
            int step = (worldUpdateTime - anim->startTime) / icon->frameTime;

            frame = icon->firstFrame + step % count;
        }
        else if (anim->mode == 2) {
            int step = (worldUpdateTime - anim->startTime) / icon->frameTime;

            step %= count * 2 - 2;
            frame = (step < count ? step : count * 2 - step - 2) + icon->firstFrame;
        }
        else if (anim->mode == 3) {
            if (anim->startTime < worldUpdateTime) {
                int step = (worldUpdateTime - anim->startTime) / icon->frameTime;

                if (step < count * 2 - 2) {
                    frame = (step < count ? step : count * 2 - step - 2) + icon->firstFrame;
                }
                else {
                    frame = icon->firstFrame;

                    int pause = MB_randInt((int)(animationSpeed * 30.5f));

                    anim->startTime = icon->frameCnt * 2 + (int)(animationSpeed * 10.5f) + pause;
                }
            }
            else {
                frame = anim->frame;
            }
        }
    }

    anim->frame = frame;
    return frame;
}

/* the entry's target: its value clamped to 0..maxValue */
static inline int HudEntryTarget(HudElement *entry)
{
    int target = entry->targetValue;

    if (entry->pValue != NULL) {
        target = *entry->pValue;
        target = target < 0 ? 0 : target;
        target = target > entry->maxValue ? entry->maxValue : target;
        entry->targetValue = target;
    }

    return target;
}

/* the slide in and out: while showTimer runs the entry grows (animA, then animB), after it
   shrinks back and starts hiding */
static inline void HudEntryGrow(HudElement *entry)
{
    if (entry->showTimer < (int)(animationSpeed * 5.5f)) {
        if (entry->animB != 0 || entry->animA != 0) {
            entry->slideTime = 1;
        }

        if (entry->animB != 0) {
            entry->animB--;
        }
        else if (entry->animA != 0) {
            entry->animA--;
        }
    }
    else if (entry->animA < (int)(animationSpeed * 8.5f)) {
        entry->animA++;
    }
    else if (entry->animB < (int)(animationSpeed * 8.5f)) {
        entry->animB++;
    }
}

/* HudEntryGrow, then the icon's animation */
static inline void HudEntryAnimate(HudElement *entry)
{
    HudEntryGrow(entry);
    HudIcon_GetAnimFrame(&entry->icon);
}

// 0x00c9390 (0x310 bytes)
/* A counter entry: a changed value shows it for 180.5 frames and, once slid in, counts toward
   it faster the further it is (sqrt(diff * 0.04) * 5, at least diff * 2.5 / 10.5, 1..121 an
   accumulated step, a unit per animationSpeed * 2.5 of it). */
void HudEntry_UpdateCounter(HudElement *entry)
{
    int target = HudEntryTarget(entry);
    int slide = entry->slideTime;
    int shown = entry->displayedValue;

    if (shown != target) {
        entry->showTimer = (int)(animationSpeed * 180.5f);

        int diff = shown - target;

        diff = diff < 0 ? -diff : diff;

        if (slide >= 24 && diff != 0) {
            int speed = FastDoubleToInt(sqrtf((float)FastIntToDouble(diff) * 0.04f) * 5.0f);
            int perUnit = (int)(animationSpeed * 10.5f);
            int scaled = diff * (int)(animationSpeed * 2.5f);

            if (scaled / perUnit > speed) {
                speed = scaled / perUnit;
            }

            speed = speed < 1 ? 1 : speed;
            speed = speed > 121 ? 121 : speed;

            u8 acc = (u8)(entry->countAcc + speed);
            int unit = (int)(animationSpeed * 2.5f);

            entry->countAcc = acc;

            if (acc > unit) {
                int units = acc / unit;
                int current = entry->displayedValue;

                entry->displayedValue = entry->targetValue < current ? current - units : current + units;
                entry->countAcc = (u8)(acc - units * unit);
            }
        }
    }

    HudEntryAnimate(entry);
}

// 0x00c96b0 (0x170 bytes)
/* the same, jumping to the value once slid in */
void HudEntry_UpdateCounterSlide(HudElement *entry)
{
    int target = HudEntryTarget(entry);
    int slide = entry->slideTime;

    if (entry->displayedValue != target) {
        entry->showTimer = (int)(animationSpeed * 180.5f);

        if (slide >= 24) {
            entry->displayedValue = target;
        }
    }

    HudEntryAnimate(entry);
}

// 0x00c9820 (0x4 bytes)
void STUB_000c9820(...)
{
}

// 0x00c9824 (0x324 bytes)
/* Draws value a digit at a time from the right (down the screen for an entry at the left or
   right edge), each sliding in on its own delay, with a shadow; thousands separators ("," or "."
   in languages 3 and 5) after the 3rd and 6th digits. Returns the width. */
int HudEntry_DrawLargeNumber(HudElement *entry, int value, int x, int y, int time)
{
    int stepX;
    int stepY;
    int offsX;
    int offsY;
    int shift = 0;
    char digit[2];

    if (!(entry->alignFlags & 3) && (entry->alignFlags & 0xc)) {
        stepX = 0;
        stepY = 12;
        offsY = 0;
        offsX = (entry->width - 14) >> 1;
    }
    else {
        offsY = (entry->height - 12) >> 1;
        stepY = 0;
        stepX = 14;
        offsX = 0;
    }

    digit[1] = 0;

    int digits = 0;

    for (int rest = value; rest >= 10; rest /= 10) {
        digits++;
    }

    int width = digits * 14 + 14;

    for (int i = digits; i >= 0; i--, value /= 10) {
        int posX = i * stepX + x + shift;
        int posY = i * stepY + y;

        HudEntry_GetSlideOffset(entry, &posX, &posY, time, i);
        digit[0] = (char)('0' + value % 10);
        FontPrintLarge(posX + offsX - 1, posY + offsY + 1, 0xc0000000, digit, -1);
        FontPrintLarge(posX + offsX, posY + offsY, 0xc0008080, digit, -1);

        if ((digits - i == 5 && digits > 5) || (digits - i == 2 && digits > 2)) {
            const char *separator = (g_Language == 3 || g_Language == 5) ? "." : ",";

            FontPrintLarge(posX + offsX - 5, posY + offsY + 1, 0xc0000000, (char *)separator, -1);
            FontPrintLarge(posX + offsX - 4, posY + offsY, 0xc0008080, (char *)separator, -1);
            shift -= 4;
        }
    }

    return width;
}

/* the entry's aligned position */
static inline void HudEntryPos(HudElement *entry, int *x, int *y)
{
    *x = entry->x;
    *y = entry->y;

    u32 align = entry->alignFlags;

    if (!(align & 1) && !(align & 2)) {
        *y -= entry->height >> 1;
    }

    if (!(align & 4)) {
        *x -= (align & 8) ? entry->width : entry->width >> 1;
    }
}

// 0x00c9b48 (0xec bytes)
/* an entry's displayed value as a large number; returns its width */
int Draw_LargeNumberHud(HudElement *entry)
{
    int x;
    int y;

    HudEntryPos(entry, &x, &y);
    HudEntry_DrawLargeNumber(entry, entry->displayedValue, x, y, entry->slideTime);
    HudEntry_GetSlideOffset(entry, &x, &y, entry->slideTime, 0);
    return entry->width;
}

// 0x00c9c34 (0xc8 bytes)
/* the slide offset for nothing; returns the width */
int ____Unused_HudEntry_GetSlideField58(HudElement *entry)
{
    int x;
    int y;

    HudEntryPos(entry, &x, &y);
    HudEntry_GetSlideOffset(entry, &x, &y, entry->slideTime, 0);
    return entry->width;
}

/* the meter's 100 bubbles scattered in the tank (x within the width less the bubble, y spread
   over g_OxygenBubbleRows rows) with random drift */
static inline void HudBubblesInit(void)
{
    for (int i = 0; i < 100; i++) {
        float size;

        if (i < 10) {
            size = g_OxygenBubbleSize[0];
        }
        else if (i < 20) {
            size = g_OxygenBubbleSize[1];
        }
        else {
            size = g_OxygenBubbleSize[2];
        }

        Vec4 *bubble = &g_OxygenBubbles[i];
        float rowHeight = -(size * 2.0f - 232.0f) / (float)g_OxygenBubbleRows;
        float top = (float)(i % g_OxygenBubbleRows) * rowHeight + (size - 116.0f);
        float bottom = top + rowHeight;

        bubble->x = MB_randRangeFloat(size - 17.0f, 17.0f - size);
        bubble->y = MB_randRangeFloat(top, bottom);
        bubble->z = MB_randRangeFloat(-0.4f, 0.4f);
        bubble->w = MB_randRangeFloat(-0.6f, 0.6f);
        bubble->z += MB_randRangeFloat(-0.4f, 0.4f);
        bubble->w += MB_randRangeFloat(-0.6f, 0.6f);
        bubble->z += MB_randRangeFloat(-0.4f, 0.4f);
        bubble->w += MB_randRangeFloat(-0.6f, 0.6f);
    }
}

/* moves half the bubbles (alternate frames), bouncing them off the tank's sides */
static inline void HudBubblesMove(void)
{
    for (int i = g_MainLoopFrames % 2; i < 100; i += 2) {
        float size = g_OxygenBubbleSize[0];

        if (i > 9) {
            size = i < 30 ? g_OxygenBubbleSize[1] : g_OxygenBubbleSize[2];
        }

        Vec4 *bubble = &g_OxygenBubbles[i];
        float speedX = bubble->z;
        float speedY = bubble->w;
        float limitX = size - 17.0f;
        float limitY = size - 116.0f;
        float x = bubble->x + speedX;
        float y = bubble->y + speedY;

        bubble->x = x;
        bubble->y = y;

        if (x < limitX) {
            speedX = -speedX;
            bubble->x = limitX;
            bubble->z = speedX;
            x = limitX;
        }

        if (x > -limitX) {
            bubble->x = -limitX;
            bubble->z = -speedX;
        }

        if (y < limitY) {
            speedY = -speedY;
            bubble->y = limitY;
            bubble->w = speedY;
            y = limitY;
        }

        if (y > -limitY) {
            bubble->y = -limitY;
            bubble->w = -speedY;
        }
    }
}

// 0x00c9d28 (0x280 bytes)
/* the oxygen meter: a counter entry and its bubbles */
void OxygenHud_Init(HudElement *entry)
{
    HudEntry_InitCounterInline(entry);
    HudBubblesInit();
}

// 0x00c9fb0 (0x144 bytes)
void OxygenHud_Update(HudElement *entry)
{
    HudEntry_UpdateCounter(entry);
    HudBubblesMove();
}

// 0x00ca0f4 (0x2c8 bytes)
/* effect texture tex (all of it) as a w x h quad at (x, y) with alpha (0x80 = opaque) */
void Hud_DrawTexQuad_v2(int tex, int x, int y, int w, int h, int alpha)
{
    u8 *header = HudTexHeader(tex);

    HudBindTex(header);

    u32 size = *(u32 *)(header + 0x18);

    HudBeginQuads(alpha << 24 | 0x808080);
    HudVertex(0, x, y);
    HudVertex(size << 16, x, y + h);
    HudVertex(size << 16 | size >> 16, x + w, y + h);
    HudVertex(size >> 16, x + w, y);
    HudEnd();
}

// 0x00ca3bc (0x28 bytes)
/* the same with x and y in 1/16 pixels (w and h are passed as they are) */
void Hud_DrawTexQuad_v2_Fixed(int tex, int x, int y, int w, int h, int alpha)
{
    Hud_DrawTexQuad_v2(tex, x >> 4, y >> 4, w, h, alpha);
}

// 0x00ca3e4 (0x80 bytes)
/* frame of icon iconId's texture frames (0 when missing or past its frames) */
int GetIconFrameTex(u32 iconId, int frame)
{
    u32 i = 0;

    while (IconTableEntry[i].iconId != iconId && IconTableEntry[i].iconId != 0xffff) {
        i++;
    }

    if (IconTableEntry[i].iconId == 0xffff || frame >= IconTableEntry[i].frameCnt) {
        return 0;
    }

    return IconTableEntry[i].firstFrame + frame;
}

// 0x00ca464 (0x2c8 bytes)
/* Hud_DrawTexQuad_v2 with the texture turned a quarter */
void Hud_DrawTexQuad_v3(int tex, int x, int y, int w, int h, int alpha)
{
    u8 *header = HudTexHeader(tex);

    HudBindTex(header);

    u32 size = *(u32 *)(header + 0x18);

    HudBeginQuads(alpha << 24 | 0x808080);
    HudVertex(size >> 16, x, y);
    HudVertex(0, x, y + h);
    HudVertex(size << 16, x + w, y + h);
    HudVertex(size << 16 | size >> 16, x + w, y);
    HudEnd();
}

// 0x00ca72c (0x324 bytes)
/* a flat colour (abgr) rectangle from (x0, y0) to (x1, y1), effect texture 22 bound; mode 0
   moves it a pixel up and left */
void DrawFlatOverlay(int x0, int y0, int x1, int y1, u32 color, int mode)
{
    HudBindTex((u8 *)(uintptr_t)EffectTexHeaders + GetEffectTex(22) * 0x24);
    HudEmit(HUD_SET_COLOR4UB);
    HudEmit((color >> 8 & 0xff) << 8 | (color >> 24 & 0xff) << 24 | (color >> 16 & 0xff) << 16 | (color & 0xff));
    HudEmit(HUD_SET_TEXCOORD2S);
    HudEmit(0);
    HudEmit(0x400c1714);
    HudEmit(0);
    HudEmit(0);
    HudEmit(0);
    HudEmit(HUD_SET_BEGIN_END);
    HudEmit(CELL_GCM_PRIMITIVE_QUADS);

    if (mode == 0) {
        HudPosition(x0 - 1, y0 - 1);
        HudPosition(x0 - 1, y1 - 1);
        HudPosition(x1 - 1, y1 - 1);
        HudPosition(x1 - 1, y0 - 1);
    }
    else {
        HudPosition(x0, y0);
        HudPosition(x0, y1);
        HudPosition(x1, y1);
        HudPosition(x1, y0);
    }

    HudEnd();
}

/* the HUD's x shift for the screen mode: -80 (-60 in mode 5) in 4:3, 20 in widescreen mode 5,
   20 in mode 129 */
static inline int HudScreenShift(void)
{
    IdolDraw *idol = (IdolDraw *)(uintptr_t)g_pIdolDraw;
    int shift = 0;

    if (idol->widescreen == 0) {
        shift = idol->unk11 == 5 ? -60 : -80;
    }
    else if (idol->unk11 == 5) {
        shift = 20;
    }

    return idol->unk11 == 129 ? 20 : shift;
}

/* the oxygen warning blink: whether frame is in the first half of the 1.5 s period */
static inline int OxygenBlink(int frame)
{
    int period = (int)((float)(s64)(animationSpeed * 1.5f) * 60.0f);
    int half = (int)(animationSpeed * 0.75f * 60.0f);

    return frame % period - half < 0;
}

// 0x00caa88 (0x778 bytes)
/* The oxygen meter (g_OxygenMeterSize): a dark panel, the tank icon (blinking, with a sound each
   blink, at a third of the oxygen or less) and the bubbles below the water level (the oxygen),
   smaller ones higher up. Returns the width. */
int DrawOxygenMeter(HudElement *entry)
{
    int x = entry->x + HudScreenShift();
    int y = entry->y;
    u32 align = entry->alignFlags;
    int width = g_OxygenMeterSize[0];
    int height = g_OxygenMeterSize[1];

    entry->width = width;
    entry->height = height;

    if (!(align & 1) && !(align & 2)) {
        y -= height >> 1;
    }

    if (!(align & 4)) {
        x -= (align & 8) ? width : width >> 1;
    }

    HudEntry_GetSlideOffset(entry, &x, &y, entry->slideTime, 0);

    int panelX = (x + entry->icon.offsX) * 16 + g_OxygenMeterSize[0] * 208 / 64;
    int panelY = (y + entry->icon.offsY) * 16 + g_OxygenMeterSize[1] * 160 / 256;

    DrawFlatOverlay(panelX, panelY, panelX + g_OxygenMeterSize[0] * 608 / 64, panelY + g_OxygenMeterSize[1] * 3744 / 256, 0x80684c2f, 1);

    int wasLit = 0;
    int lit = 0;

    if (entry->displayedValue * 3 <= 10000) {
        wasLit = OxygenBlink(g_MainLoopFrames - 1);
    }

    if (entry->displayedValue * 3 <= 10000) {
        lit = OxygenBlink(g_MainLoopFrames);
    }

    if (wasLit == 0 && lit == 1) {
        Hero_PlaySound(11, 0);
    }

    Hud_DrawTexQuad_v3(GetIconFrameTex(entry->iconId, lit), x + entry->icon.offsX, y + entry->icon.offsY, g_OxygenMeterSize[0], g_OxygenMeterSize[1], 0x80);

    /* the bubbles, in 1/16 pixels from the tank's centre */
    float meterW = (float)g_OxygenMeterSize[0];
    float meterH = (float)g_OxygenMeterSize[1];
    float halfW = meterW * g_OxygenTankScale[0] * 0.5f;
    float halfH = meterH * g_OxygenTankScale[1] * 0.5f;
    float scaleX = halfW * (1.0f / 17.0f) * 16.0f;
    float scaleY = halfH * (1.0f / 116.0f) * 16.0f;
    float centerX = ((1.0f - g_OxygenTankScale[0]) * 0.5f * meterW + (halfW + (float)(x + entry->icon.offsX))) * 16.0f;
    float centerY = ((1.0f - g_OxygenTankScale[1]) * 0.5f * meterH + (halfH + (float)(y + entry->icon.offsY))) * 16.0f;
    float level = -((float)(10000 - entry->displayedValue) * 0.0001f * 2.0f * 116.0f - 116.0f);
    int tex = GetIconFrameTex(entry->iconId, 2);
    int size = 0;

    for (int i = 0; i < 100; i++) {
        float size0 = g_OxygenBubbleSize[0];
        float size1 = g_OxygenBubbleSize[1];
        float size2 = g_OxygenBubbleSize[2];

        if (i == 0) {
            centerX -= size0 * 16.0f;
            centerY -= size0 * 16.0f;
            level = size0 + level;
            size = (int)(size0 * 32.0f);
        }
        else if (i == 10) {
            centerX -= (size1 - size0) * 16.0f;
            centerY -= (size1 - size0) * 16.0f;
            size = (int)(size1 * 32.0f);
            level += size1 - size0;
        }
        else if (i == 30) {
            centerX -= (size2 - size1) * 16.0f;
            centerY -= (size2 - size1) * 16.0f;
            level += size2 - size1;
            size = (int)(size2 * 32.0f);
        }

        Vec4 *bubble = &g_OxygenBubbles[i];

        if (bubble->y > level) {
            continue;
        }

        int bubbleX = (int)(bubble->x * scaleX + centerX) >> 4;
        int bubbleY = (int)(centerY + -(bubble->y * scaleY)) >> 4;
        int pixels = (int)((float)size * 0.0625f);

        Hud_DrawTexQuad_v2(tex, bubbleX, bubbleY, pixels, pixels, 0x80);
    }

    return entry->width;
}

// 0x00cb228 (0x280 bytes)
/* moby 185's meter (the oxygen meter's layout and bubbles) */
void Moby185Hud_Init(HudElement *entry)
{
    HudEntry_InitCounterInline(entry);
    HudBubblesInit();
}

// 0x00cb4b0 (0x144 bytes)
void Moby185Hud_Update(HudElement *entry)
{
    HudEntry_UpdateCounterSlide(entry);
    HudBubblesMove();
}

// 0x00cb620 (0x4cc bytes)
/* moby 185's meter: the tank icon (frame 0) and the bubbles (frame 1, all the smallest size)
   below the level; returns the width */
int Draw_Moby185Meter(HudElement *entry)
{
    IdolDraw *idol = (IdolDraw *)(uintptr_t)g_pIdolDraw;
    int shift = 0;

    if (idol->widescreen == 0) {
        shift = idol->unk11 == 5 ? -60 : -80;
    }
    else if (idol->unk11 == 5) {
        shift = 20;
    }

    int x = entry->x + shift;
    int y = entry->y;
    u32 align = entry->alignFlags;
    int width = g_OxygenMeterSize[0];
    int height = g_OxygenMeterSize[1];

    entry->width = width;
    entry->height = height;

    if (!(align & 1) && !(align & 2)) {
        y -= height >> 1;
    }

    if (!(align & 4)) {
        x -= (align & 8) ? width : width >> 1;
    }

    HudEntry_GetSlideOffset(entry, &x, &y, entry->slideTime, 0);
    Hud_DrawTexQuad_v3(GetIconFrameTex(entry->iconId, 0), x + entry->icon.offsX, y + entry->icon.offsY, g_OxygenMeterSize[0], g_OxygenMeterSize[1], 0x80);

    float meterW = (float)g_OxygenMeterSize[0];
    float meterH = (float)g_OxygenMeterSize[1];
    float halfW = meterW * g_OxygenTankScale[0] * 0.5f;
    float halfH = meterH * g_OxygenTankScale[1] * 0.5f;
    float scaleX = halfW * (1.0f / 17.0f) * 16.0f;
    float scaleY = halfH * (1.0f / 116.0f) * 16.0f;
    float centerX = ((1.0f - g_OxygenTankScale[0]) * 0.5f * meterW + (halfW + (float)(x + entry->icon.offsX))) * 16.0f;
    float centerY = ((1.0f - g_OxygenTankScale[1]) * 0.5f * meterH + (halfH + (float)(y + entry->icon.offsY))) * 16.0f;
    float level = -((float)(10000 - entry->displayedValue) * 0.0001f * 2.0f * 116.0f - 116.0f);
    int tex = GetIconFrameTex(entry->iconId, 1);
    int size = 0;

    for (int i = 0; i < 100; i++) {
        if (i == 0) {
            float size0 = g_OxygenBubbleSize[0];

            centerX -= size0 * 16.0f;
            centerY -= size0 * 16.0f;
            level = size0 + level;
            size = (int)(size0 * 32.0f);
        }

        Vec4 *bubble = &g_OxygenBubbles[i];

        if (bubble->y > level) {
            continue;
        }

        int pixels = (int)((float)size * 0.0625f);

        Hud_DrawTexQuad_v2(tex, (int)(bubble->x * scaleX + centerX) >> 4, (int)(centerY + -(bubble->y * scaleY)) >> 4, pixels, pixels, 0x80);
    }

    return entry->width;
}

// 0x00cbaf8 (0x80 bytes)
/* the button prompt: a counter entry with a 32x32 icon */
void PromptHud_Init(HudElement *entry)
{
    entry->showTimer = (int)(animationSpeed * 180.5f) + 30;
    entry->width = 32;
    entry->height = 32;
    entry->icon.offsX = 0;
    entry->icon.offsY = 0;
    HudEntry_CalcNumberSize(entry);
}

// 0x00cbb78 (0x20 bytes)
void PromptHud_Update(HudElement *entry)
{
    HudEntry_UpdateCounter(entry);
}

// 0x00cbb98 (0x2c8 bytes)
/* Hud_DrawTexQuad_v2 with the texture turned half round */
void Hud_DrawTexQuad(int tex, int x, int y, int w, int h, int alpha)
{
    u8 *header = HudTexHeader(tex);

    HudBindTex(header);

    u32 size = *(u32 *)(header + 0x18);

    HudBeginQuads(alpha << 24 | 0x808080);
    HudVertex(size << 16 | size >> 16, x, y);
    HudVertex(size >> 16, x, y + h);
    HudVertex(0, x + w, y + h);
    HudVertex(size << 16, x + w, y);
    HudEnd();
}

// 0x00cbe60 (0x290 bytes)
/* Hud_DrawTexQuad_v2 with a texture header */
void Hud_DrawTexHeaderQuad(u8 *header, int x, int y, int w, int h, int alpha)
{
    HudBindTex(header);

    u32 size = *(u32 *)(header + 0x18);

    HudBeginQuads(alpha << 24 | 0x808080);
    HudVertex(0, x, y);
    HudVertex(size << 16, x, y + h);
    HudVertex(size << 16 | size >> 16, x + w, y + h);
    HudVertex(size >> 16, x + w, y);
    HudEnd();
}

// 0x00cc0f0 (0x58 bytes)
void DrawSprite(int tex, int x, int y, int w, int h, int alpha)
{
    Hud_DrawTexHeaderQuad(HudTexHeader(tex), x, y, w, h, alpha);
}

// 0x00cc148 (0x200 bytes)
/* the text box (icon HUD_ICON_TEXT_BOX): a 32-wide end cap (frame 1), the middle (frame 0) and the cap
   turned round */
void Hud_DrawTextBox(int x, int y, int w, int h, int alpha)
{
    int middle = GetIconFrameTex(HUD_ICON_TEXT_BOX, 0);
    int cap = GetIconFrameTex(HUD_ICON_TEXT_BOX, 1);

    Hud_DrawTexHeaderQuad(HudTexHeader(cap), x, y, 32, h, alpha);
    Hud_DrawTexHeaderQuad(HudTexHeader(middle), x + 32, y, w - 64, h, alpha);
    Hud_DrawTexQuad(cap, w + x - 32, y, 32, h, alpha);
}

// 0x00cc348 (0xd8 bytes)
/* text centred on x in a text box (alpha at most 80), with a shadow */
void Hud_DrawTextBoxCentered(int x, int y, u32 color, char *text)
{
    int alpha = (int)color >> 24;
    int left = FontPrintLargeCenter(x + 1, y + 1, color & 0xff000000, text, -1);

    Hud_DrawTextBox(left - 32, y - 8, (x - (left - 32)) * 2, 32, alpha < 80 ? alpha : 80);
    FontPrintLargeCenter(x, y, color, text, -1);
}

/* a text box line: text centred on 256 at y with a shadow (alpha only), the box behind it */
static inline void PromptBoxLine(int y, u32 color, u32 shadow, int alpha, char *text)
{
    int left = FontPrintLargeCenter(257, y + 9, shadow, text, -1);

    Hud_DrawTextBox(left - 32, y, (256 - (left - 32)) * 2, 32, alpha);
    FontPrintLargeCenter(256, y + 8, color, text, -1);
}

// 0x00cc450 (0x950 bytes)
// strings: 006520dc: '%s: %d:%02d:%02d' | 006520f4: '%s: %d'
/* The prompt message ("Open gadgetron vendor"...) in a text box at the top, fading in with animA;
   a 1 in g_PromptText makes two lines. Near the race starts on Rilgar and Kalebo the best time
   and score show below it. Returns the width. */
int Draw_PromptMsg(HudElement *entry)
{
    int y = g_PromptY + (Cutscene == 0 ? 18 : 10);
    float fade = (float)FastIntToDouble(entry->animA) / (animationSpeed * 8.0f);

    fade = fade - 0.0f >= 0.0f ? fade : 0.0f;
    fade = 1.0f - fade >= 0.0f ? fade : 1.0f;

    int alpha = FastDoubleToInt(fade * 128.0f);
    u32 shadow = (u32)alpha << 24;
    u32 color = shadow | 0x40f040;
    int split;

    for (split = 0; g_PromptText[split] != 1 && g_PromptText[split] != 0 && split < 128; split++) {
    }

    int middle = GetIconFrameTex(HUD_ICON_TEXT_BOX, 0);
    int cap = GetIconFrameTex(HUD_ICON_TEXT_BOX, 1);

    if (g_PromptText[split] == 1) {
        g_PromptText[split] = 0;

        char *second = &g_PromptText[split + 1];
        int width1 = FontLen(g_PromptText, -1);
        int left1 = 224 - (width1 >> 1);
        int width2 = FontLen(second, -1);
        int left2 = 224 - (width2 >> 1);
        int width = left1 < left2 ? width1 : width2;
        int left = left1 < left2 ? left1 : left2;

        Hud_DrawTexHeaderQuad(HudTexHeader(middle), left + 32, y, width, 54, alpha);
        Hud_DrawTexHeaderQuad(HudTexHeader(cap), left, y, 32, 54, alpha);
        Hud_DrawTexQuad(cap, left + width + 32, y, 32, 54, alpha);
        FontPrintMediumCenter(256, y + 8, color, g_PromptText, -1);
        FontPrintMediumCenter(256, y + 27, color, second, -1);
    }
    else {
        int width = FontLen(g_PromptText, -1);
        int left = -(width >> 1) + 224;

        Hud_DrawTexHeaderQuad(HudTexHeader(cap), left, y, 32, 32, alpha);
        Hud_DrawTexHeaderQuad(HudTexHeader(middle), -(width >> 1) + 256, y, width, 32, alpha);
        Hud_DrawTexQuad(cap, left + width + 32, y, 32, 32, alpha);

        if (Level == Hoven && g_JapaneseMode) {
            FontPrintCenterScaledMedium(256, y + 8, color, g_PromptText, -1, 0.85f);
        }
        else {
            FontPrintMediumCenter(256, y + 8, color, g_PromptText, -1);
        }
    }

    /* the best race time and score at the race start */
    if (Level == Rilgar || Level == Kalebo) {
        float startX = 115.7f;
        float startY = 287.0f;
        float startZ = 119.5f;

        if (Level == Rilgar) {
            startX = 294.5f;
            startY = 225.4f;
            startZ = 100.0f;
        }

        float deltaZ = g_heroPosition.z - startZ;
        float deltaX = g_heroPosition.x - startX;
        float deltaY = g_heroPosition.y - startY;

        if (sqrtf(deltaZ * deltaZ + deltaX * deltaX + deltaY * deltaY) < 5.0f) {
            g_PromptBottom = y + 100;

            int race = Level == Kalebo;
            int time = g_RaceBestTime[race];
            int score = g_RaceBestScore[race];

            if (time != 0) {
                int perMinute = g_IsPal == 0 ? 3600 : 3000;
                int perSecond = g_IsPal == 0 ? 60 : 50;
                int minutes = time / perMinute;
                int rest = time - minutes * perMinute;
                int seconds = rest / perSecond;
                char line[64];
                int boxAlpha = (int)color >> 24;

                boxAlpha = boxAlpha < 80 ? boxAlpha : 80;
                sprintf(line, "%s: %d:%02d:%02d", help_msg_string_by_index(STR_BEST_TIME), minutes, seconds, (rest - seconds * perSecond) * 100 / perSecond);
                PromptBoxLine(y + 32, color, shadow, boxAlpha, line);

                if (score != 0) {
                    sprintf(line, "%s: %d", help_msg_string_by_index(STR_BEST_SCORE), score);
                    PromptBoxLine(y + 64, color, shadow, boxAlpha, line);
                }
            }
        }
    }

    return entry->width;
}

// 0x00ccda0 (0x64 bytes)
// strings: 006520fc: '(Message too long_)'
/* the prompt message into g_PromptText (the "too long" text is copied first when it is short,
   then replaced; the check is backwards) */
char *GetHelpLen(char *text)
{
    if (strlen(text) < 80) {
        strcpy(g_PromptText, "(Message too long_)");
    }

    return strcpy(g_PromptText, text);
}

// 0x00cce10 (0x74 bytes)
void Moby849Hud_Init(HudElement *entry)
{
    HudEntry_InitCounterInline(entry);
}

// 0x00cce90 (0xe8 bytes)
/* the suck cannon's meter: 5 slots (10 golden), shown while it is Ratchet's weapon */
void Moby849Hud_Update(HudElement *entry)
{
    HudEntry_UpdateCounter(entry);
    entry->maxValue = g_goldWeaponsArray.suckCannon != 0 ? 10 : 5;

    if (g_CurrentWeapon == 9 && g_heroType == 0) {
        entry->showTimer = (int)(animationSpeed * 120.5f) + 30;
    }
    else {
        entry->showTimer = entry->showTimer > 30 ? 30 : entry->showTimer;
    }
}

// 0x00ccf78 (0x30 bytes)
/* DrawFlatOverlay with the corners in 1/16 pixels */
void DrawFlatOverlay_Fixed(int x0, int y0, int x1, int y1, u32 color, int mode)
{
    DrawFlatOverlay(x0 >> 4, y0 >> 4, x1 >> 4, y1 >> 4, color, mode);
}

// 0x00ccfa8 (0x3e8 bytes)
/* the suck cannon's meter (the oxygen meter's size): a dark panel, the filled part (value of
   maxValue) with black lines between the slots, and the frame icon; returns the width */
int Draw_Moby849Meter(HudElement *entry)
{
    int x = entry->x + HudScreenShift();
    int y = entry->y;
    u32 align = entry->alignFlags;
    int width = g_OxygenMeterSize[0];
    int height = g_OxygenMeterSize[1];

    entry->width = width;
    entry->height = height;

    if (!(align & 1) && !(align & 2)) {
        y -= height >> 1;
    }

    if (!(align & 4)) {
        x -= (align & 8) ? width : width >> 1;
    }

    HudEntry_GetSlideOffset(entry, &x, &y, entry->slideTime, 0);

    int left = (x + entry->icon.offsX) * 16 + g_OxygenMeterSize[0] * 208 / 64;
    int top = (y + entry->icon.offsY) * 16 + g_OxygenMeterSize[1] * 160 / 256;
    int right = left + g_OxygenMeterSize[0] * 608 / 64;

    DrawFlatOverlay(left, top, right, top + g_OxygenMeterSize[1] * 3744 / 256, 0x80000000, 1);

    /* the fill, from the bottom */
    int bottom = (y + entry->icon.offsY) * 16 + g_OxygenMeterSize[1] * 3904 / 256;

    DrawFlatOverlay(left >> 4, bottom >> 4, right >> 4, (bottom - entry->displayedValue * g_OxygenMeterSize[1] * 3744 / (entry->maxValue << 8)) >> 4, 0x80829e00, 1);

    for (int i = 1; i < entry->displayedValue; i++) {
        int line = g_OxygenMeterSize[1] * i * 3744 / (entry->maxValue << 8);
        int lineY = y * 16 + entry->icon.offsY * 16 + g_OxygenMeterSize[1] * 3904 / 256 - line;

        DrawFlatOverlay(left >> 4, (lineY - 16) >> 4, right >> 4, (lineY + 16) >> 4, 0x80000000, 1);
    }

    Hud_DrawTexQuad_v3(GetIconFrameTex(entry->iconId, 0), x + entry->icon.offsX, y + entry->icon.offsY, g_OxygenMeterSize[0], g_OxygenMeterSize[1], 0x80);
    return entry->width;
}


/* the quick select's usage record; 0xa0 is not a multiple of the record size, so this is
   probably not part of the same record array (REVISIT) */
#define USAGE_QUICK_SELECT ((UsageRecord *)(CHAR_ARRAY_00a0feec + 0xa0))

/* the 0x4c-byte item record for item, from 0x721000 (+0x38 icon, +0x46/+0x48 name and gold
   name help strings); only +0x38 has a symbol, so the table is reached from there (REVISIT) */
static inline u8 *ItemInfo(int item)
{
    return (u8 *)&DAT_00721038 + item * 0x4c - 0x38;
}

/* the per-item ammo info, 24 bytes from 0x737d30: +8 has ammo, +0xe the max */
static inline u16 *AmmoInfo(int item)
{
    return (u16 *)&DAT_00737d38 + item * 12;
}

// 0x00cd398 (0xec bytes)
void QuickSelectHud_Init(HudElement *entry)
{
    g_QuickSelectSlotCnt = 8;

    entry->icon.offsX = 0;
    entry->icon.offsY = 0;
    entry->width = g_QuickSelectSize[0];
    entry->height = g_QuickSelectSize[1];
    entry->displayedValue = -2;
    entry->targetValue = (int)(animationSpeed * 30.5f);
    *(u32 *)&entry->animA = 0;

    g_QuickSelectPages = g_QuickSelectPageTable;
    g_QuickSelectPage = 0;

    for (int i = 0; i < 8; i++) {
        u32 item = g_QuickSelectItems[i];

        g_QuickSelectSlots[0][i].item = item;
        g_QuickSelectSlots[0][i].iconId = *(u16 *)(ItemInfo(item) + 0x38);
    }
}

/* the slot the d-pad moves to from slot; none is the table used from no selection (-1) */
static inline int HudRingDpad(int slot, int buttons, QuickSelectSlot *none)
{
    QuickSelectSlot *page = g_QuickSelectPages[g_QuickSelectPage];

    if (buttons & 0x1000) {
        slot = (slot == -1) ? none->down : page[slot].down;
    }

    if (buttons & 0x4000) {
        slot = (slot == -1) ? none->left : page[slot].left;
    }

    if (buttons & 0x8000) {
        slot = (slot == -1) ? none->up : page[slot].up;
    }

    if (buttons & 0x2000) {
        slot = (slot == -1) ? none->right : page[slot].right;
    }

    return slot;
}

/* the stick's angle (0 when centred) and length */
static inline float HudRingStick(float *length)
{
    float stickLen = sqrtf(g_Pad.stickX * g_Pad.stickX + g_Pad.stickY * g_Pad.stickY);
    float stickX = g_Pad.stickX;
    float stickY = g_Pad.stickY;

    if (stickLen != 0.0f) {
        stickX /= stickLen;
        stickY /= stickLen;
    }

    *length = stickLen;
    return FastAtan2Inline(stickY, stickX);
}

/* the stick angle as a position around the ring, in slots */
static inline float HudRingStickPos(float stickAngle, int cnt)
{
    float ringAngle = stickAngle + PI + PI + PI / 2 + PI / (float)cnt;

    return ringAngle * ((float)cnt * (1.0f / (2 * PI)));
}

/* the entry's slot when the fade-out ends, then unregisters it */
static inline void HudRingClose(HudElement *entry)
{
    int index = HudFindEntry(entry->id);

    if (index < HUD_ENTRY_CNT) {
        RegisterHUDCallback(index, 0xffff, NULL, NULL, NULL, NULL, 0);
    }

    entry->slideTime = -6;
    g_QuickSelectCloseTime = g_MainLoopFrames;
}

/* targetValue: the state in the top byte (0 waiting for the stick, 1 open), a countdown below;
   displayedValue: the selected slot, -1 for none */
// 0x00cd4b8 (0xa00 bytes)
// inlined: FastAtan2 @0xcd674
void UpdateQuickSelect(HudElement *entry)
{
    entry->showTimer = (int)(animationSpeed * 180.5f);
    entry->slideTime = 24;

    if (FastDecTimerS16((ushort *)&DAT_0096bfb2) != 0) {
        DAT_0096560c = 2;
        DAT_00965b70 = 2;
        DAT_009660d4 = 2;
        DAT_00966638 = 2;
    }

    float stickLen;
    float stickAngle = HudRingStick(&stickLen);

    int timer = entry->targetValue;

    if ((timer >> 24) == 0) {
        bool waiting = !(g_Pad.pressedButton & 0xf000) && stickLen >= 0.5f;

        if (waiting) {
            entry->targetValue = timer - 1;
        }

        if (waiting && timer != 0) {
            timer--;
        } else {
            timer = 0x10000ff;
            entry->displayedValue = -1;
            entry->targetValue = timer;
        }
    }

    int oldSlot = entry->displayedValue;
    int slot = oldSlot;
    int dir = 0;

    if ((timer >> 24) == 1 && (g_Pad.unk0c0 & 0x10)) {
        if (stickLen <= 0.9f) {
            if (g_Pad.unk0d8 == 0 && (g_Pad.pressedButton & 0xf000)) {
                entry->displayedValue = HudRingDpad(oldSlot, g_Pad.pressedButton, &g_QuickSelectSlots[1][4]);
            }
        } else {
            int cnt = g_QuickSelectSlotCnt;
            float ringAngle = stickAngle + PI + PI + PI / 2 + PI / (float)cnt;
            float pos = ringAngle * ((float)cnt * (1.0f / (2 * PI)));
            float slotAngle = (float)oldSlot * (2 * PI) / (float)FastIntToDouble(cnt) - PI;
            bool keep = false;

            if (oldSlot != -1) {
                float diff = FastDiffRots(stickAngle, PI / 2);
                keep = (float)FastSubRots(slotAngle, diff) <= 0.589049f;
            }

            if (!keep) {
                int newSlot = (int)pos % g_QuickSelectSlotCnt;

                /* the even slots only win when the stick is well inside them */
                if ((newSlot & 1) == 0) {
                    float frac = pos - (float)FastDoubleToInt(pos);

                    if (frac > 1.0f - g_QuickSelectSnap) {
                        newSlot++;
                    } else if (frac < g_QuickSelectSnap) {
                        newSlot--;
                    }

                    newSlot = (g_QuickSelectSlotCnt + newSlot) % g_QuickSelectSlotCnt;
                }

                entry->displayedValue = newSlot;
                g_QuickSelectAngleDelta = FastAddRots(ringAngle - ((float)newSlot * (PI / 4) + PI / 8));
                dir = (g_QuickSelectAngleDelta <= 0.0f) ? -1 : 1;
            }
        }

        /* an empty slot hands over to its neighbour in the direction of the stick */
        slot = entry->displayedValue;
        QuickSelectSlot *page = g_QuickSelectPages[g_QuickSelectPage];

        if (page[slot].iconId == 0 && dir != 0) {
            int next = (slot + dir) % g_QuickSelectSlotCnt;

            if (page[next].iconId != 0) {
                entry->displayedValue = next;
                slot = next;
            }
        }
    }

    if (slot != oldSlot) {
        entry->animB = 0;
    } else if (entry->animB < g_HudFadeSteps) {
        entry->animB++;
    }

    if (!(g_Pad.unk0c0 & 0x10)) {
        if (slot >= 0) {
            int item = g_QuickSelectPages[g_QuickSelectPage][slot].item;

            if (item != 0) {
                UsageRecord *usage = USAGE_QUICK_SELECT;

                if (g_CurrentWeapon != item && usage->uses != 0xffff) {
                    usage->uses++;
                }

                int playTime = (int)(animationSpeed * ((float)g_GameFrameCount + 0.5f)) / 600;
                if (usage->lastUse < playTime) {
                    usage->lastUse = (u16)playTime;
                }

                usage->levels |= 1 << (Level & 0x3f) | 0x80000000;

                if (item == 24) {
                    DAT_0096bcd5 = 1;
                } else {
                    DAT_0096bd98 = item;
                }

                u16 *ammo = AmmoInfo(item);
                int *count = &((int *)&currentAmmoArray)[item];

                if (ammo[0] != 0 && *count > ammo[3]) {
                    *count = ammo[3];
                }
            }
        }

        if (entry->animA != 0) {
            entry->animA--;
        }
    } else if (entry->animA < g_HudFadeSteps) {
        entry->animA++;
    }

    if (entry->animA == 0) {
        g_QuickSelectSavedSlot = entry->displayedValue;
        g_QuickSelectSavedTimer = entry->targetValue;

        HudRingClose(entry);
    }
}

// 0x00cdeb8 (0x270 bytes)
/* Draws texture frame tex at (x, y) + the icon offset, by default at twice the size the
   texture header gives; flags 1 anchors the bottom right, 2 draws at the header size moved
   in by half of it, 4 moves it up and left by the size and draws at double */
void HudEntry_DrawIcon(HudElement *entry, int tex, int x, int y, u32 flags, int alpha)
{
    if (tex < 0) {
        return;
    }

    u8 *header = HudTexHeader(tex);
    u32 size = *(u32 *)(header + 0x18);
    int width = size >> 18;
    int height = (size >> 2) & 0x3fff;

    x += entry->icon.offsX;
    y += entry->icon.offsY;

    int left = (flags & 1) ? x - width : x;
    int top = (flags & 1) ? y - height : y;
    int drawWidth = size >> 17;
    int drawHeight = (size >> 1) & 0x7fff;

    if (flags & 2) {
        left += size >> 19;
        top += (size >> 3) & 0x1fff;
        drawWidth = width;
        drawHeight = height;
    }

    if (flags & 4) {
        left -= width;
        top -= height;
        drawWidth *= 2;
        drawHeight *= 2;
    }

    Hud_DrawTexHeaderQuad(header, left, top, drawWidth, drawHeight, alpha);
}

/* a fade counter as 0..1 */
static inline float HudFade(int counter)
{
    float fade = HudIntToFloat(counter) / HudIntToFloat(g_HudFadeSteps);

    if (fade > 1.0f) {
        return 1.0f;
    }

    if (fade < 0.0f) {
        return 0.0f;
    }

    return fade;
}

/* what the quick select and clank command rings share while drawing */
typedef struct HudRing {
    float fade;              /* animA: the ring fading in */
    float selectFade;        /* animB: the selection settling */
    int alpha;
    int highlightAlpha;      /* alpha pulsing with g_QuickSelectPulsePeriod */
    int x, y;                /* the ring's top left */
} HudRing;

/* the fades and position, and the background: frame of QUICK_SELECT, mirrored into the
   four quarters of g_QuickSelectSize */
static inline void HudRingBegin(HudElement *entry, HudRing *ring, int frame)
{
    ring->fade = HudFade(entry->animA);
    ring->selectFade = HudFade(entry->animB);

    float phase = HudIntToFloat(worldUpdateTime % g_QuickSelectPulsePeriod) / HudIntToFloat(g_QuickSelectPulsePeriod) * 6.28318f - 3.14159f;
    float pulse = FastSinInline(phase);

    ring->alpha = FastDoubleToInt(ring->fade * 128.0f);
    ring->highlightAlpha = FastDoubleToInt(ring->fade * 128.0f * (pulse * 0.125f + 0.875f));

    int x = entry->x;
    int y = entry->y;
    u32 align = entry->alignFlags;

    if (!(align & 1) && !(align & 2)) {
        y -= entry->height >> 1;
    }

    if (!(align & 4)) {
        x -= (align & 8) ? entry->width : entry->width >> 1;
    }

    ring->x = x;
    ring->y = y;

    int width = g_QuickSelectSize[0];
    int height = g_QuickSelectSize[1];
    int halfWidth = width / 2;
    int halfHeight = height / 2;

    Hud_DrawTexHeaderQuad(HudTexHeader(GetIconFrameTex(QUICK_SELECT, frame)), x, y, halfWidth, halfHeight, ring->alpha);
    Hud_DrawTexHeaderQuad(HudTexHeader(GetIconFrameTex(QUICK_SELECT, frame)), x + width, y + height, -halfWidth, -halfHeight, ring->alpha);
    Hud_DrawTexHeaderQuad(HudTexHeader(GetIconFrameTex(QUICK_SELECT, frame)), x + width, y, -halfWidth, halfHeight, ring->alpha);
    Hud_DrawTexHeaderQuad(HudTexHeader(GetIconFrameTex(QUICK_SELECT, frame)), x, y + height, halfWidth, -halfHeight, ring->alpha);
}

/* slot i's centre on the ring, slot 0 at the top */
static inline void HudRingSlotPos(HudRing *ring, int i, int *x, int *y)
{
    float angle = FastWrapRot((float)i * 2.0f * PI / (float)g_QuickSelectSlotCnt - PI, PI / 2);
    int slotY = (int)(g_QuickSelectRadius * FastSinInline(angle));

    *x = g_QuickSelectCentre[0] + ring->x + (int)(g_QuickSelectRadius * FastCosInline(angle) * g_QuickSelectAspect);
    *y = g_QuickSelectCentre[1] + ring->y + slotY;
}

/* the pulsing highlight (icon HUD_ICON_RING_HIGHLIGHT) behind the selected slot */
static inline void HudRingHighlight(HudRing *ring, int x, int y)
{
    Hud_DrawTexHeaderQuad(HudTexHeader(GetIconFrameTex(HUD_ICON_RING_HIGHLIGHT, 0)), x - 19, y - 19, 38, 38, ring->highlightAlpha);
}

/* the slots not selected are dimmed */
static inline int HudRingSlotAlpha(HudElement *entry, HudRing *ring, int i)
{
    if (i != entry->displayedValue) {
        return FastDoubleToInt((float)ring->alpha * g_QuickSelectDim);
    }

    return ring->alpha;
}

// 0x00ce170 (0xe4c bytes)
/* the ring of 8 item icons over the QUICK_SELECT texture; the selected one pulses on a
   highlight and gets its name and ammo below */
int Draw_QuickSelectHud(HudElement *entry)
{
    HudRing ring;

    HudRingBegin(entry, &ring, 0);

    int x = ring.x;
    int y = ring.y;

    for (int i = 0; i < g_QuickSelectSlotCnt; i++) {
        int slotX;
        int slotY;

        HudRingSlotPos(&ring, i, &slotX, &slotY);

        QuickSelectSlot *slot = &g_QuickSelectPages[g_QuickSelectPage][i];

        if (entry->displayedValue == i && slot->iconId != 0) {
            HudRingHighlight(&ring, slotX, slotY);
        }

        if (slot->iconId != 0) {
            int slotAlpha = HudRingSlotAlpha(entry, &ring, i);

            /* gold weapons use frame 4 */
            int frame = ((u8 *)&g_goldWeaponsArray)[slot->item] ? 4 : 0;

            HudEntry_DrawIcon(entry, GetIconFrameTex(slot->iconId, frame), slotX, slotY, 1, slotAlpha);
        }
    }

    int selected = entry->displayedValue;

    if (selected < 0 || g_QuickSelectPages[g_QuickSelectPage][selected].iconId == 0) {
        return entry->width;
    }

    float textFade = ring.fade * ring.selectFade;
    u32 shadow = FastLerpColor(textFade, g_QuickSelectShadowColor, g_QuickSelectColors[2]);
    u32 selectedItem = g_QuickSelectItems[selected];
    int textX = g_QuickSelectCentre[0] + x;
    int textY = g_QuickSelectCentre[1] + y;

    if (AmmoInfo(selectedItem)[0] != 0) {
        char ammoText[80];
        int ammo = ((int *)&currentAmmoArray)[selectedItem];

        sprintf(ammoText, "%d/%d", ammo, AmmoInfo(selectedItem)[3]);

        u32 color = (ammo == 0) ? FastLerpColor(textFade, g_QuickSelectColors[3], g_QuickSelectColors[4])
                                : FastLerpColor(textFade, g_QuickSelectColors[5], g_QuickSelectColors[6]);

        FontPrintMediumCenter(textX + 1, textY + 13, shadow, ammoText, -1);
        FontPrintMediumCenter(textX, textY + 12, color, ammoText, -1);
    }

    u32 nameColor = FastLerpColor(textFade, g_QuickSelectColors[0], g_QuickSelectColors[1]);
    int item = g_QuickSelectPages[g_QuickSelectPage][selected].item;
    u8 *itemInfo = ItemInfo(item);
    char *name;

    if (((u8 *)&g_goldWeaponsArray)[item] == 0) {
        name = help_msg_string_by_index((StringId)*(s16 *)(itemInfo + 0x46));
    } else {
        name = help_msg_string_by_index((StringId)*(s16 *)(itemInfo + 0x48));
    }

    if (name == NULL || strlen(name) == 0) {
        return entry->width;
    }

    /* two lines: after a '-' (kept on the first line), else at the first space */
    int len = strlen(name);
    int firstLen = 0;
    char *rest = name;

    for (int i = 0; i < len; i++) {
        if (name[i + 1] == '-') {
            firstLen = i + 2;
            rest = name + i + 2;
            break;
        }
    }

    if (firstLen == 0) {
        for (int i = 0; i < len; i++) {
            if (name[i + 1] == ' ') {
                firstLen = i + 1;
                rest = name + i + 2;
                break;
            }
        }
    }

    int nameY;

    if (AmmoInfo(g_QuickSelectItems[selected])[0] != 0) {
        nameY = g_QuickSelectNameY[0];
    } else if (firstLen != 0) {
        nameY = g_QuickSelectNameY[1];
    } else {
        nameY = g_QuickSelectNameYOneLine;
    }

    nameY += textY;

    if (firstLen == 0) {
        FontPrintMediumCenter(textX + 1, nameY + 1, shadow, name, -1);
        FontPrintMediumCenter(textX, nameY, nameColor, name, -1);
    } else {
        FontPrintMediumCenter(textX + 1, nameY + 1, shadow, name, firstLen);
        FontPrintMediumCenter(textX, nameY, nameColor, name, firstLen);
        FontPrintMediumCenter(textX + 1, nameY + 17, shadow, rest, -1);
        FontPrintMediumCenter(textX, nameY + 16, nameColor, rest, -1);
    }

    return entry->width;
}

// 0x00cefc0 (0x8c bytes)
/* the clank command ring: 4 slots on the second slot page */
void ClankCommandHud_Init(HudElement *entry)
{
    g_QuickSelectSlotCnt = 4;

    entry->width = g_QuickSelectSize[0];
    entry->displayedValue = -2;
    entry->height = g_QuickSelectSize[1];
    g_QuickSelectPages = &g_QuickSelectPageTable[1];
    entry->icon.offsX = 0;
    entry->icon.offsY = 0;
    entry->targetValue = (int)(animationSpeed * 30.5f);
    g_QuickSelectPage = 0;
}

// 0x00cf070 (0x638 bytes)
// inlined: FastAtan2 @0xcf1d0
/* UpdateQuickSelect for the clank commands: no snapping, and the pick goes to g_ClankCommand */
void ClankCommandHud_Update(HudElement *entry)
{
    entry->slideTime = 24;
    entry->showTimer = (int)(animationSpeed * 180.5f);

    DAT_0096560c = 2;
    DAT_00965b70 = 2;
    DAT_009660d4 = 2;
    DAT_00966638 = 2;

    float stickLen;
    float stickAngle = HudRingStick(&stickLen);

    int timer = entry->targetValue;

    if ((timer >> 24) == 0 && g_ClankCommandReady != 0) {
        bool waiting = !(g_Pad.pressedButton & 0xf000) && stickLen >= 0.5f;

        if (waiting) {
            entry->targetValue = timer - 1;
        }

        if (waiting && timer != 0) {
            timer--;
        } else {
            timer = 0x10000ff;
            entry->displayedValue = -1;
            entry->targetValue = timer;
        }
    }

    int oldSlot = entry->displayedValue;
    int slot = oldSlot;

    if ((timer >> 24) == 1) {
        if (stickLen > 0.9f) {
            int cnt = g_QuickSelectSlotCnt;

            slot = (int)HudRingStickPos(stickAngle, cnt) % cnt;
            entry->displayedValue = slot;
        }

        if (g_Pad.pressedButton & 0xf000) {
            slot = HudRingDpad(slot, g_Pad.pressedButton, &g_QuickSelectSlots[1][5]);
            entry->displayedValue = slot;
        }
    }

    if (slot != oldSlot) {
        entry->animB = 0;
    } else if (entry->animB < g_HudFadeSteps) {
        entry->animB++;
    }

    if (!(g_Pad.unk0c0 & 0x10)) {
        g_ClankCommand = 0;

        if (slot != -1) {
            g_ClankCommand = g_QuickSelectPages[g_QuickSelectPage][slot].item;
        }

        if (entry->animA != 0) {
            entry->animA--;
        }
    } else if (entry->animA < g_HudFadeSteps) {
        entry->animA++;
    }

    if (entry->animA == 0) {
        g_QuickSelectSavedTimer = entry->targetValue;
        g_QuickSelectSavedSlot = slot;
        HudRingClose(entry);
    }
}

// 0x00cf6f0 (0xba4 bytes)
/* the clank command ring (frame 1 of QUICK_SELECT); until g_ClankCommandReady the icons show
   their frame + 4 at full alpha */
int Draw_ClankCommandHud(HudElement *entry)
{
    HudRing ring;

    HudRingBegin(entry, &ring, 1);

    for (int i = 0; i < g_QuickSelectSlotCnt; i++) {
        int slotX;
        int slotY;

        HudRingSlotPos(&ring, i, &slotX, &slotY);

        QuickSelectSlot *slot = &g_QuickSelectPages[g_QuickSelectPage][i];

        if (entry->displayedValue == i && slot->iconId != 0) {
            HudRingHighlight(&ring, slotX, slotY);
        }

        if (slot->iconId != 0) {
            int slotAlpha = HudRingSlotAlpha(entry, &ring, i);

            if (g_ClankCommandReady == 0) {
                HudEntry_DrawIcon(entry, GetIconFrameTex(slot->iconId, slot->unk04 + 4), slotX, slotY, 1, ring.alpha);
            } else {
                HudEntry_DrawIcon(entry, GetIconFrameTex(slot->iconId, slot->unk04), slotX, slotY, 1, slotAlpha);
            }
        }
    }

    int selected = entry->displayedValue;

    if (selected < 0 || g_QuickSelectPages[g_QuickSelectPage][selected].iconId == 0) {
        return entry->width;
    }

    StringId names[4];

    names[0] = STR_WAIT;
    names[3] = STR_ENTER;
    names[2] = STR_ATTACK;
    names[1] = STR_FOLLOW;

    char *name = help_msg_string_by_index(names[selected]);

    if (name == NULL || strlen(name) == 0) {
        return entry->width;
    }

    float textFade = ring.fade * ring.selectFade;
    u32 color = FastLerpColor(textFade, g_ClankCommandColors[0], g_ClankCommandColors[1]);
    u32 shadow = FastLerpColor(textFade, 0, 0x80000000);
    int textX = g_QuickSelectCentre[0] + ring.x;
    int textY = g_ClankCommandNameY + ring.y + g_QuickSelectCentre[1];

    FontPrintMediumCenter(textX - 1, textY - 1, shadow, name, -1);
    FontPrintMediumCenter(textX, textY, color, name, -1);

    return entry->width;
}

// 0x00d02a0 (0xb8 bytes)
void HealthHud_Init(HudElement *entry)
{
    entry->showTimer = (int)(animationSpeed * 180.5f) + 30;
    entry->width = 64;
    entry->height = 64;
    entry->icon.offsX = 32;
    entry->icon.offsY = 0;

    HudEntry_CalcNumberSize(entry);

    g_HealthPulse.tick = 0;
    entry->data = &g_HealthPulse;
    g_HealthPulse.value = 0;
    g_HealthPulse.accel = 1;
    g_HealthPulse.speed = 0;
}

/* while showTimer runs, animA then animB count up to their steps; after, they count back
   down and the entry starts hiding */
static inline void HudEntryFade(HudElement *entry, int showTimer, int stepsA, int stepsB)
{
    if (showTimer < (int)(animationSpeed * 5.5f)) {
        entry->slideTime = 1;

        if (entry->animB != 0) {
            entry->animB--;
        } else if (entry->animA != 0) {
            entry->animA--;
        } else {
            entry->slideTime = -6;
        }
    } else if (entry->animA < stepsA) {
        entry->animA++;
    } else if (entry->animB < stepsB) {
        entry->animB++;
    }
}

// 0x00d0360 (0x264 bytes)
void HealthHud_Update(HudElement *entry)
{
    int target = entry->targetValue;

    if (entry->pValue != NULL) {
        target = *entry->pValue;
        entry->targetValue = target < 0 ? 0 : target;

        HudPulse *pulse = (HudPulse *)entry->data;
        s16 value = pulse->value + pulse->speed;

        pulse->value = value;

        s16 speed = pulse->speed + pulse->accel;

        pulse->tick = (pulse->tick + 1) % 60;
        pulse->speed = speed;

        if (speed > 60) {
            speed = 60;
            pulse->speed = 60;
        } else if (speed < -60) {
            speed = -60;
            pulse->speed = -60;
        }

        if (value > 0x7ff && speed > 0) {
            pulse->accel = -1;
        }

        if (value > 0xfff) {
            value = 0xfff;
            pulse->value = 0xfff;
        }

        if (value < 0x7ff && speed < 0) {
            pulse->accel = 1;
        }

        if (value < 0) {
            pulse->value = 0;
        }

        target = entry->targetValue;
        target = target > entry->maxValue ? entry->maxValue : target;
        entry->targetValue = target;
    }

    if (entry->displayedValue != target || entry->displayedValue == 1) {
        entry->showTimer = (int)(animationSpeed * 120.5f);
        entry->displayedValue = target;
    }

    HudEntryFade(entry, entry->showTimer, g_HealthFadeSteps, g_HealthFadeSteps);
    HudIcon_GetAnimFrame(&entry->icon);
}

/* a box row behind the nanotech cells: the middle of the text box icon (HUD_ICON_TEXT_BOX) halfWidth
   either side of x, its end caps (frame 1, the right one turned) outside */
static inline void NanotechBoxRow(int x, int y, int halfWidth, int alpha)
{
    int capTex = GetIconFrameTex(HUD_ICON_TEXT_BOX, 1);
    int middleTex = GetIconFrameTex(HUD_ICON_TEXT_BOX, 0);

    Hud_DrawTexQuad(capTex, halfWidth + x, y, g_NanotechBoxTile, g_NanotechBoxTile, alpha);
    Hud_DrawTexHeaderQuad(HudTexHeader(middleTex), x - halfWidth, y, halfWidth * 2, g_NanotechBoxTile, alpha);
    Hud_DrawTexHeaderQuad(HudTexHeader(capTex), x - halfWidth - g_NanotechBoxTile, y, g_NanotechBoxTile, g_NanotechBoxTile, alpha);
}

// 0x00d05e0 (0x898 bytes)
/* The nanotech cells (NANOTECH_ANIMATION) in a box: each full cell plays frames 0-29 offset by
   6 per cell from the pulse's tick, under the empty cell (frame 30) and a glow (frame 31)
   throbbing with the pulse; the cells past health show frame 30 alone. Not drawn for
   g_heroType 2 or on the turret plane. */
int Draw_NanotechUI(HudElement *entry)
{
    if (g_heroType == 2 || g_heroState == TURRET_PLANE_UI) {
        return entry->width;
    }

    int x = entry->x;
    int health = entry->targetValue;
    int y = g_NanotechY + (Cutscene == 0 ? 8 : 0) + 10;

    if (entry->animA == 0) {
        return entry->width;
    }

    float boxFade = HudIntToFloat(entry->animA) / HudIntToFloat(g_HealthFadeSteps);
    boxFade = boxFade > 1.0f ? 1.0f : (boxFade < 0.0f ? 0.0f : boxFade);

    float cellFade = HudIntToFloat(entry->animB) / HudIntToFloat(g_HealthFadeSteps);
    cellFade = cellFade > 1.0f ? 1.0f : (cellFade < 0.0f ? 0.0f : cellFade);

    int cellAlpha = FastDoubleToInt(cellFade * 128.0f);
    int boxAlpha = FastDoubleToInt((float)g_NanotechBoxAlpha * boxFade);
    HudPulse *pulse = (HudPulse *)entry->data;
    int frame = (health == 0) ? 30 : pulse->tick >> 1;
    int cellCnt = (g_heroType == 1) ? g_clankMaxNanotech : g_heroMaxNanotech;
    s16 (*cellPos)[2];
    int rowWidth;
    int row2Width;

    if (cellCnt == 8) {
        cellPos = &g_NanotechCellPos[9];
        rowWidth = FastDoubleToInt(boxFade * 48.0f);
        row2Width = FastDoubleToInt(boxFade * 48.0f);
    } else if (cellCnt == 5) {
        cellPos = &g_NanotechCellPos[4];
        rowWidth = FastDoubleToInt(boxFade * 32.0f);
        row2Width = FastDoubleToInt(boxFade * 16.0f);
    } else {
        cellPos = &g_NanotechCellPos[0];
        rowWidth = FastDoubleToInt(boxFade * 48.0f);
        row2Width = 0;
    }

    int boxY = g_NanotechBoxY + y;

    NanotechBoxRow(x, boxY, rowWidth, boxAlpha);

    if (row2Width != 0) {
        NanotechBoxRow(x, g_NanotechBoxRowStep + boxY, row2Width, boxAlpha);
    }

    for (int i = 0; i < cellCnt; i++) {
        int cellX = cellPos[i][0] + x;
        int cellY = cellPos[i][1] + y;
        int next = frame;

        HudEntry_DrawIcon(entry, GetIconFrameTex(NANOTECH_ANIMATION, frame), cellX, cellY, 1, cellAlpha);

        if (frame != 30) {
            HudEntry_DrawIcon(entry, GetIconFrameTex(NANOTECH_ANIMATION, 30), cellX, cellY, 1, cellAlpha);

            int glowAlpha = FastDoubleToInt((float)(pulse->value >> 4) * cellFade);

            Hud_DrawTexHeaderQuad(HudTexHeader(GetIconFrameTex(NANOTECH_ANIMATION, 31)), cellPos[i][0] + x + 14, cellPos[i][1] + y - 17, 34, 34, glowAlpha);

            next = (health == i + 1) ? 30 : (frame + 6) % 30;
        }

        frame = next;
    }

    return entry->width;
}

// 0x00d0e80 (0x74 bytes)
void AmmoHud_Init(HudElement *entry)
{
    entry->showTimer = (int)(animationSpeed * 120.5f) + 30;
    entry->width = 32;
    entry->height = 32;

    HudEntry_CalcNumberSize(entry);
}

// 0x00d0f00 (0x94 bytes)
void BoltHud_Init(HudElement *entry)
{
    entry->showTimer = (int)(animationSpeed * 120.5f) + 30;
    entry->width = 32;
    entry->height = 32;

    HudEntry_CalcNumberSize(entry);

    g_BoltTick = 0;
    entry->data = &g_BoltTick;
}

// 0x00d0fa0 (0x15c bytes)
/* shows the bolts for 90.5 frames after g_boltCount changes */
void BoltHud_Update(HudElement *entry)
{
    int bolts = g_boltCount;
    s16 *tick = (s16 *)entry->data;
    int showTimer = entry->showTimer;

    *tick = (*tick + 1) % 60;

    if (entry->displayedValue != bolts) {
        entry->displayedValue = bolts;
        showTimer = (int)(animationSpeed * 90.5f);
        entry->showTimer = showTimer;
    }

    HudEntryFade(entry, showTimer, g_BoltFadeSteps[0], g_BoltFadeSteps[1]);
}

// 0x00d1110 (0x6bc bytes)
/* the bolt count in a text box sized to its digits, the spinning bolt (BOLTS_ANIMATION) on
   the left, and a thousands separator every 3 digits */
int Draw_BoltCountUI(HudElement *entry)
{
    s16 *tick = (s16 *)entry->data;

    if (g_heroState == TURRET_PLANE_UI || entry->animA == 0) {
        return entry->width;
    }

    int x = entry->x;
    int y = (Cutscene == 0 ? 8 : 0) + 10;

    float boxFade = HudIntToFloat(entry->animA) / HudIntToFloat(g_BoltFadeSteps[0]);
    boxFade = boxFade > 1.0f ? 1.0f : (boxFade < 0.0f ? 0.0f : boxFade);

    float textFade = HudIntToFloat(entry->animB) / HudIntToFloat(g_BoltFadeSteps[1]);
    textFade = textFade > 1.0f ? 1.0f : (textFade < 0.0f ? 0.0f : textFade);

    int boxAlpha = FastDoubleToInt((float)FastDoubleToInt(boxFade * 128.0f) * 0.7f);
    int digits = 1;

    for (int bolts = g_boltCount; bolts > 9; bolts /= 10) {
        digits++;
    }

    int textWidth = FastDoubleToInt((float)(g_BoltDigitWidth * digits) * boxFade);

    Hud_DrawTexQuad(GetIconFrameTex(HUD_ICON_TEXT_BOX, 1), x - 12, y, 32, 32, boxAlpha);
    Hud_DrawTexHeaderQuad(HudTexHeader(GetIconFrameTex(HUD_ICON_TEXT_BOX, 0)), x - textWidth - 28, y, textWidth + 16, 32, boxAlpha);
    Hud_DrawTexHeaderQuad(HudTexHeader(GetIconFrameTex(HUD_ICON_TEXT_BOX, 1)), x - textWidth - 60, y, 32, 32, boxAlpha);

    HudEntry_DrawIcon(entry, GetIconFrameTex(BOLTS_ANIMATION, *tick >> 1), x - 32, y, 0, 0x80);

    u32 color = FastLerpColor(textFade, g_BoltTextColors[0], g_BoltTextColors[1]);
    u32 shadow = FastLerpColor(textFade, 0, 0x80000000);
    char text[128];

    sprintf(text, "%d", g_boltCount);
    FontPrintMediumRight(g_BoltTextPos[0] + x + 1, g_BoltTextPos[1] + y + 1, shadow, text, -1);
    FontPrintMediumRight(g_BoltTextPos[0] + x, g_BoltTextPos[1] + y, color, text, -1);

    bool apostrophe = false;

    if (g_Language == 3 || g_Language == 5) {
        sprintf(text, ".");
    } else {
        apostrophe = true;
        sprintf(text, "'");
    }

    int sepX = g_BoltDotPos[0];
    int sepY = g_BoltDotPos[1];

    if (apostrophe) {
        sepX = g_BoltSeparatorPos[0];
        sepY = g_BoltSeparatorPos[1];
    }

    for (int i = 3; i < digits; i += 3) {
        FontPrintMediumRight(sepX + x - g_BoltDigitWidth * i + 2, sepY + y + 2, shadow, text, -1);
        FontPrintMediumRight(sepX + x - g_BoltDigitWidth * i, sepY + y, color, text, -1);
    }

    return entry->width;
}

// 0x00d17d8 (0xb4 bytes)
void UnusedIconHud_Init(HudElement *entry)
{
    entry->showTimer = (int)(animationSpeed * 180.5f) + 30;
    entry->width = 64;
    entry->height = 64;
    entry->icon.offsX = 32;
    entry->icon.offsY = 0;

    HudEntry_CalcNumberSize(entry);

    g_UnusedIconState.value = 0;
    entry->data = &g_UnusedIconState;
    g_UnusedIconState.phase = 0;
    g_UnusedIconState.fadeOut = 0;
    g_UnusedIconState.fadeIn = 0;
}

// 0x00d1898 (0x2f4 bytes)
/* a new value fades the old level out (once slid in) and the new one in */
void UnusedIconHud_Update(HudElement *entry)
{
    HudLevelIcon *state = (HudLevelIcon *)entry->data;
    int target = entry->targetValue;
    int shown = entry->displayedValue;
    int slide = entry->slideTime;

    if (entry->pValue != NULL) {
        target = *entry->pValue;
        target = target < 0 ? 0 : target;
        target = target > entry->maxValue ? entry->maxValue : target;
        entry->targetValue = target;
    }

    if (shown != target && state->fadeOut == 0) {
        entry->showTimer = (int)(animationSpeed * 120.5f);

        if (slide < 0) {
            state->value = target > shown ? target : shown;
            entry->displayedValue = entry->targetValue;
            state->fadeIn = 0x80;
            slide = entry->slideTime;
        }

        if (slide > 23) {
            state->fadeOut = 0x80;
            target = entry->targetValue;
            state->value = target > entry->displayedValue ? target : entry->displayedValue;
        }
    }

    state->phase += g_HudLevelPhaseStep;

    if (state->fadeOut != 0) {
        entry->showTimer = (int)(animationSpeed * 120.5f);

        int fadeOut = state->fadeOut;

        state->fadeIn = 0;
        state->fadeOut = fadeOut - g_HudLevelFadeStep;

        if (fadeOut - g_HudLevelFadeStep < 1) {
            state->fadeOut = 0;
            state->fadeIn = 0x80;
            entry->displayedValue = entry->targetValue;
        }
    }

    if (state->fadeIn != 0) {
        slide = entry->slideTime;
        entry->showTimer = (int)(animationSpeed * 60.5f);

        int fadeIn = state->fadeIn;

        if (slide > 24) {
            fadeIn -= g_HudLevelFadeStep;
        }

        state->fadeIn = fadeIn > 0 ? fadeIn : 0;
    }

    if (entry->showTimer < (int)(animationSpeed * 5.5f)) {
        if (entry->animB != 0) {
            entry->animB--;
        } else if (entry->animA != 0) {
            entry->animA--;
        } else {
            entry->slideTime = -6;
        }
    } else if (entry->animA < g_BoltFadeSteps[0]) {
        entry->animA++;
    } else if (entry->animB < g_BoltFadeSteps[1]) {
        entry->animB++;
    }

    HudIcon_GetAnimFrame(&entry->icon);
}

// 0x00d1b8c (0x268 bytes)
/* level n (at least 1) is frames 3n-3 (base) and 3n-2 (glow, throbbing with phase) of the
   icon, and 3n-1 the cross fade */
int UnusedIconHud_Draw(HudElement *entry)
{
    int shown = entry->displayedValue;
    HudLevelIcon *state = (HudLevelIcon *)entry->data;
    int x;
    int y;

    HudEntryPos(entry, &x, &y);
    HudEntry_GetSlideOffset(entry, &x, &y, entry->slideTime, 0);

    int level = (shown > 1 ? shown : 1) * 3;
    int firstFrame = IconTableEntry[entry->icon.iconIdx].firstFrame;

    HudEntry_DrawIcon(entry, firstFrame + level - 3, x, y, 1, 0x80);

    int glow = 0x80 - state->phase % 256;

    HudEntry_DrawIcon(entry, firstFrame + level - 2, x, y, 1, glow < 0 ? -glow : glow);

    int fadeOut = state->fadeOut;

    if (fadeOut != 0 || state->fadeIn != 0) {
        int alpha = 0x80 - fadeOut;

        if (fadeOut == 0) {
            alpha = state->fadeIn;
        }

        HudEntry_DrawIcon(entry, entry->icon.frame + (state->value > 1 ? state->value : 1) * 3 - 1, x, y, 1, alpha);
    }

    return entry->width;
}

// 0x00d1df4 (0x1f4 bytes)
/* a 200x18 bar, displayedValue of maxValue filled, in a white frame */
int Draw_MobyMeterHud(HudElement *entry)
{
    int x;
    int y;

    entry->width = 200;
    entry->height = 32;

    HudEntryPos(entry, &x, &y);
    HudEntry_GetSlideOffset(entry, &x, &y, entry->slideTime, 0);

    DrawFlatOverlay(x, y, entry->width * entry->displayedValue / entry->maxValue + x + 1, y + 18, 0x803030f0, 0);
    DrawFlatOverlay(x - 1, y - 1, x + 203, y, 0x80ffffff, 0);
    DrawFlatOverlay(x + 203, y, x + 202, y + 19, 0x80ffffff, 0);
    DrawFlatOverlay(x + 203, y + 18, x - 1, y + 19, 0x80ffffff, 0);
    DrawFlatOverlay(x - 1, y + 18, x, y - 1, 0x80ffffff, 0);

    return entry->width;
}

// 0x00d1ff0 (0x90 bytes)
void TrickHud_Init(HudElement *entry)
{
    entry->showTimer = (int)(animationSpeed * 180.5f) + 30;
    entry->icon.offsX = 0;
    entry->icon.offsY = 0;

    g_TrickHistory[3] = -1;
    g_TrickHistory[2] = -1;
    g_TrickHistory[1] = -1;
    g_TrickHistory[0] = -1;

    HudEntry_CalcNumberSize(entry);
}

/* the trick entry's copy of the trick tally */
static inline void TrickHudClear(void)
{
    g_TrickParts[0] = 0;
    g_TrickBest = 0;
    g_TrickCount = 0;
    g_TrickParts[1] = 0;
    g_TrickParts[2] = 0;
    g_TrickParts[3] = 0;
}

// 0x00d20a0 (0x44c bytes)
/* unk72 is the state: 0 grounded, 1 in the air with a score (fades in, copies the tally),
   2 landed, 3 landed on the hoverboard (pays g_TrickPoints when animA reaches 110.5 frames) */
void TrickHud_Update(HudElement *entry)
{
    float shown = (float)entry->displayedValue;

    Delt((float)*entry->pValue, 6.0f, &shown);
    entry->displayedValue = FastDoubleToInt(shown);

    u8 state = entry->unk72;

    if (state == 0) {
        if (g_framesNotGrounded > 5 && (float)(int)DAT_0096a3ec >= 1.0f) {
            g_TrickParts[0] = 0;
            g_TrickBest = DAT_0096a3ec;
            g_TrickCount = 0;
            g_TrickParts[1] = 0;
            g_TrickParts[2] = 0;
            g_TrickParts[3] = 0;
            entry->unk72 = 1;
            entry->animA = 0;
            entry->animB = (u8)g_TrickShowFrames;
        }
    } else if (state == 1) {
        if (entry->animA < 10) {
            entry->animA++;
        }

        if (entry->animB != 0) {
            entry->animB--;
        }

        g_TrickCount = DAT_0096a3d0;
        g_TrickParts[0] = DAT_0096a3c0;
        g_TrickParts[1] = DAT_0096a3c4;
        g_TrickParts[2] = DAT_0096a3c8;
        g_TrickParts[3] = DAT_0096a3cc;

        if (g_TrickBest < (int)DAT_0096a3ec) {
            g_TrickBest = DAT_0096a3ec;
            entry->animB = (u8)g_TrickShowFrames;
        }

        if (g_framesGroundedCnt != 0 || (g_heroState > 0x6c && g_heroState < 0x70)) {
            g_TrickPoints = 0;
            DAT_0096a3d0 = 0;
            DAT_0096a3ec = 0;
            DAT_0096a3c0 = 0;
            DAT_0096a3c4 = 0;
            DAT_0096a3c8 = 0;
            DAT_0096a3cc = 0;
            DAT_0096a3e0 = 0;
            DAT_0096a3e4 = 0;
            DAT_0096a3e8 = 0;

            if (g_heroState == HOVERBOARD_RIDING) {
                if (g_TrickCount > 2) {
                    g_TrickHistory[3] = g_TrickHistory[2];
                    g_TrickHistory[2] = g_TrickHistory[1];
                    g_TrickHistory[1] = g_TrickHistory[0];
                    g_TrickHistory[0] = -1;
                }

                entry->unk72 = 3;
                entry->animB = (u8)g_TrickShowFrames;
                entry->animA = (u8)(int)(animationSpeed * 120.5f);
            } else {
                entry->unk72 = 2;
                entry->animB = (u8)g_TrickShowFrames;
                entry->animA = (u8)(int)(animationSpeed * 60.5f);
            }
        }
    } else if (state < 4) {
        u8 time = entry->animA;

        if (time == 0) {
            time = 0;
            g_TrickPoints = 0;
            TrickHudClear();
            entry->unk72 = 0;
        } else if (state == 3 && time == (int)(animationSpeed * 110.5f)) {
            g_RaceScore += g_TrickPoints;

            int bonus = DAT_0096a544 + g_TrickPoints * 5;
            int cap = (int)((float)(int)(animationSpeed * 17.5f) * 60.0f);

            DAT_0096a544 = bonus;

            if (cap < bonus) {
                DAT_0096a544 = cap;
            }
        }

        entry->animA = time - 1;
    }
}

// 0x00d24ec (0x2d0 bytes)
/* Hud_DrawTexQuad_v2 with u running to w * 2 */
void Hud_DrawEffectTexQuad(int tex, int x, int y, int w, int h, int alpha)
{
    u8 *header = HudTexHeader(tex);

    HudBindTex(header);

    u32 size = *(u32 *)(header + 0x18);
    u32 u = (w << 1) & 0xfffe;

    HudBeginQuads(alpha << 24 | 0x808080);
    HudVertex(0, x, y);
    HudVertex(size << 16, x, y + h);
    HudVertex(size << 16 | u, x + w, y + h);
    HudVertex(u, x + w, y);
    HudEnd();
}

/* a line of large text on a text box: a black shadow (the colour's alpha) a pixel down and
   right, the box from its left edge, the text; the box's alpha is the text's, at most 0x50 */
static inline void HudTextBoxLine(int x, int y, int boxY, u32 color, char *text)
{
    int boxAlpha = (int)color >> 24;

    boxAlpha = boxAlpha > 0x50 ? 0x50 : boxAlpha;

    int left = FontPrintLargeCenter(x + 1, y + 1, color & 0xff000000, text, -1) - 32;

    Hud_DrawTextBox(left, boxY, (x - left) * 2, 32, boxAlpha);
    FontPrintLargeCenter(x, y, color, text, -1);
}

/* the landing points over the trick's name */
static inline void TrickLandingText(char *text, u32 color)
{
    sprintf(text, "%d", g_TrickPoints);
    HudTextBoxLine(g_TrickLandingPos[0], g_TrickLandingPos[1] - 24, g_TrickLandingPos[1] - 32, color, text);
}

// 0x00d27f8 (0xe00 bytes)
/* While hoverboarding (g_heroStateType 0x16): in the air the degrees (360 a flip) and pose
   count; on a hoverboard landing the points and the combo's name (TrickHud_Update pays
   them). Always the boost meter (icon HUD_ICON_METER_FRAME), and WRONG WAY pulsing after 120.5 frames of
   it. */
int Draw_HoverboardTrickHud(HudElement *entry)
{
    float fade = (float)entry->animA * 0.1f;

    if (1.0f - fade < 0.0f) {
        fade = 1.0f;
    }

    if (g_heroStateType != 0x16) {
        return entry->width;
    }

    if (entry->unk72 != 0) {
        char text[64];

        sprintf(text, "%d", g_TrickBest * 360);

        float fadeTime = HudIntToFloat(entry->animB);
        u8 state = entry->unk72;
        u32 color = g_TrickColorStill;

        if (state == 1 || state == 3) {
            color = FastLerpColor(fadeTime / (float)(int)(animationSpeed * ((float)g_TrickShowFrames + 0.5f)), g_TrickColors[0], g_TrickColors[1]);
        }

        int shadow = FastDoubleToInt(fade * 128.0f) << 24;
        int count = g_TrickCount;
        int best = g_TrickBest;

        color += shadow;

        if (state == 1 || state == 2) {
            FontPrintLargeCenter(g_TrickScorePos[0] + 1, g_TrickScorePos[1] + 1, shadow, text, -1);
            FontPrintLargeCenter(g_TrickScorePos[0], g_TrickScorePos[1], color, text, -1);

            sprintf(text, "x%d %s", g_TrickCount, help_msg_string_by_index(g_TrickCount == 1 ? STR_POSE : STR_POSES));
            FontPrintLargeCenter(g_TrickPosePos[0] + 1, g_TrickPosePos[1] + 1, shadow, text, -1);
            FontPrintLargeCenter(g_TrickPosePos[0], g_TrickPosePos[1], color, text, -1);
        } else if (state == 3) {
            int combo = -1;

            if (count == 3) {
                /* the first of parts 3, 2, 1 that is zero picks combo 0, 1, 2; none 3 */
                combo = (g_TrickParts[1] == 0) ? 2 : 3;

                if (g_TrickParts[2] == 0) {
                    combo = 1;
                }

                if (g_TrickParts[3] == 0) {
                    combo = 0;
                }
            } else if (count == 4) {
                combo = 4;
            }

            if (combo >= 0) {
                int tier = 0;

                if (best >= 4) {
                    tier = 2;
                } else if (best > 1) {
                    tier = 1;
                }

                combo += tier * 5;

                /* repeating one of the last three combos divides its points */
                int repeats = 1 + (combo == g_TrickHistory[1]) + (combo == g_TrickHistory[2]) + (combo == g_TrickHistory[3]);

                g_TrickPoints = g_TrickComboPoints[combo] / repeats;
                g_TrickHistory[0] = combo;

                TrickLandingText(text, color);

                sprintf(text, "%s", help_msg_string_by_index((StringId)(combo + STR_CALL_ME_SALLY)));
                HudTextBoxLine(g_TrickLandingPos[0], g_TrickLandingPos[1], g_TrickLandingPos[1] - 8, color, text);
            } else if (count > 0) {
                int parts[4];
                int found = 0;

                for (int i = 0; i < 4 && found < count; i++) {
                    if (g_TrickParts[i] != 0) {
                        parts[found] = i;
                        found++;
                    }
                }

                if (count == 1) {
                    g_TrickPoints = best * 10;
                    TrickLandingText(text, color);

                    /* REVISIT: singular when best is 360, though best counts flips */
                    sprintf(text, "%s + %d %s", help_msg_string_by_index((StringId)(parts[0] + STR_GONZO)), g_TrickBest,
                            help_msg_string_by_index(g_TrickBest == 360 ? STR_FLIP : STR_FLIPS));
                } else {
                    g_TrickPoints = best * 20;
                    TrickLandingText(text, color);

                    sprintf(text, "%s + %s + %d Flips", help_msg_string_by_index((StringId)(parts[0] + STR_GONZO)),
                            help_msg_string_by_index((StringId)(parts[1] + STR_GONZO)), g_TrickBest);
                }

                HudTextBoxLine(g_TrickLandingPos[0], g_TrickLandingPos[1], g_TrickLandingPos[1] - 8, color, text);
            }
        }
    }

    int x;
    int y;

    entry->width = 256;
    entry->height = 64;

    HudEntryPos(entry, &x, &y);

    Hud_DrawEffectTexQuad(GetIconFrameTex(HUD_ICON_METER_FRAME, 1), x, y, entry->displayedValue * 221 / entry->maxValue + 27, 64, 0x80);
    Hud_DrawTexHeaderQuad(HudTexHeader(GetIconFrameTex(HUD_ICON_METER_FRAME, 0)), x, y, 256, 64, 0x80);

    int wrongWay = g_WrongWayFrames;

    if (wrongWay > (int)(animationSpeed * 120.5f)) {
        int period = (int)(animationSpeed * 60.5f);
        float phase = HudIntToFloat(worldUpdateTime % period) / (float)period * 6.28318f - 3.14159f;
        u32 color = FastLerpColor(FastSinInline(phase) * 0.5f + 0.5f, g_WrongWayColors[0], g_WrongWayColors[1]);
        char text[64];

        sprintf(text, help_msg_string_by_index(STR_WRONG_WAY_));
        HudTextBoxLine(g_WrongWayPos[0] + 1, g_WrongWayPos[1] + 1, g_WrongWayPos[1] - 7, 0x80000000, text);
        HudTextBoxLine(g_WrongWayPos[0], g_WrongWayPos[1], g_WrongWayPos[1] - 8, color, text);
    }

    return entry->width;
}

/* the bar's y: 32 above the bottom margin, the top margin on Gemlik */
static inline int HudBottomMargin(void)
{
    return (Cutscene == 0 ? 8 : 0) + 10;
}

// 0x00d3610 (0x6f8 bytes)
/* A boss health bar of 32-wide segments (icon HUD_ICON_BOSS_BAR: 3 under the fill, 1 and 2 the frame,
   4 and 0 the portrait): 3, 6 on Umbris and Gemlik, 7 on Veldin2. The fill runs red to yellow
   to green, squeezed into 0.7 of the end segments. */
int Draw_MobyHealthBarHud(HudElement *entry)
{
    int centreX = g_BossBarX;
    int segments = 3;
    int margin = HudBottomMargin();
    int y = g_ScreenHeight - margin - 32;

    if (Level == Umbris || Level == Gemlik) {
        segments = 6;
    }

    if (Level == Veldin2) {
        segments = 7;
    }

    if (entry->animA == 0) {
        return entry->width;
    }

    if (Level == Gemlik) {
        y = margin;
    }

    float fade = HudIntToFloat(entry->animA) * 0.125f;
    fade = fade > 1.0f ? 1.0f : (fade < 0.0f ? 0.0f : fade);

    int alpha = FastDoubleToInt(fade * 128.0f);
    int frameAlpha = FastDoubleToInt(fade * 128.0f);
    int left = centreX - segments * 16;

    for (int i = 0; i < segments; i++) {
        Hud_DrawTexQuad(GetIconFrameTex(HUD_ICON_BOSS_BAR, 3), left + i * 32, y + 6, 32, 18, alpha);
    }

    int fillWidth = 0;
    u32 color = 0x800000ff;

    if (entry->displayedValue != 0) {
        float frac = (float)entry->displayedValue / HudIntToFloat(entry->maxValue);
        float segment = 1.0f / HudIntToFloat(segments);
        float last = (float)(segments - 1) * segment;

        if (frac > last) {
            frac = g_BossBarEndScale * (frac - last) + last;
        } else if (frac < segment) {
            frac = g_BossBarStartScale * (frac - segment) + segment;
        }

        fillWidth = FastDoubleToInt((float)(segments * 32) * frac);

        if (frac <= 0.5f) {
            color = FastLerpColor(frac * 2.0f, 0x800000ff, 0x8000ffff);
        } else {
            color = FastLerpColor(frac * 2.0f - 1.0f, 0x8000ffff, 0x8000ff00);
        }
    }

    DrawFlatOverlay(left, y + 8, fillWidth + left, y + 26, color, 0);

    int x = left;

    for (int i = 0; i < segments - 1; i++) {
        Hud_DrawTexHeaderQuad(HudTexHeader(GetIconFrameTex(HUD_ICON_BOSS_BAR, 1)), x, y, 32, 32, frameAlpha);
        x += 32;
    }

    Hud_DrawTexHeaderQuad(HudTexHeader(GetIconFrameTex(HUD_ICON_BOSS_BAR, 2)), x, y, 32, 32, frameAlpha);
    Hud_DrawTexHeaderQuad(HudTexHeader(GetIconFrameTex(HUD_ICON_BOSS_BAR, 4)), left - 40, y - 8, 48, 48, alpha);
    Hud_DrawTexHeaderQuad(HudTexHeader(GetIconFrameTex(HUD_ICON_BOSS_BAR, 0)), left - 40, y - 8, 48, 48, alpha);

    return entry->width;
}

// 0x00d3d10 (0xd4 bytes)
/* shown while g_MetalDetectorSpotIsClose */
void MetalDetectorHud_Update(HudElement *entry)
{
    if (g_MetalDetectorSpotIsClose == 0) {
        entry->showTimer = 0;
        entry->slideTime = 1;

        if (entry->animB != 0) {
            entry->animB--;
        } else if (entry->animA != 0) {
            entry->animA--;
        } else {
            entry->slideTime = -6;
        }
    } else {
        entry->showTimer = (int)(animationSpeed * 10.5f);

        if (entry->animA < g_HealthFadeSteps) {
            entry->animA++;
        } else if (entry->animB < g_HealthFadeSteps) {
            entry->animB++;
        }
    }
}

// 0x00d3e20 (0x6c4 bytes)
/* the spinning bolt in a text box with a "!" blinking every g_DetectorBlinkPeriod frames */
int Draw_MetalDetectorHud(HudElement *entry)
{
    int x = entry->x;
    int y = g_ScreenHeight - HudBottomMargin() - 32;

    if (g_heroType == 2 || g_heroState == TURRET_PLANE_UI || entry->animA == 0) {
        return entry->width;
    }

    float boxFade = HudIntToFloat(entry->animA) / HudIntToFloat(g_HealthFadeSteps);
    boxFade = boxFade > 1.0f ? 1.0f : (boxFade < 0.0f ? 0.0f : boxFade);

    float iconFade = HudIntToFloat(entry->animB) / HudIntToFloat(g_HealthFadeSteps);
    iconFade = iconFade > 1.0f ? 1.0f : (iconFade < 0.0f ? 0.0f : iconFade);

    int iconAlpha = FastDoubleToInt(iconFade * 128.0f);
    int boxAlpha = FastDoubleToInt((float)g_DetectorBoxAlpha * boxFade);
    int boxX = g_DetectorBoxX + x;
    int boxWidth = FastDoubleToInt((float)g_DetectorBoxWidth * boxFade);

    Hud_DrawTexQuad(GetIconFrameTex(HUD_ICON_TEXT_BOX, 1), boxX + 16, y, 32, 32, boxAlpha);

    boxX -= boxWidth;
    Hud_DrawTexHeaderQuad(HudTexHeader(GetIconFrameTex(HUD_ICON_TEXT_BOX, 0)), boxX, y, boxWidth + 16, 32, boxAlpha);
    Hud_DrawTexHeaderQuad(HudTexHeader(GetIconFrameTex(HUD_ICON_TEXT_BOX, 1)), boxX - 32, y, 32, 32, boxAlpha);

    HudEntry_DrawIcon(entry, GetIconFrameTex(BOLTS_ANIMATION, worldUpdateTime % 60 >> 1), x - 32, y, 0, iconAlpha);

    char text[64];

    sprintf(text, "!");

    int textX = g_DetectorTextPos[0] + x;
    int textY = g_DetectorTextPos[1] + y;
    int period = (int)(animationSpeed * ((float)g_DetectorBlinkPeriod + 0.5f));
    float phase = (float)(worldUpdateTime % period) / HudIntToFloat(period) * 6.28318f - 3.14159f;
    float blink = FastSinInline(phase) * 4.0f - 3.0f;

    if (blink - 0.0f < 0.0f) {
        blink = 0.0f;
    }

    float textFade = iconFade * blink;
    u32 shadow = FastLerpColor(textFade, 0, 0x80000000);
    u32 color = FastLerpColor(textFade, g_DetectorTextColors[0], g_DetectorTextColors[1]);

    FontPrintLarge(textX + 1, textY + 1, shadow, text, -1);
    FontPrintLarge(textX, textY, color, text, -1);

    return entry->width;
}

// 0x00d44e4 (0x344 bytes)
/* Giant Clank's health on the hoverboard trick meter's art (icon HUD_ICON_METER_FRAME), its corner light
   (frame 2) lit while DAT_0096b316 runs */
int Draw_GiantClankHealthHUD(HudElement *entry)
{
    int x;
    int y;

    entry->width = 256;
    entry->height = 64;

    HudEntryPos(entry, &x, &y);
    HudEntry_GetSlideOffset(entry, &x, &y, entry->slideTime, 0);

    Hud_DrawEffectTexQuad(GetIconFrameTex(HUD_ICON_METER_FRAME, 1), x, y, entry->displayedValue * 221 / entry->maxValue + 27, 64, 0x80);
    Hud_DrawTexHeaderQuad(HudTexHeader(GetIconFrameTex(HUD_ICON_METER_FRAME, 0)), x, y, 256, 64, 0x80);
    Hud_DrawTexHeaderQuad(HudTexHeader(GetIconFrameTex(HUD_ICON_METER_FRAME, 2)), x, y, 32, 32, DAT_0096b316 != 0 ? 0x80 : 0);

    return entry->width;
}

// 0x00d4838 (0x5c8 bytes)
/* "ammo/max" in a text box right of the weapon's icon (frame 3 of iconId) */
int Draw_AmmoCounter(HudElement *entry)
{
    int x = entry->x;
    int y = HudBottomMargin();

    if (entry->animA == 0) {
        return entry->width;
    }

    float boxFade = HudIntToFloat(entry->animA) / HudIntToFloat(g_AmmoFadeSteps[0]);
    boxFade = boxFade > 1.0f ? 1.0f : (boxFade < 0.0f ? 0.0f : boxFade);

    float textFade = HudIntToFloat(entry->animB) / HudIntToFloat(g_AmmoFadeSteps[1]);
    textFade = textFade > 1.0f ? 1.0f : (textFade < 0.0f ? 0.0f : textFade);

    int iconAlpha = FastDoubleToInt(boxFade * 128.0f);
    int boxAlpha = FastDoubleToInt((float)iconAlpha * 0.7f);
    int boxWidth = (entry->maxValue < 100) ? g_AmmoBoxWidths[0] : g_AmmoBoxWidths[1];
    int width = FastDoubleToInt((float)boxWidth * boxFade);

    /* REVISIT: the middle is drawn x + width wide and the right cap past it by x again */
    Hud_DrawTexHeaderQuad(HudTexHeader(GetIconFrameTex(HUD_ICON_TEXT_BOX, 1)), x - 28, y, 32, 32, boxAlpha);
    Hud_DrawTexHeaderQuad(HudTexHeader(GetIconFrameTex(HUD_ICON_TEXT_BOX, 0)), x + 4, y, x + width, 32, boxAlpha);
    Hud_DrawTexQuad(GetIconFrameTex(HUD_ICON_TEXT_BOX, 1), x + width + x + 4, y, 32, 32, boxAlpha);

    entry->icon.frame = GetIconFrameTex(entry->iconId, 3);
    HudEntry_DrawIcon(entry, entry->icon.frame, x, y, 0, iconAlpha);

    char text[128];
    int ammo = entry->displayedValue;

    sprintf(text, "%d/%d", ammo, entry->maxValue);

    u32 color;

    if (ammo == 0) {
        color = FastLerpColor(textFade, g_AmmoEmptyColors[0], g_AmmoEmptyColors[1]);
    } else {
        color = FastLerpColor(textFade, g_AmmoTextColors[0], g_AmmoTextColors[1]);
    }

    u32 shadow = FastLerpColor(textFade, 0, 0x80000000);

    FontPrintMediumRight(g_AmmoTextPos[0] + x + boxWidth + 1, g_AmmoTextPos[1] + y + 1, shadow, text, -1);
    FontPrintMediumRight(g_AmmoTextPos[0] + x + boxWidth, g_AmmoTextPos[1] + y, color, text, -1);

    return entry->width;
}

// 0x00d4e08 (0xd4 bytes)
/* (an update despite the name) HudEntryGrow, showing *pValue */
void MobyCounterHud_Init(HudElement *entry)
{
    HudEntryGrow(entry);
    entry->displayedValue = *entry->pValue;
}

// 0x00d4ef0 (0x7e4 bytes)
/* a count in a text box near the bottom, on the left or (an entry past x 256) the right,
   the box always toward the screen's middle */
int Draw_MobyCounterHud(HudElement *entry)
{
    if (entry->animA == 0) {
        return entry->width;
    }

    int left = entry->x;
    u32 align = entry->alignFlags;

    if (!(align & 4)) {
        left -= (align & 8) ? entry->width : entry->width >> 1;
    }

    bool onRight = left > 256;
    int x = onRight ? g_MobyCounterX[1] : g_MobyCounterX[0];
    int margin = HudBottomMargin();
    int y = 384 - margin;

    float boxFade = HudIntToFloat(entry->animA) / HudIntToFloat(g_AmmoFadeSteps[0]);
    boxFade = boxFade > 1.0f ? 1.0f : (boxFade < 0.0f ? 0.0f : boxFade);

    float textFade = HudIntToFloat(entry->animB) / HudIntToFloat(g_AmmoFadeSteps[1]);
    textFade = textFade > 1.0f ? 1.0f : (textFade < 0.0f ? 0.0f : textFade);

    char text[128];

    sprintf(text, "%d", entry->displayedValue);

    int boxAlpha = FastDoubleToInt((float)FastDoubleToInt(boxFade * 128.0f) * 0.7f);
    int boxWidth = (entry->maxValue > 9) ? g_MobyCounterBoxWidths[1] : g_MobyCounterBoxWidths[0];
    int boxX = x + 4;
    int width = FastDoubleToInt((float)boxWidth * boxFade);

    if (onRight) {
        Hud_DrawTexQuad(GetIconFrameTex(HUD_ICON_TEXT_BOX, 1), boxX, y, 32, 32, boxAlpha);
        boxX -= width;
        Hud_DrawTexHeaderQuad(HudTexHeader(GetIconFrameTex(HUD_ICON_TEXT_BOX, 0)), boxX, y, width, 32, boxAlpha);
        Hud_DrawTexHeaderQuad(HudTexHeader(GetIconFrameTex(HUD_ICON_TEXT_BOX, 1)), boxX - 32, y, 32, 32, boxAlpha);
    } else {
        Hud_DrawTexHeaderQuad(HudTexHeader(GetIconFrameTex(HUD_ICON_TEXT_BOX, 1)), x - 28, y, 32, 32, boxAlpha);
        Hud_DrawTexHeaderQuad(HudTexHeader(GetIconFrameTex(HUD_ICON_TEXT_BOX, 0)), boxX, y, width, 32, boxAlpha);
        Hud_DrawTexQuad(GetIconFrameTex(HUD_ICON_TEXT_BOX, 1), width + boxX, y, 32, 32, boxAlpha);
    }

    if (onRight) {
        HudEntry_DrawIcon(entry, entry->icon.frame, x - 22, y, 0, 0x80);
    } else {
        HudEntry_DrawIcon(entry, entry->icon.frame, x, y, 0, 0x80);
    }

    u32 color = FastLerpColor(textFade, g_MobyCounterColors[0], g_MobyCounterColors[1]);
    u32 shadow = FastLerpColor(textFade, 0, 0x80000000);

    if (onRight) {
        FontPrintMediumRight(x - 25, 393 - margin, shadow, text, -1);
        FontPrintMediumRight(x - 26, 392 - margin, color, text, -1);
    } else {
        FontPrintMediumRight(x + 67, 393 - margin, shadow, text, -1);
        FontPrintMediumRight(x + 66, 392 - margin, color, text, -1);
    }

    return entry->width;
}

/* forgets the ammo entry, clearing its flags (and the registered ones) */
static inline void HudClearAmmoEntry(void)
{
    if (g_HudAmmoEntryId == -1) {
        return;
    }

    int index = HudFindEntry(g_HudAmmoEntryId);

    if (index < HUD_ENTRY_CNT) {
        HudEntries[index].regFlags = 0;

        if (HudEntries[index].locked == 0) {
            HudEntries[index].flags = 0;
        }
    }

    g_HudAmmoEntryId = -1;
}

// 0x00d56d8 (0x3c8 bytes)
/* Registers the ammo entry for the current weapon (or Giant Clank's health), then ticks
   every entry: hidden ones (flags 0x10, or while g_HudHideCounter) keep their showTimer
   under 10.5 frames, showTimer counts down and slideTime toward -6 or up to 30, a locked
   entry resets once off screen; with update set the update callbacks run. Returns how many
   entries are showing. */
int UpdateAllGameplayHUD(int update)
{
    if (g_HudHideCounter == 0) {
        int weapon = g_CurrentWeapon;

        if (AmmoInfo(weapon)[0] == 0) {
            weapon = 0;
        }

        if (g_heroType == 0 && weapon != 0) {
            g_HudAmmoWeapon = weapon;
            g_HudAmmoEntryId = RegisterHUDCallback(16, weapon + 60000, &PTR_AmmoHud_Init_00705808, &PTR_AmmoHud_Update_007058d8, &PTR_Draw_AmmoCounter_00705888,
                                                   &((int *)&currentAmmoArray)[weapon], AmmoInfo(weapon)[3]);
        } else if (g_heroType == 2) {
            HudClearAmmoEntry();
            DAT_0096b314 = (u16)RegisterHUDCallback(16, 0xffff, &PTR_HudEntry_InitCounter_007056a0, &PTR_HudEntry_UpdateCounter_007056c8,
                                                    &PTR_Draw_GiantClankHealthHUD_00705880, (int *)&g_GiantClankHealth, 200);
        } else {
            HudClearAmmoEntry();
        }
    }

    int showing = 0;

    for (int i = 0; i < HUD_ENTRY_CNT; i++) {
        HudElement *entry = &HudEntries[i];

        if ((entry->flags & 0x10) || g_HudHideCounter != 0) {
            if (entry->showTimer < (int)(animationSpeed * 10.5f)) {
                entry->showTimer = (int)(animationSpeed * 10.5f);
            }
        }

        int timer = entry->showTimer;

        if (timer > 0) {
            timer--;
            entry->showTimer = timer;
        }

        int slide;

        if (timer < 1) {
            slide = entry->slideTime;

            if (slide > -6) {
                slide--;
                entry->slideTime = slide;
            }
        } else {
            slide = entry->slideTime;
            showing++;

            if (slide < 30) {
                slide++;
                entry->slideTime = slide;
            }
        }

        if (slide == -6 && entry->locked != 0) {
            HudEntry_Reset(entry);
        }

        if (update != 0 && entry->updateCb != NULL) {
            HudCall(entry->updateCb, entry);
        }
    }

    return showing;
}

// 0x00d5aa0 (0x98 bytes)
/* forgets the ammo entry and hides the HUD one more level */
void Hud_ClearAmmoEntry(void)
{
    HudClearAmmoEntry();
    g_HudAmmoWeapon = 0;
    g_HudHideCounter++;
}

// 0x00d5b38 (0xc0 bytes)
/* unregisters and resets every entry, off screen, and hides the HUD */
void Hud_ResetAllEntriesHidden(void)
{
    for (int i = 0; i < HUD_ENTRY_CNT; i++) {
        RegisterHUDCallback(i, 0xffff, NULL, NULL, NULL, NULL, 1);
        HudEntries[i].showTimer = 0;
        HudEntries[i].slideTime = -6;
        HudEntry_Reset(&HudEntries[i]);
    }

    g_HudHideCounter = 1;
    g_HudAmmoEntryId = -1;
    g_HudAmmoWeapon = 0;
}

// 0x00d5bf8 (0x20 bytes)
void Hud_DecHideCounter(void)
{
    if (g_HudHideCounter != 0) {
        g_HudHideCounter--;
    }
}

// 0x00d5c20 (0x330 bytes)
/* Runs the draw callbacks, then the toast message under the prompt (fading in over 8.5
   frames while g_toastMsgTimer runs, out after; timer 1000 is where it stops). */
void DrawGameplayHud(void)
{
    if (g_HudSkipDraw != 0 || LetterBoxOn != 0) {
        g_HudSkipDraw = 0;
        return;
    }

    g_HudDrawMarker = 0xfffff0;

    for (int i = 0; i < HUD_ENTRY_CNT; i++) {
        if (HudEntries[i].drawCb != NULL) {
            HudCall(HudEntries[i].drawCb, &HudEntries[i]);
        }
    }

    int y = g_PromptBottom;

    if ((g_ToastAlpha == 0 && g_toastMsgTimer == 0) || g_gameMode != GAME_MODE_NORMAL) {
        g_PromptBottom = 100;
        return;
    }

    int step = 0x80 / (int)(animationSpeed * 8.5f);
    int alpha;

    if (g_toastMsgTimer == 0) {
        alpha = g_ToastAlpha - step;
        alpha = alpha < 0 ? 0 : alpha;
    } else {
        alpha = g_ToastAlpha + step;
        alpha = alpha > 0x80 ? 0x80 : alpha;
    }

    g_ToastAlpha = alpha;

    u32 color = (alpha << 24) + 0xf0f0f0;

    HudTextBoxLine(256, y, y - 8, color, &g_toastMsgBuff);

    y = g_PromptBottom;

    if (g_toastMsgBuff2[0] != 0 && g_toastMsgTimer > 1000) {
        HudTextBoxLine(256, y, y - 8, color, g_toastMsgBuff2);
    }

    if (g_toastMsgTimer != 0) {
        g_toastMsgTimer--;
    }

    if (g_toastMsgTimer == 1000) {
        g_toastMsgTimer = 0;
    }
}

// 0x00d5f58 (0x64 bytes)
void RaceHud_Init(HudElement *entry)
{
    entry->showTimer = (int)(animationSpeed * 180.5f) + 30;
    entry->width = 128;
    entry->height = 128;
    entry->icon.offsX = 0;
    entry->icon.offsY = 0;
}

// 0x00d5fc0 (0x5c bytes)
/* only while hoverboarding */
void RaceHud_Update(HudElement *entry)
{
    int slide = -6;

    if (g_heroStateType == 0x16) {
        slide = 5;
        entry->showTimer = (int)(animationSpeed * 30.5f);
    }

    entry->slideTime = slide;
}

// 0x00d6020 (0x128 bytes)
/* the ammo shown is *pValue clamped to 0..maxValue; shows while showTimer holds out */
void AmmoHud_Update(HudElement *entry)
{
    int ammo = *entry->pValue;
    int shown = ammo < 0 ? 0 : ammo;

    /* REVISIT: the clamp compares the max with the unclamped ammo */
    entry->displayedValue = (ammo > entry->maxValue) ? entry->maxValue : shown;

    if (entry->showTimer < (int)(animationSpeed * 5.5f)) {
        entry->slideTime = 1;

        if (entry->animB != 0) {
            entry->animB--;
        } else if (entry->animA != 0) {
            entry->animA--;
        } else {
            entry->slideTime = -6;
        }
    } else {
        entry->showTimer = (int)(animationSpeed * 5.5f);

        if (entry->animA < g_AmmoFadeSteps[0]) {
            entry->animA++;
        } else if (entry->animB < g_AmmoFadeSteps[1]) {
            entry->animB++;
        }
    }
}

/* screen modes 4 and 5 move the race boxes up */
static inline bool HudRaceModeShifted(void)
{
    IdolDraw *idol = (IdolDraw *)(uintptr_t)g_pIdolDraw;

    return idol->unk11 == 4 || idol->unk11 == 5;
}

/* large text with its shadow (offset by shadowX, shadowY) */
static inline void HudLargeShadowed(int x, int y, int shadowX, int shadowY, u32 color, char *text)
{
    FontPrintLarge(x + shadowX, y + shadowY, 0x80000000, text, -1);
    FontPrintLarge(x, y, color, text, -1);
}

// 0x00d6148 (0x5c8 bytes)
/* "Lap: n/3" on the left and "Place: 1st" on the right of a box; on Kalebo also the count
   DAT_0096a5ae beside frame 2 of icon HUD_ICON_METER_FRAME */
int Draw_RaceLapPlaceHud(HudElement *entry)
{
    bool shifted = HudRaceModeShifted();

    if (entry->slideTime < 1) {
        return 0;
    }

    int bottom = g_ScreenHeight - HudBottomMargin();
    int boxY = bottom - g_LapBoxY;
    int y = bottom - g_LapTextY;

    if (shifted) {
        boxY -= g_RaceModeShift;
        y -= g_RaceModeShift;
    }

    Hud_DrawTextBox(g_LapBoxX, boxY, g_LapBoxSize[0], g_LapBoxSize[1], g_LapBoxSize[2]);

    char text[64];
    int x = g_LapTextX;

    sprintf(text, "%s: ", help_msg_string_by_index(STR_LAP));
    FontPrintLarge(x - 1, y + 1, 0x80000000, text, -1);
    FontPrintLarge(x, y, g_RaceLabelColor, text, -1);

    int labelWidth = FontLen(text, -1);
    int lap = (s16)DAT_0096a57a + 1;

    sprintf(text, " %d/3", lap > 3 ? 3 : lap);
    FontPrintLarge(x + labelWidth - 1, y + 2, 0x80000000, text, -1);
    FontPrintLarge(x + labelWidth, y, g_RaceValueColor, text, -1);

    int place = g_RacePlace - 1;

    sprintf(text, "%s", help_msg_string_by_index((StringId)((place > 4 ? 4 : place) + STR_ST)));
    x = g_PlaceRightX - FontLen(text, -1);
    HudLargeShadowed(x, y, 1, 1, g_RaceValueColor, text);

    sprintf(text, " %s:  ", help_msg_string_by_index(STR_PLACE));
    x -= FontLen(text, -1);
    HudLargeShadowed(x, y, 1, 1, g_RaceLabelColor, text);

    if (Level == Kalebo) {
        char count[8];

        sprintf(count, "%d", DAT_0096a5ae);

        int countY = HudBottomMargin();
        int countX = entry->x;

        if (g_MiscLevelFlags.Zoomerator) {
            countY = g_ZoomeratorBoxPos[1];
            countX = g_ZoomeratorBoxPos[0];
        }

        Hud_DrawTextBox(countX - 24, countY, g_ZoomeratorBoxWidth, 32, 0x60);
        Hud_DrawTexHeaderQuad(HudTexHeader(GetIconFrameTex(HUD_ICON_METER_FRAME, 2)), countX, countY, 32, 32, 0x80);

        FontPrintLarge(countX + 41, countY + 8, 0x80000000, count, -1);
        FontPrintLarge(countX + 40, countY + 7, DAT_0096a5ae == 0 ? 0x80202080 : 0x80e08060, count, -1);
    }

    return entry->width;
}

// 0x00d6710 (0x4e8 bytes)
/* "Time: m:ss:cc" (and on the Zoomerator "Score: n" above it), centred */
int Draw_RaceTimeScoreHud(HudElement *entry)
{
    bool shifted = HudRaceModeShifted();

    if (entry->slideTime < 1) {
        return 0;
    }

    int perMinute = (g_IsPal == 0) ? 3600 : 3000;
    int minutes = g_RaceTime / perMinute;
    int rest = g_RaceTime - minutes * perMinute;
    int perSecond = perMinute / 60;
    int seconds = rest / perSecond;
    int bottom = g_ScreenHeight - HudBottomMargin();
    int boxY = bottom - g_TimeBoxY;
    int scoreY = bottom - g_ScoreTextY;
    int timeY = bottom - g_TimeTextY;

    if (shifted) {
        boxY = boxY - g_RaceModeShift - 3;
        scoreY = scoreY - g_RaceModeShift - 3;
        timeY = timeY - g_RaceModeShift - 3;
    }

    char text[64];

    if (g_MiscLevelFlags.Zoomerator) {
        Hud_DrawTextBox(g_TimeBoxX, boxY, g_TimeBoxSize[0], g_TimeBoxSize[1], g_TimeBoxSize[2]);

        sprintf(text, "%s: %d", help_msg_string_by_index(STR_SCORE), g_RaceScore);

        int x = g_TimeCentreX - (FontLen(text, -1) >> 1);

        sprintf(text, "%s: ", help_msg_string_by_index(STR_SCORE));
        HudLargeShadowed(x, scoreY, 1, 1, g_TimeLabelColor, text);

        x += FontLen(text, -1);
        sprintf(text, " %d", g_RaceScore);
        HudLargeShadowed(x, scoreY, 1, 1, g_TimeValueColor, text);
    }

    sprintf(text, "%s:  0:00:00", help_msg_string_by_index(STR_TIME));

    int x = g_TimeCentreX - (FontLen(text, -1) >> 1);

    if (g_Language == 2) {
        x -= 20;
    }

    sprintf(text, "%s:  ", help_msg_string_by_index(STR_TIME));
    HudLargeShadowed(x, timeY, 1, 1, g_TimeLabelColor, text);

    x += FontLen(text, -1);
    sprintf(text, "%d:%02d:%02d", minutes, seconds, (rest - seconds * perSecond) * 100 / perSecond);
    HudLargeShadowed(x, timeY, 1, 1, g_TimeValueColor, text);

    return entry->width;
}

// 0x00d6bf8 (0x1c bytes)
int Hud_GetTexIndex(int idx)
{
    return ((int *)(uintptr_t)TexturePointerArray)[idx];
}

// 0x00d6c14 (0x2c8 bytes)
/* a quad from (x0, y0) to (x1, y1) with texture coordinates (u0, v0) to (u1, v1), all in
   1/16ths */
void Hud_DrawTexQuad4Pt(u8 *header, int x0, int y0, int x1, int y1, int u0, int v0, int u1, int v1, int alpha)
{
    HudBindTex(header);
    HudBeginQuads(alpha << 24 | 0x808080);
    HudVertex((v0 >> 4) << 16 | ((u0 >> 4) & 0xffff), x0 >> 4, y0 >> 4);
    HudVertex((v1 >> 4) << 16 | ((u0 >> 4) & 0xffff), x0 >> 4, y1 >> 4);
    HudVertex((v1 >> 4) << 16 | ((u1 >> 4) & 0xffff), x1 >> 4, y1 >> 4);
    HudVertex((v0 >> 4) << 16 | ((u1 >> 4) & 0xffff), x1 >> 4, y0 >> 4);
    HudEnd();
}

// 0x00d6edc (0x80 bytes)
void Hud_DrawEffectTexQuad4Pt(int tex, int x0, int y0, int x1, int y1, int u0, int v0, int u1, int v1, int alpha)
{
    Hud_DrawTexQuad4Pt(HudTexHeader(tex), x0, y0, x1, y1, u0, v0, u1, v1, alpha);
}

/* a float word into the HUD pass */
static inline void HudEmitF(float value)
{
    union {
        float asFloat;
        u32 asWord;
    } word;

    word.asFloat = value;
    HudEmit(word.asWord);
}

#define HUD_SET_TEXCOORD2F    CELL_GCM_METHOD(CELL_GCM_NV4097_SET_VERTEX_DATA2F_M + 1 * 8, 2)
#define HUD_SET_POSITION2F    CELL_GCM_METHOD(CELL_GCM_NV4097_SET_VERTEX_DATA2F_M, 2)

/* a vertex in floats */
static inline void HudVertexF(float u, float v, float x, float y)
{
    HudEmit(HUD_SET_TEXCOORD2F);
    HudEmitF(u);
    HudEmitF(v);
    HudEmit(HUD_SET_POSITION2F);
    HudEmitF(x);
    HudEmitF(y);
}

// 0x00d6f5c (0x2c0 bytes)
/* Hud_DrawTexQuad4Pt in floats */
void Hud_DrawTexQuadF(float x0, float y0, float x1, float y1, float u0, float v0, float u1, float v1, void *header, int alpha)
{
    HudBindTex((u8 *)header);
    HudBeginQuads(alpha << 24 | 0x808080);
    HudVertexF(u0, v0, x0, y0);
    HudVertexF(u0, v1, x0, y1);
    HudVertexF(u1, v1, x1, y1);
    HudVertexF(u1, v0, x1, y0);
    HudEnd();
}

// 0x00d721c (0x300 bytes)
/* effect texture tex at (x, y), w by h, its coordinates offset by (u, v); u runs over the
   low half of the size word and v over the high half */
void Hud_DrawEffectTexQuadUV(int tex, int x, int y, int w, int h, int u, int v, int alpha)
{
    u8 *header = HudTexHeader(tex);

    HudBindTex(header);

    u32 size = *(u32 *)(header + 0x18);
    u32 u1 = (u + size) & 0xffff;
    u32 v1 = v + (size >> 16);

    HudBeginQuads(alpha << 24 | 0x808080);
    HudVertex(v << 16 | (u & 0xffff), x, y);
    HudVertex(v1 << 16 | (u & 0xffff), x, y + h);
    HudVertex(v1 << 16 | u1, x + w, y + h);
    HudVertex(v << 16 | u1, x + w, y);
    HudEnd();
}

// 0x00d751c (0x2e0 bytes)
/* header's texture at (x, y), w by h, coordinates from (u, v) over 1 << uLog by 1 << vLog */
void Hud_DrawTexQuadUV(u8 *header, int x, int y, int uLog, int vLog, int w, int h, int u, int v, int alpha)
{
    HudBindTex(header);

    u32 v1 = v + (1 << vLog);
    u32 u1 = (u + (1 << uLog)) & 0xffff;

    HudBeginQuads(alpha << 24 | 0x808080);
    HudVertex(v << 16 | (u & 0xffff), x, y);
    HudVertex(v1 << 16 | (u & 0xffff), x, y + h);
    HudVertex(v1 << 16 | u1, x + w, y + h);
    HudVertex(v << 16 | u1, x + w, y);
    HudEnd();
}

// 0x00d77fc (0x68 bytes)
/* Hud_DrawTexQuadUV with an EffectTexHeaders index (not a TexturePointerArray one) */
void Hud_DrawEffectTexHeaderQuadUV(int index, int x, int y, int uLog, int vLog, int w, int h, int u, int v, int alpha)
{
    Hud_DrawTexQuadUV((u8 *)(uintptr_t)EffectTexHeaders + index * 0x24, x, y, uLog, vLog, w, h, u, v, alpha);
}

// 0x00d7864 (0x40 bytes)
/* Hud_DrawTexQuadUV with x and y in 1/16ths */
void Hud_DrawTexQuadUV_Fixed(u8 *header, int x, int y, int uLog, int vLog, int w, int h, int u, int v, int alpha)
{
    Hud_DrawTexQuadUV(header, x >> 4, y >> 4, uLog, vLog, w, h, u, v, alpha);
}

// 0x00d78a4 (0x378 bytes)
/* Hud_DrawTexQuadUV in floats. The integer arguments keep Hud_DrawTexQuadUV's order, but
   only header, uLog, vLog and alpha are read (REVISIT: what callers pass in the rest) */
void Hud_DrawTexQuadF_v2(float x, float y, float w, float h, float u, float v, u8 *header, int unused2, int unused3,
                         int uLog, int vLog, int unused6, int unused7, int unused8, int unused9, int alpha)
{
    HudBindTex(header);
    HudBeginQuads(alpha << 24 | 0x808080);

    float v1 = v + (float)(u32)(1 << vLog);
    float u1 = u + (float)(u32)(1 << uLog);

    HudVertexF(u, v, x, y);
    HudVertexF(u, v1, x, h + y);
    HudVertexF(u1, v1, w + x, h + y);
    HudVertexF(u1, v, w + x, y);
    HudEnd();
}

/* the corners of a w by h quad turned by angle about (x, y): (xPlus + w cos, yPlus - w sin),
   (xMinus + w cos, yMinus - w sin), (xMinus - w cos, yMinus + w sin), (xPlus - w cos,
   yPlus + w sin) with xPlus, xMinus = x +- h sin and yPlus, yMinus = y +- h cos */
static inline void HudTurnedCorners(float x, float y, float w, float h, float angle, float corners[4][2])
{
    float sine = FastSinInline(angle);
    float cosine = FastSinInline(angle + 1.5707963f);
    float xPlus = h * sine + x;
    float xMinus = -(h * sine - x);
    float yPlus = h * cosine + y;
    float yMinus = -(h * cosine - y);
    float across = -(w * cosine);

    corners[0][0] = xPlus - across;
    corners[0][1] = -(w * sine - yPlus);
    corners[1][0] = xMinus - across;
    corners[1][1] = -(w * sine - yMinus);
    corners[2][0] = xMinus + across;
    corners[2][1] = w * sine + yMinus;
    corners[3][0] = xPlus + across;
    corners[3][1] = w * sine + yPlus;
}

/* a vertex with a short texture coordinate and a float position */
static inline void HudVertexSF(u32 texCoord, float x, float y)
{
    HudEmit(HUD_SET_TEXCOORD2S);
    HudEmit(texCoord);
    HudEmit(HUD_SET_POSITION2F);
    HudEmitF(x);
    HudEmitF(y);
}

// 0x00d7c38 (0x334 bytes)
/* header's texture on a quad turned by angle (HudTurnedCorners), coordinates 0..(u, v) */
void Hud_DrawTexQuadF_v3(float x, float y, float w, float h, float angle, int u, int v, u8 *header)
{
    float corners[4][2];

    HudTurnedCorners(x, y, w, h, angle, corners);
    HudBindTex(header);
    HudBeginQuads(0x80808080);
    HudVertexSF(0, corners[0][0], corners[0][1]);
    HudVertexSF((u32)v << 16, corners[1][0], corners[1][1]);
    HudVertexSF((u32)v << 16 | (u & 0xffff), corners[2][0], corners[2][1]);
    HudVertexSF(u & 0xffff, corners[3][0], corners[3][1]);
    HudEnd();
}

// 0x00d7f88 (0x39c bytes)
/* Hud_DrawTexQuadF_v3 with a copy of EffectTexHeaders[index], its coordinates a quarter turn
   on */
void Hud_DrawTexQuadF_v4(float x, float y, float w, float h, float angle, int u, int v, int index)
{
    float corners[4][2];

    HudTurnedCorners(x, y, w, h, angle, corners);

    EffectTexHeader header = ((EffectTexHeader *)(uintptr_t)EffectTexHeaders)[index];

    HudBindTex((u8 *)&header);
    HudBeginQuads(0x80808080);
    HudVertexSF(u & 0xffff, corners[0][0], corners[0][1]);
    HudVertexSF(0, corners[1][0], corners[1][1]);
    HudVertexSF((u32)v << 16, corners[2][0], corners[2][1]);
    HudVertexSF((u32)v << 16 | (u & 0xffff), corners[3][0], corners[3][1]);
    HudEnd();
}

// 0x00d8328 (0x3c bytes)
/* Hud_DrawTexQuadF_v4 with the position and size in 1/16ths */
void Hud_DrawTexQuadF_v4_Fixed(float x, float y, float w, float h, float angle, int u, int v, int index)
{
    Hud_DrawTexQuadF_v4(x * 0.0625f, y * 0.0625f, w * 0.0625f, h * 0.0625f, angle, u, v, index);
}

// 0x00d8364 (0x2f4 bytes)
/* effect texture tex from (x0, y0) to (x1, y1), coordinates (u0, v0) to (u1, v1) */
void DrawSprite2(int tex, int x0, int y0, int x1, int y1, int u0, int v0, int u1, int v1, int alpha)
{
    HudBindTex(HudTexHeader(tex));
    HudBeginQuads(alpha << 24 | 0x808080);
    HudVertex((u32)v0 << 16 | (u0 & 0xffff), x0, y0);
    HudVertex((u32)v1 << 16 | (u0 & 0xffff), x0, y1);
    HudVertex((u32)v1 << 16 | (u1 & 0xffff), x1, y1);
    HudVertex((u32)v0 << 16 | (u1 & 0xffff), x1, y0);
    HudEnd();
}

// 0x00d8658 (0x4 bytes)
void STUB_000d8658(...)
{
}

// 0x00d865c (0x284 bytes)
/* a line from (x0, y0) to (x1, y1) in color (effect texture 22 bound); mode 0 moves it 8 up
   and left */
void Hud_DrawEffectTexLine(int x0, int y0, int x1, int y1, u32 color, int mode)
{
    HudBindTex(HudTexHeader(GetEffectTex(22)));

    HudEmit(HUD_SET_COLOR4UB);
    HudEmit((color >> 24 & 0xff) << 24 | (color >> 16 & 0xff) << 16 | (color >> 8 & 0xff) << 8 | (color & 0xff));
    HudEmit(HUD_SET_TEXCOORD2S);
    HudEmit(0);
    HudEmit(0x400c1714);
    HudEmit(0);
    HudEmit(0);
    HudEmit(0);
    HudEmit(HUD_SET_BEGIN_END);
    HudEmit(CELL_GCM_PRIMITIVE_LINES);

    if (mode == 0) {
        HudPosition(x0 - 8, y0 - 8);
        HudPosition(x1 - 8, y1 - 8);
    } else {
        HudPosition(x0, y0);
        HudPosition(x1, y1);
    }

    HudEnd();
}

// 0x00d88e0 (0x4 bytes)
void STUB_000d88e0(...)
{
}
