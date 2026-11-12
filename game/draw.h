#pragma once
// game/draw.h
#include "types.h"
#include "game/camera.h"

// ---- types
/* a text window for the font printers: SetFontWindow (0x6ac90) fills it, FontPrintOpt and friends
   print into it. 0x18 bytes (callers keep the next local at +0x18). */
struct FontWindow {
    short win_top;           /* 0x00 */
    short win_bot;           /* 0x02 */
    short win_left;          /* 0x04 */
    short win_right;         /* 0x06 */
    short text_x;            /* 0x08 */
    short text_y;            /* 0x0a */
    short max_width;         /* 0x0c  out: width of the printed text */
    short max_height;        /* 0x0e  out: height of the printed text */
    short line_spacing;      /* 0x10 */
    short flags;             /* 0x12  FONT_MEASURE: only measure; others unknown */
    short sub_pixel_x;       /* 0x14 */
    short sub_pixel_y;       /* 0x16 */
};
typedef char FontWindow_size_check[sizeof(struct FontWindow) == 0x18 ? 1 : -1];

/* a textured quad for FastDrawQuad (DL: QuadDef, same layout) */
struct QuadDef {
    struct Vec4 xyzw[4];     /* 0x00 */
    int rgba[4];             /* 0x40 */
    float st[2][4];          /* 0x50  s for the 4 corners, then t */
    u64 clamp;               /* 0x70  GS registers */
    u64 tex0;                /* 0x78 */
    u64 tex1;                /* 0x80 */
    u64 alpha;               /* 0x88 */
};
typedef char QuadDef_size_check[sizeof(struct QuadDef) == 0x90 ? 1 : -1];

