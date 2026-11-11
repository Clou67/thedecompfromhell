#pragma once
// game/update/camera23.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00044bcc; /* 0x44bcc */
extern undefined4 DAT_0071e4d8; /* 0x71e4d8 */

// ---- functions
void SECTION_HEADER_CAMERA_UNK(void);
int Cam23_IsTriggered(UpdateCam *pCam);
void Cam23_ModifyFollowCam(UpdateCam *pCam);
int ActivateCamera_23(UpdateCam *pCam,UpdateCam *pCurr);
void STUB_000451bc(...);
void STUB_000451c0(...);
void STUB_000451c4(...);
