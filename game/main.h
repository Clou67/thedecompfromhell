#pragma once
// game/main.h
#include "types.h"

// ---- types
/* per-level records, g_LevelRecords[] @ 0xa0fd24, 8 bytes each (updated in startLevel's setup and loop) */
typedef struct LevelRecord {
    u16 visits;          /* +0  times entered, stops at 0xffff */
    u16 playTime;        /* +2  max of (game frames * animationSpeed) / 600, i.e. 10 s units at 60 fps */
    u32 flags;           /* +4  bit `level` and bit 31 set when the level is entered */
} LevelRecord;
typedef char LevelRecord_size_check[sizeof(LevelRecord) == 8 ? 1 : -1];

// ---- globals
extern undefined4 DAT_0071fb00; /* 0x71fb00 */
extern undefined4 DAT_00724840; /* 0x724840 */
extern float g_FrameLoad; /* 0xa10714: last frame's ticks / one frame's budget */ /* type set in global_types.tsv */
extern int g_HideActivityIcon; /* 0xa52ce8: set by pause for one frame to suppress the save/load icon */ /* type set in global_types.tsv */
extern LevelRecord g_LevelRecords[]; /* 0xa0fd24 */ /* type set in global_types.tsv */
extern int g_MainLoopFrames; /* 0x159c330: frames run by startLevel's loop */ /* type set in global_types.tsv */
extern u16 g_SceneRecording; /* 0x95cda0: the scene is being written out (debug) */ /* type set in global_types.tsv */
extern u8 g_StartLevelClear; /* 0xa106c4: the one byte startLevel clears first (Ghidra label "startLevel") */ /* type set in global_types.tsv */
extern u32 g_TotalFrameTicks; /* 0xa53500 */ /* type set in global_types.tsv */
extern u32 *g_pFrameTicks; /* 0x927200: tick counter for the current frame (9600 per NTSC frame, 11520 PAL) */ /* type set in global_types.tsv */

// ---- functions
void SECTION_HEADER_MAIN(void);
void startLevel(void);
