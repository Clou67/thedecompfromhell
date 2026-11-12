#pragma once
// game/initonce.h
#include "types.h"

// ---- types
/* Idol's sequential memory pool (0x24 bytes; created inline with operator new in InitMemSlots).
   Fields are unnamed: only the constructor's stores are known */
struct IMSeqMem {
    u32 unk00[4];            /* 0x00 */
    u8 unk10;                /* 0x10 */
    u8 unk11;                /* 0x11 */
    u32 unk14;               /* 0x14 */
    void *vtable;            /* 0x18  @0x66173c */
    u32 unk1c;               /* 0x1c */
    u32 unk20;               /* 0x20 */
};
typedef char IMSeqMem_size_check[sizeof(struct IMSeqMem) == 0x24 ? 1 : -1];

// ---- globals
extern undefined4 DAT_00724610; /* 0x724610 */
extern u32 *DAT_00927204; /* 0x927204: set to 130 at start-up, next to g_pFrameTicks */ /* type set in global_types.tsv */
extern undefined4 DAT_00a10690; /* no defined data */
extern undefined4 DAT_00a10910; /* 0xa10910 */
extern undefined4 DAT_00a10914; /* 0xa10914 */
extern undefined4 DAT_00a2080c; /* 0xa2080c */
extern undefined4 DAT_00a20818; /* 0xa20818 */
extern undefined4 DAT_00a2081c; /* 0xa2081c */
extern undefined4 DAT_010ea100; /* 0x10ea100 */
extern undefined4 DAT_010ea104; /* 0x10ea104 */
extern undefined1 DAT_0159c350; /* 0x159c350 */
extern IMSeqMem *MemSlots_IMSeqMem_descriptor; /* 0xa1091c: the pool InitMemSlots allocates from (DL keeps these pointers in a MEMSLOTS struct, MemSlots) */ /* type set in global_types.tsv */
extern u8 *g_GameplayBuffer; /* 0xa108ec: 0x200000 bytes, the level's gameplay file (Gameplay points into it) */ /* type set in global_types.tsv */
extern undefined4 g_HasInited; /* 0x71cc6c */
extern bool g_MemSlotsCreated; /* 0x724634 */ /* type set in global_types.tsv */
extern u8 *g_MobyClassBuffer; /* 0xa108e8: 0x60000 bytes, moby classes 0x30000 each */ /* type set in global_types.tsv */

// ---- functions
void SECTION_HEADER_INITONCE(void);
void STUB_000d88f8(...);
int InitOnce_RunSysCallWait(int a, int b);
void InitMemSlots(void);
void InitOnce(void);
