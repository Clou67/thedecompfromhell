/* one help message of the loaded language (HelpMsgs, from the locale file). DL has the same
   struct with short fields; RaC1 uses ints */
struct HelpMsg {
    char *text;              /* 0x0 */
    int id;                  /* 0x4  StringId */
    int vag;                 /* 0x8  voice line (track - 30000), -1 = none */
    int unk0c;               /* 0xc */
};
/* per help "flag" (the queue functions' second argument) @0xa1000c, 148 of them. DL's HelpDatum
   is 0xc bytes (timesUsed, counter, lastTime, level_die); RaC1's has no counter */
struct HelpDatum {
    u16 timesUsed;           /* 0x0  0xffff = never show again */
    u16 lastTime;            /* 0x2  play time when last shown, (scaled frames) / 600 */
    u32 level_die;           /* 0x4  bit per level it was shown on; bit 31: since the last death */
};
/* the help box state machine @0x720884. DL's HelpDef has the same role; names follow it where the
   field matches */
struct HelpDef {
    int state;               /* 0x00  HelpBoxState */
    int counter;             /* 0x04  frames in this state */
    int boxHalfW;            /* 0x08  size of the open box */
    int boxHalfH;            /* 0x0c */
    int boxX;                /* 0x10  centre */
    int boxY;                /* 0x14 */
    int curHalfW;            /* 0x18  size as drawn this frame */
    int curHalfH;            /* 0x1c */
    int message_index;       /* 0x20  into g_HelpMsgs, -1 = none */
    int message_id;          /* 0x24  queued StringId, -1 = none */
    int message_flg;         /* 0x28 */
    int num_message;         /* 0x2c  entries in HelpMsgs */
    int ready;               /* 0x30  help starts once the d-pad has been held for 2 s */
    int ready_timer;         /* 0x34 */
    short suspend;           /* 0x38 */
    short resumed;           /* 0x3a */
    int suspend_timer;       /* 0x3c  frames before a suspended message comes back */
};
typedef char HelpDef_size_check[sizeof(struct HelpDef) == 0x40 ? 1 : -1];
