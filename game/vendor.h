#pragma once
// game/vendor.h
#include "types.h"
#include "idol/idol_draw.h"

// ---- types
struct DirectionalLight {
    struct Vec4 color1;
    struct Vec4 direction1;
    struct Vec4 color2;
    struct Vec4 direction2;
};

/* how preview moby 3 (the selected item again) sits (0x739b50, 0x30 bytes an item; names invented) */
struct VendorCopyView {
    struct Vec4 localOffset; /* 0x00  along the moby's own axes, after its transform */
    struct Vec4 rotation;    /* 0x10  z is g_VendorSpin */
    struct Vec4 offset;      /* 0x20  added to g_VendorSpinOffset */
};
_Static_assert(sizeof(struct VendorCopyView) == 0x30, "VendorCopyView");

/* one item on the vendor's list (g_VendorItems, 16 of them; layout from use) */
struct VendorItem {
    int item;           /* 0x0  item id */
    u8 isAmmo;          /* 0x4  1: ammo for the weapon, not the weapon */
    u8 unk5;            /* 0x5 */
    u8 _pad6[6];
    int price;          /* 0xc  from the item info table */
};

/* an item's second preview part (0x739220, 0x40 bytes an item; field names invented) */
struct VendorItemModel {
    struct Vec4 rotation;    /* 0x00  z is g_VendorSpin */
    struct Vec4 offset;      /* 0x10  added to g_VendorSpinOffset */
    int extraClass;          /* 0x20  oClass of preview moby 2, 0 none */
    u8 unk24[0x1c];
};
_Static_assert(sizeof(struct VendorItemModel) == 0x40, "VendorItemModel");

/* how an item sits in the vendor preview (0x738b30, 0x30 bytes an item; field names invented) */
struct VendorItemView {
    struct Vec4 rotation;    /* 0x00  z on top of the vendor moby's */
    float offsetX;           /* 0x10 */
    float offsetY;           /* 0x14 */
    float offsetZ;           /* 0x18 */
    float weaponLift;        /* 0x1c  added to z for a weapon (not ammo), twice with UnlockableItems.persuader */
    u8 unk20[0x10];          /* 0x20 */
};
_Static_assert(sizeof(struct VendorItemView) == 0x30, "VendorItemView");

/* an item's prices and ammo (0x737d30, 0x18 bytes an item, read through VendorAmmoInfo; field
   names invented from use in vendor.cpp) */
struct WeaponAmmoInfo {
    int price;               /* 0x00 */
    int priceAlt;            /* 0x04  the price while UnlockableItems.persuader is set */
    u16 ammoPrice;           /* 0x08  bolts per unit of ammo at a vendor; 0: the item uses no ammo */
    u16 pdaAmmoPrice;        /* 0x0a  the same through the PDA */
    u16 unk0c;               /* 0x0c */
    u16 maxAmmo;             /* 0x0e */
    u8 unk10[8];             /* 0x10 */
};
_Static_assert(sizeof(struct WeaponAmmoInfo) == 0x18, "WeaponAmmoInfo");

