#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "game/vendor.h"
#include "game/boot.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/crt0.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/lights.h"
#include "game/loaders.h"
#include "game/main.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/pad.h"
#include "game/partproc.h"
#include "game/partupd.h"
#include "game/pause.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/camera5.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"
#include "idol/idol.h"
#include "idol/idol_draw.h"
#include "idol/idoldraw_ps3.h"
#include "idol/mUnk.h"
#include "idol/tiefunc.h"
#include "sdk/libscream/common/api.h"
#include "idol/fastinline.h"
#include <cell/gcm/gcm_macros.h>
#include <cell/gcm/gcm_enum.h>
// game/vendor.cpp -- reconstructed from NPEA00385 EBOOT
// 33 functions, 0x16a0d8-0x174b0c: the weapon vendor. Its item list, the purchase and gadget
// cutscenes, the vendor dude, and the vendor screen with its scrolling text and item views.

// 0x016a0d8 (0x14 bytes)
void SECTION_HEADER_VENDOR(void)
{
    DAT_007387cc = 0x10000;
}

/* a point's screen position through the renderer's view-projection matrix: x scaled by the clip
   scale (1.3 more on widescreen), y flipped, both before the quarter scale */
static inline void ProjectToScreen(Vec4 *point, float *screenX, float *screenY)
{
    IdolDraw *idol = (IdolDraw *)(uintptr_t)g_pIdolDraw;
    Mtx4 *mtx = &idol->viewProjMtx;
    float inv = 1.0f / (mtx->v0.w * point->x + mtx->v1.w * point->y + mtx->v2.w * point->z + mtx->v3.w * 1.0f);
    float wide = idol->widescreen != 0 ? 1.3f : 1.0f;

    *screenX = g_ViewContext.ihmgScale.x * wide * ((mtx->v0.x * point->x + mtx->v1.x * point->y + mtx->v2.x * point->z + mtx->v3.x * 1.0f) * inv);
    *screenY = -((mtx->v0.y * point->x + mtx->v1.y * point->y + mtx->v2.y * point->z + mtx->v3.y * 1.0f) * inv) * g_ViewContext.ihmgScale.y;
}

// 0x016a108 (0x288 bytes)
/* ProjectBoxToScreen with each result through FastDoubleToInt */
void ProjectBoxToScreenInt(Vec4 corner, Vec4 opposite, int *width, int *height, int *left, int *top)
{
    float cornerX;
    float cornerY;
    float oppositeX;
    float oppositeY;

    ProjectToScreen(&corner, &cornerX, &cornerY);
    ProjectToScreen(&opposite, &oppositeX, &oppositeY);

    *left = FastDoubleToInt(cornerX * 0.25f + 256.0f);
    *top = FastDoubleToInt(cornerY * 0.25f + 208.0f);
    *width = FastDoubleToInt((oppositeX - cornerX) * 0.25f);
    *height = FastDoubleToInt((oppositeY - cornerY) * 0.25f);
}

// 0x016a3a8 (0x1fc bytes)
/* corner and opposite on the 512x416 screen: corner's position and the box's size */
void ProjectBoxToScreen(Vec4 corner, Vec4 opposite, float *width, float *height, float *left, float *top)
{
    float cornerX;
    float cornerY;
    float oppositeX;
    float oppositeY;

    ProjectToScreen(&corner, &cornerX, &cornerY);
    ProjectToScreen(&opposite, &oppositeX, &oppositeY);

    *left = cornerX * 0.25f + 256.0f;
    *top = cornerY * 0.25f + 208.0f;
    *width = (oppositeX - cornerX) * 0.25f;
    *height = (oppositeY - cornerY) * 0.25f;
}

// 0x016a5a4 (0xb4 bytes)
/* the vendor screen's moby class (lookup slot 12) gets its 16 animation sequences from the loaded
   vendor data, whose first 16 words are offsets to them (0 = none) */
void Vendor_ParseMobySeqs(void)
{
    MobyClass *mobyClass = MobyClasses[((u8 *)&MobyClassLookup)[12]];
    u8 *data = *(u8 **)&DAT_00e5a668;
    int *offsets = (int *)data;

    for (int seq = 0; seq < 16; seq++) {
        if (offsets[seq] != 0) {
            mobyClass->seqs[seq] = (MobySeq *)(data + offsets[seq]);
            ParseMobySeq(mobyClass, seq);
        }
    }
}

/* the price of item in the item info table (0x735580, 0x14 bytes an item) */
static inline int VendorItemPrice(int item)
{
    return ((int *)&DAT_00735580)[item * 5];
}

static inline WeaponAmmoInfo *VendorAmmoInfo(int item)
{
    return (WeaponAmmoInfo *)((u8 *)&DAT_00737d30 + item * sizeof(WeaponAmmoInfo));
}

/* the item's entry in the item table (0x721000) */
static inline GadgetInfo *VendorGadget(int item)
{
    return (GadgetInfo *)((u8 *)&DAT_00721000 + item * sizeof(GadgetInfo));
}

/* the weapon's current ammo */
static inline int *VendorAmmo(int item)
{
    return (int *)((u8 *)&currentAmmoArray + item * 4);
}

/* item uses ammo (it has a price per unit of ammo) */
static inline bool VendorHasAmmo(int item)
{
    return VendorAmmoInfo(item)->ammoPrice != 0;
}

static inline void VendorAddItem(int item, u8 isAmmo)
{
    VendorItem *entry = &g_VendorItems[g_VendorItemsCnt];

    entry->item = item;
    entry->isAmmo = isAmmo;
    entry->unk5 = 0;
    entry->price = VendorItemPrice(item);
    g_VendorItemsCnt++;
}

// 0x016a658 (0x28c bytes)
/* The vendor's list from g_purchasableVendorItems (up to 12, ended by -1): items to buy unless
   ammoOnly (the PDA), entries flagged 0x40 as ammo for weapons that use it; then ammo for every
   unlocked weapon (of 37) that uses it and isn't on the list yet. */
void LoadVendorItems(char ammoOnly)
{
    int count = 0;

    while (count < 12 && g_purchasableVendorItems[count] != -1) {
        count++;
    }

    g_VendorItemsCnt = 0;

    for (int i = 0; i < count; i++) {
        if (g_purchasableVendorItems[i] == -1) {
            continue;
        }

        int item = (u8)g_purchasableVendorItems[i] & 0x3f;

        if ((g_purchasableVendorItems[i] & 0x40) == 0) {
            if (ammoOnly == 0) {
                VendorAddItem(item, 0);
            }
        }
        else if (VendorHasAmmo(item)) {
            VendorAddItem(item, 1);
        }
    }

    for (int item = 0; item < 37; item++) {
        if (((u8 *)&UnlockableItems)[item] == 0 || !VendorHasAmmo(item)) {
            continue;
        }

        int j = 0;

        while (j < g_VendorItemsCnt && g_VendorItems[j].item != item) {
            j++;
        }

        if (j >= g_VendorItemsCnt) {
            VendorAddItem(item, 1);
        }
    }
}

// 0x016a8f0 (0x740 bytes)
/* Opens the vendor: creates its moby in front of the camera when called from the PDA (moby
   NULL), clears its state, pauses the music, builds the item list (ammo only from the PDA), puts
   up the bolt and ammo counters, hides the hero, places the camera (not from the PDA), and sets
   directional light 14 for the vendor moby. */
void Spawn_Moby11_Vendor(MobyInstance *moby)
{
    IdolDraw *idol = (IdolDraw *)(uintptr_t)g_pIdolDraw;

    if (DAT_00e5aa38 == 0) {
        g_VendorNarrow = idol->widescreen == 0;
        DAT_00e5aa38 = 1;
        DAT_00e5aa40 = g_VendorNarrow;
    }

    g_VendorSavedIdol1a78 = idol->unk1a78;
    idol->unk1a78 = 0;

    FastMemSet(&g_OpenVendorState, 0, 0x1e0);
    FastMemSet(&DAT_00e5a990, 0, 0x40);

    if (moby == NULL) {
        moby = CreateMoby(VENDOR);
        moby->drawDistance = 0x40;
        moby->pos.x = GameCamera.posX + g_VendorCamOffset.x;
        moby->pos.y = GameCamera.posY;
        moby->rotation.w = 0.0f;
        moby->rotation.y = 0.0f;
        moby->rotation.x = 0.0f;
        moby->rotation.z = 3.1415927f;
        moby->pos.z = GameCamera.posZ - g_VendorCamOffset.z;
        UpdateMobyTransform(moby);
        moby->state = 3;
        g_lastVendorWasPda = 1;
    }

    g_VendorLanguage = 0;

    if (g_Language - 1 >= 0) {
        g_VendorLanguage = g_Language - 1;
    }

    DAT_00e5a694 = 0;
    g_VendorSelected = 0;
    g_VendorAmmoHud = -1;
    g_VendorBoltHud = -1;
    DAT_00e5a698 = -1;
    g_VendorExiting = 0;
    g_VendorOpening = 0;
    g_VendorMenuState = 0;
    g_VendorQuantity = 0;
    g_VendorSpin = 0.0f;

    FUN_0060bc8c(0x1d);
    music_Pause(0);
    STUB_00505d20();
    LoadVendorItems(g_lastVendorWasPda != 0);

    int middle = g_VendorItemsCnt / 2;
    int first = g_VendorItemsCnt < 3 ? 1 : middle;

    g_VendorSelected = middle;
    g_VendorCursor = (first - g_VendorSelected) * 40;

    Hud_ResetAllEntriesHidden();
    g_VendorBoltHud = RegisterHUDCallback(0x12, 0x754e, &PTR_BoltHud_Init_00705810, &PTR_BoltHud_Update_00705818, &PTR_Draw_BoltCountUI_00705820, (int *)&g_boltCount, 9999999);

    VendorItem *selected = &g_VendorItems[g_VendorSelected];

    if (selected->isAmmo == 1) {
        int maxAmmo = VendorAmmoInfo(selected->item)->maxAmmo;

        g_VendorAmmoHud = RegisterHUDCallback(0x30, selected->item + 60000, &PTR_AmmoHud_Init_00705808, &PTR_HudEntry_UpdateCounter_007056c8, &PTR_Draw_AmmoCounter_00705888, VendorAmmo(selected->item), maxAmmo);
    }

    g_CutscenePlaying = 1;
    g_VendorBufEnd = (u8 *)(uintptr_t)g_NpcBuffer + 0x100000;
    g_OpenVendorState = 0;
    g_VendorDrawMode = 0;
    g_VendorBuf = (u8 *)(uintptr_t)g_NpcBuffer;
    g_VendorMoby = moby;
    PlayMobySound(3, 0, moby);

    if (g_lastVendorWasPda == 0) {
        FadeToBlack(4);
    }

    Help_Kill();
    SceneScreenFade = 1.0f;
    g_SceneFlash = 0.0f;
    g_gameMode = GAME_MODE_VENDOR;
    TransitionMovement(100, 1);
    DAT_0096bd8c = 1;
    g_heroInvisible = 1;
    Hero_MakeInvisible();

    if (g_lastVendorWasPda == 0) {
        MB_SetAnimationNoBlend(moby, 2, 0);
    }
    else {
        MB_SetAnimationNoBlend(moby, 3, 0);
    }

    moby->unk58 = DAT_0071f408 * 0.5f;

    Mtx4 *mtx = &g_VendorMoby->transform;

    if (g_lastVendorWasPda == 0) {
        Vec4 *offset = &g_VendorCamOffset;

        g_VendorCamPos.w = mtx->v0.w * offset->x + mtx->v1.w * offset->y + mtx->v2.w * offset->z + offset->w;
        g_VendorCamPos.x = mtx->v0.x * offset->x + mtx->v1.x * offset->y + mtx->v2.x * offset->z + g_VendorMoby->pos.x;
        g_VendorCamPos.y = mtx->v0.y * offset->x + mtx->v1.y * offset->y + mtx->v2.y * offset->z + g_VendorMoby->pos.y;
        g_VendorCamPos.z = mtx->v0.z * offset->x + mtx->v1.z * offset->y + mtx->v2.z * offset->z + g_VendorMoby->pos.z;
        g_VendorCamRot.z = FastWrapRot(g_VendorMoby->rotation.z, 3.1415927f);
        SetCameraPosition(&g_VendorCamPos.x, &g_VendorCamRot.x, 1, 0, 0);
        Camera_SetMobyDrivenTargetPos(&g_VendorCamPos.x);
        Camera_SetMobyDrivenTargetRot(&g_VendorCamRot.x);
    }

    DirectionalLight *light = &DirectionalLights[14];
    Vec4 *dir = &g_VendorLightDir;

    light->direction1.x = mtx->v0.x * dir->x + mtx->v1.x * dir->y + mtx->v2.x * dir->z;
    light->direction1.y = mtx->v0.y * dir->x + mtx->v1.y * dir->y + mtx->v2.y * dir->z;
    light->direction1.z = mtx->v0.z * dir->x + mtx->v1.z * dir->y + mtx->v2.z * dir->z;
    light->direction1.w = mtx->v0.w * dir->x + mtx->v1.w * dir->y + mtx->v2.w * dir->z + dir->w;
    light->color1 = g_VendorLightColor;
    memset(&light->direction2, 0, 0x10);
    memset(&light->color2, 0, 0x10);

    for (int i = 0; i < 4; i++) {
        if (g_VendorManips[i].state == 0) {
            AttachManipulator(g_VendorMoby, i + 20, &g_VendorManips[i]);
        }
    }

    if (g_VendorItemsCnt < 8) {
        *(float *)&DAT_00e5a8f4 = (float)((7 - g_VendorItemsCnt) * 0x681);
        *(float *)&DAT_00e5a934 = (float)((7 - g_VendorItemsCnt) * -0x681);
    }
    else {
        *(float *)&DAT_00e5a8f4 = 0.0f;
        *(float *)&DAT_00e5a934 = 0.0f;
    }

    DAT_00e5a9d0 = 0;
    g_VendorDudeLoaded = 0;
    DAT_00e5a874 = DAT_00e5a8f4;
    DAT_00e5a8b4 = DAT_00e5a934;
}

/* offset (in moby's space) moved into the world: turned by its transform and put at its
   position, w from the transform plus offset's own */
static inline void MobyPoint(MobyInstance *moby, Vec4 *offset, Vec4 *out)
{
    Mtx4 *mtx = &moby->transform;

    out->x = mtx->v0.x * offset->x + mtx->v1.x * offset->y + mtx->v2.x * offset->z + moby->pos.x;
    out->y = mtx->v0.y * offset->x + mtx->v1.y * offset->y + mtx->v2.y * offset->z + moby->pos.y;
    out->z = mtx->v0.z * offset->x + mtx->v1.z * offset->y + mtx->v2.z * offset->z + moby->pos.z;
    out->w = mtx->v0.w * offset->x + mtx->v1.w * offset->y + mtx->v2.w * offset->z + offset->w;
}

