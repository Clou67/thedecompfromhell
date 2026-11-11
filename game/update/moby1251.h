#pragma once
// game/update/moby1251.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0076d434; /* 0x76d434 */
extern undefined4 DAT_0076d458; /* 0x76d458 */
extern undefined2 DAT_0096b670; /* 0x96b670 */
extern undefined4 DAT_0096b674; /* 0x96b674 */
extern undefined4 DAT_0096b678; /* 0x96b678 */
extern undefined4 DAT_0096b67c; /* 0x96b67c */
extern undefined4 DAT_0096b714; /* 0x96b714 */
extern undefined2 DAT_0096b720; /* 0x96b720 */
extern undefined4 DAT_0096b724; /* 0x96b724 */
extern undefined4 DAT_0096b728; /* 0x96b728 */
extern undefined4 DAT_0096b7c4; /* 0x96b7c4 */
extern undefined2 DAT_0096b7d0; /* 0x96b7d0 */
extern undefined4 DAT_0096b7d4; /* 0x96b7d4 */
extern undefined4 DAT_0096b7d8; /* 0x96b7d8 */
extern undefined1 DAT_0096bd90; /* 0x96bd90 */

// ---- functions
void M1251_002285dc(void);
ulonglong M1251_002285f0(int param_1);
undefined8 M1251_0022865c(void);
void M1251_002286e8(int param_1);
void UpdateMoby_1251(MobyInstance *moby);
