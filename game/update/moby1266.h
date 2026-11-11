#pragma once
// game/update/moby1266.h
#include "types.h"

// ---- globals
extern undefined4 DAT_002330f0; /* 0x2330f0 */
extern undefined4 DAT_0078d7e0; /* 0x78d7e0 */
extern undefined4 DAT_0078d810; /* 0x78d810 */
extern undefined4 DAT_0078d830; /* 0x78d830 */
extern undefined4 DAT_0078d834; /* 0x78d834 */
extern undefined4 DAT_0078d838; /* 0x78d838 */
extern undefined4 DAT_0078d88c; /* 0x78d88c */
extern undefined4 DAT_0078d8b0; /* 0x78d8b0 */
extern undefined4 DAT_0078d8b4; /* 0x78d8b4 */
extern undefined4 DAT_0078d8b8; /* 0x78d8b8 */
extern undefined4 DAT_0078d8bc; /* 0x78d8bc */
extern undefined4 DAT_0078d8c0; /* no defined data */
extern undefined4 DAT_00f15584; /* no defined data */

// ---- functions
int M1266_00232a80(MobyInstance *param_1,undefined4 *param_2);
void M1266_00232ad0(int param_1);
void M1266_00232b58(void);
void M1266_00232b90(MobyInstance *moby);
void M1266_00232fa0(int param_1);
void M1266_00233088(void);
longlong M1266_002330a0(int param_1,int param_2,int param_3);
void UpdateMoby_1266(MobyInstance *moby);
