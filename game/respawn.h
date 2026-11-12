#pragma once
// game/respawn.h
#include "types.h"
#include "game/path.h"

// ---- types
/* one saved moby variable: a few bytes of a moby (or of its pVar block) restored on respawn */
typedef struct MobyVarEntry {
    int offset;              /* 0x00  from the moby, or from moby->pVar */
    u8 data[4];              /* 0x04 */
    u16 size;                /* 0x08  bytes used in data */
    short isMoby;            /* 0x0a  1: offset is into the moby itself, else into pVar */
    short uid;               /* 0x0c */
    short oClass;            /* 0x0e */
} MobyVarEntry;
typedef char MobyVarEntry_size_check[sizeof(MobyVarEntry) == 0x10 ? 1 : -1];

typedef struct MobyVarList {
    int count;               /* 0x000 */
    MobyVarEntry entries[64];/* 0x004 */
} MobyVarList;
typedef char MobyVarList_size_check[sizeof(MobyVarList) == 0x404 ? 1 : -1];

/* everything a checkpoint restores. Two copies: the live one (@0xa53510) collects changes as
   you play, SetSpawnPoint commits it to the saved one (@0xa54170), RestoreCheckpoint copies back */
typedef struct CheckpointData {
    int set;                 /* 0x000 */
    u8 _pad004[0xc];
    Spawnpoint spawn;        /* 0x010 */
    MobyVarList vars;        /* 0x050 */
    u8 objState[0x800];      /* 0x454  per-object state; 0 = untouched */
    int musicTrack;          /* 0xc54 */
    u8 _padc58[8];
} CheckpointData;
typedef char CheckpointData_size_check[sizeof(CheckpointData) == 0xc60 ? 1 : -1];

/* the per-level navigation slot table @0xa0e11c (NAVG_AllocSlot) */
typedef struct NavSlot {
    short id;                /* 0x0  owner id + 1, 0 = free */
    short unk2;
} NavSlot;

// ---- globals
extern undefined4 DAT_00731734; /* 0x731734 */
extern undefined4 DAT_009637c4; /* 0x9637c4 */
extern undefined1 DAT_009637c8; /* 0x9637c8 */
extern undefined1 DAT_009637c9; /* 0x9637c9 */
extern undefined1 DAT_009637ca; /* 0x9637ca */
extern CheckpointData g_Checkpoint; /* 0xa54170 */ /* type set in global_types.tsv */
extern u32 g_CheckpointBits[64]; /* 0xa54dd0: objects changed since the level started, one bit each */ /* type set in global_types.tsv */
extern CheckpointData g_CheckpointLive; /* 0xa53510 */ /* type set in global_types.tsv */
extern NavSlot g_NavSlots[][64]; /* 0xa0e11c */ /* type set in global_types.tsv */
extern int g_RespawnCount; /* 0xa53504 */ /* type set in global_types.tsv */
extern int g_RespawnTicks; /* 0xa53508 */ /* type set in global_types.tsv */

// ---- functions
void SECTION_HEADER_RESPAWN____(void);
int Respawn_IncCounter(void);
int NAVG_AllocSlot(int group, int id);
void ClearCheckpointData(void);
void SetSpawnPoint(Vec4 *pos, Vec4 *rot);
MobyInstance *FindMobyByUID(int unused, int uid);
void RestoreMobyVarList(MobyVarList *list);
void RestoreSavedMobyVars(void);
void RestoreCheckpoint(void);
void SaveCheckpointMobyVar(void *data, int size, MobyInstance *moby, int isMoby, MobyVarList *list);
