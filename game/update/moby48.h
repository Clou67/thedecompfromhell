#pragma once
// game/update/moby48.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0039d308; /* 0x39d308 */
extern undefined4 DAT_00843010; /* 0x843010 */
extern undefined4 DAT_00843014; /* 0x843014 */
extern undefined4 DAT_00843018; /* 0x843018 */
extern undefined4 DAT_0084301c; /* 0x84301c */
extern undefined4 DAT_00843020; /* 0x843020 */
extern undefined4 DAT_00843024; /* 0x843024 */
extern undefined4 DAT_00843030; /* 0x843030 */
extern undefined4 DAT_00843034; /* 0x843034 */
extern undefined4 DAT_00843038; /* 0x843038 */
extern undefined4 DAT_0084303c; /* 0x84303c */
extern undefined4 DAT_00843040; /* 0x843040 */

// ---- functions
void M479_0039d1c8(int param_1,int param_2,int param_3);
void M48_0039d328(MobyInstance *param_1);
void UpdateMoby_48(MobyInstance *moby);
