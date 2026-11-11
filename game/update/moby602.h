#pragma once
// game/update/moby602.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0085363c; /* 0x85363c */
extern undefined4 DAT_00853660; /* 0x853660 */
extern undefined4 DAT_00853664; /* 0x853664 */
extern undefined4 DAT_00853668; /* 0x853668 */
extern undefined4 DAT_0085366c; /* 0x85366c */
extern undefined4 DAT_00853674; /* 0x853674 */
extern undefined4 DAT_00853678; /* 0x853678 */
extern undefined4 DAT_0085367c; /* no defined data */

// ---- functions
void M602_003d6c80(void);
MobyInstance * M602_003d6c98(int param_1);
void M602_003d6d70(MobyInstance *param_1);
void UpdateMoby_602(MobyInstance *moby);
