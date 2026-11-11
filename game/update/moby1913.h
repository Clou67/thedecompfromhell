#pragma once
// game/update/moby1913.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007da820; /* 0x7da820 */
extern undefined4 DAT_010b82d0; /* no defined data */
extern pointer PTR_DAT_007dc3e8; /* 0x7dc3e8 */
extern pointer PTR_DAT_007dc3f0; /* 0x7dc3f0 */
extern pointer PTR_DAT_007dc3f8; /* 0x7dc3f8 */
extern pointer PTR_DAT_007dc400; /* 0x7dc400 */
extern pointer32 PTR_M1913_002d9088_0070b468; /* 0x70b468 */

// ---- functions
void M1913_002d8e60 (int param_1,float *param_2,float *param_3,undefined8 param_4,float *param_5);
void M1913_002d9088(void);
void UpdateMoby_1913(MobyInstance *moby);
