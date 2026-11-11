#pragma once
// game/update/moby180.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007b7bec; /* 0x7b7bec */
extern undefined4 DAT_007b7c34; /* 0x7b7c34 */
extern undefined4 DAT_007b7c38; /* 0x7b7c38 */
extern undefined4 DAT_007b7c3c; /* 0x7b7c3c */
extern undefined4 DAT_010a0850; /* 0x10a0850 */
extern undefined4 DAT_010a0854; /* 0x10a0854 */
extern undefined4 DAT_010a0858; /* 0x10a0858 */
extern undefined4 DAT_010a085c; /* 0x10a085c */
extern undefined4 DAT_010a0860; /* 0x10a0860 */
extern undefined2 DAT_010a0b70; /* 0x10a0b70 */
extern undefined2 DAT_010a0b84; /* 0x10a0b84 */
extern undefined2 DAT_010a0b98; /* 0x10a0b98 */
extern undefined2 DAT_010a0bac; /* 0x10a0bac */
extern undefined4 DAT_010a0bc0; /* 0x10a0bc0 */
extern undefined4 DAT_010a0bc4; /* 0x10a0bc4 */
extern undefined4 DAT_010a0bc8; /* 0x10a0bc8 */
extern pointer32 PTR_M1805_002bb718_0070af60; /* 0x70af60 */

// ---- functions
void M180_002ba398(void);
void UpdateMoby_180(MobyInstance *moby);
