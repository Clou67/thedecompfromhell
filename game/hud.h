#pragma once
// game/hud.h
#include "types.h"

// ---- types
/* an animated HUD icon (IconTableEntry index, its animation mode and frame) */
typedef struct HudIconAnim {
    s16 iconIdx;             /* 0x00 */
    u8 mode;                 /* 0x02  0 still, 1 loop, 2 ping-pong, 3 ping-pong now and then */
    u8 _pad03;
    int frame;               /* 0x04  the texture frame now */
    s16 offsX;               /* 0x08 */
    s16 offsY;               /* 0x0a */
    int startTime;           /* 0x0c  worldUpdateTime the animation counts from */
} HudIconAnim;

/* a HUD entry: 13 of them at HudEntries, 0x90 bytes. The reg* half is what RegisterHUDCallback
   was given; HudEntry_Reset copies it into the live half. */
typedef struct HudElement {
    int iconId;              /* 0x00 */
    u32 flags;               /* 0x04  HUD_* (0x20: reset when registered...) */
    int maxValue;            /* 0x08 */
    int *pValue;             /* 0x0c  the value shown */
    void *initCb;            /* 0x10  called with the entry (function descriptors) */
    void *updateCb;          /* 0x14 */
    void *drawCb;            /* 0x18 */
    int unk1c;               /* 0x1c */
    int regIconId;           /* 0x20 */
    u32 regFlags;            /* 0x24 */
    int regMaxValue;         /* 0x28 */
    int *regPValue;          /* 0x2c */
    void *regInitCb;         /* 0x30 */
    void *regUpdateCb;       /* 0x34 */
    void *regDrawCb;         /* 0x38 */
    int unk3c;               /* 0x3c */
    HudIconAnim icon;        /* 0x40  (offsX/offsY inside it) */
    int x;                   /* 0x50 */
    int y;                   /* 0x54 */
    int width;               /* 0x58 */
    int height;              /* 0x5c */
    u32 alignFlags;          /* 0x60  1 top, 2 bottom, 4 left, 8 right (else centred) */
    int id;                  /* 0x64  RegisterHUDCallback's handle, -1 free */
    int locked;              /* 0x68  1 right after registering: flags set by id stay pending */
    int slideTime;           /* 0x6c  slide step: counts up from -6 (in at 0..23), 1 while hiding */
    u8 animA;                /* 0x70  fade/grow steps up to animationSpeed * 8.5, then animB */
    u8 animB;                /* 0x71 */
    u8 unk72;                /* 0x72 */
    u8 countAcc;             /* 0x73  counting speed accumulator */
    int displayedValue;      /* 0x74 */
    int targetValue;         /* 0x78 */
    int showTimer;           /* 0x7c  frames left on screen; also picks the slide curve */
    void *data;              /* 0x80  per-entry data (HealthHud: a HudPulse) */
    u8 unk84[12];            /* 0x84 */
} HudElement;
typedef char HudElement_size_check[sizeof(HudElement) == 0x90 ? 1 : -1];

/* one quick select slot; the neighbours are slot indices for the d-pad */
typedef struct QuickSelectSlot {
    u32 iconId;              /* 0x00  the item's HUD icon */
    int unk04;               /* 0x04 */
    int up;                  /* 0x08  pad 0x8000 */
    int right;               /* 0x0c  pad 0x2000 */
    int down;                /* 0x10  pad 0x1000 */
    int left;                /* 0x14  pad 0x4000 */
    int item;                /* 0x18  0 = empty */
} QuickSelectSlot; // 0x1c

/* a slow throb: value climbs to 0xfff and back with speed (+-60) pushed by accel (+-1) */
typedef struct HudPulse {
    s16 tick;                /* 0x00  0..59 */
    s16 value;               /* 0x02  0..0xfff */
    s16 speed;               /* 0x04 */
    s16 accel;               /* 0x06 */
} HudPulse;

