#pragma once
// game/hud.h
#include "types.h"

// ---- types
struct astruct {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    undefined field16_0x10;
    undefined field17_0x11;
    undefined field18_0x12;
    undefined field19_0x13;
    undefined field20_0x14;
    undefined field21_0x15;
    undefined field22_0x16;
    undefined field23_0x17;
    undefined field24_0x18;
    undefined field25_0x19;
    undefined field26_0x1a;
    undefined field27_0x1b;
    undefined field28_0x1c;
    undefined field29_0x1d;
    undefined field30_0x1e;
    undefined field31_0x1f;
    undefined1 field32_0x20;
};

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

struct HudElement { /* RC1 HUD entry, 13 x 0x90 at HudEntries (existing HudEntry[13] type is 0x20-stride and wrong). Offsets from HudEntry_Reset/CalcNumberSize/ApplyAlignment/ShowEntryById. */
    int iconId;
    int value;
    int maxValue;
    int *pValue;
    void *initCb;
    void *updateCb;
    void *drawCb;
    undefined field7_0x1c;
    undefined field8_0x1d;
    undefined field9_0x1e;
    undefined field10_0x1f;
    int regIconId;
    int regValue;
    int regMaxValue;
    int *regPValue;
    void *regInitCb;
    void *regUpdateCb;
    void *regDrawCb;
    undefined field18_0x3c;
    undefined field19_0x3d;
    undefined field20_0x3e;
    undefined field21_0x3f;
    short iconIdx;
    char iconBaseIdx;
    undefined field24_0x43;
    int iconVariantsCnt;
    short offsX;
    short offsY;
    undefined field28_0x4c;
    undefined field29_0x4d;
    undefined field30_0x4e;
    undefined field31_0x4f;
    int x;
    int y;
    int width;
    int height;
    int alignFlags;
    undefined field37_0x64;
    undefined field38_0x65;
    undefined field39_0x66;
    undefined field40_0x67;
    int locked;
    int id;
    char animA;
    char animB;
    undefined field45_0x72;
    undefined field46_0x73;
    int displayedValue;
    int targetValue;
    int showTimer;
    undefined field50_0x80;
    undefined field51_0x81;
    undefined field52_0x82;
    undefined field53_0x83;
    undefined field54_0x84;
    undefined field55_0x85;
    undefined field56_0x86;
    undefined field57_0x87;
    undefined field58_0x88;
    undefined field59_0x89;
    undefined field60_0x8a;
    undefined field61_0x8b;
    undefined field62_0x8c;
    undefined field63_0x8d;
    undefined field64_0x8e;
    undefined field65_0x8f;
};

struct IconTableEntries {
    ushort iconId;
    ushort unknown;
    ushort variantsCnt;
    ushort baseIdx;
};

