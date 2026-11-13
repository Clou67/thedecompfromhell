#include <math.h>
#include <string.h>
#include "game/collproc.h"
#include "game/crt0.h"
#include "game/hero.h"
#include "game/loaders.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "idol/idol_draw.h"
#include "sdk/xUnk5.h"
// game/collproc.cpp -- reconstructed from NPEA00385 EBOOT
// 27 functions, 0x55aa4-0x609e8: the collision queries. Lines, spheres and pills against the env
// grid (cells of 4 world units, verts in 1/1024 units around the cell centre), moby collision
// meshes and prims, and the hero-only collision. Each query keeps the closest hit in a CollHit
// and copies it to g_CollOutput.

#define COLL_CACHE_MIN_VERTS 150

/* the outcode bits of p against box: 0/1 x below/above, 8/9 y, 16/17 z */
static inline u32 CollOutcode(float x, float y, float z, CollBox *box)
{
    return (box->min.x > x) | (x > box->max.x) << 1 | (box->min.y > y) << 8 | (y > box->max.y) << 9 |
           (box->min.z > z) << 16 | (z > box->max.z) << 17;
}

// 0x0055aa4 (0x14 bytes)
void SECTION_HEADER_COLL(void)
{
    DAT_0071eaa4 = 0x10000;
}

// 0x0055ab8 (0x8 bytes)
undefined8 STUB_00055ab8_RET_0(...)
{
    return 0;
}

// 0x0055ac0 (0x8 bytes)
undefined8 STUB_00055ac0_RET_0(...)
{
    return 0;
}

// 0x0055ac8 (0x8 bytes)
undefined8 STUB_00055ac8_RET_0(...)
{
    return 0;
}

// 0x0055ad0 (0x160 bytes)
/* the outcodes of count verts (3 floats each) against box; *outVerts = verts (unused) */
void Coll_ComputeVertOutcodes(float **outVerts, u32 *outcodes, float *verts, int count, CollBox box)
{
    for (int i = 0; i < count; i++) {
        float *vert = &verts[i * 3];

        outcodes[i] = CollOutcode(vert[0], vert[1], vert[2], &box);
    }

    *outVerts = verts;
}

// 0x0055c30 (0x134 bytes)
/* queues damage on moby (CollDamage, a ring of 64); a moby already queued keeps the stronger hit */
void Coll_AddDamage(MobyInstance *moby, CollDamageIn *damage, int poly)
{
    s8 slot = (s8)moby->damage;

    if (slot >= 0 && moby == CollDamage[(u8)slot].pVictimMoby && damage->damageHp <= CollDamage[(u8)slot].damageHp) {
        return;
    }

    int index = g_CollOutput.damageNext & 0xff;
    moby->damage = (s8)g_CollOutput.damageNext;
    g_CollOutput.damageNext = (g_CollOutput.damageNext + 1) % 64;

    CollDamageOut *out = &CollDamage[index];
    out->impact = damage->impact;
    out->ip_q = g_CollOutput.ip;
    *(int *)&out->padding[0] = 0;
    out->pDamager = damage->pDamager;
    out->damageFlags = damage->damageFlags;
    out->damageClass = damage->damageClass;
    out->damageStrength = damage->damageStrength;
    out->damageIndex = damage->damageIndex;
    out->damageHp = damage->damageHp;
    out->pVictimMoby = moby;
    out->unk30_flags_q = damage->flags;

    /* the moby tri hit, in 32-byte units; the binary adds &g_CollOutput to the collision pointer
       (the PS2 subtracted it from the tri's address) */
    int tri = -32;
    if (poly < 0) {
        tri = (int)(uintptr_t)&g_CollOutput + (int)(uintptr_t)moby->collision;
    }
    *(int *)&out->padding[0] = tri >> 5;
}

// 0x0055d70 (0x2ac bytes)
/* the line start + t * delta (t in 0..1) against sphere (w = radius): records the entry point
   when it is closer than hit (normal = from the centre, unnormalised; poly = -index) */
void CollLineVsSphere(Vec4 sphere, Vec4 start, Vec4 delta, CollHit *hit, int index, MobyInstance *moby)
{
    float toCentreX = sphere.x - start.x;
    float toCentreY = sphere.y - start.y;
    float toCentreZ = sphere.z - start.z;
    float lenSq = delta.x * delta.x + delta.y * delta.y + delta.z * delta.z;
    float along = toCentreX * delta.x + toCentreY * delta.y + toCentreZ * delta.z;
    float radiusSq = sphere.w * sphere.w;
    float centreSq = toCentreX * toCentreX + toCentreY * toCentreY + toCentreZ * toCentreZ;

    /* the closest point of the segment to the centre */
    float t = along / lenSq;
    if (!(t >= 0.0f)) {
        t = 0.0f;
    }
    if (!(t < 1.0f)) {
        t = 1.0f;
    }

    float offX = (start.x + delta.x * t) - sphere.x;
    float offY = (start.y + delta.y * t) - sphere.y;
    float offZ = (start.z + delta.z * t) - sphere.z;
    if (offX * offX + offY * offY + offZ * offZ - radiusSq >= 0.0f) {
        return;
    }

    /* where the line enters the sphere */
    float b = along + along;
    float disc = b * b - lenSq * 4.0f * (centreSq - radiusSq);
    if (!(disc >= 0.0f)) {
        disc = 0.0f;
    }

    t = -((-b + sqrtf(disc)) / (lenSq + lenSq));
    if (!(t >= 0.0f)) {
        t = 0.0f;
    }
    if (!(t <= 1.0f)) {
        t = 1.0f;
    }

    float ipX = start.x + delta.x * t;
    float ipY = start.y + delta.y * t;
    float ipZ = start.z + delta.z * t;
    if (hit->t - t <= 0.0f) {
        return;
    }

    hit->moby = moby;
    hit->poly = -index;
    hit->t = t;
    hit->ip[0] = ipX;
    hit->ip[1] = ipY;
    hit->ip[2] = ipZ;
    hit->normal[0] = ipX - sphere.x;
    hit->normal[1] = ipY - sphere.y;
    hit->normal[2] = ipZ - sphere.z;
}

// 0x0056020 (0x4b0 bytes)
/* the line start + t * delta against one tri of verts (3 floats each, relative to origin).
   Skips the tri when all its verts are outside the same side of the line's box (outcodes), when
   flags has COLL_CAMERA and the tri does too (collType bit 7), or with COLL_IGNORE_MATERIAL when
   its material is (flags >> 8) & 0x1f. Back faces only count with COLL_DOUBLE_SIDED. */
void CollLineVsTri(CollTri *tri, float *verts, u32 *outcodes, CollHit *hit, int vertCount, Vec3 origin,
                   u32 flags, Vec4 delta, Vec4 start, Vec4 end, MobyInstance *moby)
{
    u8 i0 = (u8)tri->v0;
    u8 i1 = (u8)tri->v1;
    u8 i2 = (u8)tri->v2;
    u8 type = (u8)tri->collType;

    if ((outcodes[i0] & outcodes[i1] & outcodes[i2]) != 0) {
        return;
    }

    if (type & 0x80 & flags) {
        return;
    }

    if ((flags & COLL_IGNORE_MATERIAL) != 0 && ((flags >> 8 ^ type) & 0x1f) == 0) {
        return;
    }

    float *p0 = &verts[i0 * 3];
    float *p1 = &verts[i1 * 3];
    float *p2 = &verts[i2 * 3];
    float e1x = p1[0] - p0[0];
    float e1y = p1[1] - p0[1];
    float e1z = p1[2] - p0[2];
    float e2x = p2[0] - p0[0];
    float e2y = p2[1] - p0[1];
    float e2z = p2[2] - p0[2];
    float nx = e2y * e1z - e2z * e1y;
    float ny = e2z * e1x - e2x * e1z;
    float nz = e2x * e1y - e2y * e1x;

    float denom = delta.x * nx + delta.y * ny + delta.z * nz;
    float distStart = (p0[0] - start.x) * nx + (p0[1] - start.y) * ny + (p0[2] - start.z) * nz;
    float distEnd = (p0[0] - end.x) * nx + (p0[1] - end.y) * ny + (p0[2] - end.z) * nz;
    float t = distStart / denom;

    if (denom == 0.0f) {
        return;
    }

    if ((flags & COLL_DOUBLE_SIDED) == 0 && (distStart >= 0.0f || !(distEnd > 0.0f))) {
        return;
    }

    /* the ends on opposite sides */
    int sideStart = (distStart > 0.0f) - (distStart < 0.0f);
    int sideEnd = (distEnd > 0.0f) - (distEnd < 0.0f);
    if (sideStart == sideEnd) {
        return;
    }

    /* the crossing, relative to p0, inside all three edges */
    float px = (start.x - p0[0]) + delta.x * t;
    float py = (start.y - p0[1]) + delta.y * t;
    float pz = (start.z - p0[2]) + delta.z * t;
    float edge2 = (e2y * pz - e2z * py) * nx + (e2z * px - e2x * pz) * ny + (e2x * py - e2y * px) * nz;
    float edge1 = (py * e1z - pz * e1y) * nx + (pz * e1x - px * e1z) * ny + (px * e1y - py * e1x) * nz;
    if (edge2 < 0.0f || edge1 < 0.0f) {
        return;
    }

    float edge3 = ((py - e1y) * (e2z - e1z) - (pz - e1z) * (e2y - e1y)) * nx +
                  ((pz - e1z) * (e2x - e1x) - (px - e1x) * (e2z - e1z)) * ny +
                  ((px - e1x) * (e2y - e1y) - (py - e1y) * (e2x - e1x)) * nz;
    if (edge3 < 0.0f) {
        return;
    }

    if (hit->t - t <= 0.0f) {
        return;
    }

    float baseX = p0[0] + origin.x;
    float baseY = p0[1] + origin.y;
    float baseZ = p0[2] + origin.z;

    hit->poly = type + 0x1000;
    hit->moby = moby;
    hit->t = t;
    hit->ip[0] = px + baseX;
    hit->ip[1] = py + baseY;
    hit->ip[2] = pz + baseZ;
    hit->normal[0] = nx;
    hit->normal[1] = ny;
    hit->normal[2] = nz;
    hit->v0[0] = baseX;
    hit->v0[1] = baseY;
    hit->v0[2] = baseZ;
    hit->v1[0] = e1x + baseX;
    hit->v1[1] = e1y + baseY;
    hit->v1[2] = e1z + baseZ;
    hit->v2[0] = e2x + baseX;
    hit->v2[1] = e2y + baseY;
    hit->v2[2] = e2z + baseZ;
}

// 0x00564d0 (0x560 bytes)
/* rotates moby's collision verts by rot (no translation) into outVerts (3 floats each) with
   their outcodes against box, and returns its tris. Meshes over 150 verts are cached per class
   in g_CollMobyVertCache while the rotation stays the same. */
void CollMoby_TransformVerts(MobyInstance *moby, CollBox box, CollRot rot, float *outVerts, u32 *outcodes,
                             CollTri **outTris, int *outTriCount)
{
    MobyCollHeader *coll = (MobyCollHeader *)moby->collision;
    Vec4 *src = (Vec4 *)((u8 *)coll + coll->primBytes + 0x10);
    int count = coll->vertBytes >> 4;
    int slot = -1;

    *outTris = (CollTri *)(src + count);
    *outTriCount = ((MobyCollHeader *)moby->collision)->triBytes >> 2;

    if (count > COLL_CACHE_MIN_VERTS) {
        for (int i = 0; i < 8; i++) {
            CollMobyVertCacheEntry *entry = &g_CollMobyVertCache[i];

            slot = i;
            if (entry->oClass == 0) {
                entry->oClass = (s16)moby->oClass;
                break;
            }

            if (entry->oClass == (s16)moby->oClass) {
                bool changed = rot.v0.x != entry->mtx[0] || rot.v0.y != entry->mtx[1] || rot.v0.z != entry->mtx[2] ||
                               rot.v1.x != entry->mtx[3] || rot.v1.y != entry->mtx[4] || rot.v1.z != entry->mtx[5] ||
                               rot.v2.x != entry->mtx[6] || rot.v2.y != entry->mtx[7] || rot.v2.z != entry->mtx[8];

                if (changed) {
                    break;
                }

                for (int v = 0; v < count; v++) {
                    float *cached = &entry->verts[v * 3];
                    float *out = &outVerts[v * 3];

                    out[0] = cached[0];
                    out[1] = cached[1];
                    out[2] = cached[2];
                    outcodes[v] = CollOutcode(cached[0], cached[1], cached[2], &box);
                }
                return;
            }

            slot = -1;
        }
    }

    for (int v = 0; v < count; v++) {
        float x = src[v].x;
        float y = src[v].y;
        float z = src[v].z;
        float *out = &outVerts[v * 3];

        out[0] = rot.v0.x * x + rot.v1.x * y + rot.v2.x * z;
        out[1] = rot.v0.y * x + rot.v1.y * y + rot.v2.y * z;
        out[2] = rot.v0.z * x + rot.v1.z * y + rot.v2.z * z;
        outcodes[v] = CollOutcode(out[0], out[1], out[2], &box);
    }

    if (slot != -1) {
        CollMobyVertCacheEntry *entry = &g_CollMobyVertCache[slot];

        entry->mtx[0] = rot.v0.x;
        entry->mtx[1] = rot.v0.y;
        entry->mtx[2] = rot.v0.z;
        entry->mtx[3] = rot.v1.x;
        entry->mtx[4] = rot.v1.y;
        entry->mtx[5] = rot.v1.z;
        entry->mtx[6] = rot.v2.x;
        entry->mtx[7] = rot.v2.y;
        entry->mtx[8] = rot.v2.z;
        memcpy(entry->verts, outVerts, count * 12);
    }
}

// 0x0056a30 (0xf4 bytes)
/* moby's joint matrices for its collision prims: a cached slot (by handle), or the next slot
   rebuilt (round robin) */
