#pragma once
// game/update/moby280.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00800244; /* 0x800244 */
extern undefined4 DAT_00800254; /* 0x800254 */
extern undefined4 DAT_00800258; /* 0x800258 */
extern undefined4 DAT_00800290; /* 0x800290 */
extern undefined4 DAT_008002d0; /* 0x8002d0 */
extern undefined4 DAT_008002d4; /* 0x8002d4 */
extern undefined4 DAT_008002d8; /* 0x8002d8 */
extern undefined4 DAT_008002e0; /* 0x8002e0 */
extern undefined4 DAT_0080036c; /* 0x80036c */
extern undefined4 DAT_010bca40; /* 0x10bca40 */

// ---- functions
void M280_00329e48(int param_1);
void M280_0032aa00(int param_1);
void M280_0032acc4(void);
void M280_0032acd8(int param_1);
void UpdateMoby_280(MobyInstance *moby);
