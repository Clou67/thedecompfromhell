/* a camera placed in the level (ImportCameras, 0x20 each) */
struct ImportCamera {
    struct Vec3 pos;                  /* 0x00 */
    int type;                         /* 0x0c */
    struct Vec3 rot;                  /* 0x10 */
    struct CameraImportVars *pVar;    /* 0x1c */
};
