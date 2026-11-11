#pragma once
// game/update/camera11.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0071d6d8; /* 0x71d6d8 */
extern undefined4 DAT_0071d6fc; /* 0x71d6fc */
extern undefined4 DAT_0071d704; /* 0x71d704 */
extern undefined4 DAT_0071d708; /* 0x71d708 */
extern undefined4 DAT_0071d70c; /* 0x71d70c */
extern undefined4 DAT_0071d710; /* 0x71d710 */
extern undefined4 DAT_0071d714; /* 0x71d714 */
extern undefined4 DAT_0071d718; /* 0x71d718 */
extern undefined4 DAT_0071d71c; /* 0x71d71c */
extern undefined4 DAT_0071d720; /* 0x71d720 */
extern undefined4 DAT_0071d724; /* 0x71d724 */
extern undefined4 DAT_0071d72c; /* 0x71d72c */
extern undefined4 DAT_0071d730; /* 0x71d730 */
extern undefined4 DAT_0071d734; /* 0x71d734 */
extern undefined4 DAT_0071d738; /* 0x71d738 */
extern undefined4 DAT_0071d73c; /* 0x71d73c */
extern undefined4 DAT_0092e48c; /* 0x92e48c */
extern undefined4 DAT_0092e490; /* 0x92e490 */

// ---- functions
void SECTION_HEADER_CAMERA11(void);
void Cam11_000378a8(float *param_1);
void InitCamera_11(int param_1);
void Cam11_00037d68(float *param_1);
undefined8 ActivateCamera_11(void);
void UpdateCamera_11(int param_1);
void ExitCamera_11(int param_1);
