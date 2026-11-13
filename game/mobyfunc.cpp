// game/mobyfunc.cpp -- moby instances: creating and freeing them, their animation frames, extra
// animation layers, joint queries, collision primitives, and the moby draw passes
// STATUS: CLEAN (checked against the asm; local names are mine)
// 42 functions, 0xef6b8-0xf1e84
//
// Mobys live in g_MobyInstance[]; the ones below MobyInstancePermEnd are the level's own. A freed
// slot keeps state 0xfe (0xfd below PermEnd) and the time it may be reused (freeTime) so that
// anything still pointing at it for a frame doesn't see a new moby; state 0xff marks the end of
// the used slots. A moby plays one sequence of its class at a time, blending from
// (updateId, previousAnimationFrame) to (animationId, animationFrame); an AnimLayer plays a second
// one on part of the skeleton.
#include <math.h>
#include <stdio.h>
#include <string.h>
#include "game/mobyfunc.h"
#include "game/boot.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/loaders.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/pause.h"
#include "game/rUnk.h"
#include "game/respawn.h"
#include "game/sound.h"
#include "game/update.h"
#include "idol/fastfunc.h"
#include "idol/idol_draw.h"
#include "idol/mUnk.h"
#include "idol/tiefunc.h"
#include "sdk/libgcm_cmd/marker.h"
#include "idol/fastinline.h"

#define MOBY_STATE_FREED_PERM   0xfd
#define MOBY_STATE_FREED        0xfe
#define MOBY_STATE_END          0xff
#define NO_SEQ                  0xff

#define MOBY_VARS_SIZE          0x80
#define NUM_ANIM_LAYERS         6
#define ANIM_LAYER_JOINT_BUF    0x1500
#define NUM_ANIM_CACHE          16

#define COLL_SCALE              (1.0f / 1024.0f)    /* collision data is in 1/1024 units */
#define ENV_SAMPLE_RANGE        8.0f
#define HERO_LIGHT_STRENGTH     0.14f

#define MOBY_DRAW_ENTRY_SIZE    0xb0
#define MOBY_DRAW_LIST_SIZE     0x1e000
#define DEBUG_DRAW_MOBYS        10                  /* g_DebugEnables index */

/* the joint matrices Moby_BuildJointMatrices leaves in the scratchpad (one 0x40 matrix per joint;
   the position is the first row read as a Vec4 at joint * 16 for COLLPRIM_CAPSULE) */
#define g_ScratchJoints         ((Vec4 *)0x70000000)

/* out = v * m, all four rows (a row vector times the matrix) */
static inline void MulVec4Mtx4(Vec4 *out, const Vec4 *v, const Mtx4 *m)
{
    out->x = m->v0.x * v->x + m->v1.x * v->y + m->v2.x * v->z + m->v3.x * v->w;
    out->y = m->v0.y * v->x + m->v1.y * v->y + m->v2.y * v->z + m->v3.y * v->w;
    out->z = m->v0.z * v->x + m->v1.z * v->y + m->v2.z * v->z + m->v3.z * v->w;
    out->w = m->v0.w * v->x + m->v1.w * v->y + m->v2.w * v->z + m->v3.w * v->w;
}

/* a moby-space point (xyz in the moby's units, w passed through) to world space */
static inline void MobyPointToWorld(Vec4 *point, MobyInstance *moby)
{
    float scale = moby->scale;
    Mtx4 *m = &moby->transform;
    float x = point->x * scale;
    float y = point->y * scale;
    float z = point->z * scale;

    point->x = m->v0.x * x + m->v1.x * y + m->v2.x * z + moby->pos.x;
    point->y = m->v0.y * x + m->v1.y * y + m->v2.y * z + moby->pos.y;
    point->z = m->v0.z * x + m->v1.z * y + m->v2.z * z + moby->pos.z;
    point->w = m->v0.w * x + m->v1.w * y + m->v2.w * z + point->w;
}

static inline bool IsFreeSlot(MobyInstance *moby)
{
    return moby->state >= MOBY_STATE_FREED && moby->freeTime <= (u64)worldUpdateTime;
}

/* a float's bits tested as an int, the way the binary tests the layer speed */
static inline int FloatBits(float value)
{
    union {
        float f;
        int i;
    } bits;

    bits.f = value;
    return bits.i;
}

// 0x00ef6b8 (0x14 bytes)
void SECTION_HEADER_MOBYFUNC(void)
{
    DAT_00729040 = 0x10000;
}

// 0x00ef6d0 (0x7c bytes)
/* free slots above the level's own mobys, counting every slot past the end marker */
void UpdateNumSpawnableMobys(void)
{
    MobyInstance *moby;
    bool pastEnd = false;

    numSpawnableMobys = 0;

    for (moby = MobyInstancePermEnd; moby < MobyInstanceEnd; moby++) {
        if (IsFreeSlot(moby) || pastEnd) {
            numSpawnableMobys++;

            if (moby->state == MOBY_STATE_END) {
                pastEnd = true;
            }
        }
    }
}

