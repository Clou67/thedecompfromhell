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

typedef enum RENDER {
    RENDER__Sky=1,
    RENDER__Tfrags=2,
    Ties=4,
    Shrubs=8,
    Ocean=32,
    Screen_Overlays=64,
    HUD=128
} RENDER;

struct RGBA {
    u8 r;
    u8 g;
    u8 b;
    u8 a;
};

/* a full-screen colour effect (DL's ScreenVBEffect, same layout): a background colour, then
   alternating bands of A_lines and B_lines lines in A_color and B_color. Each alpha, when not 0,
   is masked with 0xff000000ff and written to GS register 3. */
struct ScreenVBEffect {
    bool enabled;       /* 0x00 */
    u32 BKG_color;      /* 0x04 */
    u64 BKG_alpha;      /* 0x08 */
    int A_lines;        /* 0x10 */
    u32 A_color;        /* 0x14 */
    u64 A_alpha;        /* 0x18 */
    int B_lines;        /* 0x20 */
    u32 B_color;        /* 0x24 */
    u64 B_alpha;        /* 0x28 */
};

struct Vec2 {
    float x;
    float y;
};

/* the view set up for a frame (g_ViewContext @0x95cf80): clip planes, screen ratios, the
   projection matrices and the fog. DL's ViewContext without its scissor and split-screen
   fields; the GIF-tag headers at the start are PS2 leftovers the PS3 build still fills. */
struct ViewContext {
    u8 headerBase[4][6][4];           /* 0x000  PS2 GIF tags per pass (byte 0 = fog far intensity, byte 2 = NLOOP) */
    u8 headerTex[16];                 /* 0x060 */
    u8 headerTexNoFog[16];            /* 0x070 */
    u8 headerGr[16];                  /* 0x080 */
    u8 headerGrNoFog[16];             /* 0x090 */
    float nearClip;                   /* 0x0a0  DL's D */
    float farClip;                    /* 0x0a4  DL's F */
    float xclipratio;                 /* 0x0a8  xclip / xpix */
    float yclipratio;                 /* 0x0ac */
    float xratio;                     /* 0x0b0  tan of half the horizontal view angle */
    float yratio;                     /* 0x0b4 */
    float xradpad;                    /* 0x0b8  1 / cos(atan(xratio)) */
    float yradpad;                    /* 0x0bc */
    struct Mtx4 fMtx;                 /* 0x0c0  the projection, in 1/1024 units */
    struct Mtx4 nfMtx;                /* 0x100  the same without the perspective scale */
    struct Mtx4 hMtx;                 /* 0x140  the projection for HUD/fonts */
    struct Vec4 hmgScale;             /* 0x180 */
    struct Vec4 ihmgScale;            /* 0x190  its inverse (the font clip scale) */
    struct Vec4 hvdf;                 /* 0x1a0  the PS2 screen offset (2048, 2048, z) */
    struct Vec4 unSquish;             /* 0x1b0 */
    struct Vec4 guard;                /* 0x1c0  x: the guard band, y, z: 1 */
    struct Vec4 iguard;               /* 0x1d0  xclipratio, yclipratio and their inverses */
    struct Vec4 sphereCheckA;         /* 0x1e0  xradpad, yradpad for the clip box, their mean */
    struct Vec4 sphereCheckB;         /* 0x1f0  farClip, nearClip */
    float xpix;                       /* 0x200  the screen in pixels */
    float ypix;                       /* 0x204 */
    float xclip;                      /* 0x208  the clip box in pixels */
    float yclip;                      /* 0x20c */
    float perspScale;                 /* 0x210  DL's fog0: (far - near intensity) * nearClip / the fog range */
    float fog1;                       /* 0x214  the fog intensity at depth 0 */
    float fogNearDist;                /* 0x218 */
    float fogFarDist;                 /* 0x21c */
    float fogMult;                    /* 0x220  intensity per world unit */
    float fogAdd;                     /* 0x224 */
    float fogNearIntensity;           /* 0x228 */
    float fogFarIntensity;            /* 0x22c */
    int fogR;                         /* 0x230 */
    int fogG;                         /* 0x234 */
    int fogB;                         /* 0x238 */
    int occlColor0;                   /* 0x23c  DL's backR/G/B: the level's background colour */
    int occlColor1;                   /* 0x240 */
    int occlColor2;                   /* 0x244 */
    float fovScale;                   /* 0x248  scales the view angle (the vendor zooms with it) */
};

