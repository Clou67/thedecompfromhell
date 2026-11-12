#include <math.h>
#include <stdio.h>
#include "game/path.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/walk.h"
#include "idol/fastfunc.h"
#include "idol/fastinline.h"
// MERGE (16 of 39 functions cleaned; the rest are generated)

/* PathFollower.state */
enum {
    PATH_FOLLOW_START = 0,
    PATH_FOLLOW_WALK = 2,
    PATH_FOLLOW_DONE = 7,
};

/* PathFollower.flags & 3: what happens at the last node */
enum {
    PATH_MODE_LOOP = 0,
    PATH_MODE_PINGPONG = 1,
    PATH_MODE_ONCE = 2,
};

/* w_2legData.flags: measure node distances flat */
#define WALK_FLAG_FLAT 0x2

/* DrawPathDebug flags */
enum {
    PATH_DRAW_MODE = 0x07,         /* 1, 2: a marker per node; 4: the node number */
    PATH_DRAW_NO_FADE = 0x40,
    PATH_DRAW_LINES = 0x80,
};

#define PATH_FAR 1e11f

static inline float PathDist(Vec4 *a, Vec4 *b)
{
    float dx = a->x - b->x;
    float dy = a->y - b->y;
    float dz = a->z - b->z;

    return sqrtf(dz * dz + dx * dx + dy * dy);
}

static inline int PathCollLine(Vec4 *from, Vec4 *to, int flags, MobyInstance *ignore)
{
    return (int)CollLine(&from->x, &to->x, flags, (undefined8)ignore, 0);
}

/* the node after `node` going `dir` (+1 / -1) along a closed path */
static inline int PathWrapNode(int node, int dir, int cnt)
{
    return (node + cnt + dir) % cnt;
}

static inline float PathHeadingTo(Vec4 *to, Vec4 *from)
{
    return FastAtan2Inline(to->y - from->y, to->x - from->x);
}

// 0x0136368 (0x14 bytes)
void SECTION_HEADER_PATH(void)
{
    DAT_007297a8 = 0x10000;
}


// 0x0136390 (0x394 bytes)
/* draws a marker (or the node number) at each `step`th node, lifted along the camera's up */
int DrawPathDebug(float size, void *cam, int splineIdx, ABGR color, undefined8 unused, uint flags, int step)
{
    if (splineIdx == -1) {
        return printf("tried to draw path -1 \n");
    }

    Spline *spline = Splines[splineIdx];
    short fade = (flags & PATH_DRAW_NO_FADE) ? -1 : 2;
    Vec4 prev = spline->points[0];
    Vec4 *up = &GameCamera.orientMtx.up;

    for (int i = 0; i < spline->cnt; i += step) {
        Vec4 *node = &spline->points[i];

        if (i > 0 && (flags & PATH_DRAW_LINES)) {
            STUB_00065468(&prev, node);
        }

        float upLen = sqrtf(up->z * up->z + up->x * up->x + up->y * up->y);
        float scale = (size * 1.2f) / upLen;
        Vec4 lift = { 0.0f, 0.0f, 0.0f, 0.0f };
        if (upLen != 0.0f) {
            lift.x = up->x * scale;
            lift.y = up->y * scale;
            lift.z = up->z * scale;
        }

        Vec4 pos = *node;
        uint mode = flags & PATH_DRAW_MODE;
        if (mode == 1) {
            SpawnPart_41(size, &pos.x, (int)(uintptr_t)cam, 0, *(uint *)&color, flags, 0x7f, fade, 0xff);
        }
        else if (mode == 2) {
            SpawnPart_41(size, &pos.x, (int)(uintptr_t)cam, 1, *(uint *)&color, flags, 0x7f, fade, 0xff);
        }
        else if (mode == 4) {
            /* the digits of i, lowest first, stacked upward */
            pos.z += size * 0.5f;

            int number = i;
            int first = 1;
            while (number != 0 || first) {
                SpawnPart_41(size, &pos.x, (int)(uintptr_t)cam, number % 10 + 2, *(uint *)&color, flags, 0x7f, fade, 0xff);
                pos.x += lift.x;
                pos.y += lift.y;
                pos.z += lift.z;
                first = 0;
                number /= 10;
            }
        }

        prev = *node;
    }

    return spline->cnt;
}


// 0x0136724 (0xa4 bytes)
/* binds the follower to Splines[splineIdx]; each node's w becomes the length to the next */
void InitFollower(PathFollower *follower)
{
    follower->state = PATH_FOLLOW_START;
    follower->timer = 0.0f;

    Spline *spline = Splines[follower->splineIdx];
    follower->pSpline = spline;

    for (int i = 0; i < spline->cnt; i++) {
        int next = (i + 1) % spline->cnt;

        spline->points[i].w = PathDist(&spline->points[i], &spline->points[next]);
    }
}


// 0x01367d0 (0x9c bytes)
/* the node whose distance from `position` is closest to `distance` (the best is kept as
   the plain distance, not the difference, as the game does) */
int PathFindClosestPnt(float distance, Vec4 *position, Spline *spline)
{
    float best = PATH_FAR;
    int bestIdx = 0;

    for (int i = 0; i < spline->cnt; i++) {
        float dist = PathDist(&spline->points[i], position);

        if (fabsf(dist - distance) < best) {
            best = dist;
            bestIdx = i;
        }
    }

    return bestIdx;
}


// 0x0136890 (0x998 bytes)
// inlined: FastAtan2 @0x136b28, FastAtan2 @0x136d44, FastAtan2 @0x136ef0
/* walks a two-legged moby along follower's spline: picks the start node, then moves on to
   the next node when the moby is close or the next one is a better heading */
void PathFollowUpdate(float arrive, MobyInstance *moby, PathFollower *follower, w_2legData *pLD)
{
    if (follower->state == PATH_FOLLOW_START) {
        Spline *spline = follower->pSpline;

        if (follower->idx < 1) {
            float best = PATH_FAR;
            int idx = 0;

            for (int i = 0; i < spline->cnt; i++) {
                float dist = PathDist(&spline->points[i], &moby->pos);

                if (fabsf(dist) < best) {
                    idx = i;
                    best = dist;
                }
            }

            follower->idx = idx;

            int mode = follower->flags & 3;
            if (mode == PATH_MODE_PINGPONG && idx == spline->cnt - 1) {
                follower->direction = -follower->direction;
            }

            if (mode != PATH_MODE_ONCE) {
                follower->idx = PathWrapNode(idx, (s8)follower->direction, spline->cnt);
            }
        }

        Vec4 *node = &spline->points[follower->idx];
        follower->distance = PathDist(&moby->pos, node);
        follower->head = PathHeadingTo(node, &moby->pos);
        follower->timer = 0.0f;
        follower->unk1c = 0;
        follower->state = PATH_FOLLOW_WALK;
    }
    else if (follower->state != PATH_FOLLOW_WALK) {
        return;
    }

    Spline *spline = follower->pSpline;
    int next = PathWrapNode(follower->idx, (s8)follower->direction, spline->cnt);
    float headToNode = PathHeadingTo(&spline->points[follower->idx], &moby->pos);
    float headToNext = PathHeadingTo(&spline->points[next], &moby->pos);
    float nodeToNext = FastSubRots(headToNode, headToNext);
    float nodeToFacing = FastSubRots(headToNode, moby->rotation.z);
    float nextToFacing = FastSubRots(headToNext, moby->rotation.z);
    s8 dir = (s8)follower->direction;
    int idx = follower->idx;
    Vec4 *node = &spline->points[idx];

    float dist;
    if ((pLD->flags & WALK_FLAG_FLAT) == 0) {
        float dx = moby->pos.x - node->x;
        float dy = moby->pos.y - node->y;

        dist = sqrtf((moby->pos.z - node->z) * (moby->pos.z - node->z) + (dx * dx + dy * dy));
    }
    else {
        float dy = moby->pos.y - node->y;

        dist = sqrtf((moby->pos.x - node->x) * (moby->pos.x - node->x) + dy * dy);
    }

    follower->distance = dist;

    if (dist <= arrive * 20.0f || nodeToNext > 1.5707964f || nodeToNext < 0.034906585f ||
        (nodeToFacing > 1.5707964f && nextToFacing < 0.785398f)) {
        int mode = follower->flags & 3;
        int last = (dir < 0) ? 0 : spline->cnt - 1;

        if (mode != PATH_MODE_LOOP && idx == last) {
            if (mode == PATH_MODE_PINGPONG) {
                follower->direction = -dir;
                follower->idx = PathWrapNode(idx, -dir, spline->cnt);
            }
            else {
                follower->state = PATH_FOLLOW_DONE;
            }
        }
        else {
            follower->idx = PathWrapNode(idx, dir, spline->cnt);
        }
    }

    follower->head = headToNode;
    walk_Update(arrive, headToNode, g_FrameTimeSq * 5.0f, moby, pLD);
}

