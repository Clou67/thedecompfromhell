#pragma once
// game/mobyproc.h
#include "types.h"
#include "game/mobyfunc.h"
#include "game/path.h"

// ---- types
struct Blender {
    struct Mtx4 invMatrix;
    struct ABGR ambientA;
    struct ABGR ambientB;
    struct ABGR dLightA;
    struct ABGR dLightB;
    u32 flags;
    struct ABGR fogColor1;
    struct ABGR fogColor2;
    float fogNearDist1;
    float fogNearIntensity1;
    float fogFarDist1;
    float fogFarIntensity1;
    float fogNearDist2;
    float fogNearIntensity2;
    float fogFarDist2;
    float fogFarIntensity2;
    undefined4 unk;
};

struct DirectionalLight {
    struct Vec4 color1;
    struct Vec4 direction1;
    struct Vec4 color2;
    struct Vec4 direction2;
};

/* an AnimLayer's joint entry (48 bytes, in its jointBuf) */
typedef struct AnimLayerJoint {
    Vec4 rot;                /* 0x00 */
    float scale[3];          /* 0x10 */
    int changed;             /* 0x1c */
    float trans[3];          /* 0x20 */
    int joint;               /* 0x2c  the joint it poses */
} AnimLayerJoint;
typedef char AnimLayerJoint_size_check[sizeof(AnimLayerJoint) == 0x30 ? 1 : -1];

/* a joint's pose (64 bytes a joint in the pose buffers) */
typedef struct JointPose {
    Vec4 rot;                /* 0x00  quaternion */
    float scale[3];          /* 0x10 */
    int changed;             /* 0x1c  set: the joint is posed this frame */
    float trans[3];          /* 0x20 */
    u32 parent;              /* 0x2c  the parent joint's byte offset (index * 64), 0 = root */
    Vec4 unk30;
} JointPose;
typedef char JointPose_size_check[sizeof(JointPose) == 0x40 ? 1 : -1];

// ---- globals
extern undefined4 DAT_00a15f64; /* 0xa15f64 */
extern undefined4 DAT_00a34600; /* no defined data */
extern undefined1 DAT_00a34700; /* 0xa34700 */
extern undefined1 DAT_00a3477f; /* 0xa3477f */
extern undefined1 DAT_00a34780; /* 0xa34780 */
extern DirectionalLight DirectionalLights[16]; /* 0xa1db00 */ /* type set in global_types.tsv */
extern u32 MobyGridAlloc[24]; /* 0xa49120: which blocks of g_MobyGridLists are used, a bit each */ /* type set in global_types.tsv */
extern undefined4 _DAT_000f5ad0; /* direct read */
extern undefined4 _DAT_000f5af0; /* direct read */
extern undefined4 _DAT_000f5b00; /* direct read */
extern undefined4 _DAT_000f5b10; /* direct read */
extern undefined4 _DAT_000f5b20; /* direct read */
extern undefined4 _DAT_000f5b30; /* direct read */
extern undefined4 _DAT_000f5b40; /* direct read */
extern undefined4 _DAT_000f5b50; /* direct read */
extern undefined4 _DAT_000f5b60; /* direct read */
extern undefined4 _DAT_000f5b70; /* direct read */
extern undefined4 _DAT_000f7ae0; /* direct read */
extern Mtx4 g_AnimJointMats[128]; /* 0xa4db40: joint matrices from AnimResolveMats */ /* type set in global_types.tsv */
extern JointPose g_AnimPoses[129]; /* 0xa4fb80: joint poses from AnimDecompInterp, changed by the anim layers and manipulators */ /* type set in global_types.tsv */
extern Blender g_Blenders[32]; /* 0xa1cb00 */
extern undefined4 g_CurrentBlender; /* 0x7291a4 */
extern short g_MobyGridLists[1536][16]; /* 0xa3d120: the moby grid cells' lists, 32-byte blocks of 16 moby indices */ /* type set in global_types.tsv */
extern int g_MobyProcSectionWord; /* 0x72910c */ /* type set in global_types.tsv */

// ---- functions
void SECTION_HEADER_MOBYPROC(void);
void SetMobyLights(MobyInstance *moby, int ambient, int light1, int light2, int blend);
void SetMobyAmbientLights(MobyInstance *moby, u64 red, u64 green, u64 blue);
void GetMobyAmbientLights(MobyInstance *moby, u32 *red, u32 *green, u32 *blue);
void GetMobyLightVector(MobyInstance *moby, Vec4 *out);
void GetMobyLightColor(MobyInstance *moby, Vec4 *out);
float DistBetweenMobyBspheres(BSphere *a, BSphere *b);
void MobyGrid_Free(int start, int count);
int MobyGrid_Alloc(int count);
void FreeMobyGridLists(MobyGridCell *cell);
void AllocMobyGridLists(MobyGridCell *cell);
u32 ByteSwap32(u64 value);
int MB_PointInByteRect(int x, int y, u32 rect);
void UpdateMobyGrids(MobyInstance *moby, u32 newRect);
void PostUpdateMobyBsphere(MobyInstance *moby, Mtx4 rot);
void PostUpdateMobyLockTransform(MobyInstance *moby);
void UpdateMobyTransform(MobyInstance *moby);
Mtx4 *AnimResolveMats(JointPose *pose, u32 count, u8 *posed);
void ProcessManipulators(Manipulator *manip, JointPose *poses);
void ProcessAnimLayers(AnimLayer *layer, JointPose *poses);
JointPose *AnimDecompInterp(float t, u32 count, u32 count2, Vec4 *bindTrans, MobyFrame *from, MobyFrame *to);
JointPose *MB_ComputeAnimDirect(MobyInstance *moby, u8 useLayers, u8 useManipulators);
JointPose *ComputeAnimation(MobyInstance *moby);
void Moby_BuildJointMatrices(MobyInstance *moby, int unused, Vec4 *out);
int STUB_000f5a74(...);
void STUB_000f5a7c(...);
void MB_DrawEntries(int param_1,uint param_2);
void MB_DrawEntryList(u8 *param_1,int param_2);
u8 *MB_BuildDrawEntry(MobyInstance *param_1,u8 *param_2,int param_3,int param_4);
int FindMobysCloseToUpdate(void);
void UpdateMobyAnimFrame(MobyInstance *param_1);
void MB_ProcessJoints(int param_1,undefined8 param_2);
void MB_ComputeSelectedJoints(MobyInstance *param_1,int param_2,int *param_3,Mtx4 *param_4);
void MB_ComputeSelectedJointPos(MobyInstance *param_1,int param_2,int *param_3,Vec4 *param_4);
undefined8 GetBlenderAtPnt(Vec4 *position,float *outBlend,int *outBlender);
void SetMobyLightFromBlender(MobyInstance *moby);
void STUB_000fa910(...);
void * InterpolateAnimation(int param_1,uint param_2);
void MB_AnimLayerBlend(struct AnimLayer *param_1);
