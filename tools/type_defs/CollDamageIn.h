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
