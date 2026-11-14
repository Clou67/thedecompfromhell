#pragma once
// game/path.h
#include "types.h"

// ---- types
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
void PosRing_Init(float zOff, float maxDistXY, float maxDistZ, Vec4 *pos, PosRing *ring, int cap, int unused, MobyInstance *ignore0, MobyInstance *ignore1);
int PosRing_CollLineSampled(PosRing *ring, Vec4 *a, Vec4 *b);
int PosRing_IsIndexBefore(PosRing *ring, u8 a, u8 b);
int PosRing_IsIndexBeforeWrapped(PosRing *ring, u8 a, u8 b);
int PosRing_IsIndexOutsideRange(PosRing *ring, u8 idx);
int PosRing_NextIndexClamped(PosRing *ring, u8 idx);
int PosRing_StepClearBack(Vec4 *target, PosRing *ring, u8 *cursor);
void PosRing_FindClearPointFwd(float zOff, PosRing *ring, Vec4 *from, Vec4 *out, Vec4 *fallback, u8 *cursor, u8 *scan);
int PosRing_StepClearFwd(Vec4 *target, PosRing *ring, u8 *cursor);
void PosRing_FindClearPointBack(float zOff, PosRing *ring, Vec4 *from, Vec4 *out, Vec4 *fallback, u8 *cursor, u8 *scan);
int PosRing_AddPoint(float zOff, Vec4 *pos, PosRing *ring);
int PosRing_FindNearestClearPoint(Vec4 *pos, PosRing *ring);
int PosRing_FindLastClearFromTail(Vec4 *target, PosRing *ring);
int PosRing_FindLastClearFromHead(Vec4 *target, PosRing *ring);
void PosRing_DebugDraw(PosRing *ring, u8 r, u8 g, u8 b);
Vec4 *PathFollower_GetPntPtr(PathFollower *follower, int idx);
int PathFollower_WrapIdx(PathFollower *follower, int idx);
s32 PathFollower_Advance(PathFollower *follower);
void Spline_CalcTan(float tension, float bias, Vec4 *out, PathFollower *follower, int unused1, int unused2, int offs);
void Spline_Hermite(float t, Vec4 *out, Vec4 *p0, Vec4 *p1, Vec4 *m0, Vec4 *m1);
float Angle_ApproachWrapped(float from, float to, float rate);
float Spline_CalcLen(float tension, float bias, PathFollower *follower, int unused1, int unused2, int draw, int cam);
void PathFollower_DebugDrawTangents(float tension, float bias, PathFollower *follower);
