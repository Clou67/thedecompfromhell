#pragma once
// game/update/moby160.h
#include "types.h"

// ---- globals
extern undefined4 DAT_002a2374; /* 0x2a2374 */
extern pointer32 PTR_M169_002a1370_0070ab78; /* 0x70ab78 */
extern undefined4 _DAT_007ac8c0; /* direct read */
extern undefined4 _DAT_007ac8d0; /* direct read */
extern undefined4 _DAT_007ac8e0; /* direct read */
extern undefined4 _DAT_007ac8f0; /* direct read */
extern undefined4 _DAT_007ac900; /* direct read */

// ---- functions
undefined8 M160_002a1a48(float *param_1,MobyInstance *param_2,int param_3);
void UpdateMoby_160(MobyInstance *moby);
