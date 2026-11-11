#pragma once
// game/update/moby463.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00842bd8; /* 0x842bd8 */
extern undefined4 DAT_00842bfc; /* 0x842bfc */
extern undefined4 DAT_00842c00; /* 0x842c00 */
extern undefined4 DAT_010c9244; /* 0x10c9244 */

// ---- functions
void M463_00394bf8(void);
void M463_00394c18(int param_1);
longlong M463_00394e68(MobyInstance *param_1);
void M463_00395238(int param_1);
void UpdateMoby_463(MobyInstance *moby);
