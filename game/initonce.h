#pragma once
// game/initonce.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00724610; /* 0x724610 */
extern undefined1 DAT_00724634; /* 0x724634 */
extern undefined4 DAT_00927204; /* 0x927204 */
extern undefined4 DAT_00a10690; /* no defined data */
extern undefined4 DAT_00a108d8; /* 0xa108d8 */
extern undefined4 DAT_00a108e8; /* 0xa108e8 */
extern undefined4 DAT_00a108ec; /* 0xa108ec */
extern undefined4 DAT_00a10910; /* 0xa10910 */
extern undefined4 DAT_00a10914; /* 0xa10914 */
extern undefined4 DAT_00a2080c; /* 0xa2080c */
extern undefined4 DAT_00a20818; /* 0xa20818 */
extern undefined4 DAT_00a2081c; /* 0xa2081c */
extern undefined4 DAT_00ec4080; /* no defined data */
extern undefined4 DAT_010ea100; /* 0x10ea100 */
extern undefined4 DAT_010ea104; /* 0x10ea104 */
extern undefined1 DAT_0159c350; /* 0x159c350 */
extern undefined4 MemSlots_IMSeqMem_descriptor; /* 0xa1091c */
extern undefined4 g_HasInited; /* 0x71cc6c */
extern undefined4 japanese_mode; /* 0xd9208 */

// ---- functions
void SECTION_HEADER_INITONCE(void);
void STUB_000d88f8(...);
ulonglong ____Unused_InitOnce_RunSysCallWait(undefined8 param_1,undefined8 param_2);
void InitMemSlots(void);
void InitOnce(void);
