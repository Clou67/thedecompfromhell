#pragma once
// game/update/moby530.h
#include "types.h"

// ---- globals
extern undefined4 DAT_008437e8; /* 0x8437e8 */
extern undefined4 DAT_00843810; /* 0x843810 */
extern undefined2 DAT_00843e70; /* 0x843e70 */
extern undefined4 DAT_00844a00; /* 0x844a00 */
extern undefined4 DAT_00845500; /* 0x845500 */
extern undefined4 DAT_00845504; /* 0x845504 */
extern undefined4 DAT_00845508; /* 0x845508 */
extern undefined4 DAT_0084550c; /* 0x84550c */
extern undefined4 DAT_00845510; /* 0x845510 */
extern undefined4 DAT_010c9270; /* 0x10c9270 */
extern undefined4 DAT_010c9274; /* 0x10c9274 */
extern undefined4 DAT_010c9278; /* 0x10c9278 */
extern undefined4 DAT_010c927c; /* 0x10c927c */
extern undefined4 DAT_010c98d0; /* 0x10c98d0 */
extern undefined4 DAT_010c98d4; /* 0x10c98d4 */
extern undefined4 DAT_010c9c00; /* 0x10c9c00 */
extern undefined4 DAT_010c9c04; /* 0x10c9c04 */
extern undefined4 DAT_010c9f30; /* 0x10c9f30 */
extern undefined4 DAT_010c9f34; /* 0x10c9f34 */
extern pointer32 PTR_M530_003abcb8_0070d0b8; /* 0x70d0b8 */

// ---- functions
void M530_003abc80(void);
void M530_003abcb8(int param_1);
void UpdateMoby_530(MobyInstance *moby);
