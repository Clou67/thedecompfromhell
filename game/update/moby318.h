#pragma once
// game/update/moby318.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00340944; /* 0x340944 */
extern undefined4 DAT_0083bc0c; /* 0x83bc0c */
extern undefined4 DAT_0083bc40; /* 0x83bc40 */
extern undefined4 DAT_0083bc48; /* 0x83bc48 */
extern undefined4 DAT_0083bc50; /* 0x83bc50 */
extern undefined4 DAT_0083bc54; /* 0x83bc54 */
extern undefined4 DAT_0083bc58; /* 0x83bc58 */
extern pointer32 PTR_M319_003411d0_0070c278; /* 0x70c278 */

// ---- functions
void M318_00340610(void);
void M318_00340640(int param_1);
void M318_00340814(int param_1);
void M318_00340884(int param_1);
void UpdateMoby_318(MobyInstance *moby);
