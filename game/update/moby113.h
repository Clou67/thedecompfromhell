#pragma once
// game/update/moby113.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0024ed84; /* 0x24ed84 */
extern undefined4 DAT_0079b490; /* 0x79b490 */
extern undefined4 DAT_0079b520; /* 0x79b520 */
extern undefined4 DAT_00fa2f20; /* 0xfa2f20 */
extern undefined4 DAT_00fa2f80; /* no defined data */
extern undefined4 DAT_00fa306c; /* 0xfa306c */

// ---- functions
undefined8 FUN_0024d2e4(int param_1,undefined4 param_2,undefined4 param_3);
undefined8 M1338_0024d3dc(int param_1);
undefined8 FUN_0024d43c(int param_1);
undefined8 FUN_0024d50c(int param_1,undefined8 param_2,undefined4 *param_3);
void M1338_0024d620(undefined8 param_1,undefined8 param_2,longlong param_3);
void M1338_0024e228(undefined8 param_1,longlong param_2);
void M1338_0024ea90(int param_1);
void M1338_0024ec54(void);
longlong FUN_0024ec68(int param_1,undefined8 param_2,MOBY_OCLASSES param_3);
void UpdateMoby_113(MobyInstance *moby);
