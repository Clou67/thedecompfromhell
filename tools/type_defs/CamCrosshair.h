/* a target crosshair queued for this frame (the start of DL's SUB_RETICULE) */
struct CamCrosshair {
    struct Vec4 targetPos;            /* 0x00 */
    float scale;                      /* 0x10 */
    u32 rgba;                         /* 0x14 */
    int fxTex;                        /* 0x18  effect texture */
    float rotAmt;                     /* 0x1c */
    struct MobyInstance *pMoby;       /* 0x20 */
    s16 type;                         /* 0x24  1: at targetPos, 0: at the screen center */
    s16 segments;                     /* 0x26  draw_style 0: this many copies, each turned segment_rot */
    float segment_rot;                /* 0x28 */
    int draw_style;                   /* 0x2c  0 segments, 1 four corners, 2 one sprite */
};
