/* a water sheet: an animated mesh of water (falls, streams); BuildVerts makes its vertices */
struct WaterSheetSrcVert {
    float x, y;              /* 0x0 */
    float z0, z1;            /* 0x8  heights blended by zBlend */
};
struct WaterSheet {
    struct WaterSheetSrcVert *srcVerts; /* 0x00 */
    struct Vec2 *srcUVs;     /* 0x04 */
    void *cullData;          /* 0x08 */
    int32_t vertexCount;     /* 0x0c */
    float scrollSpeedLayer0; /* 0x10 */
    float scrollSpeedLayer1; /* 0x14 */
    float waveAmp;           /* 0x18  UV wobble */
    int32_t frameRate;       /* 0x1c */
    float velocityU0;        /* 0x20 */
    float velocityV0;
    float velocityU1;
    float velocityV1;
    uint32_t color;          /* 0x30  0x00BBGGRR */
    int32_t textureId0;      /* 0x34 */
    int32_t textureId1;
    uint8_t depthBias0;      /* 0x3c */
    uint8_t depthBias1;
    uint8_t unknown3e[2];
    float offsetU0;          /* 0x40 */
    float offsetV0;
    float offsetU1;
    float offsetV1;
    uint32_t frameCounter;   /* 0x50 */
    uint8_t unknown54[8];    /* 0x54 */
    float zBlend;            /* 0x5c */
};
typedef char WaterSheet_size_check[sizeof(struct WaterSheet) == 0x60 ? 1 : -1];
