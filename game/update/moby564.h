#pragma once
// game/update/moby564.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00845bac; /* 0x845bac */
extern undefined4 DAT_00845bdc; /* 0x845bdc */
extern pointer32 PTR_M566_003bb988_0070d2e0; /* 0x70d2e0 */

// ---- functions
void M564_003ba6fc(void);
void M564_003ba730 (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
void M564_003ba908(void);
undefined ** UpdateMoby_564(MobyInstance *moby);
