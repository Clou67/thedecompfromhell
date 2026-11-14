#include "rc1.h"
// MERGE
#include "idol/fastinline.h"
#include <cell/gcm/gcm_macros.h>
#include <cell/gcm/gcm_enum.h>
// game/mobyproc.cpp -- reconstructed from NPEA00385 EBOOT
// 39 functions, 0xf1e84-0xfbf40: per-moby processing. A moby's lights, its cells in the moby
// grid, its transform and bounding sphere after an update, and the animation pipeline: joint
// poses (rotation, scale, translation) built from the sequence frames, the anim layers and
// manipulators on top, and the joint matrices from those.

#define MOBY_GRID_NONE 0x80807f7f   /* a grid rect that takes the moby out of the grid */

// 0x00f1e84 (0x14 bytes)
void SECTION_HEADER_MOBYPROC(void)
{
    g_MobyProcSectionWord = 0x10000;
}

// 0x00f1ea0 (0x28 bytes)
/* DL's SetMobyLights: the ambient colour, the two directional lights (indices into
   DirectionalLights) and the blend between them (0..255) */
void SetMobyLights(MobyInstance *moby, int ambient, int light1, int light2, int blend)
{
    *(u64 *)&moby->color = (u64)ambient << 32 | (light1 | light2 << 8 | blend << 16);
}

// 0x00f1ec8 (0x28 bytes)
/* DL's SetMobyAmbientLights: the ambient colour's r, g, b (its top byte cleared) */
void SetMobyAmbientLights(MobyInstance *moby, u64 red, u64 green, u64 blue)
{
    u64 lights = *(u64 *)&moby->color;

    *(u64 *)&moby->color = (u32)lights | red << 32 | green << 40 | blue << 48;
}

// 0x00f1ef0 (0x2c bytes)
/* DL's GetMobyAmbientLights */
void GetMobyAmbientLights(MobyInstance *moby, u32 *red, u32 *green, u32 *blue)
{
    u64 lights = *(u64 *)&moby->color;

    *red = (u32)(lights >> 32) & 0xff;
    *green = (u32)(lights >> 40) & 0xff;
    *blue = (u32)(lights >> 48) & 0xff;
}

// 0x00f1f28 (0xe0 bytes)
/* DL's GetMobyLightVector: the moby's light direction, its two lights' directions blended (the
   w only without a blend) */
void GetMobyLightVector(MobyInstance *moby, Vec4 *out)
{
    u64 lights = *(u64 *)&moby->color;
    u32 blend = (u32)(lights >> 16) & 0xffff;
    DirectionalLight *light1 = &DirectionalLights[lights & 0xff];
    DirectionalLight *light2 = &DirectionalLights[(lights >> 8) & 0xff];

    if (blend == 0) {
        *out = light1->direction1;
        return;
    }

    float t = (float)blend * (1.0f / 255.0f);
    float s = 1.0f - t;

    out->x = light1->direction1.x * s + light2->direction1.x * t;
    out->y = light1->direction1.y * s + light2->direction1.y * t;
    out->z = light1->direction1.z * s + light2->direction1.z * t;
}

// 0x00f2010 (0xdc bytes)
/* DL's GetMobyLightColor: the same for the lights' colours */
void GetMobyLightColor(MobyInstance *moby, Vec4 *out)
{
    u64 lights = *(u64 *)&moby->color;
    u32 blend = (u32)(lights >> 16) & 0xffff;
    DirectionalLight *light1 = &DirectionalLights[lights & 0xff];
    DirectionalLight *light2 = &DirectionalLights[(lights >> 8) & 0xff];

    if (blend == 0) {
        *out = light1->color1;
        return;
    }

    float t = (float)blend * (1.0f / 255.0f);
    float s = 1.0f - t;

    out->x = light1->color1.x * s + light2->color1.x * t;
    out->y = light1->color1.y * s + light2->color1.y * t;
    out->z = light1->color1.z * s + light2->color1.z * t;
}

// 0x00f20f0 (0x60 bytes)
/* DL's DistBetweenMobyBspheres: the gap between two bounding spheres, in world units (spheres are
   in 1/1024 units) */
float DistBetweenMobyBspheres(BSphere *a, BSphere *b)
{
    float dx = a->x - b->x;
    float dy = a->y - b->y;
    float dz = a->z - b->z;

    return (sqrtf(dx * dx + dy * dy + dz * dz) - (a->rad + b->rad)) * (1.0f / 1024.0f);
}

// 0x00f2150 (0x68 bytes)
/* frees count blocks of the moby grid lists from start */
void MobyGrid_Free(int start, int count)
{
    for (int block = start; block < start + count; block++) {
        MobyGridAlloc[block >> 5] &= ~(1 << (block % 32));
    }
}

/* count free blocks in a row inside one 32-block word, the first fit at a multiple of count; does
   not return when there is none */
static inline int MobyGridAllocBlocks(int count)
{
    u32 *word = MobyGridAlloc;

    for (int base = 0; ; base += 32, word++) {
        u32 used = *word;

        if (used == 0xffffffff) {
            continue;
        }

        int bit;
        u32 mask;

        for (bit = 0; mask = ((1 << count) - 1) << bit, (used & mask) != 0; bit += count) {
        }

        if (bit != 32) {
            *word = used | mask;
            return base + bit;
        }
    }
}

// 0x00f21b8 (0x6c bytes)
int MobyGrid_Alloc(int count)
{
    return MobyGridAllocBlocks(count);
}

// 0x00f2224 (0x198 bytes)
/* DL's FreeMobyGridLists: halves a grid cell's list (moving it), or empties it at one block */
void FreeMobyGridLists(MobyGridCell *cell)
{
    MobyGrid_Free(cell->listStart, (u8)cell->blocks);

    int half = (u8)cell->blocks >> 1;

    if (half == 0) {
        g_MobyGridLists[cell->listStart][0] = 0;
        g_MobyGridLists[cell->listStart][1] = 0;
        cell->listStart = 0;
        cell->blocks = half;
        return;
    }

    short start = (short)MobyGridAllocBlocks(half);
    u32 *dst = (u32 *)g_MobyGridLists[start];
    u32 *src = (u32 *)g_MobyGridLists[cell->listStart];

    for (int words = half * 8; words > 0; words--) {
        *dst++ = *src++;
    }

    cell->listStart = start;
    cell->blocks = half;
}

// 0x00f23bc (0x18c bytes)
/* DL's AllocMobyGridLists: doubles a grid cell's list (one block for an empty cell), moving it */
void AllocMobyGridLists(MobyGridCell *cell)
{
    int blocks = (u8)cell->blocks << 1 > 1 ? (u8)cell->blocks << 1 : 1;
    short start = (short)MobyGridAllocBlocks(blocks & 0xff);

    if ((u8)cell->blocks != 0) {
        MobyGrid_Free(cell->listStart, (u8)cell->blocks);

        u32 *dst = (u32 *)g_MobyGridLists[start];
        u32 *src = (u32 *)g_MobyGridLists[cell->listStart];

        for (int words = (u8)cell->blocks * 8; words > 0; words--) {
            *dst++ = *src++;
        }
    }

    cell->listStart = start;
    cell->blocks = (char)blocks;
}

// 0x00f2548 (0x34 bytes)
/* the word's bytes reversed (through memory) */
u32 ByteSwap32(u64 value)
{
    u8 bytes[4];

    bytes[0] = (u8)value;
    bytes[1] = (u8)(value >> 8);
    bytes[2] = (u8)(value >> 16);
    bytes[3] = (u8)(value >> 24);
    return *(u32 *)bytes;
}

// 0x00f257c (0x78 bytes)
/* (x, y) is inside rect (bytes min x, min y, max x, max y; inclusive) */
int MB_PointInByteRect(int x, int y, u32 rect)
{
    s8 *bytes = (s8 *)&rect;

    if (bytes[0] > x) {
        return 0;
    }

    if (bytes[2] < x) {
        return 0;
    }

    if (bytes[1] > y) {
        return 0;
    }

    if (bytes[3] < y) {
        return 0;
    }

    return 1;
}

// 0x00f25f4 (0x3bc bytes)
/* DL's UpdateMobyGrids: moves the moby from the cells of its grid rect (gridMinX..gridMaxY) to
   the cells of newRect, touching only the cells not in both. MOBY_GRID_NONE takes it out. */
