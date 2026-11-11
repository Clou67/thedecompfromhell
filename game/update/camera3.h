#pragma once
// game/update/camera3.h
#include "types.h"

// ---- globals
extern undefined4 DAT_000456fc; /* 0x456fc */
extern undefined4 DAT_0071e548; /* 0x71e548 */

// ---- functions
void SECTION_HEADER_CAMERA_UNK(void);
void Cam3_InitSplinePos(int param_1);
void UpdateCamera_3(UpdateCam *pCam);
int ActivateCamera_3(UpdateCam *pCam,UpdateCam *pCurr);
void InitCamera_3(UpdateCam *pCam);
void ExitCamera_3(UpdateCam *pCam);