// 0x016b038 (0x2ac bytes)
/* Closes the vendor: the counters down, normal play again with the hero visible and (not from
   the PDA) warped in front of the vendor facing away from it, the vendor moby back to state 1
   (deleted when it came from the PDA), its speech stopped, the music back. keepCamera leaves the
   moby-driven camera on and warps with flag 1. */
void Vendor_EndWeaponCutscene(int keepCamera)
{
    IdolDraw *idol = (IdolDraw *)(uintptr_t)g_pIdolDraw;

    idol->unk1a78 = g_VendorSavedIdol1a78;

    if (g_VendorBoltHud != -1) {
        Hud_SetEntryValueById(g_VendorBoltHud, 0);
    }

    if (g_VendorAmmoHud != -1) {
        Hud_SetEntryValueById(g_VendorAmmoHud, 0);
    }

    g_VendorBoltHud = -1;
    g_VendorAmmoHud = -1;
    Hud_DecHideCounter();
    g_CutscenePlaying = 1;
    g_gameMode = GAME_MODE_NORMAL;
    TransitionMovement(0, 1);
    g_heroInvisible = 0;
    Hero_MakeVisible();

    if (g_lastVendorWasPda == 0) {
        Vec4 pos;
        float rot[3];

        MobyPoint(g_VendorMoby, &g_VendorHeroOffset, &pos);
        rot[0] = 0.0f;
        rot[1] = 0.0f;
        rot[2] = FastWrapRot(g_VendorMoby->rotation.z, 3.1415927f);

        if (keepCamera == 0) {
            Hero_Warp(&pos.x, rot, 0, 0);
            Camera_DeactivateMobyDrivenCam(2);
        }
        else {
            Hero_Warp(&pos.x, rot, 0, 1);
        }
    }

    MobyInstance *moby = g_VendorMoby;

    g_VendorMoby->state = 1;

    if (g_SpeechPlaying.status != 6 && g_SpeechPlaying.status != 7) {
        g_SpeechPlaying.status = 5;
    }

    if (g_lastVendorWasPda != 0) {
        DeleteMoby(moby);
    }

    FUN_0060bb90(0x1d);
    music_Unpause();
    STUB_00505d20();
}

// 0x016b2f8 (0x34c bytes)
/* Starts the cutscene of the weapon just bought: the vendor's speech cut, the cutscene placed on
   the ground in front of the vendor facing away from it, scene memory cleared, the hero's gadget
   dropped if another one is out, the weapon's model and cutscene loaded; waits for its speech to
   be ready and starts it. */
int Vendor_StartWeaponCutscene(void)
{
    Camera_DeactivateMobyDrivenCam(2);

    if (g_SpeechPlaying.status != 6 && g_SpeechPlaying.status != 7) {
        g_SpeechPlaying.status = 5;
    }

    g_CutscenePlaying = 1;
    g_VendorMoby->state = 1;
    g_OpenVendorState = 3;
    g_VendorStateFrames = 0;

    MobyPoint(g_VendorMoby, &g_VendorCutsceneOffset, &g_VendorCutscenePos);
    g_VendorCutscenePos.z += 2.0f;
    g_VendorCutscenePos.z = GetGroundZ(0.5f, &g_VendorCutscenePos, 0);

    g_VendorCutsceneRot.w = 0.0f;
    g_VendorCutsceneRot.z = 0.0f;
    g_VendorCutsceneRot.y = 0.0f;
    g_VendorCutsceneRot.x = 0.0f;
    g_VendorCutsceneRot.z = FastWrapRot(g_VendorMoby->rotation.z, 3.1415927f);
    FastEulerToMtx(g_VendorCutsceneMtx, &g_VendorCutsceneRot.x);

    FastMemSet(&DAT_0095cd50, 0, 0x1c0);
    FastMemSet(&DAT_00a1be80, 0, 0x40);
    STUB_00174cf4(1);
    VU1_setBufSizeByLevel();
    vu1_bufSize -= 0x40000;
    DAT_0095cda8 = g_NpcBuffer;
    g_SceneLoadBuffer = g_NpcBuffer + 0x80000;
    g_SceneFlash = 0.0f;
    SceneScreenFade = 0.0f;

    int cutscene = g_WeaponCutscenes[g_VendorBoughtItem];

    if (g_CurrentWeapon != 0 && g_VendorBoughtItem != (int)g_CurrentWeapon) {
        Hero_KillGadget(0, 0);
    }

    DAT_0096bd98 = g_VendorBoughtItem;

    if (g_VendorBoughtItem == 0x18) {
        DAT_0096bd98 = 0;
    }

    LoadGadgetModel(VendorGadget(g_VendorBoughtItem)->oClass, -1);
    LoadWeaponCutscene(cutscene);
    g_PendingSpeech = 0x2734;
    ParseWeaponSceneChunk(0);

    while (g_SpeechPlaying.status != 3) {
        sound_Update();
        STUB_00503078(0);
    }

    return music_PlayPreseekedSpeech();
}

// 0x016b650 (0x3e0 bytes)
/* Starts the cutscene of a gadget picked up from moby: one or two frames flipped first, the
   vendor's state reset to the cutscene, the hero hidden, the cutscene placed on the ground in
   front of the pickup turned a quarter, scene memory cleared, the gadget's model and cutscene
   loaded and lit like the cutscene's second moby; waits for its speech and starts it. */
int StartGadgetPickupCutscene(MobyInstance *moby, int item)
{
    IdolDraw *idol = (IdolDraw *)(uintptr_t)g_pIdolDraw;

    if (idol->unk11 == 0x81 && ((idol->unk14 >> 1) & 1) == 0) {
        idol->vtable->BuildAndFlipFrame(idol);
    }

    idol->vtable->BuildAndFlipFrame(idol);
    idol->unk1a8c += 2;

    FUN_0060bc8c(0x1d);
    music_Pause(0);
    STUB_00505d20();
    g_CutscenePlaying = 1;
    FastMemSet(&g_OpenVendorState, 0, 0x1e0);
    g_VendorStateFrames = 0;
    g_OpenVendorState = 3;
    g_gameMode = GAME_MODE_VENDOR;
    g_GadgetPickupMoby = moby;
    Hud_ResetAllEntriesHidden();
    Help_Kill();
    TransitionMovement(100, 1);
    DAT_0096bd8c = 1;
    g_heroInvisible = 1;
    Hero_MakeInvisible();

    MobyPoint(moby, &g_GadgetPickupOffset, &g_VendorCutscenePos);
    g_VendorCutscenePos.z = GetGroundZ(0.5f, &g_VendorCutscenePos, 0);

    g_VendorCutsceneRot.w = 0.0f;
    g_VendorCutsceneRot.z = 0.0f;
    g_VendorCutsceneRot.y = 0.0f;
    g_VendorCutsceneRot.x = 0.0f;
    g_VendorCutsceneRot.z = FastWrapRot(moby->rotation.z, -1.5707964f);
    FastEulerToMtx(g_VendorCutsceneMtx, &g_VendorCutsceneRot.x);

    FastMemSet(&DAT_0095cd50, 0, 0x1c0);
    FastMemSet(&DAT_00a1be80, 0, 0x40);
    VU1_setBufSizeByLevel();
    vu1_bufSize -= 0x40000;
    DAT_0095cda8 = g_NpcBuffer;
    g_SceneLoadBuffer = g_NpcBuffer + 0x200000;
    SceneScreenFade = 1.0f;
    g_SceneFlash = 0.0f;

    int cutscene = g_WeaponCutscenes[item];

    Hero_KillGadget(0, 0);
    DAT_0096bd98 = item;
    LoadGadgetModel(VendorGadget(item)->oClass, -1);
    LoadWeaponCutscene(cutscene);
    g_PendingSpeech = 0x2734;
    ParseWeaponSceneChunk(0);

    while (g_SpeechPlaying.status != 3) {
        sound_Update();
        STUB_00503078(0);
    }

    Hero_SetLightsFromMoby((uintptr_t)g_SpaceSceneMobys[1], (int)(uintptr_t)g_heroMobyPtr);

    return music_PlayPreseekedSpeech();
}

// 0x016ba38 (0x1e8 bytes)
/* after a gadget pickup cutscene: normal play, the hero visible and warped to where the
   cutscene played facing its way, the speech stopped and the music back */
void Vendor_RestoreHero(void)
{
    g_CutscenePlaying = 1;
    g_gameMode = GAME_MODE_NORMAL;
    TransitionMovement(0, 1);
    g_heroInvisible = 0;
    Hero_MakeVisible();

    Vec4 pos;
    float rot[3];

    MobyPoint(g_GadgetPickupMoby, &g_GadgetPickupOffset, &pos);
    rot[0] = 0.0f;
    rot[1] = 0.0f;
    rot[2] = FastWrapRot(g_GadgetPickupMoby->rotation.z, -1.5707964f);
    Hero_Warp(&pos.x, rot, 0, 1);
    Hud_DecHideCounter();

    if (g_SpeechPlaying.status != 6 && g_SpeechPlaying.status != 7) {
        g_SpeechPlaying.status = 5;
    }

    FUN_0060bb90(0x1d);
    music_Unpause();
    STUB_00505d20();
}

// 0x016bc20 (0x128 bytes)
/* text into the scrolling line after a run of spaces (18, or 36 in Japanese mode); in Japanese
   mode 'b' followed by a character becomes that palette colour (0x0f c 0x08) and other colour
   bytes are dropped. Scrolls from the start. */
void Vendor_SetScrollText(char *text)
{
    if (g_JapaneseMode) {
        FastMemSet(g_VendorScrollText, 0x20202020, 0x24);

        char *out = g_VendorScrollText + 0x24;

        for (int i = 0; text[i] != 0; i++) {
            u8 code = text[i];

            if (code == 'b') {
                i++;
                out[0] = 0x0f;
                out[1] = text[i];
                out[2] = 0x08;
                out += 3;
            }
            else if (code < 8 || code > 15) {
                *out++ = text[i];
            }
        }

        *out = 0;
    }
    else {
        sprintf(g_VendorScrollText, "                  %s", text);
    }

    g_VendorScrollPos = 0;
}

/* the vendor moby to animation (at its blend speed) if it isn't playing it already, and to
   state */
static inline void VendorDudeAnim(MobyInstance *moby, int animation, float frames, int state)
{
    if (moby->animationId != animation) {
        MB_SetAnimation(moby, animation, 0, (int)(animationSpeed * frames));
    }

    moby->state = state;
}

/* at the animation's speech frame, the prepared speech starts; when the animation ends the
   vendor goes back to idling (animation 2, state 2) */
static inline void VendorDudeTalk(MobyInstance *moby, int trigger)
{
    if (MB_MayaFrameTrigger((float)g_VendorDudeTriggers[trigger][g_VendorDudeLine], moby) != 0 && g_VendorDudeSpeechReady) {
        g_VendorDudeSpeechReady = 0;
        music_PlayPreseekedSpeech();
    }

    if (moby->field43_0x70 & 2) {
        VendorDudeAnim(moby, 2, 18.5f, 2);
        g_VendorDudeTimer = 0;
    }
}

/* the vendor's speech is ready: its talking animation (line * 3 + animation) and state */
static inline void VendorDudeStartTalk(MobyInstance *moby, int animation, int state)
{
    if (g_SpeechPlaying.status == 3 && g_VendorDudeSpeechPending) {
        g_VendorDudeSpeechPending = 0;
        g_VendorDudeSpeechReady = 1;
        VendorDudeAnim(moby, g_VendorDudeLine * 3 + animation, 18.5f, state);
    }
}

// 0x016bd58 (0x788 bytes)
/* The vendor moby: its head scaled up by the big-head cheat, then its idle loop. State 0 waits
   about 600 frames and queues one of two random lines (12); 12, 11 and 10 start the line's
   animation once its speech is loaded (5, 6, or 4 when the animation ends); 4, 5 and 6 start the
   speech at the animation's trigger frame and return to 2; 2 waits 600 frames then plays
   animation 3 (3), which returns to 0 when done. */
void Vendor_UpdateDude(MobyInstance *moby)
{
    if (Cheats[0] == 0) {
        if (g_VendorDudeManip.state != 0) {
            DetachManipulator(moby, &g_VendorDudeManip);
        }
    }
    else {
        if (g_VendorDudeManip.state == 0) {
            AttachManipulator(moby, 0, &g_VendorDudeManip);
        }

        g_VendorDudeManip.scale.m.x = 2.37f;
        g_VendorDudeManip.scale.m.y = 2.37f;
        g_VendorDudeManip.scale.m.z = 2.37f;
    }

    int wait = (int)(animationSpeed * 600.5f);

    switch (moby->state) {
    case 0:
        if (wait < g_VendorDudeTimer) {
            int line = MB_randInt(2);

            g_VendorDudeLine = line;
            g_PendingSpeech = g_VendorDudeLine * 2 + line * 16 + g_VendorLanguage + 0x2716;
            g_VendorDudeSpeechPending = 1;
            g_VendorDudeSpeechReady = 0;
            VendorDudeAnim(moby, 2, 18.5f, 12);
            g_VendorDudeTimer = 0;
        }

        g_VendorDudeTimer++;
        break;

    case 2:
        if (wait < g_VendorDudeTimer) {
            VendorDudeAnim(moby, 3, 18.5f, 3);
            g_VendorDudeTimer = 0;
        }

        g_VendorDudeTimer++;
        break;

    case 3:
        if (moby->field43_0x70 & 2) {
            VendorDudeAnim(moby, 0, 18.5f, 0);
        }

        break;

    case 4:
        VendorDudeTalk(moby, 0);
        break;

    case 5:
        VendorDudeTalk(moby, 1);
        break;

    case 6:
        VendorDudeTalk(moby, 2);
        break;

    case 10:
        if (g_SpeechPlaying.status == 3 && g_VendorDudeSpeechPending) {
            g_VendorDudeSpeechPending = 0;
            g_VendorDudeSpeechReady = 1;
        }

        if (moby->field43_0x70 & 2) {
            VendorDudeAnim(moby, g_VendorDudeLine * 3 + 4, 12.5f, 4);
        }

        break;

    case 11:
        VendorDudeStartTalk(moby, 6, 6);
        break;

    case 12:
        VendorDudeStartTalk(moby, 5, 5);
        break;
    }
}

// 0x016c4e8 (0x1d0 bytes)
/* The vendor dude reacting to the screen: event 0 (1 in 4 times, while idling, at most every
   360 frames) queues a chatter line (state 11); event 1 queues a purchase line and plays
   animation 1 (state 10); events 2 and 3 restart his idle wait. Nothing while he is not shown. */
