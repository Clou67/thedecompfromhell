/* One frame of an animation sequence. The joint data follows the 16-byte header, 8 bytes per
   joint (only the header fields this code touches are named). */
typedef struct MobyFrame {
    float length;            /* 0x00  frames of time this frame lasts (scales the blend step) */
    s16 time;                /* 0x04  start time in 1/16 frames */
    s16 qwords;              /* 0x06  size in 16-byte units */
    s16 jointBytes;          /* 0x08 */
    s16 unk0a;               /* 0x0a */
    s16 unk0c;               /* 0x0c */
    s16 unk0e;               /* 0x0e */
} MobyFrame;
typedef char MobyFrame_size_check[sizeof(MobyFrame) == 0x10 ? 1 : -1];

/* an animation sequence of a moby class (RC1's layout; DL's MobySeq has the same first 0x18) */
typedef struct MobySeq {
    BSphere bSphere;         /* 0x00 */
    u8 frameCnt;             /* 0x10 */
    s8 sound;                /* 0x11  looped while the sequence plays, -1 none */
    u8 trigsCnt;             /* 0x12 */
    u8 pad;                  /* 0x13 */
    short *trigs;            /* 0x14 */
    void *animInfo;          /* 0x18 */
    MobyFrame *frames[];     /* 0x1c  frameCnt of them */
} MobySeq;
