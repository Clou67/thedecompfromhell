#pragma once
// game/update/moby121.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00202ab4; /* 0x202ab4 */
extern undefined4 DAT_00735d00; /* 0x735d00 */
extern undefined4 DAT_00766638; /* 0x766638 */
extern undefined4 DAT_0076663c; /* 0x76663c */
extern undefined4 DAT_00766640; /* 0x766640 */
extern undefined4 DAT_00766644; /* 0x766644 */
extern undefined4 DAT_00766648; /* 0x766648 */
extern undefined4 DAT_0076664c; /* 0x76664c */
extern undefined4 DAT_00766650; /* 0x766650 */
extern undefined4 DAT_00766654; /* 0x766654 */
extern undefined4 DAT_00766658; /* 0x766658 */
extern undefined4 DAT_0076665c; /* 0x76665c */
extern undefined4 DAT_00766660; /* 0x766660 */
extern undefined4 DAT_00766664; /* 0x766664 */
extern undefined4 DAT_00766668; /* 0x766668 */
extern undefined4 DAT_0076666c; /* 0x76666c */
extern undefined4 DAT_00830000; /* no defined data */
extern undefined4 DAT_00830001; /* no defined data */
extern pointer32 PTR_M1209_00200608_007093a8; /* 0x7093a8 */
extern undefined4 _DAT_007666f0; /* direct read */
extern undefined4 _DAT_00766700; /* direct read */
extern undefined4 _DAT_00766710; /* direct read */
extern undefined4 _DAT_00766720; /* direct read */
extern undefined4 _DAT_00766730; /* direct read */

// ---- functions
MobyInstance * FUN_00200c38(undefined4 param_1,f32 *param_2);
void FUN_00200fd0(float *param_1,int param_2,float *param_3);
undefined8 M121_00201da8(float *param_1,MobyInstance *param_2,int param_3);
void UpdateMoby_121(MobyInstance *moby);
