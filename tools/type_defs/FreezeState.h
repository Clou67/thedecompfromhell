/* the in-game prompt ("freeze" mode: quit / continue / reconnect ...), g_Freeze @ 0x963670 */
typedef struct FreezeState {
    int dialogType;          /* 0x00  which prompt (DisplayPrompt's first argument) */
    int timer;               /* 0x04  frames */
    char *options[3];        /* 0x08  option texts */
    gameMode_t prevGameMode; /* 0x14  mode to return to */
    int arg;                 /* 0x18 */
    int state;               /* 0x1c */
    int openAnim;            /* 0x20 */
    int openAnim2;           /* 0x24 */
    int unk28;               /* 0x28 */
    int delay;               /* 0x2c  frames */
    int option;              /* 0x30  initially selected option */
} FreezeState;
typedef char FreezeState_size_check[sizeof(FreezeState) == 0x34 ? 1 : -1];
