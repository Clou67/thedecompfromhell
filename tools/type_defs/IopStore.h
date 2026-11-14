/* the port's stand-in for sceSifDmaData: a copy from data to addr of size bytes (mode unused) */
struct SifDmaData {
    void *data;              /* 0x00 */
    void *addr;              /* 0x04 */
    u32 size;                /* 0x08 */
    u32 mode;                /* 0x0c */
};

/* one buffer of the store */
struct IopStoreSlot {
    u8 *data;                /* 0x00 */
    int qwc;                 /* 0x04  size in qwords; 0 = unused */
    int flags;               /* 0x08  as given to AllocIndexedBuffer, not read here */
    int unk0c;               /* 0x0c */
};

/* the buffer store (0xa56eb0; names invented): up to 64 buffers bump-allocated from a 4 MB
   pool, never freed. On PS2 this data lived in IOP memory and moved by SIF DMA. */
struct IopStore {
    u8 *base;                /* 0x00  g_IopStorePool */
    int size;                /* 0x04  0x400000 */
    int unk08;               /* 0x08 */
    u8 *next;                /* 0x0c  next free byte */
    int count;               /* 0x10  slots used */
    struct IopStoreSlot slots[64];  /* 0x14 */
};
_Static_assert(sizeof(struct IopStore) == 0x414, "IopStore");
