#pragma once
// game/update/camera0.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0002d628; /* no defined data */
extern undefined4 DAT_0002e1c4; /* 0x2e1c4 */
extern undefined4 DAT_0002f4dc; /* 0x2f4dc */
extern undefined4 DAT_00031b60; /* 0x31b60 */
extern undefined4 DAT_0003375c; /* 0x3375c */
extern undefined4 DAT_0071d45c; /* 0x71d45c */
extern undefined4 DAT_0071d480; /* 0x71d480 */
extern undefined4 DAT_0071d48c; /* 0x71d48c */
extern undefined4 DAT_0071d490; /* 0x71d490 */
extern undefined4 DAT_0071d498; /* 0x71d498 */
extern undefined4 DAT_0071d49c; /* 0x71d49c */
extern undefined4 DAT_0071d4a0; /* 0x71d4a0 */
extern undefined4 DAT_0071d4a4; /* 0x71d4a4 */
extern undefined4 DAT_0071d4a8; /* 0x71d4a8 */
extern undefined4 DAT_0071d4b0; /* 0x71d4b0 */
extern undefined4 DAT_0071d4b8; /* 0x71d4b8 */
extern undefined4 DAT_0071d4bc; /* 0x71d4bc */
extern undefined4 DAT_0071d4c0; /* 0x71d4c0 */
extern undefined4 DAT_0071d4c4; /* 0x71d4c4 */
extern undefined4 DAT_0071d4cc; /* 0x71d4cc */
extern undefined4 DAT_0071d4d0; /* 0x71d4d0 */
extern undefined4 DAT_0071d4d4; /* 0x71d4d4 */
extern undefined4 DAT_0071d4d8; /* 0x71d4d8 */
extern undefined4 DAT_0071d4dc; /* 0x71d4dc */
extern undefined4 DAT_0071d4e0; /* 0x71d4e0 */
extern undefined4 DAT_0071d4e4; /* 0x71d4e4 */
extern undefined4 DAT_0071d4e8; /* 0x71d4e8 */
extern undefined4 DAT_0071d4ec; /* 0x71d4ec */
extern undefined4 DAT_0071d4f0; /* 0x71d4f0 */
extern undefined4 DAT_0071d4f4; /* 0x71d4f4 */
extern undefined4 DAT_0071d4f8; /* 0x71d4f8 */
extern undefined4 DAT_0071d4fc; /* 0x71d4fc */
extern undefined4 DAT_0071d500; /* 0x71d500 */
extern undefined4 DAT_0071d504; /* 0x71d504 */
extern undefined4 DAT_0071d510; /* 0x71d510 */
extern undefined4 DAT_0071d514; /* 0x71d514 */
extern undefined4 DAT_0071d518; /* 0x71d518 */
extern undefined4 DAT_0071d51c; /* 0x71d51c */
extern undefined4 DAT_0071d520; /* 0x71d520 */
extern undefined4 DAT_0071d528; /* 0x71d528 */
extern undefined4 DAT_0071d52c; /* 0x71d52c */
extern undefined4 DAT_0071d530; /* 0x71d530 */
extern undefined4 DAT_0071d534; /* 0x71d534 */
extern undefined4 DAT_0071d538; /* 0x71d538 */
extern undefined4 DAT_0071d53c; /* 0x71d53c */
extern undefined4 DAT_0071d540; /* 0x71d540 */
extern undefined4 DAT_0071d544; /* 0x71d544 */
extern undefined4 DAT_0071d548; /* 0x71d548 */
extern undefined4 DAT_0071d54c; /* 0x71d54c */
extern undefined4 DAT_0071d558; /* 0x71d558 */
extern undefined4 DAT_0071d55c; /* 0x71d55c */
extern undefined4 DAT_0071d560; /* 0x71d560 */
extern undefined4 DAT_0071d564; /* 0x71d564 */
extern undefined4 DAT_0071d568; /* 0x71d568 */
extern undefined4 DAT_0071d56c; /* 0x71d56c */
extern undefined4 DAT_0071d570; /* 0x71d570 */
extern undefined4 DAT_0071d574; /* 0x71d574 */
extern undefined4 DAT_0071d578; /* 0x71d578 */
extern undefined4 DAT_0071d57c; /* 0x71d57c */
extern undefined4 DAT_0092e280; /* 0x92e280 */
extern undefined4 DAT_0092e284; /* 0x92e284 */
extern undefined4 DAT_0092e288; /* 0x92e288 */
extern undefined4 DAT_0092e28c; /* 0x92e28c */
extern float g_BaseCameraSpeed; /* 0x71d580 */
extern float g_CameraSpeed; /* 0x71ea54 */

