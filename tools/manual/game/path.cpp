#include "rc1.h"
#include "idol/fastinline.h"

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

#define POSRING_NONE 0xff

static inline Vec4 PosRingPointAt(PosRing *ring, int idx)
{
    Vec4 pnt;

    pnt.x = ring->pts[idx].x;
    pnt.y = ring->pts[idx].y;
    pnt.z = ring->pts[idx].z;
    pnt.w = 0.0f;

    return pnt;
}

static inline void PosRingSetPoint(PosRing *ring, int idx, Vec4 *pos)
{
    ring->pts[idx].x = pos->x;
    ring->pts[idx].y = pos->y;
    ring->pts[idx].z = pos->z;
}

static inline void PosRingGetPoint(Vec4 *out, PosRing *ring, int idx)
{
    out->x = ring->pts[idx].x;
    out->y = ring->pts[idx].y;
    out->z = ring->pts[idx].z;
}

/* idx in head-relative order: indices up to the head count past the end when the ring wraps */
static inline int PosRingUnwrap(PosRing *ring, int idx)
{
    if (ring->head < ring->tail && idx <= ring->head) {
        return (u8)(idx + ring->cap);
    }

    return idx;
}

static inline int PosRingNext(PosRing *ring, int idx)
{
    return (idx + 1) % ring->cap;
}

// 0x01387a0 (0x5c bytes)
void PosRing_Init(float zOff, float maxDistXY, float maxDistZ, Vec4 *pos, PosRing *ring, int cap, int unused,
                  MobyInstance *ignore0, MobyInstance *ignore1)
{
    ring->head = 1;
    ring->mark = 0;
    ring->tail = 0;
    ring->probe = 0;
    ring->cap = (u8)cap;
    ring->zOff = zOff;
    ring->ignore[0] = ignore0;
    ring->ignore[1] = ignore1;
    ring->maxDistXY = maxDistXY;
    ring->maxDistZ = maxDistZ;

    for (int i = 0; i < 2; i++) {
        ring->pts[i].x = pos->x;
        ring->pts[i].y = pos->y;
        ring->pts[i].z = pos->z + zOff;
    }
}

// 0x0138810 (0x358 bytes)
/* CollLine from a to b, in steps of at most 10 units (each starting a tenth of a step
   back) once they are 10 or more apart flat; the ring's mobys are not hit */
int PosRing_CollLineSampled(PosRing *ring, Vec4 *a, Vec4 *b)
{
    u32 savedColl[2];
    int hit = 0;
    float dx = a->x - b->x;
    float dy = a->y - b->y;
    float dist = sqrtf(dx * dx + dy * dy);

    for (int i = 0; i < 2; i++) {
        if (ring->ignore[i] != NULL) {
            savedColl[i] = (u32)(uintptr_t)ring->ignore[i]->collision;
            ring->ignore[i]->collision = NULL;
        }
    }

    if (dist < 10.0f) {
        hit = PathCollLine(a, b, 0, ring->ignore[0]);
    }
    else {
        float steps;
        float frac = (float)FastFrac(dist * 0.1f, 0, (undefined8)(uintptr_t)&steps);
        if (frac > 0.0f) {
            steps += 1.0f;
        }

        float stepLen = dist / steps;
        Vec4 dir;
        dir.x = b->x - a->x;
        dir.y = b->y - a->y;
        dir.z = b->z - a->z;

        float dirLen = sqrtf(dir.z * dir.z + (dir.x * dir.x + dir.y * dir.y));
        Vec4 step = { 0.0f, 0.0f, 0.0f, 0.0f };
        if (dirLen != 0.0f) {
            step.x = dir.x * (stepLen / dirLen);
            step.y = dir.y * (stepLen / dirLen);
            step.z = dir.z * (stepLen / dirLen);
        }

        float stepSize = sqrtf(step.z * step.z + (step.x * step.x + step.y * step.y));
        Vec4 back = { 0.0f, 0.0f, 0.0f, 0.0f };
        if (stepSize != 0.0f) {
            back.x = step.x * ((stepLen * -0.1f) / stepSize);
            back.y = step.y * ((stepLen * -0.1f) / stepSize);
            back.z = step.z * ((stepLen * -0.1f) / stepSize);
        }

        Vec4 from = *a;
        Vec4 to;
        to.x = a->x + step.x;
        to.y = a->y + step.y;
        to.z = a->z + step.z;
        to.w = a->w;

        while (steps > 0.0f) {
            hit = PathCollLine(&from, &to, 0, ring->ignore[0]);
            if (hit != 0) {
                break;
            }

            steps -= 1.0f;
            from.x = to.x + back.x;
            from.y = to.y + back.y;
            from.z = to.z + back.z;
            to.x += step.x;
            to.y += step.y;
            to.z += step.z;
        }
    }

    for (int i = 0; i < 2; i++) {
        if (ring->ignore[i] != NULL) {
            ring->ignore[i]->collision = (ushort *)(uintptr_t)savedColl[i];
        }
    }

    return hit;
}

