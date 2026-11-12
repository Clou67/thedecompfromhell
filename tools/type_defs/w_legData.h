/* one leg of a two-legged walker, DL's w_legData (0xb0 bytes). The hip and ankle manipulators
   twist the leg so the foot keeps pointing where it was planted. */
struct w_legData {
    char jiFoot;             /* 0x00  joints */
    char jiHeel;             /* 0x01 */
    char jiAnkle;            /* 0x02 */
    char jiHip;              /* 0x03 */
    short idle;              /* 0x04  (unused here) */
    short _2mainIdle;        /* 0x06  (unused here) */
    float frDest;            /* 0x08  the yaw the foot was planted with */
    float arAct;             /* 0x0c  ankle twist */
    float arSpeed;           /* 0x10 */
    float hrAct;             /* 0x14  hip twist */
    float hrSpeed;           /* 0x18 */
    float twistLow;          /* 0x1c  limits of both twists */
    float twistHigh;         /* 0x20 */
    int pad[3];              /* 0x24 */
    struct Manipulator MAnkle; /* 0x30 */
    struct Manipulator MHip;   /* 0x70 */
};
