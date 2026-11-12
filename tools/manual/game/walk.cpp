#include "rc1.h"
#include "idol/fastinline.h"
// game/walk.cpp -- reconstructed from NPEA00385 EBOOT
// 15 functions, 0x175558-0x17b214: the two-legged walker (w_2legData). Each frame the planted
// feet stay where they are and the body follows them; the state machine picks the next
// animation (walk, run, stepping up and down, jumping) at the moment a foot touches down.

static inline MobySeq *AnimSeq(MobyInstance *moby, int anim)
{
    return moby->pClass->seqs[anim];
}

/* the joints fpos[] tracks, in order */
static inline void Walk_GetJoints(w_2legData *pLD, int *joints)
{
    joints[0] = (u8)pLD->legs[0].jiFoot;
    joints[1] = (u8)pLD->legs[0].jiHeel;
    joints[2] = (u8)pLD->legs[1].jiFoot;
    joints[3] = (u8)pLD->legs[1].jiHeel;
    joints[4] = (u8)pLD->moveJoint1;
    joints[5] = (u8)pLD->moveJoint2;
}

/* the anim of anims[] playing as updateId (the last match), or NULL */
static inline w_2legAnim *Walk_FindAnim(w_2legData *pLD, int seq)
{
    w_2legAnim *found = NULL;

    for (int i = 0; i < 13; i++) {
        if (seq == pLD->anims[i]->anim) {
            found = pLD->anims[i];
        }
    }

    return found;
}

/* the frame playing, counting a finished blend as past the end */
static inline float Walk_CurrentFrame(MobyInstance *moby)
{
    if (moby->updateId == 0xff) {
        return (float)FastIntToDouble(moby->animationFrame) + MB_GetAnimSeqLength(moby->mClass, moby->animationId);
    }

    return BlendAnimFrame(moby);
}

/* the yaw of the foot joint's matrix */
static inline float Walk_FootYaw(MobyInstance *moby, w_legData *leg)
{
    Mtx4 mtx;

    GetBoneTransformations(moby, (u8)leg->jiFoot, &mtx);
    return FastAtan2Inline(mtx.v1.y, mtx.v1.x);
}

/* reads where the joints are, plants each foot at its current yaw and attaches the hip and ankle
   manipulators */
static inline void Walk_SetupLegs(MobyInstance *moby, w_2legData *pLD)
{
    int joints[6];

    Walk_GetJoints(pLD, joints);
    GetMobyJointsWorldPos(moby, 6, joints, (Vec4 *)pLD->fpos);

    for (int i = 0; i < 2; i++) {
        w_legData *leg = &pLD->legs[i];

        leg->hrAct = 0.0f;
        leg->arAct = 0.0f;
        leg->frDest = Walk_FootYaw(moby, leg);

        if (leg->MHip.state == 0) {
            AttachManipulator(moby, (u8)leg->jiHip, &leg->MHip);
        }

        if (leg->MAnkle.state == 0) {
            AttachManipulator(moby, (u8)leg->jiAnkle, &leg->MAnkle);
        }
    }
}

/* plays anims[index] from frame start (wrapped into its cycle), blending over blend frames */
static void Walk_StartAnim(MobyInstance *moby, w_2legData *pLD, int index, int start, int blend, int state)
{
    w_2legAnim *anim = pLD->anims[index];
    int frames = FastDoubleToInt(anim->frames);
    int seq = anim->anim;
    int trigger = MB_FindNearestAnimTrigger(AnimSeq(moby, seq), (float)(start % frames));

    MB_SetAnimation(moby, seq, trigger, blend);
    Walk_ResetLegTwist(pLD);
    pLD->state = state;
}

/* a step onto anims[index] led by leg: entered an eighth into the leg's stance, blending over a
   quarter of it at the current speed */
static void Walk_Step(MobyInstance *moby, w_2legData *pLD, float speed, int index, int leg, int state)
{
    w_2legAnim *anim = pLD->anims[index];
    int blend = FastDoubleToInt(anim->footRange[leg] * 0.25f / (speed / anim->speed));
    int start = FastDoubleToInt(anim->footRange[leg] * 0.125f + anim->footDown[leg] - anim->frame0);

    Walk_StartAnim(moby, pLD, index, start, blend, state);
}

/* starts an animation from standing at its fromIdle frame */
static void Walk_StartFromIdle(MobyInstance *moby, w_2legData *pLD, int index, int state)
{
    w_2legAnim *anim = pLD->anims[index];
    int seq = anim->anim;
    int trigger = MB_FindNearestAnimTrigger(AnimSeq(moby, seq), (float)anim->fromIdle);

    MB_SetAnimation(moby, seq, trigger, 10);
    Walk_ResetLegTwist(pLD);
    pLD->state = state;
    pLD->onground = Walk_GetLegRangeMask((float)pLD->anims[index]->fromIdle, pLD->anims[index]);
    pLD->counter = 0;
}

static void Walk_StartIdle(MobyInstance *moby, w_2legData *pLD)
{
    MB_SetAnimation(moby, pLD->idle, 0, 10);
    Walk_ResetLegTwist(pLD);
    pLD->state = WALK_STATE_IDLE;
}

/* the ground under a point half a stride ahead (along angle) of joint from, raised by raise */
static float Walk_ProbeAhead(float angle, float stride, vec4 *from, float raise, Vec4 *probe)
{
    probe->x = cosf(angle) * stride * 0.5f;
    probe->y = sinf(angle) * stride * 0.5f;
    probe->z = 0.0f;
    FUN_005e7f54(&probe->x, &probe->x, &from->m.x);
    probe->z += raise;

    return GetGroundZ(0.5f, probe, 0);
}

/* the leading foot's joint: foot0's heel while foot0 is down, else foot1's */
static inline vec4 *Walk_LeadHeel(w_2legData *pLD, u32 contacts)
{
    return (contacts & WALK_CONTACT_FOOT0) ? &pLD->fpos[1] : &pLD->fpos[3];
}

/* a jump takes off: stepZ keeps the take-off height, and leg 1 or leg 0 leads */
static void Walk_TakeOff(MobyInstance *moby, w_2legData *pLD, float speed, u32 contacts)
{
    pLD->stepZ = moby->pos.z;
    pLD->flags = (pLD->flags & ~WALK_FLAG_JUMP) | WALK_FLAG_JUMPING;

    if ((contacts & WALK_CONTACT_FOOT0) == 0) {
        Walk_Step(moby, pLD, speed, 9, 1, WALK_STATE_JUMP_A);
    }
    else {
        Walk_Step(moby, pLD, speed, 11, 0, WALK_STATE_JUMP_B);
    }
}

