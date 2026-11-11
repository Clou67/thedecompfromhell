#pragma once
// game/update/moby624.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00853e5c; /* 0x853e5c */
extern undefined4 DAT_00853e84; /* 0x853e84 */
extern undefined4 DAT_00853e8c; /* 0x853e8c */
extern undefined4 DAT_00853e90; /* 0x853e90 */
extern undefined4 DAT_00853e9c; /* 0x853e9c */
extern undefined4 DAT_00853ea0; /* 0x853ea0 */
extern undefined4 DAT_00853ea4; /* 0x853ea4 */
extern undefined4 DAT_00853ea8; /* 0x853ea8 */
extern undefined4 DAT_00853eac; /* 0x853eac */
extern undefined4 DAT_00853eb0; /* 0x853eb0 */
extern undefined4 DAT_00853eb4; /* 0x853eb4 */
extern undefined4 DAT_00853eb8; /* 0x853eb8 */
extern undefined4 DAT_00853ebc; /* 0x853ebc */
extern undefined4 DAT_00853ec0; /* 0x853ec0 */
extern undefined4 DAT_00853ec4; /* 0x853ec4 */
extern undefined4 DAT_00853ec8; /* 0x853ec8 */
extern undefined4 DAT_00853ecc; /* 0x853ecc */
extern undefined4 DAT_00853ed0; /* 0x853ed0 */
extern undefined4 DAT_00853f28; /* 0x853f28 */
extern undefined4 DAT_00853f2c; /* 0x853f2c */
extern undefined4 DAT_00853f30; /* 0x853f30 */
extern undefined4 DAT_00853f34; /* 0x853f34 */
extern undefined4 DAT_00853f38; /* 0x853f38 */
extern undefined4 DAT_00853f3c; /* 0x853f3c */
extern pointer32 PTR_M625_003e82b0_0070da40; /* 0x70da40 */

// ---- functions
void M624_003e70b0(void);
void M624_003e70d8(void);
void M624_003e7450 (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
void UpdateMoby_624(MobyInstance *moby);
