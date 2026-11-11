#pragma once
// game/update/moby1901.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007bd758; /* 0x7bd758 */
extern undefined4 DAT_007bd784; /* 0x7bd784 */
extern undefined4 DAT_007bd788; /* 0x7bd788 */
extern undefined4 DAT_007bd78c; /* 0x7bd78c */
extern undefined4 DAT_007bd790; /* 0x7bd790 */
extern undefined4 DAT_007bd794; /* 0x7bd794 */
extern undefined4 DAT_007bd7a0; /* 0x7bd7a0 */
extern undefined4 DAT_007c74f0; /* 0x7c74f0 */
extern undefined4 DAT_010b5040; /* 0x10b5040 */
extern undefined4 DAT_010b5050; /* no defined data */
extern undefined4 DAT_010b5ff0; /* 0x10b5ff0 */
extern undefined4 DAT_010b5ff4; /* 0x10b5ff4 */
extern undefined4 DAT_010b5ff8; /* 0x10b5ff8 */
extern undefined4 DAT_010b6000; /* 0x10b6000 */
extern undefined4 DAT_010b6004; /* 0x10b6004 */
extern undefined * PTR_DAT_007c7450; /* 0x7c7450 */
extern pointer PTR_DAT_007c7478; /* 0x7c7478 */
extern undefined * PTR_DAT_007c74c8; /* 0x7c74c8 */
extern undefined * PTR_DAT_007ca4f8; /* 0x7ca4f8 */
extern pointer PTR_DAT_007ca50c; /* 0x7ca50c */
extern undefined * PTR_DAT_007ca534; /* 0x7ca534 */
extern pointer32 PTR_M1901_002d40b8_0070b310; /* 0x70b310 */

// ---- functions
void M1901_002d3d88(void);
void M1901_002d3da8 (double param_1,double param_2,double param_3,double param_4,int param_5,int param_6, int *param_7);
void M1901_002d3fc8(int param_1);
void M1901_002d40b8(int param_1);
void UpdateMoby_1901(MobyInstance *moby);
