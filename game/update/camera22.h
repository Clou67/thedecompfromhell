#pragma once
// game/update/camera22.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00044564; /* 0x44564 */
extern undefined4 DAT_0071e468; /* 0x71e468 */

// ---- functions
void SECTION_HEADER_CAMERA_UNK(void);
int Cam22_IsHeroInVolume(UpdateCam *pCam);
undefined8 ____Cam22_ModifyFollowRot(double param_1,double param_2,int param_3);
void Cam22_ModifyFollowCam(UpdateCam *pCam);
int ActivateCamera_22(UpdateCam *pCam,UpdateCam *pCurr);
void STUB_00044a14(...);
void STUB_00044a18(...);
void STUB_00044a1c(...);
