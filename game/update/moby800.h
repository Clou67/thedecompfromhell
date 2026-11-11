#pragma once
// game/update/moby800.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00873ecc; /* 0x873ecc */
extern undefined4 DAT_00873ed0; /* 0x873ed0 */
extern undefined4 DAT_008742a8; /* no defined data */
extern undefined4 DAT_00874538; /* 0x874538 */
extern undefined4 DAT_00874a80; /* 0x874a80 */
extern undefined4 DAT_00874ac0; /* 0x874ac0 */
extern undefined4 DAT_00874b00; /* 0x874b00 */
extern undefined4 DAT_00874b04; /* 0x874b04 */
extern undefined4 DAT_00874b08; /* 0x874b08 */
extern undefined4 DAT_00874b0c; /* 0x874b0c */
extern undefined4 DAT_00874b10; /* 0x874b10 */
extern undefined4 DAT_00874b14; /* 0x874b14 */
extern undefined4 DAT_00874b18; /* 0x874b18 */
extern undefined4 DAT_00874b1c; /* 0x874b1c */
extern undefined4 DAT_00874b20; /* 0x874b20 */
extern undefined4 DAT_00874b24; /* 0x874b24 */
extern undefined4 DAT_00874b28; /* 0x874b28 */
extern undefined4 DAT_00874b3c; /* 0x874b3c */
extern undefined4 DAT_00874b40; /* 0x874b40 */
extern undefined4 DAT_00874b44; /* 0x874b44 */
extern undefined4 DAT_00874b98; /* 0x874b98 */
extern undefined4 DAT_010ccee4; /* 0x10ccee4 */
extern undefined4 DAT_010ccf34; /* 0x10ccf34 */

// ---- functions
void M800_00463ef8(int param_1);
void M800_00464590(int param_1);
void M800_00464a70(int param_1);
void M800_00465380(int param_1);
MobyInstance * M800_00465668(longlong param_1);
void M800_0046573c(int param_1);
void M800_0046584c(void);
void UpdateMoby_800(MobyInstance *moby);