// 0x0138b68 (0x7c bytes)
/* is b before a, in the ring's order */
int PosRing_IsIndexBefore(PosRing *ring, u8 a, u8 b)
{
    if (a == POSRING_NONE) {
        return 0;
    }

    if (b == POSRING_NONE) {
        return 1;
    }

    return PosRingUnwrap(ring, b) < PosRingUnwrap(ring, a);
}

// 0x0138be4 (0x7c bytes)
/* is a before b, in the ring's order */
int PosRing_IsIndexBeforeWrapped(PosRing *ring, u8 a, u8 b)
{
    if (a == POSRING_NONE) {
        return 0;
    }

    if (b == POSRING_NONE) {
        return 1;
    }

    return PosRingUnwrap(ring, a) < PosRingUnwrap(ring, b);
}

// 0x0138c60 (0x54 bytes)
int PosRing_IsIndexOutsideRange(PosRing *ring, u8 idx)
{
    if (idx == POSRING_NONE) {
        return 0;
    }

    if (ring->head < ring->tail) {
        return idx <= ring->tail || ring->head < idx;
    }

    return ring->tail <= idx && idx < ring->head;
}

// 0x0138cb4 (0x5c bytes)
/* idx + 1, kept between the tail and the head */
int PosRing_NextIndexClamped(PosRing *ring, u8 idx)
{
    int next = (u8)PosRingNext(ring, idx);

    if (ring->head < ring->tail) {
        if (ring->tail < next && next <= ring->head) {
            return ring->tail;
        }

        return next;
    }

    if (ring->tail <= next && next < ring->head) {
        return next;
    }

    return ring->tail;
}

// 0x0138d10 (0x140 bytes)
/* tests the point at *cursor (restarting at the head if it is out of range) for a clear
   line to target, then steps the cursor back; returns that point if clear, else 0xff */
int PosRing_StepClearBack(Vec4 *target, PosRing *ring, u8 *cursor)
{
    if (!PosRing_IsIndexOutsideRange(ring, *cursor)) {
        *cursor = ring->head;
    }

    Vec4 pnt = PosRingPointAt(ring, *cursor);
    int hit = PosRing_CollLineSampled(ring, &pnt, target);
    int tested = *cursor;

    int idx = tested;
    if (idx == ring->tail) {
        *cursor = ring->head;
        idx = ring->head;
    }

    *cursor = (idx == 0 ? ring->cap : idx) - 1;

    return hit ? POSRING_NONE : tested;
}

/* close enough to look, and nothing in the way */
static inline int PosRingCanReach(PosRing *ring, Vec4 *from, Vec4 *to)
{
    float dx = from->x - to->x;
    float dy = from->y - to->y;

    return sqrtf(dx * dx + dy * dy) < ring->maxDistXY && fabsf(from->z - to->z) < ring->maxDistZ &&
           PathCollLine(from, to, 2, NULL) == 0;
}

static inline Vec4 PosRingRaised(PosRing *ring, Vec4 *from, float zOff)
{
    Vec4 target = *from;

    if (zOff == 0.0f) {
        zOff = ring->zOff;
    }

    target.z = from->z + zOff;

    return target;
}

// 0x0138e58 (0x3a4 bytes)
/* moves *cursor toward the head through points clear of `from`, putting the point to head
   for in out (fallback once caught up); the scan goes back one point a call */
