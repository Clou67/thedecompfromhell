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
