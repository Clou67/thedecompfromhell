#pragma once
// game/update/moby1400.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0079cbec; /* 0x79cbec */
extern undefined4 DAT_0079cbf0; /* 0x79cbf0 */
extern undefined4 DAT_0079cbf4; /* 0x79cbf4 */
extern undefined4 DAT_0079cbf8; /* 0x79cbf8 */
extern undefined4 DAT_0079cc00; /* 0x79cc00 */
extern undefined4 DAT_0079cc04; /* 0x79cc04 */
extern undefined4 DAT_00a52b9c; /* 0xa52b9c */
extern undefined4 DAT_00fa4360; /* 0xfa4360 */
extern undefined4 DAT_00fa4364; /* 0xfa4364 */
extern undefined4 DAT_00fa4370; /* 0xfa4370 */
extern undefined4 DAT_00fa4374; /* 0xfa4374 */

// ---- functions
void M1400_0026adc8(int param_1);
void UpdateMoby_1400(MobyInstance *moby);