// 0x00ef74c (0xbc bytes)
/* Looks up the frame data for the moby's previous and current frames. updateId 0xff means the
   previous frame was built in a buffer (g_AnimBuffers, picked by previousAnimationFrame). */
void UpdateMobyFrameData(MobyInstance *moby)
{
    MobyClass *mobyClass;

    if (moby->updateId == NO_SEQ) {
        moby->trigsCnt = 0;
        moby->soundDesired = -1;
        moby->pPreviousAnimationData = g_AnimBuffers[(u8)moby->previousAnimationFrame];
        mobyClass = moby->pClass;
    }
    else {
        MobySeq *seq;

        mobyClass = moby->pClass;
        seq = mobyClass->seqs[moby->updateId];
        moby->pPreviousAnimationData = seq->frames[(u8)moby->previousAnimationFrame];
        moby->trigsCnt = mobyClass->seqs[moby->updateId]->trigsCnt;
        moby->soundDesired = seq->sound;
    }

    moby->pCurrentAnimationData = mobyClass->seqs[moby->animationId]->frames[(u8)moby->animationFrame];
}

// 0x00ef810 (0x218 bytes)
void InitMobyInstance(MobyInstance *moby, int oClass)
{
    MobyClass *mobyClass;
    u8 mClass;
    u16 modeBits;
    int index;

    FastMemSet(moby, 0, sizeof(MobyInstance));

    mClass = (&MobyClassLookup)[oClass];
    moby->oClass = oClass;
    moby->mClass = mClass;
    moby->alpha = 0x80;
    moby->color = 0x404040;                     /* both words from one 8-byte constant at 0xef808 */
    moby->light = 0;
    moby->damage = -1;
    moby->group = -1;
    moby->unk71 = -1;
    moby->unk72 = -1;
    moby->occlIndex = 0x7f80;
    moby->trigsCnt = 0;
    moby->soundDesired = -1;
    moby->soundChannel = -1;

    index = (moby - g_MobyInstance);
    moby->handle = index << 16;
    moby->index = index;

    /* an empty grid rectangle */
    moby->gridMinX = 0x7f;
    moby->gridMinY = 0x7f;
    moby->gridMaxX = 0x80;
    moby->gridMaxY = 0x80;

    moby->pUpdate = g_MobyClassUpdates[mClass];
    modeBits = moby->modeBits;

    if (moby->pUpdate == NULL) {
        modeBits |= NO_UPDATE;
        moby->modeBits = modeBits;
    }

    mobyClass = MobyClasses[mClass];

    if (mobyClass == NULL) {
        moby->pClass = NULL;
        moby->modeBits = modeBits | DISABLED | NO_POST_UPDATE;
        moby->collision = NULL;
        return;
    }

    moby->pClass = mobyClass;
    modeBits |= mobyClass->mode_bits;
    moby->modeBits = modeBits;
    moby->collision = mobyClass->collision;
    moby->unk58 = 1.0f;
    moby->scale = mobyClass->gScale;
    moby->frameSpeed = 1.0f;

    if (mobyClass->glow_rgba != 0) {
        modeBits |= HAS_GLOW;
        moby->modeBits = modeBits;
        moby->glowRgba = mobyClass->glow_rgba;
    }

    if (mobyClass->shadow) {
        moby->modeBits = modeBits | DRAW_SHADOW;
        moby->shadow = 24;
        moby->unk84 = 0;
        moby->unk88 = 0;
        moby->unkbd = 0;
    }

    if (mobyClass->seqs[0] != NULL) {
        MobySeq *firstSeq;
        u8 seqCount;

        UpdateMobyFrameData(moby);

        modeBits = moby->modeBits;
        firstSeq = moby->pClass->seqs[0];
        seqCount = moby->pClass->seq_cnt;

        /* animated: it needs its update even without an update function */
        if (firstSeq->frameCnt > 1) {
            modeBits &= ~NO_UPDATE;
            moby->modeBits = modeBits;
        }

        if (seqCount == 1 && firstSeq->frameCnt <= 1) {
            moby->unk58 = 0.0f;

            if (firstSeq->sound < 0) {
                moby->modeBits = modeBits | UNK_40;
            }
        }
    }
}

