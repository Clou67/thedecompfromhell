#pragma once
// game/update/moby30.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00337150; /* 0x337150 */
extern undefined4 DAT_00810a40; /* 0x810a40 */
extern undefined4 DAT_00810a44; /* 0x810a44 */
extern undefined4 DAT_00810a48; /* 0x810a48 */
extern undefined4 DAT_00810a4c; /* 0x810a4c */
extern undefined4 DAT_00810a54; /* 0x810a54 */
extern undefined4 DAT_00810a58; /* 0x810a58 */
extern undefined4 DAT_00810a5c; /* 0x810a5c */
extern undefined4 DAT_00810a60; /* 0x810a60 */
extern undefined4 DAT_00810a64; /* 0x810a64 */
extern undefined4 DAT_00810a68; /* 0x810a68 */

// ---- functions
void M30_00336fb8(MobyInstance *param_1);
void UpdateMoby_30(MobyInstance *moby);
