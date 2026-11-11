#pragma once
// game/update/moby319.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0083bc60; /* 0x83bc60 */
extern undefined4 DAT_0083bc64; /* 0x83bc64 */
extern undefined4 DAT_0083bc68; /* 0x83bc68 */
extern undefined4 DAT_0083bc6c; /* 0x83bc6c */
extern undefined4 DAT_0083bc70; /* 0x83bc70 */
extern undefined4 DAT_0083bc74; /* 0x83bc74 */
extern undefined4 DAT_0083bc90; /* 0x83bc90 */
extern undefined4 DAT_0083bce8; /* 0x83bce8 */
extern undefined4 DAT_010c1080; /* 0x10c1080 */
extern undefined4 DAT_010c1084; /* 0x10c1084 */

// ---- functions
void M319_003411d0(int param_1);
void M319_0034155c(void);
MobyInstance * UpdateMoby_319(MobyInstance *moby);