void PosRing_FindClearPointFwd(float zOff, PosRing *ring, Vec4 *from, Vec4 *out, Vec4 *fallback, u8 *cursor, u8 *scan)
{
    Vec4 target = PosRingRaised(ring, from, zOff);
    int clear = PosRing_StepClearBack(&target, ring, scan);

    if (clear != POSRING_NONE) {
        u8 cur = *cursor;

        if (cur == POSRING_NONE || PosRingUnwrap(ring, cur) < PosRingUnwrap(ring, clear)) {
            PosRingGetPoint(out, ring, clear);

            if (PosRing_IsIndexOutsideRange(ring, *cursor)) {
                ring->tail = *cursor;
            }

            *cursor = (u8)clear;
        }
    }

    if (PosRingCanReach(ring, from, out)) {
        u8 cur = *cursor;

        if (cur == POSRING_NONE || cur == ring->head) {
            if (cur != POSRING_NONE) {
                ring->tail = cur;
            }

            *cursor = POSRING_NONE;
        }
        else {
            ring->tail = cur;
            *cursor = (u8)PosRingNext(ring, cur);
            PosRingGetPoint(out, ring, *cursor);
        }
    }

    if (*cursor == POSRING_NONE) {
        out->x = fallback->x;
        out->y = fallback->y;
        out->z = fallback->z;
    }

    if (*cursor == ring->head) {
        PosRingSetPoint(ring, ring->mark, from);
        PosRingGetPoint(out, ring, *cursor);
    }
}

// 0x01391fc (0x13c bytes)
/* PosRing_StepClearBack stepping toward the head */
int PosRing_StepClearFwd(Vec4 *target, PosRing *ring, u8 *cursor)
{
    if (!PosRing_IsIndexOutsideRange(ring, *cursor)) {
        *cursor = ring->head;
    }

    Vec4 pnt = PosRingPointAt(ring, *cursor);
    int hit = PosRing_CollLineSampled(ring, &pnt, target);
    int tested = *cursor;

    int idx = tested;
    if (idx == ring->tail) {
        *cursor = ring->head;
        idx = ring->head;
    }

    *cursor = (u8)PosRingNext(ring, idx);

    return hit ? POSRING_NONE : tested;
}

// 0x0139340 (0x2d8 bytes)
/* PosRing_FindClearPointFwd moving *cursor toward the tail (the head follows it) */
void PosRing_FindClearPointBack(float zOff, PosRing *ring, Vec4 *from, Vec4 *out, Vec4 *fallback, u8 *cursor, u8 *scan)
{
    Vec4 target = PosRingRaised(ring, from, zOff);
    int clear = PosRing_StepClearFwd(&target, ring, scan);

    if (clear != POSRING_NONE) {
        u8 cur = *cursor;

        if (cur == POSRING_NONE || PosRingUnwrap(ring, clear) < PosRingUnwrap(ring, cur)) {
            PosRingGetPoint(out, ring, clear);

            if (PosRing_IsIndexOutsideRange(ring, *cursor)) {
                ring->head = *cursor;
            }

            *cursor = (u8)clear;
        }
    }

    if (PosRingCanReach(ring, from, out)) {
        u8 cur = *cursor;

        if (cur == POSRING_NONE || cur == ring->tail) {
            if (cur != POSRING_NONE) {
                ring->head = cur;
            }

            *cursor = POSRING_NONE;
        }
        else {
            /* steps from 0 to cap, not cap - 1, as the game does */
            ring->head = cur;
            *cursor = (cur == 0) ? ring->cap : cur - 1;
            PosRingGetPoint(out, ring, *cursor);
        }
    }

    if (*cursor == POSRING_NONE) {
        out->x = fallback->x;
        out->y = fallback->y;
        out->z = fallback->z;
    }
}

// 0x0139620 (0x3f4 bytes)
/* adds pos (raised by zOff, or the ring's zOff) as the new head, dropping points it can
   see past; returns 0 if the new point had no clear line back */
