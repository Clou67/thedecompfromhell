#pragma once
// game/update/moby309.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0033bf90; /* 0x33bf90 */
extern undefined4 DAT_00811dec; /* 0x811dec */
extern undefined4 DAT_00811df0; /* 0x811df0 */
extern undefined4 DAT_00811df4; /* 0x811df4 */
extern undefined4 DAT_00811e44; /* 0x811e44 */
extern undefined4 DAT_00811ed0; /* no defined data */

// ---- functions
void M309_0033bfc0(MobyInstance *param_1);
void UpdateMoby_309(MobyInstance *moby);
void M309_0033c678(void);
void M31_0033c6e0(double param_1,int param_2,float *param_3);
bool M31_0033cad0 (undefined8 param_1,double param_2,double param_3,double param_4,undefined8 param_5, undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9);
