/* w_2legData.onground: which of the six tracked joints (fpos[]) are planted */
enum {
    WALK_CONTACT_FOOT0 = 0x01,
    WALK_CONTACT_HEEL0 = 0x02,
    WALK_CONTACT_FOOT1 = 0x04,
    WALK_CONTACT_HEEL1 = 0x08,
    WALK_CONTACT_MOVE1 = 0x10,   /* moveJoint1/2: what touches down when no foot does */
    WALK_CONTACT_MOVE2 = 0x20,
};

/* w_2legData.flags */
enum {
    WALK_FLAG_JUMP = 0x1,        /* set by the moby: jump to jumpPos at the next step */
    WALK_FLAG_JUMPING = 0x2,     /* taking off */
    WALK_FLAG_AIRBORNE = 0x4,    /* flying to jumpPos (jumpPos.w = heading) */
    WALK_FLAG_STEP_DOWN = 0x8,   /* stepping down: no snapping up to the ground */
};

/* w_2legData.state; the comment is the anims[] index it plays (g_WalkStateAnim) */
enum {
    WALK_STATE_IDLE = 0,         /* idle (the idle sequence) */
    WALK_STATE_WALK = 1,         /* 0 */
    WALK_STATE_UP_A = 2,         /* 1  stepping up */
    WALK_STATE_UP_B = 3,         /* 2 */
    WALK_STATE_UP_HIGH = 4,      /* 3 */
    WALK_STATE_UP_A_TOP = 5,     /* 1  back on level ground after stepping up */
    WALK_STATE_UP_B_TOP = 6,     /* 2 */
    WALK_STATE_DOWN_A = 7,       /* 4  stepping down */
    WALK_STATE_DOWN_B = 8,       /* 5 */
    WALK_STATE_DOWN_LOW = 9,     /* 6 */
    WALK_STATE_DOWN_A_END = 10,  /* 4  back on level ground after stepping down */
    WALK_STATE_DOWN_B_END = 11,  /* 5 */
    WALK_STATE_STOP = 12,        /* 8  goes straight to idle */
    WALK_STATE_RUN = 13,         /* 7 */
    WALK_STATE_JUMP_A = 14,      /* 9  taking off */
    WALK_STATE_JUMP_B = 15,      /* 11 */
    WALK_STATE_AIR = 16,         /* (rjumpc) */
    WALK_STATE_LAND_A = 17,      /* 10 */
    WALK_STATE_LAND_B = 18,      /* 12 */
    WALK_STATE_LANDED_A = 19,    /* 10 */
    WALK_STATE_LANDED_B = 20,    /* 12 */
};

/* a two-legged walker, DL's w_2legData (0x250 bytes; walk_init2LegAnim prints the size). The
   mobys that walk keep one in their pVars and fill in the joints, anims and tuning, then call
   walk_init2LegAnim; walk_Update moves them each frame. */
struct w_2legData {
    struct vec4 fpos[6];     /* 0x000  world positions of foot0, heel0, foot1, heel1, move1, move2 */
    struct vec4 jumpPos;     /* 0x060  where a jump lands; w = the jump's heading */
    struct w_2legAnim *anims[13]; /* 0x070  see WALK_STATE_* */
    int pad[3];              /* 0x0a4 */
    char idle;               /* 0x0b0  sequences */
    char stand;              /* 0x0b1 */
    char jumpc;              /* 0x0b2 */
    char rjumpc;             /* 0x0b3  the in-air sequence */
    char moveJoint1;         /* 0x0b4  joints */
    char moveJoint2;         /* 0x0b5 */
    char onground;           /* 0x0b6  WALK_CONTACT_* */
    char state;              /* 0x0b7  WALK_STATE_* */
    float yrot;              /* 0x0b8  the ground's pitch, which rotation.y follows */
    float yrSpeed;           /* 0x0bc */
    float speed;             /* 0x0c0 */
    float acc;               /* 0x0c4  most the speed changes per frame */
    float angVel;            /* 0x0c8  turning (rotation.z) */
    float angGain;           /* 0x0cc */
    float angDamp;           /* 0x0d0 */
    float angLimit;          /* 0x0d4 */
    float zVel;              /* 0x0d8 */
    float grav;              /* 0x0dc */
    float stepHeight;        /* 0x0e0 */
    float stepZ;             /* 0x0e4  ground height ahead of the leading foot */
    float collZAdj;          /* 0x0e8  raises the collision pill while stepping */
    short counter;           /* 0x0ec */
    short flags;             /* 0x0ee  WALK_FLAG_* */
    struct w_legData legs[2]; /* 0x0f0 */
};
