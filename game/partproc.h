#pragma once
// game/partproc.h
#include "types.h"
#include "game/partupd.h"

// ---- types
typedef unsigned short    word;

struct EffectTexHeader { /* Pre-baked RSX texture registers; words 0-6 go to methods 0x1A00+unit*0x20 (OFFSET,FORMAT,ADDRESS,CONTROL0,CONTROL1,FILTER,IMAGE_RECT), word 7 to 0x1840+unit*4 (CONTROL3) */
    int offset;
    int format;
    int address;
    int control0;
    int control1;
    int filter;
    int imageRect;
    int control3;
    int unknown_20;
};

struct RGBA {
    u8 r;
    u8 g;
    u8 b;
    u8 a;
};

/* the camera basis particles are drawn with, set each frame by UpdateParts */
struct PartView {
    struct Vec4 right;       /* 0x00 */
    struct Vec4 up;          /* 0x10 */
    struct Vec4 fwd;         /* 0x20 */
    struct Vec4 camPos;      /* 0x30 */
};
/* the per-class statistics UpdatePartsDebug prints */
struct PartProfile {
    u32 count;
    u32 cycles;              /* in units of 32 cycles */
};

// ---- globals
extern undefined4 DAT_00729624; /* 0x729624 */
extern int PartActiveCnt; /* 0xa51fcc */ /* type set in global_types.tsv */
extern int PartIndexNext; /* 0xa51fc4: lowest index that may be free */ /* type set in global_types.tsv */
extern int PartIndexTop; /* 0xa51fc8: highest index in use */ /* type set in global_types.tsv */
extern PartInstance *PartInstances; /* 0xa51fc0: 4096 particles */ /* type set in global_types.tsv */
extern u8 g_NibbleBitCount[16]; /* 0x735570: bits set in each 4-bit value */ /* type set in global_types.tsv */
extern int g_PartBatchBlend; /* 0xa52b80: PartInstance.gsAlpha of the batch being collected */ /* type set in global_types.tsv */
extern int g_PartBatchCount; /* 0x729648: quads in the batch */ /* type set in global_types.tsv */
extern u32 *g_PartBatchTex; /* 0xa52b84: texture header (8 RSX words) of the batch */ /* type set in global_types.tsv */
extern PartProfile g_PartProfile[128]; /* 0x11004000: per class: count and cycles (debug build only) */ /* type set in global_types.tsv */
extern u8 g_PartUsed[512]; /* 0xa52000: a bit per particle in use */ /* type set in global_types.tsv */
extern PartView g_PartView; /* 0xa52b40: camera axes and position for drawing particles (UpdateParts) */ /* type set in global_types.tsv */

// ---- functions
void SECTION_HEADER_PARTPROC(void);
void UpdatePartsDebug(void);
PartInstance *CreatePartEx(int iClass, int unused);
PartInstance *CreatePart(int iClass);
void DeletePart(PartInstance *part);
int CountActiveParts(void);
void UpdateParts(void);
void UpdateParts_NotUsed(void);
void DrawPartBatch(int quadCount, u32 *vertexOffset);
void DrawParts(void);
void UpdatePart_22(PartInstance *part);