/* how far `pos` is from the circle of `radius` around it crossing segment a-b: the
   segment parameter of the projection (t) and the two crossings, clamped (t0, t1) */
typedef struct PathSegHit {
    Vec4 dir;                /* b - a */
    float len2;
    float t;
    float perp;              /* distance from pos to the line */
    float t0;
    float t1;
} PathSegHit;

static inline float PathClamp01(float t)
{
    if (!(t >= 0.0f)) {
        return 0.0f;
    }

    if (t > 1.0f) {
        return 1.0f;
    }

    return t;
}

static inline void PathSegProject(PathSegHit *hit, float radius, Vec4 *pos, Vec4 *a, Vec4 *b)
{
    hit->dir.x = b->x - a->x;
    hit->dir.y = b->y - a->y;
    hit->dir.z = b->z - a->z;
    hit->len2 = hit->dir.z * hit->dir.z + (hit->dir.x * hit->dir.x + hit->dir.y * hit->dir.y);
    hit->t = -(hit->dir.z * (a->z - pos->z) + (hit->dir.x * (a->x - pos->x) + hit->dir.y * (a->y - pos->y))) / hit->len2;

    float dx = hit->dir.x * hit->t + a->x - pos->x;
    float dy = hit->dir.y * hit->t + a->y - pos->y;
    float dz = hit->dir.z * hit->t + a->z - pos->z;
    hit->perp = sqrtf(dz * dz + dx * dx + dy * dy);

    if (hit->perp < radius) {
        float half = sqrtf(radius * radius - hit->perp * hit->perp) / sqrtf(hit->len2);

        hit->t0 = PathClamp01(hit->t - half);
        hit->t1 = PathClamp01(half + hit->t);
    }
}

static inline void PathSegPoint(Vec4 *out, PathSegHit *hit, Vec4 *a, float t)
{
    out->x = hit->dir.x * t + a->x;
    out->y = hit->dir.y * t + a->y;
    out->z = hit->dir.z * t + a->z;
}

/* |distance - radius|, snapped to 0 within 1% of radius */
static inline float PathRadiusError(Vec4 *p, Vec4 *pos, float radius)
{
    float err = fabsf(PathDist(p, pos) - radius);

    if (err < radius * 0.01f) {
        return 0.0f;
    }

    return err;
}


// 0x0137238 (0x374 bytes)
/* the point of segment start-end at `radius` from pos (the one nearer prevPnt on a tie);
   returns how far off radius it is */
float ClosestPntOnSegmentAtDist(float radius, Vec4 *outPnt, Vec4 *prevPnt, Vec4 *pos, Vec4 *start, Vec4 *end)
{
    PathSegHit hit;

    PathSegProject(&hit, radius, pos, start, end);

    if (radius <= hit.perp) {
        float err = hit.perp;

        if (hit.t < 0.0f) {
            *outPnt = *start;
            err = fabsf(PathDist(start, pos) - radius);
        }
        else if (hit.t > 1.0f) {
            *outPnt = *end;
            err = fabsf(PathDist(end, pos) - radius);
        }
        else {
            PathSegPoint(outPnt, &hit, start, hit.t);
            outPnt->w = end->w;
        }

        if (err < radius * 0.01f) {
            err = 0.0f;
        }

        return err;
    }

    Vec4 p0;
    Vec4 p1;
    PathSegPoint(&p0, &hit, start, hit.t0);
    PathSegPoint(&p1, &hit, start, hit.t1);
    p0.w = end->w;
    p1.w = end->w;

    float err0 = PathRadiusError(&p0, pos, radius);
    float err1 = PathRadiusError(&p1, pos, radius);

    if (err0 < err1 || (err0 == err1 && PathDist(&p1, prevPnt) > PathDist(&p0, prevPnt))) {
        *outPnt = p0;
        return err0;
    }

    *outPnt = p1;
    return err1;
}


// 0x01375b8 (0x320 bytes)
/* ClosestPntOnSegmentAtDist giving the segment parameter instead; *out_t is left alone
   when the projection is already inside the segment and outside the radius */
float ClosestTOnSegment(float r, float *out_t, Vec4 *prev, Vec4 *pos, Vec4 *a, Vec4 *b)
{
    PathSegHit hit;

    PathSegProject(&hit, r, pos, a, b);

    if (r <= hit.perp) {
        float err = hit.perp;

        if (hit.t < 0.0f) {
            *out_t = 0.0f;
            err = fabsf(PathDist(a, pos) - r);
        }
        else if (hit.t > 1.0f) {
            *out_t = 1.0f;
            err = fabsf(PathDist(b, pos) - r);
        }

        if (err < r * 0.01f) {
            err = 0.0f;
        }

        return err;
    }

    Vec4 p0;
    Vec4 p1;
    PathSegPoint(&p0, &hit, a, hit.t0);
    PathSegPoint(&p1, &hit, a, hit.t1);

    float err0 = PathRadiusError(&p0, pos, r);
    float err1 = PathRadiusError(&p1, pos, r);

    if (err0 < err1 || (err0 == err1 && PathDist(&p1, prev) > PathDist(&p0, prev))) {
        *out_t = hit.t0;
        return err0;
    }

    *out_t = hit.t1;
    return err1;
}


// 0x01378e0 (0x1b0 bytes)
/* ClosestPntOnSegmentAtDist over every segment; near ties (within 0.1) go to the point
   nearer prevPnt */
float NearestPntOnPathAtDist(float radius, Vec4 *outPnt, Vec4 *prevPnt, Vec4 *pos, Spline *spline)
{
    float best = PATH_FAR;

    for (int i = 0; i < spline->cnt - 1; i++) {
        Vec4 pnt;
        float err = ClosestPntOnSegmentAtDist(radius, &pnt, prevPnt, pos, &spline->points[i], &spline->points[i + 1]);

        if (err < best) {
            *outPnt = pnt;
            best = err;
        }
        else if (fabsf(err - best) < 0.1f && PathDist(&pnt, prevPnt) < PathDist(outPnt, prevPnt)) {
            *outPnt = pnt;
            best = err;
        }
    }

    return best;
}


// 0x0137a98 (0xf8 bytes)
float NearestPntOnPath(float radius, int *outSeg, float *out, Vec4 *prevPnt, Vec4 *pos, Spline *spline)
{
    float best = PATH_FAR;

    for (int i = 0; i < spline->cnt - 1; i++) {
        float t;
        float err = ClosestTOnSegment(radius, &t, prevPnt, pos, &spline->points[i], &spline->points[i + 1]);

        if (err < best) {
            *outSeg = i;
            *out = t;
            best = err;
        }
    }

    return best;
}


// 0x0137b90 (0x38 bytes)
/* starts a recorded path at the moby */
void Path_InitFromMobyInstance(MobyInstance *moby, Spline *spline)
{
    spline->zOff = 0.25f;
    spline->cursor = 0;
    spline->points[0].x = moby->pos.x;
    spline->cnt = 1;
    spline->points[0].y = moby->pos.y;
    spline->points[0].w = 0.0f;
    spline->points[0].z = moby->pos.z;
}


// 0x0137bc8 (0x8c bytes)
void Path_RaiseCollLine(float zOff, MobyInstance *moby, Vec4 *a, Vec4 *b)
{
    b->z += zOff;
    a->z += zOff;
    PathCollLine(a, b, 4, moby);
    a->z -= zOff;
    b->z -= zOff;
}

/* can the moby see `point`, both raised by zOff */
static inline int PathCanSee(MobyInstance *moby, Spline *spline, Vec4 *point)
{
    float zOff = spline->zOff;

    point->z += zOff;
    moby->pos.z += zOff;

    int hit = PathCollLine(&moby->pos, point, 4, moby);

    moby->pos.z -= zOff;
    point->z -= zOff;

    return hit == 0;
}


// 0x0137c54 (0x190 bytes)
/* moves the cursor on and returns a recorded node the moby can still see (cutting the
   path there), or -1 */
int PathTryStep(MobyInstance *moby, Spline *spline)
{
    if (spline->cnt == 0) {
        return -1;
    }

    spline->cursor = (spline->cursor + 1) % spline->cnt;
    if (PathCanSee(moby, spline, &spline->points[spline->cursor])) {
        spline->cnt = spline->cursor + 1;
        return spline->cursor;
    }

    if (spline->cnt != spline->cursor + 1 && PathCanSee(moby, spline, &spline->points[spline->cnt - 1])) {
        return spline->cnt - 1;
    }

    return -1;
}


// 0x0137de4 (0xb8 bytes)
/* adds the moby's position to the recorded path; 0 once it is full */
int path__Path_RecordPnt(MobyInstance *moby, Spline *spline)
{
    if (spline->cnt < spline->cap) {
        spline->points[spline->cnt] = moby->pos;
        spline->points[0].w = 0.0f;
    }

    int node = PathTryStep(moby, spline);
    if (node < 0) {
        if (spline->cnt <= spline->cap) {
            spline->cnt++;
        }
    }
    else {
        spline->cnt = node + 1;
    }

    return spline->cnt <= spline->cap;
}

