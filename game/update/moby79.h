#pragma once
// game/update/moby79.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00873c40; /* 0x873c40 */
extern undefined4 DAT_00873c44; /* 0x873c44 */
extern undefined4 DAT_00873c48; /* 0x873c48 */
extern undefined4 DAT_00873c4c; /* 0x873c4c */
extern undefined4 DAT_00873c54; /* 0x873c54 */
extern undefined4 DAT_00873c58; /* 0x873c58 */
extern undefined4 DAT_00873c5c; /* 0x873c5c */
extern pointer32 PTR_M792_0045f698_0070ea40; /* 0x70ea40 */

// ---- functions
void M789_0045e140(int param_1,undefined8 param_2);
void UpdateMoby_79(MobyInstance *moby);
