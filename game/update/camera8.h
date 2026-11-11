#pragma once
// game/update/camera8.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0004c7ec; /* 0x4c7ec */
extern undefined4 DAT_0071e838; /* 0x71e838 */
extern undefined4 DAT_0071e85c; /* 0x71e85c */

// ---- functions
void SECTION_HEADER_CAMERA_UNK(void);
void Cam8_UpdateTarget(int param_1);
void Cam8_SetParams (double param_1,double param_2,double param_3,double param_4,double param_5, double param_6,double param_7,double param_8);
void Cam8_CalcInitialPos(float *param_1);
void Cam8_InitParams(int param_1);
void Cam8_UpdateRot(int param_1);
void Cam8_UpdateCam(float *param_1);
int ActivateCamera_8(UpdateCam *pCam,UpdateCam *pCurr);
void InitCamera_8(UpdateCam *pCam);
void UpdateCamera_8(UpdateCam *pCam);
void STUB_0004d5dc(...);
