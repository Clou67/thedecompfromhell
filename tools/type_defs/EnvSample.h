/* a level's environment sample point (the nearest one within 8 units lights a moby) */
typedef struct EnvSample {
    float x, y, z;           /* 0x00 */
    u32 unk0c;               /* 0x0c */
    int red;                 /* 0x10 */
    int green;               /* 0x14 */
    int blue;                /* 0x18 */
    int light;               /* 0x1c  copied to MobyInstance.light */
    u32 fogColor;            /* 0x20  guess: copied to 0x9637c4 with the next three bytes */
    u8 fog0;                 /* 0x24 */
    u8 fog1;                 /* 0x25 */
    u8 fog2;                 /* 0x26 */
    u8 setsFog;              /* 0x27 */
    int musicTrack;          /* 0x28  -1 none */
    u32 unk2c;               /* 0x2c */
} EnvSample;
typedef char EnvSample_size_check[sizeof(EnvSample) == 0x30 ? 1 : -1];
