#pragma once
// game/update/moby760.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00871d50; /* 0x871d50 */
extern undefined4 DAT_008720ac; /* 0x8720ac */
extern undefined4 DAT_008720b0; /* 0x8720b0 */
extern undefined4 DAT_008720b4; /* 0x8720b4 */
extern undefined4 DAT_008720b8; /* 0x8720b8 */
extern undefined4 DAT_008720d4; /* 0x8720d4 */
extern undefined4 DAT_010ccec0; /* 0x10ccec0 */
extern undefined4 DAT_010cde30; /* no defined data */
extern undefined4 DAT_010cde34; /* no defined data */
extern undefined4 DAT_010cde38; /* no defined data */
extern undefined4 DAT_010cde3c; /* no defined data */
extern undefined4 DAT_010d2930; /* no defined data */
extern undefined4 DAT_010d3bf0; /* no defined data */
extern undefined4 DAT_010d4eb0; /* no defined data */
extern undefined4 DAT_010d5360; /* no defined data */
extern undefined4 DAT_010d6ad0; /* no defined data */
extern undefined4 DAT_010d9050; /* no defined data */
extern undefined4 DAT_010d99b0; /* 0x10d99b0 */
extern undefined4 DAT_010d99b4; /* 0x10d99b4 */
extern pointer PTR_FUN_008720bc; /* 0x8720bc */
extern pointer32 PTR_M761_0044fea8_0070e840; /* 0x70e840 */

// ---- functions
void M760_0044f348(void);
void M760_0044f378(int param_1,longlong param_2);
void M760_0044f4c8(int param_1,longlong param_2);
void UpdateMoby_760(MobyInstance *moby);
