#pragma once
// game/update/moby1750.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007b74f0; /* 0x7b74f0 */
extern undefined4 DAT_007b7530; /* 0x7b7530 */
extern undefined4 DAT_007b7534; /* 0x7b7534 */
extern undefined4 DAT_007b7584; /* 0x7b7584 */
extern undefined4 DAT_007b75f8; /* 0x7b75f8 */
extern undefined4 DAT_007b7604; /* 0x7b7604 */
extern undefined4 DAT_007b7608; /* 0x7b7608 */
extern undefined4 DAT_007b760c; /* 0x7b760c */
extern undefined4 DAT_007b7610; /* 0x7b7610 */
extern undefined4 DAT_007b7614; /* 0x7b7614 */
extern undefined4 DAT_007b7618; /* 0x7b7618 */
extern undefined4 DAT_007b761c; /* 0x7b761c */
extern undefined4 DAT_00fb0218; /* 0xfb0218 */
extern undefined4 DAT_00fb0224; /* 0xfb0224 */
extern undefined4 DAT_00fb0228; /* 0xfb0228 */
extern undefined4 DAT_00fb022c; /* 0xfb022c */
extern undefined4 DAT_00fb0230; /* no defined data */

// ---- functions
void M1750_002b1950(int param_1);
void M1750_002b1d84(void);
void UpdateMoby_1750(MobyInstance *moby);
void M176_002b1de0(int param_1);
