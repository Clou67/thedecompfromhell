/* the shadow passes' GS register blocks (0x731800; field names invented). Each block is a GIF
   tag and A+D qwords; only the values written at init are named. */
struct ShadowGsRegs {
    u32 words[4];              /* 0x000  [0] and [1] go to the stubbed volume drawer */
    u64 blends[4][6];          /* 0x010  each: [0] GIF tag, [2] a blend (FUN_00502f98 ..., n) */
    u64 stencils[2][14];       /* 0x0d0  each: [0] GIF tag, [4] FUN_00502e50, [6] clamp, [8] tex1,
                                          [10] tex0 (0xe00 / 0x1000), [12] test */
};
_Static_assert(sizeof(struct ShadowGsRegs) == 0x1b0, "ShadowGsRegs");