int PosRing_AddPoint(float zOff, Vec4 *pos, PosRing *ring)
{
    Vec4 pnt = PosRingRaised(ring, pos, zOff);
    int result;

    if (!PosRing_IsIndexOutsideRange(ring, ring->mark)) {
        ring->mark = ring->tail;
    }

    if (ring->tail == ring->head) {
        ring->mark = ring->head;
        ring->head = (u8)PosRingNext(ring, ring->head);
        PosRingSetPoint(ring, ring->head, &pnt);
        return 1;
    }

    Vec4 markPnt = PosRingPointAt(ring, ring->mark);
    if (PosRing_CollLineSampled(ring, &markPnt, &pnt) == 0) {
        /* the mark sees it: replace the head, and pull the mark back if it sees further */
        if (ring->mark != ring->tail) {
            int before = ring->mark - 1;
            if (before < 0) {
                before = ring->cap - 1;
            }

            Vec4 beforePnt = PosRingPointAt(ring, before);
            if (PosRing_CollLineSampled(ring, &beforePnt, &pnt) == 0) {
                ring->head = ring->mark;
                ring->mark = (u8)before;
            }
        }

        PosRingSetPoint(ring, ring->head, &pnt);
        result = 1;
    }
    else {
        int next = PosRingNext(ring, ring->head);

        if (next != ring->tail) {
            ring->head = (u8)next;
            ring->mark = (u8)PosRingNext(ring, ring->mark);
        }

        PosRingSetPoint(ring, ring->head, &pnt);
        result = 0;
    }

    /* one probe a call for a shortcut from further back */
    int probe = PosRing_NextIndexClamped(ring, ring->probe);
    ring->probe = (u8)probe;

    if (probe == ring->head || probe == ring->tail || probe == ring->mark) {
        return result;
    }

    Vec4 probePnt = PosRingPointAt(ring, probe);
    if (PosRing_CollLineSampled(ring, &probePnt, &pnt) != 0) {
        return result;
    }

    ring->head = (u8)PosRingNext(ring, ring->probe);
    if (ring->mark != ring->tail) {
        if (ring->head == 0) {
            ring->mark = ring->cap - 1;
        }
        else {
            ring->mark = ring->head;
            ring->head--;
        }
    }

    PosRingSetPoint(ring, ring->head, &pnt);

    return 1;
}

// 0x0139a18 (0x11c bytes)
/* the nearest point (within 1000000) with a clear line to pos, or 0xff */
int PosRing_FindNearestClearPoint(Vec4 *pos, PosRing *ring)
{
    float best = 1000000.0f;
    int bestIdx = POSRING_NONE;
    int idx = ring->head;

    while (true) {
        Vec4 pnt = PosRingPointAt(ring, idx);
        float dx = pos->x - pnt.x;
        float dy = pos->y - pnt.y;
        float dz = pos->z - pnt.z;
        float dist = sqrtf(dz * dz + dx * dx + dy * dy);

        if (dist < best && PosRing_CollLineSampled(ring, &pnt, pos) == 0) {
            best = dist;
            bestIdx = idx;
        }

        if (idx == ring->tail) {
            break;
        }

        idx = (u8)PosRingNext(ring, idx);
    }

    return bestIdx;
}

// 0x0139b34 (0xdc bytes)
/* walking tail to head: the last point with a clear line to target, or 0xff */
int PosRing_FindLastClearFromTail(Vec4 *target, PosRing *ring)
{
    int found = POSRING_NONE;
    int idx = ring->tail;

    while (true) {
        Vec4 pnt = PosRingPointAt(ring, idx);

        if (PosRing_CollLineSampled(ring, &pnt, target) == 0) {
            found = idx;
        }

        if (idx == ring->head) {
            break;
        }

        idx = (u8)PosRingNext(ring, idx);
    }

    return found;
}

// 0x0139c10 (0xdc bytes)
/* walking head to tail: the last point with a clear line to target, or 0xff */
int PosRing_FindLastClearFromHead(Vec4 *target, PosRing *ring)
{
    int found = POSRING_NONE;
    int idx = ring->head;

    while (true) {
        Vec4 pnt = PosRingPointAt(ring, idx);

        if (PosRing_CollLineSampled(ring, &pnt, target) == 0) {
            found = idx;
        }

        if (idx == ring->tail) {
            break;
        }

        if (idx == 0) {
            idx = ring->cap;
        }

        idx = (u8)(idx - 1);
    }

    return found;
}

