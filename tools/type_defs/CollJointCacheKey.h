/* one slot of the moby joint-matrix cache (8 at 0xa109c0; the matrices are in
   g_CollMobyJointCache, 0x7fc bytes per slot) */
typedef struct CollJointCacheKey {
    int handle;              /* MobyInstance.handle of the moby cached */
    int collCount;           /* g_CollOutput.collCount when it was built */
} CollJointCacheKey;
