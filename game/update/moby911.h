#pragma once
// game/update/moby911.h
#include "types.h"

// ---- globals
extern undefined4 DAT_008f4038; /* 0x8f4038 */
extern undefined4 DAT_008f405c; /* 0x8f405c */
extern undefined4 DAT_008f4060; /* 0x8f4060 */
extern undefined4 DAT_008f406c; /* 0x8f406c */
extern undefined4 DAT_008f4070; /* 0x8f4070 */
extern undefined4 DAT_008f4074; /* 0x8f4074 */
extern undefined4 DAT_008f4078; /* 0x8f4078 */
extern undefined4 DAT_008f407c; /* 0x8f407c */
extern undefined4 DAT_008f4080; /* 0x8f4080 */
extern undefined4 DAT_008f4084; /* 0x8f4084 */
extern undefined4 DAT_008f4090; /* 0x8f4090 */
extern undefined4 DAT_008f4094; /* 0x8f4094 */
extern undefined4 DAT_008f4098; /* 0x8f4098 */

// ---- functions
void M911_004abfb0(void);
void M911_004abff8(undefined4 param_1);
void M911_004ac3f0(int param_1);
void M911_004aca68(int param_1);
void UpdateMoby_911(MobyInstance *moby);
