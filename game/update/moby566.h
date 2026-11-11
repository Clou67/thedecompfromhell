#pragma once
// game/update/moby566.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00845bd0; /* 0x845bd0 */
extern undefined4 DAT_00845be0; /* 0x845be0 */
extern undefined4 DAT_00845c20; /* 0x845c20 */
extern undefined4 DAT_00845c24; /* 0x845c24 */
extern undefined4 DAT_00845c40; /* 0x845c40 */
extern undefined4 DAT_00845c44; /* 0x845c44 */
extern undefined4 DAT_00845c48; /* 0x845c48 */
extern undefined4 DAT_00845c4c; /* 0x845c4c */
extern undefined4 DAT_00845c9c; /* 0x845c9c */
extern undefined4 DAT_010c9f4c; /* 0x10c9f4c */
extern undefined4 DAT_010c9f50; /* 0x10c9f50 */

// ---- functions
MobyInstance * FUN_003bb4a8(double param_1,double param_2,f32 *param_3,float *param_4,float *param_5, undefined8 param_6,undefined8 param_7,float param_8,float param_9);
void M566_003bb988(int param_1);
void M566_003bbbd8(void);
MobyInstance * UpdateMoby_566(MobyInstance *moby);