void UpdateMobyGrids(MobyInstance *moby, u32 newRect)
{
    if (newRect == MOBY_GRID_NONE) {
        newRect = ByteSwap32(newRect);
    }

    /* (gridMaxY < 0: not in the grid) */
    if ((int)ByteSwap32(moby->collCount) >= 0) {
        for (int y = (u8)moby->gridMinY; y < (u8)moby->gridMaxY + 1; y++) {
            for (int x = (u8)moby->gridMinX; x < (u8)moby->gridMaxX + 1; x++) {
                if (MB_PointInByteRect(x, y, newRect)) {
                    continue;
                }

                MobyGridCell *cell = &g_MobyGrid[y * 64 + x];
                short *list = g_MobyGridLists[cell->listStart];
                short *entry = list;

                while (*entry != (int)moby->index) {
                    entry++;
                }

                *entry = list[(u8)cell->count - 1];
                list[(u8)cell->count - 1] = 0;

                int blocks = (u8)cell->blocks;
                int count = (u8)(cell->count - 1);

                cell->count = (char)count;

                if (count == 0 || (count < blocks * 8 - 4 && blocks != 1)) {
                    FreeMobyGridLists(cell);
                }
            }
        }
    }

    u32 oldRect = moby->collCount;

    moby->collCount = newRect;

    if ((int)ByteSwap32(newRect) < 0) {
        return;
    }

    for (int y = (u8)moby->gridMinY; y < (u8)moby->gridMaxY + 1; y++) {
        for (int x = (u8)moby->gridMinX; x < (u8)moby->gridMaxX + 1; x++) {
            if (MB_PointInByteRect(x, y, oldRect)) {
                continue;
            }

            MobyGridCell *cell = &g_MobyGrid[y * 64 + x];

            if ((u8)cell->count >= (u8)cell->blocks * 16 || (u8)cell->blocks == 0) {
                AllocMobyGridLists(cell);
            }

            g_MobyGridLists[cell->listStart][(u8)cell->count] = (short)moby->index;
            cell->count++;
        }
    }
}

// 0x00f29b8 (0x6e0 bytes)
/* DL's PostUpdateMobyBsphere: the moby's transform (rotation from rot; mirrored mobys flip its
   y row) and its bounding sphere: the sequence's sphere (blended between the previous and current
   sequence; sequence 255 takes a sphere from 0xa34600) scaled, turned and moved to pos (the
   sphere is in 1/1024 units). transform.v3 caches the current sequence's sphere. Then the moby's
   grid rect from the sphere (cells of 16 units), which moves it in the grid if it changed and is
   in range. handle counts the calls (guess). */
void PostUpdateMobyBsphere(MobyInstance *moby, Mtx4 rot)
{
    int prevSeq = moby->updateId;
    int seq = moby->animationId;
    Vec4 sphere;

    if (prevSeq == seq) {
        if (prevSeq == (u8)moby->unk71) {
            sphere = moby->transform.v3;
        }
        else {
            moby->unk71 = (char)prevSeq;
            sphere = *(Vec4 *)&moby->pClass->seqs[prevSeq]->bSphere;
            moby->transform.v3 = sphere;
        }
    }
    else {
        if (prevSeq == 255) {
            sphere = ((Vec4 *)&DAT_00a34600)[(u8)moby->previousAnimationFrame];
        }
        else {
            sphere = *(Vec4 *)&moby->pClass->seqs[prevSeq]->bSphere;
        }

        float blend = moby->animationBlend;
        Vec4 *next = (Vec4 *)&moby->pClass->seqs[seq & 0xff]->bSphere;

        sphere.x = blend * next->x + sphere.x - blend * sphere.x;
        sphere.y = blend * next->y + sphere.y - blend * sphere.y;
        sphere.z = blend * next->z + sphere.z - blend * sphere.z;
        sphere.w = blend * next->w + sphere.w - blend * sphere.w;
    }

    if (moby->modeBits & MIRROR) {
        rot.v1.x = -rot.v1.x;
        rot.v1.y = -rot.v1.y;
        rot.v1.z = -rot.v1.z;
        rot.v1.w = -rot.v1.w;
    }

    moby->transform.v0 = rot.v0;
    moby->transform.v1 = rot.v1;
    moby->transform.v2 = rot.v2;

    float scale = moby->scale;

    sphere.x = sphere.x * scale;
    sphere.y = sphere.y * scale;
    sphere.z = sphere.z * scale;
    moby->bSphere.rad = sphere.w * scale;
    moby->bSphere.x = rot.v0.x * sphere.x + rot.v1.x * sphere.y + rot.v2.x * sphere.z + rot.v3.x + moby->pos.x * 1024.0f;
    moby->bSphere.y = rot.v0.y * sphere.x + rot.v1.y * sphere.y + rot.v2.y * sphere.z + rot.v3.y + moby->pos.y * 1024.0f;
    moby->bSphere.z = rot.v0.z * sphere.x + rot.v1.z * sphere.y + rot.v2.z * sphere.z + rot.v3.z + moby->pos.z * 1024.0f;
    moby->handle++;

    if (moby->collision == NULL) {
        return;
    }

    int x = (int)moby->bSphere.x;
    int y = (int)moby->bSphere.y;
    int radius = (int)moby->bSphere.rad;
    s8 rect[4];

    rect[0] = (s8)((x - radius) >> 14);
    rect[1] = (s8)((y - radius) >> 14);
    rect[2] = (s8)((x + radius) >> 14);
    rect[3] = (s8)((y + radius) >> 14);

    u32 newRect = *(u32 *)rect;

    if (moby->collCount != newRect && (newRect & 0xc0c00000) == 0) {
        UpdateMobyGrids(moby, newRect);
    }
}

/* the moby's current rotation rows with no translation */
static inline void PostUpdateMobyKeepRotation(MobyInstance *moby)
{
    Mtx4 rot;

    rot.v0 = moby->transform.v0;
    rot.v1 = moby->transform.v1;
    rot.v2 = moby->transform.v2;
    rot.v3.x = 0.0f;
    rot.v3.y = 0.0f;
    rot.v3.z = 0.0f;
    rot.v3.w = 1.0f;
    PostUpdateMobyBsphere(moby, rot);
}

// 0x00f30a0 (0xfc bytes)
/* PostUpdateMobyBsphere with the moby's rotation as it is (mobys with updateDistance < 0 are
   skipped) */
void PostUpdateMobyLockTransform(MobyInstance *moby)
{
    if (moby->updateDistance < 0) {
        return;
    }

    PostUpdateMobyKeepRotation(moby);
}

// 0x00f31a8 (0x340 bytes)
/* DL's PostUpdateMoby: the rotation matrix from the moby's euler angles (x, then y, then z), or
   the rotation it has with LOCK_ROTATION, then PostUpdateMobyBsphere */
void UpdateMobyTransform(MobyInstance *moby)
{
    if (moby->updateDistance < 0) {
        return;
    }

    if (moby->modeBits & LOCK_ROTATION) {
        PostUpdateMobyKeepRotation(moby);
        return;
    }

    float sinX = std::_FSin(moby->rotation.x, 0);
    float cosX = std::_FSin(moby->rotation.x, 1);
    float sinY = std::_FSin(moby->rotation.y, 0);
    float cosY = std::_FSin(moby->rotation.y, 1);
    float sinZ = std::_FSin(moby->rotation.z, 0);
    float cosZ = std::_FSin(moby->rotation.z, 1);
    Mtx4 rot;

    rot.v0.x = cosY * cosZ;
    rot.v0.y = cosY * sinZ;
    rot.v0.z = -sinY;
    rot.v0.w = 0.0f;
    rot.v1.x = sinX * (cosZ * sinY) - cosX * sinZ;
    rot.v1.y = sinX * (sinY * sinZ) + cosX * cosZ;
    rot.v1.z = cosY * sinX;
    rot.v1.w = 0.0f;
    rot.v2.x = cosX * (cosZ * sinY) + sinX * sinZ;
    rot.v2.y = cosX * (sinY * sinZ) - cosZ * sinX;
    rot.v2.z = cosX * cosY;
    rot.v2.w = 0.0f;
    rot.v3.x = 0.0f;
    rot.v3.y = 0.0f;
    rot.v3.z = 0.0f;
    rot.v3.w = 1.0f;
    PostUpdateMobyBsphere(moby, rot);
}

// 0x00f34e8 (0x11c bytes)
/* DL's AnimResolveMats: the joint matrices (into g_AnimJointMats) from count joint poses, each
   under its parent's; only joints with a set byte in posed are built */
Mtx4 *AnimResolveMats(JointPose *pose, u32 count, u8 *posed)
{
    for (u32 i = 0; i < count; i++, pose++) {
        if (posed[i] == 0) {
            continue;
        }

        Mtx4 local;
        Mtx4 *out = &g_AnimJointMats[i];

        FastQSTToMtx4(&pose->rot, (Vec4 *)pose->scale, (Vec4 *)pose->trans, &local);

        if (pose->parent == 0) {
            *out = local;
        }
        else {
            FastVecMtx4Mul(out, (Mtx4 *)((u8 *)g_AnimJointMats + (pose->parent & 0x0fffffc0)), &local);
        }
    }

    return g_AnimJointMats;
}

