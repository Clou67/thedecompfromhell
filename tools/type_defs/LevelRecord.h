/* per-level records, g_LevelRecords[] @ 0xa0fd24, 8 bytes each (updated in startLevel's setup and loop) */
typedef struct LevelRecord {
    u16 visits;          /* +0  times entered, stops at 0xffff */
    u16 playTime;        /* +2  max of (game frames * animationSpeed) / 600, i.e. 10 s units at 60 fps */
    u32 flags;           /* +4  bit `level` and bit 31 set when the level is entered */
} LevelRecord;
typedef char LevelRecord_size_check[sizeof(LevelRecord) == 8 ? 1 : -1];
