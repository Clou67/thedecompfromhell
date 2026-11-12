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
