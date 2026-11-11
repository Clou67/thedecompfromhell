#pragma once
// game/update/camera4.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00046c28; /* 0x46c28 */
extern undefined4 DAT_0071e628; /* 0x71e628 */
extern undefined4 DAT_0071e64c; /* 0x71e64c */
extern undefined4 DAT_0071e650; /* 0x71e650 */
extern undefined4 DAT_0071e654; /* 0x71e654 */
extern undefined4 DAT_00931394; /* 0x931394 */
extern undefined4 DAT_00931398; /* 0x931398 */

// ---- functions
void SECTION_HEADER_CAMERA_UNK(void);
void ApplyHeroExternalMotion_4(int param_1);
void SetLookCamInitPosRot(UpdateCam *pCam);
void InitLookCamera(UpdateCam *pCam);
void UpdateCamera_4(UpdateCam *pCam);
int ActivateCamera_4(UpdateCam *pCam,UpdateCam *pCurr);
void InitCamera_4(UpdateCam *pCam);
void ExitCamera_4(UpdateCam *pCam);