// ---- globals
extern Vec4 CameraCollPos; /* 0x95d230 */
extern undefined4 CurrentOceanSubmitter; /* 0x95dfdc */
extern undefined4 DAT_00080a00; /* 0x80a00 */
extern undefined4 DAT_0071eeac; /* 0x71eeac */
extern undefined8 DAT_0071eed8; /* 0x71eed8 */
extern undefined8 DAT_0071eee8; /* 0x71eee8 */
extern undefined8 DAT_0071ef08; /* 0x71ef08 */
extern undefined8 DAT_0071ef18; /* 0x71ef18 */
extern undefined4 DAT_0071ef40; /* 0x71ef40 */
extern undefined4 DAT_0071ef44; /* 0x71ef44 */
extern undefined4 DAT_0071ef48; /* 0x71ef48 */
extern undefined4 DAT_0071ef4c; /* 0x71ef4c */
extern undefined4 DAT_0071ef98; /* 0x71ef98 */
extern undefined4 DAT_0071f004; /* 0x71f004 */
extern undefined4 DAT_0071f028; /* no defined data */
extern undefined4 DAT_0071f070; /* 0x71f070 */
extern undefined4 DAT_0071f074; /* no defined data */
extern undefined8 DAT_0071f080; /* 0x71f080 */
extern undefined8 DAT_0071f090; /* 0x71f090 */
extern undefined8 DAT_0071f0a0; /* 0x71f0a0 */
extern undefined8 DAT_0071f0b0; /* 0x71f0b0 */
extern undefined8 DAT_0071f0c0; /* 0x71f0c0 */
extern undefined8 DAT_0071f0d0; /* 0x71f0d0 */
extern undefined8 DAT_0071f0e0; /* 0x71f0e0 */
extern undefined8 DAT_0071f0f0; /* 0x71f0f0 */
extern undefined8 DAT_0071f100; /* 0x71f100 */
extern undefined8 DAT_0071f110; /* 0x71f110 */
extern undefined8 DAT_0071f120; /* 0x71f120 */
extern undefined8 DAT_0071f130; /* 0x71f130 */
extern undefined8 DAT_0071f140; /* 0x71f140 */
extern undefined8 DAT_0071f150; /* 0x71f150 */
extern undefined8 DAT_0071f160; /* 0x71f160 */
extern undefined8 DAT_0071f170; /* 0x71f170 */
extern undefined8 DAT_0071f180; /* 0x71f180 */
extern undefined8 DAT_0071f190; /* 0x71f190 */
extern undefined8 DAT_0071f1a0; /* 0x71f1a0 */
extern undefined8 DAT_0071f1b0; /* 0x71f1b0 */
extern undefined8 DAT_0071f1c0; /* 0x71f1c0 */
extern undefined8 DAT_0071f1d0; /* 0x71f1d0 */
extern undefined8 DAT_0071f1e0; /* 0x71f1e0 */
extern undefined8 DAT_0071f1f0; /* 0x71f1f0 */
extern undefined8 DAT_0071f200; /* 0x71f200 */
extern undefined8 DAT_0071f210; /* 0x71f210 */
extern undefined8 DAT_0071f220; /* 0x71f220 */
extern undefined8 DAT_0071f230; /* 0x71f230 */
extern undefined4 DAT_0071f28c; /* 0x71f28c */
extern undefined4 DAT_0071fbdc; /* 0x71fbdc */
extern undefined4 DAT_0071fbec; /* no defined data */
extern undefined4 DAT_00735d50; /* 0x735d50 */
extern undefined4 DAT_00735d54; /* 0x735d54 */
extern undefined4 DAT_00735d58; /* 0x735d58 */
extern undefined4 DAT_00735de0; /* 0x735de0 */
extern undefined4 DAT_00735de4; /* 0x735de4 */
extern undefined4 DAT_00735fd8; /* 0x735fd8 */
extern undefined4 DAT_00735fdc; /* 0x735fdc */
extern undefined4 DAT_00735fe0; /* 0x735fe0 */
extern undefined4 DAT_00735fe4; /* 0x735fe4 */
extern undefined4 DAT_00736028; /* 0x736028 */
extern undefined4 DAT_0073602c; /* 0x73602c */
extern undefined4 DAT_00736030; /* 0x736030 */
extern undefined4 DAT_00736034; /* 0x736034 */
extern undefined4 DAT_007368b3; /* no defined data */
extern undefined4 DAT_00736c53; /* no defined data */
extern undefined4 DAT_00736ff3; /* no defined data */
extern undefined4 DAT_00737c70; /* 0x737c70 */
extern undefined1 DAT_0073a960; /* 0x73a960 */
extern undefined1 DAT_0073a961; /* 0x73a961 */
extern undefined1 DAT_0073a962; /* 0x73a962 */
extern undefined1 DAT_0073a963; /* 0x73a963 */
extern undefined4 DAT_0073adf0; /* 0x73adf0 */
extern undefined4 DAT_0095cd40; /* 0x95cd40 */
extern undefined1 DAT_0095cf20; /* 0x95cf20 */
extern undefined4 DAT_0095d200; /* 0x95d200 */
extern undefined4 DAT_0095d204; /* 0x95d204 */
extern undefined4 DAT_0095d208; /* 0x95d208 */
extern undefined4 DAT_0095d20c; /* 0x95d20c */
extern undefined4 DAT_0095d210; /* 0x95d210 */
extern undefined4 DAT_0095d214; /* 0x95d214 */
extern undefined4 DAT_0095d218; /* 0x95d218 */
extern undefined4 DAT_0095d21c; /* 0x95d21c */
extern undefined4 DAT_0095d220; /* 0x95d220 */
extern undefined4 DAT_0095d224; /* 0x95d224 */
extern undefined4 DAT_0095d228; /* 0x95d228 */
extern undefined4 DAT_0095d22c; /* 0x95d22c */
extern undefined4 DAT_0095d250; /* 0x95d250 */
extern undefined4 DAT_0095d254; /* 0x95d254 */
extern undefined4 DAT_0095d258; /* 0x95d258 */
extern undefined4 DAT_0095d25c; /* 0x95d25c */
extern undefined4 DAT_0095d260; /* 0x95d260 */
extern undefined4 DAT_0095d264; /* 0x95d264 */
extern undefined4 DAT_0095d268; /* 0x95d268 */
extern undefined4 DAT_0095d26c; /* 0x95d26c */
extern undefined4 DAT_0095d270; /* 0x95d270 */
extern undefined4 DAT_0095d274; /* 0x95d274 */
extern undefined4 DAT_0095d278; /* 0x95d278 */
extern undefined4 DAT_0095d27c; /* 0x95d27c */
extern undefined4 DAT_0095e5f4; /* 0x95e5f4 */
extern undefined4 DAT_0095e5fc; /* 0x95e5fc */
extern undefined4 DAT_0095e600; /* 0x95e600 */
extern undefined4 DAT_0095e604; /* 0x95e604 */
extern undefined4 DAT_0095e608; /* 0x95e608 */
extern undefined4 DAT_0095e9f0; /* 0x95e9f0 */
extern undefined4 DAT_0095ea14; /* no defined data */
extern undefined4 DAT_0095ee18; /* 0x95ee18 */
extern undefined4 DAT_0095ee1c; /* 0x95ee1c */
extern undefined4 DAT_0095ee20; /* 0x95ee20 */
extern undefined4 DAT_0095ee24; /* 0x95ee24 */
extern undefined4 DAT_0095ee28; /* 0x95ee28 */
extern undefined4 DAT_0095ee2c; /* 0x95ee2c */
extern undefined4 DAT_0095ee30; /* 0x95ee30 */
extern undefined4 DAT_0095ee34; /* 0x95ee34 */
extern undefined4 DAT_0095ee38; /* 0x95ee38 */
extern undefined1 DAT_0095ee3c; /* 0x95ee3c */
extern undefined1 DAT_0095ee3d; /* 0x95ee3d */
extern undefined4 DAT_0095ee40; /* 0x95ee40 */
extern undefined4 DAT_0095ee44; /* 0x95ee44 */
extern undefined4 DAT_0095ee48; /* 0x95ee48 */
extern undefined4 DAT_0095ee4c; /* 0x95ee4c */
extern undefined2 DAT_0095ee50; /* 0x95ee50 */
extern undefined4 DAT_0095ee54; /* no defined data */
extern undefined4 DAT_0095ee58; /* 0x95ee58 */
extern undefined4 DAT_0095ee5c; /* 0x95ee5c */
extern undefined2 DAT_0095f240; /* 0x95f240 */
extern undefined2 DAT_00961656; /* 0x961656 */
extern undefined4 DAT_00963668; /* 0x963668 */
extern undefined2 DAT_0096366c; /* 0x96366c */
extern undefined2 DAT_0096366e; /* 0x96366e */
extern undefined4 DAT_00966b18; /* 0x966b18 */
extern undefined4 DAT_00966b1c; /* 0x966b1c */
extern undefined4 DAT_00966b20; /* 0x966b20 */
extern undefined4 DAT_00966b24; /* 0x966b24 */
extern undefined4 DAT_00966b40; /* no defined data */
extern undefined2 DAT_00966b80; /* 0x966b80 */
extern undefined2 DAT_00966b84; /* 0x966b84 */
extern undefined2 DAT_00966b86; /* 0x966b86 */
extern undefined2 DAT_00966b88; /* 0x966b88 */
extern undefined2 DAT_00966b90; /* 0x966b90 */
extern undefined2 DAT_00966b92; /* 0x966b92 */
extern undefined2 DAT_00966b94; /* 0x966b94 */
extern undefined2 DAT_00966b96; /* 0x966b96 */
extern undefined2 DAT_00966b98; /* 0x966b98 */
extern undefined4 DAT_00966b9c; /* 0x966b9c */
extern undefined4 DAT_00966bc0; /* 0x966bc0 */
extern undefined1 DAT_00969c78; /* 0x969c78 */
extern undefined4 DAT_00a15f64; /* 0xa15f64 */
extern undefined4 DAT_00a245a8; /* 0xa245a8 */
extern undefined4 DAT_00a245ac; /* 0xa245ac */
extern undefined4 DAT_00a245b0; /* 0xa245b0 */
extern undefined4 DAT_00a245b4; /* 0xa245b4 */
extern undefined4 DAT_00a24610; /* 0xa24610 */
extern undefined4 DAT_00a4c4e0; /* 0xa4c4e0 */
extern undefined4 DAT_00e572d0; /* 0xe572d0 */
extern undefined4 DAT_00e572d4; /* 0xe572d4 */
extern undefined4 DAT_00e572d8; /* 0xe572d8 */
extern undefined4 DAT_00e572dc; /* 0xe572dc */
extern undefined4 DAT_00e574e0; /* 0xe574e0 */
extern undefined4 DAT_01111700; /* no defined data */
extern undefined4 DAT_0159c340; /* 0x159c340 */
extern undefined4 DAT_0159c344; /* 0x159c344 */
extern undefined4 DAT_0159c348; /* 0x159c348 */
extern undefined4 DAT_0159c34c; /* 0x159c34c */
extern undefined4 DAT_70001000; /* no defined data */
extern undefined4 DAT_70002000; /* no defined data */
extern float FLOAT_0095d1c8; /* 0x95d1c8 */
extern undefined4 FrameHeap; /* 0x8fa440 */
extern undefined Glyphs; /* 0x736c50 */
extern undefined JapaneseGlyphs; /* 0x737390 */
extern undefined LargeWesternGlyphs; /* 0x736ff0 */
extern int LetterBoxOn; /* 0x95cf40 */
extern int LetterBoxPixels; /* 0x95cf44 */
extern undefined MediumWesternGlyphs; /* 0x7368b0 */
extern void * OcclGrid; /* 0xa108c0 */
extern undefined4 OcclInvalidGridGp; /* 0xa108cc */
extern undefined4 OcclMode; /* 0xa108c8 */
extern void * OcclOct; /* 0xa108c4 */
extern undefined4 OcclPreviousGrid; /* 0xa108d0 */
extern undefined OcclVisibility[128]; /* 0xa107c0 */
extern undefined OcclVisibilityMerged[128]; /* 0xa10840 */
extern undefined4 PartClipDist; /* 0xa51fd0 */
extern undefined4 SCREEN_PROJECTION_MAP_X; /* 0x966b10 */
extern undefined4 SCREEN_PROJECTION_MAP_Y; /* 0x966b14 */
extern undefined1 ScreenColorEffectEnabled; /* 0x95cf18 */
extern pointer ScreenColorEffectNow; /* 0x71ef30 */
extern undefined4 TEX_BASE; /* 0xa15f4c */
extern undefined4 TexInfo; /* 0xa1a7a0 */
extern ViewContext g_ViewContext; /* 0x95cf80 */
extern RGBA WaterFog; /* 0x73a964 */
extern undefined4 WaterFogFarDist; /* 0x73a968 */
extern undefined4 WaterFogFarIntensity; /* 0x73a970 */
extern undefined4 WaterFogNearDist; /* 0xe5aaa0 */
extern undefined4 WaterFogNearIntensity; /* 0x73a96c */
extern MobyInstance * WaterMoby; /* 0x95e0dc */
extern int WaterPlaneActive; /* 0xe5aa8c */
extern undefined4 _DAT_000659a0; /* direct read */
extern undefined4 _DAT_000659b0; /* direct read */
extern undefined4 _DAT_00066860; /* direct read */
extern undefined4 _DAT_00066870; /* direct read */
extern undefined4 _DAT_00066880; /* direct read */
extern undefined4 _DAT_00066890; /* direct read */
extern undefined4 _DAT_000668a0; /* direct read */
extern undefined4 _DAT_000668b0; /* direct read */
extern undefined4 _DAT_000668c0; /* direct read */
extern undefined4 _DAT_00074eb0; /* direct read */
extern undefined4 _DAT_00074ec0; /* direct read */
extern undefined4 _DAT_00074ed0; /* direct read */
extern undefined4 _DAT_00074ee0; /* direct read */
extern undefined4 _DAT_00074f00; /* direct read */
extern undefined4 _DAT_00074f10; /* direct read */
extern undefined4 _DAT_00074f70; /* direct read */
extern undefined4 _DAT_00074f80; /* direct read */
extern undefined4 _DAT_00074f90; /* direct read */
extern undefined4 _DAT_00735cd0; /* direct read */
extern undefined4 _DAT_00735ce0; /* direct read */
extern undefined4 _DAT_00735cf0; /* direct read */
extern undefined4 _DAT_00735da0; /* direct read */
extern undefined4 _DAT_00735db0; /* direct read */
extern undefined4 _DAT_00735dc0; /* direct read */
extern undefined4 _DAT_00736040; /* direct read */
extern undefined4 _DAT_00736050; /* direct read */
extern undefined4 _DAT_0095d240; /* direct read */
extern int g_FontColorsEnabled; /* 0x95ee14 */
extern short g_FrameBufHeight; /* 0x966b7e */
extern short g_FrameBufWidth; /* 0x966b7c */
extern bool g_JapaneseMode; /* 0x159c351 */
extern undefined4 g_LameShadows; /* 0x95e5f0 */
extern undefined4 g_MobyFuncList; /* 0x95ddd8 */
extern undefined4 g_MobyFuncListArgs; /* 0x95ded8 */
extern int g_MobyFuncListCount; /* 0x95dfd8 */
extern undefined4 g_PostDrawArgs; /* 0x95e4e4 */
extern int g_PostDrawCount; /* 0x95e5e4 */
extern undefined4 g_PostDrawFuncs; /* 0x95e3e4 */
extern undefined4 g_PostPreDrawArgs; /* 0x95e2e0 */
extern int g_PostPreDrawCount; /* 0x95e3e0 */
extern undefined4 g_PostPreDrawFuncs; /* 0x95e1e0 */
extern int g_PreDrawCount; /* 0x95e1dc */
extern RENDER g_RenderFlags; /* 0x95cd44 */
extern int g_ScreenHalfWidth; /* 0x966b08 */
extern undefined1 g_ScreenInsertEffect; /* 0x95cf30 */
extern int g_ScreenWidth; /* 0x966b00 */
extern undefined4 g_SubtitleTable; /* 0x95cd9c */