/* UnusedIconHud's data: an icon whose level steps through 3-frame groups, with a cross fade */
typedef struct HudLevelIcon {
    int value;               /* 0x00  the level being faded */
    int fadeOut;             /* 0x04  0x80 down by g_HudLevelFadeStep */
    int fadeIn;              /* 0x08 */
    int phase;               /* 0x0c  the glow, up by g_HudLevelPhaseStep */
} HudLevelIcon;

struct HudEntry {
    dword ctx;
    dword pad;
    dword pad2;
    dword pad3;
    void *ptr1;
    void *ptr2;
    void *callbackPtr;
    dword field7_0x1c;
};

/* a HUD icon (IconTableEntry, ends with iconId 0xffff) */
typedef struct IconTableEntries {
    u16 iconId;              /* 0x00 */
    u16 frameCnt;            /* 0x02 */
    u16 firstFrame;          /* 0x04  texture frame (GetIconFrameTex) */
    u8 animMode;             /* 0x06  HudIconAnim.mode */
    u8 frameTime;            /* 0x07  frames per animation frame */
} IconTableEntries;

// ---- globals
extern undefined4 DAT_007244e4; /* 0x7244e4 */
extern undefined4 DAT_007244e8; /* 0x7244e8 */
extern undefined4 DAT_0072452c; /* 0x72452c */
extern undefined4 DAT_00724534; /* 0x724534 */
extern undefined4 DAT_00724538; /* 0x724538 */
extern undefined4 DAT_0072453c; /* 0x72453c */
extern undefined4 DAT_00724540; /* 0x724540 */
extern undefined4 DAT_00724544; /* 0x724544 */
extern undefined4 DAT_00724548; /* 0x724548 */
extern undefined4 DAT_0072454c; /* 0x72454c */
extern undefined4 DAT_00724550; /* 0x724550 */
extern undefined4 DAT_0072455c; /* 0x72455c */
extern undefined4 DAT_0072456c; /* 0x72456c */
extern undefined4 DAT_00724570; /* 0x724570 */
extern undefined4 DAT_00724574; /* 0x724574 */
extern undefined4 DAT_00724580; /* 0x724580 */
extern undefined4 DAT_00724588; /* 0x724588 */
extern undefined4 DAT_0072458c; /* 0x72458c */
extern undefined4 DAT_00724590; /* 0x724590 */
extern undefined4 DAT_00724594; /* 0x724594 */
extern undefined4 DAT_00724598; /* 0x724598 */
extern undefined4 DAT_0072459c; /* 0x72459c */
extern undefined4 DAT_007245a0; /* 0x7245a0 */
extern undefined4 DAT_007245a4; /* 0x7245a4 */
extern undefined4 DAT_007245a8; /* 0x7245a8 */
extern undefined4 DAT_007245b8; /* 0x7245b8 */
extern undefined2 DAT_00737d38; /* 0x737d38 */
extern undefined4 DAT_0096560c; /* 0x96560c */
extern undefined4 DAT_00965b70; /* 0x965b70 */
extern undefined4 DAT_009660d4; /* 0x9660d4 */
extern undefined4 DAT_00966638; /* 0x966638 */
extern undefined4 DAT_0096a3c0; /* 0x96a3c0 */
extern undefined4 DAT_0096a3c4; /* 0x96a3c4 */
extern undefined4 DAT_0096a3c8; /* 0x96a3c8 */
extern undefined4 DAT_0096a3cc; /* 0x96a3cc */
extern undefined4 DAT_0096a3e0; /* 0x96a3e0 */
extern undefined4 DAT_0096a3e4; /* 0x96a3e4 */
extern undefined4 DAT_0096a3e8; /* 0x96a3e8 */
extern undefined4 DAT_00a15c84; /* 0xa15c84 */
extern undefined1 DAT_00a15cdc; /* 0xa15cdc */
extern undefined4 DAT_00a1bfcc; /* 0xa1bfcc */
extern undefined4 DAT_00a1bfe8; /* 0xa1bfe8 */
extern undefined4 DAT_00a1c818; /* 0xa1c818 */
extern RenderingStep * HUD_Pass; /* 0x8fa43c */
extern HudElement HudEntries[13]; /* 0x723b10 */
extern IconTableEntries * IconTableEntry; /* 0xa1bfdc */
extern pointer32 PTR_AmmoHud_Init_00705808; /* 0x705808 */
extern pointer32 PTR_AmmoHud_Update_007058d8; /* 0x7058d8 */
extern pointer32 PTR_Draw_GiantClankHealthHUD_00705880; /* 0x705880 */
extern pointer32 PTR_Draw_NanotechUI_00705800; /* 0x705800 */
extern pointer32 PTR_HealthHud_Init_007057f0; /* 0x7057f0 */
extern pointer32 PTR_HealthHud_Update_007057f8; /* 0x7057f8 */
extern pointer32 PTR_HudEntry_InitCounter_007056a0; /* 0x7056a0 */
extern pointer32 PTR_HudEntry_UpdateCounter_007056c8; /* 0x7056c8 */
extern undefined4 TexturePointerArray; /* 0xa1bfe0 */
extern int g_AmmoBoxWidths[2]; /* 0x7244ec: the ammo box's width for a max under 100 (70) and otherwise (95) */ /* type set in global_types.tsv */
extern u32 g_AmmoEmptyColors[2]; /* 0x7244fc: the ammo text colour from/to when empty */ /* type set in global_types.tsv */
extern int g_AmmoFadeSteps[2]; /* 0x7244e4: the ammo entry's animA and animB steps (8, 8) */ /* type set in global_types.tsv */
extern u32 g_AmmoTextColors[2]; /* 0x7244f4: the ammo text colour from/to */ /* type set in global_types.tsv */
extern int g_AmmoTextPos[2]; /* 0x724504: the ammo text's right end from the box (25, 8) */ /* type set in global_types.tsv */
extern int g_BoltDigitWidth; /* 0x72441c: a digit's width (13) */ /* type set in global_types.tsv */
extern int g_BoltDotPos[2]; /* 0x724414: the thousands dot's offset, languages 3 and 5 (-29, 10) */ /* type set in global_types.tsv */
extern int g_BoltFadeSteps[2]; /* 0x7243f4: the bolt entry's animA and animB steps (8, 8) */ /* type set in global_types.tsv */
extern int g_BoltSeparatorPos[2]; /* 0x72440c: the thousands apostrophe's offset (-30, 21) */ /* type set in global_types.tsv */
extern u32 g_BoltTextColors[2]; /* 0x7243fc: the bolt count colour from/to */ /* type set in global_types.tsv */
extern int g_BoltTextPos[2]; /* 0x724404: the bolt count's right end from the entry (-32, 8) */ /* type set in global_types.tsv */
extern s16 g_BoltTick; /* 0xa1c188: the bolt entry's 0..59 tick (HudElement.data), animates BOLTS_ANIMATION */ /* type set in global_types.tsv */
extern float g_BossBarEndScale; /* 0x7244bc: how much of the last segment the bar uses (0.7) */ /* type set in global_types.tsv */
extern float g_BossBarStartScale; /* 0x7244c0: how much of the first segment it uses (0.7) */ /* type set in global_types.tsv */
extern int g_BossBarX; /* 0x7244b4: the moby health bar's centre x (276) */ /* type set in global_types.tsv */
extern u32 g_ClankCommandColors[2]; /* 0x724384: the command name colour from/to */ /* type set in global_types.tsv */
extern int g_ClankCommandNameY; /* 0x72438c: the command name's y offset (-8) */ /* type set in global_types.tsv */
extern int g_ClankCommandReady; /* 0xa1bfe4: the clank command ring only opens while set; cleared by ResetGameCounters (REVISIT: who sets it) */ /* type set in global_types.tsv */
extern int g_DetectorBlinkPeriod; /* 0x7244e0: frames per blink of the "!" (45) */ /* type set in global_types.tsv */
extern int g_DetectorBoxAlpha; /* 0x7244c4: the metal detector box's alpha (80) */ /* type set in global_types.tsv */
extern int g_DetectorBoxWidth; /* 0x7244c8: its middle's width at full fade (16) */ /* type set in global_types.tsv */
extern int g_DetectorBoxX; /* 0x7244cc: its x from the entry (-28) */ /* type set in global_types.tsv */
extern u32 g_DetectorTextColors[2]; /* 0x7244d8: the "!" colour from/to */ /* type set in global_types.tsv */
extern int g_DetectorTextPos[2]; /* 0x7244d0: the blinking "!" from the entry (-44, 6) */ /* type set in global_types.tsv */
extern int g_HealthFadeSteps; /* 0x724390: the health entry's fade steps (8) */ /* type set in global_types.tsv */
extern HudPulse g_HealthPulse; /* 0xa1c180: the health entry's throb (HudElement.data) */ /* type set in global_types.tsv */
extern int g_HudAmmoEntryId; /* 0x724530 */
extern int g_HudAmmoWeapon; /* 0x72452c: the weapon the ammo entry was last registered for */ /* type set in global_types.tsv */
extern u8 *g_HudBuffer; /* 0xa108e4: 0x64000 bytes (guess: HUD) */ /* type set in global_types.tsv */
extern int g_HudFadeSteps; /* 0x724344: frames for the HUD fades (8) */ /* type set in global_types.tsv */
extern int g_HudHideCounter; /* 0xa1bfc4 */ /* type set in global_types.tsv */
extern int g_HudLevelFadeStep; /* 0x724420: HudLevelIcon fade step (4) */ /* type set in global_types.tsv */
extern int g_HudLevelPhaseStep; /* 0x724424: HudLevelIcon glow step (2) */ /* type set in global_types.tsv */
extern u8 g_HudMobyBankActive; /* 0xa1bffc: 1 while the other bank is swapped in */ /* type set in global_types.tsv */
extern u8 *g_HudMobyVars; /* 0xa1bff8: its moby vars (0x1400 bytes) */ /* type set in global_types.tsv */
extern MobyInstance *g_HudMobys; /* 0xa1bfec: the other moby bank (40 mobys, Hud_SwapMobyBank swaps it with g_MobyInstance) */ /* type set in global_types.tsv */
extern MobyInstance *g_HudMobysEnd; /* 0xa1bff4 */ /* type set in global_types.tsv */
extern MobyInstance *g_HudMobysPermEnd; /* 0xa1bff0 */ /* type set in global_types.tsv */
extern int g_HudNextId; /* 0xa1bfc0: the next RegisterHUDCallback handle */ /* type set in global_types.tsv */
extern u8 *g_HudScratchEnd; /* 0xa1bfd4 */ /* type set in global_types.tsv */
extern u8 *g_HudScratchPtr; /* 0xa1bfd0: HudScratch_Alloc's next free byte in g_HudBuffer */ /* type set in global_types.tsv */
extern int g_HudSectionWord; /* 0x72390c */ /* type set in global_types.tsv */
extern float g_HudSlideBounce[24]; /* 0x724260: slide-in curve, overshooting (invented name) */ /* type set in global_types.tsv */
extern float g_HudSlideEase[24]; /* 0x7242c0: slide curve, smooth (invented name) */ /* type set in global_types.tsv */
extern int g_MobyCounterBoxWidths[2]; /* 0x724520: the moby counter box's width for a max under 10 (48) and otherwise (70) */ /* type set in global_types.tsv */
extern u32 g_MobyCounterColors[2]; /* 0x724518: the moby counter text colour from/to */ /* type set in global_types.tsv */
extern int g_MobyCounterX[2]; /* 0x72450c: the moby counter's x on the left (24) and right (480) half */ /* type set in global_types.tsv */
extern int g_NanotechBoxAlpha; /* 0x7243f0: the box's alpha at full fade (20) */ /* type set in global_types.tsv */
extern int g_NanotechBoxRowStep; /* 0x7243dc: the second box row's y step (16) */ /* type set in global_types.tsv */
extern int g_NanotechBoxTile; /* 0x7243ec: the box tile size (32) */ /* type set in global_types.tsv */
extern int g_NanotechBoxY; /* 0x7243e0: the box's y from the cells (-16) */ /* type set in global_types.tsv */
extern s16 g_NanotechCellPos[17][2]; /* 0x724394: the nanotech cell offsets for 4 (from 0), 5 (from 4) and 8 (from 9) cells */ /* type set in global_types.tsv */
extern int g_NanotechY; /* 0x7243d8: the nanotech cells' y (14) */ /* type set in global_types.tsv */
extern int g_OxygenBubbleRows; /* 0x72432c: the bubbles start spread over this many rows */ /* type set in global_types.tsv */
extern float g_OxygenBubbleSize[3]; /* 0x724320: bubble radius for bubbles 0-9, 10-19 (10-29 when moving), the rest */ /* type set in global_types.tsv */
extern Vec4 g_OxygenBubbles[100]; /* 0xa1c1a0: the oxygen meter's bubbles: x, y, x speed, y speed (invented name) */ /* type set in global_types.tsv */
extern int g_OxygenMeterSize[2]; /* 0x724330: the oxygen meter's width and height (42, 192) */ /* type set in global_types.tsv */
extern float g_OxygenTankScale[2]; /* 0x724338: how much of the meter the bubbles fill, x and y (0.5, 0.9) */ /* type set in global_types.tsv */
extern int g_PromptBottom; /* 0xa15c88: where the race best-time boxes end (invented name) */ /* type set in global_types.tsv */
extern char g_PromptText[128]; /* 0xa1c020: the prompt message (GetHelpLen); a 1 byte splits it in two lines */ /* type set in global_types.tsv */
extern int g_PromptY; /* 0x724340: the prompt box's y (32) */ /* type set in global_types.tsv */
extern float g_QuickSelectAngleDelta; /* 0xa1c7e0: the stick angle to the selected slot's centre */ /* type set in global_types.tsv */
extern float g_QuickSelectAspect; /* 0x72437c: the ring's x stretch (1.05) */ /* type set in global_types.tsv */
extern int g_QuickSelectCentre[2]; /* 0x723938: the ring's centre in the quick select (105, 100) */ /* type set in global_types.tsv */
extern int g_QuickSelectCloseTime; /* 0xa1c088: g_MainLoopFrames when the quick select closed */ /* type set in global_types.tsv */
extern u32 g_QuickSelectColors[7]; /* 0x724350: the colours lerped by the fades: name from/to, shadow to, empty ammo from/to, ammo from/to */ /* type set in global_types.tsv */
extern float g_QuickSelectDim; /* 0x724378: alpha factor of the slots not selected (0.5) */ /* type set in global_types.tsv */
extern int g_QuickSelectNameY[2]; /* 0x724370: the name's y offset with ammo (-25) and on two lines without (-15) */ /* type set in global_types.tsv */
extern int g_QuickSelectNameYOneLine; /* 0xa1c7e8: the name's y offset on one line without ammo (never set, 0) */ /* type set in global_types.tsv */
extern int g_QuickSelectPage; /* 0xa1c084: index into g_QuickSelectPages */ /* type set in global_types.tsv */
extern QuickSelectSlot *g_QuickSelectPageTable[2]; /* 0x723b08 */ /* type set in global_types.tsv */
extern QuickSelectSlot **g_QuickSelectPages; /* 0xa1c190: = g_QuickSelectPageTable */ /* type set in global_types.tsv */
extern int g_QuickSelectPulsePeriod; /* 0x72436c: frames per pulse of the highlight (30) */ /* type set in global_types.tsv */
extern float g_QuickSelectRadius; /* 0x72434c: the ring's radius (74) */ /* type set in global_types.tsv */
extern int g_QuickSelectSavedSlot; /* 0xa1c090: the slot selected when it closed */ /* type set in global_types.tsv */
extern int g_QuickSelectSavedTimer; /* 0xa1c08c: the entry's targetValue when it closed */ /* type set in global_types.tsv */
extern u32 g_QuickSelectShadowColor; /* 0xa1c7e4: the text shadow colour at no fade (never set, 0) */ /* type set in global_types.tsv */
extern int g_QuickSelectSize[2]; /* 0x723930: the quick select width and height */ /* type set in global_types.tsv */
extern int g_QuickSelectSlotCnt; /* 0xa1c080: slots on the ring (8) */ /* type set in global_types.tsv */
extern QuickSelectSlot g_QuickSelectSlots[2][8]; /* 0x723980: the quick select page and the clank command page (slots 0-3); [1][4] and [1][5] are their d-pad tables from no selection */ /* type set in global_types.tsv */
extern float g_QuickSelectSnap; /* 0x724348: how far into the next slot the stick must be (0.2) */ /* type set in global_types.tsv */
extern int g_ScreenHeight; /* 0x966b04 */
extern int g_TrickBest; /* 0xa1c7ec: the trick entry's copy of the best score this jump (DAT_0096a3ec) */ /* type set in global_types.tsv */
extern u32 g_TrickColorStill; /* 0x72444c: the trick text colour otherwise */ /* type set in global_types.tsv */
extern u32 g_TrickColors[2]; /* 0x724440: the trick text colour from/to while it fades after a new best */ /* type set in global_types.tsv */
extern int g_TrickComboPoints[15]; /* 0x724478: points per combo (5 combos x 3 flip tiers) */ /* type set in global_types.tsv */
extern int g_TrickCount; /* 0xa1c7f0: its copy of the trick count (DAT_0096a3d0) */ /* type set in global_types.tsv */
extern int g_TrickHistory[4]; /* 0xa1c804: shifted along on each hoverboard landing after 3+ tricks, newest -1 */ /* type set in global_types.tsv */
extern int g_TrickLandingPos[2]; /* 0x724470: the landing score and name text's centre (250, 125) */ /* type set in global_types.tsv */
extern int g_TrickParts[4]; /* 0xa1c7f4: its copies of DAT_0096a3c0..cc */ /* type set in global_types.tsv */
extern int g_TrickPoints; /* 0xa1c814: added to g_RaceScore when the landing text runs out (never set here) */ /* type set in global_types.tsv */
extern int g_TrickPosePos[2]; /* 0x724468: the pose count text's centre (350, 47) */ /* type set in global_types.tsv */
extern int g_TrickScorePos[2]; /* 0x724460: the degrees text's centre in the air (350, 27) */ /* type set in global_types.tsv */
extern int g_TrickShowFrames; /* 0x724428: frames the trick entry's text stays up (20) */ /* type set in global_types.tsv */
extern HudLevelIcon g_UnusedIconState; /* 0xa1c170: UnusedIconHud's data */ /* type set in global_types.tsv */
extern u32 g_WrongWayColors[2]; /* 0x724458: the WRONG WAY text's pulse colours */ /* type set in global_types.tsv */
extern int g_WrongWayPos[2]; /* 0x724450: the WRONG WAY text's centre (256, 180) */ /* type set in global_types.tsv */
extern u8 *g_pMobyVars; /* 0xa390b0: pVar blocks, 0x80 per moby above MobyInstancePermEnd */ /* type set in global_types.tsv */
extern int g_toastMsgTimer; /* 0xa15c80 */

