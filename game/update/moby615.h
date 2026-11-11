#pragma once
// game/update/moby615.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00853ad8; /* 0x853ad8 */
extern undefined4 DAT_00853b00; /* 0x853b00 */
extern undefined4 DAT_00853b04; /* 0x853b04 */
extern undefined4 DAT_00853b08; /* 0x853b08 */
extern undefined4 DAT_010caff0; /* 0x10caff0 */
extern undefined4 DAT_010caff4; /* 0x10caff4 */
extern undefined4 DAT_010cb000; /* 0x10cb000 */
extern undefined4 DAT_010cb004; /* 0x10cb004 */
extern undefined4 DAT_010cb010; /* 0x10cb010 */
extern undefined4 DAT_010cb014; /* 0x10cb014 */
extern undefined4 DAT_010cb020; /* 0x10cb020 */
extern undefined4 DAT_010cb024; /* 0x10cb024 */
extern pointer32 PTR_M617_003dfa30_0070d980; /* 0x70d980 */

// ---- functions
void M615_003dd9ac(void);
void M615_003dda00(float *param_1,float *param_2,int param_3);
void M615_003dde40(int param_1);
void UpdateMoby_615(MobyInstance *moby);
