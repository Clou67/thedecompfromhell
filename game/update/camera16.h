#pragma once
// game/update/camera16.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0003ca30; /* no defined data */
extern undefined4 DAT_0071d9a0; /* 0x71d9a0 */

// ---- functions
void SECTION_HEADER_UNKNOWN(void);
undefined8 Cam16_AreMobyGroupDead(longlong param_1);
void Cam16_InitSplineSegLens(UpdateCam *pCam);
int Cam16_IsHeroInVolume(UpdateCam *pCam);
void Cam16_ModifyFollowCam(UpdateCam *pCam);
int ActivateCamera_16(UpdateCam *pCam,UpdateCam *pCurr);
void STUB_0003d30c(...);
void STUB_0003d310(...);
void STUB_0003d314(...);
