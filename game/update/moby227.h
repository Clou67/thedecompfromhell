#pragma once
// game/update/moby227.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007ff0c4; /* 0x7ff0c4 */
extern undefined4 DAT_007ff0c8; /* 0x7ff0c8 */
extern undefined4 DAT_007ff0cc; /* 0x7ff0cc */
extern undefined4 DAT_007ff0d0; /* 0x7ff0d0 */
extern undefined4 DAT_007ff0d4; /* 0x7ff0d4 */
extern undefined4 DAT_007ff0d8; /* 0x7ff0d8 */
extern undefined4 DAT_007ff0e0; /* 0x7ff0e0 */
extern undefined4 DAT_007ff0e4; /* 0x7ff0e4 */
extern undefined4 DAT_007ff0e8; /* 0x7ff0e8 */
extern undefined4 DAT_010bb448; /* 0x10bb448 */
extern undefined4 DAT_010bb44c; /* 0x10bb44c */
extern undefined4 DAT_010bb450; /* 0x10bb450 */
extern undefined4 DAT_010bb454; /* 0x10bb454 */
extern undefined4 DAT_010bb45c; /* 0x10bb45c */
extern undefined4 DAT_010bb460; /* 0x10bb460 */
extern undefined4 DAT_010bb464; /* 0x10bb464 */
extern undefined4 DAT_010bb468; /* 0x10bb468 */
extern undefined4 DAT_010bb46c; /* 0x10bb46c */
extern undefined4 DAT_010bb474; /* 0x10bb474 */

// ---- functions
MobyInstance * M227_002fa200(MobyInstance *param_1,int param_2,MobyInstance *param_3);
void UpdateMoby_227(MobyInstance *moby);
