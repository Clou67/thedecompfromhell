#pragma once
// game/update/moby217.h
#include "types.h"

// ---- globals
extern undefined4 DAT_002f2000; /* 0x2f2000 */
extern undefined4 DAT_007fedd8; /* 0x7fedd8 */
extern undefined4 DAT_010bb414; /* 0x10bb414 */
extern undefined4 DAT_010bb418; /* 0x10bb418 */
extern undefined4 DAT_010bb41c; /* 0x10bb41c */
extern undefined4 DAT_010bb420; /* 0x10bb420 */
extern undefined4 DAT_010bb424; /* 0x10bb424 */
extern undefined4 DAT_010bb428; /* 0x10bb428 */
extern undefined4 DAT_010bb42c; /* 0x10bb42c */
extern undefined4 DAT_010bb430; /* 0x10bb430 */
extern undefined4 DAT_010bb434; /* 0x10bb434 */
extern undefined4 DAT_010bb438; /* 0x10bb438 */
extern undefined4 DAT_010bb43c; /* 0x10bb43c */
extern undefined4 DAT_010bb444; /* 0x10bb444 */

// ---- functions
void M217_002f19c8(void);
void M217_002f1b70 (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
void M217_002f1be4(double param_1,int param_2);
void M217_002f1c10(MobyInstance *param_1);
void M217_002f1f28(undefined8 param_1);
void UpdateMoby_217(MobyInstance *moby);
