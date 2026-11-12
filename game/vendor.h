#pragma once
// game/vendor.h
#include "types.h"
#include "game/debug.h"

// ---- globals
extern undefined4 DAT_00101010; /* 0x101010 */
extern undefined4 DAT_0016fc04; /* 0x16fc04 */
extern undefined4 DAT_00172c20; /* 0x172c20 */
extern undefined4 DAT_00653f08; /* no defined data */
extern undefined4 DAT_00653fa4; /* no defined data */
extern undefined4 DAT_00653fac; /* no defined data */
extern undefined4 DAT_0071efb4; /* 0x71efb4 */
extern undefined4 DAT_00721000; /* no defined data */
extern undefined4 DAT_00721038; /* no defined data */
extern undefined4 DAT_00735580; /* 0x735580 */
extern undefined4 DAT_00735590; /* no defined data */
extern undefined4 DAT_00737d30; /* no defined data */
extern undefined4 DAT_00737d34; /* no defined data */
extern undefined2 DAT_00737d38; /* 0x737d38 */
extern undefined4 DAT_00737d3a; /* no defined data */
extern undefined2 DAT_00737d3e; /* 0x737d3e */
extern undefined4 DAT_007387cc; /* 0x7387cc */
extern undefined4 DAT_00738840; /* 0x738840 */
extern undefined4 DAT_00738844; /* 0x738844 */
extern undefined4 DAT_00738848; /* 0x738848 */
extern undefined4 DAT_0073884c; /* 0x73884c */
extern undefined4 DAT_00738850; /* 0x738850 */
extern undefined4 DAT_00738854; /* 0x738854 */
extern undefined4 DAT_00738858; /* 0x738858 */
extern undefined4 DAT_0073885c; /* 0x73885c */
extern undefined4 DAT_00738860; /* 0x738860 */
extern undefined4 DAT_00738864; /* 0x738864 */
extern undefined4 DAT_00738868; /* 0x738868 */
extern undefined4 DAT_0073886c; /* 0x73886c */
extern undefined4 DAT_00738870; /* 0x738870 */
extern undefined4 DAT_00738874; /* 0x738874 */
extern undefined4 DAT_00738878; /* 0x738878 */
extern undefined4 DAT_0073887c; /* 0x73887c */
extern undefined4 DAT_00738880; /* 0x738880 */
extern undefined4 DAT_00738884; /* 0x738884 */
extern undefined4 DAT_00738888; /* 0x738888 */
extern undefined4 DAT_0073888c; /* 0x73888c */
extern undefined4 DAT_00738890; /* 0x738890 */
extern undefined4 DAT_00738894; /* 0x738894 */
extern undefined4 DAT_00738898; /* 0x738898 */
extern undefined4 DAT_0073889c; /* 0x73889c */
extern undefined4 DAT_007388a0; /* 0x7388a0 */
extern undefined4 DAT_007388a4; /* 0x7388a4 */
extern undefined4 DAT_007388a8; /* 0x7388a8 */
extern undefined4 DAT_007388ac; /* 0x7388ac */
extern undefined4 DAT_007388b0; /* 0x7388b0 */
extern undefined4 DAT_007388b4; /* 0x7388b4 */
extern undefined4 DAT_007388b8; /* 0x7388b8 */
extern undefined4 DAT_007388bc; /* 0x7388bc */
extern undefined4 DAT_007388c0; /* 0x7388c0 */
extern undefined4 DAT_007388c4; /* 0x7388c4 */
extern undefined4 DAT_007388c8; /* 0x7388c8 */
extern undefined4 DAT_007388cc; /* 0x7388cc */
extern undefined4 DAT_00738b30; /* no defined data */
extern undefined4 DAT_00738b34; /* no defined data */
extern undefined4 DAT_00738b38; /* no defined data */
extern undefined4 DAT_00738b4c; /* no defined data */
extern undefined4 DAT_00739220; /* no defined data */
extern undefined4 DAT_00739224; /* no defined data */
extern undefined4 DAT_00739240; /* no defined data */
extern undefined4 DAT_00739b50; /* no defined data */
extern undefined4 DAT_00739b54; /* no defined data */
extern undefined4 DAT_00739b58; /* no defined data */
extern undefined4 DAT_00739b60; /* no defined data */
extern undefined4 DAT_00739b64; /* no defined data */
extern undefined4 DAT_0073a240; /* no defined data */
extern undefined4 DAT_0073a2e0; /* 0x73a2e0 */
extern undefined4 DAT_0073a2e4; /* 0x73a2e4 */
extern undefined4 DAT_0073a2e8; /* 0x73a2e8 */
extern undefined4 DAT_0073a2ec; /* 0x73a2ec */
extern undefined4 DAT_0073a2f0; /* 0x73a2f0 */
extern undefined4 DAT_0073a2f4; /* 0x73a2f4 */
extern undefined4 DAT_0073a2f8; /* 0x73a2f8 */
extern undefined4 DAT_0073a2fc; /* 0x73a2fc */
extern undefined4 DAT_0073a300; /* no defined data */
extern undefined4 DAT_0073a308; /* no defined data */
extern undefined4 DAT_0073a310; /* no defined data */
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
extern undefined4 DAT_00a0f51c; /* no defined data */
extern undefined4 DAT_00a354cc; /* no defined data */
extern undefined4 DAT_00e5a654; /* 0xe5a654 */
extern undefined4 DAT_00e5a658; /* 0xe5a658 */
extern undefined4 DAT_00e5a65c; /* 0xe5a65c */
extern undefined4 DAT_00e5a660; /* 0xe5a660 */
extern undefined4 DAT_00e5a664; /* 0xe5a664 */
extern undefined4 DAT_00e5a668; /* 0xe5a668 */
extern undefined4 DAT_00e5a66c; /* 0xe5a66c */
extern undefined4 DAT_00e5a670; /* 0xe5a670 */
extern undefined4 DAT_00e5a674; /* 0xe5a674 */
extern undefined4 DAT_00e5a678; /* 0xe5a678 */
extern undefined4 DAT_00e5a67c; /* 0xe5a67c */
extern undefined4 DAT_00e5a680; /* 0xe5a680 */
extern undefined4 DAT_00e5a684; /* 0xe5a684 */
extern undefined4 DAT_00e5a688; /* 0xe5a688 */
extern undefined4 DAT_00e5a68c; /* 0xe5a68c */
extern undefined4 DAT_00e5a694; /* 0xe5a694 */
extern undefined4 DAT_00e5a698; /* 0xe5a698 */
extern undefined4 DAT_00e5a6a0; /* 0xe5a6a0 */
extern undefined4 DAT_00e5a6a4; /* 0xe5a6a4 */
extern undefined4 DAT_00e5a6a8; /* 0xe5a6a8 */
extern undefined4 DAT_00e5a6b0; /* 0xe5a6b0 */
extern undefined4 DAT_00e5a6b4; /* 0xe5a6b4 */
extern undefined4 DAT_00e5a6b8; /* 0xe5a6b8 */
extern undefined4 DAT_00e5a6bc; /* 0xe5a6bc */
extern undefined4 DAT_00e5a6c0; /* 0xe5a6c0 */
extern undefined4 DAT_00e5a6c4; /* 0xe5a6c4 */
extern undefined4 DAT_00e5a6c8; /* 0xe5a6c8 */
extern undefined4 DAT_00e5a6cc; /* 0xe5a6cc */
extern undefined4 DAT_00e5a6d0; /* 0xe5a6d0 */
extern undefined4 DAT_00e5a6d4; /* 0xe5a6d4 */
extern undefined4 DAT_00e5a6d8; /* 0xe5a6d8 */
extern undefined4 DAT_00e5a6dc; /* 0xe5a6dc */
extern undefined4 DAT_00e5a6e0; /* 0xe5a6e0 */
extern undefined4 DAT_00e5a6e4; /* 0xe5a6e4 */
extern undefined4 DAT_00e5a6e8; /* 0xe5a6e8 */
extern undefined4 DAT_00e5a6ec; /* 0xe5a6ec */
extern undefined4 DAT_00e5a6f0; /* 0xe5a6f0 */
extern undefined4 DAT_00e5a6f4; /* 0xe5a6f4 */
extern undefined4 DAT_00e5a6f8; /* 0xe5a6f8 */
extern undefined4 DAT_00e5a6fc; /* 0xe5a6fc */
extern undefined4 DAT_00e5a700; /* 0xe5a700 */
extern undefined4 DAT_00e5a704; /* 0xe5a704 */
extern undefined4 DAT_00e5a708; /* 0xe5a708 */
extern undefined4 DAT_00e5a70c; /* 0xe5a70c */
extern undefined4 DAT_00e5a710; /* 0xe5a710 */
extern undefined4 DAT_00e5a714; /* 0xe5a714 */
extern undefined4 DAT_00e5a718; /* 0xe5a718 */
extern undefined4 DAT_00e5a71c; /* 0xe5a71c */
extern undefined4 DAT_00e5a724; /* no defined data */
extern undefined4 DAT_00e5a725; /* no defined data */
extern undefined4 DAT_00e5a72c; /* no defined data */
extern undefined4 DAT_00e5a830; /* 0xe5a830 */
extern undefined4 DAT_00e5a840; /* no defined data */
extern undefined1 DAT_00e5a841; /* 0xe5a841 */
extern undefined4 DAT_00e5a874; /* 0xe5a874 */
extern undefined4 DAT_00e5a8b4; /* 0xe5a8b4 */
extern undefined4 DAT_00e5a8f4; /* 0xe5a8f4 */
extern undefined4 DAT_00e5a934; /* 0xe5a934 */
extern undefined4 DAT_00e5a940; /* 0xe5a940 */
extern undefined1 DAT_00e5a944; /* 0xe5a944 */
extern undefined4 DAT_00e5a948; /* 0xe5a948 */
extern undefined1 DAT_00e5a94c; /* 0xe5a94c */
extern undefined4 DAT_00e5a950; /* 0xe5a950 */
extern undefined4 DAT_00e5a954; /* 0xe5a954 */
extern undefined4 DAT_00e5a958; /* 0xe5a958 */
extern undefined4 DAT_00e5a95c; /* 0xe5a95c */
extern undefined4 DAT_00e5a990; /* no defined data */
extern undefined1 DAT_00e5a991; /* 0xe5a991 */
extern undefined4 DAT_00e5a9b0; /* 0xe5a9b0 */
extern undefined4 DAT_00e5a9b4; /* 0xe5a9b4 */
extern undefined4 DAT_00e5a9b8; /* 0xe5a9b8 */
extern undefined1 DAT_00e5a9d0; /* 0xe5a9d0 */
extern undefined1 DAT_00e5a9d1; /* 0xe5a9d1 */
extern undefined1 DAT_00e5a9d2; /* 0xe5a9d2 */
extern undefined1 DAT_00e5a9d3; /* 0xe5a9d3 */
extern undefined1 DAT_00e5a9d4; /* 0xe5a9d4 */
extern undefined1 DAT_00e5a9d5; /* 0xe5a9d5 */
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
extern undefined1 DAT_00e5aa41; /* 0xe5aa41 */
extern undefined1 DAT_00e5aa42; /* 0xe5aa42 */
extern pointer32 PTR_Draw_AmmoCounter_00705888; /* 0x705888 */
extern pointer32 PTR_Vendor_DrawMobyHighlight_00707f60; /* 0x707f60 */
extern undefined4 _DAT_00e5a960; /* direct read */
extern undefined4 _DAT_00e5a970; /* direct read */
extern undefined4 _DAT_00e5a980; /* direct read */
extern Items32 currentAmmoArray; /* 0x96c0ac */
extern undefined4 g_OpenVendorState; /* 0xe5a650 */
extern undefined4 g_VendorCursor; /* 0xe5a69c */
extern undefined g_VendorItems; /* 0xe5a720 */
extern undefined4 g_VendorItemsCnt; /* 0xe5a820 */
extern undefined4 g_VendorMenuState; /* 0xe5a6ac */
extern undefined4 g_boltCount; /* 0x969ca0 */
extern undefined4 g_lastVendorWasPda; /* 0xe5a690 */
extern char g_purchasableVendorItems[12]; /* 0x71fb2c */

// ---- functions
void SECTION_HEADER_VENDOR(void);
void ProjectBoxToScreenInt (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8);
void ProjectBoxToScreen (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, float *param_5,float *param_6,float *param_7,float *param_8);
void Vendor_ParseMobySeqs(void);
void LoadVendorItems(char param_1);
void Spawn_Moby11_Vendor(MobyInstance *moby);
void Vendor_EndWeaponCutscene(int param_1);
int Vendor_StartWeaponCutscene(void);
int StartGadgetPickupCutscene(int param_1,longlong param_2);
void Vendor_RestoreHero(void);
void Vendor_SetScrollText(char *text);
void Vendor_UpdateDude(MobyInstance *param_1);
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