Vec4 *CollMoby_GetJointCache(MobyInstance *moby, int flags)
{
    for (int i = 0; i < 8; i++) {
        if (g_CollJointCacheKeys[i].handle == moby->handle) {
            return (Vec4 *)g_CollMobyJointCache[i];
        }
    }

    int slot = g_CollOutput.jointCacheNext;
    g_CollOutput.jointCacheNext = (slot + 1) % 8;

    Vec4 *mtx = (Vec4 *)g_CollMobyJointCache[slot];
    g_CollJointCacheKeys[slot].handle = moby->handle;
    g_CollJointCacheKeys[slot].collCount = g_CollOutput.collCount;
    Moby_BuildJointMatrices(moby, flags, mtx);

    return mtx;
}

// 0x0056b24 (0xf0 bytes)
/* the env cell at grid index (x, y, z) (4 world units each), or NULL when empty */
CollCell *CollGrid_GetCell(int x, int y, int z)
{
    CollGridLevel *zLevel = (CollGridLevel *)g_CollOutput.grid;

    z -= zLevel->shift;
    if (z < 0 || z >= zLevel->count) {
        return NULL;
    }

    CollGridLevel *yLevel = (CollGridLevel *)((u8 *)g_CollOutput.grid + zLevel->offsets[z]);
    y -= yLevel->shift;
    if (y < 0 || y >= yLevel->count) {
        return NULL;
    }

    CollGridLevel *xLevel = (CollGridLevel *)((u8 *)g_CollOutput.grid + yLevel->offsets[y]);
    x -= xLevel->shift;
    if (x < 0 || x >= xLevel->count || xLevel->offsets[x] == 0) {
        return NULL;
    }

    return (CollCell *)((u8 *)g_CollOutput.grid + xLevel->offsets[x]);
}

// 0x0056c20 (0xbe4 bytes)
/* the part of the line (start + t * delta, 1/1024 units) in cells[index], from t0 to where it
   leaves the cell (the next entry's t), against the cell's tris. A first cell with t0 == 1 (the
   whole line in one cell) takes the whole line. */
void CollLineVsEnv(CollHit *hit, u32 flags, Vec4 start, Vec4 end, Vec4 delta, CollCellStep *cells, int index,
                   float t0)
{
    u8 cellX = cells[index].x;
    u8 cellY = cells[index].y;
    u8 cellZ = cells[index].z;
    CollCell *cell = CollGrid_GetCell(cellX, cellY, cellZ);

    if (cell == NULL || cell->vertCount == 0) {
        return;
    }

    int vertCount = (u8)cell->vertCount;
    float t1 = cells[index + 1].t;
    if (index == 0 && t0 == 1.0f) {
        t1 = 1.0f;
        t0 = 0.0f;
    }

    /* the cell's centre, 4 * idx + 2 world units */
    Vec3 centre;
    centre.x = (float)(int)(cellX << 12 | 0x800);
    centre.y = (float)(int)(cellY << 12 | 0x800);
    centre.z = (float)(int)(cellZ << 12 | 0x800);

    /* the box around the part of the line in the cell, 5 units bigger, relative to the centre */
    float ax = (start.x + delta.x * t0) - centre.x;
    float bx = (start.x + delta.x * t1) - centre.x;
    float ay = (start.y + delta.y * t0) - centre.y;
    float az = (start.z + delta.z * t0) - centre.z;
    float by = (start.y + delta.y * t1) - centre.y;
    float bz = (start.z + delta.z * t1) - centre.z;

    CollBox box;
    box.min.x = (ax >= bx ? bx : ax) - 5.0f;
    box.min.y = (ay >= by ? by : ay) - 5.0f;
    box.min.z = (az >= bz ? bz : az) - 5.0f;
    box.max.x = (ax <= bx ? bx : ax) + 5.0f;
    box.max.y = (ay <= by ? by : ay) + 5.0f;
    box.max.z = (az <= bz ? bz : az) + 5.0f;

    Vec4 relStart;
    relStart.x = start.x - centre.x;
    relStart.y = start.y - centre.y;
    relStart.z = start.z - centre.z;

    Vec4 relEnd;
    relEnd.x = end.x - centre.x;
    relEnd.y = end.y - centre.y;
    relEnd.z = end.z - centre.z;

    float *verts = (float *)(cell + 1);
    u32 outcodes[256];
    for (int i = 0; i < vertCount; i++) {
        outcodes[i] = CollOutcode(verts[i * 3], verts[i * 3 + 1], verts[i * 3 + 2], &box);
    }

    /* (the binary passes g_CollOutput.grid as the moby of an env hit) */
    CollTri *tris = (CollTri *)(verts + vertCount * 3);
    int faceCount = cell->faceCount;
    for (int i = 0; i < faceCount; i++) {
        CollLineVsTri(&tris[i], verts, outcodes, hit, vertCount, centre, flags, delta, relStart, relEnd,
                      (MobyInstance *)g_CollOutput.grid);
    }

    /* the first quadCount tris are quads: their second half is (v0, v2, v3) */
    int quadCount = (u8)cell->quadCount;
    u8 *quadV3 = (u8 *)(tris + faceCount);
    for (int i = 0; i < quadCount; i++) {
        CollTri second = tris[i];

        second.v1 = second.v2;
        second.v2 = (char)quadV3[i];
        CollLineVsTri(&second, verts, outcodes, hit, vertCount, centre, flags, delta, relStart, relEnd,
                      (MobyInstance *)g_CollOutput.grid);
    }
}

// 0x0057820 (0x1e2c bytes)
/* the closest hit on the segment from -> to (world units, both inside [0, 1024]): the env
   cells it crosses (unless COLL_NO_ENV), then the mobys in the moby grid cells it crosses, their
   mesh and (unless COLL_MESH_ONLY) their prims. Skips skip, mobys this query already tested and,
   with COLL_NO_ENV or COLL_DAMAGEABLE_ONLY, mobys that can't be damaged. The hit goes to
   g_CollOutput; a damageable moby hit also takes damage. Returns 1 on a hit. */
