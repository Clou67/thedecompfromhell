/* a camera shake (DL's CameraShake): strength fades out with the square of the time left */
struct CamOffsetRec {
    float strength;                   /* 0x00 */
    float adjust;                     /* 0x04  this frame's offset */
    int time;                         /* 0x08  frames left */
    int div;                          /* 0x0c  the longest time it was set to */
};
