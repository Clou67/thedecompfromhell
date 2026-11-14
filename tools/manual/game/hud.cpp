#include "rc1.h"
// MERGE
#include "idol/fastinline.h"
#include <cell/gcm/gcm_macros.h>
#include <cell/gcm/gcm_enum.h>
// game/hud.cpp -- reconstructed from NPEA00385 EBOOT
// 112 functions, 0xc8274-0xd88e4: the gameplay HUD. The 13 HUD entries (registered callbacks
// that slide in, count and draw a value: bolts, health, ammo, oxygen, quick select, race and
// trick displays...), the HUD's scratch memory and spare moby bank, and the textured quad and
// sprite drawers the HUD and the menus share.

#define HUD_ENTRY_CNT 13

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
    return RegisterHUDCallback(1, 0x7535, &PTR_HealthHud_Init_007057f0, &PTR_HealthHud_Update_007057f8, &PTR_Draw_NanotechUI_00705800, (int *)&g_heroHealth, 8);
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
            int t = (worldUpdateTime - anim->startTime) / icon->frameTime;

            frame = icon->firstFrame + t % count;
        }
        else if (anim->mode == 2) {
            int t = (worldUpdateTime - anim->startTime) / icon->frameTime;

            t %= count * 2 - 2;
            frame = (t < count ? t : count * 2 - t - 2) + icon->firstFrame;
        }
        else if (anim->mode == 3) {
            if (anim->startTime < worldUpdateTime) {
                int t = (worldUpdateTime - anim->startTime) / icon->frameTime;

                if (t < count * 2 - 2) {
                    frame = (t < count ? t : count * 2 - t - 2) + icon->firstFrame;
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
static inline void HudEntryAnimate(HudElement *entry)
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
/* the text box (icon 0x7580): a 32-wide end cap (frame 1), the middle (frame 0) and the cap
   turned round */
void Hud_DrawTextBox(int x, int y, int w, int h, int alpha)
{
    int middle = GetIconFrameTex(0x7580, 0);
    int cap = GetIconFrameTex(0x7580, 1);

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

    int middle = GetIconFrameTex(0x7580, 0);
    int cap = GetIconFrameTex(0x7580, 1);

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

        float dz = g_heroPosition.z - startZ;
        float dx = g_heroPosition.x - startX;
        float dy = g_heroPosition.y - startY;

        if (sqrtf(dz * dz + dx * dx + dy * dy) < 5.0f) {
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