/* the view as the SPU culling jobs read it (g_CullView @0x95d200), filled by
   ComposeCameraMatrix and UpdateViewContext */
struct CullView {
    struct Mtx3 rot;                  /* 0x00  GameCamera.mtx0's rotation */
    struct Vec4 pos;                  /* 0x30  the camera position in 1/1024 units (Ghidra's CameraCollPos) */
    struct Vec4 ratio;                /* 0x40  xratio, yratio, xradpad, yradpad */
    struct Vec4 iguard;               /* 0x50  g_ViewContext.iguard */
    struct Vec4 sphereCheckA;         /* 0x60 */
    struct Vec4 sphereCheckB;         /* 0x70 */
};

/* One character of a Japanese font table: texel position, vertical offset and advance */
struct FontGlyph {
    u8 u;
    u8 v;
    s8 yOff;
    s8 width;
};

/* a short-lived spinning sprite at a hit (g_ImpactSprites, 32 of them; name invented) */
struct ImpactSprite {
    struct Vec4 pos;    /* 0x00 */
    short timer;        /* 0x10  frames left, from 24; 0 = free */
    short fade;         /* 0x12  rises by 5 a frame, falls by 5 over the last 12 */
    short tex;          /* 0x14  effect texture */
    short _pad16;
    float rot;          /* 0x18 */
    float scale;        /* 0x1c */
};

/* a function in one of draw's registered-draw lists, called with the moby it was registered
   with (DL: RegisterDrawFunction's void (*)(MobyInstance *)) */
typedef void (*MobyDrawFunc)(struct MobyInstance *);

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

/* a one-colour full-screen effect drawn with the depth test off (DL's ScreenInsertEffect) */
struct ScreenInsertEffect {
    bool enabled;   /* 0x0 */
    u32 color;      /* 0x4 */
    u64 alpha;      /* 0x8  when not 0: GS register 3, masked with 0xff000000ff */
};

/* one line of a cutscene's subtitles (g_SubtitleTable): shown from frame start to stop, with an
   offset from the table's start to its text per language. DL's Subtitle has seven languages. */
struct Subtitle {
    short start;          /* 0x0 */
    short stop;           /* 0x2 */
    short text_ofs[6];    /* 0x4 */
};

/* a help message shown for a span of frames by DrawTimedHelpMsg (name invented) */
struct TimedHelpMsg {
    int id;          /* 0x0  help message id; ids below 20790 are one past the string index */
    short x;         /* 0x4 */
    short y;         /* 0x6 */
    short start;     /* 0x8  first frame */
    short duration;  /* 0xa  frames after start */
    short align;     /* 0xc  DrawFancyTextWithBox align */
    short oneLine;   /* 0xe  1: 0x01 line breaks become " - " */
};

struct ViewConstsA {
    struct Vec4 hvdf;                 /* 0x00 */
    struct Vec4 ihmgScale;            /* 0x10 */
    struct Vec4 clipRow;              /* 0x20  unSquish.y, yclipratio, 1, 1 */
};

struct ViewConstsB {
    struct Vec4 hvdf;                 /* 0x00 */
    struct Vec4 hmgScale;             /* 0x10 */
    struct Vec4 ihmgScale;            /* 0x20 */
    struct Vec4 _unk30;               /* 0x30 */
    float xclipratio;                 /* 0x40 */
    float yclipratio;                 /* 0x44 */
};

struct ViewFogConsts {
    float fog0;                       /* 0x00  g_ViewContext.perspScale */
    float max;                        /* 0x04  254.99998 */
    float fogFarIntensity;            /* 0x08 */
    float fogNearIntensity;           /* 0x0c */
};

