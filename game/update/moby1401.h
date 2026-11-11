#pragma once
// game/update/moby1401.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0026c6cc; /* 0x26c6cc */
extern undefined4 DAT_00270000; /* 0x270000 */
extern undefined4 DAT_0079cc54; /* 0x79cc54 */
extern undefined4 DAT_0079cc78; /* 0x79cc78 */
extern undefined4 DAT_0079cc7c; /* 0x79cc7c */
extern undefined4 DAT_0079cc80; /* 0x79cc80 */
extern undefined4 DAT_0079cc84; /* 0x79cc84 */
extern undefined4 DAT_0079cc88; /* 0x79cc88 */

// ---- functions
void M1401_0026bbd0(void);
void M1401_0026bc10(void);
undefined8 M1401_0026bf18(int param_1);
void M1401_0026c270(int param_1);
void M1401_0026c3b8(int param_1);
void UpdateMoby_1401_MineBot(MobyInstance *moby);
