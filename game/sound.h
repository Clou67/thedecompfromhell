#pragma once
// game/sound.h
#include "types.h"
#include "game/camera.h"

// ---- types
/* a sound channel (DL's _sound_data), 0x70 bytes; 30 of them in g_SoundChannels */
struct SoundData {
    int handle;                    /* 0x00  Scream handle; 0 none, -1 while a command is pending */
    char state;                    /* 0x04  SOUND_STATE_* */
    char flags;                    /* 0x05  SOUND_FLAG_* */
    char pad06[2];
    struct SoundDef *pSoundDef;    /* 0x08 */
    short bank_id;                 /* 0x0c */
    short sound_index;             /* 0x0e */
    int vol;                       /* 0x10  volume modifier, 0x400 = full */
    int pitch;                     /* 0x14 */
    struct MobyInstance *pMoby;    /* 0x18  the moby the sound follows */
    struct SoundInstance *pSoundInstance; /* 0x1c  the ambient sound that started it */
    float pos[4];                  /* 0x20 */
    float offset[4];               /* 0x30  local offset from pMoby (SOUND_FLAG_OFFSET) */
    int occlpos;                   /* 0x40  next slot of occl (DL name) */
    char occl[36];                 /* 0x44  blocked line-of-sight samples (DL name) */
    char pad68[8];
};
typedef char SoundData_size_check[sizeof(struct SoundData) == 0x70 ? 1 : -1];

struct soundGlobals {
    float sfxVolume;
    float musicVolume;
    float dialogVolume;
    float ambientVolume;
    float shellVolume;
    float mpegVolume;
};

struct SoundVTable {
    uint idx;
    void *update;
};

/* a sound definition (DL's SoundDef, 0x20 bytes) */
typedef struct SoundDef {
    float minRange;          /* 0x00 */
    float maxRange;          /* 0x04 */
    int minVolume;           /* 0x08 */
    int maxVolume;           /* 0x0c */
    int minPitch;            /* 0x10 */
    int maxPitch;            /* 0x14 */
    char loop;               /* 0x18 */
    char flags;              /* 0x19 */
    short index;             /* 0x1a */
    int bank_index;          /* 0x1c */
} SoundDef;
typedef char SoundDef_size_check[sizeof(SoundDef) == 0x20 ? 1 : -1];

/* an ambient sound placed in the level (DL's SoundInstance), 0x90 bytes; g_pSoundInstances */
typedef struct SoundInstance {
    short oClass;                  /* 0x00 */
    short mClass;                  /* 0x02  index into g_SoundVTable */
    void (*pUpdate)(struct SoundInstance *); /* 0x04 */
    void *pVar;                    /* 0x08 */
    float range;                   /* 0x0c */
    struct Cuboid cuboid;          /* 0x10  cuboid.pos is the sound's position */
} SoundInstance;
typedef char SoundInstance_size_check[sizeof(SoundInstance) == 0x90 ? 1 : -1];

// ---- globals
extern SoundVTable g_SoundVTable[7]; /* 0x92d3fc */
extern int g_CoreSoundCnt; /* 0x71fbd0 */
extern u8 g_FootstepSoundBase[]; /* 0x731be8: per level, first footstep sound after the core sounds */ /* type set in global_types.tsv */
extern u8 g_ReverbDelay; /* 0x9637c9 */ /* type set in global_types.tsv */
extern int g_ReverbDepth; /* 0x9637c4 */ /* type set in global_types.tsv */
extern u8 g_ReverbDirty; /* 0x9637cb: 1 type, 2 delay/feedback, 4 depth, 8 off */ /* type set in global_types.tsv */
extern u8 g_ReverbFeedback; /* 0x9637ca */ /* type set in global_types.tsv */
extern SoundInstance *g_ReverbOwner; /* 0x9637c0: the ambient sound that set the reverb */ /* type set in global_types.tsv */
extern u8 g_ReverbType; /* 0x9637c8 */ /* type set in global_types.tsv */
extern Vec4 g_SoundCamHistory[4]; /* 0x963760: the camera's last 4 positions, for its velocity */ /* type set in global_types.tsv */
extern int g_SoundCamHistoryIdx; /* 0x9637a0 */ /* type set in global_types.tsv */
extern MobyInstance *g_SoundCamOfsIgnore; /* 0x9637cc: moby the occlusion probes ignore, cleared each frame */ /* type set in global_types.tsv */
extern SoundData g_SoundChannels[30]; /* 0x9637d0 */
extern int g_SoundCnt; /* 0x9644f0 */ /* type set in global_types.tsv */
extern int g_SoundLoadBusy; /* 0x9637a4 */
extern u32 g_SoundProbeTime; /* 0x9644f8: worldUpdateTime g_SoundProbes were made at */ /* type set in global_types.tsv */
extern Vec4 g_SoundProbes[6]; /* 0x964500: points around the camera that new sounds are tested from */ /* type set in global_types.tsv */
extern int g_TotalSoundDefCnt; /* 0xa10730 */
extern SoundDef *g_pSoundDefs; /* 0xa10734 */ /* type set in global_types.tsv */
extern SoundInstance *g_pSoundInstances; /* 0x9644f4 */ /* type set in global_types.tsv */
extern soundGlobals g_soundGlobals; /* 0x9637a8 */

// ---- functions
void sound_CamOfs(float *camOfsPos);
int sound_Occl(SoundData *channel, float *from);
int sound_GetFade(float dist, float minRange, float maxRange, SoundDef *def);
int sound_GetFade_channel(SoundData *channel, float *soundPos);
int sound_GetPan(SoundData *channel, float *pos, Mtx4 *viewMtx);
void sound_Init(void);
int sound_Update(void);
int IsMobyPlayingSound(MobyInstance *pMoby, int handle);
int sound_LoadLevelWadDebug(int sectors);
void sound_SetDefsBank(SoundDef *defs, int bank, int count);
void sound_Kill(int handle);
int sound_Play(SoundDef *def, int flags, MobyInstance *pMoby, float *pos, int vol);
int PlayMobySound(int sound, int flags, MobyInstance *pMoby);
int sound_MobyPlay_oClass(int sound, int flags, MobyInstance *pMoby, int oClass);
int sound_CorePlay(int sound, int flags, MobyInstance *pMoby);
int sound_LevelPlay(int sound, int flags, MobyInstance *pMoby);
int sound_AmbientPlay(int sound, int flags, SoundInstance *pAmbient, int vol);
int sound_FootstepPlay(int ground_type, int right_foot, int magneboots, int flags, MobyInstance *pMoby);
int sound_SetOffset(int handle, float *offset);
int sound_AddOffset(int handle, float *offset);
int sound_ClearOffset(int handle);
int sound_SetVol(int handle, int vol);
int sound_SetPitch(int handle, int pitch);
void sound_SetupAmbientFunctions(SoundInstance *sound);
void sound_UpdateAmbient(void);
void sound_SetReverb(SoundInstance *owner, int type, int depth, int delay, int feedback);
void sound_StopAllSounds(void);
void sound_BasicCB(int ret_val, int *data);
void sound_PlayCB(int ret_val, SoundData *data);
void sound_FreshenCB(int ret_val, SoundData *data);
