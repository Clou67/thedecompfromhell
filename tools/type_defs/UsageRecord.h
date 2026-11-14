/* the 12-byte usage records in CHAR_ARRAY_00a0feec (0x120 bytes, saved with the game);
   record 6 is the map's */
typedef struct UsageRecord {
    u16 uses;          /* 0x00  saturates at 0xffff */
    u16 lastUse;       /* 0x02  the play time of the last use, in units of 600 frames */
    u32 levels;        /* 0x04  bit per level it was used on; bit 31 = used at all */
    u32 unk08;         /* 0x08 */
} UsageRecord;