// 0x00efa28 (0x110 bytes)
MobyInstance *CreateMoby(int oClass)
{
    MobyInstance *moby;

    for (moby = MobyInstancePermEnd; moby < MobyInstanceEnd; moby++) {
        if (!IsFreeSlot(moby)) {
            continue;
        }

        if (moby->state == MOBY_STATE_END) {
            moby[1].state = MOBY_STATE_END;
        }

        InitMobyInstance(moby, oClass);

        moby->pVar = g_pMobyVars + (moby - MobyInstancePermEnd) * MOBY_VARS_SIZE;
        FastMemSet(moby->pVar, 0, MOBY_VARS_SIZE);

        if (numSpawnableMobys != 0) {
            numSpawnableMobys--;
        }

        return moby;
    }

    printf("Tried to create moby and couldn't. Time: %d, oClass: %d\n", (int)worldUpdateTime, oClass);
    return NULL;
}

// 0x00efb38 (0x68 bytes)
/* the slot can be reused two updates from now */
void DeleteMoby(MobyInstance *moby)
{
    moby->state = (moby < MobyInstancePermEnd) ? MOBY_STATE_FREED_PERM : MOBY_STATE_FREED;
    moby->freeTime = (s64)(int)(worldUpdateTime + 2);
    UpdateMobyGrids(moby, 0x80807f7f);
}

// 0x00efba0 (0xb0 bytes)
/* keeps the current sequence's sound looping on the moby (DL name) */
void MobyPlayDesiredSound(MobyInstance *moby)
{
    u8 channel = moby->soundChannel;

    if (channel == 0xff) {
        if ((u8)moby->soundDesired != 0xff) {
            moby->soundChannel = PlayMobySound((u8)moby->soundDesired, 4, moby);
        }
    }
    else if (g_SoundChannels[channel].pMoby != moby) {
        moby->soundChannel = -1;        /* the channel was taken over */
    }
    else if (g_SoundChannels[channel].sound_index != (u8)moby->soundDesired) {
        sound_Kill(channel);
        moby->soundChannel = -1;
    }
}

// 0x00efc58 (0xbc bytes)
/* the frame of seq whose start time is nearest to time t; -1 if t is past the last start */
int MB_FindNearestAnimTrigger(MobySeq *seq, float t)
{
    short key = FastDoubleToInt(t * 16.0f);
    int i;

    for (i = 0; i < seq->frameCnt; i++) {
        short frameTime = seq->frames[i]->time;

        if (frameTime > key) {
            if (i > 0 && frameTime - key > key - seq->frames[i - 1]->time) {
                return i - 1;
            }

            return i;
        }
    }

    return -1;
}

// 0x00efd18 (0x11c bytes)
/* The frame of seq that time t falls in, with how far through it in *frac; -1 before the first.
   The binary interpolates the unscaled t against the frame times, which are in 1/16 frames. */
int MB_FindAnimTriggerAfter(MobySeq *seq, float t, float *frac)
{
    short key = FastDoubleToInt(t * 16.0f);
    int i;

    for (i = 0; i < seq->frameCnt; i++) {
        if (seq->frames[i]->time > key) {
            break;
        }
    }

    if (i <= 0) {
        if (frac != NULL) {
            *frac = 0.0f;
        }

        return -1;
    }

    if (frac != NULL) {
        float start = FastIntToDouble(seq->frames[i - 1]->time);
        float end = FastIntToDouble(seq->frames[i]->time);

        *frac = (t - start) / (end - start);
    }

    return i - 1;
}

// 0x00efe40 (0x118 bytes)
/* the moby's position in its animation, in frames */
float BlendAnimFrame(MobyInstance *moby)
{
    MobyFrame *frame;

    if (moby->updateId == NO_SEQ) {
        frame = (MobyFrame *)moby->pCurrentAnimationData;
    }
    else {
        frame = (MobyFrame *)moby->pPreviousAnimationData;
    }

    if (moby->animationBlend == 0.0f) {
        return FastIntToDouble(frame->time) * 0.0625f;
    }

    if (moby->updateId == moby->animationId &&
        (u8)moby->previousAnimationFrame <= (u8)moby->animationFrame) {
        float prevTime = FastIntToDouble(frame->time);
        float invBlend = 1.0f - moby->animationBlend;
        float curTime = FastIntToDouble(((MobyFrame *)moby->pCurrentAnimationData)->time);

        return (prevTime * invBlend + curTime * moby->animationBlend) * 0.0625f;
    }

    return FastIntToDouble(frame->time) * 0.0625f + moby->animationBlend;
}

// 0x00eff60 (0x90 bytes)
/* where the last frame of a class's sequence starts, in frames */
float MB_GetAnimSeqLength(int oClass, int seq)
{
    if (seq < 0 || seq > 0xfe) {
        return 0.0f;
    }

    return FastIntToDouble(MobyClasses[oClass]->seqs[seq]->frames[0]->time) * 0.0625f;
}

