#pragma once
// game/update/camera17.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0003d560; /* 0x3d560 */
extern undefined4 DAT_0071da10; /* 0x71da10 */

// ---- functions
void SECTION_HEADER_CAMERA_UNK(void);
int Cam17_IsHeroInVolume(UpdateCam *pCam);
void Cam17_ModifyFollowCam(UpdateCam *pCam);
int ActivateCamera_17(UpdateCam *pCam,UpdateCam *pCurr);
void STUB_0003e268(...);
void STUB_0003e26c(...);
void STUB_0003e270(...);
