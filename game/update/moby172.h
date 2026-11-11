#pragma once
// game/update/moby172.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007b735c; /* 0x7b735c */
extern undefined4 DAT_007b7380; /* 0x7b7380 */
extern undefined4 DAT_007b7384; /* 0x7b7384 */
extern undefined4 DAT_007b7388; /* 0x7b7388 */
extern undefined4 DAT_007b738c; /* 0x7b738c */
extern undefined4 DAT_007b7390; /* 0x7b7390 */
extern undefined4 DAT_0096bc40; /* no defined data */
extern undefined4 DAT_0096bc80; /* no defined data */
extern undefined4 DAT_0096bcc0; /* 0x96bcc0 */

// ---- functions
void M172_002ae394(void);
void M172_002ae3a8(int param_1);
void M172_002ae4d0(int param_1,int param_2);
MobyInstance * FUN_002ae5d8(double param_1,double param_2,undefined4 param_3,f32 *param_4);
void FUN_002ae9e0(MobyInstance *param_1,int *param_2);
void M172_002aeb68(int param_1,int param_2);
void M172_002aed78(int param_1,char param_2);
void UpdateMoby_172(MobyInstance *moby);
