#pragma once
// game/store.h
#include "types.h"

// ---- types
/* a copy for RunCopy: size bytes from data to addr (mode not read) */
struct CopyRequest {
    void *data;              /* 0x00 */
    void *addr;              /* 0x04 */
    u32 size;                /* 0x08 */
    u32 mode;                /* 0x0c */
};

/* one buffer of the store */
struct BufferStoreSlot {
    u8 *data;                /* 0x00 */
    int qwc;                 /* 0x04  size in qwords; 0 = unused */
    int flags;               /* 0x08  as given to AllocIndexedBuffer, not read here */
    int unk0c;               /* 0x0c */
};

/* the buffer store (0xa56eb0; names invented): up to 64 buffers bump-allocated from a 4 MB
   pool in main memory, never freed */
struct BufferStore {
    u8 *base;                /* 0x00  g_BufferStorePool */
    int size;                /* 0x04  0x400000 */
    int unk08;               /* 0x08 */
    u8 *next;                /* 0x0c  next free byte */
    int count;               /* 0x10  slots used */
    struct BufferStoreSlot slots[64];  /* 0x14 */
};
_Static_assert(sizeof(struct BufferStore) == 0x414, "BufferStore");

// ---- globals
extern BufferStore g_BufferStore; /* 0xa56eb0: the buffer store: 64 buffers in a 4 MB pool (invented name) */ /* type set in global_types.tsv */
extern u8 g_BufferStorePool[0x400000]; /* 0xa572c4: its 4 MB pool, right after g_BufferStore */ /* type set in global_types.tsv */
extern int g_StoreSectionWord; /* 0x734adc: set by SECTION_HEADER_STORE */ /* type set in global_types.tsv */

// ---- functions
void SECTION_HEADER_STORE(void);
void STUB_001655a0(...);
void InitIndexedBuffers(void);
int AllocIndexedBuffer(void *data, int copyQwc, int qwc, int flags);
int WriteIndexedBuffer(void *data, int slot, int offset, int qwc);
int GetIndexedBufferSize(int slot);
int ReadIndexedBuffer(void *dest, int slot, int offset, int qwc);
void STUB_001658d4(...);
