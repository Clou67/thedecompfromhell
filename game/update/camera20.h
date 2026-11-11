#pragma once
// game/update/camera20.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0071db70; /* 0x71db70 */

// ---- functions
void SECTION_HEADER_CAMERA_UNK(void);
void Cam20_Enable(int importIdx);
void Cam20_Disable(int importIdx);
int Cam20_IsRunning(int importIdx);
int Cam20_IsHeroInVolume(UpdateCam *pCam);
void InitCamera_20(UpdateCam *pCam);
void UpdateCamera_20(UpdateCam *pCam);
int ActivateCamera_20(UpdateCam *pCam,UpdateCam *pCurr);
void STUB_000424c0(...);
