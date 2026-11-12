#pragma once
// game/update/moby1440.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00280000; /* 0x280000 */
extern undefined4 DAT_007aa794; /* 0x7aa794 */
extern undefined4 DAT_007aa7c0; /* 0x7aa7c0 */
extern undefined4 DAT_007aa7c4; /* 0x7aa7c4 */
extern undefined4 DAT_007aa7c8; /* 0x7aa7c8 */
extern undefined4 DAT_007aa7cc; /* 0x7aa7cc */
extern undefined4 DAT_007aa7d0; /* 0x7aa7d0 */
extern undefined4 DAT_007aa7d4; /* 0x7aa7d4 */
extern undefined4 DAT_007aa7d8; /* 0x7aa7d8 */
extern undefined4 DAT_007aa7dc; /* 0x7aa7dc */
extern pointer32 PTR_M1441_0027ecd0_0070a670; /* 0x70a670 */

// ---- functions
void M1440_0027caec(void);
void M1440_0027cb28(void *param_1);
void M1440_0027cd50(MobyInstance *param_1);
void UpdateMoby_1440(MobyInstance *moby);
