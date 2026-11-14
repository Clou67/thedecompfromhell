/* one moby's entry in the shadow list (g_MobyShadowList): a header and primCnt shape records
   after it (type 0: 0x20 bytes, type 1: 0x30). The list ends with primCnt 0. DL's name,
   RaC1's layout; field names partly invented. */
struct ShadowMoby {
    int primCnt;               /* 0x00 */
    int value;                 /* 0x04  passed to a stubbed function */
    float unk08;               /* 0x08 */
    float unk0c;               /* 0x0c */
    struct Vec4 dir;           /* 0x10  the light direction */
};
_Static_assert(sizeof(struct ShadowMoby) == 0x20, "ShadowMoby");
