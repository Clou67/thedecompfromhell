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

/* a moby queued for drawing with its skeleton (MB_BuildDrawEntry fills it, MB_DrawEntries builds
   its joint matrices); 0xb0 bytes. Only what this code reads is named. */
typedef struct MobyDrawEntry {
    Mtx4 world;              /* 0x00 */
    Vec4 unk40;              /* 0x40 */
    u16 unk50;               /* 0x50 */
    u16 unk52;               /* 0x52 */
    u16 unk54;               /* 0x54 */
    u8 _pad56[2];
    float scale;             /* 0x58 */
    u32 unk5c;               /* 0x5c */
    void *unk60;             /* 0x60 */
    Mtx4 *jointMats;         /* 0x64  jointCount of them (or one, identity, with no joints) */
    u32 jointCount;          /* 0x68 */
    u32 lights[2];           /* 0x6c  the moby's colour/light words */
    float unk74;             /* 0x74 */
    float blend;             /* 0x78  between from and to */
    AnimLayer *layers;       /* 0x7c */
    Manipulator *manipulators; /* 0x80 */
    Vec4 *bindTrans;         /* 0x84  MobyClass.common_trans */
    Mtx4 *bindMats;          /* 0x88  MobyClass.skeleton: applied last to each joint matrix */
    MobyFrame *from;         /* 0x8c */
    MobyFrame *to;           /* 0x90 */
    u8 linearRot;            /* 0x94  the frames are neighbours: rotations blended plainly */
    u8 unk95;                /* 0x95 */
    s16 unk96;               /* 0x96 */
    float unk98;             /* 0x98 */
    float unk9c;             /* 0x9c */
    MobyInstance *moby;      /* 0xa0 */
    u8 _padA4[12];
} MobyDrawEntry;
typedef char MobyDrawEntry_size_check[sizeof(MobyDrawEntry) == 0xb0 ? 1 : -1];

// ---- globals
extern undefined4 DAT_00a34600; /* no defined data */
extern undefined1 DAT_00a34700; /* 0xa34700 */
extern undefined1 DAT_00a3477f; /* 0xa3477f */
extern undefined1 DAT_00a34780; /* 0xa34780 */
extern DirectionalLight DirectionalLights[16]; /* 0xa1db00 */ /* type set in global_types.tsv */
extern u32 MobyGridAlloc[24]; /* 0xa49120: which blocks of g_MobyGridLists are used, a bit each */ /* type set in global_types.tsv */
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
void MB_DrawEntries(MobyDrawEntry *entry, u32 count);
void MB_DrawEntryList(u8 *entries, int count);
u8 *MB_BuildDrawEntry(MobyInstance *moby, u8 *entryList, int count, int unused);
MobyInstance *BuildMobyUpdateChain(void);
void UpdateMobyAnimFrame(MobyInstance *param_1);
void MB_ProcessJoints(int param_1,undefined8 param_2);
void MB_ComputeSelectedJoints(MobyInstance *param_1,int param_2,int *param_3,Mtx4 *param_4);
void MB_ComputeSelectedJointPos(MobyInstance *param_1,int param_2,int *param_3,Vec4 *param_4);
undefined8 GetBlenderAtPnt(Vec4 *position,float *outBlend,int *outBlender);
void SetMobyLightFromBlender(MobyInstance *moby);
void STUB_000fa910(...);
void * InterpolateAnimation(int param_1,uint param_2);
void MB_AnimLayerBlend(struct AnimLayer *param_1);
