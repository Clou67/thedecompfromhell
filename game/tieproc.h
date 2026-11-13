#pragma once
// game/tieproc.h
#include "types.h"

// ---- types
struct TieInstance {           /* 0x70 */
    char _unknown_00[64];
    struct BSphere bSphere;    /* 0x40 */
    char field2_0x50[8];
    char occlIndex[5];         /* 0x58 */
    char dir_lights_upd;       /* 0x5d  set when no point light is left on it (DetachPointLight) */
    char _unknown_5e[11];
    ushort point_lights;       /* 0x6a  four 4-bit point light slots, 0xf = empty */
    char _unknown_6c[4];
};

// ---- globals
extern u8 *TieClasses[128]; /* 0xe574f0: the level's tie classes, 0x40 bytes each (DL name) */ /* type set in global_types.tsv */
extern u8 *g_TieDmaMarker; /* 0xe59c10: the DMA tag that jumps over the tie texture upload */ /* type set in global_types.tsv */
extern u8 g_TieDrawPacket[0x1210]; /* 0xe59010: up to g_TieDrawStateSave */ /* type set in global_types.tsv */
extern u8 g_TieDrawState[0x400]; /* 0xe58810 */ /* type set in global_types.tsv */
extern u8 g_TieDrawStateSave[0x400]; /* 0xe59c20 */ /* type set in global_types.tsv */
extern u32 g_TieDrawVif[90]; /* 0x736738: [30..37] ends the tie draw packet */ /* type set in global_types.tsv */
extern u64 g_TieGifTags[57]; /* 0x736510: GIF tags (one per 16 bytes) and GS registers */ /* type set in global_types.tsv */
extern u64 g_TieGsRegs[62]; /* 0x7359e0: GIF REGLIST tag, then 6 groups of 10 GS registers */ /* type set in global_types.tsv */
extern int g_TiePacketScale; /* 0x7386a0: 16.16 */ /* type set in global_types.tsv */
extern u32 g_TieShellVif[150]; /* 0x735ec8: VIF code templates for the tie shells (two of 0x90 bytes, then DMA tags) */ /* type set in global_types.tsv */
extern u8 g_TieTexPacket[0x3600]; /* 0xe5a220 */ /* type set in global_types.tsv */
extern int g_TieTexPeak; /* 0xe58408: most GS memory the tie textures have used */ /* type set in global_types.tsv */
extern u8 g_TieTexState[0x200]; /* 0xe58e10 */ /* type set in global_types.tsv */
extern u8 g_TieTexStateSave[0x200]; /* 0xe5a020 */ /* type set in global_types.tsv */
extern u32 g_TieTexVif[40]; /* 0x737c48 */ /* type set in global_types.tsv */
extern u32 g_TieUnpackVif[101]; /* 0x736198 */ /* type set in global_types.tsv */

// ---- functions
void TieInitPackets(void);
void DrawTies_CheckTexOverflow(void);
void STUB_00166ad8(...);
void TieSaveDrawState(void);
void TieClearPackets(void);
void STUB_00166b6c(...);
void DrawTies(void);