// 0x00efff8 (0xa0 bytes)
float MB_GetAnimSeqTriggerLength(int oClass, int seq)
{
    MobySeq *animSeq;

    if (seq < 0 || seq > 0xfe) {
        return 0.0f;
    }

    animSeq = MobyClasses[oClass]->seqs[seq];
    return FastIntToDouble(animSeq->frames[animSeq->frameCnt - 1]->time) * 0.0625f;
}

// 0x00f00a0 (0x648 bytes)
/* A collision primitive in world space: its center (w = radius) in *center, the radius again in
   *radius and the length along it (0 for spheres) in *length. Returns 0 if there is none. */
int MB_GetCollPrimWorld(MobyInstance *moby, int index, u32 *type, Vec4 *center, float *radius,
                        float *length)
{
    MobyCollHeader *header = (MobyCollHeader *)moby->collision;
    CollPrim *prim;
    Vec4 joints[128];
    Mtx4 rot;
    Vec4 local;
    float scale;

    if (header == NULL) {
        return 0;
    }

    prim = &((CollPrim *)(header + 1))[index];
    *type = prim->type;
    scale = moby->scale * COLL_SCALE;
    FastEulerToMtx1(&rot, &moby->rotation);

    switch (*type) {
    case COLLPRIM_SPHERE2:
    case COLLPRIM_SPHERE:
    case COLLPRIM_PILL:
        local.x = prim->offset.x * scale;
        local.y = prim->offset.y * scale;
        local.z = prim->offset.z * scale;
        local.w = prim->offset.w;
        MulVec4Mtx4(center, &local, &rot);

        center->x += moby->pos.x;
        center->y += moby->pos.y;
        center->z += moby->pos.z;
        *radius = center->w * scale;

        if (*type == COLLPRIM_SPHERE2 || *type == COLLPRIM_SPHERE) {
            *length = 0.0f;
        }
        else {
            *length = prim->length * scale;
        }

        return 1;
    case COLLPRIM_JOINT:
        local.x = 0.0f;
        local.y = 0.0f;
        local.z = 0.0f;
        local.w = 0.0f;

        if (header->primSetB != 0) {
            Moby_BuildJointMatrices(moby, header->primSetB, joints);
            *center = joints[prim->joint];
            local = *center;
        }

        local.x *= scale;
        local.y *= scale;
        local.z *= scale;
        *center = local;
        MulVec4Mtx4(center, &local, &rot);

        center->x += moby->pos.x;
        center->y += moby->pos.y;
        center->z += moby->pos.z;
        *radius = prim->radius * scale;
        *length = 0.0f;
        return 1;
    case COLLPRIM_CAPSULE: {
        Vec4 *jointA;
        Vec4 *jointB;
        float ax, ay, az;
        float bx, by, bz;
        float dx, dy, dz;
        bool aIsLower;

        if (header->primSetB != 0) {
            Moby_BuildJointMatrices(moby, header->primSetB, NULL);
        }

        jointA = &g_ScratchJoints[prim->ends.jointA];
        jointB = &g_ScratchJoints[prim->ends.jointB];
        ax = jointA->x * scale;
        ay = jointA->y * scale;
        az = jointA->z * scale;
        bx = jointB->x * scale;
        by = jointB->y * scale;
        bz = jointB->z * scale;

        /* the capsule runs up from the lower end */
        aIsLower = (az - bz) < 0.0;
        local.x = aIsLower ? ax : bx;
        local.y = aIsLower ? ay : by;
        local.z = aIsLower ? az : bz;
        local.w = (aIsLower ? jointA->w : jointB->w) * scale;
        *center = local;
        MulVec4Mtx4(center, &local, &rot);

        dx = bx - ax;
        dy = by - ay;
        dz = bz - az;

        center->x += moby->pos.x;
        center->y += moby->pos.y;
        center->z += moby->pos.z;
        *radius = prim->radius * scale;
        *length = sqrtf(dz * dz + (dx * dx + dy * dy));
        return 1;
    }
    }

    return 0;
}

// 0x00f06f0 (0x148 bytes)
/* moves a collision primitive to a world position (used for the hero's collision) */
void MB_SetCollPrimFromWorld(MobyInstance *moby, int index, Vec4 *pos, float radius, float length)
{
    CollPrim *prim = &((CollPrim *)((MobyCollHeader *)moby->collision + 1))[index];
    float toLocal = 1024.0f / moby->scale;
    Mtx4 rot;
    Vec4 delta;
    Vec4 local;

    FastNormalizeRMtx4(&rot, &moby->transform);

    delta.x = pos->x - moby->pos.x;
    delta.y = pos->y - moby->pos.y;
    delta.z = pos->z - moby->pos.z;
    delta.w = pos->w;
    MulVec4Mtx4(&local, &delta, &rot);

    prim->length = length * toLocal;
    prim->offset.w = radius * toLocal;
    prim->offset.x = local.x * toLocal;
    prim->offset.y = local.y * toLocal;
    prim->offset.z = local.z * toLocal;
}