// ---- globals
extern undefined4 DAT_00080a00; /* 0x80a00 */
extern undefined4 DAT_0016fc04; /* 0x16fc04 */
extern undefined4 DAT_00172c20; /* 0x172c20 */
extern undefined4 DAT_00653f08; /* no defined data */
extern undefined4 DAT_00653fa4; /* no defined data */
extern undefined4 DAT_00653fac; /* no defined data */
extern undefined4 DAT_0071efb4; /* 0x71efb4 */
extern undefined4 DAT_00721000; /* no defined data */
extern undefined4 DAT_00721038; /* no defined data */
extern undefined4 DAT_00735580; /* 0x735580 */
extern undefined4 DAT_00737d30; /* no defined data */
extern undefined4 DAT_00737d34; /* no defined data */
extern undefined2 DAT_00737d38; /* 0x737d38 */
extern undefined4 DAT_00737d3a; /* no defined data */
extern undefined4 DAT_007387cc; /* 0x7387cc */
extern undefined4 DAT_00739240; /* no defined data */
extern undefined4 DAT_0073a318; /* no defined data */
extern undefined4 DAT_0073a378; /* no defined data */
extern undefined4 DAT_0073a478; /* no defined data */
extern undefined4 DAT_0073a578; /* 0x73a578 */
extern undefined4 DAT_0073a57c; /* no defined data */
extern undefined4 DAT_0073a580; /* no defined data */
extern undefined4 DAT_0073a584; /* no defined data */
extern undefined4 DAT_0073a588; /* no defined data */
extern undefined4 DAT_0073a78c; /* no defined data */
extern undefined4 DAT_0073a7dc; /* 0x73a7dc */
extern undefined4 DAT_00e5a658; /* 0xe5a658 */
extern undefined4 DAT_00e5a65c; /* 0xe5a65c */
extern undefined4 DAT_00e5a668; /* 0xe5a668 */
extern undefined4 DAT_00e5a694; /* 0xe5a694 */
extern undefined4 DAT_00e5a698; /* 0xe5a698 */
extern undefined4 DAT_00e5a6c4; /* 0xe5a6c4 */
extern undefined4 DAT_00e5a6c8; /* 0xe5a6c8 */
extern undefined4 DAT_00e5a6cc; /* 0xe5a6cc */
extern undefined4 DAT_00e5a724; /* no defined data */
extern undefined4 DAT_00e5a874; /* 0xe5a874 */
extern undefined4 DAT_00e5a8b4; /* 0xe5a8b4 */
extern undefined4 DAT_00e5a8f4; /* 0xe5a8f4 */
extern undefined4 DAT_00e5a934; /* 0xe5a934 */
extern undefined4 DAT_00e5a990; /* no defined data */
extern undefined1 DAT_00e5a9d0; /* 0xe5a9d0 */
extern undefined4 DAT_00e5a9dc; /* no defined data */
extern undefined4 DAT_00e5a9f8; /* no defined data */
extern undefined4 DAT_00e5aa14; /* 0xe5aa14 */
extern undefined4 DAT_00e5aa18; /* 0xe5aa18 */
extern undefined4 DAT_00e5aa1c; /* 0xe5aa1c */
extern undefined4 DAT_00e5aa20; /* 0xe5aa20 */
extern undefined4 DAT_00e5aa24; /* 0xe5aa24 */
extern undefined4 DAT_00e5aa28; /* 0xe5aa28 */
extern undefined4 DAT_00e5aa2c; /* 0xe5aa2c */
extern undefined4 DAT_00e5aa30; /* 0xe5aa30 */
extern undefined1 DAT_00e5aa34; /* 0xe5aa34 */
extern undefined1 DAT_00e5aa35; /* 0xe5aa35 */
extern undefined1 DAT_00e5aa38; /* 0xe5aa38 */
extern undefined1 DAT_00e5aa40; /* 0xe5aa40 */
extern pointer32 PTR_Draw_AmmoCounter_00705888; /* 0x705888 */
extern undefined4 _DAT_00e5a970; /* direct read */
extern undefined4 _DAT_00e5a980; /* direct read */
extern int g_AmmoBought[37]; /* 0xa0f51c: ammo bought at vendors per weapon (invented name; cleared by boot) */ /* type set in global_types.tsv */
extern MobyInstance *g_GadgetPickupMoby; /* 0xe5a678 */ /* type set in global_types.tsv */
extern Vec4 g_GadgetPickupOffset; /* 0x73a2f0: where a gadget pickup cutscene plays, in the pickup moby's space */ /* type set in global_types.tsv */
extern undefined4 g_OpenVendorState; /* 0xe5a650 */
extern int g_VendorAmmoHud; /* 0xe5a6a0: HUD entry of the selected item's ammo, -1 = none */ /* type set in global_types.tsv */
extern int g_VendorBoltHud; /* 0xe5a6a4 */ /* type set in global_types.tsv */
extern int g_VendorBoughtItem; /* 0xe5a698: the item whose cutscene plays, -1 = none */ /* type set in global_types.tsv */
extern u8 *g_VendorBuf; /* 0xe5a660: the vendor's load buffer (g_NpcBuffer) */ /* type set in global_types.tsv */
extern u8 *g_VendorBufEnd; /* 0xe5a664 */ /* type set in global_types.tsv */
extern Vec4 g_VendorCamOffset; /* 0x738840: the camera's place in the vendor moby's space */ /* type set in global_types.tsv */
extern Vec4 g_VendorCamPos; /* 0xe5a6b0 */ /* type set in global_types.tsv */
extern Vec4 g_VendorCamRot; /* 0xe5a6c0 */ /* type set in global_types.tsv */
extern u8 g_VendorConfirmed; /* 0xe5aa41: the purchase box was confirmed (not cancelled) */ /* type set in global_types.tsv */
extern VendorCopyView g_VendorCopyViews[]; /* 0x739b50: how preview moby 3 (the item's copy) sits */ /* type set in global_types.tsv */
extern undefined4 g_VendorCursor; /* 0xe5a69c */
extern float g_VendorCutsceneMtx[12]; /* 0xe5a6d0: from g_VendorCutsceneRot */ /* type set in global_types.tsv */
extern Vec4 g_VendorCutsceneOffset; /* 0x73a2e0: where the weapon cutscene plays, in the vendor moby's space */ /* type set in global_types.tsv */
extern Vec4 g_VendorCutscenePos; /* 0xe5a710 */ /* type set in global_types.tsv */
extern Vec4 g_VendorCutsceneRot; /* 0xe5a700 */ /* type set in global_types.tsv */
extern MobyInstance *g_VendorDude; /* 0xe5a674: the vendor dude on the vendor screen */ /* type set in global_types.tsv */
extern bool g_VendorDudeActive; /* 0xe5a9d0 */ /* type set in global_types.tsv */
extern int g_VendorDudeLastChat; /* 0xe5a680: g_MainLoopFrames of his last chatter */ /* type set in global_types.tsv */
extern int g_VendorDudeLine; /* 0xe5a68c: which of the two idle lines (0, 1) */ /* type set in global_types.tsv */
extern u8 g_VendorDudeLoaded; /* 0xe5a9d1: the dude's data is in; spawn him */ /* type set in global_types.tsv */
extern Manipulator g_VendorDudeManip; /* 0xe5a990: on the vendor moby's root joint for the big-head cheat */ /* type set in global_types.tsv */
extern Vec4 g_VendorDudeOffset; /* 0x738860: the vendor dude's place on the vendor moby (x, z changed on a 4:3 screen) */ /* type set in global_types.tsv */
extern bool g_VendorDudeSpeechPending; /* 0xe5a9d4 */ /* type set in global_types.tsv */
extern bool g_VendorDudeSpeechReady; /* 0xe5a9d5 */ /* type set in global_types.tsv */
extern int g_VendorDudeTimer; /* 0xe5a684: frames in the idle states */ /* type set in global_types.tsv */
extern int g_VendorDudeTriggers[3][2]; /* 0x73a300: the speech frame of animations 4/5/6 (+3 * line) */ /* type set in global_types.tsv */
extern int g_VendorExitTimer; /* 0xe5a940: frames until the vendor closes after triangle */ /* type set in global_types.tsv */
extern u8 g_VendorExiting; /* 0xe5a944 */ /* type set in global_types.tsv */
extern Vec4 g_VendorHeroOffset; /* 0x738850: where the hero is put back, in the vendor moby's space */ /* type set in global_types.tsv */
extern int g_VendorHoldLess; /* 0xe5a954: frames left held on the quantity box */ /* type set in global_types.tsv */
extern int g_VendorHoldMore; /* 0xe5a958: frames right held */ /* type set in global_types.tsv */
extern VendorItemModel g_VendorItemModels[]; /* 0x739220: an item's second preview part */ /* type set in global_types.tsv */
extern Vec4 g_VendorItemNarrowOffset[]; /* 0x7388d0: extra preview offset per item on a 4:3 screen */ /* type set in global_types.tsv */
extern VendorItemView g_VendorItemViews[]; /* 0x738b30: how each item sits in the preview */ /* type set in global_types.tsv */
extern VendorItem g_VendorItems[16]; /* 0xe5a720 */ /* type set in global_types.tsv */
extern int g_VendorItemsCnt; /* 0xe5a820 */ /* type set in global_types.tsv */
extern int g_VendorLanguage; /* 0xe5a688 */ /* type set in global_types.tsv */
extern Vec4 g_VendorLightColor; /* 0x7388c0 */ /* type set in global_types.tsv */
extern Vec4 g_VendorLightDir; /* 0x7388b0 */ /* type set in global_types.tsv */
extern Manipulator g_VendorManips[4]; /* 0xe5a840: on joints 20..23 of the vendor moby */ /* type set in global_types.tsv */
extern int g_VendorMenuState; /* 0xe5a6ac: the purchase box: 0 closed, 1 opening, 2 open, 3 closing, 4 closed this frame */ /* type set in global_types.tsv */
extern MobyInstance *g_VendorMoby; /* 0xe5a66c */ /* type set in global_types.tsv */
extern u8 g_VendorNarrow; /* 0xe5a9d2: the screen is 4:3 (set once, at the first vendor) */ /* type set in global_types.tsv */
extern int g_VendorOpenTimer; /* 0xe5a948 */ /* type set in global_types.tsv */
extern u8 g_VendorOpening; /* 0xe5a94c */ /* type set in global_types.tsv */
extern u8 g_VendorPickQuantity; /* 0xe5aa42: the purchase box lets you pick a quantity (ammo you can afford) */ /* type set in global_types.tsv */
extern u8 g_VendorPreviewDirty; /* 0xe5a9d3: cleared once the preview is spawned (invented name) */ /* type set in global_types.tsv */
extern Vec4 g_VendorPreviewOffset; /* 0x738870: the preview's offset from the vendor moby, w its w */ /* type set in global_types.tsv */
extern MobyInstance *g_VendorPreviews; /* 0xe5a670: the vendor screen's own mobies; [1] the selected item, [2] its second part, [3] the item again (hidden), [4] and [5] the screen's */ /* type set in global_types.tsv */
extern int g_VendorQuantity; /* 0xe5a95c: units of ammo to buy */ /* type set in global_types.tsv */
extern int g_VendorSavedIdol1a78; /* 0xe5a830: IdolDraw.unk1a78, zeroed while the vendor is open */ /* type set in global_types.tsv */
extern Vec4 g_VendorSavedOrient[3]; /* 0xe5a960: GameCamera.orientMtx forward/right/up while the vendor is open */ /* type set in global_types.tsv */
extern Vec4 g_VendorScreen2Offset; /* 0x7388a0: preview moby 5 */ /* type set in global_types.tsv */
extern Vec4 g_VendorScreenOffset; /* 0x738890: preview moby 0 (y depends on the video mode) */ /* type set in global_types.tsv */
extern int g_VendorScrollPos; /* 0xe5a694 */ /* type set in global_types.tsv */
extern char *g_VendorScrollText; /* 0xe5a67c */ /* type set in global_types.tsv */
extern int g_VendorSelected; /* 0xe5a6a8: index in g_VendorItems */ /* type set in global_types.tsv */
extern float g_VendorSpin; /* 0xe5a950: angle of the spinning preview parts */ /* type set in global_types.tsv */
extern Vec4 g_VendorSpinOffset; /* 0x738880: where the spinning preview parts (mobies 2 and 3) sit */ /* type set in global_types.tsv */
extern int g_VendorStateFrames; /* 0xe5a654: frames in the current g_OpenVendorState */ /* type set in global_types.tsv */
extern int g_WeaponCutscenes[]; /* 0x73a240: the weapon cutscene of each item */ /* type set in global_types.tsv */
extern undefined4 g_boltCount; /* 0x969ca0 */
extern int g_lastVendorWasPda; /* 0xe5a690 */ /* type set in global_types.tsv */
extern char g_purchasableVendorItems[12]; /* 0x71fb2c */