/* the take-off states: launches at jumpPos once the move joints touch down, then goes to the
   air animation or straight to the landing */
static void Walk_UpdateTakeOff(MobyInstance *moby, w_2legData *pLD, u32 contacts, int index, bool flat,
                               int landIndex, int landState)
{
    if (contacts & (WALK_CONTACT_MOVE1 | WALK_CONTACT_MOVE2)) {
        double dist = flat ? FUN_005e8588(&moby->pos.x, &pLD->jumpPos.m.x)
                           : FUN_005e8548(&moby->pos.x, &pLD->jumpPos.m.x);

        printf("jumpdist = %f\n", dist);
        pLD->zVel = (float)MB_computeLobVelocity(pLD->speed, -pLD->grav, &moby->pos.x, &pLD->jumpPos.m.x, NULL);
        pLD->flags |= WALK_FLAG_AIRBORNE;
        pLD->jumpPos.m.w = (float)FUN_005e8338(pLD->jumpPos.m.x - moby->pos.x, pLD->jumpPos.m.y - moby->pos.y);
    }

    w_2legAnim *anim = pLD->anims[index];
    if (anim->frame0 + anim->frames - moby->unk58 <= BlendAnimFrame(moby)) {
        MB_SetAnimation(moby, pLD->rjumpc, 0, 10);
        Walk_ResetLegTwist(pLD);
        pLD->state = WALK_STATE_AIR;
        return;
    }

    if ((pLD->flags & WALK_FLAG_AIRBORNE) == 0 || pLD->zVel >= 0.0f) {
        return;
    }

    /* falling: start the landing so the foot comes down as it lands */
    float t = Walk_SolveStepTiming(moby, pLD);
    w_2legAnim *land = pLD->anims[landIndex];
    float lead = land->footDown[1] - land->frame0;
    if (lead * 2.0f + 15.0f <= t) {
        return;
    }

    int blend = FastDoubleToInt(-(lead * 2.0f - t)) >> 1;
    if (blend < 0) {
        blend = 0;
    }

    int seq = land->anim;
    MB_SetAnimation(moby, seq, MB_FindNearestAnimTrigger(AnimSeq(moby, seq), 0.0f), blend);
    Walk_ResetLegTwist(pLD);
    pLD->state = landState;
}

/* the landing states: times the animation so the foot comes down as it lands */
static void Walk_UpdateLanding(MobyInstance *moby, w_2legData *pLD, int index, int nextState)
{
    w_2legAnim *anim = pLD->anims[index];
    if (moby->updateId != anim->anim) {
        return;
    }

    float t = Walk_SolveStepTiming(moby, pLD);
    if (t > 1.0f) {
        float cur = (float)FastIntToDouble(moby->previousAnimationFrame) + moby->animationBlend;
        float target = -(t * 0.5f - (anim->footDown[1] + 2.0f)) - anim->frame0;

        if (target - (cur + 0.1f) < 0.0f) {
            target = cur + 0.1f;
        }

        moby->unk58 = animationSpeed * (target - cur);
        return;
    }

    float cur = (float)FastIntToDouble(moby->previousAnimationFrame) + moby->animationBlend;
    float target = anim->footDown[1] - anim->frame0;

    pLD->flags &= ~WALK_FLAG_AIRBORNE;
    if (target - (cur + 0.1f) < 0.0f) {
        target = cur + 0.1f;
    }

    moby->unk58 = animationSpeed * (target - cur);
    pLD->state = nextState;
    pLD->onground = WALK_CONTACT_FOOT1;
}

/* the landed states: run on once foot0 is down */
static void Walk_UpdateLanded(MobyInstance *moby, w_2legData *pLD, float speed, float angle, u32 contacts,
                              int blendLeg, int downLeg)
{
    Vec4 probe;

    if ((contacts & WALK_CONTACT_FOOT0) == 0) {
        return;
    }

    w_2legAnim *run = pLD->anims[7];
    int blend = FastDoubleToInt((run->footRange[blendLeg] * 0.25f + 2.0f) / (speed / run->speed));
    /* both landed states start from footRange[0] (the binary mixes legs in the second) */
    int start = FastDoubleToInt(run->footRange[0] * 0.125f + run->footDown[downLeg] + 1.0f - run->frame0);

    Walk_StartAnim(moby, pLD, 7, start, blend, WALK_STATE_RUN);
    pLD->onground = WALK_CONTACT_FOOT0;
    pLD->state = WALK_STATE_RUN;
    pLD->zVel = 0.0f;
    pLD->flags &= ~WALK_FLAG_JUMPING;
    pLD->stepZ = Walk_ProbeAhead(angle, pLD->anims[7]->stride, &pLD->fpos[1], 1.0f, &probe);
}

/* the step states, once their animation plays and a foot is down: rise is how much higher the
   ground half a stride ahead is */
