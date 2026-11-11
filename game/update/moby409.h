#pragma once
// game/update/moby409.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0001f700; /* 0x1f700 */
extern undefined4 DAT_0071d108; /* 0x71d108 */
extern undefined4 _DAT_0001f730; /* direct read */
extern undefined4 _DAT_0001f740; /* direct read */
extern undefined4 _DAT_0001f750; /* direct read */
extern undefined4 _DAT_0001f770; /* direct read */
extern undefined4 _DAT_0001f780; /* direct read */

// ---- functions
void SECTION_HEADER_MOBY409(void);
MobyInstance * M409_0001f240 (double param_1,double param_2,double param_3,float *param_4,f32 *param_5,float param_6, undefined4 param_7);
void UpdateMoby_409(MobyInstance *moby);
