#pragma once
// game/path.h
#include "types.h"
#include "game/camera.h"
#include "game/mobyfunc.h"

// ---- types
struct ABGR {
    u8 A;
    u8 B;
    u8 G;
    u8 R;
};

/* follows a Spline node by node (PathFollowUpdate) */
struct PathFollower {
    s32 idx;                 /* 0x00  the node being walked to */
    u8 direction;            /* 0x04  +1 / -1 (as s8) */
    u8 state;                /* 0x05  PATH_FOLLOW_* */
    u16 flags;               /* 0x06  & 3: PATH_MODE_* */
    float timer;             /* 0x08 */
    float distance;          /* 0x0c  to the node */
    struct Spline *pSpline;  /* 0x10 */
    s32 splineIdx;           /* 0x14  index into Splines */
    float head;              /* 0x18  heading to the node */
    int unk1c;               /* 0x1c  cleared when the walk starts */
};

struct Spawnpoint {
    struct Vec4 pos;
    struct Vec4 rot;
    struct ABGR colorReadOnly;
    struct ABGR light;
    undefined4 colorManipulator;
    undefined4 field5_0x2c;
    byte field6_0x30;
    byte field7_0x31;
    byte field8_0x32;
    byte field9_0x33;
    int heroType;
    struct MobyInstance *heroMobyPtr;
    int field12_0x3c;
};

// ---- globals
extern undefined4 DAT_007297a8; /* 0x7297a8 */

// ---- functions
void SECTION_HEADER_PATH(void);
int DrawPathDebug(float size, void *cam, int splineIdx, ABGR color, undefined8 unused, uint flags, int step);
void InitFollower(PathFollower *follower);
int PathFindClosestPnt(float distance, Vec4 *position, Spline *spline);
void PathFollowUpdate(float arrive, MobyInstance *moby, PathFollower *follower, w_2legData *pLD);
float ClosestPntOnSegmentAtDist(float radius, Vec4 *outPnt, Vec4 *prevPnt, Vec4 *pos, Vec4 *start, Vec4 *end);
float ClosestTOnSegment(float r, float *out_t, Vec4 *prev, Vec4 *pos, Vec4 *a, Vec4 *b);
float NearestPntOnPathAtDist(float radius, Vec4 *outPnt, Vec4 *prevPnt, Vec4 *pos, Spline *spline);
float NearestPntOnPath(float radius, int *outSeg, float *out, Vec4 *prevPnt, Vec4 *pos, Spline *spline);
void Path_InitFromMobyInstance(MobyInstance *moby, Spline *spline);
void Path_RaiseCollLine(float zOff, MobyInstance *moby, Vec4 *a, Vec4 *b);
int PathTryStep(MobyInstance *moby, Spline *spline);
int path__Path_RecordPnt(MobyInstance *moby, Spline *spline);
int32_t Path_TryExtrapolate(MobyInstance *moby, Spline *spline);
int GetPathPnt(float distance, MobyInstance *moby, Spline *spline, Vec4 *outPos, int segment, int step);
int Path_PickNextNode(MobyInstance *moby, Spline *spline, Vec4 *ref, Vec4 *out);
void PosRing_Init(double param_1,double param_2,double param_3,undefined4 *param_4, undefined1 *param_5,undefined1 param_6,undefined8 param_7,undefined4 param_8, undefined4 param_9);
undefined8 PosRing_CollLineSampled(int param_1,float *param_2,float *param_3);
ulonglong PosRing_IsIndexBefore(byte *param_1,ulonglong param_2,ulonglong param_3);
ulonglong PosRing_IsIndexBeforeWrapped(byte *param_1,ulonglong param_2,ulonglong param_3);
undefined8 PosRing_IsIndexOutsideRange(byte *param_1,byte param_2);
uint PosRing_NextIndexClamped(byte *param_1,uint param_2);
longlong PosRing_StepClearBack(undefined8 param_1,byte *param_2,byte *param_3);
void PosRing_FindClearPointFwd (byte *param_1,float *param_2,float *param_3,float *param_4,byte *param_5, undefined8 param_6);
longlong PosRing_StepClearFwd(undefined8 param_1,byte *param_2,byte *param_3);
void PosRing_FindClearPointBack (byte *param_1,float *param_2,float *param_3,float *param_4,byte *param_5, undefined8 param_6);
undefined8 PosRing_AddPoint(double param_1,undefined4 *param_2,byte *param_3);
uint PosRing_FindNearestClearPoint(float *param_1,byte *param_2);
longlong PosRing_FindLastClearFromTail(undefined8 param_1,byte *param_2);
longlong PosRing_FindLastClearFromHead(undefined8 param_1,byte *param_2);
void PosRing_DebugDraw(byte *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4);
Vec4 * PathFollower_GetPntPtr(PathFollower *follower,int idx);
int PathFollower_WrapIdx(PathFollower *follower,int idx);
s32 PathFollower_Advance(PathFollower *follower);
void Spline_CalcTan (float tension,float bias,Vec4 *out,PathFollower *follower,undefined8 param_5, float param_6,int offs);
void Spline_Hermite(float t,Vec4 *out,Vec4 *p0,Vec4 *p1,Vec4 *m0,Vec4 *m1);
void Angle_ApproachWrapped(float from,float to,float rate);
double Spline_CalcLen (double tension,double bias,PathFollower *follower,undefined8 param_4, undefined8 param_5,double param_6,undefined8 param_7);
void PathFollower_DebugDrawTangents (double param_1,double param_2,PathFollower *param_3,undefined8 param_4, undefined8 param_5,double param_6);
