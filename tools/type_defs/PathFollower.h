/* follows a Spline node by node (PathFollowUpdate) */
struct PathFollower {
    s32 idx;                 /* 0x00  the node being walked to */
    u8 direction;            /* 0x04  +1 / -1 (as s8) */
    u8 state;                /* 0x05  PATH_FOLLOW_* */
    u16 flags;               /* 0x06  & 3: PATH_MODE_* */
    float timer;             /* 0x08 */
    float distance;          /* 0x0c  to the node */
    struct Spline *pSpline;  /* 0x10 */
    s32 splineIdx;           /* 0x14  index into Splines */
    float head;              /* 0x18  heading to the node */
    int unk1c;               /* 0x1c  cleared when the walk starts */
};