// 0x0139cf8 (0x170 bytes)
/* a marker on every point, tail to head, joined by lines */
void PosRing_DebugDraw(PosRing *ring, u8 r, u8 g, u8 b)
{
    int prev = -1;
    int idx = ring->tail;

    while (true) {
        Vec4 prevPnt = PosRingPointAt(ring, prev);
        Vec4 pnt = PosRingPointAt(ring, idx);

        SpawnPart_5(100000.0f, 0.0f, &pnt.x, r, g, b, 0, (int)(animationSpeed * 25.5f));
        if (prev >= 0) {
            STUB_00065468(&prevPnt, &pnt);
        }

        if (idx == ring->head) {
            break;
        }

        prev = idx;
        idx = (idx + 1) % ring->cap;
    }
}

/* the last index the follower's spline wraps at: cnt - 1 going forward, 0 going back */
static inline int PathFollowerLast(PathFollower *follower)
{
    if ((s8)follower->direction >= 0) {
        return follower->pSpline->cnt - 1;
    }

    return 0;
}

static inline Vec4 *PathFollowerPnt(PathFollower *follower, int idx)
{
    int last = PathFollowerLast(follower);

    if (idx < 0) {
        return &follower->pSpline->points[idx + last + 1];
    }

    if (idx > last) {
        return &follower->pSpline->points[idx % (last + 1)];
    }

    return &follower->pSpline->points[idx];
}

static inline int PathFollowerWrap(PathFollower *follower, int idx)
{
    int last = PathFollowerLast(follower);

    if (idx < 0) {
        return idx + last;
    }

    if (idx > last) {
        return idx % (last + 1);
    }

    return idx;
}

// 0x0139e68 (0x90 bytes)
Vec4 *PathFollower_GetPntPtr(PathFollower *follower, int idx)
{
    return PathFollowerPnt(follower, idx);
}

// 0x0139ef8 (0x60 bytes)
/* note: below 0 this adds last, not last + 1 like PathFollower_GetPntPtr */
int PathFollower_WrapIdx(PathFollower *follower, int idx)
{
    return PathFollowerWrap(follower, idx);
}

// 0x0139f58 (0x58 bytes)
s32 PathFollower_Advance(PathFollower *follower)
{
    int last = PathFollowerLast(follower);
    int idx = follower->idx + 1;

    if (idx > last) {
        idx %= last + 1;
    }

    follower->idx = idx;

    return idx;
}

// 0x0139fc0 (0x2c4 bytes)
/* the Kochanek-Bartels tangent at node idx + offs, no longer than 1.1x its shorter
   neighbouring segment */
void Spline_CalcTan(float tension, float bias, Vec4 *out, PathFollower *follower, int unused1, int unused2, int offs)
{
    int node = follower->idx + offs;
    Vec4 *prev = PathFollowerPnt(follower, node - 1);
    Vec4 *cur = PathFollowerPnt(follower, node);
    Vec4 *next = PathFollowerPnt(follower, node + 1);
    float toNext = (1.0f - tension) * (1.0f - bias) * 0.5f;
    float fromPrev = (1.0f - tension) * (bias + 1.0f) * 0.5f;
    Vec4 tan;

    tan.x = (cur->x - prev->x) * fromPrev + (next->x - cur->x) * toNext;
    tan.y = (cur->y - prev->y) * fromPrev + (next->y - cur->y) * toNext;
    tan.z = (cur->z - prev->z) * fromPrev + (next->z - cur->z) * toNext;

    float prevLen = PathDist(prev, cur);
    float nextLen = PathDist(cur, next);
    float limit = (prevLen < nextLen) ? prevLen : nextLen;
    float tanLen = sqrtf(tan.z * tan.z + tan.x * tan.x + tan.y * tan.y);

    out->w = cur->w;

    if (tanLen <= limit * 1.1f) {
        out->x = tan.x;
        out->y = tan.y;
        out->z = tan.z;
        return;
    }

    float scale = (tanLen == 0.0f) ? 0.0f : (limit * 1.1f) / tanLen;
    out->x = scale * tan.x;
    out->y = scale * tan.y;
    out->z = scale * tan.z;
}

