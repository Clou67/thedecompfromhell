#pragma once
// game/update/moby8.h
#include "types.h"

// ---- globals
extern undefined4 DAT_004617dc; /* 0x4617dc */
extern undefined4 DAT_004621d4; /* 0x4621d4 */
extern undefined4 DAT_00873e58; /* 0x873e58 */
extern undefined4 DAT_00873e5c; /* 0x873e5c */
extern undefined4 DAT_00873e60; /* 0x873e60 */
extern undefined4 DAT_00873e64; /* 0x873e64 */
extern undefined4 DAT_00873e68; /* 0x873e68 */
extern undefined4 DAT_00873e6c; /* 0x873e6c */
extern undefined4 DAT_00873e70; /* 0x873e70 */
extern undefined4 DAT_00873e78; /* 0x873e78 */
extern undefined4 DAT_00873e7c; /* 0x873e7c */
extern undefined4 DAT_00873e80; /* 0x873e80 */
extern undefined4 DAT_00873e84; /* 0x873e84 */
extern undefined4 DAT_00873e90; /* 0x873e90 */
extern undefined4 DAT_00873e94; /* 0x873e94 */
extern undefined4 DAT_00873e98; /* 0x873e98 */
extern undefined4 DAT_00873e9c; /* 0x873e9c */
extern undefined4 DAT_00873ea0; /* 0x873ea0 */
extern undefined4 DAT_00873ea4; /* 0x873ea4 */
extern undefined4 DAT_00873ea8; /* 0x873ea8 */
extern undefined4 DAT_00873eac; /* 0x873eac */
extern undefined4 DAT_00873eb0; /* 0x873eb0 */
extern undefined4 DAT_00873eb4; /* 0x873eb4 */
extern undefined4 DAT_00873eb8; /* 0x873eb8 */
extern undefined4 DAT_00873ebc; /* 0x873ebc */
extern undefined4 DAT_00873ec0; /* 0x873ec0 */
extern undefined4 DAT_00873ec4; /* 0x873ec4 */
extern undefined4 DAT_00873ec8; /* 0x873ec8 */
extern undefined4 DAT_00874680; /* 0x874680 */
extern undefined4 DAT_010ccee0; /* 0x10ccee0 */
extern pointer32 PTR_M800_0046573c_0070eb08; /* 0x70eb08 */

// ---- functions
double M794_00461680(MobyInstance *param_1);
double M8_004617e0(double param_1,double param_2,double param_3,int param_4);
double M8_00461938(int param_1);
double M8_00461a90(int param_1);
void M8_00461bc8(int param_1);
int M794_00461ec0(int param_1);
void M8_00461f10(MobyInstance *param_1);
void M794_004620c8(int param_1);
void UpdateMoby_8(MobyInstance *moby);
