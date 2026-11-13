/* the game camera (GameCamera @0x9513c0). From 0x140 on it follows DL's GAMECAMERA, with two
   shakes instead of three and a shorter CameraStatics. */
struct GAMECAMERA {
    struct Mtx4 mtx0;                 /* 0x000 */
    struct Mtx4 matrix;               /* 0x040 */
    struct Mtx4 mtx2;                 /* 0x080 */
    struct Mtx4 mtx3;                 /* 0x0c0 */
    struct Mtx4 mtx4;                 /* 0x100 */
    float posX;                       /* 0x140  pos */
    float posY;                       /* 0x144 */
    float posZ;                       /* 0x148 */
    float posW;                       /* 0x14c */
    struct PolarSm rot;               /* 0x150 */
    float rotW;                       /* 0x15c */
    struct CamOffsetRec shake;        /* 0x160  up and down */
    struct CamOffsetRec shakeFwd;     /* 0x170  back and forth */
    struct UpdateCam *pCurrentUpdCam; /* 0x180 */
    struct UpdateCam *pLastUpdCam;    /* 0x184 */
    u8 _pad188[8];
    struct CameraStatics camStatics;  /* 0x190 */
    struct CamBlender blender;        /* 0x270 */
    struct CameraMatrix orientMtx;    /* 0x350 */
    void (*ofsUpdate)(void);          /* 0x390  run by the follow camera (CamZoomOfs_Update) */
    u32 camUnderWater;                /* 0x394 */
    u32 camTimer;                     /* 0x398 */
};