// ---- functions
void SECTION_HEADER_CAMERA0(void);
void STUB_0002bad8(...);
void Cam0_GetHeroPos(void *pCam,float *pos);
bool CollPrimSphere(double param_1,float *param_2);
bool camera0_IsPntInCollPrim(undefined8 *param_1);
void STUB_0002bcf8(...);
int GetHeroGroundPos(float *pos,int useGroundDist);
void STUB_0002bed4(...);
void InitCamTarget_0(int param_1);
ulonglong Cam_LOStoHero(longlong param_1);
double Cam_GetCurrHeroElv(double param_1,float *param_2);
void ApplyHeroExternalMotion_0(int param_1);
void GetWorldHeightAtHeroGndOfs(double param_1,float *param_2);
void HandleSpecialTargetActivation(undefined4 *param_1);
ulonglong HandleSpecialTargetUpVec(ulonglong param_1,undefined8 param_2);
void InterpPitchTarget (float gain,float damp,float maxv,float *speed,float *cur,float *targ);
int GetIdealPitchTarget(void *pCam,float *targOfs,float *ideal,int state);
void HandleSpecialPitchTarget(void *param_1,float *param_2);
void Cam0_SetCamHeight(double param_1,double param_2);
void UpdateCamTarget_0(int param_1);
undefined8 STUB_0002ed78(...);
void STUB_0002ed80(...);
void STUB_0002ed84(...);
void STUB_0002ed88(...);
void STUB_0002ed8c(...);
void STUB_0002ed90(...);
void STUB_0002ed94(...);
void STUB_0002ed98(...);
void STUB_0002ed9c(...);
void UpdateCameraOffset_0(int param_1);
void Cam0_SetCPosGainDamp(double param_1,double param_2);
void Cam0_disableLOS(void);
void Cam0_SetCamPull(undefined2 param_1);
double AzmLookAtDir(double param_1,int param_2,float *param_3);
void AzmLookAtPos(undefined4 param_1);
void Cam0_ForceLookAtPos(double param_1,undefined8 param_2);
void Cam0_RunningAtCamOff(void);
void Cam0_SetCamDist(double param_1,double param_2,undefined8 param_3,int param_4);
void Cam0_SetCamOfsZ(double param_1,double param_2,undefined8 param_3,int param_4);
void Cam0_ForceLookAtDir(double param_1,undefined8 param_2,undefined8 param_3);
void ____Cam0_UpdateTargetSpecial(int param_1);
void SetCam0DefaultPosRot(int param_1);
void ResetCamOfsVectors_0(int param_1);
void Camera0_Init(undefined4 *param_1);
undefined8 CalcCamOfs_0(int param_1,float *param_2,int param_3,undefined8 param_4);
void UpdateBumpColl_0(int param_1);
undefined8 PushCamInAvoidEnv(void);
void GetPushVec_0 (double param_1,double param_2,int param_3,float *param_4,float *param_5, float *param_6,float *param_7);
undefined8 UpdateSegmentPush_0(undefined8 param_1,undefined8 param_2,int param_3,float *param_4);
undefined8 ExceptionColl(int param_1,int param_2,float *param_3);
undefined8 UpdateSegmentColl_0(int param_1);
void UpdateCamCollisions_0(int param_1);
void STUB_00032bcc(...);
void STUB_00032bd0(...);
undefined8 Cam0_ClearModCamera(int param_1);
undefined8 Cam0_SetModCamera(int param_1);
void Cam0_SetRunAtCamDist(double param_1);
void Cam0_ForceElv(double param_1);
void Cam0_SetPitchGainDamp(double param_1,double param_2);
void Cam0_SetBumpFlags(undefined4 param_1);
void Cam0_SetCollData(double param_1,double param_2,double param_3);
void Cam0_DisableUserCam(void);
void GetAnalogInputs_0(void *pCam,float *azm,float *elv);
void UpdateUserCam_0(double param_1,double param_2,float *param_3);
void UpdateCamPull_0(int param_1);
void UpdateCamRotation_0(float *param_1);
void Cam0_HandleRunningAtCam(float *param_1,float *param_2,float *param_3);
void UpdateCamPosition_0(int param_1);
void Cam0_DrawCollSpheres(void);
void UpdateFollowCamera(undefined8 param_1);
void WarpFollowCam(float *pos);
undefined8 Camera0_Activate(void);
void Camera0_Update(undefined8 param_1);
void STUB_00034cdc(...);