/* moves the cursor node a tenth of the way along `dir` (plus or, as the game has it,
   minus the node itself) if the moby can see the result */
static inline int PathTryNudge(MobyInstance *moby, Spline *spline, Vec4 *dir, float w, int subtract)
{
    Vec4 *node = &spline->points[spline->cursor];
    float zOff = spline->zOff;
    Vec4 probe;

    if (subtract) {
        probe.x = dir->x * 0.1f - node->x;
        probe.y = dir->y * 0.1f - node->y;
        probe.z = (dir->z * 0.1f - node->z) + zOff;
    }
    else {
        probe.x = dir->x * 0.1f + node->x;
        probe.y = dir->y * 0.1f + node->y;
        probe.z = (dir->z * 0.1f + node->z) + zOff;
    }
    probe.w = w;

    moby->pos.z += zOff;
    int hit = PathCollLine(&moby->pos, &probe, 4, moby);
    moby->pos.z -= zOff;

    if (hit != 0) {
        return 0;
    }

    node = &spline->points[spline->cursor];
    node->x = probe.x;
    node->z = probe.z - zOff;
    node->y = probe.y;
    node->w = probe.w;

    return 1;
}


// 0x0137ea0 (0x38c bytes)
/* PathTryStep that, at the end of the path, also tries nudging the last node */
int32_t Path_TryExtrapolate(MobyInstance *moby, Spline *spline)
{
    if (spline->cnt == 0) {
        return -1;
    }

    int found = -1;

    spline->cursor = (spline->cursor + 1) % spline->cnt;
    if (PathCanSee(moby, spline, &spline->points[spline->cursor])) {
        spline->cnt = spline->cursor + 1;
        found = spline->cursor;
    }

    if (spline->cnt != spline->cursor + 1) {
        if (found == -1 && PathCanSee(moby, spline, &spline->points[spline->cnt - 1])) {
            found = spline->cnt - 1;
        }

        return found;
    }

    if (spline->cnt <= 2) {
        return found;
    }

    Vec4 *prev = &spline->points[spline->cursor - 1];
    Vec4 dir;
    dir.x = prev->x - prev[1].x;
    dir.y = prev->y - prev[1].y;
    dir.z = prev->z - prev[1].z;
    float w = prev->w;

    if (found == -1 && MB_randInt(1) != 0) {
        if (!PathTryNudge(moby, spline, &dir, w, 1)) {
            return -1;
        }

        return spline->cursor;
    }

    if (PathTryNudge(moby, spline, &dir, w, 0)) {
        found = spline->cursor;
    }

    return found;
}

/* the node after `node` going `step` (+1 / -1), wrapping at both ends */
static inline int PathStepNode(int node, int step, int last)
{
    int next = node + step;

    if (node == 0) {
        next = (step > 0) ? node + 1 : last;
    }

    if (node == last) {
        next = (step > 0) ? 0 : node - 1;
    }

    return next;
}

/* the direction from a to b, normalized (0 if they are the same) */
static inline float PathDirTo(Vec4 *dir, Vec4 *a, Vec4 *b)
{
    float dx = b->x - a->x;
    float dy = b->y - a->y;
    float dz = b->z - a->z;
    float len2 = dz * dz + dx * dx + dy * dy;
    float len = sqrtf(len2);

    dir->x = 0.0f;
    dir->y = 0.0f;
    dir->z = 0.0f;
    if (len != 0.0f) {
        float inv = 1.0f / sqrtf(len2);

        dir->x = dx * inv;
        dir->y = dy * inv;
        dir->z = dz * inv;
    }

    return len;
}


// 0x0138238 (0x394 bytes)
// inlined: FastRSqrt @0x138378, FastRSqrt @0x1384c0
/* the point `distance` ahead of the moby's projection on segment `segment` (going `step`),
   running into the next segment if needed; returns the segment it lands on */
int GetPathPnt(float distance, MobyInstance *moby, Spline *spline, Vec4 *outPos, int segment, int step)
{
    int last = spline->cnt - 1;
    int next = PathStepNode(segment, step, last);
    Vec4 *a = &spline->points[segment];
    Vec4 *b = &spline->points[next];
    Vec4 dir;

    float len = PathDirTo(&dir, a, b);
    float along = dir.y * (moby->pos.y - a->y) + dir.z * (moby->pos.z - a->z) + dir.x * (moby->pos.x - a->x) + distance;
    float w = b->w;
    int base = segment;

    if (len < along) {
        int after = PathStepNode(next, step, last);

        along -= len;
        PathDirTo(&dir, b, &spline->points[after]);
        w = spline->points[after].w;
        base = next;
    }

    float dirLen = sqrtf(dir.z * dir.z + dir.x * dir.x + dir.y * dir.y);
    float scale = along / dirLen;
    Vec4 ofs = { 0.0f, 0.0f, 0.0f, 0.0f };
    if (dirLen != 0.0f) {
        ofs.x = dir.x * scale;
        ofs.y = dir.y * scale;
        ofs.z = dir.z * scale;
    }

    outPos->x = ofs.x + spline->points[base].x;
    outPos->y = ofs.y + spline->points[base].y;
    outPos->w = w;
    outPos->z = ofs.z + spline->points[base].z;

    return base;
}


// 0x01385d0 (0x1d0 bytes)
/* the node to head for to get from the moby toward `ref`: the neighbour of the moby's
   nearest node on ref's side; ref itself (and -1) if no node is nearer ref than the moby */
int Path_PickNextNode(MobyInstance *moby, Spline *spline, Vec4 *ref, Vec4 *out)
{
    float mobyToRef = PathDist(&moby->pos, ref);
    float bestMoby = 10000.0f;
    float bestRef = 10000.0f;
    int nearMoby = -1;
    int nearRef = -1;

    for (int i = 0; i < spline->cnt; i++) {
        float toMoby = PathDist(&spline->points[i], &moby->pos);
        float toRef = PathDist(&spline->points[i], ref);

        if (toMoby < bestMoby) {
            nearMoby = i;
            bestMoby = toMoby;
        }

        if (toRef < mobyToRef && toRef < bestRef) {
            nearRef = i;
            bestRef = toRef;
        }
    }

    if (nearRef == -1) {
        *out = *ref;
        return -1;
    }

    if (nearMoby == nearRef) {
        *out = spline->points[nearMoby];
        return nearMoby;
    }

    if (nearRef <= nearMoby) {
        *out = spline->points[nearMoby - 1];
        return nearMoby - 1;
    }

    *out = spline->points[nearMoby + 1];
    return nearMoby + 1;
}


// 0x01387a0 (0x5c bytes)
void PosRing_Init(double param_1,double param_2,double param_3,undefined4 *param_4,
                       undefined1 *param_5,undefined1 param_6,undefined8 param_7,undefined4 param_8,
                       undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  
  *param_5 = 1;
  param_5[1] = 0;
  param_5[2] = 0;
  param_5[4] = 0;
  param_5[3] = param_6;
  *(float *)(param_5 + 0x10) = (float)param_1;
  uVar1 = *param_4;
  *(undefined4 *)(param_5 + 0x24) = uVar1;
  uVar2 = param_4[1];
  *(undefined4 *)(param_5 + 0x28) = uVar2;
  fVar3 = (float)param_4[2];
  *(undefined4 *)(param_5 + 8) = param_8;
  *(undefined4 *)(param_5 + 0xc) = param_9;
  *(undefined4 *)(param_5 + 0x30) = uVar1;
  *(undefined4 *)(param_5 + 0x34) = uVar2;
  *(float *)(param_5 + 0x14) = (float)param_2;
  *(float *)(param_5 + 0x18) = (float)param_3;
  *(float *)(param_5 + 0x2c) = (float)((double)fVar3 + param_1);
  *(float *)(param_5 + 0x38) = (float)((double)fVar3 + param_1);
  return;
}


