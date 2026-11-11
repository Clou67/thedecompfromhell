#pragma once
// game/update/moby221.h
#include "types.h"

// ---- globals
extern undefined4 DAT_002f8c08; /* 0x2f8c08 */
extern undefined4 DAT_007ff00c; /* 0x7ff00c */
extern undefined4 DAT_007ff030; /* 0x7ff030 */
extern undefined4 DAT_007ff038; /* 0x7ff038 */
extern undefined4 DAT_007ff03c; /* 0x7ff03c */
extern undefined4 DAT_007ff040; /* 0x7ff040 */
extern undefined4 DAT_007ff044; /* 0x7ff044 */
extern undefined4 DAT_007ff048; /* 0x7ff048 */

// ---- functions
void M221_002f8bf4(void);
void UpdateMoby_221(MobyInstance *moby);
