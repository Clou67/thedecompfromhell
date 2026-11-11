#pragma once
// game/update/moby31.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00810000; /* no defined data */
extern undefined4 DAT_00811e70; /* 0x811e70 */
extern undefined4 DAT_00811e74; /* 0x811e74 */
extern undefined4 DAT_00811e78; /* 0x811e78 */
extern undefined4 DAT_00811e7c; /* 0x811e7c */
extern undefined4 DAT_00811e80; /* 0x811e80 */
extern undefined4 DAT_00811e84; /* 0x811e84 */
extern undefined4 DAT_00811e88; /* 0x811e88 */
extern undefined4 DAT_00811e8c; /* 0x811e8c */
extern undefined4 DAT_00811e94; /* 0x811e94 */
extern undefined4 DAT_00811e98; /* 0x811e98 */
extern undefined4 DAT_00811ea0; /* 0x811ea0 */
extern undefined4 DAT_00811ea4; /* 0x811ea4 */
extern undefined4 DAT_00811ea8; /* 0x811ea8 */
extern undefined4 DAT_00811eac; /* 0x811eac */
extern undefined4 DAT_00811eb0; /* 0x811eb0 */
extern undefined4 DAT_00811eb4; /* 0x811eb4 */
extern undefined4 DAT_00811eb8; /* 0x811eb8 */
extern undefined4 DAT_00811ebc; /* 0x811ebc */
extern undefined4 DAT_00811ec0; /* 0x811ec0 */
extern undefined4 DAT_010bd020; /* 0x10bd020 */
extern undefined4 DAT_010bd024; /* 0x10bd024 */

// ---- functions
void M309_0033cdb4(int param_1);
void M309_0033ce30(MobyInstance *param_1);
void M31_0033ced8(int param_1);
void M31_0033d150(int param_1);
void M31_0033d2f8(int param_1);
void M31_0033d5c8(MobyInstance *param_1);
void M309_0033d6f0 (undefined8 param_1,double param_2,double param_3,double param_4,undefined8 param_5, undefined8 param_6,undefined8 param_7,int param_8,float *param_9);
void M309_0033d830(int param_1);
void M31_0033d8d0(MobyInstance *param_1);
void UpdateMoby_31(MobyInstance *moby);
