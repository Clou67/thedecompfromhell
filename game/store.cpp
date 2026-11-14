#include <string.h>
#include "game/store.h"
#include "idol/fastfunc.h"
// game/store.cpp -- reconstructed from NPEA00385 EBOOT (was sUnk.cpp; the name is invented)
// 8 functions, 0x165588-0x1658d8: a store of up to 64 buffers in a 4 MB pool. On PS2 this data
// sat in IOP memory and moved by SIF DMA; on PS3 the "DMA" (SifSetDma) is a memcpy. The map
// keeps its file here. Sizes and offsets are in qwords. Errors: -1 too big, -2 no free slot,
// -3 bad or unused slot.

#define STORE_SLOT_CNT 64

// 0x0165588 (0x14 bytes)
void SECTION_HEADER_STORE(void)
{
    g_StoreSectionWord = 0x10000;
}

// 0x01655a0 (0x4 bytes)
void STUB_001655a0(...)
{
}

// 0x01655a4 (0x70 bytes)
/* empties the store */
void InitIndexedBuffers(void)
{
    g_IopStore.base = g_IopStorePool;
    g_IopStore.size = 0x400000;
    g_IopStore.next = g_IopStorePool;
    g_IopStore.count = 0;

    for (int i = 0; i < STORE_SLOT_CNT; i++) {
        g_IopStore.slots[i].data = NULL;
        g_IopStore.slots[i].qwc = 0;
    }
}

// 0x0165614 (0xf8 bytes)
/* a new buffer of qwc qwords with copyQwc qwords of data copied in; returns its slot */
int AllocIndexedBuffer(void *data, int copyQwc, int qwc, int flags)
{
    if (g_IopStore.size - (g_IopStore.next - g_IopStore.base) < qwc << 4) {
        return -1;
    }

    if (g_IopStore.count == STORE_SLOT_CNT) {
        return -2;
    }

    SifDmaData copy;

    copy.data = data;
    copy.addr = g_IopStore.next;
    copy.size = copyQwc << 4;
    copy.mode = 0;
    SifSetDma(&copy, 1);

    int slot = g_IopStore.count++;

    g_IopStore.slots[slot].data = g_IopStore.next;
    g_IopStore.slots[slot].qwc = qwc;
    g_IopStore.slots[slot].flags = flags;
    g_IopStore.next += qwc << 4;

    return slot;
}

// 0x016570c (0xc0 bytes)
/* qwc qwords of data written into slot at offset */
int WriteIndexedBuffer(void *data, int slot, int offset, int qwc)
{
    if (slot < 0 || slot >= STORE_SLOT_CNT) {
        return -3;
    }

    int size = g_IopStore.slots[slot].qwc;

    if (size == 0) {
        return -3;
    }

    if (size < offset + qwc) {
        return -1;
    }

    SifDmaData copy;

    copy.data = data;
    copy.addr = g_IopStore.slots[slot].data + (offset << 4);
    copy.size = qwc << 4;
    copy.mode = 0;
    SifSetDma(&copy, 1);

    return 0;
}

// 0x01657cc (0x34 bytes)
/* slot's size in qwords */
int GetIndexedBufferSize(int slot)
{
    if (slot < 0 || slot >= STORE_SLOT_CNT) {
        return -3;
    }

    return g_IopStore.slots[slot].qwc;
}

// 0x0165800 (0xd4 bytes)
/* qwc qwords of slot from offset copied to dest (qwc -1: the whole buffer) */
int ReadIndexedBuffer(void *dest, int slot, int offset, int qwc)
{
    if (qwc == -1) {
        qwc = GetIndexedBufferSize(slot);
    }

    if (slot < 0 || slot >= STORE_SLOT_CNT) {
        return -3;
    }

    int size = g_IopStore.slots[slot].qwc;

    if (size == 0) {
        return -3;
    }

    if (size < offset + qwc) {
        return -1;
    }

    memcpy(dest, g_IopStore.slots[slot].data + (offset << 4), qwc << 4);

    return 0;
}

// 0x01658d4 (0x4 bytes)
void STUB_001658d4(...)
{
}
