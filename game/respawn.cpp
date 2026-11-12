// game/respawn.cpp -- checkpoints: what the game puts back when you die
// STATUS: CLEAN (checked against the asm; local names are mine)
// 10 functions, 0x151d48-0x15251c
//
// While you play, objects record state changes in g_CheckpointLive (a byte per object, plus small
// moby variables saved with SaveCheckpointMobyVar). SetSpawnPoint commits that to g_Checkpoint
// along with Ratchet's position; RestoreCheckpoint copies g_Checkpoint back over the live copy
// and puts the hero and the saved moby variables back.
#include "game/respawn.h"
#include "game/camera.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/main.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/path.h"
#include "game/sound.h"
#include "game/update.h"
#include "idol/fastfunc.h"

#define NO_TRACK (-1)

// 0x0151d48 (0x14 bytes)
void SECTION_HEADER_RESPAWN____(void)
{
    DAT_00731734 = 0x10000;
}

// 0x0151d60 (0x38 bytes)
int Respawn_IncCounter(void)
{
    g_RespawnCount++;
    g_RespawnTicks = g_TotalFrameTicks + *g_pFrameTicks;
    return 0;
}

// 0x0151d98 (0x74 bytes)
/* claim a slot of a navigation group for id: the highest slot that is free or already id's;
   -1 if none */
int NAVG_AllocSlot(int group, int id)
{
    int slot = -1;

    if (id < 0) return -1;
    for (slot = 63; slot >= 0; slot--) {
        short owner = g_NavSlots[group][slot].id;
        if (owner == 0 || owner == id + 1) {
            g_NavSlots[group][slot].id = id + 1;
            return slot;
        }
    }
    return slot;
}

// 0x0151e0c (0x64 bytes)
void ClearCheckpointData(void)
{
    FastMemSet(&g_CheckpointLive, 0, sizeof(CheckpointData));
    FastMemSet(&g_Checkpoint, 0, sizeof(CheckpointData));
    FastMemSet(g_CheckpointBits, 0, sizeof(g_CheckpointBits));
}

// 0x0151e70 (0x210 bytes)
void SetSpawnPoint(Vec4 *pos, Vec4 *rot)
{
    MobyInstance *hero;
    int i;

    FastMemCopy32(&g_Checkpoint.vars, &g_CheckpointLive.vars, sizeof(MobyVarList));

    /* commit object states: 1 always, others only when the level's flag table marks them */
    for (i = 0; i < 0x7ff; i++) {
        u8 state = g_CheckpointLive.objState[i];
        if (state == 0) continue;
        if (state != 1 && (u8)g_LevelFlags[Level][state - 2] != 0xff) continue;
        u32 bit = 1u << (i & 31);
        g_Checkpoint.objState[i] = state;
        g_CheckpointBits[i >> 5] |= bit;
        g_LevelObjBits[Level][i >> 5] |= bit;
    }

    hero = g_heroMobyPtr;
    g_Checkpoint.spawn.pos = *pos;
    g_Checkpoint.set = 1;
    g_Checkpoint.spawn.rot = *rot;
    g_Checkpoint.spawn.colorReadOnly = *(ABGR *)&hero->color;
    g_Checkpoint.spawn.light = *(ABGR *)&hero->light;
    g_Checkpoint.spawn.heroType = g_heroType;
    g_Checkpoint.spawn.colorManipulator = hero->colorManipulator;
    g_Checkpoint.spawn.field12_0x3c = (short)DAT_0096bfac;
    g_Checkpoint.spawn.field5_0x2c = DAT_009637c4;
    g_Checkpoint.spawn.field6_0x30 = DAT_009637c8;
    g_Checkpoint.spawn.field7_0x31 = DAT_009637c9;
    g_Checkpoint.spawn.field8_0x32 = DAT_009637ca;
    g_Checkpoint.spawn.heroMobyPtr = hero;
    g_Checkpoint.musicTrack = (signed char)g_PendingTrack == NO_TRACK ? g_MusicPlaying.track
                                                                      : (signed char)g_PendingTrack;
}

// 0x0152080 (0x48 bytes)
MobyInstance *FindMobyByUID(int unused, int uid)
{
    for (MobyInstance *m = g_MobyInstance; m != MobyInstancePermEnd; m++)
        if ((short)m->uid == uid) return m;
    return 0;
}

