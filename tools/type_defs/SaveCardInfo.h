/* one save in the load/save list */
typedef struct SaveFileInfo {
    int level;               /* 0x00  -1: empty */
    int bolts;               /* 0x04 */
    int challenge;           /* 0x08  challenge mode number */
    int frames;              /* 0x0c  play time */
    u32 unk10;               /* 0x10 */
    u32 unk14;               /* 0x14 */
    int valid;               /* 0x18 */
} SaveFileInfo;
typedef char SaveFileInfo_size_check[sizeof(SaveFileInfo) == 0x1c ? 1 : -1];

/* the saves found per card (stride 0xc0, @0x71fa44). Inferred from memcard_RestoreInfo /
   memcard_RestoreData; the 5 files and the rest of the layout are a guess. */
typedef struct SaveCardInfo {
    SaveFileInfo files[5];   /* 0x00 */
    u8 _pad8c[4];
    int status;              /* 0x90  freeze.cpp sets 3; WARNING / NOCARD reset 2 to 0 */
    int loadErrors;          /* 0x94  set by memcard_RestoreData */
    u8 _pad98[0x28];
} SaveCardInfo;
typedef char SaveCardInfo_size_check[sizeof(SaveCardInfo) == 0xc0 ? 1 : -1];