// ---- functions
void SECTION_HEADER_VENDOR(void);
void ProjectBoxToScreenInt(Vec4 corner, Vec4 opposite, int *width, int *height, int *left, int *top);
void ProjectBoxToScreen(Vec4 corner, Vec4 opposite, float *width, float *height, float *left, float *top);
void Vendor_ParseMobySeqs(void);
void LoadVendorItems(char ammoOnly);
void Spawn_Moby11_Vendor(MobyInstance *moby);
void Vendor_EndWeaponCutscene(int keepCamera);
int Vendor_StartWeaponCutscene(void);
int StartGadgetPickupCutscene(MobyInstance *moby, int item);
void Vendor_RestoreHero(void);
void Vendor_SetScrollText(char *text);
void Vendor_UpdateDude(MobyInstance *moby);
void Vendor_PlayDudeSpeech(int event);
void Vendor_SpawnPreviewMoby(void);
void PurchaseHandler(void);
void Vendor_PreUpdate(void);
void DrawVendorHintFrame(double param_1,byte *param_2,int param_3,int param_4);
void Vendor_DrawScrollText(void);
void DrawVendorDude(void);
int Vendor_FormatBolts(char *buf,int value);
void DrawWeaponIcons(void);
void DrawWeaponStrings(void);
void DrawBuyButton(void);
void DrawExitButton(void);
void Vendor_DrawItemInfo(void);
void Vendor_DrawFlickerText(undefined8 param_1,double param_2,longlong param_3);
void Vendor_SetupScreenRender(double param_1,uint param_2,uint param_3);
void Vendor_ResetHUDPass(void);
void Vendor_HudUpdate(MobyInstance *moby);
void Vendor_DrawMobyHighlight(undefined8 param_1);
void Vendor_DrawScreen(undefined8 param_1);
void Vendor_DrawScrollingOverlay(void);
void Vendor_PostUpdate(void);
