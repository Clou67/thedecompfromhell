#pragma once
// game/update/moby749.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00446010; /* 0x446010 */
extern undefined4 DAT_0085a6e8; /* 0x85a6e8 */
extern undefined4 DAT_0085a70c; /* no defined data */
extern undefined4 DAT_0085a718; /* 0x85a718 */
extern undefined4 DAT_0085a71c; /* 0x85a71c */
extern undefined4 DAT_0085a720; /* 0x85a720 */
extern undefined4 DAT_0085a724; /* 0x85a724 */
extern undefined4 DAT_0085a728; /* 0x85a728 */
extern undefined4 DAT_0085a72c; /* 0x85a72c */
extern undefined4 DAT_0085a730; /* 0x85a730 */
extern undefined4 DAT_0085a734; /* 0x85a734 */
extern undefined4 DAT_0085a738; /* 0x85a738 */

// ---- functions
void M749_00445710(void);
double M749_00445770(double param_1,int param_2,float *param_3);
void M749_00445c08(MobyInstance *param_1);
void UpdateMoby_749(MobyInstance *moby);