/* a + b, through FastVecAdd */
static inline Vec4 PoseVecAdd(Vec4 a, Vec4 b)
{
    Vec4 sum;

    FastVecAdd((float *)&sum, (float *)&a, (float *)&b);
    return sum;
}

/* v * s, through FastVecScale */
static inline Vec4 PoseVecScale(Vec4 v, float s)
{
    Vec4 out;

    FastVecScale(s, (float *)&out, (float *)&v);
    return out;
}

/* to * t + from * (1 - t) on the short way round, normalised (unless it is zero) */
static inline Vec4 PoseQuatLerp(Vec4 to, Vec4 from, float t, float s)
{
    Vec4 q;

    if (to.x * from.x + to.y * from.y + to.z * from.z + to.w * from.w >= 0.0f) {
        q = PoseVecAdd(PoseVecScale(to, t), PoseVecScale(from, s));
    }
    else {
        Vec4 flipped = PoseVecScale(from, -1.0f);

        q = PoseVecAdd(PoseVecScale(to, t), PoseVecScale(flipped, s));
    }

    float length2 = q.x * q.x + q.y * q.y + q.z * q.z + q.w * q.w;

    if (length2 > 0.0f) {
        q = PoseVecScale(q, 1.0f / sqrtf(length2));
    }

    return q;
}

// 0x00f3618 (0x508 bytes)
/* DL's ProcessManipulators: each manipulator in the chain changes its joint's pose. An absolute
   one blends the pose toward its rotation, scale and translation (1/1024 units) by interp; the
   others add theirs (rotation multiplied, scale multiplied, translation added). */
void ProcessManipulators(Manipulator *manip, JointPose *poses)
{
    for (; manip != NULL; manip = manip->pChain) {
        JointPose *pose = (JointPose *)((u8 *)poses + (manip->jointId & 0x0fffffc0));
        Vec4 poseRot = pose->rot;
        Vec4 manipRot = manip->q.quat;
        Vec4 manipTrans = PoseVecScale(manip->trans.m, 1.0f / 1024.0f);
        float poseScale[3] = { pose->scale[0], pose->scale[1], pose->scale[2] };
        float poseTrans[3] = { pose->trans[0], pose->trans[1], pose->trans[2] };
        float manipScale[3] = { manip->scale.m.x, manip->scale.m.y, manip->scale.m.z };

        if (manip->absolute != 0) {
            float t = manip->interp;
            float s = 1.0f - t;

            pose->rot = PoseQuatLerp(manipRot, poseRot, t, s);
            pose->scale[0] = t * manipScale[0] + s * poseScale[0];
            pose->scale[1] = t * manipScale[1] + s * poseScale[1];
            pose->scale[2] = t * manipScale[2] + s * poseScale[2];
            pose->trans[0] = manipTrans.x * t + s * poseTrans[0];
            pose->trans[1] = manipTrans.y * t + s * poseTrans[1];
            pose->trans[2] = manipTrans.z * t + s * poseTrans[2];
            continue;
        }

        pose->scale[0] = poseScale[0] * manipScale[0];
        pose->scale[1] = poseScale[1] * manipScale[1];
        pose->scale[2] = poseScale[2] * manipScale[2];
        pose->trans[0] = poseTrans[0] + manipTrans.x;
        pose->trans[1] = poseTrans[1] + manipTrans.y;
        pose->trans[2] = poseTrans[2] + manipTrans.z;

        /* manip rotation * pose rotation */
        Vec4 a = poseRot;
        Vec4 b = manipRot;

        pose->rot.w = a.w * b.w - (a.x * b.x + a.y * b.y + a.z * b.z);
        pose->rot.x = a.x * b.w + b.x * a.w + (b.y * a.z - a.y * b.z);
        pose->rot.y = a.y * b.w + b.y * a.w + (b.z * a.x - a.z * b.x);
        pose->rot.z = a.z * b.w + b.z * a.w + (b.x * a.y - a.x * b.y);
    }
}

// 0x00f3b30 (0x464 bytes)
/* DL's ProcessAnimLayers: each layer blends its joints' poses over the moby's by its weight; a
   joint the moby poses takes the layer's changed flag */
void ProcessAnimLayers(AnimLayer *layer, JointPose *poses)
{
    for (; layer != NULL; layer = layer->next) {
        float t = layer->weight;
        float s = 1.0f - t;
        AnimLayerJoint *entry = (AnimLayerJoint *)layer->jointBuf;

        for (u32 i = 0; i < (u32)(short)layer->jointCount; i++, entry++) {
            JointPose *pose = &poses[entry->joint];
            Vec4 poseRot = pose->rot;
            float poseScale[3] = { pose->scale[0], pose->scale[1], pose->scale[2] };
            float poseTrans[3] = { pose->trans[0], pose->trans[1], pose->trans[2] };

            pose->rot = PoseQuatLerp(entry->rot, poseRot, t, s);
            pose->scale[0] = entry->scale[0] * t + s * poseScale[0];
            pose->scale[1] = entry->scale[1] * t + s * poseScale[1];
            pose->scale[2] = entry->scale[2] * t + s * poseScale[2];
            pose->trans[0] = entry->trans[0] * t + s * poseTrans[0];
            pose->trans[1] = entry->trans[1] * t + s * poseTrans[1];
            pose->trans[2] = entry->trans[2] * t + s * poseTrans[2];

            if (pose->changed != 0) {
                pose->changed = entry->changed;
            }
        }
    }
}

/* a scale key of a frame (8 bytes): 4.12 values, the joint, and < 0 to use it */
typedef struct FrameScaleKey {
    u16 x;
    u16 y;
    u16 z;
    u8 joint;
    s8 use;
} FrameScaleKey;

/* a translation key (8 bytes), 1/1024 units */
typedef struct FrameTransKey {
    s16 x;
    s16 y;
    s16 z;
    s8 joint;
    s8 unk7;
} FrameTransKey;

/* a pose entry while AnimDecompInterp gathers the two frames' keys (the JointPose it becomes;
   the links are 32-bit pointers in the vectors' w) */
typedef struct JointKeys {
    float fromScale[3];      /* 0x00  (the rotation in the end) */
    u32 nextScale;           /* 0x0c */
    float toScale[3];        /* 0x10  the blended scale in the end */
    int changed;             /* 0x1c */
    float fromTrans[3];      /* 0x20  the blended translation in the end */
    u32 parent;              /* 0x2c */
    float toTrans[3];        /* 0x30 */
    u32 nextTrans;           /* 0x3c */
} JointKeys;

/* the scale keys with use >= 0 go to a scratch table nothing reads */
typedef struct UnusedScaleKeys {
    float from[3];
    u32 next;
    float to[3];
    u32 linked;
} UnusedScaleKeys;

#define FRAME_KEYS(frame, offset) ((u8 *)(frame) + (u16)(offset) + 0x10)

/* The key part of AnimDecompInterp (count > 0): every joint starts at scale 1 and its common
   translation (bindTrans, whose w is the parent offset), then the two frames' scale keys with
   use < 0 (in the to frame only those of joints already linked) and their translation keys are
   blended into toScale and fromTrans. Scale keys with use >= 0 go to the unused table, whose list
   is returned. */
