#pragma once
// game/update/camera14.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0003b308; /* 0x3b308 */
extern undefined4 DAT_0071d894; /* 0x71d894 */
extern undefined4 DAT_0071d8cc; /* 0x71d8cc */
extern undefined4 DAT_0071d8d0; /* 0x71d8d0 */
extern undefined4 DAT_0071d8d4; /* 0x71d8d4 */

// ---- functions
void SECTION_HEADER_CAMERA14(void);
void Cam14_0003a838(float *param_1);
void InitCamera_14(int param_1);
void STUB_0003ae98(...);
void ____Cam14_RotateByStick(int param_1);
void Cam14_0003b310(int param_1);
void Cam14_0003b588(float *param_1);
undefined8 ActivateCamera_14(void);
void UpdateCamera_14(undefined8 param_1);
void ExitCamera_14(int param_1);
