#pragma once
// game/update/moby1455.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007aac90; /* 0x7aac90 */
extern undefined4 DAT_007aacc0; /* no defined data */
extern undefined4 DAT_007aacd0; /* no defined data */
extern undefined4 DAT_007aace0; /* 0x7aace0 */
extern undefined4 DAT_007aace4; /* 0x7aace4 */
extern undefined4 DAT_007aace8; /* 0x7aace8 */
extern undefined4 DAT_007aacec; /* 0x7aacec */
extern undefined4 DAT_007aacf0; /* 0x7aacf0 */
extern undefined4 DAT_007aacf4; /* 0x7aacf4 */
extern undefined4 DAT_007aacf8; /* 0x7aacf8 */
extern undefined4 DAT_007aacfc; /* 0x7aacfc */

// ---- functions
void M1455_00284b14(void);
void M1455_00284b28(int param_1);
void M1455_00284c20(MobyInstance *param_1);
void M1455_00284d00(int param_1);
void UpdateMoby_1455(MobyInstance *moby);