static inline UnusedScaleKeys *AnimDecompKeys(JointKeys *keys, UnusedScaleKeys *unused, float t, u32 count, Vec4 *bindTrans, MobyFrame *from, MobyFrame *to)
{
    float s = 1.0f - t;

    for (u32 i = 0; i < count; i++) {
        JointKeys *key = &keys[i];

        key->fromScale[0] = 1.0f;
        key->fromScale[1] = 1.0f;
        key->fromScale[2] = 1.0f;
        *(float *)&key->nextScale = 1.0f;
        key->toScale[0] = 1.0f;
        key->toScale[1] = 1.0f;
        key->toScale[2] = 1.0f;
        key->changed = 0;
        *(Vec4 *)key->fromTrans = bindTrans[i];
        *(Vec4 *)key->toTrans = bindTrans[i];
        key->nextTrans = 0;

        unused[i].from[0] = unused[i].from[1] = unused[i].from[2] = 1.0f;
        *(float *)&unused[i].next = 1.0f;
        unused[i].to[0] = unused[i].to[1] = unused[i].to[2] = 1.0f;
        *(float *)&unused[i].linked = 1.0f;
    }

    JointKeys *scaleHead = NULL;
    JointKeys *scaleTail = NULL;
    JointKeys *transHead = NULL;
    JointKeys *transTail = NULL;
    UnusedScaleKeys *unusedHead = NULL;
    UnusedScaleKeys *unusedTail = NULL;

    /* the from frame's keys */
    FrameScaleKey *scaleKey = (FrameScaleKey *)FRAME_KEYS(from, from->jointBytes);

    for (u32 k = 0; k < (u16)from->scaleKeys; k++, scaleKey++) {
        float x = (float)(scaleKey->x << 3) * (1.0f / 32768.0f);
        float y = (float)(scaleKey->y << 3) * (1.0f / 32768.0f);
        float z = (float)(scaleKey->z << 3) * (1.0f / 32768.0f);

        if (scaleKey->use < 0) {
            JointKeys *key = &keys[scaleKey->joint];

            if (scaleHead == NULL) {
                scaleHead = key;
            }
            else {
                scaleTail->nextScale = (u32)(uintptr_t)key;
            }

            scaleTail = key;
            key->fromScale[0] = x;
            key->fromScale[1] = y;
            key->fromScale[2] = z;
            key->changed = 1;
        }
        else {
            UnusedScaleKeys *entry = &unused[scaleKey->joint];

            if (unusedHead == NULL) {
                unusedHead = entry;
            }
            else {
                unusedTail->next = (u32)(uintptr_t)entry;
            }

            unusedTail = entry;
            entry->from[0] = x;
            entry->from[1] = y;
            entry->from[2] = z;
        }
    }

    FrameTransKey *transKey = (FrameTransKey *)FRAME_KEYS(from, from->transOffset);

    for (u32 k = 0; k < (u16)from->transKeys; k++, transKey++) {
        JointKeys *key = &keys[transKey->joint];

        key->fromTrans[0] = (float)transKey->x * (1.0f / 1024.0f);
        key->fromTrans[1] = (float)transKey->y * (1.0f / 1024.0f);
        key->fromTrans[2] = (float)transKey->z * (1.0f / 1024.0f);

        if (transHead == NULL) {
            transTail = key;
            transHead = key;
        }
        else {
            transTail->nextTrans = (u32)(uintptr_t)key;
            transTail = key;
            key->nextTrans = 0;
        }
    }

    /* the to frame's keys; a joint joins a list only if its link is still 0 */
    scaleKey = (FrameScaleKey *)FRAME_KEYS(to, to->jointBytes);

    for (u32 k = 0; k < (u16)to->scaleKeys; k++, scaleKey++) {
        float x = (float)(scaleKey->x << 3) * (1.0f / 32768.0f);
        float y = (float)(scaleKey->y << 3) * (1.0f / 32768.0f);
        float z = (float)(scaleKey->z << 3) * (1.0f / 32768.0f);

        if (scaleKey->use < 0) {
            JointKeys *key = &keys[scaleKey->joint];

            key->toScale[0] = x;
            key->toScale[1] = y;
            key->toScale[2] = z;
            key->changed = 1;

            if (key->nextScale != 0) {
                continue;
            }

            if (scaleHead == NULL) {
                scaleHead = key;
            }
            else {
                scaleTail->nextScale = (u32)(uintptr_t)key;
            }

            scaleTail = key;
        }
        else {
            UnusedScaleKeys *entry = &unused[scaleKey->joint];

            entry->to[0] = x;
            entry->to[1] = y;
            entry->to[2] = z;

            if (entry->linked != 0) {
                continue;
            }

            if (unusedHead == NULL) {
                unusedHead = entry;
            }
            else {
                unusedTail->next = (u32)(uintptr_t)entry;
            }

            unusedTail = entry;
        }
    }

    if (scaleTail != NULL) {
        scaleTail->nextScale = 0;
    }

    if (unusedTail != NULL) {
        unusedTail->next = 0;
    }

    transKey = (FrameTransKey *)FRAME_KEYS(to, to->transOffset);

    for (u32 k = 0; k < (u16)to->transKeys; k++, transKey++) {
        JointKeys *key = &keys[transKey->joint];

        key->toTrans[0] = (float)transKey->x * (1.0f / 1024.0f);
        key->toTrans[1] = (float)transKey->y * (1.0f / 1024.0f);
        key->toTrans[2] = (float)transKey->z * (1.0f / 1024.0f);

        if (key->nextTrans != 0) {
            continue;
        }

        if (transHead == NULL) {
            transTail = key;
            transHead = key;
        }
        else {
            transTail->nextTrans = (u32)(uintptr_t)key;
            transTail = key;
            key->nextTrans = 0;
        }
    }

    /* the blends: scale into toScale, translation into fromTrans */
    for (JointKeys *key = scaleHead; key != NULL; key = (JointKeys *)(uintptr_t)key->nextScale) {
        for (int axis = 0; axis < 3; axis++) {
            key->toScale[axis] = key->fromScale[axis] * s + key->toScale[axis] * t;
        }
    }

    for (JointKeys *key = transHead; key != NULL; key = (JointKeys *)(uintptr_t)key->nextTrans) {
        for (int axis = 0; axis < 3; axis++) {
            key->fromTrans[axis] = key->fromTrans[axis] * s + key->toTrans[axis] * t;
        }
    }

    return unusedHead;
}

/* every joint's rotation (4 signed shorts a joint, 1/32768 units) blended the short way round and
   normalised */
static inline void AnimDecompRotations(JointPose *poses, float t, u32 count, MobyFrame *from, MobyFrame *to)
{
    float s = 1.0f - t;
    s16 *fromRot = (s16 *)(from + 1);
    s16 *toRot = (s16 *)(to + 1);

    for (u32 i = 0; i < count; i++, fromRot += 4, toRot += 4) {
        Vec4 a;
        Vec4 b;

        a.x = (float)fromRot[0] * (1.0f / 32768.0f);
        a.y = (float)fromRot[1] * (1.0f / 32768.0f);
        a.z = (float)fromRot[2] * (1.0f / 32768.0f);
        a.w = (float)fromRot[3] * (1.0f / 32768.0f);
        b.x = (float)toRot[0] * (1.0f / 32768.0f);
        b.y = (float)toRot[1] * (1.0f / 32768.0f);
        b.z = (float)toRot[2] * (1.0f / 32768.0f);
        b.w = (float)toRot[3] * (1.0f / 32768.0f);
        poses[i].rot = PoseQuatLerp(a, b, s, t);
    }
}

// 0x00f3fe0 (0x1844 bytes)
/* DL's AnimDecompInterp: the count joint poses (into g_AnimPoses) between two frames of a
   sequence, t of the way from from to to (AnimDecompKeys, then the rotations). count2 is not
   used. */
JointPose *AnimDecompInterp(float t, u32 count, u32 count2, Vec4 *bindTrans, MobyFrame *from, MobyFrame *to)
{
    UnusedScaleKeys unused[129];

    if (count == 0) {
        return g_AnimPoses;
    }

    AnimDecompKeys((JointKeys *)g_AnimPoses, unused, t, count, bindTrans, from, to);
    AnimDecompRotations(g_AnimPoses, t, count, from, to);
    return g_AnimPoses;
}

// 0x00f5824 (0xb4 bytes)
/* the moby's joint poses for its current blend, with its anim layers if useLayers and its
   manipulators if useManipulators */
JointPose *MB_ComputeAnimDirect(MobyInstance *moby, u8 useLayers, u8 useManipulators)
{
    MobyClass *pClass = moby->pClass;
    JointPose *poses = AnimDecompInterp(moby->animationBlend, pClass->joint_cnt, pClass->joint_cnt, (Vec4 *)pClass->common_trans, (MobyFrame *)moby->pPreviousAnimationData, (MobyFrame *)moby->pCurrentAnimationData);

    if (moby->pAnimationLayers != NULL && useLayers != 0) {
        ProcessAnimLayers((AnimLayer *)moby->pAnimationLayers, poses);
    }

    if (moby->pManipulators != NULL && useManipulators != 0) {
        ProcessManipulators(moby->pManipulators, poses);
    }

    return poses;
}

// 0x00f58d8 (0x84 bytes)
/* the moby's joint poses with its anim layers and manipulators */
JointPose *ComputeAnimation(MobyInstance *moby)
{
    MobyClass *pClass = moby->pClass;
    JointPose *poses = AnimDecompInterp(moby->animationBlend, pClass->joint_cnt, pClass->joint_cnt, (Vec4 *)pClass->common_trans, (MobyFrame *)moby->pPreviousAnimationData, (MobyFrame *)moby->pCurrentAnimationData);

    if (moby->pAnimationLayers != NULL) {
        ProcessAnimLayers((AnimLayer *)moby->pAnimationLayers, poses);
    }

    if (moby->pManipulators != NULL) {
        ProcessManipulators(moby->pManipulators, poses);
    }

    return poses;
}

// 0x00f595c (0x118 bytes)
/* every joint's position (its matrix's translation row) into out; unused is not read */
void Moby_BuildJointMatrices(MobyInstance *moby, int unused, Vec4 *out)
{
    MobyClass *pClass = moby->pClass;
    int count = pClass->joint_cnt;
    JointPose *poses = AnimDecompInterp(moby->animationBlend, count, count, (Vec4 *)pClass->common_trans, (MobyFrame *)moby->pPreviousAnimationData, (MobyFrame *)moby->pCurrentAnimationData);
    u8 posed[129];

    if (moby->pAnimationLayers != NULL) {
        ProcessAnimLayers((AnimLayer *)moby->pAnimationLayers, poses);
    }

    if (moby->pManipulators != NULL) {
        ProcessManipulators(moby->pManipulators, poses);
    }

    memset(posed, 1, 129);

    Mtx4 *mats = AnimResolveMats(poses, count, posed);

    for (int i = 0; i < count; i++) {
        out[i] = mats[i].v3;
    }
}

