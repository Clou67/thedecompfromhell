#pragma once
// game/memcard.h
#include "types.h"

// ---- types
struct mc_data { /* DL struct mc_data (memcard.cpp): save chunk descriptor, list terminated by addr==0 */
    void *addr;
    int size;
    int iff;
    int mark;
};

/* an entry of the pause menu's help list (@0x72b330, 151 of them, 0 msg ends the list) */
typedef struct HelpMenuEntry {
    u16 msg;                 /* 0x00  StringId */
    u16 enabled;             /* 0x02 */
    u8 _pad04[8];
} HelpMenuEntry;
typedef char HelpMenuEntry_size_check[sizeof(HelpMenuEntry) == 0xc ? 1 : -1];

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
    u8 _pad8c[8];
    int loadErrors;          /* 0x94  set by memcard_RestoreData */
    u8 _pad98[0x28];
} SaveCardInfo;
typedef char SaveCardInfo_size_check[sizeof(SaveCardInfo) == 0xc0 ? 1 : -1];

// ---- globals
extern undefined4 DAT_0072666c; /* 0x72666c */
extern undefined4 DAT_00969ca4; /* 0x969ca4 */
extern undefined4 DAT_0096ca08; /* 0x96ca08 */
extern char *SaveDataPtr; /* 0xa10928: the save buffer; the save data is built 1MB in */ /* type set in global_types.tsv */
extern undefined1 g_FrontEnd; /* 0xa15f38 */
extern HelpMenuEntry g_HelpMenuList[151]; /* 0x72b330 (pause.cpp still uses DAT_0072b330) */ /* type set in global_types.tsv */
extern char g_LevelFlags2[20][16]; /* 0xa0cbc4: follows g_LevelFlags (moby585/605 still use DAT_00a0cbc4) */ /* type set in global_types.tsv */
extern char g_MapRevealMasks[20][0x8000]; /* 0x96ca34: per level map reveal masks (map.cpp/pause.cpp still use DAT_0096ca34) */ /* type set in global_types.tsv */
extern char g_McDir[21]; /* 0x71f970: "/BASCUS-97199RATCHET", the title id is patched in by memcard_GetName */ /* type set in global_types.tsv */
extern char g_McDirAll[23]; /* 0x71f985: ".../*" */ /* type set in global_types.tsv */
extern char g_McIconSys[30]; /* 0x71f99c: ".../icon.sys" */ /* type set in global_types.tsv */
extern char g_McMainFile[41]; /* 0x71f9da: ".../BASCUS-97199RATCHET" */ /* type set in global_types.tsv */
extern char g_McSaveFile[32]; /* 0x71fa03: ".../save%d.bin" */ /* type set in global_types.tsv */
extern char g_McStaticIco[32]; /* 0x71f9ba: ".../static.ico" */ /* type set in global_types.tsv */
extern SaveCardInfo g_SaveCards[]; /* 0x71fa44 (pause.cpp still uses the DAT_0071fa44.. names) */ /* type set in global_types.tsv */
extern u8 g_SaveMsgLocale; /* 0xa2088d: Locale_Load's buffer argument for SaveMsg_UTF8.dat */ /* type set in global_types.tsv */
extern int g_SaveRealLevel; /* 0x71faf4: Level while memcard_Save pretends to be on another */ /* type set in global_types.tsv */
extern int g_loaderr; /* 0xa20888 */
extern u8 g_memcardFatalError; /* 0xa23099: freeze mode shows the save error */ /* type set in global_types.tsv */
extern u8 g_memcardFatalShown; /* 0xa23098 */ /* type set in global_types.tsv */
extern int g_memcardGameSaved; /* 0x71fb20 */
extern u8 g_memcardHadBoltTrophy; /* 0xa2308d: the loaded save already had over 1,000,000 bolts */ /* type set in global_types.tsv */
extern u8 g_memcardHadMidasTrophy; /* 0xa2308e: the loaded save already had all 10 gold weapons */ /* type set in global_types.tsv */
extern char g_memcardPollDone; /* 0xa2088c */
extern int g_memcardRestoredBolts; /* 0xa23090 */
extern int g_memcardRestoredGoldWeapons; /* 0xa23094 */ /* type set in global_types.tsv */
extern int g_memcardSaveBusy; /* 0x111160c */
extern char g_memcardSaveString[256]; /* 0xa244a8 */
extern int g_memcardSaveSysState; /* 0x8fa644 */
extern int g_memcardStrBufIdx; /* 0xa244a0 */
extern char g_memcardStrBufs[5][1024]; /* 0xa230a0: rotating buffers for memcard_ConvertSaveMsgString */ /* type set in global_types.tsv */
extern int g_memcardWaitDialog; /* 0xa2309c */
extern mc_data mc_gamedata[]; /* 0x726690: the global save chunks (DL name) */ /* type set in global_types.tsv */
extern mc_data mc_leveldata[]; /* 0x7269a0: the per-level save chunks (DL name) */ /* type set in global_types.tsv */
extern const char *s_DigitalNames[]; /* 0x652b84 */ /* type set in global_types.tsv */

// ---- functions
void SECTION_HEADER_MEMCARD(void);
void memcard_GetName(char *buff);
int STUB_000e6c78(void);
int memcard_GetDataSize(mc_data *mcd);
int memcard_RestoreData(char *addr, int index, mc_data *mcd);
void memcard_RestoreGame(char *addr);
void memcard_SetupNewGameGlobals(void);
void memcard_ResetGame(void);
int memcard_GetSaveSysState(void);
void memcard_Update(void);
int STUB_000e7844(void);
int memcard_PrepData(char *addr, int index, mc_data *mcd);
void memcard_MakeWholeSave(char *addr);
int memcard_ReturnLang(void);
void memcard_InitSaveMsg(void);
int STUB_000e7b6c(char *addr);
void memcard_RestoreInfo(char *addr, int slot, int index);
char *memcard_GetSaveMsgString(int idx, int *len);
char *memcard_ConvertSaveMsgString(char *str, int *outLen);
char *memcard_FixupAccentChars(char *str);
int memcard_ConstructPlanetString(char *buf, int id);
char *memcard_ConstructSaveString(char *buf);
void memcard_SetSaveDialogStrings(void);
int memcard_IsSaveSystemIdle(void);
void memcard_PerformOperation(int mode);
int memcard_Save(int force, int level);
void memcard_print_TimeForPain(int buttonType, void *userData);
int memcard_RestoreSaveGame(int result, char *data);
int memcard_printGameSaved(int result);
int memcard_print_SavingGameCB_PS3(int result);
int memcard_print_LoadingCB_PS3(int result);
int memcard_PollSaveResult(void);
