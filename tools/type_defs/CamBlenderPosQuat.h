/* a blend of the camera's position and rotation from where the last camera left off
   (DL's CamBlenderPosQuat, RC1 offsets) */
struct CamBlenderPosQuat {
    float quatInterpFac;              /* 0x00  0..1 */
    float quatInterpAdd;              /* 0x04  per frame */
    float reqQuatInterpAdd;           /* 0x08  the next blend's */
    float posInterpFac;               /* 0x0c  0..1 */
    float posInterpAdd;               /* 0x10 */
    float reqPosInterpAdd;            /* 0x14 */
    u8 _pad18[8];
    struct Vec4 orgQuat;              /* 0x20  the last camera's rotation */
    struct Vec4 orgPos;               /* 0x30  and position */
    struct Vec4 pos;                  /* 0x40  the blended camera's */
    struct Vec4 q;                    /* 0x50 */
};