static void Walk_UpdateStep(MobyInstance *moby, w_2legData *pLD, float speed, u32 contacts, float rise)
{
    float up = pLD->stepHeight * 0.75f;
    float down = pLD->stepHeight * -0.75f;
    bool foot0 = (contacts & WALK_CONTACT_FOOT0) != 0;

    switch (pLD->state) {
    case WALK_STATE_WALK:
        if (rise <= up) {
            if (rise < down) {
                pLD->flags |= WALK_FLAG_STEP_DOWN;
                if (!foot0) {
                    Walk_Step(moby, pLD, speed, 4, 1, WALK_STATE_DOWN_A);
                }
                else {
                    Walk_Step(moby, pLD, speed, 5, 0, WALK_STATE_DOWN_B);
                }
            }
        }
        else if (!foot0) {
            Walk_Step(moby, pLD, speed, 1, 1, WALK_STATE_UP_A);
        }
        else {
            Walk_Step(moby, pLD, speed, 2, 0, WALK_STATE_UP_B);
        }
        break;

    case WALK_STATE_UP_A:
        if (down <= rise) {
            if (up <= rise) {
                Walk_Step(moby, pLD, speed, 3, 0, WALK_STATE_UP_HIGH);
            }
            else {
                pLD->state = WALK_STATE_UP_A_TOP;
            }
        }
        else {
            pLD->flags |= WALK_FLAG_STEP_DOWN;
            Walk_Step(moby, pLD, speed, 5, 0, WALK_STATE_DOWN_B);
        }
        break;

    case WALK_STATE_UP_B:
        if (down <= rise) {
            if (up <= rise) {
                Walk_Step(moby, pLD, speed, 3, 1, WALK_STATE_UP_HIGH);
            }
            else {
                pLD->state = WALK_STATE_UP_B_TOP;
            }
        }
        else {
            pLD->flags |= WALK_FLAG_STEP_DOWN;
            Walk_Step(moby, pLD, speed, 4, 1, WALK_STATE_DOWN_A);
        }
        break;

    case WALK_STATE_UP_HIGH:
        if (down <= rise) {
            if (rise < up) {
                if (!foot0) {
                    Walk_Step(moby, pLD, speed, 2, 1, WALK_STATE_UP_B_TOP);
                }
                else {
                    Walk_Step(moby, pLD, speed, 1, 0, WALK_STATE_UP_A_TOP);
                }
            }
        }
        else {
            pLD->flags |= WALK_FLAG_STEP_DOWN;
            if (!foot0) {
                Walk_Step(moby, pLD, speed, 4, 1, WALK_STATE_DOWN_A);
            }
            else {
                Walk_Step(moby, pLD, speed, 5, 0, WALK_STATE_DOWN_B);
            }
        }
        break;

    case WALK_STATE_UP_A_TOP:
        if (down <= rise) {
            if (rise <= up) {
                Walk_Step(moby, pLD, speed, 0, 1, WALK_STATE_WALK);
            }
            else {
                pLD->state = WALK_STATE_UP_A;
            }
        }
        else {
            pLD->flags |= WALK_FLAG_STEP_DOWN;
            Walk_Step(moby, pLD, speed, 4, 1, WALK_STATE_DOWN_A);
        }
        break;

    case WALK_STATE_UP_B_TOP:
        if (down <= rise) {
            if (rise <= up) {
                Walk_Step(moby, pLD, speed, 0, 0, WALK_STATE_WALK);
            }
            else {
                pLD->state = WALK_STATE_UP_B;
            }
        }
        else {
            pLD->flags |= WALK_FLAG_STEP_DOWN;
            Walk_Step(moby, pLD, speed, 5, 0, WALK_STATE_DOWN_B);
        }
        break;

    case WALK_STATE_DOWN_A:
        if (rise <= up) {
            if (rise <= down) {
                Walk_Step(moby, pLD, speed, 6, 0, WALK_STATE_DOWN_LOW);
            }
            else {
                pLD->state = WALK_STATE_DOWN_A_END;
            }
        }
        else {
            Walk_Step(moby, pLD, speed, 2, 0, WALK_STATE_UP_B);
        }
        break;

    case WALK_STATE_DOWN_B:
        if (rise <= up) {
            if (rise <= down) {
                Walk_Step(moby, pLD, speed, 6, 1, WALK_STATE_DOWN_LOW);
            }
            else {
                pLD->state = WALK_STATE_DOWN_B_END;
            }
        }
        else {
            Walk_Step(moby, pLD, speed, 1, 1, WALK_STATE_UP_A);
        }
        break;

    case WALK_STATE_DOWN_LOW:
        if (rise <= up) {
            if (down < rise) {
                if (!foot0) {
                    Walk_Step(moby, pLD, speed, 5, 1, WALK_STATE_DOWN_B_END);
                }
                else {
                    Walk_Step(moby, pLD, speed, 4, 0, WALK_STATE_DOWN_A_END);
                }
            }
        }
        else if (!foot0) {
            Walk_Step(moby, pLD, speed, 1, 1, WALK_STATE_UP_A);
        }
        else {
            Walk_Step(moby, pLD, speed, 2, 0, WALK_STATE_UP_B);
        }
        break;

    case WALK_STATE_DOWN_A_END:
    case WALK_STATE_DOWN_B_END: {
        /* back to walking: entered half way into the stance, blending over all of it */
        int leg = pLD->state == WALK_STATE_DOWN_A_END ? 1 : 0;

        if (rise <= up) {
            if (down <= rise) {
                w_2legAnim *walk = pLD->anims[0];
                int blend = FastDoubleToInt(walk->footRange[leg] / (speed / walk->speed));
                int start = FastDoubleToInt(walk->footRange[leg] * 0.5f + walk->footDown[leg] - walk->frame0);

                Walk_StartAnim(moby, pLD, 0, start, blend, WALK_STATE_WALK);
            }
            else {
                pLD->state = leg == 1 ? WALK_STATE_DOWN_A : WALK_STATE_DOWN_B;
            }
        }
        else if (leg == 1) {
            Walk_Step(moby, pLD, speed, 1, 1, WALK_STATE_UP_A);
        }
        else {
            Walk_Step(moby, pLD, speed, 2, 0, WALK_STATE_UP_B);
        }
        break;
    }
    }
}

// 0x0175558 (0x14 bytes)
void SECTION_HEADER_WALK(void)
{
    DAT_0073a82c = 0x10000;
}

// 0x0175580 (0xc4 bytes)
/* the ground under pos: a line from 0.75 above it to 2.5 below (not below 0.1); 0 if none */
float GetGroundZ_Unused(Vec4 *pos)
{
    Vec4 bottom;
    Vec4 top;

    bottom.x = pos->x;
    bottom.y = pos->y;
    bottom.w = pos->w;
    bottom.z = pos->z - 2.5f;
    if (bottom.z < 0.1f) {
        bottom.z = 0.1f;
    }

    top.x = pos->x;
    top.y = pos->y;
    top.w = pos->w;
    top.z = pos->z + 0.75f;

    if (CollLine(&top.x, &bottom.x, 2, 0, 0) != 0) {
        return g_CollOutput.ip.z;
    }

    return 0.0f;
}

// 0x0175644 (0x34 bytes)
void walk_SetupTwistVals(MobyInstance *moby, w_2legData *pLD)
{
    pLD->legs[0].twistLow = -0.19634955f;
    pLD->legs[1].twistHigh = 0.19634955f;
    pLD->legs[0].twistHigh = 1.5707964f;
    pLD->legs[1].twistLow = -1.5707964f;
}