// 0x00f5a74 (0x8 bytes)
int STUB_000f5a74(...)
{
    return 0;
}

// 0x00f5a7c (0x4 bytes)
void STUB_000f5a7c(...)
{
}

/* the joint matrix constants at 0xf5a80 */
static const vector unsigned char kPermYZXW = { 4, 5, 6, 7, 8, 9, 10, 11, 0, 1, 2, 3, 12, 13, 14, 15 };
static const vector unsigned char kPermZXYW = { 8, 9, 10, 11, 0, 1, 2, 3, 4, 5, 6, 7, 12, 13, 14, 15 };
static const vector unsigned char kPermRow1 = { 8, 9, 10, 11, 20, 21, 22, 23, 12, 13, 14, 15, 0, 1, 2, 3 };
static const vector unsigned char kPermRow2 = { 0, 1, 2, 3, 24, 25, 26, 27, 4, 5, 6, 7, 0, 1, 2, 3 };
static const vector unsigned char kSplatX = { 0, 1, 2, 3, 0, 1, 2, 3, 0, 1, 2, 3, 16, 17, 18, 19 };
static const vector unsigned char kSplatY = { 4, 5, 6, 7, 4, 5, 6, 7, 4, 5, 6, 7, 16, 17, 18, 19 };
static const vector unsigned char kSplatZ = { 8, 9, 10, 11, 8, 9, 10, 11, 8, 9, 10, 11, 16, 17, 18, 19 };
static const vector unsigned int kMaskX = { 0xffffffff, 0, 0, 0 };
static const vector unsigned int kMaskZ = { 0, 0, 0xffffffff, 0 };
static const vector unsigned int kMaskW = { 0, 0, 0, 0xffffffff };

/* row * m (a row vector times a matrix) */
static inline VecF MtxRowMul(VecF row, const Mtx4 *m, VecF zero)
{
    VecF out = vec_madd(VecLoad4(&m->v0), vec_splat(row, 0), zero);

    out = vec_madd(VecLoad4(&m->v1), vec_splat(row, 1), out);
    out = vec_madd(VecLoad4(&m->v2), vec_splat(row, 2), out);
    return vec_madd(VecLoad4(&m->v3), vec_splat(row, 3), out);
}

/* a joint's matrix from its pose (the rotation's rows scaled by the scale, the translation with
   w 1), under its parent's matrix in mats when it has one */
static inline void PoseToJointMtx(Mtx4 *out, JointPose *pose, Mtx4 *mats)
{
    VecF zero = (VecF)vec_splat_u32(0);
    VecF one = VecSplatF(1.0f);
    VecF q = VecLoad4(&pose->rot);
    VecF q2 = vec_add(q, q);
    VecF qw = vec_splat(q, 3);
    VecF qYZX = vec_perm(q, q, kPermYZXW);
    VecF qZXY = vec_perm(q, q, kPermZXYW);
    VecF q2YZX = vec_perm(q2, q2, kPermYZXW);
    VecF q2ZXY = vec_perm(q2, q2, kPermZXYW);
    VecF trans = vec_sel(*(VecF *)pose->trans, one, kMaskW);

    /* the rotation matrix's terms: 2xy - 2zw..., 2zx + 2yw..., 1 - 2yy - 2zz... */
    VecF cross = vec_madd(qYZX, q2, zero);
    VecF wTerm = vec_madd(q2YZX, qw, zero);
    VecF diag = vec_nmsub(qYZX, q2YZX, one);
    VecF minus = vec_nmsub(q2ZXY, qw, cross);
    VecF plus = vec_madd(qZXY, q2, wTerm);

    diag = vec_nmsub(qZXY, q2ZXY, diag);

    VecF a = vec_sel(minus, plus, kMaskX);
    VecF b = vec_sel(plus, diag, kMaskX);
    VecF c = vec_sel(diag, minus, kMaskX);

    a = vec_sel(a, diag, kMaskZ);
    b = vec_sel(b, minus, kMaskZ);
    c = vec_sel(c, plus, kMaskZ);

    VecF high = vec_mergeh(b, a);
    VecF low = vec_mergel(b, a);
    VecF row0 = vec_mergeh(high, c);
    VecF row1 = vec_perm(high, c, kPermRow1);
    VecF row2 = vec_perm(low, c, kPermRow2);

    /* each row times its scale (w zeroed) */
    VecF scale = *(VecF *)pose->scale;

    row0 = vec_madd(row0, vec_perm(scale, zero, kSplatX), zero);
    row1 = vec_madd(row1, vec_perm(scale, zero, kSplatY), zero);
    row2 = vec_madd(row2, vec_perm(scale, zero, kSplatZ), zero);

    if (pose->parent == 0) {
        VecStore4(&out->v0, row0);
        VecStore4(&out->v1, row1);
        VecStore4(&out->v2, row2);
        VecStore4(&out->v3, trans);
        return;
    }

    Mtx4 *parent = (Mtx4 *)((u8 *)mats + (pose->parent & 0x0fffffc0));

    VecStore4(&out->v0, MtxRowMul(row0, parent, zero));
    VecStore4(&out->v1, MtxRowMul(row1, parent, zero));
    VecStore4(&out->v2, MtxRowMul(row2, parent, zero));
    VecStore4(&out->v3, MtxRowMul(trans, parent, zero));
}

// 0x00f5b80 (0x1ec4 bytes)
/* The joint matrices of each draw entry (into its jointMats). The poses are AnimDecompInterp's,
   with the rotations blended plainly when the frames are neighbours, then the entry's anim layers
   and manipulators; each joint's matrix goes under its parent's. The scale keys with use >= 0
   then scale the finished matrices' rows (not passed to the children), and each matrix is
   multiplied by the class's bind matrix. An entry with no joints gets one identity matrix. */
void MB_DrawEntries(MobyDrawEntry *entry, u32 count)
{
    UnusedScaleKeys unused[129];
    JointPose poses[129];

    for (u32 n = 0; n < count; n++, entry++) {
        u32 jointCount = entry->jointCount;

        if (jointCount == 0) {
            Mtx4 *mat = entry->jointMats;

            mat->v0.x = 1.0f;
            mat->v0.y = 0.0f;
            mat->v0.z = 0.0f;
            mat->v0.w = 0.0f;
            mat->v1.x = 0.0f;
            mat->v1.y = 1.0f;
            mat->v1.z = 0.0f;
            mat->v1.w = 0.0f;
            mat->v2.x = 0.0f;
            mat->v2.y = 0.0f;
            mat->v2.z = 1.0f;
            mat->v2.w = 0.0f;
            mat->v3.x = 0.0f;
            mat->v3.y = 0.0f;
            mat->v3.z = 0.0f;
            mat->v3.w = 1.0f;
            continue;
        }

        float t = entry->blend;
        float s = 1.0f - t;
        UnusedScaleKeys *unusedHead = AnimDecompKeys((JointKeys *)poses, unused, t, jointCount, entry->bindTrans, entry->from, entry->to);

        if (entry->linearRot != 0) {
            /* two joints at a time (one past the end with an odd count) */
            s16 *fromRot = (s16 *)(entry->from + 1);
            s16 *toRot = (s16 *)(entry->to + 1);
            JointPose *pose = poses;

            for (u32 pair = 0; pair < (jointCount + 1) >> 1; pair++, fromRot += 8, toRot += 8, pose += 2) {
                for (int half = 0; half < 2; half++) {
                    s16 *a = fromRot + half * 4;
                    s16 *b = toRot + half * 4;
                    Vec4 *rot = &pose[half].rot;

                    rot->x = (float)b[0] * (1.0f / 32768.0f) * t + (float)a[0] * (1.0f / 32768.0f) * s;
                    rot->y = (float)b[1] * (1.0f / 32768.0f) * t + (float)a[1] * (1.0f / 32768.0f) * s;
                    rot->z = (float)b[2] * (1.0f / 32768.0f) * t + (float)a[2] * (1.0f / 32768.0f) * s;
                    rot->w = (float)b[3] * (1.0f / 32768.0f) * t + (float)a[3] * (1.0f / 32768.0f) * s;
                }
            }
        }
        else {
            AnimDecompRotations(poses, t, jointCount, entry->from, entry->to);
        }

        if (entry->layers != NULL) {
            ProcessAnimLayers(entry->layers, poses);
        }

        if (entry->manipulators != NULL) {
            ProcessManipulators(entry->manipulators, poses);
        }

        Mtx4 *mats = entry->jointMats;

        for (u32 i = 0; i < entry->jointCount; i++) {
            PoseToJointMtx(&mats[i], &poses[i], mats);
        }

        /* the unused-by-the-pose scale keys scale the joint's rows */
        for (UnusedScaleKeys *key = unusedHead; key != NULL; key = (UnusedScaleKeys *)(uintptr_t)key->next) {
            u32 joint = (u32)(key - unused);

            if (joint >= entry->jointCount) {
                continue;
            }

            Mtx4 *mat = &mats[joint];
            float scale[3];

            for (int axis = 0; axis < 3; axis++) {
                scale[axis] = key->from[axis] * s + key->to[axis] * t;
            }

            mat->v0.x *= scale[0];
            mat->v0.y *= scale[0];
            mat->v0.z *= scale[0];
            mat->v1.x *= scale[1];
            mat->v1.y *= scale[1];
            mat->v1.z *= scale[1];
            mat->v2.x *= scale[2];
            mat->v2.y *= scale[2];
            mat->v2.z *= scale[2];
        }

        /* bind * joint (the bind matrix is affine) */
        Mtx4 *bind = entry->bindMats;

        for (u32 i = 0; i < entry->jointCount; i++, bind++) {
            Mtx4 *mat = &mats[i];
            VecF zero = (VecF)vec_splat_u32(0);
            VecF row0 = VecLoad4(&mat->v0);
            VecF row1 = VecLoad4(&mat->v1);
            VecF row2 = VecLoad4(&mat->v2);
            VecF row3 = VecLoad4(&mat->v3);
            const Vec4 *b[4] = { &bind->v0, &bind->v1, &bind->v2, &bind->v3 };
            VecF out[4];

            for (int k = 0; k < 4; k++) {
                VecF b4 = VecLoad4(b[k]);
                VecF sum = vec_madd(row0, vec_splat(b4, 0), k == 3 ? row3 : zero);

                sum = vec_madd(row1, vec_splat(b4, 1), sum);
                out[k] = vec_madd(row2, vec_splat(b4, 2), sum);
            }

            VecStore4(&mat->v0, out[0]);
            VecStore4(&mat->v1, out[1]);
            VecStore4(&mat->v2, out[2]);
            VecStore4(&mat->v3, out[3]);
        }
    }
}