// ---- functions
void SECTION_HEADER_DRAW(void);
void ResetFrameBufferInfo(void);
void ResetFrameBufferForCutscene(void);
int CheckBSphere(float *bsphere);
void UploadViewMatricesToPasses(void);
void ComposeCameraMatrix(void);
void RebuildSharedWaveTables(void);
void UpdateViewContext(void);
void UpdateFog(void);
char * ParseOcclGrid(int x,int y,int z);
char * GetOcclGridFromPair(int x0,int y0,int z0,int x1,int y1,int z1,float interp);
void BuildOcclVisibility(void);
void UpdateOcclusion(int param_1);
void InitViewContext(void);
void SetUserViewContext (int width,int height,float xratio,float fogNearDist,float fogFarDist, float fogNearIntensity,float fogFarIntensity);
void ResetDrawGlobals(void);
void STUB_0006849c(...);
void STUB_000684a0(...);
void UpdateOcclusion(int param_1);
void Render_DispatchJob(void);
void *GetEffectTex(int param_1);
void DrawFullScreenQuad(int rgba,void *tex);
void Sprite_DrawShape (RsxCmd param_1,ulonglong param_2,int param_3,longlong param_4,longlong param_5, longlong param_6,int param_7,longlong param_8);
void Sprite_DrawShapeF(double param_1,double param_2,double param_3,double param_4);
void FontPrintJapanese_unk2 (double param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5, undefined4 param_6,int param_7,int param_8,undefined8 param_9,undefined8 param_10, int param_11);
int FontLenScaledWithTableNoKern (double param_1,int param_2,int param_3,undefined8 param_4,int param_5);
void FontPrintOptJapanese (double param_1,undefined8 param_2,undefined4 param_3,int param_4,int param_5, undefined8 param_6,longlong param_7);
void DrawSpriteFont(double param_1,double param_2,double param_3,double param_4);
void DrawSpriteFont_thunk(void);
void FontPrint_unk3 (double param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5, undefined4 param_6,int param_7,int param_8,undefined8 param_9,undefined8 param_10, int param_11);
void FontPrintOptWestern(float param_1,FontWindow *param_2,u32 param_3,const char *param_4,int param_5,void *param_6,void *param_7);
void FontPrintMediumOpt(FontWindow *param_1,u32 param_2,const char *param_3,int param_4);
void Sprite_DrawShapeWrapper(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,u32 param_9,void *param_10);
void DrawRectOverlay(int top,int bot,int left,int right,int color);
void DrawRoundedRect(short param_1,short param_2,short param_3,short param_4,int param_5);
void SetFontWindow(FontWindow *window,int win_top,int win_bot,int win_left,int win_right, int text_x,int text_y,int line_spacing,int flags);
undefined8 ShouldForceSubtitles(void);
void DrawSubtitles(void);
void UpdateLetterBox(void);
void DrawScreenEffect(void);
void DrawScreenOverlayTex(int r,int g,int b,int a,void *tex);
void DrawScreenOverlay(int r,int g,int b,int a);
void ExecutePostDraws(void);
void ExecuteRegisteredMobyFuncs(void);
void ExecutePostPreDraws(void);
void DrawScreenInsertEffect(void *effect);
void ExecutePreDraws(void);
void DefaultDraw(void);
void SetupDefaultDraw(void);
void SetupDefaultDrawMovie(void);
void SetupDefaultDrawFreeze(void);
void InitLevelRenderState(void);
void EnableFontColors(void);
void FontPrintJapanese (int param_1,int param_2,undefined4 param_3,int param_4,int param_5, undefined8 param_6,int param_7);
void FontPrint(int param_1,int param_2,undefined4 param_3,int param_4,int param_5, undefined8 param_6,int param_7);
void FontPrintMediumLeft (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5);
void DisableFontColors(void);
int FontLenWithTable(char *s,int len,void *glyphs);
int FontLenWithTableNoKern(char *s,int len,void *glyphs);
int FontLen(char *s,int len);
void DrawFancyTextWithBox (double param_1,double param_2,longlong param_3,int param_4,int param_5, undefined8 param_6,undefined8 param_7,char *param_8);
void DrawTimedHelpMsg(undefined8 param_1,int param_2);
void DrawSomeOverlay(void);
void STUB_0006d704(...);
void STUB_0006d708(...);
int GetEffectTexAddr(int param_1);
void RegisterFuncForMoby(void **function,MobyInstance *moby);
void RegisterOceanUpdate(undefined4 param_1,MobyInstance *param_2);
void RegisterPostPreDraw(void *func,void *arg);
void RegisterPostDraw(void *func,void *arg);
void DrawLameShadows(void);
void FadeToBlack(int param_1);
void Draw_FlushAndPresent(void);
void DrawRenderTargetToScreen(void);
void STUB_0006e71c(...);
void Sprite_DrawRotated (float param_1,float param_2,double param_3,double param_4,double param_5, double param_6,double param_7);
void DrawTexturedQuadHud(int param_1,int param_2,undefined8 param_3,int param_4,int param_5);
void DrawTextBox(int param_1,int param_2,int param_3,int param_4,u32 param_5);
int FontLenSmall(char *s,int len);
int FontLenLarge(char *s,int len);
int FontLenScaledWithTable (double param_1,int param_2,int param_3,undefined8 param_4,int param_5);
int FontLenScaled(double param_1,int param_2,undefined8 param_3);
int FontLenScaledSmall(double param_1,int param_2,undefined8 param_3);
int FontLenScaledLarge(double param_1,int param_2,undefined8 param_3);
void FontPrintSmallLeft (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5);
void FontPrintLarge (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5);
void FontPrint_unk(undefined8 param_1,undefined8 param_2,undefined8 param_3);
void FontPrintScaled(undefined8 param_1,undefined8 param_2,undefined8 param_3);
void FontPrintScaled_v2(undefined8 param_1,undefined8 param_2,undefined8 param_3);
void FontPrintRightWithScale (double param_1,int param_2,int param_3,undefined8 param_4,int param_5, undefined8 param_6);
void FontPrintMediumRight (int param_1,undefined8 param_2,undefined8 param_3,char *param_4,undefined8 param_5);
void FontPrintSmallRight (int param_1,undefined8 param_2,undefined8 param_3,char *param_4,undefined8 param_5);
void FontPrintLargeRight (int param_1,undefined8 param_2,undefined8 param_3,char *param_4,undefined8 param_5);
int FontPrintMediumCenter(int param_1,int param_2,u32 param_3,const char *param_4,int param_5);
int FontPrintCenterScaled (double param_1,int param_2,int param_3,undefined8 param_4,int param_5, undefined8 param_6);
int FontPrintSmallCenter (int param_1,undefined8 param_2,undefined8 param_3,char *param_4,undefined8 param_5);
int FontPrintLargeCenter (int param_1,undefined8 param_2,undefined8 param_3,char *param_4,undefined8 param_5);
void FontPrintCenterScaledMedium (double param_1,int param_2,int param_3,undefined8 param_4,int param_5, undefined8 param_6);
void FontPrintCenterScaledSmall (double param_1,int param_2,int param_3,undefined8 param_4,int param_5, undefined8 param_6);
void FontPrintCenterScaledLarge (double param_1,int param_2,int param_3,undefined8 param_4,int param_5, undefined8 param_6);
void FontPrintOpt(float param_1,FontWindow *param_2,u32 param_3,const char *param_4,int param_5);
void FontPrintOptLarge (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
void STUB_0007116c(...);
void STUB_00071170(...);
void SetScreenResolution (double param_1,uint param_2,uint param_3,undefined8 param_4,undefined8 param_5, RsxCmd param_6);
void ResetHUDPass(void);
void ____Draw_FogBlendPass(void);
void InitAlphaPal(void);
void InitScreenEffects(void);
undefined8 STUB_00072200_RET_0(...);
void STUB_00072208(...);
undefined8 STUB_0007220c_RET_0(...);
undefined8 STUB_00072214_RET_0(...);
void STUB_0007221c(...);
undefined8 STUB_00072220_RET_0(...);
undefined8 STUB_00072230_RET_0(...);
void FastDrawQuad(undefined4 *param_1,uint param_2,undefined8 param_3,longlong param_4, ulonglong param_5);
void STUB_00072788(...);
void FastDrawStrip_DL(longlong param_1,int param_2);
void FastDrawStrip_DLNoState(longlong param_1,int param_2);
void FastDrawStrip_Pass(longlong param_1,int param_2,longlong param_3);
void DrawTexturedStrips (ulonglong param_1,undefined4 *param_2,longlong param_3,undefined4 *param_4, undefined4 *param_5,undefined4 param_6,undefined4 param_7);
void FastDrawStrip2UV_Pass(longlong param_1,int param_2,longlong param_3);
void FastDrawStrip2UV_PassNoState(longlong param_1,int param_2,longlong param_3);
void DrawLavaStrips (double param_1,longlong param_2,undefined4 *param_3,uint *param_4, undefined4 *param_5,undefined4 *param_6,undefined4 param_7,undefined4 param_8, undefined8 param_9);
void FastDrawStripColor(longlong param_1,int param_2,longlong param_3);
bool ____Draw_IsFlagMode2(ulonglong param_1);
undefined8 ____Draw_IsBlendModeMatch(ulonglong param_1);
void DrawMeshSet(ulonglong param_1,undefined4 *param_2,uint *param_3,undefined4 *param_4, ulonglong param_5);
void FastDrawStripFog(longlong param_1,int param_2,longlong param_3);
void DrawOceanStrip (double param_1,ulonglong param_2,undefined4 *param_3,uint *param_4, undefined4 *param_5);
void STUB_00074ce8(...);
void STUB_00074cec(...);
int ImpactSprite_Add (double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined2 param_5);
void ImpactSprite_Update(void);
void ImpactSprite_Draw(void);
void DrawWaterPatch_A(int *param_1);
void DrawWaterPatch_B(int *param_1);
void AnimateWaveUVs(int *param_1);
void ____Water_CopyPatchUVs(int *param_1,undefined2 *param_2);
void DrawWaterPatch(int param_1);
void ____Water_ComputeWaveGrid(double param_1,double param_2,double param_3);
void ____Water_SetPassTextures(undefined8 param_1,undefined8 param_2);
void ____Water_InitPatches(void);
void DrawWater(void);
void ____Draw_EffectStrip_M401(undefined8 param_1,undefined8 param_2);
void DrawsFlowingLava (undefined8 param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5);
void ____Draw_ScrollingTexStrips (int param_1,int param_2,undefined8 param_3,undefined8 param_4);
void ____Draw_InitGsRegPresets_777d0(void);
void STUB_00077c60(...);
void STUB_00077c64(...);
void STUB_00077c68(...);
void STUB_00077c6c(...);
void DrawColorGradientStrip(int *param_1,float *param_2);
void SetFrameBufferInfo (short param_1,short param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5 ,undefined2 param_6);
void STUB_000780f4(...);
void STUB_000780f8(...);
void STUB_000780fc(...);
void STUB_00078100(...);
void STUB_00078104(...);
void SetFrameBufferTexLog2Size(int log2w,int log2h,int zbuf);
void STUB_00078130(...);
void STUB_00078134(...);
void STUB_00078138(...);
void STUB_0007813c(...);
