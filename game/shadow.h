#pragma once
// game/shadow.h
#include "types.h"

// ---- types
/* the shadow passes' GS register blocks (0x731800; field names invented). Each block is a GIF
   tag and A+D qwords; only the values written at init are named. */
struct ShadowGsRegs {
    u32 words[4];              /* 0x000  [0] and [1] go to the stubbed volume drawer */
    u64 blends[4][6];          /* 0x010  each: [0] GIF tag, [2] a blend (FUN_00502f98 ..., n) */
    u64 stencils[2][14];       /* 0x0d0  each: [0] GIF tag, [4] FUN_00502e50, [6] clamp, [8] tex1,
                                          [10] tex0 (0xe00 / 0x1000), [12] test */
};
_Static_assert(sizeof(struct ShadowGsRegs) == 0x1b0, "ShadowGsRegs");

/* one moby's entry in the shadow list (g_MobyShadowList): a header and primCnt shape records
   after it (type 0: 0x20 bytes, type 1: 0x30). The list ends with primCnt 0. DL's name,
   RaC1's layout; field names partly invented. */
struct ShadowMoby {
    int primCnt;               /* 0x00 */
    int value;                 /* 0x04  passed to a stubbed function */
    float unk08;               /* 0x08 */
    float unk0c;               /* 0x0c */
    struct Vec4 dir;           /* 0x10  the light direction */
};
_Static_assert(sizeof(struct ShadowMoby) == 0x20, "ShadowMoby");

// ---- globals
extern undefined4 DAT_007319fc; /* 0x7319fc */
extern Vec4 ShadowDir; /* 0xa54ed0: the shadow's light direction, normalized (DL name) */ /* type set in global_types.tsv */
extern Vec4 ShadowVec1; /* 0xa54ee0: a unit vector across ShadowDir (DL name) */ /* type set in global_types.tsv */
extern Vec4 ShadowVec2; /* 0xa54ef0: ShadowDir times the extrusion length (DL name) */ /* type set in global_types.tsv */
extern int g_ShadowSectionWord; /* 0x7317dc: set by SECTION_HEADER_SHADOW */ /* type set in global_types.tsv */
extern int g_ShadowUnkA54f00; /* 0xa54f00: passed to a stubbed shadow function */ /* type set in global_types.tsv */
extern u8 *g_pPacket; /* 0xe5aa58: write position in the GIF/VIF packet being built */ /* type set in global_types.tsv */
extern ShadowGsRegs shadow_gs_regs; /* 0x731800: the GS register blocks the shadow passes send (DL name) */ /* type set in global_types.tsv */

// ---- functions
void SECTION_HEADER_SHADOW(void);
void ShadowSetupVectors(Vec4 dir, float length);
short *ShadowCreateVolume(short *prim);
void ShadowSendGsRegs(int pass, int word, int block);
void ShadowClearStencil(void);
void ShadowDrawStencil(u64 rgba);
void DrawMobyShadows(ShadowMoby *list);
void shadow_init_gs_regs(void);
void STUB_001534e8(...);
void STUB_001534ec(...);
void STUB_001534f0(...);
void STUB_001534f4(...);
void STUB_001534f8(...);
void STUB_001534fc(...);
void STUB_00153500(...);
void STUB_00153504(...);
void STUB_00153508(...);
