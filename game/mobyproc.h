#pragma once
// game/mobyproc.h
#include "types.h"
#include "game/mobyfunc.h"
#include "game/path.h"
#include "game/vendor.h"

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

// ---- globals
extern undefined4 DAT_0072910c; /* 0x72910c */
extern undefined4 DAT_00a15f64; /* 0xa15f64 */
extern undefined1 DAT_00a34700; /* 0xa34700 */
extern undefined1 DAT_00a3477f; /* 0xa3477f */
extern undefined1 DAT_00a34780; /* 0xa34780 */
extern undefined4 DAT_00a4db40; /* no defined data */
extern undefined4 DAT_00a4db50; /* no defined data */
extern undefined4 DAT_00a4db60; /* no defined data */
extern undefined4 DAT_00a4db70; /* no defined data */
extern undefined4 DAT_00a4fb80; /* 0xa4fb80 */
extern undefined4 DAT_00a4fb84; /* 0xa4fb84 */
extern undefined4 DAT_00a4fb88; /* 0xa4fb88 */
extern undefined4 DAT_00a4fb8c; /* 0xa4fb8c */
extern DirectionalLight DirectionalLights[16]; /* 0xa1db00 */ /* type set in global_types.tsv */
extern undefined4 MobyGridAlloc; /* 0xa49120 */
extern undefined4 _DAT_000f3fc0; /* direct read */
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
extern Blender g_Blenders[32]; /* 0xa1cb00 */
extern undefined4 g_CurrentBlender; /* 0x7291a4 */
extern MobyGridCell g_MobyGrid[4096]; /* 0xa39120 */
extern undefined4 g_MobyGridLists; /* 0xa3d120 */

// ---- functions
void SECTION_HEADER_MOBYPROC(void);
void MB_SetLights(MobyInstance *param_1,int param_2,int param_3,int param_4,int param_5);
void SetColorOfMoby (MobyInstance *param_1,longlong param_2,longlong param_3,longlong param_4);
void MB_GetLights(int param_1,uint *param_2,uint *param_3,uint *param_4);
void MB_GetLightDirection(MobyInstance *param_1,Vec4 *param_2);
void MB_GetLightColor(int param_1,float *param_2);
double MB_BSphereGap(float *param_1,float *param_2);
void MobyGrid_Free(int start,int count);
int MobyGrid_Alloc(int count);
void FreeMobyGridLists(short *param_1);
void AllocMobyGridLists(short *param_1);
undefined4 ByteSwap32(undefined8 param_1);
undefined8 MB_PointInByteRect(char param_1,char param_2,undefined4 param_3);
void UpdateMobyGrids(MobyInstance *moby,uint deletion_stamp);
void PostUpdateMobyBsphere (MobyInstance *moby,undefined8 param_2,undefined8 param_3,undefined8 param_4, longlong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
void PostUpdateMobyLockTransform(MobyInstance *pMoby);
void UpdateMobyTransform(MobyInstance *param_1);
undefined * MB_TransformJointBatch(int param_1,uint param_2,char *param_3);
void ProcessManipulators(Manipulator *param_1,int param_2);
void ProcessAnimLayers(MobyAnimLayer *pAnimLayer,int param_2);
undefined4 * MB_BlendJointFrames (double param_1,uint param_2,undefined8 param_3,int param_4,int param_5,int param_6);
undefined8 MB_ComputeAnimDirect(MobyInstance *param_1,char param_2,char param_3);
undefined8 ComputeAnimation(int param_1);
void Moby_BuildJointMatrices(MobyInstance *param_1,int param_2,Vec4 *param_3);
undefined8 STUB_000f5a74(...);
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
