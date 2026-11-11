struct TieInstance {           /* 0x70 */
    char _unknown_00[64];
    struct BSphere bSphere;    /* 0x40 */
    char field2_0x50[8];
    char occlIndex[5];         /* 0x58 */
    char dir_lights_upd;       /* 0x5d  set when no point light is left on it (DetachPointLight) */
    char _unknown_5e[11];
    ushort point_lights;       /* 0x6a  four 4-bit point light slots, 0xf = empty */
    char _unknown_6c[4];
};
