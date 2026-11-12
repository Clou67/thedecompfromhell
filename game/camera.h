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

struct CamBlender {
    s16 state;
    u8 type;
    u8 reqType;
    u8 pad_04[12];
    u32 field_10;
    f32 quatInterp;
    f32 reqQuatInterpAdd;
    u32 field_1C;
    f32 posInterp;
    f32 reqPosInterpAdd;
    u8 pad_28[8];
    struct Vec4 pose1;
    struct Vec4 pose0;
    struct Vec4 activeCam0;
    struct Vec4 activeCam1;
    struct PolarSm polar;
    u32 blendStep;
    f32 blendStepInv;
    u32 reqInterpFrames;
    u8 pad_88[40];
    struct Vec4 blendWork;
    struct Vec4 pendingCam0;
    struct Vec4 pendingCam1;
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

struct CameraVTable {
    int type;
    void *activate;
    void *init;
    void *update;
    void *exit;
};

struct CamOffsetRec {
    float amp;
    float result;
    int total;
    int elapsed;
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

struct DirectionalLight {
    struct Vec4 color1;
    struct Vec4 direction1;
    struct Vec4 color2;
    struct Vec4 direction2;
};

struct GAMECAMERA {
    struct Mtx4 mtx0;
    struct Mtx4 matrix;
    struct Mtx4 mtx2;
    struct Mtx4 mtx3;
    struct Mtx4 mtx4;
    float posX;
    float posY;
    float posZ;
    char field8_0x14c[4];
    struct PolarSm rot;
    char field10_0x15c[4];
    struct CamOffsetRec offset0;
    struct CamOffsetRec offset1;
    void *pCurrentUpdCam;
    void *pLastUpdCam;
    char field15_0x188[40];
    float field16_0x1b0;
    char field17_0x1b4[164];
    float screenFade;
    char field19_0x25c[20];
    struct CamBlender blender;
    struct CameraMatrix orientMtx;
    char field22_0x390[4];
    u32 camUnderWater;
    u32 camTimer;
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

struct ScreenVBEffect {
    u32 enabled;
    u32 bkgColor;
    u64 bkgAlpha;
    s32 aLines;
    u32 aColor;
    u64 aAlpha;
    s32 bLines;
    u32 bColor;
    u64 bAlpha;
};

struct Sphere {
    struct Mtx3 matrix;
    struct Vec4 pos;
    struct Mtx3 imatrix;
    struct Vec4 rot;
};

struct ViewContext {
    u32 pad_00[16];
    struct CameraMatrix field_40;
    u32 pad_80[8];
    float nearClip;
    float farClip;
    float xclipratio;
    float yclipratio;
    float xratio;
    float yratio;
    float xradpad;
    float yradpad;
    struct CameraMatrix fMtx;
    struct CameraMatrix nfMtx;
    struct CameraMatrix hMtx;
    u32 pad_180[4];
    struct Vec4 fontClipScale;
    float hvdf[4];
    u32 pad_1B0[4];
    float guardX;
    u32 pad_1C4[15];
    float xpix;
    float ypix;
    float xclip;
    float yclip;
    float perspScale;
    float fog1;
    float fogNearDist;
    float fogFarDist;
    float fogMult;
    float fogAdd;
    float fogNearIntensity;
    float fogFarIntensity;
    int fogR;
    int fogG;
    int fogB;
    int occlColor0;
    int occlColor1;
    int occlColor2;
};

// ---- globals
extern UpdateCam BackupCam; /* 0x9519c0 */
extern int CAMERA_COLL_BUMP_FLAGS; /* 0x95408c */
extern int CAMERA_COLL_FLAGS; /* 0x954084 */
extern int CAMERA_COLL_SPHERE_FLAGS; /* 0x954088 */
extern undefined4 CamCollGrid; /* 0x954080 */
extern undefined CamControlCurrent; /* 0x953860 */
extern undefined CamControlLast; /* 0x953ae0 */
extern int CamPostUpdRoutineCnt; /* 0x954050 */
extern void * CamPostUpdRoutines[16]; /* 0x954010 */
extern CameraVTable g_CameraVTable[24]; /* 0x927208 */
extern int ControlMode; /* 0x95c5d4 */ /* type set in global_types.tsv */
extern Cylinder * Cylinders; /* 0xa51bd0 */
extern undefined4 DAT_00052b40; /* 0x52b40 */
extern undefined4 DAT_0071ea2c; /* 0x71ea2c */
extern undefined4 DAT_0071ea50; /* 0x71ea50 */
extern undefined4 DAT_007358c0; /* 0x7358c0 */
extern undefined4 DAT_007358c4; /* 0x7358c4 */
extern undefined4 DAT_007358c8; /* 0x7358c8 */
extern undefined4 DAT_007358cc; /* 0x7358cc */
extern undefined4 DAT_00808080; /* no defined data */
extern undefined4 DAT_00951784; /* 0x951784 */
extern undefined4 DAT_00951788; /* 0x951788 */
extern undefined2 DAT_00951790; /* 0x951790 */
extern undefined2 DAT_00951792; /* 0x951792 */
extern undefined2 DAT_009517b0; /* 0x9517b0 */
extern undefined2 DAT_009517b2; /* 0x9517b2 */
extern undefined4 DAT_009517d0; /* 0x9517d0 */
extern undefined4 DAT_009517d4; /* 0x9517d4 */
extern undefined4 DAT_00951810; /* 0x951810 */
extern undefined4 DAT_00951814; /* 0x951814 */
extern undefined4 DAT_00951850; /* 0x951850 */
extern undefined4 DAT_00951854; /* 0x951854 */
extern undefined4 DAT_009518c0; /* no defined data */
extern undefined4 DAT_009518e0; /* 0x9518e0 */
extern undefined2 DAT_009518e4; /* 0x9518e4 */
extern undefined4 DAT_00953d60; /* no defined data */
extern undefined4 DAT_00969e20; /* 0x969e20 */
extern undefined4 DAT_00969e24; /* 0x969e24 */
extern undefined4 DAT_00969e28; /* 0x969e28 */
extern undefined4 DAT_00969e2c; /* 0x969e2c */
extern GAMECAMERA GameCamera; /* 0x9513c0 */
extern int ImportCameraCnt; /* 0x954058 */
extern undefined4 ImportCameras; /* 0x954054 */
extern undefined4 Reticule; /* 0x951780 */
extern UpdateCam UpdateCams[48]; /* 0x951a60 */
extern char UpdateCamsUsed[48]; /* 0x953fe0 */
extern undefined4 g_Crosshair; /* 0x951980 */

// ---- functions
void SECTION_HEADER_CAMERA(void);
void ____Cam_SetTweak_71ea50(double param_1);
void Camera_ClearPolar(float *pol);
void Cam_CopyRotWrapped(float wrap,float *dst,float *src);
void BackupCurrentCam(void);
void Camera_AddPostUpdFunc(void *func);
void ExecuteCamPostUpdFuncs(void);
UpdateCam * Camera_FindCameraOfType(int type);
UpdateCam * Camera_FindCameraOfImportIdx(int idx);
void Camera_FreeUpdateCam(UpdateCam *pCam);
float Cam_InterpValues (float current,float target,float gain,float damp,float limit,float *speed);
void Cam_InterpAngles (double param_1,undefined8 param_2,double param_3,double param_4,double param_5, undefined8 param_6,undefined8 param_7,float *param_8);
void Camera_DeactivateCurrent(void);
void Camera_handleCollWithHero(UpdateCam *pCam);
void Camera_runSetupToNewCam(UpdateCam *pCam);
void Camera_switchToNewCam(UpdateCam *pNewCam);
int Camera_ActivationCheckPriority(UpdateCam *pCam,UpdateCam *pCompare);
void Camera_Exit(UpdateCam *pCam);
int UpdateAllCameras(void);
void Camera_Pos2Polar3d (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5, float *param_6);
void Camera_InitBlenderPolarHero(void);
void Camera_CopyLastQuatToPolar(void);
void Camera_CopyLastPolarToQuat(void);
void Camera_InitBlender(UpdateCam *pLast);
undefined8 Camera_BlendCamsPosQuat(int param_1,float *param_2);
undefined8 Camera_BlendCamsPolQuat(float *param_1,float *param_2);
void Camera_BlendCams(UpdateCam *pCurr);
void HandleCameraShake(void *pShk,int dir);
void Camera_UpdateHeroInfo(void);
void Camera_UpdateUnderWater(void);
void Camera_SetCollFlags(void);
void Camera_HandleScreenFade(void);
void Camera_UpdateFog(float *pos);
void UpdateCamera(void);
int Camera_GetFuncIdx(int type);
void Camera_resetToFollow(void);
void InitCameras(void);
void Camera_ClampAngles(float *param_1,float *param_2,float *param_3);
undefined8 ____Camera_CalcPolarToTarget(float *param_1,float *param_2,float *param_3);
void Camera_CollSphereBump(double param_1,float *param_2);
void Camera_CreateReticule(MobyInstance *pMoby);
void Camera_DestroyReticule(MobyInstance *pMoby);
void Camera_ClearReticule(void);
void Camera_DrawReticule(void);
void DrawCrosshairSprite (double param_1,double param_2,undefined8 param_3,undefined8 param_4,int param_5);
void ClearTargetCrosshair(void);
void DrawTargetCrosshair(float size,MobyInstance *pTarget,uint color,uint param_4);
void TargetCrosshairDraw(void);
bool camera_IsPntInCollPrim(double param_1,undefined8 param_2,undefined8 param_3,int param_4);
int * CamCollGrid_FindPrimAtPnt(double param_1,undefined8 param_2,undefined8 param_3);
