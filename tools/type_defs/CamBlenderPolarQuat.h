/* a blend around the hero in polar coordinates (DL's CamBlenderPolarQuat) */
struct CamBlenderPolarQuat {
    struct PolarSm orgPol;            /* 0x00  where the last camera was, around the hero */
    int interpFrames;                 /* 0x0c */
    float interpMaxInv;               /* 0x10 */
    int reqInterpFrames;              /* 0x14 */
    u8 _pad18[8];
    struct Vec4 fwd;                  /* 0x20  the hero's axes at the start */
    struct Vec4 up;                   /* 0x30 */
    struct Vec4 orgQuat;              /* 0x40 */
    struct Vec4 pos;                  /* 0x50 */
    struct Vec4 q;                    /* 0x60 */
};
