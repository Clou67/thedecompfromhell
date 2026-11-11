#pragma once
// game/update/moby1402.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0079ccf4; /* 0x79ccf4 */
extern undefined4 DAT_0079cd28; /* 0x79cd28 */
extern undefined4 DAT_00fa43c8; /* no defined data */
extern undefined4 DAT_00fa8a40; /* 0xfa8a40 */
extern undefined4 DAT_00fa8a44; /* 0xfa8a44 */
extern undefined4 DAT_00fa8a48; /* 0xfa8a48 */
extern pointer32 PTR_M1403_0026d8d8_0070a378; /* 0x70a378 */
extern pointer32 PTR_M1403_0026db00_0070a380; /* 0x70a380 */
extern pointer32 PTR_M1403_0026dd28_0070a388; /* 0x70a388 */

// ---- functions
void M1402_0026d3cc(void);
void M1402_0026d3e0(int param_1);
void UpdateMoby_1402(MobyInstance *moby);
