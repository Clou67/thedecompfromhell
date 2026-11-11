#pragma once
// game/update/moby252.h
#include "types.h"

// ---- globals
extern undefined4 DAT_003172b8; /* 0x3172b8 */
extern undefined4 DAT_007ffc10; /* no defined data */
extern pointer32 PTR_M253_00318b50_0070bcc8; /* 0x70bcc8 */
extern pointer32 PTR_M253_003196c0_0070bcf8; /* 0x70bcf8 */

// ---- functions
void M252_00316de0(int param_1);
void M252_003170e8(MobyInstance *param_1);
void UpdateMoby_252(MobyInstance *moby);
