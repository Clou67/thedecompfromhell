#pragma once
// game/collproc.h
#include "types.h"

// ---- types
typedef enum COLL_FLAGS {
    COLL_NO_ENV=1,
    COLL_MESH_ONLY=2,
    COLL_ALT_PRIMSET=4,
    COLL_DAMAGEABLE_ONLY=8,
    COLL_DOUBLE_SIDED=16,
    COLL_IGNORE_MATERIAL=32,
    COLL_CAMERA=128
} COLL_FLAGS;

typedef enum COLL_MATERIAL {
    COLL_WATER=0,
    COLL_LAVA=1,
    COLL_MAGNETIC_RAMP=2,
    COLL_MUD_QUICKSAND=3,
    COLL_WATER_SLIDE=4,
    COLL_GRINDRAIL_HOVERBOARD_RAMP=5,
    COLL_SPIDERBOT_TUNNEL=6,
    COLL_ICE_SLIDING=7,
    COLL_SLIDING_OFF=8,
    COLL_NO_LEDGE_GRAB=9,
    COLL_NO_WALL_JUMP=10,
    COLL_DEATH_MUD=11,
    COLL_SLIDING_OFF_NO_WALLJUMP_LEDGE=12,
    COLL_DEATH_ICE=13,
    COLL_WATER_RIPPLES=14,
    COLL_WALL_JUMP=15,
    COLL_MAGNETIC_ELECTRIC_RAMP=17,
    COLL_CRASHSITE_RAMP=18,
    COLL_DEFAULT=31
} COLL_MATERIAL;

struct CollCell { /* Env collision cell header. Followed by float verts[vertCount][3] (cell-local, (world - cellCenter)*1024, cellCenter = 4*idx+2), CollTri tris[faceCount], char quadV3[quadCount] (first quadCount tris are quads). */
    short faceCount;
    char vertCount;
    char quadCount;
};

struct CollDamageOut {
    struct Vec4 ip_q;
    struct Vec4 impact;
    struct MobyInstance *pDamager;
    uint damageFlags;
    char damageClass;
    char damageStrength;
    u16 damageIndex;
    float damageHp;
    u32 unk30_flags_q;
    struct MobyInstance *pVictimMoby;
    char padding[8];
};

struct CollGridLevel { /* One level of the env collision grid (z, y or x). shift = first cell index, count = number of cells, followed by count int offsets (relative to grid base) to the next level / CollCell. 0 = empty. Cells are 4 world units. */
    short shift;
    short count;
    int offsets[1];
};

struct CollHit { /* Per-query best-hit record filled by the tri/sphere tests. poly: env = collType+0x1000, moby = -triIndex. t = hit fraction (line) or dist^2 (sphere). */
    int poly;
    struct MobyInstance *moby;
    float t;
    float ip[3];
    float normal[3];
};

struct CollMobyVertCacheEntry { /* Cache of world-transformed moby collision verts for meshes with >150 verts (8 entries at 0x9540c0). Reused while the 3x3 matrix is unchanged. */
    int oClass;
    float mtx[9];
    float verts[768];
};

// ---- globals
extern undefined4 DAT_0071eaa4; /* 0x71eaa4 */
extern undefined MobyClassRef; /* 0xa109c0 */
extern undefined g_CollMobyJointCache; /* 0xa10a00 */
extern CollMobyVertCacheEntry g_CollMobyVertCache[8]; /* 0x9540c0 */
extern MobyGridCell g_MobyGrid[4096]; /* 0xa39120 */

// ---- functions
void SECTION_HEADER_COLL(void);
undefined8 STUB_00055ab8_RET_0(...);
undefined8 STUB_00055ac0_RET_0(...);
undefined8 STUB_00055ac8_RET_0(...);
void Coll_ComputeVertOutcodes (undefined4 *param_1,int param_2,float *param_3,int param_4,undefined8 param_5, undefined8 param_6,undefined8 param_7,undefined8 param_8);
void Coll_AddDamage(MobyInstance *param_1,float *param_2,int param_3);
void CollLineVsSphere (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,int *param_7,int param_8);
void CollLineVsTri (byte *param_1,int param_2,int param_3,int *param_4,undefined8 param_5, undefined8 param_6,undefined8 param_7,uint param_8);
ulonglong CollMoby_TransformVerts (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
ulonglong CollMoby_GetJointCache(int param_1,undefined8 param_2);
CollCell * CollGrid_GetCell(int x,int y,int z);
void CollLineVsEnv (double param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8, undefined8 param_9);
undefined8 CollLine(float *param_1,float *param_2,ulonglong param_3,undefined8 param_4, undefined8 param_5);
void CollSphereVsSphere (double param_1,double param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8, int *param_9,int param_10);
void CollSphereVsTri (byte *param_1,int param_2,int param_3,int *param_4,undefined8 param_5, undefined8 param_6,undefined8 param_7,uint param_8);
undefined8 CollSphere (ulonglong param_1,float *param_2,undefined8 param_3,uint param_4,ulonglong param_5);
void CollPillVsSphere (double param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5, undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9, int *param_10,int param_11);
void CollMobyVertCache_Reset(void);
void CollPillVsTri (double param_1,byte *param_2,int param_3,int param_4,int *param_5,undefined8 param_6 ,undefined8 param_7,undefined8 param_8,uint param_9);
undefined8 CollPill(double param_1,double param_2,float *param_3,undefined8 param_4, undefined8 param_5,uint param_6,ulonglong param_7);
undefined8 CollMobySphere (double param_1,float *param_2,undefined8 param_3,uint param_4,MobyInstance *param_5);
bool CollHeroSphere(double param_1,float *param_2);
int CollGetMobyPoly(void);
int CollHotspot(void);
int CollSoundSurface(void);
undefined8 CollLineVsSphere_Out(float *param_1,float *param_2,float *param_3);
void STUB_000609e4(...);
