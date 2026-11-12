/* header of a .pif texture file (DL: PifHeader, same layout); the clut, then the mips follow */
struct PifHeader {
    int pifID;               /* 0x00 */
    int fileSize;            /* 0x04 */
    int uSize;               /* 0x08 */
    int vSize;               /* 0x0c */
    int texFormat;           /* 0x10  PIF_FMT_* */
    int clutFormat;          /* 0x14  PIF_FMT_32: 32-bit clut entries, else 16-bit */
    int clutOrder;           /* 0x18 */
    int mipLevels;           /* 0x1c */
};

/* where the parts of a pif are and where they go in GS memory (DL: PifParser, same layout) */
struct PifParser {
    void *pClut;             /* 0x00 */
    void *pTex[4];           /* 0x04  per mip */
    int cSize;               /* 0x14  bytes */
    int tSize[4];            /* 0x18 */
    int cPos;                /* 0x28  GS block address (bytes >> 8) */
    int tPos[4];             /* 0x2c */
    int tbw[4];              /* 0x3c  buffer width in 64-pixel units */
    int uLog;                /* 0x4c */
    int vLog;                /* 0x50 */
};
typedef char PifParser_size_check[sizeof(struct PifParser) == 0x54 ? 1 : -1];

/* a texture registered with GsTex_Register (g_GsTex, @0x9313a0) */
struct GsTex {
    struct PifParser pp;     /* 0x00 */
    int uSize;               /* 0x54 */
    int vSize;               /* 0x58 */
    int texFormat;           /* 0x5c */
    int clutFormat;          /* 0x60 */
    int mipLevels;           /* 0x64 */
    u64 tex0;                /* 0x68  GS registers, 0 until uploaded */
    u64 tex1;                /* 0x70 */
    u64 miptbp1;             /* 0x78 */
};
typedef char GsTex_size_check[sizeof(struct GsTex) == 0x80 ? 1 : -1];
