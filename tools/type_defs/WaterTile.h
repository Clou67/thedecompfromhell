/* one 16x16 tile of a water surface. The tiles of a level are an array; the links are indices of
   the neighbouring tiles (0xff = none) whose border heights this tile writes (WaterTile_StepWave).
   Size and the buf offset are from the asm (stride 0x11a0, buf at 0x50). */
struct WaterTile {
    struct Vec3 tilePos;         /* 0x00 */
    byte tileLinkTop;            /* 0x0c */
    byte tileLinkLeft;           /* 0x0d */
    byte tileLinkBottom;         /* 0x0e */
    byte tileLinkRight;          /* 0x0f */
    byte tileLinkCorners[4];     /* 0x10  up-left, up-right, down-left, down-right */
    uint baseTex;                /* 0x14 */
    uint ovlTex;                 /* 0x18 */
    u8 baseAlpha;                /* 0x1c */
    u8 ovlAlpha;                 /* 0x1d */
    u16 mask;                    /* 0x1e */
    struct Vec2 scroll;          /* 0x20 */
    struct Vec2 scrollRate;      /* 0x28 */
    struct Vec2 rotAngle;        /* 0x30 */
    struct Vec2 rotRate;         /* 0x38 */
    float wig_size;              /* 0x40 */
    uint32_t flags;              /* 0x44 */
    u8 unk48[8];                 /* 0x48 */
    struct WaterTileBuf buf[3];  /* 0x50  height buffers (wave steps cycle through them) */
    u8 unk1190[0x10];            /* 0x1190 */
};
typedef char WaterTile_size_check[sizeof(struct WaterTile) == 0x11a0 ? 1 : -1];
