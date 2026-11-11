#pragma once
// game/update/moby69.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0041be44; /* 0x41be44 */
extern undefined4 DAT_00857820; /* 0x857820 */
extern undefined4 DAT_00857824; /* 0x857824 */
extern undefined4 DAT_00857828; /* 0x857828 */
extern undefined4 DAT_00857830; /* no defined data */
extern undefined4 DAT_008578b4; /* no defined data */
extern undefined1 DAT_010cccdc; /* 0x10cccdc */
extern pointer32 PTR_M688_0041b008_0070e148; /* 0x70e148 */

// ---- functions
void M69_0041bf10(MobyInstance *param_1,longlong param_2);
void UpdateMoby_69(MobyInstance *moby);
