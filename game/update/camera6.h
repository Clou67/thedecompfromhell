#pragma once
// game/update/camera6.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0071e714; /* 0x71e714 */
extern undefined4 DAT_0071e738; /* no defined data */
extern undefined4 DAT_0071e74c; /* no defined data */
extern undefined4 DAT_0071e760; /* no defined data */

// ---- functions
void SECTION_HEADER_CAMERA_UNK(void);
void ____Cam6_ClampAndBuildMtx(Vec4 *param_1);
void Cam6_SetTarget(double param_1,Vec4 *param_2,float *param_3,float *param_4);
void Cam6_ResetParams(Vec4 *param_1);
void Cam6_Update(Vec4 *param_1);
undefined8 ____Cam6_SetupFromMoby(int param_1,int param_2);
UpdateCam * Cam6_Activate(undefined8 param_1);
void ____Cam6_RotMath(int param_1);
int ActivateCamera_6(UpdateCam *pCam,UpdateCam *pCurr);
void InitCamera_6(UpdateCam *pCam);
void UpdateCamera_6(UpdateCam *pCam);
void STUB_000499f8(...);
