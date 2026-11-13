#include "rc1.h"
// MERGE
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

/* item uses ammo (its max ammo in the weapon ammo table at 0x737d38, 0x18 bytes an item, is set) */
static inline bool VendorHasAmmo(int item)
{
    return *(short *)((u8 *)&DAT_00737d38 + item * 0x18) != 0;
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
        DAT_00e5a9d2 = idol->widescreen == 0;
        DAT_00e5aa38 = 1;
        DAT_00e5aa40 = DAT_00e5a9d2;
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
    DAT_00e5a944 = 0;
    DAT_00e5a94c = 0;
    g_VendorMenuState = 0;
    DAT_00e5a95c = 0;
    *(float *)&DAT_00e5a950 = 0.0f;

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
        int maxAmmo = *(u16 *)((u8 *)&DAT_00737d38 + selected->item * 0x18 + 6);

        g_VendorAmmoHud = RegisterHUDCallback(0x30, selected->item + 60000, &PTR_AmmoHud_Init_00705808, &PTR_HudEntry_UpdateCounter_007056c8, &PTR_Draw_AmmoCounter_00705888, (int *)((u8 *)&currentAmmoArray + selected->item * 4), maxAmmo);
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
    DAT_00e5a9d1 = 0;
    DAT_00e5a874 = DAT_00e5a8f4;
    DAT_00e5a8b4 = DAT_00e5a934;
}

/* offset (in the vendor moby's space) moved into the world: turned by its transform and put at
   its position, w from the transform plus offset's own */
static inline void VendorMobyPoint(Vec4 *offset, Vec4 *out)
{
    Mtx4 *mtx = &g_VendorMoby->transform;

    out->x = mtx->v0.x * offset->x + mtx->v1.x * offset->y + mtx->v2.x * offset->z + g_VendorMoby->pos.x;
    out->y = mtx->v0.y * offset->x + mtx->v1.y * offset->y + mtx->v2.y * offset->z + g_VendorMoby->pos.y;
    out->z = mtx->v0.z * offset->x + mtx->v1.z * offset->y + mtx->v2.z * offset->z + g_VendorMoby->pos.z;
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

        VendorMobyPoint(&g_VendorHeroOffset, &pos);
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
    DAT_00e5a654 = 0;

    VendorMobyPoint(&g_VendorCutsceneOffset, &g_VendorCutscenePos);
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