void Vendor_PlayDudeSpeech(int event)
{
    MobyInstance *dude = g_VendorDude;

    if (!g_VendorDudeActive) {
        return;
    }

    bool idle = g_VendorDude->state == 2 || g_VendorDude->state == 0;

    if (event == 0) {
        if (idle && MB_randInt(4) == 0 && g_VendorDudeLastChat + (int)(animationSpeed * 360.5f) < g_MainLoopFrames) {
            g_VendorDudeLastChat = g_MainLoopFrames;

            int line = MB_randInt(2);

            g_VendorDudeLine = line;
            g_PendingSpeech = g_VendorDudeLine * 2 + line * 16 + g_VendorLanguage + 0x271c;
            g_VendorDudeSpeechPending = 1;
            g_VendorDudeSpeechReady = 0;
            dude->state = 11;
        }
    }
    else if (event == 1) {
        int line = MB_randInt(2);

        g_VendorDudeLine = line;
        g_PendingSpeech = g_VendorDudeLine * 2 + line * 16 + g_VendorLanguage + 10000;
        g_VendorDudeSpeechPending = 1;
        g_VendorDudeSpeechReady = 0;

        if (dude->animationId != 1) {
            MB_SetAnimation(dude, 1, 0, 10);
        }

        dude->state = 10;
    }
    else if (event < 4 && event > 1 && idle) {
        g_VendorDudeTimer = 0;
    }
}

/* a fresh preview moby: drawn far, posed on its first animation (the second if it has one) */
static inline void VendorPreviewInit(MobyInstance *moby, int oClass)
{
    InitMobyInstance(moby, oClass);
    moby->drawDistance = 0x40;
    moby->collision = 0;
}

static inline void VendorPreviewPose(MobyInstance *moby)
{
    MB_SetAnimationNoBlend(moby, 0, 0);

    if (moby->pClass->seq_cnt > 1) {
        MB_SetAnimationNoBlend(moby, 1, 0);
    }

    moby->unk58 = 0;
    moby->animationFrame = 0;
    UpdateMobyFrameData(moby);
}

// 0x016c6b8 (0x590 bytes)
/* Puts the selected item on the vendor screen: two frames flipped (one if the renderer says
   not to), its model loaded (item 0x18 uses class 0x1df instead), preview moby 1 placed in front
   of the vendor moby with the item's offset and rotation, moby 2 the item's second part if it
   has one, moby 3 the item again with mode bit 0x100. All lit with the same dim light. */
void Vendor_SpawnPreviewMoby(void)
{
    IdolDraw *idol = (IdolDraw *)(uintptr_t)g_pIdolDraw;
    int widescreen = idol->widescreen;

    if (idol->unk11 == 0x81 && ((idol->unk14 >> 1) & 1) == 0) {
        idol->vtable->BuildAndFlipFrame(idol);
    }

    idol->vtable->BuildAndFlipFrame(idol);
    idol->unk1a8c += 2;

    int oClass = VendorGadget(g_VendorItems[g_VendorSelected].item)->oClass;

    if (g_VendorItems[g_VendorSelected].item == 0x18) {
        oClass = 0x1df;
    }
    else {
        LoadGadgetModel(VendorGadget(g_VendorItems[g_VendorSelected].item)->oClass, -1);
    }

    MobyInstance *preview = &g_VendorPreviews[1];

    VendorPreviewInit(preview, oClass);

    VendorItem *item = &g_VendorItems[g_VendorSelected];
    VendorItemView *view = &g_VendorItemViews[item->item];
    Vec4 offset;

    offset.x = g_VendorPreviewOffset.x + view->offsetX;
    offset.y = g_VendorPreviewOffset.y + view->offsetY;
    offset.z = g_VendorPreviewOffset.z + view->offsetZ;
    offset.w = g_VendorPreviewOffset.w;

    if (widescreen == 0) {
        offset.x += g_VendorItemNarrowOffset[item->item].x;
        offset.y += g_VendorItemNarrowOffset[item->item].y;
        offset.z += g_VendorItemNarrowOffset[item->item].z;
    }

    if (!item->isAmmo) {
        offset.z += view->weaponLift;

        if (UnlockableItems.persuader) {
            offset.z += view->weaponLift;
        }
    }

    MobyPoint(g_VendorMoby, &offset, &preview->pos);
    preview->rotation.x = g_VendorItemViews[item->item].rotation.x;
    preview->rotation.y = g_VendorItemViews[item->item].rotation.y;
    preview->rotation.z = g_VendorItemViews[item->item].rotation.z + g_VendorMoby->rotation.z;
    UpdateMobyTransform(preview);
    VendorPreviewPose(preview);
    SetMobyLights(preview, 0x202020, 0xe, 0xe, 0);

    int extraClass = g_VendorItemModels[g_VendorItems[g_VendorSelected].item].extraClass;

    if (extraClass != 0) {
        InitMobyInstance(&g_VendorPreviews[2], extraClass);
        g_VendorPreviews[2].drawDistance = 0x40;
        UpdateMobyTransform(&g_VendorPreviews[2]);
        SetMobyLights(&g_VendorPreviews[2], 0x202020, 0xe, 0xe, 0);
    }

    MobyInstance *copy = &g_VendorPreviews[3];

    VendorPreviewInit(copy, oClass);
    UpdateMobyTransform(copy);
    VendorPreviewPose(copy);
    copy->modeBits |= 0x100;
    SetMobyLights(copy, 0x202020, 0xe, 0xe, 0);

    g_VendorPreviewDirty = 0;
}

static inline int VendorUnitPrice(int item)
{
    WeaponAmmoInfo *info = VendorAmmoInfo(item);

    return g_lastVendorWasPda == 0 ? info->ammoPrice : info->pdaAmmoPrice;
}

static inline int VendorWeaponPrice(int item)
{
    WeaponAmmoInfo *info = VendorAmmoInfo(item);

    return UnlockableItems.persuader == 0 ? info->price : info->discountPrice;
}

/* a held d-pad direction repeats after 16 frames every 8, every frame after 48 */
static inline bool VendorRepeat(bool pressed, int held)
{
    return pressed || (held > 15 && (held & 7) == 0) || held > 47;
}

/* the purchase box's animation runs out (moby flag 2) */
static inline bool VendorBoxDone(MobyInstance *box)
{
    return box->animationId == 0 && (box->field43_0x70 & 2) != 0;
}

// 0x016cc50 (0xde8 bytes)
/* The purchase box (preview moby 4, class 0x471). Opening: placed on the vendor moby, quantity 1,
   the "no" sound when the item is out of reach (ammo full or too dear), quantity picking for
   ammo you can afford. Open: left/right change the quantity (up to what fits and what you can
   pay), triangle (0x10) cancels, confirm accepts; both play the box out. Closing: when it is done
   the purchase happens (ammo: filled up to its max, bolts down, list reloaded; a weapon: unlocked,
   bolts down, list reloaded and the preview respawned), with the vendor dude's line. */
void PurchaseHandler(void)
{
    MobyInstance *box = &g_VendorPreviews[4];

    if (g_VendorMenuState == 0) {
        return;
    }

    if (g_VendorMenuState == 1) {
        g_VendorConfirmed = 0;
        g_VendorQuantity = 1;
        InitMobyInstance(box, 0x471);
        box->drawDistance = 0x40;
        box->pos.x = g_VendorMoby->pos.x + 0.0f;
        box->pos.y = g_VendorMoby->pos.y + 0.0f;
        box->pos.w = 0;
        box->pos.z = g_VendorMoby->pos.z + 0.0f;
        box->rotation = g_VendorMoby->rotation;
        MB_SetAnimationNoBlend(box, 0, 0);

        if (box->pClass->seqs[0]->frameCnt < 2) {
            box->unk58 = 0.0f;
            box->animationFrame = 0;
            UpdateMobyFrameData(box);
        }

        UpdateMobyTransform(box);
        SetMobyLights(box, 0x101010, 0xe, 0xe, 0);

        VendorItem *item = &g_VendorItems[g_VendorSelected];

        g_VendorPickQuantity = 0;

        if (item->isAmmo == 1 && *VendorAmmo(item->item) >= VendorAmmoInfo(item->item)->maxAmmo) {
            PlayMobySound(2, 0, g_VendorMoby);
        }
        else if (item->isAmmo == 1) {
            if (g_boltCount < VendorUnitPrice(item->item)) {
                PlayMobySound(2, 0, g_VendorMoby);
            }
            else {
                g_VendorPickQuantity = 1;
            }
        }
        else if (g_boltCount < VendorWeaponPrice(item->item)) {
            PlayMobySound(2, 0, g_VendorMoby);
        }

        g_VendorMenuState = 2;
    }
    else if (g_VendorMenuState == 2) {
        if (g_VendorPickQuantity == 1) {
            int less = (g_Pad.unk0c0 & 0x8000) ? g_VendorHoldLess + 1 : 0;
            int more = (g_Pad.unk0c0 & 0x2000) ? g_VendorHoldMore + 1 : 0;

            g_VendorHoldLess = less;
            g_VendorHoldMore = more;

            if (VendorRepeat((g_Pad.pressedButton & 0x8000) != 0, less) && g_VendorQuantity > 1) {
                g_VendorQuantity--;

                if ((less & 3) == 0 || less < 16) {
                    PlayMobySound(1, 0, g_VendorMoby);
                }
            }

            if (VendorRepeat((g_Pad.pressedButton & 0x2000) != 0, g_VendorHoldMore)) {
                int item = g_VendorItems[g_VendorSelected].item;

                if (VendorUnitPrice(item) != 0) {
                    int room = VendorAmmoInfo(item)->maxAmmo - *VendorAmmo(item);
                    int most = g_boltCount / VendorUnitPrice(item);

                    if (room < most) {
                        most = room;
                    }

                    if (g_VendorQuantity < most) {
                        g_VendorQuantity++;

                        if ((g_VendorHoldMore & 3) == 0 || g_VendorHoldMore < 16) {
                            PlayMobySound(1, 0, g_VendorMoby);
                        }
                    }
                }
            }
        }

        if (g_Pad.pressedButton & 0x10) {
            g_VendorMenuState = 3;
            g_VendorConfirmed = 0;
            MB_SetAnimation(box, 0, box->pClass->seqs[0]->frameCnt - 1, 1);
            UpdateMobyTransform(box);
        }
        else if (g_Pad.pressedButton & pad_ConfirmButtonMask) {
            g_VendorMenuState = 3;
            g_VendorConfirmed = 1;
            MB_SetAnimation(box, 0, box->pClass->seqs[0]->frameCnt - 1, 8);
            UpdateMobyTransform(box);
        }
        else {
            UpdateMobyAnimFrame(box);

            if (VendorBoxDone(box)) {
                MB_SetAnimation(box, 1, 0, 1);
            }

            UpdateMobyTransform(box);
        }
    }
    else if (g_VendorMenuState == 3) {
        UpdateMobyAnimFrame(box);

        if (VendorBoxDone(box)) {
            box->unk58 = -1.0f;
            g_VendorMenuState = 4;
        }

        UpdateMobyTransform(box);
    }
    else if (g_VendorMenuState == 4) {
        UpdateMobyAnimFrame(box);

        int quantity = g_VendorQuantity;

        if (box->field43_0x70 & 2) {
            if (g_VendorConfirmed == 1) {
                VendorItem *item = &g_VendorItems[g_VendorSelected];
                int cost = item->isAmmo == 1 ? VendorUnitPrice(item->item) * g_VendorQuantity : VendorWeaponPrice(item->item);

                if (g_boltCount < cost && *VendorAmmo(g_VendorItems[g_VendorSelected].item) >= VendorAmmoInfo(g_VendorItems[g_VendorSelected].item)->maxAmmo) {
                    PlayMobySound(0, 0, g_VendorMoby);
                }
                else if (item->isAmmo == 1) {
                    int weapon = item->item;
                    int maxAmmo = VendorAmmoInfo(item->item)->maxAmmo;

                    if (*VendorAmmo(weapon) >= maxAmmo) {
                        PlayMobySound(0, 0, g_VendorMoby);
                    }
                    else if (g_boltCount < VendorUnitPrice(weapon) * g_VendorQuantity) {
                        Vendor_SetScrollText(help_msg_string_by_index(STR_YOU_CANT_AFFORD_THAT));
                        PlayMobySound(0, 0, g_VendorMoby);
                    }
                    else {
                        int ammo = *VendorAmmo(item->item);

                        if (maxAmmo < ammo) {
                            ammo = maxAmmo;
                        }

                        *VendorAmmo(item->item) = ammo;
                        quantity -= hero_GiveAmmo(item->item, quantity);

                        int unitPrice = VendorUnitPrice(g_VendorItems[g_VendorSelected].item);

                        g_AmmoBought[g_VendorItems[g_VendorSelected].item] += quantity;
                        Vendor_PlayDudeSpeech(3);
                        g_boltCount -= unitPrice * quantity;
                        LoadVendorItems(g_lastVendorWasPda != 0);
                        Vendor_SetScrollText(help_msg_string_by_index(STR_THANK_YOU));
                        PlayMobySound(7, 0, g_VendorMoby);
                    }
                }
                else {
                    int price = VendorWeaponPrice(item->item);

                    if (g_boltCount < price) {
                        Vendor_SetScrollText(help_msg_string_by_index(STR_YOU_CANT_AFFORD_THAT));
                        PlayMobySound(0, 0, g_VendorMoby);
                    }
                    else {
                        Vendor_PlayDudeSpeech(2);
                        MB_UnlockItem(g_VendorItems[g_VendorSelected].item, 1);
                        g_VendorBoughtItem = g_VendorItems[g_VendorSelected].item;

                        if (g_VendorBoughtItem == 0x18) {
                            DAT_0096bcd5 = 1;
                        }

                        g_boltCount -= price;
                        LoadVendorItems(g_lastVendorWasPda != 0);

                        if (g_VendorAmmoHud != -1) {
                            Hud_SetEntryValueById(g_VendorAmmoHud, 0);
                        }

                        g_VendorAmmoHud = -1;

                        if (g_VendorItems[g_VendorSelected].isAmmo == 1) {
                            int weapon = g_VendorItems[g_VendorSelected].item;

                            g_VendorAmmoHud = RegisterHUDCallback(0x30, weapon + 60000, &PTR_AmmoHud_Init_00705808, &PTR_HudEntry_UpdateCounter_007056c8, &PTR_Draw_AmmoCounter_00705888, VendorAmmo(weapon), VendorAmmoInfo(weapon)->maxAmmo);
                        }
                        else {
                            if (g_VendorSelected > g_VendorItemsCnt - 1) {
                                g_VendorSelected = g_VendorItemsCnt - 1;
                            }

                            Vendor_SpawnPreviewMoby();
                        }

                        Vendor_SetScrollText(help_msg_string_by_index(STR_THANK_YOU));
                        PlayMobySound(7, 0, g_VendorMoby);
                    }
                }
            }
            else {
                PlayMobySound(0, 0, g_VendorMoby);
            }

            g_VendorMenuState = 0;
        }

        UpdateMobyTransform(box);
    }
}

