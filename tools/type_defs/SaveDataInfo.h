/* Idol's save system state (idol::GetSaveData, 0x478 bytes, @*GameSavePtr). Only the fields the
   game code uses have real names; field0_0x0 and field3_0xc keep Ghidra's names because those
   names are shared with other structs and the raw idol::GetSaveData still uses them. */
typedef struct SaveDataInfo {
    undefined **field0_0x0;  /* 0x000  vtable */
    int loadResult;          /* 0x004  copied from result before the load callback */
    int callbackArg;         /* 0x008 */
    void *field3_0xc;        /* 0x00c  save callback (a function descriptor) */
    void *onLoad;            /* 0x010  load callback */
    u32 unk14;               /* 0x014 */
    u32 unk18;               /* 0x018 */
    int level;               /* 0x01c  shown in the save list */
    u8 unk20[0x10];          /* 0x020 */
    char title[0x400];       /* 0x030  the description (memcard_ConstructSaveString) */
    u8 unk430[0x20];         /* 0x430 */
    int result;              /* 0x450 */
    u32 unk454;              /* 0x454 */
    u32 unk458;              /* 0x458 */
    u8 unk45c;               /* 0x45c */
    u8 unk45d;               /* 0x45d */
    u8 _pad45e[2];
    u32 flags;               /* 0x460  bit 0: a game has been loaded */
    u8 _pad464[4];
    int state;               /* 0x468  SaveSysState */
    int dataSize;            /* 0x46c */
    u8 _pad470[4];
    char *dialogTitle;       /* 0x474 */
} SaveDataInfo;
typedef char SaveDataInfo_size_check[sizeof(SaveDataInfo) == 0x478 ? 1 : -1];
