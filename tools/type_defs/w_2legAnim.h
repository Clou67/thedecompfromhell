/* one animation of a two-legged walker (w_2legData.anims[]), DL's w_2legAnim. The frames are
   in the animation's own numbering; walk_init2LegAnim fills frame0, frames, speed and the two
   Range pairs from the Down/Up frames. Index [0]/[1] = leg 0/leg 1. */
struct w_2legAnim {
    int anim;                /* 0x00  sequence; < 0 is invalid */
    float stride;            /* 0x04  distance covered by one cycle */
    float speed;             /* 0x08  stride / (2 * frames) per frame (filled in) */
    float frame0;            /* 0x0c  first frame (filled in) */
    float frames;            /* 0x10  cycle length (filled in) */
    int fromIdle;            /* 0x14  the frame to enter the animation at from standing */
    float move1Reset;        /* 0x18  frames the move joints touch down on when no foot does */
    float move2Reset;        /* 0x1c */
    float heelRange[2];      /* 0x20  frames the heel is down for (filled in) */
    float heelDown[2];       /* 0x28 */
    float heelUp[2];         /* 0x30 */
    float footRange[2];      /* 0x38  frames the foot is down for (filled in) */
    float footDown[2];       /* 0x40 */
    float footUp[2];         /* 0x48 */
};
