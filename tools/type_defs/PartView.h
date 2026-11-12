/* the camera basis particles are drawn with, set each frame by UpdateParts */
struct PartView {
    struct Vec4 right;       /* 0x00 */
    struct Vec4 up;          /* 0x10 */
    struct Vec4 fwd;         /* 0x20 */
    struct Vec4 camPos;      /* 0x30 */
};
/* the per-class statistics UpdatePartsDebug prints */
struct PartProfile {
    u32 count;
    u32 cycles;              /* in units of 32 cycles */
};
