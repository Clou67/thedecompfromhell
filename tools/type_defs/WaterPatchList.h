/* one chunk of a water patch: PS2 VU data copied through the scratchpad (names invented) */
struct WaterPatchChunk {
    u32 data;           /* 0x0  the chunk's data */
    short count;        /* 0x4  vertices */
    short unk6;         /* 0x6 */
    short ofs8;         /* 0x8  offsets into the scratchpad copy */
    short uvOfs;        /* 0xa  the vertices' texture coordinates, two shorts each */
    short ofsC;         /* 0xc */
    short size;         /* 0xe  bytes * 16 */
};

/* a water patch: its chunks (g_WaterPatches @0x963668) */
struct WaterPatchList {
    struct WaterPatchChunk *chunks;   /* 0x0 */
    short count;                      /* 0x4 */
    short mode;                       /* 0x6  0: DrawWaterPatch_A, else _B */
};
