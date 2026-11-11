#pragma once
// game/update/moby1135.h
#include "types.h"

// ---- globals
extern undefined4 DAT_001daec8; /* 0x1daec8 */
extern undefined4 DAT_007649b8; /* 0x7649b8 */
extern undefined4 DAT_007649dc; /* 0x7649dc */
extern undefined4 DAT_007649e4; /* 0x7649e4 */
extern undefined4 DAT_007649ec; /* 0x7649ec */
extern undefined4 DAT_007649f0; /* 0x7649f0 */
extern undefined4 DAT_007649f4; /* 0x7649f4 */
extern undefined4 DAT_00764aa8; /* no defined data */
extern undefined4 DAT_00764ab0; /* no defined data */
extern undefined4 DAT_00764ab8; /* no defined data */
extern undefined4 DAT_00764ad0; /* no defined data */
extern undefined4 DAT_00764ae4; /* no defined data */
extern undefined4 DAT_00764aec; /* no defined data */
extern pointer32 PTR_M1138_001db948_00708f10; /* 0x708f10 */

// ---- functions
MobyInstance * Spawn_Moby1135_GoldBolt(f32 *param_1,uint param_2);
void M1135_001da9e0(void);
void M1135_001da9f8(int param_1);
void M1135_001daac8(int param_1);
void M1135_001dac9c(int param_1);
void M1135_001dae10(int param_1);
void M1135_001dae68(int param_1);
void UpdateMoby_1135(MobyInstance *moby);
