#pragma once
// game/update/moby19.h
#include "types.h"

// ---- globals
extern undefined4 DAT_010a2300; /* no defined data */
extern undefined4 DAT_010a2440; /* 0x10a2440 */
extern undefined4 DAT_010a2444; /* 0x10a2444 */
extern undefined4 DAT_010a2448; /* no defined data */
extern undefined4 DAT_010a244c; /* no defined data */
extern undefined4 DAT_010a244d; /* no defined data */
extern undefined4 DAT_010a244e; /* no defined data */
extern undefined4 DAT_010a244f; /* no defined data */
extern undefined4 DAT_010a2450; /* no defined data */
extern undefined4 DAT_010a2451; /* no defined data */
extern undefined4 DAT_010a2452; /* no defined data */
extern undefined4 DAT_010a2453; /* no defined data */
extern undefined4 DAT_010a2454; /* no defined data */
extern undefined4 DAT_010a2458; /* no defined data */
extern undefined4 DAT_010a245c; /* no defined data */
extern undefined4 DAT_010a245d; /* no defined data */
extern undefined2 DAT_010a245e; /* 0x10a245e */
extern pointer32 PTR_M190_002d2290_0070b2d8; /* 0x70b2d8 */

// ---- functions
void M19_002d1870(int param_1);
void UpdateMoby_19(MobyInstance *moby);
