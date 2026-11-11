#pragma once
// game/update/camera1.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00034e54; /* 0x34e54 */
extern undefined4 DAT_0071d5d8; /* 0x71d5d8 */

// ---- functions
void SECTION_HEADER_CAMERA1(void);
void Cam1_InitPosRot(undefined4 *param_1);
void Cam1_UpdateCam(float *param_1);
undefined8 ActivateCamera_1(int param_1,int param_2);
void InitCamera_1(void);
void UpdateCamera_1(void);
void ExitCamera_1(int param_1);
