/* a ring buffer of positions with a clear line of sight between neighbours (a trail a
   follower can retrace); indices are u8, 0xff = none */
typedef struct PosRingPoint {
    float x;
    float y;
    float z;
} PosRingPoint;

typedef struct PosRing {
    u8 head;                         /* 0x00  newest point */
    u8 mark;                         /* 0x01  last point seen clear from the head */
    u8 tail;                         /* 0x02  oldest point */
    u8 cap;                          /* 0x03 */
    u8 probe;                        /* 0x04  next point AddPoint tries to shortcut to */
    u8 pad05[3];
    struct MobyInstance *ignore[2];  /* 0x08  mobys the line tests see through */
    float zOff;                      /* 0x10  height added to the points */
    float maxDistXY;                 /* 0x14  how far FindClearPoint* may look */
    float maxDistZ;                  /* 0x18 */
    u8 pad1c[8];
    PosRingPoint pts[];              /* 0x24 */
} PosRing;
