#pragma once
// game/update/camera19.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0071db00; /* 0x71db00 */

// ---- functions
void SECTION_CAMERA_CAMERA_UNK(void);
void Cam19_Enable(int importIdx);
void Cam19_Disable(int importIdx);
int Cam19_IsDone(int importIdx);
int Cam19_IsHeroInVolume(UpdateCam *pCam);
void InitCamera_19(UpdateCam *pCam);
void UpdateCamera_19(UpdateCam *pCam);
int ActivateCamera_19(UpdateCam *pCam,UpdateCam *pCurr);
void STUB_00041020(...);
