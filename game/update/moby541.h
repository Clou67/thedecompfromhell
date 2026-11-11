#pragma once
// game/update/moby541.h
#include "types.h"

// ---- globals
extern undefined4 DAT_003ad0e8; /* 0x3ad0e8 */
extern undefined4 DAT_00845590; /* 0x845590 */
extern undefined4 DAT_00845594; /* 0x845594 */
extern undefined4 DAT_00845598; /* 0x845598 */
extern undefined4 DAT_008455a0; /* 0x8455a0 */
extern undefined4 DAT_010c9f40; /* 0x10c9f40 */
extern pointer32 PTR_M542_003aefd0_0070d110; /* 0x70d110 */

// ---- functions
undefined8 M541_003ac678 (double param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5);
void M541_003ac860(MobyInstance *param_1);
void M541_003ac968(MobyInstance *param_1);
void UpdateMoby_541(MobyInstance *moby);
