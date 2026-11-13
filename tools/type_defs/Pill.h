/* a capsule volume (collision prim type 7), 0x90 bytes in g_Pills */
struct Pill {
    struct Mtx3 matrix;               /* 0x00  v2: from the center to an end */
    struct Vec4 pos;                  /* 0x30 */
    struct Mtx3 imatrix;              /* 0x40 */
    struct Vec4 rot;                  /* 0x70 */
    float radius;                     /* 0x80  of the ends */
    int pad[3];
};
