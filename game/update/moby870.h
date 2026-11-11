#pragma once
// game/update/moby870.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0049c758; /* 0x49c758 */
extern undefined4 DAT_008c7f14; /* 0x8c7f14 */
extern undefined4 DAT_008c7f38; /* 0x8c7f38 */
extern undefined4 DAT_008c7f3c; /* 0x8c7f3c */
extern undefined4 DAT_008c7f40; /* 0x8c7f40 */
extern undefined4 DAT_008c7f44; /* 0x8c7f44 */
extern undefined4 DAT_008c7f4c; /* 0x8c7f4c */
extern undefined4 DAT_008c7f50; /* 0x8c7f50 */
extern undefined4 DAT_008c7f5c; /* 0x8c7f5c */
extern undefined4 DAT_008c7f60; /* 0x8c7f60 */
extern undefined4 DAT_008c7f64; /* 0x8c7f64 */
extern undefined4 DAT_008c7f68; /* 0x8c7f68 */
extern undefined4 DAT_008c7f6c; /* 0x8c7f6c */

// ---- functions
void M870_0049b854(void);
double M870_0049b880(int param_1);
void M870_0049bf78(int param_1);
void M870_0049bff8(MobyInstance *param_1);
void UpdateMoby_870(MobyInstance *moby);
