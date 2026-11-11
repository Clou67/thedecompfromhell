#pragma once
// game/update/moby574.h
#include "types.h"

// ---- globals
extern undefined4 DAT_003c3684; /* 0x3c3684 */
extern undefined4 DAT_00845fb4; /* 0x845fb4 */
extern undefined4 DAT_00845fd8; /* 0x845fd8 */
extern undefined4 DAT_00845fdc; /* 0x845fdc */
extern undefined4 DAT_00845fe0; /* 0x845fe0 */
extern undefined4 DAT_010c9f58; /* 0x10c9f58 */

// ---- functions
void M574_003c1f3c(MobyInstance *param_1);
void M574_003c1f94(int param_1);
void M574_003c1fec(int param_1);
void M574_003c2044(int param_1);
longlong M574_003c207c(int param_1);
void M574_003c20bc(void);
undefined8 FUN_003c20d0(int param_1);
void FUN_003c20f8(int param_1);
undefined8 M573_003c2108(MobyInstance *param_1);
undefined8 M574_003c21cc(int param_1);
undefined8 M574_003c220c(int param_1);
undefined8 M574_003c22e8(double param_1,int param_2,float *param_3);
void M574_003c24e8(int param_1,undefined8 param_2);
void M574_003c2a58(MobyInstance *param_1);
void UpdateMoby_574(MobyInstance *moby);