// 0x00f0838 (0x1c bytes)
void MB_AddShortPairOffset(short *pair, short x, short y)
{
    pair[2] += x;
    pair[3] += y;
}

// 0x00f0854 (0xac bytes)
/* Takes a free layer for the part of the skeleton from joint down and links it to the moby.
   There is no check for running out: a seventh layer would be written past the pool. */
AnimLayer *MB_AllocAnimLayer(MobyInstance *moby, short joint)
{
    AnimLayer *layer;
    u8 *jointData;
    int i;

    for (i = 0; i < NUM_ANIM_LAYERS; i++) {
        if (!g_AnimLayerPool[i].inUse) {
            break;
        }
    }

    layer = &g_AnimLayerPool[i];
    layer->inUse = 1;
    layer->joint = joint;
    layer->jointBuf = g_AnimLayerJointBuf[i];
    layer->pClass = moby->pClass;

    jointData = ((u8 **)moby->pClass->anim_joints)[joint + 1];
    layer->jointCount = jointData[3];
    layer->jointMap = jointData + jointData[1] + 4;

    layer->next = (AnimLayer *)moby->pAnimationLayers;
    moby->pAnimationLayers = layer;
    return layer;
}

// 0x00f0900 (0x94 bytes)
void MB_FreeAnimLayer(MobyInstance *moby, AnimLayer **pLayer)
{
    AnimLayer *layer = *pLayer;

    if (layer == NULL) {
        return;
    }

    if ((AnimLayer *)moby->pAnimationLayers == layer) {
        moby->pAnimationLayers = layer->next;
    }
    else {
        AnimLayer *prev = (AnimLayer *)moby->pAnimationLayers;
        AnimLayer *cur;

        for (;;) {
            cur = prev->next;

            if (cur == layer || cur == NULL) {
                break;
            }

            prev = cur;
        }

        if (cur == layer) {
            prev->next = layer->next;
        }
    }

    FastMemSet(*pLayer, 0, sizeof(AnimLayer));
    *pLayer = NULL;
}

// 0x00f0994 (0x194 bytes)
/* Builds a frame of animClass's sequence in buf in the layout of the moby's own class: the
   header, the joints remapped through animClass's joint table, and the data after them. */
void MB_InitAnimLayerBuffer(AnimLayer *layer, int seq, int frame, MobyFrame *buf)
{
    MobyClass *animClass = layer->animClass;
    int srcJoints = animClass->joint_cnt;
    int dstJoints = layer->pClass->joint_cnt;
    int jointBytes = dstJoints * 8;
    MobyFrame *src = animClass->seqs[seq]->frames[frame];
    u64 *srcJoint;
    u8 *jointMap;
    u64 *end;
    int restBytes;

    FastMemSetZero(buf, (jointBytes + 24) & 0xfff0);

    buf->jointBytes = jointBytes;
    buf->unk0a = src->unk0a;
    buf->unk0e = src->unk0e;
    buf->unk0c = (dstJoints + src->unk0a) * 8;
    buf->qwords = (dstJoints + src->unk0a + src->unk0e + 1) >> 1;

    restBytes = src->qwords * 16 - srcJoints * 8;

    if (restBytes != 0) {
        FastMemCopy32((u8 *)(buf + 1) + jointBytes, (u8 *)(src + 1) + srcJoints * 8, restBytes);
    }

    srcJoint = (u64 *)(src + 1);
    jointMap = (u8 *)animClass->anim_joints + 4;   /* read as bytes here, as pointers elsewhere */

    for (; srcJoints > 0; srcJoints--) {
        ((u64 *)(buf + 1))[*jointMap] = *srcJoint;
        jointMap++;
        srcJoint++;
    }

    /* the word after the frame must not be 0 */
    end = (u64 *)((u8 *)buf + buf->qwords * 16);

    if (*end == 0) {
        *end = 1;
    }

    FlushCache(0);
}

