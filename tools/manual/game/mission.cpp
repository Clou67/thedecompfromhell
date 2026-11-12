// game/mission.cpp -- the per-level mission lists and the map icons
// STATUS: CLEAN (checked against the asm; local names are mine)
// 19 functions, 0xea378-0xeb288
//
// Each level has a list of MissionDefs. A mission is shown when its first condition holds and done
// when the second does (CheckMission); stepFunc picks which step text to show. The map icons point
// at mission targets: on the current level at their mobys, elsewhere at the positions kept in the
// save (g_MissionTargets).
#include "rc1.h"

enum MissionCondType {
    COND_ALWAYS,
    COND_PLANET_SEEN,       /* g_SeenPlanets[arg] */
    COND_ITEM,              /* UnlockableItems[arg] */
    COND_ITEM2,             /* CHAR_ARRAY_0096c165[arg] (follows UnlockableItems) */
    COND_TARGET_SET,        /* g_MissionTargets[arg].state != 0 */
    COND_TARGET_DONE,       /* g_MissionTargets[arg].state >= 2 */
    COND_LEVEL_FLAG,        /* g_MiscLevelFlags byte arg */
    COND_FUNC,              /* arg is a function */
    COND_GOLD_BOLT,         /* arg = level << 16 | bolt */
};
enum {
    MISSION_HIDDEN, MISSION_OPEN, MISSION_DONE,                         /* MissionDef.status */
    MISSION_HIDE_DONE = 1, MISSION_NOT_LISTED = 2, MISSION_NEEDS_VISIT = 4,  /* MissionDef.flags */
};
enum {                      /* MapIcon.flags */
    MAPICON_END = 0x4,
    MAPICON_HAS_LABEL = 0x10,
    MAPICON_NEEDS_TARGET = 0x1000,
};

#define MAX_TARGET     120
#define NO_HERO_MARKER 0x08000000
#define MAP_FIXED      4096.0f          /* map coordinates are stored 16.16 */

static inline bool Byte(const void *base, int i)
{
    return ((const u8 *)base)[i] != 0;
}

// 0x00ea378 (0x54 bytes)
void ResetMissionState(void)
{
    for (int i = 0; i < 6; i++) {
        g_FrustumPlanes[i].x = 0.0f;
        g_FrustumPlanes[i].y = 0.0f;
        g_FrustumPlanes[i].z = 0.0f;
        g_FrustumPlanes[i].w = 0.0f;
    }
    DAT_00a24608 = 0;
    DAT_00a2460c = 0;
    DAT_00a24610 = 0;
}

// 0x00ea3d0 (0x1e0 bytes)
int CheckMission(short type, int arg)
{
    switch (type) {
    case COND_ALWAYS:      return 1;
    case COND_PLANET_SEEN: return Byte(&g_SeenPlanets, arg);
    case COND_ITEM:        return Byte(&UnlockableItems, arg);
    case COND_ITEM2:       return Byte(CHAR_ARRAY_0096c165, arg);
    case COND_TARGET_SET:  return arg <= MAX_TARGET && g_MissionTargets[arg].state != 0;
    case COND_TARGET_DONE: return arg <= MAX_TARGET && g_MissionTargets[arg].state >= 2;
    case COND_LEVEL_FLAG:  return Byte(&g_MiscLevelFlags, arg);
    case COND_FUNC:        return ((int (*)(void))arg)() != 0;
    case COND_GOLD_BOLT:   return Byte(g_CollectedGoldBolts, (arg >> 16) * 4 + (arg & 0xffff));
    default:               return 0;
    }
}

// 0x00ea5b0 (0x1f8 bytes)
/* status and step of each mission of g_SelectedLevel; 1 if none is open */
int RefreshLevelMissionStatus(void)
{
    MissionDef *m;

    g_LevelMissions = g_MissionDefs[g_SelectedLevel];
    if (!g_LevelMissions) return 0;

    for (m = g_LevelMissions; m->textId != 0; m++) {
        short status = MISSION_HIDDEN;
        if (!(m->flags & MISSION_NEEDS_VISIT) || Byte(&VisitedPlanets, g_SelectedLevel)) {
            if (CheckMission(m->condType, m->condArg))
                status = CheckMission(m->doneType, m->doneArg) ? MISSION_DONE : MISSION_OPEN;
        }
        m->status = status;
    }
    for (m = g_LevelMissions; m->textId != 0; m++)
        if (m->stepFunc) m->step = m->stepFunc(m->stepArg);

    int open = 0;
    g_MissionsOpen = 0;
    for (m = g_LevelMissions; m->textId != 0; m++)
        if (m->status == MISSION_OPEN && !(m->flags & MISSION_NOT_LISTED)) g_MissionsOpen = ++open;
    return open == 0;
}