// 0x00f7a44 (0x50 bytes)
/* the draw entries' joint matrices, then the entries to 0x1111700 (FUN_004ed52c) */
void MB_DrawEntryList(u8 *entries, int count)
{
    MB_DrawEntries((MobyDrawEntry *)entries, count);
    FUN_004ed52c((int *)&DAT_01111700, (u64)(uintptr_t)entries, (u64)count);
}

/* one word into the pass's command buffer */
static inline void MobyEmit(RenderingStep *pass, u32 word)
{
    *pass->command++ = (RsxCmd)word;
}

static inline void MobyEmitMethod(RenderingStep *pass, u32 method, u32 value)
{
    MobyEmit(pass, CELL_GCM_METHOD(method, 1));
    MobyEmit(pass, value);
}

/* alpha blending as the mobys draw it */
static inline void MobySetBlendFunc(RenderingStep *pass)
{
    MobyEmit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_BLEND_FUNC_SFACTOR, 2));
    MobyEmit(pass, CELL_GCM_SRC_ALPHA << 16 | CELL_GCM_SRC_ALPHA);
    MobyEmit(pass, CELL_GCM_ONE_MINUS_SRC_ALPHA << 16 | CELL_GCM_ONE_MINUS_SRC_ALPHA);
}

static inline void MobySetBlend(RenderingStep *pass)
{
    MobyEmitMethod(pass, CELL_GCM_NV4097_SET_BLEND_EQUATION, CELL_GCM_FUNC_ADD << 16 | CELL_GCM_FUNC_ADD);
    MobySetBlendFunc(pass);
}

/* the blend for the glowing packets: source alpha onto the colour */
static inline void MobySetBlendAdd(RenderingStep *pass)
{
    MobyEmit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_BLEND_FUNC_SFACTOR, 2));
    MobyEmit(pass, CELL_GCM_SRC_ALPHA << 16 | CELL_GCM_SRC_ALPHA);
    MobyEmit(pass, CELL_GCM_ONE << 16 | CELL_GCM_ONE);
}

static inline void MobySetAlphaFunc(RenderingStep *pass, u32 ref)
{
    MobyEmit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_ALPHA_FUNC, 2));
    MobyEmit(pass, CELL_GCM_GEQUAL);
    MobyEmit(pass, ref);
}

/* c[index..index+3] = mtx */
static inline void MobyEmitConstMtx(RenderingStep *pass, int index, Mtx4 *mtx)
{
    u32 *words = (u32 *)mtx;

    MobyEmit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_TRANSFORM_CONSTANT_LOAD, 17));
    MobyEmit(pass, index);

    for (int i = 0; i < 16; i++) {
        MobyEmit(pass, words[i]);
    }
}

/* the moby vertex layout: attribute 0 3 floats, 1 2 floats, 3 4 bytes; stride 28 */
static inline void MobySetVertexFormat(RenderingStep *pass)
{
    FUN_005e85b4(pass, 0, CELL_GCM_VERTEX_F, 3, 28, 0);
    FUN_005e85b4(pass, 1, CELL_GCM_VERTEX_F, 2, 28, 0);
    FUN_005e85b4(pass, 3, CELL_GCM_VERTEX_UB, 4, 28, 0);
}

/* the vertex arrays at offset (positions, +12 coordinates, +24 colours) and the index array */
static inline void MobySetVertexArrays(RenderingStep *pass, u32 offset, u32 indices)
{
    FUN_005e8970(pass, 0, offset);
    FUN_005e8970(pass, 1, offset + 12);
    FUN_005e8970(pass, 3, offset + 24);
    FUN_005e899c(pass, indices);
}

/* arrays 0..3 off */
static inline void MobyClearVertexArrays(RenderingStep *pass)
{
    MobyEmitMethod(pass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + 0 * 4, 2);
    MobyEmitMethod(pass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + 1 * 4, 2);
    MobyEmitMethod(pass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + 2 * 4, 2);
    MobyEmitMethod(pass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_FORMAT + 3 * 4, 2);
}

/* the start of a moby pass: constants c[20] = the light direction, programs 5 and 8, the vertex
   layout, the alpha test */
static inline void MobyBeginPass(IdolDraw *idol, RenderingStep *pass, Vec4 *light)
{
    MobySetBlend(pass);
    MobyEmit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_TRANSFORM_CONSTANT_LOAD, 5));
    MobyEmit(pass, 20);

    for (int i = 0; i < 4; i++) {
        MobyEmit(pass, ((u32 *)light)[i]);
    }

    idol_draw::BindVertexProgram((uintptr_t)idol, (int)(uintptr_t)pass, 5);
    idol_draw::BindFragmentProgram((uintptr_t)idol, (int)(uintptr_t)pass, 8);
    MobySetVertexFormat(pass);
}

/* a model packet (16 bytes) */
typedef struct MobyPacket {
    u8 *tex;                 /* 0x00  texture header */
    u32 indexStart;          /* 0x04 */
    u32 indexCount;          /* 0x08 */
    u8 sampler;              /* 0x0c  & 3, >> 2 & 3: FUN_004d676c's sampler modes */
    u8 _pad0d[3];
} MobyPacket;

/* a moby class's model (MobyClass.packets) */
typedef struct MobyModel {
    u32 packetCount;         /* 0x00 */
    u32 glowCount;           /* 0x04  packets drawn additively after */
    MobyPacket *packets;     /* 0x08 */
    MobyPacket *glowPackets; /* 0x0c */
    u32 vertexOffset;        /* 0x10  from IdolDraw.memBase */
    u32 indices;             /* 0x14  the index array's address */
    u16 vertexCount;         /* 0x18 */
    u16 vertexCount2;        /* 0x1a */
    u16 unk1c;               /* 0x1c */
} MobyModel;

/* one packet: its texture, then its triangles */
static inline void MobyDrawPacket(RenderingStep *pass, MobyPacket *packet, int samplerA, int samplerB)
{
    FUN_004d676c(pass, 0, packet->tex, samplerA, samplerB);
    FUN_005e8b20(pass, CELL_GCM_PRIMITIVE_TRIANGLES);
    FUN_005e8b5c(pass, packet->indexStart, packet->indexCount);
    MobyEmitMethod(pass, CELL_GCM_NV4097_SET_BEGIN_END, 0);
}