// 0x00f0b38 (0x258 bytes)
/* Advances the layer by speed * frameScale and fetches (or builds) its two frames' data. */
void MB_UpdateAnimLayer(MobyInstance *moby, AnimLayer *layer)
{
    float blend;
    float speed = layer->speed;
    u8 stepped = 0;

    layer->stepped = 0;

    if (FloatBits(speed) != 0 && FloatBits(layer->frameScale) != 0) {
        blend = speed * layer->frameScale + layer->blend;
        layer->blend = blend;

        if (FloatBits(speed) > 0) {
            if (blend > 0.99f && blend < 1.01f) {
                layer->blend = 1.0f;
                blend = 1.0f;
            }

            while (blend >= 1.0f) {
                MobySeq *seq;
                MobyFrame *frame;
                u8 prevFrame = layer->curFrame;

                layer->prevFromBuffer = layer->curFromBuffer;
                stepped |= 1;
                layer->stepped = stepped;
                layer->prevFrame = prevFrame;

                if (layer->curFromBuffer) {
                    layer->prevFrameData = layer->curFrameData;
                }

                layer->prevSeq = layer->curSeq;
                layer->curFrame = prevFrame + 1;
                seq = layer->pClass->seqs[layer->curSeq];

                if (layer->curFrame >= seq->frameCnt) {
                    stepped |= 3;
                    layer->curFrame = 0;
                    layer->stepped = stepped;
                }

                blend = (blend - 1.0f) / layer->frameScale;
                layer->blend = blend;

                frame = seq->frames[prevFrame];
                blend *= frame->length;
                layer->frameScale = frame->length;
                layer->blend = blend;
            }
        }
    }

    if (layer->prevFromBuffer) {
        MB_InitAnimLayerBuffer(layer, layer->prevSeq, layer->prevFrame, (MobyFrame *)layer->prevFrameData);
    }
    else {
        layer->prevFrameData = layer->pClass->seqs[layer->prevSeq]->frames[layer->prevFrame];
    }

    if (layer->curFromBuffer) {
        MB_InitAnimLayerBuffer(layer, layer->curSeq, layer->curFrame, (MobyFrame *)layer->curFrameData);
    }
    else {
        layer->curFrameData = layer->pClass->seqs[layer->curSeq]->frames[layer->curFrame];
    }

    MB_AnimLayerBlend(layer);
}

// 0x00f0d90 (0x40 bytes)
/* puts the layer on the moby's own frame and blend */
void MB_SyncAnimLayer(MobyInstance *moby, AnimLayer *layer)
{
    layer->prevFrame = moby->previousAnimationFrame;
    layer->curFrame = moby->animationFrame;
    layer->blend = moby->animationBlend;
    MB_UpdateAnimLayer(moby, layer);
}

// 0x00f0dd8 (0xd0 bytes)
/* Starts seq at frame on the layer, blending from the moby's current frame over `frames`
   frames (1 / frames is worked out with the VMX reciprocal estimate and three Newton steps). */
void MB_StartAnimLayer(MobyInstance *moby, AnimLayer *layer, s8 seq, s8 frame, int frames, int update)
{
    layer->prevSeq = moby->animationId;
    layer->blend = 0.0f;
    layer->prevFrame = moby->animationFrame;
    layer->curSeq = seq;
    layer->curFrame = frame;
    layer->speed = 1.0f;
    layer->frameScale = 1.0f / (float)frames;

    if (update) {
        MB_UpdateAnimLayer(moby, layer);
    }
}

// 0x00f0ea8 (0x74 bytes)
/* makes the manipulator drive one of the moby's animated joints */
void AttachManipulator(MobyInstance *moby, uint32_t animJoint, Manipulator *manipulator)
{
    u8 *jointData;

    if (manipulator->state != 0) {
        return;
    }

    manipulator->state = 1;
    manipulator->animJoint = (char)animJoint;
    manipulator->q.quat.w = 1.0f;
    manipulator->scale.m.x = 1.0f;
    manipulator->scale.m.y = 1.0f;
    manipulator->scale.m.z = 1.0f;

    jointData = ((u8 **)moby->pClass->anim_joints)[(u8)animJoint + 1];

    manipulator->pChain = moby->pManipulators;
    moby->pManipulators = manipulator;
    manipulator->jointId = 0x70000000 + jointData[4 + jointData[1]] * 0x40;   /* its scratchpad matrix */
}

// 0x00f0f1c (0x80 bytes)
void DetachManipulator(MobyInstance *pMoby, Manipulator *pManipulator)
{
    if (pManipulator == NULL) {
        return;
    }

    if (pMoby->pManipulators == pManipulator) {
        pMoby->pManipulators = pManipulator->pChain;
    }
    else {
        Manipulator *prev;
        Manipulator *cur = pMoby->pManipulators;

        do {
            prev = cur;
            cur = prev->pChain;

            if (cur == NULL) {
                break;
            }
        } while (cur != pManipulator);

        if (cur == pManipulator) {
            prev->pChain = pManipulator->pChain;
        }
    }

    FastMemSet(pManipulator, 0, sizeof(Manipulator));
}

// 0x00f0f9c (0x4c bytes)
/* the slot moby has in the animation cache, taking a free one if needed; -1 if full */
int AnimCache_Register(MobyInstance *moby)
{
    int i;

    for (i = 0; i < NUM_ANIM_CACHE; i++) {
        if (AnimationCacheRegistry[i] == NULL || AnimationCacheRegistry[i] == moby) {
            AnimationCacheRegistry[i] = moby;
            return i;
        }
    }

    return -1;
}

