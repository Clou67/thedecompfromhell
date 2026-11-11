#pragma once
// game/update/moby855.h
#include "types.h"

// ---- globals
extern undefined4 DAT_008c7b3c; /* 0x8c7b3c */
extern undefined4 DAT_008c7b68; /* 0x8c7b68 */
extern undefined4 DAT_008c7b6c; /* 0x8c7b6c */
extern undefined4 DAT_008c7b70; /* 0x8c7b70 */
extern undefined4 DAT_008c7b74; /* 0x8c7b74 */
extern undefined4 DAT_008c7b78; /* 0x8c7b78 */
extern undefined4 DAT_008c7b7c; /* 0x8c7b7c */
extern undefined4 DAT_008c7b80; /* 0x8c7b80 */
extern undefined4 DAT_008c7b84; /* 0x8c7b84 */

// ---- functions
void M855_0048ec58(void);
ulonglong UpdateMoby_855(MobyInstance *moby);
