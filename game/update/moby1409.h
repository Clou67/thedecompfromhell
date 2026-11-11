#pragma once
// game/update/moby1409.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007a1990; /* 0x7a1990 */
extern undefined4 DAT_007a19b0; /* 0x7a19b0 */
extern undefined4 DAT_007a1ce0; /* 0x7a1ce0 */
extern undefined4 DAT_007a1ce4; /* 0x7a1ce4 */
extern undefined4 DAT_007a201c; /* 0x7a201c */
extern undefined4 DAT_007a2020; /* 0x7a2020 */
extern undefined4 DAT_007a2024; /* 0x7a2024 */
extern undefined4 DAT_007a2028; /* 0x7a2028 */
extern undefined4 DAT_007a202c; /* 0x7a202c */
extern undefined4 DAT_007a2030; /* 0x7a2030 */
extern undefined4 DAT_007a2034; /* 0x7a2034 */
extern undefined4 DAT_00fac604; /* 0xfac604 */
extern undefined4 DAT_00fac608; /* 0xfac608 */
extern undefined4 DAT_00fac60c; /* 0xfac60c */
extern undefined4 DAT_00fac934; /* 0xfac934 */
extern undefined4 DAT_00fac938; /* 0xfac938 */
extern undefined4 DAT_00facb54; /* 0xfacb54 */
extern pointer PTR_DAT_007a2010; /* 0x7a2010 */
extern pointer PTR_DAT_007a2014; /* 0x7a2014 */
extern pointer PTR_DAT_007a2018; /* 0x7a2018 */
extern pointer32 PTR_M1409_0026f9c0_0070a3f0; /* 0x70a3f0 */

// ---- functions
void M1409_0026f9c0(int param_1);
void UpdateMoby_1409(MobyInstance *moby);
