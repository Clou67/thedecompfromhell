#pragma once
// game/update/moby1426.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007aa1c0; /* 0x7aa1c0 */
extern undefined4 DAT_007aa1e0; /* 0x7aa1e0 */
extern undefined4 DAT_007aa3fc; /* 0x7aa3fc */
extern undefined4 DAT_007aa400; /* 0x7aa400 */
extern undefined4 DAT_007aa624; /* 0x7aa624 */
extern undefined4 DAT_007aa628; /* 0x7aa628 */
extern undefined4 DAT_007aa62c; /* 0x7aa62c */
extern undefined4 DAT_007aa630; /* 0x7aa630 */
extern undefined4 DAT_007aa634; /* 0x7aa634 */
extern undefined4 DAT_007aa638; /* 0x7aa638 */
extern undefined4 DAT_007aa63c; /* 0x7aa63c */
extern undefined4 DAT_00facc90; /* 0xfacc90 */
extern undefined4 DAT_00facc94; /* 0xfacc94 */
extern undefined4 DAT_00facc98; /* 0xfacc98 */
extern undefined4 DAT_00faceac; /* 0xfaceac */
extern undefined4 DAT_00faceb0; /* 0xfaceb0 */
extern undefined4 DAT_00fad014; /* 0xfad014 */
extern pointer PTR_DAT_007aa618; /* 0x7aa618 */
extern pointer PTR_DAT_007aa61c; /* 0x7aa61c */
extern pointer PTR_DAT_007aa620; /* 0x7aa620 */
extern pointer32 PTR_M1426_0027ac98_0070a5d8; /* 0x70a5d8 */

// ---- functions
void M1426_0027ac98(int param_1);
void UpdateMoby_1426(MobyInstance *moby);
