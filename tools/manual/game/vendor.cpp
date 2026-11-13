#include "rc1.h"
// MERGE
#include "idol/fastinline.h"
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
    DAT_00e5a658 = 0;
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
    DAT_00e5aa64 -= 0x40000;
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

    /* the item table at 0x721010, 0x4c bytes an item: its model class first */
    LoadGadgetModel(((int *)&DAT_00721010)[g_VendorBoughtItem * 0x13], -1);
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
    DAT_00e5aa64 -= 0x40000;
    DAT_0095cda8 = g_NpcBuffer;
    g_SceneLoadBuffer = g_NpcBuffer + 0x200000;
    SceneScreenFade = 1.0f;
    g_SceneFlash = 0.0f;

    int cutscene = g_WeaponCutscenes[item];

    Hero_KillGadget(0, 0);
    DAT_0096bd98 = item;
    LoadGadgetModel(((int *)&DAT_00721010)[item * 0x13], -1);
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

    int oClass = ((int *)&DAT_00721010)[g_VendorItems[g_VendorSelected].item * 0x13];

    if (g_VendorItems[g_VendorSelected].item == 0x18) {
        oClass = 0x1df;
    }
    else {
        LoadGadgetModel(((int *)&DAT_00721010)[g_VendorItems[g_VendorSelected].item * 0x13], -1);
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
    MB_SetLights(preview, 0x202020, 0xe, 0xe, 0);

    int extraClass = g_VendorItemModels[g_VendorItems[g_VendorSelected].item].extraClass;

    if (extraClass != 0) {
        InitMobyInstance(&g_VendorPreviews[2], extraClass);
        g_VendorPreviews[2].drawDistance = 0x40;
        UpdateMobyTransform(&g_VendorPreviews[2]);
        MB_SetLights(&g_VendorPreviews[2], 0x202020, 0xe, 0xe, 0);
    }

    MobyInstance *copy = &g_VendorPreviews[3];

    VendorPreviewInit(copy, oClass);
    UpdateMobyTransform(copy);
    VendorPreviewPose(copy);
    copy->modeBits |= 0x100;
    MB_SetLights(copy, 0x202020, 0xe, 0xe, 0);

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

    return UnlockableItems.persuader == 0 ? info->price : info->priceAlt;
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
        MB_SetLights(box, 0x101010, 0xe, 0xe, 0);

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
                MB_SetLights(g_VendorDude, 0x202020, 0xe, 0xe, 0);
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

                    DAT_00e5a658 = 0;
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
                DAT_00e5a65c = 1;
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
