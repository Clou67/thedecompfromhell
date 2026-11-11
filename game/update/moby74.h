#pragma once
// game/update/moby74.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0043dae0; /* 0x43dae0 */
extern undefined4 DAT_0085a480; /* 0x85a480 */
extern undefined4 DAT_010ccd20; /* 0x10ccd20 */
extern pointer32 PTR_M739_0043c668_0070e5b0; /* 0x70e5b0 */
extern undefined4 _DAT_0085a500; /* direct read */
extern undefined4 _DAT_0085a510; /* direct read */
extern undefined4 _DAT_0085a520; /* direct read */
extern undefined4 _DAT_0085a530; /* direct read */
extern undefined4 _DAT_0085a540; /* direct read */
extern undefined4 _DAT_0085a550; /* direct read */
extern undefined4 _DAT_0085a560; /* direct read */
extern undefined4 _DAT_0085a570; /* direct read */
extern undefined4 _DAT_0085a580; /* direct read */
extern undefined4 _DAT_0085a590; /* direct read */

// ---- functions
MobyInstance * Spawn_Moby74_MineBall(undefined4 param_1,f32 *param_2);
void FUN_0043ce28(undefined4 *param_1,int param_2,float *param_3);
undefined8 M74_0043d268(float *param_1,MobyInstance *param_2,int param_3);
void UpdateMoby_74(MobyInstance *moby);
