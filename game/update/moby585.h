#pragma once
// game/update/moby585.h
#include "types.h"

// ---- globals
extern undefined4 DAT_008465b0; /* 0x8465b0 */
extern undefined4 DAT_008465b4; /* 0x8465b4 */
extern undefined4 DAT_008465b8; /* 0x8465b8 */
extern undefined4 DAT_008465c0; /* 0x8465c0 */
extern undefined4 DAT_008465c4; /* 0x8465c4 */
extern undefined4 DAT_008465c8; /* 0x8465c8 */
extern undefined4 DAT_008465d0; /* 0x8465d0 */
extern undefined4 DAT_008465d4; /* 0x8465d4 */
extern undefined4 DAT_008465e0; /* 0x8465e0 */
extern undefined4 DAT_008465e4; /* 0x8465e4 */
extern undefined4 DAT_008465e8; /* 0x8465e8 */
extern undefined4 DAT_008465f0; /* 0x8465f0 */
extern undefined4 DAT_008465f4; /* 0x8465f4 */
extern undefined4 DAT_010c9f90; /* 0x10c9f90 */
extern undefined4 DAT_010c9f94; /* 0x10c9f94 */
extern undefined4 DAT_010c9fa0; /* no defined data */
extern undefined4 DAT_010c9fb0; /* no defined data */
extern undefined4 DAT_010c9fe0; /* 0x10c9fe0 */
extern pointer32 PTR_M585_003d24a8_0070d758; /* 0x70d758 */
extern undefined4 _DAT_010c9fa0; /* direct read */

// ---- functions
void M585_003d24a8(int param_1);
void M585_003d2b38(int param_1);
void UpdateMoby_585(MobyInstance *moby);
