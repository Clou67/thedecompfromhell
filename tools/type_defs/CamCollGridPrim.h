/* a level volume the cameras test against (DL's CamCollGridPrim) */
struct CamCollGridPrim {
    struct Vec4 bsphere;              /* 0x00 */
    int type;                         /* 0x10  3 cuboid, 5 sphere, 6 cylinder, 7 pill */
    int index;                        /* 0x14  in Cuboids, Spheres, Cylinders or g_Pills */
    int flags;                        /* 0x18 */
    int iValue;                       /* 0x1c */
    float fValue;                     /* 0x20 */
    int pad[3];
};
