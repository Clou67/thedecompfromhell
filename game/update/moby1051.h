#pragma once
// game/update/moby1051.h
#include "types.h"

// ---- globals
extern undefined4 DAT_001a5ed4; /* 0x1a5ed4 */
extern undefined4 DAT_00740798; /* 0x740798 */
extern undefined4 DAT_007407bc; /* 0x7407bc */
extern undefined4 DAT_007407c0; /* 0x7407c0 */
extern undefined4 DAT_007407c4; /* 0x7407c4 */
extern undefined4 DAT_007407c8; /* 0x7407c8 */
extern undefined4 DAT_007407cc; /* 0x7407cc */
extern undefined4 DAT_007407d0; /* 0x7407d0 */
extern undefined4 DAT_007407d4; /* 0x7407d4 */
extern undefined4 DAT_007407d8; /* 0x7407d8 */
extern undefined4 DAT_007407dc; /* 0x7407dc */
extern undefined4 DAT_007407e0; /* 0x7407e0 */

// ---- functions
void M1051_001a2500(void);
void M1051_001a2558(int param_1);
void M1051_001a2e28(int param_1);
void M1051_001a2f20(int param_1);
undefined8 M1051_001a2fb0(int param_1);
void M1051_001a35f4(int param_1);
undefined8 M1051_001a3680(int param_1);
void M1051_001a3cc4(int param_1);
undefined8 M1051_001a3d50(int param_1);
void M1051_001a43a8(int param_1);
void M1051_001a48d0(int param_1);
void M1051_001a4df8(int param_1);
void M1051_001a5360(MobyInstance *param_1);
void UpdateMoby_1051(MobyInstance *moby);
