#pragma once
// game/update/moby1848.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007b8090; /* 0x7b8090 */
extern undefined4 DAT_010a0be0; /* 0x10a0be0 */
extern undefined4 DAT_010a0be4; /* 0x10a0be4 */
extern undefined4 DAT_010a0bf0; /* no defined data */
extern pointer PTR_DAT_007bd2e8; /* 0x7bd2e8 */
extern pointer PTR_DAT_007bd2fc; /* 0x7bd2fc */
extern pointer PTR_DAT_007bd310; /* 0x7bd310 */
extern undefined * PTR_DAT_007bd324; /* 0x7bd324 */
extern pointer32 PTR_M1848_002c4f7c_0070b0a8; /* 0x70b0a8 */

// ---- functions
void M1848_002c4d28 (int param_1,float *param_2,float *param_3,undefined8 param_4,float *param_5);
void M1848_002c4f7c(void);
void UpdateMoby_1848(MobyInstance *moby);
