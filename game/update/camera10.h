#pragma once
// game/update/camera10.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00036a24; /* 0x36a24 */
extern undefined4 DAT_0071d648; /* 0x71d648 */
extern undefined4 DAT_0071d66c; /* 0x71d66c */
extern undefined4 DAT_0071d670; /* 0x71d670 */
extern undefined4 DAT_0071d674; /* 0x71d674 */
extern undefined4 DAT_0071d678; /* 0x71d678 */

// ---- functions
void SECTION_HEADER_CAMERA10(void);
int Cam10_IsHeroInVolume(int param_1);
MobyInstance * Cam10_GetClosestMobyInGroup(longlong param_1);
void Cam10_00035560(int param_1,float *param_2);
void ____Cam10_CheckLineBlocked(longlong param_1,int param_2,float *param_3);
void Cam10_00035d68(int param_1);
void Cam10_00036230(float *param_1);
void InitCamera_10(int param_1);
void Cam10_00036a40(int param_1);
void Cam10_00036e18(int param_1);
void Cam10_000371e0 (float *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
undefined8 ActivateCamera_10(int param_1,int param_2);
void UpdateCamera_10(int param_1);
void ExitCamera_10(int param_1);