// 0x00f0fe8 (0x50 bytes)
/* drops the cache entries of mobys that were freed or play a regular sequence again */
void CleanAnimationCache(void)
{
    int i;

    for (i = 0; i < NUM_ANIM_CACHE; i++) {
        MobyInstance *moby = AnimationCacheRegistry[i];

        if (moby != NULL && ((moby->state & 0x80) != 0 || moby->updateId != NO_SEQ)) {
            AnimationCacheRegistry[i] = NULL;
        }
    }
}

// 0x00f1038 (0xdc bytes)
/* a joint's matrix in world space */
void GetBoneTransformations(MobyInstance *moby, int joint, Mtx4 *out)
{
    float scale = moby->scale;
    Mtx4 rot;

    MB_ComputeSelectedJoints(moby, 1, &joint, out);

    out->v3.x *= scale;
    out->v3.y *= scale;
    out->v3.z *= scale;

    FastMtxCopyNoTranslate(&rot, &moby->transform);
    FastVecMtx4Mul(out, &rot, out);

    out->v3.x += moby->pos.x;
    out->v3.y += moby->pos.y;
    out->v3.z += moby->pos.z;
}

// 0x00f1114 (0x124 bytes)
/* a joint's position in world space */
void GetBonePosition(MobyInstance *moby, int joint, Vec4 *out)
{
    Mtx4 jointMtx;

    MB_ComputeSelectedJoints(moby, 1, &joint, &jointMtx);

    *out = jointMtx.v3;
    MobyPointToWorld(out, moby);
}

// 0x00f1238 (0x12c bytes)
void GetMobyJointsWorldPos(MobyInstance *moby, int count, int *joints, Vec4 *out)
{
    MB_ComputeSelectedJointPos(moby, count, joints, out);

    for (; count > 0; count--) {
        MobyPointToWorld(out, moby);
        out++;
    }
}

// 0x00f1364 (0xe0 bytes)
void GetMobyJointsWorldMtx(MobyInstance *moby, int count, int *joints, Mtx4 *out)
{
    float scale = moby->scale;
    Mtx4 rot;
    int i;

    FastMtxCopyNoTranslate(&rot, &moby->transform);
    MB_ComputeSelectedJoints(moby, count, joints, out);

    for (i = 0; i < count; i++) {
        FastVecMtx4Mul(out, &rot, out);

        out->v3.x = out->v3.x * scale + moby->pos.x;
        out->v3.y = out->v3.y * scale + moby->pos.y;
        out->v3.z = out->v3.z * scale + moby->pos.z;
        out++;
    }
}

// 0x00f1444 (0x4 bytes)
void STUB_000f1444(void)
{
}

// 0x00f1448 (0x4 bytes)
void STUB_000f1448(void)
{
}

// 0x00f1478 (0x2a4 bytes)
// inlined: FastAtan2 @0xf1538
/* the direction of the light on the hero, flattened to a small tilt from straight down */
void UpdateHeroLightAngle(void)
{
    Vec4 dir;
    float angle;

    MB_GetLightDirection(g_heroMobyPtr, &dir);

    angle = FastAtan2Inline(dir.y, dir.x);

    g_HeroLightDir.z = -0.99f;
    g_HeroLightDir.y = FastSinInline(angle) * HERO_LIGHT_STRENGTH;
    g_HeroLightDir.x = FastCosInline(angle) * HERO_LIGHT_STRENGTH;
}

// 0x00f171c (0x128 bytes)
/* The moby shadow pass. The 4-byte "tags" are written byte by byte with the low byte of an
   address, as the binary does (left over from the PS2's DMA tags). */
void DrawMobyShadows(void)
{
    u8 *start;

    if (g_MobyShadowCount == 0) {
        g_pMobyShadowTag[0] = 0;
        g_pMobyShadowTag[1] = 0;
        g_pMobyShadowTag[2] = 0;
        g_pMobyShadowTag[3] = 0;
        return;
    }

    start = g_pPacket;
    g_pPacket += 16;

    g_pMobyShadowTag[0] = 0;
    g_pMobyShadowTag[1] = (u8)(u32)g_pPacket;
    g_pMobyShadowTag[2] = 0;
    g_pMobyShadowTag[3] = 0;

    STUB_001534fc();
    DrawScreenEffect_152df8(g_MobyShadowList);

    g_pPacket[0] = 0;
    g_pPacket[1] = (u8)((u32)g_pMobyShadowTag + 16);
    g_pPacket[2] = 0;
    g_pPacket[3] = 0;
    g_pPacket += 16;

    start[0] = 0;
    start[2] = 0;
    start[1] = (u8)(u32)g_pPacket;
    start[3] = 0;

    STUB_0006562c("moby shadow", 8);
}

