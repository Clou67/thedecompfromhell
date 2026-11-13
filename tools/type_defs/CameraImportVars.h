/* the pvars every imported camera starts with (the rest depend on its type) */
struct CameraImportVars {
    u8 _pad00[4];
    struct UpdateCam *pCam;           /* 0x04  set by InitCameras */
    u8 _pad08[4];
    int cuboid;                       /* 0x0c  activation volume (activationType 4) */
    u8 _pad10[0x0c];
    u8 priority;                      /* 0x1c */
    char blendMode;                   /* 0x1d  how the switch to it blends (CAM_BLEND_*) */
    u8 _pad1e;
    u8 activationType;                /* 0x1f */
    u8 _pad20[4];
    int grindPath;                    /* 0x24  the grind path it is for (type 3), or -1 */
};
