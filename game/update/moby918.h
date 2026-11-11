#pragma once
// game/update/moby918.h
#include "types.h"

// ---- globals
extern undefined4 DAT_008f42f0; /* 0x8f42f0 */
extern undefined4 DAT_008f4320; /* no defined data */
extern undefined4 DAT_008f4330; /* no defined data */
extern undefined4 DAT_008f4340; /* 0x8f4340 */
extern undefined4 DAT_008f4344; /* 0x8f4344 */
extern undefined4 DAT_008f4348; /* 0x8f4348 */
extern undefined4 DAT_008f434c; /* 0x8f434c */
extern undefined4 DAT_008f4350; /* 0x8f4350 */
extern undefined4 DAT_008f4354; /* 0x8f4354 */
extern undefined4 DAT_008f4358; /* 0x8f4358 */
extern undefined4 DAT_008f435c; /* 0x8f435c */
extern undefined4 g_BoobsSize; /* 0x10e47c0 */

// ---- functions
void M918_004b01cc(void);
void M918_004b0218(undefined8 param_1,longlong param_2);
void M918_004b04e4(int param_1);
void UpdateMoby_918(MobyInstance *moby);
