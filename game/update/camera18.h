#pragma once
// game/update/camera18.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0003ea18; /* 0x3ea18 */
extern undefined4 DAT_0071da90; /* 0x71da90 */

// ---- functions
void SECTION_HEADER_CAMERA_UNK(void);
int Cam18_IsTriggered(UpdateCam *pCam);
undefined8 ____Cam18_ModifyFollowRot(double param_1,double param_2,int param_3);
void Cam18_ModifyFollowCam(UpdateCam *pCam);
void Cam18_SetTriggered(UpdateCam *pCam);
int ActivateCamera_18(UpdateCam *pCam,UpdateCam *pCurr);
void STUB_0003fb84(...);
void STUB_0003fb88(...);
void STUB_0003fb8c(...);
