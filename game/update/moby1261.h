#pragma once
// game/update/moby1261.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007750ac; /* 0x7750ac */
extern undefined4 DAT_007750e0; /* 0x7750e0 */
extern undefined4 DAT_007750e4; /* 0x7750e4 */
extern undefined4 DAT_007750e8; /* 0x7750e8 */
extern undefined4 DAT_007750ec; /* 0x7750ec */
extern undefined4 DAT_007750f0; /* 0x7750f0 */
extern undefined4 DAT_007750f4; /* 0x7750f4 */
extern undefined4 DAT_007750f8; /* 0x7750f8 */
extern undefined4 DAT_007750fc; /* 0x7750fc */
extern undefined4 DAT_00775100; /* 0x775100 */
extern undefined4 DAT_00775104; /* 0x775104 */
extern undefined4 DAT_00775108; /* 0x775108 */

// ---- functions
void M1261_0022b8ec(void);
void M1261_0022b928(void);
void M1261_0022bb60(int param_1);
void UpdateMoby_1261(MobyInstance *moby);
