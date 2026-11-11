#pragma once
// game/update/camera13.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00039588; /* 0x39588 */
extern undefined4 DAT_0071d81c; /* 0x71d81c */
extern undefined4 DAT_0071d840; /* 0x71d840 */
extern undefined4 DAT_0071d844; /* 0x71d844 */

// ---- functions
void SECTION_HEADER_CAMERA13(void);
void Cam13_000392c8(int param_1);
void ____Cam13_InterpPosToHero(float *param_1);
void Cam13_000394e8(int param_1,float *param_2);
void Cam13_000395c0(int param_1);
void Cam13_00039c98(float *param_1);
void InitCamera_13(float *param_1);
void ____Cam13_InterpPosToTarget(int param_1);
void Cam13_0003a350(float *param_1);
undefined8 ActivateCamera_13(void);
void UpdateCamera_13(int param_1);
void ExitCamera_13(int param_1);