// 0x0175688 (0x488 bytes)
/* fills in each anim's frames, stance ranges and speed, then sets the legs up */
int32_t walk_init2LegAnim(MobyInstance *moby, w_2legData *pLD)
{
    for (int i = 0; i < 13; i++) {
        if (pLD->anims[i]->anim < 0) {
            printf("\n\nInvalid anim detected on pLD->anims[%d]->anim in walk_init2LegAnim.\n"
                   "See walk.h and check your initialization function for moby class %d\n",
                   i, moby->oClass);
            __builtin_trap();
        }

        pLD->anims[i]->frame0 = MB_GetAnimSeqLength(moby->mClass, pLD->anims[i]->anim);

        w_2legAnim *anim = pLD->anims[i];
        anim->frames = MB_GetAnimSeqTriggerLength(moby->mClass, anim->anim) - anim->frame0;
        if (anim->frames == 0.0f) {
            continue;
        }

        /* a stance that wraps past the end of the cycle */
        for (int leg = 0; leg < 2; leg++) {
            float up = anim->footUp[leg];
            if (anim->footUp[leg] < anim->footDown[leg]) {
                up += anim->frames;
            }
            anim->footRange[leg] = up - anim->footDown[leg];

            up = anim->heelUp[leg];
            if (anim->heelUp[leg] < anim->heelDown[leg]) {
                up += anim->frames;
            }
            anim->heelRange[leg] = up - anim->heelDown[leg];
        }

        anim->speed = anim->stride / (animationSpeed * (anim->frames * 2.0f));
    }

    Walk_SetupLegs(moby, pLD);

    pLD->onground = WALK_CONTACT_FOOT0 | WALK_CONTACT_FOOT1;
    pLD->state = WALK_STATE_IDLE;
    pLD->yrot = 0.0f;
    pLD->yrSpeed = 0.0f;
    pLD->speed = 0.0f;
    pLD->angVel = 0.0f;
    pLD->collZAdj = 0.0f;
    pLD->zVel = 0.0f;
    pLD->stepZ = 0.0f;
    pLD->counter = 0;
    pLD->flags = 0;

    return printf("sizeof(w_2legData) = %d bytes \n", 0x250);
}

// 0x0175b18 (0x188 bytes)
/* which joints frame has planted (WALK_CONTACT_*); with no foot or heel down, the move joints
   outside their touch-down frames */
u32 Walk_GetLegRangeMask(float frame, w_2legAnim *pLA)
{
    u32 mask = 0;
    u32 bit = 1;
    u32 footBit = 1;

    for (int leg = 0; leg < 2; leg++) {
        footBit = bit;

        float down = pLA->footDown[leg];
        float up = pLA->footUp[leg];
        if (up < down) {
            if (down <= frame || frame <= up) {
                mask |= footBit;
            }
        }
        else if (down <= frame && frame <= up) {
            mask |= footBit;
        }

        down = pLA->heelDown[leg];
        up = pLA->heelUp[leg];
        if (up < down) {
            if (down <= frame || frame <= up) {
                mask |= footBit << 1;
            }
        }
        else if (down <= frame && frame <= up) {
            mask |= footBit << 1;
        }

        bit = footBit << 2;
    }

    if (mask == 0) {
        if (frame < pLA->move1Reset || pLA->move1Reset + 1.0f < frame) {
            mask = bit;
        }

        if (frame < pLA->move2Reset || pLA->move2Reset + 1.0f < frame) {
            mask |= footBit << 3;
        }
    }

    return mask;
}

// 0x0175ca0 (0x74 bytes)
u32 Walk_GetLegRangeMaskForAnim(float frame, MobyInstance *moby, w_2legData *pLD)
{
    w_2legAnim *anim = Walk_FindAnim(pLD, moby->updateId);

    if (anim == NULL) {
        return (u8)pLD->onground;
    }

    return Walk_GetLegRangeMask(frame, anim);
}

// 0x0175d68 (0x8a8 bytes)
/* keeps the walker on the ground: finds the ground under the planted feet (and its slope, for
   yrot), then moves the body and fpos[] up or down; returns 2 on a slope over 45 degrees */
