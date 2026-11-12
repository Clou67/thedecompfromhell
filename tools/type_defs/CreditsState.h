/* the header of one credits image (credits[N].ps3); the first word is the image's texture data,
   relocated by the address its .vram was loaded to */
typedef struct CreditsImage {
    u32 texData;             /* 0x00 */
    u32 unk04[8];            /* 0x04 */
} CreditsImage;

/* the credits mode (g_gameMode GAME_MODE_PUZZLE), 0x58 bytes at 0xa15c1c */
typedef struct CreditsState {
    s16 state;               /* 0x00  0 scrolling, 1 loading the next image */
    s16 image;               /* 0x02  the image scrolling, an index into g_CreditsImageLength */
    s16 loadTimer;           /* 0x04  frames in state 1 */
    s16 frame;               /* 0x06  scroll position, in frames */
    u32 vram[2];             /* 0x08  where the two .vram halves load */
    CreditsImage images[2];  /* 0x10  the image on screen, then the one loaded next */
} CreditsState;