// 0x013a290 (0xd4 bytes)
void Spline_Hermite(float t, Vec4 *out, Vec4 *p0, Vec4 *p1, Vec4 *m0, Vec4 *m1)
{
    float t2 = t * t;
    float t3 = t * t2;
    float h00 = (t3 * 2.0f - t2 * 3.0f) + 1.0f;
    float h10 = -(t2 * 2.0f - t3) + t;
    float h01 = -(t3 * 2.0f - t2 * 3.0f);
    float h11 = t3 - t2;

    out->x = p0->x * h00 + m0->x * h10 + m1->x * h11 + p1->x * h01;
    out->y = p0->y * h00 + m0->y * h10 + m1->y * h11 + p1->y * h01;
    out->z = p0->z * h00 + m0->z * h10 + m1->z * h11 + p1->z * h01;
    out->w = p0->w;
}

// 0x013a378 (0xb0 bytes)
/* `from` turned rate of the way to `to`, the short way round */
float Angle_ApproachWrapped(float from, float to, float rate)
{
    float diff = to - from;

    if (diff > 3.1415927f) {
        diff -= 6.2831855f;
    }
    else if (diff < -3.1415927f) {
        diff += 6.2831855f;
    }

    if (diff > 6.2831855f) {
        diff -= 6.2831855f;
    }
    else if (diff < -6.2831855f) {
        diff += 6.2831855f;
    }

    return FastWrapRot(from, rate * diff);
}

// 0x013a440 (0x3cc bytes)
/* walks the Hermite curve through the follower's spline in steps of 0.05, storing each
   segment's length in its node's w; returns the total. With draw, shows the samples */
float Spline_CalcLen(float tension, float bias, PathFollower *follower, int unused1, int unused2, int draw, int cam)
{
    int cnt = follower->pSpline->cnt;
    s32 savedIdx = follower->idx;
    Vec4 pnt = follower->pSpline->points[0];
    Vec4 tan;
    float total = 0.0f;

    follower->idx = 0;
    if (draw) {
        SpawnPart_41(0.666f, &pnt.x, cam, 0, 0x80101080, 0, 0x7f, -1, 0xff);
    }

    Spline_CalcTan(tension, bias, &tan, follower, 0, 0, 0);

    for (int i = 0; i < cnt; i++) {
        Vec4 start = pnt;
        Vec4 startTan = tan;

        if (draw) {
            SpawnPart_41(1.0f, &start.x, cam, i % 15 + 2, 0x80108010, 0, 0x7f, -1, 0xff);
        }

        pnt = follower->pSpline->points[PathFollowerWrap(follower, i + 1)];
        follower->idx = i;
        Spline_CalcTan(tension, bias, &tan, follower, 0, 0, 1);

        Vec4 sample = start;
        float segLen = 0.0f;
        for (float t = 0.05f; t <= 1.0f; t += 0.05f) {
            Vec4 next;

            if (draw) {
                SpawnPart_41(0.2f, &sample.x, cam, 0, 0x80404080, 0, 0x7f, -1, 0xff);
            }

            Spline_Hermite(t, &next, &start, &pnt, &startTan, &tan);
            segLen += PathDist(&sample, &next);
            sample = next;
        }

        total += segLen;
        follower->pSpline->points[i].w = segLen;
    }

    follower->idx = savedIdx;

    return total;
}

// 0x013a80c (0x1b8 bytes)
/* a line through each node along its tangent */
void PathFollower_DebugDrawTangents(float tension, float bias, PathFollower *follower)
{
    int cnt = follower->pSpline->cnt;
    s32 savedIdx = follower->idx;
    Vec4 pnt = follower->pSpline->points[0];
    Vec4 tan;

    follower->idx = 0;
    Spline_CalcTan(tension, bias, &tan, follower, 0, 0, 0);

    for (int i = 0; i < cnt; i++) {
        Vec4 ahead;
        Vec4 behind;

        ahead.x = tan.x + pnt.x;
        ahead.y = tan.y + pnt.y;
        ahead.z = tan.z + pnt.z;
        ahead.w = pnt.w;
        behind.x = pnt.x - tan.x;
        behind.y = pnt.y - tan.y;
        behind.z = pnt.z - tan.z;
        behind.w = pnt.w;
        STUB_00065468(&ahead, &behind);

        pnt = follower->pSpline->points[PathFollowerWrap(follower, i + 1)];
        follower->idx = i;
        Spline_CalcTan(tension, bias, &tan, follower, 0, 0, 1);
    }

    follower->idx = savedIdx;
}
