#pragma once
// game/update/camera12.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00038cac; /* 0x38cac */
extern undefined4 DAT_0071d78c; /* 0x71d78c */
extern undefined4 DAT_0071d7b0; /* 0x71d7b0 */
extern undefined4 DAT_0071d7b4; /* 0x71d7b4 */
extern undefined4 DAT_0071d7b8; /* 0x71d7b8 */
extern undefined4 DAT_0071d7bc; /* 0x71d7bc */
extern undefined4 DAT_0071d7c0; /* 0x71d7c0 */
extern undefined4 DAT_0071d7c4; /* 0x71d7c4 */
extern undefined4 DAT_0071d7c8; /* 0x71d7c8 */
extern undefined4 DAT_0071d7cc; /* 0x71d7cc */

// ---- functions
void SECTION_HEADER_CAMERA12(void);
int Cam12_IsHeroInVolume(int param_1,Vec4 *param_2);
void Cam12_000386e8(float *param_1);
void InitCamera_12(int param_1);
void Cam12_00038cb8(float *param_1);
undefined8 ActivateCamera_12(int param_1);
void UpdateCamera_12(void);
void ExitCamera_12(int param_1);
