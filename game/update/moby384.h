#pragma once
// game/update/moby384.h
#include "types.h"

// ---- globals
extern undefined4 DAT_008407a0; /* 0x8407a0 */
extern undefined4 DAT_008407d0; /* 0x8407d0 */
extern undefined4 DAT_008407d4; /* 0x8407d4 */
extern undefined4 DAT_008407d8; /* 0x8407d8 */
extern undefined4 DAT_008407e4; /* 0x8407e4 */
extern undefined4 DAT_008407e8; /* 0x8407e8 */
extern undefined4 DAT_008407ec; /* 0x8407ec */
extern undefined4 DAT_008407f0; /* 0x8407f0 */
extern undefined4 DAT_008407f4; /* 0x8407f4 */
extern undefined4 DAT_008407f8; /* 0x8407f8 */
extern undefined4 DAT_008407fc; /* 0x8407fc */
extern undefined4 DAT_0084080c; /* 0x84080c */
extern pointer32 PTR_M386_00359ad0_0070c680; /* 0x70c680 */

// ---- functions
void M384_003593d4(void);
void UpdateMoby_384(MobyInstance *moby);
