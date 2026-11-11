#pragma once
// game/update/moby1038.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0073fe60; /* 0x73fe60 */
extern undefined4 DAT_0073fe64; /* 0x73fe64 */
extern undefined4 DAT_0073fe70; /* 0x73fe70 */
extern undefined4 DAT_0073ff20; /* 0x73ff20 */
extern undefined4 DAT_0073ff30; /* 0x73ff30 */
extern undefined4 DAT_007400cc; /* 0x7400cc */
extern undefined4 DAT_007400f0; /* 0x7400f0 */
extern undefined4 DAT_007400f4; /* 0x7400f4 */
extern undefined4 DAT_007400f8; /* 0x7400f8 */
extern undefined4 DAT_007400fc; /* 0x7400fc */
extern undefined4 DAT_00740100; /* 0x740100 */
extern undefined4 DAT_00740104; /* 0x740104 */
extern undefined4 DAT_00740108; /* 0x740108 */
extern undefined4 DAT_00e5eff0; /* 0xe5eff0 */
extern undefined4 DAT_00e5eff4; /* 0xe5eff4 */
extern pointer PTR_DAT_0073fe74; /* 0x73fe74 */

// ---- functions
void M1038_001942f4(int param_1);
void M1038_00194638(void);
void M1038_00194678(undefined8 param_1);
void M1038_00194ba8(int param_1);
void UpdateMoby_1038(MobyInstance *moby);
