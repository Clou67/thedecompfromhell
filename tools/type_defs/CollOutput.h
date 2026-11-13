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