// 0x00f7af0 (0x1aac bytes)
/* Queues count mobys from moby for drawing with their skeletons: an entry (MobyDrawEntry) per
   drawn moby from entry on, returning the end. The three moby passes (M_, Moby, DL_ and their
   depth passes; the HUD pass in aux draw mode) get the light direction, programs and vertex
   layout first. A moby is drawn unless it is off, culled by occlusion, the frustum or its draw
   distance; within 8 units of that it fades (DL_ passes, alpha test from 4). Mobys with a shadow
   (theirs, or the hero's for the weapon mobys) use the Moby passes and the shadow pass, the others
   the M_ passes (DL_ with DISABLE_Z_WRITE). The entry gets joint matrices to fill (identity for
   now), a vertex buffer, the moby's lights, animation state and world matrix; the world matrix
   (transposed, no translation) goes to c[4] and the model's packets are drawn, the glowing ones
   additively. The passes are put back after. */
u8 *MB_BuildDrawEntry(MobyInstance *moby, u8 *entryList, int count, int unused)
{
    IdolDraw *idol = (IdolDraw *)(uintptr_t)g_pIdolDraw;
    Vec4 light;

    if (g_gameMode == GAME_MODE_SPACE && g_SpaceCutscene == 4) {
        light.x = 0.0f;
        light.y = 0.0f;
        light.z = 0.0f;
        *(u32 *)&light.w = 0;
    }
    else {
        light = *(Vec4 *)(uintptr_t)(DAT_00a15f64 + 0x10);
    }

    RenderingStep *passes[3] = { M_Pass, MobyPass, DL_Pass };
    RenderingStep *depths[3] = { M_Depth, MobyDepth, DL_DepthPass };

    if (idol->auxDepth != 0) {
        MobyBeginPass(idol, HUD_Pass, &light);
        MobySetAlphaFunc(HUD_Pass, 1);
        FUN_005e85f0(HUD_Pass, 1);
        MobyEmitMethod(HUD_Pass, CELL_GCM_NV4097_SET_DEPTH_MASK, 1);
        MobyEmitMethod(HUD_Pass, CELL_GCM_NV4097_SET_DEPTH_TEST_ENABLE, 1);
    }
    else {
        for (u32 k = 0; k < 3; k++) {
            RenderingStep *pass = passes[k];
            RenderingStep *depth = depths[k];

            FUN_005e8610(pass, 0);
            FUN_005e8610(pass, 1);
            FUN_005e8610(pass, 3);
            FUN_005e8610(depth, 0);
            FUN_005e8610(depth, 1);
            FUN_005e8610(depth, 2);
            FUN_005e8610(depth, 3);
            MobyBeginPass(idol, pass, &light);

            if (depth != NULL) {
                MobySetVertexFormat(depth);
            }

            MobySetAlphaFunc(depth, 255);
            FUN_005e85f0(depth, 1);
            MobySetAlphaFunc(pass, 1);

            /* (the asm turns the alpha test on for the depth pass again, not for pass) */
            FUN_005e85f0(depth, 1);
        }
    }

    MobyDrawEntry *entry = (MobyDrawEntry *)entryList;
    MobyInstance *end = moby + count;
    int lightIdx = 0;
    float shadowRadius = 0.0f;

    for (; moby != end; moby++) {
        RenderingStep *pass = MobyPass;
        RenderingStep *depth = MobyDepth;
        int shadow = 0;

        /* a shadow: the moby's own, or the hero's for his weapon mobys */
        if (idol->auxDepth == 0) {
            if (moby->shadow != 0 && *(float *)&moby->unk84 != 0.0f) {
                shadow = 1;
                lightIdx = (u8)moby->unkbd;
                shadowRadius = *(float *)&moby->unk84;
            }
            else {
                int found = 0;

                for (u32 k = 0; k < 7; k++) {
                    if (moby == *(MobyInstance **)((u8 *)&g_currentWeaponMoby + k * 80)) {
                        found = 1;
                        break;
                    }
                }

                if (found) {
                    shadow = 1;
                    lightIdx = (u8)g_heroMobyPtr->unkbd;
                    shadowRadius = *(float *)&g_heroMobyPtr->unk84;
                }
            }
        }

        moby->enabled = 0;

        if (moby->state == 0xff) {
            break;
        }

        if ((s8)moby->state < 0 || (moby->modeBits & (DISABLED | NO_DRAW)) || moby->pClass == NULL) {
            continue;
        }

        MobyClass *pClass = moby->pClass;

        if (FUN_005e8638((int)(uintptr_t)idol, moby->occlIndex) != 0) {
            continue;
        }

        /* in view and within its draw distance */
        float radius = moby->bSphere.rad * (1.0f / 1024.0f);
        Vec4 sphere;
        Vec4 center;

        FUN_005e868c((float *)&sphere, (float *)&moby->bSphere);
        FUN_005e86a8(1024.0f, (float *)&center, (float *)&sphere);

        if (!FUN_005e86d8(radius, (float)moby->drawDistance, center)) {
            continue;
        }

        Vec4 pos;

        FUN_005e87d8(moby->bSphere.x * (1.0f / 1024.0f), moby->bSphere.y * (1.0f / 1024.0f), moby->bSphere.z * (1.0f / 1024.0f), (float *)&pos);

        if (shadow == 0) {
            pass = M_Pass;
            depth = M_Depth;
        }

        /* the fade out over the last 8 units of the draw distance */
        float alpha = (float)(u8)moby->alpha;
        Vec4 camera;

        camera.x = g_FrustumExtra.x;
        camera.y = g_FrustumExtra.y;
        camera.z = g_FrustumExtra.z;

        float distance = FUN_005e87e8(center, camera);
        int faded = 0;

        if (distance - radius > (float)moby->drawDistance - 8.0f) {
            float fade = ((float)moby->drawDistance - (distance - radius)) * 0.125f;

            if (fade < 0.0f) {
                fade = 0.0f;
            }

            if (fade > 1.0f) {
                fade = 1.0f;
            }

            depth = DL_DepthPass;
            pass = DL_Pass;
            alpha = alpha * fade;
            shadow = 0;
            faded = 1;
            MobySetAlphaFunc(depth, 4);
        }

        if (idol->auxDepth == 0 && (moby->modeBits & DISABLE_Z_WRITE)) {
            pass = DL_Pass;
            depth = DL_DepthPass;
        }

        if (shadow != 0) {
            MobySetVertexFormat(ShadowPass);
            FUN_004dfe70(radius, (int *)idol, lightIdx, (Vec4 *)((u8 *)&g_HeroLightDir + lightIdx * 16));
        }

        moby->enabled = 1;

        /* the entry */
        MobyModel *model = (MobyModel *)pClass->packets;
        int jointCount = pClass->joint_cnt;

        if (jointCount == 0) {
            entry->jointMats = (Mtx4 *)(uintptr_t)idol::AllocateMemAlign(FrameHeap, 0x40, 0x10);
        }
        else {
            entry->jointMats = (Mtx4 *)(uintptr_t)idol::AllocateMemAlign(FrameHeap, jointCount << 6, 0x10);
        }

        entry->jointCount = pClass->joint_cnt;
        entry->unk40.x = moby->bSphere.x * (1.0f / 1024.0f);
        entry->unk40.y = moby->bSphere.y * (1.0f / 1024.0f);
        entry->unk40.z = moby->bSphere.z * (1.0f / 1024.0f);
        entry->unk40.w = moby->bSphere.rad * (1.0f / 1024.0f);

        Mtx4 *mat = entry->jointMats;

        for (u32 i = 0; i < (u8)pClass->joint_cnt; i++, mat++) {
            Mtx4 identity;

            FUN_005e88f0(&identity);
            FUN_005e8940(mat, &identity);
        }

        entry->unk5c = idol->memBase + model->vertexOffset;
        entry->unk50 = model->vertexCount;
        entry->unk60 = (void *)(uintptr_t)idol::AllocateMemAlign(FrameHeap, (model->vertexCount + model->vertexCount2) * 28, 0x10);
        entry->unk52 = model->vertexCount2;
        entry->unk54 = model->unk1c;
        entry->lights[0] = moby->light;
        entry->lights[1] = moby->color;
        entry->unk96 = (s16)lightIdx;
        entry->unk74 = *(float *)&moby->glowRgba;
        entry->layers = (AnimLayer *)moby->pAnimationLayers;
        entry->bindTrans = (Vec4 *)pClass->common_trans;
        entry->from = (MobyFrame *)moby->pPreviousAnimationData;
        entry->to = (MobyFrame *)moby->pCurrentAnimationData;
        entry->blend = moby->animationBlend;
        entry->manipulators = moby->pManipulators;
        entry->linearRot = (u8)moby->previousAnimationFrame + 1 == (u8)moby->animationFrame;
        entry->bindMats = (Mtx4 *)pClass->skeleton;
        entry->unk95 = (u8)(s64)alpha;
        entry->unk98 = (float)*(s16 *)&pClass->pakcet_cnt_0 * (1.0f / 4096.0f);
        entry->unk9c = (float)*(s16 *)&pClass->metal_cnt * (1.0f / 4096.0f);
        entry->moby = moby;

        u32 vertexOffset = (u32)(uintptr_t)entry->unk60 - idol->memBase;

        if (idol->auxDepth != 0) {
            MobySetVertexArrays(HUD_Pass, vertexOffset, model->indices);
        }
        else {
            MobySetVertexArrays(pass, vertexOffset, model->indices);

            if (depth != NULL) {
                MobySetVertexArrays(depth, vertexOffset, model->indices);
            }

            if (shadow != 0) {
                MobyEmitMethod(ShadowPass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_OFFSET + 0 * 4, vertexOffset | 0x80000000);
                MobyEmitMethod(ShadowPass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_OFFSET + 1 * 4, (vertexOffset + 12) | 0x80000000);
                MobyEmitMethod(ShadowPass, CELL_GCM_NV4097_SET_VERTEX_DATA_ARRAY_OFFSET + 3 * 4, (vertexOffset + 24) | 0x80000000);
                MobyEmit(ShadowPass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_INDEX_ARRAY_ADDRESS, 2));
                MobyEmit(ShadowPass, model->indices);
                MobyEmit(ShadowPass, 0x11);
            }
        }

        /* the world matrix: the moby's rotation scaled, at its position */
        Mtx4 world;
        Mtx4 transposed;
        Vec4 translation;

        FUN_005e89c4(&world, &moby->transform);
        FUN_005e89f4(moby->scale, &world);
        FUN_005e8848(moby->pos.x, moby->pos.y, moby->pos.z, 1.0f, (float *)&translation);
        world.v3 = translation;
        entry->world = world;
        entry->scale = moby->scale;

        /* c[4] = its transpose without the translation */
        FUN_005e8a94(&transposed, &world);
        world = transposed;

        Vec4 zero;

        FUN_005e8b10(0.0f, 0.0f, 0.0f, (float *)&zero);
        world.v3.x = zero.x;
        world.v3.y = zero.y;
        world.v3.z = zero.z;

        if (idol->auxDepth != 0) {
            MobyEmitConstMtx(HUD_Pass, 4, &world);
        }
        else {
            MobyEmitConstMtx(pass, 4, &world);

            if (depth != NULL) {
                MobyEmitConstMtx(depth, 4, &world);
            }

            if (shadow != 0) {
                MobyEmitConstMtx(ShadowPass, 4, &world);
            }
        }

        entry++;

        /* the packets */
        MobyPacket *packet = model->packets;

        if (idol->auxDepth != 0) {
            for (u32 i = 0; i < model->packetCount; i++, packet++) {
                MobyDrawPacket(HUD_Pass, packet, packet->sampler & 3, packet->sampler >> 2 & 3);
            }

            if (model->glowCount == 0) {
                continue;
            }

            MobySetBlendAdd(HUD_Pass);
            packet = model->glowPackets;

            for (u32 i = 0; i < model->glowCount; i++, packet++) {
                MobyDrawPacket(HUD_Pass, packet, 3, 3);
            }

            MobySetBlendFunc(HUD_Pass);
            continue;
        }

        for (u32 i = 0; i < model->packetCount; i++, packet++) {
            MobyDrawPacket(pass, packet, packet->sampler & 3, packet->sampler >> 2 & 3);

            if (depth != NULL) {
                MobyDrawPacket(depth, packet, packet->sampler & 3, packet->sampler >> 2 & 3);
            }

            if (shadow != 0) {
                MobyDrawPacket(ShadowPass, packet, packet->sampler & 3, packet->sampler >> 2 & 3);
            }
        }

        if (model->glowCount != 0) {
            MobySetBlendAdd(pass);
            packet = model->glowPackets;

            for (u32 i = 0; i < model->glowCount; i++, packet++) {
                MobyDrawPacket(pass, packet, 3, 3);
            }

            MobySetBlendFunc(pass);
        }

        if (faded != 0) {
            MobySetAlphaFunc(depth, 255);
        }

        if (shadow != 0) {
            MobyClearVertexArrays(ShadowPass);
            FUN_004e1b80(radius, shadowRadius, (int *)idol, lightIdx, (Vec4 *)((u8 *)&g_HeroLightDir + lightIdx * 16));
        }
    }

    /* the passes back */
    if (idol->auxDepth != 0) {
        u8 *hud = (u8 *)HUD_Pass;

        MobyClearVertexArrays(HUD_Pass);
        memset(hud + 0x14, 0, 0x90);
        memset(hud + 0xa8, 0xff, 0x48);
        *(u32 *)(hud + 0xc4) = 0;
        *(u32 *)(hud + 0xc0) = 0;
        idol_draw::BindVertexProgram((uintptr_t)idol, (int)(uintptr_t)HUD_Pass, 12);
        idol_draw::BindFragmentProgram((uintptr_t)idol, (int)(uintptr_t)HUD_Pass, 12);
        MobyEmitMethod(HUD_Pass, CELL_GCM_NV4097_SET_DEPTH_MASK, 0);
        MobyEmitMethod(HUD_Pass, CELL_GCM_NV4097_SET_DEPTH_TEST_ENABLE, 0);
        MobySetAlphaFunc(HUD_Pass, 0);
        MobyEmitMethod(HUD_Pass, CELL_GCM_NV4097_SET_ALPHA_TEST_ENABLE, 0);
        MobySetBlend(HUD_Pass);
    }
    else {
        MobySetAlphaFunc(DL_DepthPass, 1);

        for (u32 k = 0; k < 3; k++) {
            MobyClearVertexArrays(passes[k]);
            MobyClearVertexArrays(depths[k]);
        }
    }

    return (u8 *)entry;
}

