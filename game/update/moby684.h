#pragma once
// game/update/moby684.h
#include "types.h"

// ---- globals
extern undefined4 DAT_008571d4; /* 0x8571d4 */
extern undefined4 DAT_008571e0; /* 0x8571e0 */
extern undefined4 DAT_008571e4; /* 0x8571e4 */
extern undefined4 DAT_008571e8; /* 0x8571e8 */
extern undefined4 DAT_00857200; /* 0x857200 */
extern undefined4 DAT_00857204; /* 0x857204 */
extern undefined4 DAT_00857208; /* 0x857208 */
extern undefined4 DAT_0085720c; /* 0x85720c */
extern undefined4 DAT_00857210; /* 0x857210 */
extern undefined4 DAT_00857214; /* 0x857214 */
extern undefined4 DAT_00857218; /* 0x857218 */
extern undefined4 DAT_0085721c; /* 0x85721c */
extern undefined4 DAT_00857220; /* 0x857220 */
extern undefined4 DAT_010cc240; /* 0x10cc240 */
extern undefined4 DAT_010cc244; /* 0x10cc244 */
extern undefined4 DAT_010cc248; /* 0x10cc248 */
extern undefined4 DAT_010cc250; /* 0x10cc250 */
extern undefined4 DAT_010cc254; /* 0x10cc254 */
extern undefined4 DAT_010cc258; /* 0x10cc258 */
extern undefined4 DAT_010cc25c; /* 0x10cc25c */
extern undefined4 DAT_010cc260; /* 0x10cc260 */
extern undefined4 DAT_010cc264; /* 0x10cc264 */
extern undefined4 DAT_010cc268; /* 0x10cc268 */
extern undefined4 DAT_010cc26c; /* 0x10cc26c */
extern undefined4 DAT_010cc270; /* no defined data */
extern undefined4 DAT_010cc274; /* no defined data */
extern undefined4 DAT_010cc278; /* 0x10cc278 */
extern undefined4 DAT_010cc27c; /* no defined data */
extern undefined4 DAT_010cc4c0; /* 0x10cc4c0 */
extern undefined4 DAT_010cc4c4; /* 0x10cc4c4 */
extern undefined4 DAT_010cc4c8; /* 0x10cc4c8 */
extern undefined4 DAT_010cc4d0; /* 0x10cc4d0 */
extern undefined4 DAT_010cc4d4; /* 0x10cc4d4 */
extern undefined4 DAT_010cc4d8; /* 0x10cc4d8 */
extern undefined4 DAT_010cc4dc; /* 0x10cc4dc */
extern undefined4 DAT_010cc4e0; /* 0x10cc4e0 */
extern undefined4 DAT_010cc4e4; /* 0x10cc4e4 */
extern undefined4 DAT_010cc4e8; /* 0x10cc4e8 */
extern undefined4 DAT_010cc4ec; /* 0x10cc4ec */
extern undefined2 DAT_010cc4f0; /* 0x10cc4f0 */
extern undefined1 DAT_010cc540; /* 0x10cc540 */
extern undefined2 DAT_010cc542; /* 0x10cc542 */
extern undefined4 DAT_010cc544; /* 0x10cc544 */
extern undefined4 DAT_010cc548; /* 0x10cc548 */
extern undefined4 DAT_010cc54c; /* 0x10cc54c */
extern undefined4 DAT_010cc550; /* 0x10cc550 */
extern undefined4 DAT_010cc554; /* 0x10cc554 */
extern undefined4 DAT_010cc558; /* 0x10cc558 */
extern undefined4 DAT_010cc55c; /* 0x10cc55c */
extern undefined4 DAT_010cc560; /* 0x10cc560 */
extern undefined4 DAT_010cc568; /* 0x10cc568 */
extern undefined4 DAT_010cc578; /* 0x10cc578 */
extern undefined2 DAT_010cc860; /* 0x10cc860 */
extern undefined4 DAT_010cc8c0; /* 0x10cc8c0 */
extern pointer32 PTR_M685_004122c8_0070e048; /* 0x70e048 */

// ---- functions
void M684_00411198 (float *param_1,int param_2,undefined8 param_3,undefined8 param_4);
void M684_004114b0(MobyInstance *param_1);
void UpdateMoby_684(MobyInstance *moby);