static inline bool VendorStepRequested(void)
{
    return (DebugUpdate & ENABLE_STEPPING) && (g_Pad.buttonsPressedThisFrame & L3);
}

static inline bool VendorUpdatesMobys(void)
{
    return (DebugUpdate & UPDATE_MOBYS) || VendorStepRequested();
}

/* the item's description (item info table at 0x735580, +0x10) */
static inline StringId VendorItemText(int item)
{
    return ((StringId *)&DAT_00735580)[item * 5 + 4];
}

/* after the selection moved: its description scrolls, the ammo counter follows it */
static inline void VendorShowSelected(void)
{
    Vendor_SetScrollText(help_msg_string_by_index(VendorItemText(g_VendorItems[g_VendorSelected].item)));

    if (g_VendorAmmoHud != -1) {
        Hud_SetEntryValueById(g_VendorAmmoHud, 0);
    }

    g_VendorAmmoHud = -1;

    if (g_VendorItems[g_VendorSelected].isAmmo == 1) {
        int weapon = g_VendorItems[g_VendorSelected].item;

        g_VendorAmmoHud = RegisterHUDCallback(0x30, weapon + 60000, &PTR_AmmoHud_Init_00705808, &PTR_HudEntry_UpdateCounter_007056c8, &PTR_Draw_AmmoCounter_00705888, VendorAmmo(weapon), VendorAmmoInfo(weapon)->maxAmmo);
    }
}

/* a spinning preview moby: x and z turn, y tilted */
static inline void VendorTumble(MobyInstance *moby)
{
    moby->rotation.x = FastWrapRot(moby->rotation.x, animationSpeed * -0.05f);
    moby->rotation.y = -0.36f;
    moby->rotation.z = FastWrapRot(moby->rotation.z, animationSpeed * 0.05f);
    UpdateMobyTransform(moby);
}

/* a point of the weapon cutscene into the world: through g_VendorCutsceneMtx (3 rows of 4), then
   moved to g_VendorCutscenePos; w is the 4th column's dot plus w */
static inline void VendorCutscenePoint(float x, float y, float z, float w, float *outX, float *outY, float *outZ, float *outW)
{
    float *mtx = g_VendorCutsceneMtx;

    *outW = mtx[3] * x + mtx[7] * y + mtx[11] * z + w;
    *outX = mtx[0] * x + mtx[4] * y + mtx[8] * z + g_VendorCutscenePos.x;
    *outY = mtx[1] * x + mtx[5] * y + mtx[9] * z + g_VendorCutscenePos.y;
    *outZ = mtx[2] * x + mtx[6] * y + mtx[10] * z + g_VendorCutscenePos.z;
}

/* the weapon cutscene's camera frame: GameCamera placed through the cutscene's matrix and turned
   by the frame's euler angles (z on top of the cutscene's); returns the frame's cut flag */
static inline char VendorCutsceneCamera(void)
{
    SceneCameraFrame *frame = &g_SpaceSceneCameraFrames[g_cutsceneCameraFrame];
    char cut = frame->flags[0];
    float flagsW;
    Mtx4 rot;
    Mtx4 copy;

    g_ViewContext.xratio = frame->xratio;
    UpdateViewContext();

    memcpy(&flagsW, frame->flags, 4);
    VendorCutscenePoint(frame->x, frame->y, frame->z, flagsW, &GameCamera.posX, &GameCamera.posY, &GameCamera.posZ, &GameCamera.posW);

    float rotZ = FastWrapRot(frame->rotZ, g_VendorCutsceneRot.z);
    float rotX = frame->rotX;
    float rotY = frame->rotY;

    memcpy(&copy, &DAT_00653f08, sizeof(Mtx4));

    float sinX = std::_FSin(rotX, 0);
    float cosX = std::_FSin(rotX, 1);
    float sinY = std::_FSin(rotY, 0);
    float cosY = std::_FSin(rotY, 1);
    float sinZ = std::_FSin(rotZ, 0);
    float cosZ = std::_FSin(rotZ, 1);
    float sinYsinZ = sinY * sinZ;
    float cosZsinY = cosZ * sinY;

    memcpy(&rot, &DAT_0073a78c, sizeof(Mtx4));
    rot.v0.x = cosY * cosZ;
    rot.v0.y = cosY * sinZ;
    rot.v0.z = -sinY;
    rot.v1.x = sinX * cosZsinY - cosX * sinZ;
    rot.v1.y = sinX * sinYsinZ + cosX * cosZ;
    rot.v1.z = cosY * sinX;
    rot.v2.x = cosX * cosZsinY + sinX * sinZ;
    rot.v2.y = cosX * sinYsinZ - cosZ * sinX;
    rot.v2.z = cosX * cosY;
    memcpy(&copy, &rot, sizeof(Mtx4));

    GameCamera.orientMtx.forward.x = -copy.v2.x;
    GameCamera.orientMtx.right.x = -copy.v0.x;
    GameCamera.orientMtx.forward.y = -copy.v2.y;
    GameCamera.orientMtx.right.y = -copy.v0.y;
    GameCamera.orientMtx.forward.z = -copy.v2.z;
    GameCamera.orientMtx.up.x = copy.v1.x;
    GameCamera.orientMtx.right.z = -copy.v0.z;
    GameCamera.orientMtx.up.y = copy.v1.y;
    GameCamera.orientMtx.up.z = copy.v1.z;

    return cut;
}

// 0x016da88 (0x1f14 bytes)
/* A vendor frame before drawing.
   States 0-2 (fading in, open, closing): when open, the vendor dude is spawned once his data is
   in, he and the preview mobies follow the vendor moby (0 and 5 tumble, 2 and 3 spin with
   g_VendorSpin and bob), left/right move the selection (scrolling a page of 56 when there are 8
   items or more), confirm opens the purchase box, triangle starts the close; the close restores
   the camera and the weapon model. The world keeps updating unless the PDA has it paused. State
   0 fades in for 40 frames, state 2 plays the vendor out for 40 frames and then the bought
   weapon's cutscene (or ends). The highlight is drawn for the first 36 frames of a state.
   State 3 plays the weapon cutscene: its camera frames and mobies through g_VendorCutsceneMtx,
   fading out near the end, then deletes its mobies and ends it. */
void Vendor_PreUpdate(void)
{
    if (g_OpenVendorState >= 0 && g_OpenVendorState < 3) {
        if (g_OpenVendorState == 1) {
            if (!g_VendorDudeActive && g_MusicLoading == 0 && g_VendorDudeLoaded) {
                Vendor_ParseMobySeqs();

                g_VendorDude = (MobyInstance *)g_VendorBufEnd;
                InitMobyInstance(g_VendorDude, 0xc);
                g_VendorDude->drawDistance = 0x40;
                g_VendorDude->rotation.z = g_VendorMoby->rotation.z;
                UpdateMobyTransform(g_VendorDude);
                SetMobyLights(g_VendorDude, 0x202020, 0xe, 0xe, 0);
                g_VendorDudeActive = 1;
                g_VendorDudeLoaded = 0;
                Vendor_PlayDudeSpeech(1);
            }

            UpdateMobyAnimFrame(g_VendorMoby);
            UpdateMobyTransform(g_VendorMoby);

            if (g_VendorDudeActive == 1) {
                if (g_VendorNarrow) {
                    g_VendorDudeOffset.x = -1.8f;
                    g_VendorDudeOffset.z = -0.6f;
                }

                MobyInstance *dude = g_VendorDude;

                MobyPoint(g_VendorMoby, &g_VendorDudeOffset, &dude->pos);
                UpdateMobyAnimFrame(dude);
                UpdateMobyTransform(g_VendorDude);
                Vendor_UpdateDude(g_VendorDude);
            }

            IdolDraw *idol = (IdolDraw *)(uintptr_t)g_pIdolDraw;

            if ((idol->unk11 == 4 || idol->unk11 == 5) && idol->widescreen == 0) {
                g_VendorScreenOffset.y = -3.1f;
            }
            else {
                g_VendorScreenOffset.y = -4.15f;
            }

            MobyPoint(g_VendorMoby, &g_VendorScreenOffset, &g_VendorPreviews[0].pos);
            VendorTumble(&g_VendorPreviews[0]);
            MobyPoint(g_VendorMoby, &g_VendorScreen2Offset, &g_VendorPreviews[5].pos);
            VendorTumble(&g_VendorPreviews[5]);
            g_VendorSpin = FastWrapRot(g_VendorSpin, animationSpeed * 0.05f);

            UpdateMobyAnimFrame(&g_VendorPreviews[1]);

            if (g_VendorPreviews[1].animationId == 0 && (g_VendorPreviews[1].field43_0x70 & 2) != 0) {
                MB_SetAnimation(&g_VendorPreviews[1], 1, 0, 8);
            }

            UpdateMobyTransform(&g_VendorPreviews[1]);

            /* the second part spins and bobs */
            VendorItemModel *model = &g_VendorItemModels[g_VendorItems[g_VendorSelected].item];
            Vec4 offset;

            offset.x = g_VendorSpinOffset.x + 0.0f + model->offset.x;
            offset.y = g_VendorSpinOffset.y + 0.0f + model->offset.y;
            offset.z = g_VendorSpinOffset.z + FastSinInline(g_VendorSpin) * 0.05f + model->offset.z;
            offset.w = g_VendorSpinOffset.w;
            MobyPoint(g_VendorMoby, &offset, &g_VendorPreviews[2].pos);
            g_VendorPreviews[2].rotation.x = model->rotation.x;
            g_VendorPreviews[2].rotation.z = g_VendorSpin;
            g_VendorPreviews[2].rotation.y = model->rotation.y;
            UpdateMobyTransform(&g_VendorPreviews[2]);

            /* and so does the copy, moved along its own axes once turned */
            VendorCopyView *view = &g_VendorCopyViews[g_VendorItems[g_VendorSelected].item];
            MobyInstance *copy = &g_VendorPreviews[3];

            offset.x = g_VendorSpinOffset.x + 0.0f + view->offset.x;
            offset.y = g_VendorSpinOffset.y + 0.0f + view->offset.y;
            offset.z = g_VendorSpinOffset.z + FastSinInline(g_VendorSpin) * 0.05f + view->offset.z;
            offset.w = g_VendorSpinOffset.w;
            MobyPoint(g_VendorMoby, &offset, &copy->pos);
            copy->rotation.x = view->rotation.x;
            copy->rotation.z = g_VendorSpin;
            copy->rotation.y = view->rotation.y;
            UpdateMobyAnimFrame(copy);

            if (g_VendorPreviews[3].animationId == 0 && (g_VendorPreviews[3].field43_0x70 & 2) != 0) {
                MB_SetAnimation(&g_VendorPreviews[3], 1, 0, 8);
            }

            UpdateMobyTransform(&g_VendorPreviews[3]);

            VendorCopyView *local = &g_VendorCopyViews[g_VendorItems[g_VendorSelected].item];
            float localX = local->localOffset.x;
            float localY = local->localOffset.y;
            float localZ = local->localOffset.z;
            Mtx4 *mtx = &g_VendorPreviews[3].transform;

            FastEulerToMtx1(mtx, &g_VendorPreviews[3].rotation);
            copy = &g_VendorPreviews[3];
            copy->pos.x = copy->pos.x + mtx->v0.x * localX + mtx->v1.x * localY + mtx->v2.x * localZ;
            copy->pos.y = copy->pos.y + mtx->v0.y * localX + mtx->v1.y * localY + mtx->v2.y * localZ;
            copy->pos.z = copy->pos.z + mtx->v0.z * localX + mtx->v1.z * localY + mtx->v2.z * localZ;

            g_VendorStateFrames++;

            if (g_VendorMenuState == 0 && !g_VendorExiting) {
                if (g_VendorItemsCnt < 8) {
                    if ((g_Pad.pressedButton & 0x2000) && g_VendorSelected < g_VendorItemsCnt - 1) {
                        g_VendorPreviewDirty = 1;
                        Vendor_PlayDudeSpeech(0);
                        g_VendorSelected++;
                        PlayMobySound(1, 0, g_VendorMoby);
                        VendorShowSelected();
                    }

                    if ((g_Pad.pressedButton & 0x8000) && g_VendorSelected > 0) {
                        g_VendorPreviewDirty = 1;
                        Vendor_PlayDudeSpeech(0);
                        g_VendorSelected--;
                        PlayMobySound(1, 0, g_VendorMoby);
                        VendorShowSelected();
                    }
                }
                else {
                    /* a long list scrolls and wraps around */
                    if ((g_Pad.pressedButton & 0x2000) && g_VendorCursor < 57) {
                        g_VendorCursor += 56;
                        g_VendorPreviewDirty = 1;
                        PlayMobySound(1, 0, g_VendorMoby);
                        Vendor_PlayDudeSpeech(0);
                        g_VendorSelected = g_VendorSelected < g_VendorItemsCnt - 1 ? g_VendorSelected + 1 : 0;
                        VendorShowSelected();
                    }

                    if ((g_Pad.pressedButton & 0x8000) && g_VendorCursor > -57) {
                        g_VendorCursor -= 56;
                        g_VendorPreviewDirty = 1;
                        PlayMobySound(1, 0, g_VendorMoby);
                        Vendor_PlayDudeSpeech(0);
                        g_VendorSelected = (g_VendorSelected > 0 ? g_VendorSelected : g_VendorItemsCnt) - 1;
                        VendorShowSelected();
                    }
                }

                if ((g_Pad.pressedButton & pad_ConfirmButtonMask) && g_VendorItems[g_VendorSelected].unk5 == 0) {
                    g_VendorMenuState = 1;
                    PlayMobySound(0, 0, g_VendorMoby);
                }

                if ((g_Pad.pressedButton & 0x10) && !g_VendorDudeLoaded) {
                    g_VendorExitTimer = 8;
                    g_VendorExiting = 1;
                    PlayMobySound(5, 0, g_VendorMoby);
                }
            }

            PurchaseHandler();

            if (g_VendorOpening == 1) {
                if (g_VendorOpenTimer == 0) {
                    g_VendorOpening = 0;
                }
                else {
                    g_VendorOpenTimer--;
                }
            }

            if (g_VendorExiting == 1) {
                g_VendorExitTimer--;

                if (g_VendorExitTimer == 0) {
                    g_CutscenePlaying = 1;
                    VU1_setBufSizeByLevel();
                    MB_SetAnimation(g_VendorMoby, 4, 9, 8);
                    g_VendorMoby->unk58 = DAT_0071f408 * -0.5f;

                    if (g_lastVendorWasPda != 0) {
                        GameCamera.rot.azimuth = g_VendorCamRot.x;
                        GameCamera.rot.elevation = g_VendorCamRot.y;
                        GameCamera.rot.radius = g_VendorCamRot.z;
                        memcpy(&GameCamera.rotW, &g_VendorCamRot.w, 4);
                    }

                    g_VendorDrawMode = 0;
                    g_VendorStateFrames = 0;
                    GameCamera.orientMtx.forward = g_VendorSavedOrient[0];
                    GameCamera.orientMtx.right = g_VendorSavedOrient[1];
                    GameCamera.orientMtx.up = g_VendorSavedOrient[2];
                    g_OpenVendorState = 2;

                    if (g_currentWeaponMoby != NULL) {
                        LoadGadgetModel(g_currentWeaponMoby->oClass, -1);
                        g_currentWeaponMoby->pClass = MobyClasses[g_currentWeaponMoby->mClass];
                        UpdateMobyFrameData(g_currentWeaponMoby);
                    }
                }
            }
            else if (g_VendorPreviewDirty) {
                Vendor_SpawnPreviewMoby();
            }

            UpdateAllGameplayHUD(1);
        }

        if (g_lastVendorWasPda == 0 || g_OpenVendorState == 2) {
            if (VendorUpdatesMobys()) {
                ResetGameCounters();
            }

            if (VendorUpdatesMobys()) {
                UpdateMobys();
                sound_UpdateAmbient();
            }

            STUB_0006562c("moby update", 3);

            if ((DebugUpdate & UPDATE_HERO) || VendorStepRequested()) {
                HeroUpdate();
            }

            STUB_0006562c("hero update", 7);

            if ((DebugUpdate & UPDATE_PARTICLES) || VendorStepRequested()) {
                UpdateParts();
            }

            STUB_0006562c("part update", 5);
        }

        if (g_OpenVendorState == 0) {
            SceneScreenFade -= 0.34f;

            if (SceneScreenFade < 0.0f) {
                SceneScreenFade = 0.0f;
            }

            g_VendorStateFrames++;

            if ((int)(animationSpeed * 40.5f) <= g_VendorStateFrames || g_lastVendorWasPda != 0) {
                SceneScreenFade = 0.0f;
                g_VendorSetupPending = 1;
                g_OpenVendorState = 1;
                g_VendorStateFrames = 0;
                MB_SetAnimation(g_VendorMoby, 3, 0, 8);
                g_VendorMoby->unk58 = 1.0f;
                g_VendorOpening = 1;
                g_VendorOpenTimer = 8;
                PlayMobySound(4, 0, g_VendorMoby);
            }
        }
        else if (g_OpenVendorState == 2) {
            bool cutscene = g_lastVendorWasPda == 0 && g_VendorBoughtItem >= 0 && g_WeaponCutscenes[g_VendorBoughtItem] >= 0;

            g_VendorStateFrames++;

            if ((int)(animationSpeed * 40.5f) <= g_VendorStateFrames || g_lastVendorWasPda != 0) {
                MB_SetAnimation(g_VendorMoby, 1, 0, 8);

                for (int i = 0; i < 4; i++) {
                    if (g_VendorManips[i].state == 1) {
                        DetachManipulator(g_VendorMoby, &g_VendorManips[i]);
                    }
                }

                if (cutscene) {
                    Vendor_StartWeaponCutscene();
                }
                else {
                    Vendor_EndWeaponCutscene(0);
                    PlayMobySound(6, 0, g_VendorMoby);
                }
            }

            UpdateAllGameplayHUD(1);
        }

        if (g_VendorStateFrames <= (int)(animationSpeed * 36.5f)) {
            RegisterPostDraw((void *)Vendor_DrawMobyHighlight, g_VendorMoby);
        }

        if (g_lastVendorWasPda == 0) {
            Camera_SetMobyDrivenTargetPos(&g_VendorCamPos.x);
            Camera_SetMobyDrivenTargetRot(&g_VendorCamRot.x);
        }

        UpdatePointLights();

        if (VendorUpdatesMobys()) {
            UpdateGameCounters();
        }
    }
    else if (g_OpenVendorState == 3) {
        ResetGameCounters();
        UpdateMobys();
        sound_UpdateAmbient();
        HeroUpdate();
        UpdateParts();
        g_cutsceneCameraFrame++;
        g_SpaceSceneFrame++;

        short numFrames = *(short *)&g_SpaceSceneNumFrames;

        /* fade out over the last 12 frames */
        if (numFrames - 12 < g_SpaceSceneFrame) {
            SceneScreenFade += 0.1f;

            if (SceneScreenFade > 1.0f) {
                SceneScreenFade = 1.0f;
            }
        }
        else {
            SceneScreenFade -= 0.125f;

            if (SceneScreenFade < 0.0f) {
                SceneScreenFade = 0.0f;
            }
        }

        if (g_SpaceSceneFrame < *(short *)&g_SpaceSceneNumFrames) {
            int chunkFrames = g_IsPal != 0 ? 0x50 : 0x60;

            if (g_cutsceneCameraFrame >= chunkFrames) {
                g_SpaceSceneChunk++;
                ParseWeaponSceneChunk(g_SpaceSceneChunk);
            }

            char cut = VendorCutsceneCamera();

            for (int i = 0; i < g_SpaceSceneMobyCnt; i++) {
                MobyInstance *moby = g_SpaceSceneMobys[i];
                char animFrame = (char)(g_cutsceneCameraFrame >> 1);

                moby->previousAnimationFrame = animFrame;
                moby->animationFrame = animFrame + 1;
                UpdateMobyFrameData(moby);

                moby->animationBlend = (float)FastIntToDouble(g_cutsceneCameraFrame & 1) * 0.5f;

                if (cut != 0 && (g_cutsceneCameraFrame & 1)) {
                    moby->animationBlend = 1.0f;
                }

                /* the positions are recorded per animation frame, in cutscene space */
                float blend = moby->animationBlend;
                float keep = 1.0f - blend;
                Vec4 *positions = (Vec4 *)moby->pVar;
                Vec4 *from = &positions[(u8)moby->previousAnimationFrame];
                Vec4 *to = &positions[(u8)moby->animationFrame];

                moby->pos.w = from->w;
                moby->pos.x = from->x * keep + to->x * blend;
                moby->pos.y = from->y * keep + to->y * blend;
                moby->pos.z = from->z * keep + to->z * blend;
                VendorCutscenePoint(moby->pos.x, moby->pos.y, moby->pos.z, from->w, &moby->pos.x, &moby->pos.y, &moby->pos.z, &moby->pos.w);
                moby->unk71 = -1;
                moby->rotation.z = g_VendorCutsceneRot.z;
                UpdateMobyTransform(moby);

                if (moby->shadow != 0) {
                    MB_SetZBoundsFromFloorCeil(moby);
                }

                if (moby->oClass == RATCHET) {
                    Hero_UpdateInScene(moby);
                }
            }

            UpdatePointLights();
            UpdateGameCounters();
        }
        else {
            SceneScreenFade = 0.0f;
            VU1_setBufSizeByLevel();
            g_ViewContext.xratio = 0.63f;
            UpdateViewContext();

            for (int i = 0; i < g_SpaceSceneMobyCnt; i++) {
                MobyInstance *moby = g_SpaceSceneMobys[i];

                if (moby != NULL) {
                    moby->pClass->seq_cnt--;
                    moby->pClass->seqs[moby->pClass->seq_cnt] = NULL;
                    DeleteMoby(moby);
                }
            }

            if (g_GadgetPickupMoby == NULL) {
                Vendor_EndWeaponCutscene(1);
            }
            else {
                Vendor_RestoreHero();
            }
        }
    }

    sound_Update();
}

