#pragma once
// game/update/moby935.h
#include "types.h"

// ---- globals
extern undefined4 DAT_004c01f0; /* 0x4c01f0 */
extern undefined4 DAT_004c0f74; /* 0x4c0f74 */
extern undefined4 DAT_008f4b48; /* 0x8f4b48 */
extern undefined4 DAT_008f4b4c; /* 0x8f4b4c */
extern undefined4 DAT_008f4b50; /* 0x8f4b50 */
extern undefined4 DAT_008f4b54; /* 0x8f4b54 */
extern undefined4 DAT_008f4b58; /* 0x8f4b58 */
extern undefined4 DAT_008f4b5c; /* 0x8f4b5c */
extern undefined4 DAT_008f4b60; /* 0x8f4b60 */
extern undefined4 DAT_008f4b64; /* 0x8f4b64 */
extern undefined4 DAT_008f4b68; /* 0x8f4b68 */
extern undefined4 DAT_008f4b6c; /* 0x8f4b6c */
extern undefined4 DAT_008f4b74; /* 0x8f4b74 */
extern undefined4 DAT_008f4b78; /* 0x8f4b78 */
extern undefined4 DAT_010e47cc; /* 0x10e47cc */

// ---- functions
MobyInstance * FUN_004c0208(float param_1,float *param_2,f32 *param_3);
void M935_004c06d8(MobyInstance *param_1);
void UpdateMoby_935(MobyInstance *moby);
