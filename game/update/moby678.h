#pragma once
// game/update/moby678.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00856f2c; /* 0x856f2c */
extern undefined4 DAT_010cc210; /* 0x10cc210 */
extern pointer PTR_DAT_00857020; /* 0x857020 */
extern pointer32 PTR_M678_0040f890_0070dff0; /* 0x70dff0 */

// ---- functions
void M678_0040f878(void);
void M678_0040f890(void);
void UpdateMoby_678(MobyInstance *moby);
