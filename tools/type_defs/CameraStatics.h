/* GameCamera's per-frame hero tracking and screen fade state (DL's CameraStatics up to fadeTimer;
   RC1 then tracks the moby the hero stands on) */
struct CameraStatics {
    struct Vec3 heroNoJump;           /* 0x00  the hero's position, its z held while jumping */
    float heroLastZ;                  /* 0x0c */
    float heroLastZSpeed;             /* 0x10 */
    u8 _pad14[12];
    struct Vec4 heroUp;               /* 0x20  heroUpActual, smoothed */
    struct Vec4 heroUpActual;         /* 0x30  minus the hero's gravity direction */
    struct Vec4 heroUpLast;           /* 0x40 */
    struct Vec4 heroUpSpeed;          /* 0x50  Cam_InterpValues speeds for heroUp */
    struct Vec4 heroLastPos;          /* 0x60 */
    struct Vec4 heroMoveVec;          /* 0x70  this frame's move */
    struct Vec4 heroMoveVec2D;        /* 0x80  the move off heroUpActual */
    struct Vec4 heroMoveVecUp;        /* 0x90  the move along heroUpActual */
    float heroSpeed;                  /* 0xa0 */
    float heroSpeed2D;                /* 0xa4 */
    float heroSpeedUp;                /* 0xa8 */
    float heroLastRotZ[5];            /* 0xac */
    int hotspot;                      /* 0xc0 */
    struct MobyInstance *pCamColl;    /* 0xc4  the moby that keeps the hero's collision off the camera */
    float fadeSpeed;                  /* 0xc8 */
    float fadeIdeal;                  /* 0xcc */
    int fadeTimer;                    /* 0xd0 */
    struct MobyInstance *pGroundMoby; /* 0xd4  the moby the hero stands on (not a train) */
    float groundMobyZ;                /* 0xd8 */
    float groundMobyDeltaZ;           /* 0xdc  how far it rose this frame (0 under 0.001) */
};