// 0x00f1844 (0x4 bytes)
void STUB_000f1844(void)
{
}

// 0x00f1848 (0x4 bytes)
void STUB_000f1848(void)
{
}

// 0x00f184c (0x4 bytes)
void STUB_000f184c(void)
{
}

// 0x00f1850 (0xe4 bytes)
/* starts the moby passes and a new draw list for the frame */
void DrawMobyDepth(void)
{
    idol_draw::Insert_WaitCmd_Marker(&DAT_01111700, MobyDepth, 3);
    idol_draw::DrawDepth(MobyPass, idol_draw::PackCmd(0, 1, 0, 1, 0x80));
    idol_draw::DrawDepth(HUD_Pass, idol_draw::PackCmd(0, 1, 0, 1, 0x80));

    g_MobyDrawListEnd = (u8 *)(u32)idol::AllocateMemAlign(FrameHeap, MOBY_DRAW_LIST_SIZE, 16);
    g_MobyDrawListStart = g_MobyDrawListEnd;
    g_MobySkinCount = 0;
}

// 0x00f1934 (0x40 bytes)
void MB_AddToDrawList(MobyInstance *moby, int flags)
{
    g_MobyDrawListEnd = MB_BuildDrawEntry(moby, g_MobyDrawListEnd, flags, 0);
}

// 0x00f1974 (0x104 bytes)
void DrawMobyList(void)
{
    STUB_00065630("moby draw", 3);
    STUB_0006562c("moby draw", 5);

    if (g_DebugEnables[DEBUG_DRAW_MOBYS]) {
        MB_DrawEntryList(g_MobyDrawListStart, (g_MobyDrawListEnd - g_MobyDrawListStart) / MOBY_DRAW_ENTRY_SIZE);

        if (g_MobySkinCount != 0) {
            STUB_000f5a7c();
        }
    }

    STUB_0006562c("moby skin", 3);

    if (g_DebugEnables[DEBUG_DRAW_MOBYS] && g_pMobyShadowTag != NULL) {
        DrawMobyShadows();
    }

    idol_draw::RsxCmd_WritePass(ForwardPass);
    idol_draw::RsxCmd_WritePass(DepthPass);
}

// 0x00f1a78 (0x1f8 bytes)
/* every moby, in one go (DrawMobyDepth, the whole moby list, DrawMobyList; all inlined) */
void DrawMobys(void)
{
    DrawMobyDepth();

    if (g_DebugEnables[DEBUG_DRAW_MOBYS]) {
        g_MobyDrawListEnd = MB_BuildDrawEntry(g_MobyInstance, g_MobyDrawListEnd, -1, 1);
    }

    DrawMobyList();
}

// 0x00f1c78 (0x1d8 bytes)
/* Lights the moby from the nearest environment sample within 8 units, and takes that sample's
   fog and music if it has them. */
void MB_SetLightsFromEnvSample(MobyInstance *moby)
{
    EnvSample *sample;
    float best = 999999.0f;
    int found = -1;
    int i;

    for (i = 0; i < g_EnvSampleCount; i++) {
        EnvSample *candidate = &g_EnvSamples[i];
        float dx = moby->pos.x - candidate->x;
        float dy = moby->pos.y - candidate->y;
        float dz = moby->pos.z - candidate->z;
        float dist = sqrtf(dz * dz + (dx * dx + dy * dy));

        if (dist < best && dist <= ENV_SAMPLE_RANGE) {
            best = dist;
            found = i;
        }
    }

    if (found == -1) {
        printf("TJB - No env sample point found!\n");
        return;
    }

    sample = &g_EnvSamples[found];
    moby->colorManipulator = sample->blue * 0x10000 + sample->green * 0x100 + sample->red;
    MB_SetLights(moby, moby->colorManipulator, 0, 0, 0);
    moby->light = g_EnvSamples[found].light;

    sample = &g_EnvSamples[found];

    if (sample->setsFog) {
        DAT_009637c4 = sample->fogColor;
        DAT_009637c8 = sample->fog0;
        DAT_009637c9 = sample->fog1;
        DAT_009637cb |= 7;
        DAT_009637ca = sample->fog2;
    }

    if (sample->musicTrack < 0) {
        return;
    }

    if (g_MusicPlaying.status == 0 && g_PendingTrack == -1 && g_TransitionState == 0) {
        g_MusicPlaying.track = sample->musicTrack;
    }
}

// 0x00f1e50 (0x34 bytes)
void SetLevelFlag(int arg)
{
    if (arg != 0xff) {
        g_LevelFlags[Level][arg] = -1;
    }
}
