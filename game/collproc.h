#pragma once
// game/collproc.h
#include "types.h"
#include "game/mobyfunc.h"

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

/* Per-query best-hit record filled by the tri/sphere tests. poly: env = collType+0x1000, moby =
   -index (the moby tri or prim). t = hit fraction (line) or dist^2 (sphere); a test only
   replaces the record when it is closer. The tri tests also store the triangle. */
struct CollHit {
    int poly;                         /* 0x00 */
    struct MobyInstance *moby;        /* 0x04 */
    float t;                          /* 0x08 */
    float ip[3];                      /* 0x0c */
    float normal[3];                  /* 0x18 */
    float v0[3];                      /* 0x24 */
    float v1[3];                      /* 0x30 */
    float v2[3];                      /* 0x3c */
};

struct CollMobyVertCacheEntry { /* Cache of world-transformed moby collision verts for meshes with >150 verts (8 entries at 0x9540c0). Reused while the 3x3 matrix is unchanged. */
    int oClass;
    float mtx[9];
    float verts[768];
};

/* the result of the last collision query (g_CollOutput @0xa10940), plus the collision system's
   bookkeeping: the env grid and the moby joint-matrix cache */
struct CollOutput {
    void *grid;                       /* 0x00  the env collision grid (CollGridLevel) */
    u8 *jointCache;                   /* 0x04  g_CollMobyJointCache */
    struct CollJointCacheKey *jointCacheKeys; /* 0x08  g_CollJointCacheKeys */
    int jointCacheNext;               /* 0x0c  the next slot CollMoby_GetJointCache replaces */
    int collCount;                    /* 0x10  bumped by each query */
    int damageNext;                   /* 0x14  the next CollDamage slot */
    struct MobyInstance *pMoby;       /* 0x18  the moby hit, or NULL for the env */
    int poly;                         /* 0x1c  CollHit.poly of the hit */
    struct Vec4 ip;                   /* 0x20  the hit point */
    struct Vec4 push;                 /* 0x30  where a sphere/pill query pushed its centre to */
    struct Vec4 normal;               /* 0x40 */
    struct Vec4 v0;                   /* 0x50  the triangle hit */
    struct Vec4 v1;                   /* 0x60 */
    struct Vec4 v2;                   /* 0x70 */
};

/* an axis-aligned box, passed by value to the per-vertex outcode tests (outcode bits: 0/1 x
   below min/above max, 8/9 y, 16/17 z) */
typedef struct CollBox {
    Vec4 min;
    Vec4 max;
} CollBox;

/* the env cells a line crosses, in order (CollLine walks the line through the 4-unit grid):
   the line fraction where it enters the cell, and the cell's grid index. The last entry's t is
   1. CollLine then reuses the list for the line's moby grid cells (as u32 keys). */
typedef struct CollCellStep {
    float t;                 /* 0x00 */
    u8 x;                    /* 0x04 */
    u8 y;                    /* 0x05 */
    u8 z;                    /* 0x06 */
    u8 pad;                  /* 0x07 */
} CollCellStep;

/* the damage a collision query deals (Coll_AddDamage copies it into CollDamage[]) */
typedef struct CollDamageIn {
    Vec4 impact;                      /* 0x00 */
    struct MobyInstance *pDamager;    /* 0x10 */
    u32 damageFlags;                  /* 0x14 */
    char damageClass;                 /* 0x18 */
    char damageStrength;              /* 0x19 */
    u16 damageIndex;                  /* 0x1a */
    float damageHp;                   /* 0x1c */
    u32 flags;                        /* 0x20 */
} CollDamageIn;

/* one slot of the moby joint-matrix cache (8 at 0xa109c0; the matrices are in
   g_CollMobyJointCache, 0x7fc bytes per slot) */
typedef struct CollJointCacheKey {
    int handle;              /* MobyInstance.handle of the moby cached */
    int collCount;           /* g_CollOutput.collCount when it was built */
} CollJointCacheKey;

/* a 3x3 rotation passed by value (rows of 3 floats): out = v0 * x + v1 * y + v2 * z */
typedef struct CollRot {
    Vec3 v0;
    Vec3 v1;
    Vec3 v2;
} CollRot;

// ---- globals
extern undefined4 DAT_0071eaa4; /* 0x71eaa4 */
extern CollJointCacheKey g_CollJointCacheKeys[8]; /* 0xa109c0 */ /* type set in global_types.tsv */
extern u8 g_CollMobyJointCache[8][0x7fc]; /* 0xa10a00: joint matrices of 8 mobys, for their collision prims */ /* type set in global_types.tsv */
extern CollMobyVertCacheEntry g_CollMobyVertCache[8]; /* 0x9540c0 */
extern MobyGridCell g_MobyGrid[4096]; /* 0xa39120 */

// ---- functions
void SECTION_HEADER_COLL(void);
undefined8 STUB_00055ab8_RET_0(...);
undefined8 STUB_00055ac0_RET_0(...);
undefined8 STUB_00055ac8_RET_0(...);
void Coll_ComputeVertOutcodes(float **outVerts, u32 *outcodes, float *verts, int count, CollBox box);
void Coll_AddDamage(MobyInstance *moby, CollDamageIn *damage, int poly);
void CollLineVsSphere(Vec4 sphere, Vec4 start, Vec4 delta, CollHit *hit, int index, MobyInstance *moby);
void CollLineVsTri(CollTri *tri, float *verts, u32 *outcodes, CollHit *hit, int vertCount, Vec3 origin, u32 flags, Vec4 delta, Vec4 start, Vec4 end, MobyInstance *moby);
void CollMoby_TransformVerts(MobyInstance *moby, CollBox box, CollRot rot, float *outVerts, u32 *outcodes, CollTri **outTris, int *outTriCount);
Vec4 *CollMoby_GetJointCache(MobyInstance *moby, int flags);
CollCell *CollGrid_GetCell(int x, int y, int z);
void CollLineVsEnv(CollHit *hit, u32 flags, Vec4 start, Vec4 end, Vec4 delta, CollCellStep *cells, int index, float t0);
int CollLine(float *from, float *to, u32 flags, MobyInstance *skip, CollDamageIn *damage);
void CollSphereVsSphere(float radius, float otherRadius, Vec3 centre, Vec3 other, CollHit *hit, int index, MobyInstance *moby);
void CollSphereVsTri(CollTri *tri, float *verts, u32 *outcodes, CollHit *hit, int vertCount, Vec3 origin, u32 flags, Vec4 centre, MobyInstance *moby);
int CollSphere(float radius, float *pos, void *unused, u32 flags, MobyInstance *skip);
void CollPillVsSphere(float radius, float otherRadius, float length, Vec3 base, Vec3 centre, CollHit *hit, int index, MobyInstance *moby);
void CollMobyVertCache_Reset(void);
void CollPillVsTri(float length, CollTri *tri, float *verts, u32 *outcodes, CollHit *hit, int vertCount, Vec3 origin, u32 flags, Vec4 base, int unused, MobyInstance *moby);
int CollPill(float radius, float length, float *pos, void *unused1, void *unused2, u32 flags, MobyInstance *skip);
int CollMobySphere(float radius, float *pos, void *unused, u32 flags, MobyInstance *skip, CollDamageIn *damage);
int CollHeroSphere(float radius, float *pos);
int CollGetMobyPoly(void);
int CollHotspot(void);
int CollSoundSurface(void);
int CollLineVsSphere_Out(float *from, float *to, float *sphere);
void STUB_000609e4(...);
