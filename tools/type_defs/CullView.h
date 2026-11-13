/* the view as the SPU culling jobs read it (g_CullView @0x95d200), filled by
   ComposeCameraMatrix and UpdateViewContext */
struct CullView {
    struct Mtx3 rot;                  /* 0x00  GameCamera.mtx0's rotation */
    struct Vec4 pos;                  /* 0x30  the camera position in 1/1024 units (Ghidra's CameraCollPos) */
    struct Vec4 ratio;                /* 0x40  xratio, yratio, xradpad, yradpad */
    struct Vec4 iguard;               /* 0x50  g_ViewContext.iguard */
    struct Vec4 sphereCheckA;         /* 0x60 */
    struct Vec4 sphereCheckB;         /* 0x70 */
};
