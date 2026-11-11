#pragma once
// game/update/moby1850.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007bd374; /* 0x7bd374 */
extern undefined4 DAT_007bd378; /* 0x7bd378 */
extern undefined4 DAT_007bd3bc; /* 0x7bd3bc */
extern undefined4 DAT_007bd3c0; /* 0x7bd3c0 */
extern undefined4 DAT_007bd3c4; /* 0x7bd3c4 */
extern undefined4 DAT_007bd3c8; /* 0x7bd3c8 */
extern undefined4 DAT_007bd3cc; /* 0x7bd3cc */
extern undefined4 DAT_007bd3dc; /* 0x7bd3dc */
extern undefined4 DAT_007bd3e8; /* 0x7bd3e8 */
extern undefined4 DAT_007bd3ec; /* 0x7bd3ec */
extern undefined4 DAT_007bd3f0; /* 0x7bd3f0 */
extern undefined4 DAT_007bd400; /* 0x7bd400 */
extern undefined4 DAT_007bd440; /* 0x7bd440 */
extern undefined4 DAT_007bd444; /* 0x7bd444 */
extern undefined4 DAT_007bd448; /* 0x7bd448 */
extern undefined4 DAT_007bd49c; /* 0x7bd49c */
extern undefined4 DAT_010a2210; /* 0x10a2210 */
extern undefined4 DAT_010a2214; /* 0x10a2214 */
extern undefined4 DAT_010a2218; /* 0x10a2218 */
extern undefined4 DAT_010a22b8; /* 0x10a22b8 */

// ---- functions
void M1850_002c7fb8(int param_1);
void M1850_002c8468(void);
void M1850_002c8808(void);
void M1850_002c8ff8(undefined8 param_1);
void M1850_002c957c(void);
MobyInstance * UpdateMoby_1850(MobyInstance *moby);
