#pragma once
// game/camera.h
#include "types.h"

// ---- types
struct _2legData {
    struct vec4 fpos[5];
    short onground;
    short state;
    float yrot;
    float yrSpeed;
    short idle;
    short stand;
    struct _2legAnim walk;
    struct _2legAnim run;
    float speed;
    int counter;
    int moveJoint;
    int pad[1];
    struct legData legs[2];
};

struct PolarSm {
    float azimuth;
    float elevation;
    float radius;
};

/* a blend around the hero in polar coordinates (DL's CamBlenderPolarQuat) */
struct CamBlenderPolarQuat {
    struct PolarSm orgPol;            /* 0x00  where the last camera was, around the hero */
    int interpFrames;                 /* 0x0c */
    float interpMaxInv;               /* 0x10 */
    int reqInterpFrames;              /* 0x14 */
    u8 _pad18[8];
    struct Vec4 fwd;                  /* 0x20  the hero's axes at the start */
    struct Vec4 up;                   /* 0x30 */
    struct Vec4 orgQuat;              /* 0x40 */
    struct Vec4 pos;                  /* 0x50 */
    struct Vec4 q;                    /* 0x60 */
};

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

struct CamBlenderData {
    struct CamBlenderPosQuat posData;     /* 0x00 */
    struct CamBlenderPolarQuat polarData; /* 0x60 */
};

/* blends a camera switch in (GameCamera.blender) */
struct CamBlender {
    s16 state;                        /* 0x00  0 off, 1 starting, 2 starting over a running blend, then running */
    u8 type;                          /* 0x02  0 position/rotation, else polar */
    u8 reqType;                       /* 0x03  the next blend's type */
    u8 _pad04[12];
    struct CamBlenderData blendData;  /* 0x10 */
};

struct Camera {
    struct Vec4 fwd;
    struct Vec4 right;
    struct Vec4 up;
    struct Vec4 pos;
};

struct CameraMatrix {
    struct Vec4 forward;
    struct Vec4 right;
    struct Vec4 up;
    struct Vec4 position;
};

/* one camera type's handlers (g_CameraVTable, indexed by UpdateCam.funcIdx); each a function
   (activate: int (UpdateCam *, UpdateCam *) -> 1 activate, -1 never, else the generic test;
   the rest: void (UpdateCam *)) */
struct CameraVTable {
    int type;                         /* 0x00 */
    void *activate;                   /* 0x04 */
    void *init;                       /* 0x08  on becoming current */
    void *update;                     /* 0x0c */
    void *exit;                       /* 0x10  run on the current camera before each frame's activation checks */
};

/* a camera shake (DL's CameraShake): strength fades out with the square of the time left */
struct CamOffsetRec {
    float strength;                   /* 0x00 */
    float adjust;                     /* 0x04  this frame's offset */
    int time;                         /* 0x08  frames left */
    int div;                          /* 0x0c  the longest time it was set to */
};

struct Mtx3 {
    struct Vec4 v0;
    struct Vec4 v1;
    struct Vec4 v2;
};

struct Cuboid {
    struct Mtx3 matrix;
    struct Vec4 pos;
    struct Mtx3 imatrix;
    struct Vec4 rot;
};

struct Cylinder {
    struct Mtx3 matrix;
    struct Vec4 pos;
    struct Mtx3 imatrix;
    struct Vec4 rot;
};

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

struct LevelCamInner {
    char pad_00[96];
    f32 dir80[4];
    char pad_70[8];
    f32 f98;
    char pad_7C[500];
    f32 dir290[4];
    char pad_280[80];
    f32 waterHeight;
    char pad_2D4[8];
    u32 pCollMoby;
    char pad_2E0[1428];
    u32 bestTimeRef;
    char pad_898[2];
    u16 rank;
    char pad_89C[12];
    u32 hiScore;
    char pad_8AC[20];
    u32 ordinal;
    char pad_8C4[2592];
    u8 hotSpotWater;
    u8 hotSpotLava;
    u8 hotSpotQuickSand;
    char pad_12C7[4];
    u8 hotSpotDeathSand;
    u8 hotSpotIceWater;
    char pad_12CD[3479];
    int heroState;
    char pad_2068[4];
    u32 heroStateType;
    char pad_2070[500];
    int i2284;
    char pad_2268[136];
};