int CollLine(float *from, float *to, u32 flags, MobyInstance *skip, CollDamageIn *damage)
{
    float values[6];
    bool nan = false;

    for (int i = 0; i < 6; i++) {
        values[i] = i < 3 ? from[i] : to[i - 3];
        if (std::_FDtest(&values[i]) == 2) {
            nan = true;
            break;
        }
    }

    if (nan) {
        Idol_Break((undefined8)(uintptr_t)"CollLine: Cannot have NaN, this will blow out stack on CollLine as the line goes on forever.",
                   0, 0, 0, 0, 0, 0, 0);
        return 0;
    }

    float minX = from[0] >= to[0] ? to[0] : from[0];
    float minY = from[1] >= to[1] ? to[1] : from[1];
    float minZ = from[2] >= to[2] ? to[2] : from[2];
    float maxX = from[0] <= to[0] ? to[0] : from[0];
    float maxY = from[1] <= to[1] ? to[1] : from[1];
    float maxZ = from[2] <= to[2] ? to[2] : from[2];

    /* everything below is in 1/1024 units */
    float scale = 1024.0f;
    Vec4 a;
    Vec4 b;
    a.x = from[0] * scale;
    a.y = from[1] * scale;
    a.z = from[2] * scale;
    b.x = to[0] * scale;
    b.y = to[1] * scale;
    b.z = to[2] * scale;

    if (g_CollOutput.collCount < 0) {
        return 0;
    }

    g_CollOutput.collCount++;

    if (minX < 0.0f || minY < 0.0f || minZ < 0.0f || maxX - scale > 0.0f || maxY - scale > 0.0f ||
        maxZ - scale > 0.0f) {
        return 0;
    }

    Vec4 delta;
    delta.x = b.x - a.x;
    delta.y = b.y - a.y;
    delta.z = b.z - a.z;

    float startPos[3] = {a.x, a.y, a.z};
    float deltas[3] = {delta.x, delta.y, delta.z};
    int startCell[3] = {(int)a.x >> 12, (int)a.y >> 12, (int)a.z >> 12};
    int endCell[3] = {(int)b.x >> 12, (int)b.y >> 12, (int)b.z >> 12};

    CollCellStep cells[256];
    float crossings[3][256];
    s8 steps[3];
    CollCellStep *cell = cells;

    if (startCell[0] != endCell[0] || startCell[1] != endCell[1] || startCell[2] != endCell[2]) {
        /* where the line crosses each axis's cell boundaries, then merged in order */
        int total = 0;

        for (int axis = 0; axis < 3; axis++) {
            float inv = 1.0f / deltas[axis];
            int index = startCell[axis];
            int last = endCell[axis];
            int step;
            float *out = crossings[axis];

            if (last - index < 0) {
                step = -1;
                index++;
                last++;
            }
            else {
                step = 1;
            }

            while (index != last) {
                index += step;

                float t = inv * ((float)(index << 12) - startPos[axis]);
                if (!(t < 1.0f)) {
                    t = 1.0f;
                }
                if (!(t > 0.0f)) {
                    t = 0.0f;
                }

                *out++ = t;
                total++;
            }

            *out = 20480.0f;
            steps[axis] = (s8)step;
        }

        u8 at[3] = {(u8)startCell[0], (u8)startCell[1], (u8)startCell[2]};
        float *nextX = crossings[0];
        float *nextY = crossings[1];
        float *nextZ = crossings[2];

        cell->t = 0.0f;
        cell->x = at[0];
        cell->y = at[1];
        cell->z = at[2];

        /* (one more step than crossings: the last takes a sentinel and its t becomes 1) */
        for (int n = total; n >= 0; n--) {
            float tx = *nextX;
            float ty = *nextY;
            float tz = *nextZ;

            cell++;
            if (tx <= ty) {
                if (tx > tz) {
                    at[2] += steps[2];
                    nextZ++;
                    cell->t = tz;
                }
                else {
                    at[0] += steps[0];
                    nextX++;
                    cell->t = tx;
                }
            }
            else if (ty > tz) {
                at[2] += steps[2];
                nextZ++;
                cell->t = tz;
            }
            else {
                at[1] += steps[1];
                nextY++;
                cell->t = ty;
            }

            cell->x = at[0];
            cell->y = at[1];
            cell->z = at[2];
        }
    }
    else {
        if ((int)a.x == (int)b.x && (int)a.y == (int)b.y && (int)a.z == (int)b.z) {
            return 0;
        }

        cell->x = (u8)startCell[0];
        cell->y = (u8)startCell[1];
        cell->z = (u8)startCell[2];
    }

    cell->t = 1.0f;

    CollHit hit;
    CollHit_Init(&hit);

    if ((flags & COLL_NO_ENV) == 0) {
        for (int i = 0;; i++) {
            float t = cells[i].t;

            if (hit.t < t) {
                break;
            }

            CollLineVsEnv(&hit, flags, a, b, delta, cells, i, t);
            if (t == 1.0f) {
                break;
            }
        }
    }

    /* the moby grid cells (16 units) the line crosses, deduplicated, as (y << 16 | x) keys over
       the cell list */
    u32 *keys = (u32 *)cells;
    float firstT = cells[0].t;
    u32 key = (cells[0].y >> 2) << 16 | (cells[0].x >> 2);
    u32 *out = keys + 1;

    keys[0] = key;
    if (firstT != 1.0f && cells[1].t != 1.0f) {
        for (int i = 1;; i++) {
            u32 next = (cells[i].y >> 2) << 16 | (cells[i].x >> 2);

            if (next == key) {
                out--;
            }
            else {
                key = next;
                *out = key;
            }

            out++;
            if (cells[i + 1].t == 1.0f) {
                break;
            }
        }
    }
    *out = 0xffffffff;

    /* delta / |delta|^2: dotting with it gives the line fraction */
    float lenSq = delta.x * delta.x + delta.y * delta.y + delta.z * delta.z;
    Vec3 dir;
    dir.x = delta.x / lenSq;
    dir.y = delta.y / lenSq;
    dir.z = delta.z / lenSq;

    for (u32 *k = keys; (int)*k >= 0; k++) {
        MobyGridCell *gridCell = &g_MobyGrid[(int)*k >> 16 << 6 | (*k & 0xffff)];
        short *list = (short *)((u8 *)&g_MobyGridLists + gridCell->listStart * 32);

        for (int n = 0; n < (u8)gridCell->count; n++) {
            MobyInstance *moby = &g_MobyInstance[list[n]];

            if (moby == skip || moby->collision == NULL || moby->collQueryStamp == g_CollOutput.collCount) {
                continue;
            }

            int stamp = g_CollOutput.collCount;
            if ((flags & (COLL_NO_ENV | COLL_DAMAGEABLE_ONLY)) != 0 && (moby->modeBits & CAN_BE_DAMAGED) == 0) {
                continue;
            }

            /* the bounding sphere against the line up to the hit so far */
            float bsX = moby->bSphere.x;
            float bsY = moby->bSphere.y;
            float bsZ = moby->bSphere.z;
            float bsR = moby->bSphere.rad;
            float t = (bsX - a.x) * dir.x + (bsY - a.y) * dir.y + (bsZ - a.z) * dir.z;
            if (!(t >= 0.0f)) {
                t = 0.0f;
            }
            if (!(hit.t >= t)) {
                t = hit.t;
            }

            float offX = (a.x + delta.x * t) - bsX;
            float offY = (a.y + delta.y * t) - bsY;
            float offZ = (a.z + delta.z * t) - bsZ;
            if (offX * offX + offY * offY + offZ * offZ >= bsR * bsR) {
                continue;
            }

            MobyCollHeader *coll = (MobyCollHeader *)moby->collision;
            int primCount = coll->primBytes / 32;
            int joints = (flags & COLL_ALT_PRIMSET) ? coll->primSetA : coll->primSetB;
            int vertBytes = ((MobyCollHeader *)moby->collision)->vertBytes;
            Vec4 *jointMtx = NULL;

            moby->collQueryStamp = stamp;
            if (joints != 0) {
                if (vertBytes == ((flags & COLL_MESH_ONLY) == 0)) {
                    continue;
                }
                jointMtx = CollMoby_GetJointCache(moby, joints);
            }

            float mtx[9] = {moby->transform.v0.x, moby->transform.v0.y, moby->transform.v0.z,
                            moby->transform.v1.x, moby->transform.v1.y, moby->transform.v1.z,
                            moby->transform.v2.x, moby->transform.v2.y, moby->transform.v2.z};
            Vec3 pos;
            pos.x = moby->pos.x * scale;
            pos.y = moby->pos.y * scale;
            pos.z = moby->pos.z * scale;

            /* the mesh, in the moby's space but not translated */
            if (vertBytes != 0) {
                Vec4 relStart;
                relStart.x = a.x - pos.x;
                relStart.y = a.y - pos.y;
                relStart.z = a.z - pos.z;

                Vec4 relEnd;
                relEnd.x = b.x - pos.x;
                relEnd.y = b.y - pos.y;
                relEnd.z = b.z - pos.z;

                CollBox box;
                box.min.x = relStart.x >= relEnd.x ? relEnd.x : relStart.x;
                box.min.y = relStart.y >= relEnd.y ? relEnd.y : relStart.y;
                box.min.z = relStart.z >= relEnd.z ? relEnd.z : relStart.z;
                box.max.x = relStart.x <= relEnd.x ? relEnd.x : relStart.x;
                box.max.y = relStart.y <= relEnd.y ? relEnd.y : relStart.y;
                box.max.z = relStart.z <= relEnd.z ? relEnd.z : relStart.z;

                float verts[256 * 3];
                for (int i = 0; i < 256 * 3; i++) {
                    verts[i] = 0.0f;
                }

                float rot[9];
                u32 outcodes[256];
                CollTri *tris;
                int triCount;

                Mtx33_Scale(moby->scale, rot, mtx);
                CollMoby_TransformVerts(moby, box, *(CollRot *)rot, verts, outcodes, &tris, &triCount);
                for (int i = 0; i < triCount; i++) {
                    CollLineVsTri(&tris[i], verts, outcodes, &hit, vertBytes, pos, flags, delta, relStart, relEnd, moby);
                }
            }

            if (flags & COLL_MESH_ONLY) {
                continue;
            }

            /* the prims; collisionMesh holds a bit per prim that is switched off */
            int disabled = (int)(uintptr_t)moby->collisionMesh;
            int setMask = (flags & COLL_ALT_PRIMSET) ? 1 : 2;
            CollPrim *prim = (CollPrim *)((MobyCollHeader *)moby->collision + 1);

            for (int i = 0; i < primCount; i++, prim++) {
                int off = disabled & 1;
                disabled >>= 1;

                if (off != 0 || (prim->sets & setMask) == 0) {
                    continue;
                }

                float primScale = moby->scale;
                Vec4 sphere;
                float centre[3];
                Vec3 local;

                switch (prim->collType) {
                case 1:
                    /* a sphere */
                    local.x = prim->offset.x * primScale;
                    local.y = prim->offset.y * primScale;
                    local.z = prim->offset.z * primScale;
                    sphere.w = prim->offset.w * primScale;
                    Mtx33_MulVec3(centre, mtx, local);
                    sphere.x = centre[0] + pos.x;
                    sphere.y = centre[1] + pos.y;
                    sphere.z = centre[2] + pos.z;
                    CollLineVsSphere(sphere, a, delta, &hit, (int)(uintptr_t)prim, moby);
                    break;

                case 2: {
                    /* a sphere on a joint */
                    Vec4 *joint = &jointMtx[prim->joint];

                    local.x = (joint->x * scale + prim->offset.x) * primScale;
                    local.y = (joint->y * scale + prim->offset.y) * primScale;
                    local.z = (joint->z * scale + prim->offset.z) * primScale;
                    sphere.w = prim->radius * primScale;
                    Mtx33_MulVec3(centre, mtx, local);
                    sphere.x = centre[0] + pos.x;
                    sphere.y = centre[1] + pos.y;
                    sphere.z = centre[2] + pos.z;
                    CollLineVsSphere(sphere, a, delta, &hit, (int)(uintptr_t)prim, moby);
                    break;
                }

                case 3: {
                    /* a vertical pill: the sphere at the height where the line comes closest */
                    local.x = prim->offset.x * primScale;
                    local.y = prim->offset.y * primScale;
                    local.z = prim->offset.z * primScale;
                    float radius = prim->offset.w * primScale;
                    float height = prim->length * primScale;
                    Mtx33_MulVec3(centre, mtx, local);

                    float cx = centre[0] + pos.x;
                    float cy = centre[1] + pos.y;
                    float cz = centre[2] + pos.z;
                    float toX = cx - a.x;
                    float toY = cy - a.y;
                    float flatSq = delta.x * delta.x + delta.y * delta.y + 0.0f;
                    if (!(flatSq > 0.015625f)) {
                        flatSq = 0.015625f;
                    }

                    float zero = 0.0f * 0.0f;
                    float along = toX * delta.x + toY * delta.y + zero;
                    float toSq = toX * toX + toY * toY + zero;
                    float radiusSq = radius * radius;
                    float s = along / flatSq;
                    if (!(s > 0.0f)) {
                        s = 0.0f;
                    }
                    if (!(s < 1.0f)) {
                        s = 1.0f;
                    }

                    float ex = (a.x + delta.x * s) - cx;
                    float ey = (a.y + delta.y * s) - cy;
                    if (ex * ex + ey * ey + zero - radiusSq > 0.0f) {
                        break;
                    }

                    float b2 = along * 2.0f;
                    float disc = b2 * b2 - flatSq * 4.0f * (toSq - radiusSq);
                    if (disc <= 0.0f) {
                        disc = 0.0f;
                    }

                    s = -((sqrtf(disc) - b2) / (flatSq * 2.0f));
                    if (!(s >= 0.0f)) {
                        s = 0.0f;
                    }
                    if (!(s <= 1.0f)) {
                        s = 1.0f;
                    }

                    float z = a.z + delta.z * s;
                    float top = height + cz;
                    float low = cz > z ? cz : z;

                    sphere.x = cx;
                    sphere.y = cy;
                    sphere.z = top <= low ? top : low;
                    sphere.w = radius;
                    CollLineVsSphere(sphere, a, delta, &hit, (int)(uintptr_t)prim, moby);
                    break;
                }

                default: {
                    /* a capsule between two joints: the sphere on its axis nearest the line */
                    Vec4 *jointA = &jointMtx[prim->ends.jointA];
                    Vec4 *jointB = &jointMtx[prim->ends.jointB];
                    float radius = prim->radius * primScale;
                    float endA[3];
                    float endB[3];
                    Vec3 localB;

                    local.x = jointA->x * scale * primScale;
                    local.y = jointA->y * scale * primScale;
                    local.z = jointA->z * scale * primScale;
                    localB.x = jointB->x * scale * primScale;
                    localB.y = jointB->y * scale * primScale;
                    localB.z = jointB->z * scale * primScale;
                    Mtx33_MulVec3(endA, mtx, local);
                    Mtx33_MulVec3(endB, mtx, localB);

                    Vec3 axisVec;
                    axisVec.x = endB[0] - endA[0];
                    axisVec.y = endB[1] - endA[1];
                    axisVec.z = endB[2] - endA[2];
                    float baseX = endA[0] + pos.x;
                    float baseY = endA[1] + pos.y;
                    float baseZ = endA[2] + pos.z;
                    float radiusSq = radius * radius;

                    /* axis x line */
                    float s0 = axisVec.y * delta.z - axisVec.z * delta.y;
                    float s1 = axisVec.z * delta.x - axisVec.x * delta.z;
                    float s2 = axisVec.x * delta.y - axisVec.y * delta.x;
                    float qx;
                    float qy;
                    float qz;

                    if (s0 * s0 - 1.0f >= 0.0f || s1 * s1 - 1.0f >= 0.0f || s2 * s2 - 1.0f >= 0.0f) {
                        /* the closest points of the two lines */
                        float crossSq = s0 * s0 + s1 * s1 + s2 * s2;
                        float ux = a.x - baseX;
                        float uy = a.y - baseY;
                        float uz = a.z - baseZ;
                        float vx = baseX - a.x;
                        float vy = baseY - a.y;
                        float vz = baseZ - a.z;
                        float tAxis = ((delta.y * s2 - delta.z * s1) * ux + (delta.z * s0 - delta.x * s2) * uy +
                                       (delta.x * s1 - delta.y * s0) * uz) / crossSq;
                        float tLine = ((axisVec.y * -s2 - axisVec.z * -s1) * vx + (axisVec.z * -s0 - axisVec.x * -s2) * vy +
                                       (axisVec.x * -s1 - axisVec.y * -s0) * vz) / crossSq;
                        float onAxisX = baseX + axisVec.x * tAxis;
                        float onAxisY = baseY + axisVec.y * tAxis;
                        float onAxisZ = baseZ + axisVec.z * tAxis;
                        float onLineX = a.x + delta.x * tLine;
                        float onLineY = a.y + delta.y * tLine;
                        float onLineZ = a.z + delta.z * tLine;
                        float axisDir[3];
                        float lineDir[3];
                        Vec3 deltaVec;

                        deltaVec.x = delta.x;
                        deltaVec.y = delta.y;
                        deltaVec.z = delta.z;
                        Vec3_Normalize(axisDir, axisVec);
                        Vec3_Normalize(lineDir, deltaVec);

                        float gapX = onLineX - onAxisX;
                        float gapY = onLineY - onAxisY;
                        float gapZ = onLineZ - onAxisZ;
                        float gapSq = gapX * gapX + gapY * gapY + gapZ * gapZ - radiusSq;
                        if (gapSq >= 0.0f) {
                            break;
                        }

                        /* back along the line to the capsule's surface (this is always 0) */
                        float dot = axisDir[0] * lineDir[0] + axisDir[1] * lineDir[1] + axisDir[2] * lineDir[2];
                        float back = gapSq - (1.0f - dot * dot);
                        if (back <= 0.0f) {
                            back = 0.0f;
                        }

                        back = sqrtf(back);
                        qx = onLineX - lineDir[0] * back;
                        qy = onLineY - lineDir[1] * back;
                        qz = onLineZ - lineDir[2] * back;
                        if (!((qx - a.x) * delta.x + (qy - a.y) * delta.y + (qz - a.z) * delta.z >= 0.0f)) {
                            qx = a.x;
                            qy = a.y;
                            qz = a.z;
                        }
                    }
                    else {
                        /* parallel */
                        qx = a.x;
                        qy = a.y;
                        qz = a.z;
                    }

                    float relX = qx - baseX;
                    float relY = qy - baseY;
                    float relZ = qz - baseZ;
                    float u = (relX * axisVec.x + relY * axisVec.y + relZ * axisVec.z) /
                              (axisVec.x * axisVec.x + axisVec.y * axisVec.y + axisVec.z * axisVec.z);
                    if (u <= 0.0f) {
                        u = 0.0f;
                    }
                    if (!(u < 1.0f)) {
                        u = 1.0f;
                    }

                    sphere.x = baseX + axisVec.x * u;
                    sphere.y = baseY + axisVec.y * u;
                    sphere.z = baseZ + axisVec.z * u;
                    sphere.w = radius;
                    CollLineVsSphere(sphere, a, delta, &hit, (int)(uintptr_t)prim, moby);
                    break;
                }
                }
            }
        }
    }

    if (hit.poly == 0) {
        return 0;
    }

    /* back to world units */
    float unit = 0.0009765625f;
    for (int i = 0; i < 3; i++) {
        hit.ip[i] *= unit;
        hit.v0[i] *= unit;
        hit.v1[i] *= unit;
        hit.v2[i] *= unit;
    }

    g_CollOutput.ip.x = hit.ip[0];
    g_CollOutput.ip.y = hit.ip[1];
    g_CollOutput.ip.z = hit.ip[2];
    g_CollOutput.normal.x = hit.normal[0];
    g_CollOutput.normal.y = hit.normal[1];
    g_CollOutput.normal.z = hit.normal[2];
    g_CollOutput.v0.x = hit.v0[0];
    g_CollOutput.v0.y = hit.v0[1];
    g_CollOutput.v0.z = hit.v0[2];
    g_CollOutput.v1.x = hit.v1[0];
    g_CollOutput.v1.y = hit.v1[1];
    g_CollOutput.v1.z = hit.v1[2];
    g_CollOutput.v2.x = hit.v2[0];
    g_CollOutput.v2.y = hit.v2[1];
    g_CollOutput.v2.z = hit.v2[2];
    g_CollOutput.pMoby = hit.moby;
    g_CollOutput.poly = hit.poly;

    /* (an env hit's moby is g_CollOutput.grid, see CollLineVsEnv) */
    if (hit.moby == NULL || damage == NULL || (hit.moby->modeBits & CAN_BE_DAMAGED) == 0) {
        return 1;
    }

    Coll_AddDamage(hit.moby, damage, hit.poly);
    return 1;
}

// 0x0059658 (0x19c bytes)
/* the sphere (other, otherRadius) against the query sphere (centre, radius): records the point of
   the other sphere nearest the query centre (pulled in slightly) when it is closer than hit;
   t = its distance squared, normal = from the other centre to it, poly = -index */
void CollSphereVsSphere(float radius, float otherRadius, Vec3 centre, Vec3 other, CollHit *hit, int index,
                        MobyInstance *moby)
{
    float reach = radius + otherRadius;
    float dx = other.x - centre.x;
    float dy = other.y - centre.y;
    float dz = other.z - centre.z;
    float distSq = dx * dx + dy * dy + dz * dz;

    if (distSq > reach * reach) {
        return;
    }

    float pushX = 0.0f;
    float pushY = 0.0f;
    float pushZ = 0.0f;
    if (distSq != 0.0f) {
        float dist = sqrtf(distSq);
        float amount = otherRadius;

        if (!(amount < dist * 0.9995f)) {
            amount = dist * 0.9995f;
        }

        float inv = 1.0f / dist;
        pushX = amount * ((centre.x - other.x) * inv);
        pushY = amount * ((centre.y - other.y) * inv);
        pushZ = amount * ((centre.z - other.z) * inv);
    }

    float px = other.x + pushX;
    float py = other.y + pushY;
    float pz = other.z + pushZ;
    float offX = px - centre.x;
    float offY = py - centre.y;
    float offZ = pz - centre.z;
    float hitSq = offX * offX + offY * offY + offZ * offZ;
    if (hit->t < hitSq) {
        return;
    }

    hit->t = hitSq;
    hit->moby = moby;
    hit->ip[0] = px;
    hit->ip[1] = py;
    hit->ip[2] = pz;
    hit->poly = -index;
    hit->normal[0] = pushX;
    hit->normal[1] = pushY;
    hit->normal[2] = pushZ;
}

