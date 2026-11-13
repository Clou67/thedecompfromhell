/* Per-query best-hit record filled by the tri/sphere tests. poly: env = collType+0x1000, moby =
   -index (the moby tri or prim). t = hit fraction (line) or dist^2 (sphere); a test only
   replaces the record when it is closer. The tri tests also store the triangle. */
struct CollHit {
    int poly;                         /* 0x00 */
    struct MobyInstance *moby;        /* 0x04 */
    float t;                          /* 0x08 */
    float ip[3];                      /* 0x0c */
    float normal[3];                  /* 0x18 */
    float v0[3];                      /* 0x24 */
    float v1[3];                      /* 0x30 */
    float v2[3];                      /* 0x3c */
};