// 0x016f9a8 (0x25c bytes)
/* Draws text in the vendor screen's bitmap font (9x9 cells from icon 0xe935), scaled. A 'b' is
   not drawn but makes the next character blink (hidden for the first 10 of every 40 frames).
   Character 0x10a would start a new line 9 lower, but a byte can't hold it. Was
   DrawVendorHintFrame. */
void Vendor_DrawBitmapText(const u8 *text, int x, int y, float scale)
{
    bool blink = false;
    int tex = Hud_GetTexIndex(GetIconFrameTex(0xe935, 0));
    int cursor = x;

    while (*text != 0) {
        int glyph = *text++ - ' ';

        if (glyph == 'b' - ' ') {
            blink = true;
        }

        if (glyph == 0xea) {
            y += 9;
            cursor = x;
        }

        if (glyph < 0x3b && (g_VendorFontGlyphs[glyph] != (u32)-1 || glyph == 0)) {
            bool hidden = false;

            if (blink) {
                int cycle = (int)(animationSpeed * 30.5f) + (int)(animationSpeed * 10.5f);

                blink = false;

                if (g_MainLoopFrames % cycle < (int)(animationSpeed * 10.5f)) {
                    hidden = true;
                }
            }

            if (!hidden && glyph != 0) {
                u32 cell = g_VendorFontGlyphs[glyph];
                int width = FastDoubleToInt((float)FastIntToDouble(9) * scale);
                int height = FastDoubleToInt((float)FastIntToDouble(9) * scale);

                Sprite_DrawShapeWrapper(cursor, y, width, height, (cell >> 4) & 0xfff, cell >> 20, 9, 9, 0x80808080, tex);
            }

            cursor += FastDoubleToInt((float)FastIntToDouble(g_VendorFontWidths[glyph]) * scale);
        }
    }
}

// 0x016fc10 (0x208 bytes)
/* The scroller along the top of the vendor screen: two pixels a frame; when the text has
   scrolled out, a random idle text takes its place. Japanese uses the medium font in a color
   that blinks its alpha. Clipped to the 512x128 screen while drawing, then the edges masked. */
void Vendor_DrawScrollText(void)
{
    STUB_0007813c(0, 0, 0x200, 0x80, 0x200, 0x80, 0);

    if (g_JapaneseMode) {
        DAT_0071efb4 = (g_MainLoopFrames & 0x1f) < 0x10 ? g_VendorJapaneseColor & 0xffffff : g_VendorJapaneseColor;
    }

    if ((int)strlen(g_VendorScrollText) - g_VendorScrollPos / 20 > 0) {
        g_VendorScrollPos += 2;
    }
    else {
        Vendor_SetScrollText(help_msg_string_by_index(g_VendorIdleTexts[MB_randInt(24)]));
    }

    if (!g_JapaneseMode) {
        Vendor_DrawBitmapText((const u8 *)g_VendorScrollText, -g_VendorScrollPos, 8, 2.0f);
    }
    else {
        FontPrintScaledMedium((float)-g_VendorScrollPos, 7.0f, g_VendorJapaneseColor, g_VendorScrollText, -1, 1.25f);
    }

    STUB_0007813c(0, 0, 4, 0x40, 0x200, 0x80, 0);
    STUB_0007813c(0xe2, 0, 0xe6, 0x40, 0x200, 0x80, 0);
}

// 0x016fe20 (0x1c0 bytes)
/* Queues the vendor dude for drawing, stretched to twice the height of his z axis on a 4:3
   screen for the draw and put back after. Clips to the vendor screen first. */
void DrawVendorDude(MobyInstance *moby)
{
    STUB_0007813c(0, 0, 0x200, 0x80, 0x200, 0x80, 0);

    MobyInstance *dude = g_VendorDude;

    if (g_VendorDudeActive == 1) {
        Mtx4 saved = dude->transform;

        if (g_VendorNarrow) {
            dude->transform = saved;
            dude->transform.v2.z = saved.v2.z * 2.0f;
        }

        MB_AddToDrawList(dude, 1);

        if (g_VendorNarrow) {
            g_VendorDude->transform = saved;
        }
    }
}

// 0x016ffe0 (0x9c bytes)
/* value with a thousands comma ("1,234"); returns the length */
int Vendor_FormatBolts(char *buf, int value)
{
    if (value < 1000) {
        return sprintf(buf, "%d", value);
    }

    return sprintf(buf, "%d,%03d", value / 1000, value % 1000);
}

/* the pulsing frame around the selected icon: a gray from the frame counter, then a black inside */
static inline void VendorDrawSelection(int x)
{
    u32 gray = (abs(((g_VendorStateFrames & 0xf) * 4) - 32) + 64) * 0x10202 | 0x80000000;

    Sprite_DrawShapeWrapper(x, 2, 0x38, 0x38, 0, 0, 0x10, 0x10, gray, GetEffectTex(0x16));
    Sprite_DrawShapeWrapper(x + 2, 4, 0x34, 0x34, 0, 0, 0x10, 0x10, 0x80000000, GetEffectTex(0x16));
}

/* an item's icon: the ammo frame (2) for ammo */
static inline int VendorIconTex(VendorItem *item)
{
    return GetIconFrameTex(VendorGadget(item->item)->icon, item->isAmmo == 1 ? 2 : 0);
}

// 0x017007c (0x400 bytes)
/* The row of item icons, 56 apart. Up to 7 items: fixed, the selection framed. More: a strip of
   11 around the selection that slides 4 pixels a frame to catch up with g_VendorCursor (moved by
   the page scroll) and wraps; the frame stays in the middle and shows once it has caught up. */
void DrawWeaponIcons(MobyInstance *moby)
{
    STUB_0007813c(0, 0, 0x200, 0x80, 0x200, 0x80, 0);

    if (g_VendorItemsCnt < 8) {
        VendorDrawSelection(g_VendorSelected * 56 + 8);

        for (int i = 0, x = 12; i < g_VendorItemsCnt; i++, x += 56) {
            DrawSprite(VendorIconTex(&g_VendorItems[i]), x, 6, 0x30, 0x30, 0x80);
        }
    }
    else {
        if (g_VendorCursor < 0) {
            g_VendorCursor += 4;
        }
        else if (g_VendorCursor <= 0) {
            VendorDrawSelection(0xb0);
        }
        else {
            g_VendorCursor -= 4;
        }

        for (int i = -2, x = g_VendorCursor - 100; i < 9; i++, x += 56) {
            int index = (g_VendorItemsCnt * 2 + i + g_VendorSelected - 3) % g_VendorItemsCnt;

            DrawSprite(VendorIconTex(&g_VendorItems[index]), x, 6, 0x30, 0x30, 0x80808080);
        }
    }
}

/* a red line through the price just drawn right-aligned at 118 (width wide): seven bars, each a
   pixel narrower on both sides and more opaque */