// 0x0138810 (0x358 bytes)
undefined8 PosRing_CollLineSampled(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  undefined4 uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar15;
  ulonglong unaff_r30;
  longlong lVar16;
  ulonglong unaff_r31;
  undefined8 uVar17;
  ulonglong in_LR;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar25;
  ulonglong in_f26;
  double dVar26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar16 = uVar11 - 0x110;
  puVar10 = (ulonglong *)lVar16;
  *puVar10 = uVar11;
  puVar10[0x24] = in_LR;
  puVar10[0x1a] = in_f24;
  puVar10[0x1b] = in_f25;
  puVar10[0x1c] = in_f26;
  puVar10[0x1d] = in_f27;
  puVar10[0x1e] = in_f28;
  puVar10[0x1f] = in_f29;
  puVar10[0x20] = in_f30;
  puVar10[0x21] = in_f31;
  puVar10[0x15] = unaff_r27;
  puVar10[0x16] = unaff_r28;
  puVar10[0x19] = unaff_r31;
  uVar17 = 0;
  fVar1 = param_3[1];
  puVar10[0x17] = unaff_r29;
  fVar2 = param_2[1];
  iVar15 = 0;
  fVar3 = *param_2;
  fVar4 = *param_3;
  iVar14 = 0;
  puVar10[0x18] = unaff_r30;
  puVar10[0x14] = unaff_r26;
  dVar26 = (double)SQRT((fVar3 - fVar4) * (fVar3 - fVar4) + (fVar2 - fVar1) * (fVar2 - fVar1));
  lVar12 = lVar16;
  iVar13 = param_1;
  do {
    iVar8 = *(int *)(iVar13 + 8);
    if (iVar8 != 0) {
      uVar9 = *(undefined4 *)(iVar8 + 0x94);
      *(undefined4 *)(iVar8 + 0x94) = 0;
      *(undefined4 *)((int)lVar12 + 0x94) = uVar9;
    }
    iVar14 = iVar14 + 1;
    iVar13 = iVar13 + 4;
    lVar12 = lVar12 + 4;
  } while (iVar14 < 2);
  if (10.0 <= dVar26) {
    dVar18 = (double)FastFrac((double)(float)(dVar26 * 0.10000000149011612),0x140000,
                                        uVar11 - 0x80);
    dVar25 = 0.0;
    dVar19 = (double)*(float *)(puVar10 + 0x12);
    fVar1 = *param_2;
    dVar22 = (double)fVar1;
    fVar2 = param_2[1];
    dVar21 = (double)fVar2;
    fVar3 = param_2[2];
    dVar20 = (double)fVar3;
    fVar4 = param_2[3];
    fVar5 = *param_3;
    fVar6 = param_3[1];
    fVar7 = param_3[2];
    if (0.0 < dVar18) {
      dVar18 = dVar19 + 1.0;
      dVar19 = (double)(float)dVar18;
      *(float *)(puVar10 + 0x12) = (float)dVar18;
    }
    fVar6 = (float)((double)fVar6 - dVar21);
    fVar5 = (float)((double)fVar5 - dVar22);
    fVar7 = (float)((double)fVar7 - dVar20);
    *(float *)(puVar10 + 0xe) = fVar1;
    *(float *)((int)puVar10 + 0x74) = fVar2;
    *(float *)(puVar10 + 0xf) = fVar3;
    *(float *)((int)puVar10 + 0x7c) = fVar4;
    *(float *)((int)puVar10 + 0x8c) = fVar4;
    fVar1 = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
    fVar2 = (float)(dVar26 / dVar19) / fVar1;
    dVar18 = dVar25;
    if (0.0 - fVar1 < 0.0) {
      dVar18 = (double)(fVar6 * fVar2);
    }
    dVar23 = dVar25;
    if (0.0 - fVar1 < 0.0) {
      dVar23 = (double)(fVar5 * fVar2);
    }
    dVar24 = dVar25;
    if (0.0 - fVar1 < 0.0) {
      dVar24 = (double)(fVar7 * fVar2);
    }
    if (fVar1 - 0.0 < 0.0) {
      dVar18 = (double)(fVar6 * fVar2);
    }
    if (fVar1 - 0.0 < 0.0) {
      dVar23 = (double)(fVar5 * fVar2);
    }
    if (fVar1 - 0.0 < 0.0) {
      dVar24 = (double)(fVar7 * fVar2);
    }
    *(float *)(puVar10 + 0x10) = (float)(dVar22 + dVar23);
    *(float *)((int)puVar10 + 0x84) = (float)(dVar21 + dVar18);
    *(float *)(puVar10 + 0x11) = (float)(dVar20 + dVar24);
    fVar1 = SQRT((float)(dVar24 * dVar24 +
                        (double)(float)(dVar23 * dVar23 + (double)(float)(dVar18 * dVar18))));
    dVar20 = (double)(((float)(dVar26 / dVar19) * -0.1) / fVar1);
    dVar26 = dVar25;
    if (0.0 - fVar1 < 0.0) {
      dVar26 = (double)(float)(dVar24 * dVar20);
    }
    dVar21 = dVar25;
    if (0.0 - fVar1 < 0.0) {
      dVar21 = (double)(float)(dVar18 * dVar20);
    }
    dVar22 = dVar25;
    if (0.0 - fVar1 < 0.0) {
      dVar22 = (double)(float)(dVar23 * dVar20);
    }
    if (fVar1 - 0.0 < 0.0) {
      dVar26 = (double)(float)(dVar24 * dVar20);
    }
    if (fVar1 - 0.0 < 0.0) {
      dVar21 = (double)(float)(dVar18 * dVar20);
    }
    if (fVar1 - 0.0 < 0.0) {
      dVar22 = (double)(float)(dVar23 * dVar20);
    }
    if (0.0 < dVar19) {
      dVar19 = 1.0;
      do {
        uVar17 = CollLine(uVar11 - 0xa0,uVar11 - 0x90,0,*(undefined4 *)(param_1 + 8),0);
        if ((int)uVar17 != 0) break;
        fVar1 = *(float *)(puVar10 + 0x12);
        fVar2 = *(float *)(puVar10 + 0x10);
        fVar3 = *(float *)((int)puVar10 + 0x84);
        fVar4 = *(float *)(puVar10 + 0x11);
        *(undefined4 *)((int)puVar10 + 0x7c) = *(undefined4 *)((int)puVar10 + 0x8c);
        *(float *)(puVar10 + 0x10) = (float)((double)fVar2 + dVar23);
        *(float *)(puVar10 + 0xe) = (float)((double)fVar2 + dVar22);
        *(float *)((int)puVar10 + 0x84) = (float)((double)fVar3 + dVar18);
        *(float *)(puVar10 + 0x11) = (float)((double)fVar4 + dVar24);
        *(float *)((int)puVar10 + 0x74) = (float)((double)fVar3 + dVar21);
        *(float *)(puVar10 + 0xf) = (float)((double)fVar4 + dVar26);
        *(float *)(puVar10 + 0x12) = (float)((double)fVar1 - dVar19);
      } while (dVar25 < (double)(float)((double)fVar1 - dVar19));
    }
  }
  else {
    uVar17 = CollLine(param_2,param_3,0,*(undefined4 *)(param_1 + 8),0);
  }
  do {
    if (*(int *)(param_1 + 8) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x94) = *(undefined4 *)((int)lVar16 + 0x94);
    }
    iVar15 = iVar15 + 1;
    param_1 = param_1 + 4;
    lVar16 = lVar16 + 4;
  } while (iVar15 < 2);
  return uVar17;
}


// 0x0138b68 (0x7c bytes)
ulonglong PosRing_IsIndexBefore(byte *param_1,ulonglong param_2,ulonglong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  
  param_2 = param_2 & 0xff;
  param_3 = param_3 & 0xff;
  if ((uint)param_2 == 0xff) {
    uVar2 = 0;
  }
  else if ((uint)param_3 == 0xff) {
    uVar2 = 1;
  }
  else {
    bVar1 = *param_1;
    if ((uint)bVar1 < (uint)param_1[2]) {
      if ((uint)param_3 <= (uint)bVar1) {
        param_3 = param_3 + param_1[3] & 0xff;
      }
      if ((uint)param_2 <= (uint)bVar1) {
        param_2 = param_2 + param_1[3] & 0xff;
      }
      uVar2 = param_3 - param_2 >> 0x3f;
    }
    else {
      uVar2 = param_3 - param_2 >> 0x3f;
    }
  }
  return uVar2;
}


// 0x0138be4 (0x7c bytes)
ulonglong PosRing_IsIndexBeforeWrapped(byte *param_1,ulonglong param_2,ulonglong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  
  param_2 = param_2 & 0xff;
  param_3 = param_3 & 0xff;
  if ((uint)param_2 == 0xff) {
    uVar2 = 0;
  }
  else if ((uint)param_3 == 0xff) {
    uVar2 = 1;
  }
  else {
    bVar1 = *param_1;
    if ((uint)bVar1 < (uint)param_1[2]) {
      if ((uint)param_3 <= (uint)bVar1) {
        param_3 = param_3 + param_1[3] & 0xff;
      }
      if ((uint)param_2 <= (uint)bVar1) {
        param_2 = param_2 + param_1[3] & 0xff;
      }
      uVar2 = param_2 - param_3 >> 0x3f;
    }
    else {
      uVar2 = param_2 - param_3 >> 0x3f;
    }
  }
  return uVar2;
}


