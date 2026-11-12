#pragma once
// game/update/moby1307.h
#include "types.h"
#include "game/mobyfunc.h"

// ---- globals
extern undefined4 DAT_002439d0; /* 0x2439d0 */
extern undefined4 DAT_0078e23c; /* 0x78e23c */
extern undefined4 DAT_0078e260; /* 0x78e260 */
extern undefined4 DAT_0078e264; /* 0x78e264 */
extern undefined4 DAT_0078e268; /* 0x78e268 */
extern undefined4 DAT_0078e27c; /* 0x78e27c */
extern undefined4 DAT_0078e280; /* 0x78e280 */
extern undefined4 DAT_0078e284; /* 0x78e284 */
extern undefined4 DAT_0078e2dc; /* 0x78e2dc */

// ---- functions
void M1314_002437fc(void);
MobyInstance * FUN_00243810(int param_1,float *param_2,MOBY_OCLASSES param_3);
void UpdateMoby_1307(MobyInstance *moby);
void M1314_0024477c(void);
