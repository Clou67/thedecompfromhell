#pragma once
// game/update/moby341.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00840064; /* 0x840064 */
extern undefined4 DAT_00840088; /* 0x840088 */
extern undefined4 DAT_0084008c; /* 0x84008c */
extern undefined4 DAT_00840090; /* 0x840090 */
extern undefined4 DAT_00840094; /* 0x840094 */
extern undefined4 DAT_00840098; /* 0x840098 */

// ---- functions
void M341_0034d71c(MobyInstance *param_1);
void M341_0034d774(int param_1);
undefined8 M341_0034d7cc (undefined8 param_1,MobyInstance *param_2,undefined8 param_3,undefined8 param_4);
void M341_0034d894(int param_1);
longlong M341_0034d8cc(int param_1);
void M341_0034d90c(void);
double M341_0034d950(int param_1);
void UpdateMoby_341(MobyInstance *moby);
