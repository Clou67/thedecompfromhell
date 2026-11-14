#include "rc1.h"
// MERGE
#include "idol/fastinline.h"
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

// 0x00f3fe0 (0x1844 bytes)
/* DL's AnimDecompInterp: the count joint poses (into g_AnimPoses) between two frames of a
   sequence, t of the way from from to to. Every joint starts at scale 1 and the class's common
   translation (bindTrans, whose w is the parent offset). The frames' scale and translation keys
   (only those of joints the from frame has, for scales) are blended; every joint's rotation is
   blended the short way round and normalised. count2 is not used. */
JointPose *AnimDecompInterp(float t, u32 count, u32 count2, Vec4 *bindTrans, MobyFrame *from, MobyFrame *to)
{
    JointKeys *keys = (JointKeys *)g_AnimPoses;
    UnusedScaleKeys unused[129];

    if (count == 0) {
        return g_AnimPoses;
    }

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

    /* the rotations (4 signed shorts a joint, 1/32768) */
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
        g_AnimPoses[i].rot = PoseQuatLerp(a, b, s, t);
    }

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