// 0x0059800 (0x604 bytes)
/* the nearest point of one tri (verts relative to origin) to centre, when its distance squared
   is under hit->t (the sphere's radius squared to start with). Same skips as CollLineVsTri; the
   back side only counts with COLL_DOUBLE_SIDED. */
void CollSphereVsTri(CollTri *tri, float *verts, u32 *outcodes, CollHit *hit, int vertCount, Vec3 origin,
                     u32 flags, Vec4 centre, MobyInstance *moby)
{
    u8 i0 = (u8)tri->v0;
    u8 i1 = (u8)tri->v1;
    u8 i2 = (u8)tri->v2;
    float *p0 = &verts[i0 * 3];
    float *p1 = &verts[i1 * 3];
    float *p2 = &verts[i2 * 3];
    u8 type = (u8)tri->collType;

    if ((outcodes[i0] & outcodes[i1] & outcodes[i2]) != 0) {
        return;
    }

    if (type & 0x80 & flags) {
        return;
    }

    if ((flags & COLL_IGNORE_MATERIAL) != 0 && ((flags >> 8 ^ type) & 0x1f) == 0) {
        return;
    }

    float e1x = p1[0] - p0[0];
    float e1y = p1[1] - p0[1];
    float e1z = p1[2] - p0[2];
    float e2x = p2[0] - p0[0];
    float e2y = p2[1] - p0[1];
    float e2z = p2[2] - p0[2];
    float cx = centre.x - p0[0];
    float cy = centre.y - p0[1];
    float cz = centre.z - p0[2];
    float nx = e2y * e1z - e2z * e1y;
    float ny = e2z * e1x - e2x * e1z;
    float nz = e2x * e1y - e2y * e1x;
    float normalSq = nx * nx + ny * ny + nz * nz;
    float dist = cx * nx + cy * ny + cz * nz;
    float k = dist / normalSq;

    if (normalSq == 0.0f) {
        return;
    }

    if ((flags & COLL_DOUBLE_SIDED) == 0 && dist < 0.0f) {
        return;
    }

    /* the centre projected onto the tri's plane */
    float px = cx + -nx * k;
    float py = cy + -ny * k;
    float pz = cz + -nz * k;
    float distSq = nx * k * nx * k + ny * k * ny * k + nz * k * nz * k;
    if (hit->t < distSq) {
        return;
    }

    float edgeA = (py * e1z - pz * e1y) * nx + (pz * e1x - px * e1z) * ny + (px * e1y - py * e1x) * nz;
    float edgeB = (e2y * pz - e2z * py) * nx + (e2z * px - e2x * pz) * ny + (e2x * py - e2y * px) * nz;
    float edgeC = ((py - e1y) * (e2z - e1z) - (pz - e1z) * (e2y - e1y)) * nx +
                  ((pz - e1z) * (e2x - e1x) - (px - e1x) * (e2z - e1z)) * ny +
                  ((px - e1x) * (e2y - e1y) - (py - e1y) * (e2x - e1x)) * nz;

    if (!(edgeA >= 0.0f) || edgeB < 0.0f || edgeC < 0.0f) {
        /* outside an edge: the nearest point of that edge */
        float sx;
        float sy;
        float sz;
        float ex;
        float ey;
        float ez;

        if (!(edgeA >= 0.0f)) {
            sx = 0.0f;
            sy = 0.0f;
            sz = 0.0f;
            ex = e1x;
            ey = e1y;
            ez = e1z;
        }
        else if (edgeB < 0.0f) {
            sx = e2x;
            sy = e2y;
            sz = e2z;
            ex = 0.0f;
            ey = 0.0f;
            ez = 0.0f;
        }
        else {
            sx = e1x;
            sy = e1y;
            sz = e1z;
            ex = e2x;
            ey = e2y;
            ez = e2z;
        }

        ex -= sx;
        ey -= sy;
        ez -= sz;

        float t = ((px - sx) * ex + (py - sy) * ey + (pz - sz) * ez) / (ex * ex + ey * ey + ez * ez);
        if (!(t > 0.0f)) {
            t = 0.0f;
        }
        if (!(t < 1.0f)) {
            t = 1.0f;
        }

        px = sx + ex * t;
        py = sy + ey * t;
        pz = sz + ez * t;
        distSq = (px - cx) * (px - cx) + (py - cy) * (py - cy) + (pz - cz) * (pz - cz);
        if (hit->t < distSq) {
            return;
        }
    }

    float baseX = p0[0] + origin.x;
    float baseY = p0[1] + origin.y;
    float baseZ = p0[2] + origin.z;

    hit->poly = type + 0x1000;
    hit->moby = moby;
    hit->t = distSq * 0.9995f;
    hit->ip[0] = px + baseX;
    hit->ip[1] = py + baseY;
    hit->ip[2] = pz + baseZ;
    hit->normal[0] = nx;
    hit->normal[1] = ny;
    hit->normal[2] = nz;
    hit->v0[0] = baseX;
    hit->v0[1] = baseY;
    hit->v0[2] = baseZ;
    hit->v1[0] = e1x + baseX;
    hit->v1[1] = e1y + baseY;
    hit->v1[2] = e1z + baseZ;
    hit->v2[0] = e2x + baseX;
    hit->v2[1] = e2y + baseY;
    hit->v2[2] = e2z + baseZ;
}

/* an env cell a sphere or pill query overlaps */
struct CollCellRef {
    float centre[3];
    CollCell *cell;
};

/* out = mtx (9 floats, Mtx33_MulVec3's layout) * (x, y, z), inlined by the sphere and pill
   queries */
static inline void CollRotate(float *out, float *mtx, float x, float y, float z)
{
    out[0] = mtx[0] * x + mtx[3] * y + mtx[6] * z;
    out[1] = mtx[1] * x + mtx[4] * y + mtx[7] * z;
    out[2] = mtx[2] * x + mtx[5] * y + mtx[8] * z;
}

/* the env cells overlapping the box minWorld..maxWorld (world units), in list (ending with a
   NULL cell) */
static inline void CollGatherCells(CollCellRef *list, int minX, int minY, int minZ, int maxX, int maxY, int maxZ)
{
    for (int i = 0; i < 256; i++) {
        list[i].centre[0] = 0.0f;
        list[i].centre[1] = 0.0f;
        list[i].centre[2] = 0.0f;
        list[i].cell = NULL;
    }

    CollCellRef *out = list;
    for (int z = minZ;; z++) {
        for (int y = minY;; y++) {
            for (int x = minX;; x++) {
                CollCell *cell = CollGrid_GetCell(x, y, z);

                if (cell != NULL) {
                    out->centre[0] = (float)(x << 12) + 2048.0f;
                    out->centre[1] = (float)(y << 12) + 2048.0f;
                    out->centre[2] = (float)(z << 12) + 2048.0f;
                    out->cell = cell;
                    out++;
                }

                if (x == maxX) {
                    break;
                }
            }

            if (y == maxY) {
                break;
            }
        }

        if (z == maxZ) {
            break;
        }
    }

    out->cell = NULL;
}

// 0x0059e20 (0x1df0 bytes)
/* the closest hit within radius of pos (world units, the sphere inside [0, 1024]): env cells
   (unless COLL_NO_ENV), then the mobys in the moby grid cells it overlaps, their mesh and
   (unless COLL_MESH_ONLY) prims. On a hit, g_CollOutput.push is where the sphere's centre would
   be pushed out to. Returns 1 on a hit. */