struct LevelCamData {
    char pad_00[32];
    struct LevelCamInner inner;
};

struct OcclCamParamBlock {
    u8 pad_000[48];
    u64 giftagDrawLarge;
    u8 pad_038[136];
    u64 giftagDrawSmall;
    u8 pad_0C8[136];
    u16 drawW;
    u16 drawH;
    u16 pad_154;
    u16 pad_156;
    s16 zbufW;
    s16 zbufH;
    s16 pad_15C;
    s16 pad_15E;
    s16 pad_160;
    s16 pad_162;
    s16 pad_164;
    s16 pad_166;
    s16 pad_168;
    s16 pad_16A;
    s16 pad_16C;
    s16 effectBufBaseGs;
    u32 pad_170;
};

struct OcclCamState {
    u8 pad_04[4];
    u32 bits1;
    u32 bits0;
    u32 state;
    u32 subState;
    u32 staged;
    u32 step1;
    u32 step2;
    u32 flagA;
    u32 flagB;
    u32 flagC;
    u32 stepD;
    u32 flagE;
    u32 flagF;
    u32 stepG;
    u32 index;
    u8 pad_40[68];
    f32 angleA;
    f32 angleB;
    f32 angleC;
    f32 angleD;
    s32 posIntX;
    s32 posIntY;
    s32 posIntZ;
    u8 pad_a0[4];
    u32 bgColorCache;
    u8 pad_a8[72];
    u32 toggleH;
    u32 toggleI;
    u8 logFlag0;
    u8 logFlag1;
    u8 pad_fa[6];
};

struct OcclViewParams {
    s32 paramX;
    s32 paramY;
    s32 halfX;
    s32 halfY;
    s32 minX;
    s32 minY;
    s32 maxX;
    s32 maxY;
};

struct Spline {
    int32_t cnt;
    int32_t cap;
    int32_t cursor;
    float zOff;
    struct Vec4 points[30];
};

struct Sphere {
    struct Mtx3 matrix;
    struct Vec4 pos;
    struct Mtx3 imatrix;
    struct Vec4 rot;
};

/* a level volume the cameras test against (DL's CamCollGridPrim) */
struct CamCollGridPrim {
    struct Vec4 bsphere;              /* 0x00 */
    int type;                         /* 0x10  3 cuboid, 5 sphere, 6 cylinder, 7 pill */
    int index;                        /* 0x14  in Cuboids, Spheres, Cylinders or g_Pills */
    int flags;                        /* 0x18 */
    int iValue;                       /* 0x1c */
    float fValue;                     /* 0x20 */
    int pad[3];
};

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

typedef void (*CamPostUpdFunc)(void);

// ---- globals
extern UpdateCam BackupCam; /* 0x9519c0 */
extern int CAMERA_COLL_BUMP_FLAGS; /* 0x95408c */
extern int CAMERA_COLL_FLAGS; /* 0x954084 */
extern int CAMERA_COLL_SPHERE_FLAGS; /* 0x954088 */
extern undefined4 CamCollGrid; /* 0x954080 */
extern u8 CamControlCurrent[0x280]; /* 0x953860: the current camera's control state */ /* type set in global_types.tsv */
extern u8 CamControlLast[0x280]; /* 0x953ae0: the last camera's */ /* type set in global_types.tsv */
extern int CamPostUpdRoutineCnt; /* 0x954050 */
extern CamPostUpdFunc CamPostUpdRoutines[16]; /* 0x954010 */ /* type set in global_types.tsv */
extern CameraVTable g_CameraVTable[24]; /* 0x927208 */
extern int ControlMode; /* 0x95c5d4 */ /* type set in global_types.tsv */
extern undefined4 DAT_0071ea2c; /* 0x71ea2c */
extern undefined4 DAT_0071ea50; /* 0x71ea50 */
extern GAMECAMERA GameCamera; /* 0x9513c0 */
extern int ImportCameraCnt; /* 0x954058 */
extern undefined4 ImportCameras; /* 0x954054 */
extern undefined4 Reticule; /* 0x951780 */
extern UpdateCam UpdateCams[48]; /* 0x951a60 */
extern char UpdateCamsUsed[48]; /* 0x953fe0 */
extern u8 g_BackupCamControl[0x280]; /* 0x953d60: BackupCam's */ /* type set in global_types.tsv */
extern undefined4 g_Crosshair; /* 0x951980 */
extern CamCrosshair g_Crosshairs[3]; /* 0x9518c0: g_Crosshair of them queued */ /* type set in global_types.tsv */
extern int g_ReticuleActive; /* 0x951784 */ /* type set in global_types.tsv */
extern s16 g_ReticuleAlpha[16]; /* 0x951790: the reticule's 16 sprites (sprite 0 is the target itself) */ /* type set in global_types.tsv */
extern u32 g_ReticuleColor[16]; /* 0x9517d0 */ /* type set in global_types.tsv */
extern float g_ReticuleDist[16]; /* 0x951810: how far along the line from the screen center through the target */ /* type set in global_types.tsv */
extern int g_ReticuleDraw; /* 0x951788: draw the reticule this frame (nonzero) */ /* type set in global_types.tsv */
extern float g_ReticuleScale[16]; /* 0x951850 */ /* type set in global_types.tsv */
extern s16 g_ReticuleTex[16]; /* 0x9517b0: effect texture - 6 */ /* type set in global_types.tsv */