// 0x00f959c (0x324 bytes)
/* DL's BuildMobyUpdateChain: the mobys to update this frame, chained through pChain by class
   (returns the first). A moby updates if it is on screen (enabled), always updates (draw distance
   255 or update distance -1) or is within its update distance of the camera; a moby in a group
   brings in the whole group (g_MobyGroups lists end with a negative index). The ones that can be
   auto-targeted go to g_TargetableMobys, which ends with NULL. */
MobyInstance *BuildMobyUpdateChain(void)
{
    MobyInstance *heads[224][2];   /* per class: first, last */
    u8 groupNear[112];
    MobyInstance **targetable = &g_TargetableMobys;

    memset(heads, 0, sizeof(heads));
    memset(groupNear, 0, sizeof(groupNear));

    for (MobyInstance *moby = g_MobyInstance; moby->state != 0xff; moby++) {
        if ((s8)moby->state < 0 || (moby->modeBits & NO_UPDATE)) {
            continue;
        }

        int update = moby->enabled != 0;

        if (moby->drawDistance == 0xff || (u8)moby->updateDistance == 0xff) {
            update = 1;
        }
        else {
            Vec4 delta;
            float range = (float)(u8)moby->updateDistance;

            FastVecSub((float *)&delta, (float *)&moby->pos, &GameCamera.posX);

            if (delta.x * delta.x + delta.y * delta.y + delta.z * delta.z < range * range) {
                update = 1;
            }
        }

        if (!update) {
            continue;
        }

        if (moby->group >= 0) {
            groupNear[(u8)moby->group] = 1;
            continue;
        }

        if (moby->modeBits & CAN_BE_AUTO_TARGETED) {
            *targetable++ = moby;
        }

        if (heads[moby->mClass][1] == NULL) {
            heads[moby->mClass][1] = moby;
            heads[moby->mClass][0] = moby;
        }
        else {
            heads[moby->mClass][1]->pChain = moby;
            heads[moby->mClass][1] = moby;
        }
    }

    for (int group = 0; group < 112; group++) {
        if (groupNear[group] == 0) {
            continue;
        }

        for (u16 *member = ((u16 **)&g_MobyGroups)[group]; ; member++) {
            MobyInstance *moby = &g_MobyInstance[*member & 0x7fff];

            if (moby->modeBits & CAN_BE_AUTO_TARGETED) {
                *targetable++ = moby;
            }

            if (heads[moby->mClass][1] == NULL) {
                heads[moby->mClass][1] = moby;
                heads[moby->mClass][0] = moby;
            }
            else {
                heads[moby->mClass][1]->pChain = moby;
                heads[moby->mClass][1] = moby;
            }

            if ((s16)*member < 0) {
                break;
            }
        }
    }

    /* the classes' chains joined */
    MobyInstance *first = NULL;
    MobyInstance *last = NULL;

    for (u32 mClass = 0; mClass < 224; mClass++) {
        if (heads[mClass][0] == NULL) {
            continue;
        }

        if (first == NULL) {
            first = heads[mClass][0];
            last = heads[mClass][1];
        }
        else {
            last->pChain = heads[mClass][0];
            heads[mClass][1]->pChain = NULL;
            last = heads[mClass][1];
        }
    }

    *targetable = NULL;
    return first;
}