// 0x0138c60 (0x54 bytes)
undefined8 PosRing_IsIndexOutsideRange(byte *param_1,byte param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  
  if (param_2 == 0xff) {
    uVar3 = 0;
  }
  else {
    bVar1 = *param_1;
    bVar2 = param_1[2];
    if (bVar1 < bVar2) {
      uVar3 = 0;
      if ((param_2 <= bVar2) || (bVar1 < param_2)) {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 0;
      if ((bVar2 <= param_2) && (param_2 < bVar1)) {
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}


// 0x0138cb4 (0x5c bytes)
uint PosRing_NextIndexClamped(byte *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = (param_2 & 0xff) + 1;
  bVar1 = param_1[2];
  uVar2 = (uint)bVar1;
  uVar4 = uVar4 - (uVar4 / param_1[3]) * (uint)param_1[3] & 0xff;
  uVar5 = (uint)*param_1;
  uVar3 = uVar2;
  if (uVar5 < bVar1) {
    uVar3 = uVar4;
    if ((bVar1 < uVar4) && (uVar4 <= uVar5)) {
      uVar3 = uVar2;
    }
  }
  else if ((bVar1 <= uVar4) && (uVar4 < uVar5)) {
    uVar3 = uVar4;
  }
  return uVar3;
}


// 0x0138d10 (0x140 bytes)
longlong PosRing_StepClearBack(undefined8 param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  GPiece<16> local_20;
  
  bVar1 = *param_3;
  if (bVar1 == 0xff) {
    bVar2 = *param_2;
  }
  else {
    bVar2 = *param_2;
    bVar3 = param_2[2];
    if (bVar2 < bVar3) {
      bVar4 = false;
      if ((bVar1 <= bVar3) || (bVar2 < bVar1)) {
        bVar4 = true;
      }
    }
    else {
      bVar4 = bVar1 < bVar2 && bVar3 <= bVar1;
    }
    if (bVar4) goto LAB_00138d94;
  }
  *param_3 = bVar2;
LAB_00138d94:
  iVar5 = PosRing_CollLineSampled(param_2,local_20,param_1);
  bVar1 = *param_3;
  bVar3 = *param_2;
  uVar6 = (ulonglong)bVar1;
  if (bVar1 == param_2[2]) {
    *param_3 = bVar3;
    uVar6 = (ulonglong)bVar3;
  }
  bVar3 = (byte)uVar6;
  if ((int)uVar6 == 0) {
    bVar3 = param_2[3];
  }
  *param_3 = bVar3 - 1;
  return (ZERO_MASK(iVar5) & (ulonglong)bVar1 - 0xff) + 0xff;
}


// 0x0138e58 (0x3a4 bytes)
void PosRing_FindClearPointFwd
               (byte *param_1,float *param_2,float *param_3,float *param_4,byte *param_5,
               undefined8 param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  GPiece<24> local_40;
  
  uVar7 = PosRing_StepClearBack(local_40,param_1,param_6);
  if (uVar7 != 0xff) {
    bVar1 = *param_5;
    uVar9 = (uint)bVar1;
    if (uVar7 != 0xff) {
      if (bVar1 != 0xff) {
        bVar2 = *param_1;
        uVar10 = uVar7;
        if (bVar2 < param_1[2]) {
          uVar9 = (uint)bVar1;
          if (bVar1 <= bVar2) {
            uVar9 = (uint)bVar1 + (uint)param_1[3] & 0xff;
          }
          if ((int)uVar7 <= (int)(uint)bVar2) {
            uVar10 = uVar7 + param_1[3] & 0xff;
          }
        }
        if ((int)uVar10 <= (int)uVar9) goto LAB_00138fc8;
      }
      *param_3 = *(float *)(param_1 + uVar7 * 0xc + 0x24);
      param_3[1] = *(float *)(param_1 + uVar7 * 0xc + 0x28);
      param_3[2] = *(float *)(param_1 + uVar7 * 0xc + 0x2c);
      bVar1 = *param_5;
      if (bVar1 != 0xff) {
        bVar2 = *param_1;
        bVar3 = param_1[2];
        if (bVar2 < bVar3) {
          bVar6 = false;
          if ((bVar1 <= bVar3) || (bVar2 < bVar1)) {
            bVar6 = true;
          }
        }
        else {
          bVar6 = false;
          if ((bVar3 <= bVar1) && (bVar1 < bVar2)) {
            bVar6 = true;
          }
        }
        if (bVar6) {
          param_1[2] = bVar1;
        }
      }
      *param_5 = (byte)uVar7;
    }
  }
LAB_00138fc8:
  if (((SQRT((*param_2 - *param_3) * (*param_2 - *param_3) +
             (param_2[1] - param_3[1]) * (param_2[1] - param_3[1])) < *(float *)(param_1 + 0x14)) &&
      (ABS(param_2[2] - param_3[2]) < *(float *)(param_1 + 0x18))) &&
     (iVar8 = CollLine(param_2,param_3,2,0,0), iVar8 == 0)) {
    bVar1 = *param_5;
    if ((bVar1 == 0xff) || (bVar1 == *param_1)) {
      if (bVar1 != 0xff) {
        param_1[2] = bVar1;
      }
      *param_5 = 0xff;
    }
    else {
      param_1[2] = bVar1;
      uVar7 = (*param_5 + 1) - ((*param_5 + 1) / (uint)param_1[3]) * (uint)param_1[3];
      *param_5 = (byte)uVar7;
      *param_3 = *(float *)(param_1 + (uVar7 & 0xff) * 0xc + 0x24);
      param_3[1] = *(float *)(param_1 + (uint)*param_5 * 0xc + 0x28);
      param_3[2] = *(float *)(param_1 + (uint)*param_5 * 0xc + 0x2c);
    }
  }
  bVar1 = *param_5;
  if (bVar1 == 0xff) {
    fVar4 = param_4[1];
    *param_3 = *param_4;
    fVar5 = param_4[2];
    param_3[1] = fVar4;
    param_3[2] = fVar5;
    bVar1 = *param_5;
  }
  if (bVar1 == *param_1) {
    bVar1 = param_1[1];
    *(float *)(param_1 + (uint)bVar1 * 0xc + 0x24) = *param_2;
    *(float *)(param_1 + (uint)bVar1 * 0xc + 0x28) = param_2[1];
    *(float *)(param_1 + (uint)bVar1 * 0xc + 0x2c) = param_2[2];
    *param_3 = *(float *)(param_1 + (uint)*param_5 * 0xc + 0x24);
    param_3[1] = *(float *)(param_1 + (uint)*param_5 * 0xc + 0x28);
    param_3[2] = *(float *)(param_1 + (uint)*param_5 * 0xc + 0x2c);
  }
  return;
}


// 0x01391fc (0x13c bytes)
longlong PosRing_StepClearFwd(undefined8 param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  GPiece<16> local_20;
  
  bVar1 = *param_3;
  if (bVar1 == 0xff) {
    bVar2 = *param_2;
  }
  else {
    bVar2 = *param_2;
    bVar3 = param_2[2];
    if (bVar2 < bVar3) {
      bVar4 = false;
      if ((bVar1 <= bVar3) || (bVar2 < bVar1)) {
        bVar4 = true;
      }
    }
    else {
      bVar4 = bVar1 < bVar2 && bVar3 <= bVar1;
    }
    if (bVar4) goto LAB_00139280;
  }
  *param_3 = bVar2;
LAB_00139280:
  iVar5 = PosRing_CollLineSampled(param_2,local_20,param_1);
  bVar1 = *param_3;
  bVar3 = *param_2;
  uVar6 = (ulonglong)bVar1;
  if (bVar1 == param_2[2]) {
    *param_3 = bVar3;
    uVar6 = (ulonglong)bVar3;
  }
  *param_3 = (char)(uVar6 + 1) - (char)((uint)(uVar6 + 1) / (uint)param_2[3]) * param_2[3];
  return (ZERO_MASK(iVar5) & (ulonglong)bVar1 - 0xff) + 0xff;
}


// 0x0139340 (0x2d8 bytes)
void PosRing_FindClearPointBack
               (byte *param_1,float *param_2,float *param_3,float *param_4,byte *param_5,
               undefined8 param_6)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  GPiece<24> local_40;
  
  uVar6 = PosRing_StepClearFwd(local_40,param_1,param_6);
  if (uVar6 != 0xff) {
    bVar8 = *param_5;
    uVar9 = (uint)bVar8;
    if (uVar6 != 0xff) {
      if (bVar8 != 0xff) {
        bVar1 = *param_1;
        uVar10 = uVar6;
        if (bVar1 < param_1[2]) {
          uVar9 = (uint)bVar8;
          if (bVar8 <= bVar1) {
            uVar9 = (uint)bVar8 + (uint)param_1[3] & 0xff;
          }
          if ((int)uVar6 <= (int)(uint)bVar1) {
            uVar10 = uVar6 + param_1[3] & 0xff;
          }
        }
        if ((int)uVar9 <= (int)uVar10) goto LAB_001394b0;
      }
      *param_3 = *(float *)(param_1 + uVar6 * 0xc + 0x24);
      param_3[1] = *(float *)(param_1 + uVar6 * 0xc + 0x28);
      param_3[2] = *(float *)(param_1 + uVar6 * 0xc + 0x2c);
      bVar8 = *param_5;
      if (bVar8 != 0xff) {
        bVar1 = *param_1;
        bVar2 = param_1[2];
        if (bVar1 < bVar2) {
          bVar5 = false;
          if ((bVar8 <= bVar2) || (bVar1 < bVar8)) {
            bVar5 = true;
          }
        }
        else {
          bVar5 = false;
          if ((bVar2 <= bVar8) && (bVar8 < bVar1)) {
            bVar5 = true;
          }
        }
        if (bVar5) {
          *param_1 = bVar8;
        }
      }
      *param_5 = (byte)uVar6;
    }
  }
LAB_001394b0:
  if (((SQRT((*param_2 - *param_3) * (*param_2 - *param_3) +
             (param_2[1] - param_3[1]) * (param_2[1] - param_3[1])) < *(float *)(param_1 + 0x14)) &&
      (ABS(param_2[2] - param_3[2]) < *(float *)(param_1 + 0x18))) &&
     (iVar7 = CollLine(param_2,param_3,2,0,0), iVar7 == 0)) {
    bVar8 = *param_5;
    if ((bVar8 == 0xff) || (bVar8 == param_1[2])) {
      if (bVar8 != 0xff) {
        *param_1 = bVar8;
      }
      *param_5 = 0xff;
    }
    else {
      *param_1 = bVar8;
      bVar8 = *param_5 - 1;
      if (*param_5 == 0) {
        bVar8 = param_1[3];
      }
      *param_5 = bVar8;
      *param_3 = *(float *)(param_1 + (uint)bVar8 * 0xc + 0x24);
      param_3[1] = *(float *)(param_1 + (uint)*param_5 * 0xc + 0x28);
      param_3[2] = *(float *)(param_1 + (uint)*param_5 * 0xc + 0x2c);
    }
  }
  if (*param_5 == 0xff) {
    fVar3 = param_4[1];
    *param_3 = *param_4;
    fVar4 = param_4[2];
    param_3[1] = fVar3;
    param_3[2] = fVar4;
  }
  return;
}


// 0x0139620 (0x3f4 bytes)
undefined8 PosRing_AddPoint(double param_1,undefined4 *param_2,byte *param_3)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  uint uVar14;
  GPiece<16> local_30;
  GPiece<16> local_20;
  
  uVar4 = *param_2;
  uVar5 = param_2[1];
  bVar10 = param_3[1];
  bVar2 = *param_3;
  bVar3 = param_3[2];
  if (param_1 == 0.0) {
    param_1 = (double)*(float *)(param_3 + 0x10);
  }
  fVar1 = (float)((double)(float)param_2[2] + param_1);
  if (bVar10 != 0xff) {
    if (bVar2 < bVar3) {
      bVar6 = false;
      if ((bVar10 <= bVar3) || (bVar2 < bVar10)) {
        bVar6 = true;
      }
    }
    else {
      bVar6 = bVar10 < bVar2 && bVar3 <= bVar10;
    }
    if (bVar6) goto LAB_001396d8;
  }
  param_3[1] = bVar3;
LAB_001396d8:
  if (bVar3 == bVar2) {
    param_3[1] = bVar2;
    uVar7 = (bVar2 + 1) - ((bVar2 + 1) / (uint)param_3[3]) * (uint)param_3[3];
    uVar13 = 1;
    uVar14 = uVar7 & 0xff;
    *param_3 = (byte)uVar7;
    *(undefined4 *)(param_3 + uVar14 * 0xc + 0x24) = uVar4;
    *(undefined4 *)(param_3 + uVar14 * 0xc + 0x28) = uVar5;
    *(float *)(param_3 + uVar14 * 0xc + 0x2c) = fVar1;
  }
  else {
    iVar8 = PosRing_CollLineSampled(param_3,local_30,local_20);
    if (iVar8 == 0) {
      if (param_3[1] != param_3[2]) {
        iVar8 = param_3[1] - 1;
        if (iVar8 < 0) {
          iVar8 = param_3[3] - 1;
        }
        iVar9 = PosRing_CollLineSampled(param_3,local_30,local_20);
        if (iVar9 == 0) {
          bVar10 = param_3[1];
          param_3[1] = (byte)iVar8;
          *param_3 = bVar10;
        }
      }
      bVar10 = *param_3;
      uVar13 = 1;
      *(undefined4 *)(param_3 + (uint)bVar10 * 0xc + 0x24) = uVar4;
      *(undefined4 *)(param_3 + (uint)bVar10 * 0xc + 0x28) = uVar5;
      *(float *)(param_3 + (uint)bVar10 * 0xc + 0x2c) = fVar1;
    }
    else {
      bVar10 = param_3[3];
      uVar7 = *param_3 + 1;
      uVar7 = uVar7 - (uVar7 / bVar10) * (uint)bVar10;
      uVar14 = (uint)*param_3;
      if (uVar7 != param_3[2]) {
        *param_3 = (byte)uVar7;
        param_3[1] = (char)(param_3[1] + 1) - (char)((param_3[1] + 1) / (uint)bVar10) * bVar10;
        uVar14 = uVar7;
      }
      uVar14 = uVar14 & 0xff;
      uVar13 = 0;
      *(undefined4 *)(param_3 + uVar14 * 0xc + 0x24) = uVar4;
      *(undefined4 *)(param_3 + uVar14 * 0xc + 0x28) = uVar5;
      *(float *)(param_3 + uVar14 * 0xc + 0x2c) = fVar1;
    }
    bVar10 = param_3[2];
    uVar12 = (uint)bVar10;
    uVar14 = (param_3[4] + 1) - ((param_3[4] + 1) / (uint)param_3[3]) * (uint)param_3[3] & 0xff;
    uVar11 = (uint)*param_3;
    uVar7 = uVar12;
    if (uVar11 < bVar10) {
      uVar7 = uVar14;
      if ((bVar10 < uVar14) && (uVar14 <= uVar11)) {
        uVar7 = uVar12;
      }
    }
    else if ((bVar10 <= uVar14) && (uVar14 < uVar11)) {
      uVar7 = uVar14;
    }
    param_3[4] = (byte)uVar7;
    if ((((uVar7 != *param_3) && (uVar7 != bVar10)) && (uVar7 != param_3[1])) &&
       (iVar8 = PosRing_CollLineSampled(param_3,local_30,local_20), iVar8 == 0)) {
      bVar10 = param_3[3];
      uVar14 = (param_3[4] + 1) - ((param_3[4] + 1) / (uint)bVar10) * (uint)bVar10;
      *param_3 = (byte)uVar14;
      if (param_3[1] != param_3[2]) {
        bVar10 = bVar10 - 1;
        if ((uVar14 & 0xff) != 0) {
          bVar10 = *param_3;
          *param_3 = bVar10 - 1;
          uVar14 = (uint)*param_3;
        }
        param_3[1] = bVar10;
      }
      uVar14 = uVar14 & 0xff;
      uVar13 = 1;
      *(undefined4 *)(param_3 + uVar14 * 0xc + 0x24) = uVar4;
      *(undefined4 *)(param_3 + uVar14 * 0xc + 0x28) = uVar5;
      *(float *)(param_3 + uVar14 * 0xc + 0x2c) = fVar1;
    }
  }
  return uVar13;
}


// 0x0139a18 (0x11c bytes)
uint PosRing_FindNearestClearPoint(float *param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  GPiece<16> local_40;
  
  uVar2 = (uint)*param_2;
  uVar3 = 0xff;
  dVar4 = 1000000.0;
  while( true ) {
    dVar5 = (double)SQRT((param_1[2] - *(float *)(param_2 + uVar2 * 0xc + 0x2c)) *
                         (param_1[2] - *(float *)(param_2 + uVar2 * 0xc + 0x2c)) +
                         (*param_1 - *(float *)(param_2 + uVar2 * 0xc + 0x24)) *
                         (*param_1 - *(float *)(param_2 + uVar2 * 0xc + 0x24)) +
                         (param_1[1] - *(float *)(param_2 + uVar2 * 0xc + 0x28)) *
                         (param_1[1] - *(float *)(param_2 + uVar2 * 0xc + 0x28)));
    if (dVar5 < dVar4) {
      iVar1 = PosRing_CollLineSampled(param_2,local_40,param_1);
      if (iVar1 == 0) {
        dVar4 = dVar5;
        uVar3 = uVar2;
      }
    }
    if (uVar2 == param_2[2]) break;
    uVar2 = (uVar2 + 1) - ((uVar2 + 1) / (uint)param_2[3]) * (uint)param_2[3] & 0xff;
  }
  return uVar3;
}


// 0x0139b34 (0xdc bytes)
longlong PosRing_FindLastClearFromTail(undefined8 param_1,byte *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  GPiece<16> local_30;
  
  lVar3 = 0xff;
  uVar2 = (ulonglong)param_2[2];
  while( true ) {
    iVar1 = PosRing_CollLineSampled(param_2,local_30,param_1);
    lVar3 = lVar3 + (ZERO_MASK(iVar1) & uVar2 - lVar3);
    if ((uint)uVar2 == (uint)*param_2) break;
    uVar2 = (uVar2 + 1) -
            (longlong)(int)((uint)(uVar2 + 1) / (uint)param_2[3]) * (longlong)(int)(uint)param_2[3]
            & 0xff;
  }
  return lVar3;
}


// 0x0139c10 (0xdc bytes)
longlong PosRing_FindLastClearFromHead(undefined8 param_1,byte *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  GPiece<16> local_30;
  
  lVar3 = 0xff;
  uVar2 = (ulonglong)*param_2;
  while( true ) {
    iVar1 = PosRing_CollLineSampled(param_2,local_30,param_1);
    lVar3 = lVar3 + (ZERO_MASK(iVar1) & uVar2 - lVar3);
    if ((uint)uVar2 == (uint)param_2[2]) break;
    if ((uint)uVar2 == 0) {
      uVar2 = (ulonglong)param_2[3];
    }
    uVar2 = uVar2 - 1 & 0xff;
  }
  return lVar3;
}


// 0x0139cf8 (0x170 bytes)
void PosRing_DebugDraw(byte *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  GPiece<16> local_80;
  GPiece<40> local_70;
  
  uVar3 = 0;
  uVar4 = 0x40f86a0000000000;
  uVar1 = 0xffffffff;
  uVar2 = (uint)param_1[2];
  while( true ) {
    SpawnPart_5(uVar4,uVar3,local_70,param_2,param_3,param_4);
    if (-1 < (int)uVar1) {
      STUB_00065468(local_80,local_70);
    }
    if (uVar2 == *param_1) break;
    uVar1 = uVar2;
    uVar2 = (uVar2 + 1) - ((int)(uVar2 + 1) / (int)(uint)param_1[3]) * (uint)param_1[3];
  }
  return;
}


// 0x0139e68 (0x90 bytes)
Vec4 * PathFollower_GetPntPtr(PathFollower *follower,int idx)

{
  Vec4 *pVVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  if (-1 < (char)follower->direction) {
    iVar3 = follower->pSpline->cnt;
    iVar2 = iVar3 + -1;
    iVar3 = iVar3 + -1;
  }
  if (idx < 0) {
    pVVar1 = follower->pSpline->points + idx + iVar3 + 1;
  }
  else if (iVar2 < idx) {
    iVar3 = idx / (iVar2 + 1);
    pVVar1 = (Vec4 *)((int)follower->pSpline + (idx - (iVar3 * iVar2 + iVar3)) * 0x10 + 0x10);
  }
  else {
    pVVar1 = follower->pSpline->points + idx;
  }
  return pVVar1;
}


// 0x0139ef8 (0x60 bytes)
int PathFollower_WrapIdx(PathFollower *follower,int idx)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (-1 < (char)follower->direction) {
    iVar2 = follower->pSpline->cnt + -1;
  }
  if (idx < 0) {
    idx = idx + iVar2;
  }
  else if (iVar2 < idx) {
    iVar1 = idx / (iVar2 + 1);
    idx = idx - (iVar1 * iVar2 + iVar1);
  }
  return idx;
}


// 0x0139f58 (0x58 bytes)
s32 PathFollower_Advance(PathFollower *follower)

{
  int iVar1;
  s32 sVar2;
  int iVar3;
  
  iVar3 = 0;
  if (-1 < (char)follower->direction) {
    iVar3 = follower->pSpline->cnt + -1;
  }
  sVar2 = follower->idx + 1;
  if (iVar3 < sVar2) {
    iVar1 = sVar2 / (iVar3 + 1);
    sVar2 = sVar2 - (iVar1 * iVar3 + iVar1);
  }
  follower->idx = sVar2;
  return sVar2;
}


// 0x0139fc0 (0x2c4 bytes)
void Spline_CalcTan
               (float tension,float bias,Vec4 *out,PathFollower *follower,undefined8 param_5,
               float param_6,int offs)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  Spline *pSVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  Vec4 *pVVar17;
  int iVar18;
  int iVar19;
  Vec4 *pVVar20;
  int iVar21;
  Vec4 *pVVar22;
  int iVar23;
  
  iVar23 = 0;
  iVar19 = follower->idx + offs;
  iVar21 = iVar19 + -1;
  bVar1 = -1 < (char)follower->direction;
  iVar18 = 0;
  if (bVar1) {
    iVar23 = follower->pSpline->cnt + -1;
  }
  if (iVar21 < 0) {
    pSVar6 = follower->pSpline;
    pVVar17 = pSVar6->points + iVar23 + iVar19;
  }
  else {
    if (iVar23 < iVar21) {
      iVar2 = iVar21 / (iVar23 + 1);
      pSVar6 = follower->pSpline;
      iVar21 = iVar21 - (iVar2 * iVar23 + iVar2);
    }
    else {
      pSVar6 = follower->pSpline;
    }
    pVVar17 = pSVar6->points + iVar21;
  }
  iVar23 = 0;
  if (bVar1) {
    iVar23 = pSVar6->cnt + -1;
  }
  if (iVar19 < 0) {
    pVVar22 = pSVar6->points + iVar19 + iVar23 + 1;
  }
  else {
    iVar21 = iVar19;
    if (iVar23 < iVar19) {
      iVar21 = iVar19 / (iVar23 + 1);
      iVar21 = iVar19 - (iVar21 * iVar23 + iVar21);
    }
    pVVar22 = pSVar6->points + iVar21;
  }
  iVar23 = iVar19 + 1;
  if (bVar1) {
    iVar18 = pSVar6->cnt + -1;
  }
  if (iVar23 < 0) {
    pVVar20 = pSVar6->points + iVar18 + iVar19 + 2;
  }
  else {
    if (iVar18 < iVar23) {
      iVar19 = iVar23 / (iVar18 + 1);
      iVar23 = iVar23 - (iVar19 * iVar18 + iVar19);
    }
    pVVar20 = pSVar6->points + iVar23;
  }
  fVar3 = pVVar22->y;
  fVar10 = pVVar17->y - fVar3;
  fVar9 = fVar3 - pVVar20->y;
  fVar4 = pVVar22->x;
  fVar11 = pVVar17->x - fVar4;
  fVar12 = fVar4 - pVVar20->x;
  fVar5 = pVVar22->z;
  fVar13 = pVVar17->z - fVar5;
  fVar14 = fVar5 - pVVar20->z;
  fVar7 = (1.0 - tension) * (1.0 - bias) * 0.5;
  fVar8 = (1.0 - tension) * (bias + 1.0) * 0.5;
  fVar15 = (fVar3 - pVVar17->y) * fVar8 + (pVVar20->y - fVar3) * fVar7;
  fVar16 = (fVar4 - pVVar17->x) * fVar8 + (pVVar20->x - fVar4) * fVar7;
  fVar4 = (fVar5 - pVVar17->z) * fVar8 + (pVVar20->z - fVar5) * fVar7;
  fVar5 = SQRT(fVar13 * fVar13 + fVar11 * fVar11 + fVar10 * fVar10);
  fVar3 = pVVar22->w;
  fVar7 = SQRT(fVar14 * fVar14 + fVar12 * fVar12 + fVar9 * fVar9);
  fVar8 = SQRT(fVar4 * fVar4 + fVar16 * fVar16 + fVar15 * fVar15);
  if (fVar5 - fVar7 < 0.0) {
    fVar7 = fVar5;
  }
  if (fVar8 <= fVar7 * 1.1) {
    out->x = fVar16;
    out->y = fVar15;
    out->z = fVar4;
    out->w = fVar3;
  }
  else {
    fVar5 = 0.0;
    if (fVar8 == 0.0) {
      out->y = fVar15;
      out->z = fVar4;
      out->x = fVar16;
      out->w = fVar3;
      fVar15 = fVar5;
      fVar16 = fVar5;
    }
    else {
      fVar5 = (fVar7 * 1.1) / fVar8;
      out->w = fVar3;
      fVar15 = fVar5 * fVar15;
      fVar16 = fVar5 * fVar16;
      fVar5 = fVar5 * fVar4;
    }
    out->x = fVar16;
    out->y = fVar15;
    out->z = fVar5;
  }
  return;
}


