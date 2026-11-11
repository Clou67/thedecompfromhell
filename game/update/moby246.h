#pragma once
// game/update/moby246.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007ff91c; /* 0x7ff91c */
extern undefined4 DAT_007ff940; /* 0x7ff940 */
extern undefined4 DAT_007ff980; /* 0x7ff980 */
extern undefined4 DAT_007ff984; /* 0x7ff984 */
extern pointer32 PTR_M246_00312b68_0070bc10; /* 0x70bc10 */
extern pointer32 PTR_M246_00312d38_0070bc18; /* 0x70bc18 */

// ---- functions
void M246_00312b54(void);
void M246_00312b68(int param_1);
void M246_00312d38(int param_1);
void UpdateMoby_246(MobyInstance *moby);
