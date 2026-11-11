#pragma once
// game/update/moby1060.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00740964; /* 0x740964 */
extern undefined4 DAT_00740988; /* 0x740988 */
extern undefined4 DAT_0074098c; /* 0x74098c */
extern undefined4 DAT_00740990; /* 0x740990 */
extern pointer32 PTR_M1060_001abec8_00708890; /* 0x708890 */

// ---- functions
void M1060_001abea4(void);
void M1060_001abec8(int param_1);
void M1060_001abfcc(MobyInstance *param_1);
void UpdateMoby_1060(MobyInstance *moby);
