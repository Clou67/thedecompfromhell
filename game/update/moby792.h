#pragma once
// game/update/moby792.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00873c50; /* 0x873c50 */
extern undefined4 DAT_00873c60; /* 0x873c60 */
extern undefined4 DAT_00873c64; /* 0x873c64 */
extern undefined4 DAT_00873c68; /* 0x873c68 */
extern undefined4 DAT_00873c70; /* 0x873c70 */
extern undefined4 DAT_00873c74; /* 0x873c74 */
extern undefined4 DAT_00873cdc; /* 0x873cdc */
extern undefined4 DAT_010cced0; /* 0x10cced0 */
extern undefined4 DAT_010cced4; /* 0x10cced4 */
extern undefined4 DAT_010cced8; /* 0x10cced8 */
extern undefined4 DAT_010ccedc; /* 0x10ccedc */
extern pointer PTR_DAT_00873c6c; /* 0x873c6c */

// ---- functions
void M792_0045f698(int param_1);
void M792_0045fad0(void);
void UpdateMoby_792(MobyInstance *moby);
