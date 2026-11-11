#pragma once
// game/update/camera15.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0003bea8; /* 0x3bea8 */
extern undefined4 DAT_0071d924; /* 0x71d924 */
extern undefined4 DAT_0071d948; /* 0x71d948 */

// ---- functions
void SECTION_HEADER_CAMERA15(void);
void Cam15_0003b950(int param_1);
void Cam15_0003bad8(float *param_1);
void InitCamera_15(int param_1);
void Cam15_0003bef0(float *param_1);
undefined8 ActivateCamera_15(Vec4 *point,int area);
void UpdateCamera_15(int param_1);
void ExitCamera_15(int param_1);
