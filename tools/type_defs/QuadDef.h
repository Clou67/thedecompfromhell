/* a textured quad for FastDrawQuad (DL: QuadDef, same layout) */
struct QuadDef {
    struct Vec4 xyzw[4];     /* 0x00 */
    int rgba[4];             /* 0x40 */
    float st[2][4];          /* 0x50  s for the 4 corners, then t */
    u64 clamp;               /* 0x70  GS registers */
    u64 tex0;                /* 0x78 */
    u64 tex1;                /* 0x80 */
    u64 alpha;               /* 0x88 */
};
typedef char QuadDef_size_check[sizeof(struct QuadDef) == 0x90 ? 1 : -1];