int Walk_SolveLegGroundContact(MobyInstance *moby, w_2legData *pLD)
{
    int result = 0;
    bool onStep = false;
    float correction = 0.0f;
    float weight = 0.0f;

    if ((pLD->flags & WALK_FLAG_AIRBORNE) == 0) {
        float groundSum = 0.0f;
        float normalX = 0.0f;
        float normalY = 0.0f;
        float normalZ = 0.0f;
        u32 bit = WALK_CONTACT_FOOT0;

        /* the two feet */
        for (int i = 0; i < 4; i += 2) {
            if ((u8)pLD->onground & bit) {
                Vec4 *foot = &pLD->fpos[i].m;
                Vec4 bottom;
                Vec4 top;

                bottom.x = foot->x;
                bottom.y = foot->y;
                bottom.w = foot->w;
                bottom.z = foot->z - 2.5f;
                if (bottom.z < 0.1f) {
                    bottom.z = 0.1f;
                }

                top.x = foot->x;
                top.y = foot->y;
                top.w = foot->w;
                top.z = foot->z + 0.75f;

                float groundZ = 0.0f;
                if (CollLine(&top.x, &bottom.x, 2, 0, 0) != 0) {
                    groundZ = g_CollOutput.ip.z;
                }

                groundSum += groundZ;

                /* floor, not wall */
                if (groundZ > 0.0f &&
                    fabsf(g_CollOutput.normal.x) + fabsf(g_CollOutput.normal.y) < fabsf(g_CollOutput.normal.z)) {
                    normalX += g_CollOutput.normal.x;
                    normalY += g_CollOutput.normal.y;
                    normalZ += g_CollOutput.normal.z;
                    weight += 4.0f;
                    correction += groundZ - foot->z;
                }
            }

            bit <<= 2;
        }

        if (groundSum == 0.0f) {
            float groundZ = GetGroundZ(0.5f, &moby->pos, 0);

            if (groundZ > 0.0f) {
                weight += 4.0f;
                correction += groundZ - moby->pos.z;
            }
        }

        /* the pitch of the facing direction projected onto the floor */
        float slope = 0.0f;
        if (normalX != 0.0f || normalY != 0.0f || normalZ != 0.0f) {
            float sinYaw = FastSinInline(moby->rotation.z);
            float cosYaw = FastCosInline(moby->rotation.z);
            float sideY = normalZ * cosYaw - normalX * 0.0f;
            float sideX = normalY * 0.0f - normalZ * sinYaw;
            float sideZ = normalX * sinYaw - normalY * cosYaw;
            float alongX = normalY * sideZ - normalZ * sideY;
            float alongY = normalZ * sideX - normalX * sideZ;
            float alongZ = normalX * sideY - normalY * sideX;

            slope = FastAtan2Inline(alongZ, sqrtf(alongX * alongX + alongY * alongY));
        }

        pLD->yrot = slope;
        if (fabsf(slope) > 0.785398f) {
            result = 2;
        }

        /* running at a step with no foot down: climb toward stepZ if it's under 30 degrees */
        if (pLD->state == WALK_STATE_RUN && pLD->stepZ > 0.0f && ((u8)pLD->onground & 0xf) == 0) {
            float rise = pLD->stepZ - moby->pos.z;
            float angle = FastAtan2Inline(rise, pLD->anims[7]->stride);

            if (fabsf(-angle) < 0.5235988f) {
                onStep = true;
                correction += rise;
                weight += 4.0f;
                pLD->yrot = -angle;
            }
        }
    }
    else {
        float groundZ = GetGroundZ(0.5f, &moby->pos, 0);
        float z = moby->pos.z;

        if (groundZ - 0.05f <= z) {
            if (!(pLD->zVel < 0.0f) || z >= (groundZ + 0.1f) - pLD->zVel) {
                correction = -1.0f;
            }
            else {
                correction = groundZ - z;
            }
        }
        else {
            correction = z - groundZ;
        }

        pLD->yrot = 0.0f;
    }

    float adjust = correction;
    if (weight > 0.0f) {
        adjust = correction / weight;
    }
    if (weight < 0.0f) {
        adjust = correction / weight;
    }

    if ((pLD->flags & WALK_FLAG_STEP_DOWN) == 0) {
        if (adjust <= -0.025f) {
            /* falling */
            pLD->zVel -= pLD->grav;
            adjust = pLD->zVel;
        }
        else {
            /* only a step snaps the walker up */
            if (adjust > 0.025f && !onStep) {
                adjust = 0.0f;
            }
            pLD->zVel = 0.0f;
        }
    }
    else {
        pLD->zVel = 0.0f;
        if (adjust < -0.025f) {
            adjust = 0.0f;
        }
    }

    for (int i = 0; i < 6; i++) {
        pLD->fpos[i].m.z += adjust;
    }

    moby->pos.z += adjust;

    return result;
}

// 0x0176618 (0xac bytes)
/* straightens both legs' hip and ankle (when a new animation starts) */
void Walk_ResetLegTwist(w_2legData *pLD)
{
    for (int i = 0; i < 2; i++) {
        w_legData *leg = &pLD->legs[i];

        if (leg->MHip.state != 0) {
            FastQuaternionToEuler(0.0, (float *)&leg->MHip.q, 2);
        }

        if (leg->MAnkle.state != 0) {
            FastQuaternionToEuler(0.0, (float *)&leg->MAnkle.q, 2);
        }

        leg->hrAct = 0.0f;
        leg->arAct = 0.0f;
    }
}

// 0x01766d8 (0x4f4 bytes)
/* twists each leg at the hip and ankle so a planted foot keeps its yaw (frDest) while the body
   turns; a lifted foot straightens out. The ankle of a planted foot also cancels the body's roll */
void Walk_UpdateLegRotations(MobyInstance *moby, w_2legData *pLD, u32 contacts)
{
    u32 legMask = WALK_CONTACT_FOOT0 | WALK_CONTACT_HEEL0;

    for (int i = 0; i < 2; i++) {
        w_legData *leg = &pLD->legs[i];
        float dest = leg->frDest;
        float footYaw = Walk_FootYaw(moby, leg);

        /* the twist that would put the foot back at frDest */
        float twist = FastDiffRots(dest, footYaw);
        twist = FastWrapRot(twist, leg->hrAct);
        twist = FastWrapRot(twist, leg->arAct);
        float base = FastDiffRots(footYaw, twist);

        char state = pLD->state;
        float limit = DAT_0071f408 * 0.034906585f;
        float ankle;

        if (state == WALK_STATE_IDLE || (legMask & contacts) == 0) {
            leg->hrAct = MB_DeltAngSpeed(leg->hrAct, 0.0f, 0.1f, 0.1f, limit, &leg->hrSpeed);
            ankle = MB_DeltAngSpeed(leg->arAct, 0.0f, 0.1f, 0.1f, DAT_0071f408 * 0.034906585f, &leg->arSpeed);
        }
        else {
            /* planted: the hip takes half the twist (none while running), the ankle the rest */
            float hip;
            if (state == WALK_STATE_RUN) {
                hip = MB_DeltAngSpeed(leg->hrAct, 0.0f, 0.1f, 0.1f, limit, &leg->hrSpeed);
            }
            else {
                hip = MB_DeltAngSpeed(leg->hrAct, twist * 0.5f, 0.1f, 0.1f, limit, &leg->hrSpeed);
            }

            leg->hrAct = hip;
            ankle = FastDiffRots(twist, hip);
            leg->arSpeed = 0.0f;
        }

        leg->arAct = ankle;

        float low = leg->twistLow;
        float high = leg->twistHigh;
        float hip = leg->hrAct;
        if (leg->hrAct < low) {
            leg->hrAct = low;
            hip = low;
        }
        if (high < hip) {
            leg->hrAct = high;
            hip = high;
        }

        if (ankle < low) {
            leg->arAct = low;
            ankle = low;
        }
        if (high < ankle) {
            leg->arAct = high;
        }

        leg->frDest = FastWrapRot(hip, base);
        leg->frDest = FastWrapRot(leg->arAct, leg->frDest);

        if (leg->MHip.state != 0) {
            FastQuaternionToEuler(leg->hrAct, (float *)&leg->MHip.q, 2);
        }

        if (leg->MAnkle.state != 0) {
            float *ankleQ = (float *)&leg->MAnkle.q;

            FastQuaternionToEuler(leg->arAct, ankleQ, 2);
            if (legMask & contacts) {
                quat roll;

                FastQuaternionToEuler(-moby->rotation.x, (float *)&roll, 0);
                FastQuaternionMult(ankleQ, ankleQ, (float *)&roll);
            }
        }

        legMask <<= 2;
    }
}

