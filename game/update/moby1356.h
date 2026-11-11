#pragma once
// game/update/moby1356.h
#include "types.h"

// ---- globals
extern undefined4 DAT_002587dc; /* 0x2587dc */
extern undefined4 DAT_0079bcf8; /* 0x79bcf8 */
extern undefined4 DAT_0079bcfc; /* 0x79bcfc */
extern undefined4 DAT_0079bd00; /* 0x79bd00 */
extern undefined4 DAT_0079bd04; /* 0x79bd04 */
extern undefined4 DAT_0079bd08; /* 0x79bd08 */
extern undefined4 DAT_0079bd0c; /* 0x79bd0c */
extern undefined4 DAT_0079bd28; /* 0x79bd28 */
extern undefined4 DAT_0079bd2c; /* 0x79bd2c */
extern undefined4 DAT_0079bd30; /* 0x79bd30 */
extern undefined4 DAT_0079bd34; /* 0x79bd34 */
extern undefined4 DAT_0079bd38; /* 0x79bd38 */
extern undefined4 DAT_0079bd40; /* 0x79bd40 */
extern undefined4 DAT_0079bd44; /* 0x79bd44 */
extern undefined4 DAT_0079bd48; /* 0x79bd48 */
extern undefined4 DAT_0079bd4c; /* 0x79bd4c */
extern undefined4 DAT_0079bd50; /* no defined data */
extern undefined4 DAT_0079bd90; /* 0x79bd90 */
extern undefined4 DAT_0079bd94; /* 0x79bd94 */
extern undefined4 DAT_00fa3f0c; /* 0xfa3f0c */
extern undefined4 DAT_00fa3f10; /* 0xfa3f10 */
extern undefined4 DAT_00fa3f14; /* 0xfa3f14 */
extern undefined4 DAT_00fa3f18; /* 0xfa3f18 */

// ---- functions
undefined8 FUN_00257bf0(undefined4 param_1,longlong param_2,f32 *param_3);
void M1356_00257d50(int param_1);
void M1356_00258108(int param_1);
void M1356_002583e8(int param_1);
bool M1356_00258440(int param_1,uint *param_2);
void M1356_002585c0(int *param_1);
void M1356_002587f8(MobyInstance *param_1);
void UpdateMoby_1356(MobyInstance *moby);
