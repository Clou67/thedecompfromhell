/* the view set up for a frame (g_ViewContext @0x95cf80): clip planes, screen ratios, the
   projection matrices and the fog. DL's ViewContext without its scissor and split-screen
   fields; the GIF-tag headers at the start are PS2 leftovers the PS3 build still fills. */
struct ViewContext {
    u8 headerBase[4][6][4];           /* 0x000  PS2 GIF tags per pass (byte 0 = fog far intensity, byte 2 = NLOOP) */
    u8 headerTex[16];                 /* 0x060 */
    u8 headerTexNoFog[16];            /* 0x070 */
    u8 headerGr[16];                  /* 0x080 */
    u8 headerGrNoFog[16];             /* 0x090 */
    float nearClip;                   /* 0x0a0  DL's D */
    float farClip;                    /* 0x0a4  DL's F */
    float xclipratio;                 /* 0x0a8  xclip / xpix */
    float yclipratio;                 /* 0x0ac */
    float xratio;                     /* 0x0b0  tan of half the horizontal view angle */
    float yratio;                     /* 0x0b4 */
    float xradpad;                    /* 0x0b8  1 / cos(atan(xratio)) */
    float yradpad;                    /* 0x0bc */
    struct Mtx4 fMtx;                 /* 0x0c0  the projection, in 1/1024 units */
    struct Mtx4 nfMtx;                /* 0x100  the same without the perspective scale */
    struct Mtx4 hMtx;                 /* 0x140  the projection for HUD/fonts */
    struct Vec4 hmgScale;             /* 0x180 */
    struct Vec4 ihmgScale;            /* 0x190  its inverse (the font clip scale) */
    struct Vec4 hvdf;                 /* 0x1a0  the PS2 screen offset (2048, 2048, z) */
    struct Vec4 unSquish;             /* 0x1b0 */
    struct Vec4 guard;                /* 0x1c0  x: the guard band, y, z: 1 */
    struct Vec4 iguard;               /* 0x1d0  xclipratio, yclipratio and their inverses */
    struct Vec4 sphereCheckA;         /* 0x1e0  xradpad, yradpad for the clip box, their mean */
    struct Vec4 sphereCheckB;         /* 0x1f0  farClip, nearClip */
    float xpix;                       /* 0x200  the screen in pixels */
    float ypix;                       /* 0x204 */
    float xclip;                      /* 0x208  the clip box in pixels */
    float yclip;                      /* 0x20c */
    float perspScale;                 /* 0x210  DL's fog0: (far - near intensity) * nearClip / the fog range */
    float fog1;                       /* 0x214  the fog intensity at depth 0 */
    float fogNearDist;                /* 0x218 */
    float fogFarDist;                 /* 0x21c */
    float fogMult;                    /* 0x220  intensity per world unit */
    float fogAdd;                     /* 0x224 */
    float fogNearIntensity;           /* 0x228 */
    float fogFarIntensity;            /* 0x22c */
    int fogR;                         /* 0x230 */
    int fogG;                         /* 0x234 */
    int fogB;                         /* 0x238 */
    int occlColor0;                   /* 0x23c  DL's backR/G/B: the level's background colour */
    int occlColor1;                   /* 0x240 */
    int occlColor2;                   /* 0x244 */
    float fovScale;                   /* 0x248  scales the view angle (the vendor zooms with it) */
};
