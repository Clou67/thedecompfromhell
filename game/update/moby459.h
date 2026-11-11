#pragma once
// game/update/moby459.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0038f4bc; /* 0x38f4bc */
extern undefined4 DAT_008421f0; /* 0x8421f0 */
extern undefined4 DAT_00842214; /* 0x842214 */
extern undefined4 DAT_00842218; /* 0x842218 */
extern undefined4 DAT_00842220; /* 0x842220 */
extern undefined4 DAT_00842270; /* 0x842270 */

// ---- functions
void M459_0038e938(void);
void M459_0038e978 (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
ulonglong M459_0038ed08(int param_1,uint *param_2);
void UpdateMoby_459(MobyInstance *moby);
void M459_00391c14(void);