// 0x013a290 (0xd4 bytes)
void Spline_Hermite(float t,Vec4 *out,Vec4 *p0,Vec4 *p1,Vec4 *m0,Vec4 *m1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = t * t;
  fVar2 = t * fVar1;
  fVar7 = -(fVar2 * 2.0 - fVar1 * 3.0);
  fVar3 = fVar2 - fVar1;
  fVar4 = (fVar2 * 2.0 - fVar1 * 3.0) + 1.0;
  fVar1 = -(fVar1 * 2.0 - fVar2) + t;
  fVar5 = p0->x * fVar4;
  out->x = fVar5;
  fVar6 = p0->y * fVar4;
  out->y = fVar6;
  fVar4 = p0->z * fVar4;
  out->z = fVar4;
  out->w = p0->w;
  fVar5 = m0->x * fVar1 + fVar5;
  fVar6 = m0->y * fVar1 + fVar6;
  fVar4 = m0->z * fVar1 + fVar4;
  out->x = fVar5;
  out->y = fVar6;
  out->z = fVar4;
  fVar5 = m1->x * fVar3 + fVar5;
  fVar6 = m1->y * fVar3 + fVar6;
  fVar4 = m1->z * fVar3 + fVar4;
  out->x = fVar5;
  out->y = fVar6;
  out->z = fVar4;
  fVar1 = p1->y;
  fVar2 = p1->z;
  out->x = p1->x * fVar7 + fVar5;
  out->y = fVar1 * fVar7 + fVar6;
  out->z = fVar2 * fVar7 + fVar4;
  return;
}


