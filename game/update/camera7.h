#pragma once
// game/update/camera7.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00049f98; /* 0x49f98 */
extern undefined4 DAT_0004ab74; /* 0x4ab74 */
extern undefined4 DAT_0004afe8; /* 0x4afe8 */
extern undefined4 DAT_0071e7c0; /* 0x71e7c0 */
extern undefined4 DAT_0071e7e4; /* 0x71e7e4 */
extern undefined4 DAT_0071e7e8; /* 0x71e7e8 */
extern pointer32 PTR_CamZoomOfs_PostUpd_00704160; /* 0x704160 */
extern pointer32 PTR_CamZoomOfs_Update_00704158; /* 0x704158 */

// ---- functions
void SECTION_HEADER_CAMERA_UNK(void);
void InitCamera_7(UpdateCam *pCam);
void Cam7_UpdatePos(int param_1);
void Cam7_UpdateRot(float *param_1);
void UpdateCamera_7(undefined8 param_1);
void CamZoomOfs_Reset(void);
void CamZoomOfs_Update(void);
void CamZoomOfs_PostUpd(void);
void ____Cam_NudgeTowardMoby(float param_1);
int ActivateCamera_7(UpdateCam *pCam,UpdateCam *pCurr);
void UpdateCamera_7(UpdateCam *pCam);
void ExitCamera_7(UpdateCam *pCam);
void Cam7_SetTargetMoby(undefined4 param_1);
