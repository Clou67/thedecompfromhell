#pragma once
// game/update/moby487.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00842130; /* 0x842130 */
extern undefined4 DAT_0084318c; /* 0x84318c */
extern undefined4 DAT_0084323c; /* 0x84323c */
extern undefined4 DAT_00843260; /* 0x843260 */
extern undefined4 DAT_00843264; /* 0x843264 */
extern undefined4 DAT_00843270; /* 0x843270 */
extern undefined4 DAT_00843274; /* 0x843274 */
extern undefined4 DAT_00843278; /* 0x843278 */
extern undefined4 DAT_0084327c; /* 0x84327c */
extern undefined4 DAT_00843280; /* 0x843280 */
extern undefined4 DAT_00843284; /* 0x843284 */
extern undefined4 DAT_00843288; /* 0x843288 */
extern undefined4 DAT_0084328c; /* 0x84328c */
extern undefined4 DAT_00843298; /* 0x843298 */
extern undefined4 DAT_0084329c; /* 0x84329c */
extern undefined4 DAT_008432a0; /* 0x8432a0 */
extern undefined4 DAT_008432a4; /* 0x8432a4 */
extern undefined4 DAT_008432a8; /* 0x8432a8 */
extern undefined4 DAT_010c9258; /* 0x10c9258 */

// ---- functions
void M487_0039ed30(void);
MobyInstance * FUN_0039ed48(undefined4 *param_1,f32 *param_2,undefined4 param_3);
void M487_0039ee38(int param_1,float *param_2);
void UpdateMoby_487(MobyInstance *moby);
void M487_0039f994(void);
void M487_0039f9a8(int param_1);
void M487_0039fbe8(longlong param_1);
