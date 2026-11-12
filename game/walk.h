#pragma once
// game/walk.h
#include "types.h"

// ---- types
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

/* one leg of a two-legged walker, DL's w_legData (0xb0 bytes). The hip and ankle manipulators
   twist the leg so the foot keeps pointing where it was planted. */
struct w_legData {
    char jiFoot;             /* 0x00  joints */
    char jiHeel;             /* 0x01 */
    char jiAnkle;            /* 0x02 */
    char jiHip;              /* 0x03 */
    short idle;              /* 0x04  (unused here) */
    short _2mainIdle;        /* 0x06  (unused here) */
    float frDest;            /* 0x08  the yaw the foot was planted with */
    float arAct;             /* 0x0c  ankle twist */
    float arSpeed;           /* 0x10 */
    float hrAct;             /* 0x14  hip twist */
    float hrSpeed;           /* 0x18 */
    float twistLow;          /* 0x1c  limits of both twists */
    float twistHigh;         /* 0x20 */
    int pad[3];              /* 0x24 */
    struct Manipulator MAnkle; /* 0x30 */
    struct Manipulator MHip;   /* 0x70 */
};

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

// ---- globals
extern undefined4 DAT_0073a82c; /* 0x73a82c */
extern int g_WalkAnimState[13]; /* 0x73a8a4: the WALK_STATE_* for each anims[] index (Walk_ResetLegState) */ /* type set in global_types.tsv */
extern int g_WalkStateAnim[21]; /* 0x73a850: the w_2legData.anims[] index each WALK_STATE_* plays (-1 none) */ /* type set in global_types.tsv */

// ---- functions
void SECTION_HEADER_WALK(void);
float GetGroundZ_Unused(Vec4 *pos);
void walk_SetupTwistVals(MobyInstance *moby, w_2legData *pLD);
int32_t walk_init2LegAnim(MobyInstance *moby, w_2legData *pLD);
u32 Walk_GetLegRangeMask(float frame, w_2legAnim *pLA);
u32 Walk_GetLegRangeMaskForAnim(float frame, MobyInstance *moby, w_2legData *pLD);
int Walk_SolveLegGroundContact(MobyInstance *moby, w_2legData *pLD);
void Walk_ResetLegTwist(w_2legData *pLD);
void Walk_UpdateLegRotations(MobyInstance *moby, w_2legData *pLD, u32 contacts);
float Walk_SolveStepTiming(MobyInstance *moby, w_2legData *pLD);
void Walk_UpdateStateMachine(float speed, float angle, float accel, MobyInstance *moby, w_2legData *pLD, u32 contacts);
u32 walk_Update(float speed, float angle, float accel, MobyInstance *moby, w_2legData *pLD);
void Walk_ResetLegState(MobyInstance *moby, w_2legData *pLD);
int walk_WalkToPos(float speed, MobyInstance *moby, Vec4 *target, w_2legData *pLD);
int walk_TurnToAngle(float angle, float speed, MobyInstance *moby, w_2legData *pLD);