// 0x0176be0 (0x60 bytes)
/* frames until a fall (zVel, grav) reaches jumpPos.z; 100000 if it never does */
float Walk_SolveStepTiming(MobyInstance *moby, w_2legData *pLD)
{
    float grav = pLD->grav;
    float b = grav * 0.5f + pLD->zVel;
    float disc = b * b + grav * 2.0f * (moby->pos.z - pLD->jumpPos.m.z);
    float root = sqrtf(disc);
    float t = b - root;

    if (b - root < 0.0f) {
        t = b + root;
    }

    float frames = 100000.0f;
    if (0.0f - disc < 0.0f) {
        frames = t / grav;
    }

    return frames;
}

// 0x0176c90 (0x3558 bytes)
/* picks the walker's next animation for its state (WALK_STATE_*). speed and angle are where the
   moby wants to go; contacts are the joints its animation has planted this frame */
void Walk_UpdateStateMachine(float speed, float angle, float accel, MobyInstance *moby, w_2legData *pLD,
                             u32 contacts)
{
    Vec4 probe;
    u8 state = pLD->state;

    switch (state) {
    case WALK_STATE_IDLE:
        pLD->stepZ = 0.0f;

        if (accel > 0.0008f && pLD->anims[0]->speed * 1.35f < speed) {
            Walk_StartFromIdle(moby, pLD, 7, WALK_STATE_RUN);
            return;
        }

        if (speed <= g_FrameTime * 0.21f && FastSubRots(moby->rotation.z, angle) <= 0.10471976f) {
            return;
        }

        /* start walking after 4 frames of wanting to */
        pLD->counter++;
        if (pLD->counter < 4) {
            return;
        }

        Walk_StartFromIdle(moby, pLD, 0, WALK_STATE_WALK);
        return;

    case WALK_STATE_STOP:
        Walk_StartIdle(moby, pLD);
        return;

    case WALK_STATE_RUN: {
        w_2legAnim *walk = pLD->anims[0];
        float threshold = (pLD->anims[7]->speed + walk->speed) * 0.35f;

        if (moby->updateId == pLD->anims[7]->anim &&
            ((u8)pLD->onground & (WALK_CONTACT_MOVE1 | WALK_CONTACT_MOVE2)) == 0) {
            if (threshold <= speed || threshold < pLD->speed) {
                if (contacts & (WALK_CONTACT_FOOT0 | WALK_CONTACT_FOOT1)) {
                    if ((pLD->flags & WALK_FLAG_JUMP) == 0) {
                        pLD->stepZ = Walk_ProbeAhead(angle, pLD->anims[0]->stride, Walk_LeadHeel(pLD, contacts),
                                                     1.0f, &probe);
                    }
                    else {
                        Walk_TakeOff(moby, pLD, speed, contacts);
                    }
                }
            }
            else {
                /* slowed down: back to walking, two thirds into the planted foot's stance */
                int leg = ((u8)pLD->onground & (WALK_CONTACT_FOOT0 | WALK_CONTACT_HEEL0)) == 0 ? 1 : 0;
                int start = FastDoubleToInt(walk->footRange[leg] * 2.0f * 0.33333334f + walk->footDown[leg] -
                                            walk->frame0);

                Walk_StartAnim(moby, pLD, 0, start, 10, WALK_STATE_WALK);
            }
        }

        if (pLD->speed < threshold) {
            pLD->speed = threshold;
        }
        return;
    }

    case WALK_STATE_JUMP_A:
        Walk_UpdateTakeOff(moby, pLD, contacts, 9, false, 10, WALK_STATE_LAND_A);
        return;

    case WALK_STATE_JUMP_B:
        Walk_UpdateTakeOff(moby, pLD, contacts, 11, true, 12, WALK_STATE_LAND_B);
        return;

    case WALK_STATE_AIR: {
        if (moby->updateId != (u8)pLD->rjumpc) {
            return;
        }

        float t = Walk_SolveStepTiming(moby, pLD);
        w_2legAnim *land = pLD->anims[12];
        float lead = land->footDown[1] - land->frame0;
        if (lead * 2.0f + 15.0f <= t) {
            return;
        }

        int blend = FastDoubleToInt(-(lead * 2.0f - t));
        int seq = land->anim;
        MB_SetAnimation(moby, seq, MB_FindNearestAnimTrigger(AnimSeq(moby, seq), 0.0f), blend >> 1);
        Walk_ResetLegTwist(pLD);
        pLD->state = WALK_STATE_LAND_B;
        return;
    }

    case WALK_STATE_LAND_A:
        Walk_UpdateLanding(moby, pLD, 10, WALK_STATE_LANDED_A);
        return;

    case WALK_STATE_LAND_B:
        Walk_UpdateLanding(moby, pLD, 12, WALK_STATE_LANDED_B);
        return;

    case WALK_STATE_LANDED_A:
        Walk_UpdateLanded(moby, pLD, speed, angle, contacts, 1, 1);
        return;

    case WALK_STATE_LANDED_B:
        Walk_UpdateLanded(moby, pLD, speed, angle, contacts, 0, 0);
        return;

    default:
        break;
    }

    if (state > WALK_STATE_LANDED_B) {
        return;
    }

    /* the walking and stepping states (1 to 11) */
    if (state <= WALK_STATE_UP_B_TOP && (contacts & (WALK_CONTACT_FOOT0 | WALK_CONTACT_FOOT1))) {
        pLD->flags &= ~WALK_FLAG_STEP_DOWN;
    }

    int index = g_WalkStateAnim[state];

    if (!(0.25f <= moby->unk58 || 0.0923998f <= FastSubRots(moby->rotation.z, angle) ||
          g_FrameTime * 0.19f <= speed)) {
        Walk_StartIdle(moby, pLD);
        return;
    }

    if (moby->updateId != pLD->anims[index]->anim) {
        return;
    }

    float runSpeed = (pLD->anims[7]->speed + pLD->anims[0]->speed) * 0.375f;

    if (speed <= runSpeed || pLD->speed <= runSpeed ||
        ((u8)pLD->onground & (WALK_CONTACT_HEEL0 | WALK_CONTACT_HEEL1 | WALK_CONTACT_MOVE1 | WALK_CONTACT_MOVE2))) {
        if ((contacts & (WALK_CONTACT_FOOT0 | WALK_CONTACT_FOOT1)) == 0) {
            return;
        }

        if (pLD->flags & WALK_FLAG_JUMP) {
            Walk_TakeOff(moby, pLD, speed, contacts);
            return;
        }

        pLD->stepZ = Walk_ProbeAhead(angle, pLD->anims[index]->stride, Walk_LeadHeel(pLD, contacts), 0.0f, &probe);
        float rise = (pLD->stepZ - probe.z) + sinf(pLD->yrot) * (pLD->anims[index]->stride * 0.5f);

        Walk_UpdateStep(moby, pLD, speed, contacts, rise);
        return;
    }

    /* fast enough to run: enter the run at whichever foot lifts next */
    w_2legAnim *anim = pLD->anims[index];
    w_2legAnim *run = pLD->anims[7];
    float frame = BlendAnimFrame(moby);
    int toLift0 = FastDoubleToInt(anim->footUp[0] - frame + anim->frames);
    int frames = FastDoubleToInt(anim->frames);
    int toLift1 = FastDoubleToInt(anim->footUp[1] - frame + anim->frames);
    int frames1 = FastDoubleToInt(anim->frames);

    int start;
    if (toLift0 % frames < toLift1 % frames1) {
        start = FastDoubleToInt(run->footUp[0] - run->frame0);
    }
    else {
        start = FastDoubleToInt(run->footUp[1] - run->frame0);
    }

    int runFrames = FastDoubleToInt(run->frames);
    int runFrames2 = FastDoubleToInt(run->frames);
    int blend = FastDoubleToInt(10.0f / (speed / run->speed));
    int seq = run->anim;
    int trigger = MB_FindNearestAnimTrigger(AnimSeq(moby, seq), (float)((start + runFrames) % runFrames2));

    MB_SetAnimation(moby, seq, trigger, blend);
    Walk_ResetLegTwist(pLD);
    pLD->state = WALK_STATE_RUN;
}

