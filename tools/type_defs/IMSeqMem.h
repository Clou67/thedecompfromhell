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