// ---- functions
void SECTION_HEADER_CAMERA(void);
void ____Cam_SetTweak_71ea50(float value);
void Camera_ClearPolar(float *pol);
void Cam_CopyRotWrapped(float wrap, float *dst, float *src);
void BackupCurrentCam(void);
void Camera_AddPostUpdFunc(void *func);
void ExecuteCamPostUpdFuncs(void);
UpdateCam *Camera_FindCameraOfType(int type);
UpdateCam *Camera_FindCameraOfImportIdx(int idx);
void Camera_FreeUpdateCam(UpdateCam *pCam);
float Cam_InterpValues(float current, float target, float gain, float damp, float limit, float *speed);
float Cam_InterpAngles(float current, float target, float gain, float damp, float limit, float *speed);
void Camera_DeactivateCurrent(void);
void Camera_handleCollWithHero(UpdateCam *pCam);
void Camera_runSetupToNewCam(UpdateCam *pCam);
void Camera_switchToNewCam(UpdateCam *pNewCam);
int Camera_ActivationCheckPriority(UpdateCam *pCam, UpdateCam *pCompare);
void Camera_Exit(UpdateCam *pCam);
int UpdateAllCameras(void);
void Camera_Pos2Polar3d(float *pol, float *pos, float *center, float *fwd, float *side, float *up);
void Camera_InitBlenderPolarHero(void);
void Camera_CopyLastQuatToPolar(void);
void Camera_CopyLastPolarToQuat(void);
void Camera_InitBlender(UpdateCam *pLast);
int Camera_BlendCamsPosQuat(UpdateCam *pCam, CamBlenderPosQuat *posData);
int Camera_BlendCamsPolQuat(UpdateCam *pCam, CamBlenderPolarQuat *polar);
void Camera_BlendCams(UpdateCam *pCurr);
void HandleCameraShake(CamOffsetRec *pShk, int dir);
void Camera_UpdateHeroInfo(void);
void Camera_UpdateUnderWater(void);
void Camera_SetCollFlags(void);
void Camera_HandleScreenFade(void);
void Camera_UpdateFog(float *pos);
void UpdateCamera(void);
int Camera_GetFuncIdx(int type);
void Camera_resetToFollow(void);
void InitCameras(void);
void Camera_Polar2Pos(float *pos, float *pol, float *center);
int Camera_Pos2Polar(float *pol, float *pos, float *center);
void Camera_CollSphereBump(float radius, float *pos);
void Camera_CreateReticule(MobyInstance *pMoby);
void Camera_DestroyReticule(MobyInstance *pMoby);
void Camera_ClearReticule(void);
void Camera_DrawReticule(void);
void DrawCrosshairSprite(float x, float y, CamCrosshair *crosshair);
void ClearTargetCrosshair(void);
void DrawTargetCrosshair(float size, float rotAmt, float segmentRot, MobyInstance *pTarget, u32 color, Vec4 *pos, int tex, int style);
void TargetCrosshairDraw(void);
int camera_IsPntInCollPrim(float radius, Vec4 point, CamCollGridPrim *prim);
CamCollGridPrim *CamCollGrid_FindPrimAtPnt(float radius, Vec4 point);
