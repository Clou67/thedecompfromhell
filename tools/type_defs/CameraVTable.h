/* one camera type's handlers (g_CameraVTable, indexed by UpdateCam.funcIdx); each a function
   (activate: int (UpdateCam *, UpdateCam *) -> 1 activate, -1 never, else the generic test;
   the rest: void (UpdateCam *)) */
struct CameraVTable {
    int type;                         /* 0x00 */
    void *activate;                   /* 0x04 */
    void *init;                       /* 0x08  on becoming current */
    void *update;                     /* 0x0c */
    void *exit;                       /* 0x10  run on the current camera before each frame's activation checks */
};
