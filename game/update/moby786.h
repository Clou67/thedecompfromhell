#pragma once
// game/update/moby786.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00873980; /* 0x873980 */
extern undefined4 DAT_008739a0; /* 0x8739a0 */
extern undefined4 DAT_008739e0; /* 0x8739e0 */
extern undefined4 DAT_00873a20; /* 0x873a20 */
extern undefined4 DAT_00873a28; /* 0x873a28 */
extern undefined4 DAT_00873a30; /* 0x873a30 */
extern undefined4 DAT_00873a38; /* 0x873a38 */
extern undefined4 DAT_00873a40; /* 0x873a40 */
extern undefined4 DAT_00873a60; /* 0x873a60 */
extern undefined4 DAT_00873aa0; /* 0x873aa0 */
extern undefined4 DAT_00873b2c; /* 0x873b2c */
extern undefined4 DAT_00873b50; /* 0x873b50 */
extern undefined4 DAT_00873b54; /* 0x873b54 */
extern undefined4 DAT_00873b58; /* 0x873b58 */

// ---- functions
void M786_0045aa28(int param_1);
void M786_0045affc(void);
void M786_0045b010(int param_1);
void UpdateMoby_786(MobyInstance *moby);
