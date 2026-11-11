#pragma once
// game/update/camera5.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0071e6a4; /* 0x71e6a4 */

// ---- functions
void SECTION_HEADER_CAMERA_UNK(void);
void Camera_SetMobyDrivenTargetPos(float *pos);
void Camera_SetMobyDrivenTargetRot(float *rot);
int Camera_GetMobyDrivenTargetStatus(void);
void Camera_SetMobyDrivenPolarRadiusCurve(float a,float b);
void Camera_SetMobyDrivenMode(int param_1,undefined4 param_2);
void Camera_SetCurrentAccel(float a,float b,float c,float d,float e,float f);
void SetCameraPosition (float *param_1,float *param_2,int param_3,undefined4 param_4,undefined4 param_5);
void Camera_DeactivateMobyDrivenCam(int exitFlags);
void DeactivateMobyDrivenCamAccel(void);
void InitCamera_5(UpdateCam *pCam);
void UpdateMobyDrivenCam(UpdateCam *pCam);
int ActivateCamera_5(UpdateCam *pCam,UpdateCam *pCurr);
void UpdateCamera_5(UpdateCam *pCam);
void STUB_000489fc(...);
