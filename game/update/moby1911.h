#pragma once
// game/update/moby1911.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007da170; /* 0x7da170 */
extern undefined4 DAT_010b7e20; /* no defined data */
extern pointer PTR_DAT_007da810; /* 0x7da810 */
extern pointer PTR_DAT_007da814; /* 0x7da814 */
extern pointer PTR_DAT_007da818; /* 0x7da818 */
extern pointer PTR_DAT_007da81c; /* 0x7da81c */
extern pointer32 PTR_M1911_002d8c98_0070b450; /* 0x70b450 */

// ---- functions
void M1911_002d8a70 (int param_1,float *param_2,float *param_3,undefined8 param_4,float *param_5);
void M1911_002d8c98(void);
void UpdateMoby_1911(MobyInstance *moby);