// 0x017a230 (0x810 bytes)
/* moves a walker one frame toward speed and angle (accel: most the speed changes); returns 1
   if its collision pill was pushed, 2 if that left it mostly stuck (or from
   Walk_SolveLegGroundContact, on a steep slope) */
u32 walk_Update(float speed, float angle, float accel, MobyInstance *moby, w_2legData *pLD)
{
    float frame = Walk_CurrentFrame(moby);
    u32 contacts = Walk_GetLegRangeMaskForAnim(frame, moby, pLD);

    /* turn (in the air, toward the jump's heading) */
    u16 airborne = pLD->flags & WALK_FLAG_AIRBORNE;
    if (airborne == 0) {
        if ((contacts & 0xf) == 0) {
            moby->rotation.z = MB_DeltAngSpeed(moby->rotation.z, angle, 0.0f, pLD->angDamp * 2.0f, pLD->angLimit,
                                               &pLD->angVel);
        }
        else {
            moby->rotation.z = MB_DeltAngSpeed(moby->rotation.z, angle, pLD->angGain, pLD->angDamp, pLD->angLimit,
                                               &pLD->angVel);
        }
    }
    else {
        moby->rotation.z = MB_DeltAngSpeed(moby->rotation.z, pLD->jumpPos.m.w, pLD->angGain, pLD->angDamp,
                                           pLD->angLimit, &pLD->angVel);
    }

    Walk_UpdateLegRotations(moby, pLD, contacts);
    moby->rotation.y = MB_DeltAngSpeed(moby->rotation.y, pLD->yrot, 0.005f, 0.01f, DAT_0071f408 * 0.017453292f,
                                       &pLD->yrSpeed);

    /* where the animation put the joints now */
    int joints[6];
    Vec4 moved[6];

    Walk_GetJoints(pLD, joints);
    GetMobyJointsWorldPos(moby, 6, joints, moved);

    /* the body follows the planted joints back to where they were (in the air, it flies on) */
    float scaleX;
    float scaleY;
    float deltaX;
    float deltaY;
    float deltaZ;
    if ((pLD->flags & WALK_FLAG_AIRBORNE) == 0) {
        float count = 0.0f;
        u32 bit = 1;

        deltaX = 0.0f;
        deltaY = 0.0f;
        deltaZ = 0.0f;
        for (int i = 0; i < 6; i++) {
            if (bit & (contacts | ((u8)pLD->onground & (WALK_CONTACT_MOVE1 | WALK_CONTACT_MOVE2)))) {
                count += 1.0f;
                deltaX = (deltaX + pLD->fpos[i].m.x) - moved[i].x;
                deltaY = (deltaY + pLD->fpos[i].m.y) - moved[i].y;
                deltaZ = (deltaZ + pLD->fpos[i].m.z) - moved[i].z;
            }

            bit <<= 1;
        }

        float inv = 1.0f / count;
        deltaZ = inv * deltaZ;
        scaleX = inv;
        scaleY = inv;
    }
    else {
        float heading = pLD->jumpPos.m.w;

        scaleY = FastSinInline(heading);
        scaleX = FastCosInline(heading);
        deltaX = pLD->speed;
        deltaY = pLD->speed;
        deltaZ = 0.0f;
    }

    for (int i = 0; i < 6; i++) {
        pLD->fpos[i].m.x = scaleX * deltaX + moved[i].x;
        pLD->fpos[i].m.y = scaleY * deltaY + moved[i].y;
        pLD->fpos[i].m.z = moved[i].z + deltaZ;
        pLD->fpos[i].m.w = moved[i].w;
    }

    float curSpeed = pLD->speed;
    moby->pos.x = scaleX * deltaX + moby->pos.x;
    moby->pos.y = scaleY * deltaY + moby->pos.y;
    moby->pos.z = moby->pos.z + deltaZ;
    pLD->onground = (char)contacts;

    /* accelerate toward speed */
    if (pLD->acc - accel < 0.0f) {
        accel = pLD->acc;
    }

    if (curSpeed < speed) {
        pLD->speed = curSpeed + accel;
        if (speed < curSpeed + accel) {
            pLD->speed = speed;
        }
    }
    else if (speed < curSpeed) {
        pLD->speed = curSpeed - accel;
        if (curSpeed - accel < speed) {
            pLD->speed = speed;
        }
    }

    u32 result = Walk_SolveLegGroundContact(moby, pLD);
    Walk_UpdateStateMachine(speed, angle, accel, moby, pLD, contacts);

    /* push the collision pill (raised while stepping) out of the world */
    if ((pLD->flags & WALK_FLAG_AIRBORNE) == 0) {
        u32 type;
        Vec4 center;
        float radius;
        float length;

        MB_GetCollPrimWorld(moby, 0, &type, &center, &radius, &length);

        u8 seq = moby->animationId;
        float raise = pLD->collZAdj;
        if (seq == pLD->anims[3]->anim || seq == pLD->anims[1]->anim || seq == pLD->anims[2]->anim) {
            raise = pLD->stepHeight * 2.0f;
            pLD->collZAdj = raise;
        }
        else if (seq == pLD->anims[7]->anim && ((u8)pLD->onground & 0xf) != 0) {
            raise = pLD->stepHeight * 2.0f;
            pLD->collZAdj = raise;
        }
        else if (seq == moby->updateId) {
            raise = raise * 0.9f;
            pLD->collZAdj = raise;
        }

        center.z += raise;
        length -= raise;
        float offsetX = moby->pos.x - center.x;
        float offsetY = moby->pos.y - center.y;
        float offsetZ = moby->pos.z - center.z;

        /* flags 4, ignoring the moby itself (the binary leaves the 4th and 5th arguments unset) */
        for (int i = 0; i < 8; i++) {
            if (CollPill(radius, length, &center.x, 0, 0, 4, (ulonglong)(uintptr_t)moby) == 0) {
                break;
            }

            result |= 1;
            center = *(Vec4 *)&g_CollOutput.push;
        }

        float pushedY = center.y - moby->pos.y;
        float pushedX = center.x - moby->pos.x;
        moby->pos.w = center.w;
        moby->pos.x = center.x + offsetX;
        moby->pos.y = center.y + offsetY;
        moby->pos.z = center.z + offsetZ;

        if (sqrtf(pushedX * pushedX + pushedY * pushedY) < pLD->speed * 0.5f) {
            result |= 2;
        }
    }

    Walk_GetJoints(pLD, joints);
    GetMobyJointsWorldPos(moby, 6, joints, (Vec4 *)pLD->fpos);

    /* play the animation at the walker's speed; turning on the spot plays it at the walk's slowest */
    char state = pLD->state;
    float animRate = pLD->speed;
    float facing = moby->rotation.z;
    if (state == WALK_STATE_LAND_B && moby->updateId == pLD->anims[12]->anim) {
        return result;
    }

    moby->unk58 = 1.0f;
    if (state == WALK_STATE_IDLE) {
        return result;
    }

    for (int i = 0; i < 13; i++) {
        if (pLD->anims[i]->anim == moby->updateId) {
            float minRate = 0.19f;

            if (g_FrameTime * 0.19f <= animRate || FastSubRots(facing, angle) <= 0.0923998f ||
                (minRate = g_FrameTime * 0.19f, minRate <= speed)) {
                minRate = pLD->speed;
            }

            moby->unk58 = animationSpeed * fabsf(minRate / pLD->anims[i]->speed);
            return result;
        }
    }

    return result;
}

