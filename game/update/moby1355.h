#pragma once
// game/update/moby1355.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00256ed8; /* 0x256ed8 */
extern undefined4 DAT_0079bcb0; /* 0x79bcb0 */
extern undefined4 DAT_0079bcd4; /* 0x79bcd4 */
extern undefined4 DAT_0079bcd8; /* 0x79bcd8 */
extern undefined4 DAT_0079bcdc; /* 0x79bcdc */
extern undefined4 DAT_0079bce0; /* 0x79bce0 */
extern undefined4 DAT_0079bce4; /* 0x79bce4 */
extern undefined4 DAT_0079bce8; /* 0x79bce8 */
extern undefined4 DAT_0079bcec; /* 0x79bcec */
extern undefined4 DAT_0079bcf0; /* 0x79bcf0 */
extern undefined4 DAT_0079bcf4; /* 0x79bcf4 */
extern undefined4 DAT_00fa3f08; /* 0xfa3f08 */
extern pointer32 PTR_M1356_00257d50_0070a058; /* 0x70a058 */
extern pointer32 PTR_M1356_00258108_0070a060; /* 0x70a060 */

// ---- functions
void M1355_0025672c(void);
void M1355_00256748(MobyInstance *param_1);
void M1355_002568a0(int param_1,float *param_2);
undefined8 M1355_00256a60(int param_1,float *param_2);
undefined4 * UpdateMoby_1355(MobyInstance *moby);
