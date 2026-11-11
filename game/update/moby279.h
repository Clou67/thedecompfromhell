#pragma once
// game/update/moby279.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00800240; /* 0x800240 */
extern undefined4 DAT_00800248; /* 0x800248 */
extern undefined4 DAT_0080024c; /* 0x80024c */
extern undefined4 DAT_00800250; /* 0x800250 */
extern pointer32 PTR_M280_00329e48_0070bf20; /* 0x70bf20 */
extern pointer32 PTR_M280_0032aa00_0070bf28; /* 0x70bf28 */

// ---- functions
void UpdateMoby_279(MobyInstance *moby);
void M28_00326788(void *param_1);
void M279_00326b90(undefined8 param_1,int param_2);
void M28_00326c98(undefined8 param_1,int param_2,int param_3,int param_4);