// 0x013a378 (0xb0 bytes)
void Angle_ApproachWrapped(float from,float to,float rate)

{
  float fVar1;
  
  fVar1 = to - from;
  if (fVar1 <= 3.1415927) {
    if (fVar1 < -3.1415927) {
      fVar1 = fVar1 + 6.2831855;
    }
  }
  else {
    fVar1 = fVar1 - 6.2831855;
  }
  if (fVar1 <= 6.2831855) {
    if (fVar1 < -6.2831855) {
      fVar1 = fVar1 + 6.2831855;
    }
  }
  else {
    fVar1 = fVar1 - 6.2831855;
  }
  FastWrapRot(from,rate * fVar1);
  return;
}


// 0x013a440 (0x3cc bytes)
double Spline_CalcLen
                 (double tension,double bias,PathFollower *follower,undefined8 param_4,
                 undefined8 param_5,double param_6,undefined8 param_7)

{
  float fVar1;
  int iVar2;
  Vec4 *out;
  Vec4 *pVVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar8;
  double dVar7;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  Vec4 local_e0;
  Vec4 pnt;
  Vec4 local_c0;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  s32 idx;
  Spline *pSpline;
  
  pSpline = follower->pSpline;
  idx = follower->idx;
  iVar8 = SUB84(param_6,0);
  iVar2 = pSpline->cnt;
  pnt.x = pSpline->points[0].x;
  pnt.y = pSpline->points[0].y;
  follower->idx = 0;
  pnt.z = pSpline->points[0].z;
  pnt.w = pSpline->points[0].w;
  uVar4 = (undefined4)param_7;
  if (iVar8 != 0) {
    param_5 = 0;
    param_6 = 1.06151804779458e-314;
    SpawnPart_41(0.666,&pnt,uVar4,0,0x80101080,param_7,0x7f,0xffff,0xff);
  }
  lVar12 = ZEXT48(&stack0x00000000) - 0xf0;
  lVar9 = 0;
  dVar7 = (double)(float)param_6;
  out = (Vec4 *)lVar12;
  Spline_CalcTan((float)tension,(float)bias,out,follower,param_5,(float)param_6,0);
  dVar14 = 0.0;
  if (0 < iVar2) {
    dVar19 = dVar14;
    iVar13 = 0;
    iVar10 = 0;
    do {
      local_e0.x = pnt.x;
      local_e0.y = pnt.y;
      local_e0.z = pnt.z;
      local_e0.w = pnt.w;
      dVar15 = dVar19;
      if (iVar8 != 0) {
        dVar7 = 1.06153215830942e-314;
        SpawnPart_41
                  (1.0,&local_e0,uVar4,iVar10 % 0xf + 2,0x80108010,lVar9,0x7f,0xffff,0xff);
        dVar15 = dVar19;
      }
      iVar11 = iVar10 + 1;
      iVar6 = 0;
      if (-1 < (char)follower->direction) {
        iVar6 = follower->pSpline->cnt + -1;
      }
      if (iVar11 < 0) {
        iVar5 = iVar11 + iVar6;
      }
      else {
        iVar5 = iVar11;
        if (iVar6 < iVar11) {
          iVar5 = iVar11 / (iVar6 + 1);
          iVar5 = iVar11 - (iVar5 * iVar6 + iVar5);
        }
      }
      lVar9 = 1;
      pVVar3 = follower->pSpline->points + iVar5 + -1;
      pnt.x = pVVar3[1].x;
      pnt.y = pVVar3[1].y;
      pnt.z = pVVar3[1].z;
      pnt.w = pVVar3[1].w;
      follower->idx = iVar10;
      Spline_CalcTan((float)tension,(float)bias,out,follower,ZEXT48(pVVar3),(float)dVar7,1);
      local_b0 = local_e0.x;
      local_ac = local_e0.y;
      local_a8 = local_e0.z;
      local_a4 = local_e0.w;
      dVar16 = 0.05000000074505806;
      dVar17 = 1.0;
      dVar20 = 0.20000000298023224;
      dVar18 = dVar16;
      dVar19 = dVar15;
      do {
        if (iVar8 != 0) {
          SpawnPart_41((float)dVar20,&local_b0,uVar4,0,0x80404080,lVar9,0x7f,0xffff,0xff);
        }
        dVar7 = (double)(ZEXT48(&stack0x00000000) - 0x100);
        lVar9 = lVar12;
        Spline_Hermite((float)dVar16,&local_c0,&local_e0,&pnt,SUB84(dVar7,0),out);
        dVar16 = (double)(float)(dVar16 + dVar18);
        local_a4 = local_c0.w;
        fVar1 = (float)(dVar15 + (double)SQRT((local_a8 - local_c0.z) * (local_a8 - local_c0.z) +
                                              (local_b0 - local_c0.x) * (local_b0 - local_c0.x) +
                                              (local_ac - local_c0.y) * (local_ac - local_c0.y)));
        dVar15 = (double)fVar1;
        local_b0 = local_c0.x;
        local_ac = local_c0.y;
        local_a8 = local_c0.z;
      } while (dVar16 <= dVar17);
      dVar14 = (double)(float)(dVar15 + dVar14);
      *(float *)((int)&follower->pSpline->points[0].w + iVar13) = fVar1;
      iVar13 = iVar13 + 0x10;
      iVar10 = iVar11;
    } while (iVar11 < iVar2);
  }
  follower->idx = idx;
  return dVar14;
}


