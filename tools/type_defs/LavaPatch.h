/* a flowing-lava mesh drawn by DrawsFlowingLava (name and layout from its use) */
struct LavaPatch {
    struct BSphere sphere;  /* 0x00 */
    struct Vec3 *pos;       /* 0x10 */
    struct Vec2 *uv;        /* 0x14 */
    u32 *colors;            /* 0x18  (DrawsFlowingLava makes its own) */
    int stripCount;         /* 0x1c */
    short bounds[16];       /* 0x20  strip i is vertices bounds[i] to bounds[i + 1] */
};
