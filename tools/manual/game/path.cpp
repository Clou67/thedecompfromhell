#include "rc1.h"
#include "idol/fastinline.h"
// MERGE

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