int CollSphere(float radius, float *pos, void *unused, u32 flags, MobyInstance *skip)
{
    float values[3];
    bool nan = false;

    for (int i = 0; i < 3; i++) {
        values[i] = pos[i];
        if (std::_FDtest(&values[i]) == 2) {
            nan = true;
            break;
        }
    }

    if (nan) {
        Idol_Break((undefined8)(uintptr_t)"CollSphere: Cannot have NaN, this will blow out stack on CollLine as the line goes on forever.",
                   0, 0, 0, 0, 0, 0, 0);
        return 0;
    }

    float maxWorld[3] = {pos[0] + radius, pos[1] + radius, pos[2] + radius};
    float minWorld[3] = {pos[0] - radius, pos[1] - radius, pos[2] - radius};
    float scale = 1024.0f;
    float centre[3] = {pos[0] * scale, pos[1] * scale, pos[2] * scale};
    float scaledRadius = radius * scale;

    if (minWorld[0] < 0.0f || minWorld[1] < 0.0f || minWorld[2] < 0.0f || maxWorld[0] > scale ||
        maxWorld[1] > scale || maxWorld[2] > scale || g_CollOutput.collCount < 0) {
        return 0;
    }

    g_CollOutput.collCount++;

    int minX = (int)minWorld[0];
    int minY = (int)minWorld[1];
    int minZ = (int)minWorld[2];
    int maxX = (int)maxWorld[0];
    int maxY = (int)maxWorld[1];
    int maxZ = (int)maxWorld[2];
    if (scaledRadius <= 0.0f) {
        return 0;
    }

    float boxMin[3] = {minWorld[0] * scale, minWorld[1] * scale, minWorld[2] * scale};
    float boxMax[3] = {maxWorld[0] * scale, maxWorld[1] * scale, maxWorld[2] * scale};

    CollHit hit;
    memset(&hit, 0, sizeof(hit));
    hit.t = scaledRadius * scaledRadius * 0.9995f;

    Vec4 query;
    query.x = centre[0];
    query.y = centre[1];
    query.z = centre[2];

    if ((flags & COLL_NO_ENV) == 0) {
        CollCellRef cells[256];

        CollGatherCells(cells, minX >> 2, minY >> 2, minZ >> 2, maxX >> 2, maxY >> 2, maxZ >> 2);
        for (CollCellRef *ref = cells; ref->cell != NULL; ref++) {
            CollCell *cell = ref->cell;
            int vertCount = (u8)cell->vertCount;

            if (vertCount == 0) {
                continue;
            }

            Vec3 origin;
            origin.x = ref->centre[0];
            origin.y = ref->centre[1];
            origin.z = ref->centre[2];

            Vec4 rel;
            rel.x = centre[0] - origin.x;
            rel.y = centre[1] - origin.y;
            rel.z = centre[2] - origin.z;

            CollBox box;
            box.min.x = boxMin[0] - origin.x;
            box.min.y = boxMin[1] - origin.y;
            box.min.z = boxMin[2] - origin.z;
            box.max.x = boxMax[0] - origin.x;
            box.max.y = boxMax[1] - origin.y;
            box.max.z = boxMax[2] - origin.z;

            float *verts = (float *)(cell + 1);
            u32 outcodes[256];
            for (int i = 0; i < vertCount; i++) {
                outcodes[i] = CollOutcode(verts[i * 3], verts[i * 3 + 1], verts[i * 3 + 2], &box);
            }

            CollTri *tris = (CollTri *)(verts + vertCount * 3);
            int faceCount = cell->faceCount;
            for (int i = 0; i < faceCount; i++) {
                CollSphereVsTri(&tris[i], verts, outcodes, &hit, vertCount, origin, flags, rel,
                                (MobyInstance *)g_CollOutput.grid);
            }

            int quadCount = (u8)cell->quadCount;
            u8 *quadV3 = (u8 *)(tris + faceCount);
            for (int i = 0; i < quadCount; i++) {
                CollTri second = tris[i];

                second.v1 = second.v2;
                second.v2 = (char)quadV3[i];
                CollSphereVsTri(&second, verts, outcodes, &hit, vertCount, origin, flags, rel,
                                (MobyInstance *)g_CollOutput.grid);
            }
        }
    }

    /* the mobys in the moby grid cells (16 units) the sphere overlaps */
    Vec3 queryVec;
    queryVec.x = centre[0];
    queryVec.y = centre[1];
    queryVec.z = centre[2];

    for (int gy = minY >> 4; gy < (maxY >> 4) + 1; gy++) {
        for (int gx = minX >> 4; gx < (maxX >> 4) + 1; gx++) {
            MobyGridCell *gridCell = &g_MobyGrid[gy * 64 + gx];
            short *list = (short *)((u8 *)&g_MobyGridLists + gridCell->listStart * 32);

            for (int n = 0; n < (u8)gridCell->count; n++) {
                int stamp = g_CollOutput.collCount;
                MobyInstance *moby = &g_MobyInstance[list[n]];

                if (moby == skip || moby->collision == NULL || moby->collQueryStamp == g_CollOutput.collCount) {
                    continue;
                }

                float offX = moby->bSphere.x - centre[0];
                float offY = moby->bSphere.y - centre[1];
                float offZ = moby->bSphere.z - centre[2];
                float reach = scaledRadius + moby->bSphere.rad;
                if (!(offX * offX + offY * offY + offZ * offZ <= reach * reach)) {
                    continue;
                }

                MobyCollHeader *coll = (MobyCollHeader *)moby->collision;
                int primCount = coll->primBytes / 32;
                int joints = (flags & COLL_ALT_PRIMSET) ? coll->primSetA : coll->primSetB;
                int vertBytes;
                Vec4 *jointMtx = NULL;

                moby->collQueryStamp = stamp;
                vertBytes = ((MobyCollHeader *)moby->collision)->vertBytes;
                if (joints != 0) {
                    if (vertBytes == ((flags & COLL_MESH_ONLY) == 0)) {
                        continue;
                    }
                    jointMtx = CollMoby_GetJointCache(moby, joints);
                }

                float mtx[9] = {moby->transform.v0.x, moby->transform.v0.y, moby->transform.v0.z,
                                moby->transform.v1.x, moby->transform.v1.y, moby->transform.v1.z,
                                moby->transform.v2.x, moby->transform.v2.y, moby->transform.v2.z};
                Vec3 mobyPos;
                mobyPos.x = moby->pos.x * scale;
                mobyPos.y = moby->pos.y * scale;
                mobyPos.z = moby->pos.z * scale;

                if (vertBytes != 0) {
                    Vec4 rel;
                    rel.x = centre[0] - mobyPos.x;
                    rel.y = centre[1] - mobyPos.y;
                    rel.z = centre[2] - mobyPos.z;

                    CollBox box;
                    box.min.x = rel.x - scaledRadius;
                    box.min.y = rel.y - scaledRadius;
                    box.min.z = rel.z - scaledRadius;
                    box.max.x = rel.x + scaledRadius;
                    box.max.y = rel.y + scaledRadius;
                    box.max.z = rel.z + scaledRadius;

                    float verts[256 * 3];
                    for (int i = 0; i < 256 * 3; i++) {
                        verts[i] = 0.0f;
                    }

                    CollRot rot;
                    float mobyScale = moby->scale;
                    rot.v0.x = mtx[0] * mobyScale;
                    rot.v0.y = mtx[1] * mobyScale;
                    rot.v0.z = mtx[2] * mobyScale;
                    rot.v1.x = mtx[3] * mobyScale;
                    rot.v1.y = mtx[4] * mobyScale;
                    rot.v1.z = mtx[5] * mobyScale;
                    rot.v2.x = mtx[6] * mobyScale;
                    rot.v2.y = mtx[7] * mobyScale;
                    rot.v2.z = mtx[8] * mobyScale;

                    u32 outcodes[256];
                    CollTri *tris;
                    int triCount;
                    CollMoby_TransformVerts(moby, box, rot, verts, outcodes, &tris, &triCount);
                    for (int i = 0; i < triCount; i++) {
                        CollSphereVsTri(&tris[i], verts, outcodes, &hit, vertBytes, mobyPos, flags, rel, moby);
                    }
                }

                if (flags & COLL_MESH_ONLY) {
                    continue;
                }

                int disabled = (int)(uintptr_t)moby->collisionMesh;
                int setMask = (flags & COLL_ALT_PRIMSET) ? 1 : 2;
                CollPrim *prim = (CollPrim *)((MobyCollHeader *)moby->collision + 1);

                for (int i = 0; i < primCount; i++, prim++) {
                    int off = disabled & 1;
                    disabled >>= 1;

                    if (off != 0 || (prim->sets & setMask) == 0) {
                        continue;
                    }

                    float primScale = moby->scale;
                    float rotated[3];
                    Vec3 other;
                    float otherRadius;

                    switch (prim->collType) {
                    case 1:
                        CollRotate(rotated, mtx, prim->offset.x * primScale, prim->offset.y * primScale,
                                   prim->offset.z * primScale);
                        other.x = rotated[0] + mobyPos.x;
                        other.y = rotated[1] + mobyPos.y;
                        other.z = rotated[2] + mobyPos.z;
                        otherRadius = prim->offset.w * primScale;
                        break;

                    case 2: {
                        Vec4 *joint = &jointMtx[prim->joint];

                        CollRotate(rotated, mtx, (joint->x * scale + prim->offset.x) * primScale,
                                   (joint->y * scale + prim->offset.y) * primScale,
                                   (joint->z * scale + prim->offset.z) * primScale);
                        other.x = rotated[0] + mobyPos.x;
                        other.y = rotated[1] + mobyPos.y;
                        other.z = rotated[2] + mobyPos.z;
                        otherRadius = prim->radius * primScale;
                        break;
                    }

                    case 3: {
                        /* a vertical pill: its axis point level with the query */
                        CollRotate(rotated, mtx, prim->offset.x * primScale, prim->offset.y * primScale,
                                   prim->offset.z * primScale);

                        float bottom = rotated[2] + mobyPos.z;
                        float z = bottom < centre[2] ? centre[2] : bottom;
                        float top = bottom + prim->length * primScale;
                        if (top < z) {
                            z = top;
                        }

                        other.x = rotated[0] + mobyPos.x;
                        other.y = rotated[1] + mobyPos.y;
                        other.z = z;
                        otherRadius = prim->offset.w * primScale;
                        break;
                    }

                    default: {
                        /* a capsule between two joints: its axis point nearest the query */
                        Vec4 *jointA = &jointMtx[prim->ends.jointA];
                        Vec4 *jointB = &jointMtx[prim->ends.jointB];
                        float endA[3];
                        float endB[3];

                        CollRotate(endA, mtx, jointA->x * scale * primScale, jointA->y * scale * primScale,
                                   jointA->z * scale * primScale);
                        CollRotate(endB, mtx, jointB->x * scale * primScale, jointB->y * scale * primScale,
                                   jointB->z * scale * primScale);

                        float ax = endA[0] + mobyPos.x;
                        float ay = endA[1] + mobyPos.y;
                        float az = endA[2] + mobyPos.z;
                        float ex = (endB[0] + mobyPos.x) - ax;
                        float ey = (endB[1] + mobyPos.y) - ay;
                        float ez = (endB[2] + mobyPos.z) - az;
                        float t = ((centre[0] - ax) * ex + (centre[1] - ay) * ey + (centre[2] - az) * ez) /
                                  (ex * ex + ey * ey + ez * ez);

                        if (t <= 0.0f) {
                            t = 0.0f;
                        }
                        if (1.0f <= t) {
                            t = 1.0f;
                        }

                        other.x = ax + ex * t;
                        other.y = ay + ey * t;
                        other.z = az + ez * t;
                        otherRadius = prim->radius * primScale;
                        break;
                    }
                    }

                    CollSphereVsSphere(scaledRadius, otherRadius, queryVec, other, &hit, (int)(uintptr_t)prim, moby);
                }
            }
        }
    }

    if (hit.poly == 0) {
        return 0;
    }

    float unit = 0.0009765625f;
    float ipX = hit.ip[0];
    float ipY = hit.ip[1];
    float ipZ = hit.ip[2];

    g_CollOutput.ip.x = ipX * unit;
    g_CollOutput.ip.y = ipY * unit;
    g_CollOutput.ip.z = ipZ * unit;
    g_CollOutput.v0.x = hit.v0[0] * unit;
    g_CollOutput.v0.y = hit.v0[1] * unit;
    g_CollOutput.v0.z = hit.v0[2] * unit;
    g_CollOutput.v1.x = hit.v1[0] * unit;
    g_CollOutput.v1.y = hit.v1[1] * unit;
    g_CollOutput.v1.z = hit.v1[2] * unit;
    g_CollOutput.v2.x = hit.v2[0] * unit;
    g_CollOutput.v2.y = hit.v2[1] * unit;
    g_CollOutput.v2.z = hit.v2[2] * unit;
    hit.ip[0] = g_CollOutput.ip.x;
    hit.ip[1] = g_CollOutput.ip.y;
    hit.ip[2] = g_CollOutput.ip.z;
    g_CollOutput.normal.x = hit.normal[0];
    g_CollOutput.normal.y = hit.normal[1];
    g_CollOutput.normal.z = hit.normal[2];
    g_CollOutput.pMoby = hit.moby;
    g_CollOutput.poly = hit.poly;

    /* push the centre out to radius from the hit (along the normal when the centre is on it) */
    float pushX;
    float pushY;
    float pushZ;
    if (hit.t == 0.0f) {
        float nx = g_CollOutput.normal.x;
        float ny = g_CollOutput.normal.y;
        float nz = g_CollOutput.normal.z;
        float len = sqrtf(nx * nx + ny * ny + nz * nz);

        if (len != 0.0f) {
            nx /= len;
            ny /= len;
            nz /= len;
        }

        pushX = radius * nx;
        pushY = radius * ny;
        pushZ = radius * nz;
    }
    else {
        float k = scaledRadius / sqrtf(hit.t);

        pushX = (centre[0] - ipX) * k * unit;
        pushY = (centre[1] - ipY) * k * unit;
        pushZ = (centre[2] - ipZ) * k * unit;
    }

    g_CollOutput.push.x = pushX + hit.ip[0];
    g_CollOutput.push.y = pushY + hit.ip[1];
    g_CollOutput.push.z = pushZ + hit.ip[2];
    return 1;
}

// 0x005bc20 (0x19c bytes)
/* the sphere (centre, otherRadius) against the pill from base up length (radius): records the
   point of the sphere nearest the pill's axis (pulled in slightly), as CollSphereVsSphere */
void CollPillVsSphere(float radius, float otherRadius, float length, Vec3 base, Vec3 centre, CollHit *hit, int index,
                      MobyInstance *moby)
{
    float height = centre.z - base.z;

    if (!(length <= height)) {
        length = height;
    }
    if (!(length > 0.0f)) {
        length = 0.0f;
    }

    float axisX = base.x + 0.0f;
    float axisY = base.y + 0.0f;
    float axisZ = length + base.z;
    float reach = radius + otherRadius;
    float dx = centre.x - axisX;
    float dy = centre.y - axisY;
    float dz = centre.z - axisZ;
    float distSq = dx * dx + dy * dy + dz * dz;

    if (distSq > reach * reach) {
        return;
    }

    float dist = sqrtf(distSq);
    float amount = otherRadius;
    if (!(amount < dist * 0.9995f)) {
        amount = dist * 0.9995f;
    }

    float inv = 1.0f / dist;
    float pushX = (axisX - centre.x) * inv * amount;
    float pushY = (axisY - centre.y) * inv * amount;
    float pushZ = (axisZ - centre.z) * inv * amount;
    float px = centre.x + pushX;
    float py = centre.y + pushY;
    float pz = centre.z + pushZ;
    float offX = px - axisX;
    float offY = py - axisY;
    float offZ = pz - axisZ;
    float hitSq = offX * offX + offY * offY + offZ * offZ;
    if (hit->t < hitSq) {
        return;
    }

    hit->t = hitSq;
    hit->moby = moby;
    hit->ip[0] = px;
    hit->ip[1] = py;
    hit->ip[2] = pz;
    hit->poly = -index;
    hit->normal[0] = pushX;
    hit->normal[1] = pushY;
    hit->normal[2] = pushZ;
}

// 0x005bdbc (0x2c bytes)
void CollMobyVertCache_Reset(void)
{
    for (int i = 0; i < 8; i++) {
        g_CollMobyVertCache[i].oClass = 0;
    }
}

/* the pill's axis point used against a tri: its base, its top, where it crosses the tri's plane
   (or the nearest edge point to that), clamped to the pill */
static inline float CollPillAxisZ(float length, float baseZ, float found)
{
    float height = found - baseZ;

    if (height < length) {
        length = height;
    }
    if (length <= 0.0f) {
        length = 0.0f;
    }

    return baseZ + length;
}

// 0x005bdf8 (0x8f4 bytes)
/* the pill from base up length against one tri (as CollSphereVsTri, from the point of the
   pill's axis nearest the tri) */
