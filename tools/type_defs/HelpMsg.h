/* one help message of the loaded language (g_HelpMsgs, from the locale file) */
struct HelpMsg {
    char *text;              /* 0x0 */
    int id;                  /* 0x4  StringId */
    int speech;              /* 0x8  voice line (track - 30000), -1 = none */
    int unk0c;               /* 0xc */
};
/* per help "flag" (DisplayHelp's second argument) @0xa1000c, 148 of them */
struct HelpFlag {
    u16 count;               /* 0x0  times shown; 0xffff = never show again */
    u16 lastShown;           /* 0x2  play time when last shown, (scaled frames) / 600 */
    u32 levels;              /* 0x4  bit per level it was shown on; bit 31: since the last death */
};
/* the help box state machine @0x720884 */
struct HelpState {
    int state;               /* 0x00  HelpBoxState */
    int timer;               /* 0x04  frames in this state */
    int boxHalfW;            /* 0x08  size of the open box */
    int boxHalfH;            /* 0x0c */
    int boxX;                /* 0x10  centre */
    int boxY;                /* 0x14 */
    int curHalfW;            /* 0x18  size as drawn this frame */
    int curHalfH;            /* 0x1c */
    int curIndex;            /* 0x20  into g_HelpMsgs, -1 = none */
    int curId;               /* 0x24  queued StringId, -1 = none */
    int curFlag;             /* 0x28 */
    int msgCount;            /* 0x2c  entries in g_HelpMsgs */
    int armed;               /* 0x30  help starts once the d-pad has been held for 2 s */
    int armTimer;            /* 0x34 */
    short suspended;         /* 0x38 */
    short resumed;           /* 0x3a */
    int resumeDelay;         /* 0x3c  frames before a suspended message comes back */
};
typedef char HelpState_size_check[sizeof(struct HelpState) == 0x40 ? 1 : -1];