// 0x017aa48 (0x3cc bytes)
/* re-syncs a walker to whatever animation the moby is playing (after the moby animated it
   itself): its state, speed and planted joints */
void Walk_ResetLegState(MobyInstance *moby, w_2legData *pLD)
{
    Walk_SetupLegs(moby, pLD);

    float frame = Walk_CurrentFrame(moby);

    pLD->speed = 0.0f;
    pLD->state = WALK_STATE_IDLE;
    pLD->onground = WALK_CONTACT_FOOT0 | WALK_CONTACT_FOOT1;

    for (int i = 0; i < 13; i++) {
        if (pLD->anims[i]->anim == moby->animationId) {
            pLD->state = (char)g_WalkAnimState[i];
            pLD->speed = fabsf(moby->unk58 * pLD->anims[i]->speed);
        }
    }

    w_2legAnim *anim = Walk_FindAnim(pLD, moby->updateId);
    char contacts = WALK_CONTACT_FOOT0 | WALK_CONTACT_FOOT1;
    if (anim != NULL) {
        contacts = (char)Walk_GetLegRangeMask(frame, anim);
    }

    pLD->onground = contacts;
    pLD->yrot = 0.0f;
    pLD->yrSpeed = 0.0f;
    pLD->angVel = 0.0f;
    pLD->collZAdj = 0.0f;
    pLD->zVel = 0.0f;
    pLD->stepZ = 0.0f;
    pLD->counter = 0;
}

// 0x017ae30 (0x300 bytes)
/* walks toward target (w = the heading to arrive with); within 20 frames' travel it slows to a
   quarter and turns to target->w. Returns 1 once there and facing it */
int walk_WalkToPos(float speed, MobyInstance *moby, Vec4 *target, w_2legData *pLD)
{
    float dy = moby->pos.y - target->y;
    float dx = moby->pos.x - target->x;

    if (sqrtf(dx * dx + dy * dy) <= speed * 20.0f) {
        /* (the binary's facing test can never pass, so this never returns 1) */
        if (0.034906585f <= FastSubRots(target->w, moby->rotation.z) &&
            FastSubRots(target->w, moby->rotation.z) <= -0.034906585f) {
            return 1;
        }

        walk_Update(speed * 0.25f, target->w, g_FrameTimeSq * 5.0f, moby, pLD);
    }
    else {
        float heading = FastAtan2Inline(target->y - moby->pos.y, target->x - moby->pos.x);

        walk_Update(speed, heading, g_FrameTimeSq * 5.0f, moby, pLD);
    }

    return 0;
}

// 0x017b140 (0xd4 bytes)
/* turns to angle on the spot; returns 1 once facing it */
int walk_TurnToAngle(float angle, float speed, MobyInstance *moby, w_2legData *pLD)
{
    /* (as in walk_WalkToPos, the binary's test can never fail, so this never returns 1) */
    if (FastSubRots(angle, moby->rotation.z) < 0.034906585f ||
        -0.034906585f < FastSubRots(angle, moby->rotation.z)) {
        walk_Update(speed, angle, g_FrameTimeSq * 5.0f, moby, pLD);
        return 0;
    }

    return 1;
}