void CollPillVsTri(float length, CollTri *tri, float *verts, u32 *outcodes, CollHit *hit, int vertCount, Vec3 origin,
                   u32 flags, Vec4 base, int unused, MobyInstance *moby)
{
    u8 i0 = (u8)tri->v0;
    u8 i1 = (u8)tri->v1;
    u8 i2 = (u8)tri->v2;
    float *p0 = &verts[i0 * 3];
    float *p1 = &verts[i1 * 3];
    float *p2 = &verts[i2 * 3];
    u8 type = (u8)tri->collType;

    if ((outcodes[i0] & outcodes[i1] & outcodes[i2]) != 0) {
        return;
    }

    if (type & 0x80 & flags) {
        return;
    }

    if ((flags & COLL_IGNORE_MATERIAL) != 0 && ((flags >> 8 ^ type) & 0x1f) == 0) {
        return;
    }

    float e1x = p1[0] - p0[0];
    float e1y = p1[1] - p0[1];
    float e1z = p1[2] - p0[2];
    float e2x = p2[0] - p0[0];
    float e2y = p2[1] - p0[1];
    float e2z = p2[2] - p0[2];
    float cx = base.x - p0[0];
    float cy = base.y - p0[1];
    float cz = base.z - p0[2];
    float topZ = cz + length;
    float nx = e2y * e1z - e2z * e1y;
    float ny = e2z * e1x - e2x * e1z;
    float nz = e2x * e1y - e2y * e1x;
    float distBase = cx * nx + cy * ny + cz * nz;
    float distTop = (cx + 0.0f) * nx + (cy + 0.0f) * ny + topZ * nz;

    if ((flags & COLL_DOUBLE_SIDED) == 0 && (distBase < 0.0f || distTop < 0.0f)) {
        return;
    }

    float px = cx;
    float py = cy;
    float pz;
    float k;

    if (fabsf(nz) >= 0.0001f && cz - e2z >= 0.0f && cz - e1z >= 0.0f && cz >= 0.0f) {
        /* the whole tri is below the pill: its base */
        if (length * nz == 0.0f) {
            return;
        }

        float normalSq = nx * nx + ny * ny + nz * nz;
        k = distBase / normalSq;
        if (normalSq == 0.0f) {
            return;
        }
        pz = cz;
    }
    else if (fabsf(nz) >= 0.0001f && topZ < 0.0f && topZ - e1z < 0.0f && topZ - e2z < 0.0f) {
        /* the whole tri is above the pill: its top */
        if (length * nz == 0.0f) {
            return;
        }

        float normalSq = nx * nx + ny * ny + nz * nz;
        k = distTop / normalSq;
        if (normalSq == 0.0f) {
            return;
        }
        px = cx + 0.0f;
        py = cy + 0.0f;
        pz = topZ;
    }
    else {
        float found = 0.0f;

        if (fabsf(nz) >= 0.0001f) {
            if (length * nz == 0.0f) {
                return;
            }

            /* where the axis crosses the plane, or the nearest edge point to that */
            found = cz - distBase / (length * nz) * length;

            float edgeA = (cy * e1z - found * e1y) * nx + (found * e1x - cx * e1z) * ny + (cx * e1y - cy * e1x) * nz;
            float edgeB = (e2y * found - e2z * cy) * nx + (e2z * cx - e2x * found) * ny + (e2x * cy - e2y * cx) * nz;
            float edgeC = ((cy - e1y) * (e2z - e1z) - (found - e1z) * (e2y - e1y)) * nx +
                          ((found - e1z) * (e2x - e1x) - (cx - e1x) * (e2z - e1z)) * ny +
                          ((cx - e1x) * (e2y - e1y) - (cy - e1y) * (e2x - e1x)) * nz;

            if (!(edgeA >= 0.0f) || edgeB < 0.0f || edgeC < 0.0f) {
                float sx;
                float sy;
                float sz;
                float ex;
                float ey;
                float ez;

                if (!(edgeA >= 0.0f)) {
                    sx = 0.0f;
                    sy = 0.0f;
                    sz = 0.0f;
                    ex = e1x;
                    ey = e1y;
                    ez = e1z;
                }
                else if (edgeB < 0.0f) {
                    sx = e2x;
                    sy = e2y;
                    sz = e2z;
                    ex = 0.0f;
                    ey = 0.0f;
                    ez = 0.0f;
                }
                else {
                    sx = e1x;
                    sy = e1y;
                    sz = e1z;
                    ex = e2x;
                    ey = e2y;
                    ez = e2z;
                }

                ex -= sx;
                ey -= sy;
                ez -= sz;

                float edgeSq = ex * ex + ey * ey + ez * ez;
                float t = ((cx - sx) * ex + (cy - sy) * ey + (found - sz) * ez) / edgeSq;
                if (edgeSq == 0.0f) {
                    return;
                }
                if (t <= 0.0f) {
                    t = 0.0f;
                }
                if (1.0f <= t) {
                    t = 1.0f;
                }

                found = t * ez + sz;
            }
        }

        /* (a vertical tri takes found = 0, v0's height) */
        pz = CollPillAxisZ(length, base.z - p0[2], found);
        px = base.x - p0[0];
        py = base.y - p0[1];

        float normalSq = nx * nx + ny * ny + nz * nz;
        k = (px * nx + py * ny + pz * nz) / normalSq;
        if (normalSq == 0.0f) {
            return;
        }
    }

    /* the point projected onto the plane */
    float qx = px - nx * k;
    float qy = py - ny * k;
    float qz = pz - nz * k;
    float distSq = nx * k * (nx * k) + ny * k * (ny * k) + nz * k * (nz * k);
    if (!(distSq <= hit->t)) {
        return;
    }

    float edgeA = (qy * e1z - qz * e1y) * nx + (qz * e1x - qx * e1z) * ny + (qx * e1y - qy * e1x) * nz;
    float edgeB = (e2y * qz - e2z * qy) * nx + (e2z * qx - e2x * qz) * ny + (e2x * qy - e2y * qx) * nz;
    float edgeC = ((qy - e1y) * (e2z - e1z) - (qz - e1z) * (e2y - e1y)) * nx +
                  ((qz - e1z) * (e2x - e1x) - (qx - e1x) * (e2z - e1z)) * ny +
                  ((qx - e1x) * (e2y - e1y) - (qy - e1y) * (e2x - e1x)) * nz;

    if (edgeA < 0.0f || edgeB < 0.0f || edgeC < 0.0f) {
        float sx;
        float sy;
        float sz;
        float ex;
        float ey;
        float ez;

        if (edgeA < 0.0f) {
            sx = 0.0f;
            sy = 0.0f;
            sz = 0.0f;
            ex = e1x;
            ey = e1y;
            ez = e1z;
        }
        else if (edgeB < 0.0f) {
            sx = e2x;
            sy = e2y;
            sz = e2z;
            ex = 0.0f;
            ey = 0.0f;
            ez = 0.0f;
        }
        else {
            sx = e1x;
            sy = e1y;
            sz = e1z;
            ex = e2x;
            ey = e2y;
            ez = e2z;
        }

        ex -= sx;
        ey -= sy;
        ez -= sz;

        float t = ((qx - sx) * ex + (qy - sy) * ey + (qz - sz) * ez) / (ex * ex + ey * ey + ez * ez);
        if (t <= 0.0f) {
            t = 0.0f;
        }
        if (1.0f <= t) {
            t = 1.0f;
        }

        qx = t * ex + sx;
        qy = t * ey + sy;
        qz = t * ez + sz;
        distSq = (qx - px) * (qx - px) + (qy - py) * (qy - py) + (qz - pz) * (qz - pz);
        if (hit->t < distSq) {
            return;
        }
    }

    float baseX = p0[0] + origin.x;
    float baseY = p0[1] + origin.y;
    float baseZ = p0[2] + origin.z;

    hit->poly = type + 0x1000;
    hit->moby = moby;
    hit->t = distSq * 0.9995f;
    hit->ip[0] = qx + baseX;
    hit->ip[1] = qy + baseY;
    hit->ip[2] = qz + baseZ;
    hit->normal[0] = nx;
    hit->normal[1] = ny;
    hit->normal[2] = nz;
    hit->v0[0] = baseX;
    hit->v0[1] = baseY;
    hit->v0[2] = baseZ;
    hit->v1[0] = e1x + baseX;
    hit->v1[1] = e1y + baseY;
    hit->v1[2] = e1z + baseZ;
    hit->v2[0] = e2x + baseX;
    hit->v2[1] = e2y + baseY;
    hit->v2[2] = e2z + baseZ;
}

// 0x005c710 (0x1e7c bytes)
/* the closest hit within radius of the vertical segment from pos up length (world units, inside
   [0, 1024]), as CollSphere. On a hit g_CollOutput.push is where pos would be pushed out to. */
int CollPill(float radius, float length, float *pos, void *unused1, void *unused2, u32 flags, MobyInstance *skip)
{
    float minWorld[3] = {pos[0] - radius, pos[1] - radius, pos[2] - radius};
    float maxWorld[3] = {(pos[0] + radius) + 0.0f, (pos[1] + radius) + 0.0f, (pos[2] + radius) + length};
    float scale = 1024.0f;
    float scaledLength = length * scale;
    float scaledRadius = radius * scale;
    float centre[3] = {pos[0] * scale, pos[1] * scale, pos[2] * scale};

    if (minWorld[1] < 0.0f || minWorld[0] < 0.0f || minWorld[2] < 0.0f) {
        return 0;
    }

    if (maxWorld[0] > scale || maxWorld[1] > scale || maxWorld[2] > scale) {
        return 0;
    }

    if (g_CollOutput.collCount < 0) {
        return 0;
    }

    g_CollOutput.collCount++;

    int minX = (int)minWorld[0];
    int minY = (int)minWorld[1];
    int minZ = (int)minWorld[2];
    int maxX = (int)maxWorld[0];
    int maxY = (int)maxWorld[1];
    int maxZ = (int)maxWorld[2];
    if (!(scaledLength > 0.0f) || !(scaledRadius > 0.0f)) {
        return 0;
    }

    float boxMin[3] = {minWorld[0] * scale, minWorld[1] * scale, minWorld[2] * scale};
    float boxMax[3] = {maxWorld[0] * scale, maxWorld[1] * scale, maxWorld[2] * scale};

    CollHit hit;
    memset(&hit, 0, sizeof(hit));
    hit.t = scaledRadius * scaledRadius * 0.9995f;

    if ((flags & COLL_NO_ENV) == 0) {
        CollCellRef cells[256];

        CollGatherCells(cells, minX >> 2, minY >> 2, minZ >> 2, maxX >> 2, maxY >> 2, maxZ >> 2);
        for (CollCellRef *ref = cells; ref->cell != NULL; ref++) {
            CollCell *cell = ref->cell;
            int vertCount = (u8)cell->vertCount;

            if (vertCount == 0) {
                continue;
            }

            Vec3 origin;
            origin.x = ref->centre[0];
            origin.y = ref->centre[1];
            origin.z = ref->centre[2];

            Vec4 rel;
            rel.x = centre[0] - origin.x;
            rel.y = centre[1] - origin.y;
            rel.z = centre[2] - origin.z;

            CollBox box;
            box.min.x = boxMin[0] - origin.x;
            box.min.y = boxMin[1] - origin.y;
            box.min.z = boxMin[2] - origin.z;
            box.max.x = boxMax[0] - origin.x;
            box.max.y = boxMax[1] - origin.y;
            box.max.z = boxMax[2] - origin.z;

            float *verts = (float *)(cell + 1);
            u32 outcodes[256];
            for (int i = 0; i < vertCount; i++) {
                outcodes[i] = CollOutcode(verts[i * 3], verts[i * 3 + 1], verts[i * 3 + 2], &box);
            }

            CollTri *tris = (CollTri *)(verts + vertCount * 3);
            int faceCount = cell->faceCount;
            for (int i = 0; i < faceCount; i++) {
                CollPillVsTri(scaledLength, &tris[i], verts, outcodes, &hit, vertCount, origin, flags, rel, 0,
                              (MobyInstance *)g_CollOutput.grid);
            }

            int quadCount = (u8)cell->quadCount;
            u8 *quadV3 = (u8 *)(tris + faceCount);
            for (int i = 0; i < quadCount; i++) {
                CollTri second = tris[i];

                second.v1 = second.v2;
                second.v2 = (char)quadV3[i];
                CollPillVsTri(scaledLength, &second, verts, outcodes, &hit, vertCount, origin, flags, rel, 0,
                              (MobyInstance *)g_CollOutput.grid);
            }
        }
    }

    Vec3 baseVec;
    baseVec.x = centre[0];
    baseVec.y = centre[1];
    baseVec.z = centre[2];

    for (int gy = minY >> 4; gy < (maxY >> 4) + 1; gy++) {
        for (int gx = minX >> 4; gx < (maxX >> 4) + 1; gx++) {
            MobyGridCell *gridCell = &g_MobyGrid[gy * 64 + gx];
            short *list = (short *)((u8 *)&g_MobyGridLists + gridCell->listStart * 32);

            for (int n = 0; n < (u8)gridCell->count; n++) {
                MobyInstance *moby = &g_MobyInstance[list[n]];

                if (moby == skip || moby->collision == NULL) {
                    continue;
                }

                int stamp = g_CollOutput.collCount;
                if (moby->collQueryStamp == stamp) {
                    continue;
                }

                /* (the binary's vertical test compares the sphere's radius minus its height) */
                float reach = scaledRadius + moby->bSphere.rad;
                float dx = moby->bSphere.x - centre[0];
                float dy = moby->bSphere.y - centre[1];
                float bsZ = moby->bSphere.z;
                if (dx * dx + dy * dy > reach * reach || !((bsZ + reach) - centre[2] > 0.0f) ||
                    (reach - bsZ) - centre[2] >= 0.0f) {
                    continue;
                }

                MobyCollHeader *coll = (MobyCollHeader *)moby->collision;
                int primCount = coll->primBytes / 32;
                int joints = (flags & COLL_ALT_PRIMSET) ? coll->primSetA : coll->primSetB;
                Vec4 *jointMtx = NULL;

                moby->collQueryStamp = stamp;
                int vertBytes = ((MobyCollHeader *)moby->collision)->vertBytes;
                if (joints != 0) {
                    if (vertBytes == ((flags & COLL_MESH_ONLY) == 0)) {
                        continue;
                    }
                    jointMtx = CollMoby_GetJointCache(moby, joints);
                }

                float mtx[9] = {moby->transform.v0.x, moby->transform.v0.y, moby->transform.v0.z,
                                moby->transform.v1.x, moby->transform.v1.y, moby->transform.v1.z,
                                moby->transform.v2.x, moby->transform.v2.y, moby->transform.v2.z};
                Vec3 mobyPos;
                mobyPos.x = moby->pos.x * scale;
                mobyPos.y = moby->pos.y * scale;
                mobyPos.z = moby->pos.z * scale;

                if (vertBytes != 0) {
                    Vec4 rel;
                    rel.x = centre[0] - mobyPos.x;
                    rel.y = centre[1] - mobyPos.y;
                    rel.z = centre[2] - mobyPos.z;

                    CollBox box;
                    box.min.x = rel.x - scaledRadius;
                    box.min.y = rel.y - scaledRadius;
                    box.min.z = rel.z - scaledRadius;
                    box.max.x = (rel.x + scaledRadius) + 0.0f;
                    box.max.y = (rel.y + scaledRadius) + 0.0f;
                    box.max.z = (rel.z + scaledRadius) + scaledLength;

                    float verts[256 * 3];
                    for (int i = 0; i < 256 * 3; i++) {
                        verts[i] = 0.0f;
                    }

                    CollRot rot;
                    float mobyScale = moby->scale;
                    rot.v0.x = mtx[0] * mobyScale;
                    rot.v0.y = mtx[1] * mobyScale;
                    rot.v0.z = mtx[2] * mobyScale;
                    rot.v1.x = mtx[3] * mobyScale;
                    rot.v1.y = mtx[4] * mobyScale;
                    rot.v1.z = mtx[5] * mobyScale;
                    rot.v2.x = mtx[6] * mobyScale;
                    rot.v2.y = mtx[7] * mobyScale;
                    rot.v2.z = mtx[8] * mobyScale;

                    u32 outcodes[256];
                    CollTri *tris;
                    int triCount;
                    CollMoby_TransformVerts(moby, box, rot, verts, outcodes, &tris, &triCount);
                    for (int i = 0; i < triCount; i++) {
                        CollPillVsTri(scaledLength, &tris[i], verts, outcodes, &hit, vertBytes / 8, mobyPos, flags, rel, 0,
                                      moby);
                    }
                }

                if (flags & COLL_MESH_ONLY) {
                    continue;
                }

                int disabled = (int)(uintptr_t)moby->collisionMesh;
                int setMask = (flags & COLL_ALT_PRIMSET) ? 1 : 2;
                CollPrim *prim = (CollPrim *)((MobyCollHeader *)moby->collision + 1);

                for (int i = 0; i < primCount; i++, prim++) {
                    int off = disabled & 1;
                    disabled >>= 1;

                    if (off != 0 || (prim->sets & setMask) == 0) {
                        continue;
                    }

                    float primScale = moby->scale;
                    float rotated[3];
                    Vec3 other;
                    float otherRadius;

                    switch (prim->collType) {
                    case 1:
                        CollRotate(rotated, mtx, prim->offset.x * primScale, prim->offset.y * primScale,
                                   prim->offset.z * primScale);
                        other.x = rotated[0] + mobyPos.x;
                        other.y = rotated[1] + mobyPos.y;
                        other.z = rotated[2] + mobyPos.z;
                        otherRadius = prim->offset.w * primScale;
                        break;

                    case 2: {
                        Vec4 *joint = &jointMtx[prim->joint];

                        CollRotate(rotated, mtx, (joint->x * scale + prim->offset.x) * primScale,
                                   (joint->y * scale + prim->offset.y) * primScale,
                                   (joint->z * scale + prim->offset.z) * primScale);
                        other.x = rotated[0] + mobyPos.x;
                        other.y = rotated[1] + mobyPos.y;
                        other.z = rotated[2] + mobyPos.z;
                        otherRadius = prim->radius * primScale;
                        break;
                    }

                    case 3: {
                        CollRotate(rotated, mtx, prim->offset.x * primScale, prim->offset.y * primScale,
                                   prim->offset.z * primScale);

                        float bottom = rotated[2] + mobyPos.z;
                        float z = bottom < centre[2] ? centre[2] : bottom;
                        float top = bottom + prim->length * primScale;
                        if (top < z) {
                            z = top;
                        }

                        other.x = rotated[0] + mobyPos.x;
                        other.y = rotated[1] + mobyPos.y;
                        other.z = z;
                        otherRadius = prim->offset.w * primScale;
                        break;
                    }

                    default: {
                        /* a capsule: its point nearest the pill's axis, in the horizontal */
                        Vec4 *jointA = &jointMtx[prim->ends.jointA];
                        Vec4 *jointB = &jointMtx[prim->ends.jointB];
                        float endA[3];
                        float endB[3];

                        CollRotate(endA, mtx, jointA->x * scale * primScale, jointA->y * scale * primScale,
                                   jointA->z * scale * primScale);
                        CollRotate(endB, mtx, jointB->x * scale * primScale, jointB->y * scale * primScale,
                                   jointB->z * scale * primScale);

                        float ax = endA[0] + mobyPos.x;
                        float ay = endA[1] + mobyPos.y;
                        float az = endA[2] + mobyPos.z;
                        float ex = (endB[0] + mobyPos.x) - ax;
                        float ey = (endB[1] + mobyPos.y) - ay;
                        float ez = (endB[2] + mobyPos.z) - az;
                        float flatSq = ex * ex + ey * ey;

                        if (1.0f < fabsf(flatSq)) {
                            float t = ((centre[0] - ax) * ex + (centre[1] - ay) * ey) / flatSq;

                            if (t <= 0.0f) {
                                t = 0.0f;
                            }
                            if (1.0f <= t) {
                                t = 1.0f;
                            }

                            other.x = ax + ex * t;
                            other.y = ay + ey * t;
                            other.z = az + ez * t;
                        }
                        else {
                            /* (nearly) vertical: level with the pill's base, inside the capsule */
                            float z = centre[2];
                            float topZ = az + ez;

                            if (z < az) {
                                z = az;
                            }
                            if (topZ < z) {
                                z = topZ;
                            }

                            other.x = ax + ex;
                            other.y = ay + ey;
                            other.z = z;
                        }

                        otherRadius = prim->radius * primScale;
                        break;
                    }
                    }

                    CollPillVsSphere(scaledRadius, otherRadius, scaledLength, baseVec, other, &hit,
                                     (int)(uintptr_t)prim, moby);
                }
            }
        }
    }

    if (hit.poly == 0) {
        return 0;
    }

    float unit = 0.0009765625f;
    float ipX = hit.ip[0];
    float ipY = hit.ip[1];
    float ipZ = hit.ip[2];

    g_CollOutput.ip.x = ipX * unit;
    g_CollOutput.ip.z = ipZ * unit;
    g_CollOutput.ip.y = ipY * unit;
    g_CollOutput.normal.x = hit.normal[0];
    g_CollOutput.normal.y = hit.normal[1];
    g_CollOutput.normal.z = hit.normal[2];
    g_CollOutput.v0.x = hit.v0[0] * unit;
    g_CollOutput.v0.y = hit.v0[1] * unit;
    g_CollOutput.v0.z = hit.v0[2] * unit;
    g_CollOutput.v1.x = hit.v1[0] * unit;
    g_CollOutput.v1.y = hit.v1[1] * unit;
    g_CollOutput.v1.z = hit.v1[2] * unit;
    g_CollOutput.v2.x = hit.v2[0] * unit;
    g_CollOutput.v2.y = hit.v2[1] * unit;
    g_CollOutput.v2.z = hit.v2[2] * unit;
    g_CollOutput.pMoby = hit.moby;
    g_CollOutput.poly = hit.poly;

    /* push out from the hit to radius, from the axis point level with it */
    float rise = ipZ - centre[2];
    if (rise < scaledLength) {
        scaledLength = rise;
    }
    if (scaledLength <= 0.0f) {
        scaledLength = 0.0f;
    }

    float dx = centre[0] - ipX;
    float dy = centre[1] - ipY;
    float dz = (centre[2] - ipZ) + scaledLength;
    float pushX;
    float pushY;
    float pushZ;
    if (sqrtf(hit.t) == 0.0f) {
        pushX = dx * 1000000.0f;
        pushY = dy * 1000000.0f;
        pushZ = dz * 1000000.0f;
    }
    else {
        float k = scaledRadius / sqrtf(hit.t);

        pushX = dx * k;
        pushY = dy * k;
        pushZ = dz * k;
    }

    g_CollOutput.push.x = pushX * unit + ipX * unit;
    g_CollOutput.push.y = pushY * unit + ipY * unit;
    g_CollOutput.push.z = (pushZ - scaledLength) * unit + ipZ * unit;
    return 1;
}