static inline void VendorStrikePrice(int width)
{
    for (int i = 0; i < 7; i++) {
        DrawFlatOverlay(0x75 - width + i, 0x6d, 0x7b - i, 0x70, 0x20959544 + i * 0x10000000, 0);
    }
}

// 0x0170490 (0x858 bytes)
/* The selected item's name (85% on Language 3) and price, and the preview mobies 1 and 0. Ammo
   shows "AMMO" and the price per unit; through the PDA that price is struck out with the PDA's
   price above it. A weapon shows its price, grayed and struck out with the Persuader's discount price above it
   once you own the Persuader. */
void DrawWeaponStrings(MobyInstance *moby)
{
    char text[256];
    float scale = g_Language == 3 ? 0.85f : 1.0f;

    STUB_0007813c(0, 0, 0x200, 0x80, 0x200, 0x80, 0);
    MB_AddToDrawList(&g_VendorPreviews[1], 1);
    MB_AddToDrawList(&g_VendorPreviews[0], 1);

    VendorItem *item = &g_VendorItems[g_VendorSelected];

    if (item->isAmmo == 1) {
        FontPrintScaledSmall(6.0f, 8.0f, 0x80f0f0f0, help_msg_string_by_index(VendorGadget(item->item)->name), -1, scale);
        FontPrintSmallLeft(24, 24, 0x80f0f0f0, help_msg_string_by_index(STR_AMMO), -1);

        Vendor_FormatBolts(text, VendorAmmoInfo(g_VendorItems[g_VendorSelected].item)->ammoPrice);
        FontPrintSmallRight(0x76, 0x65, 0x80f0f0f0, text, -1);

        if (g_lastVendorWasPda != 0) {
            VendorStrikePrice(FontLen(text, -1));
            Vendor_FormatBolts(text, VendorUnitPrice(g_VendorItems[g_VendorSelected].item));
            FontPrintSmallRight(0x76, 0x55, 0x80f0f0f0, text, -1);
        }
    }
    else {
        FontPrintScaledSmall(6.0f, 8.0f, 0x80f0f0f0, help_msg_string_by_index(VendorGadget(item->item)->name), -1, scale);

        Vendor_FormatBolts(text, VendorAmmoInfo(g_VendorItems[g_VendorSelected].item)->price);
        FontPrintSmallRight(0x76, 0x65, UnlockableItems.persuader ? 0x80808080 : 0x80f0f0f0, text, -1);

        if (UnlockableItems.persuader) {
            VendorStrikePrice(FontLen(text, -1));
            Vendor_FormatBolts(text, VendorWeaponPrice(g_VendorItems[g_VendorSelected].item));
            FontPrintSmallRight(0x76, 0x55, 0x80f0f0f0, text, -1);
        }
    }
}

/* SetFontWindow's fields, written in place */
static inline void VendorFontWindow(FontWindow *window, int bottom, int right, int textX, int textY, int maxWidth, int maxHeight, int flags)
{
    window->win_top = 0;
    window->win_bot = bottom;
    window->win_left = 0;
    window->win_right = right;
    window->text_x = textX;
    window->text_y = textY;
    window->max_width = maxWidth;
    window->max_height = maxHeight;
    window->line_spacing = 16;
    window->flags = flags;
    window->sub_pixel_x = 0;
    window->sub_pixel_y = 0;
}

/* the selected ammo is full */
static inline bool VendorAmmoFull(VendorItem *item)
{
    return item->isAmmo == 1 && *VendorAmmo(item->item) >= VendorAmmoInfo(item->item)->maxAmmo;
}

// 0x0170cf0 (0x2e0 bytes)
/* The buy button (width x height): "BUY", or with the purchase box open "BACK" when the item
   is out of reach, "BUY" for ammo you can afford, nothing for a weapon you can afford. Centered:
   measured first (flag 4), then printed. moby (the vendor screen) is not used. */
void DrawBuyButton(MobyInstance *moby, int width, int height)
{
    FontWindow window;
    StringId text;

    STUB_0007813c(0, 0, 0x200, 0x80, 0x200, 0x80, 0);
    VendorFontWindow(&window, height, width, width >> 1, (height >> 1) - 7, 0, 0, 1);

    VendorItem *item = &g_VendorItems[g_VendorSelected];

    if (g_VendorMenuState == 0) {
        text = STR_BUY;
    }
    else if (VendorAmmoFull(item)) {
        text = STR_BACK;
    }
    else if (item->isAmmo == 1) {
        text = VendorUnitPrice(item->item) <= g_boltCount ? STR_BUY : STR_BACK;
    }
    else {
        text = VendorWeaponPrice(item->item) <= g_boltCount ? (StringId)0 : STR_BACK;
    }

    if (text != 0) {
        window.flags |= 4;
        FontPrintOpt(&window, 0x80f0f0f0, help_msg_string_by_index(text), -1, 1.0f);
        window.flags ^= 4;
        window.text_y = (height - window.max_height) >> 1;
        FontPrintOpt(&window, 0x80f0f0f0, help_msg_string_by_index(text), -1, 1.0f);
    }
}

// 0x0170fd0 (0x1bc bytes)
/* "EXIT" under the exit button; with the purchase box open only for ammo you can afford and
   still have room for */
void DrawExitButton(MobyInstance *moby)
{
    STUB_0007813c(0, 0, 0x200, 0x80, 0x200, 0x80, 0);

    if (g_VendorMenuState == 0) {
        FontPrintSmallCenter(0x28, 0x14, 0x80f0f0f0, help_msg_string_by_index(STR_EXIT), -1);
        return;
    }

    VendorItem *item = &g_VendorItems[g_VendorSelected];

    if (!VendorAmmoFull(item) && item->isAmmo == 1 && VendorUnitPrice(item->item) <= g_boltCount) {
        FontPrintSmallCenter(0x28, 0x14, 0x80f0f0f0, help_msg_string_by_index(STR_EXIT), -1);
    }
}

// 0x01711a8 (0x5ec bytes)
/* The purchase box's text (width x height): "YOU'RE MAXED OUT", "YOU CAN'T AFFORD IT", or for
   ammo "HOW MANY?" with the quantity (shifted for its digits) between "<" and ">", preview moby 5
   and the total price; for a weapon "PURCHASE" with the BUY/NO choices (85% on Languages 2, 4
   and 5). */
void Vendor_DrawItemInfo(MobyInstance *moby, int width, int height)
{
    FontWindow window;
    char text[264];

    STUB_0007813c(0, 0, 0x200, 0x80, 0x200, 0x80, 0);
    VendorFontWindow(&window, height, width, width / 2, height / 2, width - 8, height - 8, 3);

    VendorItem *item = &g_VendorItems[g_VendorSelected];

    if (VendorAmmoFull(item)) {
        FontPrintOpt(&window, 0x80f0f0f0, help_msg_string_by_index(STR_YOURE_MAXED_OUT), -1, 1.0f);
        return;
    }

    if (item->isAmmo == 1) {
        if (g_boltCount < VendorUnitPrice(item->item)) {
            FontPrintOpt(&window, 0x80f0f0f0, help_msg_string_by_index(STR_YOU_CANT_AFFORD_IT), -1, 1.0f);
            return;
        }

        MB_AddToDrawList(&g_VendorPreviews[5], 1);
        window.flags = 1;
        window.text_y = 6;
        FontPrintOpt(&window, 0x80f0f0f0, help_msg_string_by_index(STR_HOW_MANY), -1, 1.0f);

        sprintf(text, "%d", g_VendorQuantity);

        int x = g_VendorQuantity >= 100 ? 0x17 : g_VendorQuantity >= 10 ? 0x1e : 0x25;

        FontPrintSmallLeft(x, 0x32, 0x80f0f0f0, text, -1);
        FontPrintSmallLeft(0xc, 0x32, 0x80f0f0f0, "<", -1);
        FontPrintSmallLeft(0x40, 0x32, 0x80f0f0f0, ">", -1);

        sprintf(text, "%d", g_VendorQuantity * VendorUnitPrice(g_VendorItems[g_VendorSelected].item));
        FontPrintSmallRight(0x40, 0x4c, 0x80f0f0f0, text, -1);
        return;
    }

    int price = VendorWeaponPrice(item->item);
    float scale = 1.0f;

    if (g_Language == 4 || g_Language == 2 || g_Language == 5) {
        scale = 0.85f;
    }

    if (g_boltCount < price) {
        FontPrintOpt(&window, 0x80f0f0f0, help_msg_string_by_index(STR_YOU_CANT_AFFORD_IT), -1, 1.0f);
    }
    else {
        FontPrintScaledSmall(6.0f, 6.0f, 0x80f0f0f0, help_msg_string_by_index(STR_PURCHASE), -1, scale);
        FontPrintScaledSmall(2.0f, 32.0f, 0x80f0f0f0, help_msg_string_by_index(STR_BUY), -1, scale);
        FontPrintScaledSmall(2.0f, 62.0f, 0x80f0f0f0, help_msg_string_by_index(STR_NO), -1, scale);
    }
}

/* effect texture tex's header word at +8 (0x24-byte headers at EffectTexHeaders) */
static inline u32 *VendorEffectTexWord(int tex)
{
    return (u32 *)(EffectTexHeaders + 8 + tex * 0x24);
}

// 0x01717a8 (0x52c bytes)
/* The vendor screen part's (screen, width x height) effects, additive: now and then (1 in 700
   frames) a noisy white flash that fades in and out over 128 frames (part 0, the scroller,
   always shows at least a faint one), on the other parts a scan line now and then (1 in 360)
   sweeping down over 256 frames, and on part 6 the frame texture. */
void Vendor_DrawFlickerText(int screen, float width, float height)
{
    SetGSReg(0x16, idol_draw::Blend(1, 1, 0, 2, 0, 0, 1, 1));
    *VendorEffectTexWord(GetEffectTex(0x1c)) = 0x10101;
    *VendorEffectTexWord(GetEffectTex(0x1a)) = 0x10101;

    int *flash = &g_VendorFlashTimers[screen];

    if (*flash != 0 || screen == 0) {
        if (*flash != 0) {
            *flash += 2;
        }

        int time = *flash;

        if (screen == 0 && time < 24) {
            time = 24;
        }

        float noiseU = (float)MB_randInt(200);
        float noiseV = (float)MB_randInt(200);
        int alpha = (128 - abs(time - 128)) * 2;

        SetGSReg(6, SCE_GS_SET_CLAMP(0, 0, 0, 0, 0, 0));
        SetGSReg(3, idol_draw::PackCmd(0, 2, 2, 1, alpha > 255 ? 255 : alpha));
        DrawSpriteFont(0.0f, 0.0f, width, height, (int)noiseU, (int)noiseV, (int)(width + noiseU), (int)(height + noiseV), 0x808080, GetEffectTex(0x1a));

        if (*flash >= 256) {
            *flash = 0;
        }
    }

    if (*flash == 0 && MB_randInt(700) == 0) {
        *flash = 2;
    }

    SetGSReg(6, SCE_GS_SET_CLAMP(0, 0, 0, 0, 0, 0));
    SetGSReg(3, idol_draw::PackCmd(0, 1, 0, 1, 0x80));

    if (screen > 0) {
        int *scan = &g_VendorScanTimers[screen];

        if (*scan == 0) {
            if (MB_randInt(360) == 0) {
                *scan = 2;
            }
        }
        else {
            int time = *scan;

            *scan = time + 2;

            int alpha = 128 - abs(time - 126);

            if (alpha > 80) {
                alpha = 80;
            }

            float top = -((float)FastIntToDouble(512 - *scan) * 0.03125f);
            float bottom = height + 16.0f;

            DrawSpriteFont(0.0f, top, width, bottom, 0, 0, (int)width, (int)(bottom * 3.0f), (alpha << 24) | 0xa0a0a0, GetEffectTex(0x1c));

            if (*scan >= 512) {
                *scan = 0;
            }
        }
    }

    if (screen == 6) {
        DrawSpriteFont(0.0f, 0.0f, width, height, 0, 0, 64, 64, 0x80808080, GetEffectTex(0x19));
    }
}

/* RSX command helpers (as in draw.cpp) */
static inline void Emit(RenderingStep *pass, u32 word)
{
    *pass->command++ = (RsxCmd)word;
}

static inline void EmitF(RenderingStep *pass, float value)
{
    Emit(pass, *(u32 *)&value);
}

static inline void EmitMethod(RenderingStep *pass, u32 method, u32 value)
{
    Emit(pass, CELL_GCM_METHOD(method, 1));
    Emit(pass, value);
}

static inline void EmitVertexConstMtx(RenderingStep *pass, int index, Mtx4 *mtx)
{
    float *words = &mtx->v0.x;

    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_TRANSFORM_CONSTANT_LOAD, 17));
    Emit(pass, index);

    for (int i = 0; i < 16; i++) {
        Emit(pass, *(u32 *)&words[i]);
    }
}

static inline void EmitVertexConstVec(RenderingStep *pass, int index, float *vec)
{
    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_TRANSFORM_CONSTANT_LOAD, 5));
    Emit(pass, index);

    for (int i = 0; i < 4; i++) {
        Emit(pass, *(u32 *)&vec[i]);
    }
}

/* libgcm's cellGcmSetSurface, into pass */
static inline void EmitSetSurface(RenderingStep *pass, IdolSurface *surface)
{
    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_CONTEXT_DMA_COLOR_A, 1));
    Emit(pass, CELL_GCM_CONTEXT_DMA_MEMORY_FRAME_BUFFER + surface->colorLocation[0]);
    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_CONTEXT_DMA_COLOR_B, 1));
    Emit(pass, CELL_GCM_CONTEXT_DMA_MEMORY_FRAME_BUFFER + surface->colorLocation[1]);
    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_CONTEXT_DMA_COLOR_C, 2));
    Emit(pass, CELL_GCM_CONTEXT_DMA_MEMORY_FRAME_BUFFER + surface->colorLocation[2]);
    Emit(pass, CELL_GCM_CONTEXT_DMA_MEMORY_FRAME_BUFFER + surface->colorLocation[3]);
    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_CONTEXT_DMA_ZETA, 1));
    Emit(pass, CELL_GCM_CONTEXT_DMA_MEMORY_FRAME_BUFFER + surface->depthLocation);

    u32 logWidth = 31 - __builtin_clz(surface->width);
    u32 logHeight = 31 - __builtin_clz(surface->height);

    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_SURFACE_FORMAT, 6));
    Emit(pass, surface->colorFormat | surface->depthFormat << 5 | surface->type << 8 | surface->antialias << 12 | logWidth << 16 | logHeight << 24);
    Emit(pass, surface->colorPitch[0]);
    Emit(pass, surface->colorOffset[0]);
    Emit(pass, surface->depthOffset);
    Emit(pass, surface->colorOffset[1]);
    Emit(pass, surface->colorPitch[1]);
    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_SURFACE_PITCH_Z, 1));
    Emit(pass, surface->depthPitch);
    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_SURFACE_PITCH_C, 4));
    Emit(pass, surface->colorPitch[2]);
    Emit(pass, surface->colorPitch[3]);
    Emit(pass, surface->colorOffset[2]);
    Emit(pass, surface->colorOffset[3]);
    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_SURFACE_COLOR_TARGET, 1));
    Emit(pass, surface->colorTarget);
    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_WINDOW_OFFSET, 1));
    Emit(pass, surface->y << 16 | surface->x);
    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_SURFACE_CLIP_HORIZONTAL, 2));
    Emit(pass, surface->width << 16 | surface->x);
    Emit(pass, surface->height << 16 | surface->y);
    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_SHADER_WINDOW, 1));
    Emit(pass, (surface->height - ((surface->height >> 12) & 1)) | 0x1000);
}