// ---- globals
extern undefined4 Cutscene; /* 0x966aec */
extern undefined4 DAT_006520d0; /* no defined data */
extern undefined4 DAT_006520d8; /* no defined data */
extern undefined4 DAT_00721044; /* 0x721044 */
extern undefined4 DAT_00721048; /* no defined data */
extern undefined4 DAT_0072390c; /* 0x72390c */
extern undefined4 DAT_00723930; /* 0x723930 */
extern undefined4 DAT_00723934; /* 0x723934 */
extern undefined4 DAT_00723938; /* 0x723938 */
extern undefined4 DAT_0072393c; /* 0x72393c */
extern undefined4 DAT_00723980; /* 0x723980 */
extern undefined4 DAT_00723998; /* 0x723998 */
extern undefined4 DAT_00723ad8; /* 0x723ad8 */
extern undefined4 DAT_00723adc; /* 0x723adc */
extern undefined4 DAT_00723ae0; /* 0x723ae0 */
extern undefined4 DAT_00723ae4; /* 0x723ae4 */
extern undefined4 DAT_00723af4; /* 0x723af4 */
extern undefined4 DAT_00723af8; /* 0x723af8 */
extern undefined4 DAT_00723afc; /* 0x723afc */
extern undefined4 DAT_00723b00; /* 0x723b00 */
extern undefined4 DAT_00724260; /* no defined data */
extern undefined4 DAT_007242c0; /* no defined data */
extern undefined4 DAT_00724320; /* 0x724320 */
extern undefined4 DAT_00724324; /* 0x724324 */
extern undefined4 DAT_00724328; /* 0x724328 */
extern undefined4 DAT_0072432c; /* 0x72432c */
extern undefined4 DAT_00724330; /* 0x724330 */
extern undefined4 DAT_00724334; /* 0x724334 */
extern undefined4 DAT_00724338; /* 0x724338 */
extern undefined4 DAT_0072433c; /* 0x72433c */
extern undefined4 DAT_00724340; /* 0x724340 */
extern undefined4 DAT_00724344; /* 0x724344 */
extern undefined4 DAT_00724348; /* 0x724348 */
extern undefined4 DAT_0072434c; /* 0x72434c */
extern undefined4 DAT_00724354; /* 0x724354 */
extern undefined4 DAT_00724358; /* 0x724358 */
extern undefined4 DAT_0072435c; /* 0x72435c */
extern undefined4 DAT_00724360; /* 0x724360 */
extern undefined4 DAT_00724364; /* 0x724364 */
extern undefined4 DAT_00724368; /* 0x724368 */
extern undefined4 DAT_0072436c; /* 0x72436c */
extern undefined4 DAT_00724370; /* 0x724370 */
extern undefined4 DAT_00724374; /* 0x724374 */
extern undefined4 DAT_00724378; /* 0x724378 */
extern undefined4 DAT_0072437c; /* 0x72437c */
extern undefined4 DAT_00724388; /* 0x724388 */
extern undefined4 DAT_0072438c; /* 0x72438c */
extern undefined4 DAT_00724390; /* 0x724390 */
extern undefined2 DAT_007243b8; /* 0x7243b8 */
extern undefined4 DAT_007243d8; /* 0x7243d8 */
extern undefined4 DAT_007243dc; /* 0x7243dc */
extern undefined4 DAT_007243e0; /* 0x7243e0 */
extern undefined4 DAT_007243ec; /* 0x7243ec */
extern undefined4 DAT_007243f0; /* 0x7243f0 */
extern undefined4 DAT_007243f4; /* 0x7243f4 */
extern undefined4 DAT_007243f8; /* 0x7243f8 */
extern undefined4 DAT_00724400; /* 0x724400 */
extern undefined4 DAT_00724404; /* 0x724404 */
extern undefined4 DAT_00724408; /* 0x724408 */
extern undefined4 DAT_0072440c; /* 0x72440c */
extern undefined4 DAT_00724410; /* 0x724410 */
extern undefined4 DAT_00724414; /* 0x724414 */
extern undefined4 DAT_00724418; /* 0x724418 */
extern undefined4 DAT_0072441c; /* 0x72441c */
extern undefined4 DAT_00724420; /* 0x724420 */
extern undefined4 DAT_00724424; /* 0x724424 */
extern undefined4 DAT_00724428; /* 0x724428 */
extern undefined4 DAT_0072444c; /* 0x72444c */
extern undefined4 DAT_00724450; /* 0x724450 */
extern undefined4 DAT_00724454; /* 0x724454 */
extern undefined4 DAT_00724458; /* 0x724458 */
extern undefined4 DAT_0072445c; /* 0x72445c */
extern undefined4 DAT_00724460; /* 0x724460 */
extern undefined4 DAT_00724464; /* 0x724464 */
extern undefined4 DAT_00724468; /* 0x724468 */
extern undefined4 DAT_0072446c; /* 0x72446c */
extern undefined4 DAT_00724470; /* 0x724470 */
extern undefined4 DAT_00724474; /* 0x724474 */
extern undefined4 DAT_00724478; /* no defined data */
extern undefined4 DAT_007244b4; /* 0x7244b4 */
extern undefined4 DAT_007244bc; /* 0x7244bc */
extern undefined4 DAT_007244c0; /* 0x7244c0 */
extern undefined4 DAT_007244c4; /* 0x7244c4 */
extern undefined4 DAT_007244c8; /* 0x7244c8 */
extern undefined4 DAT_007244cc; /* 0x7244cc */
extern undefined4 DAT_007244d0; /* 0x7244d0 */
extern undefined4 DAT_007244d4; /* 0x7244d4 */
extern undefined4 DAT_007244d8; /* 0x7244d8 */
extern undefined4 DAT_007244dc; /* 0x7244dc */
extern undefined4 DAT_007244e0; /* 0x7244e0 */
extern undefined4 DAT_007244e4; /* 0x7244e4 */
extern undefined4 DAT_007244e8; /* 0x7244e8 */
extern undefined4 DAT_007244ec; /* 0x7244ec */
extern undefined4 DAT_007244f0; /* 0x7244f0 */
extern undefined4 DAT_007244f8; /* 0x7244f8 */
extern undefined4 DAT_007244fc; /* 0x7244fc */
extern undefined4 DAT_00724500; /* 0x724500 */
extern undefined4 DAT_00724504; /* 0x724504 */
extern undefined4 DAT_00724508; /* 0x724508 */
extern undefined4 DAT_0072450c; /* 0x72450c */
extern undefined4 DAT_00724510; /* 0x724510 */
extern undefined4 DAT_0072451c; /* 0x72451c */
extern undefined4 DAT_00724520; /* 0x724520 */
extern undefined4 DAT_00724524; /* 0x724524 */
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
extern undefined4 DAT_00a15c88; /* 0xa15c88 */
extern undefined1 DAT_00a15cdc; /* 0xa15cdc */
extern undefined4 DAT_00a1bfc0; /* 0xa1bfc0 */
extern undefined4 DAT_00a1bfc4; /* 0xa1bfc4 */
extern undefined4 DAT_00a1bfcc; /* 0xa1bfcc */
extern undefined4 DAT_00a1bfd0; /* 0xa1bfd0 */
extern undefined4 DAT_00a1bfd4; /* 0xa1bfd4 */
extern undefined4 DAT_00a1bfe4; /* 0xa1bfe4 */
extern undefined4 DAT_00a1bfe8; /* 0xa1bfe8 */
extern undefined4 DAT_00a1bff0; /* 0xa1bff0 */
extern undefined4 DAT_00a1bff4; /* 0xa1bff4 */
extern undefined4 DAT_00a1bff8; /* 0xa1bff8 */
extern undefined1 DAT_00a1bffc; /* 0xa1bffc */
extern undefined1 DAT_00a1c020; /* 0xa1c020 */
extern undefined4 DAT_00a1c080; /* 0xa1c080 */
extern undefined4 DAT_00a1c084; /* 0xa1c084 */
extern undefined4 DAT_00a1c088; /* 0xa1c088 */
extern undefined4 DAT_00a1c08c; /* 0xa1c08c */
extern undefined4 DAT_00a1c090; /* 0xa1c090 */
extern undefined4 DAT_00a1c170; /* 0xa1c170 */
extern undefined4 DAT_00a1c174; /* 0xa1c174 */
extern undefined4 DAT_00a1c178; /* 0xa1c178 */
extern undefined4 DAT_00a1c17c; /* 0xa1c17c */
extern undefined2 DAT_00a1c180; /* 0xa1c180 */
extern undefined2 DAT_00a1c182; /* 0xa1c182 */
extern undefined2 DAT_00a1c184; /* 0xa1c184 */
extern undefined2 DAT_00a1c186; /* 0xa1c186 */
extern undefined2 DAT_00a1c188; /* 0xa1c188 */
extern undefined4 DAT_00a1c190; /* 0xa1c190 */
extern undefined4 DAT_00a1c1a0; /* 0xa1c1a0 */
extern undefined4 DAT_00a1c1a4; /* 0xa1c1a4 */
extern undefined4 DAT_00a1c1a8; /* 0xa1c1a8 */
extern undefined4 DAT_00a1c1ac; /* 0xa1c1ac */
extern undefined4 DAT_00a1c7e0; /* 0xa1c7e0 */
extern undefined4 DAT_00a1c7e4; /* 0xa1c7e4 */
extern undefined4 DAT_00a1c7e8; /* 0xa1c7e8 */
extern undefined4 DAT_00a1c7ec; /* 0xa1c7ec */
extern undefined4 DAT_00a1c7f0; /* 0xa1c7f0 */
extern undefined4 DAT_00a1c7f4; /* 0xa1c7f4 */
extern undefined4 DAT_00a1c7f8; /* 0xa1c7f8 */
extern undefined4 DAT_00a1c7fc; /* 0xa1c7fc */
extern undefined4 DAT_00a1c800; /* 0xa1c800 */
extern undefined4 DAT_00a1c804; /* 0xa1c804 */
extern undefined4 DAT_00a1c808; /* 0xa1c808 */
extern undefined4 DAT_00a1c80c; /* 0xa1c80c */
extern undefined4 DAT_00a1c810; /* 0xa1c810 */
extern undefined4 DAT_00a1c814; /* 0xa1c814 */
extern undefined4 DAT_00a1c818; /* 0xa1c818 */
extern undefined4 DAT_010000ff; /* no defined data */
extern undefined4 EffectTexHeaders; /* 0xa15f68 */
extern RenderingStep * HUD_Pass; /* 0x8fa43c */
extern astruct * HudBankMain; /* 0xa1bfec */
extern HudElement HudEntries[13]; /* 0x723b10 */
extern IconTableEntries * IconTableEntry; /* 0xa1bfdc */
extern pointer32 PTR_AmmoHud_Init_00705808; /* 0x705808 */
extern pointer32 PTR_AmmoHud_Update_007058d8; /* 0x7058d8 */
extern pointer PTR_DAT_00723b08; /* 0x723b08 */
extern pointer PTR_DAT_00723b0c; /* 0x723b0c */
extern pointer PTR_DAT_00724350; /* 0x724350 */
extern pointer PTR_DAT_00724384; /* 0x724384 */
extern pointer PTR_DAT_007243fc; /* 0x7243fc */
extern pointer PTR_DAT_00724440; /* 0x724440 */
extern pointer PTR_DAT_00724444; /* 0x724444 */
extern pointer PTR_DAT_007244f4; /* 0x7244f4 */
extern pointer PTR_DAT_00724518; /* 0x724518 */
extern pointer32 PTR_Draw_GiantClankHealthHUD_00705880; /* 0x705880 */
extern pointer32 PTR_Draw_NanotechUI_00705800; /* 0x705800 */
extern pointer32 PTR_HealthHud_Init_007057f0; /* 0x7057f0 */
extern pointer32 PTR_HealthHud_Update_007057f8; /* 0x7057f8 */
extern pointer32 PTR_HudEntry_InitCounter_007056a0; /* 0x7056a0 */
extern pointer32 PTR_HudEntry_UpdateCounter_007056c8; /* 0x7056c8 */
extern undefined4 TexturePointerArray; /* 0xa1bfe0 */
extern int g_HudAmmoEntryId; /* 0x724530 */
extern u8 *g_HudBuffer; /* 0xa108e4: 0x64000 bytes (guess: HUD) */ /* type set in global_types.tsv */
extern int g_HudHideCounter; /* 0x724528 */
extern int g_ScreenHeight; /* 0x966b04 */
extern u8 *g_pMobyVars; /* 0xa390b0: pVar blocks, 0x80 per moby above MobyInstancePermEnd */ /* type set in global_types.tsv */
extern int g_toastMsgTimer; /* 0xa15c80 */