// 0x013a80c (0x1b8 bytes)
void PathFollower_DebugDrawTangents
               (double param_1,double param_2,PathFollower *param_3,undefined8 param_4,
               undefined8 param_5,double param_6)

{
  Spline *pSVar1;
  s32 sVar2;
  int iVar3;
  Vec4 *pVVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  Vec4 local_90;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  
  pSVar1 = param_3->pSpline;
  sVar2 = param_3->idx;
  iVar3 = pSVar1->cnt;
  dVar10 = (double)pSVar1->points[0].x;
  param_3->idx = 0;
  dVar11 = (double)pSVar1->points[0].y;
  dVar12 = (double)pSVar1->points[0].z;
  dVar13 = (double)pSVar1->points[0].w;
  dVar7 = (double)(float)param_6;
  Spline_CalcTan((float)param_1,(float)param_2,&local_90,param_3,ZEXT48(pSVar1),(float)param_6,0);
  if (0 < iVar3) {
    iVar8 = 0;
    do {
      local_80 = (float)((double)local_90.x + dVar10);
      local_7c = (float)((double)local_90.y + dVar11);
      local_74 = (float)dVar13;
      local_78 = (float)((double)local_90.z + dVar12);
      local_64 = (float)dVar13;
      local_70 = (float)(dVar10 - (double)local_90.x);
      local_6c = (float)(dVar11 - (double)local_90.y);
      local_68 = (float)(dVar12 - (double)local_90.z);
      STUB_00065468(&local_80,&local_70);
      iVar9 = iVar8 + 1;
      iVar6 = 0;
      if (-1 < (char)param_3->direction) {
        iVar6 = param_3->pSpline->cnt + -1;
      }
      if (iVar9 < 0) {
        iVar5 = iVar9 + iVar6;
      }
      else {
        iVar5 = iVar9;
        if (iVar6 < iVar9) {
          iVar5 = iVar9 / (iVar6 + 1);
          iVar5 = iVar9 - (iVar5 * iVar6 + iVar5);
        }
      }
      pVVar4 = param_3->pSpline->points + iVar5 + -1;
      dVar10 = (double)pVVar4[1].x;
      dVar11 = (double)pVVar4[1].y;
      dVar12 = (double)pVVar4[1].z;
      dVar13 = (double)pVVar4[1].w;
      param_3->idx = iVar8;
      fVar14 = (float)dVar7;
      dVar7 = (double)fVar14;
      Spline_CalcTan((float)param_1,(float)param_2,&local_90,param_3,ZEXT48(pVVar4),fVar14,1);
      iVar8 = iVar9;
    } while (iVar9 < iVar3);
  }
  param_3->idx = sVar2;
  return;
}


