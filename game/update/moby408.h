#pragma once
// game/update/moby408.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00840b58; /* 0x840b58 */
extern undefined4 DAT_00840b7c; /* 0x840b7c */
extern undefined4 DAT_00840b80; /* 0x840b80 */
extern undefined4 DAT_00840b84; /* 0x840b84 */
extern undefined4 DAT_00840b88; /* 0x840b88 */
extern undefined4 DAT_00840b8c; /* 0x840b8c */
extern undefined4 DAT_00840bdc; /* 0x840bdc */
extern undefined4 DAT_010c5120; /* 0x10c5120 */
extern undefined4 DAT_010c5124; /* 0x10c5124 */
extern undefined4 DAT_010c5128; /* 0x10c5128 */
extern undefined4 DAT_010c512c; /* 0x10c512c */
extern pointer32 PTR_M408_003656c8_0070c848; /* 0x70c848 */

// ---- functions
void M408_00364670(void);
void M408_00364690(int param_1,int param_2);
void M408_003647d8(undefined8 param_1);
void UpdateMoby_408(MobyInstance *moby);
undefined8 M408_00365538(longlong param_1);
void FUN_003655c0(int param_1);
void M408_003656c8(void);
void M408_00365854(void);