// ---- functions
void SECTION_HEADER_HUD(void);
int Hud_FindIconIndex(int iconId);
void HudEntry_SetIcon(HudElement *entry, u32 iconId);
void HudEntry_Reset(HudElement *entry);
int RegisterHUDCallback(u32 slot, int iconId, void *init, void *update, void *draw, int *value, int maxValue);
int RegisterHeroHealthHUDCallbacks(void);
void HudScratch_Reset(void);
u8 *HudScratch_Alloc(int size);
void Hud_InitBanks(void);
void STUB_000c8810(...);
void STUB_000c8814(...);
void STUB_000c8818(...);
void STUB_000c881c(...);
void Hud_SwapMobyBank(int bank);
void Hud_ResetAllEntries(void);
int Hud_UnregisterById(int id);
HudElement *Hud_SetEntryIconById(int id, u32 iconId);
void Hud_RestoreEntryCallbackById(int id);
void Hud_SetEntryValueById(int id, int value);
void HudEntry_ApplyAlignment(HudElement *entry, int *x, int *y);
void HudEntry_GetSlideOffset(HudElement *entry, int *x, int *y, int time, int delay);
void HudEntry_CalcNumberSize(HudElement *entry);
void HudEntry_InitCounter(HudElement *entry);
void HudEntry_InitCounter32(HudElement *entry);
void Hud_SetEntryPosById(int id, int width, int height, s16 offsX, s16 offsY);
int Hud_ShowEntryById(int id, int time);
int HudIcon_GetAnimFrame(HudIconAnim *anim);
void HudEntry_UpdateCounter(HudElement *entry);
void HudEntry_UpdateCounterSlide(HudElement *entry);
void STUB_000c9820(...);
int HudEntry_DrawLargeNumber(HudElement *entry, int value, int x, int y, int time);
int Draw_LargeNumberHud(HudElement *entry);
int ____Unused_HudEntry_GetSlideField58(HudElement *entry);
void OxygenHud_Init(HudElement *entry);
void OxygenHud_Update(HudElement *entry);
void Hud_DrawTexQuad_v2(int tex, int x, int y, int w, int h, int alpha);
void Hud_DrawTexQuad_v2_Fixed(int tex, int x, int y, int w, int h, int alpha);
int GetIconFrameTex(u32 iconId, int frame);
void Hud_DrawTexQuad_v3(int tex, int x, int y, int w, int h, int alpha);
void DrawFlatOverlay(int x0, int y0, int x1, int y1, u32 color, int mode);
int DrawOxygenMeter(HudElement *entry);
void Moby185Hud_Init(HudElement *entry);
void Moby185Hud_Update(HudElement *entry);
int Draw_Moby185Meter(HudElement *entry);
void PromptHud_Init(HudElement *entry);
void PromptHud_Update(HudElement *entry);
void Hud_DrawTexQuad(int tex, int x, int y, int w, int h, int alpha);
void Hud_DrawTexHeaderQuad(u8 *header, int x, int y, int w, int h, int alpha);
void DrawSprite(int tex, int x, int y, int w, int h, int alpha);
void Hud_DrawTextBox(int x, int y, int w, int h, int alpha);
void Hud_DrawTextBoxCentered(int x, int y, u32 color, char *text);
int Draw_PromptMsg(HudElement *entry);
char *GetHelpLen(char *text);
void Moby849Hud_Init(HudElement *entry);
void Moby849Hud_Update(HudElement *entry);
void DrawFlatOverlay_Fixed(int x0, int y0, int x1, int y1, u32 color, int mode);
int Draw_Moby849Meter(HudElement *entry);
void QuickSelectHud_Init(HudElement *entry);
void UpdateQuickSelect(HudElement *entry);
void HudEntry_DrawIcon(HudElement *entry, int tex, int x, int y, u32 flags, int alpha);
int Draw_QuickSelectHud(HudElement *entry);
void ClankCommandHud_Init(HudElement *entry);
void ClankCommandHud_Update(HudElement *entry);
int Draw_ClankCommandHud(HudElement *entry);
void HealthHud_Init(HudElement *entry);
void HealthHud_Update(HudElement *entry);
int Draw_NanotechUI(HudElement *entry);
void AmmoHud_Init(HudElement *entry);
void BoltHud_Init(HudElement *entry);
void BoltHud_Update(HudElement *entry);
int Draw_BoltCountUI(HudElement *entry);
void UnusedIconHud_Init(HudElement *entry);
void UnusedIconHud_Update(HudElement *entry);
int UnusedIconHud_Draw(HudElement *entry);
int Draw_MobyMeterHud(HudElement *entry);
void TrickHud_Init(HudElement *entry);
void TrickHud_Update(HudElement *entry);
void Hud_DrawEffectTexQuad(int tex, int x, int y, int w, int h, int alpha);
int Draw_HoverboardTrickHud(HudElement *entry);
int Draw_MobyHealthBarHud(HudElement *entry);
void MetalDetectorHud_Update(HudElement *entry);
int Draw_MetalDetectorHud(HudElement *entry);
int Draw_GiantClankHealthHUD(HudElement *entry);
int Draw_AmmoCounter(HudElement *entry);
void MobyCounterHud_Init(HudElement *entry);
int Draw_MobyCounterHud(HudElement *entry);
int UpdateAllGameplayHUD(int update);
void Hud_ClearAmmoEntry(void);
void Hud_ResetAllEntriesHidden(void);
void Hud_DecHideCounter(void);
void DrawGameplayHud(void);
void RaceHud_Init(undefined8 param_1);
void RaceHud_Update(undefined8 param_1);
void AmmoHud_Update(undefined8 param_1);
undefined4 Draw_RaceLapPlaceHud(int param_1);
undefined4 Draw_RaceTimeScoreHud(int param_1);
int Hud_GetTexIndex(int idx);
void Hud_DrawTexQuad4Pt (undefined8 param_1,int param_2,int param_3,int param_4,int param_5,int param_6, int param_7,int param_8);
void Hud_DrawEffectTexQuad4Pt(longlong param_1);
void Hud_DrawTexQuadF(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,float param_7,float param_8,void *param_9,int param_10);
void Hud_DrawEffectTexQuadUV (longlong param_1,RsxCmd param_2,ulonglong param_3,int param_4,longlong param_5, RsxCmd param_6,ulonglong param_7,int param_8);
void Hud_DrawTexQuadUV (undefined8 param_1,RsxCmd param_2,ulonglong param_3,uint param_4,uint param_5, int param_6,longlong param_7,RsxCmd param_8);
void Hud_DrawEffectTexHeaderQuadUV(int param_1);
void Hud_DrawTexQuadUV_Fixed(undefined8 param_1,int param_2,int param_3);
void Hud_DrawTexQuadF_v2 (double param_1,double param_2,double param_3,double param_4,double param_5, double param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9, undefined4 param_10,undefined4 param_11);
void Hud_DrawTexQuadF_v3 (double param_1,double param_2,double param_3,double param_4,double param_5);
void Hud_DrawTexQuadF_v4(float param_1,float param_2,float param_3,float param_4,float param_5,int param_6,int param_7,int param_8);
void Hud_DrawTexQuadF_v4_Fixed(float param_1,float param_2,float param_3,float param_4,float param_5,int param_6,int param_7,int param_8);
void DrawSprite2(longlong param_1,RsxCmd param_2,ulonglong param_3,RsxCmd param_4, ulonglong param_5,RsxCmd param_6,ulonglong param_7,RsxCmd param_8);
void STUB_000d8658(...);
void Hud_DrawEffectTexLine (RsxCmd param_1,ulonglong param_2,RsxCmd param_3,ulonglong param_4,ulonglong param_5, int param_6);
void STUB_000d88e0(...);
