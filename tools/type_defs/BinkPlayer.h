/* Idol's Bink movie player (0x60 bytes; the singleton is g_pBinkPlayer, built in place at
   0x927078 by the static constructors) */
typedef struct BinkPlayer {
    void *vtable;            /* 0x00 */
    u8 _pad04[4];
    void *bink;              /* 0x08 */
    u8 _pad0c[4];
    int state;               /* 0x10  BinkPlayer_GetState; > 1 once frames are coming */
    u8 _pad14[0x48];
    int unk5c;               /* 0x5c  -1: nothing to stop */
} BinkPlayer;
typedef char BinkPlayer_size_check[sizeof(BinkPlayer) == 0x60 ? 1 : -1];