// 0x005e598 (0x11d0 bytes)
/* every moby (not the env) within radius of pos: lists them in g_CollMobyHits (NULL ended) and
   returns how many. g_CollOutput.pMoby is the first, and with damage set each one that can be
   damaged takes it. */
int CollMobySphere(float radius, float *pos, void *unused, u32 flags, MobyInstance *skip, CollDamageIn *damage)
{
    float values[3];
    bool nan = false;

    for (int i = 0; i < 3; i++) {
        values[i] = pos[i];
        if (std::_FDtest(&values[i]) == 2) {
            nan = true;
            break;
        }
    }

    if (nan) {
        Idol_Break((undefined8)(uintptr_t)"CollMobysSphere: Cannot have NaN, this will blow out stack on CollLine as the line goes on forever.",
                   0, 0, 0, 0, 0, 0, 0);
        return 0;
    }

    float scale = 1024.0f;
    float centre[3] = {pos[0] * scale, pos[1] * scale, pos[2] * scale};
    float minWorld[3] = {pos[0] - radius, pos[1] - radius, pos[2] - radius};
    float maxWorld[3] = {pos[0] + radius, pos[1] + radius, pos[2] + radius};
    float scaledRadius = radius * scale;

    if (minWorld[0] < 0.0f || minWorld[2] < 0.0f || minWorld[1] < 0.0f) {
        return 0;
    }

    if (maxWorld[0] > scale || maxWorld[1] > scale || !(maxWorld[2] <= scale)) {
        return 0;
    }

    if (g_CollOutput.collCount < 0) {
        return 0;
    }

    g_CollOutput.collCount++;

    int minX = (int)minWorld[0];
    int minY = (int)minWorld[1];
    int maxX = (int)maxWorld[0];
    int maxY = (int)maxWorld[1];
    if (!(scaledRadius > 0.0f)) {
        return 0;
    }

    float hitT = scaledRadius * scaledRadius;
    int hitCount = 0;

    Vec4 query;
    query.x = centre[0];
    query.y = centre[1];
    query.z = centre[2];

    Vec3 queryVec;
    queryVec.x = centre[0];
    queryVec.y = centre[1];
    queryVec.z = centre[2];

    for (int gy = minY >> 4; gy < (maxY >> 4) + 1; gy++) {
        for (int gx = minX >> 4; gx < (maxX >> 4) + 1; gx++) {
            MobyGridCell *gridCell = &g_MobyGrid[gy * 64 + gx];
            short *list = (short *)((u8 *)&g_MobyGridLists + gridCell->listStart * 32);

            for (int n = 0; n < (u8)gridCell->count; n++) {
                MobyInstance *moby = &g_MobyInstance[list[n]];

                if (moby == skip || moby->collision == NULL) {
                    continue;
                }

                int stamp = g_CollOutput.collCount;
                if (moby->collQueryStamp == stamp) {
                    continue;
                }

                float offX = moby->bSphere.x - centre[0];
                float offY = moby->bSphere.y - centre[1];
                float offZ = moby->bSphere.z - centre[2];
                float reach = scaledRadius + moby->bSphere.rad;
                if (offX * offX + offY * offY + offZ * offZ > reach * reach) {
                    continue;
                }

                MobyCollHeader *coll = (MobyCollHeader *)moby->collision;
                int primCount = coll->primBytes / 32;
                int joints = (flags & COLL_ALT_PRIMSET) ? coll->primSetA : coll->primSetB;
                Vec4 *jointMtx = NULL;

                moby->collQueryStamp = stamp;
                int vertBytes = ((MobyCollHeader *)moby->collision)->vertBytes;
                if (joints != 0) {
                    if (vertBytes == ((flags & COLL_MESH_ONLY) == 0)) {
                        continue;
                    }
                    jointMtx = CollMoby_GetJointCache(moby, joints);
                }

                float mtx[9] = {moby->transform.v0.x, moby->transform.v0.y, moby->transform.v0.z,
                                moby->transform.v1.x, moby->transform.v1.y, moby->transform.v1.z,
                                moby->transform.v2.x, moby->transform.v2.y, moby->transform.v2.z};
                Vec3 mobyPos;
                mobyPos.x = moby->pos.x * scale;
                mobyPos.y = moby->pos.y * scale;
                mobyPos.z = moby->pos.z * scale;

                /* the first tri or prim hit lists the moby */
                bool found = false;

                if (vertBytes != 0) {
                    Vec4 rel;
                    rel.x = centre[0] - mobyPos.x;
                    rel.y = centre[1] - mobyPos.y;
                    rel.z = centre[2] - mobyPos.z;

                    CollBox box;
                    box.min.x = rel.x - scaledRadius;
                    box.min.y = rel.y - scaledRadius;
                    box.min.z = rel.z - scaledRadius;
                    box.max.x = rel.x + scaledRadius;
                    box.max.y = rel.y + scaledRadius;
                    box.max.z = rel.z + scaledRadius;

                    float verts[256 * 3];
                    for (int i = 0; i < 256 * 3; i++) {
                        verts[i] = 0.0f;
                    }

                    CollRot rot;
                    float mobyScale = moby->scale;
                    rot.v0.x = mtx[0] * mobyScale;
                    rot.v0.y = mtx[1] * mobyScale;
                    rot.v0.z = mtx[2] * mobyScale;
                    rot.v1.x = mtx[3] * mobyScale;
                    rot.v1.y = mtx[4] * mobyScale;
                    rot.v1.z = mtx[5] * mobyScale;
                    rot.v2.x = mtx[6] * mobyScale;
                    rot.v2.y = mtx[7] * mobyScale;
                    rot.v2.z = mtx[8] * mobyScale;

                    u32 outcodes[256];
                    CollTri *tris;
                    int triCount;
                    CollMoby_TransformVerts(moby, box, rot, verts, outcodes, &tris, &triCount);
                    for (int i = 0; i < triCount; i++) {
                        CollHit hit;

                        memset(&hit, 0, sizeof(hit));
                        hit.t = hitT;
                        CollSphereVsTri(&tris[i], verts, outcodes, &hit, vertBytes, mobyPos, flags, rel, moby);
                        if (hit.moby != NULL) {
                            g_CollMobyHits[hitCount] = hit.moby;
                            hitCount++;
                            found = true;
                            break;
                        }
                    }
                }

                if (found || (flags & COLL_MESH_ONLY)) {
                    continue;
                }

                int disabled = (int)(uintptr_t)moby->collisionMesh;
                int setMask = (flags & COLL_ALT_PRIMSET) ? 1 : 2;
                CollPrim *prim = (CollPrim *)((MobyCollHeader *)moby->collision + 1);

                for (int i = 0; i < primCount; i++, prim++) {
                    int off = disabled & 1;
                    disabled >>= 1;

                    if (off != 0 || (prim->sets & setMask) == 0) {
                        continue;
                    }

                    float primScale = moby->scale;
                    float rotated[3];
                    Vec3 other;
                    float otherRadius;

                    switch (prim->collType) {
                    case 1:
                        CollRotate(rotated, mtx, prim->offset.x * primScale, prim->offset.y * primScale,
                                   prim->offset.z * primScale);
                        other.x = rotated[0] + mobyPos.x;
                        other.y = rotated[1] + mobyPos.y;
                        other.z = rotated[2] + mobyPos.z;
                        otherRadius = prim->offset.w * primScale;
                        break;

                    case 2: {
                        Vec4 *joint = &jointMtx[prim->joint];

                        CollRotate(rotated, mtx, (joint->x * scale + prim->offset.x) * primScale,
                                   (joint->y * scale + prim->offset.y) * primScale,
                                   (joint->z * scale + prim->offset.z) * primScale);
                        other.x = rotated[0] + mobyPos.x;
                        other.y = rotated[1] + mobyPos.y;
                        other.z = rotated[2] + mobyPos.z;
                        otherRadius = prim->radius * primScale;
                        break;
                    }

                    case 3: {
                        CollRotate(rotated, mtx, prim->offset.x * primScale, prim->offset.y * primScale,
                                   prim->offset.z * primScale);

                        float bottom = rotated[2] + mobyPos.z;
                        float z = bottom < centre[2] ? centre[2] : bottom;
                        float top = bottom + prim->length * primScale;
                        if (top < z) {
                            z = top;
                        }

                        other.x = rotated[0] + mobyPos.x;
                        other.y = rotated[1] + mobyPos.y;
                        other.z = z;
                        otherRadius = prim->offset.w * primScale;
                        break;
                    }

                    default: {
                        Vec4 *jointA = &jointMtx[prim->ends.jointA];
                        Vec4 *jointB = &jointMtx[prim->ends.jointB];
                        float endA[3];
                        float endB[3];

                        CollRotate(endA, mtx, jointA->x * scale * primScale, jointA->y * scale * primScale,
                                   jointA->z * scale * primScale);
                        CollRotate(endB, mtx, jointB->x * scale * primScale, jointB->y * scale * primScale,
                                   jointB->z * scale * primScale);

                        float ax = endA[0] + mobyPos.x;
                        float ay = endA[1] + mobyPos.y;
                        float az = endA[2] + mobyPos.z;
                        float ex = (endB[0] + mobyPos.x) - ax;
                        float ey = (endB[1] + mobyPos.y) - ay;
                        float ez = (endB[2] + mobyPos.z) - az;
                        float t = ((centre[0] - ax) * ex + (centre[1] - ay) * ey + (centre[2] - az) * ez) /
                                  (ex * ex + ey * ey + ez * ez);

                        /* (a zero-length capsule gives NaN) */
                        if (std::_FDtest(&t) == 2) {
                            t = 0.0f;
                        }
                        if (t <= 0.0f) {
                            t = 0.0f;
                        }
                        if (1.0f <= t) {
                            t = 1.0f;
                        }

                        other.x = ax + ex * t;
                        other.y = ay + ey * t;
                        other.z = az + ez * t;
                        otherRadius = prim->radius * primScale;
                        break;
                    }
                    }

                    CollHit hit;

                    memset(&hit, 0, sizeof(hit));
                    hit.t = hitT;
                    CollSphereVsSphere(scaledRadius, otherRadius, queryVec, other, &hit, (int)(uintptr_t)prim, moby);
                    if (hit.moby != NULL) {
                        g_CollMobyHits[hitCount] = hit.moby;
                        hitCount++;
                        break;
                    }
                }
            }
        }
    }

    if (hitCount == 0) {
        return 0;
    }

    g_CollOutput.ip.x = 0.0f;
    g_CollOutput.ip.y = 0.0f;
    g_CollOutput.ip.z = 0.0f;
    g_CollOutput.ip.w = 1.0f;
    g_CollMobyHits[hitCount] = NULL;
    g_CollOutput.poly = 63;
    g_CollOutput.pMoby = g_CollMobyHits[0];

    if (damage != NULL) {
        for (int i = 0; i < hitCount; i++) {
            if (g_CollMobyHits[i]->modeBits & CAN_BE_DAMAGED) {
                Coll_AddDamage(g_CollMobyHits[i], damage, 0);
            }
        }
    }

    return hitCount;
}