// 0x00ea7a8 (0x1a4 bytes)
/* the listed missions' texts (the step text if useStep), a bit per done one in *outCompleteMask
   (bit 31: all done) and description ids; returns the count */
int BuildMissionList(int *outTextIds, u32 *outCompleteMask, int *outDesc, bool useStep)
{
    MissionDef *m = g_LevelMissions;
    bool allDone = true;
    int n = 0;

    *outTextIds = 0;
    if (outCompleteMask) *outCompleteMask = 0;
    if (outDesc) *outDesc = -1;
    if (!m) return 0;

    for (; m->textId != 0; m++) {
        short status = m->status;
        if (status != MISSION_DONE && !(m->flags & MISSION_NOT_LISTED)) allDone = false;
        if ((m->flags & MISSION_NOT_LISTED) || status == MISSION_HIDDEN ||
            ((m->flags & MISSION_HIDE_DONE) && status == MISSION_DONE))
            continue;
        outTextIds[n] = m->textId;
        if (useStep)
            outTextIds[n] = m->status != MISSION_DONE ? m->stepText[m->step] : STR_MISSION_COMPLETED;
        if (outCompleteMask && m->status == MISSION_DONE) *outCompleteMask |= 1u << n;
        if (outDesc) *outDesc++ = m->descBase + m->step;
        n++;
    }
    if (allDone && outCompleteMask) *outCompleteMask |= 0x80000000u;
    return n;
}

/* fixed map spots for the negative icon targets */
static inline bool FixedSpot(short target, float *u, float *v)
{
    switch (target) {
    case -1: *u = 0.234375f;    *v = 0.30078125f;  return true;
    case -2: *u = 0.5390625f;   *v = 0.36523438f;  return true;
    case -3: *u = 0.58203125f;  *v = 0.6875f;      return true;
    case -4: *u = 0.72070313f;  *v = 0.72851563f;  return true;
    case -5: *u = 0.38476563f;  *v = 0.39648438f;  return true;
    case -7: *u = 0.8671875f;   *v = 0.23046875f;  return true;
    case -8: *u = 0.48046875f;  *v = 0.5703125f;   return true;
    case -9: *u = 0.625f;       *v = 0.72265625f;  return true;
    }
    return false;
}

// 0x00ea958 (0x618 bytes)
/* place the map icons of level (and Ratchet's marker if showHero and he is there) */
void UpdateMissionDisplay(int level, bool showHero)
{
    MapIcon *e;
    int i;

    g_MapIcons = level <= 18 && Byte(&VisitedPlanets, level) ? g_MapIconTables[level] : 0;

    if (*(int *)&g_heroPosition.z != 0 && Level == level && showHero) {
        float u, v;
        Map_WorldToMapCoords(g_heroPosition.x, g_heroPosition.y, &u, &v, g_MapAlt ? level + 100 : level);
        g_MapHeroU[level] = (int)(u * MAP_FIXED) << 16;
        g_MapHeroV[level] = (int)(v * MAP_FIXED) << 16;
    } else {
        g_MapHeroU[level] = NO_HERO_MARKER;
        g_MapHeroV[level] = NO_HERO_MARKER;
    }

    if (!g_MapIcons) return;
    for (e = g_MapIcons; !(e->flags & MAPICON_END); e++) {
        if (FixedSpot(e->target, &e->u, &e->v)) continue;
        if (Level == level) {
            if (g_MissionMobys[e->target]) {
                MobyInstance *m = g_MissionMobys[e->target];
                Map_WorldToMapCoords(m->pos.x, m->pos.y, &e->u, &e->v, level);
                e->rot = g_MissionMobys[e->target]->rotation.z;
            }
        } else {
            MissionTarget *t = &g_MissionTargets[e->target];
            Map_WorldToMapCoords(t->x, t->y, &e->u, &e->v, level);
            e->rot = g_MissionTargets[e->target].rot;
        }
    }

    for (i = 0; !(g_MapIcons[i].flags & MAPICON_END); i++) {
        e = &g_MapIcons[i];
        u16 flags = e->flags;
        e->flags = flags & ~MAPICON_HAS_LABEL;
        e->visible = e->mission == -1 || g_LevelMissions[e->mission].status == MISSION_OPEN;
        if ((flags & MAPICON_NEEDS_TARGET) && !(g_MissionTargets[e->target].state & 1)) e->visible = 0;
        if (e->label == 0) continue;

        /* fit the label: narrow the box by 4 until the text needs another line */
        FontWindow win;
        char text[128];
        e->flags = flags | MAPICON_HAS_LABEL;
        Map_GetIconLabel(i, text);
        win.win_top = 0;
        win.win_bot = e->labelH;
        win.win_left = 0;
        win.win_right = e->labelW;
        win.text_x = 4;
        win.text_y = 4;
        win.max_width = 0;
        win.max_height = 0;
        win.line_spacing = 15;
        win.flags = 4;                          /* measure only */
        win.sub_pixel_x = 0;
        win.sub_pixel_y = 0;
        FontPrintOpt(1.0f, &win, 0x80ffa888, text, -1);
        short height = win.max_height;
        e->labelH = height + 8;
        do {
            win.win_right -= 4;
            FontPrintOpt(1.0f, &win, 0x80ffa888, text, -1);
        } while (win.max_height == height);
        e->labelW = win.win_right + 4;
    }
}

