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
