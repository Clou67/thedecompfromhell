#pragma once
// game/update/moby1565.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007aba40; /* 0x7aba40 */
extern undefined4 DAT_007aba60; /* 0x7aba60 */
extern undefined4 DAT_007abc88; /* 0x7abc88 */
extern undefined4 DAT_007abc8c; /* 0x7abc8c */
extern undefined4 DAT_007abebc; /* 0x7abebc */
extern undefined4 DAT_007abec0; /* 0x7abec0 */
extern undefined4 DAT_007abec4; /* 0x7abec4 */
extern undefined4 DAT_007abec8; /* 0x7abec8 */
extern undefined4 DAT_007abecc; /* 0x7abecc */
extern undefined4 DAT_007abed0; /* 0x7abed0 */
extern undefined4 DAT_007abed4; /* 0x7abed4 */
extern undefined4 DAT_007abed8; /* 0x7abed8 */
extern undefined4 DAT_00fadbd0; /* 0xfadbd0 */
extern undefined4 DAT_00fadbd4; /* 0xfadbd4 */
extern undefined4 DAT_00fadbd8; /* 0xfadbd8 */
extern undefined4 DAT_00faddf8; /* 0xfaddf8 */
extern undefined4 DAT_00faddfc; /* 0xfaddfc */
extern undefined4 DAT_00fadf68; /* 0xfadf68 */
extern pointer PTR_DAT_007abeb0; /* 0x7abeb0 */
extern pointer PTR_DAT_007abeb4; /* 0x7abeb4 */
extern pointer PTR_DAT_007abeb8; /* 0x7abeb8 */
extern pointer32 PTR_M1565_0029d610_0070aac8; /* 0x70aac8 */

// ---- functions
void M1565_0029d610(int param_1);
void UpdateMoby_1565(MobyInstance *moby);