// 0x00eaf70 (0x38 bytes)
int MissionCond_eaf70(void)
{
    return g_MissionTargets[24].state != 0 && g_MiscLevelFlags.field24_0x18 != 0;
}

// 0x00eafa8 (0x44 bytes)
int MissionCond_eafa8(void)
{
    return g_MissionTargets[47].state != 0 && g_MiscLevelFlags.field32_0x20 != 0 &&
           g_MiscLevelFlags.field33_0x21 != 0;
}

// 0x00eafec (0x30 bytes)
int MissionCond_eafec(void)
{
    return g_MissionTargets[64].state != 0 && g_MissionTargets[63].state != 0;
}

// 0x00eb01c (0x38 bytes)
int MissionCond_eb01c(void)
{
    return g_MissionTargets[66].state != 0 && g_MiscLevelFlags.field85_0x55 != 0;
}

// 0x00eb054 (0x38 bytes)
int MissionCond_eb054(void)
{
    return g_MissionTargets[70].state != 0 && g_MiscLevelFlags.field97_0x61 != 0;
}

// 0x00eb08c (0x38 bytes)
int MissionCond_eb08c(void)
{
    return g_MissionTargets[87].state != 0 && CHAR_ARRAY_0096c165[0x15] != 0;
}

// 0x00eb0c4 (0x30 bytes)
int CheckIfMapOMaticAndHologuiseUnlocked(void)
{
    return UnlockableItems.mapOMatic && UnlockableItems.hologuise;
}

// 0x00eb0f4 (0x24 bytes)
bool IsItemUnlocked(int item)
{
    return Byte(&UnlockableItems, item);
}

// 0x00eb118 (0x5c bytes)
/* step functions return the step index */
int MissionCond_eb118(void)
{
    if (g_MissionTargets[24].state == 0 && g_MissionTargets[20].state != 0) return 1;
    if (g_MissionTargets[24].state != 0 && UnlockableItems.heliPack && g_MissionTargets[22].state == 0) return 2;
    return 0;
}

// 0x00eb174 (0x40 bytes)
int MissionCond_eb174(void)
{
    if (g_MissionTargets[47].state == 0) return 0;
    return g_MiscLevelFlags.field32_0x20 == 0 ? 1 : 2;
}

// 0x00eb1b4 (0x38 bytes)
int MissionCond_eb1b4(void)
{
    return g_MiscLevelFlags.field97_0x61 != 0 && g_SeenPlanets.Gemlik != 0;
}

// 0x00eb1ec (0x40 bytes)
int MissionCond_eb1ec(void)
{
    if (UnlockableItems.morphORay) return 2;
    return g_MissionTargets[87].state != 0;
}

// 0x00eb22c (0x24 bytes)
bool CheckIfHologuiseUnlocked(void)
{
    return UnlockableItems.hologuise;
}

// 0x00eb250 (0x38 bytes)
int GetKaleboItemsUnlockStatus(void)
{
    if (UnlockableItems.hologuise) return 2;
    return UnlockableItems.mapOMatic ? 1 : 0;
}