// 0x01520c8 (0xe0 bytes)
void RestoreMobyVarList(MobyVarList *list)
{
    for (int i = 0; i < list->count; i++) {
        MobyVarEntry *e = &list->entries[i];
        MobyInstance *m;
        for (m = g_MobyInstance; m != MobyInstancePermEnd; m++)
            if ((short)m->uid == e->uid) break;
        if (m == MobyInstancePermEnd || m == 0) continue;
        u8 *base = e->isMoby == 1 ? (u8 *)m : (u8 *)m->pVar;
        FastMemCopy32(base + e->offset, e->data, e->size);
    }
}

// 0x01521a8 (0x28 bytes)
void RestoreSavedMobyVars(void)
{
    RestoreMobyVarList(&g_Checkpoint.vars);
}

// 0x01521d0 (0x208 bytes)
void RestoreCheckpoint(void)
{
    MobyInstance *hero;

    if (!g_Checkpoint.set) {
        FastMemSet(&g_CheckpointLive, 0, sizeof(CheckpointData));
        return;
    }
    FastMemCopy32(&g_CheckpointLive, &g_Checkpoint, sizeof(CheckpointData));

    hero = g_heroMobyPtr;
    g_heroPosition = g_Checkpoint.spawn.pos;
    hero->color = *(uint *)&g_Checkpoint.spawn.colorReadOnly;
    hero->light = *(uint *)&g_Checkpoint.spawn.light;
    hero->colorManipulator = g_Checkpoint.spawn.colorManipulator;
    g_heroRotation = g_Checkpoint.spawn.rot;
    DAT_009637c4 = g_Checkpoint.spawn.field5_0x2c;
    DAT_009637c8 = g_Checkpoint.spawn.field6_0x30;
    DAT_009637c9 = g_Checkpoint.spawn.field7_0x31;
    DAT_009637ca = g_Checkpoint.spawn.field8_0x32;
    DAT_009637cb |= 7;
    g_MusicPlaying.track = (short)g_Checkpoint.musicTrack;

    /* playing as Clank or Giant Clank: switch back to that moby */
    int type = g_Checkpoint.spawn.heroType;
    if (type != 0 && type != 3) {
        MOBY_OCLASSES oClass;
        switch (type) {
        case 1: oClass = CLANK_0057; break;
        case 2: oClass = GIANT_CLANK; break;
        default: __builtin_trap();
        }
        for (MobyInstance *m = g_MobyInstance; m < MobyInstancePermEnd; m++) {
            if (m->oClass == oClass) {
                SetHeroType(type, g_Checkpoint.spawn.field12_0x3c, m);
                hero = g_heroMobyPtr;
                break;
            }
        }
    }
    UpdateMobyTransform(hero);
    FastEulerToMtx((float *)&g_heroMobyPtr->transform, (float *)&g_heroRotation);
    Camera_resetToFollow();
    RestoreMobyVarList(&g_Checkpoint.vars);
}

// 0x01523d8 (0x144 bytes)
/* remember size bytes at data (inside moby, or its pVar block if !isMoby) so a respawn puts
   them back; updates the entry for the same variable if there is one */
void SaveCheckpointMobyVar(void *data, int size, MobyInstance *moby, int isMoby, MobyVarList *list)
{
    short uid = moby->uid;
    short oClass = moby->oClass;
    u8 *base = isMoby == 1 ? (u8 *)moby : (u8 *)moby->pVar;
    int offset = (short)((u8 *)data - base);

    for (int i = 0; i < list->count; i++) {
        MobyVarEntry *e = &list->entries[i];
        if (e->offset == offset && e->size == size && e->uid == uid && e->oClass == oClass) {
            /* the binary keeps the entry's isMoby in the same register as the argument, so a
               match with isMoby 0 changes what a new entry stores */
            isMoby = e->isMoby;
            if (isMoby != 0) {
                FastMemCopy32(e->data, data, size);
                return;
            }
        }
    }
    MobyVarEntry *e = &list->entries[list->count++];
    e->offset = offset;
    FastMemCopy32(e->data, data, size);
    e->size = size;
    e->isMoby = isMoby;
    e->uid = uid;
    e->oClass = oClass;
}
