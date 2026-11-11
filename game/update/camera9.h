#pragma once
// game/update/camera9.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0071e8b4; /* 0x71e8b4 */
extern undefined4 DAT_0071e8d8; /* 0x71e8d8 */
extern undefined4 DAT_0071e8dc; /* 0x71e8dc */
extern undefined4 DAT_0071e8e0; /* 0x71e8e0 */

// ---- functions
void SECTION_HEADER_CAMERA_UNK(void);
void Cam9_TrackHeroPos(int param_1);
void Cam9_InitTarget(int param_1);
void Cam9_CalcDesiredPos(int param_1,float *param_2,int param_3);
void Cam9_InitPos(float *param_1);
void InitCamera_9(UpdateCam *pCam);
void Cam9_UpdateRot(float *param_1);
void Cam9_UpdatePos(float *param_1);
void ____Cam9_CollSphereBump(longlong param_1);
int ActivateCamera_9(UpdateCam *pCam,UpdateCam *pCurr);
void UpdateCamera_9(UpdateCam *pCam);
void ExitCamera_9(UpdateCam *pCam);
