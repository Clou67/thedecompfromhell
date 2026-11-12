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
