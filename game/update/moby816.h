#pragma once
// game/update/moby816.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00877798; /* 0x877798 */
extern undefined4 DAT_008777bc; /* 0x8777bc */
extern undefined4 DAT_008777c0; /* 0x8777c0 */
extern undefined4 DAT_008777c4; /* 0x8777c4 */
extern undefined4 DAT_008777c8; /* 0x8777c8 */
extern undefined4 DAT_008777cc; /* 0x8777cc */
extern undefined4 DAT_008777d0; /* 0x8777d0 */
extern undefined4 DAT_008777d4; /* 0x8777d4 */
extern undefined4 DAT_008777d8; /* 0x8777d8 */
extern undefined4 DAT_008777dc; /* 0x8777dc */
extern undefined4 DAT_008777e0; /* 0x8777e0 */
extern undefined4 DAT_008777e4; /* 0x8777e4 */
extern undefined4 DAT_010d99d0; /* 0x10d99d0 */

// ---- functions
void M816_0046daf0(void);
undefined8 M816_0046db08(int param_1);
void M816_0046db40(undefined8 param_1,int param_2);
undefined8 M816_0046db88(int param_1);
void M816_0046dbe8(MobyInstance *param_1);
int M816_MoveAlongSpline(MobyInstance *moby,longlong splineId,int *param_3);
void UpdateMoby_816(MobyInstance *moby);