// 0x0171d00 (0xefc bytes)
// inlined: FastAtan2 @0x171e10
/* BeginAuxDrawMode for the vendor screen: the HUD pass drawn into the aux buffer, a
   (1 << log2Width) by (1 << log2Height) surface, with the view context set by SetUserViewContext
   (xratio, no fog), a projection of near 0.1 and far 400 and GameCamera's view uploaded to the
   HUD pass only; cleared to transparent black. g_VendorScreenTex describes it as a texture.
   Unlike BeginAuxDrawMode it leaves the screen globals and the blend state alone. */
void Vendor_SetupScreenRender(float xratio, int log2Width, int log2Height)
{
    IdolDraw *idol = (IdolDraw *)(uintptr_t)g_pIdolDraw;
    int width = 1 << log2Width;
    int height = 1 << log2Height;

    g_ViewContext.fovScale = 1.0f;
    SetUserViewContext(width, height, xratio, 0.0f, 524288.0f, 255.0f, 0.0f);

    float fovDeg = FastAtan2Inline(g_ViewContext.yratio, 1.0f) * 57.295776f * g_ViewContext.fovScale;

    idol->vtable->SetPerspective(fovDeg, 0.1f, 400.0f, idol);

    /* the camera as a 4x4 (its rotation rows across, its position below) */
    Mtx4 camera;

    camera.v0.x = GameCamera.mtx0.v0.x;
    camera.v0.y = GameCamera.mtx0.v1.x;
    camera.v0.z = GameCamera.mtx0.v2.x;
    camera.v0.w = 0.0f;
    camera.v1.x = GameCamera.mtx0.v0.y;
    camera.v1.y = GameCamera.mtx0.v1.y;
    camera.v1.z = GameCamera.mtx0.v2.y;
    camera.v1.w = 0.0f;
    camera.v2.x = GameCamera.mtx0.v0.z;
    camera.v2.y = GameCamera.mtx0.v1.z;
    camera.v2.z = GameCamera.mtx0.v2.z;
    camera.v2.w = 0.0f;
    camera.v3.x = GameCamera.posX;
    camera.v3.y = GameCamera.posY;
    camera.v3.z = GameCamera.posZ;
    camera.v3.w = 1.0f;
    idol->vtable->SetView(idol, &camera);

    Mtx4 transposed;

    VecTranspose4(&transposed, &idol->viewProjMtx);
    EmitVertexConstMtx(HUD_Pass, 0, &transposed);
    VecTranspose4(&transposed, &idol->viewMtx);
    EmitVertexConstMtx(HUD_Pass, 8, &transposed);

    g_AuxWidth = width;
    g_AuxHeight = height;
    idol->auxDepth++;

    IdolSurface surface;

    memset(&surface, 0, sizeof(surface));
    surface.colorFormat = CELL_GCM_SURFACE_A8R8G8B8;
    surface.colorTarget = CELL_GCM_SURFACE_TARGET_0;
    surface.colorLocation[0] = 0;
    surface.colorOffset[0] = idol->auxBuffer - idol->vramBase;
    surface.colorPitch[0] = width * 4;

    for (int i = 1; i < 4; i++) {
        surface.colorLocation[i] = 0;
        surface.colorOffset[i] = 0;
        surface.colorPitch[i] = 64;
    }

    surface.depthFormat = CELL_GCM_SURFACE_Z24S8;
    surface.depthPitch = width * 4;
    surface.depthLocation = 0;
    surface.type = CELL_GCM_SURFACE_PITCH;
    surface.antialias = 0;
    surface.depthOffset = idol->auxBuffer + height * width * 4 - idol->vramBase;
    surface.width = width;
    surface.height = height;

    g_VendorScreenTex[0] = surface.colorOffset[0];
    surface.x = 0;
    surface.y = 0;
    g_VendorScreenTex[1] = 0x1a529;
    g_VendorScreenTex[6] = width << 16 | height;
    g_VendorScreenTex[2] = 0x30303;
    g_VendorScreenTex[3] = 0x80010000;
    g_VendorScreenTex[4] = 0xaae4;
    g_VendorScreenTex[7] = (width * 4) | 1 << 20;
    g_VendorScreenTex[5] = 0x2062000;
    ((u8 *)g_VendorScreenTex)[32] = 0;
    ((u8 *)g_VendorScreenTex)[33] = 0xff;

    EmitSetSurface(HUD_Pass, &surface);

    EmitMethod(HUD_Pass, CELL_GCM_NV4097_SET_COLOR_CLEAR_VALUE, 0);
    EmitMethod(HUD_Pass, CELL_GCM_NV4097_SET_ZSTENCIL_CLEAR_VALUE, 0xffffff00);
    EmitMethod(HUD_Pass, CELL_GCM_NV4097_SET_DEPTH_MASK, 1);
    EmitMethod(HUD_Pass, CELL_GCM_NV4097_SET_DEPTH_TEST_ENABLE, 1);
    EmitMethod(HUD_Pass, CELL_GCM_NV4097_SET_BLEND_ENABLE, 1);
    EmitMethod(HUD_Pass, CELL_GCM_NV4097_INVALIDATE_L2, 1);

    float halfWidth = (float)width * 0.5f;
    float halfHeight = (float)height * 0.5f;
    float screen[4] = { halfWidth, halfHeight, halfWidth, -halfHeight };

    EmitVertexConstVec(HUD_Pass, 18, screen);

    Emit(HUD_Pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_VIEWPORT_HORIZONTAL, 2));
    Emit(HUD_Pass, width << 16);
    Emit(HUD_Pass, height << 16);
    Emit(HUD_Pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_CLIP_MIN, 2));
    EmitF(HUD_Pass, 0.0f);
    EmitF(HUD_Pass, 1.0f);

    /* the viewport offset and scale, written twice */
    for (int i = 0; i < 2; i++) {
        Emit(HUD_Pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_VIEWPORT_OFFSET, 8));
        EmitF(HUD_Pass, halfWidth);
        EmitF(HUD_Pass, halfHeight);
        EmitF(HUD_Pass, 0.5f);
        EmitF(HUD_Pass, 0.0f);
        EmitF(HUD_Pass, halfWidth);
        EmitF(HUD_Pass, -halfHeight);
        EmitF(HUD_Pass, 0.5f);
        EmitF(HUD_Pass, 0.0f);
    }

    Emit(HUD_Pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_SCISSOR_HORIZONTAL, 2));
    Emit(HUD_Pass, width << 16);
    Emit(HUD_Pass, height << 16);

    idol_draw::BindVertexProgram((uintptr_t)idol, (int)(uintptr_t)HUD_Pass, 12);
    idol_draw::BindFragmentProgram((uintptr_t)idol, (int)(uintptr_t)HUD_Pass, 12);

    EmitMethod(HUD_Pass, CELL_GCM_NV4097_CLEAR_SURFACE, CELL_GCM_CLEAR_Z | CELL_GCM_CLEAR_S | CELL_GCM_CLEAR_R | CELL_GCM_CLEAR_G | CELL_GCM_CLEAR_B | CELL_GCM_CLEAR_A);
    EmitMethod(HUD_Pass, CELL_GCM_NV4097_NO_OPERATION, 0);
}

// 0x0172bfc (0x24 bytes)
/* ends the vendor screen's aux drawing */
void Vendor_ResetHUDPass(void)
{
    EndAuxDrawMode();
}

/* dir scaled to length (0 for a zero dir) */
static inline void VendorScaleTo(Vec4 *out, Vec4 *dir, float dirLength, float length)
{
    if (dirLength == 0.0f) {
        out->x = 0.0f;
        out->y = 0.0f;
        out->z = 0.0f;
        return;
    }

    float scale = length / dirLength;

    out->x = scale * dir->x;
    out->y = scale * dir->y;
    out->z = scale * dir->z;
}

static inline float VendorLength3(Vec4 *v)
{
    return sqrtf(v->x * v->x + v->y * v->y + v->z * v->z);
}

// 0x0172c40 (0xa3c bytes)
/* The vendor moby's six screens (its HUD update): each part spans three of its joints (4 per
   part), inset; it is drawn into the aux buffer (512x128) with its contents and effects, then
   put on screen as a sprite over the part's projected box. While the vendor opens or closes
   the boxes grow from or shrink to their centers; in cutscenes the texture is cut to 92.86%. */
void Vendor_HudUpdate(MobyInstance *moby)
{
    VendorScreenPart *parts = g_VendorScreenParts;

    for (int screen = 0; screen < 6; screen++) {
        int joints[3] = { screen * 4, screen * 4 + 1, screen * 4 + 2 };
        Vec4 points[3];

        GetMobyJointsWorldPos(moby, 3, joints, points);

        Vec4 dirA;
        Vec4 dirB;
        Vec4 step;
        Vec4 extentA;
        Vec4 extentB;
        Vec4 corner = points[0];

        dirA.x = points[1].x - points[0].x;
        dirA.y = points[1].y - points[0].y;
        dirA.z = points[1].z - points[0].z;
        dirB.x = points[2].x - points[0].x;
        dirB.y = points[2].y - points[0].y;
        dirB.z = points[2].z - points[0].z;

        float lengthA = VendorLength3(&dirA);

        VendorScaleTo(&step, &dirA, lengthA, parts[screen].offsetA);
        corner.x += step.x;
        corner.y += step.y;
        corner.z += step.z;
        VendorScaleTo(&extentA, &dirA, lengthA, lengthA - parts[screen].insetA * 2.0f);

        float lengthB = VendorLength3(&dirB);

        VendorScaleTo(&step, &dirB, lengthB, parts[screen].offsetB);
        corner.x += step.x;
        corner.y += step.y;
        corner.z += step.z;
        VendorScaleTo(&extentB, &dirB, lengthB, lengthB - parts[screen].insetB * 2.0f);

        Vec4 opposite;
        float fullWidth;
        float fullHeight;
        float unusedLeft;
        float unusedTop;

        opposite.x = corner.x + extentA.x + extentB.x;
        opposite.y = corner.y + extentA.y + extentB.y;
        opposite.z = corner.z + extentA.z + extentB.z;
        opposite.w = corner.w;
        ProjectBoxToScreen(corner, opposite, &fullWidth, &fullHeight, &unusedLeft, &unusedTop);

        /* growing in or shrinking out around the center */
        if (g_VendorExiting || g_VendorOpening) {
            float grow = 1.0f;

            if (g_VendorOpening) {
                grow = (float)FastIntToDouble(8 - g_VendorOpenTimer) * 0.125f;
            }

            if (g_VendorExiting) {
                grow = (float)FastIntToDouble(g_VendorExitTimer) * 0.125f;
            }

            Vec4 shiftA;
            Vec4 shiftB;
            float extentLengthA = VendorLength3(&extentA);

            VendorScaleTo(&shiftA, &extentA, extentLengthA, extentLengthA * (1.0f - grow) * 0.5f);
            VendorScaleTo(&extentA, &extentA, extentLengthA, grow * extentLengthA);

            float extentLengthB = VendorLength3(&extentB);

            VendorScaleTo(&shiftB, &extentB, extentLengthB, extentLengthB * (1.0f - grow) * 0.5f);
            VendorScaleTo(&extentB, &extentB, extentLengthB, grow * extentLengthB);

            corner.x = corner.x + shiftA.x + shiftB.x;
            corner.y = corner.y + shiftA.y + shiftB.y;
            corner.z = corner.z + shiftA.z + shiftB.z;
            opposite.x = corner.x + extentB.x + extentA.x;
            opposite.y = corner.y + extentB.y + extentA.y;
            opposite.z = corner.z + extentB.z + extentA.z;
        }

        float width;
        float height;
        float left;
        float top;

        ProjectBoxToScreen(corner, opposite, &width, &height, &left, &top);

        Vendor_SetupScreenRender(1.0f, 9, 7);
        STUB_00078138(0x200, 0x200);
        SetGSReg(3, idol_draw::PackCmd(0, 1, 2, 1, 0xff));

        if (screen == 5) {
            DrawWeaponIcons(moby);
        }
        else if (screen == 4) {
            DrawExitButton(moby);
        }
        else if (screen == 3) {
            DrawBuyButton(moby, (int)width, (int)height);
        }
        else if (screen == 2) {
            DrawVendorDude(moby);
        }
        else if (screen == 1) {
            DrawWeaponStrings(moby);
        }
        else if (screen == 0) {
            Vendor_DrawScrollText();
        }

        Vendor_DrawFlickerText(screen, width, height);
        EndAuxDrawMode();
        SetGSReg(3, idol_draw::PackCmd(0, 1, 2, 1, 0xff));
        SetGSReg(6, SCE_GS_SET_CLAMP(1, 1, 0, 0, 0, 0));
        STUB_001754c0();

        int texHeight = Cutscene == 0 ? (int)(fullHeight * 0.5f) : FastDoubleToInt(fullHeight * 0.92857146f * 0.5f);

        Sprite_DrawShape((int)left, (int)top, (int)width, (int)height, 0, 0, (int)(fullWidth * 0.5f), texHeight, 0x80808080, g_VendorScreenTex);
    }
}

// 0x0173690 (0x4bc bytes)
/* Glows over screens 1-5 of the vendor moby (posted while a vendor state is young): each
   part's box (as in Vendor_HudUpdate) as a quad of effect texture 0x19, added. */
