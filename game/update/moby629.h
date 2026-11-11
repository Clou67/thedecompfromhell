#pragma once
// game/update/moby629.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00854170; /* 0x854170 */
extern undefined4 DAT_00854178; /* 0x854178 */
extern undefined4 DAT_0085417c; /* 0x85417c */
extern undefined4 DAT_00854184; /* 0x854184 */
extern undefined4 DAT_00854188; /* 0x854188 */
extern undefined4 DAT_0085418c; /* 0x85418c */
extern undefined4 DAT_00854190; /* 0x854190 */
extern undefined4 DAT_00854194; /* 0x854194 */
extern undefined4 DAT_008541b0; /* 0x8541b0 */
extern undefined4 DAT_008541b4; /* 0x8541b4 */
extern undefined4 DAT_008541b8; /* 0x8541b8 */
extern undefined4 DAT_008541c0; /* 0x8541c0 */
extern undefined4 DAT_00854214; /* 0x854214 */
extern undefined4 DAT_00854284; /* 0x854284 */
extern undefined4 DAT_010cbbbc; /* 0x10cbbbc */
extern undefined4 DAT_010cbbc0; /* 0x10cbbc0 */

// ---- functions
void FUN_003ebfcc(double param_1,float param_2,f32 *param_3);
void FUN_003ec060(double param_1,int param_2,undefined4 *param_3);
ulonglong M629_003ec168(int param_1);
void M629_003ec75c(void);
MobyInstance * UpdateMoby_629(MobyInstance *moby);
void M629_003ec774(void);
