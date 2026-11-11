#pragma once
// game/update/moby576.h
#include "types.h"

// ---- globals
extern undefined4 DAT_003c74d8; /* 0x3c74d8 */
extern undefined4 DAT_003c77b8; /* 0x3c77b8 */
extern undefined4 DAT_008460a8; /* 0x8460a8 */
extern undefined4 DAT_008460d8; /* 0x8460d8 */
extern undefined4 DAT_010c9f5c; /* 0x10c9f5c */
extern pointer PTR_DAT_008460cc; /* 0x8460cc */
extern pointer32 PTR_M577_003c83e0_0070d540; /* 0x70d540 */

// ---- functions
void M576_003c7080(void);
double M576_003c70d8(int param_1,undefined8 param_2,undefined8 param_3);
void M576_003c74e8(MobyInstance *param_1);
void UpdateMoby_576(MobyInstance *moby);
