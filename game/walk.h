#pragma once
// game/walk.h
#include "types.h"
#include "game/mobyfunc.h"

// ---- types
struct w_2legAnim {
    int anim;
    float stride;
    float speed;
    float frame0;
    float frames;
    int fromIdle;
    float move1Reset;
    float move2Reset;
    float heelRange[2];
    float heelDown[2];
    float heelUp[2];
    float footRange[2];
    float footDown[2];
    float footUp[2];
};

struct w_2legData {
    struct vec4 fpos[6];
    struct vec4 jumpPos;
    struct w_2legAnim *anims[13];
    int pad[3];
    char idle;
    char stand;
    char jumpc;
    char rjumpc;
    char moveJoint1;
    char moveJoint2;
    char onground;
    char state;
    float yrot;
    float yrSpeed;
    float speed;
    float acc;
    float angVel;
    float angGain;
    float angDamp;
    float angLimit;
    float zVel;
    float grav;
    float stepHeight;
    float stepZ;
    float collZAdj;
    short counter;
    short flags;
    struct w_legData legs[2];
};

// ---- globals
extern undefined4 DAT_001766c4; /* 0x1766c4 */
extern undefined4 DAT_0017a1e8; /* 0x17a1e8 */
extern undefined4 DAT_0073a82c; /* 0x73a82c */
extern undefined4 DAT_0073a850; /* no defined data */
extern undefined4 DAT_0073a8a4; /* 0x73a8a4 */

// ---- functions
void SECTION_HEADER_WALK(void);
double GetGroundZ_Unused(void);
void walk_SetupTwistVals(MobyInstance *param_1,w_2legData *pLD);
int32_t walk_init2LegAnim(MobyInstance *moby,w_2legData *pLD);
uint Walk_GetLegRangeMask(double height,w_2legAnim *pLA);
ulonglong Walk_GetLegRangeMaskForAnim(undefined8 param_1,int param_2,int param_3);
undefined8 Walk_SolveLegGroundContact(MobyInstance *moby,w_2legData *pLd);
void Walk_ApplyLegQuatToEuler(int param_1);
void Walk_UpdateLegRotations(MobyInstance *moby,w_2legData *pLd,uint flags);
double Walk_SolveStepTiming(MobyInstance *moby,int param_2);
void Walk_UpdateStateMachine(double x,double y,double z,MobyInstance *moby,w_2legData *pLd);
ulonglong walk_Update(double x,double y,double z,MobyInstance *moby,w_2legData *pLD);
void Walk_ResetLegState(MobyInstance *moby,w_2legData *pLD);
undefined8 walk_WalkToPos(double x,MobyInstance *moby,float *param_3,w_2legData *pLD);
undefined8 walk_TurnToAngle (double param_1,undefined8 param_2,MobyInstance *moby,undefined8 param_4,w_2legData *pLD);