void Vendor_DrawMobyHighlight(MobyInstance *moby)
{
    VendorScreenPart *parts = g_VendorScreenParts;
    float cornerW = 1.0f;
    float edge = 0.984375f;

    for (int screen = 1; screen < 6; screen++) {
        int joints[3] = { screen * 4, screen * 4 + 1, screen * 4 + 2 };
        Vec4 points[3];

        GetMobyJointsWorldPos(moby, 3, joints, points);

        Vec4 dirA;
        Vec4 dirB;
        Vec4 step;
        Vec4 extentA;
        Vec4 extentB;
        Vec4 corner = points[0];

        dirA.x = points[1].x - points[0].x;
        dirA.y = points[1].y - points[0].y;
        dirA.z = points[1].z - points[0].z;
        dirB.x = points[2].x - points[0].x;
        dirB.y = points[2].y - points[0].y;
        dirB.z = points[2].z - points[0].z;

        float lengthA = VendorLength3(&dirA);

        VendorScaleTo(&step, &dirA, lengthA, parts[screen].offsetA);
        corner.x += step.x;
        corner.y += step.y;
        corner.z += step.z;
        VendorScaleTo(&extentA, &dirA, lengthA, lengthA - parts[screen].insetA * 2.0f);

        float lengthB = VendorLength3(&dirB);

        VendorScaleTo(&step, &dirB, lengthB, parts[screen].offsetB);
        corner.x += step.x;
        corner.y += step.y;
        corner.z += step.z;
        VendorScaleTo(&extentB, &dirB, lengthB, lengthB - parts[screen].insetB * 2.0f);

        QuadDef quad;
        float width;
        float height;
        float left;
        float top;

        quad.xyzw[0] = corner;
        quad.xyzw[1].x = corner.x + extentA.x;
        quad.xyzw[1].y = corner.y + extentA.y;
        quad.xyzw[1].z = corner.z + extentA.z;
        quad.xyzw[1].w = corner.w;
        quad.xyzw[2].x = corner.x + extentB.x;
        quad.xyzw[2].y = corner.y + extentB.y;
        quad.xyzw[2].z = corner.z + extentB.z;
        quad.xyzw[2].w = corner.w;
        quad.xyzw[3].x = quad.xyzw[2].x + extentA.x;
        quad.xyzw[3].y = quad.xyzw[2].y + extentA.y;
        quad.xyzw[3].z = quad.xyzw[2].z + extentA.z;
        quad.xyzw[3].w = corner.w;

        /* projected too, but the result is not used */
        ProjectBoxToScreen(quad.xyzw[0], quad.xyzw[3], &width, &height, &left, &top);

        for (int i = 0; i < 4; i++) {
            quad.rgba[i] = 0x80808080;
        }

        quad.clamp = SCE_GS_SET_CLAMP(1, 1, 0, 0, 0, 0);
        quad.tex1 = SCE_GS_SET_TEX1(1, 0, 0, 0, 0, 0, 0);
        quad.alpha = idol_draw::PackCmd(0, 1, 0, 1, 0x80);
        quad.tex0 = GetEffectTex(0x19);
        /* (s, t) per corner */
        float *st = &quad.st[0][0];

        quad.xyzw[0].w = 1.0f;
        st[0] = 0.0f;
        st[1] = 0.0f;
        quad.xyzw[1].w = cornerW;
        quad.xyzw[2].w = cornerW;
        quad.xyzw[3].w = cornerW;
        st[2] = 0.984375f;
        st[3] = 0.0f;
        st[4] = 0.0f;
        st[5] = edge;
        st[6] = edge;
        st[7] = edge;

        SetGSReg(0x16, idol_draw::Blend(1, 1, 0, 2, 0, 0, 1, 1));
        FastDrawQuad(&quad, NULL, 1, (void *)(uintptr_t)EffectTexHeaders, 9);
    }
}

// 0x0173b60 (0x40c bytes)
/* The purchase box moby's screen (its HUD update): the box between its joints 0-2 (0.03 and
   0.04 in from the edges), drawn into the aux buffer (512x512) with Vendor_DrawItemInfo and
   part 6's frame, then the moby itself and the screen over it as a sprite. */
void Vendor_DrawScreen(MobyInstance *moby)
{
    int joints[3] = { 0, 1, 2 };
    Vec4 points[3];

    GetMobyJointsWorldPos(moby, 3, joints, points);

    Vec4 dirA;
    Vec4 dirB;
    Vec4 step;
    Vec4 extentA;
    Vec4 extentB;
    Vec4 corner = points[0];

    dirA.x = points[1].x - points[0].x;
    dirA.y = points[1].y - points[0].y;
    dirA.z = points[1].z - points[0].z;
    dirB.x = points[2].x - points[0].x;
    dirB.y = points[2].y - points[0].y;
    dirB.z = points[2].z - points[0].z;

    float lengthA = VendorLength3(&dirA);

    VendorScaleTo(&step, &dirA, lengthA, 0.03f);
    corner.x += step.x;
    corner.y += step.y;
    corner.z += step.z;
    VendorScaleTo(&extentA, &dirA, lengthA, lengthA - 0.06f);

    float lengthB = VendorLength3(&dirB);

    VendorScaleTo(&step, &dirB, lengthB, 0.04f);
    corner.x += step.x;
    corner.y += step.y;
    corner.z += step.z;
    VendorScaleTo(&extentB, &dirB, lengthB, lengthB - 0.04f);

    Vec4 opposite;
    int width;
    int height;
    int left;
    int top;

    opposite.x = corner.x + extentB.x + extentA.x;
    opposite.y = corner.y + extentB.y + extentA.y;
    opposite.z = corner.z + extentB.z + extentA.z;
    opposite.w = corner.w;
    ProjectBoxToScreenInt(corner, opposite, &width, &height, &left, &top);

    Vendor_SetupScreenRender(1.0f, 9, 9);
    STUB_00078138(0x200, 0x200);
    idol_draw::DrawDepth(HUD_Pass, idol_draw::PackCmd(0, 1, 2, 1, 0xff));
    Vendor_DrawItemInfo(moby, width, height);
    Vendor_DrawFlickerText(6, (float)width, (float)height);
    EndAuxDrawMode();

    STUB_00078138(0x200, 0x200);
    idol_draw::DrawDepth(HUD_Pass, idol_draw::PackCmd(0, 1, 2, 1, 0xff));
    idol_draw::DrawDepth(MobyPass, idol_draw::PackCmd(0, 1, 2, 1, 0xff));
    MB_AddToDrawList(moby, 1);
    Sprite_DrawShape(left, top, width, height, 0, 0, width / 2, height / 2, 0x80808080, g_VendorScreenTex);
}

// 0x0173f78 (0x574 bytes)
/* The vendor moby's scrolling overlay: 4 quads of effect texture 0x18 between corners fixed on
   the moby, half transparent, their texture scrolling 0.01 a frame. */
void Vendor_DrawScrollingOverlay(void)
{
    QuadDef quad;

    g_VendorOverlayScroll += 0.01f;

    if (!(g_VendorOverlayScroll <= 1.0f)) {
        g_VendorOverlayScroll -= 1.0f;
    }

    quad.clamp = SCE_GS_SET_CLAMP(0, 0, 0, 0, 0, 0);
    quad.tex1 = SCE_GS_SET_TEX1(1, 0, 0, 0, 0, 0, 0);
    quad.alpha = idol_draw::PackCmd(0, 1, 0, 1, 0x40);
    quad.tex0 = GetEffectTex(0x18);

    for (int i = 0; i < 4; i++) {
        int *corners = g_VendorOverlayQuads[i];
        float *st = &quad.st[0][0];

        for (int corner = 0; corner < 4; corner++) {
            MobyPoint(g_VendorMoby, &g_VendorOverlayVerts[corners[corner]], &quad.xyzw[corner]);
        }

        for (int corner = 0; corner < 4; corner++) {
            quad.rgba[corner] = g_VendorOverlayColors[corners[corner]];
            st[corner * 2] = g_VendorOverlayUVs[corners[corner]][0];
            st[corner * 2 + 1] = g_VendorOverlayUVs[corners[corner]][1] + g_VendorOverlayScroll;
        }

        FastDrawQuad(&quad, NULL, 1, (void *)(uintptr_t)EffectTexHeaders, 9);
    }
}

// 0x01744f0 (0x61c bytes)
/* The vendor's frame drawing (nothing during cutscenes). While the world shows (mode 0) it is
   drawn as usual; the frame after the vendor opened, with the vendor moby hidden and without
   its HUD, it is presented one more time and kept in the render target, and the vendor screen
   is set up: the vendor moby scaled for it, the camera orientation saved (from the PDA also its
   polar angles, and it is reset to the identity; otherwise mirrored), preview mobies 0 and 5
   made, the item preview spawned, the scroller's buffer cleared and the dude's data loaded
   (vendor_pal.ps3 when g_IsPal is 0, as the code has it). Mode 1 draws the kept frame, then
   the vendor moby with its item, overlay, screens and highlight, and the HUD. */
void Vendor_PostUpdate(void)
{
    char path[64];

    if (g_CutscenePlaying != 0) {
        return;
    }

    STUB_00078100();

    if (g_VendorDrawMode > 1 || g_VendorDrawMode < 0) {
        return;
    }

    if (g_VendorDrawMode == 0) {
        int setup = g_VendorSetupPending;

        if (setup != 0) {
            g_VendorMoby->modeBits |= DISABLED;
        }

        g_RenderFlags = (RENDER)0x100ff;

        if (setup != 0 || g_OpenVendorState == 3) {
            g_RenderFlags = (RENDER)(g_RenderFlags & ~0x10080);
        }

        DefaultDraw();

        if (g_VendorSetupPending == 0) {
            return;
        }

        g_VendorSetupPending = 0;
        g_VendorDrawMode = 1;
        g_MainLoopFrames++;
        vu1_bufSize = 0x60000;
        Draw_FlushAndPresent();

        g_VendorMoby->scale = 0.141908f;
        g_VendorMoby->modeBits &= ~DISABLED;

        if (g_lastVendorWasPda != 0) {
            g_VendorCamRot.x = GameCamera.rot.azimuth;
            g_VendorCamRot.y = GameCamera.rot.elevation;
            g_VendorCamRot.z = GameCamera.rot.radius;
            g_VendorCamRot.w = GameCamera.rotW;
            g_VendorSavedOrient[0] = GameCamera.orientMtx.forward;
            g_VendorSavedOrient[1] = GameCamera.orientMtx.right;
            g_VendorSavedOrient[2] = GameCamera.orientMtx.up;
            memset(&GameCamera.orientMtx.forward, 0, sizeof(Vec4));
            memset(&GameCamera.orientMtx.right, 0, sizeof(Vec4));
            memset(&GameCamera.orientMtx.up, 0, sizeof(Vec4));
            GameCamera.orientMtx.forward.x = 1.0f;
            GameCamera.orientMtx.right.y = 1.0f;
            GameCamera.orientMtx.up.z = 1.0f;
            GameCamera.orientMtx.up.w = 1.0f;
            ComposeCameraMatrix();
        }
        else {
            /* right = up x forward */
            Vec4 *forward = &GameCamera.orientMtx.forward;
            Vec4 *up = &GameCamera.orientMtx.up;
            float rightX = up->y * forward->z - up->z * forward->y;
            float rightY = up->z * forward->x - up->x * forward->z;
            float rightZ = up->x * forward->y - up->y * forward->x;

            g_VendorSavedOrient[0] = GameCamera.orientMtx.forward;
            g_VendorSavedOrient[1] = GameCamera.orientMtx.right;
            g_VendorSavedOrient[2] = GameCamera.orientMtx.up;
            GameCamera.orientMtx.right.x = rightX;
            GameCamera.orientMtx.right.y = rightY;
            GameCamera.orientMtx.right.z = rightZ;
            GameCamera.orientMtx.right.w = 0.0f;
        }

        g_VendorPreviews = (MobyInstance *)(g_VendorBufEnd + 0x100);
        InitMobyInstance(&g_VendorPreviews[0], 0xd);
        g_VendorPreviews[0].drawDistance = 0x40;
        UpdateMobyTransform(&g_VendorPreviews[0]);
        SetMobyLights(&g_VendorPreviews[0], 0x202020, 0xe, 0xe, 0);
        InitMobyInstance(&g_VendorPreviews[5], 0xd);
        g_VendorPreviews[5].drawDistance = 0x40;
        UpdateMobyTransform(&g_VendorPreviews[5]);
        SetMobyLights(&g_VendorPreviews[5], 0x202020, 0xe, 0xe, 0);

        IdolDraw *idol = (IdolDraw *)(uintptr_t)g_pIdolDraw;

        if (idol->unk11 == 0x81 && ((idol->unk14 >> 1) & 1) == 0) {
            idol->vtable->BuildAndFlipFrame(idol);
        }

        idol->unk1a8c += 2;
        Vendor_SpawnPreviewMoby();

        g_VendorScrollText = (char *)(g_VendorBufEnd + 0x1400);
        FastMemSetZero(g_VendorScrollText, 0x400);
        *(u8 **)&DAT_00e5a668 = (u8 *)g_VendorScrollText + 0x400;

        if (g_MusicLoading == 0) {
            if (g_IsPal == 0) {
                sprintf(path, "rc1/ps3data/global/vendor_pal.ps3");
            }
            else {
                sprintf(path, "rc1/ps3data/global/vendor.ps3");
            }

            g_VendorDudeLoaded = LoadAssetFromFile(path, *(u8 **)&DAT_00e5a668, -1) != 0;
        }
        else {
            g_VendorDudeLoaded = 0;
        }
    }

    DrawRenderTargetToScreen();
    EmitMethod(DepthPass, CELL_GCM_NV4097_SET_ZSTENCIL_CLEAR_VALUE, 0xffffff00);
    EmitMethod(DepthPass, CELL_GCM_NV4097_CLEAR_SURFACE, CELL_GCM_CLEAR_Z);
    EmitMethod(DepthPass, CELL_GCM_NV4097_NO_OPERATION, 0);

    STUB_0006d704();
    ComposeCameraMatrix();
    STUB_0006849c();
    DrawMobyDepth();
    STUB_000f1844();
    STUB_000f1848();

    if ((g_VendorPreviewDirty | g_lastVendorWasPda) == 0) {
        VendorItem *item = &g_VendorItems[g_VendorSelected];

        if (item->isAmmo == 1) {
            if (g_VendorItemModels[item->item].extraClass != 0) {
                MB_AddToDrawList(&g_VendorPreviews[2], 1);
            }
        }
        else {
            MB_AddToDrawList(&g_VendorPreviews[3], 1);
        }
    }

    MB_AddToDrawList(g_VendorMoby, 1);

    if (g_lastVendorWasPda == 0) {
        Vendor_DrawScrollingOverlay();
    }

    Vendor_HudUpdate(g_VendorMoby);

    if (g_VendorMenuState != 0) {
        Vendor_DrawScreen(&g_VendorPreviews[4]);
    }

    Vendor_DrawMobyHighlight(g_VendorMoby);
    SetGSReg(3, idol_draw::PackCmd(0, 1, 0, 1, 0x80));
    DrawGameplayHud();
    STUB_0006d708();
    STUB_000f184c();
    DrawMobyList();
    STUB_00174cf4(0x10);
    STUB_000f1448();
}
