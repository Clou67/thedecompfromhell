#pragma once
// game/update/moby1022.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00189b98; /* 0x189b98 */
extern undefined4 DAT_0073f8c0; /* 0x73f8c0 */
extern undefined4 DAT_0073f8e4; /* 0x73f8e4 */
extern undefined4 DAT_0073f8e8; /* 0x73f8e8 */
extern undefined4 DAT_0073f8ec; /* 0x73f8ec */
extern undefined4 DAT_0073f8f0; /* 0x73f8f0 */
extern undefined4 DAT_0073f8f4; /* 0x73f8f4 */
extern undefined4 DAT_0073f8f8; /* 0x73f8f8 */
extern undefined4 DAT_0073f8fc; /* 0x73f8fc */
extern undefined4 DAT_0073f900; /* 0x73f900 */

// ---- functions
void FUN_00188fb4(MobyInstance *param_1);
void FUN_00189040(MobyInstance *param_1);
void FUN_00189100(MobyInstance *param_1);
void M1022_00189218(void);
void M1022_00189230(int param_1);
void M1022_00189254(int param_1);
bool M1022_00189264(int param_1);
void M1022_001892a8(MobyInstance *param_1);
void UpdateMoby_1022(MobyInstance *moby);