// ---- globals
extern undefined4 DAT_0071eeac; /* 0x71eeac */
extern undefined1 DAT_0071eed0; /* 0x71eed0 */
extern undefined4 DAT_0071ef00; /* no defined data */
extern undefined4 DAT_0071f004; /* 0x71f004 */
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
extern undefined4 DAT_00808080; /* no defined data */
extern undefined4 DAT_0095cae0; /* 0x95cae0 */
extern undefined4 DAT_0095ccf0; /* 0x95ccf0 */
extern undefined4 DAT_0095cd40; /* 0x95cd40 */
extern undefined1 DAT_0095cf20; /* 0x95cf20 */
extern undefined4 DAT_0095ee44; /* 0x95ee44 */
extern undefined4 DAT_0095ee48; /* 0x95ee48 */
extern undefined2 DAT_0095ee50; /* 0x95ee50 */
extern undefined4 DAT_0095ee58; /* 0x95ee58 */
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
extern undefined4 DAT_01111700; /* no defined data */
extern undefined4 DAT_70001000; /* no defined data */
extern undefined4 DAT_70002000; /* no defined data */
extern undefined4 FrameHeap; /* 0x8fa440 */
extern undefined Glyphs; /* 0x736c50 */
extern undefined JapaneseGlyphs; /* 0x737390 */
extern Vec4 LameShadowTable[4]; /* 0x71ef40 */ /* type set in global_types.tsv */
extern undefined LargeWesternGlyphs; /* 0x736ff0 */
extern int LetterBoxOn; /* 0x95cf40 */
extern int LetterBoxPixels; /* 0x95cf44 */
extern undefined MediumWesternGlyphs; /* 0x7368b0 */
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
extern undefined4 TexInfo; /* 0xa1a7a0 */
extern ViewContext g_ViewContext; /* 0x95cf80 */
extern RGBA WaterFog; /* 0x73a964 */
extern undefined4 WaterFogFarDist; /* 0x73a968 */
extern undefined4 WaterFogFarIntensity; /* 0x73a970 */
extern undefined4 WaterFogNearDist; /* 0xe5aaa0 */
extern undefined4 WaterFogNearIntensity; /* 0x73a96c */
extern int WaterPlaneActive; /* 0xe5aa8c */
extern undefined4 _DAT_00074eb0; /* direct read */
extern undefined4 _DAT_00074ec0; /* direct read */
extern undefined4 _DAT_00074ed0; /* direct read */
extern undefined4 _DAT_00074ee0; /* direct read */
extern undefined4 _DAT_00074f00; /* direct read */
extern undefined4 _DAT_00074f10; /* direct read */
extern undefined4 _DAT_00074f70; /* direct read */
extern undefined4 _DAT_00074f80; /* direct read */
extern undefined4 _DAT_00074f90; /* direct read */
extern undefined4 fogNearDist; /* 0x95d198 */
extern u32 g_AlphaPal[256]; /* 0x95ea14 */ /* type set in global_types.tsv */
extern u32 g_AuxBufferTex[9]; /* 0x95ee1c */ /* type set in global_types.tsv */
extern Mtx4 g_CameraEulerBase; /* 0x71f028: zeros but for v3.w = 1, the debug camera's matrix starts from it */ /* type set in global_types.tsv */
extern TimedHelpMsg g_CreditsHelpMsgs[]; /* 0x71fbdc */ /* type set in global_types.tsv */
extern CullView g_CullView; /* 0x95d200: the view as the SPU culling jobs read it */ /* type set in global_types.tsv */
extern int g_EffectTableCnt; /* 0x95e9f0 */ /* type set in global_types.tsv */
extern int g_FontColorsEnabled; /* 0x95ee14 */
extern int g_FontKeepPalette; /* 0x95ee18 */ /* type set in global_types.tsv */
extern u32 g_FontPalette[8]; /* 0x71ef98 */ /* type set in global_types.tsv */
extern short g_FrameBufHeight; /* 0x966b7e */
extern short g_FrameBufWidth; /* 0x966b7c */
extern ImpactSprite g_ImpactSprites[32]; /* 0x95ee40 */ /* type set in global_types.tsv */
extern undefined4 g_JapanFontTex; /* 0x90d724 */
extern undefined4 g_LameShadows; /* 0x95e5f0 */
extern MobyDrawFunc g_MobyFuncList[64]; /* 0x95ddd8 */ /* type set in global_types.tsv */
extern MobyInstance *g_MobyFuncListArgs[64]; /* 0x95ded8 */ /* type set in global_types.tsv */
extern int g_MobyFuncListCount; /* 0x95dfd8 */
extern int g_PartTexBaseIndex; /* 0xa52b38 */
extern MobyInstance *g_PostDrawArgs[64]; /* 0x95e4e4 */ /* type set in global_types.tsv */
extern int g_PostDrawCount; /* 0x95e5e4 */
extern MobyDrawFunc g_PostDrawFuncs[64]; /* 0x95e3e4 */ /* type set in global_types.tsv */
extern MobyInstance *g_PostPreDrawArgs[64]; /* 0x95e2e0 */ /* type set in global_types.tsv */
extern int g_PostPreDrawCount; /* 0x95e3e0 */
extern MobyDrawFunc g_PostPreDrawFuncs[64]; /* 0x95e1e0 */ /* type set in global_types.tsv */
extern MobyInstance *g_PreDrawArgs[64]; /* 0x95e0dc */ /* type set in global_types.tsv */
extern int g_PreDrawCount; /* 0x95e1dc */
extern MobyDrawFunc g_PreDrawFuncs[64]; /* 0x95dfdc */ /* type set in global_types.tsv */
extern RENDER g_RenderFlags; /* 0x95cd44 */
extern int g_SceneId; /* 0x95cd80 */
extern u8 *g_ScratchBuf; /* 0x902ec8: scratch memory shared by the drawing code (water uses it as a WaterStage) */ /* type set in global_types.tsv */
extern int g_ScreenHalfHeight; /* 0x966b0c */
extern int g_ScreenHalfWidth; /* 0x966b08 */
extern undefined1 g_ScreenInsertEffect; /* 0x95cf30 */
extern int g_ScreenWidth; /* 0x966b00 */
extern undefined4 g_SubtitleTable; /* 0x95cd9c */
extern bool g_SubtitlesOn; /* 0x969c78 */ /* type set in global_types.tsv */
extern RGBA g_UnderwaterTint; /* 0x73a960 */ /* type set in global_types.tsv */
extern Vec4 g_ViewCamPos; /* 0x159c340: the camera position for the SPU jobs */ /* type set in global_types.tsv */
extern ViewConstsA g_ViewConstsA; /* 0x735cd0: view constants for the VU1 programs, kept up by UpdateViewContext */ /* type set in global_types.tsv */
extern ViewConstsB g_ViewConstsB; /* 0x735da0 */ /* type set in global_types.tsv */
extern float g_ViewFog0D; /* 0x737c70 */ /* type set in global_types.tsv */
extern float g_ViewFog0E; /* 0x73adf0 */ /* type set in global_types.tsv */
extern float g_ViewFog0F; /* 0xe574e0 */ /* type set in global_types.tsv */
extern Vec4 g_ViewFogA; /* 0x735d50: x perspScale (fog0), y fogFarIntensity, z fogNearIntensity */ /* type set in global_types.tsv */
extern ViewFogConsts g_ViewFogB; /* 0x735fd8 */ /* type set in global_types.tsv */
extern ViewFogConsts g_ViewFogC; /* 0x736028 */ /* type set in global_types.tsv */
extern Vec4 g_ViewHvdfC; /* 0x736050 */ /* type set in global_types.tsv */
extern Vec4 g_ViewIhmgScaleC; /* 0x736040 */ /* type set in global_types.tsv */
extern Vec4 g_ViewPixelConsts; /* 0xe572d0: 2^-18, -2^-18, 0.5, xpix / (xratio * 210000) */ /* type set in global_types.tsv */
extern undefined4 g_pIdolDraw; /* 0x8fa564: the Idol renderer object (was g_viewMtxPtr); +0xc widescreen, +0x4a8 main memory base for RSX offsets, +0x4ac VRAM base */ /* type set in global_types.tsv */
extern u32 g_pIdolDrawBase; /* 0x902e9c: the Idol renderer object as its base class (the same object as g_pIdolDraw) */ /* type set in global_types.tsv */

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
char *ParseOcclGrid(int x, int y, int z);
char *GetOcclGridFromPair(int x0, int y0, int z0, int x1, int y1, int z1, float interp);
void BuildOcclVisibility(void);
void Occlusion_Update(void);
void InitViewContext(void);
void SetUserViewContext(int width, int height, float xratio, float fogNearDist, float fogFarDist, float fogNearIntensity, float fogFarIntensity);
void ResetDrawGlobals(void);
void STUB_0006849c(...);
void STUB_000684a0(...);
void UpdateOcclusion(int withOcclusion);
void Render_DispatchJob(void);
int GetEffectTex(int idx);
void DrawFullScreenQuad(int rgba, void *tex);
void Sprite_DrawShape(int x, int y, int w, int h, int u, int v, int uw, int vh, u32 color, void *tex);
void Sprite_DrawShapeF(float x, float y, float w, float h, int u, int v, int uw, int vh, u32 color, void *tex);
void FontPrintScaledJapanese(float x, float y, float scale, u32 color, const u8 *str, int len, int unused, const FontGlyph *table);
int FontLenScaledWithTableNoKern(float scale, const u8 *str, int len, const FontGlyph *table);
void FontPrintOptJapanese(float scale, FontWindow *win, u32 color, const u8 *str, int len, int unused, const FontGlyph *table);
void DrawSpriteFont(float sc_x, float sc_y, float sc_w, float sc_h, int tx_u, int tx_v, int tx_w, int tx_h, u64 rgba, u64 tex0);
void DrawSpriteFont_thunk(float sc_x, float sc_y, float sc_w, float sc_h, int tx_u, int tx_v, int tx_w, int tx_h, u64 rgba, u64 tex0);
void FontPrintScaledWestern(float x, float y, float scale, u32 color, const u8 *str, int len, u64 tex, const FontGlyph *table);
void FontPrintOptWestern(float scale, FontWindow *win, u32 color, const char *text, int len, int tex, void *glyphs);
void FontPrintMediumOpt(FontWindow *win, u32 color, const char *str, int len);
void Sprite_DrawShapeWrapper(int x, int y, int w, int h, int u, int v, int uw, int vh, u32 color, int tex);
void DrawRectOverlay(int top, int bot, int left, int right, int color);
void DrawRoundedRect(short top, short bot, short left, short right, int alpha);
void SetFontWindow(FontWindow *window, int win_top, int win_bot, int win_left, int win_right, int text_x, int text_y, int line_spacing, int flags);
int ShouldForceSubtitles(void);
void DrawSubtitles(void);
void UpdateLetterBox(void);
void DrawScreenEffect(void);
void DrawScreenOverlayTex(int r, int g, int b, int a, void *tex);
void DrawScreenOverlay(int r, int g, int b, int a);
void ExecutePostDraws(void);
void ExecuteRegisteredMobyFuncs(void);
void ExecutePostPreDraws(void);
void DrawScreenInsertEffect(ScreenInsertEffect *effect);
void ExecutePreDraws(void);
void DefaultDraw(void);
void SetupDefaultDraw(void);
void SetupDefaultDrawMovie(void);
void SetupDefaultDrawFreeze(void);
void InitLevelRenderState(void);
void EnableFontColors(void);
void FontPrintJapanese(int x, int y, u32 color, const char *text, int len, int unused, void *glyphs);
void FontPrint(int x, int y, u32 color, const char *text, int len, int tex, void *glyphs);
void FontPrintMediumLeft(int x, int y, u32 color, const char *str, int len);
void DisableFontColors(void);
int FontLenWithTable(char *s, int len, void *glyphs);
int FontLenWithTableNoKern(char *s, int len, void *glyphs);
int FontLen(char *s, int len);
void DrawFancyTextWithBox(int x, int y, int align, float scale, float alpha, char *str);
void DrawTimedHelpMsg(TimedHelpMsg *msg, int frame);
void DrawCredits(void);
void STUB_0006d704(...);
void STUB_0006d708(...);
int GetEffectTexAddr(int index);
void RegisterFuncForMoby(void **function, MobyInstance *moby);
void RegisterOceanUpdate(undefined4 func, MobyInstance *moby);
void RegisterPostPreDraw(void *func, void *arg);
void RegisterPostDraw(void *func, void *arg);
void DrawLameShadows(void);
void FadeToBlack(int frames);
void Draw_FlushAndPresent(void);
void DrawRenderTargetToScreen(void);
void STUB_0006e71c(...);
void Sprite_DrawRotated(float x, float y, float w, float h, float angle, float pivotX, float pivotY, int tw, int th, int tex, int unused, u32 color, int flipU, int flipV, int perEye);
void DrawScreenQuad(u64 *xy, int *uv, u32 *rgba, int tex, int clamp);
void DrawTextBox(int top, int bot, int left, int right, u32 color);
int FontLenSmall(char *s, int len);
int FontLenLarge(char *s, int len);
int FontLenScaledWithTable(float scale, const char *s, int len, void *glyphs);
int FontLenScaled(float scale, const char *s, int len);
int FontLenScaledSmall(float scale, const char *s, int len);
int FontLenScaledLarge(float scale, const char *s, int len);
void FontPrintSmallLeft(int x, int y, u32 color, const char *str, int len);
void FontPrintLarge(int x, int y, u32 color, const char *str, int len);
void FontPrintScaledMedium(float x, float y, float scale, u32 color, const char *str, int len);
void FontPrintScaledSmall(float x, float y, float scale, u32 color, const char *str, int len);
void FontPrintScaledLarge(float x, float y, float scale, u32 color, const char *str, int len);
void FontPrintRightWithScale(float scale, int x, int y, u32 color, const char *str, int len);
void FontPrintMediumRight(int x, int y, u32 color, char *str, int len);
void FontPrintSmallRight(int x, int y, u32 color, char *str, int len);
void FontPrintLargeRight(int x, int y, u32 color, char *str, int len);
int FontPrintMediumCenter(int x, int y, u32 color, const char *str, int len);
int FontPrintCenterScaled(float scale, int x, int y, u32 color, const char *str, int len);
int FontPrintSmallCenter(int x, int y, u32 color, char *str, int len);
int FontPrintLargeCenter(int x, int y, u32 color, char *str, int len);
void FontPrintCenterScaledMedium(float scale, int x, int y, u32 color, const char *str, int len);
void FontPrintCenterScaledSmall(float scale, int x, int y, u32 color, const char *str, int len);
void FontPrintCenterScaledLarge(float scale, int x, int y, u32 color, const char *str, int len);
void FontPrintOpt(float scale, FontWindow *win, u32 color, const char *str, int len);
void FontPrintOptLarge(FontWindow *win, u32 color, const char *str, int len);
void STUB_0007116c(...);
void STUB_00071170(...);
void BeginAuxDrawMode(float xratio, int log2Width, int log2Height, int flag, u32 clearColor);
void EndAuxDrawMode(void);
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
void FastDrawQuad(QuadDef *quad, Mtx4 *mtx, int unused, void *texHeaders, int passIndex);
void STUB_00072788(...);
void FastDrawStrip_DL(int count, void *vertices);
void FastDrawStrip_DLNoState(int count, void *vertices);
void FastDrawStrip_Pass(int count, void *vertices, int passIndex);
void DrawTexturedStrips(int count, Vec3 *pos, u32 *colors, Vec2 *uv0, Vec2 *uv1, int baseTex, int detailTex, u64 depth);
void FastDrawStrip2UV_Pass(int count, void *vertices, int passIndex);
void FastDrawStrip2UV_PassNoState(int count, void *vertices, int passIndex);
void DrawLavaStrips(float q, int count, Vec3 *pos, u32 *colors, Vec2 *uv0, Vec2 *uv1, int tex0, int tex1, u64 depth, u64 depth2, int passIndex);
void FastDrawStripColor(int count, void *vertices, int passIndex);
bool ____Draw_IsFlagMode2(u64 alpha);
int ____Draw_IsBlendModeMatch(u64 alpha);
void DrawMeshSet(int count, void *positions, void *colorArray, void *uvs, u32 passes);
void FastDrawStripFog(int count, void *vertices, int passIndex);
void DrawOceanStrip(float q, int count, Vec3 *pos, u32 *colors, Vec2 *uv);
void STUB_00074ce8(...);
void STUB_00074cec(...);
int ImpactSprite_Add(float scale, Vec4 pos, short tex);
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
