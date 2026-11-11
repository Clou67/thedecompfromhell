#pragma once
// game/update/moby852.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0048e748; /* 0x48e748 */
extern undefined4 DAT_008ad3ac; /* 0x8ad3ac */
extern undefined4 DAT_008ad3d0; /* 0x8ad3d0 */
extern undefined4 DAT_008ad3d4; /* 0x8ad3d4 */
extern undefined4 DAT_008ad3d8; /* 0x8ad3d8 */
extern undefined4 DAT_008ad3dc; /* 0x8ad3dc */
extern undefined4 DAT_008ad3e0; /* 0x8ad3e0 */
extern undefined4 DAT_008ad3e4; /* 0x8ad3e4 */

// ---- functions
void M852_0048e730(void);
MobyInstance * UpdateMoby_852(MobyInstance *moby);
