#pragma once
// game/update/moby701.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00428638; /* 0x428638 */
extern undefined4 DAT_00857b04; /* 0x857b04 */
extern undefined4 DAT_00857b08; /* 0x857b08 */
extern undefined4 DAT_00857b0c; /* 0x857b0c */
extern undefined4 DAT_00857b10; /* 0x857b10 */
extern undefined4 DAT_010ccce0; /* 0x10ccce0 */

// ---- functions
void M701_00428570(int param_1);
undefined4 * UpdateMoby_701(MobyInstance *moby);