// ---- functions
void SECTION_HEADER_HUD(void);
int Hud_FindIconIndex(int iconId);
void HudEntry_SetIcon(uint *param_1,uint param_2);
void HudEntry_Reset(uint *param_1);
int RegisterHUDCallback (uint param_1,int param_2,void *fn1,void *fn2,void *hudFn,int *varChanged,int varCount );
int RegisterHeroHealthHUDCallbacks(void);
void HudScratch_Reset(void);
int HudScratch_Alloc(int size);
void Hud_InitBanks(void);
void STUB_000c8810(...);
void STUB_000c8814(...);
void STUB_000c8818(...);
void STUB_000c881c(...);
void Hud_SwapMobyBank(int bank);
void Hud_ResetAllEntries(void);
int Hud_UnregisterById(int id);
HudElement * Hud_SetEntryIconById(int param_1,uint param_2);
void Hud_RestoreEntryCallbackById(int param_1);
void Hud_SetEntryValueById(int id,int value);
int HudEntry_ApplyAlignment(int entry,int *x,int *y);
void HudEntry_GetSlideOffset (int param_1,int *param_2,int *param_3,longlong param_4,longlong param_5);
void HudEntry_CalcNumberSize(int entry);
void HudEntry_InitCounter(undefined8 param_1);
void HudEntry_InitCounter32(undefined8 param_1);
void Hud_SetEntryPosById (int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4, undefined2 param_5);
int Hud_ShowEntryById(int id,int time);
uint HudIcon_GetAnimFrame(short *param_1);
void HudEntry_UpdateCounter(longlong param_1);
void HudEntry_UpdateCounterSlide(longlong param_1);
void STUB_000c9820(...);
int HudEntry_DrawLargeNumber (int param_1,int param_2,int param_3,int param_4,undefined8 param_5);
undefined4 Draw_LargeNumberHud(int param_1);
undefined4 ____Unused_HudEntry_GetSlideField58(int param_1);
void OxygenHud_Init(undefined8 param_1);
void OxygenHud_Update(void);
void Hud_DrawTexQuad_v2 (longlong param_1,RsxCmd param_2,ulonglong param_3,int param_4,longlong param_5, int param_6);
void Hud_DrawTexQuad_v2_Fixed(undefined8 param_1,int param_2,int param_3);
int GetIconFrameTex(uint param_1,int param_2);
void Hud_DrawTexQuad_v3 (longlong param_1,RsxCmd param_2,ulonglong param_3,int param_4,longlong param_5, int param_6);
void DrawFlatOverlay(int param_1,int param_2,int param_3,int param_4,u32 param_5,int param_6);
uint DrawOxygenMeter(uint *param_1);
void Moby185Hud_Init(undefined8 param_1);
void Moby185Hud_Update(void);
uint Draw_Moby185Meter(uint *param_1);
void PromptHud_Init(undefined8 param_1);
void PromptHud_Update(void);
void Hud_DrawTexQuad (longlong param_1,RsxCmd param_2,ulonglong param_3,int param_4,longlong param_5, int param_6);
void Hud_DrawTexHeaderQuad (int param_1,RsxCmd param_2,ulonglong param_3,int param_4,longlong param_5, ulonglong param_6);
void DrawSprite(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
void Hud_DrawTextBox (undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4, undefined8 param_5);
void Hud_DrawTextBoxCentered (undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4);
undefined4 Draw_PromptMsg(int param_1);
char * GetHelpLen(char *param_1);
void Moby849Hud_Init(undefined8 param_1);
void Moby849Hud_Update(undefined8 param_1);
void DrawFlatOverlay_Fixed(int param_1,int param_2,int param_3,int param_4);
uint Draw_Moby849Meter(uint *param_1);
void QuickSelectHud_Init(undefined8 param_1);
void UpdateQuickSelect(undefined8 param_1);
void HudEntry_DrawIcon (int param_1,longlong param_2,int param_3,int param_4,uint param_5,undefined8 param_6 );
undefined4 Draw_QuickSelectHud(int param_1);
void ClankCommandHud_Init(undefined8 param_1);
void ClankCommandHud_Update(undefined8 param_1);
undefined4 Draw_ClankCommandHud(int param_1);
void HealthHud_Init(undefined8 param_1);
void HealthHud_Update(longlong param_1);
undefined4 Draw_NanotechUI(int param_1);
void AmmoHud_Init(undefined8 param_1);
void BoltHud_Init(undefined8 param_1);
void BoltHud_Update(undefined8 param_1);
undefined4 Draw_BoltCountUI(int param_1);
void UnusedIconHud_Init(undefined8 param_1);
void UnusedIconHud_Update(longlong param_1);
undefined4 UnusedIconHud_Draw(int param_1);
undefined4 Draw_MobyMeterHud(int param_1);
void TrickHud_Init(undefined8 param_1);
void TrickHud_Update(undefined8 param_1);
void Hud_DrawEffectTexQuad(int tex,int x,int y,int w,int h,int alpha);
undefined4 Draw_HoverboardTrickHud(int param_1);
undefined4 Draw_MobyHealthBarHud(int param_1);
void MetalDetectorHud_Update(undefined8 param_1);
undefined4 Draw_MetalDetectorHud(int param_1);
undefined4 Draw_GiantClankHealthHUD(int param_1);
uint Draw_AmmoCounter(uint *param_1);
void MobyCounterHud_Init(int param_1);
undefined4 Draw_MobyCounterHud(int param_1);
int UpdateAllGameplayHUD(int param_1);
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
void Hud_DrawTexQuadF (double param_1,double param_2,double param_3,double param_4,double param_5, double param_6,double param_7,double param_8,undefined8 param_9);
void Hud_DrawEffectTexQuadUV (longlong param_1,RsxCmd param_2,ulonglong param_3,int param_4,longlong param_5, RsxCmd param_6,ulonglong param_7,int param_8);
void Hud_DrawTexQuadUV (undefined8 param_1,RsxCmd param_2,ulonglong param_3,uint param_4,uint param_5, int param_6,longlong param_7,RsxCmd param_8);
void Hud_DrawEffectTexHeaderQuadUV(int param_1);
void Hud_DrawTexQuadUV_Fixed(undefined8 param_1,int param_2,int param_3);
void Hud_DrawTexQuadF_v2 (double param_1,double param_2,double param_3,double param_4,double param_5, double param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9, undefined4 param_10,undefined4 param_11);
void Hud_DrawTexQuadF_v3 (double param_1,double param_2,double param_3,double param_4,double param_5);
void Hud_DrawTexQuadF_v4(float param_1,float param_2,float param_3,float param_4,float param_5,int param_6,int param_7,int param_8);
void Hud_DrawTexQuadF_v4_Fixed(double param_1,double param_2,double param_3,double param_4);
void DrawSprite2(longlong param_1,RsxCmd param_2,ulonglong param_3,RsxCmd param_4, ulonglong param_5,RsxCmd param_6,ulonglong param_7,RsxCmd param_8);
void STUB_000d8658(...);
void Hud_DrawEffectTexLine (RsxCmd param_1,ulonglong param_2,RsxCmd param_3,ulonglong param_4,ulonglong param_5, int param_6);
void STUB_000d88e0(...);