// 0x005f780 (0xfb8 bytes)
/* the hero's own collision (g_HeroCollision, u16 coords = world * 64): the nearest tri within
   radius of pos, front sides only, culling each cell by its bounding sphere first. Output as
   CollSphere (no moby). */
int CollHeroSphere(float radius, float *pos)
{
    float scale = 64.0f;
    float centre[3] = {pos[0] * scale, pos[1] * scale, pos[2] * scale};
    float scaledRadius = radius * scale;
    float boxMin[3] = {centre[0] - scaledRadius, centre[1] - scaledRadius, centre[2] - scaledRadius};
    float boxMax[3] = {centre[0] + scaledRadius, centre[1] + scaledRadius, centre[2] + scaledRadius};
    CollHit hit;

    memset(&hit, 0, sizeof(hit));
    hit.t = scaledRadius * scaledRadius;

    /* the cells whose bounding sphere the sphere touches */
    HeroCollCell *cells[128];
    int cellCount = 0;

    for (int i = 0; i < g_HeroCollision->cellCount; i++) {
        HeroCollCell *cell = &g_HeroCollision->cells[i];
        float dx = (float)(u16)cell->bsphereX - centre[0];
        float dy = (float)(u16)cell->bsphereY - centre[1];
        float dz = (float)(u16)cell->bsphereZ - centre[2];
        float reach = scaledRadius + (float)(u16)cell->bsphereRad;

        if (dx * dx + dy * dy + dz * dz <= reach * reach) {
            cells[cellCount] = cell;
            cellCount++;
        }
    }

    for (int c = 0; c < cellCount; c++) {
        HeroCollCell *cell = cells[c];
        float verts[256 * 3];
        u32 outcodes[256];

        for (int i = 0; i < 256 * 3; i++) {
            verts[i] = 0.0f;
        }

        HeroCollVert *vert = (HeroCollVert *)cell->data;
        for (int i = 0; i < (u16)cell->vertCount; i++, vert++) {
            float x = (float)(u16)vert->x;
            float y = (float)(u16)vert->y;
            float z = (float)(u16)vert->z;
            u32 codeX = (x > boxMax[0]) << 1 | (x < boxMin[0]);
            u32 codeY = (y > boxMax[1]) << 1 | (y < boxMin[1]);
            u32 codeZ = (z > boxMax[2]) << 1 | (z < boxMin[2]);

            verts[i * 3] = x;
            verts[i * 3 + 1] = y;
            verts[i * 3 + 2] = z;
            outcodes[i] = codeX << 24 | codeY << 16 | codeZ << 8;
        }

        u8 *tri = (u8 *)((HeroCollVert *)cell->data + (u16)cell->vertCount);
        for (int i = 0; i < (u16)cell->triCount; i++, tri += 4) {
            float *p0 = &verts[tri[0] * 3];
            float *p1 = &verts[tri[1] * 3];
            float *p2 = &verts[tri[2] * 3];

            if ((outcodes[tri[0]] & outcodes[tri[1]] & outcodes[tri[2]]) != 0) {
                continue;
            }

            float e1x = p1[0] - p0[0];
            float e1y = p1[1] - p0[1];
            float e1z = p1[2] - p0[2];
            float e2x = p2[0] - p0[0];
            float e2y = p2[1] - p0[1];
            float e2z = p2[2] - p0[2];
            float cx = centre[0] - p0[0];
            float cy = centre[1] - p0[1];
            float cz = centre[2] - p0[2];
            float nx = e2y * e1z - e2z * e1y;
            float ny = e2z * e1x - e2x * e1z;
            float nz = e2x * e1y - e2y * e1x;
            float dist = cx * nx + cy * ny + cz * nz;
            float k = dist / (nx * nx + ny * ny + nz * nz);

            if (dist < 0.0f) {
                continue;
            }

            /* the centre projected onto the tri's plane */
            float px = cx + -nx * k;
            float py = cy + -ny * k;
            float pz = cz + -nz * k;
            float distSq = nx * k * (nx * k) + ny * k * (ny * k) + nz * k * (nz * k);
            if (hit.t < distSq) {
                continue;
            }

            float edgeA = (py * e1z - pz * e1y) * nx + (pz * e1x - px * e1z) * ny + (px * e1y - py * e1x) * nz;
            float edgeB = (e2y * pz - e2z * py) * nx + (e2z * px - e2x * pz) * ny + (e2x * py - e2y * px) * nz;
            float edgeC = ((py - e1y) * (e2z - e1z) - (pz - e1z) * (e2y - e1y)) * nx +
                          ((pz - e1z) * (e2x - e1x) - (px - e1x) * (e2z - e1z)) * ny +
                          ((px - e1x) * (e2y - e1y) - (py - e1y) * (e2x - e1x)) * nz;

            if (!(edgeA >= 0.0f) || edgeB < 0.0f || edgeC < 0.0f) {
                /* outside an edge: the nearest point of that edge */
                float sx;
                float sy;
                float sz;
                float ex;
                float ey;
                float ez;

                if (!(edgeA >= 0.0f)) {
                    sx = 0.0f;
                    sy = 0.0f;
                    sz = 0.0f;
                    ex = e1x;
                    ey = e1y;
                    ez = e1z;
                }
                else if (edgeB < 0.0f) {
                    sx = e2x;
                    sy = e2y;
                    sz = e2z;
                    ex = 0.0f;
                    ey = 0.0f;
                    ez = 0.0f;
                }
                else {
                    sx = e1x;
                    sy = e1y;
                    sz = e1z;
                    ex = e2x;
                    ey = e2y;
                    ez = e2z;
                }

                ex -= sx;
                ey -= sy;
                ez -= sz;

                float t = ((px - sx) * ex + (py - sy) * ey + (pz - sz) * ez) / (ex * ex + ey * ey + ez * ez);
                if (!(t <= 1.0f)) {
                    t = 1.0f;
                }
                if (!(t >= 0.0f)) {
                    t = 0.0f;
                }

                px = sx + ex * t;
                py = sy + ey * t;
                pz = sz + ez * t;
                distSq = (px - cx) * (px - cx) + (py - cy) * (py - cy) + (pz - cz) * (pz - cz);
                if (hit.t < distSq) {
                    continue;
                }
            }

            /* (the binary takes the type from the byte after the record, the next tri's v0) */
            hit.poly = tri[4] + 0x1000;
            hit.t = distSq * 0.9995f;
            hit.ip[0] = px + p0[0];
            hit.ip[1] = py + p0[1];
            hit.ip[2] = pz + p0[2];
            hit.normal[0] = nx;
            hit.normal[1] = ny;
            hit.normal[2] = nz;
            hit.v0[0] = p0[0];
            hit.v0[1] = p0[1];
            hit.v0[2] = p0[2];
            hit.v1[0] = p0[0] + e1x;
            hit.v1[1] = p0[1] + e1y;
            hit.v1[2] = p0[2] + e1z;
            hit.v2[0] = p0[0] + e2x;
            hit.v2[1] = p0[1] + e2y;
            hit.v2[2] = p0[2] + e2z;
        }
    }

    if (hit.poly == 0) {
        return 0;
    }

    /* (radius over the distance squared, as the binary has it) */
    float k = scaledRadius / hit.t;
    float unit = 0.015625f;

    g_CollOutput.ip.x = hit.ip[0] * unit;
    g_CollOutput.ip.y = hit.ip[1] * unit;
    g_CollOutput.ip.z = hit.ip[2] * unit;
    g_CollOutput.normal.x = hit.normal[0];
    g_CollOutput.normal.y = hit.normal[1];
    g_CollOutput.normal.z = hit.normal[2];
    g_CollOutput.v0.x = hit.v0[0] * unit;
    g_CollOutput.v0.y = hit.v0[1] * unit;
    g_CollOutput.v0.z = hit.v0[2] * unit;
    g_CollOutput.v1.x = hit.v1[0] * unit;
    g_CollOutput.v1.y = hit.v1[1] * unit;
    g_CollOutput.v1.z = hit.v1[2] * unit;
    g_CollOutput.v2.x = hit.v2[0] * unit;
    g_CollOutput.v2.y = hit.v2[1] * unit;
    g_CollOutput.v2.z = hit.v2[2] * unit;
    g_CollOutput.pMoby = NULL;
    g_CollOutput.poly = hit.poly;
    g_CollOutput.push.x = (centre[0] - hit.ip[0]) * k * unit + pos[0];
    g_CollOutput.push.y = (centre[1] - hit.ip[1]) * k * unit + pos[1];
    g_CollOutput.push.z = (centre[2] - hit.ip[2]) * k * unit + pos[2];
    return 1;
}

// 0x0060738 (0x48 bytes)
/* the index of the moby collision prim the last query hit, or -1 */
int CollGetMobyPoly(void)
{
    if (g_CollOutput.pMoby == NULL || g_CollOutput.poly >= 0) {
        return -1;
    }

    /* (a prim hit records poly = -(the prim's address)) */
    return (u32)(-g_CollOutput.poly - (int)(uintptr_t)g_CollOutput.pMoby->collision) >> 5;
}

// 0x0060780 (0x34 bytes)
/* the material of the last env hit (poly & 0x1f), or -1 for a moby or the default material */
int CollHotspot(void)
{
    if (g_CollOutput.poly < 0) {
        return -1;
    }

    int material = g_CollOutput.poly & 0x1f;
    if (material == 0x1f) {
        return -1;
    }

    return material;
}

// 0x00607b4 (0x38 bytes)
/* the sound surface of the last env hit ((poly >> 5) & 3), or 0 for a moby or surface 3 */
int CollSoundSurface(void)
{
    if (g_CollOutput.poly < 0 || (g_CollOutput.poly & 0x60) == 0x60) {
        return 0;
    }

    return (u32)g_CollOutput.poly >> 5 & 3;
}

// 0x0060800 (0x1e4 bytes)
/* whether the segment from..to touches the sphere (x, y, z, radius); on a hit
   g_CollOutput.ip is where it enters and g_CollOutput.normal is ip minus the centre */
int CollLineVsSphere_Out(float *from, float *to, float *sphere)
{
    float dx = to[0] - from[0];
    float dy = to[1] - from[1];
    float dz = to[2] - from[2];
    float ox = sphere[0] - from[0];
    float oy = sphere[1] - from[1];
    float oz = sphere[2] - from[2];
    float lengthSq = dx * dx + dy * dy + dz * dz;
    float along = dx * ox + dy * oy + dz * oz;
    float radiusSq = sphere[3] * sphere[3];

    /* the segment's nearest point to the centre */
    float t = along / lengthSq;
    if (!(t >= 0.0f)) {
        t = 0.0f;
    }
    if (!(t <= 1.0f)) {
        t = 1.0f;
    }

    float nearX = sphere[0] - (dx * t + from[0]);
    float nearY = sphere[1] - (dy * t + from[1]);
    float nearZ = sphere[2] - (dz * t + from[2]);
    if (!((nearX * nearX + nearY * nearY + nearZ * nearZ) - radiusSq <= 0.0f)) {
        return 0;
    }

    /* the entry root of the quadratic (the binary multiplies by lengthSq where it would divide) */
    float b = along * 2.0f;
    float disc = b * b - lengthSq * 4.0f * ((ox * ox + oy * oy + oz * oz) - radiusSq);
    if (!(disc >= 0.0f)) {
        disc = 0.0f;
    }

    float entry = -((sqrtf(disc) - b) * 0.5f * lengthSq);
    if (!(entry >= 0.0f)) {
        entry = 0.0f;
    }
    if (!(entry <= 1.0f)) {
        entry = 1.0f;
    }

    g_CollOutput.ip.x = dx * entry + from[0];
    g_CollOutput.ip.y = dy * entry + from[1];
    g_CollOutput.ip.z = dz * entry + from[2];
    g_CollOutput.normal.x = g_CollOutput.ip.x - sphere[0];
    g_CollOutput.normal.y = g_CollOutput.ip.y - sphere[1];
    g_CollOutput.normal.z = g_CollOutput.ip.z - sphere[2];
    return 1;
}

// 0x00609e4 (0x4 bytes)
void STUB_000609e4(...)
{
}
