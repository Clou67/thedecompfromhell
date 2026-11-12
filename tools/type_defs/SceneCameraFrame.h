/* one camera frame of a space scene (title screen and ship cutscenes) */
typedef struct SceneCameraFrame {
    float x, y, z;
    u8 flags[4];                /* 0x0c  copied to GameCamera; the first byte is returned */
    float rotX, rotY, rotZ;     /* 0x10 */
    float xratio;               /* 0x1c  the ship cutscenes set the view's xratio from it */
} SceneCameraFrame;
