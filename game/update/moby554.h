#pragma once
// game/update/moby554.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00845740; /* 0x845740 */
extern undefined4 DAT_00845744; /* 0x845744 */
extern undefined4 DAT_00845750; /* 0x845750 */
extern undefined4 DAT_00845790; /* 0x845790 */
extern undefined4 DAT_00845794; /* 0x845794 */
extern undefined4 DAT_008457b0; /* 0x8457b0 */
extern undefined4 DAT_008457b4; /* 0x8457b4 */
extern undefined4 DAT_008457b8; /* 0x8457b8 */
extern undefined4 DAT_008457bc; /* 0x8457bc */
extern undefined4 DAT_0084580c; /* 0x84580c */
extern undefined4 DAT_0084587c; /* 0x84587c */
extern undefined4 DAT_010c9f44; /* 0x10c9f44 */
extern undefined4 DAT_010c9f48; /* 0x10c9f48 */

// ---- functions
void M554_003b1fd0(int param_1,int param_2);
void M554_003b21f0(int param_1);
void M554_003b22ac(void);
undefined8 M554_003b22e0(int param_1);
void M554_003b2868(MobyInstance *moby);
void M554_003b322c(void);
void UpdateMoby_554(MobyInstance *moby);
