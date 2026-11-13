/* blends a camera switch in (GameCamera.blender) */
struct CamBlender {
    s16 state;                        /* 0x00  0 off, 1 starting, 2 starting over a running blend, then running */
    u8 type;                          /* 0x02  0 position/rotation, else polar */
    u8 reqType;                       /* 0x03  the next blend's type */
    u8 _pad04[12];
    struct CamBlenderData blendData;  /* 0x10 */
};
