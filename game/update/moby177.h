#pragma once
// game/update/moby177.h
#include "types.h"

// ---- globals
extern undefined4 DAT_002b65ec; /* 0x2b65ec */
extern undefined4 DAT_0072240c; /* 0x72240c */
extern undefined4 DAT_007b77d0; /* 0x7b77d0 */
extern undefined4 DAT_007b77d4; /* 0x7b77d4 */
extern undefined4 DAT_007b77d8; /* 0x7b77d8 */
extern undefined4 DAT_007b77dc; /* 0x7b77dc */
extern undefined4 DAT_007b77e0; /* 0x7b77e0 */
extern undefined4 DAT_007b77e4; /* 0x7b77e4 */
extern undefined4 DAT_007b77e8; /* 0x7b77e8 */
extern undefined4 DAT_007b77ec; /* 0x7b77ec */
extern undefined4 DAT_007b77f0; /* 0x7b77f0 */
extern undefined4 DAT_007b77f4; /* 0x7b77f4 */
extern undefined4 DAT_007b77f8; /* 0x7b77f8 */
extern undefined4 DAT_007b77fc; /* 0x7b77fc */
extern undefined4 DAT_007b7800; /* 0x7b7800 */
extern undefined4 DAT_007b7804; /* 0x7b7804 */
extern undefined4 DAT_007b7818; /* 0x7b7818 */
extern undefined4 DAT_007b7854; /* 0x7b7854 */
extern undefined4 DAT_007b7858; /* 0x7b7858 */
extern undefined4 DAT_007f2020; /* no defined data */
extern undefined1 DAT_0096bd95; /* 0x96bd95 */
extern undefined2 DAT_00a0fdbc; /* 0xa0fdbc */
extern undefined2 DAT_00a0fdbe; /* 0xa0fdbe */
extern undefined4 DAT_00a0fdc0; /* 0xa0fdc0 */
extern undefined4 DAT_010a0240; /* 0x10a0240 */
extern undefined4 DAT_010a0244; /* 0x10a0244 */
extern undefined4 DAT_010a0248; /* 0x10a0248 */
extern undefined4 DAT_010a024c; /* 0x10a024c */
extern undefined4 DAT_010a0250; /* 0x10a0250 */
extern undefined4 DAT_010a0370; /* 0x10a0370 */
extern undefined4 DAT_010a0374; /* 0x10a0374 */
extern undefined4 DAT_010a0378; /* 0x10a0378 */
extern undefined4 DAT_010a037c; /* 0x10a037c */
extern undefined4 DAT_010a0380; /* 0x10a0380 */
extern undefined4 DAT_010a0384; /* 0x10a0384 */
extern undefined4 DAT_010a0388; /* 0x10a0388 */
extern undefined4 DAT_010a038c; /* 0x10a038c */
extern undefined4 DAT_010a04c4; /* 0x10a04c4 */
extern undefined4 DAT_010a0520; /* 0x10a0520 */
extern undefined4 DAT_010a0650; /* 0x10a0650 */
extern undefined4 DAT_010a0654; /* 0x10a0654 */
extern undefined4 DAT_010a06a4; /* 0x10a06a4 */
extern undefined4 DAT_010a06a8; /* 0x10a06a8 */
extern undefined4 DAT_010a06ac; /* 0x10a06ac */
extern undefined4 DAT_010a06b0; /* 0x10a06b0 */
extern undefined4 DAT_010a06c0; /* no defined data */
extern undefined2 DAT_010a0800; /* 0x10a0800 */
extern undefined2 DAT_010a0802; /* 0x10a0802 */
extern undefined2 DAT_010a0804; /* 0x10a0804 */
extern undefined2 DAT_010a0806; /* 0x10a0806 */
extern undefined2 DAT_010a0808; /* 0x10a0808 */
extern undefined2 DAT_010a0810; /* 0x10a0810 */
extern undefined2 DAT_010a0812; /* 0x10a0812 */
extern undefined2 DAT_010a0814; /* 0x10a0814 */
extern undefined2 DAT_010a0816; /* 0x10a0816 */
extern undefined2 DAT_010a0818; /* 0x10a0818 */
extern undefined2 DAT_010a081a; /* 0x10a081a */
extern undefined2 DAT_010a081c; /* 0x10a081c */
extern undefined2 DAT_010a081e; /* 0x10a081e */
extern undefined4 DAT_010a0820; /* 0x10a0820 */
extern undefined4 DAT_010a0824; /* 0x10a0824 */
extern pointer PTR_DAT_007b7824; /* 0x7b7824 */
extern pointer32 PTR_M1772_002b8520_0070aec8; /* 0x70aec8 */

// ---- functions
void M177_002b4818(ulonglong param_1);
void M177_002b63a8(int param_1);
void UpdateMoby_177(MobyInstance *moby);
